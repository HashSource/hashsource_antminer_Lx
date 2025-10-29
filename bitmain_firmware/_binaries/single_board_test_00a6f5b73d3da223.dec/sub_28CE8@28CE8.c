int sub_28CE8()
{
  strcpy(dest, "                ");
  sprintf(byte_47BEB9, " LEVEL: %d", dword_47BE7C + 1);
  sprintf(&byte_47BEB9[17], " NONCE: %.2f", flt_47BE70);
  if ( byte_47BE80 )
  {
    strcpy(dword_47BEDB, "      Done      ");
    return *(_DWORD *)"      Done      ";
  }
  else
  {
    strcpy(dword_47BEDB, "      Next      ");
    return *(_DWORD *)"      Next      ";
  }
}
