void *__fastcall diff_to_target_ltc(void *a1)
{
  double v1; // d0
  double v2; // r0
  double v3; // r0
  double v4; // r0
  __uint64_t v5; // r0
  double v7; // [sp+0h] [bp-54h]
  _QWORD src[4]; // [sp+14h] [bp-40h] BYREF
  __uint64_t *v10; // [sp+34h] [bp-20h]
  unsigned __int64 v11; // [sp+38h] [bp-1Ch]
  double v12; // [sp+40h] [bp-14h]
  double v13; // [sp+48h] [bp-Ch]

  v7 = v1;
  if ( v1 <= 0.0 )
    v7 = 1.0;
  v13 = 2.69595353e67 * 65536.0 / v7;
  v12 = v13 / 6.27710174e57;
  v11 = (unsigned __int64)(v13 / 6.27710174e57);
  v10 = &src[3];
  src[3] = _uint64_identity(v11);
  LODWORD(v2) = sub_CCAD4(v11);
  v13 = v13 - v2 * 6.27710174e57;
  v12 = v13 / 3.40282367e38;
  v11 = (unsigned __int64)(v13 / 3.40282367e38);
  v10 = &src[2];
  src[2] = _uint64_identity(v11);
  LODWORD(v3) = sub_CCAD4(v11);
  v13 = v13 - v3 * 3.40282367e38;
  v12 = v13 / 1.84467441e19;
  v11 = (unsigned __int64)(v13 / 1.84467441e19);
  v10 = &src[1];
  src[1] = _uint64_identity(v11);
  LODWORD(v4) = sub_CCAD4(v11);
  v12 = v4 * 1.84467441e19;
  v13 = v13 - v4 * 1.84467441e19;
  v11 = (unsigned __int64)v13;
  v10 = src;
  v5 = _uint64_identity((unsigned __int64)v13);
  *v10 = v5;
  return memcpy(a1, src, 0x20u);
}
