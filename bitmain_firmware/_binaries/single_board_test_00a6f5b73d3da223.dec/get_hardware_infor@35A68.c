int __fastcall get_hardware_infor(char *a1)
{
  char nptr; // [sp+Ch] [bp+Ch] BYREF
  char v4; // [sp+Dh] [bp+Dh]
  char v5; // [sp+Eh] [bp+Eh]

  nptr = 0;
  v4 = 0;
  v5 = 0;
  nptr = a1[112];
  byte_47BFF8 = atoi(&nptr);
  printf("pcb_version_v1 = %d\n", (unsigned __int8)byte_47BFF8);
  nptr = a1[113];
  v4 = a1[114];
  byte_47BFF9 = atoi(&nptr);
  printf("pcb_version_v2 = %02d\n", (unsigned __int8)byte_47BFF9);
  nptr = a1[115];
  v4 = 0;
  byte_47BFFA = atoi(&nptr);
  printf("bom_version_v1 = %d\n", (unsigned __int8)byte_47BFFA);
  nptr = a1[116];
  byte_47BFFB = atoi(&nptr);
  return printf("bom_version_v2 = %d\n", (unsigned __int8)byte_47BFFB);
}
