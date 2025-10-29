int sub_5658C()
{
  int v0; // r12
  int v1; // r2
  double v2; // d9
  int v3; // r8
  int v4; // r6
  int v5; // r10
  double v6; // r0
  double v7; // d10
  double v8; // r0
  double v9; // d10
  double v10; // d8
  double v11; // d7
  __int64 v12; // r6
  __int64 v13; // kr08_8
  __int64 v14; // r0
  int v15; // r1
  double v16; // d9
  double v17; // r0
  int v18; // r8
  int v19; // r6
  int v20; // r3
  const char *v21; // r1
  __int64 v22; // r10
  __int64 v23; // r0
  int v24; // r1
  double v25; // d8
  double v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r1
  int v30; // r3
  double v31; // d7
  unsigned int v33; // [sp+10h] [bp-91Ch]
  unsigned int v34; // [sp+14h] [bp-918h]
  char v35[256]; // [sp+28h] [bp-904h] BYREF
  char s[2052]; // [sp+128h] [bp-804h] BYREF

  v0 = dword_1AF0EC - dword_1AF0F4;
  LOWORD(v1) = -30583;
  if ( dword_1AF0F0 - dword_1AF0F8 < 0 )
    --v0;
  HIWORD(v1) = -30584;
  v2 = dbl_9ED68;
  v3 = v0 / 3600;
  v4 = v0 - 60 * (((int)(v0 + ((unsigned __int64)(v0 * (__int64)v1) >> 32)) >> 5) - (v0 >> 31));
  v5 = ((int)(v0 % 3600 + ((unsigned __int64)(v0 % 3600 * (__int64)v1) >> 32)) >> 5) - ((v0 % 3600) >> 31);
  LODWORD(v6) = sub_778B4(qword_245158);
  v7 = v6 / v2;
  LODWORD(v8) = sub_778B4(qword_2463D0);
  v9 = v7 * 60.0;
  v10 = v8 / v2 * 60.0;
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3
    || (strcpy(s, "\nSummary of runtime statistics:\n"), sub_47AB4(4, s, 0), !byte_244080)
    && !byte_1AECC4
    && dword_9E320 <= 3 )
  {
    if ( dword_242F4C == 1 )
      goto LABEL_156;
LABEL_8:
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_10;
    goto LABEL_137;
  }
  snprintf(s, 0x800u, "Started at %s", byte_1AF0FC);
  sub_47AB4(4, s, 0);
  if ( dword_242F4C != 1 )
    goto LABEL_8;
  if ( byte_244080 || byte_1AECC4 )
    goto LABEL_157;
LABEL_156:
  if ( dword_9E320 > 3 )
  {
LABEL_157:
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_244048 + 164));
    sub_47AB4(4, s, 0);
    goto LABEL_8;
  }
LABEL_137:
  if ( dword_9E320 <= 3 )
  {
    v11 = dbl_245228 / dbl_9ED68;
    goto LABEL_139;
  }
LABEL_10:
  snprintf(s, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v3, v5, v4);
  sub_47AB4(4, s, 0);
  v11 = dbl_245228 / dbl_9ED68;
  if ( byte_244080 || byte_1AECC4 )
  {
LABEL_12:
    snprintf(s, 0x800u, "Average hashrate: %.1f Mhash/s", v11);
    sub_47AB4(4, s, 0);
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_14;
    goto LABEL_189;
  }
LABEL_139:
  if ( dword_9E320 > 3 )
    goto LABEL_12;
LABEL_189:
  if ( dword_9E320 <= 3 )
    goto LABEL_190;
LABEL_14:
  snprintf(s, 0x800u, "Solved blocks: %d", dword_242FDC);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 )
  {
LABEL_190:
    if ( dword_9E320 <= 3 )
      goto LABEL_158;
  }
  snprintf(s, 0x800u, "Best share difficulty: %s", dword_9ED70);
  sub_47AB4(4, s, 0);
  if ( byte_244080 || byte_1AECC4 )
  {
LABEL_18:
    snprintf(s, 0x800u, "Share submissions: %lld", qword_245158 + qword_246368);
    sub_47AB4(4, s, 0);
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_20;
    goto LABEL_159;
  }
LABEL_158:
  if ( dword_9E320 > 3 )
    goto LABEL_18;
LABEL_159:
  if ( dword_9E320 <= 3 )
    goto LABEL_160;
LABEL_20:
  snprintf(s, 0x800u, "Accepted shares: %lld", qword_245158);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 )
  {
LABEL_160:
    if ( dword_9E320 <= 3 )
      goto LABEL_161;
  }
  snprintf(s, 0x800u, "Rejected shares: %lld", qword_246368);
  sub_47AB4(4, s, 0);
  if ( byte_244080 || byte_1AECC4 )
  {
LABEL_24:
    snprintf(s, 0x800u, "Accepted difficulty shares: %1.f", dbl_242EF0);
    sub_47AB4(4, s, 0);
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_26;
    goto LABEL_162;
  }
LABEL_161:
  if ( dword_9E320 > 3 )
    goto LABEL_24;
LABEL_162:
  if ( dword_9E320 <= 3 )
  {
    v12 = qword_245158;
    if ( qword_245158 )
      goto LABEL_164;
    goto LABEL_54;
  }
LABEL_26:
  snprintf(s, 0x800u, "Rejected difficulty shares: %1.f", dbl_242F10);
  sub_47AB4(4, s, 0);
  v12 = qword_245158;
  if ( qword_245158 )
  {
    if ( !byte_244080 )
      goto LABEL_28;
LABEL_29:
    v13 = qword_246368;
    HIDWORD(v14) = (unsigned __int64)(3 * qword_246368) >> 32;
    LODWORD(v14) = 96 * qword_246368;
    LODWORD(v16) = sub_778B4(__PAIR64__((unsigned __int64)(96 * qword_246368) >> 32, 3 * (int)qword_246368) + v14 + qword_246368);
    HIDWORD(v16) = v15;
    LODWORD(v17) = sub_778B4(v13 + v12);
    snprintf(s, 0x800u, "Reject ratio: %.1f%%", v16 / v17);
    sub_47AB4(4, s, 0);
LABEL_30:
    if ( byte_244080 || byte_1AECC4 )
      goto LABEL_32;
    goto LABEL_145;
  }
LABEL_54:
  if ( !qword_246368 )
    goto LABEL_30;
  v12 = 0;
  if ( byte_244080 )
    goto LABEL_29;
LABEL_28:
  if ( byte_1AECC4 )
    goto LABEL_29;
LABEL_164:
  if ( dword_9E320 > 3 )
    goto LABEL_29;
LABEL_145:
  if ( dword_9E320 <= 3 )
    goto LABEL_146;
LABEL_32:
  snprintf(s, 0x800u, "Hardware errors: %d", dword_242EE8);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_146:
    if ( dword_9E320 <= 3 )
      goto LABEL_147;
    goto LABEL_36;
  }
  snprintf(s, 0x800u, "Utility (accepted shares / min): %.2f/min", v9);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_147:
    if ( dword_9E320 <= 3 )
      goto LABEL_148;
    goto LABEL_38;
  }
LABEL_36:
  snprintf(s, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v10);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_148:
    if ( dword_9E320 <= 3 )
      goto LABEL_149;
    goto LABEL_40;
  }
LABEL_38:
  snprintf(s, 0x800u, "Stale submissions discarded due to new blocks: %lld", qword_242E98);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_149:
    if ( dword_9E320 <= 3 )
      goto LABEL_150;
    goto LABEL_42;
  }
LABEL_40:
  snprintf(s, 0x800u, "Unable to get work from server occasions: %d", dword_245150);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_150:
    if ( dword_9E320 <= 3 )
      goto LABEL_151;
    goto LABEL_44;
  }
LABEL_42:
  snprintf(s, 0x800u, "Work items generated locally: %d", dword_246360);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_151:
    if ( dword_9E320 <= 3 )
      goto LABEL_152;
    goto LABEL_46;
  }
LABEL_44:
  snprintf(s, 0x800u, "Submitting work remotely delay occasions: %d", dword_244014);
  sub_47AB4(4, s, 0);
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
  {
LABEL_152:
    if ( dword_242F4C <= 1 )
      goto LABEL_141;
    goto LABEL_47;
  }
LABEL_46:
  snprintf(s, 0x800u, "New blocks detected on network: %d\n", dword_24625C);
  sub_47AB4(4, s, 0);
  if ( dword_242F4C > 1 )
  {
LABEL_47:
    v18 = 0;
    while ( 1 )
    {
      v19 = *(_DWORD *)(dword_244048 + 4 * v18);
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
        break;
      v20 = *(_DWORD *)(v19 + 32);
      if ( v20 )
        goto LABEL_52;
LABEL_63:
      if ( !byte_1AECC4 )
      {
LABEL_110:
        if ( dword_9E320 <= 3 )
          goto LABEL_111;
      }
LABEL_64:
      snprintf(s, 0x800u, " Share submissions: %lld", *(_QWORD *)(v19 + 8) + *(_QWORD *)(v19 + 16));
      sub_47AB4(4, s, 0);
      if ( byte_244080 || byte_1AECC4 )
      {
LABEL_66:
        snprintf(s, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v19 + 8));
        sub_47AB4(4, s, 0);
        if ( byte_244080 || byte_1AECC4 )
          goto LABEL_68;
        goto LABEL_112;
      }
LABEL_111:
      if ( dword_9E320 > 3 )
        goto LABEL_66;
LABEL_112:
      if ( dword_9E320 <= 3 )
        goto LABEL_113;
LABEL_68:
      snprintf(s, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v19 + 16));
      sub_47AB4(4, s, 0);
      if ( !byte_244080 && !byte_1AECC4 )
      {
LABEL_113:
        if ( dword_9E320 <= 3 )
          goto LABEL_114;
      }
      snprintf(s, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v19 + 72));
      sub_47AB4(4, s, 0);
      if ( byte_244080 || byte_1AECC4 )
      {
LABEL_72:
        snprintf(s, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v19 + 80));
        sub_47AB4(4, s, 0);
        v22 = *(_QWORD *)(v19 + 8);
        if ( v22 )
          goto LABEL_75;
        goto LABEL_73;
      }
LABEL_114:
      if ( dword_9E320 > 3 )
        goto LABEL_72;
      v22 = *(_QWORD *)(v19 + 8);
      if ( v22 )
      {
        if ( dword_9E320 <= 3 )
          goto LABEL_117;
        goto LABEL_77;
      }
LABEL_73:
      if ( *(_QWORD *)(v19 + 16) )
      {
        v22 = 0;
LABEL_75:
        if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
        {
LABEL_117:
          if ( dword_9E320 <= 3 )
            goto LABEL_118;
          goto LABEL_80;
        }
LABEL_77:
        v34 = *(_DWORD *)(v19 + 16);
        HIDWORD(v23) = (unsigned __int64)(3LL * *(_QWORD *)(v19 + 16)) >> 32;
        LODWORD(v23) = 96 * v34;
        v33 = *(_DWORD *)(v19 + 20);
        LODWORD(v25) = sub_778B4(
                         __PAIR64__((unsigned __int64)(96LL * *(_QWORD *)(v19 + 16)) >> 32, 3 * v34)
                       + v23
                       + *(_QWORD *)(v19 + 16));
        HIDWORD(v25) = v24;
        LODWORD(v26) = sub_778B4(__PAIR64__(v33, v34) + v22);
        snprintf(s, 0x800u, " Reject ratio: %.1f%%", v25 / v26);
        sub_47AB4(4, s, 0);
      }
      if ( !byte_244080 && !byte_1AECC4 )
        goto LABEL_117;
LABEL_80:
      snprintf(s, 0x800u, " Items worked on: %d", *(_DWORD *)(v19 + 68));
      sub_47AB4(4, s, 0);
      if ( byte_244080 || byte_1AECC4 )
      {
LABEL_82:
        snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v19 + 120));
        sub_47AB4(4, s, 0);
        if ( byte_244080 || byte_1AECC4 )
          goto LABEL_84;
        goto LABEL_119;
      }
LABEL_118:
      if ( dword_9E320 > 3 )
        goto LABEL_82;
LABEL_119:
      if ( dword_9E320 <= 3 )
        goto LABEL_120;
LABEL_84:
      snprintf(s, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v19 + 128));
      sub_47AB4(4, s, 0);
      if ( !byte_244080 && !byte_1AECC4 )
      {
LABEL_120:
        if ( dword_9E320 <= 3 )
          goto LABEL_87;
      }
      snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v19 + 132));
      sub_47AB4(4, s, 0);
LABEL_87:
      if ( dword_242F4C <= ++v18 )
        goto LABEL_88;
    }
    snprintf(s, 0x800u, "Pool: %s", *(const char **)(v19 + 164));
    sub_47AB4(4, s, 0);
    v20 = *(_DWORD *)(v19 + 32);
    if ( v20 )
    {
      if ( !byte_244080 && !byte_1AECC4 )
      {
LABEL_52:
        if ( dword_9E320 <= 3 )
          goto LABEL_110;
      }
      v21 = "S";
      if ( v20 <= 1 )
        v21 = "";
      snprintf(s, 0x800u, "SOLVED %d BLOCK%s!", v20, v21);
      sub_47AB4(4, s, 0);
    }
    if ( byte_244080 )
      goto LABEL_64;
    goto LABEL_63;
  }
LABEL_88:
  if ( byte_244080 || byte_1AECC4 )
    goto LABEL_90;
LABEL_141:
  if ( dword_9E320 > 3 )
  {
LABEL_90:
    strcpy(s, "Summary of per device statistics:\n");
    sub_47AB4(4, s, 0);
  }
  if ( dword_245140 > 0 )
  {
    v27 = 0;
    do
    {
      v28 = sub_56518(v27++);
      *(_DWORD *)(*(_DWORD *)(v28 + 4) + 20) = nullsub_3;
      *(_DWORD *)(*(_DWORD *)(v28 + 4) + 24) = nullsub_4;
      sub_54DA8(v35, 0xFFu, v28);
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
      {
        snprintf(s, 0x800u, "%s", v35);
        sub_47AB4(4, s, 0);
      }
    }
    while ( dword_245140 > v27 );
  }
  v29 = dword_1AF124;
  v30 = (unsigned __int8)byte_244080;
  if ( dword_1AF124 )
  {
    v31 = dbl_242EF0;
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 3 )
    {
      if ( (double)dword_1AF124 <= dbl_242EF0 )
        goto LABEL_143;
      goto LABEL_103;
    }
    snprintf(s, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_242EF0, dword_1AF124);
    sub_47AB4(4, s, 0);
    v31 = dbl_242EF0;
    v29 = dword_1AF124;
    v30 = (unsigned __int8)byte_244080;
    if ( (double)dword_1AF124 > dbl_242EF0 )
    {
      if ( byte_244080 )
      {
LABEL_105:
        snprintf(s, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", v31, v29);
        sub_47AB4(4, s, 0);
        v30 = (unsigned __int8)byte_244080;
        goto LABEL_106;
      }
LABEL_103:
      if ( !byte_1AECC4 && dword_9E320 <= 3 )
      {
LABEL_143:
        if ( dword_9E320 <= 3 )
          goto LABEL_109;
        goto LABEL_108;
      }
      goto LABEL_105;
    }
  }
LABEL_106:
  if ( !v30 && !byte_1AECC4 )
    goto LABEL_143;
LABEL_108:
  strcpy(s, " ");
  sub_47AB4(4, s, 0);
LABEL_109:
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
