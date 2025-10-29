int __fastcall set_total_hash_rate(int result)
{
  blake256_rounds = result;
  return result;
}
