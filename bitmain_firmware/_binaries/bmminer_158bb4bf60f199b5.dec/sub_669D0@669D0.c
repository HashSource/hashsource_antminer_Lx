int __fastcall sub_669D0(int a1, unsigned int a2)
{
  int v4; // [sp+Ch] [bp-804h] BYREF
  pthread_attr_t v5[56]; // [sp+10h] [bp-800h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( !dword_1B0E78 )
    {
      pthread_mutex_init(&stru_1B0E7C, 0);
      dword_1B0E94 = (int)sub_69ED4((int)sub_669B4, 0, 0);
      pthread_mutex_init(&stru_1B0E98, 0);
      dword_1B0EB0 = 1;
      pthread_attr_init(v5);
      pthread_attr_setstacksize(v5, 0x200000u);
      pthread_create((pthread_t *)algn_1B0EB4, v5, (void *(*)(void *))sub_67258, 0);
      dword_1B0E78 = 1;
    }
    if ( pthread_mutex_lock(&stru_1B0E7C) )
    {
      strcpy(v5[0].__size, "fail to lock gpio ctrl mutex\n");
      sub_47AB4(0, v5[0].__size, 0);
      return -1;
    }
    else
    {
      if ( !sub_69F3C((int *)dword_1B0E94, (int)&v4) )
      {
        *(_QWORD *)v5[0].__size = a2 | 0xFFFFFFFF00000000LL;
        sub_69F24((int *)dword_1B0E94, &v4, 4u, v5, 8u);
      }
      pthread_mutex_unlock(&stru_1B0E7C);
      return 0;
    }
  }
  else
  {
    strcpy(v5[0].__size, "bad param\n");
    sub_47AB4(0, v5[0].__size, 0);
    return -1;
  }
}
