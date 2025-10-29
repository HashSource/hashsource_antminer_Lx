int __fastcall read_temperature(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int *v9; // r4
  void (*v13)(void); // r2
  int v14; // r0
  int v15; // r7
  int v16; // r1
  int v17; // r2
  int v18; // r3
  char *v19; // lr
  char *v20; // r10
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char *v24; // r5
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r2
  int v39; // r3
  char *v40; // lr
  char *v41; // r9
  int v42; // r1
  int v43; // r2
  int v44; // r3
  char *v45; // r5
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r3
  void (__fastcall *v58)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r12
  int v59; // r9
  _DWORD *v60; // r8
  int v61; // r3
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r3
  int v67; // r2
  int v68; // r2
  int result; // r0
  char v70; // [sp+20h] [bp-123Ch] BYREF
  char v71; // [sp+40h] [bp-121Ch] BYREF
  char v72; // [sp+60h] [bp-11FCh] BYREF
  char *v73; // [sp+80h] [bp-11DCh]
  const char *v74; // [sp+84h] [bp-11D8h]
  int *v75; // [sp+88h] [bp-11D4h]
  char *v76; // [sp+8Ch] [bp-11D0h]
  char *v77; // [sp+90h] [bp-11CCh]
  char *v78; // [sp+94h] [bp-11C8h]
  char *v79; // [sp+98h] [bp-11C4h]
  char *v80; // [sp+9Ch] [bp-11C0h]
  char *v81; // [sp+A0h] [bp-11BCh]
  char *s; // [sp+A4h] [bp-11B8h]
  const char *v83; // [sp+A8h] [bp-11B4h]
  _DWORD *v84; // [sp+ACh] [bp-11B0h]
  int *v85; // [sp+B0h] [bp-11ACh]
  int *v86; // [sp+B4h] [bp-11A8h]
  int v87; // [sp+B8h] [bp-11A4h]
  _DWORD *v88; // [sp+BCh] [bp-11A0h]
  _DWORD *v89; // [sp+C0h] [bp-119Ch]
  int v90; // [sp+C4h] [bp-1198h]
  int v91; // [sp+C8h] [bp-1194h] BYREF
  int v92; // [sp+CCh] [bp-1190h] BYREF
  int v93; // [sp+D0h] [bp-118Ch] BYREF
  int v94; // [sp+D4h] [bp-1188h] BYREF
  _DWORD v95[7]; // [sp+D8h] [bp-1184h] BYREF
  int v96; // [sp+F4h] [bp-1168h]
  _DWORD v97[8]; // [sp+F8h] [bp-1164h] BYREF
  int v98; // [sp+118h] [bp-1144h] BYREF
  int v99; // [sp+11Ch] [bp-1140h]
  int v100; // [sp+120h] [bp-113Ch]
  int v101; // [sp+124h] [bp-1138h]
  int v102; // [sp+128h] [bp-1134h]
  int v103; // [sp+12Ch] [bp-1130h]
  int v104; // [sp+130h] [bp-112Ch]
  int v105; // [sp+134h] [bp-1128h]
  int v106; // [sp+138h] [bp-1124h] BYREF
  int v107; // [sp+13Ch] [bp-1120h]
  int v108; // [sp+140h] [bp-111Ch]
  int v109; // [sp+144h] [bp-1118h]
  int v110; // [sp+148h] [bp-1114h]
  int v111; // [sp+14Ch] [bp-1110h]
  int v112; // [sp+150h] [bp-110Ch]
  int v113; // [sp+154h] [bp-1108h]
  _DWORD v114[7]; // [sp+158h] [bp-1104h] BYREF
  int v115; // [sp+174h] [bp-10E8h]
  _DWORD v116[8]; // [sp+178h] [bp-10E4h] BYREF
  int v117; // [sp+198h] [bp-10C4h] BYREF
  int v118; // [sp+19Ch] [bp-10C0h]
  int v119; // [sp+1A0h] [bp-10BCh]
  int v120; // [sp+1A4h] [bp-10B8h]
  int v121; // [sp+1A8h] [bp-10B4h]
  int v122; // [sp+1ACh] [bp-10B0h]
  int v123; // [sp+1B0h] [bp-10ACh]
  int v124; // [sp+1B4h] [bp-10A8h]
  int v125; // [sp+1B8h] [bp-10A4h] BYREF
  int v126; // [sp+1BCh] [bp-10A0h]
  int v127; // [sp+1C0h] [bp-109Ch]
  int v128; // [sp+1C4h] [bp-1098h]
  int v129; // [sp+1C8h] [bp-1094h]
  int v130; // [sp+1CCh] [bp-1090h]
  int v131; // [sp+1D0h] [bp-108Ch]
  int v132; // [sp+1D4h] [bp-1088h]
  _DWORD v133[8]; // [sp+1D8h] [bp-1084h] BYREF
  _DWORD v134[8]; // [sp+1F8h] [bp-1064h] BYREF
  _DWORD v135[8]; // [sp+218h] [bp-1044h] BYREF
  _DWORD v136[8]; // [sp+238h] [bp-1024h] BYREF
  char v137[4100]; // [sp+258h] [bp-1004h] BYREF

  v9 = *(int **)(a1 + 212);
  v88 = a3;
  v13 = *(void (**)(void))(a1 + 96);
  v84 = a2;
  v89 = a4;
  v75 = v9;
  v13();
  *a3 = -150;
  *a4 = 150;
  *a5 = -150;
  *a6 = 150;
  v14 = v9[1];
  if ( v14 > 0 )
  {
    v77 = "%s";
    v79 = &v72;
    v15 = 0;
    v78 = &v71;
    v83 = "/workspace/jenkins/jenkins/workspace/Antminer_L7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c";
    v90 = 0;
    v87 = 0;
    v85 = &g_zc;
    v86 = &g_temp_zc;
    v80 = "chain";
    v81 = "sensor";
    s = "pcbtemp";
    v76 = &v70;
    do
    {
      v58 = *(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 100);
      v59 = *v75;
      v93 = 0;
      v60 = (_DWORD *)(v59 + 20 * v15);
      v58(a1, &v91, &v93, *v60, v60[1], v60[2], v60[3], v60[4]);
      if ( v93 )
      {
        v61 = v91;
        if ( v91 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a7;
          if ( v61 > *v88 )
            *v88 = v61;
          if ( v61 < *v89 )
            *v89 = v61;
        }
      }
      v62 = v60[1];
      v63 = v60[2];
      v64 = v60[3];
      v65 = v60[4];
      v94 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int))(a1 + 104))(
        a1,
        &v92,
        &v94,
        *(_DWORD *)(v59 + 20 * v15),
        v62,
        v63,
        v64,
        v65);
      v66 = v94;
      if ( v94 )
      {
        v67 = v92;
        if ( v92 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a8;
          if ( v67 > *a5 )
            *a5 = v67;
          if ( v67 < *a6 )
            *a6 = v67;
        }
      }
      if ( v84 )
      {
        v68 = v60[2];
        if ( v68 )
        {
          if ( v68 == 1 )
          {
            if ( v93 && v91 != -64 )
            {
              *(_DWORD *)(v84[2] + 4 * v90) = v91;
              v66 = v94;
            }
            if ( v66 && v92 != -64 )
              *(_DWORD *)(v84[3] + 4 * v90) = v92;
            ++v90;
          }
        }
        else
        {
          if ( v93 && v91 != -64 )
          {
            *(_DWORD *)(*v84 + 4 * v87) = v91;
            v66 = v94;
          }
          if ( v66 && v92 != -64 )
            *(_DWORD *)(v84[1] + 4 * v87) = v92;
          ++v87;
        }
      }
      V_LOCK();
      V_INT((int)v95, v80, *(int *)(a1 + 140));
      V_INT((int)v97, v81, (int)v60[4]);
      if ( v93 )
      {
        V_INT((int)&v98, s, v91);
        if ( !v94 )
          goto LABEL_33;
      }
      else
      {
        V_INT((int)v133, s, -256);
        v98 = v133[0];
        v99 = v133[1];
        v100 = v133[2];
        v101 = v133[3];
        v102 = v133[4];
        v103 = v133[5];
        v104 = v133[6];
        v105 = v133[7];
        if ( !v94 )
        {
LABEL_33:
          V_INT((int)v134, "chiptemp", -256);
          v106 = v134[0];
          v107 = v134[1];
          v108 = v134[2];
          v109 = v134[3];
          v110 = v134[4];
          v111 = v134[5];
          v112 = v134[6];
          v113 = v134[7];
          goto LABEL_5;
        }
      }
      V_INT((int)&v106, "chiptemp", v92);
LABEL_5:
      v16 = v107;
      v17 = v108;
      v18 = v109;
      v19 = v79;
      v73 = v77;
      v74 = "read_temperature";
      *(_DWORD *)v79 = v106;
      *((_DWORD *)v19 + 1) = v16;
      *((_DWORD *)v19 + 2) = v17;
      *((_DWORD *)v19 + 3) = v18;
      v19 += 16;
      v20 = v78;
      v21 = v111;
      v22 = v112;
      v23 = v113;
      v24 = v76;
      *(_DWORD *)v19 = v110;
      *((_DWORD *)v19 + 1) = v21;
      *((_DWORD *)v19 + 2) = v22;
      *((_DWORD *)v19 + 3) = v23;
      v25 = v99;
      v26 = v100;
      v27 = v101;
      *(_DWORD *)v20 = v98;
      *((_DWORD *)v20 + 1) = v25;
      *((_DWORD *)v20 + 2) = v26;
      *((_DWORD *)v20 + 3) = v27;
      v20 += 16;
      v28 = v103;
      v29 = v104;
      v30 = v105;
      *(_DWORD *)v20 = v102;
      *((_DWORD *)v20 + 1) = v28;
      *((_DWORD *)v20 + 2) = v29;
      *((_DWORD *)v20 + 3) = v30;
      v31 = v97[1];
      v32 = v97[2];
      v33 = v97[3];
      *(_DWORD *)v24 = v97[0];
      *((_DWORD *)v24 + 1) = v31;
      *((_DWORD *)v24 + 2) = v32;
      *((_DWORD *)v24 + 3) = v33;
      v24 += 16;
      v34 = v97[5];
      v35 = v97[6];
      v36 = v97[7];
      *(_DWORD *)v24 = v97[4];
      *((_DWORD *)v24 + 1) = v34;
      *((_DWORD *)v24 + 2) = v35;
      *((_DWORD *)v24 + 3) = v36;
      logfmt_raw(v137, 0x1000u, 0, v96, v95[0], v95[1], v95[2], v95[3], v95[4], v95[5], v95[6], v96);
      V_UNLOCK();
      zlog(*v85, v83, 186, "read_temperature", 16, 80, 20, v137);
      V_LOCK();
      V_INT((int)v114, v80, *(int *)(a1 + 140));
      V_INT((int)v116, v81, (int)v60[4]);
      if ( v93 )
      {
        V_INT((int)&v117, s, v91);
      }
      else
      {
        V_INT((int)v135, s, -256);
        v117 = v135[0];
        v118 = v135[1];
        v119 = v135[2];
        v120 = v135[3];
        v121 = v135[4];
        v122 = v135[5];
        v123 = v135[6];
        v124 = v135[7];
      }
      if ( v94 )
      {
        V_INT((int)&v125, "chiptemp", v92);
      }
      else
      {
        V_INT((int)v136, "chiptemp", -256);
        v125 = v136[0];
        v126 = v136[1];
        v127 = v136[2];
        v128 = v136[3];
        v129 = v136[4];
        v130 = v136[5];
        v131 = v136[6];
        v132 = v136[7];
      }
      v37 = v126;
      v38 = v127;
      v39 = v128;
      ++v15;
      v40 = v79;
      v73 = v77;
      v74 = "read_temperature";
      *(_DWORD *)v79 = v125;
      *((_DWORD *)v40 + 1) = v37;
      *((_DWORD *)v40 + 2) = v38;
      *((_DWORD *)v40 + 3) = v39;
      v40 += 16;
      v41 = v78;
      v42 = v130;
      v43 = v131;
      v44 = v132;
      v45 = v76;
      *(_DWORD *)v40 = v129;
      *((_DWORD *)v40 + 1) = v42;
      *((_DWORD *)v40 + 2) = v43;
      *((_DWORD *)v40 + 3) = v44;
      v46 = v118;
      v47 = v119;
      v48 = v120;
      *(_DWORD *)v41 = v117;
      *((_DWORD *)v41 + 1) = v46;
      *((_DWORD *)v41 + 2) = v47;
      *((_DWORD *)v41 + 3) = v48;
      v41 += 16;
      v49 = v122;
      v50 = v123;
      v51 = v124;
      *(_DWORD *)v41 = v121;
      *((_DWORD *)v41 + 1) = v49;
      *((_DWORD *)v41 + 2) = v50;
      *((_DWORD *)v41 + 3) = v51;
      v52 = v116[1];
      v53 = v116[2];
      v54 = v116[3];
      *(_DWORD *)v45 = v116[0];
      *((_DWORD *)v45 + 1) = v52;
      *((_DWORD *)v45 + 2) = v53;
      *((_DWORD *)v45 + 3) = v54;
      v45 += 16;
      v55 = v116[5];
      v56 = v116[6];
      v57 = v116[7];
      *(_DWORD *)v45 = v116[4];
      *((_DWORD *)v45 + 1) = v55;
      *((_DWORD *)v45 + 2) = v56;
      *((_DWORD *)v45 + 3) = v57;
      logfmt_raw(v137, 0x1000u, 0, v115, v114[0], v114[1], v114[2], v114[3], v114[4], v114[5], v114[6], v115);
      V_UNLOCK();
      zlog(*v86, v83, 186, "read_temperature", 16, 82, 40, v137);
      v14 = v75[1];
    }
    while ( v14 > v15 );
  }
  if ( *a7 != v14 )
    return -1;
  result = *a8 - v14;
  if ( result )
    return -1;
  return result;
}
