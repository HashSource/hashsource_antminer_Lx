void __fastcall sub_17108(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
