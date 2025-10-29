void *__fastcall diff_to_target_ltc(void *a1)
{
  double v1; // d0
  double v2; // r0
  double v3; // r0
  double v4; // r0
  double v6; // [sp+0h] [bp+0h]
  _QWORD src[4]; // [sp+14h] [bp+14h] BYREF
  _QWORD *v9; // [sp+34h] [bp+34h]
  __int64 v10; // [sp+38h] [bp+38h]
  double v11; // [sp+40h] [bp+40h]
  double v12; // [sp+48h] [bp+48h]

  v6 = v1;
  if ( v1 <= 0.0 )
    v6 = 1.0;
  v12 = 2.69595353e67 * 65536.0 / v6;
  v11 = v12 / 6.27710174e57;
  v10 = (unsigned __int64)(v12 / 6.27710174e57);
  v9 = &src[3];
  src[3] = v10;
  LODWORD(v2) = sub_1A3C0C(v10);
  v12 = v12 - v2 * 6.27710174e57;
  v11 = v12 / 3.40282367e38;
  v10 = (unsigned __int64)(v12 / 3.40282367e38);
  v9 = &src[2];
  src[2] = v10;
  LODWORD(v3) = sub_1A3C0C(v10);
  v12 = v12 - v3 * 3.40282367e38;
  v11 = v12 / 1.84467441e19;
  v10 = (unsigned __int64)(v12 / 1.84467441e19);
  v9 = &src[1];
  src[1] = v10;
  LODWORD(v4) = sub_1A3C0C(v10);
  src[0] = (unsigned __int64)(v12 - v4 * 1.84467441e19);
  return memcpy(a1, src, 0x20u);
}
