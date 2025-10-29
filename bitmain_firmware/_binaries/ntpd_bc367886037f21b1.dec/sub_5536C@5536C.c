int __fastcall sub_5536C(int *a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 + 2124);
  v3 = *(_DWORD *)(*a1 + 2116);
  if ( v2 )
  {
    if ( v2 <= 100 )
      goto LABEL_5;
    v4 = v3 - 4;
    if ( v4 < 0 )
      v4 = 0;
LABEL_9:
    *(_DWORD *)(v1 + 2116) = v4;
    goto LABEL_5;
  }
  v4 = v3 + 4;
  if ( v4 <= 255 )
    goto LABEL_9;
  *(_DWORD *)(v1 + 2116) = 255;
LABEL_5:
  result = sub_60F24();
  *(_DWORD *)(v1 + 2124) = 0;
  return result;
}
