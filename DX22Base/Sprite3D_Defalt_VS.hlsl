struct VS_IN
{
    float3 pos : POSITION0;
    float2 uv : TEXCOORD0;
};
struct VS_OUT
{
    float4 pos : SV_POSITION;
    float2 uv : TEXCOORD0;
    float4 color : COLOR0;
    float4 wPos : POSITION;
};
cbuffer Matorix : register(b0) {
    float4x4 world;
    float4x4 view;
    float4x4 proj;
};
cbuffer Param : register(b1)
{
    float2 uvPos;
    float2 uvScale;
    float4 color;
};
VS_OUT main(VS_IN vin)
{
    VS_OUT vout;
    vout.pos = float4(vin.pos, 1.0f);
    vout.pos = mul(vout.pos, world);
    vout.wPos = vout.pos;
    vout.pos = mul(vout.pos, view);
    vout.pos = mul(vout.pos, proj);
    vout.uv = vin.uv;
    vout.uv *= uvScale;
    vout.uv += uvPos;
    vout.color = color;
    return vout;
}