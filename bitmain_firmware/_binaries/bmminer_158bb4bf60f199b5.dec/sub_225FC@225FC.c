int sub_225FC()
{
  int i; // r4
  int v1; // r0
  int v2; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v4, "****power off hashboard****\n");
    sub_47AB4(3, v4, 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_7;
    }
    v1 = (unsigned __int8)i;
    sub_1979C(v1);
  }
LABEL_7:
  sub_19E7C();
  v2 = sub_6F79C();
  return sub_6F7C4(v2 & 0xFFFFFFBF);
}
