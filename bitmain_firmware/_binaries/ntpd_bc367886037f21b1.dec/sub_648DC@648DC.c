int sub_648DC(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_6485C(a1, (unsigned __int8 *)a2, (int)varg_r2);
}
