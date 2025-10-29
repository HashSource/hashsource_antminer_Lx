_DWORD *new_siphash()
{
  _DWORD *v0; // r4
  __int64 v1; // r2

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  LODWORD(v1) = sub_EA2D0;
  HIDWORD(v1) = sub_EA164;
  v0[18] = sub_EA334;
  v0[19] = sub_EA190;
  *((_QWORD *)v0 + 10) = v1;
  return v0;
}
