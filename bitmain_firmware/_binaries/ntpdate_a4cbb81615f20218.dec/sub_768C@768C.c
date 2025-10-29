int __fastcall sub_768C(int result)
{
  int v1; // r4
  void *v2; // r0
  int v3; // r8
  int v4; // r6
  _DWORD *v5; // r9
  _DWORD **v6; // r1
  _DWORD *v7; // r3
  int v8; // r2

  v1 = result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 24) == cache_keyid )
      sub_748C();
    sub_7630(*(_DWORD **)(v1 + 16));
    v2 = *(void **)(v1 + 12);
    v3 = key_hash;
    v4 = (unsigned __int16)authhashmask & *(_DWORD *)(v1 + 24);
    v5 = (_DWORD *)(key_hash + 4 * v4);
    if ( v2 )
    {
      memset(v2, 0, *(_DWORD *)(v1 + 32));
      free(*(void **)(v1 + 12));
    }
    v6 = *(_DWORD ***)(v3 + 4 * v4);
    if ( (_DWORD **)v1 != v6 )
    {
      if ( !v6 )
        goto LABEL_15;
      v7 = *v6;
      if ( !*v6 )
        goto LABEL_15;
      while ( (_DWORD *)v1 != v7 )
      {
        v6 = (_DWORD **)v7;
        if ( !*v7 )
          goto LABEL_15;
        v7 = (_DWORD *)*v7;
      }
      v5 = v6;
      v6 = (_DWORD **)v1;
    }
    *v5 = *v6;
LABEL_15:
    v8 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v1 + 8);
    *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4) = v8;
    *(_QWORD *)(v1 + 12) = 0;
    *(_QWORD *)(v1 + 20) = 0;
    *(_QWORD *)(v1 + 24) = 0;
    *(_QWORD *)(v1 + 32) = 0;
    result = authfreekeys;
    authfreekeys = v1;
    *(_DWORD *)(v1 + 8) = result;
    --authnumkeys;
    ++authnumfreekeys;
  }
  return result;
}
