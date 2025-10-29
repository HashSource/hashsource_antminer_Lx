void sub_37594()
{
  int v0; // r2
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1AEA78 && (v0 = *(_DWORD *)(dword_1AEA78 + 4)) != 0 )
  {
    if ( *(_DWORD *)(dword_1AEA78 + 232) )
      (*(void (**)(void))(v0 + 20))();
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v1, "Handle is NULL.\n");
    sub_47AB4(3, v1, 0);
  }
}
