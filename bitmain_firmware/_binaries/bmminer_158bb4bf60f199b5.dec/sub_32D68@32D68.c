int __fastcall sub_32D68(int a1)
{
  int v1; // r9
  int v2; // r7
  int v3; // r11
  int v4; // r9
  _DWORD *v5; // r10
  int *v6; // r4
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int *v10; // lr
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r0
  int v15; // r6
  int v16; // r1
  int v17; // r9
  int v18; // r2
  _DWORD *v19; // r12
  int v20; // r1
  int v21; // r2
  int v22; // r3
  _DWORD *v23; // r7
  _DWORD *v24; // lr
  _DWORD *v25; // lr
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD *v29; // lr
  int v30; // r1
  int v31; // r2
  int v32; // r3
  bool v33; // zf
  unsigned int v34; // r4
  int v35; // r5
  unsigned int v36; // r3
  int v37; // r1
  _DWORD *v39; // r3
  int v40; // r1
  int v41; // lr
  int v42; // r0
  _DWORD *v43; // r2
  int v44; // r0
  int v45; // r1
  int v46; // lr
  int v47; // r0
  int v48; // r0
  int v49; // r1
  int v50; // r3
  int v51[33]; // [sp+0h] [bp-9A4h] BYREF
  int *v52; // [sp+88h] [bp-91Ch]
  _DWORD *v53; // [sp+8Ch] [bp-918h]
  int v54; // [sp+90h] [bp-914h]
  unsigned int v55; // [sp+94h] [bp-910h]
  _DWORD *v56; // [sp+98h] [bp-90Ch]
  int v57; // [sp+9Ch] [bp-908h]
  int v58; // [sp+A0h] [bp-904h]
  int v59; // [sp+A4h] [bp-900h]
  int v60; // [sp+A8h] [bp-8FCh]
  int v61; // [sp+ACh] [bp-8F8h]
  int v62; // [sp+B0h] [bp-8F4h]
  int v63; // [sp+B4h] [bp-8F0h]
  int v64; // [sp+B8h] [bp-8ECh]
  int v65; // [sp+BCh] [bp-8E8h]
  int *v66; // [sp+C0h] [bp-8E4h]
  void *v67; // [sp+C4h] [bp-8E0h]
  struct timeval v68; // [sp+C8h] [bp-8DCh] BYREF
  struct timeval v69; // [sp+D0h] [bp-8D4h] BYREF
  _BYTE v70[20]; // [sp+D8h] [bp-8CCh] BYREF
  int v71; // [sp+ECh] [bp-8B8h]
  int v72; // [sp+F0h] [bp-8B4h]
  int v73; // [sp+F4h] [bp-8B0h]
  int v74; // [sp+F8h] [bp-8ACh]
  int v75; // [sp+FCh] [bp-8A8h]
  int v76; // [sp+100h] [bp-8A4h]
  int v77; // [sp+104h] [bp-8A0h]
  int v78; // [sp+108h] [bp-89Ch] BYREF
  _BYTE v79[148]; // [sp+10Ch] [bp-898h] BYREF
  char s[2052]; // [sp+1A0h] [bp-804h] BYREF

  v65 = a1;
  v66 = &dword_9E31C;
  sub_4A60C(&v68);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
    if ( (unsigned int)*v66 > 3 )
    {
      snprintf(s, 0x800u, ">>>> Send work for chain %d.\n", v65);
      sub_47AB4(3, s, 0);
    }
  }
  v55 = 0;
  v64 = 0;
  v63 = 6656 * v65 + 3898820;
  v62 = (unsigned __int8)~((unsigned int)~(v65 << 25) >> 25);
  v1 = 1 << v65;
  v2 = 0;
  v67 = &unk_EDF22;
  do
  {
    v3 = v1;
    v4 = v2;
    v60 = 0;
    v61 = *(_DWORD *)(dword_1AEA68 + 4 * ((_DWORD)v67 + v64) + 4) + 20;
    do
    {
      v5 = (_DWORD *)v61;
      v59 = v60 & 3;
      v54 = 0;
      do
      {
        while ( (v3 & sub_6FF04()) == 0 )
        {
          ++v4;
          usleep(0x3E8u);
        }
        v6 = (int *)v70;
        v7 = v5 - 5;
        v53 = v5 - 5;
        do
        {
          v8 = *v7;
          v7 += 4;
          v9 = *(v7 - 3);
          v10 = v6;
          v11 = *(v7 - 2);
          v6 += 4;
          v12 = *(v7 - 1);
          *v10 = v8;
          v10[1] = v9;
          v10[2] = v11;
          v10[3] = v12;
        }
        while ( v7 != v5 + 7 );
        v13 = 0;
        *v6 = *v7;
        memset(&v79[2], 0, 0x92u);
        v14 = *(v5 - 3);
        v58 = v4;
        v15 = v63 + 52 * v55;
        v16 = *(v5 - 2);
        v17 = v59;
        v79[1] = v62;
        v18 = *(v5 - 1);
        LOBYTE(v71) = v71 + 1;
        *(_DWORD *)&v79[8] = v14;
        *(_DWORD *)&v79[12] = v16;
        *(_DWORD *)&v79[16] = v18;
        v52 = &v78;
        v57 = v3;
        *(_DWORD *)&v79[4] = v55 & 0x7F | v54;
        v56 = v53 + 12;
        v79[0] = 1;
        do
        {
          v19 = (_DWORD *)(dword_1AEA68 + v15);
          if ( v13 == v17 )
          {
            v39 = &v79[32 * v13 + 20];
            v40 = v5[1];
            v41 = v5[2];
            *v39 = *v5;
            v42 = v5[3];
            v43 = v53;
            v39[1] = v40;
            v39[3] = v42;
            v44 = v5[4];
            v39[2] = v41;
            v45 = v5[5];
            v46 = v5[6];
            v39[4] = v44;
            v47 = v5[7];
            v39[5] = v45;
            v39[6] = v46;
            v39[7] = v47;
            do
            {
              v43 += 4;
              v19 += 4;
              v48 = *(v43 - 3);
              v49 = *(v43 - 2);
              v50 = *(v43 - 1);
              v33 = v43 == v56;
              *(v19 - 4) = *(v43 - 4);
              *(v19 - 3) = v48;
              *(v19 - 2) = v49;
              *(v19 - 1) = v50;
            }
            while ( !v33 );
            *v19 = *v56;
          }
          else
          {
            v20 = v72;
            v21 = v73;
            v22 = v74;
            v23 = v70;
            v24 = &v79[32 * v13 + 20];
            *v24 = v71;
            v24[1] = v20;
            v24[2] = v21;
            v24[3] = v22;
            v25 = &v79[32 * v13 + 36];
            v26 = v76;
            v27 = v77;
            v28 = v78;
            *v25 = v75;
            v25[1] = v26;
            v25[2] = v27;
            v25[3] = v28;
            do
            {
              v29 = v23;
              v23 += 4;
              v19 += 4;
              v30 = v29[1];
              v31 = v29[2];
              v32 = v29[3];
              v33 = v29 + 4 == v52;
              *(v19 - 4) = *v29;
              *(v19 - 3) = v30;
              *(v19 - 2) = v31;
              *(v19 - 1) = v32;
            }
            while ( !v33 );
            *v19 = *v23;
          }
          ++v13;
          v15 += 52;
        }
        while ( v13 != 4 );
        v3 = v57;
        v5 += 13;
        v34 = v55 + 4;
        v4 = v58;
        memcpy(v51, &v79[16], sizeof(v51));
        v35 = v54 + 128;
        v54 += 128;
        sub_1B010(
          *(unsigned int *)v79,
          *(int *)&v79[4],
          *(int *)&v79[8],
          *(int *)&v79[12],
          v51[0],
          v51[1],
          v51[2],
          v51[3],
          v51[4],
          v51[5],
          v51[6],
          v51[7],
          v51[8],
          v51[9],
          v51[10],
          v51[11],
          v51[12],
          v51[13],
          v51[14],
          v51[15],
          v51[16],
          v51[17],
          v51[18],
          v51[19],
          v51[20],
          v51[21],
          v51[22],
          v51[23],
          v51[24],
          v51[25],
          v51[26],
          v51[27],
          v51[28]);
        if ( v34 >= 0x80 )
          v36 = 0;
        else
          v36 = v34;
        v55 = v36;
      }
      while ( v35 != 1024 );
      ++v60;
      v61 += 416;
    }
    while ( v60 != 383 );
    v2 = v4;
    v1 = v3;
    ++v64;
  }
  while ( v64 != 78 );
  sub_4A60C(&v69);
  v37 = v69.tv_sec - v68.tv_sec;
  if ( v69.tv_usec - v68.tv_usec < 0 )
    --v37;
  if ( (unsigned int)*v66 > 3 )
  {
    snprintf(s, 0x800u, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v65, v37, v2);
    sub_47AB4(3, s, 0);
  }
  return 0;
}
