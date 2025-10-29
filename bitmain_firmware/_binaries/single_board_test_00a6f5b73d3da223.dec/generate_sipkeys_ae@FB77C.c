_QWORD *__fastcall generate_sipkeys_ae(int a1, unsigned int a2, _QWORD *a3)
{
  _QWORD v5[4]; // [sp+10h] [bp+10h] BYREF

  blake2b(v5, a1, a2);
  return sub_FB6D8(a3, v5);
}
