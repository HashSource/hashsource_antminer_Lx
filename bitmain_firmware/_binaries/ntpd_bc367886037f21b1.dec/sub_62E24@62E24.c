int __fastcall sub_62E24(unsigned __int16 *a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD v5[3]; // [sp+0h] [bp-10h] BYREF

  if ( !a1 )
    sub_6E8F0("caltontp.c", 43, 0, "jt != ((void *)0)");
  if ( *((unsigned __int8 *)a1 + 4) > 0xDu )
    sub_6E8F0("caltontp.c", 45, 0, "jt->month <= 13");
  if ( *((unsigned __int8 *)a1 + 5) > 0x20u )
    sub_6E8F0("caltontp.c", 46, 0, "jt->monthday <= 32");
  if ( a1[1] > 0x16Eu )
    sub_6E8F0("caltontp.c", 47, 0, "jt->yearday <= 366");
  if ( *((unsigned __int8 *)a1 + 6) > 0x18u )
    sub_6E8F0("caltontp.c", 48, 0, "jt->hour <= 24");
  if ( *((unsigned __int8 *)a1 + 7) > 0x3Cu )
    sub_6E8F0("caltontp.c", 49, 0, "jt->minute <= (60)");
  if ( *((unsigned __int8 *)a1 + 8) > 0x3Cu )
    sub_6E8F0("caltontp.c", 50, 0, "jt->second <= (60)");
  if ( a1[1] )
    v2 = a1[1] + sub_660A8(*a1) - 1;
  else
    v2 = sub_66044(a1);
  v3 = sub_65F8C(*((unsigned __int8 *)a1 + 6), *((unsigned __int8 *)a1 + 7), *((unsigned __int8 *)a1 + 8));
  sub_65C5C(v5, v2 - 693596, v3);
  return v5[0];
}
