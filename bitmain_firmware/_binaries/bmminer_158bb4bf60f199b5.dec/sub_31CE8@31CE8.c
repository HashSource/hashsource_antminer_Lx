int sub_31CE8()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v4, "[DEBUG] HW sweep reset.\n");
    sub_47AB4(4, v4, 0);
  }
  v0 = 0;
  sub_1B298(255, 0);
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
    {
      if ( ++v0 == 16 )
        goto LABEL_7;
    }
    v1 = (unsigned __int8)v0++;
    sub_7561C(v1);
  }
  while ( v0 != 16 );
LABEL_7:
  v2 = sub_6F79C();
  return sub_6F7C4(v2 & 0xFFFF70FF | 0x8400);
}
