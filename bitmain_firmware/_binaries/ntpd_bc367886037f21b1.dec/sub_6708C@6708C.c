char *__fastcall sub_6708C(int a1, unsigned int a2)
{
  char *v4; // r4
  void *v6; // r0

  sub_6DEFC(1);
  if ( dnsworker_contexts_alloc <= a2 )
  {
    v6 = sub_637E4((void *)dnsworker_contexts, 4 * ((a2 + 5) & 0xFFFFFFFC), 4 * dnsworker_contexts_alloc, 1);
    dnsworker_contexts_alloc = (a2 + 5) & 0xFFFFFFFC;
    dnsworker_contexts = (int)v6;
    v4 = (char *)sub_637E4(0, 0xCu, 0, 1);
    *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
  }
  else
  {
    v4 = *(char **)(dnsworker_contexts + 4 * a2);
    if ( !v4 )
    {
      v4 = (char *)sub_637E4(0, 0xCu, 0, 1);
      *(_DWORD *)(dnsworker_contexts + 4 * a2) = v4;
    }
  }
  sub_6DEFC(0);
  *(_QWORD *)(v4 + 4) = 0;
  *(_DWORD *)v4 = a1;
  return v4;
}
