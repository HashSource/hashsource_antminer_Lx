int __fastcall sub_1F270(int a1)
{
  int v2; // r0

  word_B84A0 = __rev16(a1 << 8);
  word_B84A6 = 0;
  byte_B849D = ~(~((byte_B86A4 & 0x1Fu) << 26) >> 26);
  ++numctlerrors;
  if ( !byte_B86AD || !sys_authenticate )
    return sub_16874((struct sockaddr *)dword_B8494, dword_B86B4, -3, (unsigned __int8 *)&byte_B849C, 0xCu);
  v2 = sub_623CC(dword_B86B0, &byte_B849C, 12);
  return sub_16874((struct sockaddr *)dword_B8494, dword_B86B4, -2, (unsigned __int8 *)&byte_B849C, v2 + 12);
}
