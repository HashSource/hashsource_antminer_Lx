unsigned int __fastcall sub_18FC14(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // [sp+Ch] [bp+Ch]
  unsigned int v6; // [sp+10h] [bp+10h]
  unsigned int v7; // [sp+14h] [bp+14h]
  unsigned int v8; // [sp+18h] [bp+18h]
  unsigned int v9; // [sp+30h] [bp+30h]
  unsigned int v10; // [sp+34h] [bp+34h]
  unsigned int v11; // [sp+38h] [bp+38h]
  unsigned int v12; // [sp+3Ch] [bp+3Ch]
  int v13; // [sp+40h] [bp+40h]
  unsigned int v14; // [sp+48h] [bp+48h]
  unsigned int v15; // [sp+4Ch] [bp+4Ch]
  unsigned int v16; // [sp+50h] [bp+50h]
  unsigned int v17; // [sp+54h] [bp+54h]
  unsigned int v18; // [sp+58h] [bp+58h]
  unsigned int v19; // [sp+5Ch] [bp+5Ch]
  unsigned int v20; // [sp+60h] [bp+60h]
  int v21; // [sp+64h] [bp+64h]
  unsigned int v22; // [sp+6Ch] [bp+6Ch]
  unsigned int v23; // [sp+70h] [bp+70h]
  unsigned int v24; // [sp+74h] [bp+74h]
  unsigned int v25; // [sp+78h] [bp+78h]
  int v26; // [sp+88h] [bp+88h]
  unsigned int v27; // [sp+90h] [bp+90h]
  unsigned int v28; // [sp+94h] [bp+94h]
  unsigned int v29; // [sp+98h] [bp+98h]
  unsigned int v30; // [sp+9Ch] [bp+9Ch]
  unsigned int v31; // [sp+A0h] [bp+A0h]
  unsigned int v32; // [sp+A4h] [bp+A4h]
  unsigned int v33; // [sp+A8h] [bp+A8h]
  int v34; // [sp+ACh] [bp+ACh]
  unsigned int v35; // [sp+B4h] [bp+B4h]
  unsigned int v36; // [sp+B8h] [bp+B8h]
  unsigned int v37; // [sp+BCh] [bp+BCh]
  unsigned int v38; // [sp+C0h] [bp+C0h]
  unsigned int v39; // [sp+C4h] [bp+C4h]
  unsigned int v40; // [sp+C8h] [bp+C8h]
  unsigned int v41; // [sp+CCh] [bp+CCh]
  int v42; // [sp+D0h] [bp+D0h]
  unsigned int v43; // [sp+D8h] [bp+D8h]
  unsigned int v44; // [sp+DCh] [bp+DCh]
  unsigned int v45; // [sp+E0h] [bp+E0h]
  unsigned int v46; // [sp+E4h] [bp+E4h]
  unsigned int v47; // [sp+E8h] [bp+E8h]
  unsigned int v48; // [sp+ECh] [bp+ECh]
  unsigned int v49; // [sp+F0h] [bp+F0h]
  int v50; // [sp+F4h] [bp+F4h]
  unsigned int v51; // [sp+FCh] [bp+FCh]
  unsigned int v52; // [sp+100h] [bp+100h]
  unsigned int v53; // [sp+104h] [bp+104h]
  unsigned int v54; // [sp+108h] [bp+108h]
  int v55; // [sp+118h] [bp+118h]
  unsigned int v56; // [sp+120h] [bp+120h]
  unsigned int v57; // [sp+124h] [bp+124h]
  unsigned int v58; // [sp+128h] [bp+128h]
  unsigned int v59; // [sp+12Ch] [bp+12Ch]
  unsigned int v60; // [sp+130h] [bp+130h]
  unsigned int v61; // [sp+134h] [bp+134h]
  unsigned int v62; // [sp+138h] [bp+138h]
  unsigned int v63; // [sp+13Ch] [bp+13Ch]
  unsigned int v64; // [sp+140h] [bp+140h]
  unsigned int v65; // [sp+144h] [bp+144h]
  unsigned int v66; // [sp+148h] [bp+148h]
  unsigned int v67; // [sp+14Ch] [bp+14Ch]
  unsigned int v68; // [sp+150h] [bp+150h]
  unsigned int v69; // [sp+154h] [bp+154h]
  unsigned int v70; // [sp+158h] [bp+158h]
  unsigned int v71; // [sp+16Ch] [bp+16Ch]
  unsigned int v72; // [sp+170h] [bp+170h]
  unsigned int v73; // [sp+174h] [bp+174h]
  unsigned int v74; // [sp+178h] [bp+178h]
  unsigned int v75; // [sp+17Ch] [bp+17Ch]
  unsigned int v76; // [sp+180h] [bp+180h]
  unsigned int v77; // [sp+184h] [bp+184h]
  unsigned int v78; // [sp+188h] [bp+188h]
  unsigned int v79; // [sp+18Ch] [bp+18Ch]
  unsigned int v80; // [sp+190h] [bp+190h]
  unsigned int v81; // [sp+194h] [bp+194h]
  unsigned int v82; // [sp+198h] [bp+198h]
  unsigned int v83; // [sp+1ACh] [bp+1ACh]
  unsigned int v84; // [sp+1B0h] [bp+1B0h]
  unsigned int v85; // [sp+1B4h] [bp+1B4h]
  unsigned int v86; // [sp+1B8h] [bp+1B8h]
  int v87; // [sp+1BCh] [bp+1BCh]
  unsigned int v88; // [sp+1C4h] [bp+1C4h]
  unsigned int v89; // [sp+1C8h] [bp+1C8h]
  unsigned int v90; // [sp+1CCh] [bp+1CCh]
  unsigned int v91; // [sp+1D0h] [bp+1D0h]
  unsigned int v92; // [sp+1D4h] [bp+1D4h]
  unsigned int v93; // [sp+1D8h] [bp+1D8h]
  unsigned int v94; // [sp+1DCh] [bp+1DCh]
  int v95; // [sp+1E0h] [bp+1E0h]
  unsigned int v96; // [sp+1E8h] [bp+1E8h]
  unsigned int v97; // [sp+1ECh] [bp+1ECh]
  unsigned int v98; // [sp+1F0h] [bp+1F0h]
  unsigned int v99; // [sp+1F4h] [bp+1F4h]
  unsigned int v100; // [sp+1F8h] [bp+1F8h]
  unsigned int v101; // [sp+1FCh] [bp+1FCh]
  unsigned int v102; // [sp+200h] [bp+200h]
  int v103; // [sp+204h] [bp+204h]
  unsigned int v104; // [sp+20Ch] [bp+20Ch]
  unsigned int v105; // [sp+210h] [bp+210h]
  unsigned int v106; // [sp+214h] [bp+214h]
  unsigned int v107; // [sp+218h] [bp+218h]
  int v108; // [sp+228h] [bp+228h]
  unsigned int v109; // [sp+230h] [bp+230h]
  unsigned int v110; // [sp+234h] [bp+234h]
  unsigned int v111; // [sp+238h] [bp+238h]
  unsigned int v112; // [sp+23Ch] [bp+23Ch]
  unsigned int v113; // [sp+240h] [bp+240h]
  unsigned int v114; // [sp+244h] [bp+244h]
  unsigned int v115; // [sp+248h] [bp+248h]
  int v116; // [sp+24Ch] [bp+24Ch]
  unsigned int v117; // [sp+254h] [bp+254h]
  unsigned int v118; // [sp+258h] [bp+258h]
  unsigned int v119; // [sp+25Ch] [bp+25Ch]
  unsigned int v120; // [sp+260h] [bp+260h]
  unsigned int v121; // [sp+264h] [bp+264h]
  unsigned int v122; // [sp+268h] [bp+268h]
  unsigned int v123; // [sp+26Ch] [bp+26Ch]
  int v124; // [sp+270h] [bp+270h]
  unsigned int v125; // [sp+278h] [bp+278h]
  unsigned int v126; // [sp+27Ch] [bp+27Ch]
  unsigned int v127; // [sp+280h] [bp+280h]
  unsigned int v128; // [sp+284h] [bp+284h]
  unsigned int v129; // [sp+288h] [bp+288h]
  unsigned int v130; // [sp+28Ch] [bp+28Ch]
  unsigned int v131; // [sp+290h] [bp+290h]
  int v132; // [sp+294h] [bp+294h]
  unsigned int v133; // [sp+29Ch] [bp+29Ch]
  unsigned int v134; // [sp+2A0h] [bp+2A0h]
  unsigned int v135; // [sp+2A4h] [bp+2A4h]
  unsigned int v136; // [sp+2A8h] [bp+2A8h]
  int v137; // [sp+2B8h] [bp+2B8h]
  unsigned int v138; // [sp+2C0h] [bp+2C0h]
  unsigned int v139; // [sp+2C4h] [bp+2C4h]
  unsigned int v140; // [sp+2C8h] [bp+2C8h]
  unsigned int v141; // [sp+2CCh] [bp+2CCh]
  unsigned int v142; // [sp+2D0h] [bp+2D0h]
  unsigned int v143; // [sp+2D4h] [bp+2D4h]
  unsigned int v144; // [sp+2D8h] [bp+2D8h]
  unsigned int v145; // [sp+2DCh] [bp+2DCh]
  unsigned int v146; // [sp+2E0h] [bp+2E0h]
  unsigned int v147; // [sp+2E4h] [bp+2E4h]
  unsigned int v148; // [sp+2E8h] [bp+2E8h]
  unsigned int v149; // [sp+2ECh] [bp+2ECh]
  unsigned int v150; // [sp+2F0h] [bp+2F0h]
  unsigned int v151; // [sp+2F4h] [bp+2F4h]
  unsigned int v152; // [sp+2F8h] [bp+2F8h]
  unsigned int v153; // [sp+30Ch] [bp+30Ch]
  unsigned int v154; // [sp+310h] [bp+310h]
  unsigned int v155; // [sp+314h] [bp+314h]
  unsigned int v156; // [sp+318h] [bp+318h]
  unsigned int v157; // [sp+31Ch] [bp+31Ch]
  unsigned int v158; // [sp+320h] [bp+320h]
  unsigned int v159; // [sp+324h] [bp+324h]
  unsigned int v160; // [sp+328h] [bp+328h]
  unsigned int v161; // [sp+32Ch] [bp+32Ch]
  unsigned int v162; // [sp+330h] [bp+330h]
  unsigned int v163; // [sp+334h] [bp+334h]
  unsigned int v164; // [sp+338h] [bp+338h]
  int v165; // [sp+35Ch] [bp+35Ch]
  unsigned int v166; // [sp+364h] [bp+364h]
  unsigned int v167; // [sp+368h] [bp+368h]
  unsigned int v168; // [sp+36Ch] [bp+36Ch]
  unsigned int v169; // [sp+370h] [bp+370h]
  unsigned int v170; // [sp+374h] [bp+374h]
  unsigned int v171; // [sp+378h] [bp+378h]
  unsigned int v172; // [sp+37Ch] [bp+37Ch]
  int v173; // [sp+380h] [bp+380h]
  unsigned int v174; // [sp+388h] [bp+388h]
  unsigned int v175; // [sp+38Ch] [bp+38Ch]
  unsigned int v176; // [sp+390h] [bp+390h]
  unsigned int v177; // [sp+394h] [bp+394h]
  unsigned int v178; // [sp+398h] [bp+398h]
  unsigned int v179; // [sp+39Ch] [bp+39Ch]
  unsigned int v180; // [sp+3A0h] [bp+3A0h]
  int v181; // [sp+3A4h] [bp+3A4h]
  unsigned int v182; // [sp+3ACh] [bp+3ACh]
  unsigned int v183; // [sp+3B0h] [bp+3B0h]
  unsigned int v184; // [sp+3B4h] [bp+3B4h]
  unsigned int v185; // [sp+3B8h] [bp+3B8h]
  int v186; // [sp+3C8h] [bp+3C8h]
  unsigned int v187; // [sp+3D0h] [bp+3D0h]
  unsigned int v188; // [sp+3D4h] [bp+3D4h]
  unsigned int v189; // [sp+3D8h] [bp+3D8h]
  unsigned int v190; // [sp+3DCh] [bp+3DCh]
  unsigned int v191; // [sp+3E0h] [bp+3E0h]
  int v192; // [sp+3ECh] [bp+3ECh]
  unsigned int v193; // [sp+3F4h] [bp+3F4h]
  unsigned int v194; // [sp+3F8h] [bp+3F8h]
  unsigned int v195; // [sp+3FCh] [bp+3FCh]
  unsigned int v196; // [sp+400h] [bp+400h]
  unsigned int v197; // [sp+408h] [bp+408h]
  unsigned int v198; // [sp+40Ch] [bp+40Ch]
  int v199; // [sp+410h] [bp+410h]
  unsigned int v200; // [sp+418h] [bp+418h]
  unsigned int v201; // [sp+41Ch] [bp+41Ch]
  unsigned int v202; // [sp+420h] [bp+420h]
  unsigned int v203; // [sp+428h] [bp+428h]
  unsigned int v204; // [sp+42Ch] [bp+42Ch]
  unsigned int v205; // [sp+430h] [bp+430h]
  int v206; // [sp+434h] [bp+434h]
  unsigned int v207; // [sp+43Ch] [bp+43Ch]
  unsigned int v208; // [sp+440h] [bp+440h]
  unsigned int v209; // [sp+444h] [bp+444h]
  int v210; // [sp+458h] [bp+458h]
  unsigned int v211; // [sp+460h] [bp+460h]
  unsigned int v212; // [sp+464h] [bp+464h]
  unsigned int v213; // [sp+468h] [bp+468h]
  unsigned int v214; // [sp+480h] [bp+480h]
  unsigned int v215; // [sp+484h] [bp+484h]
  unsigned int v216; // [sp+488h] [bp+488h]
  unsigned int v217; // [sp+490h] [bp+490h]
  unsigned int v218; // [sp+494h] [bp+494h]
  unsigned int v219; // [sp+498h] [bp+498h]
  unsigned int v220; // [sp+4C0h] [bp+4C0h]
  unsigned int v221; // [sp+4C4h] [bp+4C4h]
  unsigned int v222; // [sp+4C8h] [bp+4C8h]
  unsigned int v223; // [sp+4D0h] [bp+4D0h]
  unsigned int v224; // [sp+4D4h] [bp+4D4h]
  unsigned int v225; // [sp+4D8h] [bp+4D8h]
  int v226; // [sp+4ECh] [bp+4ECh]
  int v227; // [sp+4ECh] [bp+4ECh]
  int v228; // [sp+4ECh] [bp+4ECh]
  int v229; // [sp+4ECh] [bp+4ECh]
  int v230; // [sp+4ECh] [bp+4ECh]
  int v231; // [sp+4ECh] [bp+4ECh]
  int v232; // [sp+4ECh] [bp+4ECh]
  int v233; // [sp+4ECh] [bp+4ECh]
  int v234; // [sp+4F0h] [bp+4F0h]
  int v235; // [sp+4F0h] [bp+4F0h]
  int v236; // [sp+4F0h] [bp+4F0h]
  unsigned int v237; // [sp+4F0h] [bp+4F0h]
  int v238; // [sp+4F0h] [bp+4F0h]
  int v239; // [sp+4F0h] [bp+4F0h]
  int v240; // [sp+4F0h] [bp+4F0h]
  unsigned int v241; // [sp+4F0h] [bp+4F0h]
  int v242; // [sp+4F0h] [bp+4F0h]
  int v243; // [sp+4F0h] [bp+4F0h]
  int v244; // [sp+4F0h] [bp+4F0h]
  int v245; // [sp+4F4h] [bp+4F4h]
  int v246; // [sp+4F4h] [bp+4F4h]
  int v247; // [sp+4F4h] [bp+4F4h]
  unsigned int v248; // [sp+4F4h] [bp+4F4h]
  int v249; // [sp+4F4h] [bp+4F4h]
  int v250; // [sp+4F4h] [bp+4F4h]
  int v251; // [sp+4F4h] [bp+4F4h]
  unsigned int v252; // [sp+4F4h] [bp+4F4h]
  int v253; // [sp+4F4h] [bp+4F4h]
  int v254; // [sp+4F4h] [bp+4F4h]
  int v255; // [sp+4F4h] [bp+4F4h]
  int v256; // [sp+4F4h] [bp+4F4h]
  int v257; // [sp+4F8h] [bp+4F8h]
  int v258; // [sp+4F8h] [bp+4F8h]
  int v259; // [sp+4F8h] [bp+4F8h]
  unsigned int v260; // [sp+4F8h] [bp+4F8h]
  int v261; // [sp+4F8h] [bp+4F8h]
  int v262; // [sp+4F8h] [bp+4F8h]
  int v263; // [sp+4F8h] [bp+4F8h]
  unsigned int v264; // [sp+4F8h] [bp+4F8h]
  int v265; // [sp+4F8h] [bp+4F8h]
  int v266; // [sp+4F8h] [bp+4F8h]
  int v267; // [sp+4F8h] [bp+4F8h]
  int v268; // [sp+4F8h] [bp+4F8h]
  int i; // [sp+4FCh] [bp+4FCh]
  unsigned int v270; // [sp+500h] [bp+500h]
  int v271; // [sp+500h] [bp+500h]
  int v272; // [sp+500h] [bp+500h]
  int v273; // [sp+500h] [bp+500h]
  int v274; // [sp+500h] [bp+500h]
  int v275; // [sp+500h] [bp+500h]
  unsigned int v276; // [sp+504h] [bp+504h]
  int v277; // [sp+504h] [bp+504h]
  int v278; // [sp+504h] [bp+504h]
  int v279; // [sp+504h] [bp+504h]
  int v280; // [sp+504h] [bp+504h]
  int v281; // [sp+504h] [bp+504h]
  unsigned int v282; // [sp+508h] [bp+508h]
  int v283; // [sp+508h] [bp+508h]
  int v284; // [sp+508h] [bp+508h]
  int v285; // [sp+508h] [bp+508h]
  int v286; // [sp+508h] [bp+508h]
  int v287; // [sp+508h] [bp+508h]
  unsigned int v288; // [sp+50Ch] [bp+50Ch]
  int v289; // [sp+50Ch] [bp+50Ch]
  unsigned int v290; // [sp+50Ch] [bp+50Ch]
  int v291; // [sp+50Ch] [bp+50Ch]
  int v292; // [sp+510h] [bp+510h]
  int v293; // [sp+510h] [bp+510h]
  int v294; // [sp+510h] [bp+510h]
  int v295; // [sp+510h] [bp+510h]
  int v296; // [sp+510h] [bp+510h]
  int v297; // [sp+510h] [bp+510h]
  int v298; // [sp+510h] [bp+510h]
  int v299; // [sp+510h] [bp+510h]
  int v300; // [sp+514h] [bp+514h]
  int v301; // [sp+514h] [bp+514h]
  int v302; // [sp+514h] [bp+514h]
  int v303; // [sp+514h] [bp+514h]
  int v304; // [sp+514h] [bp+514h]
  int v305; // [sp+514h] [bp+514h]
  int v306; // [sp+514h] [bp+514h]
  int v307; // [sp+514h] [bp+514h]
  int v308; // [sp+518h] [bp+518h]
  int v309; // [sp+518h] [bp+518h]
  int v310; // [sp+518h] [bp+518h]
  int v311; // [sp+518h] [bp+518h]
  int v312; // [sp+518h] [bp+518h]
  int v313; // [sp+518h] [bp+518h]
  int v314; // [sp+518h] [bp+518h]
  int v315; // [sp+518h] [bp+518h]
  unsigned int v316; // [sp+51Ch] [bp+51Ch]
  int v317; // [sp+51Ch] [bp+51Ch]
  unsigned int v318; // [sp+51Ch] [bp+51Ch]
  int v319; // [sp+51Ch] [bp+51Ch]
  int v320; // [sp+51Ch] [bp+51Ch]
  int v321; // [sp+520h] [bp+520h]
  int v322; // [sp+520h] [bp+520h]
  int v323; // [sp+520h] [bp+520h]
  int v324; // [sp+520h] [bp+520h]
  int v325; // [sp+520h] [bp+520h]
  int v326; // [sp+520h] [bp+520h]
  int v327; // [sp+520h] [bp+520h]
  int v328; // [sp+520h] [bp+520h]
  int v329; // [sp+524h] [bp+524h]
  int v330; // [sp+524h] [bp+524h]
  int v331; // [sp+524h] [bp+524h]
  int v332; // [sp+524h] [bp+524h]
  int v333; // [sp+524h] [bp+524h]
  int v334; // [sp+524h] [bp+524h]
  int v335; // [sp+524h] [bp+524h]
  int v336; // [sp+524h] [bp+524h]
  int v337; // [sp+528h] [bp+528h]
  int v338; // [sp+528h] [bp+528h]
  int v339; // [sp+528h] [bp+528h]
  int v340; // [sp+528h] [bp+528h]
  int v341; // [sp+528h] [bp+528h]
  int v342; // [sp+528h] [bp+528h]
  int v343; // [sp+528h] [bp+528h]
  int v344; // [sp+528h] [bp+528h]
  unsigned int v345; // [sp+52Ch] [bp+52Ch]
  int v346; // [sp+52Ch] [bp+52Ch]
  unsigned int v347; // [sp+52Ch] [bp+52Ch]
  int v348; // [sp+52Ch] [bp+52Ch]
  int v349; // [sp+52Ch] [bp+52Ch]
  int v350; // [sp+530h] [bp+530h]
  int v351; // [sp+530h] [bp+530h]
  int v352; // [sp+530h] [bp+530h]
  int v353; // [sp+530h] [bp+530h]
  int v354; // [sp+530h] [bp+530h]
  int v355; // [sp+530h] [bp+530h]
  int v356; // [sp+530h] [bp+530h]
  int v357; // [sp+534h] [bp+534h]
  int v358; // [sp+534h] [bp+534h]
  int v359; // [sp+534h] [bp+534h]
  int v360; // [sp+534h] [bp+534h]
  int v361; // [sp+534h] [bp+534h]
  int v362; // [sp+534h] [bp+534h]
  int v363; // [sp+534h] [bp+534h]
  int v364; // [sp+538h] [bp+538h]
  int v365; // [sp+538h] [bp+538h]
  int v366; // [sp+538h] [bp+538h]
  int v367; // [sp+538h] [bp+538h]
  int v368; // [sp+538h] [bp+538h]
  int v369; // [sp+538h] [bp+538h]
  int v370; // [sp+538h] [bp+538h]
  unsigned int v371; // [sp+53Ch] [bp+53Ch]
  int v372; // [sp+53Ch] [bp+53Ch]
  unsigned int v373; // [sp+53Ch] [bp+53Ch]
  int v374; // [sp+53Ch] [bp+53Ch]
  int v375; // [sp+540h] [bp+540h]
  int v376; // [sp+540h] [bp+540h]
  int v377; // [sp+540h] [bp+540h]
  int v378; // [sp+540h] [bp+540h]
  int v379; // [sp+540h] [bp+540h]
  int v380; // [sp+540h] [bp+540h]
  int v381; // [sp+540h] [bp+540h]
  int v382; // [sp+540h] [bp+540h]
  int v383; // [sp+544h] [bp+544h]
  int v384; // [sp+544h] [bp+544h]
  int v385; // [sp+544h] [bp+544h]
  int v386; // [sp+544h] [bp+544h]
  int v387; // [sp+544h] [bp+544h]
  int v388; // [sp+544h] [bp+544h]
  int v389; // [sp+544h] [bp+544h]
  int v390; // [sp+544h] [bp+544h]
  int v391; // [sp+548h] [bp+548h]
  int v392; // [sp+548h] [bp+548h]
  int v393; // [sp+548h] [bp+548h]
  int v394; // [sp+548h] [bp+548h]
  int v395; // [sp+548h] [bp+548h]
  int v396; // [sp+548h] [bp+548h]
  int v397; // [sp+548h] [bp+548h]
  int v398; // [sp+548h] [bp+548h]
  unsigned int v399; // [sp+54Ch] [bp+54Ch]
  int v400; // [sp+54Ch] [bp+54Ch]
  unsigned int v401; // [sp+54Ch] [bp+54Ch]
  int v402; // [sp+54Ch] [bp+54Ch]
  int v403; // [sp+54Ch] [bp+54Ch]
  int v404; // [sp+550h] [bp+550h]
  int v405; // [sp+550h] [bp+550h]
  int v406; // [sp+550h] [bp+550h]
  int v407; // [sp+550h] [bp+550h]
  int v408; // [sp+550h] [bp+550h]
  int v409; // [sp+550h] [bp+550h]
  int v410; // [sp+550h] [bp+550h]
  int v411; // [sp+554h] [bp+554h]
  int v412; // [sp+554h] [bp+554h]
  int v413; // [sp+554h] [bp+554h]
  int v414; // [sp+554h] [bp+554h]
  int v415; // [sp+554h] [bp+554h]
  int v416; // [sp+554h] [bp+554h]
  int v417; // [sp+554h] [bp+554h]
  int v418; // [sp+558h] [bp+558h]
  int v419; // [sp+558h] [bp+558h]
  int v420; // [sp+558h] [bp+558h]
  int v421; // [sp+558h] [bp+558h]
  int v422; // [sp+558h] [bp+558h]
  int v423; // [sp+558h] [bp+558h]
  int v424; // [sp+558h] [bp+558h]
  unsigned int v425; // [sp+55Ch] [bp+55Ch]
  int v426; // [sp+55Ch] [bp+55Ch]
  unsigned int v427; // [sp+55Ch] [bp+55Ch]
  int v428; // [sp+55Ch] [bp+55Ch]
  int v429; // [sp+560h] [bp+560h]
  int v430; // [sp+560h] [bp+560h]
  int v431; // [sp+560h] [bp+560h]
  int v432; // [sp+560h] [bp+560h]
  int v433; // [sp+560h] [bp+560h]
  int v434; // [sp+560h] [bp+560h]
  int v435; // [sp+560h] [bp+560h]
  int v436; // [sp+560h] [bp+560h]
  int v437; // [sp+564h] [bp+564h]
  int v438; // [sp+564h] [bp+564h]
  int v439; // [sp+564h] [bp+564h]
  int v440; // [sp+564h] [bp+564h]
  int v441; // [sp+564h] [bp+564h]
  int v442; // [sp+564h] [bp+564h]
  int v443; // [sp+564h] [bp+564h]
  int v444; // [sp+564h] [bp+564h]
  int v445; // [sp+568h] [bp+568h]
  int v446; // [sp+568h] [bp+568h]
  int v447; // [sp+568h] [bp+568h]
  int v448; // [sp+568h] [bp+568h]
  int v449; // [sp+568h] [bp+568h]
  int v450; // [sp+568h] [bp+568h]
  int v451; // [sp+568h] [bp+568h]
  int v452; // [sp+568h] [bp+568h]
  unsigned int v453; // [sp+56Ch] [bp+56Ch]
  int v454; // [sp+56Ch] [bp+56Ch]
  unsigned int v455; // [sp+56Ch] [bp+56Ch]
  int v456; // [sp+56Ch] [bp+56Ch]
  int v457; // [sp+56Ch] [bp+56Ch]
  int v458; // [sp+570h] [bp+570h]
  int v459; // [sp+570h] [bp+570h]
  int v460; // [sp+570h] [bp+570h]
  int v461; // [sp+570h] [bp+570h]
  int v462; // [sp+570h] [bp+570h]
  int v463; // [sp+570h] [bp+570h]
  int v464; // [sp+570h] [bp+570h]
  int v465; // [sp+574h] [bp+574h]
  int v466; // [sp+574h] [bp+574h]
  int v467; // [sp+574h] [bp+574h]
  int v468; // [sp+574h] [bp+574h]
  int v469; // [sp+574h] [bp+574h]
  int v470; // [sp+574h] [bp+574h]
  int v471; // [sp+574h] [bp+574h]
  int v472; // [sp+578h] [bp+578h]
  int v473; // [sp+578h] [bp+578h]
  int v474; // [sp+578h] [bp+578h]
  int v475; // [sp+578h] [bp+578h]
  int v476; // [sp+578h] [bp+578h]
  int v477; // [sp+578h] [bp+578h]
  int v478; // [sp+578h] [bp+578h]
  unsigned int v479; // [sp+57Ch] [bp+57Ch]
  int v480; // [sp+57Ch] [bp+57Ch]
  unsigned int v481; // [sp+57Ch] [bp+57Ch]
  int v482; // [sp+57Ch] [bp+57Ch]
  int v483; // [sp+580h] [bp+580h]
  int v484; // [sp+580h] [bp+580h]
  int v485; // [sp+580h] [bp+580h]
  int v486; // [sp+584h] [bp+584h]
  int v487; // [sp+584h] [bp+584h]
  int v488; // [sp+584h] [bp+584h]
  int v489; // [sp+588h] [bp+588h]
  int v490; // [sp+588h] [bp+588h]
  int v491; // [sp+588h] [bp+588h]
  int v492; // [sp+58Ch] [bp+58Ch]
  int v493; // [sp+58Ch] [bp+58Ch]
  int v494; // [sp+58Ch] [bp+58Ch]
  int v495; // [sp+590h] [bp+590h]
  int v496; // [sp+590h] [bp+590h]
  int v497; // [sp+590h] [bp+590h]
  int v498; // [sp+594h] [bp+594h]
  int v499; // [sp+594h] [bp+594h]
  int v500; // [sp+594h] [bp+594h]
  int v501; // [sp+598h] [bp+598h]
  int v502; // [sp+598h] [bp+598h]
  int v503; // [sp+598h] [bp+598h]
  int v504; // [sp+59Ch] [bp+59Ch]
  int v505; // [sp+59Ch] [bp+59Ch]
  int v506; // [sp+59Ch] [bp+59Ch]
  int v507; // [sp+5A0h] [bp+5A0h]
  int v508; // [sp+5A0h] [bp+5A0h]
  int v509; // [sp+5A0h] [bp+5A0h]
  int v510; // [sp+5A4h] [bp+5A4h]
  int v511; // [sp+5A4h] [bp+5A4h]
  int v512; // [sp+5A4h] [bp+5A4h]
  int v513; // [sp+5A8h] [bp+5A8h]
  int v514; // [sp+5A8h] [bp+5A8h]
  int v515; // [sp+5A8h] [bp+5A8h]
  int v516; // [sp+5ACh] [bp+5ACh]
  int v517; // [sp+5ACh] [bp+5ACh]
  int v518; // [sp+5ACh] [bp+5ACh]
  int v519; // [sp+5B0h] [bp+5B0h]
  int v520; // [sp+5B0h] [bp+5B0h]
  int v521; // [sp+5B0h] [bp+5B0h]
  int v522; // [sp+5B4h] [bp+5B4h]
  int v523; // [sp+5B4h] [bp+5B4h]
  int v524; // [sp+5B4h] [bp+5B4h]
  int v525; // [sp+5B8h] [bp+5B8h]
  int v526; // [sp+5B8h] [bp+5B8h]
  int v527; // [sp+5B8h] [bp+5B8h]
  int v528; // [sp+5BCh] [bp+5BCh]
  int v529; // [sp+5BCh] [bp+5BCh]
  int v530; // [sp+5BCh] [bp+5BCh]

  v528 = a1[33];
  v525 = a1[34];
  v522 = a1[35];
  v519 = a1[36];
  v516 = a1[37];
  v513 = a1[38];
  v510 = a1[39];
  v507 = a1[40];
  v504 = a1[41];
  v501 = a1[42];
  v498 = a1[43];
  v495 = a1[44];
  v492 = a1[45];
  v489 = a1[46];
  v486 = a1[47];
  v483 = a1[48];
  v479 = sub_189250(a2);
  v472 = sub_189250(a2 + 4);
  v465 = sub_189250(a2 + 8);
  v458 = sub_189250(a2 + 12);
  v257 = dword_1DB968[(v458 ^ (unsigned int)v507) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v479 ^ v516)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v472 ^ v513) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v465 ^ (unsigned int)v510) >> 16)];
  v245 = dword_1DB968[(v479 ^ v516) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v472 ^ v513)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v465 ^ v510) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v458 ^ (unsigned int)v507) >> 16)];
  v234 = dword_1DB968[(v472 ^ (unsigned int)v513) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v465 ^ v510)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v458 ^ v507) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v479 ^ v516) >> 16)];
  v226 = dword_1DB968[(v465 ^ (unsigned int)v510) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v458 ^ v507)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v479 ^ v516) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v472 ^ (unsigned int)v513) >> 16)];
  v453 = sub_189250(a2 + 16);
  v445 = sub_189250(a2 + 20);
  v437 = sub_189250(a2 + 24);
  v429 = sub_189250(a2 + 28);
  v225 = v453 ^ v257;
  v224 = v445 ^ v245;
  v223 = v437 ^ v234;
  v258 = dword_1DB968[(v429 ^ (unsigned int)v226) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v453 ^ v257)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v445 ^ v245) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v437 ^ (unsigned int)v234) >> 16)];
  v246 = dword_1DB968[HIBYTE(v225)]
       ^ dword_1DAD68[(unsigned __int8)(v445 ^ v245)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v437 ^ v234) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v429 ^ (unsigned int)v226) >> 16)];
  v235 = dword_1DB968[HIBYTE(v224)]
       ^ dword_1DAD68[(unsigned __int8)(v437 ^ v234)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v429 ^ v226) >> 8)]
       ^ dword_1DB568[BYTE2(v225)];
  v227 = dword_1DB968[HIBYTE(v223)]
       ^ dword_1DAD68[(unsigned __int8)(v429 ^ v226)]
       ^ dword_1DB168[BYTE1(v225)]
       ^ dword_1DB568[BYTE2(v224)];
  v425 = sub_189250(a2 + 32);
  v418 = sub_189250(a2 + 36);
  v411 = sub_189250(a2 + 40);
  v404 = sub_189250(a2 + 44);
  v222 = v425 ^ v258;
  v221 = v418 ^ v246;
  v220 = v411 ^ v235;
  v259 = dword_1DB968[(v404 ^ (unsigned int)v227) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v425 ^ v258)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v418 ^ v246) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v411 ^ (unsigned int)v235) >> 16)];
  v247 = dword_1DB968[HIBYTE(v222)]
       ^ dword_1DAD68[(unsigned __int8)(v418 ^ v246)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v411 ^ v235) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v404 ^ (unsigned int)v227) >> 16)];
  v236 = dword_1DB968[HIBYTE(v221)]
       ^ dword_1DAD68[(unsigned __int8)(v411 ^ v235)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v404 ^ v227) >> 8)]
       ^ dword_1DB568[BYTE2(v222)];
  v228 = dword_1DB968[HIBYTE(v220)]
       ^ dword_1DAD68[(unsigned __int8)(v404 ^ v227)]
       ^ dword_1DB168[BYTE1(v222)]
       ^ dword_1DB568[BYTE2(v221)];
  v399 = sub_189250(a2 + 48);
  v260 = v399 ^ v259;
  v391 = sub_189250(a2 + 52);
  v248 = v391 ^ v247;
  v383 = sub_189250(a2 + 56);
  v237 = v383 ^ v236;
  v375 = sub_189250(a2 + 60);
  v529 = dword_1DB968[(v375 ^ (unsigned int)v228) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v260]
       ^ dword_1DB168[BYTE1(v248)]
       ^ dword_1DB568[BYTE2(v237)]
       ^ v528;
  v526 = dword_1DB968[HIBYTE(v260)]
       ^ dword_1DAD68[(unsigned __int8)v248]
       ^ dword_1DB168[BYTE1(v237)]
       ^ dword_1DB568[(unsigned __int8)((v375 ^ (unsigned int)v228) >> 16)]
       ^ v525;
  v523 = dword_1DB968[HIBYTE(v248)]
       ^ dword_1DAD68[(unsigned __int8)v237]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v375 ^ v228) >> 8)]
       ^ dword_1DB568[BYTE2(v260)]
       ^ v522;
  v520 = dword_1DB968[HIBYTE(v237)]
       ^ dword_1DAD68[(unsigned __int8)(v375 ^ v228)]
       ^ dword_1DB168[BYTE1(v260)]
       ^ dword_1DB568[BYTE2(v248)]
       ^ v519;
  v371 = sub_189250(a2 + 64);
  v364 = sub_189250(a2 + 68);
  v357 = sub_189250(a2 + 72);
  v350 = sub_189250(a2 + 76);
  v261 = dword_1DB968[(v350 ^ (unsigned int)v483) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v371 ^ v492)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v364 ^ v489) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v357 ^ (unsigned int)v486) >> 16)];
  v249 = dword_1DB968[(v371 ^ v492) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v364 ^ v489)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v357 ^ v486) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v350 ^ (unsigned int)v483) >> 16)];
  v238 = dword_1DB968[(v364 ^ (unsigned int)v489) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v357 ^ v486)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v350 ^ v483) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v371 ^ v492) >> 16)];
  v229 = dword_1DB968[(v357 ^ (unsigned int)v486) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v350 ^ v483)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v371 ^ v492) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v364 ^ (unsigned int)v489) >> 16)];
  v345 = sub_189250(a2 + 80);
  v337 = sub_189250(a2 + 84);
  v329 = sub_189250(a2 + 88);
  v321 = sub_189250(a2 + 92);
  v219 = v345 ^ v261;
  v218 = v337 ^ v249;
  v217 = v329 ^ v238;
  v262 = dword_1DB968[(v321 ^ (unsigned int)v229) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v345 ^ v261)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v337 ^ v249) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v329 ^ (unsigned int)v238) >> 16)];
  v250 = dword_1DB968[HIBYTE(v219)]
       ^ dword_1DAD68[(unsigned __int8)(v337 ^ v249)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v329 ^ v238) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v321 ^ (unsigned int)v229) >> 16)];
  v239 = dword_1DB968[HIBYTE(v218)]
       ^ dword_1DAD68[(unsigned __int8)(v329 ^ v238)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v321 ^ v229) >> 8)]
       ^ dword_1DB568[BYTE2(v219)];
  v230 = dword_1DB968[HIBYTE(v217)]
       ^ dword_1DAD68[(unsigned __int8)(v321 ^ v229)]
       ^ dword_1DB168[BYTE1(v219)]
       ^ dword_1DB568[BYTE2(v218)];
  v316 = sub_189250(a2 + 96);
  v308 = sub_189250(a2 + 100);
  v300 = sub_189250(a2 + 104);
  v292 = sub_189250(a2 + 108);
  v216 = v316 ^ v262;
  v215 = v308 ^ v250;
  v214 = v300 ^ v239;
  v263 = dword_1DB968[(v292 ^ (unsigned int)v230) >> 24]
       ^ dword_1DAD68[(unsigned __int8)(v316 ^ v262)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v308 ^ v250) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v300 ^ (unsigned int)v239) >> 16)];
  v251 = dword_1DB968[HIBYTE(v216)]
       ^ dword_1DAD68[(unsigned __int8)(v308 ^ v250)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v300 ^ v239) >> 8)]
       ^ dword_1DB568[(unsigned __int8)((v292 ^ (unsigned int)v230) >> 16)];
  v240 = dword_1DB968[HIBYTE(v215)]
       ^ dword_1DAD68[(unsigned __int8)(v300 ^ v239)]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v292 ^ v230) >> 8)]
       ^ dword_1DB568[BYTE2(v216)];
  v231 = dword_1DB968[HIBYTE(v214)]
       ^ dword_1DAD68[(unsigned __int8)(v292 ^ v230)]
       ^ dword_1DB168[BYTE1(v216)]
       ^ dword_1DB568[BYTE2(v215)];
  v288 = sub_189250(a2 + 112);
  v264 = v288 ^ v263;
  v282 = sub_189250(a2 + 116);
  v252 = v282 ^ v251;
  v276 = sub_189250(a2 + 120);
  v241 = v276 ^ v240;
  result = sub_189250(a2 + 124);
  v270 = result;
  v505 = dword_1DB968[(result ^ v231) >> 24]
       ^ dword_1DAD68[(unsigned __int8)v264]
       ^ dword_1DB168[BYTE1(v252)]
       ^ dword_1DB568[BYTE2(v241)]
       ^ v504;
  v502 = dword_1DB968[HIBYTE(v264)]
       ^ dword_1DAD68[(unsigned __int8)v252]
       ^ dword_1DB168[BYTE1(v241)]
       ^ dword_1DB568[(unsigned __int8)((result ^ v231) >> 16)]
       ^ v501;
  v499 = dword_1DB968[HIBYTE(v252)]
       ^ dword_1DAD68[(unsigned __int8)v241]
       ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(result ^ v231) >> 8)]
       ^ dword_1DB568[BYTE2(v264)]
       ^ v498;
  v496 = dword_1DB968[HIBYTE(v241)]
       ^ dword_1DAD68[(unsigned __int8)(result ^ v231)]
       ^ dword_1DB168[BYTE1(v264)]
       ^ dword_1DB568[BYTE2(v252)]
       ^ v495;
  for ( i = 0; i <= 2; ++i )
  {
    v213 = v472;
    v212 = v465;
    v211 = v458;
    v473 = dword_1DB968[HIBYTE(v479)]
         ^ dword_1DAD68[(unsigned __int8)v472]
         ^ dword_1DB168[BYTE1(v465)]
         ^ dword_1DB568[BYTE2(v458)];
    v466 = dword_1DB968[HIBYTE(v213)]
         ^ dword_1DAD68[(unsigned __int8)v465]
         ^ dword_1DB168[BYTE1(v458)]
         ^ dword_1DB568[BYTE2(v479)];
    v459 = dword_1DB968[HIBYTE(v212)]
         ^ dword_1DAD68[(unsigned __int8)v458]
         ^ dword_1DB168[BYTE1(v479)]
         ^ dword_1DB568[BYTE2(v213)];
    v210 = dword_1DB968[HIBYTE(v211)]
         ^ dword_1DAD68[(unsigned __int8)v479]
         ^ dword_1DB168[BYTE1(v213)]
         ^ dword_1DB568[BYTE2(v212)];
    v480 = v288 ^ v473;
    v474 = v282 ^ v466;
    v467 = v276 ^ v459;
    v460 = v270 ^ v210;
    if ( !i )
    {
      v480 ^= a1[49];
      v474 ^= a1[50];
      v467 ^= a1[51];
      v460 ^= ~a1[52];
    }
    v265 = dword_1DB968[(v460 ^ (unsigned int)v520) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v480 ^ v529)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v474 ^ v526) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v467 ^ (unsigned int)v523) >> 16)];
    v253 = dword_1DB968[(v480 ^ (unsigned int)v529) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v474 ^ v526)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v467 ^ v523) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v460 ^ (unsigned int)v520) >> 16)];
    v242 = dword_1DB968[(v474 ^ (unsigned int)v526) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v467 ^ v523)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v460 ^ v520) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v480 ^ (unsigned int)v529) >> 16)];
    v232 = dword_1DB968[(v467 ^ (unsigned int)v523) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v460 ^ v520)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v480 ^ v529) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v474 ^ (unsigned int)v526) >> 16)];
    v209 = v445;
    v208 = v437;
    v207 = v429;
    v446 = dword_1DB968[HIBYTE(v453)]
         ^ dword_1DAD68[(unsigned __int8)v445]
         ^ dword_1DB168[BYTE1(v437)]
         ^ dword_1DB568[BYTE2(v429)];
    v438 = dword_1DB968[HIBYTE(v209)]
         ^ dword_1DAD68[(unsigned __int8)v437]
         ^ dword_1DB168[BYTE1(v429)]
         ^ dword_1DB568[BYTE2(v453)];
    v430 = dword_1DB968[HIBYTE(v208)]
         ^ dword_1DAD68[(unsigned __int8)v429]
         ^ dword_1DB168[BYTE1(v453)]
         ^ dword_1DB568[BYTE2(v209)];
    v206 = dword_1DB968[HIBYTE(v207)]
         ^ dword_1DAD68[(unsigned __int8)v453]
         ^ dword_1DB168[BYTE1(v209)]
         ^ dword_1DB568[BYTE2(v208)];
    v454 = v480 ^ v446;
    v447 = v474 ^ v438;
    v439 = v467 ^ v430;
    v431 = v460 ^ v206;
    if ( i == 1 )
    {
      v454 ^= a1[52];
      v447 ^= a1[51];
      v439 ^= a1[50];
      v431 ^= ~a1[49];
    }
    v205 = v454 ^ v265;
    v204 = v447 ^ v253;
    v203 = v439 ^ v242;
    v266 = dword_1DB968[(v431 ^ (unsigned int)v232) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v454 ^ v265)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v447 ^ v253) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v439 ^ (unsigned int)v242) >> 16)];
    v254 = dword_1DB968[HIBYTE(v205)]
         ^ dword_1DAD68[(unsigned __int8)(v447 ^ v253)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v439 ^ v242) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v431 ^ (unsigned int)v232) >> 16)];
    v243 = dword_1DB968[HIBYTE(v204)]
         ^ dword_1DAD68[(unsigned __int8)(v439 ^ v242)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v431 ^ v232) >> 8)]
         ^ dword_1DB568[BYTE2(v205)];
    v202 = v418;
    v201 = v411;
    v200 = v404;
    v419 = dword_1DB968[HIBYTE(v425)]
         ^ dword_1DAD68[(unsigned __int8)v418]
         ^ dword_1DB168[BYTE1(v411)]
         ^ dword_1DB568[BYTE2(v404)];
    v412 = dword_1DB968[HIBYTE(v202)]
         ^ dword_1DAD68[(unsigned __int8)v411]
         ^ dword_1DB168[BYTE1(v404)]
         ^ dword_1DB568[BYTE2(v425)];
    v405 = dword_1DB968[HIBYTE(v201)]
         ^ dword_1DAD68[(unsigned __int8)v404]
         ^ dword_1DB168[BYTE1(v425)]
         ^ dword_1DB568[BYTE2(v202)];
    v199 = dword_1DB968[HIBYTE(v200)]
         ^ dword_1DAD68[(unsigned __int8)v425]
         ^ dword_1DB168[BYTE1(v202)]
         ^ dword_1DB568[BYTE2(v201)];
    v426 = v454 ^ v419;
    v420 = v447 ^ v412;
    v413 = v439 ^ v405;
    v406 = v431 ^ v199;
    v198 = v426 ^ v266;
    v197 = v420 ^ v254;
    v196 = v431
         ^ v199
         ^ dword_1DB968[HIBYTE(v203)]
         ^ dword_1DAD68[(unsigned __int8)(v431 ^ v232)]
         ^ dword_1DB168[BYTE1(v205)]
         ^ dword_1DB568[BYTE2(v204)];
    v267 = dword_1DB968[HIBYTE(v196)]
         ^ dword_1DAD68[(unsigned __int8)(v426 ^ v266)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v420 ^ v254) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v413 ^ (unsigned int)v243) >> 16)];
    v255 = dword_1DB968[HIBYTE(v198)]
         ^ dword_1DAD68[(unsigned __int8)(v420 ^ v254)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v413 ^ v243) >> 8)]
         ^ dword_1DB568[BYTE2(v196)];
    v195 = v391;
    v194 = v383;
    v193 = v375;
    v392 = dword_1DB968[HIBYTE(v399)]
         ^ dword_1DAD68[(unsigned __int8)v391]
         ^ dword_1DB168[BYTE1(v383)]
         ^ dword_1DB568[BYTE2(v375)];
    v384 = dword_1DB968[HIBYTE(v195)]
         ^ dword_1DAD68[(unsigned __int8)v383]
         ^ dword_1DB168[BYTE1(v375)]
         ^ dword_1DB568[BYTE2(v399)];
    v376 = dword_1DB968[HIBYTE(v194)]
         ^ dword_1DAD68[(unsigned __int8)v375]
         ^ dword_1DB168[BYTE1(v399)]
         ^ dword_1DB568[BYTE2(v195)];
    v192 = dword_1DB968[HIBYTE(v193)]
         ^ dword_1DAD68[(unsigned __int8)v399]
         ^ dword_1DB168[BYTE1(v195)]
         ^ dword_1DB568[BYTE2(v194)];
    v400 = v426 ^ v392;
    v393 = v420 ^ v384;
    v385 = v413 ^ v376;
    v377 = v431 ^ v199 ^ v192;
    v191 = v385
         ^ dword_1DB968[HIBYTE(v197)]
         ^ dword_1DAD68[(unsigned __int8)(v413 ^ v243)]
         ^ dword_1DB168[BYTE1(v196)]
         ^ dword_1DB568[BYTE2(v198)];
    v190 = v377
         ^ dword_1DB968[(v413 ^ (unsigned int)v243) >> 24]
         ^ dword_1DAD68[(unsigned __int8)v196]
         ^ dword_1DB168[BYTE1(v198)]
         ^ dword_1DB568[BYTE2(v197)];
    v493 = dword_1DB968[HIBYTE(v190)]
         ^ dword_1DAD68[(unsigned __int8)(v400 ^ v267)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v393 ^ v255) >> 8)]
         ^ dword_1DB568[BYTE2(v191)]
         ^ v492;
    v490 = dword_1DB968[(v400 ^ (unsigned int)v267) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v393 ^ v255)]
         ^ dword_1DB168[BYTE1(v191)]
         ^ dword_1DB568[BYTE2(v190)]
         ^ v489;
    v487 = dword_1DB968[(v393 ^ (unsigned int)v255) >> 24]
         ^ dword_1DAD68[(unsigned __int8)v191]
         ^ dword_1DB168[BYTE1(v190)]
         ^ dword_1DB568[(unsigned __int8)((v400 ^ (unsigned int)v267) >> 16)]
         ^ v486;
    v484 = dword_1DB968[HIBYTE(v191)]
         ^ dword_1DAD68[(unsigned __int8)v190]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v400 ^ v267) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v393 ^ (unsigned int)v255) >> 16)]
         ^ v483;
    v189 = v364;
    v188 = v357;
    v187 = v350;
    v365 = dword_1DB968[HIBYTE(v371)]
         ^ dword_1DAD68[(unsigned __int8)v364]
         ^ dword_1DB168[BYTE1(v357)]
         ^ dword_1DB568[BYTE2(v350)];
    v358 = dword_1DB968[HIBYTE(v189)]
         ^ dword_1DAD68[(unsigned __int8)v357]
         ^ dword_1DB168[BYTE1(v350)]
         ^ dword_1DB568[BYTE2(v371)];
    v351 = dword_1DB968[HIBYTE(v188)]
         ^ dword_1DAD68[(unsigned __int8)v350]
         ^ dword_1DB168[BYTE1(v371)]
         ^ dword_1DB568[BYTE2(v189)];
    v186 = dword_1DB968[HIBYTE(v187)]
         ^ dword_1DAD68[(unsigned __int8)v371]
         ^ dword_1DB168[BYTE1(v189)]
         ^ dword_1DB568[BYTE2(v188)];
    v372 = v400 ^ v365;
    v366 = v393 ^ v358;
    v359 = v385 ^ v351;
    v352 = v377 ^ v186;
    v185 = v377 ^ v186 ^ v496;
    v184 = v337;
    v183 = v329;
    v182 = v321;
    v338 = dword_1DB968[HIBYTE(v345)]
         ^ dword_1DAD68[(unsigned __int8)v337]
         ^ dword_1DB168[BYTE1(v329)]
         ^ dword_1DB568[BYTE2(v321)];
    v330 = dword_1DB968[HIBYTE(v184)]
         ^ dword_1DAD68[(unsigned __int8)v329]
         ^ dword_1DB168[BYTE1(v321)]
         ^ dword_1DB568[BYTE2(v345)];
    v322 = dword_1DB968[HIBYTE(v183)]
         ^ dword_1DAD68[(unsigned __int8)v321]
         ^ dword_1DB168[BYTE1(v345)]
         ^ dword_1DB568[BYTE2(v184)];
    v181 = dword_1DB968[HIBYTE(v182)]
         ^ dword_1DAD68[(unsigned __int8)v345]
         ^ dword_1DB168[BYTE1(v184)]
         ^ dword_1DB568[BYTE2(v183)];
    v346 = v372 ^ v338;
    v339 = v366 ^ v330;
    v331 = v359 ^ v322;
    v323 = v377 ^ v186 ^ v181;
    v180 = v346
         ^ dword_1DB968[HIBYTE(v185)]
         ^ dword_1DAD68[(unsigned __int8)(v372 ^ v505)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v366 ^ v502) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v359 ^ (unsigned int)v499) >> 16)];
    v179 = v339
         ^ dword_1DB968[(v372 ^ (unsigned int)v505) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v366 ^ v502)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v359 ^ v499) >> 8)]
         ^ dword_1DB568[BYTE2(v185)];
    v178 = v331
         ^ dword_1DB968[(v366 ^ (unsigned int)v502) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v359 ^ v499)]
         ^ dword_1DB168[BYTE1(v185)]
         ^ dword_1DB568[(unsigned __int8)((v372 ^ (unsigned int)v505) >> 16)];
    v177 = v323
         ^ dword_1DB968[(v359 ^ (unsigned int)v499) >> 24]
         ^ dword_1DAD68[(unsigned __int8)v185]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v372 ^ v505) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v366 ^ (unsigned int)v502) >> 16)];
    v176 = v308;
    v175 = v300;
    v174 = v292;
    v309 = dword_1DB968[HIBYTE(v316)]
         ^ dword_1DAD68[(unsigned __int8)v308]
         ^ dword_1DB168[BYTE1(v300)]
         ^ dword_1DB568[BYTE2(v292)];
    v301 = dword_1DB968[HIBYTE(v176)]
         ^ dword_1DAD68[(unsigned __int8)v300]
         ^ dword_1DB168[BYTE1(v292)]
         ^ dword_1DB568[BYTE2(v316)];
    v293 = dword_1DB968[HIBYTE(v175)]
         ^ dword_1DAD68[(unsigned __int8)v292]
         ^ dword_1DB168[BYTE1(v316)]
         ^ dword_1DB568[BYTE2(v176)];
    v173 = dword_1DB968[HIBYTE(v174)]
         ^ dword_1DAD68[(unsigned __int8)v316]
         ^ dword_1DB168[BYTE1(v176)]
         ^ dword_1DB568[BYTE2(v175)];
    v317 = v346 ^ v309;
    v310 = v339 ^ v301;
    v302 = v331 ^ v293;
    v294 = v323 ^ v173;
    v172 = v317
         ^ dword_1DB968[HIBYTE(v177)]
         ^ dword_1DAD68[(unsigned __int8)v180]
         ^ dword_1DB168[BYTE1(v179)]
         ^ dword_1DB568[BYTE2(v178)];
    v171 = v310
         ^ dword_1DB968[HIBYTE(v180)]
         ^ dword_1DAD68[(unsigned __int8)v179]
         ^ dword_1DB168[BYTE1(v178)]
         ^ dword_1DB568[BYTE2(v177)];
    v170 = v302
         ^ dword_1DB968[HIBYTE(v179)]
         ^ dword_1DAD68[(unsigned __int8)v178]
         ^ dword_1DB168[BYTE1(v177)]
         ^ dword_1DB568[BYTE2(v180)];
    v169 = v323
         ^ v173
         ^ dword_1DB968[HIBYTE(v178)]
         ^ dword_1DAD68[(unsigned __int8)v177]
         ^ dword_1DB168[BYTE1(v180)]
         ^ dword_1DB568[BYTE2(v179)];
    v268 = dword_1DB968[HIBYTE(v169)]
         ^ dword_1DAD68[(unsigned __int8)v172]
         ^ dword_1DB168[BYTE1(v171)]
         ^ dword_1DB568[BYTE2(v170)];
    v256 = dword_1DB968[HIBYTE(v172)]
         ^ dword_1DAD68[(unsigned __int8)v171]
         ^ dword_1DB168[BYTE1(v170)]
         ^ dword_1DB568[BYTE2(v169)];
    v244 = dword_1DB968[HIBYTE(v171)]
         ^ dword_1DAD68[(unsigned __int8)v170]
         ^ dword_1DB168[BYTE1(v169)]
         ^ dword_1DB568[BYTE2(v172)];
    v233 = dword_1DB968[HIBYTE(v170)]
         ^ dword_1DAD68[(unsigned __int8)v169]
         ^ dword_1DB168[BYTE1(v172)]
         ^ dword_1DB568[BYTE2(v171)];
    v168 = v282;
    v167 = v276;
    v166 = v270;
    v283 = dword_1DB968[HIBYTE(v288)]
         ^ dword_1DAD68[(unsigned __int8)v282]
         ^ dword_1DB168[BYTE1(v276)]
         ^ dword_1DB568[BYTE2(v270)];
    v277 = dword_1DB968[HIBYTE(v168)]
         ^ dword_1DAD68[(unsigned __int8)v276]
         ^ dword_1DB168[BYTE1(v270)]
         ^ dword_1DB568[BYTE2(v288)];
    v271 = dword_1DB968[HIBYTE(v167)]
         ^ dword_1DAD68[(unsigned __int8)v270]
         ^ dword_1DB168[BYTE1(v288)]
         ^ dword_1DB568[BYTE2(v168)];
    v165 = dword_1DB968[HIBYTE(v166)]
         ^ dword_1DAD68[(unsigned __int8)v288]
         ^ dword_1DB168[BYTE1(v168)]
         ^ dword_1DB568[BYTE2(v167)];
    v289 = v317 ^ v283;
    v284 = v310 ^ v277;
    v278 = v302 ^ v271;
    v272 = v323 ^ v173 ^ v165;
    if ( i == 2 )
    {
      v289 ^= a1[51];
      v284 ^= a1[52];
      v278 ^= a1[49];
      v272 ^= ~a1[50];
    }
    v517 = dword_1DB968[(v272 ^ (unsigned int)v233) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v289 ^ v268)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v284 ^ v256) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v278 ^ (unsigned int)v244) >> 16)]
         ^ v516;
    v514 = dword_1DB968[(v289 ^ (unsigned int)v268) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v284 ^ v256)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v278 ^ v244) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v272 ^ (unsigned int)v233) >> 16)]
         ^ v513;
    v511 = dword_1DB968[(v284 ^ (unsigned int)v256) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v278 ^ v244)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v272 ^ v233) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v289 ^ (unsigned int)v268) >> 16)]
         ^ v510;
    v508 = dword_1DB968[(v278 ^ (unsigned int)v244) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v272 ^ v233)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v289 ^ v268) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v284 ^ (unsigned int)v256) >> 16)]
         ^ v507;
    v481 = v310 ^ v480;
    v475 = v302 ^ v474;
    v468 = v294 ^ v467;
    v461 = v289 ^ v460;
    v455 = v284 ^ v454;
    v448 = v278 ^ v447;
    v440 = v272 ^ v439;
    v432 = v481 ^ v431;
    v164 = v455
         ^ dword_1DB968[(v461 ^ (unsigned int)v484) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v481 ^ v493)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v475 ^ v490) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v468 ^ (unsigned int)v487) >> 16)];
    v163 = v448
         ^ dword_1DB968[(v481 ^ v493) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v475 ^ v490)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v468 ^ v487) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v461 ^ (unsigned int)v484) >> 16)];
    v162 = v440
         ^ dword_1DB968[(v475 ^ (unsigned int)v490) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v468 ^ v487)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v461 ^ v484) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v481 ^ v493) >> 16)];
    v161 = v432
         ^ dword_1DB968[(v468 ^ (unsigned int)v487) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v461 ^ v484)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v481 ^ v493) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v475 ^ (unsigned int)v490) >> 16)];
    v427 = v475 ^ v426;
    v421 = v468 ^ v420;
    v414 = v461 ^ v413;
    v407 = v455 ^ v406;
    v160 = v427
         ^ dword_1DB968[HIBYTE(v161)]
         ^ dword_1DAD68[(unsigned __int8)v164]
         ^ dword_1DB168[BYTE1(v163)]
         ^ dword_1DB568[BYTE2(v162)];
    v159 = v421
         ^ dword_1DB968[HIBYTE(v164)]
         ^ dword_1DAD68[(unsigned __int8)v163]
         ^ dword_1DB168[BYTE1(v162)]
         ^ dword_1DB568[BYTE2(v161)];
    v158 = v414
         ^ dword_1DB968[HIBYTE(v163)]
         ^ dword_1DAD68[(unsigned __int8)v162]
         ^ dword_1DB168[BYTE1(v161)]
         ^ dword_1DB568[BYTE2(v164)];
    v157 = v407
         ^ dword_1DB968[HIBYTE(v162)]
         ^ dword_1DAD68[(unsigned __int8)v161]
         ^ dword_1DB168[BYTE1(v164)]
         ^ dword_1DB568[BYTE2(v163)];
    v401 = v448 ^ v400;
    v394 = v440 ^ v393;
    v386 = v432 ^ v385;
    v378 = v427 ^ v377;
    v156 = v401
         ^ dword_1DB968[HIBYTE(v157)]
         ^ dword_1DAD68[(unsigned __int8)v160]
         ^ dword_1DB168[BYTE1(v159)]
         ^ dword_1DB568[BYTE2(v158)];
    v155 = v394
         ^ dword_1DB968[HIBYTE(v160)]
         ^ dword_1DAD68[(unsigned __int8)v159]
         ^ dword_1DB168[BYTE1(v158)]
         ^ dword_1DB568[BYTE2(v157)];
    v154 = v386
         ^ dword_1DB968[HIBYTE(v159)]
         ^ dword_1DAD68[(unsigned __int8)v158]
         ^ dword_1DB168[BYTE1(v157)]
         ^ dword_1DB568[BYTE2(v160)];
    v153 = v378
         ^ dword_1DB968[HIBYTE(v158)]
         ^ dword_1DAD68[(unsigned __int8)v157]
         ^ dword_1DB168[BYTE1(v160)]
         ^ dword_1DB568[BYTE2(v159)];
    v506 = dword_1DB968[HIBYTE(v153)]
         ^ dword_1DAD68[(unsigned __int8)v156]
         ^ dword_1DB168[BYTE1(v155)]
         ^ dword_1DB568[BYTE2(v154)]
         ^ v505;
    v503 = dword_1DB968[HIBYTE(v156)]
         ^ dword_1DAD68[(unsigned __int8)v155]
         ^ dword_1DB168[BYTE1(v154)]
         ^ dword_1DB568[BYTE2(v153)]
         ^ v502;
    v500 = dword_1DB968[HIBYTE(v155)]
         ^ dword_1DAD68[(unsigned __int8)v154]
         ^ dword_1DB168[BYTE1(v153)]
         ^ dword_1DB568[BYTE2(v156)]
         ^ v499;
    v497 = dword_1DB968[HIBYTE(v154)]
         ^ dword_1DAD68[(unsigned __int8)v153]
         ^ dword_1DB168[BYTE1(v156)]
         ^ dword_1DB568[BYTE2(v155)]
         ^ v496;
    v373 = v421 ^ v372;
    v367 = v414 ^ v366;
    v360 = v407 ^ v359;
    v353 = v401 ^ v352;
    v347 = v394 ^ v346;
    v340 = v386 ^ v339;
    v332 = v378 ^ v331;
    v324 = v373 ^ v323;
    v152 = v347
         ^ dword_1DB968[(v353 ^ (unsigned int)v508) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v373 ^ v517)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v367 ^ v514) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v360 ^ (unsigned int)v511) >> 16)];
    v151 = v340
         ^ dword_1DB968[(v373 ^ v517) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v367 ^ v514)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v360 ^ v511) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v353 ^ (unsigned int)v508) >> 16)];
    v150 = v332
         ^ dword_1DB968[(v367 ^ (unsigned int)v514) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v360 ^ v511)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v353 ^ v508) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v373 ^ v517) >> 16)];
    v149 = v324
         ^ dword_1DB968[(v360 ^ (unsigned int)v511) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v353 ^ v508)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v373 ^ v517) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v367 ^ (unsigned int)v514) >> 16)];
    v318 = v367 ^ v317;
    v311 = v360 ^ v310;
    v303 = v353 ^ v302;
    v295 = v347 ^ v294;
    v148 = v318
         ^ dword_1DB968[HIBYTE(v149)]
         ^ dword_1DAD68[(unsigned __int8)v152]
         ^ dword_1DB168[BYTE1(v151)]
         ^ dword_1DB568[BYTE2(v150)];
    v147 = v311
         ^ dword_1DB968[HIBYTE(v152)]
         ^ dword_1DAD68[(unsigned __int8)v151]
         ^ dword_1DB168[BYTE1(v150)]
         ^ dword_1DB568[BYTE2(v149)];
    v146 = v303
         ^ dword_1DB968[HIBYTE(v151)]
         ^ dword_1DAD68[(unsigned __int8)v150]
         ^ dword_1DB168[BYTE1(v149)]
         ^ dword_1DB568[BYTE2(v152)];
    v145 = v295
         ^ dword_1DB968[HIBYTE(v150)]
         ^ dword_1DAD68[(unsigned __int8)v149]
         ^ dword_1DB168[BYTE1(v152)]
         ^ dword_1DB568[BYTE2(v151)];
    v290 = v340 ^ v289;
    v285 = v332 ^ v284;
    v279 = v324 ^ v278;
    v273 = v318 ^ v272;
    v144 = v290
         ^ dword_1DB968[HIBYTE(v145)]
         ^ dword_1DAD68[(unsigned __int8)v148]
         ^ dword_1DB168[BYTE1(v147)]
         ^ dword_1DB568[BYTE2(v146)];
    v143 = v285
         ^ dword_1DB968[HIBYTE(v148)]
         ^ dword_1DAD68[(unsigned __int8)v147]
         ^ dword_1DB168[BYTE1(v146)]
         ^ dword_1DB568[BYTE2(v145)];
    v142 = v279
         ^ dword_1DB968[HIBYTE(v147)]
         ^ dword_1DAD68[(unsigned __int8)v146]
         ^ dword_1DB168[BYTE1(v145)]
         ^ dword_1DB568[BYTE2(v148)];
    v141 = v273
         ^ dword_1DB968[HIBYTE(v146)]
         ^ dword_1DAD68[(unsigned __int8)v145]
         ^ dword_1DB168[BYTE1(v148)]
         ^ dword_1DB568[BYTE2(v147)];
    v530 = dword_1DB968[HIBYTE(v141)]
         ^ dword_1DAD68[(unsigned __int8)v144]
         ^ dword_1DB168[BYTE1(v143)]
         ^ dword_1DB568[BYTE2(v142)]
         ^ v529;
    v527 = dword_1DB968[HIBYTE(v144)]
         ^ dword_1DAD68[(unsigned __int8)v143]
         ^ dword_1DB168[BYTE1(v142)]
         ^ dword_1DB568[BYTE2(v141)]
         ^ v526;
    v524 = dword_1DB968[HIBYTE(v143)]
         ^ dword_1DAD68[(unsigned __int8)v142]
         ^ dword_1DB168[BYTE1(v141)]
         ^ dword_1DB568[BYTE2(v144)]
         ^ v523;
    v521 = dword_1DB968[HIBYTE(v142)]
         ^ dword_1DAD68[(unsigned __int8)v141]
         ^ dword_1DB168[BYTE1(v144)]
         ^ dword_1DB568[BYTE2(v143)]
         ^ v520;
    v140 = v475;
    v139 = v468;
    v138 = v461;
    v476 = dword_1DB968[HIBYTE(v481)]
         ^ dword_1DAD68[(unsigned __int8)v475]
         ^ dword_1DB168[BYTE1(v468)]
         ^ dword_1DB568[BYTE2(v461)];
    v469 = dword_1DB968[HIBYTE(v140)]
         ^ dword_1DAD68[(unsigned __int8)v468]
         ^ dword_1DB168[BYTE1(v461)]
         ^ dword_1DB568[BYTE2(v481)];
    v462 = dword_1DB968[HIBYTE(v139)]
         ^ dword_1DAD68[(unsigned __int8)v461]
         ^ dword_1DB168[BYTE1(v481)]
         ^ dword_1DB568[BYTE2(v140)];
    v137 = dword_1DB968[HIBYTE(v138)]
         ^ dword_1DAD68[(unsigned __int8)v481]
         ^ dword_1DB168[BYTE1(v140)]
         ^ dword_1DB568[BYTE2(v139)];
    v482 = v290 ^ v476;
    v477 = v285 ^ v469;
    v470 = v279 ^ v462;
    v463 = v273 ^ v137;
    v136 = v273 ^ v137 ^ v497;
    v135 = v448;
    v134 = v440;
    v133 = v432;
    v449 = dword_1DB968[HIBYTE(v455)]
         ^ dword_1DAD68[(unsigned __int8)v448]
         ^ dword_1DB168[BYTE1(v440)]
         ^ dword_1DB568[BYTE2(v432)];
    v441 = dword_1DB968[HIBYTE(v135)]
         ^ dword_1DAD68[(unsigned __int8)v440]
         ^ dword_1DB168[BYTE1(v432)]
         ^ dword_1DB568[BYTE2(v455)];
    v433 = dword_1DB968[HIBYTE(v134)]
         ^ dword_1DAD68[(unsigned __int8)v432]
         ^ dword_1DB168[BYTE1(v455)]
         ^ dword_1DB568[BYTE2(v135)];
    v132 = dword_1DB968[HIBYTE(v133)]
         ^ dword_1DAD68[(unsigned __int8)v455]
         ^ dword_1DB168[BYTE1(v135)]
         ^ dword_1DB568[BYTE2(v134)];
    v456 = v482 ^ v449;
    v450 = v477 ^ v441;
    v442 = v470 ^ v433;
    v434 = v273 ^ v137 ^ v132;
    v131 = v456
         ^ dword_1DB968[HIBYTE(v136)]
         ^ dword_1DAD68[(unsigned __int8)(v482 ^ v506)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v477 ^ v503) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v470 ^ (unsigned int)v500) >> 16)];
    v130 = v450
         ^ dword_1DB968[(v482 ^ (unsigned int)v506) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v477 ^ v503)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v470 ^ v500) >> 8)]
         ^ dword_1DB568[BYTE2(v136)];
    v129 = v442
         ^ dword_1DB968[(v477 ^ (unsigned int)v503) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v470 ^ v500)]
         ^ dword_1DB168[BYTE1(v136)]
         ^ dword_1DB568[(unsigned __int8)((v482 ^ (unsigned int)v506) >> 16)];
    v128 = v434
         ^ dword_1DB968[(v470 ^ (unsigned int)v500) >> 24]
         ^ dword_1DAD68[(unsigned __int8)v136]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v482 ^ v506) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v477 ^ (unsigned int)v503) >> 16)];
    v127 = v421;
    v126 = v414;
    v125 = v407;
    v422 = dword_1DB968[HIBYTE(v427)]
         ^ dword_1DAD68[(unsigned __int8)v421]
         ^ dword_1DB168[BYTE1(v414)]
         ^ dword_1DB568[BYTE2(v407)];
    v415 = dword_1DB968[HIBYTE(v127)]
         ^ dword_1DAD68[(unsigned __int8)v414]
         ^ dword_1DB168[BYTE1(v407)]
         ^ dword_1DB568[BYTE2(v427)];
    v408 = dword_1DB968[HIBYTE(v126)]
         ^ dword_1DAD68[(unsigned __int8)v407]
         ^ dword_1DB168[BYTE1(v427)]
         ^ dword_1DB568[BYTE2(v127)];
    v124 = dword_1DB968[HIBYTE(v125)]
         ^ dword_1DAD68[(unsigned __int8)v427]
         ^ dword_1DB168[BYTE1(v127)]
         ^ dword_1DB568[BYTE2(v126)];
    v428 = v456 ^ v422;
    v423 = v450 ^ v415;
    v416 = v442 ^ v408;
    v409 = v434 ^ v124;
    v123 = v428
         ^ dword_1DB968[HIBYTE(v128)]
         ^ dword_1DAD68[(unsigned __int8)v131]
         ^ dword_1DB168[BYTE1(v130)]
         ^ dword_1DB568[BYTE2(v129)];
    v122 = v423
         ^ dword_1DB968[HIBYTE(v131)]
         ^ dword_1DAD68[(unsigned __int8)v130]
         ^ dword_1DB168[BYTE1(v129)]
         ^ dword_1DB568[BYTE2(v128)];
    v121 = v416
         ^ dword_1DB968[HIBYTE(v130)]
         ^ dword_1DAD68[(unsigned __int8)v129]
         ^ dword_1DB168[BYTE1(v128)]
         ^ dword_1DB568[BYTE2(v131)];
    v120 = v434
         ^ v124
         ^ dword_1DB968[HIBYTE(v129)]
         ^ dword_1DAD68[(unsigned __int8)v128]
         ^ dword_1DB168[BYTE1(v131)]
         ^ dword_1DB568[BYTE2(v130)];
    v119 = v394;
    v118 = v386;
    v117 = v378;
    v395 = dword_1DB968[HIBYTE(v401)]
         ^ dword_1DAD68[(unsigned __int8)v394]
         ^ dword_1DB168[BYTE1(v386)]
         ^ dword_1DB568[BYTE2(v378)];
    v387 = dword_1DB968[HIBYTE(v119)]
         ^ dword_1DAD68[(unsigned __int8)v386]
         ^ dword_1DB168[BYTE1(v378)]
         ^ dword_1DB568[BYTE2(v401)];
    v379 = dword_1DB968[HIBYTE(v118)]
         ^ dword_1DAD68[(unsigned __int8)v378]
         ^ dword_1DB168[BYTE1(v401)]
         ^ dword_1DB568[BYTE2(v119)];
    v116 = dword_1DB968[HIBYTE(v117)]
         ^ dword_1DAD68[(unsigned __int8)v401]
         ^ dword_1DB168[BYTE1(v119)]
         ^ dword_1DB568[BYTE2(v118)];
    v402 = v428 ^ v395;
    v396 = v423 ^ v387;
    v388 = v416 ^ v379;
    v380 = v434 ^ v124 ^ v116;
    v115 = v402
         ^ dword_1DB968[HIBYTE(v120)]
         ^ dword_1DAD68[(unsigned __int8)v123]
         ^ dword_1DB168[BYTE1(v122)]
         ^ dword_1DB568[BYTE2(v121)];
    v114 = v396
         ^ dword_1DB968[HIBYTE(v123)]
         ^ dword_1DAD68[(unsigned __int8)v122]
         ^ dword_1DB168[BYTE1(v121)]
         ^ dword_1DB568[BYTE2(v120)];
    v113 = v388
         ^ dword_1DB968[HIBYTE(v122)]
         ^ dword_1DAD68[(unsigned __int8)v121]
         ^ dword_1DB168[BYTE1(v120)]
         ^ dword_1DB568[BYTE2(v123)];
    v112 = v380
         ^ dword_1DB968[HIBYTE(v121)]
         ^ dword_1DAD68[(unsigned __int8)v120]
         ^ dword_1DB168[BYTE1(v123)]
         ^ dword_1DB568[BYTE2(v122)];
    v516 = dword_1DB968[HIBYTE(v112)]
         ^ dword_1DAD68[(unsigned __int8)v115]
         ^ dword_1DB168[BYTE1(v114)]
         ^ dword_1DB568[BYTE2(v113)]
         ^ v517;
    v513 = dword_1DB968[HIBYTE(v115)]
         ^ dword_1DAD68[(unsigned __int8)v114]
         ^ dword_1DB168[BYTE1(v113)]
         ^ dword_1DB568[BYTE2(v112)]
         ^ v514;
    v510 = dword_1DB968[HIBYTE(v114)]
         ^ dword_1DAD68[(unsigned __int8)v113]
         ^ dword_1DB168[BYTE1(v112)]
         ^ dword_1DB568[BYTE2(v115)]
         ^ v511;
    v507 = dword_1DB968[HIBYTE(v113)]
         ^ dword_1DAD68[(unsigned __int8)v112]
         ^ dword_1DB168[BYTE1(v115)]
         ^ dword_1DB568[BYTE2(v114)]
         ^ v508;
    v111 = v367;
    v110 = v360;
    v109 = v353;
    v368 = dword_1DB968[HIBYTE(v373)]
         ^ dword_1DAD68[(unsigned __int8)v367]
         ^ dword_1DB168[BYTE1(v360)]
         ^ dword_1DB568[BYTE2(v353)];
    v361 = dword_1DB968[HIBYTE(v111)]
         ^ dword_1DAD68[(unsigned __int8)v360]
         ^ dword_1DB168[BYTE1(v353)]
         ^ dword_1DB568[BYTE2(v373)];
    v354 = dword_1DB968[HIBYTE(v110)]
         ^ dword_1DAD68[(unsigned __int8)v353]
         ^ dword_1DB168[BYTE1(v373)]
         ^ dword_1DB568[BYTE2(v111)];
    v108 = dword_1DB968[HIBYTE(v109)]
         ^ dword_1DAD68[(unsigned __int8)v373]
         ^ dword_1DB168[BYTE1(v111)]
         ^ dword_1DB568[BYTE2(v110)];
    v374 = v402 ^ v368;
    v369 = v396 ^ v361;
    v362 = v388 ^ v354;
    v355 = v380 ^ v108;
    v107 = v380 ^ v108 ^ v521;
    v106 = v340;
    v105 = v332;
    v104 = v324;
    v341 = dword_1DB968[HIBYTE(v347)]
         ^ dword_1DAD68[(unsigned __int8)v340]
         ^ dword_1DB168[BYTE1(v332)]
         ^ dword_1DB568[BYTE2(v324)];
    v333 = dword_1DB968[HIBYTE(v106)]
         ^ dword_1DAD68[(unsigned __int8)v332]
         ^ dword_1DB168[BYTE1(v324)]
         ^ dword_1DB568[BYTE2(v347)];
    v325 = dword_1DB968[HIBYTE(v105)]
         ^ dword_1DAD68[(unsigned __int8)v324]
         ^ dword_1DB168[BYTE1(v347)]
         ^ dword_1DB568[BYTE2(v106)];
    v103 = dword_1DB968[HIBYTE(v104)]
         ^ dword_1DAD68[(unsigned __int8)v347]
         ^ dword_1DB168[BYTE1(v106)]
         ^ dword_1DB568[BYTE2(v105)];
    v348 = v374 ^ v341;
    v342 = v369 ^ v333;
    v334 = v362 ^ v325;
    v326 = v380 ^ v108 ^ v103;
    v102 = v348
         ^ dword_1DB968[HIBYTE(v107)]
         ^ dword_1DAD68[(unsigned __int8)(v374 ^ v530)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v369 ^ v527) >> 8)]
         ^ dword_1DB568[(unsigned __int8)((v362 ^ (unsigned int)v524) >> 16)];
    v101 = v342
         ^ dword_1DB968[(v374 ^ (unsigned int)v530) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v369 ^ v527)]
         ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v362 ^ v524) >> 8)]
         ^ dword_1DB568[BYTE2(v107)];
    v100 = v334
         ^ dword_1DB968[(v369 ^ (unsigned int)v527) >> 24]
         ^ dword_1DAD68[(unsigned __int8)(v362 ^ v524)]
         ^ dword_1DB168[BYTE1(v107)]
         ^ dword_1DB568[(unsigned __int8)((v374 ^ (unsigned int)v530) >> 16)];
    v99 = v326
        ^ dword_1DB968[(v362 ^ (unsigned int)v524) >> 24]
        ^ dword_1DAD68[(unsigned __int8)v107]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v374 ^ v530) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v369 ^ (unsigned int)v527) >> 16)];
    v98 = v311;
    v97 = v303;
    v96 = v295;
    v312 = dword_1DB968[HIBYTE(v318)]
         ^ dword_1DAD68[(unsigned __int8)v311]
         ^ dword_1DB168[BYTE1(v303)]
         ^ dword_1DB568[BYTE2(v295)];
    v304 = dword_1DB968[HIBYTE(v98)]
         ^ dword_1DAD68[(unsigned __int8)v303]
         ^ dword_1DB168[BYTE1(v295)]
         ^ dword_1DB568[BYTE2(v318)];
    v296 = dword_1DB968[HIBYTE(v97)]
         ^ dword_1DAD68[(unsigned __int8)v295]
         ^ dword_1DB168[BYTE1(v318)]
         ^ dword_1DB568[BYTE2(v98)];
    v95 = dword_1DB968[HIBYTE(v96)]
        ^ dword_1DAD68[(unsigned __int8)v318]
        ^ dword_1DB168[BYTE1(v98)]
        ^ dword_1DB568[BYTE2(v97)];
    v319 = v348 ^ v312;
    v313 = v342 ^ v304;
    v305 = v334 ^ v296;
    v297 = v326 ^ v95;
    v94 = v319
        ^ dword_1DB968[HIBYTE(v99)]
        ^ dword_1DAD68[(unsigned __int8)v102]
        ^ dword_1DB168[BYTE1(v101)]
        ^ dword_1DB568[BYTE2(v100)];
    v93 = v313
        ^ dword_1DB968[HIBYTE(v102)]
        ^ dword_1DAD68[(unsigned __int8)v101]
        ^ dword_1DB168[BYTE1(v100)]
        ^ dword_1DB568[BYTE2(v99)];
    v92 = v305
        ^ dword_1DB968[HIBYTE(v101)]
        ^ dword_1DAD68[(unsigned __int8)v100]
        ^ dword_1DB168[BYTE1(v99)]
        ^ dword_1DB568[BYTE2(v102)];
    v91 = v326
        ^ v95
        ^ dword_1DB968[HIBYTE(v100)]
        ^ dword_1DAD68[(unsigned __int8)v99]
        ^ dword_1DB168[BYTE1(v102)]
        ^ dword_1DB568[BYTE2(v101)];
    v90 = v285;
    v89 = v279;
    v88 = v273;
    v286 = dword_1DB968[HIBYTE(v290)]
         ^ dword_1DAD68[(unsigned __int8)v285]
         ^ dword_1DB168[BYTE1(v279)]
         ^ dword_1DB568[BYTE2(v273)];
    v280 = dword_1DB968[HIBYTE(v90)]
         ^ dword_1DAD68[(unsigned __int8)v279]
         ^ dword_1DB168[BYTE1(v273)]
         ^ dword_1DB568[BYTE2(v290)];
    v274 = dword_1DB968[HIBYTE(v89)]
         ^ dword_1DAD68[(unsigned __int8)v273]
         ^ dword_1DB168[BYTE1(v290)]
         ^ dword_1DB568[BYTE2(v90)];
    v87 = dword_1DB968[HIBYTE(v88)]
        ^ dword_1DAD68[(unsigned __int8)v290]
        ^ dword_1DB168[BYTE1(v90)]
        ^ dword_1DB568[BYTE2(v89)];
    v291 = v319 ^ v286;
    v287 = v313 ^ v280;
    v281 = v305 ^ v274;
    v275 = v326 ^ v95 ^ v87;
    v86 = v291
        ^ dword_1DB968[HIBYTE(v91)]
        ^ dword_1DAD68[(unsigned __int8)v94]
        ^ dword_1DB168[BYTE1(v93)]
        ^ dword_1DB568[BYTE2(v92)];
    v85 = v287
        ^ dword_1DB968[HIBYTE(v94)]
        ^ dword_1DAD68[(unsigned __int8)v93]
        ^ dword_1DB168[BYTE1(v92)]
        ^ dword_1DB568[BYTE2(v91)];
    v84 = v281
        ^ dword_1DB968[HIBYTE(v93)]
        ^ dword_1DAD68[(unsigned __int8)v92]
        ^ dword_1DB168[BYTE1(v91)]
        ^ dword_1DB568[BYTE2(v94)];
    v83 = v275
        ^ dword_1DB968[HIBYTE(v92)]
        ^ dword_1DAD68[(unsigned __int8)v91]
        ^ dword_1DB168[BYTE1(v94)]
        ^ dword_1DB568[BYTE2(v93)];
    v492 = dword_1DB968[HIBYTE(v83)]
         ^ dword_1DAD68[(unsigned __int8)v86]
         ^ dword_1DB168[BYTE1(v85)]
         ^ dword_1DB568[BYTE2(v84)]
         ^ v493;
    v489 = dword_1DB968[HIBYTE(v86)]
         ^ dword_1DAD68[(unsigned __int8)v85]
         ^ dword_1DB168[BYTE1(v84)]
         ^ dword_1DB568[BYTE2(v83)]
         ^ v490;
    v486 = dword_1DB968[HIBYTE(v85)]
         ^ dword_1DAD68[(unsigned __int8)v84]
         ^ dword_1DB168[BYTE1(v83)]
         ^ dword_1DB568[BYTE2(v86)]
         ^ v487;
    v483 = dword_1DB968[HIBYTE(v84)]
         ^ dword_1DAD68[(unsigned __int8)v83]
         ^ dword_1DB168[BYTE1(v86)]
         ^ dword_1DB568[BYTE2(v85)]
         ^ v484;
    v479 = v313 ^ v482;
    v472 = v305 ^ v477;
    v465 = v326 ^ v95 ^ v470;
    v458 = v291 ^ v463;
    v453 = v287 ^ v456;
    v445 = v281 ^ v450;
    v437 = v275 ^ v442;
    v429 = v479 ^ v434;
    v82 = v453
        ^ dword_1DB968[(v458 ^ (unsigned int)v507) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v479 ^ v516)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v472 ^ v513) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v465 ^ (unsigned int)v510) >> 16)];
    v81 = v445
        ^ dword_1DB968[(v479 ^ v516) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v472 ^ v513)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v465 ^ v510) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v458 ^ (unsigned int)v507) >> 16)];
    v80 = v437
        ^ dword_1DB968[(v472 ^ (unsigned int)v513) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v465 ^ v510)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v458 ^ v507) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v479 ^ v516) >> 16)];
    v79 = v429
        ^ dword_1DB968[(v465 ^ (unsigned int)v510) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v458 ^ v507)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v479 ^ v516) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v472 ^ (unsigned int)v513) >> 16)];
    v425 = v472 ^ v428;
    v418 = v465 ^ v423;
    v411 = v458 ^ v416;
    v404 = v453 ^ v409;
    v78 = v425
        ^ dword_1DB968[HIBYTE(v79)]
        ^ dword_1DAD68[(unsigned __int8)v82]
        ^ dword_1DB168[BYTE1(v81)]
        ^ dword_1DB568[BYTE2(v80)];
    v77 = v418
        ^ dword_1DB968[HIBYTE(v82)]
        ^ dword_1DAD68[(unsigned __int8)v81]
        ^ dword_1DB168[BYTE1(v80)]
        ^ dword_1DB568[BYTE2(v79)];
    v76 = v411
        ^ dword_1DB968[HIBYTE(v81)]
        ^ dword_1DAD68[(unsigned __int8)v80]
        ^ dword_1DB168[BYTE1(v79)]
        ^ dword_1DB568[BYTE2(v82)];
    v75 = v404
        ^ dword_1DB968[HIBYTE(v80)]
        ^ dword_1DAD68[(unsigned __int8)v79]
        ^ dword_1DB168[BYTE1(v82)]
        ^ dword_1DB568[BYTE2(v81)];
    v399 = v445 ^ v402;
    v391 = v437 ^ v396;
    v383 = v429 ^ v388;
    v375 = v425 ^ v380;
    v74 = v399
        ^ dword_1DB968[HIBYTE(v75)]
        ^ dword_1DAD68[(unsigned __int8)v78]
        ^ dword_1DB168[BYTE1(v77)]
        ^ dword_1DB568[BYTE2(v76)];
    v73 = v391
        ^ dword_1DB968[HIBYTE(v78)]
        ^ dword_1DAD68[(unsigned __int8)v77]
        ^ dword_1DB168[BYTE1(v76)]
        ^ dword_1DB568[BYTE2(v75)];
    v72 = v383
        ^ dword_1DB968[HIBYTE(v77)]
        ^ dword_1DAD68[(unsigned __int8)v76]
        ^ dword_1DB168[BYTE1(v75)]
        ^ dword_1DB568[BYTE2(v78)];
    v71 = v375
        ^ dword_1DB968[HIBYTE(v76)]
        ^ dword_1DAD68[(unsigned __int8)v75]
        ^ dword_1DB168[BYTE1(v78)]
        ^ dword_1DB568[BYTE2(v77)];
    v529 = dword_1DB968[HIBYTE(v71)]
         ^ dword_1DAD68[(unsigned __int8)v74]
         ^ dword_1DB168[BYTE1(v73)]
         ^ dword_1DB568[BYTE2(v72)]
         ^ v530;
    v526 = dword_1DB968[HIBYTE(v74)]
         ^ dword_1DAD68[(unsigned __int8)v73]
         ^ dword_1DB168[BYTE1(v72)]
         ^ dword_1DB568[BYTE2(v71)]
         ^ v527;
    v523 = dword_1DB968[HIBYTE(v73)]
         ^ dword_1DAD68[(unsigned __int8)v72]
         ^ dword_1DB168[BYTE1(v71)]
         ^ dword_1DB568[BYTE2(v74)]
         ^ v524;
    v520 = dword_1DB968[HIBYTE(v72)]
         ^ dword_1DAD68[(unsigned __int8)v71]
         ^ dword_1DB168[BYTE1(v74)]
         ^ dword_1DB568[BYTE2(v73)]
         ^ v521;
    v371 = v418 ^ v374;
    v364 = v411 ^ v369;
    v357 = v404 ^ v362;
    v350 = v399 ^ v355;
    v345 = v391 ^ v348;
    v337 = v383 ^ v342;
    v329 = v375 ^ v334;
    v321 = v371 ^ v326;
    v70 = v345
        ^ dword_1DB968[(v350 ^ (unsigned int)v483) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v371 ^ v492)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v364 ^ v489) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v357 ^ (unsigned int)v486) >> 16)];
    v69 = v337
        ^ dword_1DB968[(v371 ^ v492) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v364 ^ v489)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v357 ^ v486) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v350 ^ (unsigned int)v483) >> 16)];
    v68 = v329
        ^ dword_1DB968[(v364 ^ (unsigned int)v489) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v357 ^ v486)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v350 ^ v483) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v371 ^ v492) >> 16)];
    v67 = v321
        ^ dword_1DB968[(v357 ^ (unsigned int)v486) >> 24]
        ^ dword_1DAD68[(unsigned __int8)(v350 ^ v483)]
        ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v371 ^ v492) >> 8)]
        ^ dword_1DB568[(unsigned __int8)((v364 ^ (unsigned int)v489) >> 16)];
    v316 = v364 ^ v319;
    v308 = v357 ^ v313;
    v300 = v350 ^ v305;
    v292 = v345 ^ v297;
    v66 = v316
        ^ dword_1DB968[HIBYTE(v67)]
        ^ dword_1DAD68[(unsigned __int8)v70]
        ^ dword_1DB168[BYTE1(v69)]
        ^ dword_1DB568[BYTE2(v68)];
    v65 = v308
        ^ dword_1DB968[HIBYTE(v70)]
        ^ dword_1DAD68[(unsigned __int8)v69]
        ^ dword_1DB168[BYTE1(v68)]
        ^ dword_1DB568[BYTE2(v67)];
    v64 = v300
        ^ dword_1DB968[HIBYTE(v69)]
        ^ dword_1DAD68[(unsigned __int8)v68]
        ^ dword_1DB168[BYTE1(v67)]
        ^ dword_1DB568[BYTE2(v70)];
    v63 = v292
        ^ dword_1DB968[HIBYTE(v68)]
        ^ dword_1DAD68[(unsigned __int8)v67]
        ^ dword_1DB168[BYTE1(v70)]
        ^ dword_1DB568[BYTE2(v69)];
    v288 = v337 ^ v291;
    v282 = v329 ^ v287;
    v276 = v321 ^ v281;
    v270 = v316 ^ v275;
    v62 = v288
        ^ dword_1DB968[HIBYTE(v63)]
        ^ dword_1DAD68[(unsigned __int8)v66]
        ^ dword_1DB168[BYTE1(v65)]
        ^ dword_1DB568[BYTE2(v64)];
    v61 = v282
        ^ dword_1DB968[HIBYTE(v66)]
        ^ dword_1DAD68[(unsigned __int8)v65]
        ^ dword_1DB168[BYTE1(v64)]
        ^ dword_1DB568[BYTE2(v63)];
    v60 = v276
        ^ dword_1DB968[HIBYTE(v65)]
        ^ dword_1DAD68[(unsigned __int8)v64]
        ^ dword_1DB168[BYTE1(v63)]
        ^ dword_1DB568[BYTE2(v66)];
    v59 = v270
        ^ dword_1DB968[HIBYTE(v64)]
        ^ dword_1DAD68[(unsigned __int8)v63]
        ^ dword_1DB168[BYTE1(v66)]
        ^ dword_1DB568[BYTE2(v65)];
    v505 = dword_1DB968[HIBYTE(v59)]
         ^ dword_1DAD68[(unsigned __int8)v62]
         ^ dword_1DB168[BYTE1(v61)]
         ^ dword_1DB568[BYTE2(v60)]
         ^ v506;
    v502 = dword_1DB968[HIBYTE(v62)]
         ^ dword_1DAD68[(unsigned __int8)v61]
         ^ dword_1DB168[BYTE1(v60)]
         ^ dword_1DB568[BYTE2(v59)]
         ^ v503;
    v499 = dword_1DB968[HIBYTE(v61)]
         ^ dword_1DAD68[(unsigned __int8)v60]
         ^ dword_1DB168[BYTE1(v59)]
         ^ dword_1DB568[BYTE2(v62)]
         ^ v500;
    v496 = dword_1DB968[HIBYTE(v60)]
         ^ dword_1DAD68[(unsigned __int8)v59]
         ^ dword_1DB168[BYTE1(v62)]
         ^ dword_1DB568[BYTE2(v61)]
         ^ v497;
  }
  v58 = v472;
  v57 = v465;
  v56 = v458;
  v478 = dword_1DB968[HIBYTE(v479)]
       ^ dword_1DAD68[(unsigned __int8)v472]
       ^ dword_1DB168[BYTE1(v465)]
       ^ dword_1DB568[BYTE2(v458)];
  v471 = dword_1DB968[HIBYTE(v58)]
       ^ dword_1DAD68[(unsigned __int8)v465]
       ^ dword_1DB168[BYTE1(v458)]
       ^ dword_1DB568[BYTE2(v479)];
  v464 = dword_1DB968[HIBYTE(v57)]
       ^ dword_1DAD68[(unsigned __int8)v458]
       ^ dword_1DB168[BYTE1(v479)]
       ^ dword_1DB568[BYTE2(v58)];
  v55 = dword_1DB968[HIBYTE(v56)]
      ^ dword_1DAD68[(unsigned __int8)v479]
      ^ dword_1DB168[BYTE1(v58)]
      ^ dword_1DB568[BYTE2(v57)];
  v54 = v270 ^ v55 ^ v520;
  v53 = v445;
  v52 = v437;
  v51 = v429;
  v451 = dword_1DB968[HIBYTE(v453)]
       ^ dword_1DAD68[(unsigned __int8)v445]
       ^ dword_1DB168[BYTE1(v437)]
       ^ dword_1DB568[BYTE2(v429)];
  v443 = dword_1DB968[HIBYTE(v53)]
       ^ dword_1DAD68[(unsigned __int8)v437]
       ^ dword_1DB168[BYTE1(v429)]
       ^ dword_1DB568[BYTE2(v453)];
  v435 = dword_1DB968[HIBYTE(v52)]
       ^ dword_1DAD68[(unsigned __int8)v429]
       ^ dword_1DB168[BYTE1(v453)]
       ^ dword_1DB568[BYTE2(v53)];
  v50 = dword_1DB968[HIBYTE(v51)]
      ^ dword_1DAD68[(unsigned __int8)v453]
      ^ dword_1DB168[BYTE1(v53)]
      ^ dword_1DB568[BYTE2(v52)];
  v457 = v288 ^ v478 ^ v451;
  v452 = v282 ^ v471 ^ v443;
  v444 = v276 ^ v464 ^ v435;
  v436 = v270 ^ v55 ^ v50;
  v49 = v457
      ^ dword_1DB968[HIBYTE(v54)]
      ^ dword_1DAD68[(unsigned __int8)(v288 ^ v478 ^ v529)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v282 ^ v471 ^ v526) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v276 ^ v464 ^ v523) >> 16)];
  v48 = v452
      ^ dword_1DB968[(v288 ^ v478 ^ v529) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v282 ^ v471 ^ v526)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v276 ^ v464 ^ v523) >> 8)]
      ^ dword_1DB568[BYTE2(v54)];
  v47 = v444
      ^ dword_1DB968[(v282 ^ v471 ^ v526) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v276 ^ v464 ^ v523)]
      ^ dword_1DB168[BYTE1(v54)]
      ^ dword_1DB568[(unsigned __int8)((v288 ^ v478 ^ v529) >> 16)];
  v46 = v436
      ^ dword_1DB968[(v276 ^ v464 ^ v523) >> 24]
      ^ dword_1DAD68[(unsigned __int8)v54]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v288 ^ v478 ^ v529) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v282 ^ v471 ^ v526) >> 16)];
  v45 = v418;
  v44 = v411;
  v43 = v404;
  v424 = dword_1DB968[HIBYTE(v425)]
       ^ dword_1DAD68[(unsigned __int8)v418]
       ^ dword_1DB168[BYTE1(v411)]
       ^ dword_1DB568[BYTE2(v404)];
  v417 = dword_1DB968[HIBYTE(v45)]
       ^ dword_1DAD68[(unsigned __int8)v411]
       ^ dword_1DB168[BYTE1(v404)]
       ^ dword_1DB568[BYTE2(v425)];
  v410 = dword_1DB968[HIBYTE(v44)]
       ^ dword_1DAD68[(unsigned __int8)v404]
       ^ dword_1DB168[BYTE1(v425)]
       ^ dword_1DB568[BYTE2(v45)];
  v42 = dword_1DB968[HIBYTE(v43)]
      ^ dword_1DAD68[(unsigned __int8)v425]
      ^ dword_1DB168[BYTE1(v45)]
      ^ dword_1DB568[BYTE2(v44)];
  v41 = v457
      ^ v424
      ^ dword_1DB968[HIBYTE(v46)]
      ^ dword_1DAD68[(unsigned __int8)v49]
      ^ dword_1DB168[BYTE1(v48)]
      ^ dword_1DB568[BYTE2(v47)];
  v40 = v452
      ^ v417
      ^ dword_1DB968[HIBYTE(v49)]
      ^ dword_1DAD68[(unsigned __int8)v48]
      ^ dword_1DB168[BYTE1(v47)]
      ^ dword_1DB568[BYTE2(v46)];
  v39 = v444
      ^ v410
      ^ dword_1DB968[HIBYTE(v48)]
      ^ dword_1DAD68[(unsigned __int8)v47]
      ^ dword_1DB168[BYTE1(v46)]
      ^ dword_1DB568[BYTE2(v49)];
  v38 = v436
      ^ v42
      ^ dword_1DB968[HIBYTE(v47)]
      ^ dword_1DAD68[(unsigned __int8)v46]
      ^ dword_1DB168[BYTE1(v49)]
      ^ dword_1DB568[BYTE2(v48)];
  v37 = v391;
  v36 = v383;
  v35 = v375;
  v397 = dword_1DB968[HIBYTE(v399)]
       ^ dword_1DAD68[(unsigned __int8)v391]
       ^ dword_1DB168[BYTE1(v383)]
       ^ dword_1DB568[BYTE2(v375)];
  v389 = dword_1DB968[HIBYTE(v37)]
       ^ dword_1DAD68[(unsigned __int8)v383]
       ^ dword_1DB168[BYTE1(v375)]
       ^ dword_1DB568[BYTE2(v399)];
  v381 = dword_1DB968[HIBYTE(v36)]
       ^ dword_1DAD68[(unsigned __int8)v375]
       ^ dword_1DB168[BYTE1(v399)]
       ^ dword_1DB568[BYTE2(v37)];
  v34 = dword_1DB968[HIBYTE(v35)]
      ^ dword_1DAD68[(unsigned __int8)v399]
      ^ dword_1DB168[BYTE1(v37)]
      ^ dword_1DB568[BYTE2(v36)];
  v403 = v457 ^ v424 ^ v397;
  v398 = v452 ^ v417 ^ v389;
  v390 = v444 ^ v410 ^ v381;
  v382 = v436 ^ v42 ^ v34;
  v33 = v403
      ^ dword_1DB968[HIBYTE(v38)]
      ^ dword_1DAD68[(unsigned __int8)v41]
      ^ dword_1DB168[BYTE1(v40)]
      ^ dword_1DB568[BYTE2(v39)];
  v32 = v398
      ^ dword_1DB968[HIBYTE(v41)]
      ^ dword_1DAD68[(unsigned __int8)v40]
      ^ dword_1DB168[BYTE1(v39)]
      ^ dword_1DB568[BYTE2(v38)];
  v31 = v390
      ^ dword_1DB968[HIBYTE(v40)]
      ^ dword_1DAD68[(unsigned __int8)v39]
      ^ dword_1DB168[BYTE1(v38)]
      ^ dword_1DB568[BYTE2(v41)];
  v30 = v382
      ^ dword_1DB968[HIBYTE(v39)]
      ^ dword_1DAD68[(unsigned __int8)v38]
      ^ dword_1DB168[BYTE1(v41)]
      ^ dword_1DB568[BYTE2(v40)];
  v494 = dword_1DB968[HIBYTE(v30)]
       ^ dword_1DAD68[(unsigned __int8)v33]
       ^ dword_1DB168[BYTE1(v32)]
       ^ dword_1DB568[BYTE2(v31)]
       ^ v492;
  v491 = dword_1DB968[HIBYTE(v33)]
       ^ dword_1DAD68[(unsigned __int8)v32]
       ^ dword_1DB168[BYTE1(v31)]
       ^ dword_1DB568[BYTE2(v30)]
       ^ v489;
  v488 = dword_1DB968[HIBYTE(v32)]
       ^ dword_1DAD68[(unsigned __int8)v31]
       ^ dword_1DB168[BYTE1(v30)]
       ^ dword_1DB568[BYTE2(v33)]
       ^ v486;
  v485 = dword_1DB968[HIBYTE(v31)]
       ^ dword_1DAD68[(unsigned __int8)v30]
       ^ dword_1DB168[BYTE1(v33)]
       ^ dword_1DB568[BYTE2(v32)]
       ^ v483;
  v29 = v364;
  v28 = v357;
  v27 = v350;
  v370 = dword_1DB968[HIBYTE(v371)]
       ^ dword_1DAD68[(unsigned __int8)v364]
       ^ dword_1DB168[BYTE1(v357)]
       ^ dword_1DB568[BYTE2(v350)];
  v363 = dword_1DB968[HIBYTE(v29)]
       ^ dword_1DAD68[(unsigned __int8)v357]
       ^ dword_1DB168[BYTE1(v350)]
       ^ dword_1DB568[BYTE2(v371)];
  v356 = dword_1DB968[HIBYTE(v28)]
       ^ dword_1DAD68[(unsigned __int8)v350]
       ^ dword_1DB168[BYTE1(v371)]
       ^ dword_1DB568[BYTE2(v29)];
  v26 = dword_1DB968[HIBYTE(v27)]
      ^ dword_1DAD68[(unsigned __int8)v371]
      ^ dword_1DB168[BYTE1(v29)]
      ^ dword_1DB568[BYTE2(v28)];
  v25 = v382 ^ v26 ^ v496;
  v24 = v337;
  v23 = v329;
  v22 = v321;
  v343 = dword_1DB968[HIBYTE(v345)]
       ^ dword_1DAD68[(unsigned __int8)v337]
       ^ dword_1DB168[BYTE1(v329)]
       ^ dword_1DB568[BYTE2(v321)];
  v335 = dword_1DB968[HIBYTE(v24)]
       ^ dword_1DAD68[(unsigned __int8)v329]
       ^ dword_1DB168[BYTE1(v321)]
       ^ dword_1DB568[BYTE2(v345)];
  v327 = dword_1DB968[HIBYTE(v23)]
       ^ dword_1DAD68[(unsigned __int8)v321]
       ^ dword_1DB168[BYTE1(v345)]
       ^ dword_1DB568[BYTE2(v24)];
  v21 = dword_1DB968[HIBYTE(v22)]
      ^ dword_1DAD68[(unsigned __int8)v345]
      ^ dword_1DB168[BYTE1(v24)]
      ^ dword_1DB568[BYTE2(v23)];
  v349 = v403 ^ v370 ^ v343;
  v344 = v398 ^ v363 ^ v335;
  v336 = v390 ^ v356 ^ v327;
  v328 = v382 ^ v26 ^ v21;
  v20 = v349
      ^ dword_1DB968[HIBYTE(v25)]
      ^ dword_1DAD68[(unsigned __int8)(v403 ^ v370 ^ v505)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v398 ^ v363 ^ v502) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v390 ^ v356 ^ (unsigned int)v499) >> 16)];
  v19 = v344
      ^ dword_1DB968[(v403 ^ v370 ^ (unsigned int)v505) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v398 ^ v363 ^ v502)]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v390 ^ v356 ^ v499) >> 8)]
      ^ dword_1DB568[BYTE2(v25)];
  v18 = v336
      ^ dword_1DB968[(v398 ^ v363 ^ (unsigned int)v502) >> 24]
      ^ dword_1DAD68[(unsigned __int8)(v390 ^ v356 ^ v499)]
      ^ dword_1DB168[BYTE1(v25)]
      ^ dword_1DB568[(unsigned __int8)((v403 ^ v370 ^ (unsigned int)v505) >> 16)];
  v17 = v328
      ^ dword_1DB968[(v390 ^ v356 ^ (unsigned int)v499) >> 24]
      ^ dword_1DAD68[(unsigned __int8)v25]
      ^ dword_1DB168[(unsigned __int8)((unsigned __int16)(v403 ^ v370 ^ v505) >> 8)]
      ^ dword_1DB568[(unsigned __int8)((v398 ^ v363 ^ (unsigned int)v502) >> 16)];
  v16 = v308;
  v15 = v300;
  v14 = v292;
  v314 = dword_1DB968[HIBYTE(v316)]
       ^ dword_1DAD68[(unsigned __int8)v308]
       ^ dword_1DB168[BYTE1(v300)]
       ^ dword_1DB568[BYTE2(v292)];
  v306 = dword_1DB968[HIBYTE(v16)]
       ^ dword_1DAD68[(unsigned __int8)v300]
       ^ dword_1DB168[BYTE1(v292)]
       ^ dword_1DB568[BYTE2(v316)];
  v298 = dword_1DB968[HIBYTE(v15)]
       ^ dword_1DAD68[(unsigned __int8)v292]
       ^ dword_1DB168[BYTE1(v316)]
       ^ dword_1DB568[BYTE2(v16)];
  v13 = dword_1DB968[HIBYTE(v14)]
      ^ dword_1DAD68[(unsigned __int8)v316]
      ^ dword_1DB168[BYTE1(v16)]
      ^ dword_1DB568[BYTE2(v15)];
  v320 = v349 ^ a1[50] ^ v314;
  v315 = v344 ^ a1[49] ^ v306;
  v307 = v336 ^ a1[52] ^ v298;
  v299 = v328 ^ ~a1[51] ^ v13;
  v12 = v320
      ^ dword_1DB968[HIBYTE(v17)]
      ^ dword_1DAD68[(unsigned __int8)v20]
      ^ dword_1DB168[BYTE1(v19)]
      ^ dword_1DB568[BYTE2(v18)];
  v11 = v315
      ^ dword_1DB968[HIBYTE(v20)]
      ^ dword_1DAD68[(unsigned __int8)v19]
      ^ dword_1DB168[BYTE1(v18)]
      ^ dword_1DB568[BYTE2(v17)];
  v10 = v307
      ^ dword_1DB968[HIBYTE(v19)]
      ^ dword_1DAD68[(unsigned __int8)v18]
      ^ dword_1DB168[BYTE1(v17)]
      ^ dword_1DB568[BYTE2(v20)];
  v9 = v299
     ^ dword_1DB968[HIBYTE(v18)]
     ^ dword_1DAD68[(unsigned __int8)v17]
     ^ dword_1DB168[BYTE1(v20)]
     ^ dword_1DB568[BYTE2(v19)];
  v8 = v320
     ^ dword_1DB968[HIBYTE(v288)]
     ^ dword_1DAD68[(unsigned __int8)v282]
     ^ dword_1DB168[BYTE1(v276)]
     ^ dword_1DB568[BYTE2(v270)]
     ^ dword_1DB968[HIBYTE(v9)]
     ^ dword_1DAD68[(unsigned __int8)v12]
     ^ dword_1DB168[BYTE1(v11)]
     ^ dword_1DB568[BYTE2(v10)];
  v7 = v315
     ^ dword_1DB968[HIBYTE(v282)]
     ^ dword_1DAD68[(unsigned __int8)v276]
     ^ dword_1DB168[BYTE1(v270)]
     ^ dword_1DB568[BYTE2(v288)]
     ^ dword_1DB968[HIBYTE(v12)]
     ^ dword_1DAD68[(unsigned __int8)v11]
     ^ dword_1DB168[BYTE1(v10)]
     ^ dword_1DB568[BYTE2(v9)];
  v6 = v307
     ^ dword_1DB968[HIBYTE(v276)]
     ^ dword_1DAD68[(unsigned __int8)v270]
     ^ dword_1DB168[BYTE1(v288)]
     ^ dword_1DB568[BYTE2(v282)]
     ^ dword_1DB968[HIBYTE(v11)]
     ^ dword_1DAD68[(unsigned __int8)v10]
     ^ dword_1DB168[BYTE1(v9)]
     ^ dword_1DB568[BYTE2(v12)];
  v5 = v299
     ^ dword_1DB968[HIBYTE(v270)]
     ^ dword_1DAD68[(unsigned __int8)v288]
     ^ dword_1DB168[BYTE1(v282)]
     ^ dword_1DB568[BYTE2(v276)]
     ^ dword_1DB968[HIBYTE(v10)]
     ^ dword_1DAD68[(unsigned __int8)v9]
     ^ dword_1DB168[BYTE1(v12)]
     ^ dword_1DB568[BYTE2(v11)];
  v518 = dword_1DB968[HIBYTE(v5)]
       ^ dword_1DAD68[(unsigned __int8)v8]
       ^ dword_1DB168[BYTE1(v7)]
       ^ dword_1DB568[BYTE2(v6)]
       ^ v516;
  v515 = dword_1DB968[HIBYTE(v8)]
       ^ dword_1DAD68[(unsigned __int8)v7]
       ^ dword_1DB168[BYTE1(v6)]
       ^ dword_1DB568[BYTE2(v5)]
       ^ v513;
  v512 = dword_1DB968[HIBYTE(v7)]
       ^ dword_1DAD68[(unsigned __int8)v6]
       ^ dword_1DB168[BYTE1(v5)]
       ^ dword_1DB568[BYTE2(v8)]
       ^ v510;
  v509 = dword_1DB968[HIBYTE(v6)]
       ^ dword_1DAD68[(unsigned __int8)v5]
       ^ dword_1DB168[BYTE1(v8)]
       ^ dword_1DB568[BYTE2(v7)]
       ^ v507;
  a1[33] ^= v505;
  a1[34] ^= v502;
  a1[35] ^= v499;
  a1[36] ^= v496;
  a1[37] ^= v494;
  a1[38] ^= v491;
  a1[39] ^= v488;
  a1[40] ^= v485;
  a1[41] ^= v529;
  a1[42] ^= v526;
  a1[43] ^= v523;
  a1[44] ^= v520;
  a1[45] ^= v518;
  a1[46] ^= v515;
  a1[47] ^= v512;
  a1[48] ^= v509;
  return result;
}
