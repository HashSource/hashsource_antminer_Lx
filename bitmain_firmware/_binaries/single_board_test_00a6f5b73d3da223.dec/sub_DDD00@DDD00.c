int __fastcall sub_DDD00(int a1, int a2, int a3)
{
  unsigned int v4; // [sp+14h] [bp+14h]
  unsigned int v5; // [sp+20h] [bp+20h]

  v5 = (_byteswap_ulong(*(_DWORD *)a3) - a2) << 7;
  v4 = ((((v5 & 0x1FE0000) >> 17)
       - *(unsigned __int8 *)(((v5 & 0x1FE0000) >> 17) / *(_DWORD *)(a1 + 240) + *(_DWORD *)(a1 + 296))) << 17)
     | v5 & 0xFE01FFFF;
  *(_BYTE *)a3 = HIBYTE(v4);
  *(_BYTE *)(a3 + 1) = BYTE2(v4);
  *(_BYTE *)(a3 + 2) = BYTE1(v4);
  *(_BYTE *)(a3 + 3) = v4;
  return 0;
}
