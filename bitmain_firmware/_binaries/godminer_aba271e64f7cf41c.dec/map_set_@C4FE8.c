int __fastcall map_set_(int *a1, unsigned __int8 *a2, const void *a3, size_t a4)
{
  int v5; // r3
  char *ptr; // [sp+18h] [bp-Ch]
  int v12; // [sp+1Ch] [bp-8h]

  v12 = sub_C4E34(a1, a2);
  if ( v12 )
  {
    memcpy(*(void **)(*(_DWORD *)v12 + 4), a3, a4);
    return 0;
  }
  else
  {
    ptr = sub_C4B40((char *)a2, a3, a4);
    if ( !ptr || a1[2] >= (unsigned int)a1[1] && (!a1[1] ? (v5 = 1) : (v5 = 2 * a1[1]), sub_C4CD0((int)a1, v5)) )
    {
      if ( ptr )
        free(ptr);
      return -1;
    }
    else
    {
      sub_C4C5C(a1, (int *)ptr);
      ++a1[2];
      return 0;
    }
  }
}
