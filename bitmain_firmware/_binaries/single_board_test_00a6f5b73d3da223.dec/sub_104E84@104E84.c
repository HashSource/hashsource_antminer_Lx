__int64 __fastcall sub_104E84(int a1, int a2)
{
  unsigned int v3; // [sp+4h] [bp+4h]
  unsigned int v4; // [sp+8h] [bp+8h]
  __int64 v5; // [sp+8h] [bp+8h]
  unsigned int v6; // [sp+Ch] [bp+Ch]

  v4 = ((a2 & 0xFFFF0000) >> 16) | ((a1 & 0xFFFF0000) << 16) | ((unsigned __int16)a2 << 16);
  v6 = ((a1 & 0xFFFF0000) >> 16) | ((unsigned __int16)a1 << 16);
  v3 = ((v6 & 0xFF00FF) << 8) | ((v4 & 0xFF00FF) >> 24);
  LODWORD(v5) = ((v4 & 0xFF00FF) << 8) | ((v4 & 0xFF00FF00) >> 8) | ((v6 & 0xFF00FF00) << 24);
  HIDWORD(v5) = v3 | ((v6 & 0xFF00FF00) >> 8);
  return v5;
}
