__int64 __fastcall sub_1CD78(int a1)
{
  int *v2; // r0
  int v3; // r2
  int *v4; // r4
  int v5; // r6
  __int64 result; // r0

  v2 = _errno_location();
  v3 = a1;
  v4 = v2;
  v5 = *v2;
  result = sub_64A18(7, "ntpd not compiled for debugging (signal %d)", v3);
  *v4 = v5;
  return result;
}
