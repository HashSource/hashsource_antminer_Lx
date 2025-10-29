char *sub_1F140(int a1, ...)
{
  _DWORD v2[2]; // [sp+4h] [bp-90h] BYREF
  char v3[122]; // [sp+Ch] [bp-88h] BYREF
  char v4[6]; // [sp+86h] [bp-Eh] BYREF
  va_list varg_r1; // [sp+A4h] [bp+10h] BYREF

  va_start(varg_r1, a1);
  if ( (unsigned int)sub_6B34C(v3, 128, a1, (char *)varg_r1) > 0x7F )
    strcpy(v4, "[...]");
  v2[0] = v3;
  v2[1] = strlen(v3);
  return sub_1EC64((char *)v2, 1, 0);
}
