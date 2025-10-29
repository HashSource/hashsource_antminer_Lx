void sub_38064()
{
  _DWORD *v0; // r4
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] Clear ctxt.\n");
    sub_47AB4(4, v1, 0);
  }
  v0 = (_DWORD *)dword_1AEA78;
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    *(_DWORD *)(dword_1AEA78 + 72) = 0;
    v0[19] = 0;
    v0[20] = 0;
    v0[21] = 0;
    v0[22] = 0;
    v0[23] = 0;
    v0[24] = 0;
    v0[25] = 0;
    memset(v0 + 26, 0, 0x40u);
    memset(v0 + 42, 0, 0x40u);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v1, "Handle is NULL.\n");
    sub_47AB4(3, v1, 0);
  }
}
