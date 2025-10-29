int __fastcall pic1704_get_an_voltage2(char a1, char a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  int v5; // s15
  char s[2048]; // [sp+28h] [bp+10h] BYREF
  _BYTE v8[4080]; // [sp+828h] [bp+810h] BYREF
  unsigned int v9; // [sp+1828h] [bp+1810h] BYREF
  unsigned int v10; // [sp+182Ch] [bp+1814h] BYREF
  int v11[2]; // [sp+1830h] [bp+1818h] BYREF
  double v12; // [sp+1838h] [bp+1820h]
  char v13; // [sp+1847h] [bp+182Fh]

  v11[0] = 0;
  v10 = 0;
  v9 = 0;
  result = pic1704_get_all_voltage(a1, v11, (int *)&v10, (int *)&v9);
  v13 = result;
  if ( (_BYTE)result )
  {
    strcpy(s, "Received an voltage response.");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
      87,
      "pic1704_get_an_voltage2",
      23,
      442,
      20,
      v8);
    snprintf(
      s,
      0x800u,
      "an0 = %f, an2 %f, an6 %f.",
      (double)(unsigned int)v11[0] * 3.3 / 1024.0,
      (double)v10 * 3.3 / 1024.0,
      (double)v9 * 3.3 / 1024.0);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
      87,
      "pic1704_get_an_voltage2",
      23,
      443,
      20,
      v8);
    if ( a2 )
    {
      v12 = (double)v9 * 3.3 / 1024.0;
      if ( v2 <= v12 && v3 >= v12 )
      {
        *(float *)&v5 = v12 / 2.5;
        v11[1] = v5;
        return sub_E3770(v10);
      }
      else
      {
        strcpy(s, "Ref an vol too high or too low.");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, s);
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/home/xingfeiwang/work/share-d/code/1489/godminer/backend/device/hal/drv_pic/pic_1704.c",
                 87,
                 "pic1704_get_an_voltage2",
                 23,
                 449,
                 20,
                 v8);
      }
    }
    else
    {
      return sub_E3770(v10);
    }
  }
  return result;
}
