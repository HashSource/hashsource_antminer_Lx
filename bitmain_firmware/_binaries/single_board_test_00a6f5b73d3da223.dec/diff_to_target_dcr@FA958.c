void *__fastcall diff_to_target_dcr(void *a1)
{
  double v1; // d0
  void *result; // r0
  double v3; // [sp+0h] [bp+0h]
  unsigned __int64 v5; // [sp+10h] [bp+10h]
  int i; // [sp+1Ch] [bp+1Ch]

  v3 = v1;
  for ( i = 6; i > 0 && v3 > 1.0; --i )
    v3 = v3 / 4294967300.0;
  v5 = (unsigned __int64)(4294901760.0 / v3);
  if ( !v5 && i == 6 )
    return memset(a1, 255, 0x20u);
  result = memset(a1, 0, 0x20u);
  *((_DWORD *)a1 + i) = v5;
  *((_DWORD *)a1 + i + 1) = HIDWORD(v5);
  return result;
}
