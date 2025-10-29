void __fastcall sub_3883C(int a1, int a2)
{
  unsigned int v2; // r3
  int v4; // r6
  unsigned int v5; // r4
  int v6; // r12
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r7
  int v10; // r11
  int v11; // r8
  int v12; // r6
  int i; // r4
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = dword_9E31C;
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_4:
      v4 = a2 + 312 * a1;
      v5 = 0;
      while ( 1 )
      {
        if ( v2 > 3 )
        {
          v6 = 4 * v5;
          v7 = v5++;
          snprintf(s, 0x800u, "IC[%03d]:%04d ", v7, *(_DWORD *)(v4 + v6 + 1911936));
          sub_47EC8(3, s, 0);
          v2 = dword_9E31C;
          if ( v5 != 6 * (v5 / 6) || (unsigned int)dword_9E31C <= 3 )
            goto LABEL_5;
          strcpy(s, "\n");
          sub_47EC8(3, s, v5 % 6);
          v2 = dword_9E31C;
          if ( v5 == 78 )
          {
LABEL_11:
            if ( v2 > 3 )
            {
              strcpy(s, "\n");
              sub_47EC8(3, s, 0);
            }
            if ( *(_DWORD *)dword_1AEA78 != 161 )
            {
              v8 = dword_9E31C;
              v9 = 0;
              v10 = v4 - 104 * a1;
              v11 = v10;
              do
              {
                v12 = 4 * v9;
                for ( i = 0; i != 4; ++i )
                {
                  if ( v8 > 3 )
                  {
                    snprintf(s, 0x800u, "D[%02d]:%04d ", v12 + i, *(_DWORD *)(v11 + 4 * i + 1936960));
                    sub_47EC8(3, s, 0);
                    v8 = dword_9E31C;
                  }
                }
                if ( v8 > 3 )
                {
                  snprintf(s, 0x800u, "D_BIG[%02d]:%05d\n", v9, *(_DWORD *)(v10 + v12 - 156 * a1 + 1940288));
                  sub_47EC8(3, s, 0);
                  v8 = dword_9E31C;
                }
                ++v9;
                v11 += 16;
              }
              while ( v9 != 13 );
              if ( v8 > 3 )
              {
                strcpy(s, "\n\n");
                sub_47EC8(3, s, 0);
              }
            }
            return;
          }
        }
        else
        {
          ++v5;
LABEL_5:
          if ( v5 == 78 )
            goto LABEL_11;
        }
      }
    }
    snprintf(s, 0x800u, "chain %d:\n", a1);
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s : %d\n", "send_nonce_num", &loc_3A590);
      sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_4;
      snprintf(s, 0x800u, "%-30s : %d\n", "recv_nonce_num", *(_DWORD *)(a2 + 4 * (a1 + 479232)));
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_35;
      snprintf(
        s,
        0x800u,
        "%-30s : %f\n",
        "nonce_return_rate",
        (float)((float)*(unsigned int *)(a2 + 4 * (a1 + 479232)) / 238990.0));
      sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_4;
      snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_repeated", *(_DWORD *)(a2 + 4 * (a1 + 485280)));
      sub_47EC8(3, s, 0);
    }
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_38;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_top_check_fail", *(_DWORD *)(a2 + 4 * (a1 + 485296)));
    sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_crc_err", *(_DWORD *)(a2 + 4 * (a1 + 485312)));
    sub_47EC8(3, s, 0);
LABEL_35:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_41;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_invalid", *(_DWORD *)(a2 + 4 * (a1 + 485328)));
    sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_hw", *(_DWORD *)(a2 + 4 * (a1 + 485344)));
    sub_47EC8(3, s, 0);
LABEL_38:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_44;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_extra", *(_DWORD *)(a2 + 4 * (a1 + 485360)));
    sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_unknown_err", *(_DWORD *)(a2 + 4 * (a1 + 485376)));
    sub_47EC8(3, s, 0);
LABEL_41:
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "invalid_asic_num", *(_DWORD *)(a2 + 4 * (a1 + 963376) + 4));
    sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "invalid_chain_num", *(_DWORD *)(a2 + 3853504));
    sub_47EC8(3, s, 0);
LABEL_44:
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "\n");
      sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "Chain %d:\n", a1);
        sub_47AB4(3, s, 0);
        v2 = dword_9E31C;
      }
    }
    goto LABEL_4;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    sub_47AB4(3, s, 0);
  }
}
