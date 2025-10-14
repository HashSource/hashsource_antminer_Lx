// Decompiled: ntpdate_a4cbb81615f20218

void _DT_INIT(void)

{
    FUN_0001360c();
    return;
}

void FUN_00013530(void)

{
    int *piVar1;

    piVar1 = __errno_location();
    FUN_0001a848(3, "read system clock failed: %m (%d)", *piVar1);
    /* WARNING: Subroutine does not return */
    exit(1);
}

/* WARNING: Removing unreachable block (ram,0x000135b8) */
/* WARNING: Type propagation algorithm not settling */

void main(int param_1, undefined4 *param_2)

{
    undefined1 uVar1;
    short sVar2;
    char cVar3;
    FILE *__s;
    int iVar4;
    char *pcVar5;
    int iVar6;
    int *piVar7;
    uint *puVar8;
    int iVar9;
    int **ppiVar10;
    ushort **ppuVar11;
    undefined *puVar12;
    undefined4 uVar13;
    uint *puVar14;
    int **ppiVar15;
    socklen_t sVar16;
    int *piVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    uint uVar20;
    addrinfo *paVar21;
    byte bVar22;
    char *__name;
    uint uVar23;
    uint uVar24;
    int *piVar25;
    addrinfo **ppaVar26;
    uint uVar27;
    byte bVar28;
    uint uVar29;
    byte *pbVar30;
    uint uVar31;
    uint uVar32;
    undefined1 auVar33[4];
    uint uVar34;
    uint uVar35;
    bool bVar36;
    bool bVar37;
    double dVar38;
    addrinfo *paVar39;
    int *local_104;
    uint local_fc;
    undefined4 local_dc;
    addrinfo *local_c8;
    int local_c4;
    uint local_c0;
    timeval local_bc;
    addrinfo local_b4;
    int *local_94[9];
    uint uStack_70;
    undefined1 local_6c[4];
    addrinfo *paStack_68;
    char local_64[4];
    char *local_60;
    addrinfo *paStack_5c;
    undefined8 uStack_58;
    undefined4 uStack_50;
    undefined4 uStack_4c;
    byte local_44[8];
    int local_3c;

    local_3c = __stack_chk_guard;
    FUN_00019d4c();
    if (ipv6_works == 0) {
        ai_fam_templ = 2;
    }
    local_fc = 0;
    progname = *param_2;
    syslogit = 0;
    uVar29 = sys_samples;
switchD_00013ea4_default:
    sys_samples = uVar29;
    iVar4 = FUN_00019924(param_1, param_2, "46a:bBde:k:o:p:qst:uv");
    if (iVar4 == -1)
        goto LAB_00013fb8;
    uVar29 = sys_samples;
    switch (iVar4) {
    case 0x34:
        ai_fam_templ = 2;
        goto switchD_00013ea4_default;
    case 0x35:
        goto switchD_00013ea4_default;
    case 0x36:
        ai_fam_templ = 10;
        goto switchD_00013ea4_default;
    case 0x37:
        goto switchD_00013ea4_default;
    case 0x38:
        goto switchD_00013ea4_default;
    case 0x39:
        goto switchD_00013ea4_default;
    case 0x3a:
        goto switchD_00013ea4_default;
    case 0x3b:
        goto switchD_00013ea4_default;
    case 0x3c:
        goto switchD_00013ea4_default;
    case 0x3d:
        goto switchD_00013ea4_default;
    case 0x3e:
        goto switchD_00013ea4_default;
    case 0x3f:
        local_fc = local_fc + 1;
        goto switchD_00013ea4_default;
    case 0x40:
        goto switchD_00013ea4_default;
    case 0x41:
        goto switchD_00013ea4_default;
    case 0x42:
        iVar4 = 0x2fc;
        iVar6 = 0x32c;
        break;
    case 0x43:
        goto switchD_00013ea4_default;
    case 0x44:
        goto switchD_00013ea4_default;
    case 0x45:
        goto switchD_00013ea4_default;
    case 0x46:
        goto switchD_00013ea4_default;
    case 0x47:
        goto switchD_00013ea4_default;
    case 0x48:
        goto switchD_00013ea4_default;
    case 0x49:
        goto switchD_00013ea4_default;
    case 0x4a:
        goto switchD_00013ea4_default;
    case 0x4b:
        goto switchD_00013ea4_default;
    case 0x4c:
        goto switchD_00013ea4_default;
    case 0x4d:
        goto switchD_00013ea4_default;
    case 0x4e:
        goto switchD_00013ea4_default;
    case 0x4f:
        goto switchD_00013ea4_default;
    case 0x50:
        goto switchD_00013ea4_default;
    case 0x51:
        goto switchD_00013ea4_default;
    case 0x52:
        goto switchD_00013ea4_default;
    case 0x53:
        goto switchD_00013ea4_default;
    case 0x54:
        goto switchD_00013ea4_default;
    case 0x55:
        goto switchD_00013ea4_default;
    case 0x56:
        goto switchD_00013ea4_default;
    case 0x57:
        goto switchD_00013ea4_default;
    case 0x58:
        goto switchD_00013ea4_default;
    case 0x59:
        goto switchD_00013ea4_default;
    case 0x5a:
        goto switchD_00013ea4_default;
    case 0x5b:
        goto switchD_00013ea4_default;
    case 0x5c:
        goto switchD_00013ea4_default;
    case 0x5d:
        goto switchD_00013ea4_default;
    case 0x5e:
        goto switchD_00013ea4_default;
    case 0x5f:
        goto switchD_00013ea4_default;
    case 0x60:
        goto switchD_00013ea4_default;
    case 0x61:
        sys_authkey = strtol(ntp_optarg, (char **)0x0, 10);
        sys_authenticate = 1;
        uVar29 = sys_samples;
        goto switchD_00013ea4_default;
    case 0x62:
        iVar4 = 0x32c;
        iVar6 = 0x2fc;
        break;
    case 99:
        goto switchD_00013ea4_default;
    case 100:
        debug = debug + 1;
        goto switchD_00013ea4_default;
    case 0x65:
        iVar4 = FUN_000171d0(ntp_optarg, &local_c4);
        if ((iVar4 == 0) || (local_c4 != 0)) {
            local_fc = local_fc + 1;
            __fprintf_chk(stderr, 1, "%s: encryption delay %s is unlikely\n",
                          progname, ntp_optarg);
            uVar29 = sys_samples;
        } else {
            sys_authdelay = local_c0;
            uVar29 = sys_samples;
        }
        goto switchD_00013ea4_default;
    case 0x66:
        goto switchD_00013ea4_default;
    case 0x67:
        goto switchD_00013ea4_default;
    case 0x68:
        goto switchD_00013ea4_default;
    case 0x69:
        goto switchD_00013ea4_default;
    case 0x6a:
        goto switchD_00013ea4_default;
    case 0x6b:
        key_file = ntp_optarg;
        goto switchD_00013ea4_default;
    case 0x6c:
        goto switchD_00013ea4_default;
    case 0x6d:
        goto switchD_00013ea4_default;
    case 0x6e:
        goto switchD_00013ea4_default;
    case 0x6f:
        sys_version = strtol(ntp_optarg, (char **)0x0, 10);
        uVar29 = sys_samples;
        goto switchD_00013ea4_default;
    case 0x70:
        uVar29 = strtol(ntp_optarg, (char **)0x0, 10);
        if (7 < uVar29 - 1) {
            local_fc = local_fc + 1;
            __fprintf_chk(stderr, 1, "%s: number of samples (%d) is invalid\n",
                          progname, uVar29);
            uVar29 = sys_samples;
        }
        goto switchD_00013ea4_default;
    case 0x71:
        simple_query = 1;
        goto switchD_00013ea4_default;
    case 0x72:
        goto switchD_00013ea4_default;
    case 0x73:
        syslogit = 1;
        goto switchD_00013ea4_default;
    case 0x74:
        iVar4 = FUN_000171d0(ntp_optarg, &local_c4);
        if (iVar4 == 0) {
            local_fc = local_fc + 1;
            __fprintf_chk(stderr, 1, "%s: timeout %s is undecodeable\n",
                          progname, ntp_optarg);
            uVar29 = sys_samples;
        } else {
            uVar29 = sys_samples;
            if (local_c4 + 0xffffU < 0x1ffff) {
                sys_timeout =
                    (local_c0 >> 0x10 | local_c4 << 0x10) * 5 + 0x8000 >> 0x10;
                if (sys_timeout < 5) {
                    sys_timeout = 5;
                }
            } else {
                sys_timeout = 0x8000;
            }
        }
        goto switchD_00013ea4_default;
    case 0x75:
        unpriv_port = 1;
        goto switchD_00013ea4_default;
    case 0x76:
        verbose = 1;
    default:
        goto switchD_00013ea4_default;
    }
    **(int **)((int)&__DT_PLTGOT + iVar4) =
        **(int **)((int)&__DT_PLTGOT + iVar4) + 1;
    **(undefined4 **)((int)&__DT_PLTGOT + iVar6) = 0;
    uVar29 = sys_samples;
    goto switchD_00013ea4_default;
LAB_00014968:
    FUN_0001d4a4();
    iVar4 = FUN_0001d89c();
    if (iVar4 != 0) {
        local_104 = (int *)0x0;
    LAB_0001471c:
        do {
            if (debug != 0) {
                uVar13 = FUN_0001f6bc(iVar4 + 4);
                __printf_chk(1, "receive(%s)\n", uVar13);
            }
            iVar6 = *(int *)(iVar4 + 0x54);
            if (iVar6 == 0x30) {
                bVar37 = false;
            LAB_00014738:
                uVar29 = (uint) * (byte *)(iVar4 + 0x58);
                if (((uVar29 << 0x1a) >> 0x1d) - 1 < 4) {
                    if ((((uVar29 & 7) - 2 & 0xfd) == 0) &&
                        (bVar22 = *(byte *)(iVar4 + 0x59), bVar22 < 0x10)) {
                        if ((*(short *)(iVar4 + 6) == 0x7b00) &&
                            (sys_servers != (int *)0x0)) {
                            sVar2 = *(short *)(iVar4 + 4);
                            piVar7 = (int *)0x0;
                            piVar25 = sys_servers;
                            do {
                                while ((short)piVar25[1] != sVar2) {
                                    piVar25 = (int *)*piVar25;
                                    if (piVar25 == (int *)0x0)
                                        goto LAB_00014898;
                                }
                                if (sVar2 == 2) {
                                    if (*(uint *)(iVar4 + 8) == piVar25[2])
                                        goto LAB_0001498c;
                                    bVar36 = (piVar25[2] & 0xf0U) == 0xe0;
                                } else {
                                    iVar9 = memcmp((void *)(iVar4 + 0xc),
                                                   piVar25 + 3, 0x10);
                                    if ((iVar9 == 0) &&
                                        (*(int *)(iVar4 + 0x1c) ==
                                         piVar25[7])) {
                                    LAB_0001498c:
                                        uVar23 = sys_authkey;
                                        uVar27 = *(uint *)(iVar4 + 0x70);
                                        uVar27 = uVar27 << 0x18 |
                                                 (uVar27 >> 8 & 0xff) << 0x10 |
                                                 (uVar27 >> 0x10 & 0xff) << 8 |
                                                 uVar27 >> 0x18;
                                        uVar32 = *(uint *)(iVar4 + 0x74);
                                        uVar32 = uVar32 << 0x18 |
                                                 (uVar32 >> 8 & 0xff) << 0x10 |
                                                 (uVar32 >> 0x10 & 0xff) << 8 |
                                                 uVar32 >> 0x18;
                                        if ((uVar27 == piVar25[0x3d]) &&
                                            (uVar32 == piVar25[0x3e])) {
                                            if (sys_authenticate == 0) {
                                                *(char *)(piVar25 + 9) =
                                                    (char)piVar25[9] << 1;
                                            LAB_000153b8:
                                                uVar29 = uVar29 >> 6;
                                                bVar28 = (byte)uVar29;
                                                if (uVar29 == 3)
                                                    goto LAB_00015f2c;
                                            LAB_000153c4:
                                                *(byte *)((int)piVar25 + 0x21) =
                                                    bVar28;
                                                if (bVar22 == 0) {
                                                    bVar22 = 0x10;
                                                }
                                            LAB_000153d0:
                                                *(byte *)((int)piVar25 + 0x22) =
                                                    bVar22;
                                                cVar3 = *(char *)(iVar4 + 0x5b);
                                                *(char *)((int)piVar25 + 0x23) =
                                                    cVar3;
                                                uVar29 =
                                                    *(uint *)(iVar4 + 0x78);
                                                uVar23 =
                                                    *(uint *)(iVar4 + 0x7c);
                                                uVar20 = uVar29 << 0x18 |
                                                         (uVar29 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar29 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar29 >> 0x18;
                                                uVar24 = uVar23 << 0x18 |
                                                         (uVar23 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar23 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar23 >> 0x18;
                                                uVar34 =
                                                    *(uint *)(iVar4 + 0x5c);
                                                uVar23 =
                                                    *(uint *)(iVar4 + 0x60);
                                                piVar25[0xc] =
                                                    *(int *)(iVar4 + 100);
                                                uVar29 =
                                                    *(uint *)(iVar4 + 0x68);
                                                piVar25[10] =
                                                    uVar34 << 0x18 |
                                                    (uVar34 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar34 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar34 >> 0x18;
                                                uVar34 =
                                                    *(uint *)(iVar4 + 0x6c);
                                                piVar25[0xb] =
                                                    uVar23 << 0x18 |
                                                    (uVar23 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar23 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar23 >> 0x18;
                                                uVar23 =
                                                    *(uint *)(iVar4 + 0x80);
                                                piVar25[0xd] =
                                                    uVar29 << 0x18 |
                                                    (uVar29 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar29 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar29 >> 0x18;
                                                uVar29 =
                                                    *(uint *)(iVar4 + 0x84);
                                                uVar23 = uVar23 << 0x18 |
                                                         (uVar23 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar23 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar23 >> 0x18;
                                                piVar25[0xe] =
                                                    uVar34 << 0x18 |
                                                    (uVar34 >> 8 & 0xff)
                                                        << 0x10 |
                                                    (uVar34 >> 0x10 & 0xff)
                                                        << 8 |
                                                    uVar34 >> 0x18;
                                                uVar29 = uVar29 << 0x18 |
                                                         (uVar29 >> 8 & 0xff)
                                                             << 0x10 |
                                                         (uVar29 >> 0x10 & 0xff)
                                                             << 8 |
                                                         uVar29 >> 0x18;
                                                piVar25[0x3b] = uVar23;
                                                piVar25[0x3c] = uVar29;
                                                if ((uVar20 != 0 ||
                                                     uVar24 != 0) &&
                                                    ((uVar20 < uVar23 ||
                                                      (uVar24 <= uVar29 &&
                                                       uVar20 == uVar23)))) {
                                                    uVar20 = uVar20 - uVar27;
                                                    if (uVar24 < uVar32) {
                                                        uVar20 = uVar20 - 1;
                                                    }
                                                    uVar23 =
                                                        uVar23 -
                                                        *(int *)(iVar4 + 0x48);
                                                    uVar24 = uVar24 - uVar32;
                                                    if (uVar29 <
                                                        *(uint *)(iVar4 +
                                                                  0x4c)) {
                                                        uVar23 = uVar23 - 1;
                                                    }
                                                    uVar29 =
                                                        uVar29 -
                                                        *(uint *)(iVar4 + 0x4c);
                                                    uVar35 = uVar20 << 0x1f |
                                                             uVar24 >> 1;
                                                    uVar34 = uVar23 << 0x1f |
                                                             uVar29 >> 1;
                                                    uVar32 =
                                                        uVar20 & 0x80000000;
                                                    uVar31 = uVar34 + uVar35;
                                                    uVar27 = uVar20 >> 1;
                                                    if (uVar24 < uVar29) {
                                                        uVar20 = uVar20 - 1;
                                                    }
                                                    iVar6 = uVar20 - uVar23;
                                                    uVar23 =
                                                        (uVar23 & 0x80000000 |
                                                         uVar23 >> 1) +
                                                        (uVar32 | uVar27) +
                                                        (uint)CARRY4(uVar34,
                                                                     uVar35);
                                                    if (iVar6 < 0x10000) {
                                                        if (iVar6 == -0x10000 ||
                                                            iVar6 + 0x10000 <
                                                                    0 !=
                                                                SCARRY4(
                                                                    iVar6,
                                                                    0x10000)) {
                                                            uVar29 = 0x80000000;
                                                        } else {
                                                            uVar29 =
                                                                uVar24 -
                                                                        uVar29 >>
                                                                    0x10 |
                                                                iVar6 * 0x10000;
                                                        }
                                                    } else {
                                                        uVar29 = 0x7fffffff;
                                                    }
                                                    if (3 < debug) {
                                                        uVar13 = FUN_000195dc(
                                                            uVar23, uVar31, 6);
                                                        uVar18 = FUN_0001923c(
                                                            uVar29, 5);
                                                        __printf_chk(
                                                            1,
                                                            "offset: %s, delay "
                                                            "%s\n",
                                                            uVar13, uVar18);
                                                        cVar3 = *(
                                                            char
                                                                *)((int)
                                                                       piVar25 +
                                                                   0x23);
                                                    }
                                                    iVar6 = (0x10000 >>
                                                             (-(int)cVar3 &
                                                              0xffU)) +
                                                            0x68f + uVar29;
                                                    uVar29 =
                                                        (uint) *
                                                        (ushort *)((int)
                                                                       piVar25 +
                                                                   0x4a);
                                                    if (iVar6 < 1) {
                                                        if (uVar29 < 8) {
                                                            uVar27 = 0;
                                                            uVar31 = 0;
                                                            piVar25[uVar29 +
                                                                    0x13] = 0;
                                                            piVar25[uVar29 * 2 +
                                                                    0x1b] = 0;
                                                            piVar25[uVar29 * 2 +
                                                                    0x1c] = 0;
                                                        LAB_00016168:
                                                            uVar27 =
                                                                uVar31 >> 0x10 |
                                                                uVar27 << 0x10;
                                                            goto LAB_00015548;
                                                        }
                                                    } else {
                                                        if (iVar6 < 0x51f) {
                                                            iVar6 = 0x51f;
                                                        }
                                                        if (uVar29 < 8) {
                                                            uVar27 = uVar23;
                                                            if (0xffff <
                                                                (int)uVar23) {
                                                                uVar27 =
                                                                    0x7fffffff;
                                                            }
                                                            piVar25[uVar29 +
                                                                    0x13] =
                                                                iVar6;
                                                            piVar25[uVar29 * 2 +
                                                                    0x1b] =
                                                                uVar23;
                                                            piVar25[uVar29 * 2 +
                                                                    0x1c] =
                                                                uVar31;
                                                            if ((int)uVar23 <
                                                                0x10000) {
                                                                if (uVar23 !=
                                                                        0xffff0000 &&
                                                                    (int)(uVar23 +
                                                                          0x10000) <
                                                                            0 ==
                                                                        SCARRY4(
                                                                            uVar23,
                                                                            0x10000))
                                                                    goto LAB_00016168;
                                                                uVar27 =
                                                                    0x80000000;
                                                            }
                                                        LAB_00015548:
                                                            piVar25[uVar29 +
                                                                    0x33] = 0;
                                                            piVar25[uVar29 +
                                                                    0x2b] =
                                                                uVar27;
                                                            *(short
                                                                  *)((int)
                                                                         piVar25 +
                                                                     0x4a) =
                                                                (short)(uVar29 +
                                                                        1);
                                                            uVar29 =
                                                                uVar29 + 1 &
                                                                0xffff;
                                                        }
                                                    }
                                                    if ((int)sys_samples <=
                                                        (int)uVar29)
                                                        goto LAB_00015578;
                                                }
                                                piVar25[0xf] =
                                                    current_time + sys_timeout;
                                            } else {
                                                if (3 < debug) {
                                                    uVar29 =
                                                        *(uint *)(iVar4 + 0x88);
                                                    uVar13 = FUN_00018700(
                                                        sys_authkey,
                                                        iVar4 + 0x58, 0x30,
                                                        iVar6 + -0x30);
                                                    __printf_chk(
                                                        1,
                                                        "receive: rpkt "
                                                        "keyid=%ld "
                                                        "sys_authkey=%ld "
                                                        "decrypt=%ld\n",
                                                        uVar29 << 0x18 |
                                                            (uVar29 >> 8 & 0xff)
                                                                << 0x10 |
                                                            (uVar29 >> 0x10 &
                                                             0xff)
                                                                << 8 |
                                                            uVar29 >> 0x18,
                                                        uVar23, uVar13);
                                                }
                                                if (bVar37) {
                                                    uVar29 =
                                                        *(uint *)(iVar4 + 0x88);
                                                    uVar29 =
                                                        uVar29 << 0x18 |
                                                        (uVar29 >> 8 & 0xff)
                                                            << 0x10 |
                                                        (uVar29 >> 0x10 & 0xff)
                                                            << 8 |
                                                        uVar29 >> 0x18;
                                                    if ((uVar29 ==
                                                         sys_authkey) &&
                                                        (iVar6 = FUN_00018700(
                                                             uVar29,
                                                             iVar4 + 0x58, 0x30,
                                                             *(int *)(iVar4 +
                                                                      0x54) +
                                                                 -0x30),
                                                         iVar6 != 0)) {
                                                        if (debug != 0) {
                                                            __printf_chk(
                                                                1,
                                                                "receive: "
                                                                "authentication"
                                                                " %s\n",
                                                                "passed");
                                                        }
                                                        *(char *)(piVar25 + 9) =
                                                            (char)piVar25[9]
                                                            << 1;
                                                        uVar29 =
                                                            (uint) *
                                                            (byte *)(iVar4 +
                                                                     0x58);
                                                        bVar22 =
                                                            *(byte *)(iVar4 +
                                                                      0x59);
                                                        goto LAB_000153b8;
                                                    }
                                                }
                                                if (debug == 0) {
                                                    cVar3 = (char)piVar25[9];
                                                } else {
                                                    __printf_chk(
                                                        1,
                                                        "receive: "
                                                        "authentication %s\n",
                                                        "failed");
                                                    cVar3 = (char)piVar25[9];
                                                }
                                                *(byte *)(piVar25 + 9) =
                                                    cVar3 << 1 | 1;
                                                bVar22 =
                                                    *(byte *)(iVar4 + 0x59);
                                                bVar28 =
                                                    *(byte *)(iVar4 + 0x58) >>
                                                    6;
                                                uVar29 = (uint)bVar28;
                                                if (uVar29 != 3)
                                                    goto LAB_000153c4;
                                            LAB_00015f2c:
                                                if (bVar22 != 0) {
                                                    *(char *)((int)piVar25 +
                                                              0x21) =
                                                        (char)uVar29;
                                                    goto LAB_000153d0;
                                                }
                                                if ((((*(char *)(iVar4 + 100) !=
                                                       'R') ||
                                                      (*(char *)(iVar4 +
                                                                 0x65) !=
                                                       'A')) ||
                                                     (*(char *)(iVar4 + 0x66) !=
                                                      'T')) ||
                                                    (*(char *)(iVar4 + 0x67) !=
                                                     'E')) {
                                                    *(undefined1
                                                          *)((int)piVar25 +
                                                             0x21) = 3;
                                                    bVar22 = 0x10;
                                                    goto LAB_000153d0;
                                                }
                                                uVar13 =
                                                    FUN_0001f6bc(iVar4 + 4);
                                                FUN_0001a848(
                                                    uVar29,
                                                    "%s rate limit response "
                                                    "from server.",
                                                    uVar13);
                                            LAB_00015578:
                                                piVar25[0xf] = 0;
                                                complete_servers =
                                                    complete_servers + 1;
                                            }
                                        } else if (debug != 0) {
                                            puts("receive: pkt.org and "
                                                 "peer.xmt differ");
                                        }
                                        goto LAB_00014708;
                                    }
                                    bVar36 = (char)piVar25[3] == -1;
                                }
                                if (bVar36) {
                                    piVar7 = piVar25;
                                }
                                piVar25 = (int *)*piVar25;
                            } while (piVar25 != (int *)0x0);
                        LAB_00014898:
                            if (piVar7 != (int *)0x0) {
                                if (piVar7[0xf] != 0) {
                                    piVar7[0xf] = (int)piVar25;
                                    complete_servers = complete_servers + 1;
                                }
                                iVar6 = FUN_000196bc(0, 0x110, 0, 1);
                                piVar7 = sys_servers;
                                iVar9 = sys_numservers + 1;
                                uVar13 = *(undefined4 *)(iVar4 + 8);
                                uVar18 = *(undefined4 *)(iVar4 + 0xc);
                                uVar19 = *(undefined4 *)(iVar4 + 0x10);
                                sys_numservers = iVar9;
                                *(undefined4 *)(iVar6 + 4) =
                                    *(undefined4 *)(iVar4 + 4);
                                *(undefined4 *)(iVar6 + 8) = uVar13;
                                *(undefined4 *)(iVar6 + 0xc) = uVar18;
                                *(undefined4 *)(iVar6 + 0x10) = uVar19;
                                uVar13 = *(undefined4 *)(iVar4 + 0x18);
                                uVar18 = *(undefined4 *)(iVar4 + 0x1c);
                                *(undefined4 *)(iVar6 + 0x14) =
                                    *(undefined4 *)(iVar4 + 0x14);
                                *(undefined4 *)(iVar6 + 0x18) = uVar13;
                                *(undefined4 *)(iVar6 + 0x1c) = uVar18;
                                *(int *)(iVar6 + 0x3c) = iVar9;
                                do {
                                    piVar25 = piVar7;
                                    piVar7 = (int *)*piVar25;
                                } while (piVar7 != (int *)0x0);
                                *piVar25 = iVar6;
                                FUN_00013a94(iVar6);
                            }
                        }
                        if (debug != 0) {
                            puts("receive: server not found");
                        }
                    } else if (debug != 0) {
                        __printf_chk(1, "receive: mode %d stratum %d\n",
                                     uVar29 & 7, *(undefined1 *)(iVar4 + 0x59));
                    }
                }
            } else {
                if (0x2f < iVar6) {
                    bVar37 = true;
                    goto LAB_00014738;
                }
                if (debug != 0) {
                    __printf_chk(1, "receive: packet length %d\n", iVar6);
                }
            }
        LAB_00014708:
            FUN_0001d6a0(iVar4);
            iVar4 = FUN_0001d89c();
        joined_r0x000147ec:
        } while (iVar4 != 0);
        if (local_104 != (int *)0x0) {
        LAB_000147c4:
            FUN_00013b8c();
        }
    }
    goto LAB_0001462c;
LAB_00014c08:
    bVar22 = *(byte *)((int)piVar7 + 0x22);
    if (bVar22 == 0) {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: no data\n", uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    if (0xf < bVar22) {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: strata too high\n", uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    if (0x80000 < (uint)piVar7[0x3f]) {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: server too far away\n",
                         uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    if (*(char *)((int)piVar7 + 0x21) == '\x03') {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: leap not in sync\n", uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    uVar27 = piVar7[0x3b];
    uVar23 = piVar7[0xd];
    if ((uVar27 <= uVar23) &&
        ((uVar27 != uVar23 || ((uint)piVar7[0x3c] < (uint)piVar7[0xe])))) {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: server is very broken\n",
                         uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    if (0x1517f < uVar27 - uVar23) {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(
                1,
                "%s: Server dropped: server has gone too long without sync\n",
                uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    if ((char)piVar7[9] != '\0') {
        if (iVar4 != 0) {
            uVar13 = FUN_0001f6bc(piVar7 + 1);
            __printf_chk(1, "%s: Server dropped: Server is untrusted\n",
                         uVar13);
            iVar4 = debug;
        }
        goto LAB_000155bc;
    }
    iVar6 = piVar7[0x40];
    uVar23 = iVar6 * 2;
    if (uVar29 != 0) {
        uVar27 = 0;
        uVar32 = uVar29;
        uVar20 = uVar29;
        if (*(byte *)((int)local_94[0] + 0x22) < bVar22) {
            do {
                uVar27 = uVar27 + 1;
                if (uVar27 == uVar29)
                    goto LAB_00014cb4;
            } while (*(byte *)((int)local_94[uVar27] + 0x22) < bVar22);
            if ((*(byte *)((int)local_94[uVar27] + 0x22) <= bVar22) &&
                (*(int *)(local_6c + uVar27 * 4) <= (int)uVar23))
                goto LAB_00015dec;
            if (4 < uVar27)
                goto LAB_000155bc;
            if (uVar27 < uVar29)
                goto LAB_00015e3c;
            local_94[uVar27] = piVar7;
            *(uint *)(local_6c + uVar27 * 4) = uVar23;
            goto LAB_00014cd4;
        }
        uVar27 = 0;
        if ((*(byte *)((int)local_94[0] + 0x22) <= bVar22) &&
            (local_6c == (undefined1[4])uVar23 ||
             (int)local_6c + iVar6 * -2 < 0 !=
                 SBORROW4((int)local_6c, uVar23))) {
            uVar27 = 0;
        LAB_00015dec:
            ppiVar15 = local_94 + uVar27;
            puVar8 = (uint *)((int)local_6c + uVar27 * 4);
            do {
                uVar27 = uVar27 + 1;
                if (uVar29 <= uVar27)
                    goto LAB_00014cb4;
                ppiVar15 = ppiVar15 + 1;
                if (bVar22 < *(byte *)((int)*ppiVar15 + 0x22))
                    break;
                puVar8 = puVar8 + 1;
                uVar24 = *puVar8;
            } while (uVar24 == uVar23 || (int)(uVar24 + iVar6 * -2) < 0 !=
                                             SBORROW4(uVar24, uVar23));
            if (4 < uVar27)
                goto LAB_000155bc;
        }
    LAB_00015e3c:
        do {
            uVar20 = uVar20 - 1;
            if (uVar32 < 5) {
                uVar24 = *(uint *)((int)local_6c + uVar20 * 4);
                local_94[uVar32] = local_94[uVar20];
                *(uint *)((int)local_6c + uVar32 * 4) = uVar24;
            }
            uVar32 = uVar32 - 1;
        } while (uVar27 < uVar20);
        goto LAB_00014cbc;
    }
    local_94[0] = piVar7;
    local_6c = (undefined1[4])uVar23;
    goto LAB_00014cd4;
LAB_00014cb4:
    if (uVar27 < 5) {
    LAB_00014cbc:
        local_94[uVar27] = piVar7;
        *(uint *)(local_6c + uVar27 * 4) = uVar23;
        if (uVar29 < 5) {
        LAB_00014cd4:
            piVar7 = (int *)*piVar7;
            uVar29 = uVar29 + 1;
            goto joined_r0x000155c4;
        }
    }
LAB_000155bc:
    piVar7 = (int *)*piVar7;
joined_r0x000155c4:
    if (piVar7 == (int *)0x0)
        goto joined_r0x000155d4;
    goto LAB_00014c08;
joined_r0x000155d4:
    if (uVar29 < 2) {
        uVar27 = uVar29;
        if (uVar29 == 0)
            goto joined_r0x000155e8;
    } else {
        bVar37 = false;
        ppiVar15 = local_94;
        uVar23 = 1;
        do {
            ppiVar10 = ppiVar15 + 1;
            piVar7 = *ppiVar15;
            ppiVar15 = ppiVar15 + 1;
            if (*(byte *)((int)piVar7 + 0x22) <
                *(byte *)((int)*ppiVar10 + 0x22)) {
                uVar27 = uVar23;
                if (bVar37)
                    break;
                bVar37 = true;
            }
            uVar23 = uVar23 + 1;
            uVar27 = uVar29;
        } while (uVar23 != uVar29);
    }
    if (uVar27 != 1) {
        ppaVar26 = &local_b4.ai_next + uVar27;
        uVar29 = 0;
        ppiVar15 = local_94;
        do {
            while (uVar29 = uVar29 + 1, uVar27 <= uVar29) {
            LAB_000156a4:
                ppiVar15 = ppiVar15 + 1;
                if (uVar29 == uVar27 - 1)
                    goto LAB_00014f18;
            }
            piVar25 = *ppiVar15;
            piVar7 = ppiVar15[1];
            if (*(byte *)((int)piVar25 + 0x22) < *(byte *)((int)piVar7 + 0x22))
                goto LAB_000156a4;
            ppiVar10 = ppiVar15 + 1;
            do {
                if ((uint)piVar7[0x3f] <= (uint)piVar25[0x3f]) {
                    *ppiVar15 = piVar7;
                    *ppiVar10 = piVar25;
                }
                if (ppaVar26 == (addrinfo **)ppiVar10)
                    break;
                piVar25 = *ppiVar15;
                ppiVar10 = ppiVar10 + 1;
                piVar7 = *ppiVar10;
            } while (*(byte *)((int)piVar7 + 0x22) <=
                     *(byte *)((int)piVar25 + 0x22));
            ppiVar15 = ppiVar15 + 1;
        } while (uVar29 != uVar27 - 1);
    LAB_00014f18:
        do {
            uVar29 = 0;
            ppiVar15 = local_94;
            puVar8 = &uStack_70;
            do {
                uVar23 = 0;
                puVar8 = puVar8 + 1;
                *puVar8 = 0;
                do {
                    if (uVar29 != uVar23) {
                        iVar6 = local_94[uVar23][0x43] - (*ppiVar15)[0x43];
                        if (iVar6 < 0) {
                            iVar6 = -iVar6;
                        }
                        if (uVar23 != 0) {
                            uVar32 = 0;
                            do {
                                uVar32 = uVar32 + 1;
                                iVar6 = (iVar6 >> 2) + (iVar6 >> 1);
                            } while (uVar32 != uVar23);
                        }
                        *puVar8 = *puVar8 + iVar6;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 != uVar27);
                uVar29 = uVar29 + 1;
                ppiVar15 = ppiVar15 + 1;
            } while (uVar29 != uVar27);
            iVar6 = (int)*(char *)((int)local_94[0] + 0x23);
            uVar29 = 0;
            uVar23 = 1;
            ppiVar15 = local_94;
            puVar8 = (uint *)local_6c;
            auVar33 = local_6c;
            do {
                ppiVar15 = ppiVar15 + 1;
                puVar8 = puVar8 + 1;
                if ((uint)auVar33 <= *puVar8) {
                    auVar33 = (undefined1[4]) * puVar8;
                    uVar29 = uVar23;
                }
                uVar23 = uVar23 + 1;
                if (*(char *)((int)*ppiVar15 + 0x23) <= iVar6) {
                    iVar6 = (int)*(char *)((int)*ppiVar15 + 0x23);
                }
            } while (uVar23 < uVar27);
            if ((int)auVar33 < (0x10000 >> (-iVar6 & 0xffU)) + 0x68f)
                break;
            if (uVar29 + 1 < uVar27) {
                ppiVar15 = local_94 + uVar29;
                do {
                    ppiVar10 = ppiVar15 + 1;
                    *ppiVar15 = *ppiVar10;
                    ppiVar15 = ppiVar10;
                } while (ppaVar26 != (addrinfo **)ppiVar10);
            }
            uVar27 = uVar27 - 1;
            ppaVar26 = ppaVar26 + -1;
        } while (uVar27 != 1);
    }
    local_104 = local_94[0];
    if (iVar4 == 0) {
        if (simple_query != 0)
            goto joined_r0x000156cc;
    } else {
        putchar(10);
    joined_r0x000156cc:
        piVar7 = sys_servers;
        if (sys_servers != (int *)0x0) {
        LAB_00015114:
            __s = stdout;
            if (*(char *)((int)piVar7 + 0x22) != '\0') {
                if (debug == 0) {
                    uVar13 = FUN_0001f6bc(piVar7 + 1);
                    uVar1 = *(undefined1 *)((int)piVar7 + 0x22);
                    uVar18 = FUN_000195dc(piVar7[0x41], piVar7[0x42], 6);
                    uVar19 = FUN_0001923c(piVar7[0x3f], 5);
                    __fprintf_chk(
                        __s, 1, "server %s, stratum %d, offset %s, delay %s\n",
                        uVar13, uVar1, uVar18, uVar19);
                    goto LAB_00015108;
                }
                uVar13 = FUN_0001f6bc(piVar7 + 1);
                __fprintf_chk(__s, 1, "server %s, port %d\n", uVar13,
                              *(ushort *)((int)piVar7 + 6) << 8 |
                                  *(ushort *)((int)piVar7 + 6) >> 8);
                if ((*(byte *)((int)piVar7 + 0x21) & 2) == 0) {
                    uVar13 = 0x30;
                } else {
                    uVar13 = 0x31;
                }
                if ((*(byte *)((int)piVar7 + 0x21) & 1) == 0) {
                    uVar18 = 0x30;
                } else {
                    uVar18 = 0x31;
                }
                __fprintf_chk(
                    __s, 1, "stratum %d, precision %d, leap %c%c, trust %03o\n",
                    *(undefined1 *)((int)piVar7 + 0x22),
                    (int)*(char *)((int)piVar7 + 0x23), uVar13, uVar18,
                    (char)piVar7[9]);
                if (*(byte *)((int)piVar7 + 0x22) - 2 < 0xe) {
                    pbVar30 = (byte *)FUN_0001cdd4(piVar7[0xc]);
                } else {
                    pbVar30 = (byte *)((int)piVar7 + 0x2f);
                    iVar4 = 0;
                    do {
                        pbVar30 = pbVar30 + 1;
                        bVar22 = *pbVar30;
                        if (bVar22 == 0)
                            break;
                        ppuVar11 = __ctype_b_loc();
                        if (((*ppuVar11)[(short)(ushort)bVar22] & 0x4000) ==
                            0) {
                            bVar22 = 0x2e;
                        }
                        local_44[iVar4] = bVar22;
                        iVar4 = iVar4 + 1;
                    } while (iVar4 != 4);
                    local_44[iVar4] = 0;
                    pbVar30 = local_44;
                }
                uVar29 = FUN_0001923c(piVar7[10], 6);
                uVar13 = FUN_00018fd8(piVar7[0xb], 0, 6);
                __fprintf_chk(__s, 1,
                              "refid [%s], root delay %s, root dispersion %s\n",
                              pbVar30, uVar29, uVar13);
                uVar23 = (uint) * (ushort *)((int)piVar7 + 0x4a);
                if (*(ushort *)(piVar7 + 0x11) != uVar23) {
                    __fprintf_chk(__s, 1, "transmitted %d, in filter %d\n",
                                  (uint) * (ushort *)(piVar7 + 0x11), uVar23,
                                  uVar13);
                    uVar29 = uVar23;
                }
                uVar18 = FUN_0001d34c(piVar7 + 0xd);
                __fprintf_chk(__s, 1, "reference time:      %s\n", uVar18,
                              uVar29, uVar13);
                uVar13 = FUN_0001d34c(piVar7 + 0x3b);
                __fprintf_chk(__s, 1, "originate timestamp: %s\n", uVar13);
                uVar13 = FUN_0001d34c(piVar7 + 0x3d);
                __fprintf_chk(__s, 1, "transmit timestamp:  %s\n", uVar13);
                if (1 < (int)sys_samples) {
                    fwrite("filter delay: ", 1, 0xe, __s);
                    iVar4 = 0;
                LAB_00015360:
                    do {
                        iVar6 = iVar4 + 1;
                        if (iVar6 == 5) {
                            fwrite("\n              ", 1, 0xf, __s);
                            if ((int)sys_samples <= iVar4) {
                                __fprintf_chk(__s, 1, " %-10.10s",
                                              &DAT_0002c6f8);
                                iVar4 = iVar6;
                                goto LAB_00015360;
                            }
                        LAB_00015378:
                            puVar12 = (undefined *)FUN_0001923c(
                                piVar7[iVar4 + 0x13], 5);
                        } else {
                            puVar12 = &DAT_0002c6f8;
                            if (iVar4 < (int)sys_samples)
                                goto LAB_00015378;
                        }
                        __fprintf_chk(__s, 1, " %-10.10s", puVar12);
                        iVar4 = iVar6;
                    } while (iVar6 != 8);
                    fputc(10, __s);
                    fwrite("filter offset:", 1, 0xe, __s);
                    iVar4 = 0;
                    piVar25 = piVar7;
                    do {
                        iVar6 = iVar4 + 1;
                        if (iVar6 == 5) {
                            fwrite("\n              ", 1, 0xf, __s);
                            if (iVar4 < (int)sys_samples)
                                goto LAB_00015cc8;
                            __fprintf_chk(__s, 1, " %-10.10s", &DAT_0002c6f8);
                        } else {
                            puVar12 = &DAT_0002c6f8;
                            if (iVar4 < (int)sys_samples) {
                            LAB_00015cc8:
                                puVar12 = (undefined *)FUN_000195dc(
                                    piVar25[0x1b], piVar25[0x1c], 6);
                            }
                            __fprintf_chk(__s, 1, " %-10.10s", puVar12);
                            if (iVar6 == 8)
                                goto LAB_00015a8c;
                        }
                        piVar25 = piVar25 + 2;
                        iVar4 = iVar6;
                    } while (true);
                }
                goto LAB_00015aa0;
            }
            goto LAB_00015108;
        }
    }
LAB_000156d0:
    if (local_104 != (int *)0x0) {
        if (always_step == 0) {
            if (never_step == 0) {
                uVar29 = local_104[0x43];
                if ((int)uVar29 < 0) {
                    uVar29 = -uVar29;
                }
                if (0x7fff < uVar29)
                    goto LAB_00015718;
            }
            if (simple_query == 0) {
                uVar23 = local_104[0x41];
                uVar27 = local_104[0x42];
                bVar37 = false;
                uVar29 = uVar27;
                if ((int)uVar23 < 0) {
                    uVar29 = -uVar27;
                    uVar23 = ~uVar23;
                    bVar37 = true;
                    if (uVar27 == 0) {
                        uVar23 = uVar23 + 1;
                    }
                }
                uVar27 = uVar23 << 0x1f | uVar29 >> 1;
                bVar36 = uVar27 == 0x10000000;
                if (uVar27 < 0x10000001) {
                    bVar36 = uVar23 >> 1 == 0;
                }
                if (!bVar36) {
                    uVar27 = 0x10000000;
                }
                local_bc.tv_usec =
                    (__suseconds_t)((ulonglong)(uVar29 + uVar27) * 1000000 +
                                        0x80000000 >>
                                    0x20);
                local_bc.tv_sec = CARRY4(uVar29, uVar27) + uVar23;
                if (local_bc.tv_usec == 1000000) {
                    local_bc.tv_sec = local_bc.tv_sec + 1;
                    local_bc.tv_usec = 0;
                }
                if (bVar37) {
                    local_bc.tv_usec = -local_bc.tv_usec;
                    local_bc.tv_sec = -local_bc.tv_sec;
                }
                if (((debug == 0) && (local_bc.tv_usec != 0)) &&
                    (iVar4 = adjtime(&local_bc, (timeval *)&local_b4),
                     iVar4 < 0)) {
                    FUN_0001a848(3, "Can\'t adjust the time of day: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
            }
            local_dc = 0;
            uVar13 = FUN_0001f6bc(local_104 + 1);
            uVar18 = FUN_000195dc(local_104[0x41], local_104[0x42], 6);
            FUN_0001a848(5, "adjust time server %s offset %s sec", uVar13,
                         uVar18);
        } else {
        LAB_00015718:
            if ((simple_query == 0) && (debug == 0)) {
                iVar6 = local_104[0x42];
                iVar4 = local_104[0x41];
                if (iVar4 < 0) {
                    dVar38 = (double)FUN_0002c374(
                        -iVar6, -(iVar4 + (uint)(iVar6 != 0)));
                    dVar38 = ldexp(dVar38, -0x20);
                    uVar13 = SUB84(-dVar38, 0);
                } else {
                    dVar38 = (double)FUN_0002c374(iVar6, iVar4);
                    dVar38 = ldexp(dVar38, -0x20);
                    uVar13 = SUB84(dVar38, 0);
                }
                iVar4 = FUN_00016dd4(uVar13);
                if (iVar4 == 0) {
                    local_dc = 0;
                    goto LAB_00015c10;
                }
            }
            uVar13 = FUN_0001f6bc(local_104 + 1);
            uVar18 = FUN_000195dc(local_104[0x41], local_104[0x42], 6);
            FUN_0001a848(5, "step time server %s offset %s sec", uVar13,
                         uVar18);
            local_dc = 0;
        }
        goto LAB_00015c10;
    }
    goto LAB_00015618;
LAB_00015a8c:
    fputc(10, __s);
LAB_00015aa0:
    uVar13 = FUN_0001923c(piVar7[0x3f], 5);
    uVar18 = FUN_00018fd8(piVar7[0x40], 0, 5);
    __fprintf_chk(__s, 1, "delay %s, dispersion %s, ", uVar13, uVar18);
    uVar13 = FUN_000195dc(piVar7[0x41], piVar7[0x42], 6);
    __fprintf_chk(__s, 1, "offset %s\n\n", uVar13);
LAB_00015108:
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)0x0)
        goto LAB_000156d0;
    goto LAB_00015114;
LAB_00013fb8:
    if (local_fc != 0) {
        __fprintf_chk(stderr, 1,
                      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] "
                      "[-p samples] [-o version#] [-t timeo] server ...\n",
                      progname);
        /* WARNING: Subroutine does not return */
        exit(2);
    }
    if (sys_samples == 0) {
        if (simple_query == 0) {
            sys_samples = 4;
        } else {
            sys_samples = 1;
        }
    }
    if ((debug == 0) && (simple_query == 0)) {
        if (syslogit != 0) {
        LAB_00015810:
            openlog("ntpdate", 9, 0x18);
            if (debug == 0) {
                iVar4 = 0x7f;
            } else {
                iVar4 = 0xff;
            }
            setlogmask(iVar4);
            if (debug != 0)
                goto LAB_000142a4;
        }
    LAB_00014058:
        if (verbose != 0)
            goto LAB_000142a4;
    } else {
        setvbuf(stdout, &DAT_0004127c, 1, 0x2000);
        if (syslogit != 0)
            goto LAB_00015810;
        if (debug == 0)
            goto LAB_00014058;
    LAB_000142a4:
        FUN_0001a848(5, "%s", Version);
    }
    if (ntp_optind < param_1) {
        do {
            pcVar5 = (char *)0x0;
            paVar39 = (addrinfo *)0x0;
            uVar13 = 0;
            uVar18 = 0;
            __name = (char *)param_2[ntp_optind];
            FUN_00020410(local_44, &DAT_0002c7f8, 5);
            iVar4 = local_b4.ai_protocol;
            local_b4.ai_family = ai_fam_templ;
            local_b4.ai_addrlen = (socklen_t)pcVar5;
            local_b4.ai_protocol = iVar4;
            local_b4.ai_socktype = 2;
            local_b4.ai_flags = (int)pcVar5;
            local_b4.ai_addr = (sockaddr *)paVar39;
            local_b4.ai_canonname = pcVar5;
            local_b4.ai_next = paVar39;
            iVar4 = getaddrinfo(__name, (char *)local_44, &local_b4,
                                (addrinfo **)&local_bc);
            uVar19 = stderr;
            if (iVar4 == 0) {
                if ((addrinfo *)local_bc.tv_sec != (addrinfo *)0x0) {
                    paVar21 = (addrinfo *)local_bc.tv_sec;
                    do {
                        paStack_68 = paVar39;
                        local_6c = (undefined1[4])pcVar5;
                        uStack_58 = CONCAT44(uStack_58._4_4_, uVar18);
                        local_60 = pcVar5;
                        paStack_5c = paVar39;
                        uStack_50 = uVar13;
                        uStack_4c = uVar18;
                        if (0x1c < paVar21->ai_addrlen) {
                            /* WARNING: Subroutine does not return */
                            FUN_00020788("ntpdate.c", 0x578, 2,
                                         "ptr->ai_addrlen <= sizeof(addr)");
                        }
                        __memcpy_chk((sockaddr *)local_6c, paVar21->ai_addr,
                                     paVar21->ai_addrlen, 0x1c);
                        iVar4 = socket((uint)(ushort)local_6c._0_2_, 2, 0);
                        piVar7 = sys_servers;
                        if (iVar4 != -1) {
                            if (local_6c._0_2_ == 2) {
                                sVar16 = 0x10;
                            } else {
                                sVar16 = 0x1c;
                            }
                            iVar6 =
                                connect(iVar4, (sockaddr *)local_6c, sVar16);
                            if (iVar6 == 0) {
                                close(iVar4);
                                piVar7 = (int *)FUN_000196bc(0, 0x110, 0, 1);
                                memcpy(piVar7 + 1, paVar21->ai_addr,
                                       paVar21->ai_addrlen);
                                sys_numservers = sys_numservers + 1;
                                piVar7[0xf] = sys_numservers;
                                piVar25 = sys_servers;
                                if (sys_servers != (int *)0x0) {
                                    do {
                                        piVar17 = piVar25;
                                        piVar25 = (int *)*piVar17;
                                    } while (piVar25 != (int *)0x0);
                                    *piVar17 = (int)piVar7;
                                    piVar7 = sys_servers;
                                }
                            } else {
                                close(iVar4);
                                piVar7 = sys_servers;
                            }
                        }
                        sys_servers = piVar7;
                        paVar21 = paVar21->ai_next;
                    } while (paVar21 != (addrinfo *)0x0);
                }
                freeaddrinfo((addrinfo *)local_bc.tv_sec);
            } else {
                if (iVar4 + 4U < 2) {
                    pcVar5 = gai_strerror(iVar4);
                    __fprintf_chk(
                        uVar19, 1,
                        "Exiting, name server cannot be used: %s (%d)", pcVar5,
                        iVar4);
                    pcVar5 = gai_strerror(iVar4);
                    FUN_0001a848(3, "name server cannot be used: %s (%d)",
                                 pcVar5, iVar4);
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                pcVar5 = gai_strerror(iVar4);
                __fprintf_chk(uVar19, 1, "Error resolving %s: %s (%d)\n",
                              __name, pcVar5, iVar4);
                pcVar5 = gai_strerror(iVar4);
                FUN_0001a848(3, "Can\'t find host %s: %s (%d)", __name, pcVar5,
                             iVar4);
            }
            ntp_optind = ntp_optind + 1;
        } while (ntp_optind < param_1);
    }
    if (sys_numservers == 0) {
        FUN_0001a848(3, "no servers can be used, exiting");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    if (sys_authenticate != 0) {
        FUN_000179bc();
        iVar4 = FUN_000189d0(key_file);
        if (iVar4 == 0) {
            FUN_0001a848(3, "no key file <%s>, exiting", key_file);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        FUN_00018064(sys_authkey, 1);
        iVar4 = FUN_00018188(sys_authkey);
        if (iVar4 == 0) {
            FUN_0001a848(3, "authentication key %lu unknown", sys_authkey);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    local_bc.tv_sec = 1;
    if (debug == 0) {
        if (simple_query == 0) {
            local_fc = (uint)(unpriv_port == 0);
        } else {
            local_fc = 0;
        }
    }
    FUN_0001d5a0(sys_numservers + 2);
    FUN_00020410(local_44, &DAT_0002c7f8, 5);
    local_b4.ai_protocol = 0;
    local_b4.ai_addrlen = 0;
    local_b4.ai_addr = (sockaddr *)0x0;
    local_b4.ai_canonname = (char *)0x0;
    local_b4.ai_next = (addrinfo *)0x0;
    local_b4.ai_flags = 1;
    local_b4.ai_socktype = 2;
    local_b4.ai_family = ai_fam_templ;
    iVar4 = getaddrinfo((char *)0x0, (char *)local_44, &local_b4, &local_c8);
    paVar39 = local_c8;
    if (iVar4 != 0) {
        FUN_0001a848(3, "getaddrinfo() failed: %m");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    nbsock = 0;
    if (local_c8 != (addrinfo *)0x0) {
        iVar4 = 0;
        do {
            iVar6 = socket(local_c8->ai_family, local_c8->ai_socktype,
                           local_c8->ai_protocol);
            *(int *)((int)&fd + iVar4 * 4) = iVar6;
            iVar4 = nbsock;
            iVar6 = *(int *)((int)&fd + nbsock * 4);
            if (iVar6 == -1) {
                puVar8 = (uint *)__errno_location();
                uVar29 = *puVar8;
                bVar37 = 0x5c < uVar29;
                if (uVar29 != 0x5d) {
                    bVar37 = uVar29 != 0x60;
                }
                if (bVar37 && (uVar29 != 0x5d && uVar29 != 0x61)) {
                    FUN_0001a848(3, "socket() failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
            } else {
                iVar4 = setsockopt(iVar6, 1, 2, &local_bc, 4);
                if (iVar4 < 0) {
                    FUN_0001a848(3, "setsockopt() SO_REUSEADDR failed: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar4 = local_c8->ai_family;
                if (iVar4 == 10) {
                    iVar4 = setsockopt(*(int *)((int)&fd + nbsock * 4), 0x29,
                                       0x1a, &local_bc, 4);
                    if (iVar4 < 0) {
                        FUN_0001a848(3, "setsockopt() IPV6_V6ONLY failed: %m");
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                    iVar4 = local_c8->ai_family;
                }
                iVar6 = nbsock;
                *(int *)((int)&fd_family + nbsock * 4) = iVar4;
                if (local_fc != 0) {
                    local_6c._0_2_ = 0;
                    local_6c[2] = '\0';
                    local_6c[3] = '\0';
                    paStack_68._0_1_ = '\0';
                    paStack_68._1_1_ = '\0';
                    paStack_68._2_1_ = '\0';
                    paStack_68._3_1_ = '\0';
                    local_64[0] = '\0';
                    local_64[1] = '\0';
                    local_64[2] = '\0';
                    local_64[3] = '\0';
                    local_60 = (char *)0x0;
                    paStack_5c = (addrinfo *)0x0;
                    uStack_58 = 0;
                    if (0x1c < local_c8->ai_addrlen) {
                        /* WARNING: Subroutine does not return */
                        FUN_00020788("ntpdate.c", 0x6e6, 2,
                                     "res->ai_addrlen <= sizeof(addr)");
                    }
                    __memcpy_chk((sockaddr *)local_6c, local_c8->ai_addr,
                                 local_c8->ai_addrlen, 0x1c);
                    if (local_6c._0_2_ == 2) {
                        sVar16 = 0x10;
                    } else {
                        sVar16 = 0x1c;
                    }
                    iVar4 = bind(*(int *)((int)&fd + iVar6 * 4),
                                 (sockaddr *)local_6c, sVar16);
                    iVar6 = nbsock;
                    if (iVar4 < 0) {
                        piVar7 = __errno_location();
                        if (*piVar7 == 0x62) {
                            FUN_0001a848(3,
                                         "the NTP socket is in use, exiting");
                        } else {
                            FUN_0001a848(3, "bind() fails: %m");
                        }
                        /* WARNING: Subroutine does not return */
                        exit(1);
                    }
                }
                iVar4 = *(int *)((int)&fd + iVar6 * 4);
                *(int *)(fdmask + iVar6 * 8) = iVar4;
                *(undefined2 *)(fdmask + iVar6 * 8 + 4) = 1;
                iVar4 = fcntl(iVar4, 4, 0x800);
                if (iVar4 < 0) {
                    FUN_0001a848(3, "fcntl(FNDELAY|FASYNC) fails: %m");
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                iVar4 = nbsock + 1;
                nbsock = iVar4;
            }
            local_c8 = local_c8->ai_next;
        } while ((iVar4 < 2) && (local_c8 != (addrinfo *)0x0));
    }
    freeaddrinfo(paVar39);
    alarm_flag = 0;
    FUN_00020624(0xe, &DAT_000136d4);
    local_b4.ai_flags = 0;
    local_b4.ai_socktype = 0;
    local_b4.ai_family = 200000;
    local_b4.ai_protocol = 100000;
    setitimer(ITIMER_REAL, (itimerval *)&local_b4, (itimerval *)0x0);
    setpriority(PRIO_PROCESS, 0, -0xc);
    initializing = 0;
LAB_0001462c:
    if (complete_servers < sys_numservers) {
        local_104 = (int *)alarm_flag;
        if (alarm_flag != 0) {
            alarm_flag = 0;
            local_104 = (int *)0x1;
        }
        iVar4 = FUN_0001d4a4();
        if (iVar4 != 0 || local_104 != (int *)0x0) {
            iVar4 = FUN_0001d89c();
            goto joined_r0x000147ec;
        }
        iVar4 = __poll_chk(fdmask, nbsock, (int)timeout * 1000, 0x10);
        if (iVar4 < 1) {
            piVar7 = __errno_location();
            if (iVar4 == -1) {
                if (*piVar7 != 4) {
                    FUN_0001a848(3, "poll() error: %m");
                }
            } else if (*piVar7 != 0) {
                FUN_0001a848(7, "poll(): nfound = %d, error: %m", iVar4);
            }
        } else {
            FUN_00013c3c();
        }
        if (alarm_flag == 0)
            goto LAB_00014968;
        alarm_flag = 0;
        FUN_0001d4a4();
        iVar4 = FUN_0001d89c();
        if (iVar4 != 0) {
            local_104 = (int *)0x1;
            goto LAB_0001471c;
        }
        goto LAB_000147c4;
    }
    iVar4 = debug;
    if (sys_servers != (int *)0x0) {
        uVar29 = sys_samples - 1;
        if (uVar29 < 8) {
            piVar7 = sys_servers;
            do {
                uVar23 = sys_samples;
                uVar27 = 0;
                puVar8 = (uint *)local_6c;
                do {
                    *puVar8 = uVar27;
                    uVar27 = uVar27 + 1;
                    puVar8 = puVar8 + 1;
                } while ((int)uVar27 < (int)sys_samples);
                iVar4 = 0;
                puVar8 = (uint *)local_6c;
                if (0 < (int)uVar29) {
                    do {
                        iVar4 = iVar4 + 1;
                        puVar14 = puVar8;
                        if (iVar4 < (int)sys_samples) {
                            do {
                                puVar14 = puVar14 + 1;
                                if ((piVar7[*puVar14 + 0x13] != 0) &&
                                    (uVar27 = *puVar8,
                                     piVar7[uVar27 + 0x13] == 0 ||
                                         piVar7[*puVar14 + 0x13] <
                                             piVar7[uVar27 + 0x13])) {
                                    *puVar8 = *puVar14;
                                    *puVar14 = uVar27;
                                }
                            } while (&uStack_70 + sys_samples != puVar14);
                        }
                        puVar8 = puVar8 + 1;
                    } while (iVar4 < (int)uVar29);
                }
                if (piVar7[(int)local_6c + 0x13] == 0) {
                    piVar7[0x3f] = 0;
                    piVar7[0x42] = 0;
                    piVar7[0x41] = 0;
                    piVar7[0x43] = 0;
                    piVar7[0x40] = 0x400000;
                    piVar7 = (int *)*piVar7;
                } else {
                    piVar7[0x3f] = piVar7[(int)local_6c + 0x13];
                    iVar4 = piVar7[(int)local_6c * 2 + 0x1b];
                    iVar6 = piVar7[(int)local_6c * 2 + 0x1c];
                    piVar7[0x41] = iVar4;
                    piVar7[0x42] = iVar6;
                    if (iVar4 < 0x10000) {
                        if (iVar4 < -0xffff) {
                            uVar29 = 0x80000000;
                        } else {
                            uVar29 = iVar4 << 0x10 | (uint)piVar7[0x42] >> 0x10;
                        }
                    } else {
                        uVar29 = 0x7fffffff;
                    }
                    piVar7[0x43] = uVar29;
                    piVar7[0x40] = 0;
                    if (uVar23 != 1) {
                        iVar4 = 0;
                        uVar29 = 1;
                        do {
                            uVar27 = *(uint *)((int)local_6c + uVar29 * 4);
                            if (piVar7[uVar27 + 0x13] == 0) {
                                uVar27 = 0x400000;
                            } else {
                                uVar27 = piVar7[uVar27 + 0x2b] -
                                         piVar7[(int)local_6c + 0x2b];
                                if ((int)uVar27 < 0) {
                                    uVar27 = -uVar27;
                                }
                                if (0x3fffff < (int)uVar27) {
                                    uVar27 = 0x400000;
                                }
                            }
                            iVar4 = iVar4 + (uVar27 >> (uVar29 & 0xff));
                            uVar29 = uVar29 + 1;
                        } while (uVar23 != uVar29);
                        piVar7[0x40] = iVar4;
                    }
                    piVar7 = (int *)*piVar7;
                }
                if (piVar7 == (int *)0x0) {
                    iVar4 = debug;
                    if (sys_servers == (int *)0x0)
                        goto joined_r0x000155e8;
                    uVar29 = 0;
                    piVar7 = sys_servers;
                    goto LAB_00014c08;
                }
                uVar29 = sys_samples - 1;
            } while (uVar29 < 8);
        }
        /* WARNING: Subroutine does not return */
        FUN_00020788("ntpdate.c", 0x3c6, 2,
                     "(0 < sys_samples) && (sys_samples <= 8)");
    }
joined_r0x000155e8:
    if (iVar4 == 0) {
        if ((simple_query != 0) && (sys_servers != (int *)0x0)) {
            local_104 = (int *)0x0;
            piVar7 = sys_servers;
            goto LAB_00015114;
        }
    } else {
        putchar(10);
        if (sys_servers != (int *)0x0) {
            local_104 = (int *)0x0;
            piVar7 = sys_servers;
            goto LAB_00015114;
        }
    }
LAB_00015618:
    FUN_0001a848(3, "no server suitable for synchronization found");
    local_dc = 1;
LAB_00015c10:
    if (local_3c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_dc);
    }
    return;
}

/* WARNING: Control flow encountered bad instruction data */

void entry(undefined4 param_1, undefined4 *param_2)

{
    undefined4 *extraout_r1;
    undefined1 *unaff_r10;
    undefined4 unaff_r11;
    undefined1 in_NG;
    undefined1 in_ZR;
    char in_OV;
    undefined4 in_cr0;
    undefined4 in_cr15;

    if ((bool)in_ZR) {
        func_0x0004f708();
        param_2 = extraout_r1;
    }
    if ((bool)in_ZR) {
        coprocessor_function(0, 0, 2, in_cr15, in_cr0, in_cr15);
    }
    if ((bool)in_NG) {
        *unaff_r10 = (char)unaff_r11;
    }
    if (in_NG != in_OV) {
        *param_2 = unaff_r11;
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/* WARNING: Removing unreachable block (ram,0x00013620) */

void FUN_0001360c(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013640) */
/* WARNING: Removing unreachable block (ram,0x00013646) */

void FUN_00013630(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013674) */
/* WARNING: Removing unreachable block (ram,0x0001367a) */

void FUN_0001365c(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00041278 == '\0') {
        __cxa_finalize(DAT_00041004);
        FUN_00013630();
        DAT_00041278 = '\x01';
    }
    return;
}

void FUN_00013730(sockaddr *param_1, void *param_2, size_t param_3)

{
    int iVar1;
    int iVar2;
    ssize_t sVar3;
    int *piVar4;
    undefined4 uVar5;
    socklen_t __addr_len;
    uint uVar6;

    iVar1 = __stack_chk_guard;
    uVar6 = (uint)param_1->sa_family;
    if (uVar6 == (uint)fd_family) {
        iVar2 = 0;
    } else {
        if (uVar6 != fd_family._4_4_)
            goto LAB_0001377c;
        iVar2 = 1;
    }
    iVar2 = *(int *)((int)&fd + iVar2 * 4);
    if (iVar2 != -1) {
        if (uVar6 == 2) {
            __addr_len = 0x10;
        } else {
            __addr_len = 0x1c;
        }
        sVar3 = sendto(iVar2, param_2, param_3, 0, param_1, __addr_len);
        if ((sVar3 == -1) &&
            (piVar4 = __errno_location(), *piVar4 != 0xb && *piVar4 != 0x69)) {
            uVar5 = FUN_0001fa84(param_1);
            if (iVar1 == __stack_chk_guard) {
                FUN_0001a848(3, "sendto(%s): %m", uVar5);
                return;
            }
        } else if (iVar1 == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
LAB_0001377c:
    FUN_0001a848(3, "cannot find family compatible socket to send ntp packet");
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00013a94(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    bool bVar7;
    byte local_86c[40];
    uint local_844;
    uint local_840;
    uint local_83c;
    int local_24;

    iVar6 = __stack_chk_guard;
    uVar4 = (uint) * (ushort *)(param_1 + 0x4a);
    if (uVar4 < 8 && uVar4 < *(ushort *)(param_1 + 0x44)) {
        uVar3 = uVar4 + 1;
        iVar1 = uVar4 * 8 + 0x6c;
        iVar5 = param_1 + uVar4 * 4;
        uVar4 = uVar3 & 0xffff;
        *(undefined4 *)(iVar5 + 0x4c) = 0;
        *(undefined4 *)(param_1 + iVar1) = 0;
        *(undefined4 *)(param_1 + iVar1 + 4) = 0;
        *(undefined4 *)(iVar5 + 0xac) = 0;
        *(undefined4 *)(iVar5 + 0xcc) = 0;
        *(short *)(param_1 + 0x4a) = (short)uVar3;
    }
    if ((int)uVar4 < sys_samples) {
        if (iVar6 == __stack_chk_guard) {
            iVar6 = param_1 + 4;
            local_24 = __stack_chk_guard;
            if (debug != 0) {
                uVar2 = FUN_0001f6bc(iVar6);
                __printf_chk(1, "transmit(%s)\n", uVar2);
            }
            local_86c[1] = 0;
            local_86c[0xc] = 0;
            local_86c[0xd] = 0;
            local_86c[0xe] = 0;
            local_86c[0xf] = 0;
            local_86c[0x14] = 0;
            local_86c[0x15] = 0;
            local_86c[0x16] = 0;
            local_86c[0x17] = 0;
            local_86c[0x10] = 0;
            local_86c[0x11] = 0;
            local_86c[0x12] = 0;
            local_86c[0x13] = 0;
            local_86c[0x1c] = 0;
            local_86c[0x1d] = 0;
            local_86c[0x1e] = 0;
            local_86c[0x1f] = 0;
            local_86c[0x18] = 0;
            local_86c[0x19] = 0;
            local_86c[0x1a] = 0;
            local_86c[0x1b] = 0;
            local_86c[0x24] = 0;
            local_86c[0x25] = 0;
            local_86c[0x26] = 0;
            local_86c[0x27] = 0;
            local_86c[0x20] = 0;
            local_86c[0x21] = 0;
            local_86c[0x22] = 0;
            local_86c[0x23] = 0;
            local_86c[0] = ~(~((byte)(sys_version << 3) & 0x38) & 0x3c);
            local_86c[2] = 3;
            local_86c[3] = 0xfa;
            local_86c[4] = 0;
            local_86c[5] = 1;
            local_86c[6] = 0;
            local_86c[7] = 0;
            local_86c[8] = 0;
            local_86c[9] = 1;
            local_86c[10] = 0;
            local_86c[0xb] = 0;
            if (sys_authenticate == 0) {
                FUN_000165b4(param_1 + 0xf4);
                uVar4 = *(uint *)(param_1 + 0xf4);
                uVar3 = *(uint *)(param_1 + 0xf8);
                local_844 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
                local_840 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                FUN_00013730(iVar6, local_86c, 0x30);
                if (1 < debug) {
                    uVar2 = FUN_0001f6bc(iVar6);
                    __printf_chk(1, "transmit to %s\n", uVar2);
                }
            } else {
                local_83c =
                    sys_authkey << 0x18 | (sys_authkey >> 8 & 0xff) << 0x10 |
                    (sys_authkey >> 0x10 & 0xff) << 8 | sys_authkey >> 0x18;
                FUN_000165b4(param_1 + 0xf4);
                uVar4 = sys_authkey;
                bVar7 = CARRY4(*(uint *)(param_1 + 0xf8), sys_authdelay);
                uVar3 = *(uint *)(param_1 + 0xf8) + sys_authdelay;
                *(uint *)(param_1 + 0xf8) = uVar3;
                local_840 = uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                uVar3 = (uint)bVar7 + *(int *)(param_1 + 0xf4);
                *(uint *)(param_1 + 0xf4) = uVar3;
                local_844 = uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
                iVar1 = FUN_00018638(uVar4, local_86c, 0x30);
                FUN_00013730(iVar6, local_86c, iVar1 + 0x30);
                if (1 < debug) {
                    uVar2 = FUN_0001f6bc(iVar6);
                    __printf_chk(1, "transmit auth to %s\n", uVar2);
                }
            }
            bVar7 = local_24 != __stack_chk_guard;
            *(int *)(param_1 + 0x3c) = current_time + sys_timeout;
            *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
            if (bVar7) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
    } else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        complete_servers = complete_servers + 1;
        if (iVar6 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00013b8c(void)

{
    int iVar1;
    int *piVar2;

    iVar1 = __stack_chk_guard;
    current_time = current_time + 1;
    piVar2 = sys_servers;
    if (sys_servers != (int *)0x0) {
        do {
            while ((piVar2[0xf] == 0 || (current_time < (uint)piVar2[0xf]))) {
                piVar2 = (int *)*piVar2;
                if (piVar2 == (int *)0x0)
                    goto LAB_00013c10;
            }
            FUN_00013a94(piVar2);
            piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
    }
LAB_00013c10:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00013c3c(void)

{
    int iVar1;
    ssize_t sVar2;
    int *piVar3;
    int iVar4;
    socklen_t local_ac;
    undefined4 local_a8;
    undefined4 uStack_a4;
    undefined4 local_a0;
    uint uStack_9c;
    undefined4 uStack_98;
    uint uStack_94;
    undefined1 auStack_90[100];
    int local_2c;

    iVar4 = 0;
    local_2c = __stack_chk_guard;
    do {
        local_a0 = fdmask._0_4_;
        uStack_9c = fdmask._4_4_;
        uStack_98 = fdmask._8_4_;
        uStack_94 = fdmask._12_4_;
        iVar1 = __poll_chk(&local_a0, nbsock, 0, 0x10);
        if (0 < nbsock) {
            if ((uStack_9c & 0x10000) == 0) {
                if ((nbsock == 1) || ((uStack_94 & 0x10000) == 0))
                    goto joined_r0x00013cc8;
                iVar4 = 1;
            } else {
                iVar4 = 0;
            }
            iVar4 = *(int *)((int)&fd + iVar4 * 4);
        }
    joined_r0x00013cc8:
        if (iVar1 == 0)
            goto LAB_00013d84;
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            if (*piVar3 != 4) {
                FUN_0001a848(3, "poll() error: %m");
            }
        LAB_00013d84:
            if (local_2c != __stack_chk_guard) {
                /* WARNING: Subroutine does not return */
                __stack_chk_fail();
            }
            return;
        }
        FUN_000165b4(&local_a8);
        if ((initializing == 0) && (iVar1 = FUN_0001d450(), iVar1 != 0)) {
            iVar1 = FUN_0001d800();
            local_ac = 0x1c;
            sVar2 = recvfrom(iVar4, (void *)(iVar1 + 0x58), 0x848, 0,
                             (sockaddr *)(iVar1 + 4), &local_ac);
            *(ssize_t *)(iVar1 + 0x54) = sVar2;
            if (sVar2 == -1) {
                FUN_0001d6a0(iVar1);
            } else {
                *(undefined4 *)(iVar1 + 0x48) = local_a8;
                *(undefined4 *)(iVar1 + 0x4c) = uStack_a4;
                FUN_0001d73c(iVar1);
            }
        } else {
            read(iVar4, auStack_90, 100);
        }
    } while (true);
}

/* WARNING: Removing unreachable block (ram,0x000165a8) */

void FUN_00016570(void)

{
    return;
}

void FUN_000165b4(int *param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    bool bVar9;
    bool bVar10;
    undefined4 uVar11;
    double dVar12;
    undefined4 extraout_s1;
    undefined8 uVar13;
    double dVar14;
    timeval local_5c;
    timeval tStack_54;
    int local_4c;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    iVar2 = clock_gettime(0, &local_34);
    if (iVar2 < 0) {
        uVar11 = FUN_00013530();
        local_4c = __stack_chk_guard;
        if ((double)CONCAT44(extraout_s1, uVar11) == 0.0) {
            if (((enable_panic_check != 0) && (allow_panic != 0)) &&
                (FUN_0001a848(3, "adj_systime: allow_panic is TRUE!"),
                 allow_panic != 0)) {
                /* WARNING: Subroutine does not return */
                FUN_00020788("systime.c", 0x136, 2, "!allow_panic");
            }
        } else {
            dVar12 = (double)CONCAT44(extraout_s1, uVar11) + sys_residual;
            bVar9 = dVar12 < 0.0;
            if (bVar9) {
                dVar12 = -dVar12;
            }
            local_5c.tv_sec = (__time_t)(longlong)dVar12;
            dVar12 = dVar12 - (double)(longlong)local_5c.tv_sec;
            dVar14 = sys_tick;
            if (sys_tick <= sys_fuzz) {
                dVar14 = 1e-06;
            }
            local_5c.tv_usec =
                (__suseconds_t)(longlong)((double)(longlong)(int)(longlong)(dVar12 /
                                                                                dVar14 +
                                                                            0.5) *
                                              dVar14 * 1000000.0 +
                                          0.5);
            if (999999 < local_5c.tv_usec) {
                local_5c.tv_usec = local_5c.tv_usec + -1000000;
                local_5c.tv_sec = local_5c.tv_sec + 1;
                dVar12 = dVar12 - 1.0;
            }
            sys_residual = dVar12 - (double)(longlong)local_5c.tv_usec * 1e-06;
            if (bVar9) {
                local_5c.tv_sec = -local_5c.tv_sec;
                local_5c.tv_usec = -local_5c.tv_usec;
                sys_residual = -sys_residual;
            }
            if (((local_5c.tv_sec != 0) || (local_5c.tv_usec != 0)) &&
                (iVar2 = adjtime(&local_5c, &tStack_54), iVar2 < 0)) {
                FUN_0001a848(3, "adj_systime: %m");
                iVar2 = enable_panic_check;
                if ((enable_panic_check != 0) &&
                    (iVar2 = allow_panic, allow_panic != 0)) {
                    FUN_0001a848(3, "adj_systime: allow_panic is TRUE!");
                    iVar2 = 0;
                }
                goto LAB_00016ba0;
            }
            if ((enable_panic_check != 0) && (allow_panic != 0)) {
                FUN_0001a848(3, "adj_systime: allow_panic is TRUE!");
            }
        }
        iVar2 = 1;
    LAB_00016ba0:
        if (local_4c == __stack_chk_guard) {
            /* WARNING: Could not recover jumptable at 0x00016bb4. Too many
             * branches */
            /* WARNING: Treating indirect jump as call */
            (*(code *)0x16b48)();
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    if (trunc_os_clock != 0) {
        local_34.tv_nsec =
            (long)(longlong)((double)(longlong)(int)(longlong)(((double)(longlong)
                                                                    local_34
                                                                        .tv_nsec *
                                                                1e-09) /
                                                               sys_tick) *
                             1000000000.0 * sys_tick);
    }
    uVar6 = local_34.tv_nsec + 50000000;
    iVar2 = local_34.tv_sec;
    if ((int)uVar6 < 0) {
        do {
            uVar6 = uVar6 + 1000000000;
            iVar3 = iVar2 + -1;
            iVar2 = iVar2 + -1;
        } while ((int)uVar6 < 0);
    } else {
        iVar3 = local_34.tv_sec;
        if (999999999 < (int)uVar6) {
            uVar6 = local_34.tv_nsec + 0xc7602680;
            bVar10 = SBORROW4(uVar6, 999999999);
            bVar9 = uVar6 != 999999999;
            if ((int)uVar6 < 1000000000) {
                iVar3 = local_34.tv_sec + 1;
            } else {
                iVar3 = local_34.tv_sec + 2;
                uVar6 = 0x5c80;
            }
            if (bVar9 && local_34.tv_nsec + -1949999999 < 0 == bVar10) {
                uVar6 = local_34.tv_nsec + (uVar6 & 0xffff | 0x8bc50000);
            }
        }
    }
    if (DAT_000432b8 < iVar3) {
        iVar2 = 1 - (uint)(iVar3 < DAT_000432b8);
    } else {
        iVar2 = -(uint)(iVar3 < DAT_000432b8);
    }
    if (iVar2 == 0) {
        if (DAT_000432bc < (int)uVar6) {
            iVar2 = 1 - (uint)((int)uVar6 < DAT_000432bc);
        } else {
            iVar2 = -(uint)((int)uVar6 < DAT_000432bc);
        }
    }
    if (iVar2 == -1) {
        DAT_000432c0 = 1;
        sys_lamport = sys_lamport + 1;
    }
    DAT_000432b8 = local_34.tv_sec;
    DAT_000432bc = local_34.tv_nsec;
    iVar3 = sys_fuzz_nsec + DAT_000432c8;
    iVar2 = DAT_000432c4;
    if (iVar3 < 0) {
        do {
            iVar4 = iVar3 + 1000000000;
            iVar2 = iVar2 + -1;
            iVar3 = iVar4;
        } while (iVar4 < 0);
    } else {
        iVar4 = iVar3;
        if (999999999 < iVar3) {
            iVar4 = iVar3 + -1000000000;
            iVar5 = iVar3 + -1999999999;
            if (iVar4 < 1000000000) {
                iVar2 = DAT_000432c4 + 1;
            } else {
                iVar3 = iVar3 + -0x77360000;
            }
            if (iVar4 != 999999999 && iVar5 < 0 == SBORROW4(iVar4, 999999999)) {
                iVar2 = iVar2 + 2;
                iVar4 = iVar3 + 0x6c00;
            }
        }
    }
    if (iVar2 < local_34.tv_sec) {
        iVar3 = 1 - (uint)(local_34.tv_sec < iVar2);
    } else {
        iVar3 = -(uint)(local_34.tv_sec < iVar2);
    }
    if (iVar3 == 0) {
        if (iVar4 < local_34.tv_nsec) {
            iVar3 = 1 - (uint)(local_34.tv_nsec < iVar4);
        } else {
            iVar3 = -(uint)(local_34.tv_nsec < iVar4);
        }
        if (iVar3 == -1)
            goto LAB_00016960;
    LAB_0001677c:
        DAT_000432c4 = local_34.tv_sec;
        DAT_000432c8 = local_34.tv_nsec;
        iVar4 = local_34.tv_nsec;
        iVar2 = local_34.tv_sec;
        if (local_34.tv_nsec < 0)
            goto LAB_00016ae0;
        if (999999999 < local_34.tv_nsec) {
            iVar4 = local_34.tv_nsec + -1000000000;
            iVar3 = local_34.tv_nsec + -1999999999;
            if (iVar4 < 1000000000) {
                iVar2 = local_34.tv_sec + 1;
            } else {
                local_34.tv_nsec = local_34.tv_nsec + -0x77360000;
            }
            if (iVar4 != 999999999 && iVar3 < 0 == SBORROW4(iVar4, 999999999)) {
                iVar2 = iVar2 + 2;
                iVar4 = local_34.tv_nsec + 0x6c00;
            }
        }
    } else {
        if (iVar3 != -1)
            goto LAB_0001677c;
    LAB_00016960:
        iVar5 = iVar4 - local_34.tv_nsec;
        iVar3 = iVar2 - local_34.tv_sec;
        if (iVar5 < 0) {
            do {
                iVar8 = iVar5 + 1000000000;
                iVar3 = iVar3 + -1;
                iVar5 = iVar8;
            } while (iVar8 < 0);
        } else {
            iVar8 = iVar5;
            if (999999999 < iVar5) {
                iVar8 = iVar5 + -1000000000;
                iVar1 = iVar5 + -1999999999;
                if (iVar8 < 1000000000) {
                    iVar3 = iVar3 + 1;
                } else {
                    iVar5 = iVar5 + -0x77360000;
                }
                if (iVar8 != 999999999 &&
                    iVar1 < 0 == SBORROW4(iVar8, 999999999)) {
                    iVar3 = iVar3 + 2;
                    iVar8 = iVar5 + 0x6c00;
                }
            }
        }
        if (0 < iVar3) {
            if (DAT_000432c0 == 0) {
                dVar12 =
                    (double)(longlong)iVar3 + (double)(longlong)iVar8 * 1e-09;
                FUN_0001a848(
                    3, "get_systime Lamport advance exceeds one second (%.9f)",
                    SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            goto LAB_0001677c;
        }
        DAT_000432c8 = iVar4;
        DAT_000432c4 = iVar2;
        if (DAT_000432c0 != 0)
            goto LAB_0001677c;
        for (; local_34.tv_nsec = DAT_000432c8, local_34.tv_sec = DAT_000432c4,
               iVar4 < 0;
             iVar4 = iVar4 + 1000000000) {
        LAB_00016ae0:
            iVar2 = iVar2 + -1;
            DAT_000432c8 = local_34.tv_nsec;
            DAT_000432c4 = local_34.tv_sec;
        }
    }
    uVar13 = VectorShiftRight(CONCAT44(iVar4, iVar4), 0x20);
    uVar13 = VectorShiftLeft(uVar13, 0x20, 0x40, 0);
    local_34.tv_sec = DAT_000432c4;
    local_34.tv_nsec = DAT_000432c8;
    uVar6 = FUN_0002c480((uint)uVar13 + 500000000,
                         (int)((ulonglong)uVar13 >> 0x20) +
                             (uint)(0xe2329aff < (uint)uVar13),
                         1000000000, 0);
    iVar3 = FUN_0001cc4c();
    dVar12 = ((double)(longlong)iVar3 + (double)(longlong)iVar3) *
             2.3283064365386963e-10 * sys_fuzz;
    if (dVar12 < 0.0) {
        dVar12 = ldexp(-dVar12, 0x20);
        uVar13 =
            FUN_0002c4c0(SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
        uVar13 = CONCAT44(
            -((int)((ulonglong)uVar13 >> 0x20) + (uint)((int)uVar13 != 0)),
            -(int)uVar13);
    } else {
        dVar12 = ldexp(dVar12, 0x20);
        uVar13 =
            FUN_0002c4c0(SUB84(dVar12, 0), (int)((ulonglong)dVar12 >> 0x20));
    }
    iVar3 = __stack_chk_guard;
    uVar7 = (uint)uVar13 + uVar6;
    iVar2 = iVar2 + -0x7c558180 + (int)((ulonglong)uVar13 >> 0x20) +
            (uint)CARRY4((uint)uVar13, uVar6);
    if (DAT_000432cc == 0 && DAT_000432d0 == 0) {
        if (DAT_000432c0 == 0)
            goto LAB_000168ac;
    } else if (DAT_000432c0 == 0) {
        if (0.0 < sys_fuzz) {
            iVar4 = iVar2;
            if (uVar7 < DAT_000432d0) {
                iVar4 = iVar2 + -1;
            }
            iVar4 = iVar4 - DAT_000432cc;
            if (uVar7 == DAT_000432d0) {
                iVar4 = iVar4 + -1;
            }
            if (iVar4 < 0) {
                sys_tsrounding = sys_tsrounding + 1;
                iVar2 = (uint)(DAT_000432d0 == 0xffffffff) + DAT_000432cc;
                uVar7 = DAT_000432d0 + 1;
            }
        }
        goto LAB_000168ac;
    }
    DAT_000432c0 = 0;
LAB_000168ac:
    DAT_000432d0 = uVar7;
    DAT_000432cc = iVar2;
    iVar2 = DAT_000432cc;
    param_1[1] = DAT_000432d0;
    *param_1 = iVar2;
    if (local_2c == iVar3) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Control flow encountered bad instruction data */

void FUN_00016dd4(void)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    long lVar5;
    undefined4 extraout_r2;
    uint uVar6;
    undefined4 *puVar7;
    uint uVar8;
    undefined4 unaff_r10;
    undefined4 extraout_r12;
    bool bVar9;
    bool bVar10;
    undefined4 in_cr1;
    undefined4 in_cr2;
    undefined4 in_cr6;
    undefined4 in_cr11;
    double in_d0;
    double dVar11;
    undefined8 uVar12;
    undefined8 uVar13;
    undefined1 auStack_58[4];
    undefined8 *local_54;
    int local_50[2];
    undefined4 local_48;
    int local_44;
    int local_40;
    timespec local_3c;
    int local_34;

    local_48 = 0x7fffffff;
    local_34 = __stack_chk_guard;
    local_54 = &sys_residual;
    if (sys_residual < 0.0) {
        dVar11 = ldexp(-sys_residual, 0x20);
        uVar12 =
            FUN_0002c4c0(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
        uVar12 = CONCAT44(
            -((int)((ulonglong)uVar12 >> 0x20) + (uint)((int)uVar12 != 0)),
            -(int)uVar12);
    } else {
        dVar11 = ldexp(sys_residual, 0x20);
        uVar12 =
            FUN_0002c4c0(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
    }
    if (in_d0 < 0.0) {
        dVar11 = ldexp(-in_d0, 0x20);
        uVar13 =
            FUN_0002c4c0(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
        uVar13 = CONCAT44(
            -((int)((ulonglong)uVar13 >> 0x20) + (uint)((int)uVar13 != 0)),
            -(int)uVar13);
    } else {
        dVar11 = ldexp(in_d0, 0x20);
        uVar13 =
            FUN_0002c4c0(SUB84(dVar11, 0), (int)((ulonglong)dVar11 >> 0x20));
    }
    uVar6 = (uint)uVar12 + (uint)uVar13;
    uVar8 = (uint)CARRY4((uint)uVar12, (uint)uVar13);
    puVar7 = (undefined4 *)((int)((ulonglong)uVar12 >> 0x20) + -0x7c558180 +
                            (int)((ulonglong)uVar13 >> 0x20));
    iVar2 = clock_gettime(0, &local_3c);
    bVar10 = iVar2 == 0;
    bVar9 = true;
    if (iVar2 < 0) {
        uVar4 = FUN_00013530();
        *puVar7 = 0x17138;
        puVar7[-1] = 0x17130;
        puVar7[-2] = extraout_r12;
        puVar7[-3] = unaff_r10;
        puVar7[-4] = &__stack_chk_guard;
        puVar7[-5] = uVar8;
        puVar7[-6] = uVar6;
        puVar7[-7] = extraout_r2;
        puVar7[-8] = uVar4;
        if (!bVar9) {
            coprocessor_function(0xe, 1, 0, in_cr2, in_cr1, in_cr11);
        }
        if (!bVar10) {
            coprocessor_storelong(5, in_cr6, auStack_58);
        }
        if (!bVar9) {
            func_0xfe6c9950(uVar4);
        }
        /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
    }
    if (trunc_os_clock != 0) {
        local_3c.tv_nsec =
            (long)(longlong)((double)(longlong)(int)(longlong)(((double)(longlong)
                                                                    local_3c
                                                                        .tv_nsec *
                                                                1e-09) /
                                                               sys_tick) *
                             1000000000.0 * sys_tick);
    }
    iVar2 = local_3c.tv_nsec;
    if (local_3c.tv_nsec < 0) {
        do {
            iVar2 = iVar2 + 1000000000;
            local_3c.tv_sec = local_3c.tv_sec + -1;
        } while (iVar2 < 0);
    } else if (999999999 < local_3c.tv_nsec) {
        iVar2 = local_3c.tv_nsec + -1000000000;
        if (iVar2 < 1000000000) {
            local_3c.tv_sec = local_3c.tv_sec + 1;
            lVar5 = local_3c.tv_nsec;
        } else {
            lVar5 = local_3c.tv_nsec + -0x77360000;
        }
        if (iVar2 != 999999999 &&
            local_3c.tv_nsec + -1999999999 < 0 == SBORROW4(iVar2, 999999999)) {
            local_3c.tv_sec = local_3c.tv_sec + 2;
            iVar2 = lVar5 + 0x6c00;
        }
    }
    uVar12 = VectorShiftRight(CONCAT44(iVar2, iVar2), 0x20);
    uVar12 = VectorShiftLeft(uVar12, 0x20, 0x40, 0);
    uVar3 = FUN_0002c480((uint)uVar12 + 500000000,
                         (int)((ulonglong)uVar12 >> 0x20) +
                             (uint)(0xe2329aff < (uint)uVar12),
                         1000000000, 0);
    FUN_0001b17c(local_50,
                 (int)puVar7 + (uint)CARRY4(uVar6, uVar3) + local_3c.tv_sec +
                     uVar8,
                 &local_48);
    lVar1 = (ulonglong)(uVar6 + uVar3) * 1000000 + 0x80000000;
    local_40 = (int)((ulonglong)lVar1 >> 0x20);
    if (local_40 == 1000000) {
        local_50[0] = local_50[0] + 1;
    }
    if (local_40 == 1000000) {
        local_40 = 0;
    }
    local_44 = local_50[0];
    iVar2 = FUN_00019dec(&local_44, 0, (int)lVar1);
    if (iVar2 == 0) {
        *(undefined4 *)local_54 = 0;
        *(undefined4 *)((int)local_54 + 4) = 0;
        DAT_000432c0 = (uint)(in_d0 < 0.0);
        if (in_d0 >= 0.0) {
            DAT_000432c0 = 0;
        }
        if (step_callback != (code *)0x0) {
            (*step_callback)();
        }
        if (((enable_panic_check != 0) && (allow_panic != 0)) &&
            (FUN_0001a848(3, "step_systime: allow_panic is TRUE!"),
             allow_panic != 0)) {
            /* WARNING: Subroutine does not return */
            FUN_00020788("systime.c", 0x24d, 2, "!allow_panic");
        }
        iVar2 = 1;
    } else {
        FUN_0001a848(3, "step-systime: %m");
        iVar2 = enable_panic_check;
        if ((enable_panic_check != 0) &&
            (iVar2 = allow_panic, allow_panic != 0)) {
            FUN_0001a848(3, "step_systime: allow_panic is TRUE!");
            iVar2 = 0;
        }
    }
    if (local_34 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

void FUN_000171d0(byte *param_1, undefined4 *param_2)

{
    ushort uVar1;
    int iVar2;
    ushort uVar3;
    ushort **ppuVar4;
    char *pcVar5;
    char *pcVar6;
    byte *pbVar7;
    int iVar8;
    char *pcVar9;
    char *pcVar10;
    ushort uVar11;
    ushort *puVar12;
    byte *pbVar13;
    byte *pbVar14;
    uint uVar15;

    iVar2 = __stack_chk_guard;
    if (param_1 == (byte *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("atolfp.c", 0x2b, 0, "str != ((void *)0)");
    }
    ppuVar4 = __ctype_b_loc();
    puVar12 = *ppuVar4;
    do {
        pbVar14 = param_1;
        pcVar9 = (char *)(uint)*pbVar14;
        uVar11 = puVar12[(int)pcVar9] & 0x2000;
        param_1 = pbVar14 + 1;
    } while ((puVar12[(int)pcVar9] & 0x2000) != 0);
    if (pcVar9 == (char *)0x2d) {
        pcVar9 = (char *)(uint)pbVar14[1];
        uVar11 = 1;
        pbVar14 = pbVar14 + 1;
    }
    if (pcVar9 == (char *)0x2b) {
        pcVar9 = (char *)(uint)pbVar14[1];
        pbVar14 = pbVar14 + 1;
    }
    if (pcVar9 == (char *)0x2e) {
        pcVar10 = (char *)(puVar12[0x2e] & 0x2000);
        if ((puVar12[0x2e] & 0x2000) == 0) {
        LAB_0001730c:
            pcVar9 = (char *)0x0;
            pbVar13 = pbVar14 + 1;
            do {
                pbVar7 = pbVar13;
                uVar15 = (uint)*pbVar7;
                pbVar13 = pbVar7 + ~(uint)pbVar14;
                if ((uVar15 == 0) || (pcVar5 = strchr("0123456789", uVar15),
                                      pcVar5 == (char *)0x0))
                    goto LAB_000173bc;
                pcVar9 = pcVar5 + (int)pcVar9 * 10 + -0x2d068;
                pbVar13 = pbVar7 + 1;
            } while (pbVar14 + 10 != pbVar7 + 1);
            uVar15 = (uint)pbVar7[1];
            pbVar13 = (byte *)0x9;
            pbVar7 = pbVar14 + 10;
        LAB_000173bc:
            while (uVar1 = puVar12[uVar15], (uVar1 & 0x800) != 0) {
                pbVar7 = pbVar7 + 1;
                uVar15 = (uint)*pbVar7;
            }
            if ((uVar15 != 0) &&
                (uVar3 = uVar1 & 0x2000, (uVar1 & 0x2000) == 0))
                goto LAB_000172c0;
            pcVar5 = pcVar9;
            if (pbVar13 != (byte *)0x0) {
                iVar8 = 0x20;
                uVar15 = 0x80000000;
                pcVar5 = (char *)0x0;
                pcVar6 = *(char **)(&DAT_0002d020 + (int)pbVar13 * 4);
                do {
                    pcVar9 = (char *)((int)pcVar9 * 2);
                    if (pcVar6 <= pcVar9) {
                        pcVar5 = (char *)((uint)pcVar5 | uVar15);
                        pcVar9 = pcVar9 + -(int)pcVar6;
                    }
                    iVar8 = iVar8 + -1;
                    uVar15 = uVar15 >> 1;
                } while (iVar8 != 0);
                if (pcVar6 < (char *)((int)pcVar9 << 1)) {
                    pcVar5 = pcVar5 + 1;
                }
            }
        } else {
        LAB_000172e4:
            pcVar10 = (char *)0x0;
            pcVar5 = (char *)0x0;
        }
    } else {
        uVar3 = puVar12[(int)pcVar9] & 0x800;
        if ((puVar12[(int)pcVar9] & 0x800) == 0)
            goto LAB_000172c0;
        if (pcVar9 == (char *)0x0)
            goto LAB_000172e4;
        pcVar10 = (char *)0x0;
        do {
            pcVar5 = strchr("0123456789", (int)pcVar9);
            if (pcVar5 == (char *)0x0) {
                uVar3 = puVar12[(int)pcVar9] & 0x2000;
                pcVar5 = (char *)0x0;
                if ((puVar12[(int)pcVar9] & 0x2000) == 0) {
                    if (pcVar9 != (char *)0x2e)
                        goto LAB_000172c0;
                    goto LAB_0001730c;
                }
                break;
            }
            pbVar14 = pbVar14 + 1;
            pcVar9 = (char *)(uint)*pbVar14;
            pcVar10 = pcVar5 + (int)pcVar10 * 10 + -0x2d068;
            pcVar5 = pcVar9;
        } while (pcVar9 != (char *)0x0);
    }
    pcVar9 = pcVar5;
    if (uVar11 != 0) {
        pcVar9 = (char *)-(int)pcVar5;
        pcVar10 = (char *)~(uint)pcVar10;
        if (pcVar5 == (char *)0x0) {
            pcVar10 = pcVar10 + 1;
        }
    }
    uVar3 = 1;
    *param_2 = pcVar10;
    param_2[1] = pcVar9;
LAB_000172c0:
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
}

/* WARNING: Removing unreachable block (ram,0x00017510) */

void FUN_0001748c(void)

{
    cache_keyid = 0;
    cache_type = 0;
    cache_flags = 0;
    cache_secret = 0;
    cache_secretsize = 0;
    cache_keyacclist = 0;
    return;
}

void FUN_00017534(undefined4 param_1, undefined4 *param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined4 *)FUN_000196bc(0, 0x24, 0);
    uVar6 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar3[1] = *param_2;
    iVar2 = __stack_chk_guard;
    puVar3[2] = uVar6;
    puVar3[3] = uVar4;
    puVar3[4] = uVar5;
    uVar5 = param_2[5];
    uVar4 = param_2[6];
    puVar3[5] = param_2[4];
    puVar3[6] = uVar5;
    puVar3[7] = uVar4;
    puVar3[8] = param_3;
    *puVar3 = param_1;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000175d8(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;

    iVar1 = __stack_chk_guard;
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*param_1;
        free(param_1);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar2);
}

void FUN_00017630(int param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 != 0) {
        do {
            iVar2 = FUN_000175d8();
        } while (iVar2 != 0);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
}

void FUN_0001768c(int *param_1)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;

    iVar2 = __stack_chk_guard;
    if (param_1 != (int *)0x0) {
        if (param_1[6] == cache_keyid) {
            FUN_0001748c();
        }
        FUN_00017630(param_1[4]);
        iVar5 = key_hash;
        uVar3 = param_1[6];
        uVar6 = (uint)authhashmask;
        piVar7 = (int *)(key_hash + (uVar6 & uVar3) * 4);
        if ((void *)param_1[3] != (void *)0x0) {
            memset((void *)param_1[3], 0, param_1[8]);
            free((void *)param_1[3]);
        }
        piVar4 = *(int **)(iVar5 + (uVar6 & uVar3) * 4);
        if (param_1 == piVar4) {
        LAB_00017760:
            *piVar7 = *piVar4;
        } else if (piVar4 != (int *)0x0) {
            piVar7 = piVar4;
            for (piVar1 = (int *)*piVar4; piVar1 != (int *)0x0;
                 piVar1 = (int *)*piVar1) {
                piVar4 = param_1;
                if (param_1 == piVar1)
                    goto LAB_00017760;
                piVar7 = piVar1;
            }
        }
        iVar5 = param_1[1];
        *(int *)(iVar5 + 8) = param_1[2];
        *(int *)(param_1[2] + 4) = iVar5;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        piVar7 = param_1;
        param_1[2] = (int)authfreekeys;
        authfreekeys = piVar7;
        authnumkeys = authnumkeys + -1;
        authnumfreekeys = authnumfreekeys + 1;
    }
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017810(short *param_1, short *param_2, uint param_3)

{
    uint __n;
    short sVar1;
    int iVar2;
    int iVar3;
    uint uVar4;

    iVar2 = __stack_chk_guard;
    if (param_1 == (short *)0x0)
        goto LAB_00017858;
    sVar1 = *param_1;
    if ((sVar1 != 0 && param_2 != (short *)0x0) &&
        (sVar1 == *param_2 && *param_2 != 0)) {
        if (sVar1 == 2) {
            param_1 = param_1 + 2;
            param_2 = param_2 + 2;
            if (0x1f < param_3) {
                param_3 = 0x20;
            }
        } else {
            if ((sVar1 != 10) ||
                (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)))
                goto LAB_00017854;
            param_1 = param_1 + 4;
            param_2 = param_2 + 4;
            if (0x7f < param_3) {
                param_3 = 0x80;
            }
        }
        __n = param_3 >> 3;
        uVar4 = ~(0xffU >> (param_3 & 7)) & 0xff;
        if ((__n == 0) || (iVar3 = memcmp(param_1, param_2, __n), iVar3 == 0)) {
            if (uVar4 == 0) {
                param_1 = (short *)0x1;
            } else {
                param_1 =
                    (short *)(uint)((uVar4 & (*(byte *)((int)param_1 + __n) ^
                                              *(byte *)((int)param_2 + __n))) ==
                                    0);
            }
            goto LAB_00017858;
        }
    }
LAB_00017854:
    param_1 = (short *)0x0;
LAB_00017858:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
    }
    return;
}

void FUN_00017934(int *param_1, undefined4 param_2, int param_3)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (param_1 == (int *)0x0) {
        if (param_3 != 0) {
            param_3 = 1;
        }
    } else {
        do {
            iVar2 = FUN_00017810(param_1 + 1, param_2, param_1[8]);
            if (iVar2 != 0) {
                param_3 = 1;
                break;
            }
            param_1 = (int *)*param_1;
            param_3 = 0;
        } while (param_1 != (int *)0x0);
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_3);
    }
    return;
}

void FUN_000179bc(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = (uint)authhashbuckets;
    key_hash = (void *)FUN_000196bc(key_hash, uVar2 << 2, 0);
    memset(key_hash, 0, uVar2 << 2);
    key_listhead._8_4_ = key_listhead;
    key_listhead._4_4_ = key_listhead;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017a58(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 < 1) {
        param_1 = 0x10;
    }
    iVar2 = FUN_00019780(0, param_1, 0x28);
    authnumfreekeys = authnumfreekeys + param_1;
    iVar3 = param_1;
    iVar4 = iVar2;
    do {
        iVar3 = iVar3 + -1;
        *(int *)(iVar4 + 8) = authfreekeys;
        authfreekeys = iVar4;
        iVar4 = iVar4 + 0x28;
    } while (iVar3 != 0);
    authfreekeys = (param_1 + -1) * 0x28 + iVar2;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00017b18(uint param_1, undefined2 param_2, undefined2 param_3,
                  undefined4 param_4, undefined4 param_5, undefined4 param_6,
                  undefined4 param_7)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;

    iVar3 = __stack_chk_guard;
    iVar1 = key_hash;
    uVar4 = (uint)authhashmask;
    if (authnumfreekeys < 1) {
        FUN_00017a58(0xffffffff);
    }
    puVar2 = authfreekeys;
    authnumfreekeys = authnumfreekeys + -1;
    if (authfreekeys != (undefined4 *)0x0) {
        authfreekeys = (undefined4 *)authfreekeys[2];
    }
    uVar5 = *(undefined4 *)(iVar1 + (uVar4 & param_1) * 4);
    puVar2[8] = param_5;
    *puVar2 = uVar5;
    *(undefined2 *)(puVar2 + 9) = param_2;
    *(undefined2 *)(puVar2 + 7) = param_3;
    puVar2[6] = param_1;
    puVar2[3] = param_6;
    puVar2[4] = param_7;
    puVar2[5] = param_4;
    *(undefined4 **)(iVar1 + (uVar4 & param_1) * 4) = puVar2;
    uVar5 = key_listhead._4_4_;
    puVar2[2] = key_listhead;
    puVar2[1] = uVar5;
    uVar5 = key_listhead._4_4_;
    key_listhead._4_4_ = puVar2;
    *(undefined4 **)(uVar5 + 8) = puVar2;
    authnumkeys = authnumkeys + 1;
    if (iVar3 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00017c64(int param_1)

{
    size_t __n;
    void *pvVar1;
    int iVar2;
    uint uVar3;
    undefined4 *puVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    undefined4 *puVar8;
    int iVar9;

    iVar2 = __stack_chk_guard;
    uVar5 = authnumkeys + authnumfreekeys;
    if (0 < (int)(param_1 - uVar5)) {
        FUN_00017a58();
        uVar5 = authnumkeys + authnumfreekeys;
    }
    uVar5 = uVar5 >> 2;
    iVar9 = 5;
    iVar6 = 0;
    iVar7 = 0x10;
    uVar3 = 0xffffffff;
    do {
        uVar3 = uVar3 << iVar7;
        if ((uVar3 & uVar5) == 0) {
            uVar5 = uVar5 << iVar7;
        } else {
            iVar6 = iVar6 + iVar7;
        }
        iVar9 = iVar9 + -1;
        iVar7 = iVar7 >> 1;
    } while (iVar9 != 0);
    uVar5 = iVar6 + 1U & 0xffff;
    if (uVar5 < 4) {
        uVar5 = 4;
    }
    if (0xe < uVar5) {
        uVar5 = 0xf;
    }
    __n = 4 << (uVar5 & 0xff);
    authhashbuckets = (short)(1 << (uVar5 & 0xff));
    authhashmask = authhashbuckets - 1;
    key_hash = (void *)FUN_000196bc(key_hash, __n, 0, 0);
    memset(key_hash, 0, __n);
    pvVar1 = key_hash;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
        uVar5 = (uint)authhashmask;
        puVar8 = (undefined4 *)key_listhead._8_4_;
        do {
            puVar4 = (undefined4 *)puVar8[2];
            *puVar8 = *(undefined4 *)((int)pvVar1 + (puVar8[6] & uVar5) * 4);
            *(undefined4 **)((int)pvVar1 + (puVar8[6] & uVar5) * 4) = puVar8;
            puVar8 = puVar4;
        } while (puVar4 != (undefined4 *)key_listhead);
    }
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00017e68) */

void FUN_00017ddc(uint param_1)

{
    uint uVar1;
    int *piVar2;

    piVar2 = *(int **)(key_hash + (authhashmask & param_1) * 4);
    if (piVar2 != (int *)0x0) {
        uVar1 = piVar2[6];
        while ((param_1 != uVar1 &&
                (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0))) {
            uVar1 = piVar2[6];
        }
    }
    return;
}

void FUN_00017ef4(int param_1)

{
    ushort uVar1;
    int iVar2;
    ushort uVar3;
    int iVar4;

    iVar2 = __stack_chk_guard;
    authkeylookups = authkeylookups + 1;
    if ((param_1 == 0) || (cache_keyid == param_1)) {
        uVar3 = cache_flags & 1;
    } else {
        authkeyuncached = authkeyuncached + 1;
        iVar4 = FUN_00017ddc();
        if ((iVar4 == 0) || (*(ushort *)(iVar4 + 0x1c) == 0)) {
            uVar3 = 0;
            authkeynotfound = authkeynotfound + 1;
        } else {
            uVar1 = *(ushort *)(iVar4 + 0x24);
            uVar3 = uVar1 & 1;
            if ((uVar1 & 1) == 0) {
                authnokey = authnokey + 1;
            } else {
                cache_keyid = *(int *)(iVar4 + 0x18);
                uVar3 = 1;
                cache_secret = *(undefined4 *)(iVar4 + 0xc);
                cache_keyacclist = *(undefined4 *)(iVar4 + 0x10);
                cache_secretsize = *(undefined4 *)(iVar4 + 0x20);
                cache_flags = uVar1;
                cache_type = (uint) * (ushort *)(iVar4 + 0x1c);
            }
        }
    }
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
}

void FUN_00018064(int param_1, uint param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00017ddc();
    if (param_2 != 0 || iVar2 != 0) {
        if (iVar2 == 0) {
            if (param_2 < 2) {
                iVar2 = 0;
            } else {
                iVar2 = param_2 + current_time;
            }
            FUN_00017b18(param_1, 1, 0, iVar2, 0, 0, 0);
        } else {
            if (param_1 == cache_keyid) {
                FUN_0001748c();
            }
            if (param_2 == 0) {
                if (iVar1 == __stack_chk_guard) {
                    FUN_0001768c();
                    return;
                }
                goto LAB_00018174;
            }
            *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) | 1;
            if (param_2 < 2) {
                *(undefined4 *)(iVar2 + 0x14) = 0;
            } else {
                *(uint *)(iVar2 + 0x14) = current_time + param_2;
            }
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00018174:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018188(int param_1)

{
    int iVar1;
    ushort uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (cache_keyid == param_1) {
        uVar2 = cache_flags & 1;
    } else {
        authkeyuncached = authkeyuncached + 1;
        iVar3 = FUN_00017ddc();
        if ((iVar3 == 0) || ((*(ushort *)(iVar3 + 0x24) & 1) == 0)) {
            uVar2 = 0;
            authkeynotfound = authkeynotfound + 1;
        } else {
            uVar2 = 1;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2);
    }
    return;
}

void FUN_0001824c(int param_1, undefined4 param_2)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (cache_keyid == param_1) {
        if ((cache_flags & 1) != 0) {
            iVar2 = FUN_00017934(cache_keyacclist, param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_00018298;
        }
    } else {
        iVar2 = FUN_00017ddc();
        if (iVar2 == 0) {
            authkeynotfound = authkeynotfound + 1;
            iVar2 = 0;
            goto LAB_00018298;
        }
        authkeyuncached = authkeyuncached + 1;
        if ((*(ushort *)(iVar2 + 0x24) & 1) != 0) {
            iVar2 = FUN_00017934(*(undefined4 *)(iVar2 + 0x10), param_2, 1);
            if (iVar2 != 0) {
                iVar2 = 1;
            }
            goto LAB_00018298;
        }
    }
    iVar2 = 0;
LAB_00018298:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

void FUN_00018354(int param_1, undefined2 param_2, void *param_3,
                  size_t param_4, int param_5)

{
    int iVar1;
    int iVar2;
    void *pvVar3;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00017ddc();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != param_1)) {
        pvVar3 = (void *)FUN_000196bc(0, param_4 + 1, 0);
        memcpy(pvVar3, param_3, param_4);
        FUN_00017b18(param_1, 0, param_2, 0, param_4, pvVar3, param_5);
    } else {
        if (*(void **)(iVar2 + 0xc) != (void *)0x0) {
            memset(*(void **)(iVar2 + 0xc), 0, *(size_t *)(iVar2 + 0x20));
            free(*(void **)(iVar2 + 0xc));
        }
        pvVar3 = (void *)FUN_000196bc(0, param_4 + 1, 0);
        *(undefined2 *)(iVar2 + 0x1c) = param_2;
        *(size_t *)(iVar2 + 0x20) = param_4;
        *(void **)(iVar2 + 0xc) = pvVar3;
        if (*(int *)(iVar2 + 0x10) != param_5) {
            FUN_00017630(*(int *)(iVar2 + 0x10));
            pvVar3 = *(void **)(iVar2 + 0xc);
            *(int *)(iVar2 + 0x10) = param_5;
        }
        memcpy(pvVar3, param_3, param_4);
        if (param_1 == cache_keyid) {
            if (iVar1 == __stack_chk_guard) {
                FUN_0001748c();
                return;
            }
            goto LAB_00018494;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00018494:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000184a4(void)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;

    iVar1 = __stack_chk_guard;
    puVar3 = (undefined1 *)key_listhead._8_4_;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
    LAB_00018524:
        do {
            puVar4 = *(undefined1 **)(puVar3 + 8);
            if (*(uint *)(puVar3 + 0x18) < 0x10000) {
                if ((*(ushort *)(puVar3 + 0x24) & 1) == 0) {
                    FUN_0001768c(puVar3);
                    puVar3 = puVar4;
                    if (puVar4 == key_listhead)
                        break;
                    goto LAB_00018524;
                }
                if (*(void **)(puVar3 + 0xc) != (void *)0x0) {
                    memset(*(void **)(puVar3 + 0xc), 0,
                           *(size_t *)(puVar3 + 0x20));
                    free(*(void **)(puVar3 + 0xc));
                    *(undefined4 *)(puVar3 + 0xc) = 0;
                }
                uVar2 = FUN_00017630(*(undefined4 *)(puVar3 + 0x10));
                *(undefined4 *)(puVar3 + 0x20) = 0;
                *(undefined4 *)(puVar3 + 0x14) = 0;
                *(undefined4 *)(puVar3 + 0x10) = uVar2;
            }
            puVar3 = puVar4;
        } while (puVar4 != key_listhead);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001857c(void)

{
    uint *puVar1;
    int iVar2;
    undefined1 *puVar3;

    iVar2 = __stack_chk_guard;
    puVar3 = (undefined1 *)key_listhead._8_4_;
    if ((undefined1 *)key_listhead._8_4_ != key_listhead) {
        do {
            while (true) {
                puVar1 = (uint *)(puVar3 + 0x14);
                puVar3 = *(undefined1 **)(puVar3 + 8);
                if ((*puVar1 == 0) || (current_time <= *puVar1))
                    break;
                FUN_0001768c();
                authkeyexpired = authkeyexpired + 1;
                if (puVar3 == key_listhead)
                    goto LAB_00018608;
            }
        } while (puVar3 != key_listhead);
    }
LAB_00018608:
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00018638(uint param_1, int param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    bool bVar7;

    iVar5 = __stack_chk_guard;
    bVar7 = param_1 == 0;
    uVar1 = param_1 >> 8;
    uVar2 = param_1 >> 0x10;
    uVar3 = param_1 >> 0x18;
    uVar4 = param_1 << 0x18;
    if (bVar7) {
        param_1 = 4;
    }
    authencryptions = authencryptions + 1;
    *(uint *)(param_2 + (param_3 & 0xfffffffc)) =
        uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
    if ((!bVar7) && (iVar6 = FUN_00017ef4(param_1), iVar6 != 0)) {
        FUN_00022fdc(cache_type, cache_secret, cache_secretsize, param_2,
                     param_3);
    }
    if (iVar5 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00018700(int param_1, undefined4 param_2, undefined4 param_3,
                  uint param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    authdecryptions = authdecryptions + 1;
    if ((param_1 == 0) || (iVar3 = FUN_00017ef4(), iVar3 == 0 || param_4 < 4)) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_0002307c(cache_type, cache_secret, cache_secretsize,
                             param_2, param_3, param_4);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

void FUN_000187c8(undefined4 *param_1)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    int iVar4;
    uint uVar5;
    byte *pbVar6;

    iVar1 = __stack_chk_guard;
    pbVar2 = (byte *)*param_1;
    uVar5 = (uint)*pbVar2;
    if (uVar5 == 9 || uVar5 == 0x20) {
        do {
            pbVar2 = pbVar2 + 1;
            uVar5 = (uint)*pbVar2;
        } while (uVar5 == 9 || uVar5 == 0x20);
    }
    if ((((uVar5 & 0xdf) != 0) && (1 < uVar5 - 9)) &&
        (pbVar3 = pbVar2, uVar5 != 0x23)) {
        do {
            uVar5 = (uint)pbVar3[1];
            pbVar6 = pbVar3 + 1;
            iVar4 = uVar5 - 10;
            if (iVar4 != 0) {
                iVar4 = 1;
            }
            if (uVar5 == 0) {
                iVar4 = 0;
            }
            if (iVar4 == 0) {
                if (pbVar6 == pbVar2)
                    goto LAB_000188c8;
                if (uVar5 != 9 && uVar5 != 0x20)
                    goto LAB_000188b0;
            LAB_00018874:
                *pbVar6 = 0;
                pbVar6 = pbVar3 + 2;
                goto LAB_00018880;
            }
            if (uVar5 == 0x20 || uVar5 == 9) {
                if (pbVar6 != pbVar2)
                    goto LAB_00018874;
                goto LAB_000188c8;
            }
            pbVar3 = pbVar6;
        } while (uVar5 != 0x23);
        if (pbVar6 != pbVar2) {
        LAB_000188b0:
            *pbVar6 = 0;
        LAB_00018880:
            *param_1 = pbVar6;
            goto LAB_00018884;
        }
    }
LAB_000188c8:
    pbVar2 = (byte *)0x0;
LAB_00018884:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar2);
}

void FUN_000188dc(uint *param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    uint uVar1;
    uint uVar2;
    undefined4 uStack_8;
    undefined4 uStack_4;

    uVar1 = __stack_chk_guard;
    uVar2 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (param_1 != (uint *)0x0) {
        uVar2 = *param_1 + 1;
        *param_1 = uVar2;
        if (5 < uVar2)
            goto LAB_00018930;
    }
    FUN_0001a8d0(3, param_2, &uStack_8, uVar2, &uStack_8);
LAB_00018930:
    if (uVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001895c(void *param_1)

{
    int iVar1;
    undefined4 *__ptr;

    iVar1 = __stack_chk_guard;
    __ptr = *(undefined4 **)((int)param_1 + 4);
    while (__ptr != (undefined4 *)0x0) {
        *(undefined4 *)((int)param_1 + 4) = *__ptr;
        free(__ptr);
        __ptr = *(undefined4 **)((int)param_1 + 4);
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    free(param_1);
    return;
}

void FUN_000189d0(char *param_1)

{
    byte bVar1;
    FILE *__stream;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    EVP_MD *pEVar5;
    size_t __n;
    int *piVar6;
    char *pcVar7;
    char *pcVar8;
    ushort **ppuVar9;
    __int32_t **pp_Var10;
    undefined4 uVar11;
    byte *pbVar12;
    undefined1 *puVar13;
    uint uVar14;
    uint uVar15;
    int *piVar16;
    byte *pbVar17;
    __int32_t *p_Var18;
    uint uVar19;
    bool bVar20;
    int local_290;
    char *local_270;
    uint local_26c;
    short local_268[14];
    byte local_24c[32];
    char acStack_22c[512];
    int local_2c;
    undefined1 auStack_28[4];

    local_2c = __stack_chk_guard;
    __stream = fopen64(param_1, "r");
    if (__stream == (FILE *)0x0) {
        FUN_0001a848(3, "authreadkeys: file \'%s\': %m", param_1);
        uVar11 = 0;
    LAB_00018e28:
        if (local_2c == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
    }
    if (ssl_init_done == 0) {
        FUN_0001fe18();
    }
    local_26c = 0;
    piVar16 = (int *)0x0;
LAB_00018a68:
    do {
        while (true) {
            while (true) {
                while (true) {
                    do {
                        local_270 = fgets(acStack_22c, 0x200, __stream);
                        if ((local_270 == (char *)0x0) || (0xf < local_26c)) {
                            fclose(__stream);
                            if (local_26c == 0) {
                                FUN_000184a4();
                                while (piVar16 != (int *)0x0) {
                                    piVar6 = (int *)*piVar16;
                                    FUN_00018354(
                                        piVar16[2],
                                        *(undefined2 *)(piVar16 + 3),
                                        piVar16 + 4,
                                        *(undefined2 *)((int)piVar16 + 0xe),
                                        piVar16[1]);
                                    piVar16[1] = 0;
                                    FUN_0001895c(piVar16);
                                    piVar16 = piVar6;
                                }
                                uVar11 = 1;
                            } else {
                                if (local_26c < 0x10) {
                                    pcVar2 = "";
                                } else {
                                    pcVar2 = " (emergency break)";
                                }
                                FUN_0001a848(3,
                                             "authreadkeys: rejecting file "
                                             "\'%s\' after %u error(s)%s",
                                             param_1, local_26c, pcVar2);
                                while (piVar16 != (int *)0x0) {
                                    piVar16 = (int *)*piVar16;
                                    FUN_0001895c();
                                }
                                uVar11 = 0;
                            }
                            goto LAB_00018e28;
                        }
                        pcVar2 = (char *)FUN_000187c8(&local_270);
                    } while (pcVar2 == (char *)0x0);
                    uVar3 = strtol(pcVar2, (char **)0x0, 10);
                    if (uVar3 != 0)
                        break;
                    FUN_000188dc(&local_26c,
                                 "authreadkeys: cannot change key %s", pcVar2);
                }
                if (uVar3 < 0x10000)
                    break;
                FUN_000188dc(&local_26c,
                             "authreadkeys: key %s > %d reserved for Autokey",
                             pcVar2, 0xffff);
            }
            iVar4 = FUN_000187c8(&local_270);
            if (iVar4 != 0)
                break;
            FUN_000188dc(&local_26c, "authreadkeys: no key type for key %d",
                         uVar3);
        }
        local_290 = FUN_0002006c(iVar4, 0);
        if (local_290 == 0) {
            FUN_000188dc(0, "authreadkeys: invalid type for key %d", uVar3);
            pcVar2 = (char *)FUN_000187c8(&local_270);
            if (pcVar2 == (char *)0x0)
                goto LAB_00018e64;
        LAB_00018b14:
            __n = strlen(pcVar2);
            if (__n < 0x15) {
                piVar6 = (int *)FUN_000196bc(0, __n + 0x14, 0);
                *(undefined2 *)(piVar6 + 3) = (undefined2)local_290;
                piVar6[2] = uVar3;
                *(short *)((int)piVar6 + 0xe) = (short)__n;
                piVar6[1] = 0;
                memcpy(piVar6 + 4, pcVar2, __n);
            } else {
                pbVar17 = (byte *)(pcVar2 + -1);
                uVar15 = 0;
                if (0x3f < __n) {
                    __n = 0x40;
                }
                pp_Var10 = __ctype_tolower_loc();
                p_Var18 = *pp_Var10;
                do {
                    pbVar17 = pbVar17 + 1;
                    pcVar2 = strchr("0123456789abcdef", p_Var18[*pbVar17]);
                    if (pcVar2 == (char *)0x0) {
                        if (uVar15 < __n) {
                            FUN_000188dc(
                                &local_26c,
                                "authreadkeys: invalid hex digit for key %d",
                                uVar3);
                            goto LAB_00018a68;
                        }
                        break;
                    }
                    puVar13 = auStack_28;
                    uVar19 = uVar15 >> 1;
                    bVar20 = (uVar15 & 1) != 0;
                    uVar15 = uVar15 + 1;
                    if (bVar20) {
                        puVar13 = (undefined1 *)(uint)local_24c[uVar19];
                    }
                    uVar14 = (uint)(pcVar2 + -0x2d074) & 0xff;
                    if (bVar20) {
                        uVar14 = uVar14 | (uint)puVar13;
                    }
                    bVar1 = (byte)uVar14;
                    if (!bVar20) {
                        bVar1 = (byte)(uVar14 << 4);
                    }
                    local_24c[uVar19] = bVar1;
                } while (__n != uVar15);
                uVar15 = __n >> 1;
                piVar6 = (int *)FUN_000196bc(0, uVar15 + 0x14, 0);
                piVar6[2] = uVar3;
                *(undefined2 *)(piVar6 + 3) = (undefined2)local_290;
                *(short *)((int)piVar6 + 0xe) = (short)uVar15;
                piVar6[1] = 0;
                memcpy(piVar6 + 4, local_24c, uVar15);
            }
            pcVar2 = (char *)FUN_000187c8(&local_270);
            while (pcVar2 != (char *)0x0) {
                pcVar7 = strchr(pcVar2, 0x2c);
                if (pcVar7 != (char *)0x0) {
                    *pcVar7 = '\0';
                }
                pcVar8 = strchr(pcVar2, 0x2f);
                if (pcVar8 == (char *)0x0) {
                    iVar4 = FUN_00019b7c(pcVar2, 0, local_268);
                    if (iVar4 != 0) {
                        uVar15 = 0xffffffff;
                        goto LAB_00018c98;
                    }
                LAB_00018ccc:
                    FUN_000188dc(
                        &local_26c,
                        "authreadkeys: invalid IP address <%s> for key %d",
                        pcVar2, uVar3);
                } else {
                    uVar19 = (uint)(byte)pcVar8[1];
                    uVar15 = 0;
                    pbVar17 = (byte *)(pcVar8 + 1);
                    *pcVar8 = '\0';
                    if (uVar19 == 0) {
                        iVar4 = FUN_00019b7c(pcVar2, 0, local_268);
                        if (iVar4 != 0) {
                            uVar15 = 0;
                            goto LAB_00018c98;
                        }
                        goto LAB_00018ccc;
                    }
                    ppuVar9 = __ctype_b_loc();
                    pbVar12 = pbVar17;
                    do {
                        uVar14 = (((*ppuVar9)[uVar19] ^ 0x800) << 0x14) >> 0x1f;
                        if (1000 < uVar15) {
                            uVar14 = 1;
                        }
                        if (uVar14 != 0) {
                            FUN_000188dc(
                                &local_26c,
                                "authreadkeys: Invalid character in subnet "
                                "specification for <%s/%s> in key %d",
                                pbVar12, pbVar17, uVar3);
                            goto LAB_00018c18;
                        }
                        iVar4 = uVar19 - 0x30;
                        pbVar12 = pbVar12 + 1;
                        uVar19 = (uint)*pbVar12;
                        uVar15 = uVar15 * 10 + iVar4;
                    } while (uVar19 != 0);
                    iVar4 = FUN_00019b7c(pcVar2, 0, local_268);
                    if (iVar4 == 0)
                        goto LAB_00018ccc;
                    if (uVar15 != 0xffffffff) {
                        if (local_268[0] == 2) {
                            if (0x20 < uVar15)
                                goto LAB_00018e84;
                        } else if (local_268[0] == 10 && 0x80 < uVar15) {
                        LAB_00018e84:
                            FUN_000188dc(0,
                                         "authreadkeys: excessive subnet mask "
                                         "<%s/%s> for key %d",
                                         pcVar2, pbVar17, uVar3);
                        }
                    }
                LAB_00018c98:
                    iVar4 = FUN_00017534(piVar6[1], local_268, uVar15);
                    piVar6[1] = iVar4;
                }
            LAB_00018c18:
                if (pcVar7 == (char *)0x0)
                    break;
                pcVar2 = pcVar7 + 1;
            }
            if (local_290 == 0) {
                FUN_0001895c(piVar6);
            } else {
                *piVar6 = (int)piVar16;
                piVar16 = piVar6;
            }
            goto LAB_00018a68;
        }
        if (local_290 != 0x37e) {
            pcVar2 = OBJ_nid2sn(local_290);
            pEVar5 = EVP_get_digestbyname(pcVar2);
            if (pEVar5 == (EVP_MD *)0x0) {
                FUN_000188dc(0, "authreadkeys: no algorithm for key %d", uVar3);
                local_290 = 0;
            }
        }
        pcVar2 = (char *)FUN_000187c8(&local_270);
        if (pcVar2 != (char *)0x0)
            goto LAB_00018b14;
    LAB_00018e64:
        FUN_000188dc(&local_26c, "authreadkeys: no key for key %d", uVar3);
    } while (true);
}

void FUN_00018fd8(uint param_1, int param_2, int param_3, int param_4)

{
    int iVar1;
    char cVar2;
    int iVar3;
    byte *pbVar4;
    char *pcVar5;
    char *extraout_r1;
    char *pcVar6;
    char *pcVar7;
    uint uVar8;
    char *pcVar10;
    byte bVar11;
    char *pcVar12;
    uint uVar13;
    char *__s;
    char *pcVar14;
    bool bVar15;
    undefined4 uStack_34;
    undefined4 uStack_30;
    int local_2c;
    uint uVar9;

    iVar3 = lib_nextbuf;
    local_2c = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    pcVar14 = (char *)0x19044;
    memset(__s, 0, 0x80);
    lib_nextbuf = iVar3 + 1U & 0xf;
    bVar15 = (param_1 & 0xffff0000) == 0;
    pcVar6 = extraout_r1;
    if (bVar15) {
        pcVar6 = (char *)&uStack_34;
        pcVar14 = (char *)((int)&uStack_34 + 1);
    }
    uStack_34 = 0;
    uStack_30 = 0;
    if (!bVar15) {
        pcVar14 = (char *)((int)&uStack_34 + 1);
        uVar13 = param_1 >> 0x10;
        pcVar6 = pcVar14;
        do {
            uVar8 = (int)((ulonglong)uVar13 * 0xcccccccd >> 0x20) << 0xd;
            uVar9 = uVar8 >> 0x10;
            pcVar6 = pcVar6 + -1;
            *pcVar6 = (char)uVar13 + (char)(uVar8 >> 0x10) * -10;
            uVar13 = uVar9;
        } while (uVar9 != 0);
    }
    pcVar10 = pcVar14;
    if (param_4 == 0) {
    LAB_000190d4:
        if (param_3 < 7) {
            if (param_3 < 1)
                goto LAB_00019118;
        } else {
            param_3 = 6;
        }
    } else {
        pcVar10 = (char *)&uStack_30;
        param_3 = (int)(short)((short)param_3 + 3);
        if (2 < param_3)
            goto LAB_000190d4;
        param_3 = 3;
    }
    uVar13 = param_3 - 1U & 0xffff;
    pcVar5 = pcVar14;
    do {
        param_1 = (param_1 & 0xffff) * 10;
        pcVar12 = pcVar5 + 1;
        *pcVar5 = (char)(param_1 >> 0x10);
        pcVar5 = pcVar12;
    } while (pcVar12 != (char *)((int)&uStack_34 + uVar13 + 2));
    pcVar14 = pcVar14 + uVar13 + 1;
LAB_00019118:
    if ((param_1 & 0x8000) != 0) {
        pbVar4 = (byte *)(pcVar14 + -1);
        bVar11 = pcVar14[-1] + 1;
        pcVar14[-1] = bVar11;
        while (9 < bVar11) {
            *pbVar4 = 0;
            pbVar4 = pbVar4 + -1;
            bVar11 = *pbVar4 + 1;
            *pbVar4 = bVar11;
        }
    }
    if (pcVar6 < pcVar10 + -1) {
        cVar2 = *pcVar6;
        while (
            (cVar2 == '\0' && (pcVar6 = pcVar6 + 1, pcVar10 + -1 != pcVar6))) {
            cVar2 = *pcVar6;
        }
    }
    pcVar5 = __s;
    if (param_2 != 0) {
        lib_stringbuf[iVar3 * 0x80] = 0x2d;
        pcVar5 = lib_stringbuf + iVar1 + 1;
    }
    if (pcVar6 < pcVar14) {
        do {
            pcVar7 = pcVar5 + 1;
            pcVar12 = pcVar5;
            if (pcVar10 == pcVar6) {
                *pcVar5 = '.';
                pcVar7 = pcVar5 + 2;
                pcVar12 = pcVar5 + 1;
            }
            pcVar5 = pcVar7;
            pcVar7 = pcVar6 + 1;
            *pcVar12 = *pcVar6 + '0';
            pcVar6 = pcVar7;
        } while (pcVar14 != pcVar7);
    }
    *pcVar5 = '\0';
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(__s);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00019290) */

void FUN_0001923c(uint param_1, undefined4 param_2)

{
    FUN_00018fd8((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),
                 param_1 >> 0x1f, param_2, 0);
    return;
}

void FUN_000192fc(char *param_1, uint param_2, int param_3, int param_4,
                  int param_5)

{
    int iVar1;
    char cVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    char *pcVar7;
    char *pcVar8;
    char *__s;
    int iVar9;
    char *extraout_r12;
    char *pcVar10;
    char *pcVar11;
    bool bVar12;
    bool bVar13;
    undefined8 local_44;
    undefined8 uStack_3c;
    undefined8 local_34;
    int local_2c;

    iVar3 = lib_nextbuf;
    local_2c = __stack_chk_guard;
    iVar1 = lib_nextbuf * 0x80;
    __s = lib_stringbuf + iVar1;
    memset(__s, 0, 0x80);
    pcVar8 = (char *)((int)&uStack_3c + 2);
    lib_nextbuf = iVar3 + 1U & 0xf;
    local_44 = 0;
    uStack_3c = 0;
    pcVar10 = extraout_r12;
    if (param_1 == (char *)0x0) {
        pcVar10 = pcVar8;
    }
    local_34 = 0;
    pcVar7 = param_1;
    pcVar5 = pcVar8;
    if (param_1 != (char *)0x0) {
        do {
            param_1 = (char *)((uint)pcVar7 / 10);
            pcVar10 = pcVar5 + -1;
            *pcVar10 = (char)pcVar7 -
                       ((char)((int)param_1 << 1) + (char)param_1 * '\b');
            pcVar7 = param_1;
            pcVar5 = pcVar10;
        } while (param_1 != (char *)0x0 && 0 < (int)pcVar10 - (int)&local_44);
    }
    pcVar7 = pcVar8;
    if (param_4 < 0) {
        if (param_5 != 0) {
            iVar9 = 3;
            goto LAB_00019538;
        }
    LAB_0001955c:
        iVar9 = (int)pcVar8 - (int)&local_44;
        pcVar5 = pcVar8;
        if (((uint)(0 < iVar9) & param_2 >> 0x1f) != 0) {
            do {
                pcVar5 = pcVar5 + -1;
                if ((char)(*pcVar5 + '\x01') != '\n') {
                    *pcVar5 = *pcVar5 + '\x01';
                    break;
                }
                *pcVar5 = '\0';
            } while (0 < (int)(pcVar5 + (iVar9 - (int)pcVar8)));
        }
        if (pcVar5 <= pcVar10) {
            pcVar10 = pcVar5;
        }
    } else {
        if (param_5 == 0) {
            iVar9 = param_4;
            if (0xd < param_4) {
                iVar9 = 0xe;
            }
            bVar12 = (int)param_2 < 0;
            bVar13 = param_2 == 0;
            if (!bVar13) {
                bVar12 = param_4 < 0;
            }
            if ((bVar13 || param_4 == 0) || bVar12) {
                param_1 = pcVar8;
            }
            uVar6 = param_2;
            if ((!bVar13 && param_4 != 0) && !bVar12) {
            LAB_00019410:
                do {
                    param_2 = uVar6 * 10;
                    iVar9 = iVar9 + -1;
                    param_1 = pcVar8 + 1;
                    *pcVar8 =
                        (CARRY4(uVar6 * 2, uVar6 * 8) -
                         (char)((int)uVar6 >> 0x1f)) +
                        ((byte)((uVar6 << 2) >> 0x1f) |
                         (byte)((uVar6 * 2 >> 0x1f | ((int)uVar6 >> 0x1f) * -2)
                                << 1));
                    uVar6 = param_2;
                    pcVar8 = param_1;
                } while (param_2 != 0 && 0 < iVar9);
            }
            pcVar8 = param_1;
            if (iVar9 == 0)
                goto LAB_0001955c;
        } else {
            iVar9 = param_4 + 3;
            if (0xd < iVar9) {
                iVar9 = 0xe;
            }
        LAB_00019538:
            pcVar7 = (char *)((int)&uStack_3c + 5);
            uVar6 = param_2;
            if (param_2 != 0)
                goto LAB_00019410;
        }
        pcVar8 = pcVar8 + iVar9;
    }
    if (pcVar10 < pcVar7) {
        cVar2 = *pcVar10;
        while (cVar2 == '\0') {
            pcVar10 = pcVar10 + 1;
            if (pcVar10 == pcVar7)
                goto LAB_000194ac;
            cVar2 = *pcVar10;
        }
    } else {
    LAB_000194ac:
        pcVar10 = pcVar7 + -1;
    }
    pcVar5 = __s;
    if (param_3 != 0) {
        lib_stringbuf[iVar3 * 0x80] = 0x2d;
        pcVar5 = lib_stringbuf + iVar1 + 1;
    }
    pcVar4 = pcVar5;
    if (pcVar10 < pcVar8) {
        do {
            pcVar5 = pcVar4 + 1;
            if (pcVar10 == pcVar7) {
                pcVar5 = pcVar4 + 2;
                *pcVar4 = '.';
                pcVar4 = pcVar4 + 1;
            }
            pcVar11 = pcVar10 + 1;
            *pcVar4 = *pcVar10 + '0';
            pcVar4 = pcVar5;
            pcVar10 = pcVar11;
        } while (pcVar11 != pcVar8);
    }
    *pcVar5 = '\0';
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(__s);
    }
    return;
}

void FUN_000195dc(uint param_1, int param_2, undefined4 param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;

    iVar2 = __stack_chk_guard;
    uVar1 = param_1 >> 0x1f;
    iVar3 = param_2;
    if ((int)param_1 < 0) {
        iVar3 = -param_2;
        param_1 = ~param_1;
        if (param_2 == 0) {
            param_1 = param_1 + 1;
        }
    }
    FUN_000192fc(param_1, iVar3, uVar1, param_3, 0);
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000196bc(void *param_1, size_t param_2, uint param_3, int param_4)

{
    int iVar1;
    void *pvVar2;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        pvVar2 = realloc(param_1, 1);
        if (pvVar2 == (void *)0x0)
            goto LAB_00019740;
    } else {
        pvVar2 = realloc(param_1, param_2);
        if (pvVar2 == (void *)0x0) {
        LAB_00019740:
            msyslog_term = 1;
            FUN_0001a848(3, "fatal out of memory (%lu bytes)", param_2);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        if (param_4 != 0 && param_3 < param_2) {
            memset((void *)((int)pvVar2 + param_3), 0, param_2 - param_3);
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar2);
}

/* WARNING: Removing unreachable block (ram,0x00019810) */

void FUN_00019780(undefined4 param_1, uint param_2, uint param_3, int param_4)

{
    bool bVar1;
    bool bVar2;

    bVar2 = 0xfffe < param_3;
    bVar1 = param_3 == 0xffff;
    if (param_3 < 0x10000) {
        bVar2 = 0xfffe < param_2;
        bVar1 = param_2 == 0xffff;
    }
    if ((param_2 != 0 && (bVar2 && !bVar1)) &&
        ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) != 0)) {
        FUN_0001a848(3, "fatal allocation size overflow");
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    FUN_000196bc(param_1, param_3 * param_2 + param_4, 0, 1);
    return;
}

void FUN_00019820(char *param_1)

{
    int iVar1;
    size_t sVar2;
    void *__dest;

    iVar1 = __stack_chk_guard;
    sVar2 = strlen(param_1);
    __dest = (void *)FUN_000196bc(0, sVar2 + 1, 0);
    memcpy(__dest, param_1, sVar2 + 1);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019890(char *param_1, int param_2)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    fputs(DAT_00041030, stderr);
    fputs(param_1, stderr);
    _IO_putc(param_2, stderr);
    if (iVar1 == __stack_chk_guard) {
        _IO_putc(10, stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019924(int param_1, undefined4 *param_2, byte *param_3)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;

    iVar1 = __stack_chk_guard;
    DAT_00041030 = *param_2;
    ntp_optarg = (byte *)0x0;
    if (ntp_optind == 0) {
        ntp_optind = 1;
        DAT_000432fc = (byte *)0x0;
    LAB_00019990:
        pbVar3 = DAT_000432fc;
        if (((param_1 <= ntp_optind) ||
             (pcVar5 = (char *)param_2[ntp_optind], *pcVar5 != '-')) ||
            (pcVar5[1] == '\0')) {
            uVar7 = 0xffffffff;
            goto LAB_00019a44;
        }
        ntp_optind = ntp_optind + 1;
        if ((pcVar5[1] == '-') && (pcVar5[2] == '\0')) {
            uVar7 = 0xffffffff;
            goto LAB_00019a44;
        }
        DAT_000432fc = (byte *)(pcVar5 + 1);
        uVar7 = (uint)(byte)pcVar5[1];
    } else if ((DAT_000432fc == (byte *)0x0) ||
               (uVar7 = (uint)*DAT_000432fc, uVar7 == 0))
        goto LAB_00019990;
    pbVar4 = DAT_000432fc + 1;
    pbVar3 = pbVar4;
    ntp_optopt = uVar7;
    if (param_3 == (byte *)0x0) {
    LAB_00019a2c:
        if (ntp_opterr != 0) {
            DAT_000432fc = pbVar4;
            FUN_00019890(": unknown option -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_000432fc;
            goto LAB_00019a44;
        }
    } else {
        uVar6 = (uint)*param_3;
        if (uVar7 != uVar6 && uVar6 != 0) {
            pbVar2 = param_3 + 1;
            do {
                param_3 = pbVar2;
                if (param_3 == (byte *)0x0)
                    goto LAB_00019a2c;
                uVar6 = (uint)*param_3;
                pbVar2 = param_3 + 1;
            } while (uVar6 != uVar7 && uVar6 != 0);
        }
        if ((uVar6 == 0) || (uVar7 == 0x3f || uVar7 == 0x3a))
            goto LAB_00019a2c;
        if (param_3[1] != 0x3a)
            goto LAB_00019a44;
        if (DAT_000432fc[1] != 0) {
            DAT_000432fc = (byte *)0x0;
            pbVar3 = DAT_000432fc;
            ntp_optarg = pbVar4;
            goto LAB_00019a44;
        }
        if (ntp_optind < param_1) {
            param_2 = param_2 + ntp_optind;
            ntp_optind = ntp_optind + 1;
            ntp_optarg = (byte *)*param_2;
            goto LAB_00019a44;
        }
        if (ntp_opterr != 0) {
            DAT_000432fc = pbVar4;
            FUN_00019890(": option requires argument -", uVar7);
            uVar7 = 0x3f;
            pbVar3 = DAT_000432fc;
            goto LAB_00019a44;
        }
    }
    uVar7 = 0x3f;
LAB_00019a44:
    DAT_000432fc = pbVar3;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
    }
    return;
}

void FUN_00019b7c(char *param_1, uint param_2, undefined8 *param_3)

{
    size_t sVar1;
    int iVar2;
    char *pcVar3;
    undefined4 uVar4;
    sockaddr *psVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 local_c4;
    addrinfo *local_c0;
    addrinfo local_bc;
    char acStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("is_ip_address.c", 0x28, 0, "host != ((void *)0)");
    }
    if (param_3 == (undefined8 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("is_ip_address.c", 0x29, 0, "addr != ((void *)0)");
    }
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined8 *)((int)param_3 + 0xc) = 0;
    *(undefined8 *)((int)param_3 + 0x14) = 0;
    if (((param_2 & 0xfffffffd) == 0) &&
        (iVar2 = inet_pton(2, param_1, &local_c4), iVar2 == 1)) {
        *(undefined2 *)param_3 = 2;
        *(undefined4 *)((int)param_3 + 4) = local_c4;
        uVar4 = 1;
    } else {
        if ((param_2 == 10 || param_2 == 0) &&
            (sVar1 = strlen(param_1), sVar1 < 0x80)) {
            if (*param_1 == '[') {
                FUN_00020410(acStack_9c, param_1 + 1, 0x80);
                pcVar3 = strchr(acStack_9c, 0x5d);
                if (pcVar3 != (char *)0x0) {
                    *pcVar3 = '\0';
                }
            } else {
                FUN_00020410(acStack_9c, param_1, 0x80);
            }
            local_bc.ai_socktype = 0;
            local_bc.ai_protocol = 0;
            local_bc.ai_addrlen = 0;
            local_bc.ai_addr = (sockaddr *)0x0;
            local_bc.ai_family = 10;
            local_bc.ai_canonname = (char *)0x0;
            local_bc.ai_next = (addrinfo *)0x0;
            local_bc.ai_flags = 4;
            iVar2 = getaddrinfo(acStack_9c, (char *)0x0, &local_bc, &local_c0);
            if (iVar2 == 0) {
                *(undefined2 *)param_3 = 10;
                psVar5 = local_c0->ai_addr;
                uVar8 = *(undefined4 *)(psVar5[1].sa_data + 6);
                uVar4 = *(undefined4 *)(psVar5->sa_data + 10);
                uVar6 = *(undefined4 *)(psVar5 + 1);
                uVar7 = *(undefined4 *)(psVar5[1].sa_data + 2);
                *(undefined4 *)(param_3 + 1) =
                    *(undefined4 *)(psVar5->sa_data + 6);
                *(undefined4 *)((int)param_3 + 0xc) = uVar4;
                *(undefined4 *)(param_3 + 2) = uVar6;
                *(undefined4 *)((int)param_3 + 0x14) = uVar7;
                *(undefined4 *)(param_3 + 3) = uVar8;
                freeaddrinfo(local_c0);
                uVar4 = 1;
                goto LAB_00019c8c;
            }
        }
        uVar4 = 0;
    }
LAB_00019c8c:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
    }
    return;
}

void FUN_00019d4c(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (lib_inited == 0) {
        iVar2 = FUN_00021490();
        ipv4_works = (uint)(iVar2 == 0);
        iVar2 = FUN_000214e8();
        ipv6_works = (uint)(iVar2 == 0);
        FUN_00016570();
        lib_inited = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00019dec(timeval *param_1, timezone *param_2)

{
    int *piVar1;
    int iVar2;
    code *pcVar3;
    uint uVar4;
    uint uVar5;
    timespec local_34;
    int local_2c;

    local_2c = __stack_chk_guard;
    if (0 < debug) {
        FUN_0001a770("In ntp_set_tod\n");
    }
    piVar1 = __errno_location();
    uVar4 = DAT_00043304;
    if (DAT_00043304 < 2) {
        iVar2 = param_1->tv_usec;
        local_34.tv_sec = param_1->tv_sec;
        *piVar1 = 0;
        local_34.tv_nsec = iVar2 * 1000;
        pcVar3 = (code *)clock_settime(0, &local_34);
        iVar2 = *piVar1;
        if (debug < 1) {
            if (pcVar3 != (code *)0x0 || uVar4 != 0) {
            LAB_0001a08c:
                if (pcVar3 != (code *)0x0)
                    goto LAB_00019e5c;
                goto LAB_00019eec;
            }
        } else {
            FUN_0001a770("ntp_set_tod: clock_settime: %d %m\n", pcVar3);
            uVar4 = DAT_00043304;
            if (pcVar3 != (code *)0x0 || DAT_00043304 != 0)
                goto LAB_0001a08c;
        }
        DAT_00043304 = 1;
    LAB_00019eec:
        *piVar1 = iVar2;
        if (0 < debug) {
            FUN_0001a770("ntp_set_tod: Final result: %s: %d %m\n",
                         *(undefined4 *)(set_tod_used + DAT_00043304 * 4), 0);
        }
    } else {
        iVar2 = 0;
        pcVar3 = (code *)0xffffffff;
    LAB_00019e5c:
        uVar5 = uVar4 & 0xfffffffd;
        if (uVar5 == 0) {
            local_34.tv_sec = uVar5;
            local_34.tv_nsec = uVar5;
            adjtime((timeval *)&local_34, (timeval *)0x0);
            *piVar1 = 0;
            pcVar3 = (code *)settimeofday(param_1, param_2);
            iVar2 = *piVar1;
            if (debug < 1) {
                if (pcVar3 == (code *)0x0 && uVar4 == 0) {
                LAB_0001a04c:
                    DAT_00043304 = 2;
                    goto LAB_00019eec;
                }
            } else {
                FUN_0001a770("ntp_set_tod: settimeofday: %d %m\n", pcVar3);
                uVar4 = DAT_00043304;
                if (pcVar3 == (code *)0x0 && DAT_00043304 == 0)
                    goto LAB_0001a04c;
            }
            if (pcVar3 == (code *)0x0)
                goto LAB_00019eec;
        }
        if (uVar4 != 0 && uVar4 != 3) {
            *piVar1 = iVar2;
            if (0 < debug) {
            LAB_0001a0cc:
                FUN_0001a770("ntp_set_tod: Final result: %s: %d %m\n",
                             *(undefined4 *)(set_tod_used + uVar4 * 4), pcVar3);
                goto LAB_0001a0f0;
            }
        LAB_00019e80:
            *piVar1 = iVar2;
            goto LAB_00019e84;
        }
        local_34.tv_sec = param_1->tv_sec;
        *piVar1 = 0;
        pcVar3 = (code *)stime(&local_34.tv_sec);
        iVar2 = *piVar1;
        if (0 < debug) {
            FUN_0001a770("ntp_set_tod: stime: %d %m\n", pcVar3);
            uVar4 = DAT_00043304;
        }
        *piVar1 = iVar2;
        if (uVar4 == 0 && pcVar3 == (code *)0x0) {
            DAT_00043304 = 3;
            if (0 < debug) {
                FUN_0001a770("ntp_set_tod: Final result: %s: %d %m\n", "stime",
                             0);
            }
        } else {
            if (0 < debug)
                goto LAB_0001a0cc;
        LAB_0001a0f0:
            if (pcVar3 != (code *)0x0)
                goto LAB_00019e80;
        }
    }
    pcVar3 = set_tod_using;
    if (set_tod_using != (code *)0x0) {
        (*set_tod_using)(*(undefined4 *)(set_tod_used + DAT_00043304 * 4));
        pcVar3 = (code *)0x0;
        set_tod_using = (code *)0x0;
    }
LAB_00019e84:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(pcVar3);
    }
    return;
}

void FUN_0001a154(int param_1, char *param_2, char *param_3)

{
    int iVar1;
    char *pcVar2;
    int *piVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    *param_2 = '\0';
    pcVar2 = strerror_r(param_1, param_2, (size_t)param_3);
    if (pcVar2 == (char *)0x0) {
        if (*param_2 == '\0') {
            piVar3 = __errno_location();
            FUN_0001f658(param_2, param_3, "%s(%d): errno %d", "strerror_r",
                         param_1, *piVar3);
        }
    } else {
        bVar4 = pcVar2 <= param_2;
        if (param_2 != pcVar2) {
            bVar4 = param_3 <= pcVar2;
        }
        if (bVar4 && (param_2 != pcVar2 && pcVar2 != param_3)) {
            if (iVar1 == __stack_chk_guard) {
                FUN_00020410(param_2, pcVar2, param_3);
                return;
            }
            goto LAB_0001a214;
        }
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_0001a214:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a228(char *param_1, int param_2, char *param_3, undefined4 param_4)

{
    char cVar1;
    size_t __n;
    char *__dest;
    char acStack_124[256];
    int local_24;

    local_24 = __stack_chk_guard;
    __dest = param_1;
    while (true) {
        while (true) {
            cVar1 = *param_3;
            while (true) {
                if ((cVar1 == '\0') || (param_1 + param_2 + -1 <= __dest))
                    goto LAB_0001a294;
                if (cVar1 == '%')
                    break;
                param_3 = param_3 + 1;
                *__dest = cVar1;
                __dest = __dest + 1;
                cVar1 = *param_3;
            }
            cVar1 = param_3[1];
            param_3 = param_3 + 2;
            if (cVar1 != 'm')
                break;
            FUN_0001a154(param_4, acStack_124, 0x100);
            __n = strlen(acStack_124);
            if (__dest + __n < param_1 + param_2 + -1) {
                memcpy(__dest, acStack_124, __n);
                __dest = __dest + __n;
            }
        }
        *__dest = '%';
        if (cVar1 == '\0')
            break;
        __dest[1] = cVar1;
        __dest = __dest + 2;
    }
    __dest = __dest + 1;
LAB_0001a294:
    *__dest = '\0';
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001a334(int param_1, char *param_2)

{
    bool bVar1;
    char *pcVar2;
    size_t sVar3;
    char *pcVar4;
    int iVar5;
    FILE *__stream;
    __pid_t _Var6;
    undefined2 *puVar7;
    undefined4 local_3c;
    undefined1 local_34[4];
    undefined2 local_30[2];
    int local_2c;

    local_30[0] = 10;
    local_34[0] = 0;
    local_2c = __stack_chk_guard;
    pcVar4 = progname;
    if ((progname != DAT_0004330c) &&
        (DAT_0004330c = pcVar4, pcVar2 = strrchr(progname, 0x2f),
         DAT_00043310 = pcVar4, pcVar2 != (char *)0x0)) {
        DAT_00043310 = pcVar2 + 1;
    }
    iVar5 = msyslog_term;
    if (syslogit == 0) {
        if (syslog_file == (FILE *)0x0) {
            iVar5 = 1;
            bVar1 = false;
        } else {
            bVar1 = true;
        }
    } else {
        __syslog_chk(param_1, 1, "%s", param_2);
        if (iVar5 == 0)
            goto LAB_0001a4ec;
        bVar1 = false;
    }
    if (msyslog_include_timestamp == 0) {
        local_3c = 0;
    } else {
        local_3c = FUN_0002323c();
    }
    if (bVar1 || msyslog_term_pid != 0) {
        _Var6 = getpid();
    } else {
        _Var6 = -1;
    }
    sVar3 = strlen(param_2);
    if (param_2[sVar3 - 1] == '\n') {
        puVar7 = (undefined2 *)local_34;
    } else {
        puVar7 = local_30;
    }
    if (iVar5 != 0) {
        __stream = stderr;
        if (3 < param_1) {
            __stream = stdout;
        }
        if (msyslog_include_timestamp != 0) {
            __fprintf_chk(__stream, 1, &DAT_0002d46c, local_3c);
        }
        if (msyslog_term_pid != 0) {
            __fprintf_chk(__stream, 1, "%s[%d]: ", DAT_00043310, _Var6);
        }
        __fprintf_chk(__stream, 1, "%s%s", param_2, puVar7);
        fflush(__stream);
    }
    if (bVar1) {
        if (msyslog_include_timestamp != 0) {
            __fprintf_chk(syslog_file, 1, &DAT_0002d46c, local_3c);
        }
        __fprintf_chk(syslog_file, 1, "%s[%d]: %s%s", DAT_00043310, _Var6,
                      param_2, puVar7);
        fflush(syslog_file);
    }
LAB_0001a4ec:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a604(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a228(auStack_11c, 0x100, param_3, *piVar1);
    FUN_0001ecf4(param_1, param_2, auStack_11c, param_4);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a68c(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int *piVar1;
    undefined1 auStack_11c[256];
    int local_1c;

    local_1c = __stack_chk_guard;
    piVar1 = __errno_location();
    FUN_0001a228(auStack_11c, 0x100, param_2, *piVar1);
    __vfprintf_chk(param_1, 1, auStack_11c, param_3);
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a770(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_c;
    undefined4 uStack_8;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_0001a68c(stdout, param_1, &uStack_c, &stdout, &uStack_c);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a848(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined1 auStack_424[1024];
    int local_24;
    undefined4 uStack_8;
    undefined4 uStack_4;

    local_24 = __stack_chk_guard;
    uStack_8 = param_3;
    uStack_4 = param_4;
    FUN_0001a604(auStack_424, 0x400, param_2, &uStack_8, &uStack_8);
    FUN_0001a334(param_1, auStack_424);
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a8d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined1 auStack_414[1024];
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001a604(auStack_414, 0x400, param_2, param_3);
    FUN_0001a334(param_1, auStack_414);
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001a944(char *param_1, int param_2, int param_3)

{
    int iVar1;
    char *pcVar2;
    int __facility;

    iVar1 = __stack_chk_guard;
    if (param_2 != 0 && ntp_syslogmask == -1) {
        ntp_syslogmask = param_2;
    }
    pcVar2 = strrchr(param_1, 0x2f);
    if (pcVar2 != (char *)0x0) {
        param_1 = pcVar2 + 1;
    }
    progname = (char *)FUN_00019820(param_1);
    if (param_3 == 0) {
        __facility = DAT_00043314;
        if (DAT_00043314 != 0) {
            __facility = 0x18;
        }
    } else {
        DAT_00043314 = 1;
        __facility = 0x18;
    }
    openlog(progname, 9, __facility);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    setlogmask(0xff);
    return;
}

void FUN_0001aa34(char *param_1, int param_2)

{
    int iVar1;
    char *pcVar2;
    size_t sVar3;
    size_t sVar4;
    FILE *__stream;
    int iVar5;
    char *pcVar6;
    char *__buf;
    bool bVar7;
    char acStack_22d[513];
    int local_2c;

    local_2c = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("msyslog.c", 0x1d5, 0, "fname != ((void *)0)");
    }
    if (((syslog_file != (FILE *)0x0) && (syslog_fname != (char *)0x0)) &&
        (iVar1 = strcmp(syslog_fname, param_1), iVar1 == 0))
        goto LAB_0001aa98;
    iVar1 = strcmp(param_1, "stderr");
    iVar5 = 0x37c;
    if (iVar1 == 0) {
    LAB_0001accc:
        __stream = (FILE *)**(undefined4 **)((int)&__DT_PLTGOT + iVar5);
        pcVar2 = (char *)FUN_00019820(param_1);
    } else {
        iVar1 = strcmp(param_1, "stdout");
        pcVar6 = syslog_abs_fname;
        if (iVar1 == 0) {
            iVar5 = 0x368;
            goto LAB_0001accc;
        }
        if (((syslog_fname == (char *)0x0) ||
             (iVar1 = strcmp(param_1, syslog_fname), iVar1 != 0)) &&
            ((bVar7 = param_1 != pcVar6, pcVar6 = param_1,
              bVar7 && (*param_1 != '/')))) {
            __buf = acStack_22d + 1;
            pcVar2 = getcwd(__buf, 0x200);
            if (pcVar2 == (char *)0x0)
                goto LAB_0001abc8;
            sVar3 = strlen(__buf);
            if ((1 < sVar3) && (acStack_22d[sVar3] == '/')) {
                sVar3 = sVar3 - 1;
            }
            sVar4 = strlen(param_1);
            iVar1 = sVar4 + sVar3 + 2;
            pcVar2 = (char *)FUN_000196bc(0, iVar1, 0);
            FUN_0001f658(pcVar2, iVar1, "%.*s%c%s", sVar3, __buf, 0x2f,
                         param_1);
        } else {
        LAB_0001abc8:
            pcVar2 = (char *)FUN_00019820(pcVar6);
        }
        if (0 < debug) {
            FUN_0001a770("attempting to open log %s\n", pcVar2);
        }
        __stream = fopen64(pcVar2, "a");
        param_1 = pcVar6;
    }
    if (__stream == (FILE *)0x0) {
        free(pcVar2);
        iVar1 = -1;
        goto LAB_0001aa98;
    }
    if ((param_2 != 0) && ((syslogit != 0 || (syslog_abs_fname != param_1)))) {
        FUN_0001a848(5, "switching logging to file %s", pcVar2);
    }
    if (((syslog_file != (FILE *)0x0) && (syslog_file != stderr)) &&
        (syslog_file != stdout)) {
        iVar1 = fileno(syslog_file);
        iVar5 = fileno(__stream);
        if (iVar1 != iVar5) {
            fclose(syslog_file);
        }
    }
    syslog_file = __stream;
    if (syslog_abs_fname == param_1) {
        free(pcVar2);
    } else {
        if (syslog_abs_fname == (char *)0x0) {
        LAB_0001aca4:
            if (syslog_fname != (char *)0x0)
                goto LAB_0001ad24;
        } else {
            if (syslog_abs_fname != syslog_fname) {
                free(syslog_abs_fname);
                goto LAB_0001aca4;
            }
        LAB_0001ad24:
            free(syslog_fname);
        }
        syslog_fname = (char *)FUN_00019820(param_1);
        syslog_abs_fname = pcVar2;
    }
    iVar1 = 0;
    syslogit = 0;
LAB_0001aa98:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

void FUN_0001b17c(int *param_1, int param_2, uint *param_3)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;

    iVar1 = __stack_chk_guard;
    if (param_3 == (uint *)0x0) {
        uVar2 = (*DAT_00041048)(0);
    } else {
        uVar2 = *param_3;
    }
    uVar4 = uVar2 + 0x80000000;
    uVar3 = (param_2 + 0x7c558180) - uVar4;
    bVar5 = iVar1 == __stack_chk_guard;
    *param_1 = uVar4 + uVar3;
    param_1[1] = (((int)uVar2 >> 0x1f) - (uint)(uVar2 < 0x80000000)) +
                 (uint)CARRY4(uVar4, uVar3);
    if (bVar5) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b2d4(uint *param_1, uint *param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    uVar3 = param_2[1];
    if ((int)uVar3 < 0) {
        uVar3 = FUN_0002c480(~*param_2, ~uVar3, 0x15180, 0);
        uVar3 = ~uVar3;
    } else {
        uVar3 = FUN_0002c480(*param_2, uVar3, 0x15180, 0);
    }
    uVar2 = *param_2;
    *param_1 = uVar3;
    bVar4 = iVar1 == __stack_chk_guard;
    param_1[1] = uVar2 + uVar3 * -0x15180;
    if (bVar4) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
}

void FUN_0001b384(int *param_1, uint param_2, uint *param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;

    iVar1 = __stack_chk_guard;
    uVar7 = (int)param_2 >> 0x1f;
    if (0x3fffffff < (param_2 ^ uVar7)) {
        piVar3 = __errno_location();
        param_2 = ~uVar7;
        *piVar3 = 0x21;
    }
    uVar4 = param_2 << 2 | 3;
    uVar7 = uVar7 ^ (uVar4 ^ uVar7) / 0x23ab1;
    uVar5 = uVar4 + uVar7 * -0x23ab1 | 3;
    uVar4 = uVar5 / 0x5b5;
    if (param_3 != (uint *)0x0) {
        if ((uVar4 + 1 & 3) == 0) {
            if (uVar4 == 99) {
                uVar6 = (uint)((uVar7 + 1 & 3) == 0);
            } else {
                uVar6 = 1;
            }
        } else {
            uVar6 = 0;
        }
        *param_3 = uVar6;
    }
    iVar2 = __stack_chk_guard;
    *param_1 = uVar7 * 100 + uVar4;
    param_1[1] = uVar5 % 0x5b5 >> 2;
    if (iVar1 != iVar2) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001b538) */

void FUN_0001b490(int *param_1, int param_2, int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    if (-1 < param_2) {
        if (param_3 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = 0x1a;
        }
        if (param_2 < (int)(uint) * (ushort *)((int)&DAT_0002d598 + iVar1)) {
            iVar3 = (param_2 >> 5) + 1;
            iVar2 = iVar3 * 2;
            if (param_2 <
                (int)(uint) * (ushort *)(&DAT_0002d580 + iVar2 + iVar1)) {
                iVar2 = iVar2 + -2;
                iVar3 = param_2 >> 5;
            }
            param_2 =
                param_2 - (uint) * (ushort *)(&DAT_0002d580 + iVar2 + iVar1);
            goto LAB_0001b514;
        }
    }
    param_2 = -1;
    iVar3 = -1;
LAB_0001b514:
    *param_1 = iVar3;
    param_1[1] = param_2;
    return;
}

void FUN_0001b62c(int param_1, int param_2)

{
    int iVar1;
    bool bVar2;
    undefined4 local_28;
    int local_24;
    int local_20;
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = param_2 % 7;
    if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    FUN_0001b384(&local_24, param_2 + -1, &local_28);
    *(int *)(param_1 + 0x1c) = local_20;
    *(int *)(param_1 + 0x14) = local_24 + -0x76b;
    FUN_0001b490(&local_24, local_20, local_28);
    bVar2 = local_1c == __stack_chk_guard;
    *(int *)(param_1 + 0x10) = local_24;
    *(int *)(param_1 + 0xc) = local_20 + 1;
    if (bVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28);
}

/* WARNING: Removing unreachable block (ram,0x0001b780) */

void FUN_0001b6ec(int param_1, uint param_2)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    uint uVar4;

    uVar4 = (int)param_2 >> 0x1f ^ param_2;
    bVar3 = (byte)((int)param_2 >> 0x1f);
    bVar1 = bVar3 ^ (byte)(uVar4 / 0xe10);
    bVar2 = bVar3 ^ (byte)(uVar4 / 0x3c);
    *(byte *)(param_1 + 6) = bVar1 + (bVar3 ^ (byte)(uVar4 / 0x15180)) * -0x18;
    *(byte *)(param_1 + 7) = bVar2 + bVar1 * -0x3c;
    *(byte *)(param_1 + 8) = (char)param_2 + bVar2 * -0x3c;
    return;
}

void FUN_0001b904(ushort *param_1)

{
    int iVar1;
    char cVar2;
    uint uVar3;
    undefined4 local_28;
    int local_24;
    undefined4 local_20;
    int local_1c;
    undefined4 local_18;
    int local_14;

    local_14 = __stack_chk_guard;
    FUN_0001b2d4(&local_1c);
    iVar1 = FUN_0001b6ec(param_1, local_18);
    if (local_14 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    iVar1 = iVar1 + local_1c;
    local_1c = __stack_chk_guard;
    uVar3 = (iVar1 + 0xaf93b) % 7;
    cVar2 = (char)uVar3;
    if (6 < (uVar3 & 0xff)) {
        cVar2 = cVar2 + '\a';
    }
    *(char *)((int)param_1 + 9) = cVar2;
    FUN_0001b384(&local_24, iVar1 + 0xaf93a, &local_28);
    param_1[1] = (short)local_20 + 1;
    if (local_24 + 1U >> 0x10 == 0) {
        iVar1 = -1;
    } else {
        iVar1 = 0;
    }
    *param_1 = (ushort)(local_24 + 1U) & (ushort)iVar1;
    FUN_0001b490(&local_24, local_20, local_28);
    *(char *)((int)param_1 + 5) = (char)local_20 + '\x01';
    *(char *)(param_1 + 2) = (char)local_24 + '\x01';
    if (iVar1 == 0) {
        local_28 = 0xffffffff;
    }
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_28);
    }
    return;
}

void FUN_0001cc4c(void)

{
    int iVar1;
    uint uVar2;
    int *piVar3;
    uint *puVar4;
    int iVar5;

    iVar1 = __stack_chk_guard;
    uVar2 = *DAT_000410cc;
    piVar3 = DAT_000410d0 + 1;
    iVar5 = *DAT_000410d0;
    puVar4 = DAT_000410cc + 1;
    *DAT_000410cc = uVar2 + iVar5;
    if (puVar4 < (uint *)0x410cc) {
        if ((int *)0x410cb < piVar3) {
            piVar3 = &DAT_00041050;
        }
    } else {
        puVar4 = &DAT_00041050;
    }
    DAT_000410cc = puVar4;
    DAT_000410d0 = piVar3;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar2 + iVar5 >> 1);
    }
    return;
}

void FUN_0001ccf0(int param_1)

{
    int iVar1;
    uint __seed;
    int *piVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    piVar2 = &DAT_00041054;
    DAT_00041050 = param_1;
    while (true) {
        param_1 = param_1 * 0x41a7 + (param_1 / 0x1f31d) * -0x7fffffff;
        if (param_1 < 1) {
            param_1 = param_1 + 0x7fffffff;
        }
        *piVar2 = param_1;
        if (piVar2 == (int *)0x410c8)
            break;
        piVar2 = piVar2 + 1;
    }
    iVar3 = 0x136;
    DAT_000410cc = &DAT_0004105c;
    DAT_000410d0 = &DAT_00041050;
    do {
        __seed = FUN_0001cc4c();
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    srand(__seed);
    return;
}

undefined1 *FUN_0001cdd4(uint param_1)

{
    int iVar1;
    uint uVar2;
    undefined1 *__s;

    iVar1 = __stack_chk_guard;
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar2 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    lib_nextbuf = uVar2 & 0xf;
    FUN_0001f658(__s, 0x80, "%lu.%lu.%lu.%lu", param_1 & 0xff,
                 param_1 >> 8 & 0xff, param_1 >> 0x10 & 0xff, param_1 >> 0x18);
    if (iVar1 == __stack_chk_guard) {
        return __s;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001cf68(uint *param_1, int param_2)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    code *pcVar4;
    int iVar5;
    bool bVar6;
    uint local_28;
    int local_24;

    local_28 = *param_1;
    uVar3 = param_1[1];
    local_24 = __stack_chk_guard;
    uVar2 = local_28;
    if (uVar3 == (int)local_28 >> 0x1f) {
        iVar5 = 0;
    } else {
        iVar1 = 0;
        do {
            while (-1 < (int)uVar3) {
                iVar1 = iVar1 + 1;
                if (3 < iVar1)
                    goto LAB_0001d0b4;
                bVar6 = 0x34aadc7f < uVar2;
                uVar2 = uVar2 + 0xcb552380;
                uVar3 = (uVar3 - 1) + (uint)bVar6;
                iVar5 = iVar1;
                if ((int)uVar2 >> 0x1f == uVar3)
                    goto LAB_0001d014;
            }
            iVar5 = iVar1 + -1;
            if (iVar1 + 2 < 0 != SCARRY4(iVar5, 3))
                goto LAB_0001d0b4;
            bVar6 = 0xcb55237f < uVar2;
            uVar2 = uVar2 + 0x34aadc80;
            uVar3 = uVar3 + bVar6;
            iVar1 = iVar5;
        } while ((int)uVar2 >> 0x1f != uVar3);
    }
LAB_0001d014:
    local_28 = uVar2;
    pcVar4 = localtime;
    if (param_2 == 0) {
        pcVar4 = gmtime;
    }
    while (iVar1 = (*pcVar4)(&local_28), iVar1 == 0) {
        while (-1 < (int)local_28) {
            if (((int)local_28 < 0x34aadc80) || (iVar5 = iVar5 + 1, 3 < iVar5))
                goto LAB_0001d0b4;
            local_28 = local_28 + 0xcb552380;
            iVar1 = (*pcVar4)(&local_28);
            if (iVar1 != 0)
                goto LAB_0001d090;
        }
        if (iVar5 + 2 < 0 != SCARRY4(iVar5 + -1, 3))
            goto LAB_0001d0b4;
        local_28 = local_28 + 0x34aadc80;
        iVar5 = iVar5 + -1;
    }
LAB_0001d090:
    if ((iVar5 != 0) && (iVar5 = iVar5 * 0x1c + *(int *)(iVar1 + 0x14),
                         *(int *)(iVar1 + 0x14) = iVar5, 0xc6 < iVar5 - 1U)) {
    LAB_0001d0b4:
        iVar1 = 0;
    }
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d280) */
/* WARNING: Removing unreachable block (ram,0x0001d38c) */

void FUN_0001d34c(int *param_1)

{
    undefined4 *puVar1;
    int iVar2;
    uint uVar3;
    undefined1 *__s;
    undefined4 local_40;
    undefined4 uStack_3c;
    undefined4 local_38;
    undefined4 uStack_34;
    undefined2 local_30[2];
    byte local_2c;
    undefined1 local_2b;
    undefined1 local_2a;
    undefined1 local_29;
    undefined1 local_28;
    byte local_27;
    int local_24;

    local_24 = __stack_chk_guard;
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar3 = lib_nextbuf + 1 & 0xf;
    memset(__s, 0, 0x80);
    iVar2 = *param_1;
    lib_nextbuf = uVar3;
    if ((iVar2 == 0) && (param_1[1] == 0)) {
        FUN_00020410(__s, "(no time)", 0x80);
    } else {
        uVar3 = (uint)param_1[1] / 0x418937;
        if (uVar3 == 1000) {
            iVar2 = iVar2 + 1;
            uVar3 = 0;
        }
        FUN_0001b17c(&local_40, iVar2, 0);
        local_38 = local_40;
        uStack_34 = uStack_3c;
        puVar1 = (undefined4 *)FUN_0001cf68(&local_38, 1);
        if (puVar1 == (undefined4 *)0x0) {
            FUN_0001b904(local_30, &local_38);
            FUN_0001f658(__s, 0x80,
                         "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]",
                         *param_1, param_1[1],
                         *(undefined4 *)(daynames + (uint)local_27 * 4),
                         *(undefined4 *)(months + (local_2c - 1) * 4), local_2b,
                         local_30[0], local_2a, local_29, local_28, uVar3);
        } else {
            FUN_0001f658(
                __s, 0x80, "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u",
                *param_1, param_1[1], *(undefined4 *)(daynames + puVar1[6] * 4),
                *(undefined4 *)(months + puVar1[4] * 4), puVar1[3],
                puVar1[5] + 0x76c, puVar1[2], puVar1[1], *puVar1, uVar3);
        }
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x0001d494) */

void FUN_0001d450(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001d4e8) */

void FUN_0001d4a4(void)

{
    return;
}

void FUN_0001d5a0(int param_1)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;

    iVar1 = __stack_chk_guard;
    iVar3 = DAT_00043330;
    DAT_00043328 = 0;
    DAT_00043320 = 0;
    DAT_0004332c = 0;
    DAT_00043324 = 0;
    DAT_00043330 = 0;
    param_1 = param_1 + iVar3;
    piVar2 = (int *)FUN_00019780(0, param_1, 0x8a4, 0);
    if (0 < param_1) {
        iVar3 = 0;
        piVar4 = piVar2;
        do {
            iVar3 = iVar3 + 1;
            DAT_00043320 = DAT_00043320 + 1;
            *piVar4 = (int)DAT_00043334;
            DAT_00043328 = DAT_00043328 + 1;
            DAT_00043334 = piVar4;
            piVar4 = piVar4 + 0x229;
        } while (param_1 != iVar3);
        DAT_00043334 = piVar2 + param_1 * 0x229 + -0x229;
    }
    DAT_0004332c = DAT_0004332c + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001d6a0(undefined4 *param_1)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 != (undefined4 *)0x0) {
        iVar3 = param_1[0x228];
        param_1[0x228] = iVar3 + -1;
        if (iVar3 + -1 != 0) {
            FUN_0001a848(3, "******** freerecvbuff non-zero usage: %d *******");
        }
        DAT_00043320 = DAT_00043320 + 1;
        puVar2 = param_1;
        *param_1 = DAT_00043334;
        DAT_00043334 = puVar2;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001d73c(undefined4 *param_1)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    if (param_1 == (undefined4 *)0x0) {
        FUN_0001a848(3, "add_full_recv_buffer received NULL buffer");
        return;
    }
    *param_1 = 0;
    if (DAT_0004333c == (undefined4 *)0x0) {
        DAT_0004333c = &DAT_00043338;
        DAT_00043338 = param_1;
    } else {
        *(undefined4 **)*DAT_0004333c = param_1;
        DAT_0004333c = (undefined4 *)*DAT_0004333c;
    }
    DAT_00043324 = DAT_00043324 + 1;
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001d800(void)

{
    undefined4 *__s;
    int iVar1;

    iVar1 = __stack_chk_guard;
    __s = DAT_00043334;
    if (DAT_00043334 == (undefined4 *)0x0) {
        DAT_00043330 = DAT_00043330 + 1;
    } else {
        DAT_00043334 = (undefined4 *)*DAT_00043334;
        DAT_00043320 = DAT_00043320 + -1;
        memset(__s, 0, 0x8a4);
        __s[0x228] = 1;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

/* WARNING: Removing unreachable block (ram,0x0001d924) */

void FUN_0001d89c(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;

    if (DAT_00043338 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*DAT_00043338;
        puVar1 = puVar2;
        if ((puVar2 != (undefined4 *)0x0) &&
            (puVar1 = DAT_0004333c, DAT_0004333c == DAT_00043338)) {
            puVar1 = &DAT_00043338;
        }
        DAT_0004333c = puVar1;
        DAT_00043324 = DAT_00043324 + -1;
        DAT_00043338 = puVar2;
    }
    return;
}

void FUN_0001daf8(int param_1, uint *param_2, uint param_3, char *param_4,
                  uint param_5, int param_6, uint param_7)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    char *pcVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;

    iVar2 = __stack_chk_guard;
    if (param_4 == (char *)0x0) {
        param_4 = "(null)";
    } else if (*param_4 == '\0')
        goto LAB_0001db58;
    if (0 < param_6 || param_6 == -1) {
        iVar4 = 0;
        pcVar6 = param_4;
        do {
            pcVar6 = pcVar6 + 1;
            iVar4 = iVar4 + 1;
            if (*pcVar6 == '\0')
                break;
        } while (iVar4 < param_6 || param_6 == -1);
        param_5 = param_5 - iVar4;
    }
LAB_0001db58:
    uVar3 = param_5 & ~((int)param_5 >> 0x1f);
    if ((param_7 & 1) == 0) {
        if (0 < (int)param_5) {
            uVar7 = *param_2;
            uVar8 = uVar3;
            do {
                uVar5 = uVar7 + 1;
                if (uVar5 < param_3) {
                    *(undefined1 *)(param_1 + uVar7) = 0x20;
                    uVar5 = *param_2 + 1;
                }
                uVar8 = uVar8 - 1;
                *param_2 = uVar5;
                uVar7 = uVar5;
            } while (uVar8 != 0);
            if ((int)uVar3 < 1) {
                uVar3 = uVar3 - 1;
            } else {
                uVar3 = 0;
            }
        }
    } else {
        uVar3 = -uVar3;
    }
    cVar1 = *param_4;
    iVar4 = param_6;
    while (
        (cVar1 != '\0' &&
         ((iVar9 = iVar4, param_6 == -1 || (iVar9 = iVar4 + -1, 0 < iVar4))))) {
        uVar7 = *param_2 + 1;
        if (uVar7 < param_3) {
            *(char *)(param_1 + *param_2) = cVar1;
            uVar7 = *param_2 + 1;
        }
        *param_2 = uVar7;
        param_4 = param_4 + 1;
        cVar1 = *param_4;
        iVar4 = iVar9;
    }
    if (uVar3 != 0) {
        uVar7 = *param_2;
        do {
            uVar8 = uVar7 + 1;
            if (uVar8 < param_3) {
                *(undefined1 *)(param_1 + uVar7) = 0x20;
                uVar8 = *param_2 + 1;
            }
            uVar3 = uVar3 + 1;
            *param_2 = uVar8;
            uVar7 = uVar8;
        } while (uVar3 != 0);
    }
    if (iVar2 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_0001dc94(int param_1, uint *param_2, uint param_3, undefined4 param_4,
                  uint param_5, uint param_6, int param_7, int param_8,
                  uint param_9, uint param_10)

{
    uint uVar1;
    uint uVar2;
    int extraout_r2;
    uint uVar3;
    uint uVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    char *pcVar8;
    uint uVar9;
    uint uVar10;
    undefined8 uVar11;
    longlong lVar12;
    int local_7c;
    uint local_70;
    uint local_6c;
    undefined4 local_64;
    char local_60[44];
    int local_34;

    uVar2 = param_10 & 0x20;
    local_34 = __stack_chk_guard;
    local_7c = param_8;
    if ((param_10 & 0x80) == 0) {
        uVar9 = (int)param_6 >> 0x1f;
        uVar7 = uVar9 ^ param_5;
        param_5 = uVar7 - uVar9;
        uVar9 = (uVar9 ^ param_6) - (uVar9 + (uVar7 < uVar9));
        if ((int)param_6 < 0) {
            local_70 = 1;
            local_6c = 0x2d;
        } else if ((param_10 & 2) == 0) {
            local_70 = param_10 & 4;
            local_6c = local_70;
            if (local_70 != 0) {
                local_70 = 1;
                local_6c = 0x20;
            }
        } else {
            local_70 = 1;
            local_6c = 0x2b;
        }
    } else {
        local_70 = 0;
        local_6c = 0;
        uVar9 = param_6;
    }
    lVar12 = CONCAT44(uVar9, param_5);
    local_64 = param_10 & 0x40;
    if (local_64 == 0) {
        pcVar8 = "0123456789abcdef";
    } else {
        pcVar8 = "0123456789ABCDEF";
    }
    pcVar5 = (char *)((int)&local_64 + 3);
    uVar7 = param_10 & 0x20;
    uVar11 = VectorShiftRight(CONCAT44(param_7, param_7), 0x20);
    uVar4 = 0;
    do {
        uVar1 = uVar4;
        uVar4 = uVar1 + 1;
        lVar12 = FUN_0002c480((int)lVar12, (int)((ulonglong)lVar12 >> 0x20),
                              (int)uVar11, (int)((ulonglong)uVar11 >> 0x20),
                              param_5, uVar9, uVar2);
        pcVar5 = pcVar5 + 1;
        *pcVar5 = pcVar8[extraout_r2];
    } while (lVar12 != 0 && uVar4 < 0x2b);
    uVar9 = (uint)(param_5 != 0 || uVar9 != 0) & param_10 >> 3;
    uVar2 = param_9;
    if (uVar9 != 0) {
        uVar9 = 0;
        if (param_7 == 8) {
            if ((int)uVar4 < (int)param_9) {
                uVar3 = param_9 - uVar4;
            } else {
                uVar3 = 1;
                uVar2 = uVar1 + 2;
            }
            goto LAB_0001dda0;
        }
        if (param_7 == 0x10) {
            uVar3 = param_9 - uVar4;
            if (local_64 == 0) {
                uVar9 = 0x78;
            } else {
                uVar9 = 0x58;
            }
            goto LAB_0001dda0;
        }
    }
    uVar3 = param_9 - uVar4;
LAB_0001dda0:
    if (uVar7 != 0) {
        uVar7 = uVar4;
        if (uVar4 == ((int)uVar4 / 3) * 3) {
            uVar7 = uVar1;
        }
        uVar7 = (int)uVar7 / 3;
        uVar3 = uVar3 - uVar7;
        local_7c = param_8 - uVar7;
    }
    uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    if ((int)uVar2 < (int)uVar4) {
        uVar2 = uVar4;
    }
    local_70 = (local_7c - uVar2) - local_70;
    if (uVar9 != 0) {
        local_70 = local_70 - 2;
    }
    uVar2 = local_70 & ~((int)local_70 >> 0x1f);
    if ((param_10 & 1) == 0) {
        if (((uint)(param_9 == 0xffffffff) & param_10 >> 4) == 0) {
            if (0 < (int)local_70) {
                param_10 = 0x20;
                uVar1 = *param_2;
                uVar10 = uVar2;
                do {
                    uVar6 = uVar1 + 1;
                    if (uVar6 < param_3) {
                        *(undefined1 *)(param_1 + uVar1) = 0x20;
                        uVar6 = *param_2 + 1;
                    }
                    uVar10 = uVar10 - 1;
                    *param_2 = uVar6;
                    uVar1 = uVar6;
                } while (uVar10 != 0);
                if ((int)uVar2 < 1) {
                    uVar2 = uVar2 - 1;
                } else {
                    uVar2 = 0;
                }
            }
        } else {
            uVar3 = uVar3 + uVar2;
            uVar2 = 0;
        }
    } else {
        uVar2 = -uVar2;
    }
    if (local_6c != 0) {
        uVar1 = *param_2 + 1;
        if (uVar1 < param_3) {
            *(char *)(param_1 + *param_2) = (char)local_6c;
            uVar1 = *param_2 + 1;
        }
        *param_2 = uVar1;
    }
    if (uVar9 != 0) {
        uVar1 = *param_2;
        uVar10 = uVar1 + 1;
        if (uVar10 < param_3) {
            *(undefined1 *)(param_1 + uVar1) = 0x30;
            uVar1 = *param_2;
            uVar10 = uVar1 + 1;
        }
        *param_2 = uVar10;
        if (uVar1 + 2 < param_3) {
            *(char *)(param_1 + uVar10) = (char)uVar9;
            uVar10 = *param_2;
        }
        *param_2 = uVar10 + 1;
    }
    if (uVar3 != 0) {
        uVar9 = *param_2;
        do {
            uVar1 = uVar9 + 1;
            if (uVar1 < param_3) {
                *(undefined1 *)(param_1 + uVar9) = 0x30;
                uVar1 = *param_2 + 1;
            }
            uVar3 = uVar3 - 1;
            *param_2 = uVar1;
            uVar9 = uVar1;
        } while (uVar3 != 0);
    }
    if (0 < (int)uVar4) {
        if ((int)uVar7 < 1) {
            uVar9 = 0;
        } else {
            uVar9 = 1;
        }
        do {
            while (true) {
                uVar7 = *param_2;
                uVar3 = uVar4 - 1;
                uVar1 = uVar7 + 1;
                if (uVar1 < param_3) {
                    *(char *)(param_1 + uVar7) = local_60[uVar4 - 1];
                    uVar7 = *param_2;
                    uVar1 = uVar7 + 1;
                }
                if (0 < (int)uVar3) {
                    param_10 = uVar9;
                }
                *param_2 = uVar1;
                if ((int)uVar3 < 1) {
                    param_10 = 0;
                }
                uVar4 = uVar3;
                if (param_10 == 0)
                    break;
                param_10 = (uVar3 / 3) * 3;
                if (uVar3 == param_10) {
                    if (uVar7 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar1) = 0x2c;
                        uVar1 = *param_2;
                    }
                    *param_2 = uVar1 + 1;
                }
            }
        } while (uVar3 != 0);
    }
    if (uVar2 != 0) {
        uVar9 = *param_2;
        do {
            uVar7 = uVar9 + 1;
            if (uVar7 < param_3) {
                *(undefined1 *)(param_1 + uVar9) = 0x20;
                uVar7 = *param_2 + 1;
            }
            uVar2 = uVar2 + 1;
            *param_2 = uVar7;
            uVar9 = uVar7;
        } while (uVar2 != 0);
    }
    if (local_34 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001e44c) */
/* WARNING: Removing unreachable block (ram,0x0001e45c) */
/* WARNING: Removing unreachable block (ram,0x0001e564) */
/* WARNING: Removing unreachable block (ram,0x0001e548) */
/* WARNING: Removing unreachable block (ram,0x0001ec9c) */
/* WARNING: Removing unreachable block (ram,0x0001e550) */
/* WARNING: Removing unreachable block (ram,0x0001e504) */
/* WARNING: Removing unreachable block (ram,0x0001e574) */
/* WARNING: Removing unreachable block (ram,0x0001e514) */

void FUN_0001e104(uint param_1, uint *param_2, uint param_3, int param_4,
                  uint param_5, uint param_6, undefined4 *param_7)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    int extraout_r2;
    uint uVar4;
    uint uVar5;
    char *pcVar6;
    int extraout_r2_00;
    int extraout_r2_01;
    undefined1 uVar7;
    int iVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    char *pcVar12;
    uint uVar13;
    uint uVar14;
    undefined4 uVar15;
    uint uVar16;
    uint uVar17;
    bool bVar18;
    double in_d0;
    double dVar19;
    double dVar20;
    double dVar21;
    double dVar22;
    longlong lVar23;
    longlong lVar24;
    longlong lVar25;
    uint local_d8;
    int local_c8;
    uint local_b8;
    undefined4 local_b4;
    char local_b0[47];
    char local_81[45];
    int local_54;

    if (param_5 == 0xffffffff) {
        param_5 = 6;
    }
    local_54 = __stack_chk_guard;
    if (in_d0 < 0.0) {
        local_c8 = 0x2d;
    LAB_0001e470:
        if (in_d0 + in_d0 == in_d0) {
            if ((param_6 & 0x40) == 0) {
                pcVar12 = "inf";
            } else {
                pcVar12 = "INF";
            }
            cVar3 = *pcVar12;
            if (local_c8 == 0) {
            LAB_0001e4a4:
                pcVar6 = local_b0 + local_c8 + 3;
                do {
                    pcVar6 = pcVar6 + 1;
                    *pcVar6 = cVar3;
                    local_c8 = local_c8 + 1;
                    pcVar12 = pcVar12 + 1;
                    cVar3 = *pcVar12;
                } while (cVar3 != '\0');
            } else {
                local_b0[4] = (undefined1)local_c8;
                if (cVar3 != '\0') {
                    local_c8 = 1;
                    goto LAB_0001e4a4;
                }
                local_c8 = 1;
            }
            FUN_0001daf8(param_1, param_2, param_3, local_b0 + 4, param_4,
                         local_c8, param_6);
        LAB_0001e4e4:
            if (local_54 == __stack_chk_guard) {
                return;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
        }
    } else {
        if ((param_6 & 2) == 0) {
            if ((param_6 & 4) == 0) {
                local_c8 = 0;
            } else {
                local_c8 = 0x20;
            }
        } else {
            local_c8 = 0x2b;
        }
        if (in_d0 != 0.0)
            goto LAB_0001e470;
    }
    dVar19 = -in_d0;
    if ((param_6 & 0x300) == 0) {
        if (0.0 <= in_d0) {
            dVar19 = in_d0;
        }
        uVar1 = param_5;
        if (0x12 < (int)param_5) {
            uVar1 = 0x13;
        }
        uVar14 = param_6 & 0x200;
        dVar20 = dVar19;
        if (uVar14 == 0) {
            iVar11 = 0;
            local_b8 = 0;
            goto LAB_0001e29c;
        }
        dVar21 = 1.0;
        iVar11 = 0;
        local_b8 = 0;
    } else {
        local_b8 = param_6 & 0x100;
        if (local_b8 != 0) {
            param_5 = param_5 - 1;
            local_b8 = (uint)((param_6 & 8) == 0);
        }
        dVar20 = dVar19;
        if (0.0 <= in_d0) {
            dVar20 = in_d0;
        }
        if ((1.0 <= dVar20) || (dVar20 <= 0.0)) {
            iVar11 = 0;
        } else {
            iVar11 = -1;
            do {
                dVar20 = dVar20 * 10.0;
                if ((1.0 <= dVar20) || (dVar20 <= 0.0))
                    break;
                iVar11 = iVar11 + -1;
            } while (iVar11 != -99);
        }
        uVar1 = param_5;
        if (10.0 <= dVar20) {
            iVar11 = iVar11 + 1;
            do {
                dVar20 = dVar20 / 10.0;
                if (dVar20 < 10.0)
                    break;
                iVar11 = iVar11 + 1;
            } while (iVar11 < 99);
            if (0.0 <= in_d0) {
                dVar19 = in_d0;
            }
            if (0x12 < (int)param_5) {
                uVar1 = 0x13;
            }
            if (iVar11 < 1)
                goto LAB_0001eccc;
            dVar21 = 1.0;
            iVar8 = iVar11;
            do {
                iVar8 = iVar8 + -1;
                dVar21 = dVar21 * 10.0;
            } while (iVar8 != 0);
        } else {
            if (0.0 <= in_d0) {
                dVar19 = in_d0;
            }
            if (0x12 < (int)param_5) {
                uVar1 = 0x13;
            }
        LAB_0001eccc:
            dVar21 = 1.0;
            for (iVar8 = iVar11; iVar8 != 0; iVar8 = iVar8 + 1) {
                dVar21 = dVar21 / 10.0;
            }
        }
        uVar14 = 1;
        dVar20 = dVar19;
    }
    dVar19 = dVar20 / dVar21;
LAB_0001e29c:
LAB_0001e2b8:
    if (1.8446744073709552e+19 <= dVar19)
        goto LAB_0001e640;
    lVar23 = FUN_0002c4c0(SUB84(dVar19, 0), (int)((ulonglong)dVar19 >> 0x20));
    dVar21 = (double)FUN_0002c374();
    if (dVar19 < dVar21) {
        lVar23 = CONCAT44((int)((ulonglong)lVar23 >> 0x20) -
                              (uint)((int)lVar23 == 0),
                          (int)lVar23 + -1);
    }
    if (lVar23 == -1)
        goto LAB_0001e640;
    if ((int)param_5 < 1) {
        dVar21 = 1.0;
        uVar9 = uVar1;
    } else {
        dVar21 = 1.0;
        uVar9 = uVar1;
        do {
            uVar9 = uVar9 - 1;
            dVar21 = dVar21 * 10.0;
        } while (uVar9 != 0);
        if ((int)uVar1 < 1) {
            uVar9 = uVar1 - 1;
        } else {
            uVar9 = 0;
        }
    }
    for (; uVar9 != 0; uVar9 = uVar9 + 1) {
        dVar21 = dVar21 / 10.0;
    }
    lVar24 = FUN_0002c4c0(SUB84(dVar21, 0), (int)((ulonglong)dVar21 >> 0x20));
    uVar9 = (uint)((ulonglong)lVar24 >> 0x20);
    dVar22 =
        (double)FUN_0002c374((int)lVar23, (int)((ulonglong)lVar23 >> 0x20));
    dVar21 = (double)FUN_0002c374((uint)lVar24, uVar9);
    dVar21 = (dVar19 - dVar22) * dVar21;
    if (1.8446744073709552e+19 <= dVar21) {
        if (0.5 <= dVar21 - 1.8446744073709552e+19) {
            lVar25 = 0;
            goto LAB_0001e3e8;
        }
    LAB_0001e5a4:
        lVar23 = lVar23 + 1;
        if (uVar14 != 0 && lVar23 == 10) {
            iVar11 = iVar11 + 1;
            lVar23 = 1;
        }
        lVar25 = 0;
    } else {
        lVar25 =
            FUN_0002c4c0(SUB84(dVar21, 0), (int)((ulonglong)dVar21 >> 0x20));
        dVar19 = (double)FUN_0002c374();
        if (dVar21 < dVar19) {
            iVar8 = (int)lVar25 + -1;
            iVar10 =
                (int)((ulonglong)lVar25 >> 0x20) - (uint)((int)lVar25 == 0);
            lVar25 = CONCAT44(iVar10, iVar8);
            dVar19 = (double)FUN_0002c374(iVar8, iVar10);
        }
        if (0.5 <= dVar21 - dVar19) {
            lVar25 = lVar25 + 1;
        }
    LAB_0001e3e8:
        uVar4 = (uint)((ulonglong)lVar25 >> 0x20);
        bVar18 = uVar4 <= uVar9;
        if (uVar9 == uVar4) {
            bVar18 = (uint)lVar25 <= (uint)lVar24;
        }
        if (!bVar18 || lVar24 == lVar25)
            goto LAB_0001e5a4;
    }
    if (((param_6 & 0x100) != 0) && (uVar14 != 0 && iVar11 <= (int)uVar1)) {
        if (iVar11 + 4 < 0 != SCARRY4(iVar11, 4))
            goto LAB_0001ebc0;
        param_5 = uVar1 - iVar11;
        uVar14 = 0;
        uVar1 = param_5;
        dVar19 = dVar20;
        if (0x12 < (int)param_5) {
            uVar1 = 0x13;
        }
        goto LAB_0001e2b8;
    }
    if (uVar14 != 0) {
    LAB_0001ebc0:
        if (iVar11 < 0) {
            iVar11 = -iVar11;
            uVar7 = 0x2d;
        } else {
            uVar7 = 0x2b;
        }
        lVar24 = (longlong)iVar11;
        iVar11 = 0;
        do {
            uVar15 = (undefined4)((ulonglong)lVar24 >> 0x20);
            uVar9 = iVar11 + 1;
            FUN_0002c480((int)lVar24, uVar15, 10, 0);
            local_b0[iVar11] = "0123456789abcdef"[extraout_r2_01];
            iVar11 = 1;
            lVar24 = FUN_0002c480((int)lVar24, uVar15, 10, 0);
        } while (lVar24 != 0 && uVar9 < 2);
        uVar14 = 4;
        if (uVar9 == 1) {
            local_b0[1] = 0x30;
        }
        local_b0[2] = uVar7;
        if ((param_6 & 0x40) == 0) {
            local_b0[3] = 0x65;
        } else {
            local_b0[3] = 0x45;
        }
    }
    pcVar12 = local_b0 + 3;
    uVar9 = 0;
    do {
        uVar4 = uVar9;
        uVar15 = (undefined4)((ulonglong)lVar23 >> 0x20);
        FUN_0002c480((int)lVar23, uVar15, 10, 0);
        uVar9 = uVar4 + 1;
        pcVar12 = pcVar12 + 1;
        *pcVar12 = "0123456789abcdef"[extraout_r2];
        lVar23 = FUN_0002c480((int)lVar23, uVar15, 10, 0);
    } while (lVar23 != 0 && uVar9 < 0x2b);
    uVar2 = uVar1;
    if (lVar25 == 0) {
        if (local_b8 == 0) {
            uVar16 = 0;
            uVar17 = uVar1;
            goto LAB_0001eac8;
        }
        uVar2 = 0;
        uVar16 = 0;
        uVar17 = 0;
        local_b8 = uVar1;
    LAB_0001e744:
        local_d8 = (param_6 << 0x1c) >> 0x1f;
    } else {
        pcVar12 = local_81;
        uVar16 = 0;
        local_b4 = pcVar12;
        do {
            uVar15 = (undefined4)((ulonglong)lVar25 >> 0x20);
            FUN_0002c480((int)lVar25, uVar15, 10, 0);
            uVar16 = uVar16 + 1;
            pcVar12 = pcVar12 + 1;
            *pcVar12 = "0123456789abcdef"[extraout_r2_00];
            lVar25 = FUN_0002c480((int)lVar25, uVar15, 10, 0);
        } while (lVar25 != 0 && uVar16 < 0x2b);
        uVar17 = uVar1 - uVar16;
        if (local_b8 != 0) {
            if ((int)uVar16 < 1) {
                uVar2 = 0;
                uVar17 = 0;
                local_b8 = uVar1;
                goto LAB_0001e744;
            }
            local_b8 = 0;
            pcVar12 = local_b4;
            do {
                pcVar12 = pcVar12 + 1;
                if (*pcVar12 != '0') {
                    uVar2 = uVar1 - local_b8;
                    goto LAB_0001eac8;
                }
                local_b8 = local_b8 + 1;
            } while (local_b8 != uVar16);
            uVar2 = uVar1 - local_b8;
            uVar16 = local_b8;
        }
    LAB_0001eac8:
        if ((int)uVar2 < 1)
            goto LAB_0001e744;
        local_d8 = 1;
    }
    uVar1 = param_6 & 0x20;
    if (uVar1 != 0) {
        uVar1 = uVar9;
        if (uVar9 == ((int)uVar9 / 3) * 3) {
            uVar1 = uVar4;
        }
        uVar1 = (int)uVar1 / 3;
    }
    iVar11 = ((((param_4 - uVar9) - uVar14) - uVar2) - uVar1) - local_d8;
    if (local_c8 != 0) {
        iVar11 = iVar11 + -1;
    }
    if (iVar11 < 0) {
        iVar8 = 0;
    LAB_0001e894:
        if (local_c8 != 0) {
            uVar4 = *param_2 + 1;
            if (uVar4 < param_3) {
                *(char *)(param_1 + *param_2) = (char)local_c8;
                uVar4 = *param_2 + 1;
            }
            *param_2 = uVar4;
        }
    } else {
        if ((param_6 & 1) != 0) {
            iVar8 = -iVar11;
            goto LAB_0001e894;
        }
        iVar8 = 0;
        if ((param_6 & 0x10) == 0) {
            if (iVar11 != 0) {
                uVar4 = *param_2;
                iVar8 = iVar11;
                do {
                    uVar2 = uVar4 + 1;
                    if (uVar2 < param_3) {
                        *(undefined1 *)(param_1 + uVar4) = 0x20;
                        uVar2 = *param_2 + 1;
                    }
                    iVar8 = iVar8 + -1;
                    *param_2 = uVar2;
                    uVar4 = uVar2;
                } while (iVar8 != 0);
            }
            goto LAB_0001e894;
        }
        if (iVar11 == 0)
            goto LAB_0001e894;
        uVar4 = *param_2;
        if (local_c8 != 0) {
            uVar2 = uVar4 + 1;
            if (uVar4 + 1 < param_3) {
                *(char *)(param_1 + uVar4) = (char)local_c8;
                uVar2 = *param_2 + 1;
            }
            uVar4 = uVar2;
            *param_2 = uVar4;
        }
        do {
            uVar2 = uVar4 + 1;
            if (uVar2 < param_3) {
                *(undefined1 *)(param_1 + uVar4) = 0x30;
                uVar2 = *param_2 + 1;
            }
            iVar11 = iVar11 + -1;
            *param_2 = uVar2;
            uVar4 = uVar2;
        } while (iVar11 != 0);
        iVar8 = 0;
    }
    if (0 < (int)uVar9) {
        do {
            while (true) {
                uVar2 = *param_2;
                uVar13 = uVar9 - 1;
                uVar5 = uVar2 + 1;
                uVar4 = param_3;
                if (uVar5 < param_3) {
                    *(char *)(param_1 + uVar2) = local_b0[uVar9 + 3];
                    uVar2 = *param_2;
                    uVar5 = uVar2 + 1;
                    uVar4 = param_1;
                }
                if (0 < (int)uVar13) {
                    uVar4 = (uint)(0 < (int)uVar1);
                }
                *param_2 = uVar5;
                if ((int)uVar13 < 1) {
                    uVar4 = 0;
                }
                uVar9 = uVar13;
                if (uVar4 == 0)
                    break;
                if (uVar13 % 3 == 0) {
                    if (uVar2 + 2 < param_3) {
                        *(undefined1 *)(param_1 + uVar5) = 0x2c;
                        uVar5 = *param_2;
                    }
                    *param_2 = uVar5 + 1;
                }
            }
        } while (uVar13 != 0);
    }
    if (local_d8 != 0) {
        uVar1 = *param_2 + 1;
        if (uVar1 < param_3) {
            *(undefined1 *)(param_1 + *param_2) = 0x2e;
            uVar1 = *param_2 + 1;
        }
        *param_2 = uVar1;
    }
    if (0 < (int)uVar17) {
        uVar1 = *param_2;
        do {
            uVar9 = uVar1 + 1;
            if (uVar9 < param_3) {
                *(undefined1 *)(param_1 + uVar1) = 0x30;
                uVar9 = *param_2 + 1;
            }
            uVar17 = uVar17 - 1;
            *param_2 = uVar9;
            uVar1 = uVar9;
        } while (uVar17 != 0);
    }
    if ((int)local_b8 < (int)uVar16) {
        uVar1 = *param_2;
        pcVar12 = local_81 + uVar16;
        do {
            uVar9 = uVar1 + 1;
            pcVar6 = pcVar12 + -1;
            if (uVar9 < param_3) {
                *(char *)(param_1 + uVar1) = *pcVar12;
                uVar9 = *param_2 + 1;
            }
            *param_2 = uVar9;
            uVar1 = uVar9;
            pcVar12 = pcVar6;
        } while (local_81 + local_b8 != pcVar6);
    }
    if (uVar14 != 0) {
        uVar1 = *param_2;
        do {
            uVar9 = uVar1 + 1;
            uVar4 = uVar14 - 1;
            if (uVar9 < param_3) {
                *(char *)(param_1 + uVar1) = local_b0[uVar14 - 1];
                uVar9 = *param_2 + 1;
            }
            *param_2 = uVar9;
            uVar1 = uVar9;
            uVar14 = uVar4;
        } while (uVar4 != 0);
    }
    if (iVar8 != 0) {
        uVar1 = *param_2;
        do {
            uVar14 = uVar1 + 1;
            if (uVar14 < param_3) {
                *(undefined1 *)(param_1 + uVar1) = 0x20;
                uVar14 = *param_2 + 1;
            }
            iVar8 = iVar8 + 1;
            *param_2 = uVar14;
            uVar1 = uVar14;
        } while (iVar8 != 0);
    }
    goto LAB_0001e4e4;
LAB_0001e640:
    *param_7 = 1;
    goto LAB_0001e4e4;
}

void FUN_0001ecf4(int param_1, uint param_2, char *param_3, uint *param_4)

{
    uint uVar1;
    int *piVar2;
    uint uVar3;
    uint *puVar4;
    char cVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 *puVar8;
    uint *puVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint local_34;
    int local_30;
    int local_2c;

    uVar12 = param_2;
    if (param_2 != 0) {
        uVar12 = 1;
    }
    if (param_1 != 0) {
        uVar12 = 0;
    }
    local_34 = 0;
    local_2c = __stack_chk_guard;
    if (uVar12 != 0) {
        param_2 = 0;
    }
    uVar3 = 0;
    cVar5 = *param_3;
    local_30 = 0;
    param_3 = param_3 + 1;
    uVar1 = 0xffffffff;
    uVar10 = 0;
    uVar12 = 0;
    uVar14 = 0;
LAB_0001ed70:
    uVar13 = uVar14;
    if (cVar5 != '\0') {
        do {
            uVar11 = uVar1;
            uVar14 = uVar13;
            switch (uVar13) {
            case 1:
                switch (cVar5) {
                case ' ':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 4;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed70;
                case '!':
                    break;
                case '\"':
                    break;
                case '#':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 8;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed70;
                case '$':
                    break;
                case '%':
                    break;
                case '&':
                    break;
                case '\'':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 0x20;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed70;
                case '(':
                    break;
                case ')':
                    break;
                case '*':
                    break;
                case '+':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 2;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed70;
                case ',':
                    break;
                case '-':
                    uVar3 = uVar3 | 1;
                    goto LAB_0001eea0;
                case '.':
                    break;
                case '/':
                    break;
                case '0':
                    cVar5 = *param_3;
                    uVar3 = uVar3 | 0x10;
                    param_3 = param_3 + 1;
                    goto LAB_0001ed70;
                }
                uVar14 = 2;
                goto LAB_0001ed70;
            case 2:
                goto LAB_0001ef20;
            case 3:
                if (cVar5 == '.') {
                    cVar5 = *param_3;
                    param_3 = param_3 + 1;
                    uVar14 = 4;
                } else {
                LAB_0001ef18:
                    uVar14 = 5;
                }
                goto LAB_0001ed70;
            case 4:
                uVar11 = (uint)(byte)(cVar5 - 0x30);
                if (uVar1 != 0xffffffff) {
                    if (uVar11 < 10) {
                        if ((int)uVar1 <= (int)((0x7fffffff - uVar11) / 10)) {
                            uVar11 = uVar1 * 10 + uVar11;
                            goto LAB_0001eea0;
                        }
                        goto LAB_0001f5bc;
                    }
                LAB_0001f368:
                    if (cVar5 != '*')
                        goto LAB_0001ef18;
                    uVar1 = *param_4;
                    cVar5 = *param_3;
                    param_4 = param_4 + 1;
                    param_3 = param_3 + 1;
                    uVar1 = uVar1 | (int)uVar1 >> 0x1f;
                    uVar14 = 5;
                    goto LAB_0001ed70;
                }
                if (9 < uVar11) {
                    uVar1 = 0;
                    goto LAB_0001f368;
                }
            LAB_0001eea0:
                cVar5 = *param_3;
                param_3 = param_3 + 1;
                uVar1 = uVar11;
                if (cVar5 == '\0')
                    goto LAB_0001eeb4;
                break;
            case 5:
                switch (cVar5) {
                case 'L':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = uVar13;
                    goto LAB_0001ed70;
                case 'M':
                    break;
                case 'N':
                    break;
                case 'O':
                    break;
                case 'P':
                    break;
                case 'Q':
                    break;
                case 'R':
                    break;
                case 'S':
                    break;
                case 'T':
                    break;
                case 'U':
                    break;
                case 'V':
                    break;
                case 'W':
                    break;
                case 'X':
                    break;
                case 'Y':
                    break;
                case 'Z':
                    break;
                case '[':
                    break;
                case '\\':
                    break;
                case ']':
                    break;
                case '^':
                    break;
                case '_':
                    break;
                case '`':
                    break;
                case 'a':
                    break;
                case 'b':
                    break;
                case 'c':
                    break;
                case 'd':
                    break;
                case 'e':
                    break;
                case 'f':
                    break;
                case 'g':
                    break;
                case 'h':
                    cVar5 = *param_3;
                    if (cVar5 == 'h') {
                        cVar5 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 1;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 2;
                    }
                    uVar14 = 6;
                    goto LAB_0001ed70;
                case 'i':
                    break;
                case 'j':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 8;
                    goto LAB_0001ed70;
                case 'k':
                    break;
                case 'l':
                    cVar5 = *param_3;
                    if (cVar5 == 'l') {
                        cVar5 = param_3[1];
                        param_3 = param_3 + 2;
                        uVar10 = 4;
                    } else {
                        param_3 = param_3 + 1;
                        uVar10 = 3;
                    }
                    uVar14 = 6;
                    goto LAB_0001ed70;
                case 'm':
                    break;
                case 'n':
                    break;
                case 'o':
                    break;
                case 'p':
                    break;
                case 'q':
                    break;
                case 'r':
                    break;
                case 's':
                    break;
                case 't':
                    cVar5 = *param_3;
                    uVar14 = 6;
                    param_3 = param_3 + 1;
                    uVar10 = 7;
                    goto LAB_0001ed70;
                case 'u':
                    break;
                case 'v':
                    break;
                case 'w':
                    break;
                case 'x':
                    break;
                case 'y':
                    break;
                case 'z':
                    uVar14 = 6;
                    cVar5 = *param_3;
                    param_3 = param_3 + 1;
                    uVar10 = 6;
                    goto LAB_0001ed70;
                }
                uVar14 = 6;
                goto LAB_0001ed70;
            case 6:
                puVar9 = param_4;
                uVar14 = local_34;
                switch (cVar5) {
                case '%':
                    uVar14 = local_34 + 1;
                    if (uVar14 < param_2) {
                        *(undefined1 *)(param_1 + local_34) = 0x25;
                    }
                    break;
                case '&':
                    break;
                case '\'':
                    break;
                case '(':
                    break;
                case ')':
                    break;
                case '*':
                    break;
                case '+':
                    break;
                case ',':
                    break;
                case '-':
                    break;
                case '.':
                    break;
                case '/':
                    break;
                case '0':
                    break;
                case '1':
                    break;
                case '2':
                    break;
                case '3':
                    break;
                case '4':
                    break;
                case '5':
                    break;
                case '6':
                    break;
                case '7':
                    break;
                case '8':
                    break;
                case '9':
                    break;
                case ':':
                    break;
                case ';':
                    break;
                case '<':
                    break;
                case '=':
                    break;
                case '>':
                    break;
                case '?':
                    break;
                case '@':
                    break;
                case 'A':
                    goto LAB_0001f324;
                case 'B':
                    break;
                case 'C':
                    break;
                case 'D':
                    break;
                case 'E':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f2dc;
                case 'F':
                LAB_0001f324:
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f2ec;
                case 'G':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f26c;
                case 'H':
                    break;
                case 'I':
                    break;
                case 'J':
                    break;
                case 'K':
                    break;
                case 'L':
                    break;
                case 'M':
                    break;
                case 'N':
                    break;
                case 'O':
                    break;
                case 'P':
                    break;
                case 'Q':
                    break;
                case 'R':
                    break;
                case 'S':
                    break;
                case 'T':
                    break;
                case 'U':
                    break;
                case 'V':
                    break;
                case 'W':
                    break;
                case 'X':
                    uVar3 = uVar3 | 0x40;
                    goto LAB_0001f230;
                case 'Y':
                    break;
                case 'Z':
                    break;
                case '[':
                    break;
                case '\\':
                    break;
                case ']':
                    break;
                case '^':
                    break;
                case '_':
                    break;
                case '`':
                    break;
                case 'a':
                    goto LAB_0001f2ec;
                case 'b':
                    break;
                case 'c':
                    uVar14 = local_34 + 1;
                    puVar9 = param_4 + 1;
                    if (uVar14 < param_2) {
                        *(char *)(param_1 + local_34) = (char)*param_4;
                    }
                    break;
                case 'd':
                    goto LAB_0001f488;
                case 'e':
                LAB_0001f2dc:
                    uVar3 = uVar3 | 0x200;
                    goto LAB_0001f2ec;
                case 'f':
                LAB_0001f2ec:
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    FUN_0001e104((int)*puVar8, param_1, &local_34, param_2,
                                 uVar12, uVar1, uVar3, &local_30);
                joined_r0x0001f2b4:
                    puVar9 = (uint *)(puVar8 + 1);
                    uVar14 = local_34;
                    if (local_30 != 0)
                        goto LAB_0001eeb4;
                    break;
                case 'g':
                LAB_0001f26c:
                    puVar8 =
                        (undefined8 *)((uint)((int)param_4 + 7) & 0xfffffff8);
                    if (uVar1 == 0) {
                        uVar1 = 1;
                    }
                    FUN_0001e104((int)*puVar8, param_1, &local_34, param_2,
                                 uVar12, uVar1, uVar3 | 0x100, &local_30);
                    goto joined_r0x0001f2b4;
                case 'h':
                    break;
                case 'i':
                LAB_0001f488:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(char)(byte)*param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 2:
                        uVar10 = (uint)(short)(ushort)*param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 3:
                    default:
                    switchD_0001f490_default:
                        uVar10 = *param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 4:
                        goto LAB_0001f5a8;
                    case 5:
                        goto switchD_0001f490_default;
                    case 6:
                        uVar10 = *param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 7:
                        goto switchD_0001f490_default;
                    case 8:
                    LAB_0001f5a8:
                        puVar4 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        puVar9 = puVar4 + 2;
                        uVar10 = *puVar4;
                        uVar14 = puVar4[1];
                    }
                    FUN_0001dc94(param_1, &local_34, param_2, 10, uVar10,
                                 uVar14, 10, uVar12, uVar1, uVar3);
                    uVar14 = local_34;
                    break;
                case 'j':
                    break;
                case 'k':
                    break;
                case 'l':
                    break;
                case 'm':
                    break;
                case 'n':
                    puVar9 = param_4 + 1;
                    param_4 = (uint *)*param_4;
                    switch (uVar10) {
                    case 1:
                        *(char *)param_4 = (char)local_34;
                        goto switchD_0001f0d4_default;
                    case 2:
                        *(short *)param_4 = (short)local_34;
                        goto switchD_0001f0d4_default;
                    case 3:
                        break;
                    case 4:
                        goto LAB_0001f598;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                    LAB_0001f598:
                        *param_4 = local_34;
                        param_4[1] = 0;
                        goto switchD_0001f0d4_default;
                    }
                    *param_4 = local_34;
                    break;
                case 'o':
                    uVar6 = 8;
                    goto LAB_0001f234;
                case 'p':
                    uVar14 = *param_4;
                    puVar9 = param_4 + 1;
                    if (uVar14 == 0) {
                        FUN_0001daf8(param_1, &local_34, param_2, "(nil)",
                                     uVar12, 0xffffffff, uVar3);
                        uVar14 = local_34;
                    } else {
                        FUN_0001dc94(param_1, &local_34, param_2, uVar14,
                                     uVar14, 0, 0x10, uVar12, uVar1,
                                     uVar3 | 0x88);
                        uVar14 = local_34;
                    }
                    break;
                case 'q':
                    break;
                case 'r':
                    break;
                case 's':
                    FUN_0001daf8(param_1, &local_34, param_2, *param_4, uVar12,
                                 uVar1, uVar3);
                    puVar9 = param_4 + 1;
                    uVar14 = local_34;
                    break;
                case 't':
                    break;
                case 'u':
                    uVar6 = 10;
                    goto LAB_0001f234;
                case 'v':
                    break;
                case 'w':
                    break;
                case 'x':
                LAB_0001f230:
                    uVar6 = 0x10;
                LAB_0001f234:
                    switch (uVar10) {
                    case 1:
                        uVar10 = (uint)(byte)*param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 2:
                        uVar10 = (uint)(ushort)*param_4;
                        uVar14 = 0;
                        puVar9 = param_4 + 1;
                        break;
                    case 3:
                    default:
                    switchD_0001f240_default:
                        uVar10 = *param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = 0;
                        break;
                    case 4:
                        goto LAB_0001f3f4;
                    case 5:
                        goto switchD_0001f240_default;
                    case 6:
                        goto switchD_0001f240_default;
                    case 7:
                        uVar10 = *param_4;
                        puVar9 = param_4 + 1;
                        uVar14 = (int)uVar10 >> 0x1f;
                        break;
                    case 8:
                    LAB_0001f3f4:
                        puVar4 =
                            (uint *)((uint)((int)param_4 + 7) & 0xfffffff8);
                        puVar9 = puVar4 + 2;
                        uVar10 = *puVar4;
                        uVar14 = puVar4[1];
                    }
                    FUN_0001dc94(param_1, &local_34, param_2, uVar6, uVar10,
                                 uVar14, uVar6, uVar12, uVar1, uVar3 | 0x80);
                    uVar14 = local_34;
                }
            switchD_0001f0d4_default:
                local_34 = uVar14;
                uVar3 = 0;
                cVar5 = *param_3;
                param_3 = param_3 + 1;
                uVar1 = 0xffffffff;
                param_4 = puVar9;
                uVar10 = uVar3;
                uVar12 = uVar3;
                uVar14 = uVar3;
                goto LAB_0001ed70;
            default:
                if (cVar5 == '%') {
                    uVar13 = 1;
                } else {
                    if (local_34 + 1 < param_2) {
                        *(char *)(param_1 + local_34) = cVar5;
                    }
                    uVar13 = 0;
                    local_34 = local_34 + 1;
                }
                goto LAB_0001eea0;
            }
        } while (true);
    }
    goto LAB_0001eeb4;
LAB_0001ef20:
    uVar13 = (uint)(byte)(cVar5 - 0x30);
    if (9 < uVar13) {
        if (cVar5 == '*') {
            uVar12 = *param_4;
            uVar14 = 3;
            cVar5 = *param_3;
            param_4 = param_4 + 1;
            param_3 = param_3 + 1;
            if ((int)uVar12 < 0) {
                uVar3 = uVar3 | 1;
                uVar12 = -uVar12;
            }
        } else {
            uVar14 = 3;
        }
        goto LAB_0001ed70;
    }
    if ((int)uVar12 <= (int)((0x7fffffff - uVar13) / 10)) {
        cVar5 = *param_3;
        uVar12 = uVar12 * 10 + uVar13;
        param_3 = param_3 + 1;
        goto LAB_0001ed70;
    }
LAB_0001f5bc:
    local_30 = 1;
LAB_0001eeb4:
    if (local_34 < param_2) {
        *(undefined1 *)(param_1 + local_34) = 0;
    } else if (param_2 != 0) {
        *(undefined1 *)(param_1 + param_2 + -1) = 0;
    }
    if (local_30 == 0) {
        uVar12 = local_34;
        if (local_34 < 0x7fffffff)
            goto LAB_0001eef0;
        iVar7 = 0x22;
    } else {
        iVar7 = 0x4b;
    }
    piVar2 = __errno_location();
    *piVar2 = iVar7;
    uVar12 = 0xffffffff;
LAB_0001eef0:
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
}

void FUN_0001f658(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_4 = param_4;
    FUN_0001ecf4(param_1, param_2, param_3, &uStack_4, &uStack_4);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001f6bc(short *param_1)

{
    int iVar1;
    short sVar2;
    int iVar3;
    int *piVar4;
    char *pcVar5;
    char *__buf;
    int iVar6;
    uint uVar7;
    int iVar8;

    iVar3 = __stack_chk_guard;
    piVar4 = __errno_location();
    iVar6 = *piVar4;
    __buf = lib_stringbuf + lib_nextbuf * 0x80;
    uVar7 = lib_nextbuf + 1 & 0xf;
    memset(__buf, 0, 0x80);
    lib_nextbuf = uVar7;
    if (param_1 == (short *)0x0) {
        FUN_00020410(__buf, "(null)", 0x80);
        goto LAB_0001f758;
    }
    sVar2 = *param_1;
    if (sVar2 != 2) {
        if (sVar2 == 10) {
            inet_ntop(10, param_1 + 4, __buf, 0x80);
            iVar8 = *(int *)(param_1 + 0xc);
            if ((iVar8 != 0) && (pcVar5 = strchr(__buf, 0x25),
                                 uVar7 = lib_nextbuf, pcVar5 == (char *)0x0)) {
                iVar1 = lib_nextbuf * 0x80;
                pcVar5 = lib_stringbuf + iVar1;
                memset(pcVar5, 0, 0x80);
                lib_nextbuf = uVar7 + 1 & 0xf;
                FUN_0001f658(pcVar5, 0x80, "%s%%%lu", __buf, iVar8);
                lib_stringbuf[iVar1 + 0x7f] = 0;
                __buf = pcVar5;
            }
            goto LAB_0001f758;
        }
        if (sVar2 != 0) {
            FUN_0001f658(__buf, 0x80, "(socktoa unknown family %d)");
            goto LAB_0001f758;
        }
    }
    inet_ntop(2, param_1 + 2, __buf, 0x80);
LAB_0001f758:
    iVar8 = __stack_chk_guard;
    *piVar4 = iVar6;
    if (iVar3 == iVar8) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__buf);
}

void FUN_0001f850(short *param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    char *pcVar5;
    uint uVar6;
    undefined1 *__s;
    int iVar7;

    iVar1 = __stack_chk_guard;
    piVar3 = __errno_location();
    iVar7 = *piVar3;
    uVar4 = FUN_0001f6bc(param_1);
    __s = lib_stringbuf + lib_nextbuf * 0x80;
    uVar6 = lib_nextbuf + 1;
    memset(__s, 0, 0x80);
    if (*param_1 == 10) {
        pcVar5 = "[%s]:%hu";
    } else {
        pcVar5 = "%s:%hu";
    }
    lib_nextbuf = uVar6 & 0xf;
    FUN_0001f658(__s, 0x80, pcVar5, uVar4,
                 param_1[1] << 8 | (ushort)param_1[1] >> 8);
    iVar2 = __stack_chk_guard;
    *piVar3 = iVar7;
    if (iVar1 == iVar2) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_0001fa84(sockaddr *param_1)

{
    sa_family_t sVar1;
    addrinfo *__ai;
    int *piVar2;
    int iVar3;
    char *pcVar4;
    undefined4 uVar5;
    int iVar6;
    socklen_t __salen;
    addrinfo *paVar7;
    uint uVar8;
    char *__host;
    int iVar9;
    int iVar10;
    undefined4 uVar11;
    int iVar12;
    addrinfo *local_80;
    addrinfo local_7c;
    undefined4 local_5c;
    int iStack_58;
    undefined1 auStack_54[4];
    undefined4 local_50;
    int iStack_4c;
    int iStack_48;
    int local_44;
    undefined4 local_40;
    int local_3c;

    local_40 = 0x70746e;
    local_3c = __stack_chk_guard;
    piVar2 = __errno_location();
    iVar9 = *piVar2;
    __host = lib_stringbuf + lib_nextbuf * 0x80;
    uVar8 = lib_nextbuf + 1;
    memset(__host, 0, 0x80);
    if (param_1->sa_family == 2) {
        __salen = 0x10;
    } else {
        __salen = 0x1c;
    }
    lib_nextbuf = uVar8 & 0xf;
    iVar3 = getnameinfo(param_1, __salen, __host, 0x80, (char *)0x0, 0, 0x18);
    if (iVar3 == 0) {
        if (0 < debug) {
            uVar5 = FUN_0001f6bc(param_1);
            FUN_0001a770("%s reversed to %s\n", uVar5, __host);
        }
        local_80 = (addrinfo *)0x0;
        local_7c.ai_addrlen = 0;
        local_7c.ai_addr = (sockaddr *)0x0;
        local_7c._0_8_ = (ulonglong)param_1->sa_family << 0x20;
        local_7c.ai_canonname = (char *)0x0;
        local_7c.ai_next = (addrinfo *)0x0;
        local_7c.ai_socktype = 2;
        local_7c.ai_protocol = 0x11;
        iVar3 = getaddrinfo(__host, (char *)&local_40, &local_7c, &local_80);
        if (iVar3 == -2 || iVar3 == -5) {
            local_7c.ai_flags = 0x22;
            iVar3 =
                getaddrinfo(__host, (char *)&local_40, &local_7c, &local_80);
        }
        if (iVar3 == -1) {
            local_7c._0_8_ = local_7c._0_8_ & 0xffffffffffffffdf;
            iVar3 =
                getaddrinfo(__host, (char *)&local_40, &local_7c, &local_80);
        }
        __ai = local_80;
        if (iVar3 == 0) {
            if (local_80 == (addrinfo *)0x0) {
                /* WARNING: Subroutine does not return */
                FUN_00020788("socktohost.c", 0x57, 2, "alist != ((void *)0)");
            }
            sVar1 = param_1->sa_family;
            uVar5 = 0;
            iVar10 = 0;
            uVar11 = 0;
            iVar12 = 0;
            paVar7 = local_80;
            do {
                while (true) {
                    uVar8 = paVar7->ai_addrlen;
                    if (0x1b < uVar8) {
                        uVar8 = 0x1c;
                    }
                    local_5c = uVar5;
                    iStack_58 = iVar10;
                    local_50 = uVar5;
                    iStack_4c = iVar10;
                    iStack_48 = iVar12;
                    local_40 = uVar11;
                    local_3c = iVar12;
                    __memcpy_chk(&local_5c, paVar7->ai_addr, uVar8);
                    if ((sa_family_t)local_5c == sVar1)
                        break;
                LAB_0001fc9c:
                    paVar7 = paVar7->ai_next;
                    if (paVar7 == (addrinfo *)0x0)
                        goto LAB_0001fdac;
                }
                if (sVar1 != 2) {
                    iVar6 = memcmp(param_1->sa_data + 6, auStack_54, 0x10);
                    if ((iVar6 == 0) &&
                        (*(int *)(param_1[1].sa_data + 6) == local_44))
                        goto LAB_0001fd08;
                    goto LAB_0001fc9c;
                }
                if (*(int *)(param_1->sa_data + 2) == iStack_58) {
                LAB_0001fd08:
                    freeaddrinfo(__ai);
                    *piVar2 = iVar9;
                    goto LAB_0001fc50;
                }
                paVar7 = paVar7->ai_next;
            } while (paVar7 != (addrinfo *)0x0);
        LAB_0001fdac:
            freeaddrinfo(__ai);
        }
        if (0 < debug) {
            pcVar4 = gai_strerror(iVar3);
            FUN_0001a770("%s forward check lookup fail: %s\n", __host, pcVar4);
        }
        pcVar4 = lib_stringbuf + lib_nextbuf * 0x80;
        uVar8 = lib_nextbuf + 1;
        memset(pcVar4, 0, 0x80);
        lib_nextbuf = uVar8 & 0xf;
        uVar5 = FUN_0001f6bc(param_1);
        FUN_0001f658(pcVar4, 0x80, "%s (%s)", uVar5, __host);
        *piVar2 = iVar9;
        __host = pcVar4;
    } else {
        *piVar2 = iVar9;
        __host = (char *)FUN_0001f6bc(param_1);
    }
LAB_0001fc50:
    if (local_3c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__host);
}

void FUN_0001fe18(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_00019d4c();
    ssl_init_done = 1;
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001fe74(void)

{
    int iVar1;
    uint uVar2;

    iVar1 = __stack_chk_guard;
    uVar2 = OpenSSL_version_num();
    if (((uVar2 ^ 0x1010104f) & 0xfffff00f) != 0) {
        FUN_0001a848(
            4, "OpenSSL version mismatch. Built against %lx, you have %lx",
            0x1010104f, uVar2);
        __fprintf_chk(
            stderr, 1,
            "OpenSSL version mismatch. Built against %lx, you have %lx\n",
            0x1010104f, uVar2);
    }
    if (ssl_init_done == 0) {
        if (iVar1 == __stack_chk_guard) {
            FUN_0001fe18();
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0001ff4c(int param_1)

{
    int iVar1;
    char *pcVar2;

    iVar1 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fe18();
    }
    pcVar2 = OBJ_nid2sn(param_1);
    if (param_1 == 0x37e) {
        if (debug == 0) {
            pcVar2 = "AES128CMAC";
        } else {
            pcVar2 = "AES128CMAC";
            __fprintf_chk(stderr, 1, "%s:%d:%s():%s:nid\n", "ssl_init.c", 0xdf,
                          "keytype_name", "AES128CMAC");
        }
    } else if (pcVar2 == (char *)0x0) {
        pcVar2 = "(unknown key type)";
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar2);
}

void FUN_0002006c(byte *param_1, uint *param_2)

{
    int iVar1;
    __int32_t **pp_Var2;
    int iVar3;
    int iVar4;
    char *name;
    EVP_MD *md;
    undefined4 uVar5;
    undefined4 uVar6;
    byte *pbVar7;
    uint uVar8;
    byte *s;

    iVar1 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fe18();
    }
    iVar3 = lib_nextbuf;
    s = lib_stringbuf + lib_nextbuf * 0x80;
    memset(s, 0, 0x80);
    lib_nextbuf = iVar3 + 1U & 0xf;
    FUN_00020410(s, param_1, 0x80);
    uVar8 = (uint)(byte)lib_stringbuf[iVar3 * 0x80];
    if (uVar8 != 0) {
        pp_Var2 = __ctype_toupper_loc();
        pbVar7 = s;
        do {
            *pbVar7 = (byte)(*pp_Var2)[uVar8];
            pbVar7 = pbVar7 + 1;
            uVar8 = (uint)*pbVar7;
        } while (uVar8 != 0);
    }
    iVar3 = OBJ_sn2nid((char *)s);
    if (iVar3 == 0) {
        iVar4 = strcmp("AES128CMAC", (char *)s);
        if (iVar4 == 0) {
            if (debug == 0) {
                iVar3 = 0x37e;
            } else {
                iVar3 = 0x37e;
                __fprintf_chk(stderr, 1, "%s:%d:%s():%s:key\n", "ssl_init.c",
                              0x87, "keytype_from_text", "AES128CMAC");
            }
        } else {
            pp_Var2 = __ctype_tolower_loc();
            if ((*pp_Var2)[*param_1] != 0x6d)
                goto LAB_000201f4;
            iVar3 = 4;
        }
    }
    if (param_2 != (uint *)0x0) {
        name = OBJ_nid2sn(iVar3);
        md = EVP_get_digestbyname(name);
        if ((md == (EVP_MD *)0x0) ||
            (uVar8 = EVP_MD_size(md), uVar6 = stderr, uVar8 == 0)) {
            uVar6 = stderr;
            if (iVar3 != 0x37e) {
                uVar5 = FUN_0001ff4c(iVar3);
                __fprintf_chk(uVar6, 1,
                              "key type %s is not supported by OpenSSL\n",
                              uVar5);
                uVar6 = FUN_0001ff4c(iVar3);
                iVar3 = 0;
                FUN_0001a848(3, "key type %s is not supported by OpenSSL\n",
                             uVar6);
                goto LAB_000201f4;
            }
            if (debug == 0) {
                uVar8 = 0x10;
            } else {
                __fprintf_chk(stderr, 1, "%s:%d:%s():%s:len\n", "ssl_init.c",
                              0xa4, "keytype_from_text", "AES128CMAC");
                uVar8 = 0x10;
            }
        } else if (0x14 < uVar8) {
            uVar5 = FUN_0001ff4c(iVar3);
            __fprintf_chk(uVar6, 1,
                          "key type %s %u octet digests are too big, max %lu\n",
                          uVar5, uVar8, 0x14);
            uVar6 = FUN_0001ff4c(iVar3);
            iVar3 = 0;
            FUN_0001a848(3, "key type %s %u octet digests are too big, max %lu",
                         uVar6, uVar8, 0x14);
            goto LAB_000201f4;
        }
        *param_2 = uVar8;
    }
LAB_000201f4:
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
}

void FUN_00020410(char *param_1, char *param_2, int param_3)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;

    iVar2 = __stack_chk_guard;
    pcVar5 = param_2;
    if (param_3 == 0)
        goto LAB_000204a4;
    pcVar3 = param_1;
    while (pcVar4 = pcVar5 + 1, param_1 + param_3 + -1 != pcVar3) {
        cVar1 = *pcVar5;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar4;
        if (cVar1 == '\0')
            goto LAB_00020480;
    }
    param_1[param_3 + -1] = '\0';
    cVar1 = *pcVar5;
    while (pcVar4 = pcVar5 + 1, pcVar5 = pcVar4, cVar1 != '\0') {
    LAB_000204a4:
        cVar1 = *pcVar5;
    }
LAB_00020480:
    if (iVar2 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4 + (-1 - (int)param_2));
}

/* WARNING: Removing unreachable block (ram,0x00020614) */

void sigint_handler(void)

{
    if (DAT_00043340 != (code *)0x0) {
        /* WARNING: Could not recover jumptable at 0x000205fc. Too many branches
         */
        /* WARNING: Treating indirect jump as call */
        (*DAT_00043340)();
        return;
    }
    return;
}

void FUN_00020624(int param_1, _union_1051 param_2)

{
    int *piVar1;
    int iVar2;
    _union_1051 local_134;
    sigset_t sStack_130;
    undefined4 local_b0;
    sigaction sStack_a8;
    int local_1c;

    local_1c = __stack_chk_guard;
    memset(&local_134, 0, 0x8c);
    sigemptyset(&sStack_130);
    local_134 = param_2;
    if (param_1 == 0x1d) {
        local_b0 = 0x10000000;
    }
    while (iVar2 = sigaction(param_1, (sigaction *)&local_134, &sStack_a8),
           iVar2 == -1) {
        piVar1 = __errno_location();
        if (*piVar1 != 4) {
            perror("sigaction");
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00020788(void)

{
    (*DAT_000410d4)();
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000208cc) */

void FUN_00020844(undefined4 param_1)

{
    switch (param_1) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
    }
    return;
}

void FUN_000208e8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    FILE *pFVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    undefined4 *puVar6;
    char *pcVar7;
    int local_238;
    undefined4 local_234;
    undefined4 local_230;
    undefined4 local_22c[128];
    int local_2c;

    local_2c = __stack_chk_guard;
    iVar2 = FUN_00020b20(local_22c, 0x80, &local_238);
    pFVar1 = stderr;
    if (iVar2 == 0) {
        if (local_238 < 1) {
            pcVar7 = ".";
        } else {
            pcVar7 = ", back trace";
        }
        uVar3 = FUN_00020844(param_3);
        uVar4 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(pFVar1, 1, "%s:%d: %s(%s) %s%s\n", param_1, param_2,
                      uVar3, param_4, uVar4, pcVar7);
        if (0 < local_238) {
            iVar2 = 0;
            puVar6 = &local_230;
            do {
                puVar6 = puVar6 + 1;
                local_234 = 0;
                iVar5 = FUN_00020c74(*puVar6, &local_234, &local_230);
                if (iVar5 == 0) {
                    uVar3 = local_234;
                    param_4 = local_230;
                    __fprintf_chk(stderr, 1, "#%d %p in %s()+0x%lx\n", iVar2,
                                  *puVar6, local_234, local_230, uVar4, pcVar7);
                } else {
                    __fprintf_chk(stderr, 1, "#%d %p in ??\n", iVar2, *puVar6,
                                  uVar3, param_4, uVar4, pcVar7);
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < local_238);
        }
    } else {
        uVar3 = FUN_00020844(param_3);
        uVar4 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(pFVar1, 1, "%s:%d: %s(%s) %s%s\n", param_1, param_2,
                      uVar3, param_4, uVar4, ".");
    }
    fflush(stderr);
    if (local_2c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Removing unreachable block (ram,0x00020b68) */

void FUN_00020b20(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00020cec) */
/* WARNING: Removing unreachable block (ram,0x00020d00) */
/* WARNING: Removing unreachable block (ram,0x00020d0c) */
/* WARNING: Removing unreachable block (ram,0x00020d20) */
/* WARNING: Removing unreachable block (ram,0x00020d24) */
/* WARNING: Removing unreachable block (ram,0x00020d28) */
/* WARNING: Removing unreachable block (ram,0x00020d68) */
/* WARNING: Removing unreachable block (ram,0x00020d70) */
/* WARNING: Removing unreachable block (ram,0x00020d7c) */
/* WARNING: Removing unreachable block (ram,0x00020d88) */
/* WARNING: Removing unreachable block (ram,0x00020d30) */
/* WARNING: Removing unreachable block (ram,0x00020d38) */
/* WARNING: Removing unreachable block (ram,0x00020d54) */
/* WARNING: Removing unreachable block (ram,0x00020d90) */

void FUN_00020c74(void)

{
    return;
}

void FUN_00020e04(void)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    iVar1 = __stack_chk_guard;
    iVar3 = pthread_once((pthread_once_t *)&DAT_00043344,
                         (__init_routine *)&DAT_00020da4);
    uVar2 = stderr;
    if (iVar3 != 0) {
        uVar4 = FUN_00021084(isc_msgcat, 1, 0x6e, "fatal error");
        uVar5 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
        __fprintf_chk(uVar2, 1, "%s:%d: %s: isc_once_do() %s.\n",
                      "./../lib/isc/lib.c", 0x4d, uVar4, uVar5);
        /* WARNING: Subroutine does not return */
        abort();
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

/* WARNING: Removing unreachable block (ram,0x00021110) */

void FUN_00021084(int *param_1, int param_2, int param_3, int param_4)

{
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4d436174)) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/nls/msgcat.c", 0x77, 0,
                     "(((msgcat) != ((void *)0)) && (((const isc__magic_t "
                     "*)(msgcat))->magic == (((\'M\') << 24 | (\'C\') << 16 | "
                     "(\'a\') << 8 | (\'t\'))))) || msgcat == ((void *)0)");
    }
    if (param_2 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/nls/msgcat.c", 0x78, 0, "set > 0");
    }
    if (param_3 < 1) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/nls/msgcat.c", 0x79, 0, "message > 0");
    }
    if (param_4 != 0) {
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/nls/msgcat.c", 0x7a, 0,
                 "default_text != ((void *)0)");
}

void FUN_00021190(int param_1)

{
    int iVar1;
    int *piVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    socklen_t local_c4;
    sockaddr sStack_c0;
    undefined1 auStack_a4[128];
    int local_24;

    local_24 = __stack_chk_guard;
    iVar1 = socket(param_1, 1, 0);
    if (iVar1 == -1) {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        if (((iVar1 == 0x5d) || (iVar1 == 0x61)) || (iVar1 == 0x16)) {
            uVar5 = 0x17;
        } else {
            uVar5 = 0x22;
            FUN_000229e0(iVar1, auStack_a4, 0x80);
            uVar3 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
            FUN_0002508c("./../lib/isc/unix/net.c", 0x90, "socket() %s: %s",
                         uVar3, auStack_a4);
        }
        goto LAB_000211e0;
    }
    if (param_1 == 10) {
        local_c4 = 0x1c;
        iVar4 = getsockname(iVar1, &sStack_c0, &local_c4);
        if (iVar4 < 0) {
            FUN_00027fc8(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                         "retrieving the address of an IPv6 socket from the "
                         "kernel failed.");
        } else {
            if (local_c4 == 0x1c)
                goto LAB_000211d4;
            FUN_00027fc8(
                isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                "IPv6 structures in kernel and user space do not match.");
        }
        uVar5 = 0x17;
        FUN_00027fc8(isc_lctx, 0x41128, isc_modules, 0xfffffffc,
                     "IPv6 is not supported.");
    } else {
    LAB_000211d4:
        uVar5 = 0;
    }
    close(iVar1);
LAB_000211e0:
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
}

void FUN_000213f8(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_0004334c,
                         (__init_routine *)&LAB_00021390);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025154("./../lib/isc/unix/net.c", 0xdd,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00021490(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000213f8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410d8);
}

void FUN_000214e8(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_000213f8();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_000410dc);
}

void FUN_00021540(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a8;
    undefined1 auStack_a4[128];
    int local_24;

    local_24 = __stack_chk_guard;
    iVar1 = FUN_000214e8();
    if (iVar1 == 0) {
        iVar1 = socket(10, 1, 0);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_000229e0(*piVar3, auStack_a4, 0x80);
            uVar4 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
            FUN_0002508c("./../lib/isc/unix/net.c", 0x10a, "socket() %s: %s",
                         uVar4, auStack_a4);
            DAT_000410e0 = 0x22;
            iVar1 = DAT_000410e0;
        } else {
            local_a8 = 1;
            iVar2 = setsockopt(iVar1, 0x29, 0x1a, &local_a8, 4);
            if (iVar2 < 0) {
                DAT_000410e0 = 0x17;
            } else {
                close(iVar1);
                iVar1 = socket(10, 2, 0);
                if (iVar1 == -1) {
                    piVar3 = __errno_location();
                    FUN_000229e0(*piVar3, auStack_a4, 0x80);
                    uVar4 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
                    FUN_0002508c("./../lib/isc/unix/net.c", 0x121,
                                 "socket() %s: %s", uVar4, auStack_a4);
                    DAT_000410e0 = 0x22;
                    iVar1 = DAT_000410e0;
                    goto LAB_00021578;
                }
                local_a8 = 1;
                iVar2 = setsockopt(iVar1, 0x29, 0x1a, &local_a8, 4);
                if (iVar2 < 0) {
                    DAT_000410e0 = 0x17;
                } else {
                    DAT_000410e0 = 0;
                }
            }
            close(iVar1);
            iVar1 = DAT_000410e0;
        }
    }
LAB_00021578:
    DAT_000410e0 = iVar1;
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00021774(void)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    undefined4 uVar4;
    undefined4 local_a0;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = FUN_000214e8();
    if (iVar1 == 0) {
        iVar1 = socket(10, 2, 0x11);
        if (iVar1 == -1) {
            piVar3 = __errno_location();
            FUN_000229e0(*piVar3, auStack_9c, 0x80);
            uVar4 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
            FUN_0002508c("./../lib/isc/unix/net.c", 0x152, "socket() %s: %s",
                         uVar4, auStack_9c);
            DAT_000410e4 = 0x22;
            iVar1 = DAT_000410e4;
        } else {
            local_a0 = 1;
            iVar2 = setsockopt(iVar1, 0x29, 0x31, &local_a0, 4);
            if (iVar2 < 0) {
                DAT_000410e4 = 0x17;
            } else {
                DAT_000410e4 = 0;
            }
            close(iVar1);
            iVar1 = DAT_000410e4;
        }
    }
    DAT_000410e4 = iVar1;
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_000229e0(int param_1, int param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    char *pcVar3;

    iVar1 = __stack_chk_guard;
    if (param_2 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/strerror.c", 0x37, 0,
                     "buf != ((void *)0)");
    }
    iVar2 = pthread_once((pthread_once_t *)&DAT_00043370,
                         (__init_routine *)&LAB_00022948);
    if (iVar2 != 0) {
        FUN_00025154(
            "./../lib/isc/unix/strerror.c", 0x39,
            "((pthread_once((&once), (init_lock)) == 0) ? 0 : 34) == 0");
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043358);
    if (iVar2 == 0) {
        pcVar3 = strerror(param_1);
    } else {
        FUN_00025154("./../lib/isc/unix/strerror.c", 0x3b,
                     "((pthread_mutex_lock(((&isc_strerror_lock))) == 0) ? 0 : "
                     "34) == 0");
        pcVar3 = strerror(param_1);
    }
    if (pcVar3 == (char *)0x0) {
        FUN_0001f658(param_2, param_3, "Unknown error: %u", param_1);
    } else {
        FUN_0001f658(param_2, param_3, "%s");
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043358);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025154("./../lib/isc/unix/strerror.c", 0x41,
                     "((pthread_mutex_unlock(((&isc_strerror_lock))) == 0) ? 0 "
                     ": 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00022b7c(pthread_mutex_t *param_1, undefined4 param_2,
                  undefined4 param_3)

{
    int iVar1;
    int *piVar2;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    iVar1 = pthread_mutex_init(param_1, (pthread_mutexattr_t *)0x0);
    if (iVar1 == 0xc) {
        iVar1 = 1;
    } else if (iVar1 != 0) {
        piVar2 = __errno_location();
        FUN_000229e0(*piVar2, auStack_9c, 0x80);
        FUN_0002508c(param_2, param_3, "isc_mutex_init() failed: %s",
                     auStack_9c);
        iVar1 = 0x22;
    }
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar1);
    }
    return;
}

void FUN_00022c20(undefined4 *param_1, int param_2, undefined4 *param_3,
                  undefined4 *param_4)

{
    CMAC_CTX *ctx;
    EVP_CIPHER *cipher;
    int iVar1;
    size_t sVar2;
    EVP_MD_CTX *ctx_00;
    char *pcVar3;
    EVP_MD *pEVar4;
    EVP_CIPHER_CTX *ctx_01;
    uint uVar5;
    undefined1 *key;
    size_t local_3c;
    uint local_38;
    undefined1 auStack_34[16];
    int local_24;

    local_3c = 0;
    local_24 = __stack_chk_guard;
    if (ssl_init_done == 0) {
        FUN_0001fe18();
    }
    if (param_2 == 0x37e) {
        uVar5 = param_3[1];
        key = (undefined1 *)*param_3;
        if (uVar5 < 0x10) {
            __memcpy_chk(auStack_34, key, uVar5, 0x10);
            memset(auStack_34 + uVar5, 0, 0x10 - uVar5);
            ctx = CMAC_CTX_new();
            key = auStack_34;
        } else {
            ctx = CMAC_CTX_new();
        }
        if (ctx == (CMAC_CTX *)0x0) {
            FUN_0001a848(3, "MAC encrypt: CMAC %s CTX new failed.",
                         "AES128CMAC");
            sVar2 = local_3c;
        } else {
            cipher = EVP_aes_128_cbc();
            iVar1 = CMAC_Init(ctx, key, 0x10, cipher, (ENGINE *)0x0);
            if (iVar1 == 0) {
                FUN_0001a848(3, "MAC encrypt: CMAC %s Init failed.",
                             "AES128CMAC");
            } else {
                ctx_01 = CMAC_CTX_get0_cipher_ctx(ctx);
                if ((ctx_01 == (EVP_CIPHER_CTX *)0x0) ||
                    (uVar5 = EVP_CIPHER_CTX_block_size(ctx_01),
                     uVar5 <= (uint)param_1[1])) {
                    iVar1 = CMAC_Update(ctx, (void *)*param_4, param_4[1]);
                    if (iVar1 == 0) {
                        FUN_0001a848(3, "MAC encrypt: CMAC %s Update failed.",
                                     "AES128CMAC");
                    } else {
                        iVar1 = CMAC_Final(ctx, (uchar *)*param_1, &local_3c);
                        if (iVar1 == 0) {
                            FUN_0001a848(3,
                                         "MAC encrypt: CMAC %s Final failed.",
                                         "AES128CMAC");
                            local_3c = 0;
                        }
                    }
                } else {
                    FUN_0001a848(3, "MAC encrypt: CMAC %s buf too small.",
                                 "AES128CMAC");
                }
            }
            CMAC_CTX_cleanup(ctx);
            sVar2 = local_3c;
        }
    } else {
        ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
        local_38 = 0;
        if (ctx_00 == (EVP_MD_CTX *)0x0) {
            pcVar3 = OBJ_nid2sn(param_2);
            FUN_0001a848(3, "MAC encrypt: MAC %s Digest CTX new failed.",
                         pcVar3);
            sVar2 = local_38;
        } else {
            EVP_MD_CTX_set_flags(ctx_00, 8);
            pcVar3 = OBJ_nid2sn(param_2);
            pEVar4 = EVP_get_digestbyname(pcVar3);
            iVar1 = EVP_DigestInit_ex(ctx_00, pEVar4, (ENGINE *)0x0);
            if (iVar1 == 0) {
                pcVar3 = OBJ_nid2sn(param_2);
                FUN_0001a848(3, "MAC encrypt: MAC %s Digest Init failed.",
                             pcVar3);
            } else {
                pEVar4 = EVP_MD_CTX_md(ctx_00);
                uVar5 = EVP_MD_size(pEVar4);
                if ((uint)param_1[1] < uVar5) {
                    pcVar3 = OBJ_nid2sn(param_2);
                    FUN_0001a848(3, "MAC encrypt: MAC %s buf too small.",
                                 pcVar3);
                } else {
                    iVar1 =
                        EVP_DigestUpdate(ctx_00, (void *)*param_3, param_3[1]);
                    if (iVar1 == 0) {
                        pcVar3 = OBJ_nid2sn(param_2);
                        FUN_0001a848(
                            3, "MAC encrypt: MAC %s Digest Update key failed.",
                            pcVar3);
                    } else {
                        iVar1 = EVP_DigestUpdate(ctx_00, (void *)*param_4,
                                                 param_4[1]);
                        if (iVar1 == 0) {
                            pcVar3 = OBJ_nid2sn(param_2);
                            FUN_0001a848(3,
                                         "MAC encrypt: MAC %s Digest Update "
                                         "data failed.",
                                         pcVar3);
                        } else {
                            iVar1 = EVP_DigestFinal(ctx_00, (uchar *)*param_1,
                                                    &local_38);
                            if (iVar1 == 0) {
                                pcVar3 = OBJ_nid2sn(param_2);
                                FUN_0001a848(
                                    3,
                                    "MAC encrypt: MAC %s Digest Final failed.",
                                    pcVar3);
                                local_38 = 0;
                            }
                        }
                    }
                }
            }
            local_3c = local_38;
            EVP_MD_CTX_free(ctx_00);
            sVar2 = local_3c;
        }
    }
    if (local_24 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(sVar2);
    }
    return;
}

int FUN_00022fdc(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                 int param_4, int param_5)

{
    uint __n;
    undefined1 *puStack_74;
    undefined4 uStack_70;
    undefined4 local_6c;
    undefined4 local_68;
    int local_64;
    int local_60;
    undefined1 auStack_5c[64];
    int local_1c;

    local_1c = __stack_chk_guard;
    uStack_70 = 0x40;
    local_60 = param_5;
    puStack_74 = auStack_5c;
    local_6c = param_2;
    local_68 = param_3;
    local_64 = param_4;
    __n = FUN_00022c20(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < __n) {
        __n = 0x14;
    }
    memcpy((void *)(param_4 + param_5 + 4), auStack_5c, __n);
    if (local_1c == __stack_chk_guard) {
        return __n + 4;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002307c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  int param_4, int param_5, int param_6)

{
    bool bVar1;
    uint uVar2;
    int iVar3;
    undefined1 *puStack_74;
    undefined4 uStack_70;
    undefined4 local_6c;
    undefined4 local_68;
    int local_64;
    int local_60;
    undefined1 auStack_5c[64];
    int local_1c;

    local_1c = __stack_chk_guard;
    uStack_70 = 0x40;
    local_60 = param_5;
    puStack_74 = auStack_5c;
    local_6c = param_2;
    local_68 = param_3;
    local_64 = param_4;
    uVar2 = FUN_00022c20(&puStack_74, param_1, &local_6c, &local_64);
    if (0x13 < uVar2) {
        uVar2 = 0x14;
    }
    if (uVar2 + 4 == param_6) {
        iVar3 = FUN_00029ce8(auStack_5c, param_4 + param_5 + 4);
        bVar1 = iVar3 == 0;
    } else {
        FUN_0001a848(3, "MAC decrypt: MAC length error");
        bVar1 = false;
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
}

void FUN_0002323c(void)

{
    tm *ptVar1;
    char *__s;
    uint uVar2;
    time_t local_28;
    int local_24;

    local_24 = __stack_chk_guard;
    local_28 = time((time_t *)0x0);
    ptVar1 = localtime(&local_28);
    if (ptVar1 == (tm *)0x0) {
        __s = "-- --- --:--:--";
    } else {
        __s = lib_stringbuf + lib_nextbuf * 0x80;
        uVar2 = lib_nextbuf + 1;
        memset(__s, 0, 0x80);
        lib_nextbuf = uVar2 & 0xf;
        FUN_0001f658(__s, 0x80, "%2d %s %02d:%02d:%02d", ptVar1->tm_mday,
                     *(undefined4 *)(months + ptVar1->tm_mon * 4),
                     ptVar1->tm_hour, ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_24 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_0002333c(time_t param_1)

{
    tm *ptVar1;
    char *__s;
    uint uVar2;
    time_t local_24[2];
    int local_1c;

    local_1c = __stack_chk_guard;
    local_24[0] = param_1;
    ptVar1 = localtime(local_24);
    if (ptVar1 == (tm *)0x0) {
        __s = "--:--:--";
    } else {
        __s = lib_stringbuf + lib_nextbuf * 0x80;
        uVar2 = lib_nextbuf + 1;
        memset(__s, 0, 0x80);
        lib_nextbuf = uVar2 & 0xf;
        FUN_0001f658(__s, 0x80, "%02d:%02d:%02d", ptVar1->tm_hour,
                     ptVar1->tm_min, ptVar1->tm_sec);
    }
    if (local_1c == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s);
}

void FUN_00024e14(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    __fprintf_chk(stderr, 1, "%s:%d: ", param_1, param_2);
    __vfprintf_chk(stderr, 1, param_3, param_4);
    fputc(10, stderr);
    if (iVar1 == __stack_chk_guard) {
        fflush(stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00024eb8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    FILE *pFVar2;
    undefined4 uVar3;

    pFVar2 = stderr;
    iVar1 = __stack_chk_guard;
    uVar3 = FUN_00021084(isc_msgcat, 1, 0x6e, "fatal error");
    __fprintf_chk(pFVar2, 1, "%s:%d: %s: ", param_1, param_2, uVar3);
    __vfprintf_chk(stderr, 1, param_3, param_4);
    fputc(10, stderr);
    if (iVar1 == __stack_chk_guard) {
        fflush(stderr);
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002508c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 uStack_4;

    iVar1 = __stack_chk_guard;
    uStack_4 = param_4;
    (*DAT_000410e8)(param_1, param_2, param_3, &uStack_4, &uStack_4);
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00025100(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    undefined4 uStack_4;

    uStack_4 = param_4;
    (*DAT_000410ec)(param_1, param_2, param_3, &uStack_4, &uStack_4,
                    __stack_chk_guard);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Control flow encountered bad instruction data */

void FUN_00025154(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
    FUN_00025100(param_1, param_2, "RUNTIME_CHECK(%s) %s", param_3, uVar1);
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

void FUN_000254bc(int param_1)

{
    char *pcVar1;
    size_t __n;
    int iVar2;
    int iVar3;
    long lVar4;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    char *pcVar8;
    char *__s;
    int local_2550;
    char *local_2544;
    undefined1 auStack_2540[1028];
    char acStack_213c[256];
    uint local_203c;
    undefined1 auStack_2034[4100];
    undefined1 auStack_1030[4100];
    int local_2c;

    local_2c = __stack_chk_guard;
    if (*(int *)(param_1 + 0x18) != -2) {
        __s = *(char **)(param_1 + 0x14);
        if (*(int *)(param_1 + 4) != 3) {
            /* WARNING: Subroutine does not return */
            FUN_00020788("./../lib/isc/log.c", 0x485, 0, "channel->type == 3");
        }
        pcVar1 = strrchr(__s, 0x2f);
        if (pcVar1 == (char *)0x0) {
            pcVar8 = ".";
            pcVar1 = __s;
        } else {
            *pcVar1 = '\0';
            pcVar8 = *(char **)(param_1 + 0x14);
            pcVar1 = pcVar1 + 1;
        }
        __n = strlen(pcVar1);
        FUN_00029d98(auStack_2540);
        iVar2 = FUN_00029e24(auStack_2540, pcVar8);
        if (pcVar1 != *(char **)(param_1 + 0x14)) {
            pcVar1[-1] = '/';
        }
        if (iVar2 != 0)
            goto LAB_00025634;
        local_2550 = -1;
        while (iVar3 = FUN_00029f8c(auStack_2540), iVar3 == 0) {
            if ((((__n < local_203c) &&
                  (iVar3 = strncmp(acStack_213c, pcVar1, __n), iVar3 == 0)) &&
                 (acStack_213c[__n] == '.')) &&
                (lVar4 = strtol(auStack_2540 + __n + 0x405, &local_2544, 10),
                 *local_2544 == '\0' && local_2550 < lVar4)) {
                local_2550 = lVar4;
            }
        }
        local_2550 = local_2550 + 1;
        FUN_0002a06c(auStack_2540);
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 <= local_2550 && iVar3 != -1) {
            while (true) {
                local_2550 = local_2550 + -1;
                if (local_2550 < iVar3)
                    break;
                uVar5 = FUN_0001f658(auStack_2034, 0x1001, "%s.%d", __s,
                                     local_2550);
                if (uVar5 < 0x1001) {
                    iVar3 = FUN_0002b148(auStack_2034);
                    if (iVar3 != 0 && iVar3 != 0x26)
                        goto LAB_0002585c;
                    iVar3 = *(int *)(param_1 + 0x18);
                } else {
                    iVar3 = 0x13;
                LAB_0002585c:
                    uVar7 = FUN_000286f4(iVar3);
                    __syslog_chk(3, 1,
                                 "unable to remove log file \'%s.%d\': %s", __s,
                                 local_2550, uVar7);
                    iVar3 = *(int *)(param_1 + 0x18);
                }
            }
        }
        if (0 < local_2550) {
            do {
                while (true) {
                    iVar3 = local_2550 + -1;
                    uVar5 =
                        FUN_0001f658(auStack_2034, 0x1001, "%s.%d", __s, iVar3);
                    if (uVar5 < 0x1001)
                        break;
                LAB_000256b8:
                    iVar6 = 0x13;
                LAB_000256bc:
                    uVar7 = FUN_000286f4(iVar6);
                    __syslog_chk(
                        3, 1,
                        "unable to rename log file \'%s.%d\' to \'%s.%d\': %s",
                        __s, iVar3, __s, local_2550, uVar7);
                    local_2550 = iVar3;
                    if (iVar3 == 0)
                        goto LAB_00025768;
                }
                uVar5 = FUN_0001f658(auStack_1030, 0x1001, "%s.%d", __s,
                                     local_2550);
                if (0x1000 < uVar5)
                    goto LAB_000256b8;
                iVar6 = FUN_0002b1f4(auStack_2034, auStack_1030);
                if (iVar6 != 0 && iVar6 != 0x26)
                    goto LAB_000256bc;
                local_2550 = iVar3;
            } while (iVar3 != 0);
        LAB_00025768:
            iVar3 = *(int *)(param_1 + 0x18);
        }
        if (iVar3 != 0) {
            uVar5 = FUN_0001f658(auStack_1030, 0x1001, &DAT_0002e99c, __s);
            if (uVar5 < 0x1001) {
                iVar3 = FUN_0002b1f4(__s, auStack_1030);
                if (iVar3 == 0 || iVar3 == 0x26)
                    goto LAB_00025630;
            } else {
                iVar3 = 0x13;
            }
            uVar7 = FUN_000286f4(iVar3);
            __syslog_chk(3, 1,
                         "unable to rename log file \'%s\' to \'%s.0\': %s",
                         __s, __s, uVar7);
            goto LAB_00025634;
        }
        iVar3 = FUN_0002b148(__s);
        if (iVar3 != 0 && iVar3 != 0x26) {
            uVar7 = FUN_000286f4();
            __syslog_chk(3, 1, "unable to remove log file \'%s\': %s", __s,
                         uVar7);
            goto LAB_00025634;
        }
    }
LAB_00025630:
    iVar2 = 0;
LAB_00025634:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar2);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00027320) */

void FUN_0002729c(void)

{
    return;
}

void FUN_0002732c(int *param_1, undefined4 *param_2, undefined4 *param_3,
                  int param_4, int param_5, int param_6, undefined4 param_7,
                  undefined4 param_8, int param_9, undefined4 param_10)

{
    byte bVar1;
    int iVar2;
    undefined4 uVar3;
    size_t sVar4;
    int *piVar5;
    uint uVar6;
    int *piVar7;
    char *pcVar8;
    int iVar9;
    char *pcVar10;
    char *pcVar11;
    pthread_mutex_t *__mutex;
    undefined4 *puVar12;
    uint uVar13;
    undefined4 uVar14;
    char *pcVar15;
    int iVar16;
    char *pcVar17;
    uint uVar18;
    char *pcVar19;
    int iVar20;
    char *pcVar21;
    undefined4 *puVar22;
    undefined4 *__ptr;
    char *pcVar23;
    char *pcVar24;
    bool bVar25;
    int local_184;
    int local_168;
    undefined1 auStack_160[8];
    stat64 sStack_158;
    stat64 sStack_f0;
    char local_84[24];
    char local_6c[64];
    int local_2c;

    local_2c = __stack_chk_guard;
    local_184 = param_9;
    if ((param_1 != (int *)0x0) && (*param_1 != 0x4c637478)) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/log.c", 0x590, 0,
                     "lctx == ((void *)0) || (((lctx) != ((void *)0)) && "
                     "(((const isc__magic_t *)(lctx))->magic == (((\'L\') << "
                     "24 | (\'c\') << 16 | (\'t\') << 8 | (\'x\')))))");
    }
    if (param_2 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/log.c", 0x591, 0, "category != ((void *)0)");
    }
    if (param_3 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/log.c", 0x592, 0, "module != ((void *)0)");
    }
    if (param_4 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/log.c", 0x593, 0, "level != 0");
    }
    if (param_9 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/log.c", 0x594, 0, "format != ((void *)0)");
    }
    if (param_1 != (int *)0x0) {
        if ((uint)param_1[3] <= (uint)param_2[1]) {
            /* WARNING: Subroutine does not return */
            FUN_00020788("./../lib/isc/log.c", 0x59e, 0,
                         "category->id < lctx->category_count");
        }
        if ((uint)param_1[5] <= (uint)param_3[1]) {
            /* WARNING: Subroutine does not return */
            FUN_00020788("./../lib/isc/log.c", 0x59f, 0,
                         "module->id < lctx->module_count");
        }
        iVar2 = FUN_0002729c(param_1, param_4);
        if (iVar2 != 0) {
            if (param_6 != 0) {
                local_184 = FUN_00021084(param_6, param_7, param_8, param_9);
            }
            __mutex = (pthread_mutex_t *)(param_1 + 7);
            local_6c[0] = '\0';
            local_84[0] = '\0';
            iVar2 = pthread_mutex_lock(__mutex);
            if (iVar2 != 0) {
                FUN_00025154("./../lib/isc/log.c", 0x5ac,
                             "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 "
                             ": 34) == 0");
            }
            bVar1 = 0;
            iVar2 = param_1[0xd];
            *(undefined1 *)(param_1 + 0xe) = 0;
            puVar12 = *(undefined4 **)(*(int *)(iVar2 + 0x10) + param_2[1] * 8);
            bVar25 = puVar12 == (undefined4 *)0x0;
            do {
                puVar22 = puVar12;
                if (((bool)(bVar25 & (bVar1 ^ 1))) &&
                    (puVar22 = (undefined4 *)**(undefined4 **)(iVar2 + 0x10),
                     (undefined4 *)**(undefined4 **)(iVar2 + 0x10) ==
                         (undefined4 *)0x0)) {
                    puVar22 = &DAT_00043374;
                }
                puVar12 = (undefined4 *)puVar22[3];
                if ((undefined4 *)*puVar22 == param_3 ||
                    (undefined4 *)*puVar22 == (undefined4 *)0x0) {
                    iVar16 = puVar22[1];
                    uVar13 = *(uint *)(iVar16 + 0xc);
                    if (((uVar13 & 0x1000) == 0) || (param_1[6] != 0)) {
                        iVar9 = *(int *)(iVar16 + 8);
                        if (iVar9 == 0) {
                            iVar9 = param_1[6];
                        }
                        if (param_4 <= iVar9) {
                            if (((uVar13 & 1) != 0) && (local_6c[0] == '\0')) {
                                iVar9 = FUN_00029010(&sStack_f0);
                                if (iVar9 != 0) {
                                    FUN_00025154(
                                        "./../lib/isc/log.c", 0x5eb,
                                        "isc_time_now((&isctime)) == 0");
                                }
                                FUN_00029a3c(&sStack_f0, local_6c, 0x40);
                                uVar13 = *(uint *)(iVar16 + 0xc);
                            }
                            if (((uVar13 & 2) != 0) && (local_84[0] == '\0')) {
                                if (param_4 + 5 < 0 == SCARRY4(param_4, 5)) {
                                    if (param_4 < 1) {
                                        FUN_0001f658(
                                            local_84, 0x18, &DAT_0002f14c,
                                            (&PTR_s_debug_00040b08)[-param_4]);
                                    } else {
                                        FUN_0001f658(local_84, 0x18,
                                                     "%s %d: ", "debug",
                                                     param_4);
                                    }
                                } else {
                                    uVar3 = FUN_00021084(isc_msgcat, 10, 0x322,
                                                         "level");
                                    FUN_0001f658(local_84, 0x18,
                                                 "%s %d: ", uVar3, param_4);
                                }
                            }
                            if ((char)param_1[0xe] == '\0') {
                                piVar7 = param_1 + 0xe;
                                FUN_0001ecf4(piVar7, 0x2000, local_184,
                                             param_10);
                                if (param_5 != 0) {
                                    FUN_00028ccc(&sStack_f0,
                                                 *(undefined4 *)(iVar2 + 0x18),
                                                 0);
                                    iVar9 = FUN_00029010(auStack_160);
                                    if (iVar9 != 0) {
                                        FUN_00025154(
                                            "./../lib/isc/log.c", 0x61a,
                                            "isc_time_now((&oldest)) == 0");
                                    }
                                    iVar9 = FUN_000295d0(
                                        auStack_160, &sStack_f0, auStack_160);
                                    if (iVar9 == 0) {
                                        puVar22 = (undefined4 *)param_1[0x80e];
                                        while (__ptr = puVar22,
                                               puVar22 != (undefined4 *)0x0) {
                                            while (iVar9 = FUN_000293a0(
                                                       __ptr + 1, auStack_160),
                                                   -1 < iVar9) {
                                                iVar9 = strcmp((char *)piVar7,
                                                               (char *)*__ptr);
                                                if (iVar9 == 0) {
                                                    iVar2 =
                                                        pthread_mutex_unlock(
                                                            __mutex);
                                                    if (iVar2 != 0) {
                                                        FUN_00025154(
                                                            "./../lib/isc/"
                                                            "log.c",
                                                            0x64e,
                                                            "((pthread_mutex_"
                                                            "unlock(((&lctx->"
                                                            "lock))) == 0) ? 0 "
                                                            ": 34) == 0");
                                                    }
                                                    goto LAB_00027410;
                                                }
                                                __ptr = (undefined4 *)__ptr[4];
                                                if (__ptr == (undefined4 *)0x0)
                                                    goto LAB_0002792c;
                                            }
                                            puVar22 = (undefined4 *)__ptr[4];
                                            if (puVar22 == (undefined4 *)0x0) {
                                                if ((undefined4 *)
                                                        param_1[0x80f] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_00020788(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).tail "
                                                        "== (message)");
                                                }
                                                iVar9 = __ptr[3];
                                                param_1[0x80f] = iVar9;
                                            } else {
                                                puVar22[3] = __ptr[3];
                                                iVar9 = __ptr[3];
                                            }
                                            if (iVar9 == 0) {
                                                if ((undefined4 *)
                                                        param_1[0x80e] !=
                                                    __ptr) {
                                                    /* WARNING: Subroutine does
                                                     * not return */
                                                    FUN_00020788(
                                                        "./../lib/isc/log.c",
                                                        0x638, 2,
                                                        "(lctx->messages).head "
                                                        "== (message)");
                                                }
                                                param_1[0x80e] = (int)puVar22;
                                            } else {
                                                *(undefined4 **)(iVar9 + 0x10) =
                                                    puVar22;
                                            }
                                            free(__ptr);
                                        }
                                    }
                                LAB_0002792c:
                                    sVar4 = strlen((char *)piVar7);
                                    piVar5 =
                                        (int *)FUN_000196bc(0, sVar4 + 0x15, 0);
                                    if (piVar5 != (int *)0x0) {
                                        *piVar5 = (int)(piVar5 + 5);
                                        FUN_00020410(piVar5 + 5, piVar7,
                                                     sVar4 + 1);
                                        iVar9 = FUN_00029010(piVar5 + 1);
                                        if (iVar9 != 0) {
                                            FUN_00025154("./../lib/isc/log.c",
                                                         0x665,
                                                         "isc_time_now((&new->"
                                                         "time)) == 0");
                                        }
                                        iVar9 = param_1[0x80f];
                                        if (iVar9 == 0) {
                                            param_1[0x80e] = (int)piVar5;
                                        } else {
                                            *(int **)(iVar9 + 0x10) = piVar5;
                                        }
                                        piVar5[3] = iVar9;
                                        piVar5[4] = 0;
                                        param_1[0x80f] = (int)piVar5;
                                    }
                                }
                            }
                            uVar13 = *(uint *)(iVar16 + 0xc);
                            uVar18 = uVar13 & 0x10;
                            if ((uVar18 != 0) &&
                                (uVar18 = *(uint *)(iVar2 + 0x20),
                                 uVar18 != 0)) {
                                uVar18 = 1;
                            }
                            iVar9 = *(int *)(iVar16 + 4);
                            iVar20 = uVar13 << 0x1d;
                            if (iVar9 == 3) {
                                if (*(int *)(iVar16 + 0x28) == 0) {
                                    iVar9 = *(int *)(iVar16 + 0x10);
                                    if (iVar9 != 0)
                                        goto LAB_00027784;
                                } else {
                                    if ((*(int *)(iVar16 + 0x18) == -2) &&
                                        (((iVar9 = __xstat64(
                                               3, *(char **)(iVar16 + 0x14),
                                               &sStack_158),
                                           iVar9 == 0 ||
                                               (piVar7 = __errno_location(),
                                                *piVar7 != 2)) &&
                                          (iVar9 = *(int *)(iVar16 + 0x24),
                                           bVar25 = (uint)sStack_158.st_size <
                                                    *(uint *)(iVar16 + 0x20),
                                           (int)(sStack_158.st_size._4_4_ -
                                                 (iVar9 + (uint)bVar25)) < 0 ==
                                               (SBORROW4(
                                                    sStack_158.st_size._4_4_,
                                                    iVar9) !=
                                                SBORROW4(
                                                    sStack_158.st_size._4_4_ -
                                                        iVar9,
                                                    (uint)bVar25))))))
                                        goto LAB_00027578;
                                    fclose(*(FILE **)(iVar16 + 0x10));
                                    *(undefined4 *)(iVar16 + 0x10) = 0;
                                    *(undefined4 *)(iVar16 + 0x28) = 0;
                                    if (*(int *)(iVar16 + 4) != 3) {
                                        /* WARNING: Subroutine does not return
                                         */
                                        FUN_00020788("./../lib/isc/log.c",
                                                     0x52e, 0,
                                                     "channel->type == 3");
                                    }
                                }
                                pcVar24 = *(char **)(iVar16 + 0x14);
                                if ((pcVar24 == (char *)0x0) ||
                                    (*pcVar24 == '\0')) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_00020788("./../lib/isc/log.c", 0x533, 0,
                                                 "path != ((void *)0) && *path "
                                                 "!= \'\\0\'");
                                }
                                iVar9 = __xstat64(3, pcVar24, &sStack_f0);
                                if (iVar9 == 0) {
                                    uVar6 = *(uint *)(iVar16 + 0x20);
                                    iVar9 = *(int *)(iVar16 + 0x24);
                                    if (uVar6 != 0 || iVar9 != 0) {
                                        if ((((int)(uint)(uVar6 == 0) <=
                                              iVar9) &&
                                             ((int)(sStack_f0.st_size._4_4_ -
                                                    (iVar9 +
                                                     (uint)((uint)sStack_f0
                                                                .st_size <
                                                            uVar6))) < 0 ==
                                              (SBORROW4(sStack_f0.st_size._4_4_,
                                                        iVar9) !=
                                               SBORROW4(
                                                   sStack_f0.st_size._4_4_ -
                                                       iVar9,
                                                   (uint)((uint)sStack_f0
                                                              .st_size <
                                                          uVar6))))) &&
                                            ((sStack_f0.st_mode & 0xf000) ==
                                             0x8000)) {
                                            if (*(int *)(iVar16 + 0x18) == -2)
                                                goto LAB_00027578;
                                            goto LAB_000276c0;
                                        }
                                        goto LAB_00027cc8;
                                    }
                                    if ((*(int *)(iVar16 + 0x18) == -2) ||
                                        ((sStack_f0.st_mode & 0xf000) !=
                                         0x8000))
                                        goto LAB_00027cc8;
                                LAB_000276c0:
                                    local_168 = FUN_000254bc(iVar16);
                                    if (local_168 == 0)
                                        goto LAB_00027cc8;
                                    uVar6 = *(uint *)(iVar16 + 0xc);
                                    if ((uVar6 & 0x8000) == 0) {
                                        uVar14 = *(undefined4 *)(iVar16 + 0x14);
                                        uVar3 = FUN_000286f4();
                                        __syslog_chk(3, 1,
                                                     "isc_log_open: roll_log "
                                                     "\'%s\' failed: %s",
                                                     uVar14, uVar3);
                                        uVar6 =
                                            *(uint *)(iVar16 + 0xc) | 0x8000;
                                        *(uint *)(iVar16 + 0xc) = uVar6;
                                    }
                                    if ((local_168 == 0x3a) ||
                                        ((uVar6 & 0x8000) != 0))
                                        goto LAB_00027578;
                                LAB_00027730:
                                    uVar14 = *(undefined4 *)(iVar16 + 0x14);
                                    uVar3 = FUN_000286f4(local_168);
                                    __syslog_chk(
                                        3, 1, "isc_log_open \'%s\' failed: %s",
                                        uVar14, uVar3);
                                    *(uint *)(iVar16 + 0xc) =
                                        *(uint *)(iVar16 + 0xc) | 0x8000;
                                } else {
                                LAB_00027cc8:
                                    local_168 = FUN_000288a8(
                                        pcVar24, &DAT_0002d4e0, iVar16 + 0x10);
                                    if ((local_168 != 0 && local_168 != 0x3a) &&
                                        ((*(uint *)(iVar16 + 0xc) & 0x8000) ==
                                         0))
                                        goto LAB_00027730;
                                }
                                if (local_168 != 0)
                                    goto LAB_00027578;
                                iVar9 = *(int *)(iVar16 + 0x10);
                                *(uint *)(iVar16 + 0xc) =
                                    *(uint *)(iVar16 + 0xc) & 0xffff7fff;
                            } else {
                                if (iVar9 != 4) {
                                    if (iVar9 == 2) {
                                        if (param_4 < 1) {
                                            uVar6 = 2;
                                            if (param_4 + 5 < 0 ==
                                                SCARRY4(param_4, 5)) {
                                                uVar6 =
                                                    *(uint *)(&DAT_0002e7e8 +
                                                              param_4 * -4);
                                            }
                                        } else {
                                            uVar6 = 7;
                                        }
                                        if ((uVar13 & 1) == 0) {
                                            pcVar15 = "";
                                            pcVar24 = pcVar15;
                                        } else {
                                            pcVar15 = local_6c;
                                            pcVar24 = " ";
                                        }
                                        if (uVar18 == 0) {
                                            pcVar11 = "";
                                            pcVar10 = pcVar11;
                                        } else {
                                            pcVar11 = *(char **)(iVar2 + 0x20);
                                            pcVar10 = ": ";
                                        }
                                        if (iVar20 < 0) {
                                            pcVar8 = ": ";
                                            pcVar23 = (char *)*param_2;
                                        } else {
                                            pcVar8 = "";
                                            pcVar23 = pcVar8;
                                        }
                                        if ((int)(uVar13 << 0x1c) < 0) {
                                            pcVar17 = (char *)*param_3;
                                            pcVar19 = ": ";
                                        } else {
                                            pcVar17 = "";
                                            pcVar19 = pcVar17;
                                        }
                                        if ((int)(uVar13 << 0x1e) < 0) {
                                            pcVar21 = local_84;
                                        } else {
                                            pcVar21 = "";
                                        }
                                        __syslog_chk(
                                            uVar6 | *(uint *)(iVar16 + 0x10), 1,
                                            "%s%s%s%s%s%s%s%s%s%s", pcVar15,
                                            pcVar24, pcVar11, pcVar10, pcVar23,
                                            pcVar8, pcVar17, pcVar19, pcVar21,
                                            param_1 + 0xe);
                                        bVar1 = 1;
                                        goto LAB_00027580;
                                    }
                                    goto LAB_00027578;
                                }
                                iVar9 = *(int *)(iVar16 + 0x10);
                            }
                        LAB_00027784:
                            if ((uVar13 & 1) == 0) {
                                pcVar15 = "";
                                pcVar24 = pcVar15;
                            } else {
                                pcVar15 = local_6c;
                                pcVar24 = " ";
                            }
                            if (uVar18 == 0) {
                                pcVar10 = "";
                                pcVar11 = pcVar10;
                                if (iVar20 < 0)
                                    goto LAB_000277b4;
                            LAB_00027a78:
                                pcVar23 = "";
                                pcVar8 = pcVar23;
                            } else {
                                pcVar10 = *(char **)(iVar2 + 0x20);
                                pcVar11 = ": ";
                                if (-1 < iVar20)
                                    goto LAB_00027a78;
                            LAB_000277b4:
                                pcVar23 = (char *)*param_2;
                                pcVar8 = ": ";
                            }
                            pcVar19 = "";
                            pcVar17 = "";
                            if ((int)(uVar13 << 0x1c) < 0) {
                                pcVar19 = (char *)*param_3;
                                pcVar17 = ": ";
                            }
                            if ((int)(uVar13 << 0x1e) < 0) {
                                pcVar21 = local_84;
                            } else {
                                pcVar21 = "";
                            }
                            __fprintf_chk(iVar9, 1, "%s%s%s%s%s%s%s%s%s%s\n",
                                          pcVar15, pcVar24, pcVar10, pcVar11,
                                          pcVar23, pcVar8, pcVar19, pcVar17,
                                          pcVar21, param_1 + 0xe);
                            fflush(*(FILE **)(iVar16 + 0x10));
                            if ((int)(uint)(*(int *)(iVar16 + 0x20) == 0) <=
                                *(int *)(iVar16 + 0x24)) {
                                if (*(int *)(iVar16 + 4) != 3) {
                                    /* WARNING: Subroutine does not return */
                                    FUN_00020788("./../lib/isc/log.c", 0x6bb, 2,
                                                 "channel->type == 3");
                                }
                                iVar9 = fileno(*(FILE **)(iVar16 + 0x10));
                                iVar9 = __fxstat64(3, iVar9, &sStack_158);
                                if ((-1 < iVar9) &&
                                    (iVar9 = *(int *)(iVar16 + 0x24),
                                     bVar25 = *(uint *)(iVar16 + 0x20) <
                                              (uint)sStack_158.st_size,
                                     (int)(iVar9 - (sStack_158.st_size._4_4_ +
                                                    (uint)bVar25)) < 0 !=
                                         (SBORROW4(iVar9,
                                                   sStack_158.st_size._4_4_) !=
                                          SBORROW4(iVar9 -
                                                       sStack_158.st_size._4_4_,
                                                   (uint)bVar25)))) {
                                    bVar1 = 1;
                                    *(undefined4 *)(iVar16 + 0x28) = 1;
                                    goto LAB_00027580;
                                }
                            }
                        }
                    }
                LAB_00027578:
                    bVar1 = 1;
                }
            LAB_00027580:
                bVar25 = puVar12 == (undefined4 *)0x0;
            } while (!(bool)(bVar25 & bVar1));
            iVar2 = pthread_mutex_unlock(__mutex);
            if (iVar2 != 0) {
                FUN_00025154("./../lib/isc/log.c", 0x6e6,
                             "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? "
                             "0 : 34) == 0");
            }
        }
    }
LAB_00027410:
    if (local_2c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    return;
}

void FUN_00027fc8(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028038(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000280a4(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028118(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028188(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028204(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002827c(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000282f8(void)

{
    int iVar1;

    iVar1 = __stack_chk_guard;
    FUN_0002732c();
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028370(uint param_1, uint param_2, uint param_3, uint param_4,
                  uint param_5)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    int iVar4;

    iVar1 = __stack_chk_guard;
    if ((param_1 & 0xffff) != 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/result.c", 0x79, 0, "base % 65536 == 0");
    }
    if (0x10000 < param_2) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/result.c", 0x7a, 0, "nresults <= 65536");
    }
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/result.c", 0x7b, 0, "txt != ((void *)0)");
    }
    puVar3 = (uint *)malloc(0x1c);
    if (puVar3 == (uint *)0x0) {
        iVar4 = 1;
    } else {
        *puVar3 = param_1;
        puVar3[3] = param_4;
        puVar3[1] = (param_2 - 1) + param_1;
        puVar3[2] = param_3;
        puVar3[4] = param_5;
        puVar3[5] = 0xffffffff;
        puVar3[6] = 0xffffffff;
        iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043388);
        if (iVar4 != 0) {
            FUN_00025154(
                "./../lib/isc/result.c", 0x8b,
                "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
        }
        puVar2 = puVar3;
        if (DAT_000433a4 != (uint *)0x0) {
            DAT_000433a4[6] = (uint)puVar3;
            puVar2 = DAT_000433a0;
        }
        DAT_000433a0 = puVar2;
        puVar3[5] = (uint)DAT_000433a4;
        puVar3[6] = 0;
        DAT_000433a4 = puVar3;
        iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043388);
        if (iVar4 != 0) {
            FUN_00025154(
                "./../lib/isc/result.c", 0x8f,
                "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
            iVar4 = 0;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar4);
    }
    return;
}

void FUN_00028534(void)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;

    iVar1 = __stack_chk_guard;
    iVar2 = FUN_00022b7c(&DAT_00043388, "./../lib/isc/result.c", 0x98);
    if (iVar2 != 0) {
        FUN_00025154(
            "./../lib/isc/result.c", 0x98,
            "isc__mutex_init((&lock), \"./../lib/isc/result.c\", 152) == 0");
    }
    DAT_000433a0 = 0;
    DAT_000433a4 = 0;
    iVar2 = FUN_00028370(0, 0x3e, &PTR_s_success_00041138, isc_msgcat, 2);
    if (iVar2 != 0) {
        uVar3 = FUN_00021084(isc_msgcat, 1, 0x65, "failed");
        FUN_0002508c("./../lib/isc/result.c", 0x9e, "register_table() %s: %u",
                     uVar3, iVar2);
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_00028654(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    FUN_00020e04();
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433a8, FUN_00028534);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025154("./../lib/isc/result.c", 0xa8,
                     "((pthread_once((&once), (initialize_action)) == 0) ? 0 : "
                     "34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_000286f4(uint param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;

    iVar1 = __stack_chk_guard;
    FUN_00028654();
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00043388);
    if (iVar2 != 0) {
        FUN_00025154("./../lib/isc/result.c", 0xb3,
                     "((pthread_mutex_lock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    puVar4 = (uint *)&DAT_00043388;
    do {
        puVar4 = (uint *)puVar4[6];
        if (puVar4 == (uint *)0x0)
            goto LAB_0002877c;
    } while ((param_1 < *puVar4) || (puVar4[1] < param_1));
    iVar2 = param_1 - *puVar4;
    iVar2 = FUN_00021084(puVar4[3], puVar4[4], iVar2 + 1,
                         *(undefined4 *)(puVar4[2] + iVar2 * 4));
    if (iVar2 == 0) {
    LAB_0002877c:
        iVar2 =
            FUN_00021084(isc_msgcat, 3, 1, "(result code text not available)");
    }
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00043388);
    if (iVar3 != 0) {
        FUN_00025154("./../lib/isc/result.c", 0xca,
                     "((pthread_mutex_unlock(((&lock))) == 0) ? 0 : 34) == 0");
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
}

void FUN_000288a8(char *param_1, char *param_2, undefined4 *param_3)

{
    int iVar1;
    FILE *pFVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    pFVar2 = fopen64(param_1, param_2);
    if (pFVar2 == (FILE *)0x0) {
        piVar3 = __errno_location();
        if (iVar1 == __stack_chk_guard) {
            FUN_0002a478(*piVar3, "./../lib/isc/unix/stdio.c", 0x24);
            return;
        }
    } else {
        *param_3 = pFVar2;
        piVar3 = (int *)0x0;
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar3);
}

/* WARNING: Removing unreachable block (ram,0x00028d40) */

void FUN_00028ccc(undefined4 *param_1, undefined4 param_2, uint param_3)

{
    if (param_1 == (undefined4 *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/time.c", 0x5a, 0, "i != ((void *)0)");
    }
    if (999999999 < param_3) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/time.c", 0x5b, 0,
                     "nanoseconds < 1000000000");
    }
    param_1[1] = param_3;
    *param_1 = param_2;
    return;
}

void FUN_00029010(int *param_1)

{
    int iVar1;
    undefined4 uVar2;
    int *piVar3;
    timeval local_9c;
    undefined1 auStack_94[128];
    int local_14;

    local_14 = __stack_chk_guard;
    if (param_1 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/time.c", 0x96, 0, "t != ((void *)0)");
    }
    iVar1 = gettimeofday(&local_9c, (__timezone_ptr_t)0x0);
    if (iVar1 == -1) {
        piVar3 = __errno_location();
        FUN_000229e0(*piVar3, auStack_94, 0x80);
        FUN_0002508c("./../lib/isc/unix/time.c", 0x9a, "%s", auStack_94);
        uVar2 = 0x22;
        goto LAB_000290e4;
    }
    if (local_9c.tv_usec < 0) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + -1;
            local_9c.tv_usec = local_9c.tv_usec + 1000000;
        } while (local_9c.tv_usec < 0);
    LAB_000290ac:
        __syslog_chk(3, 1, "gettimeofday returned bad tv_usec: corrected");
    } else if (999999 < local_9c.tv_usec) {
        do {
            local_9c.tv_sec = local_9c.tv_sec + 1;
            local_9c.tv_usec = local_9c.tv_usec + -1000000;
        } while (999999 < local_9c.tv_usec);
        goto LAB_000290ac;
    }
    if (local_9c.tv_sec < 0) {
        uVar2 = 0x22;
    } else {
        *param_1 = local_9c.tv_sec;
        uVar2 = 0;
        param_1[1] = local_9c.tv_usec * 1000;
    }
LAB_000290e4:
    if (local_14 == __stack_chk_guard) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
}

/* WARNING: Removing unreachable block (ram,0x00029474) */

void FUN_000293a0(int param_1, int param_2)

{
    int iVar1;

    iVar1 = param_2;
    if (param_2 != 0) {
        iVar1 = 1;
    }
    if (param_1 == 0) {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        if ((*(uint *)(param_1 + 4) < 1000000000) &&
            (*(uint *)(param_2 + 4) < 1000000000)) {
            return;
        }
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/time.c", 0xf1, 2,
            "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/unix/time.c", 0xf0, 0,
                 "t1 != ((void *)0) && t2 != ((void *)0)");
}

void FUN_00029490(uint *param_1, uint *param_2, int *param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;
    uint uVar6;

    iVar1 = __stack_chk_guard;
    piVar5 = param_3;
    if (param_3 != (int *)0x0) {
        piVar5 = (int *)0x1;
    }
    if (param_2 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (param_1 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/time.c", 0x101, 0,
            "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
    }
    if ((999999999 < param_1[1]) || (999999999 < param_2[1])) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/time.c", 0x102, 2,
            "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    }
    uVar2 = *param_1;
    uVar6 = *param_2;
    if ((((int)uVar2 < 0) || ((int)uVar6 < 0)) && (CARRY4(uVar6, uVar2))) {
        uVar3 = 0x29;
    } else {
        uVar4 = param_1[1] + param_2[1];
        *param_3 = uVar6 + uVar2;
        param_3[1] = uVar4;
        if (uVar4 < 1000000000) {
            uVar3 = 0;
        } else {
            uVar3 = 0;
            *param_3 = uVar6 + uVar2 + 1;
            param_3[1] = uVar4 + 0xc4653600;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
    }
    return;
}

void FUN_000295d0(uint *param_1, uint *param_2, int *param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;

    iVar1 = __stack_chk_guard;
    piVar5 = param_3;
    if (param_3 != (int *)0x0) {
        piVar5 = (int *)0x1;
    }
    if (param_2 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (param_1 == (uint *)0x0) {
        piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/time.c", 0x11c, 0,
            "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
    }
    uVar6 = param_1[1];
    if ((999999999 < uVar6) || (uVar8 = param_2[1], 999999999 < uVar8)) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/time.c", 0x11d, 2,
            "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    }
    uVar2 = *param_1;
    uVar4 = *param_2;
    if (uVar2 < uVar4) {
    LAB_000296ac:
        uVar3 = 0x29;
    } else {
        if (uVar2 == uVar4) {
            if (uVar6 < uVar8)
                goto LAB_000296ac;
            iVar7 = uVar6 - uVar8;
            *param_3 = 0;
        } else {
            iVar7 = uVar6 - uVar8;
            *param_3 = uVar2 - uVar4;
            if (uVar6 < uVar8) {
                *param_3 = (uVar2 - uVar4) + -1;
                uVar3 = 0;
                param_3[1] = iVar7 + 1000000000;
                goto LAB_00029674;
            }
        }
        param_3[1] = iVar7;
        uVar3 = 0;
    }
LAB_00029674:
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
    }
    return;
}

void FUN_00029a3c(time_t *param_1, char *param_2, size_t param_3)

{
    tm *__tp;
    size_t sVar1;
    time_t local_20;
    int local_1c;

    local_1c = __stack_chk_guard;
    if (param_3 == 0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/time.c", 0x182, 0, "len > 0");
    }
    local_20 = *param_1;
    __tp = localtime(&local_20);
    sVar1 = strftime(param_2, param_3, "%d-%b-%Y %X", __tp);
    if (sVar1 < param_3) {
        if (sVar1 == 0) {
            FUN_0001f658(param_2, param_3, "99-Bad-9999 99:99:99.999");
        } else {
            FUN_0001f658(param_2 + sVar1, param_3 - sVar1, ".%03u",
                         (uint)param_1[1] / 1000000);
        }
        if (local_1c == __stack_chk_guard) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/unix/time.c", 0x186, 2, "flen < len");
}

/* WARNING: Removing unreachable block (ram,0x00029d8c) */

void FUN_00029ce8(undefined4 param_1, int param_2, int param_3)

{
    if (param_3 != 0) {
        param_3 = param_2 + param_3;
        do {
            param_2 = param_2 + 1;
        } while (param_2 != param_3);
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00029e10) */

void FUN_00029d98(undefined4 *param_1)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0x4449522a;
        *(undefined1 *)(param_1 + 0x101) = 0;
        param_1[0x141] = 0;
        param_1[0x142] = 0;
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/unix/dir.c", 0x2d, 0, "dir != ((void *)0)");
}

void FUN_00029e24(int *param_1, char *param_2)

{
    int iVar1;
    size_t sVar2;
    DIR *pDVar3;
    int *piVar4;
    int *__s;

    iVar1 = __stack_chk_guard;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/dir.c", 0x41, 0,
            "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic "
            "== (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\')))))");
    }
    if (param_2 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/dir.c", 0x42, 0,
                     "dirname != ((void *)0)");
    }
    sVar2 = strlen(param_2);
    if (sVar2 + 3 < 0x401) {
        __s = param_1 + 1;
        FUN_00020410(__s, param_2, sVar2 + 1);
        sVar2 = strlen((char *)__s);
        piVar4 = (int *)((int)__s + sVar2);
        if ((__s < piVar4) && (*(char *)((int)piVar4 + -1) != '/')) {
            piVar4 = (int *)((int)piVar4 + 1);
            *(undefined1 *)((int)__s + sVar2) = 0x2f;
        }
        *(undefined1 *)piVar4 = 0x2a;
        *(undefined1 *)((int)piVar4 + 1) = 0;
        pDVar3 = opendir(param_2);
        param_1[0x142] = (int)pDVar3;
        if (pDVar3 == (DIR *)0x0) {
            piVar4 = __errno_location();
            if (iVar1 == __stack_chk_guard) {
                FUN_0002a478(*piVar4, "./../lib/isc/unix/dir.c", 0x5d);
                return;
            }
            goto LAB_00029f50;
        }
        piVar4 = (int *)0x0;
    } else {
        piVar4 = (int *)0x13;
    }
    if (iVar1 == __stack_chk_guard) {
        return;
    }
LAB_00029f50:
    /* WARNING: Subroutine does not return */
    __stack_chk_fail(piVar4);
}

void FUN_00029f8c(int *param_1)

{
    int iVar1;
    dirent64 *pdVar2;
    size_t sVar3;
    undefined4 uVar4;
    char *__s;

    iVar1 = __stack_chk_guard;
    if (((param_1 == (int *)0x0) || (*param_1 != 0x4449522a)) ||
        ((DIR *)param_1[0x142] == (DIR *)0x0)) {
        /* WARNING: Subroutine does not return */
        FUN_00020788(
            "./../lib/isc/unix/dir.c", 0x6e, 0,
            "(((dir) != ((void *)0)) && (((const isc__magic_t *)(dir))->magic "
            "== (((\'D\') << 24 | (\'I\') << 16 | (\'R\') << 8 | (\'*\'))))) "
            "&& dir->handle != ((void *)0)");
    }
    pdVar2 = readdir64((DIR *)param_1[0x142]);
    if (pdVar2 == (dirent64 *)0x0) {
        uVar4 = 0x1d;
    } else {
        __s = pdVar2->d_name;
        sVar3 = strlen(__s);
        if (sVar3 + 1 < 0x101) {
            FUN_00020410(param_1 + 0x101, __s);
            sVar3 = strlen(__s);
            uVar4 = 0;
            param_1[0x141] = sVar3;
        } else {
            uVar4 = 0x22;
        }
    }
    if (iVar1 != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
    }
    return;
}

void FUN_0002a06c(int *param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    if (((param_1 != (int *)0x0) && (*param_1 == 0x4449522a)) &&
        ((DIR *)param_1[0x142] != (DIR *)0x0)) {
        closedir((DIR *)param_1[0x142]);
        iVar2 = __stack_chk_guard;
        param_1[0x142] = 0;
        if (iVar1 == iVar2) {
            return;
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/unix/dir.c", 0x8e, 0,
                 "(((dir) != ((void *)0)) && (((const isc__magic_t "
                 "*)(dir))->magic == (((\'D\') << 24 | (\'I\') << 16 | (\'R\') "
                 "<< 8 | (\'*\'))))) && dir->handle != ((void *)0)");
}

void FUN_0002a478(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 uVar1;
    undefined1 auStack_9c[128];
    int local_1c;

    local_1c = __stack_chk_guard;
    switch (param_1) {
    case 1:
        goto LAB_0002a710;
    case 2:
        uVar1 = 0x26;
        goto LAB_0002a680;
    case 3:
        break;
    case 4:
        break;
    case 5:
        uVar1 = 0x1a;
        goto LAB_0002a680;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        goto LAB_0002a67c;
    case 10:
        break;
    case 0xb:
        break;
    case 0xc:
        uVar1 = 1;
        goto LAB_0002a680;
    case 0xd:
    LAB_0002a710:
        uVar1 = 6;
        goto LAB_0002a680;
    case 0xe:
        break;
    case 0xf:
        break;
    case 0x10:
        break;
    case 0x11:
        uVar1 = 0x27;
        goto LAB_0002a680;
    case 0x12:
        break;
    case 0x13:
        break;
    case 0x14:
        goto LAB_0002a67c;
    case 0x15:
        break;
    case 0x16:
        goto LAB_0002a67c;
    case 0x17:
        goto LAB_0002a6a8;
    case 0x18:
    LAB_0002a6a8:
        uVar1 = 0x32;
        goto LAB_0002a680;
    case 0x19:
        break;
    case 0x1a:
        break;
    case 0x1b:
        break;
    case 0x1c:
        break;
    case 0x1d:
        break;
    case 0x1e:
        break;
    case 0x1f:
        break;
    case 0x20:
        goto LAB_0002a6b0;
    case 0x21:
        break;
    case 0x22:
        break;
    case 0x23:
        break;
    case 0x24:
        goto LAB_0002a67c;
    case 0x25:
        break;
    case 0x26:
        break;
    case 0x27:
        break;
    case 0x28:
    LAB_0002a67c:
        uVar1 = 0x1e;
        goto LAB_0002a680;
    case 0x29:
        break;
    case 0x2a:
        break;
    case 0x2b:
        break;
    case 0x2c:
        break;
    case 0x2d:
        break;
    case 0x2e:
        break;
    case 0x2f:
        break;
    case 0x30:
        break;
    case 0x31:
        break;
    case 0x32:
        break;
    case 0x33:
        break;
    case 0x34:
        break;
    case 0x35:
        break;
    case 0x36:
        break;
    case 0x37:
        break;
    case 0x38:
        break;
    case 0x39:
        break;
    case 0x3a:
        break;
    case 0x3b:
        break;
    case 0x3c:
        break;
    case 0x3d:
        break;
    case 0x3e:
        break;
    case 0x3f:
        break;
    case 0x40:
        break;
    case 0x41:
        break;
    case 0x42:
        break;
    case 0x43:
        break;
    case 0x44:
        break;
    case 0x45:
        break;
    case 0x46:
        break;
    case 0x47:
        break;
    case 0x48:
        break;
    case 0x49:
        break;
    case 0x4a:
        break;
    case 0x4b:
        break;
    case 0x4c:
        break;
    case 0x4d:
        break;
    case 0x4e:
        break;
    case 0x4f:
        break;
    case 0x50:
        break;
    case 0x51:
        break;
    case 0x52:
        break;
    case 0x53:
        break;
    case 0x54:
        break;
    case 0x55:
        break;
    case 0x56:
        break;
    case 0x57:
        break;
    case 0x58:
        break;
    case 0x59:
        break;
    case 0x5a:
        break;
    case 0x5b:
        break;
    case 0x5c:
        break;
    case 0x5d:
        break;
    case 0x5e:
        break;
    case 0x5f:
        break;
    case 0x60:
        break;
    case 0x61:
        uVar1 = 0x30;
        goto LAB_0002a680;
    case 0x62:
        uVar1 = 5;
        goto LAB_0002a680;
    case 99:
        uVar1 = 4;
        goto LAB_0002a680;
    case 100:
        uVar1 = 10;
        goto LAB_0002a680;
    case 0x65:
        uVar1 = 8;
        goto LAB_0002a680;
    case 0x66:
        break;
    case 0x67:
        goto LAB_0002a6b0;
    case 0x68:
    LAB_0002a6b0:
        uVar1 = 0x36;
        goto LAB_0002a680;
    case 0x69:
        uVar1 = 0xd;
        goto LAB_0002a680;
    case 0x6a:
        break;
    case 0x6b:
        uVar1 = 0x28;
        goto LAB_0002a680;
    case 0x6c:
        break;
    case 0x6d:
        break;
    case 0x6e:
        uVar1 = 2;
        goto LAB_0002a680;
    case 0x6f:
        uVar1 = 0xc;
        goto LAB_0002a680;
    case 0x70:
        uVar1 = 0xb;
        goto LAB_0002a680;
    case 0x71:
        uVar1 = 9;
        goto LAB_0002a680;
    }
    FUN_000229e0(param_1, auStack_9c, 0x80);
    FUN_0002508c(param_2, param_3,
                 "unable to convert errno to isc_result: %d: %s", param_1,
                 auStack_9c);
    uVar1 = 0x22;
LAB_0002a680:
    if (local_1c != __stack_chk_guard) {
        /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
    }
    return;
}

void FUN_0002b148(char *param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/file.c", 0x140, 0,
                     "filename != ((void *)0)");
    }
    iVar2 = unlink(param_1);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else {
        piVar3 = __errno_location();
        if (iVar1 == __stack_chk_guard) {
            FUN_0002a478(*piVar3, "./../lib/isc/unix/file.c", 0x146);
            return;
        }
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002b1f4(char *param_1, char *param_2)

{
    int iVar1;
    int iVar2;
    int *piVar3;

    iVar1 = __stack_chk_guard;
    if (param_1 == (char *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/unix/file.c", 0x14d, 0,
                     "oldname != ((void *)0)");
    }
    if (param_2 != (char *)0x0) {
        iVar2 = rename(param_1, param_2);
        if (iVar2 == 0) {
            if (iVar1 == __stack_chk_guard) {
                return;
            }
        } else {
            piVar3 = __errno_location();
            if (iVar1 == __stack_chk_guard) {
                FUN_0002a478(*piVar3, "./../lib/isc/unix/file.c", 0x154);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        __stack_chk_fail();
    }
    /* WARNING: Subroutine does not return */
    FUN_00020788("./../lib/isc/unix/file.c", 0x14e, 0,
                 "newname != ((void *)0)");
}

void FUN_0002bbc8(void)

{
    int iVar1;
    int iVar2;

    iVar1 = __stack_chk_guard;
    iVar2 = pthread_once((pthread_once_t *)&DAT_000433bc,
                         (__init_routine *)&LAB_0002bb6c);
    if (iVar2 == 0) {
        if (iVar1 == __stack_chk_guard) {
            return;
        }
    } else if (iVar1 == __stack_chk_guard) {
        FUN_00025154(
            "./../lib/isc/random.c", 0x3c,
            "((pthread_once((&once), (initialize_rand)) == 0) ? 0 : 34) == 0");
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

void FUN_0002bcb4(uint *param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    bool bVar4;

    iVar1 = __stack_chk_guard;
    if (param_1 == (uint *)0x0) {
        /* WARNING: Subroutine does not return */
        FUN_00020788("./../lib/isc/random.c", 0x4e, 0, "val != ((void *)0)");
    }
    FUN_0002bbc8();
    iVar2 = rand();
    uVar3 = rand();
    bVar4 = iVar1 == __stack_chk_guard;
    *param_1 = (uint)(iVar2 << 0xc) >> 0x10 | (uVar3 & 0xffff0) << 0xc;
    if (bVar4) {
        return;
    }
    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
}

ulonglong FUN_0002bdf0(uint param_1, uint param_2)

{
    uint uVar1;
    ulonglong uVar2;

    if (param_2 - 1 == 0) {
        return CONCAT44(param_2, param_1);
    }
    if (param_2 == 0) {
        uVar1 = raise(8);
        return (ulonglong)uVar1;
    }
    if (param_1 <= param_2) {
        return CONCAT44(param_2, (uint)(param_1 == param_2));
    }
    if ((param_2 & param_2 - 1) == 0) {
        return CONCAT44(param_2, param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
    }
    /* WARNING: Could not recover jumptable at 0x0002be20. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0002be28 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

void FUN_0002c04c(undefined4 param_1, int param_2)

{
    if (param_2 != 0) {
        FUN_0002bdf0();
        return;
    }
    raise(8);
    return;
}

ulonglong FUN_0002c374(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    iVar7 = 0x432;
    uVar8 = param_2 >> 0x16;
    if (uVar8 != 0) {
        iVar7 = 3;
        if (param_2 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (param_2 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)param_2 >> 0x1f);
        uVar8 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | param_2 << (0x20 - uVar4 & 0xff);
        param_2 = param_2 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < param_2) {
        if (0x1fffff < param_2) {
            uVar4 = param_2 & 1;
            param_2 = param_2 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar8 = (uint)(bVar1 & 1) << 0x1f | uVar8 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return 0x7ff0000000000000;
            }
        }
    LAB_0002c180:
        bVar10 = 0x7fffffff < uVar8;
        if (uVar8 == 0x80000000) {
            bVar10 = (param_1 & 1) != 0;
        }
        return CONCAT44(param_2 + iVar7 * 0x100000 +
                            (uint)CARRY4(param_1, (uint)bVar10),
                        param_1 + bVar10);
    }
    bVar9 = (uVar8 & 0x80000000) != 0;
    uVar8 = uVar8 << 1;
    uVar4 = param_1 * 2;
    bVar10 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar9;
    param_2 = param_2 * 2 + (uint)(bVar10 || CARRY4(uVar4, (uint)bVar9));
    iVar7 = iVar7 + -1;
    if ((param_2 & 0x100000) != 0)
        goto LAB_0002c180;
    uVar2 = param_1;
    uVar4 = param_2;
    if (param_2 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (param_2 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar11 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar10 = (int)uVar3 < 0;
    bVar9 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar11 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar10 = iVar5 < 0;
        bVar9 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar9 && bVar10 == bVar11) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_0002c1f8;
        }
    }
    if (bVar9 || bVar10 != bVar11) {
        uVar8 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar9 || bVar10 != bVar11) {
        uVar4 = uVar4 | uVar2 >> (uVar8 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_0002c1f8:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000, uVar2);
    }
    uVar8 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar8) {
        return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
    }
    iVar7 = uVar8 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar8 - 0x1f, 0xc)) {
        uVar8 = uVar8 + 1;
        return CONCAT44(uVar4 >> (uVar8 & 0xff),
                        uVar2 >> (uVar8 & 0xff) | uVar4
                                                      << (0x20 - uVar8 & 0xff));
    }
    return (ulonglong)(uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                       uVar4 << (0xcU - iVar7 & 0xff));
}

void FUN_0002c480(undefined4 param_1, undefined4 param_2, int param_3,
                  int param_4)

{
    if ((param_4 == 0) && (param_3 == 0)) {
        raise(8);
        return;
    }
    FUN_0002c500();
    return;
}

undefined8 FUN_0002c4c0(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    double dVar2;

    dVar2 = (double)CONCAT44(param_2, param_1) * 2.3283064365386963e-10;
    uVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
    dVar2 = (double)CONCAT44(param_2, param_1) - (double)uVar1 * 4294967296.0;
    return CONCAT44(uVar1, (uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

undefined8 FUN_0002c500(uint param_1, uint param_2, uint param_3, uint param_4,
                        uint *param_5)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    bool bVar12;

    bVar12 = param_4 <= param_2;
    if (param_2 == param_4) {
        bVar12 = param_3 <= param_1;
    }
    if (bVar12) {
        iVar10 = LZCOUNT(param_4);
        if (param_4 == 0) {
            iVar10 = LZCOUNT(param_3) + 0x20;
        }
        iVar3 = LZCOUNT(param_2);
        if (param_2 == 0) {
            iVar3 = LZCOUNT(param_1) + 0x20;
        }
        uVar11 = iVar10 - iVar3;
        uVar8 = uVar11 - 0x20;
        uVar9 = 0x20 - uVar11;
        uVar5 = param_3 << (uVar11 & 0xff);
        uVar6 = param_4 << (uVar11 & 0xff) | param_3 << (uVar8 & 0xff) |
                param_3 >> (uVar9 & 0xff);
        bVar12 = uVar6 <= param_2;
        if (param_2 == uVar6) {
            bVar12 = uVar5 <= param_1;
        }
        if (bVar12) {
            bVar12 = param_1 < uVar5;
            param_1 = param_1 - uVar5;
            uVar1 = 1 << (uVar11 & 0xff);
            param_2 = (param_2 - uVar6) - (uint)bVar12;
            uVar2 = 1 << (uVar8 & 0xff) | 1U >> (uVar9 & 0xff);
        } else {
            uVar1 = 0;
            uVar2 = uVar1;
        }
        if (uVar11 != 0) {
            uVar7 = uVar6 >> 1;
            uVar6 = (uint)((uVar6 & 1) != 0) << 0x1f | uVar5 >> 1;
            uVar5 = uVar11;
            do {
                while (true) {
                    bVar12 = uVar7 <= param_2;
                    if (param_2 == uVar7) {
                        bVar12 = uVar6 <= param_1;
                    }
                    if (bVar12)
                        break;
                    bVar12 = CARRY4(param_1, param_1);
                    param_1 = param_1 * 2;
                    param_2 = param_2 * 2 + (uint)bVar12;
                    uVar5 = uVar5 - 1;
                    uVar4 = param_2;
                    if (uVar5 == 0)
                        goto LAB_0002c5aa;
                }
                bVar12 = param_1 < uVar6;
                uVar4 = param_1 - uVar6;
                param_1 = uVar4 * 2 + 1;
                param_2 = ((param_2 - uVar7) - (uint)bVar12) * 2 +
                          (uint)CARRY4(uVar4, uVar4) +
                          (uint)(0xfffffffe < uVar4 * 2);
                uVar5 = uVar5 - 1;
                uVar4 = param_2;
            } while (uVar5 != 0);
        LAB_0002c5aa:
            param_2 = uVar4 >> (uVar11 & 0xff);
            bVar12 = CARRY4(uVar1, param_1);
            uVar5 = uVar1 + param_1;
            param_1 = param_1 >> (uVar11 & 0xff) | uVar4 << (uVar9 & 0xff) |
                      uVar4 >> (uVar8 & 0xff);
            uVar6 = param_1 << (uVar11 & 0xff);
            uVar1 = uVar5 - uVar6;
            uVar2 = ((uVar4 + uVar2 + bVar12) -
                     (param_2 << (uVar11 & 0xff) |
                      param_1 << (uVar11 - 0x20 & 0xff) |
                      param_1 >> (0x20 - uVar11 & 0xff))) -
                    (uint)(uVar5 < uVar6);
        }
    } else {
        uVar1 = 0;
        uVar2 = uVar1;
    }
    if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
    }
    return CONCAT44(uVar2, uVar1);
}

void __libc_csu_init(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                     undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _DT_INIT();
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _DT_FINI(void)

{
    return;
}
