int __fastcall get_packet_remain_len_ltc(int a1)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = *(unsigned __int8 *)(a1 + 2) - 1;
  if ( v2 > 8 )
    return 8;
  return v2;
}
