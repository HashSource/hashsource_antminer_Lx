unsigned int __fastcall sub_6B0AC(int a1)
{
  float v1; // s0
  unsigned int result; // r0
  unsigned int i; // [sp+10h] [bp-14h]
  float v5; // [sp+14h] [bp-10h]
  int v6; // [sp+18h] [bp-Ch]
  int v7; // [sp+18h] [bp-Ch]
  unsigned int v8; // [sp+1Ch] [bp-8h]

  v8 = (unsigned int)(float)(v1 / 5.0);
  v6 = *(_DWORD *)(a1 + 2880);
  v5 = 0.0;
  get_miner_elapsed_time();
  result = v8;
  if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 2888) )
    v8 = *(_DWORD *)(a1 + 2888);
  for ( i = 0; v8 > i; ++i )
  {
    v7 = v6 + 719;
    result = -1240768329 * v7;
    v6 = v7 % 720;
    v5 = v5 + *(float *)(a1 + 4 * v6);
  }
  return result;
}
