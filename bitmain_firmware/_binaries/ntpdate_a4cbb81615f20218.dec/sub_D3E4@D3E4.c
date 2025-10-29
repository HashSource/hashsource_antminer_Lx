struct tm *__fastcall sub_D3E4(int a1, int a2)
{
  __int64 v4; // [sp+0h] [bp-1Ch] BYREF
  __int64 v5; // [sp+8h] [bp-14h] BYREF

  sub_B17C((time_t)&v4, a1, 0);
  v5 = v4;
  return sub_CF68(&v5, a2);
}
