void sub_374D4()
{
  int v0; // r3
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] Pattern test reset.\n");
    sub_47AB4(4, v1, 0);
  }
  if ( dword_1AEA78 && (v0 = *(_DWORD *)(dword_1AEA78 + 4)) != 0 )
  {
    (*(void (**)(void))(v0 + 16))();
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v1, "Handle is NULL.\n");
    sub_47AB4(3, v1, 0);
  }
}
