void *__fastcall graph_init_ae(int a1)
{
  memset(gEdges, 0, sizeof(gEdges));
  memset(gSols, 0, sizeof(gSols));
  return cuckoo_hash_init(a1);
}
