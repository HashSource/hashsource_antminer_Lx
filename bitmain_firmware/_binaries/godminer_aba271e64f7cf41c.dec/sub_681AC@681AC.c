int sub_681AC()
{
  __int64 v0; // r0
  int v2; // [sp+8h] [bp-24h] BYREF
  _QWORD *v3; // [sp+Ch] [bp-20h]
  int v4; // [sp+10h] [bp-1Ch]
  _QWORD *v5; // [sp+14h] [bp-18h]
  int v6; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]

  v2 = 0;
  LODWORD(v0) = get_all_created_runtime(&v2);
  v6 = v0;
  for ( i = 0; i < v2; ++i )
  {
    LODWORD(v0) = update_temperature(
                    *(_DWORD *)(v6 + 4 * i),
                    &dword_152900[56 * *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 248)],
                    (int)&qword_153700[10 * *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 248)]);
    v5 = (_QWORD *)v0;
    v4 = v0;
    if ( *(_QWORD *)v0 )
    {
      subject_notify_all(dword_153C08, *(_DWORD *)(v6 + 4 * i));
      v3 = v5;
      v0 = *v5;
      *v5 &= ~v5[1];
      v3[1] = 0;
    }
  }
  return v0;
}
