int __fastcall sub_4A414(__int16 *a1, int a2, int a3)
{
  _WORD *v3; // r2
  int v6; // r3
  int v7; // r8
  size_t v8; // r2
  char *v9; // r7
  int v11; // r3
  int v12; // r12
  int v13; // r3
  char v14[48]; // [sp+Ch] [bp-34h] BYREF

  v3 = (_WORD *)(a3 + 516);
  v6 = (unsigned __int16)(*v3 + 1);
  *v3 = v6;
  switch ( v6 )
  {
    case 1:
      v7 = 10;
      v8 = 10;
      v9 = "ATE0Q0V1\r\n";
      goto LABEL_3;
    case 2:
      v9 = v14;
      if ( (*(_BYTE *)(a2 + 768) & 4) != 0 )
        v11 = 2;
      else
        v11 = 0;
      if ( (*(_BYTE *)(a2 + 768) & 8) != 0 )
        v12 = 2;
      else
        v12 = 1;
      sub_6BCB0(v14, 46, "ATM%dL%d\r\n", v11, v12);
      v8 = strlen(v14);
      v7 = v8;
      goto LABEL_3;
    case 3:
      v7 = 7;
      v8 = 7;
      v9 = "AT&K4\r\n";
      goto LABEL_3;
    case 4:
      v7 = 12;
      v8 = 12;
      v9 = "AT+MS=V22B\r\n";
      goto LABEL_3;
    case 5:
      v7 = 7;
      v8 = 7;
      v9 = "AT%C0\r\n";
      goto LABEL_3;
    case 6:
      v9 = v14;
      if ( (*(_BYTE *)(a2 + 768) & 2) != 0 )
        v13 = 3;
      else
        v13 = 0;
      sub_6BCB0(v14, 46, "AT\\N%d\r\n", v13);
      v8 = strlen(v14);
      v7 = v8;
      goto LABEL_3;
    case 7:
      v7 = 6;
      v8 = 6;
      v9 = "ATH1\r\n";
LABEL_3:
      if ( write(*(_DWORD *)(a2 + 28), v9, v8) != v7 )
        sub_3918C(a1, 3);
      sub_49E3C((int)a1, 2, v9);
      return 0;
    case 8:
      return 1;
    default:
      return 0;
  }
}
