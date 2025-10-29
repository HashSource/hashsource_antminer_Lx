void __fastcall sub_2E6D4(int a1, unsigned int a2)
{
  _WORD *v4; // r5
  int v5; // t1
  unsigned int v6; // [sp+Ch] [bp-82Ch] BYREF
  _DWORD v7[3]; // [sp+10h] [bp-828h] BYREF
  _BYTE v8[12]; // [sp+1Ch] [bp-81Ch] BYREF
  int v9; // [sp+28h] [bp-810h]
  int v10; // [sp+2Ch] [bp-80Ch]
  int v11; // [sp+30h] [bp-808h]
  __int16 v12; // [sp+34h] [bp-804h] BYREF
  char s[2048]; // [sp+38h] [bp-800h] BYREF

  v7[1] = 201851904;
  v7[2] = 605557776;
  qmemcpy(v8, "(,08DHLPTX\\`", sizeof(v8));
  v9 = -1871943580;
  v10 = -1600350060;
  v11 = -1263489884;
  v12 = -8008;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Dump asic register start. chain = %d, asic = %d\n", a1, a2);
    sub_47AB4(3, s, 0);
  }
  pthread_mutex_lock(&stru_A0DB0);
  if ( sub_2DA50(a1, a2, 0) )
  {
    v4 = (_WORD *)((char *)v7 + 3);
    do
    {
      v5 = *((unsigned __int8 *)v4 + 1);
      v4 = (_WORD *)((char *)v4 + 1);
      v6 = 0;
      v7[0] = 0;
      sub_2A2D8(a1, a2, v5);
      sub_2A324(a1, a2, v5, (int)&v6);
      sub_2BBB8(v5, &v6);
    }
    while ( v4 != (__int16 *)((char *)&v12 + 1) );
  }
  pthread_mutex_unlock(&stru_A0DB0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Dump asic register done.\n");
    sub_47AB4(3, s, 0);
  }
}
