int __fastcall sub_4F178(int result, int a2, int a3, int a4)
{
  int v5; // r8
  double *v6; // r5
  int v7; // r4
  int v8; // r3
  double v9; // r10
  unsigned int *v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  char v25[80]; // [sp+1Ch] [bp-58h] BYREF

  v5 = result;
  if ( !a4 )
    return sub_64A18(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  v6 = *(double **)(a4 + 84);
  if ( !v6 )
    return sub_64A18(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
    return sub_64A18(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  if ( a2 )
  {
    v8 = ntp_syslogmask & 0x100;
    if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      v9 = *(double *)(a2 + 40);
      v6[93] = v9;
      if ( !v8 )
        goto LABEL_7;
      result = sub_64A18(5, "NeoClock4X(%d): using fudgetime1 with %0.5fs from ntp.conf.", result, v9);
      v8 = ntp_syslogmask & 0x100;
    }
    if ( ((_BYTE)v6[96] & 1) != 0 )
    {
      if ( v8 )
        result = sub_64A18(
                   5,
                   "NeoClock4X(%d): quartz clock is used to synchronize time if radio clock has no reception.",
                   v5);
    }
    else if ( v8 )
    {
      result = sub_64A18(5, "NeoClock4X(%d): time is only adjusted with radio signal reception.", v5);
    }
  }
LABEL_7:
  if ( a3 )
  {
    *(_DWORD *)(a3 + 68) = 0;
    *(_BYTE *)a3 = 44;
    v10 = (unsigned int *)(a3 + 68);
    sub_6BCB0(
      v25,
      79,
      "%04d-%02d-%02d %02d:%02d:%02d.%03d",
      *(_DWORD *)(v7 + 128),
      *(_DWORD *)(v7 + 132),
      *(_DWORD *)(v7 + 136),
      *(_DWORD *)(v7 + 140),
      *(_DWORD *)(v7 + 144),
      *(_DWORD *)(v7 + 148),
      *(_DWORD *)(v7 + 152));
    v11 = sub_24158((unsigned int *)(a3 + 68), 79, 33);
    sub_6BCB0(v11, 79, "calc_utc=\"%s\"", v25);
    v12 = sub_24158((unsigned int *)(a3 + 68), 40, 33);
    sub_6BCB0(v12, 39, "radiosignal=\"%s\"", (const char *)(v7 + 112));
    v13 = sub_24158((unsigned int *)(a3 + 68), 40, 33);
    sub_6BCB0(v13, 39, "antenna1=\"%d\"", *(_DWORD *)(v7 + 120));
    v14 = sub_24158((unsigned int *)(a3 + 68), 40, 33);
    sub_6BCB0(v14, 39, "antenna2=\"%d\"", *(_DWORD *)(v7 + 124));
    v15 = sub_24158((unsigned int *)(a3 + 68), 40, 33);
    v16 = *(unsigned __int8 *)(v7 + 116);
    if ( v16 == 65 )
    {
      sub_6BCB0(v15, 39, "timesource=\"radio\"");
    }
    else if ( v16 == 67 )
    {
      sub_6BCB0(v15, 39, "timesource=\"quartz\"");
    }
    else
    {
      sub_6BCB0(v15, 39, "timesource=\"unknown\"");
    }
    v17 = sub_24158(v10, 40, 33);
    v18 = *(unsigned __int8 *)(v7 + 118);
    if ( v18 == 73 )
    {
      sub_6BCB0(v17, 39, "quartzstatus=\"synchronized\"");
    }
    else if ( v18 == 88 )
    {
      sub_6BCB0(v17, 39, "quartzstatus=\"not synchronized\"");
    }
    else
    {
      sub_6BCB0(v17, 39, "quartzstatus=\"unknown\"");
    }
    v19 = sub_24158(v10, 40, 33);
    v20 = *(unsigned __int8 *)(v7 + 117);
    if ( v20 == 83 )
    {
      sub_6BCB0(v19, 39, "dststatus=\"summer\"");
    }
    else if ( v20 == 87 )
    {
      sub_6BCB0(v19, 39, "dststatus=\"winter\"");
    }
    else
    {
      sub_6BCB0(v19, 39, "dststatus=\"unknown\"");
    }
    v21 = sub_24158(v10, 80, 33);
    sub_6BCB0(v21, 79, "firmware=\"%s\"", (const char *)(v7 + 24));
    v22 = sub_24158(v10, 40, 33);
    sub_6BCB0(v22, 39, "firmwaretag=\"%c\"", *(unsigned __int8 *)(v7 + 104));
    v23 = sub_24158(v10, 80, 33);
    sub_6BCB0(v23, 79, "driver version=\"%s\"", "1.16 (2009-12-04)");
    v24 = sub_24158(v10, 80, 33);
    return sub_6BCB0(v24, 79, "serialnumber=\"%s\"", (const char *)(v7 + 105));
  }
  return result;
}
