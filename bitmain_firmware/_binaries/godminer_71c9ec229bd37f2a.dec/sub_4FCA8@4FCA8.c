int sub_4FCA8()
{
  int v0; // r11
  int result; // r0
  int *v2; // r5
  int v3; // t1
  int *v4; // r4
  int v5; // r2
  int v6; // r3
  int v7; // r3
  int v8; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v8 = 0;
  result = (int)get_all_created_runtime(&v8);
  if ( v8 > 0 )
  {
    v2 = (int *)(result - 4);
    do
    {
      while ( 1 )
      {
        v3 = v2[1];
        ++v2;
        ++v0;
        result = update_temperature(
                   v3,
                   (_DWORD *)&unk_168450 + 52 * *(_DWORD *)(v3 + 144),
                   (int)&dword_168310[20 * *(_DWORD *)(v3 + 144)]);
        v4 = (int *)result;
        if ( *(_QWORD *)result )
          break;
        if ( v8 <= v0 )
          return result;
      }
      subject_notify_all(dword_1687A0, *v2);
      result = v4[2];
      v5 = *v4;
      v6 = v4[1] & ~v4[3];
      *((_QWORD *)v4 + 1) = 0;
      v4[1] = v6;
      v7 = v8;
      *v4 = v5 & ~result;
    }
    while ( v7 > v0 );
  }
  return result;
}
