int __fastcall sub_31CC8(int a1)
{
  int v2; // r1

  sub_26094((_WORD *)&dword_80 + 1, a1, (int)"assoc %u", *(unsigned __int16 *)(a1 + 60));
  sub_40598(a1 + 16, 1, 0);
  sub_31B58(a1, 0);
  v2 = *(_DWORD *)(a1 + 68);
  ++peer_demobilizations;
  --peer_associations;
  if ( (v2 & 2) != 0 )
    --peer_preempt;
  if ( (v2 & 8) != 0 )
    sub_39330(a1);
  return sub_3133C((int *)a1, 1);
}
