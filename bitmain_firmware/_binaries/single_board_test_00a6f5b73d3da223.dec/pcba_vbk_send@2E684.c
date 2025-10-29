int __fastcall pcba_vbk_send(int a1, int *a2)
{
  _QWORD s[15]; // [sp+8h] [bp+8h] BYREF
  int *v5; // [sp+84h] [bp+84h]

  v5 = a2;
  memset(s, 0, sizeof(s));
  s[1] = *v5;
  memset(&s[11], 255, 0x18u);
  memcpy(&s[2], v5 + 1, v5[22]);
  return (*(int (__fastcall **)(int, _QWORD *))(a1 + 24))(a1, s);
}
