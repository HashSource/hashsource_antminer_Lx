int __fastcall sub_5B1AC(int a1, __int64 *a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  __int64 v12; // [sp+8h] [bp-194h] BYREF
  char v13[64]; // [sp+10h] [bp-18Ch] BYREF
  int v14; // [sp+50h] [bp-14Ch]
  int v15; // [sp+54h] [bp-148h]
  int v16; // [sp+58h] [bp-144h]
  int v17; // [sp+5Ch] [bp-140h]
  int v18; // [sp+60h] [bp-13Ch]
  int v19; // [sp+64h] [bp-138h]
  int v20; // [sp+68h] [bp-134h]
  int v21; // [sp+6Ch] [bp-130h]
  __int64 v22; // [sp+70h] [bp-12Ch]
  __int64 v23; // [sp+78h] [bp-124h]
  char v24[64]; // [sp+80h] [bp-11Ch] BYREF
  int v25; // [sp+C0h] [bp-DCh] BYREF
  _BYTE n[14]; // [sp+186h] [bp-16h]
  char *src; // [sp+194h] [bp-8h]

  src = (char *)*((_DWORD *)a2 + 283);
  if ( src )
  {
    v12 = *a2;
    strcpy(v13, src);
    v3 = *((_DWORD *)src + 17);
    v4 = *((_DWORD *)src + 18);
    v5 = *((_DWORD *)src + 19);
    v14 = *((_DWORD *)src + 16);
    v15 = v3;
    v16 = v4;
    v17 = v5;
    v6 = *((_DWORD *)src + 21);
    v7 = *((_DWORD *)src + 22);
    v8 = *((_DWORD *)src + 23);
    v18 = *((_DWORD *)src + 20);
    v19 = v6;
    v20 = v7;
    v21 = v8;
    v22 = *((_QWORD *)src + 12);
    v23 = *((_QWORD *)src + 13);
    strcpy(v24, *((const char **)a2 + 281));
    n[0] = *((_BYTE *)a2 + 8);
    memcpy(&v25, (char *)a2 + 9, n[0]);
    *(_DWORD *)&n[1] = *((_DWORD *)a2 + 12);
    (*(void (__fastcall **)(int, __int64 *))(a1 + 32))(a1, &v12);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
