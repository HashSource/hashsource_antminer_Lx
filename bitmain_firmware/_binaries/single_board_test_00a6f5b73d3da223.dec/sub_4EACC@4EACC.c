int __fastcall sub_4EACC(int a1, char a2, int a3, void *a4)
{
  int v9; // [sp+20h] [bp+10h] BYREF
  _DWORD s[4]; // [sp+24h] [bp+14h] BYREF
  void *ptr; // [sp+34h] [bp+24h]

  v9 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  s[1] = a3;
  ptr = malloc(0x4Cu);
  memset(ptr, 0, 0xCu);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *))(a1 + 180))(a1, s, 1, ptr, &v9);
  if ( a4 )
    memcpy(a4, (char *)ptr + 10, 0x40u);
  free(ptr);
  return v9;
}
