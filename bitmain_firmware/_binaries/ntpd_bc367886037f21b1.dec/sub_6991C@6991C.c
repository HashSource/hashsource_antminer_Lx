struct tm *__fastcall sub_6991C(int a1, int a2)
{
  __int64 v4; // [sp+0h] [bp-1Ch] BYREF
  __int64 v5; // [sp+8h] [bp-14h] BYREF

  sub_6545C((time_t)&v4, a1, 0);
  v5 = v4;
  return sub_694A0(&v5, a2);
}
