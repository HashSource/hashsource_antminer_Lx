bool __fastcall get_work(int a1, const json_t *a2, int a3, int a4)
{
  bool v4; // r3

  v4 = get_work_element_len(a1, (_DWORD *)(a3 + 88), (_DWORD *)(a3 + 92), (_DWORD *)(a3 + 96))
    && get_work_by_key(a2, "work", (unsigned __int8 *)(a3 + 4), *(_DWORD *)(a3 + 88))
    && get_work_by_key(a2, "nonce", (unsigned __int8 *)(a3 + 84), *(_DWORD *)(a3 + 92))
    && get_work_by_key(a2, "sol", (unsigned __int8 *)(a3 + 88), *(_DWORD *)(a3 + 96));
  *(_DWORD *)(a3 + 100) = 0;
  *(_DWORD *)a3 = a4;
  return v4;
}
