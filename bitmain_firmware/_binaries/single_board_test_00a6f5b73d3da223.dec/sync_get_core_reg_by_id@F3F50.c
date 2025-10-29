int __fastcall sync_get_core_reg_by_id(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r3
  int v10; // [sp+20h] [bp+10h] BYREF
  _DWORD *fake_regio_runtime; // [sp+24h] [bp+14h]
  int i; // [sp+28h] [bp+18h]
  _DWORD *all_created_runtime; // [sp+2Ch] [bp+1Ch]
  int v14; // [sp+30h] [bp+20h]
  int v15; // [sp+34h] [bp+24h]
  int v16; // [sp+38h] [bp+28h]
  void *arg; // [sp+3Ch] [bp+2Ch]

  v15 = a1;
  v14 = a1;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  for ( i = 0; i < v10; ++i )
  {
    if ( v14 == *(_DWORD *)(all_created_runtime[i] + 136) )
    {
      v5 = (_DWORD *)all_created_runtime[i];
      goto LABEL_7;
    }
  }
  v5 = 0;
LABEL_7:
  fake_regio_runtime = v5;
  if ( !v5 )
    fake_regio_runtime = (_DWORD *)get_fake_regio_runtime(v15);
  arg = fake_regio_runtime;
  if ( fake_regio_runtime[164] == fake_regio_runtime[166] )
    pthread_create((pthread_t *)arg + 169, 0, (void *(*)(void *))get_response, arg);
  v16 = (*((int (__fastcall **)(void *, int, int, int, int))arg + 46))(arg, a2, a3, a4, a5);
  if ( *((_DWORD *)arg + 164) == *((_DWORD *)arg + 166) )
  {
    *((_BYTE *)arg + 685) = 1;
    pthread_join(*((_DWORD *)arg + 169), 0);
  }
  return v16;
}
