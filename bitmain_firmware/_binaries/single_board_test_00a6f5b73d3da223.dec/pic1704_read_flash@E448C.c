int __fastcall pic1704_read_flash(char a1, void *a2, char a3, size_t a4)
{
  _BYTE v9[4]; // [sp+10h] [bp+10h] BYREF
  _DWORD v10[2]; // [sp+14h] [bp+14h] BYREF
  int v11; // [sp+1Ch] [bp+1Ch]
  _BYTE *v12; // [sp+20h] [bp+20h]
  void *ptr; // [sp+24h] [bp+24h]
  size_t i; // [sp+28h] [bp+28h]
  __int16 v15; // [sp+2Ch] [bp+2Ch]
  unsigned __int8 v16; // [sp+2Fh] [bp+2Fh]

  v10[0] = 0;
  v10[1] = 0;
  ptr = malloc(a4 + 5);
  v9[0] = a3;
  v9[1] = a4;
  LOWORD(v11) = 564;
  v12 = v9;
  HIBYTE(v11) = a1;
  BYTE2(v11) = a4 + 5;
  v16 = sub_E289C(v11, (int)v9, v10, (unsigned __int8 *)ptr);
  if ( v16 )
  {
    v15 = 0;
    for ( i = 0; a4 + 3 > i; ++i )
      v15 += *((unsigned __int8 *)ptr + i);
    if ( HIBYTE(v15) == *((unsigned __int8 *)ptr + a4 + 3) && (unsigned __int8)v15 == *((unsigned __int8 *)ptr + a4 + 4) )
      memcpy(a2, (char *)ptr + 3, a4);
    else
      v16 = 0;
  }
  free(ptr);
  return v16;
}
