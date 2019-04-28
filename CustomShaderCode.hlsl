/** Raymarching Shader Custom Expression */

//ORIGINAL

float3 position = WorldPosition;

for (int i = 0; i < steps; i++) 
{
	float distance = SDFBox(position, BoxDimensions);

	if (distance < MinimumDistance)
		return float3(i / Steps, 0, 0);

	position += ViewDirection * distance;
}

return float3(1, 1, 1);

//Repetition

float3 position = WorldPosition;

for (int i = 0; i < Steps; i++)
{
	position = SDFRepetition(position, Spacing);

	float distance = SDFBox(position, BoxDimensions);

	if (distance < MinimumDistance)
		return float3(i / Steps, 0, 0);

	position += ViewDirection * distance;
}

return float3(1, 1, 1);

/** ==================================================================================================================================== */
/** ==================================================================================================================================== */
/** ==================================================================================================================================== */

//Signed Distance Geometry Functions

float SDFSphere(float3 position, float radius)
{
	return length(position) - radius;
}

float SDFBox(float3 position, float3 dimensions)
{
	return length(max(abs(position) - dimensions, 0.0f));
}

float SDFRoundedBox(float3 position, float3 dimensions, float radius)
{
	return length(max(abs(position) - dimensions, 0.0)) - radius;
}

float SDFHexPrism(float3 position, float2 dimensions)
{
	float3 q = abs(position);
	return max(q.z - dimensions.y, max((q.x*0.866025 + q.y*0.5), q.y) - dimensions.x);
}

float SDFTriangularPrism(float3 position, float2 dimensions) {
	float3 q = abs(position);
	return max(q.z - dimensions.y, max(q.x*0.866025 + position.y*0.5, -position.y) - dimensions.x*0.5);
}

float SDFCappedCylinder(float3 position, float2 dimensions)
{
	float2 d = abs(float2(length(position.xz), position.y)) - dimensions;
	return min(max(d.x, d.y), 0.0) + length(max(d, 0.0));
}

//Signed Distance Operations

float SDFUnion(float d1, float d2)
{
	return min(d1, d2);
}

float SDFSubtraction(float d1, float d2)
{
	return max(-d1, d2);
}

float SDFIntersection(float d1, float d2) {
	return max(d1, d2);
}

float3 SDFRepetition(float3 position, float3 spacing)
{
	return fmod(position + 0.5 * spacing, spacing) - 0.5 * spacing;
}