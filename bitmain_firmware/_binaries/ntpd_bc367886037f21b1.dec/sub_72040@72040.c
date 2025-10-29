void __fastcall sub_72040(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
