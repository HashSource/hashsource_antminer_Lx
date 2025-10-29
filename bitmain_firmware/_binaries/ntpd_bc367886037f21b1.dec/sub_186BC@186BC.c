void (__fastcall *__fastcall sub_186BC(
        void (__fastcall *result)(int, unsigned __int16 **),
        int a2))(int, unsigned __int16 **)
{
  if ( !disable_dynamic_updates )
  {
    result = (void (__fastcall *)(int, unsigned __int16 **))sub_17774(result, a2);
    if ( result )
      return (void (__fastcall *)(int, unsigned __int16 **))sub_6E0D8();
  }
  return result;
}
