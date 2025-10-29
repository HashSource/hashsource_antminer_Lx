void __fastcall sub_2D950(void *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // r0
  double v5; // d8
  __int64 v6; // kr00_8
  double v7; // r0
  double v8; // d8
  __int64 v9; // kr08_8
  double v10; // r0
  unsigned __int64 v11; // r0
  char *v12; // r6
  _QWORD v13[4]; // [sp+8h] [bp-824h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      v3 = 4294901760LL;
      strcpy(s, "Diff zero passed to set_target");
      sub_20F58(3, s, 0);
      v11 = 0;
      v6 = 0;
      v9 = 0;
    }
    else
    {
      v11 = 0;
      v3 = 4294901760LL;
      v6 = 0;
      v9 = 0;
    }
  }
  else
  {
    v3 = (unsigned __int64)(2.69595353e67 / v1 * 1.59309191e-58);
    LODWORD(v4) = sub_4A10C(v3);
    v5 = 2.69595353e67 / v1 - v4 * 6.27710174e57;
    v6 = (unsigned __int64)(v5 * 2.93873588e-39);
    LODWORD(v7) = sub_4A10C(v6);
    v8 = v5 - v7 * 3.40282367e38;
    v9 = (unsigned __int64)(v8 * 5.42101086e-20);
    LODWORD(v10) = sub_4A10C(v9);
    v11 = (unsigned __int64)(v8 - v10 * 1.84467441e19);
  }
  v13[3] = v3;
  v13[2] = v6;
  v13[1] = v9;
  v13[0] = v11;
  if ( byte_68BD5 )
  {
    v12 = sub_22C24((int)v13, 32);
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v12);
      sub_20F58(7, s, 0);
    }
    free(v12);
  }
  sub_254E8(a1, v13, 0x20u, (int)"cgminer.c", (int)"set_target", 8316);
}
