unsigned int __fastcall sub_189268(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // [sp+8h] [bp+8h]
  unsigned int v6; // [sp+Ch] [bp+Ch]
  unsigned int v7; // [sp+10h] [bp+10h]
  unsigned int v8; // [sp+14h] [bp+14h]
  unsigned int v9; // [sp+18h] [bp+18h]
  unsigned int v10; // [sp+1Ch] [bp+1Ch]
  unsigned int v11; // [sp+20h] [bp+20h]
  unsigned int v12; // [sp+24h] [bp+24h]
  unsigned int v13; // [sp+38h] [bp+38h]
  unsigned int v14; // [sp+3Ch] [bp+3Ch]
  unsigned int v15; // [sp+40h] [bp+40h]
  unsigned int v16; // [sp+44h] [bp+44h]
  unsigned int v17; // [sp+48h] [bp+48h]
  unsigned int v18; // [sp+4Ch] [bp+4Ch]
  unsigned int v19; // [sp+50h] [bp+50h]
  unsigned int v20; // [sp+54h] [bp+54h]
  int v21; // [sp+58h] [bp+58h]
  unsigned int v22; // [sp+60h] [bp+60h]
  unsigned int v23; // [sp+64h] [bp+64h]
  unsigned int v24; // [sp+68h] [bp+68h]
  unsigned int v25; // [sp+6Ch] [bp+6Ch]
  int v26; // [sp+7Ch] [bp+7Ch]
  unsigned int v27; // [sp+84h] [bp+84h]
  unsigned int v28; // [sp+88h] [bp+88h]
  unsigned int v29; // [sp+8Ch] [bp+8Ch]
  unsigned int v30; // [sp+90h] [bp+90h]
  unsigned int v31; // [sp+94h] [bp+94h]
  unsigned int v32; // [sp+98h] [bp+98h]
  unsigned int v33; // [sp+9Ch] [bp+9Ch]
  int v34; // [sp+A0h] [bp+A0h]
  unsigned int v35; // [sp+A8h] [bp+A8h]
  unsigned int v36; // [sp+ACh] [bp+ACh]
  unsigned int v37; // [sp+B0h] [bp+B0h]
  unsigned int v38; // [sp+B4h] [bp+B4h]
  unsigned int v39; // [sp+B8h] [bp+B8h]
  unsigned int v40; // [sp+BCh] [bp+BCh]
  unsigned int v41; // [sp+C0h] [bp+C0h]
  int v42; // [sp+C4h] [bp+C4h]
  unsigned int v43; // [sp+CCh] [bp+CCh]
  unsigned int v44; // [sp+D0h] [bp+D0h]
  unsigned int v45; // [sp+D4h] [bp+D4h]
  unsigned int v46; // [sp+E8h] [bp+E8h]
  unsigned int v47; // [sp+ECh] [bp+ECh]
  unsigned int v48; // [sp+F0h] [bp+F0h]
  unsigned int v49; // [sp+F4h] [bp+F4h]
  unsigned int v50; // [sp+F8h] [bp+F8h]
  unsigned int v51; // [sp+FCh] [bp+FCh]
  unsigned int v52; // [sp+100h] [bp+100h]
  unsigned int v53; // [sp+104h] [bp+104h]
  unsigned int v54; // [sp+118h] [bp+118h]
  unsigned int v55; // [sp+11Ch] [bp+11Ch]
  unsigned int v56; // [sp+120h] [bp+120h]
  unsigned int v57; // [sp+124h] [bp+124h]
  int v58; // [sp+128h] [bp+128h]
  unsigned int v59; // [sp+130h] [bp+130h]
  unsigned int v60; // [sp+134h] [bp+134h]
  unsigned int v61; // [sp+138h] [bp+138h]
  unsigned int v62; // [sp+13Ch] [bp+13Ch]
  unsigned int v63; // [sp+140h] [bp+140h]
  unsigned int v64; // [sp+144h] [bp+144h]
  unsigned int v65; // [sp+148h] [bp+148h]
  int v66; // [sp+14Ch] [bp+14Ch]
  unsigned int v67; // [sp+154h] [bp+154h]
  unsigned int v68; // [sp+158h] [bp+158h]
  unsigned int v69; // [sp+15Ch] [bp+15Ch]
  int v70; // [sp+170h] [bp+170h]
  unsigned int v71; // [sp+178h] [bp+178h]
  unsigned int v72; // [sp+17Ch] [bp+17Ch]
  unsigned int v73; // [sp+180h] [bp+180h]
  unsigned int v74; // [sp+184h] [bp+184h]
  unsigned int v75; // [sp+188h] [bp+188h]
  unsigned int v76; // [sp+18Ch] [bp+18Ch]
  unsigned int v77; // [sp+190h] [bp+190h]
  int v78; // [sp+194h] [bp+194h]
  unsigned int v79; // [sp+19Ch] [bp+19Ch]
  unsigned int v80; // [sp+1A0h] [bp+1A0h]
  unsigned int v81; // [sp+1A4h] [bp+1A4h]
  unsigned int v82; // [sp+1A8h] [bp+1A8h]
  unsigned int v83; // [sp+1ACh] [bp+1ACh]
  unsigned int v84; // [sp+1B0h] [bp+1B0h]
  unsigned int v85; // [sp+1B4h] [bp+1B4h]
  unsigned int v86; // [sp+1C8h] [bp+1C8h]
  unsigned int v87; // [sp+1CCh] [bp+1CCh]
  unsigned int v88; // [sp+1D0h] [bp+1D0h]
  unsigned int v89; // [sp+1D4h] [bp+1D4h]
  unsigned int v90; // [sp+1D8h] [bp+1D8h]
  unsigned int v91; // [sp+1DCh] [bp+1DCh]
  unsigned int v92; // [sp+1E0h] [bp+1E0h]
  unsigned int v93; // [sp+1E4h] [bp+1E4h]
  int v94; // [sp+1F8h] [bp+1F8h]
  unsigned int v95; // [sp+200h] [bp+200h]
  unsigned int v96; // [sp+204h] [bp+204h]
  unsigned int v97; // [sp+208h] [bp+208h]
  unsigned int v98; // [sp+20Ch] [bp+20Ch]
  unsigned int v99; // [sp+210h] [bp+210h]
  unsigned int v100; // [sp+214h] [bp+214h]
  unsigned int v101; // [sp+218h] [bp+218h]
  int v102; // [sp+21Ch] [bp+21Ch]
  unsigned int v103; // [sp+224h] [bp+224h]
  unsigned int v104; // [sp+228h] [bp+228h]
  unsigned int v105; // [sp+22Ch] [bp+22Ch]
  unsigned int v106; // [sp+230h] [bp+230h]
  unsigned int v107; // [sp+234h] [bp+234h]
  unsigned int v108; // [sp+238h] [bp+238h]
  unsigned int v109; // [sp+23Ch] [bp+23Ch]
  int v110; // [sp+240h] [bp+240h]
  unsigned int v111; // [sp+248h] [bp+248h]
  unsigned int v112; // [sp+24Ch] [bp+24Ch]
  unsigned int v113; // [sp+250h] [bp+250h]
  unsigned int v114; // [sp+254h] [bp+254h]
  int v115; // [sp+264h] [bp+264h]
  unsigned int v116; // [sp+26Ch] [bp+26Ch]
  unsigned int v117; // [sp+270h] [bp+270h]
  unsigned int v118; // [sp+274h] [bp+274h]
  unsigned int v119; // [sp+278h] [bp+278h]
  unsigned int v120; // [sp+27Ch] [bp+27Ch]
  unsigned int v121; // [sp+280h] [bp+280h]
  unsigned int v122; // [sp+284h] [bp+284h]
  unsigned int v123; // [sp+288h] [bp+288h]
  unsigned int v124; // [sp+28Ch] [bp+28Ch]
  unsigned int v125; // [sp+290h] [bp+290h]
  unsigned int v126; // [sp+294h] [bp+294h]
  unsigned int v127; // [sp+2A8h] [bp+2A8h]
  unsigned int v128; // [sp+2ACh] [bp+2ACh]
  unsigned int v129; // [sp+2B0h] [bp+2B0h]
  unsigned int v130; // [sp+2B4h] [bp+2B4h]
  unsigned int v131; // [sp+2B8h] [bp+2B8h]
  unsigned int v132; // [sp+2BCh] [bp+2BCh]
  unsigned int v133; // [sp+2C0h] [bp+2C0h]
  unsigned int v134; // [sp+2C4h] [bp+2C4h]
  int v135; // [sp+2C8h] [bp+2C8h]
  unsigned int v136; // [sp+2D4h] [bp+2D4h]
  unsigned int v137; // [sp+2D8h] [bp+2D8h]
  unsigned int v138; // [sp+2DCh] [bp+2DCh]
  int v139; // [sp+2ECh] [bp+2ECh]
  unsigned int v140; // [sp+2F4h] [bp+2F4h]
  unsigned int v141; // [sp+2F8h] [bp+2F8h]
  unsigned int v142; // [sp+2FCh] [bp+2FCh]
  unsigned int v143; // [sp+300h] [bp+300h]
  unsigned int v144; // [sp+304h] [bp+304h]
  unsigned int v145; // [sp+308h] [bp+308h]
  int v146; // [sp+310h] [bp+310h]
  unsigned int v147; // [sp+318h] [bp+318h]
  unsigned int v148; // [sp+31Ch] [bp+31Ch]
  unsigned int v149; // [sp+320h] [bp+320h]
  unsigned int v150; // [sp+324h] [bp+324h]
  unsigned int v151; // [sp+328h] [bp+328h]
  unsigned int v152; // [sp+330h] [bp+330h]
  int v153; // [sp+334h] [bp+334h]
  unsigned int v154; // [sp+33Ch] [bp+33Ch]
  unsigned int v155; // [sp+340h] [bp+340h]
  unsigned int v156; // [sp+344h] [bp+344h]
  int v157; // [sp+358h] [bp+358h]
  int v158; // [sp+358h] [bp+358h]
  int v159; // [sp+358h] [bp+358h]
  int v160; // [sp+358h] [bp+358h]
  int v161; // [sp+358h] [bp+358h]
  int v162; // [sp+358h] [bp+358h]
  int v163; // [sp+358h] [bp+358h]
  int v164; // [sp+358h] [bp+358h]
  int v165; // [sp+358h] [bp+358h]
  int v166; // [sp+358h] [bp+358h]
  int v167; // [sp+358h] [bp+358h]
  int v168; // [sp+35Ch] [bp+35Ch]
  int v169; // [sp+35Ch] [bp+35Ch]
  int v170; // [sp+35Ch] [bp+35Ch]
  int v171; // [sp+35Ch] [bp+35Ch]
  int v172; // [sp+35Ch] [bp+35Ch]
  int v173; // [sp+35Ch] [bp+35Ch]
  int v174; // [sp+35Ch] [bp+35Ch]
  int v175; // [sp+35Ch] [bp+35Ch]
  int v176; // [sp+35Ch] [bp+35Ch]
  int v177; // [sp+35Ch] [bp+35Ch]
  int v178; // [sp+35Ch] [bp+35Ch]
  int v179; // [sp+35Ch] [bp+35Ch]
  int v180; // [sp+360h] [bp+360h]
  int v181; // [sp+360h] [bp+360h]
  int v182; // [sp+360h] [bp+360h]
  int v183; // [sp+360h] [bp+360h]
  int v184; // [sp+360h] [bp+360h]
  int v185; // [sp+360h] [bp+360h]
  int v186; // [sp+360h] [bp+360h]
  int v187; // [sp+360h] [bp+360h]
  int v188; // [sp+360h] [bp+360h]
  int v189; // [sp+360h] [bp+360h]
  int v190; // [sp+360h] [bp+360h]
  int v191; // [sp+360h] [bp+360h]
  unsigned int v192; // [sp+364h] [bp+364h]
  int v193; // [sp+364h] [bp+364h]
  unsigned int v194; // [sp+364h] [bp+364h]
  int v195; // [sp+364h] [bp+364h]
  unsigned int v196; // [sp+364h] [bp+364h]
  int v197; // [sp+364h] [bp+364h]
  unsigned int v198; // [sp+364h] [bp+364h]
  int v199; // [sp+364h] [bp+364h]
  int v200; // [sp+364h] [bp+364h]
  int v201; // [sp+378h] [bp+378h]
  int v202; // [sp+378h] [bp+378h]
  int v203; // [sp+378h] [bp+378h]
  int v204; // [sp+378h] [bp+378h]
  int v205; // [sp+378h] [bp+378h]
  int v206; // [sp+378h] [bp+378h]
  int v207; // [sp+378h] [bp+378h]
  int v208; // [sp+378h] [bp+378h]
  int v209; // [sp+378h] [bp+378h]
  int v210; // [sp+378h] [bp+378h]
  int v211; // [sp+378h] [bp+378h]
  int v212; // [sp+378h] [bp+378h]
  int v213; // [sp+378h] [bp+378h]
  int v214; // [sp+37Ch] [bp+37Ch]
  int v215; // [sp+37Ch] [bp+37Ch]
  int v216; // [sp+37Ch] [bp+37Ch]
  int v217; // [sp+37Ch] [bp+37Ch]
  int v218; // [sp+37Ch] [bp+37Ch]
  int v219; // [sp+37Ch] [bp+37Ch]
  int v220; // [sp+37Ch] [bp+37Ch]
  int v221; // [sp+37Ch] [bp+37Ch]
  int v222; // [sp+37Ch] [bp+37Ch]
  int v223; // [sp+37Ch] [bp+37Ch]
  int v224; // [sp+37Ch] [bp+37Ch]
  int v225; // [sp+37Ch] [bp+37Ch]
  int v226; // [sp+37Ch] [bp+37Ch]
  int v227; // [sp+380h] [bp+380h]
  int v228; // [sp+380h] [bp+380h]
  int v229; // [sp+380h] [bp+380h]
  int v230; // [sp+380h] [bp+380h]
  int v231; // [sp+380h] [bp+380h]
  int v232; // [sp+380h] [bp+380h]
  int v233; // [sp+380h] [bp+380h]
  int v234; // [sp+380h] [bp+380h]
  int v235; // [sp+380h] [bp+380h]
  int v236; // [sp+380h] [bp+380h]
  int v237; // [sp+380h] [bp+380h]
  int v238; // [sp+380h] [bp+380h]
  int v239; // [sp+380h] [bp+380h]
  unsigned int v240; // [sp+384h] [bp+384h]
  int v241; // [sp+384h] [bp+384h]
  unsigned int v242; // [sp+384h] [bp+384h]
  int v243; // [sp+384h] [bp+384h]
  unsigned int v244; // [sp+384h] [bp+384h]
  int v245; // [sp+384h] [bp+384h]
  unsigned int v246; // [sp+384h] [bp+384h]
  int v247; // [sp+384h] [bp+384h]
  int v248; // [sp+384h] [bp+384h]
  unsigned int v249; // [sp+38Ch] [bp+38Ch]
  unsigned int v250; // [sp+390h] [bp+390h]
  unsigned int v251; // [sp+394h] [bp+394h]
  int v252; // [sp+398h] [bp+398h]
  int v253; // [sp+398h] [bp+398h]
  unsigned int v254; // [sp+398h] [bp+398h]
  int v255; // [sp+398h] [bp+398h]
  int v256; // [sp+398h] [bp+398h]
  int v257; // [sp+398h] [bp+398h]
  int v258; // [sp+398h] [bp+398h]
  int v259; // [sp+398h] [bp+398h]
  int v260; // [sp+398h] [bp+398h]
  int v261; // [sp+398h] [bp+398h]
  int v262; // [sp+398h] [bp+398h]
  int v263; // [sp+398h] [bp+398h]
  int v264; // [sp+398h] [bp+398h]
  int v265; // [sp+39Ch] [bp+39Ch]
  int v266; // [sp+39Ch] [bp+39Ch]
  int v267; // [sp+39Ch] [bp+39Ch]
  int v268; // [sp+39Ch] [bp+39Ch]
  int v269; // [sp+39Ch] [bp+39Ch]
  int v270; // [sp+39Ch] [bp+39Ch]
  int v271; // [sp+39Ch] [bp+39Ch]
  int v272; // [sp+39Ch] [bp+39Ch]
  int v273; // [sp+39Ch] [bp+39Ch]
  int v274; // [sp+39Ch] [bp+39Ch]
  int v275; // [sp+39Ch] [bp+39Ch]
  int v276; // [sp+39Ch] [bp+39Ch]
  int v277; // [sp+39Ch] [bp+39Ch]
  int v278; // [sp+3A0h] [bp+3A0h]
  int v279; // [sp+3A0h] [bp+3A0h]
  int v280; // [sp+3A0h] [bp+3A0h]
  int v281; // [sp+3A0h] [bp+3A0h]
  int v282; // [sp+3A0h] [bp+3A0h]
  int v283; // [sp+3A0h] [bp+3A0h]
  int v284; // [sp+3A0h] [bp+3A0h]
  int v285; // [sp+3A0h] [bp+3A0h]
  int v286; // [sp+3A0h] [bp+3A0h]
  int v287; // [sp+3A0h] [bp+3A0h]
  int v288; // [sp+3A0h] [bp+3A0h]
  int v289; // [sp+3A0h] [bp+3A0h]
  int v290; // [sp+3A0h] [bp+3A0h]
  unsigned int v291; // [sp+3A4h] [bp+3A4h]
  int v292; // [sp+3A4h] [bp+3A4h]
  unsigned int v293; // [sp+3A4h] [bp+3A4h]
  int v294; // [sp+3A4h] [bp+3A4h]
  unsigned int v295; // [sp+3A4h] [bp+3A4h]
  int v296; // [sp+3A4h] [bp+3A4h]
  unsigned int v297; // [sp+3A4h] [bp+3A4h]
  int v298; // [sp+3A4h] [bp+3A4h]
  int v299; // [sp+3A4h] [bp+3A4h]
  int v300; // [sp+3B8h] [bp+3B8h]
  int v301; // [sp+3B8h] [bp+3B8h]
  int v302; // [sp+3BCh] [bp+3BCh]
  int v303; // [sp+3BCh] [bp+3BCh]
  unsigned int v304; // [sp+3BCh] [bp+3BCh]
  int v305; // [sp+3BCh] [bp+3BCh]
  int v306; // [sp+3BCh] [bp+3BCh]
  int v307; // [sp+3BCh] [bp+3BCh]
  int v308; // [sp+3BCh] [bp+3BCh]
  int v309; // [sp+3BCh] [bp+3BCh]
  int v310; // [sp+3BCh] [bp+3BCh]
  int v311; // [sp+3BCh] [bp+3BCh]
  int v312; // [sp+3BCh] [bp+3BCh]
  int v313; // [sp+3BCh] [bp+3BCh]
  int v314; // [sp+3C0h] [bp+3C0h]
  int v315; // [sp+3C0h] [bp+3C0h]
  unsigned int v316; // [sp+3C0h] [bp+3C0h]
  int v317; // [sp+3C4h] [bp+3C4h]
  int v318; // [sp+3C4h] [bp+3C4h]
  int v319; // [sp+3C4h] [bp+3C4h]
  int v320; // [sp+3C4h] [bp+3C4h]
  int v321; // [sp+3C4h] [bp+3C4h]
  int v322; // [sp+3C4h] [bp+3C4h]
  int v323; // [sp+3C4h] [bp+3C4h]
  int v324; // [sp+3C4h] [bp+3C4h]
  int v325; // [sp+3C4h] [bp+3C4h]
  int v326; // [sp+3C4h] [bp+3C4h]
  int v327; // [sp+3C4h] [bp+3C4h]
  int v328; // [sp+3C4h] [bp+3C4h]
  int v329; // [sp+3C4h] [bp+3C4h]
  int v330; // [sp+3C8h] [bp+3C8h]
  int v331; // [sp+3C8h] [bp+3C8h]
  unsigned int v332; // [sp+3C8h] [bp+3C8h]
  int v333; // [sp+3C8h] [bp+3C8h]
  int v334; // [sp+3CCh] [bp+3CCh]
  int v335; // [sp+3CCh] [bp+3CCh]
  int v336; // [sp+3CCh] [bp+3CCh]
  int v337; // [sp+3CCh] [bp+3CCh]
  int v338; // [sp+3CCh] [bp+3CCh]
  int v339; // [sp+3CCh] [bp+3CCh]
  int v340; // [sp+3CCh] [bp+3CCh]
  int v341; // [sp+3CCh] [bp+3CCh]
  int v342; // [sp+3CCh] [bp+3CCh]
  int v343; // [sp+3CCh] [bp+3CCh]
  int v344; // [sp+3CCh] [bp+3CCh]
  int v345; // [sp+3CCh] [bp+3CCh]
  int v346; // [sp+3CCh] [bp+3CCh]
  int v347; // [sp+3D0h] [bp+3D0h]
  int v348; // [sp+3D0h] [bp+3D0h]
  unsigned int v349; // [sp+3D0h] [bp+3D0h]
  int v350; // [sp+3D0h] [bp+3D0h]
  int v351; // [sp+3D0h] [bp+3D0h]
  unsigned int v352; // [sp+3D4h] [bp+3D4h]
  int v353; // [sp+3D4h] [bp+3D4h]
  unsigned int v354; // [sp+3D4h] [bp+3D4h]
  int v355; // [sp+3D4h] [bp+3D4h]
  unsigned int v356; // [sp+3D4h] [bp+3D4h]
  int v357; // [sp+3D4h] [bp+3D4h]
  unsigned int v358; // [sp+3D4h] [bp+3D4h]
  int v359; // [sp+3D4h] [bp+3D4h]
  int v360; // [sp+3D4h] [bp+3D4h]
  unsigned int v361; // [sp+3D8h] [bp+3D8h]
  int v362; // [sp+3D8h] [bp+3D8h]
  int v363; // [sp+3D8h] [bp+3D8h]
  int v364; // [sp+3D8h] [bp+3D8h]
  int v365; // [sp+3D8h] [bp+3D8h]
  int v366; // [sp+3D8h] [bp+3D8h]
  int v367; // [sp+3D8h] [bp+3D8h]
  unsigned int v368; // [sp+3DCh] [bp+3DCh]
  int v369; // [sp+3DCh] [bp+3DCh]
  int v370; // [sp+3DCh] [bp+3DCh]
  int v371; // [sp+3DCh] [bp+3DCh]
  int v372; // [sp+3DCh] [bp+3DCh]
  int v373; // [sp+3DCh] [bp+3DCh]
  int v374; // [sp+3DCh] [bp+3DCh]
  unsigned int v375; // [sp+3E0h] [bp+3E0h]
  int v376; // [sp+3E0h] [bp+3E0h]
  int v377; // [sp+3E0h] [bp+3E0h]
  int v378; // [sp+3E0h] [bp+3E0h]
  int v379; // [sp+3E0h] [bp+3E0h]
  int v380; // [sp+3E0h] [bp+3E0h]
  int v381; // [sp+3E0h] [bp+3E0h]
  int v382; // [sp+3E4h] [bp+3E4h]
  int v383; // [sp+3E4h] [bp+3E4h]
  int v384; // [sp+3E4h] [bp+3E4h]
  int v385; // [sp+3E4h] [bp+3E4h]
  int v386; // [sp+3E4h] [bp+3E4h]
  int v387; // [sp+3E4h] [bp+3E4h]
  int v388; // [sp+3E4h] [bp+3E4h]
  int v389; // [sp+3E8h] [bp+3E8h]
  int v390; // [sp+3E8h] [bp+3E8h]
  int v391; // [sp+3E8h] [bp+3E8h]
  int v392; // [sp+3E8h] [bp+3E8h]
  int v393; // [sp+3E8h] [bp+3E8h]
  int v394; // [sp+3E8h] [bp+3E8h]
  int v395; // [sp+3E8h] [bp+3E8h]
  int v396; // [sp+3ECh] [bp+3ECh]
  int v397; // [sp+3ECh] [bp+3ECh]
  int v398; // [sp+3ECh] [bp+3ECh]
  int v399; // [sp+3ECh] [bp+3ECh]
  int v400; // [sp+3ECh] [bp+3ECh]
  int v401; // [sp+3ECh] [bp+3ECh]
  int v402; // [sp+3ECh] [bp+3ECh]
  int v403; // [sp+3F0h] [bp+3F0h]
  int v404; // [sp+3F0h] [bp+3F0h]
  int v405; // [sp+3F0h] [bp+3F0h]
  int v406; // [sp+3F0h] [bp+3F0h]
  int v407; // [sp+3F0h] [bp+3F0h]
  int v408; // [sp+3F0h] [bp+3F0h]
  int v409; // [sp+3F0h] [bp+3F0h]
  int v410; // [sp+3F4h] [bp+3F4h]
  int v411; // [sp+3F4h] [bp+3F4h]
  int v412; // [sp+3F4h] [bp+3F4h]
  int v413; // [sp+3F4h] [bp+3F4h]
  int v414; // [sp+3F4h] [bp+3F4h]
  int v415; // [sp+3F4h] [bp+3F4h]
  int v416; // [sp+3F4h] [bp+3F4h]

  v410 = a1[17];
  v403 = a1[18];
  v396 = a1[19];
  v389 = a1[20];
  v382 = a1[21];
  v375 = a1[22];
  v368 = a1[23];
  v361 = a1[24];
  v352 = sub_189250(a2);
  v334 = sub_189250(a2 + 4);
  v317 = sub_189250(a2 + 8);
  v302 = sub_189250(a2 + 12);
  v347 = dword_1DB968[(v302 ^ v361) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v352 ^ v382)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v334 ^ v375) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v317 ^ v368) >> 16)];
  v330 = dword_1DB968[(v352 ^ v382) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v334 ^ v375)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v317 ^ v368) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v302 ^ v361) >> 16)];
  v314 = dword_1DB968[(v334 ^ v375) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v317 ^ v368)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v302 ^ v361) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v352 ^ v382) >> 16)];
  v300 = dword_1DB968[(v317 ^ v368) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v302 ^ v361)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v352 ^ v382) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v334 ^ v375) >> 16)];
  v291 = sub_189250(a2 + 16);
  v278 = sub_189250(a2 + 20);
  v265 = sub_189250(a2 + 24);
  v252 = sub_189250(a2 + 28);
  v251 = v291 ^ v347;
  v250 = v278 ^ v330;
  v249 = v265 ^ v314;
  v348 = dword_1DB968[(v252 ^ (unsigned int)v300) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v291 ^ v347)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v278 ^ v330) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v265 ^ (unsigned int)v314) >> 16)];
  v331 = dword_1DB968[HIBYTE(v251)]
       ^ dword_1DAD68[(unsigned __int8)(v278 ^ v330)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v265 ^ v314) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v252 ^ (unsigned int)v300) >> 16)];
  v315 = dword_1DB968[HIBYTE(v250)]
       ^ dword_1DAD68[(unsigned __int8)(v265 ^ v314)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v252 ^ v300) >> 8)]
       ^ dword_1DB568[BYTE2(v251)];
  v301 = dword_1DB968[HIBYTE(v249)]
       ^ dword_1DAD68[(unsigned __int8)(v252 ^ v300)]
       ^ dword_1DB168[BYTE1(v251)]
       ^ dword_1DB568[BYTE2(v250)];
  v240 = sub_189250(a2 + 32);
  v349 = v240 ^ v348;
  v227 = sub_189250(a2 + 36);
  v332 = v227 ^ v331;
  v214 = sub_189250(a2 + 40);
  v316 = v214 ^ v315;
  v201 = sub_189250(a2 + 44);
  v411 = dword_1DB968[(v201 ^ (unsigned int)v301) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v349]
       ^ dword_1DB168[BYTE1(v332)]
       ^ dword_1DB568[BYTE2(v316)]
       ^ v410;
  v404 = dword_1DB968[HIBYTE(v349)]
       ^ dword_1DAD68[(unsigned __int8)v332]
       ^ dword_1DB168[BYTE1(v316)]
       ^ dword_1DB568[(unsigned __int8)((v201 ^ (unsigned int)v301) >> 16)]
       ^ v403;
  v397 = dword_1DB968[HIBYTE(v332)]
       ^ dword_1DAD68[(unsigned __int8)v316]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v201 ^ v301) >> 8)]
       ^ dword_1DB568[BYTE2(v349)]
       ^ v396;
  v390 = dword_1DB968[HIBYTE(v316)]
       ^ dword_1DAD68[(unsigned __int8)(v201 ^ v301)]
       ^ dword_1DB168[BYTE1(v349)]
       ^ dword_1DB568[BYTE2(v332)]
       ^ v389;
  v192 = sub_189250(a2 + 48);
  v180 = sub_189250(a2 + 52);
  v168 = sub_189250(a2 + 56);
  result = sub_189250(a2 + 60);
  v350 = dword_1DB968[(result ^ v390) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v192 ^ v411)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v180 ^ v404) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v168 ^ (unsigned int)v397) >> 16)];
  v333 = dword_1DB968[(v192 ^ v411) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v180 ^ v404)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v168 ^ v397) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((result ^ v390) >> 16)];
  v156 = v334;
  v155 = v317;
  v154 = v302;
  v335 = dword_1DB968[HIBYTE(v352)]
       ^ dword_1DAD68[(unsigned __int8)v334]
       ^ dword_1DB168[BYTE1(v317)]
       ^ dword_1DB568[BYTE2(v302)];
  v318 = dword_1DB968[HIBYTE(v156)]
       ^ dword_1DAD68[(unsigned __int8)v317]
       ^ dword_1DB168[BYTE1(v302)]
       ^ dword_1DB568[BYTE2(v352)];
  v303 = dword_1DB968[HIBYTE(v155)]
       ^ dword_1DAD68[(unsigned __int8)v302]
       ^ dword_1DB168[BYTE1(v352)]
       ^ dword_1DB568[BYTE2(v156)];
  v153 = dword_1DB968[HIBYTE(v154)]
       ^ dword_1DAD68[(unsigned __int8)v352]
       ^ dword_1DB168[BYTE1(v156)]
       ^ dword_1DB568[BYTE2(v155)];
  v353 = v192 ^ a1[25] ^ v335;
  v336 = v180 ^ ~a1[26] ^ v318;
  v319 = v168 ^ v303;
  v152 = v353 ^ v350;
  v151 = v168
       ^ v303
       ^ dword_1DB968[(v180 ^ (unsigned int)v404) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v168 ^ v397)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(result ^ v390) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v192 ^ v411) >> 16)];
  v150 = result
       ^ v153
       ^ dword_1DB968[(v168 ^ (unsigned int)v397) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(result ^ v390)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v192 ^ v411) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v180 ^ (unsigned int)v404) >> 16)];
  v351 = dword_1DB968[HIBYTE(v150)]
       ^ dword_1DAD68[(unsigned __int8)(v353 ^ v350)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v336 ^ v333) >> 8)]
       ^ dword_1DB568[BYTE2(v151)];
  v149 = v278;
  v148 = v265;
  v147 = v252;
  v279 = dword_1DB968[HIBYTE(v291)]
       ^ dword_1DAD68[(unsigned __int8)v278]
       ^ dword_1DB168[BYTE1(v265)]
       ^ dword_1DB568[BYTE2(v252)];
  v266 = dword_1DB968[HIBYTE(v149)]
       ^ dword_1DAD68[(unsigned __int8)v265]
       ^ dword_1DB168[BYTE1(v252)]
       ^ dword_1DB568[BYTE2(v291)];
  v253 = dword_1DB968[HIBYTE(v148)]
       ^ dword_1DAD68[(unsigned __int8)v252]
       ^ dword_1DB168[BYTE1(v291)]
       ^ dword_1DB568[BYTE2(v149)];
  v146 = dword_1DB968[HIBYTE(v147)]
       ^ dword_1DAD68[(unsigned __int8)v291]
       ^ dword_1DB168[BYTE1(v149)]
       ^ dword_1DB568[BYTE2(v148)];
  v292 = v353 ^ v279;
  v280 = v336 ^ v266;
  v267 = v168 ^ v303 ^ v253;
  v254 = result ^ v153 ^ v146;
  v145 = v280
       ^ dword_1DB968[HIBYTE(v152)]
       ^ dword_1DAD68[(unsigned __int8)(v336 ^ v333)]
       ^ dword_1DB168[BYTE1(v151)]
       ^ dword_1DB568[BYTE2(v150)];
  v144 = v267
       ^ dword_1DB968[(v336 ^ (unsigned int)v333) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v151]
       ^ dword_1DB168[BYTE1(v150)]
       ^ dword_1DB568[BYTE2(v152)];
  v143 = v254
       ^ dword_1DB968[HIBYTE(v151)]
       ^ dword_1DAD68[(unsigned __int8)v150]
       ^ dword_1DB168[BYTE1(v152)]
       ^ dword_1DB568[(unsigned __int8)((v336 ^ (unsigned int)v333) >> 16)];
  v383 = dword_1DB968[HIBYTE(v143)]
       ^ dword_1DAD68[(unsigned __int8)(v292 ^ v351)]
       ^ dword_1DB168[BYTE1(v145)]
       ^ dword_1DB568[BYTE2(v144)]
       ^ v382;
  v376 = dword_1DB968[(v292 ^ (unsigned int)v351) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v145]
       ^ dword_1DB168[BYTE1(v144)]
       ^ dword_1DB568[BYTE2(v143)]
       ^ v375;
  v369 = dword_1DB968[HIBYTE(v145)]
       ^ dword_1DAD68[(unsigned __int8)v144]
       ^ dword_1DB168[BYTE1(v143)]
       ^ dword_1DB568[(unsigned __int8)((v292 ^ (unsigned int)v351) >> 16)]
       ^ v368;
  v362 = dword_1DB968[HIBYTE(v144)]
       ^ dword_1DAD68[(unsigned __int8)v143]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v292 ^ v351) >> 8)]
       ^ dword_1DB568[BYTE2(v145)]
       ^ v361;
  v142 = v227;
  v141 = v214;
  v140 = v201;
  v228 = dword_1DB968[HIBYTE(v240)]
       ^ dword_1DAD68[(unsigned __int8)v227]
       ^ dword_1DB168[BYTE1(v214)]
       ^ dword_1DB568[BYTE2(v201)];
  v215 = dword_1DB968[HIBYTE(v142)]
       ^ dword_1DAD68[(unsigned __int8)v214]
       ^ dword_1DB168[BYTE1(v201)]
       ^ dword_1DB568[BYTE2(v240)];
  v202 = dword_1DB968[HIBYTE(v141)]
       ^ dword_1DAD68[(unsigned __int8)v201]
       ^ dword_1DB168[BYTE1(v240)]
       ^ dword_1DB568[BYTE2(v142)];
  v139 = dword_1DB968[HIBYTE(v140)]
       ^ dword_1DAD68[(unsigned __int8)v240]
       ^ dword_1DB168[BYTE1(v142)]
       ^ dword_1DB568[BYTE2(v141)];
  v241 = v292 ^ v228;
  v229 = v280 ^ v215;
  v216 = v267 ^ v202;
  v203 = v254 ^ v139;
  v138 = v254 ^ v139 ^ v362;
  v137 = v180;
  v136 = v168;
  v181 = dword_1DB968[HIBYTE(v192)]
       ^ dword_1DAD68[(unsigned __int8)v180]
       ^ dword_1DB168[BYTE1(v168)]
       ^ dword_1DB568[BYTE2(result)];
  v169 = dword_1DB968[HIBYTE(v137)]
       ^ dword_1DAD68[(unsigned __int8)v168]
       ^ dword_1DB168[BYTE1(result)]
       ^ dword_1DB568[BYTE2(v192)];
  v157 = dword_1DB968[HIBYTE(v136)]
       ^ dword_1DAD68[(unsigned __int8)result]
       ^ dword_1DB168[BYTE1(v192)]
       ^ dword_1DB568[BYTE2(v137)];
  v135 = dword_1DB968[HIBYTE(result)]
       ^ dword_1DAD68[(unsigned __int8)v192]
       ^ dword_1DB168[BYTE1(v137)]
       ^ dword_1DB568[BYTE2(v136)];
  v193 = v241 ^ v181;
  v182 = v229 ^ v169;
  v170 = v216 ^ v157;
  v158 = v254 ^ v139 ^ v135;
  v134 = v193
       ^ dword_1DB968[HIBYTE(v138)]
       ^ dword_1DAD68[(unsigned __int8)(v241 ^ v383)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v229 ^ v376) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v216 ^ (unsigned int)v369) >> 16)];
  v133 = v182
       ^ dword_1DB968[(v241 ^ (unsigned int)v383) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v229 ^ v376)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v216 ^ v369) >> 8)]
       ^ dword_1DB568[BYTE2(v138)];
  v132 = v170
       ^ dword_1DB968[(v229 ^ (unsigned int)v376) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v216 ^ v369)]
       ^ dword_1DB168[BYTE1(v138)]
       ^ dword_1DB568[(unsigned __int8)((v241 ^ (unsigned int)v383) >> 16)];
  v131 = v158
       ^ dword_1DB968[(v216 ^ (unsigned int)v369) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v138]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v241 ^ v383) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v229 ^ (unsigned int)v376) >> 16)];
  v354 = v182 ^ v353;
  v337 = v170 ^ v336;
  v320 = v158 ^ v319;
  v304 = v354 ^ result ^ v153;
  v130 = v354
       ^ dword_1DB968[HIBYTE(v131)]
       ^ dword_1DAD68[(unsigned __int8)v134]
       ^ dword_1DB168[BYTE1(v133)]
       ^ dword_1DB568[BYTE2(v132)];
  v129 = v337
       ^ dword_1DB968[HIBYTE(v134)]
       ^ dword_1DAD68[(unsigned __int8)v133]
       ^ dword_1DB168[BYTE1(v132)]
       ^ dword_1DB568[BYTE2(v131)];
  v128 = v320
       ^ dword_1DB968[HIBYTE(v133)]
       ^ dword_1DAD68[(unsigned __int8)v132]
       ^ dword_1DB168[BYTE1(v131)]
       ^ dword_1DB568[BYTE2(v134)];
  v127 = v304
       ^ dword_1DB968[HIBYTE(v132)]
       ^ dword_1DAD68[(unsigned __int8)v131]
       ^ dword_1DB168[BYTE1(v134)]
       ^ dword_1DB568[BYTE2(v133)];
  v412 = dword_1DB968[HIBYTE(v127)]
       ^ dword_1DAD68[(unsigned __int8)v130]
       ^ dword_1DB168[BYTE1(v129)]
       ^ dword_1DB568[BYTE2(v128)]
       ^ v411;
  v405 = dword_1DB968[HIBYTE(v130)]
       ^ dword_1DAD68[(unsigned __int8)v129]
       ^ dword_1DB168[BYTE1(v128)]
       ^ dword_1DB568[BYTE2(v127)]
       ^ v404;
  v398 = dword_1DB968[HIBYTE(v129)]
       ^ dword_1DAD68[(unsigned __int8)v128]
       ^ dword_1DB168[BYTE1(v127)]
       ^ dword_1DB568[BYTE2(v130)]
       ^ v397;
  v391 = dword_1DB968[HIBYTE(v128)]
       ^ dword_1DAD68[(unsigned __int8)v127]
       ^ dword_1DB168[BYTE1(v130)]
       ^ dword_1DB568[BYTE2(v129)]
       ^ v390;
  v293 = v337 ^ v292;
  v281 = v320 ^ v280;
  v268 = v304 ^ v267;
  v255 = v293 ^ v254;
  v242 = v281 ^ v241;
  v230 = v268 ^ v229;
  v217 = v255 ^ v216;
  v204 = v242 ^ v203;
  v126 = v242
       ^ dword_1DB968[(v255 ^ (unsigned int)v391) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v293 ^ v412)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v281 ^ v405) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v268 ^ (unsigned int)v398) >> 16)];
  v125 = v230
       ^ dword_1DB968[(v293 ^ v412) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v281 ^ v405)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v268 ^ v398) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v255 ^ (unsigned int)v391) >> 16)];
  v124 = v217
       ^ dword_1DB968[(v281 ^ (unsigned int)v405) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v268 ^ v398)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v255 ^ v391) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v293 ^ v412) >> 16)];
  v123 = v204
       ^ dword_1DB968[(v268 ^ (unsigned int)v398) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v255 ^ v391)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v293 ^ v412) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v281 ^ (unsigned int)v405) >> 16)];
  v194 = v230 ^ v193;
  v183 = v217 ^ v182;
  v171 = v204 ^ v170;
  v159 = v194 ^ v158;
  v122 = v194
       ^ dword_1DB968[HIBYTE(v123)]
       ^ dword_1DAD68[(unsigned __int8)v126]
       ^ dword_1DB168[BYTE1(v125)]
       ^ dword_1DB568[BYTE2(v124)];
  v121 = v183
       ^ dword_1DB968[HIBYTE(v126)]
       ^ dword_1DAD68[(unsigned __int8)v125]
       ^ dword_1DB168[BYTE1(v124)]
       ^ dword_1DB568[BYTE2(v123)];
  v120 = v171
       ^ dword_1DB968[HIBYTE(v125)]
       ^ dword_1DAD68[(unsigned __int8)v124]
       ^ dword_1DB168[BYTE1(v123)]
       ^ dword_1DB568[BYTE2(v126)];
  v119 = v159
       ^ dword_1DB968[HIBYTE(v124)]
       ^ dword_1DAD68[(unsigned __int8)v123]
       ^ dword_1DB168[BYTE1(v126)]
       ^ dword_1DB568[BYTE2(v125)];
  v384 = dword_1DB968[HIBYTE(v119)]
       ^ dword_1DAD68[(unsigned __int8)v122]
       ^ dword_1DB168[BYTE1(v121)]
       ^ dword_1DB568[BYTE2(v120)]
       ^ v383;
  v377 = dword_1DB968[HIBYTE(v122)]
       ^ dword_1DAD68[(unsigned __int8)v121]
       ^ dword_1DB168[BYTE1(v120)]
       ^ dword_1DB568[BYTE2(v119)]
       ^ v376;
  v370 = dword_1DB968[HIBYTE(v121)]
       ^ dword_1DAD68[(unsigned __int8)v120]
       ^ dword_1DB168[BYTE1(v119)]
       ^ dword_1DB568[BYTE2(v122)]
       ^ v369;
  v363 = dword_1DB968[HIBYTE(v120)]
       ^ dword_1DAD68[(unsigned __int8)v119]
       ^ dword_1DB168[BYTE1(v122)]
       ^ dword_1DB568[BYTE2(v121)]
       ^ v362;
  v118 = v337;
  v117 = v320;
  v116 = v304;
  v338 = dword_1DB968[HIBYTE(v354)]
       ^ dword_1DAD68[(unsigned __int8)v337]
       ^ dword_1DB168[BYTE1(v320)]
       ^ dword_1DB568[BYTE2(v304)];
  v321 = dword_1DB968[HIBYTE(v118)]
       ^ dword_1DAD68[(unsigned __int8)v320]
       ^ dword_1DB168[BYTE1(v304)]
       ^ dword_1DB568[BYTE2(v354)];
  v305 = dword_1DB968[HIBYTE(v117)]
       ^ dword_1DAD68[(unsigned __int8)v304]
       ^ dword_1DB168[BYTE1(v354)]
       ^ dword_1DB568[BYTE2(v118)];
  v115 = dword_1DB968[HIBYTE(v116)]
       ^ dword_1DAD68[(unsigned __int8)v354]
       ^ dword_1DB168[BYTE1(v118)]
       ^ dword_1DB568[BYTE2(v117)];
  v355 = v194 ^ v338;
  v339 = v183 ^ v321;
  v322 = v171 ^ v305;
  v306 = v159 ^ v115;
  v114 = v159 ^ v115 ^ v363;
  v113 = v281;
  v112 = v268;
  v111 = v255;
  v282 = dword_1DB968[HIBYTE(v293)]
       ^ dword_1DAD68[(unsigned __int8)v281]
       ^ dword_1DB168[BYTE1(v268)]
       ^ dword_1DB568[BYTE2(v255)];
  v269 = dword_1DB968[HIBYTE(v113)]
       ^ dword_1DAD68[(unsigned __int8)v268]
       ^ dword_1DB168[BYTE1(v255)]
       ^ dword_1DB568[BYTE2(v293)];
  v256 = dword_1DB968[HIBYTE(v112)]
       ^ dword_1DAD68[(unsigned __int8)v255]
       ^ dword_1DB168[BYTE1(v293)]
       ^ dword_1DB568[BYTE2(v113)];
  v110 = dword_1DB968[HIBYTE(v111)]
       ^ dword_1DAD68[(unsigned __int8)v293]
       ^ dword_1DB168[BYTE1(v113)]
       ^ dword_1DB568[BYTE2(v112)];
  v294 = v355 ^ v282;
  v283 = v339 ^ v269;
  v270 = v322 ^ v256;
  v257 = v159 ^ v115 ^ v110;
  v109 = v294
       ^ dword_1DB968[HIBYTE(v114)]
       ^ dword_1DAD68[(unsigned __int8)(v355 ^ v384)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v339 ^ v377) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v322 ^ (unsigned int)v370) >> 16)];
  v108 = v283
       ^ dword_1DB968[(v355 ^ (unsigned int)v384) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v339 ^ v377)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v322 ^ v370) >> 8)]
       ^ dword_1DB568[BYTE2(v114)];
  v107 = v270
       ^ dword_1DB968[(v339 ^ (unsigned int)v377) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v322 ^ v370)]
       ^ dword_1DB168[BYTE1(v114)]
       ^ dword_1DB568[(unsigned __int8)((v355 ^ (unsigned int)v384) >> 16)];
  v106 = v257
       ^ dword_1DB968[(v322 ^ (unsigned int)v370) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v114]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v355 ^ v384) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v339 ^ (unsigned int)v377) >> 16)];
  v105 = v230;
  v104 = v217;
  v103 = v204;
  v231 = dword_1DB968[HIBYTE(v242)]
       ^ dword_1DAD68[(unsigned __int8)v230]
       ^ dword_1DB168[BYTE1(v217)]
       ^ dword_1DB568[BYTE2(v204)];
  v218 = dword_1DB968[HIBYTE(v105)]
       ^ dword_1DAD68[(unsigned __int8)v217]
       ^ dword_1DB168[BYTE1(v204)]
       ^ dword_1DB568[BYTE2(v242)];
  v205 = dword_1DB968[HIBYTE(v104)]
       ^ dword_1DAD68[(unsigned __int8)v204]
       ^ dword_1DB168[BYTE1(v242)]
       ^ dword_1DB568[BYTE2(v105)];
  v102 = dword_1DB968[HIBYTE(v103)]
       ^ dword_1DAD68[(unsigned __int8)v242]
       ^ dword_1DB168[BYTE1(v105)]
       ^ dword_1DB568[BYTE2(v104)];
  v243 = v294 ^ v231;
  v232 = v283 ^ a1[26] ^ v218;
  v219 = v270 ^ ~a1[25] ^ v205;
  v206 = v257 ^ v102;
  v101 = v243
       ^ dword_1DB968[HIBYTE(v106)]
       ^ dword_1DAD68[(unsigned __int8)v109]
       ^ dword_1DB168[BYTE1(v108)]
       ^ dword_1DB568[BYTE2(v107)];
  v100 = v232
       ^ dword_1DB968[HIBYTE(v109)]
       ^ dword_1DAD68[(unsigned __int8)v108]
       ^ dword_1DB168[BYTE1(v107)]
       ^ dword_1DB568[BYTE2(v106)];
  v99 = v219
      ^ dword_1DB968[HIBYTE(v108)]
      ^ dword_1DAD68[(unsigned __int8)v107]
      ^ dword_1DB168[BYTE1(v106)]
      ^ dword_1DB568[BYTE2(v109)];
  v98 = v257
      ^ v102
      ^ dword_1DB968[HIBYTE(v107)]
      ^ dword_1DAD68[(unsigned __int8)v106]
      ^ dword_1DB168[BYTE1(v109)]
      ^ dword_1DB568[BYTE2(v108)];
  v413 = dword_1DB968[HIBYTE(v98)]
       ^ dword_1DAD68[(unsigned __int8)v101]
       ^ dword_1DB168[BYTE1(v100)]
       ^ dword_1DB568[BYTE2(v99)]
       ^ v412;
  v406 = dword_1DB968[HIBYTE(v101)]
       ^ dword_1DAD68[(unsigned __int8)v100]
       ^ dword_1DB168[BYTE1(v99)]
       ^ dword_1DB568[BYTE2(v98)]
       ^ v405;
  v399 = dword_1DB968[HIBYTE(v100)]
       ^ dword_1DAD68[(unsigned __int8)v99]
       ^ dword_1DB168[BYTE1(v98)]
       ^ dword_1DB568[BYTE2(v101)]
       ^ v398;
  v392 = dword_1DB968[HIBYTE(v99)]
       ^ dword_1DAD68[(unsigned __int8)v98]
       ^ dword_1DB168[BYTE1(v101)]
       ^ dword_1DB568[BYTE2(v100)]
       ^ v391;
  v97 = v183;
  v96 = v171;
  v95 = v159;
  v184 = dword_1DB968[HIBYTE(v194)]
       ^ dword_1DAD68[(unsigned __int8)v183]
       ^ dword_1DB168[BYTE1(v171)]
       ^ dword_1DB568[BYTE2(v159)];
  v172 = dword_1DB968[HIBYTE(v97)]
       ^ dword_1DAD68[(unsigned __int8)v171]
       ^ dword_1DB168[BYTE1(v159)]
       ^ dword_1DB568[BYTE2(v194)];
  v160 = dword_1DB968[HIBYTE(v96)]
       ^ dword_1DAD68[(unsigned __int8)v159]
       ^ dword_1DB168[BYTE1(v194)]
       ^ dword_1DB568[BYTE2(v97)];
  v94 = dword_1DB968[HIBYTE(v95)]
      ^ dword_1DAD68[(unsigned __int8)v194]
      ^ dword_1DB168[BYTE1(v97)]
      ^ dword_1DB568[BYTE2(v96)];
  v195 = v243 ^ v184;
  v185 = v232 ^ v172;
  v173 = v219 ^ v160;
  v161 = v257 ^ v102 ^ v94;
  v356 = v185 ^ v355;
  v340 = v173 ^ v339;
  v323 = v161 ^ v322;
  v307 = v356 ^ v306;
  v93 = v356
      ^ dword_1DB968[(v161 ^ (unsigned int)v392) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v195 ^ v413)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v185 ^ v406) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v173 ^ (unsigned int)v399) >> 16)];
  v92 = v340
      ^ dword_1DB968[(v195 ^ (unsigned int)v413) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v185 ^ v406)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v173 ^ v399) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v161 ^ (unsigned int)v392) >> 16)];
  v91 = v323
      ^ dword_1DB968[(v185 ^ (unsigned int)v406) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v173 ^ v399)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v161 ^ v392) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v195 ^ (unsigned int)v413) >> 16)];
  v90 = v307
      ^ dword_1DB968[(v173 ^ (unsigned int)v399) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v161 ^ v392)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v195 ^ v413) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v185 ^ (unsigned int)v406) >> 16)];
  v295 = v340 ^ v294;
  v284 = v323 ^ v283;
  v271 = v307 ^ v270;
  v258 = v295 ^ v257;
  v89 = v295
      ^ dword_1DB968[HIBYTE(v90)]
      ^ dword_1DAD68[(unsigned __int8)v93]
      ^ dword_1DB168[BYTE1(v92)]
      ^ dword_1DB568[BYTE2(v91)];
  v88 = v284
      ^ dword_1DB968[HIBYTE(v93)]
      ^ dword_1DAD68[(unsigned __int8)v92]
      ^ dword_1DB168[BYTE1(v91)]
      ^ dword_1DB568[BYTE2(v90)];
  v87 = v271
      ^ dword_1DB968[HIBYTE(v92)]
      ^ dword_1DAD68[(unsigned __int8)v91]
      ^ dword_1DB168[BYTE1(v90)]
      ^ dword_1DB568[BYTE2(v93)];
  v86 = v258
      ^ dword_1DB968[HIBYTE(v91)]
      ^ dword_1DAD68[(unsigned __int8)v90]
      ^ dword_1DB168[BYTE1(v93)]
      ^ dword_1DB568[BYTE2(v92)];
  v385 = dword_1DB968[HIBYTE(v86)]
       ^ dword_1DAD68[(unsigned __int8)v89]
       ^ dword_1DB168[BYTE1(v88)]
       ^ dword_1DB568[BYTE2(v87)]
       ^ v384;
  v378 = dword_1DB968[HIBYTE(v89)]
       ^ dword_1DAD68[(unsigned __int8)v88]
       ^ dword_1DB168[BYTE1(v87)]
       ^ dword_1DB568[BYTE2(v86)]
       ^ v377;
  v371 = dword_1DB968[HIBYTE(v88)]
       ^ dword_1DAD68[(unsigned __int8)v87]
       ^ dword_1DB168[BYTE1(v86)]
       ^ dword_1DB568[BYTE2(v89)]
       ^ v370;
  v364 = dword_1DB968[HIBYTE(v87)]
       ^ dword_1DAD68[(unsigned __int8)v86]
       ^ dword_1DB168[BYTE1(v89)]
       ^ dword_1DB568[BYTE2(v88)]
       ^ v363;
  v244 = v284 ^ v243;
  v233 = v271 ^ v232;
  v220 = v258 ^ v219;
  v207 = v244 ^ v206;
  v196 = v233 ^ v195;
  v186 = v220 ^ v185;
  v174 = v207 ^ v173;
  v162 = v196 ^ v161;
  v85 = v196
      ^ dword_1DB968[(v207 ^ (unsigned int)v364) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v244 ^ v385)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v233 ^ v378) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v220 ^ (unsigned int)v371) >> 16)];
  v84 = v186
      ^ dword_1DB968[(v244 ^ v385) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v233 ^ v378)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v220 ^ v371) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v207 ^ (unsigned int)v364) >> 16)];
  v83 = v174
      ^ dword_1DB968[(v233 ^ (unsigned int)v378) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v220 ^ v371)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v207 ^ v364) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v244 ^ v385) >> 16)];
  v82 = v162
      ^ dword_1DB968[(v220 ^ (unsigned int)v371) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v207 ^ v364)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v244 ^ v385) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v233 ^ (unsigned int)v378) >> 16)];
  v81 = v340;
  v80 = v323;
  v79 = v307;
  v341 = dword_1DB968[HIBYTE(v356)]
       ^ dword_1DAD68[(unsigned __int8)v340]
       ^ dword_1DB168[BYTE1(v323)]
       ^ dword_1DB568[BYTE2(v307)];
  v324 = dword_1DB968[HIBYTE(v81)]
       ^ dword_1DAD68[(unsigned __int8)v323]
       ^ dword_1DB168[BYTE1(v307)]
       ^ dword_1DB568[BYTE2(v356)];
  v308 = dword_1DB968[HIBYTE(v80)]
       ^ dword_1DAD68[(unsigned __int8)v307]
       ^ dword_1DB168[BYTE1(v356)]
       ^ dword_1DB568[BYTE2(v81)];
  v78 = dword_1DB968[HIBYTE(v79)]
      ^ dword_1DAD68[(unsigned __int8)v356]
      ^ dword_1DB168[BYTE1(v81)]
      ^ dword_1DB568[BYTE2(v80)];
  v357 = v196 ^ v341;
  v342 = v186 ^ v324;
  v325 = v174 ^ v308;
  v309 = v162 ^ v78;
  v77 = v357
      ^ dword_1DB968[HIBYTE(v82)]
      ^ dword_1DAD68[(unsigned __int8)v85]
      ^ dword_1DB168[BYTE1(v84)]
      ^ dword_1DB568[BYTE2(v83)];
  v76 = v342
      ^ dword_1DB968[HIBYTE(v85)]
      ^ dword_1DAD68[(unsigned __int8)v84]
      ^ dword_1DB168[BYTE1(v83)]
      ^ dword_1DB568[BYTE2(v82)];
  v75 = v325
      ^ dword_1DB968[HIBYTE(v84)]
      ^ dword_1DAD68[(unsigned __int8)v83]
      ^ dword_1DB168[BYTE1(v82)]
      ^ dword_1DB568[BYTE2(v85)];
  v74 = v162
      ^ v78
      ^ dword_1DB968[HIBYTE(v83)]
      ^ dword_1DAD68[(unsigned __int8)v82]
      ^ dword_1DB168[BYTE1(v85)]
      ^ dword_1DB568[BYTE2(v84)];
  v414 = dword_1DB968[HIBYTE(v74)]
       ^ dword_1DAD68[(unsigned __int8)v77]
       ^ dword_1DB168[BYTE1(v76)]
       ^ dword_1DB568[BYTE2(v75)]
       ^ v413;
  v407 = dword_1DB968[HIBYTE(v77)]
       ^ dword_1DAD68[(unsigned __int8)v76]
       ^ dword_1DB168[BYTE1(v75)]
       ^ dword_1DB568[BYTE2(v74)]
       ^ v406;
  v400 = dword_1DB968[HIBYTE(v76)]
       ^ dword_1DAD68[(unsigned __int8)v75]
       ^ dword_1DB168[BYTE1(v74)]
       ^ dword_1DB568[BYTE2(v77)]
       ^ v399;
  v393 = dword_1DB968[HIBYTE(v75)]
       ^ dword_1DAD68[(unsigned __int8)v74]
       ^ dword_1DB168[BYTE1(v77)]
       ^ dword_1DB568[BYTE2(v76)]
       ^ v392;
  v73 = v284;
  v72 = v271;
  v71 = v258;
  v285 = dword_1DB968[HIBYTE(v295)]
       ^ dword_1DAD68[(unsigned __int8)v284]
       ^ dword_1DB168[BYTE1(v271)]
       ^ dword_1DB568[BYTE2(v258)];
  v272 = dword_1DB968[HIBYTE(v73)]
       ^ dword_1DAD68[(unsigned __int8)v271]
       ^ dword_1DB168[BYTE1(v258)]
       ^ dword_1DB568[BYTE2(v295)];
  v259 = dword_1DB968[HIBYTE(v72)]
       ^ dword_1DAD68[(unsigned __int8)v258]
       ^ dword_1DB168[BYTE1(v295)]
       ^ dword_1DB568[BYTE2(v73)];
  v70 = dword_1DB968[HIBYTE(v71)]
      ^ dword_1DAD68[(unsigned __int8)v295]
      ^ dword_1DB168[BYTE1(v73)]
      ^ dword_1DB568[BYTE2(v72)];
  v296 = v357 ^ v285;
  v286 = v342 ^ v272;
  v273 = v325 ^ a1[26] ^ v259;
  v260 = v162 ^ v78 ^ ~a1[25] ^ v70;
  v69 = v233;
  v68 = v220;
  v67 = v207;
  v234 = dword_1DB968[HIBYTE(v244)]
       ^ dword_1DAD68[(unsigned __int8)v233]
       ^ dword_1DB168[BYTE1(v220)]
       ^ dword_1DB568[BYTE2(v207)];
  v221 = dword_1DB968[HIBYTE(v69)]
       ^ dword_1DAD68[(unsigned __int8)v220]
       ^ dword_1DB168[BYTE1(v207)]
       ^ dword_1DB568[BYTE2(v244)];
  v208 = dword_1DB968[HIBYTE(v68)]
       ^ dword_1DAD68[(unsigned __int8)v207]
       ^ dword_1DB168[BYTE1(v244)]
       ^ dword_1DB568[BYTE2(v69)];
  v66 = dword_1DB968[HIBYTE(v67)]
      ^ dword_1DAD68[(unsigned __int8)v244]
      ^ dword_1DB168[BYTE1(v69)]
      ^ dword_1DB568[BYTE2(v68)];
  v245 = v296 ^ v234;
  v235 = v286 ^ v221;
  v222 = v273 ^ v208;
  v209 = v260 ^ v66;
  v65 = v245
      ^ dword_1DB968[(v260 ^ (unsigned int)v393) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v296 ^ v414)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v286 ^ v407) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v273 ^ (unsigned int)v400) >> 16)];
  v64 = v235
      ^ dword_1DB968[(v296 ^ (unsigned int)v414) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v286 ^ v407)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v273 ^ v400) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v260 ^ (unsigned int)v393) >> 16)];
  v63 = v222
      ^ dword_1DB968[(v286 ^ (unsigned int)v407) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v273 ^ v400)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v260 ^ v393) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v296 ^ (unsigned int)v414) >> 16)];
  v62 = v260
      ^ v66
      ^ dword_1DB968[(v273 ^ (unsigned int)v400) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v260 ^ v393)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v296 ^ v414) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v286 ^ (unsigned int)v407) >> 16)];
  v61 = v186;
  v60 = v174;
  v59 = v162;
  v187 = dword_1DB968[HIBYTE(v196)]
       ^ dword_1DAD68[(unsigned __int8)v186]
       ^ dword_1DB168[BYTE1(v174)]
       ^ dword_1DB568[BYTE2(v162)];
  v175 = dword_1DB968[HIBYTE(v61)]
       ^ dword_1DAD68[(unsigned __int8)v174]
       ^ dword_1DB168[BYTE1(v162)]
       ^ dword_1DB568[BYTE2(v196)];
  v163 = dword_1DB968[HIBYTE(v60)]
       ^ dword_1DAD68[(unsigned __int8)v162]
       ^ dword_1DB168[BYTE1(v196)]
       ^ dword_1DB568[BYTE2(v61)];
  v58 = dword_1DB968[HIBYTE(v59)]
      ^ dword_1DAD68[(unsigned __int8)v196]
      ^ dword_1DB168[BYTE1(v61)]
      ^ dword_1DB568[BYTE2(v60)];
  v197 = v245 ^ v187;
  v188 = v235 ^ v175;
  v176 = v222 ^ v163;
  v164 = v260 ^ v66 ^ v58;
  v57 = v197
      ^ dword_1DB968[HIBYTE(v62)]
      ^ dword_1DAD68[(unsigned __int8)v65]
      ^ dword_1DB168[BYTE1(v64)]
      ^ dword_1DB568[BYTE2(v63)];
  v56 = v188
      ^ dword_1DB968[HIBYTE(v65)]
      ^ dword_1DAD68[(unsigned __int8)v64]
      ^ dword_1DB168[BYTE1(v63)]
      ^ dword_1DB568[BYTE2(v62)];
  v55 = v176
      ^ dword_1DB968[HIBYTE(v64)]
      ^ dword_1DAD68[(unsigned __int8)v63]
      ^ dword_1DB168[BYTE1(v62)]
      ^ dword_1DB568[BYTE2(v65)];
  v54 = v164
      ^ dword_1DB968[HIBYTE(v63)]
      ^ dword_1DAD68[(unsigned __int8)v62]
      ^ dword_1DB168[BYTE1(v65)]
      ^ dword_1DB568[BYTE2(v64)];
  v386 = dword_1DB968[HIBYTE(v54)]
       ^ dword_1DAD68[(unsigned __int8)v57]
       ^ dword_1DB168[BYTE1(v56)]
       ^ dword_1DB568[BYTE2(v55)]
       ^ v385;
  v379 = dword_1DB968[HIBYTE(v57)]
       ^ dword_1DAD68[(unsigned __int8)v56]
       ^ dword_1DB168[BYTE1(v55)]
       ^ dword_1DB568[BYTE2(v54)]
       ^ v378;
  v372 = dword_1DB968[HIBYTE(v56)]
       ^ dword_1DAD68[(unsigned __int8)v55]
       ^ dword_1DB168[BYTE1(v54)]
       ^ dword_1DB568[BYTE2(v57)]
       ^ v371;
  v365 = dword_1DB968[HIBYTE(v55)]
       ^ dword_1DAD68[(unsigned __int8)v54]
       ^ dword_1DB168[BYTE1(v57)]
       ^ dword_1DB568[BYTE2(v56)]
       ^ v364;
  v358 = v188 ^ v357;
  v343 = v176 ^ v342;
  v326 = v164 ^ v325;
  v310 = v358 ^ v309;
  v297 = v343 ^ v296;
  v287 = v326 ^ v286;
  v274 = v310 ^ v273;
  v261 = v297 ^ v260;
  v53 = v297
      ^ dword_1DB968[(v310 ^ (unsigned int)v365) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v358 ^ v386)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v343 ^ v379) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v326 ^ (unsigned int)v372) >> 16)];
  v52 = v287
      ^ dword_1DB968[(v358 ^ v386) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v343 ^ v379)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v326 ^ v372) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v310 ^ (unsigned int)v365) >> 16)];
  v51 = v274
      ^ dword_1DB968[(v343 ^ (unsigned int)v379) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v326 ^ v372)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v310 ^ v365) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v358 ^ v386) >> 16)];
  v50 = v261
      ^ dword_1DB968[(v326 ^ (unsigned int)v372) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v310 ^ v365)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v358 ^ v386) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v343 ^ (unsigned int)v379) >> 16)];
  v246 = v287 ^ v245;
  v236 = v274 ^ v235;
  v223 = v261 ^ v222;
  v210 = v246 ^ v209;
  v49 = v246
      ^ dword_1DB968[HIBYTE(v50)]
      ^ dword_1DAD68[(unsigned __int8)v53]
      ^ dword_1DB168[BYTE1(v52)]
      ^ dword_1DB568[BYTE2(v51)];
  v48 = v236
      ^ dword_1DB968[HIBYTE(v53)]
      ^ dword_1DAD68[(unsigned __int8)v52]
      ^ dword_1DB168[BYTE1(v51)]
      ^ dword_1DB568[BYTE2(v50)];
  v47 = v223
      ^ dword_1DB968[HIBYTE(v52)]
      ^ dword_1DAD68[(unsigned __int8)v51]
      ^ dword_1DB168[BYTE1(v50)]
      ^ dword_1DB568[BYTE2(v53)];
  v46 = v210
      ^ dword_1DB968[HIBYTE(v51)]
      ^ dword_1DAD68[(unsigned __int8)v50]
      ^ dword_1DB168[BYTE1(v53)]
      ^ dword_1DB568[BYTE2(v52)];
  v415 = dword_1DB968[HIBYTE(v46)]
       ^ dword_1DAD68[(unsigned __int8)v49]
       ^ dword_1DB168[BYTE1(v48)]
       ^ dword_1DB568[BYTE2(v47)]
       ^ v414;
  v408 = dword_1DB968[HIBYTE(v49)]
       ^ dword_1DAD68[(unsigned __int8)v48]
       ^ dword_1DB168[BYTE1(v47)]
       ^ dword_1DB568[BYTE2(v46)]
       ^ v407;
  v401 = dword_1DB968[HIBYTE(v48)]
       ^ dword_1DAD68[(unsigned __int8)v47]
       ^ dword_1DB168[BYTE1(v46)]
       ^ dword_1DB568[BYTE2(v49)]
       ^ v400;
  v394 = dword_1DB968[HIBYTE(v47)]
       ^ dword_1DAD68[(unsigned __int8)v46]
       ^ dword_1DB168[BYTE1(v49)]
       ^ dword_1DB568[BYTE2(v48)]
       ^ v393;
  v198 = v236 ^ v197;
  v189 = v223 ^ v188;
  v177 = v210 ^ v176;
  v165 = v198 ^ v164;
  v45 = v343;
  v44 = v326;
  v43 = v310;
  v344 = dword_1DB968[HIBYTE(v358)]
       ^ dword_1DAD68[(unsigned __int8)v343]
       ^ dword_1DB168[BYTE1(v326)]
       ^ dword_1DB568[BYTE2(v310)];
  v327 = dword_1DB968[HIBYTE(v45)]
       ^ dword_1DAD68[(unsigned __int8)v326]
       ^ dword_1DB168[BYTE1(v310)]
       ^ dword_1DB568[BYTE2(v358)];
  v311 = dword_1DB968[HIBYTE(v44)]
       ^ dword_1DAD68[(unsigned __int8)v310]
       ^ dword_1DB168[BYTE1(v358)]
       ^ dword_1DB568[BYTE2(v45)];
  v42 = dword_1DB968[HIBYTE(v43)]
      ^ dword_1DAD68[(unsigned __int8)v358]
      ^ dword_1DB168[BYTE1(v45)]
      ^ dword_1DB568[BYTE2(v44)];
  v359 = v198 ^ v344;
  v345 = v189 ^ v327;
  v328 = v177 ^ v311;
  v312 = v165 ^ v42;
  v41 = v359
      ^ dword_1DB968[(v165 ^ (unsigned int)v394) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v198 ^ v415)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v189 ^ v408) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v177 ^ (unsigned int)v401) >> 16)];
  v40 = v345
      ^ dword_1DB968[(v198 ^ v415) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v189 ^ v408)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v177 ^ v401) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v165 ^ (unsigned int)v394) >> 16)];
  v39 = v328
      ^ dword_1DB968[(v189 ^ (unsigned int)v408) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v177 ^ v401)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v165 ^ v394) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v198 ^ v415) >> 16)];
  v38 = v165
      ^ v42
      ^ dword_1DB968[(v177 ^ (unsigned int)v401) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v165 ^ v394)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v198 ^ v415) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v189 ^ (unsigned int)v408) >> 16)];
  v37 = v287;
  v36 = v274;
  v35 = v261;
  v288 = dword_1DB968[HIBYTE(v297)]
       ^ dword_1DAD68[(unsigned __int8)v287]
       ^ dword_1DB168[BYTE1(v274)]
       ^ dword_1DB568[BYTE2(v261)];
  v275 = dword_1DB968[HIBYTE(v37)]
       ^ dword_1DAD68[(unsigned __int8)v274]
       ^ dword_1DB168[BYTE1(v261)]
       ^ dword_1DB568[BYTE2(v297)];
  v262 = dword_1DB968[HIBYTE(v36)]
       ^ dword_1DAD68[(unsigned __int8)v261]
       ^ dword_1DB168[BYTE1(v297)]
       ^ dword_1DB568[BYTE2(v37)];
  v34 = dword_1DB968[HIBYTE(v35)]
      ^ dword_1DAD68[(unsigned __int8)v297]
      ^ dword_1DB168[BYTE1(v37)]
      ^ dword_1DB568[BYTE2(v36)];
  v298 = v359 ^ v288;
  v289 = v345 ^ v275;
  v276 = v328 ^ v262;
  v263 = v165 ^ v42 ^ v34;
  v33 = v298
      ^ dword_1DB968[HIBYTE(v38)]
      ^ dword_1DAD68[(unsigned __int8)v41]
      ^ dword_1DB168[BYTE1(v40)]
      ^ dword_1DB568[BYTE2(v39)];
  v32 = v289
      ^ dword_1DB968[HIBYTE(v41)]
      ^ dword_1DAD68[(unsigned __int8)v40]
      ^ dword_1DB168[BYTE1(v39)]
      ^ dword_1DB568[BYTE2(v38)];
  v31 = v276
      ^ dword_1DB968[HIBYTE(v40)]
      ^ dword_1DAD68[(unsigned __int8)v39]
      ^ dword_1DB168[BYTE1(v38)]
      ^ dword_1DB568[BYTE2(v41)];
  v30 = v263
      ^ dword_1DB968[HIBYTE(v39)]
      ^ dword_1DAD68[(unsigned __int8)v38]
      ^ dword_1DB168[BYTE1(v41)]
      ^ dword_1DB568[BYTE2(v40)];
  v387 = dword_1DB968[HIBYTE(v30)]
       ^ dword_1DAD68[(unsigned __int8)v33]
       ^ dword_1DB168[BYTE1(v32)]
       ^ dword_1DB568[BYTE2(v31)]
       ^ v386;
  v380 = dword_1DB968[HIBYTE(v33)]
       ^ dword_1DAD68[(unsigned __int8)v32]
       ^ dword_1DB168[BYTE1(v31)]
       ^ dword_1DB568[BYTE2(v30)]
       ^ v379;
  v373 = dword_1DB968[HIBYTE(v32)]
       ^ dword_1DAD68[(unsigned __int8)v31]
       ^ dword_1DB168[BYTE1(v30)]
       ^ dword_1DB568[BYTE2(v33)]
       ^ v372;
  v366 = dword_1DB968[HIBYTE(v31)]
       ^ dword_1DAD68[(unsigned __int8)v30]
       ^ dword_1DB168[BYTE1(v33)]
       ^ dword_1DB568[BYTE2(v32)]
       ^ v365;
  v29 = v236;
  v28 = v223;
  v27 = v210;
  v237 = dword_1DB968[HIBYTE(v246)]
       ^ dword_1DAD68[(unsigned __int8)v236]
       ^ dword_1DB168[BYTE1(v223)]
       ^ dword_1DB568[BYTE2(v210)];
  v224 = dword_1DB968[HIBYTE(v29)]
       ^ dword_1DAD68[(unsigned __int8)v223]
       ^ dword_1DB168[BYTE1(v210)]
       ^ dword_1DB568[BYTE2(v246)];
  v211 = dword_1DB968[HIBYTE(v28)]
       ^ dword_1DAD68[(unsigned __int8)v210]
       ^ dword_1DB168[BYTE1(v246)]
       ^ dword_1DB568[BYTE2(v29)];
  v26 = dword_1DB968[HIBYTE(v27)]
      ^ dword_1DAD68[(unsigned __int8)v246]
      ^ dword_1DB168[BYTE1(v29)]
      ^ dword_1DB568[BYTE2(v28)];
  v247 = v298 ^ v237;
  v238 = v289 ^ v224;
  v225 = v276 ^ v211;
  v212 = v263 ^ v26;
  v25 = v263 ^ v26 ^ v366;
  v24 = v189;
  v23 = v177;
  v22 = v165;
  v190 = dword_1DB968[HIBYTE(v198)]
       ^ dword_1DAD68[(unsigned __int8)v189]
       ^ dword_1DB168[BYTE1(v177)]
       ^ dword_1DB568[BYTE2(v165)];
  v178 = dword_1DB968[HIBYTE(v24)]
       ^ dword_1DAD68[(unsigned __int8)v177]
       ^ dword_1DB168[BYTE1(v165)]
       ^ dword_1DB568[BYTE2(v198)];
  v166 = dword_1DB968[HIBYTE(v23)]
       ^ dword_1DAD68[(unsigned __int8)v165]
       ^ dword_1DB168[BYTE1(v198)]
       ^ dword_1DB568[BYTE2(v24)];
  v21 = dword_1DB968[HIBYTE(v22)]
      ^ dword_1DAD68[(unsigned __int8)v198]
      ^ dword_1DB168[BYTE1(v24)]
      ^ dword_1DB568[BYTE2(v23)];
  v199 = v247 ^ a1[25] ^ v190;
  v191 = v238 ^ v178;
  v179 = v225 ^ v166;
  v167 = v263 ^ v26 ^ ~a1[26] ^ v21;
  v20 = v199
      ^ dword_1DB968[HIBYTE(v25)]
      ^ dword_1DAD68[(unsigned __int8)(v247 ^ v387)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v238 ^ v380) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v225 ^ (unsigned int)v373) >> 16)];
  v19 = v191
      ^ dword_1DB968[(v247 ^ (unsigned int)v387) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v238 ^ v380)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v225 ^ v373) >> 8)]
      ^ dword_1DB568[BYTE2(v25)];
  v18 = v179
      ^ dword_1DB968[(v238 ^ (unsigned int)v380) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v225 ^ v373)]
      ^ dword_1DB168[BYTE1(v25)]
      ^ dword_1DB568[(unsigned __int8)((v247 ^ (unsigned int)v387) >> 16)];
  v17 = v167
      ^ dword_1DB968[(v225 ^ (unsigned int)v373) >> 24]
      ^ dword_1DAD68[(unsigned __int8)v25]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v247 ^ v387) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v238 ^ (unsigned int)v380) >> 16)];
  v360 = v191 ^ v359;
  v346 = v179 ^ v345;
  v329 = v167 ^ v328;
  v313 = v360 ^ v312;
  v16 = v360
      ^ dword_1DB968[HIBYTE(v17)]
      ^ dword_1DAD68[(unsigned __int8)v20]
      ^ dword_1DB168[BYTE1(v19)]
      ^ dword_1DB568[BYTE2(v18)];
  v15 = v346
      ^ dword_1DB968[HIBYTE(v20)]
      ^ dword_1DAD68[(unsigned __int8)v19]
      ^ dword_1DB168[BYTE1(v18)]
      ^ dword_1DB568[BYTE2(v17)];
  v14 = v329
      ^ dword_1DB968[HIBYTE(v19)]
      ^ dword_1DAD68[(unsigned __int8)v18]
      ^ dword_1DB168[BYTE1(v17)]
      ^ dword_1DB568[BYTE2(v20)];
  v13 = v313
      ^ dword_1DB968[HIBYTE(v18)]
      ^ dword_1DAD68[(unsigned __int8)v17]
      ^ dword_1DB168[BYTE1(v20)]
      ^ dword_1DB568[BYTE2(v19)];
  v416 = dword_1DB968[HIBYTE(v13)]
       ^ dword_1DAD68[(unsigned __int8)v16]
       ^ dword_1DB168[BYTE1(v15)]
       ^ dword_1DB568[BYTE2(v14)]
       ^ v415;
  v409 = dword_1DB968[HIBYTE(v16)]
       ^ dword_1DAD68[(unsigned __int8)v15]
       ^ dword_1DB168[BYTE1(v14)]
       ^ dword_1DB568[BYTE2(v13)]
       ^ v408;
  v402 = dword_1DB968[HIBYTE(v15)]
       ^ dword_1DAD68[(unsigned __int8)v14]
       ^ dword_1DB168[BYTE1(v13)]
       ^ dword_1DB568[BYTE2(v16)]
       ^ v401;
  v395 = dword_1DB968[HIBYTE(v14)]
       ^ dword_1DAD68[(unsigned __int8)v13]
       ^ dword_1DB168[BYTE1(v16)]
       ^ dword_1DB568[BYTE2(v15)]
       ^ v394;
  v299 = v346 ^ v298;
  v290 = v329 ^ v289;
  v277 = v313 ^ v276;
  v264 = v299 ^ v263;
  v248 = v290 ^ v247;
  v239 = v277 ^ v238;
  v226 = v264 ^ v225;
  v213 = v248 ^ v212;
  v12 = v248
      ^ dword_1DB968[(v264 ^ (unsigned int)v395) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v299 ^ v416)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v290 ^ v409) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v277 ^ (unsigned int)v402) >> 16)];
  v11 = v239
      ^ dword_1DB968[(v299 ^ (unsigned int)v416) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v290 ^ v409)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v277 ^ v402) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v264 ^ (unsigned int)v395) >> 16)];
  v10 = v226
      ^ dword_1DB968[(v290 ^ (unsigned int)v409) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v277 ^ v402)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v264 ^ v395) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v299 ^ (unsigned int)v416) >> 16)];
  v9 = v213
     ^ dword_1DB968[(v277 ^ (unsigned int)v402) >> 24]
     ^ dword_1DAD68[(unsigned __int8)(v264 ^ v395)]
     ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v299 ^ v416) >> 8)]
     ^ dword_1DB568[(unsigned __int8)((v290 ^ (unsigned int)v409) >> 16)];
  v200 = v239 ^ v199;
  v8 = v200
     ^ dword_1DB968[HIBYTE(v9)]
     ^ dword_1DAD68[(unsigned __int8)v12]
     ^ dword_1DB168[BYTE1(v11)]
     ^ dword_1DB568[BYTE2(v10)];
  v7 = v226
     ^ v191
     ^ dword_1DB968[HIBYTE(v12)]
     ^ dword_1DAD68[(unsigned __int8)v11]
     ^ dword_1DB168[BYTE1(v10)]
     ^ dword_1DB568[BYTE2(v9)];
  v6 = v213
     ^ v179
     ^ dword_1DB968[HIBYTE(v11)]
     ^ dword_1DAD68[(unsigned __int8)v10]
     ^ dword_1DB168[BYTE1(v9)]
     ^ dword_1DB568[BYTE2(v12)];
  v5 = v200
     ^ v167
     ^ dword_1DB968[HIBYTE(v10)]
     ^ dword_1DAD68[(unsigned __int8)v9]
     ^ dword_1DB168[BYTE1(v12)]
     ^ dword_1DB568[BYTE2(v11)];
  v388 = dword_1DB968[HIBYTE(v5)]
       ^ dword_1DAD68[(unsigned __int8)v8]
       ^ dword_1DB168[BYTE1(v7)]
       ^ dword_1DB568[BYTE2(v6)]
       ^ v387;
  v381 = dword_1DB968[HIBYTE(v8)]
       ^ dword_1DAD68[(unsigned __int8)v7]
       ^ dword_1DB168[BYTE1(v6)]
       ^ dword_1DB568[BYTE2(v5)]
       ^ v380;
  v374 = dword_1DB968[HIBYTE(v7)]
       ^ dword_1DAD68[(unsigned __int8)v6]
       ^ dword_1DB168[BYTE1(v5)]
       ^ dword_1DB568[BYTE2(v8)]
       ^ v373;
  v367 = dword_1DB968[HIBYTE(v6)]
       ^ dword_1DAD68[(unsigned __int8)v5]
       ^ dword_1DB168[BYTE1(v8)]
       ^ dword_1DB568[BYTE2(v7)]
       ^ v366;
  a1[17] ^= v416;
  a1[18] ^= v409;
  a1[19] ^= v402;
  a1[20] ^= v395;
  a1[21] ^= v388;
  a1[22] ^= v381;
  a1[23] ^= v374;
  a1[24] ^= v367;
  return result;
}
