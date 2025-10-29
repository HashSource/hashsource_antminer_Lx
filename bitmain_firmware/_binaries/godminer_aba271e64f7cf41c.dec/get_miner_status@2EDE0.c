int get_miner_status()
{
  int v1; // [sp+0h] [bp-1Ch] BYREF
  unsigned __int8 v2; // [sp+4h] [bp-18h]
  unsigned __int8 v3; // [sp+5h] [bp-17h]
  unsigned __int8 v4; // [sp+6h] [bp-16h]
  unsigned __int8 v5; // [sp+7h] [bp-15h]
  unsigned __int8 v6; // [sp+8h] [bp-14h]
  unsigned __int8 v7; // [sp+10h] [bp-Ch]
  unsigned __int8 v8; // [sp+11h] [bp-Bh]
  unsigned __int8 v9; // [sp+12h] [bp-Ah]
  unsigned __int8 v10; // [sp+13h] [bp-9h]
  int v11; // [sp+14h] [bp-8h]

  v11 = 0;
  get_miner_working_status(&v1);
  return (v7 << 12)
       | (v8 << 11)
       | (v9 << 10)
       | (v10 << 9)
       | ((unsigned __int8)v1 << 8)
       | (BYTE1(v1) << 7)
       | (BYTE2(v1) << 6)
       | (32 * HIBYTE(v1))
       | (16 * v2)
       | (8 * v3)
       | (4 * v4)
       | (2 * v5)
       | v6;
}
