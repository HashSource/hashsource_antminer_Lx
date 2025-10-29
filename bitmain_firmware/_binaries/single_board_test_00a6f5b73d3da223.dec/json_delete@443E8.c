void __cdecl json_delete(json_t *json)
{
  if ( json )
  {
    switch ( *(_DWORD *)json )
    {
      case 0:
        json_delete_object(json);
        break;
      case 1:
        sub_436CC((int)json);
        break;
      case 2:
        json_delete_string(json);
        break;
      case 3:
        sub_44170(json);
        break;
      case 4:
        sub_442C4(json);
        break;
      default:
        return;
    }
  }
}
