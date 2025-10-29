int __fastcall sub_5B0FC(int a1, int *a2)
{
  if ( *(_DWORD *)(a1 + 1132) )
  {
    memcpy((void *)(a1 + 8), a2 + 116, *((unsigned __int8 *)a2 + 464) + 1);
    *(_QWORD *)a1 = *a2;
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
