// Decompiled: id2mac_1d9f36d346dc5bc3

void _DT_INIT(void)

{
    FUN_00010498();
    return;
}

undefined4 FUN_00010438(void)

{
    char acStack_44[20];
    undefined1 auStack_30[44];

    FUN_000106c4(auStack_30);
    FUN_000105b0(auStack_30, acStack_44);
    puts(acStack_44);
    return 0;
}

void entry(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(FUN_00010438, in_stack_00000000, &stack0x00000004,
                      0x1090d, &DAT_00010949, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x000104ac) */

void FUN_00010498(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104d0) */
/* WARNING: Removing unreachable block (ram,0x000104da) */

void FUN_000104bc(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000104fc) */
/* WARNING: Removing unreachable block (ram,0x00010506) */

void FUN_000104e0(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00021440 == '\0') {
        FUN_000104bc();
        DAT_00021440 = '\x01';
    }
    return;
}

void FUN_000105b0(byte *param_1, char *param_2)

{
    char *pcVar1;
    size_t sVar2;
    uint uVar3;
    byte *pbVar4;
    uint uVar6;
    uint uVar7;
    undefined4 uVar8;
    uint uVar9;
    undefined4 uVar10;
    uint uVar11;
    uint uVar12;
    undefined4 uVar13;
    byte *pbVar5;

    pcVar1 = getenv("CPUID");
    if (pcVar1 == (char *)0x0) {
        sVar2 = strlen((char *)param_1);
    } else {
        uVar13 = *(undefined4 *)pcVar1;
        uVar8 = *(undefined4 *)(pcVar1 + 4);
        uVar10 = *(undefined4 *)(pcVar1 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pcVar1 + 0xc);
        *(undefined4 *)param_1 = uVar13;
        *(undefined4 *)(param_1 + 4) = uVar8;
        *(undefined4 *)(param_1 + 8) = uVar10;
        sVar2 = strlen((char *)param_1);
    }
    if (sVar2 == 0) {
        uVar3 = 0xff;
        uVar9 = 0;
        uVar11 = 0;
        uVar7 = uVar3;
        uVar12 = uVar3;
        uVar6 = uVar3;
    } else {
        uVar11 = 0;
        pbVar5 = param_1;
        do {
            pbVar4 = pbVar5 + 1;
            uVar11 =
                *(uint *)(&DAT_00021040 + ((uint)*pbVar5 ^ uVar11 >> 8) * 4) &
                    0xffff ^
                (uVar11 & 0xff) << 8;
            pbVar5 = pbVar4;
        } while (pbVar4 != param_1 + sVar2);
        uVar6 = 0xffffffff;
        pbVar5 = param_1;
        do {
            pbVar4 = pbVar5 + 1;
            uVar6 =
                *(uint *)(&DAT_00010958 + ((uint)*pbVar5 ^ uVar6 >> 0x18) * 4) ^
                uVar6 << 8;
            pbVar5 = pbVar4;
        } while (pbVar4 != param_1 + sVar2);
        uVar9 = uVar11 & 0xfe;
        uVar3 = (uVar6 << 0x10) >> 0x18;
        uVar11 = uVar11 >> 8;
        uVar7 = uVar6 >> 0x18;
        uVar12 = uVar6 & 0xff;
        uVar6 = (uVar6 << 8) >> 0x18;
    }
    sprintf(param_2, "%02x:%02x:%02x:%02x:%02x:%02x", uVar9, uVar11, uVar12,
            uVar3, uVar6, uVar7);
    return;
}

uint FUN_000106c4(char *param_1)

{
    FILE *__stream;
    size_t sVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar7;
    uint local_40;
    uint uStack_3c;
    int local_38;
    int iStack_34;
    int local_30;
    int iStack_2c;

    if (DAT_00021448 == 0) {
        do {
            __stream = fopen64("/dev/urandom", "rb");
            if (__stream == (FILE *)0x0) {
                return 0xffffffff;
            }
            sVar1 = fread(&DAT_00021450, 1, 0x10, __stream);
            fclose(__stream);
            if (sVar1 != 0x10) {
                return 0xffffffff;
            }
            local_40 = DAT_00021458;
            uStack_3c = DAT_0002145c;
        } while ((DAT_00021450 == 0 && DAT_00021454 == 0) &&
                 (DAT_00021458 == 0 && DAT_0002145c == 0));
        DAT_00021448 = 1;
    } else {
        local_40 = DAT_00021458;
        uStack_3c = DAT_0002145c;
    }
    uVar3 = DAT_00021454 ^ (DAT_00021454 << 0x17 | DAT_00021450 >> 9);
    uVar2 = DAT_00021450 ^ DAT_00021450 << 0x17;
    uVar4 = local_40 ^ local_40 << 0x17;
    uVar5 = uStack_3c ^ (uStack_3c << 0x17 | local_40 >> 9);
    DAT_00021450 = local_40 ^ (local_40 >> 5 | uStack_3c << 0x1b) ^ uVar2 ^
                   (uVar2 >> 0x12 | uVar3 << 0xe);
    DAT_00021454 = uStack_3c ^ uStack_3c >> 5 ^ uVar3 ^ uVar3 >> 0x12;
    DAT_00021458 = DAT_00021450 ^ (uVar4 >> 0x12 | uVar5 << 0xe) ^ uVar4 ^
                   (DAT_00021450 >> 5 | DAT_00021454 << 0x1b);
    DAT_0002145c = DAT_00021454 ^ uVar5 >> 0x12 ^ uVar5 ^ DAT_00021454 >> 5;
    pcVar7 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
    local_38 = local_40 + DAT_00021450;
    iStack_34 = uStack_3c + DAT_00021454 + (uint)CARRY4(local_40, DAT_00021450);
    uVar3 = 0;
    local_30 = DAT_00021450 + DAT_00021458;
    iStack_2c =
        DAT_00021454 + DAT_0002145c + (uint)CARRY4(DAT_00021450, DAT_00021458);
    uVar2 = 0x78;
    do {
        while (true) {
            pcVar6 = param_1;
            uVar4 = (uint) * (byte *)((int)&local_38 + ((int)uVar3 >> 1));
            if ((uVar3 & 1) == 0) {
                uVar4 = uVar4 & 0xf;
            } else {
                uVar4 = (int)uVar4 >> 4;
            }
            if (uVar2 != 0x78)
                break;
            *pcVar6 = "0123456789abcdef"[uVar4];
        LAB_0001088c:
            uVar3 = uVar3 + 1;
            pcVar7 = (char *)((byte *)pcVar7 + 1);
            uVar2 = (uint)(byte)*pcVar7;
            param_1 = pcVar6 + 1;
            if (uVar2 == 0)
                goto LAB_000108dc;
        }
        if (uVar2 == 0x79) {
            *pcVar6 = "0123456789abcdef"[(uVar4 & 3) + 8];
            goto LAB_0001088c;
        }
        *pcVar6 = (char)uVar2;
        pcVar7 = (char *)((byte *)pcVar7 + 1);
        uVar2 = (uint)(byte)*pcVar7;
        param_1 = pcVar6 + 1;
    } while (uVar2 != 0);
LAB_000108dc:
    pcVar6[1] = (char)uVar2;
    return uVar2;
}

void FUN_0001090c(undefined4 param_1, undefined4 param_2, undefined4 param_3,
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

void _DT_FINI(void)

{
    return;
}
