void sub_37E60()
{
  int v0; // r3
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] Clear stats.\n");
    sub_47AB4(4, v1, 0);
  }
  if ( dword_1AEA78 && (v0 = *(_DWORD *)(dword_1AEA78 + 4)) != 0 )
  {
    (*(void (**)(void))(v0 + 12))();
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    sub_36E34();
  }
}
