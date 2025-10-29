int __fastcall sub_74C14(int result, _DWORD *a2)
{
  if ( *a2 != 10 )
    sub_6E8F0((int)"./../lib/isc/netaddr.c", 428, 0, "s->family == 10");
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    sub_6E8F0(
      (int)"./../lib/isc/netaddr.c",
      429,
      0,
      "(__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (&src->type.in6); __a->__in6_u.__u6_addr3"
      "2[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == __bswap_32 (0xffff); }))");
  *(_QWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)result = 2;
  *(_DWORD *)(result + 4) = a2[4];
  return result;
}
