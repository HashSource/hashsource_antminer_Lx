int __fastcall sync_get_chip_reg_base(pthread_mutex_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v12; // lr
  char v13; // r12
  __int16 v14; // lr
  char v15; // r0
  int v16; // r1
  pthread_mutex_t *v17; // r0
  bool v18; // zf
  int (__fastcall *kind)(pthread_mutex_t *, int, int, int, int, int); // r4
  _BYTE v21[2]; // [sp+8h] [bp-28h] BYREF
  int v22; // [sp+Ah] [bp-26h] BYREF
  char v23; // [sp+Eh] [bp-22h]

  if ( !a1[6].__size[8] )
    return 4;
  v22 = 0;
  v12 = *(_BYTE *)(a2 + 8);
  v23 = 0;
  v13 = (16 * (v12 & 1)) | 2;
  v14 = *(_WORD *)(a2 + 10);
  v21[0] = 85;
  v22 = v13 & 0x1F | 0x40;
  HIBYTE(v22) = v14;
  v21[1] = -86;
  BYTE1(v22) = 5;
  v15 = BM_CRC5(&v22, 32);
  v23 = v23 & 0xE0 | v15 & 0x1F;
  send_command_packet(a1, (int)v21, 7u);
  v16 = *(unsigned __int8 *)(a2 + 8);
  v17 = a1;
  v18 = v16 == 0;
  if ( *(_BYTE *)(a2 + 8) )
    v16 = a3;
  kind = (int (__fastcall *)(pthread_mutex_t *, int, int, int, int, int))a1[7].__kind;
  if ( v18 )
    v16 = 1;
  return kind(v17, v16, a4, a5, a7, a8);
}
