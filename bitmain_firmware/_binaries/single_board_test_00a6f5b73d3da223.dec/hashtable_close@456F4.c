void __cdecl hashtable_close(hashtable_t *hashtable)
{
  sub_45544((int)hashtable);
  jsonp_free(*((void **)hashtable + 1));
}
