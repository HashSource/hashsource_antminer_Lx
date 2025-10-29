void __fastcall sub_2E180(int a1, unsigned int a2, int a3)
{
  unsigned __int8 v5; // r7
  unsigned int v6[2]; // [sp+8h] [bp-80Ch] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v5 = a3;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(
      s,
      0x800u,
      "Dump core process monitor data register start.            chain = %d, asic = %d, core = %d\n",
      a1,
      a2,
      a3);
    sub_47AB4(3, s, 0);
  }
  if ( sub_2DA50(a1, a2, v5) )
  {
    v6[1] = 0;
    v6[0] = 0;
    pthread_mutex_lock(&stru_A0DB0);
    byte_138648[0] = 1;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "LVT delay chain.\n");
      sub_47AB4(3, s, 0);
    }
    sub_2D958(a1, a2, 1, 4);
    sub_2D868(a1, a2, v5, 2);
    sub_2A324(a1, a2, 64, (int)v6);
    sub_2C050(v6);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "SVT delay chain.\n");
      sub_47AB4(3, s, 0);
    }
    sub_2D958(a1, a2, 1, 5);
    sub_2D868(a1, a2, v5, 2);
    sub_2A324(a1, a2, 64, (int)v6);
    sub_2C050(v6);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "HVT delay chain.\n");
      sub_47AB4(3, s, 0);
    }
    sub_2D958(a1, a2, 1, 6);
    sub_2D868(a1, a2, v5, 2);
    sub_2A324(a1, a2, 64, (int)v6);
    sub_2C050(v6);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Critical path chain.\n");
      sub_47AB4(3, s, 0);
    }
    sub_2D958(a1, a2, 1, 7);
    sub_2D868(a1, a2, v5, 2);
    sub_2A324(a1, a2, 64, (int)v6);
    sub_2C050(v6);
    sub_2D958(a1, a2, 1, 0);
    byte_138648[0] = 0;
    pthread_mutex_unlock(&stru_A0DB0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Dump core process monitor data register done.\n");
      sub_47AB4(3, s, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "register is invalid.\n");
    sub_47AB4(3, s, 0);
  }
}
