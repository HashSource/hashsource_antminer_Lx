void __fastcall sub_2E81C(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v8[2]; // [sp+Ch] [bp-814h] BYREF
  _BYTE v9[12]; // [sp+14h] [bp-80Ch] BYREF
  int s[512]; // [sp+20h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf((char *)s, 0x800u, "Dump asic register start. chain = %d, asic = %d, reg = 0x%x\n", a1, a2, a3);
    sub_47AB4(3, (const char *)s, 0);
  }
  if ( sub_2DA50(a1, a2, 0) )
  {
    pthread_mutex_lock(&stru_A0DB0);
    v8[0] = 0;
    v8[1] = 0;
    sub_2E9B8();
    sub_2D7C8((int)v9, a2, a3, a4);
    sub_2A29C(s, v9, 9u);
    sub_70808(s, a1);
    sub_2A2D8(a1, a2, a3);
    sub_2A324(a1, a2, a3, (int)v8);
    sub_2BBB8(a3, v8);
    pthread_mutex_unlock(&stru_A0DB0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy((char *)s, "Dump asic register done.\n");
      sub_47AB4(3, (const char *)s, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy((char *)s, "register is invalid.\n");
    sub_47AB4(3, (const char *)s, 0);
  }
}
