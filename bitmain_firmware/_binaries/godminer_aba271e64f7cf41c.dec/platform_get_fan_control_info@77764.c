int __fastcall platform_get_fan_control_info(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r1
  float v8; // r2
  float v9; // r3

  v1 = dword_161268;
  v2 = dword_16126C;
  v3 = dword_161270;
  *(_DWORD *)result = dword_161264;
  *(_DWORD *)(result + 4) = v1;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = v3;
  v4 = dword_161278;
  v5 = dword_16127C;
  v6 = dword_161280;
  *(_DWORD *)(result + 16) = dword_161274;
  *(_DWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v6;
  v7 = flt_161288;
  v8 = flt_16128C;
  v9 = flt_161290;
  *(_DWORD *)(result + 32) = dword_161284;
  *(float *)(result + 36) = v7;
  *(float *)(result + 40) = v8;
  *(float *)(result + 44) = v9;
  *(float *)(result + 48) = flt_161294;
  return result;
}
