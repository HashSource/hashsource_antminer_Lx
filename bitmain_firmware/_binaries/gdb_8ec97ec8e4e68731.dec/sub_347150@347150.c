void __fastcall __noreturn sub_347150(const void *a1, int a2)
{
  size_t v2; // r6
  void *v4; // r0
  char v5[112]; // [sp+0h] [bp+0h] BYREF

  v2 = a2 - (_DWORD)a1;
  v4 = memcpy(
         &v5[4],
         "not enough space for format expansion (Please submit full bug report at https://gcc.gnu.org/bugs/):\n    ",
         0x69u);
  memcpy(v5, v4, 0x68u);
  memcpy(&v5[104], a1, v2);
  v5[v2 + 104] = 0;
  sub_33D0B8(v5);
}
