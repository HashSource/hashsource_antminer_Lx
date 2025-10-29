unsigned int __fastcall sub_37AE8(char *a1)
{
  char v2; // [sp+8h] [bp+8h]
  int v3; // [sp+Ch] [bp+Ch]

  v2 = 3;
  if ( a1 == (_BYTE *)&loc_17D780 + 4 )
  {
    v3 = 1;
  }
  else if ( (int)a1 > 1562500 )
  {
    if ( a1 == (char *)6250000 )
    {
      v3 = 0;
      v2 = 1;
    }
    else if ( a1 == (char *)12500000 )
    {
      v3 = 0;
      v2 = 0;
    }
    else
    {
      if ( a1 != byte_2FAF08 )
        goto LABEL_18;
      v3 = 0;
    }
  }
  else if ( a1 == (char *)&loc_70800 )
  {
    v3 = 6;
  }
  else if ( a1 == (char *)&loc_E1000 )
  {
    v3 = 2;
  }
  else
  {
    if ( a1 != "stem_Config_File_Information" )
    {
LABEL_18:
      v3 = 26;
      return (unsigned int)&word_1FF00 & (v3 << 8) | (unsigned __int8)(v2 << 6);
    }
    v3 = 26;
  }
  return (unsigned int)&word_1FF00 & (v3 << 8) | (unsigned __int8)(v2 << 6);
}
