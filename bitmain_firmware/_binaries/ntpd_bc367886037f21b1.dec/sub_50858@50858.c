int sub_50858()
{
  int v0; // r1
  _WORD v2[6]; // [sp+0h] [bp-14h] BYREF

  if ( !sub_652A4(v2) || (v0 = sub_66044(v2) - 2, dword_BC5F0 = v0, v0 <= 722818) )
  {
    v0 = 722819;
    dword_BC5F0 = 722819;
  }
  sub_65828(v2, v0);
  dword_BC5F4 = v2[0];
  dword_BC5F0 -= 693596;
  return v2[0];
}
