void __fastcall sub_376A4(char *a1)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    pthread_mutex_lock(&stru_138630);
    if ( *(_DWORD *)(dword_1AEA78 + 232) )
      (*(void (__fastcall **)(char *))(*(_DWORD *)(dword_1AEA78 + 4) + 24))(a1);
    else
      sub_3762C(a1);
    pthread_mutex_unlock(&stru_138630);
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v2, "Handle is NULL.\n");
    sub_47AB4(3, v2, 0);
  }
}
