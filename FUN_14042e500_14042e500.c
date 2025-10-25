
void FUN_14042e500(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,longlong param_7,ulonglong param_8,
                  longlong param_9,int param_10)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  longlong lVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  longlong lVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 unaff_XMM9_Ba;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  undefined1 unaff_XMM9_Bi;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  undefined1 unaff_XMM10_Ba;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined1 unaff_XMM10_Bi;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined1 unaff_XMM11_Ba;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  undefined1 unaff_XMM11_Bi;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  undefined1 unaff_XMM12_Ba;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  undefined1 unaff_XMM12_Bi;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  undefined1 unaff_XMM13_Bi;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  undefined1 unaff_XMM14_Ba;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  undefined1 unaff_XMM14_Bi;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  undefined1 unaff_XMM15_Ba;
  byte bVar182;
  byte bVar183;
  byte bVar184;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  undefined1 unaff_XMM15_Bi;
  byte bVar190;
  byte bVar191;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte *pbStack_2b0;
  byte *pbStack_258;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  
  lVar47 = 0;
  uVar42 = param_5 & 0xfffffffffffffffe;
  uVar61 = param_5 & 0xfffffffffffffff0;
  uVar40 = param_5 & 0xfffffffffffffff8;
  uVar59 = param_5 & 0xfffffffffffffffc;
  uVar41 = 0;
  uVar43 = param_6 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar43) {
    lVar48 = param_4 * 3;
    lVar53 = (longlong)param_10;
    lVar45 = param_2 * -4 + param_1;
    lVar49 = param_2 * 3;
    lVar52 = lVar45 + param_2 * 4;
    lVar50 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
    lVar55 = 0;
    lVar63 = lVar55;
    do {
      uVar60 = 0;
      pbStack_2b0 = (byte *)(param_3 + lVar63);
      lVar47 = 0;
      lVar46 = param_1 + lVar55;
      lVar66 = 0;
      if (0 < (longlong)(param_5 & 0xffffffffffffffe0)) {
        do {
          bVar86 = 0;
          bVar87 = 0;
          bVar88 = 0;
          bVar89 = 0;
          bVar90 = 0;
          bVar91 = 0;
          bVar92 = 0;
          bVar93 = 0;
          bVar94 = 0;
          bVar95 = 0;
          bVar96 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bVar111 = 0;
          bVar112 = 0;
          bVar113 = 0;
          bVar114 = 0;
          bVar115 = 0;
          bVar116 = 0;
          bVar117 = 0;
          bVar118 = 0;
          bVar119 = 0;
          bVar120 = 0;
          bVar121 = 0;
          bVar122 = 0;
          bVar123 = 0;
          bVar124 = 0;
          bVar125 = 0;
          bVar126 = 0;
          bVar127 = 0;
          bVar128 = 0;
          bVar129 = 0;
          bVar130 = 0;
          bVar131 = 0;
          bVar132 = 0;
          bVar133 = 0;
          bVar166 = 0;
          bVar167 = 0;
          bVar168 = 0;
          bVar169 = 0;
          bVar170 = 0;
          bVar171 = 0;
          bVar172 = 0;
          bVar173 = 0;
          bVar174 = 0;
          bVar175 = 0;
          bVar176 = 0;
          bVar177 = 0;
          bVar178 = 0;
          bVar179 = 0;
          bVar180 = 0;
          bVar181 = 0;
          bVar150 = 0;
          bVar151 = 0;
          bVar152 = 0;
          bVar153 = 0;
          bVar154 = 0;
          bVar155 = 0;
          bVar156 = 0;
          bVar157 = 0;
          bVar158 = 0;
          bVar159 = 0;
          bVar160 = 0;
          bVar161 = 0;
          bVar162 = 0;
          bVar163 = 0;
          bVar164 = 0;
          bVar165 = 0;
          bVar134 = 0;
          bVar135 = 0;
          bVar136 = 0;
          bVar137 = 0;
          bVar138 = 0;
          bVar139 = 0;
          bVar140 = 0;
          bVar141 = 0;
          bVar142 = 0;
          bVar143 = 0;
          bVar144 = 0;
          bVar145 = 0;
          bVar146 = 0;
          bVar147 = 0;
          bVar148 = 0;
          bVar149 = 0;
          bVar182 = 0;
          bVar183 = 0;
          bVar184 = 0;
          bVar185 = 0;
          bVar186 = 0;
          bVar187 = 0;
          bVar188 = 0;
          bVar189 = 0;
          bVar190 = 0;
          bVar191 = 0;
          bVar192 = 0;
          bVar193 = 0;
          bVar194 = 0;
          bVar195 = 0;
          bVar196 = 0;
          bVar197 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          bVar75 = 0;
          bVar76 = 0;
          bVar77 = 0;
          bVar78 = 0;
          bVar79 = 0;
          bVar80 = 0;
          bVar81 = 0;
          bVar82 = 0;
          if (0 < (longlong)param_8) {
            uVar51 = 0;
            lVar66 = lVar52 + lVar55 + lVar47;
            lVar44 = 0;
            do {
              uVar62 = (ulonglong)*(ushort *)(lVar50 + uVar51 * 4);
              uVar65 = 0;
              lVar56 = 0;
              if (uVar62 != 0) {
                lVar54 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar51 * 4) * param_10);
                lVar57 = lVar44 + lVar54;
                do {
                  uVar65 = uVar65 + 1;
                  pbVar1 = (byte *)(lVar56 + lVar54 + lVar66 + lVar44);
                  bVar8 = *pbVar1;
                  bVar9 = pbVar1[1];
                  bVar10 = pbVar1[2];
                  bVar11 = pbVar1[3];
                  bVar12 = pbVar1[4];
                  bVar13 = pbVar1[5];
                  bVar14 = pbVar1[6];
                  bVar15 = pbVar1[7];
                  bVar16 = pbVar1[8];
                  bVar17 = pbVar1[9];
                  bVar18 = pbVar1[10];
                  bVar19 = pbVar1[0xb];
                  bVar20 = pbVar1[0xc];
                  bVar21 = pbVar1[0xd];
                  bVar22 = pbVar1[0xe];
                  bVar23 = pbVar1[0xf];
                  pbVar1 = (byte *)(lVar56 + param_2 + lVar52 + lVar55 + lVar47 + lVar44 + lVar54);
                  bVar24 = *pbVar1;
                  bVar25 = pbVar1[1];
                  bVar26 = pbVar1[2];
                  bVar27 = pbVar1[3];
                  bVar28 = pbVar1[4];
                  bVar29 = pbVar1[5];
                  bVar30 = pbVar1[6];
                  bVar31 = pbVar1[7];
                  bVar32 = pbVar1[8];
                  bVar33 = pbVar1[9];
                  bVar34 = pbVar1[10];
                  bVar35 = pbVar1[0xb];
                  bVar36 = pbVar1[0xc];
                  bVar37 = pbVar1[0xd];
                  bVar38 = pbVar1[0xe];
                  bVar39 = pbVar1[0xf];
                  bVar86 = (bVar86 < bVar8) * bVar8 | (bVar86 >= bVar8) * bVar86;
                  bVar87 = (bVar87 < bVar9) * bVar9 | (bVar87 >= bVar9) * bVar87;
                  bVar88 = (bVar88 < bVar10) * bVar10 | (bVar88 >= bVar10) * bVar88;
                  bVar89 = (bVar89 < bVar11) * bVar11 | (bVar89 >= bVar11) * bVar89;
                  bVar90 = (bVar90 < bVar12) * bVar12 | (bVar90 >= bVar12) * bVar90;
                  bVar91 = (bVar91 < bVar13) * bVar13 | (bVar91 >= bVar13) * bVar91;
                  bVar92 = (bVar92 < bVar14) * bVar14 | (bVar92 >= bVar14) * bVar92;
                  bVar93 = (bVar93 < bVar15) * bVar15 | (bVar93 >= bVar15) * bVar93;
                  bVar94 = (bVar94 < bVar16) * bVar16 | (bVar94 >= bVar16) * bVar94;
                  bVar95 = (bVar95 < bVar17) * bVar17 | (bVar95 >= bVar17) * bVar95;
                  bVar96 = (bVar96 < bVar18) * bVar18 | (bVar96 >= bVar18) * bVar96;
                  bVar97 = (bVar97 < bVar19) * bVar19 | (bVar97 >= bVar19) * bVar97;
                  bVar98 = (bVar98 < bVar20) * bVar20 | (bVar98 >= bVar20) * bVar98;
                  bVar99 = (bVar99 < bVar21) * bVar21 | (bVar99 >= bVar21) * bVar99;
                  bVar100 = (bVar100 < bVar22) * bVar22 | (bVar100 >= bVar22) * bVar100;
                  bVar101 = (bVar101 < bVar23) * bVar23 | (bVar101 >= bVar23) * bVar101;
                  pbVar1 = (byte *)(lVar56 + lVar52 + param_2 * 2 + lVar55 + lVar47 + lVar44 +
                                             lVar54);
                  bVar8 = *pbVar1;
                  bVar9 = pbVar1[1];
                  bVar10 = pbVar1[2];
                  bVar11 = pbVar1[3];
                  bVar12 = pbVar1[4];
                  bVar13 = pbVar1[5];
                  bVar14 = pbVar1[6];
                  bVar15 = pbVar1[7];
                  bVar16 = pbVar1[8];
                  bVar17 = pbVar1[9];
                  bVar18 = pbVar1[10];
                  bVar19 = pbVar1[0xb];
                  bVar20 = pbVar1[0xc];
                  bVar21 = pbVar1[0xd];
                  bVar22 = pbVar1[0xe];
                  bVar23 = pbVar1[0xf];
                  bVar102 = (bVar102 < bVar24) * bVar24 | (bVar102 >= bVar24) * bVar102;
                  bVar103 = (bVar103 < bVar25) * bVar25 | (bVar103 >= bVar25) * bVar103;
                  bVar104 = (bVar104 < bVar26) * bVar26 | (bVar104 >= bVar26) * bVar104;
                  bVar105 = (bVar105 < bVar27) * bVar27 | (bVar105 >= bVar27) * bVar105;
                  bVar106 = (bVar106 < bVar28) * bVar28 | (bVar106 >= bVar28) * bVar106;
                  bVar107 = (bVar107 < bVar29) * bVar29 | (bVar107 >= bVar29) * bVar107;
                  bVar108 = (bVar108 < bVar30) * bVar30 | (bVar108 >= bVar30) * bVar108;
                  bVar109 = (bVar109 < bVar31) * bVar31 | (bVar109 >= bVar31) * bVar109;
                  bVar110 = (bVar110 < bVar32) * bVar32 | (bVar110 >= bVar32) * bVar110;
                  bVar111 = (bVar111 < bVar33) * bVar33 | (bVar111 >= bVar33) * bVar111;
                  bVar112 = (bVar112 < bVar34) * bVar34 | (bVar112 >= bVar34) * bVar112;
                  bVar113 = (bVar113 < bVar35) * bVar35 | (bVar113 >= bVar35) * bVar113;
                  bVar114 = (bVar114 < bVar36) * bVar36 | (bVar114 >= bVar36) * bVar114;
                  bVar115 = (bVar115 < bVar37) * bVar37 | (bVar115 >= bVar37) * bVar115;
                  bVar116 = (bVar116 < bVar38) * bVar38 | (bVar116 >= bVar38) * bVar116;
                  bVar117 = (bVar117 < bVar39) * bVar39 | (bVar117 >= bVar39) * bVar117;
                  pbVar1 = (byte *)(lVar56 + lVar49 + lVar52 + lVar55 + lVar47 + lVar44 + lVar54);
                  bVar24 = *pbVar1;
                  bVar25 = pbVar1[1];
                  bVar26 = pbVar1[2];
                  bVar27 = pbVar1[3];
                  bVar28 = pbVar1[4];
                  bVar29 = pbVar1[5];
                  bVar30 = pbVar1[6];
                  bVar31 = pbVar1[7];
                  bVar32 = pbVar1[8];
                  bVar33 = pbVar1[9];
                  bVar34 = pbVar1[10];
                  bVar35 = pbVar1[0xb];
                  bVar36 = pbVar1[0xc];
                  bVar37 = pbVar1[0xd];
                  bVar38 = pbVar1[0xe];
                  bVar39 = pbVar1[0xf];
                  bVar118 = (bVar118 < bVar8) * bVar8 | (bVar118 >= bVar8) * bVar118;
                  bVar119 = (bVar119 < bVar9) * bVar9 | (bVar119 >= bVar9) * bVar119;
                  bVar120 = (bVar120 < bVar10) * bVar10 | (bVar120 >= bVar10) * bVar120;
                  bVar121 = (bVar121 < bVar11) * bVar11 | (bVar121 >= bVar11) * bVar121;
                  bVar122 = (bVar122 < bVar12) * bVar12 | (bVar122 >= bVar12) * bVar122;
                  bVar123 = (bVar123 < bVar13) * bVar13 | (bVar123 >= bVar13) * bVar123;
                  bVar124 = (bVar124 < bVar14) * bVar14 | (bVar124 >= bVar14) * bVar124;
                  bVar125 = (bVar125 < bVar15) * bVar15 | (bVar125 >= bVar15) * bVar125;
                  bVar126 = (bVar126 < bVar16) * bVar16 | (bVar126 >= bVar16) * bVar126;
                  bVar127 = (bVar127 < bVar17) * bVar17 | (bVar127 >= bVar17) * bVar127;
                  bVar128 = (bVar128 < bVar18) * bVar18 | (bVar128 >= bVar18) * bVar128;
                  bVar129 = (bVar129 < bVar19) * bVar19 | (bVar129 >= bVar19) * bVar129;
                  bVar130 = (bVar130 < bVar20) * bVar20 | (bVar130 >= bVar20) * bVar130;
                  bVar131 = (bVar131 < bVar21) * bVar21 | (bVar131 >= bVar21) * bVar131;
                  bVar132 = (bVar132 < bVar22) * bVar22 | (bVar132 >= bVar22) * bVar132;
                  bVar133 = (bVar133 < bVar23) * bVar23 | (bVar133 >= bVar23) * bVar133;
                  pbVar1 = (byte *)(lVar56 + 0x10 + lVar57 + lVar66);
                  bVar8 = *pbVar1;
                  bVar9 = pbVar1[1];
                  bVar10 = pbVar1[2];
                  bVar11 = pbVar1[3];
                  bVar12 = pbVar1[4];
                  bVar13 = pbVar1[5];
                  bVar14 = pbVar1[6];
                  bVar15 = pbVar1[7];
                  bVar16 = pbVar1[8];
                  bVar17 = pbVar1[9];
                  bVar18 = pbVar1[10];
                  bVar19 = pbVar1[0xb];
                  bVar20 = pbVar1[0xc];
                  bVar21 = pbVar1[0xd];
                  bVar22 = pbVar1[0xe];
                  bVar23 = pbVar1[0xf];
                  bVar166 = (bVar166 < bVar24) * bVar24 | (bVar166 >= bVar24) * bVar166;
                  bVar167 = (bVar167 < bVar25) * bVar25 | (bVar167 >= bVar25) * bVar167;
                  bVar168 = (bVar168 < bVar26) * bVar26 | (bVar168 >= bVar26) * bVar168;
                  bVar169 = (bVar169 < bVar27) * bVar27 | (bVar169 >= bVar27) * bVar169;
                  bVar170 = (bVar170 < bVar28) * bVar28 | (bVar170 >= bVar28) * bVar170;
                  bVar171 = (bVar171 < bVar29) * bVar29 | (bVar171 >= bVar29) * bVar171;
                  bVar172 = (bVar172 < bVar30) * bVar30 | (bVar172 >= bVar30) * bVar172;
                  bVar173 = (bVar173 < bVar31) * bVar31 | (bVar173 >= bVar31) * bVar173;
                  bVar174 = (bVar174 < bVar32) * bVar32 | (bVar174 >= bVar32) * bVar174;
                  bVar175 = (bVar175 < bVar33) * bVar33 | (bVar175 >= bVar33) * bVar175;
                  bVar176 = (bVar176 < bVar34) * bVar34 | (bVar176 >= bVar34) * bVar176;
                  bVar177 = (bVar177 < bVar35) * bVar35 | (bVar177 >= bVar35) * bVar177;
                  bVar178 = (bVar178 < bVar36) * bVar36 | (bVar178 >= bVar36) * bVar178;
                  bVar179 = (bVar179 < bVar37) * bVar37 | (bVar179 >= bVar37) * bVar179;
                  bVar180 = (bVar180 < bVar38) * bVar38 | (bVar180 >= bVar38) * bVar180;
                  bVar181 = (bVar181 < bVar39) * bVar39 | (bVar181 >= bVar39) * bVar181;
                  pbVar1 = (byte *)(lVar56 + 0x10 + param_2 * 5 + lVar45 + lVar55 + lVar47 + lVar57)
                  ;
                  bVar24 = *pbVar1;
                  bVar25 = pbVar1[1];
                  bVar26 = pbVar1[2];
                  bVar27 = pbVar1[3];
                  bVar28 = pbVar1[4];
                  bVar29 = pbVar1[5];
                  bVar30 = pbVar1[6];
                  bVar31 = pbVar1[7];
                  bVar32 = pbVar1[8];
                  bVar33 = pbVar1[9];
                  bVar34 = pbVar1[10];
                  bVar35 = pbVar1[0xb];
                  bVar36 = pbVar1[0xc];
                  bVar37 = pbVar1[0xd];
                  bVar38 = pbVar1[0xe];
                  bVar39 = pbVar1[0xf];
                  bVar150 = (bVar150 < bVar8) * bVar8 | (bVar150 >= bVar8) * bVar150;
                  bVar151 = (bVar151 < bVar9) * bVar9 | (bVar151 >= bVar9) * bVar151;
                  bVar152 = (bVar152 < bVar10) * bVar10 | (bVar152 >= bVar10) * bVar152;
                  bVar153 = (bVar153 < bVar11) * bVar11 | (bVar153 >= bVar11) * bVar153;
                  bVar154 = (bVar154 < bVar12) * bVar12 | (bVar154 >= bVar12) * bVar154;
                  bVar155 = (bVar155 < bVar13) * bVar13 | (bVar155 >= bVar13) * bVar155;
                  bVar156 = (bVar156 < bVar14) * bVar14 | (bVar156 >= bVar14) * bVar156;
                  bVar157 = (bVar157 < bVar15) * bVar15 | (bVar157 >= bVar15) * bVar157;
                  bVar158 = (bVar158 < bVar16) * bVar16 | (bVar158 >= bVar16) * bVar158;
                  bVar159 = (bVar159 < bVar17) * bVar17 | (bVar159 >= bVar17) * bVar159;
                  bVar160 = (bVar160 < bVar18) * bVar18 | (bVar160 >= bVar18) * bVar160;
                  bVar161 = (bVar161 < bVar19) * bVar19 | (bVar161 >= bVar19) * bVar161;
                  bVar162 = (bVar162 < bVar20) * bVar20 | (bVar162 >= bVar20) * bVar162;
                  bVar163 = (bVar163 < bVar21) * bVar21 | (bVar163 >= bVar21) * bVar163;
                  bVar164 = (bVar164 < bVar22) * bVar22 | (bVar164 >= bVar22) * bVar164;
                  bVar165 = (bVar165 < bVar23) * bVar23 | (bVar165 >= bVar23) * bVar165;
                  pbVar1 = (byte *)(lVar56 + 0x10 + param_2 * 6 + lVar45 + lVar55 + lVar47 + lVar57)
                  ;
                  bVar8 = *pbVar1;
                  bVar9 = pbVar1[1];
                  bVar10 = pbVar1[2];
                  bVar11 = pbVar1[3];
                  bVar12 = pbVar1[4];
                  bVar13 = pbVar1[5];
                  bVar14 = pbVar1[6];
                  bVar15 = pbVar1[7];
                  bVar16 = pbVar1[8];
                  bVar17 = pbVar1[9];
                  bVar18 = pbVar1[10];
                  bVar19 = pbVar1[0xb];
                  bVar20 = pbVar1[0xc];
                  bVar21 = pbVar1[0xd];
                  bVar22 = pbVar1[0xe];
                  bVar23 = pbVar1[0xf];
                  bVar134 = (bVar134 < bVar24) * bVar24 | (bVar134 >= bVar24) * bVar134;
                  bVar135 = (bVar135 < bVar25) * bVar25 | (bVar135 >= bVar25) * bVar135;
                  bVar136 = (bVar136 < bVar26) * bVar26 | (bVar136 >= bVar26) * bVar136;
                  bVar137 = (bVar137 < bVar27) * bVar27 | (bVar137 >= bVar27) * bVar137;
                  bVar138 = (bVar138 < bVar28) * bVar28 | (bVar138 >= bVar28) * bVar138;
                  bVar139 = (bVar139 < bVar29) * bVar29 | (bVar139 >= bVar29) * bVar139;
                  bVar140 = (bVar140 < bVar30) * bVar30 | (bVar140 >= bVar30) * bVar140;
                  bVar141 = (bVar141 < bVar31) * bVar31 | (bVar141 >= bVar31) * bVar141;
                  bVar142 = (bVar142 < bVar32) * bVar32 | (bVar142 >= bVar32) * bVar142;
                  bVar143 = (bVar143 < bVar33) * bVar33 | (bVar143 >= bVar33) * bVar143;
                  bVar144 = (bVar144 < bVar34) * bVar34 | (bVar144 >= bVar34) * bVar144;
                  bVar145 = (bVar145 < bVar35) * bVar35 | (bVar145 >= bVar35) * bVar145;
                  bVar146 = (bVar146 < bVar36) * bVar36 | (bVar146 >= bVar36) * bVar146;
                  bVar147 = (bVar147 < bVar37) * bVar37 | (bVar147 >= bVar37) * bVar147;
                  bVar148 = (bVar148 < bVar38) * bVar38 | (bVar148 >= bVar38) * bVar148;
                  bVar149 = (bVar149 < bVar39) * bVar39 | (bVar149 >= bVar39) * bVar149;
                  pbVar1 = (byte *)(lVar56 + 0x10 + param_2 * 7 + lVar45 + lVar55 + lVar47 + lVar57)
                  ;
                  bVar24 = *pbVar1;
                  bVar25 = pbVar1[1];
                  bVar26 = pbVar1[2];
                  bVar27 = pbVar1[3];
                  bVar28 = pbVar1[4];
                  bVar29 = pbVar1[5];
                  bVar30 = pbVar1[6];
                  bVar31 = pbVar1[7];
                  bVar32 = pbVar1[8];
                  bVar33 = pbVar1[9];
                  bVar34 = pbVar1[10];
                  bVar35 = pbVar1[0xb];
                  bVar36 = pbVar1[0xc];
                  bVar37 = pbVar1[0xd];
                  bVar38 = pbVar1[0xe];
                  bVar39 = pbVar1[0xf];
                  lVar56 = lVar56 + lVar53;
                  bVar182 = (bVar182 < bVar8) * bVar8 | (bVar182 >= bVar8) * bVar182;
                  bVar183 = (bVar183 < bVar9) * bVar9 | (bVar183 >= bVar9) * bVar183;
                  bVar184 = (bVar184 < bVar10) * bVar10 | (bVar184 >= bVar10) * bVar184;
                  bVar185 = (bVar185 < bVar11) * bVar11 | (bVar185 >= bVar11) * bVar185;
                  bVar186 = (bVar186 < bVar12) * bVar12 | (bVar186 >= bVar12) * bVar186;
                  bVar187 = (bVar187 < bVar13) * bVar13 | (bVar187 >= bVar13) * bVar187;
                  bVar188 = (bVar188 < bVar14) * bVar14 | (bVar188 >= bVar14) * bVar188;
                  bVar189 = (bVar189 < bVar15) * bVar15 | (bVar189 >= bVar15) * bVar189;
                  bVar190 = (bVar190 < bVar16) * bVar16 | (bVar190 >= bVar16) * bVar190;
                  bVar191 = (bVar191 < bVar17) * bVar17 | (bVar191 >= bVar17) * bVar191;
                  bVar192 = (bVar192 < bVar18) * bVar18 | (bVar192 >= bVar18) * bVar192;
                  bVar193 = (bVar193 < bVar19) * bVar19 | (bVar193 >= bVar19) * bVar193;
                  bVar194 = (bVar194 < bVar20) * bVar20 | (bVar194 >= bVar20) * bVar194;
                  bVar195 = (bVar195 < bVar21) * bVar21 | (bVar195 >= bVar21) * bVar195;
                  bVar196 = (bVar196 < bVar22) * bVar22 | (bVar196 >= bVar22) * bVar196;
                  bVar197 = (bVar197 < bVar23) * bVar23 | (bVar197 >= bVar23) * bVar197;
                  bVar67 = (bVar67 < bVar24) * bVar24 | (bVar67 >= bVar24) * bVar67;
                  bVar68 = (bVar68 < bVar25) * bVar25 | (bVar68 >= bVar25) * bVar68;
                  bVar69 = (bVar69 < bVar26) * bVar26 | (bVar69 >= bVar26) * bVar69;
                  bVar70 = (bVar70 < bVar27) * bVar27 | (bVar70 >= bVar27) * bVar70;
                  bVar71 = (bVar71 < bVar28) * bVar28 | (bVar71 >= bVar28) * bVar71;
                  bVar72 = (bVar72 < bVar29) * bVar29 | (bVar72 >= bVar29) * bVar72;
                  bVar73 = (bVar73 < bVar30) * bVar30 | (bVar73 >= bVar30) * bVar73;
                  bVar74 = (bVar74 < bVar31) * bVar31 | (bVar74 >= bVar31) * bVar74;
                  bVar75 = (bVar75 < bVar32) * bVar32 | (bVar75 >= bVar32) * bVar75;
                  bVar76 = (bVar76 < bVar33) * bVar33 | (bVar76 >= bVar33) * bVar76;
                  bVar77 = (bVar77 < bVar34) * bVar34 | (bVar77 >= bVar34) * bVar77;
                  bVar78 = (bVar78 < bVar35) * bVar35 | (bVar78 >= bVar35) * bVar78;
                  bVar79 = (bVar79 < bVar36) * bVar36 | (bVar79 >= bVar36) * bVar79;
                  bVar80 = (bVar80 < bVar37) * bVar37 | (bVar80 >= bVar37) * bVar80;
                  bVar81 = (bVar81 < bVar38) * bVar38 | (bVar81 >= bVar38) * bVar81;
                  bVar82 = (bVar82 < bVar39) * bVar39 | (bVar82 >= bVar39) * bVar82;
                } while (uVar65 < uVar62);
              }
              uVar51 = uVar51 + 1;
              lVar44 = lVar44 + param_2;
            } while (uVar51 < param_8);
          }
          uVar60 = uVar60 + 1;
          lVar46 = lVar46 + 0x20;
          *pbStack_2b0 = bVar86;
          pbStack_2b0[1] = bVar87;
          pbStack_2b0[2] = bVar88;
          pbStack_2b0[3] = bVar89;
          pbStack_2b0[4] = bVar90;
          pbStack_2b0[5] = bVar91;
          pbStack_2b0[6] = bVar92;
          pbStack_2b0[7] = bVar93;
          pbStack_2b0[8] = bVar94;
          pbStack_2b0[9] = bVar95;
          pbStack_2b0[10] = bVar96;
          pbStack_2b0[0xb] = bVar97;
          pbStack_2b0[0xc] = bVar98;
          pbStack_2b0[0xd] = bVar99;
          pbStack_2b0[0xe] = bVar100;
          pbStack_2b0[0xf] = bVar101;
          pbVar1 = pbStack_2b0 + param_4;
          *pbVar1 = bVar102;
          pbVar1[1] = bVar103;
          pbVar1[2] = bVar104;
          pbVar1[3] = bVar105;
          pbVar1[4] = bVar106;
          pbVar1[5] = bVar107;
          pbVar1[6] = bVar108;
          pbVar1[7] = bVar109;
          pbVar1[8] = bVar110;
          pbVar1[9] = bVar111;
          pbVar1[10] = bVar112;
          pbVar1[0xb] = bVar113;
          pbVar1[0xc] = bVar114;
          pbVar1[0xd] = bVar115;
          pbVar1[0xe] = bVar116;
          pbVar1[0xf] = bVar117;
          pbVar1 = pbStack_2b0 + param_4 * 2;
          *pbVar1 = bVar118;
          pbVar1[1] = bVar119;
          pbVar1[2] = bVar120;
          pbVar1[3] = bVar121;
          pbVar1[4] = bVar122;
          pbVar1[5] = bVar123;
          pbVar1[6] = bVar124;
          pbVar1[7] = bVar125;
          pbVar1[8] = bVar126;
          pbVar1[9] = bVar127;
          pbVar1[10] = bVar128;
          pbVar1[0xb] = bVar129;
          pbVar1[0xc] = bVar130;
          pbVar1[0xd] = bVar131;
          pbVar1[0xe] = bVar132;
          pbVar1[0xf] = bVar133;
          pbVar1 = pbStack_2b0 + lVar48;
          *pbVar1 = bVar166;
          pbVar1[1] = bVar167;
          pbVar1[2] = bVar168;
          pbVar1[3] = bVar169;
          pbVar1[4] = bVar170;
          pbVar1[5] = bVar171;
          pbVar1[6] = bVar172;
          pbVar1[7] = bVar173;
          pbVar1[8] = bVar174;
          pbVar1[9] = bVar175;
          pbVar1[10] = bVar176;
          pbVar1[0xb] = bVar177;
          pbVar1[0xc] = bVar178;
          pbVar1[0xd] = bVar179;
          pbVar1[0xe] = bVar180;
          pbVar1[0xf] = bVar181;
          pbStack_2b0[0x10] = bVar150;
          pbStack_2b0[0x11] = bVar151;
          pbStack_2b0[0x12] = bVar152;
          pbStack_2b0[0x13] = bVar153;
          pbStack_2b0[0x14] = bVar154;
          pbStack_2b0[0x15] = bVar155;
          pbStack_2b0[0x16] = bVar156;
          pbStack_2b0[0x17] = bVar157;
          pbStack_2b0[0x18] = bVar158;
          pbStack_2b0[0x19] = bVar159;
          pbStack_2b0[0x1a] = bVar160;
          pbStack_2b0[0x1b] = bVar161;
          pbStack_2b0[0x1c] = bVar162;
          pbStack_2b0[0x1d] = bVar163;
          pbStack_2b0[0x1e] = bVar164;
          pbStack_2b0[0x1f] = bVar165;
          pbVar1 = pbStack_2b0 + param_4 + 0x10;
          *pbVar1 = bVar134;
          pbVar1[1] = bVar135;
          pbVar1[2] = bVar136;
          pbVar1[3] = bVar137;
          pbVar1[4] = bVar138;
          pbVar1[5] = bVar139;
          pbVar1[6] = bVar140;
          pbVar1[7] = bVar141;
          pbVar1[8] = bVar142;
          pbVar1[9] = bVar143;
          pbVar1[10] = bVar144;
          pbVar1[0xb] = bVar145;
          pbVar1[0xc] = bVar146;
          pbVar1[0xd] = bVar147;
          pbVar1[0xe] = bVar148;
          pbVar1[0xf] = bVar149;
          pbVar1 = pbStack_2b0 + param_4 * 2 + 0x10;
          *pbVar1 = bVar182;
          pbVar1[1] = bVar183;
          pbVar1[2] = bVar184;
          pbVar1[3] = bVar185;
          pbVar1[4] = bVar186;
          pbVar1[5] = bVar187;
          pbVar1[6] = bVar188;
          pbVar1[7] = bVar189;
          pbVar1[8] = bVar190;
          pbVar1[9] = bVar191;
          pbVar1[10] = bVar192;
          pbVar1[0xb] = bVar193;
          pbVar1[0xc] = bVar194;
          pbVar1[0xd] = bVar195;
          pbVar1[0xe] = bVar196;
          pbVar1[0xf] = bVar197;
          pbVar1 = pbStack_2b0 + lVar48 + 0x10;
          *pbVar1 = bVar67;
          pbVar1[1] = bVar68;
          pbVar1[2] = bVar69;
          pbVar1[3] = bVar70;
          pbVar1[4] = bVar71;
          pbVar1[5] = bVar72;
          pbVar1[6] = bVar73;
          pbVar1[7] = bVar74;
          pbVar1[8] = bVar75;
          pbVar1[9] = bVar76;
          pbVar1[10] = bVar77;
          pbVar1[0xb] = bVar78;
          pbVar1[0xc] = bVar79;
          pbVar1[0xd] = bVar80;
          pbVar1[0xe] = bVar81;
          pbVar1[0xf] = bVar82;
          pbStack_2b0 = pbStack_2b0 + 0x20;
          lVar47 = lVar47 + 0x20;
          lVar66 = lVar47;
        } while (uVar60 < (param_5 & 0xffffffffffffffe0) + 0x1f >> 5);
      }
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      bVar75 = 0;
      bVar76 = 0;
      bVar77 = 0;
      bVar78 = 0;
      bVar79 = 0;
      bVar80 = 0;
      bVar81 = 0;
      bVar82 = 0;
      uVar60 = 0;
      lVar44 = 0;
      lVar47 = lVar46;
      if (lVar66 < (longlong)uVar61) {
        uVar51 = (uVar61 + 0xf) - lVar66;
        do {
          bVar86 = bVar67;
          bVar87 = bVar68;
          bVar88 = bVar69;
          bVar89 = bVar70;
          bVar90 = bVar71;
          bVar91 = bVar72;
          bVar92 = bVar73;
          bVar93 = bVar74;
          bVar94 = bVar75;
          bVar95 = bVar76;
          bVar96 = bVar77;
          bVar97 = bVar78;
          bVar98 = bVar79;
          bVar99 = bVar80;
          bVar100 = bVar81;
          bVar101 = bVar82;
          bVar102 = bVar67;
          bVar103 = bVar68;
          bVar104 = bVar69;
          bVar105 = bVar70;
          bVar106 = bVar71;
          bVar107 = bVar72;
          bVar108 = bVar73;
          bVar109 = bVar74;
          bVar110 = bVar75;
          bVar111 = bVar76;
          bVar112 = bVar77;
          bVar113 = bVar78;
          bVar114 = bVar79;
          bVar115 = bVar80;
          bVar116 = bVar81;
          bVar117 = bVar82;
          bVar118 = bVar67;
          bVar119 = bVar68;
          bVar120 = bVar69;
          bVar121 = bVar70;
          bVar122 = bVar71;
          bVar123 = bVar72;
          bVar124 = bVar73;
          bVar125 = bVar74;
          bVar126 = bVar75;
          bVar127 = bVar76;
          bVar128 = bVar77;
          bVar129 = bVar78;
          bVar130 = bVar79;
          bVar131 = bVar80;
          bVar132 = bVar81;
          bVar133 = bVar82;
          bVar134 = bVar67;
          bVar135 = bVar68;
          bVar136 = bVar69;
          bVar137 = bVar70;
          bVar138 = bVar71;
          bVar139 = bVar72;
          bVar140 = bVar73;
          bVar141 = bVar74;
          bVar142 = bVar75;
          bVar143 = bVar76;
          bVar144 = bVar77;
          bVar145 = bVar78;
          bVar146 = bVar79;
          bVar147 = bVar80;
          bVar148 = bVar81;
          bVar149 = bVar82;
          if (0 < (longlong)param_8) {
            uVar62 = 0;
            lVar56 = 0;
            do {
              uVar65 = (ulonglong)*(ushort *)(lVar50 + uVar62 * 4);
              uVar64 = 0;
              lVar57 = 0;
              if (uVar65 != 0) {
                lVar54 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar62 * 4) * param_10);
                do {
                  uVar64 = uVar64 + 1;
                  pbVar1 = (byte *)(lVar57 + lVar46 + lVar44 + lVar56 + lVar54);
                  bVar150 = *pbVar1;
                  bVar151 = pbVar1[1];
                  bVar152 = pbVar1[2];
                  bVar153 = pbVar1[3];
                  bVar154 = pbVar1[4];
                  bVar155 = pbVar1[5];
                  bVar156 = pbVar1[6];
                  bVar157 = pbVar1[7];
                  bVar158 = pbVar1[8];
                  bVar159 = pbVar1[9];
                  bVar160 = pbVar1[10];
                  bVar161 = pbVar1[0xb];
                  bVar162 = pbVar1[0xc];
                  bVar163 = pbVar1[0xd];
                  bVar164 = pbVar1[0xe];
                  bVar165 = pbVar1[0xf];
                  pbVar1 = (byte *)(lVar57 + lVar54 + param_2 + lVar46 + lVar44 + lVar56);
                  bVar166 = *pbVar1;
                  bVar167 = pbVar1[1];
                  bVar168 = pbVar1[2];
                  bVar169 = pbVar1[3];
                  bVar170 = pbVar1[4];
                  bVar171 = pbVar1[5];
                  bVar172 = pbVar1[6];
                  bVar173 = pbVar1[7];
                  bVar174 = pbVar1[8];
                  bVar175 = pbVar1[9];
                  bVar176 = pbVar1[10];
                  bVar177 = pbVar1[0xb];
                  bVar178 = pbVar1[0xc];
                  bVar179 = pbVar1[0xd];
                  bVar180 = pbVar1[0xe];
                  bVar181 = pbVar1[0xf];
                  bVar86 = (bVar86 < bVar150) * bVar150 | (bVar86 >= bVar150) * bVar86;
                  bVar87 = (bVar87 < bVar151) * bVar151 | (bVar87 >= bVar151) * bVar87;
                  bVar88 = (bVar88 < bVar152) * bVar152 | (bVar88 >= bVar152) * bVar88;
                  bVar89 = (bVar89 < bVar153) * bVar153 | (bVar89 >= bVar153) * bVar89;
                  bVar90 = (bVar90 < bVar154) * bVar154 | (bVar90 >= bVar154) * bVar90;
                  bVar91 = (bVar91 < bVar155) * bVar155 | (bVar91 >= bVar155) * bVar91;
                  bVar92 = (bVar92 < bVar156) * bVar156 | (bVar92 >= bVar156) * bVar92;
                  bVar93 = (bVar93 < bVar157) * bVar157 | (bVar93 >= bVar157) * bVar93;
                  bVar94 = (bVar94 < bVar158) * bVar158 | (bVar94 >= bVar158) * bVar94;
                  bVar95 = (bVar95 < bVar159) * bVar159 | (bVar95 >= bVar159) * bVar95;
                  bVar96 = (bVar96 < bVar160) * bVar160 | (bVar96 >= bVar160) * bVar96;
                  bVar97 = (bVar97 < bVar161) * bVar161 | (bVar97 >= bVar161) * bVar97;
                  bVar98 = (bVar98 < bVar162) * bVar162 | (bVar98 >= bVar162) * bVar98;
                  bVar99 = (bVar99 < bVar163) * bVar163 | (bVar99 >= bVar163) * bVar99;
                  bVar100 = (bVar100 < bVar164) * bVar164 | (bVar100 >= bVar164) * bVar100;
                  bVar101 = (bVar101 < bVar165) * bVar165 | (bVar101 >= bVar165) * bVar101;
                  pbVar1 = (byte *)(lVar57 + lVar46 + param_2 * 2 + lVar44 + lVar56 + lVar54);
                  bVar150 = *pbVar1;
                  bVar151 = pbVar1[1];
                  bVar152 = pbVar1[2];
                  bVar153 = pbVar1[3];
                  bVar154 = pbVar1[4];
                  bVar155 = pbVar1[5];
                  bVar156 = pbVar1[6];
                  bVar157 = pbVar1[7];
                  bVar158 = pbVar1[8];
                  bVar159 = pbVar1[9];
                  bVar160 = pbVar1[10];
                  bVar161 = pbVar1[0xb];
                  bVar162 = pbVar1[0xc];
                  bVar163 = pbVar1[0xd];
                  bVar164 = pbVar1[0xe];
                  bVar165 = pbVar1[0xf];
                  bVar102 = (bVar102 < bVar166) * bVar166 | (bVar102 >= bVar166) * bVar102;
                  bVar103 = (bVar103 < bVar167) * bVar167 | (bVar103 >= bVar167) * bVar103;
                  bVar104 = (bVar104 < bVar168) * bVar168 | (bVar104 >= bVar168) * bVar104;
                  bVar105 = (bVar105 < bVar169) * bVar169 | (bVar105 >= bVar169) * bVar105;
                  bVar106 = (bVar106 < bVar170) * bVar170 | (bVar106 >= bVar170) * bVar106;
                  bVar107 = (bVar107 < bVar171) * bVar171 | (bVar107 >= bVar171) * bVar107;
                  bVar108 = (bVar108 < bVar172) * bVar172 | (bVar108 >= bVar172) * bVar108;
                  bVar109 = (bVar109 < bVar173) * bVar173 | (bVar109 >= bVar173) * bVar109;
                  bVar110 = (bVar110 < bVar174) * bVar174 | (bVar110 >= bVar174) * bVar110;
                  bVar111 = (bVar111 < bVar175) * bVar175 | (bVar111 >= bVar175) * bVar111;
                  bVar112 = (bVar112 < bVar176) * bVar176 | (bVar112 >= bVar176) * bVar112;
                  bVar113 = (bVar113 < bVar177) * bVar177 | (bVar113 >= bVar177) * bVar113;
                  bVar114 = (bVar114 < bVar178) * bVar178 | (bVar114 >= bVar178) * bVar114;
                  bVar115 = (bVar115 < bVar179) * bVar179 | (bVar115 >= bVar179) * bVar115;
                  bVar116 = (bVar116 < bVar180) * bVar180 | (bVar116 >= bVar180) * bVar116;
                  bVar117 = (bVar117 < bVar181) * bVar181 | (bVar117 >= bVar181) * bVar117;
                  pbVar1 = (byte *)(lVar57 + lVar46 + lVar49 + lVar44 + lVar56 + lVar54);
                  bVar166 = *pbVar1;
                  bVar167 = pbVar1[1];
                  bVar168 = pbVar1[2];
                  bVar169 = pbVar1[3];
                  bVar170 = pbVar1[4];
                  bVar171 = pbVar1[5];
                  bVar172 = pbVar1[6];
                  bVar173 = pbVar1[7];
                  bVar174 = pbVar1[8];
                  bVar175 = pbVar1[9];
                  bVar176 = pbVar1[10];
                  bVar177 = pbVar1[0xb];
                  bVar178 = pbVar1[0xc];
                  bVar179 = pbVar1[0xd];
                  bVar180 = pbVar1[0xe];
                  bVar181 = pbVar1[0xf];
                  lVar57 = lVar57 + lVar53;
                  bVar118 = (bVar118 < bVar150) * bVar150 | (bVar118 >= bVar150) * bVar118;
                  bVar119 = (bVar119 < bVar151) * bVar151 | (bVar119 >= bVar151) * bVar119;
                  bVar120 = (bVar120 < bVar152) * bVar152 | (bVar120 >= bVar152) * bVar120;
                  bVar121 = (bVar121 < bVar153) * bVar153 | (bVar121 >= bVar153) * bVar121;
                  bVar122 = (bVar122 < bVar154) * bVar154 | (bVar122 >= bVar154) * bVar122;
                  bVar123 = (bVar123 < bVar155) * bVar155 | (bVar123 >= bVar155) * bVar123;
                  bVar124 = (bVar124 < bVar156) * bVar156 | (bVar124 >= bVar156) * bVar124;
                  bVar125 = (bVar125 < bVar157) * bVar157 | (bVar125 >= bVar157) * bVar125;
                  bVar126 = (bVar126 < bVar158) * bVar158 | (bVar126 >= bVar158) * bVar126;
                  bVar127 = (bVar127 < bVar159) * bVar159 | (bVar127 >= bVar159) * bVar127;
                  bVar128 = (bVar128 < bVar160) * bVar160 | (bVar128 >= bVar160) * bVar128;
                  bVar129 = (bVar129 < bVar161) * bVar161 | (bVar129 >= bVar161) * bVar129;
                  bVar130 = (bVar130 < bVar162) * bVar162 | (bVar130 >= bVar162) * bVar130;
                  bVar131 = (bVar131 < bVar163) * bVar163 | (bVar131 >= bVar163) * bVar131;
                  bVar132 = (bVar132 < bVar164) * bVar164 | (bVar132 >= bVar164) * bVar132;
                  bVar133 = (bVar133 < bVar165) * bVar165 | (bVar133 >= bVar165) * bVar133;
                  bVar134 = (bVar134 < bVar166) * bVar166 | (bVar134 >= bVar166) * bVar134;
                  bVar135 = (bVar135 < bVar167) * bVar167 | (bVar135 >= bVar167) * bVar135;
                  bVar136 = (bVar136 < bVar168) * bVar168 | (bVar136 >= bVar168) * bVar136;
                  bVar137 = (bVar137 < bVar169) * bVar169 | (bVar137 >= bVar169) * bVar137;
                  bVar138 = (bVar138 < bVar170) * bVar170 | (bVar138 >= bVar170) * bVar138;
                  bVar139 = (bVar139 < bVar171) * bVar171 | (bVar139 >= bVar171) * bVar139;
                  bVar140 = (bVar140 < bVar172) * bVar172 | (bVar140 >= bVar172) * bVar140;
                  bVar141 = (bVar141 < bVar173) * bVar173 | (bVar141 >= bVar173) * bVar141;
                  bVar142 = (bVar142 < bVar174) * bVar174 | (bVar142 >= bVar174) * bVar142;
                  bVar143 = (bVar143 < bVar175) * bVar175 | (bVar143 >= bVar175) * bVar143;
                  bVar144 = (bVar144 < bVar176) * bVar176 | (bVar144 >= bVar176) * bVar144;
                  bVar145 = (bVar145 < bVar177) * bVar177 | (bVar145 >= bVar177) * bVar145;
                  bVar146 = (bVar146 < bVar178) * bVar178 | (bVar146 >= bVar178) * bVar146;
                  bVar147 = (bVar147 < bVar179) * bVar179 | (bVar147 >= bVar179) * bVar147;
                  bVar148 = (bVar148 < bVar180) * bVar180 | (bVar148 >= bVar180) * bVar148;
                  bVar149 = (bVar149 < bVar181) * bVar181 | (bVar149 >= bVar181) * bVar149;
                } while (uVar64 < uVar65);
              }
              uVar62 = uVar62 + 1;
              lVar56 = lVar56 + param_2;
            } while (uVar62 < param_8);
          }
          uVar60 = uVar60 + 1;
          *pbStack_2b0 = bVar86;
          pbStack_2b0[1] = bVar87;
          pbStack_2b0[2] = bVar88;
          pbStack_2b0[3] = bVar89;
          pbStack_2b0[4] = bVar90;
          pbStack_2b0[5] = bVar91;
          pbStack_2b0[6] = bVar92;
          pbStack_2b0[7] = bVar93;
          pbStack_2b0[8] = bVar94;
          pbStack_2b0[9] = bVar95;
          pbStack_2b0[10] = bVar96;
          pbStack_2b0[0xb] = bVar97;
          pbStack_2b0[0xc] = bVar98;
          pbStack_2b0[0xd] = bVar99;
          pbStack_2b0[0xe] = bVar100;
          pbStack_2b0[0xf] = bVar101;
          lVar47 = lVar47 + 0x10;
          pbVar1 = pbStack_2b0 + param_4;
          *pbVar1 = bVar102;
          pbVar1[1] = bVar103;
          pbVar1[2] = bVar104;
          pbVar1[3] = bVar105;
          pbVar1[4] = bVar106;
          pbVar1[5] = bVar107;
          pbVar1[6] = bVar108;
          pbVar1[7] = bVar109;
          pbVar1[8] = bVar110;
          pbVar1[9] = bVar111;
          pbVar1[10] = bVar112;
          pbVar1[0xb] = bVar113;
          pbVar1[0xc] = bVar114;
          pbVar1[0xd] = bVar115;
          pbVar1[0xe] = bVar116;
          pbVar1[0xf] = bVar117;
          lVar66 = lVar66 + 0x10;
          lVar44 = lVar44 + 0x10;
          pbVar1 = pbStack_2b0 + param_4 * 2;
          *pbVar1 = bVar118;
          pbVar1[1] = bVar119;
          pbVar1[2] = bVar120;
          pbVar1[3] = bVar121;
          pbVar1[4] = bVar122;
          pbVar1[5] = bVar123;
          pbVar1[6] = bVar124;
          pbVar1[7] = bVar125;
          pbVar1[8] = bVar126;
          pbVar1[9] = bVar127;
          pbVar1[10] = bVar128;
          pbVar1[0xb] = bVar129;
          pbVar1[0xc] = bVar130;
          pbVar1[0xd] = bVar131;
          pbVar1[0xe] = bVar132;
          pbVar1[0xf] = bVar133;
          pbVar1 = pbStack_2b0 + lVar48;
          *pbVar1 = bVar134;
          pbVar1[1] = bVar135;
          pbVar1[2] = bVar136;
          pbVar1[3] = bVar137;
          pbVar1[4] = bVar138;
          pbVar1[5] = bVar139;
          pbVar1[6] = bVar140;
          pbVar1[7] = bVar141;
          pbVar1[8] = bVar142;
          pbVar1[9] = bVar143;
          pbVar1[10] = bVar144;
          pbVar1[0xb] = bVar145;
          pbVar1[0xc] = bVar146;
          pbVar1[0xd] = bVar147;
          pbVar1[0xe] = bVar148;
          pbVar1[0xf] = bVar149;
          pbStack_2b0 = pbStack_2b0 + 0x10;
        } while (uVar60 < uVar51 >> 4);
      }
      uVar60 = 0;
      lVar46 = lVar47;
      if (lVar66 < (longlong)uVar40) {
        uVar51 = (uVar40 + 7) - lVar66;
        do {
          auStack_168 = (undefined1  [16])0x0;
          auStack_168._0_8_ = 0;
          auStack_158 = (undefined1  [16])0x0;
          auStack_158._0_8_ = 0;
          auStack_148 = (undefined1  [16])0x0;
          auStack_148._0_8_ = 0;
          bVar75 = bVar67;
          bVar76 = bVar68;
          bVar77 = bVar69;
          bVar78 = bVar70;
          bVar79 = bVar71;
          bVar80 = bVar72;
          bVar81 = bVar73;
          bVar82 = bVar74;
          if (0 < (longlong)param_8) {
            uVar62 = 0;
            lVar44 = 0;
            bVar86 = bVar67;
            bVar87 = bVar68;
            bVar88 = bVar69;
            bVar89 = bVar70;
            bVar90 = bVar71;
            bVar91 = bVar72;
            bVar92 = bVar73;
            bVar93 = bVar74;
            bVar94 = bVar67;
            bVar95 = bVar68;
            bVar96 = bVar69;
            bVar97 = bVar70;
            bVar98 = bVar71;
            bVar99 = bVar72;
            bVar100 = bVar73;
            bVar101 = bVar74;
            bVar102 = bVar67;
            bVar103 = bVar68;
            bVar104 = bVar69;
            bVar105 = bVar70;
            bVar106 = bVar71;
            bVar107 = bVar72;
            bVar108 = bVar73;
            bVar109 = bVar74;
            do {
              uVar65 = (ulonglong)*(ushort *)(lVar50 + uVar62 * 4);
              uVar64 = 0;
              lVar56 = 0;
              if (uVar65 != 0) {
                lVar57 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar62 * 4) * param_10);
                do {
                  uVar4 = *(undefined8 *)(lVar56 + lVar47 + uVar60 * 8 + lVar44 + lVar57);
                  uVar64 = uVar64 + 1;
                  uVar5 = *(undefined8 *)(lVar56 + lVar57 + param_2 + lVar47 + uVar60 * 8 + lVar44);
                  bVar110 = (byte)uVar4;
                  bVar75 = (bVar75 < bVar110) * bVar110 | (bVar75 >= bVar110) * bVar75;
                  bVar110 = (byte)((ulonglong)uVar4 >> 8);
                  bVar76 = (bVar76 < bVar110) * bVar110 | (bVar76 >= bVar110) * bVar76;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x10);
                  bVar77 = (bVar77 < bVar110) * bVar110 | (bVar77 >= bVar110) * bVar77;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x18);
                  bVar78 = (bVar78 < bVar110) * bVar110 | (bVar78 >= bVar110) * bVar78;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x20);
                  bVar79 = (bVar79 < bVar110) * bVar110 | (bVar79 >= bVar110) * bVar79;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x28);
                  bVar80 = (bVar80 < bVar110) * bVar110 | (bVar80 >= bVar110) * bVar80;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x30);
                  bVar81 = (bVar81 < bVar110) * bVar110 | (bVar81 >= bVar110) * bVar81;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x38);
                  bVar82 = (bVar82 < bVar110) * bVar110 | (bVar82 >= bVar110) * bVar82;
                  uVar4 = *(undefined8 *)
                           (lVar56 + lVar47 + param_2 * 2 + uVar60 * 8 + lVar44 + lVar57);
                  bVar110 = (byte)uVar5;
                  bVar94 = (bVar94 < bVar110) * bVar110 | (bVar94 >= bVar110) * bVar94;
                  bVar110 = (byte)((ulonglong)uVar5 >> 8);
                  bVar95 = (bVar95 < bVar110) * bVar110 | (bVar95 >= bVar110) * bVar95;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x10);
                  bVar96 = (bVar96 < bVar110) * bVar110 | (bVar96 >= bVar110) * bVar96;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x18);
                  bVar97 = (bVar97 < bVar110) * bVar110 | (bVar97 >= bVar110) * bVar97;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x20);
                  bVar98 = (bVar98 < bVar110) * bVar110 | (bVar98 >= bVar110) * bVar98;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x28);
                  bVar99 = (bVar99 < bVar110) * bVar110 | (bVar99 >= bVar110) * bVar99;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x30);
                  bVar100 = (bVar100 < bVar110) * bVar110 | (bVar100 >= bVar110) * bVar100;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x38);
                  bVar101 = (bVar101 < bVar110) * bVar110 | (bVar101 >= bVar110) * bVar101;
                  uVar5 = *(undefined8 *)(lVar56 + lVar47 + lVar49 + uVar60 * 8 + lVar44 + lVar57);
                  bVar110 = (byte)uVar4;
                  bVar102 = (bVar102 < bVar110) * bVar110 | (bVar102 >= bVar110) * bVar102;
                  bVar110 = (byte)((ulonglong)uVar4 >> 8);
                  bVar103 = (bVar103 < bVar110) * bVar110 | (bVar103 >= bVar110) * bVar103;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x10);
                  bVar104 = (bVar104 < bVar110) * bVar110 | (bVar104 >= bVar110) * bVar104;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x18);
                  bVar105 = (bVar105 < bVar110) * bVar110 | (bVar105 >= bVar110) * bVar105;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x20);
                  bVar106 = (bVar106 < bVar110) * bVar110 | (bVar106 >= bVar110) * bVar106;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x28);
                  bVar107 = (bVar107 < bVar110) * bVar110 | (bVar107 >= bVar110) * bVar107;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x30);
                  bVar108 = (bVar108 < bVar110) * bVar110 | (bVar108 >= bVar110) * bVar108;
                  bVar110 = (byte)((ulonglong)uVar4 >> 0x38);
                  bVar109 = (bVar109 < bVar110) * bVar110 | (bVar109 >= bVar110) * bVar109;
                  lVar56 = lVar56 + lVar53;
                  bVar110 = (byte)uVar5;
                  bVar86 = (bVar86 < bVar110) * bVar110 | (bVar86 >= bVar110) * bVar86;
                  bVar110 = (byte)((ulonglong)uVar5 >> 8);
                  bVar87 = (bVar87 < bVar110) * bVar110 | (bVar87 >= bVar110) * bVar87;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x10);
                  bVar88 = (bVar88 < bVar110) * bVar110 | (bVar88 >= bVar110) * bVar88;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x18);
                  bVar89 = (bVar89 < bVar110) * bVar110 | (bVar89 >= bVar110) * bVar89;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x20);
                  bVar90 = (bVar90 < bVar110) * bVar110 | (bVar90 >= bVar110) * bVar90;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x28);
                  bVar91 = (bVar91 < bVar110) * bVar110 | (bVar91 >= bVar110) * bVar91;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x30);
                  bVar92 = (bVar92 < bVar110) * bVar110 | (bVar92 >= bVar110) * bVar92;
                  bVar110 = (byte)((ulonglong)uVar5 >> 0x38);
                  bVar93 = (bVar93 < bVar110) * bVar110 | (bVar93 >= bVar110) * bVar93;
                  auStack_168[1] = bVar95;
                  auStack_168[0] = bVar94;
                  auStack_168[2] = bVar96;
                  auStack_168[3] = bVar97;
                  auStack_168[4] = bVar98;
                  auStack_168[5] = bVar99;
                  auStack_168[6] = bVar100;
                  auStack_168[7] = bVar101;
                  auStack_168._8_8_ = 0;
                  auStack_158[1] = bVar103;
                  auStack_158[0] = bVar102;
                  auStack_158[2] = bVar104;
                  auStack_158[3] = bVar105;
                  auStack_158[4] = bVar106;
                  auStack_158[5] = bVar107;
                  auStack_158[6] = bVar108;
                  auStack_158[7] = bVar109;
                  auStack_158._8_8_ = 0;
                  auStack_148[1] = bVar87;
                  auStack_148[0] = bVar86;
                  auStack_148[2] = bVar88;
                  auStack_148[3] = bVar89;
                  auStack_148[4] = bVar90;
                  auStack_148[5] = bVar91;
                  auStack_148[6] = bVar92;
                  auStack_148[7] = bVar93;
                  auStack_148._8_8_ = 0;
                } while (uVar64 < uVar65);
              }
              uVar62 = uVar62 + 1;
              lVar44 = lVar44 + param_2;
            } while (uVar62 < param_8);
          }
          *pbStack_2b0 = bVar75;
          pbStack_2b0[1] = bVar76;
          pbStack_2b0[2] = bVar77;
          pbStack_2b0[3] = bVar78;
          pbStack_2b0[4] = bVar79;
          pbStack_2b0[5] = bVar80;
          pbStack_2b0[6] = bVar81;
          pbStack_2b0[7] = bVar82;
          uVar60 = uVar60 + 1;
          lVar46 = lVar46 + 8;
          lVar66 = lVar66 + 8;
          *(undefined8 *)(pbStack_2b0 + param_4) = auStack_168._0_8_;
          *(undefined8 *)(pbStack_2b0 + param_4 * 2) = auStack_158._0_8_;
          pbVar1 = pbStack_2b0 + lVar48;
          *pbVar1 = auStack_148[0];
          pbVar1[1] = auStack_148[1];
          pbVar1[2] = auStack_148[2];
          pbVar1[3] = auStack_148[3];
          pbVar1[4] = auStack_148[4];
          pbVar1[5] = auStack_148[5];
          pbVar1[6] = auStack_148[6];
          pbVar1[7] = auStack_148[7];
          pbStack_2b0 = pbStack_2b0 + 8;
        } while (uVar60 < uVar51 >> 3);
      }
      uVar60 = 0;
      lVar47 = lVar46;
      if (lVar66 < (longlong)uVar59) {
        uVar51 = (uVar59 + 3) - lVar66;
        do {
          bVar79 = 0;
          bVar80 = 0;
          bVar81 = 0;
          bVar82 = 0;
          bVar67 = bVar79;
          bVar68 = bVar80;
          bVar69 = bVar81;
          bVar70 = bVar82;
          bVar71 = bVar79;
          bVar72 = bVar80;
          bVar73 = bVar81;
          bVar74 = bVar82;
          bVar75 = bVar79;
          bVar76 = bVar80;
          bVar77 = bVar81;
          bVar78 = bVar82;
          if (0 < (longlong)param_8) {
            uVar62 = 0;
            lVar44 = 0;
            do {
              uVar65 = (ulonglong)*(ushort *)(lVar50 + uVar62 * 4);
              uVar64 = 0;
              lVar56 = 0;
              if (uVar65 != 0) {
                lVar57 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar62 * 4) * param_10);
                do {
                  uVar64 = uVar64 + 1;
                  pbVar1 = (byte *)(lVar56 + lVar46 + uVar60 * 4 + lVar44 + lVar57);
                  bVar86 = *pbVar1;
                  bVar87 = pbVar1[1];
                  bVar88 = pbVar1[2];
                  bVar89 = pbVar1[3];
                  uVar6 = *(undefined4 *)(lVar56 + lVar57 + param_2 + lVar46 + uVar60 * 4 + lVar44);
                  bVar71 = (bVar71 < bVar86) * bVar86 | (bVar71 >= bVar86) * bVar71;
                  bVar72 = (bVar72 < bVar87) * bVar87 | (bVar72 >= bVar87) * bVar72;
                  bVar73 = (bVar73 < bVar88) * bVar88 | (bVar73 >= bVar88) * bVar73;
                  bVar74 = (bVar74 < bVar89) * bVar89 | (bVar74 >= bVar89) * bVar74;
                  uVar7 = *(undefined4 *)
                           (lVar56 + lVar46 + param_2 * 2 + uVar60 * 4 + lVar44 + lVar57);
                  bVar86 = (byte)uVar6;
                  bVar67 = (bVar67 < bVar86) * bVar86 | (bVar67 >= bVar86) * bVar67;
                  bVar86 = (byte)((uint)uVar6 >> 8);
                  bVar68 = (bVar68 < bVar86) * bVar86 | (bVar68 >= bVar86) * bVar68;
                  bVar86 = (byte)((uint)uVar6 >> 0x10);
                  bVar69 = (bVar69 < bVar86) * bVar86 | (bVar69 >= bVar86) * bVar69;
                  bVar86 = (byte)((uint)uVar6 >> 0x18);
                  bVar70 = (bVar70 < bVar86) * bVar86 | (bVar70 >= bVar86) * bVar70;
                  uVar6 = *(undefined4 *)(lVar56 + lVar46 + lVar49 + uVar60 * 4 + lVar44 + lVar57);
                  lVar56 = lVar56 + lVar53;
                  bVar86 = (byte)uVar7;
                  bVar79 = (bVar79 < bVar86) * bVar86 | (bVar79 >= bVar86) * bVar79;
                  bVar86 = (byte)((uint)uVar7 >> 8);
                  bVar80 = (bVar80 < bVar86) * bVar86 | (bVar80 >= bVar86) * bVar80;
                  bVar86 = (byte)((uint)uVar7 >> 0x10);
                  bVar81 = (bVar81 < bVar86) * bVar86 | (bVar81 >= bVar86) * bVar81;
                  bVar86 = (byte)((uint)uVar7 >> 0x18);
                  bVar82 = (bVar82 < bVar86) * bVar86 | (bVar82 >= bVar86) * bVar82;
                  bVar86 = (byte)uVar6;
                  bVar75 = (bVar75 < bVar86) * bVar86 | (bVar75 >= bVar86) * bVar75;
                  bVar86 = (byte)((uint)uVar6 >> 8);
                  bVar76 = (bVar76 < bVar86) * bVar86 | (bVar76 >= bVar86) * bVar76;
                  bVar86 = (byte)((uint)uVar6 >> 0x10);
                  bVar77 = (bVar77 < bVar86) * bVar86 | (bVar77 >= bVar86) * bVar77;
                  bVar86 = (byte)((uint)uVar6 >> 0x18);
                  bVar78 = (bVar78 < bVar86) * bVar86 | (bVar78 >= bVar86) * bVar78;
                } while (uVar64 < uVar65);
              }
              uVar62 = uVar62 + 1;
              lVar44 = lVar44 + param_2;
            } while (uVar62 < param_8);
          }
          uVar60 = uVar60 + 1;
          *pbStack_2b0 = bVar71;
          pbStack_2b0[1] = bVar72;
          pbStack_2b0[2] = bVar73;
          pbStack_2b0[3] = bVar74;
          lVar47 = lVar47 + 4;
          pbVar1 = pbStack_2b0 + param_4;
          *pbVar1 = bVar67;
          pbVar1[1] = bVar68;
          pbVar1[2] = bVar69;
          pbVar1[3] = bVar70;
          lVar66 = lVar66 + 4;
          pbVar1 = pbStack_2b0 + param_4 * 2;
          *pbVar1 = bVar79;
          pbVar1[1] = bVar80;
          pbVar1[2] = bVar81;
          pbVar1[3] = bVar82;
          pbVar1 = pbStack_2b0 + lVar48;
          *pbVar1 = bVar75;
          pbVar1[1] = bVar76;
          pbVar1[2] = bVar77;
          pbVar1[3] = bVar78;
          pbStack_2b0 = pbStack_2b0 + 4;
        } while (uVar60 < uVar51 >> 2);
      }
      bVar67 = 0;
      bVar68 = 0;
      uVar60 = 0;
      lVar46 = lVar47;
      if (lVar66 < (longlong)uVar42) {
        uVar51 = (uVar42 + 1) - lVar66;
        do {
          bVar69 = bVar67;
          bVar70 = bVar68;
          bVar71 = bVar67;
          bVar72 = bVar68;
          bVar73 = bVar67;
          bVar74 = bVar68;
          bVar75 = bVar67;
          bVar76 = bVar68;
          if (0 < (longlong)param_8) {
            uVar62 = 0;
            lVar44 = 0;
            do {
              uVar65 = (ulonglong)*(ushort *)(lVar50 + uVar62 * 4);
              uVar64 = 0;
              lVar56 = 0;
              if (uVar65 != 0) {
                lVar57 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar62 * 4) * param_10);
                do {
                  uVar64 = uVar64 + 1;
                  uVar2 = *(undefined2 *)(lVar56 + lVar47 + uVar60 * 2 + lVar44 + lVar57);
                  uVar3 = *(undefined2 *)(lVar56 + lVar57 + param_2 + lVar47 + uVar60 * 2 + lVar44);
                  bVar77 = (byte)uVar2;
                  bVar71 = (bVar71 < bVar77) * bVar77 | (bVar71 >= bVar77) * bVar71;
                  bVar77 = (byte)((ushort)uVar2 >> 8);
                  bVar72 = (bVar72 < bVar77) * bVar77 | (bVar72 >= bVar77) * bVar72;
                  uVar2 = *(undefined2 *)
                           (lVar56 + lVar47 + param_2 * 2 + uVar60 * 2 + lVar44 + lVar57);
                  bVar77 = (byte)uVar3;
                  bVar69 = (bVar69 < bVar77) * bVar77 | (bVar69 >= bVar77) * bVar69;
                  bVar77 = (byte)((ushort)uVar3 >> 8);
                  bVar70 = (bVar70 < bVar77) * bVar77 | (bVar70 >= bVar77) * bVar70;
                  uVar3 = *(undefined2 *)(lVar56 + lVar47 + lVar49 + uVar60 * 2 + lVar44 + lVar57);
                  lVar56 = lVar56 + lVar53;
                  bVar77 = (byte)uVar2;
                  bVar75 = (bVar75 < bVar77) * bVar77 | (bVar75 >= bVar77) * bVar75;
                  bVar77 = (byte)((ushort)uVar2 >> 8);
                  bVar76 = (bVar76 < bVar77) * bVar77 | (bVar76 >= bVar77) * bVar76;
                  bVar77 = (byte)uVar3;
                  bVar73 = (bVar73 < bVar77) * bVar77 | (bVar73 >= bVar77) * bVar73;
                  bVar77 = (byte)((ushort)uVar3 >> 8);
                  bVar74 = (bVar74 < bVar77) * bVar77 | (bVar74 >= bVar77) * bVar74;
                } while (uVar64 < uVar65);
              }
              uVar62 = uVar62 + 1;
              lVar44 = lVar44 + param_2;
            } while (uVar62 < param_8);
          }
          uVar60 = uVar60 + 1;
          *pbStack_2b0 = bVar71;
          pbStack_2b0[1] = bVar72;
          lVar46 = lVar46 + 2;
          pbStack_2b0[param_4] = bVar69;
          (pbStack_2b0 + param_4)[1] = bVar70;
          lVar66 = lVar66 + 2;
          pbStack_2b0[param_4 * 2] = bVar75;
          (pbStack_2b0 + param_4 * 2)[1] = bVar76;
          pbStack_2b0[lVar48] = bVar73;
          (pbStack_2b0 + lVar48)[1] = bVar74;
          pbStack_2b0 = pbStack_2b0 + 2;
        } while (uVar60 < uVar51 >> 1);
      }
      uVar60 = 0;
      if (lVar66 < (longlong)param_5) {
        do {
          bVar70 = 0;
          bVar67 = bVar70;
          bVar68 = bVar70;
          bVar69 = bVar70;
          if (0 < (longlong)param_8) {
            uVar51 = 0;
            lVar47 = 0;
            do {
              uVar62 = (ulonglong)*(ushort *)(lVar50 + uVar51 * 4);
              uVar65 = 0;
              lVar44 = 0;
              if (uVar62 != 0) {
                lVar56 = (longlong)(int)((uint)*(ushort *)(lVar50 + 2 + uVar51 * 4) * param_10);
                do {
                  uVar65 = uVar65 + 1;
                  bVar71 = *(byte *)(lVar44 + lVar46 + uVar60 + lVar47 + lVar56);
                  bVar72 = *(byte *)(lVar44 + param_2 + lVar46 + uVar60 + lVar47 + lVar56);
                  bVar68 = (bVar68 < bVar71) * bVar71 | (bVar68 >= bVar71) * bVar68;
                  bVar71 = *(byte *)(lVar44 + lVar46 + param_2 * 2 + uVar60 + lVar47 + lVar56);
                  bVar67 = (bVar67 < bVar72) * bVar72 | (bVar67 >= bVar72) * bVar67;
                  bVar72 = *(byte *)(lVar44 + lVar56 + lVar46 + lVar49 + uVar60 + lVar47);
                  lVar44 = lVar44 + lVar53;
                  bVar69 = (bVar69 < bVar71) * bVar71 | (bVar69 >= bVar71) * bVar69;
                  bVar70 = (bVar70 < bVar72) * bVar72 | (bVar70 >= bVar72) * bVar70;
                } while (uVar65 < uVar62);
              }
              uVar51 = uVar51 + 1;
              lVar47 = lVar47 + param_2;
            } while (uVar51 < param_8);
          }
          uVar60 = uVar60 + 1;
          *pbStack_2b0 = bVar68;
          pbStack_2b0[param_4] = bVar67;
          pbStack_2b0[param_4 * 2] = bVar69;
          pbStack_2b0[lVar48] = bVar70;
          pbStack_2b0 = pbStack_2b0 + 1;
        } while (uVar60 < param_5 - lVar66);
      }
      lVar55 = lVar55 + param_2 * 4;
      lVar63 = lVar63 + param_4 * 4;
      lVar47 = uVar41 * 4 + 4;
      uVar41 = uVar41 + 1;
    } while (uVar41 < (ulonglong)
                      ((longlong)(((ulonglong)((longlong)(uVar43 + 3) >> 1) >> 0x3e) + 3 + uVar43)
                      >> 2));
  }
  uVar41 = 0;
  lVar52 = 0;
  lVar55 = 0;
  if ((longlong)param_6 <= lVar47) {
    return;
  }
  param_9 = param_8 * 2 + param_7 * param_8 * 3 + param_9;
  lVar63 = (longlong)param_10;
LAB_14042fb40:
  uVar43 = 0;
  pbStack_258 = (byte *)(param_3 + lVar47 * param_4 + lVar55);
  lVar49 = 0;
  lVar48 = param_1 + param_2 * lVar47 + lVar52;
  if (0 < (longlong)(param_5 & 0xffffffffffffffc0)) {
    lVar50 = lVar47 * param_4 + param_3 + lVar55;
    lVar45 = 0;
    do {
      bVar86 = 0;
      bVar87 = 0;
      bVar88 = 0;
      bVar89 = 0;
      bVar90 = 0;
      bVar91 = 0;
      bVar92 = 0;
      bVar93 = 0;
      bVar94 = 0;
      bVar95 = 0;
      bVar96 = 0;
      bVar97 = 0;
      bVar98 = 0;
      bVar99 = 0;
      bVar100 = 0;
      bVar101 = 0;
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      bVar75 = 0;
      bVar76 = 0;
      bVar77 = 0;
      bVar78 = 0;
      bVar79 = 0;
      bVar80 = 0;
      bVar81 = 0;
      bVar82 = 0;
      bVar118 = 0;
      bVar119 = 0;
      bVar120 = 0;
      bVar121 = 0;
      bVar122 = 0;
      bVar123 = 0;
      bVar124 = 0;
      bVar125 = 0;
      bVar126 = 0;
      bVar127 = 0;
      bVar128 = 0;
      bVar129 = 0;
      bVar130 = 0;
      bVar131 = 0;
      bVar132 = 0;
      bVar133 = 0;
      bVar102 = 0;
      bVar103 = 0;
      bVar104 = 0;
      bVar105 = 0;
      bVar106 = 0;
      bVar107 = 0;
      bVar108 = 0;
      bVar109 = 0;
      bVar110 = 0;
      bVar111 = 0;
      bVar112 = 0;
      bVar113 = 0;
      bVar114 = 0;
      bVar115 = 0;
      bVar116 = 0;
      bVar117 = 0;
      if (0 < (longlong)param_8) {
        bVar150 = 0;
        bVar151 = 0;
        bVar152 = 0;
        bVar153 = 0;
        bVar154 = 0;
        bVar155 = 0;
        bVar156 = 0;
        bVar157 = 0;
        bVar158 = 0;
        bVar159 = 0;
        bVar160 = 0;
        bVar161 = 0;
        bVar162 = 0;
        bVar163 = 0;
        bVar164 = 0;
        bVar165 = 0;
        uVar60 = 0;
        lVar49 = param_2 * lVar47 + param_1 + lVar52 + lVar45;
        lVar53 = 0;
        bVar134 = 0;
        bVar135 = 0;
        bVar136 = 0;
        bVar137 = 0;
        bVar138 = 0;
        bVar139 = 0;
        bVar140 = 0;
        bVar141 = 0;
        bVar142 = 0;
        bVar143 = 0;
        bVar144 = 0;
        bVar145 = 0;
        bVar146 = 0;
        bVar147 = 0;
        bVar148 = 0;
        bVar149 = 0;
        bVar182 = 0;
        bVar183 = 0;
        bVar184 = 0;
        bVar185 = 0;
        bVar186 = 0;
        bVar187 = 0;
        bVar188 = 0;
        bVar189 = 0;
        bVar190 = 0;
        bVar191 = 0;
        bVar192 = 0;
        bVar193 = 0;
        bVar194 = 0;
        bVar195 = 0;
        bVar196 = 0;
        bVar197 = 0;
        bVar166 = 0;
        bVar167 = 0;
        bVar168 = 0;
        bVar169 = 0;
        bVar170 = 0;
        bVar171 = 0;
        bVar172 = 0;
        bVar173 = 0;
        bVar174 = 0;
        bVar175 = 0;
        bVar176 = 0;
        bVar177 = 0;
        bVar178 = 0;
        bVar179 = 0;
        bVar180 = 0;
        bVar181 = 0;
        do {
          uVar62 = (ulonglong)*(ushort *)(param_9 + uVar60 * 4);
          uVar51 = 0;
          lVar66 = 0;
          if (uVar62 != 0) {
            lVar46 = (longlong)(int)((uint)*(ushort *)(param_9 + 2 + uVar60 * 4) * param_10);
            lVar44 = lVar46 + lVar53 + lVar49;
            do {
              uVar51 = uVar51 + 1;
              pbVar1 = (byte *)(lVar66 + lVar49 + lVar53 + lVar46);
              bVar67 = *pbVar1;
              bVar68 = pbVar1[1];
              bVar69 = pbVar1[2];
              bVar70 = pbVar1[3];
              bVar71 = pbVar1[4];
              bVar72 = pbVar1[5];
              bVar73 = pbVar1[6];
              bVar74 = pbVar1[7];
              bVar75 = pbVar1[8];
              bVar76 = pbVar1[9];
              bVar77 = pbVar1[10];
              bVar78 = pbVar1[0xb];
              bVar79 = pbVar1[0xc];
              bVar80 = pbVar1[0xd];
              bVar81 = pbVar1[0xe];
              bVar82 = pbVar1[0xf];
              pbVar1 = (byte *)(lVar66 + 0x10 + lVar44);
              bVar86 = *pbVar1;
              bVar87 = pbVar1[1];
              bVar88 = pbVar1[2];
              bVar89 = pbVar1[3];
              bVar90 = pbVar1[4];
              bVar91 = pbVar1[5];
              bVar92 = pbVar1[6];
              bVar93 = pbVar1[7];
              bVar94 = pbVar1[8];
              bVar95 = pbVar1[9];
              bVar96 = pbVar1[10];
              bVar97 = pbVar1[0xb];
              bVar98 = pbVar1[0xc];
              bVar99 = pbVar1[0xd];
              bVar100 = pbVar1[0xe];
              bVar101 = pbVar1[0xf];
              bVar150 = (bVar150 < bVar67) * bVar67 | (bVar150 >= bVar67) * bVar150;
              bVar151 = (bVar151 < bVar68) * bVar68 | (bVar151 >= bVar68) * bVar151;
              bVar152 = (bVar152 < bVar69) * bVar69 | (bVar152 >= bVar69) * bVar152;
              bVar153 = (bVar153 < bVar70) * bVar70 | (bVar153 >= bVar70) * bVar153;
              bVar154 = (bVar154 < bVar71) * bVar71 | (bVar154 >= bVar71) * bVar154;
              bVar155 = (bVar155 < bVar72) * bVar72 | (bVar155 >= bVar72) * bVar155;
              bVar156 = (bVar156 < bVar73) * bVar73 | (bVar156 >= bVar73) * bVar156;
              bVar157 = (bVar157 < bVar74) * bVar74 | (bVar157 >= bVar74) * bVar157;
              bVar158 = (bVar158 < bVar75) * bVar75 | (bVar158 >= bVar75) * bVar158;
              bVar159 = (bVar159 < bVar76) * bVar76 | (bVar159 >= bVar76) * bVar159;
              bVar160 = (bVar160 < bVar77) * bVar77 | (bVar160 >= bVar77) * bVar160;
              bVar161 = (bVar161 < bVar78) * bVar78 | (bVar161 >= bVar78) * bVar161;
              bVar162 = (bVar162 < bVar79) * bVar79 | (bVar162 >= bVar79) * bVar162;
              bVar163 = (bVar163 < bVar80) * bVar80 | (bVar163 >= bVar80) * bVar163;
              bVar164 = (bVar164 < bVar81) * bVar81 | (bVar164 >= bVar81) * bVar164;
              bVar165 = (bVar165 < bVar82) * bVar82 | (bVar165 >= bVar82) * bVar165;
              pbVar1 = (byte *)(lVar66 + 0x20 + lVar44);
              bVar67 = *pbVar1;
              bVar68 = pbVar1[1];
              bVar69 = pbVar1[2];
              bVar70 = pbVar1[3];
              bVar71 = pbVar1[4];
              bVar72 = pbVar1[5];
              bVar73 = pbVar1[6];
              bVar74 = pbVar1[7];
              bVar75 = pbVar1[8];
              bVar76 = pbVar1[9];
              bVar77 = pbVar1[10];
              bVar78 = pbVar1[0xb];
              bVar79 = pbVar1[0xc];
              bVar80 = pbVar1[0xd];
              bVar81 = pbVar1[0xe];
              bVar82 = pbVar1[0xf];
              bVar134 = (bVar134 < bVar86) * bVar86 | (bVar134 >= bVar86) * bVar134;
              bVar135 = (bVar135 < bVar87) * bVar87 | (bVar135 >= bVar87) * bVar135;
              bVar136 = (bVar136 < bVar88) * bVar88 | (bVar136 >= bVar88) * bVar136;
              bVar137 = (bVar137 < bVar89) * bVar89 | (bVar137 >= bVar89) * bVar137;
              bVar138 = (bVar138 < bVar90) * bVar90 | (bVar138 >= bVar90) * bVar138;
              bVar139 = (bVar139 < bVar91) * bVar91 | (bVar139 >= bVar91) * bVar139;
              bVar140 = (bVar140 < bVar92) * bVar92 | (bVar140 >= bVar92) * bVar140;
              bVar141 = (bVar141 < bVar93) * bVar93 | (bVar141 >= bVar93) * bVar141;
              bVar142 = (bVar142 < bVar94) * bVar94 | (bVar142 >= bVar94) * bVar142;
              bVar143 = (bVar143 < bVar95) * bVar95 | (bVar143 >= bVar95) * bVar143;
              bVar144 = (bVar144 < bVar96) * bVar96 | (bVar144 >= bVar96) * bVar144;
              bVar145 = (bVar145 < bVar97) * bVar97 | (bVar145 >= bVar97) * bVar145;
              bVar146 = (bVar146 < bVar98) * bVar98 | (bVar146 >= bVar98) * bVar146;
              bVar147 = (bVar147 < bVar99) * bVar99 | (bVar147 >= bVar99) * bVar147;
              bVar148 = (bVar148 < bVar100) * bVar100 | (bVar148 >= bVar100) * bVar148;
              bVar149 = (bVar149 < bVar101) * bVar101 | (bVar149 >= bVar101) * bVar149;
              pbVar1 = (byte *)(lVar66 + 0x30 + lVar44);
              bVar86 = *pbVar1;
              bVar87 = pbVar1[1];
              bVar88 = pbVar1[2];
              bVar89 = pbVar1[3];
              bVar90 = pbVar1[4];
              bVar91 = pbVar1[5];
              bVar92 = pbVar1[6];
              bVar93 = pbVar1[7];
              bVar94 = pbVar1[8];
              bVar95 = pbVar1[9];
              bVar96 = pbVar1[10];
              bVar97 = pbVar1[0xb];
              bVar98 = pbVar1[0xc];
              bVar99 = pbVar1[0xd];
              bVar100 = pbVar1[0xe];
              bVar101 = pbVar1[0xf];
              lVar66 = lVar66 + lVar63;
              bVar182 = (bVar182 < bVar67) * bVar67 | (bVar182 >= bVar67) * bVar182;
              bVar183 = (bVar183 < bVar68) * bVar68 | (bVar183 >= bVar68) * bVar183;
              bVar184 = (bVar184 < bVar69) * bVar69 | (bVar184 >= bVar69) * bVar184;
              bVar185 = (bVar185 < bVar70) * bVar70 | (bVar185 >= bVar70) * bVar185;
              bVar186 = (bVar186 < bVar71) * bVar71 | (bVar186 >= bVar71) * bVar186;
              bVar187 = (bVar187 < bVar72) * bVar72 | (bVar187 >= bVar72) * bVar187;
              bVar188 = (bVar188 < bVar73) * bVar73 | (bVar188 >= bVar73) * bVar188;
              bVar189 = (bVar189 < bVar74) * bVar74 | (bVar189 >= bVar74) * bVar189;
              bVar190 = (bVar190 < bVar75) * bVar75 | (bVar190 >= bVar75) * bVar190;
              bVar191 = (bVar191 < bVar76) * bVar76 | (bVar191 >= bVar76) * bVar191;
              bVar192 = (bVar192 < bVar77) * bVar77 | (bVar192 >= bVar77) * bVar192;
              bVar193 = (bVar193 < bVar78) * bVar78 | (bVar193 >= bVar78) * bVar193;
              bVar194 = (bVar194 < bVar79) * bVar79 | (bVar194 >= bVar79) * bVar194;
              bVar195 = (bVar195 < bVar80) * bVar80 | (bVar195 >= bVar80) * bVar195;
              bVar196 = (bVar196 < bVar81) * bVar81 | (bVar196 >= bVar81) * bVar196;
              bVar197 = (bVar197 < bVar82) * bVar82 | (bVar197 >= bVar82) * bVar197;
              bVar166 = (bVar166 < bVar86) * bVar86 | (bVar166 >= bVar86) * bVar166;
              bVar167 = (bVar167 < bVar87) * bVar87 | (bVar167 >= bVar87) * bVar167;
              bVar168 = (bVar168 < bVar88) * bVar88 | (bVar168 >= bVar88) * bVar168;
              bVar169 = (bVar169 < bVar89) * bVar89 | (bVar169 >= bVar89) * bVar169;
              bVar170 = (bVar170 < bVar90) * bVar90 | (bVar170 >= bVar90) * bVar170;
              bVar171 = (bVar171 < bVar91) * bVar91 | (bVar171 >= bVar91) * bVar171;
              bVar172 = (bVar172 < bVar92) * bVar92 | (bVar172 >= bVar92) * bVar172;
              bVar173 = (bVar173 < bVar93) * bVar93 | (bVar173 >= bVar93) * bVar173;
              bVar174 = (bVar174 < bVar94) * bVar94 | (bVar174 >= bVar94) * bVar174;
              bVar175 = (bVar175 < bVar95) * bVar95 | (bVar175 >= bVar95) * bVar175;
              bVar176 = (bVar176 < bVar96) * bVar96 | (bVar176 >= bVar96) * bVar176;
              bVar177 = (bVar177 < bVar97) * bVar97 | (bVar177 >= bVar97) * bVar177;
              bVar178 = (bVar178 < bVar98) * bVar98 | (bVar178 >= bVar98) * bVar178;
              bVar179 = (bVar179 < bVar99) * bVar99 | (bVar179 >= bVar99) * bVar179;
              bVar180 = (bVar180 < bVar100) * bVar100 | (bVar180 >= bVar100) * bVar180;
              bVar181 = (bVar181 < bVar101) * bVar101 | (bVar181 >= bVar101) * bVar181;
              bVar67 = bVar134;
              bVar68 = bVar135;
              bVar69 = bVar136;
              bVar70 = bVar137;
              bVar71 = bVar138;
              bVar72 = bVar139;
              bVar73 = bVar140;
              bVar74 = bVar141;
              bVar75 = bVar142;
              bVar76 = bVar143;
              bVar77 = bVar144;
              bVar78 = bVar145;
              bVar79 = bVar146;
              bVar80 = bVar147;
              bVar81 = bVar148;
              bVar82 = bVar149;
              bVar86 = bVar150;
              bVar87 = bVar151;
              bVar88 = bVar152;
              bVar89 = bVar153;
              bVar90 = bVar154;
              bVar91 = bVar155;
              bVar92 = bVar156;
              bVar93 = bVar157;
              bVar94 = bVar158;
              bVar95 = bVar159;
              bVar96 = bVar160;
              bVar97 = bVar161;
              bVar98 = bVar162;
              bVar99 = bVar163;
              bVar100 = bVar164;
              bVar101 = bVar165;
              bVar102 = bVar166;
              bVar103 = bVar167;
              bVar104 = bVar168;
              bVar105 = bVar169;
              bVar106 = bVar170;
              bVar107 = bVar171;
              bVar108 = bVar172;
              bVar109 = bVar173;
              bVar110 = bVar174;
              bVar111 = bVar175;
              bVar112 = bVar176;
              bVar113 = bVar177;
              bVar114 = bVar178;
              bVar115 = bVar179;
              bVar116 = bVar180;
              bVar117 = bVar181;
              bVar118 = bVar182;
              bVar119 = bVar183;
              bVar120 = bVar184;
              bVar121 = bVar185;
              bVar122 = bVar186;
              bVar123 = bVar187;
              bVar124 = bVar188;
              bVar125 = bVar189;
              bVar126 = bVar190;
              bVar127 = bVar191;
              bVar128 = bVar192;
              bVar129 = bVar193;
              bVar130 = bVar194;
              bVar131 = bVar195;
              bVar132 = bVar196;
              bVar133 = bVar197;
            } while (uVar51 < uVar62);
          }
          uVar60 = uVar60 + 1;
          lVar53 = lVar53 + param_2;
        } while (uVar60 < param_8);
      }
      uVar43 = uVar43 + 1;
      lVar48 = lVar48 + 0x40;
      lVar49 = lVar45 + 0x40;
      pbStack_258 = pbStack_258 + 0x40;
      pbVar1 = (byte *)(lVar50 + lVar45);
      *pbVar1 = bVar86;
      pbVar1[1] = bVar87;
      pbVar1[2] = bVar88;
      pbVar1[3] = bVar89;
      pbVar1[4] = bVar90;
      pbVar1[5] = bVar91;
      pbVar1[6] = bVar92;
      pbVar1[7] = bVar93;
      pbVar1[8] = bVar94;
      pbVar1[9] = bVar95;
      pbVar1[10] = bVar96;
      pbVar1[0xb] = bVar97;
      pbVar1[0xc] = bVar98;
      pbVar1[0xd] = bVar99;
      pbVar1[0xe] = bVar100;
      pbVar1[0xf] = bVar101;
      pbVar1 = (byte *)(lVar50 + 0x10 + lVar45);
      *pbVar1 = bVar67;
      pbVar1[1] = bVar68;
      pbVar1[2] = bVar69;
      pbVar1[3] = bVar70;
      pbVar1[4] = bVar71;
      pbVar1[5] = bVar72;
      pbVar1[6] = bVar73;
      pbVar1[7] = bVar74;
      pbVar1[8] = bVar75;
      pbVar1[9] = bVar76;
      pbVar1[10] = bVar77;
      pbVar1[0xb] = bVar78;
      pbVar1[0xc] = bVar79;
      pbVar1[0xd] = bVar80;
      pbVar1[0xe] = bVar81;
      pbVar1[0xf] = bVar82;
      pbVar1 = (byte *)(lVar50 + 0x20 + lVar45);
      *pbVar1 = bVar118;
      pbVar1[1] = bVar119;
      pbVar1[2] = bVar120;
      pbVar1[3] = bVar121;
      pbVar1[4] = bVar122;
      pbVar1[5] = bVar123;
      pbVar1[6] = bVar124;
      pbVar1[7] = bVar125;
      pbVar1[8] = bVar126;
      pbVar1[9] = bVar127;
      pbVar1[10] = bVar128;
      pbVar1[0xb] = bVar129;
      pbVar1[0xc] = bVar130;
      pbVar1[0xd] = bVar131;
      pbVar1[0xe] = bVar132;
      pbVar1[0xf] = bVar133;
      pbVar1 = (byte *)(lVar50 + 0x30 + lVar45);
      *pbVar1 = bVar102;
      pbVar1[1] = bVar103;
      pbVar1[2] = bVar104;
      pbVar1[3] = bVar105;
      pbVar1[4] = bVar106;
      pbVar1[5] = bVar107;
      pbVar1[6] = bVar108;
      pbVar1[7] = bVar109;
      pbVar1[8] = bVar110;
      pbVar1[9] = bVar111;
      pbVar1[10] = bVar112;
      pbVar1[0xb] = bVar113;
      pbVar1[0xc] = bVar114;
      pbVar1[0xd] = bVar115;
      pbVar1[0xe] = bVar116;
      pbVar1[0xf] = bVar117;
      lVar45 = lVar49;
    } while (uVar43 < (param_5 & 0xffffffffffffffc0) + 0x3f >> 6);
  }
  lVar45 = lVar49;
  lVar50 = lVar48;
  if (lVar49 < (longlong)uVar61) {
    uVar43 = 1;
    uVar60 = 0;
    uVar51 = (uVar61 - lVar49) + 0xf >> 7;
    if (uVar51 != 0) {
      lVar54 = 0;
      lVar57 = 0;
      lVar56 = 0;
      lVar50 = 0;
      lVar53 = lVar48;
      lVar66 = lVar54;
      lVar46 = lVar57;
      lVar44 = lVar56;
      do {
        uVar60 = uVar60 + 1;
        lVar53 = lVar53 + 0x10;
        lVar50 = lVar50 + 0x10;
        lVar66 = lVar66 + 0x10;
        lVar54 = lVar54 + 0x10;
        lVar46 = lVar46 + 0x10;
        lVar57 = lVar57 + 0x10;
        lVar44 = lVar44 + 0x10;
        lVar56 = lVar56 + 0x10;
      } while (uVar60 < uVar51);
      lVar50 = lVar53 + lVar50 + lVar66 + lVar54 + lVar46 + lVar57 + lVar44 + lVar56;
      uVar43 = uVar60 * 8 + 1;
    }
    lVar53 = (uVar61 - 1) - lVar49;
    uVar60 = (longlong)(lVar53 + 0x10 + ((ulonglong)(lVar53 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x00014042ff22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14042ff24 + (byte)(&DAT_143089f00)[(uint)((int)uVar60 - (int)uVar43)]))();
      return;
    }
    uVar43 = 0;
    lVar53 = 0;
    do {
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      bVar75 = 0;
      bVar76 = 0;
      bVar77 = 0;
      bVar78 = 0;
      bVar79 = 0;
      bVar80 = 0;
      bVar81 = 0;
      bVar82 = 0;
      uVar60 = 0;
      lVar66 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar65 = (ulonglong)*(ushort *)(param_9 + uVar60 * 4);
          uVar62 = 0;
          lVar46 = 0;
          if (uVar65 != 0) {
            do {
              uVar62 = uVar62 + 1;
              pbVar1 = (byte *)(lVar46 + (longlong)
                                         (int)((uint)*(ushort *)(param_9 + 2 + uVar60 * 4) *
                                              param_10) + lVar48 + lVar53 + lVar66);
              bVar86 = *pbVar1;
              bVar87 = pbVar1[1];
              bVar88 = pbVar1[2];
              bVar89 = pbVar1[3];
              bVar90 = pbVar1[4];
              bVar91 = pbVar1[5];
              bVar92 = pbVar1[6];
              bVar93 = pbVar1[7];
              bVar94 = pbVar1[8];
              bVar95 = pbVar1[9];
              bVar96 = pbVar1[10];
              bVar97 = pbVar1[0xb];
              bVar98 = pbVar1[0xc];
              bVar99 = pbVar1[0xd];
              bVar100 = pbVar1[0xe];
              bVar101 = pbVar1[0xf];
              lVar46 = lVar46 + lVar63;
              bVar67 = (bVar67 < bVar86) * bVar86 | (bVar67 >= bVar86) * bVar67;
              bVar68 = (bVar68 < bVar87) * bVar87 | (bVar68 >= bVar87) * bVar68;
              bVar69 = (bVar69 < bVar88) * bVar88 | (bVar69 >= bVar88) * bVar69;
              bVar70 = (bVar70 < bVar89) * bVar89 | (bVar70 >= bVar89) * bVar70;
              bVar71 = (bVar71 < bVar90) * bVar90 | (bVar71 >= bVar90) * bVar71;
              bVar72 = (bVar72 < bVar91) * bVar91 | (bVar72 >= bVar91) * bVar72;
              bVar73 = (bVar73 < bVar92) * bVar92 | (bVar73 >= bVar92) * bVar73;
              bVar74 = (bVar74 < bVar93) * bVar93 | (bVar74 >= bVar93) * bVar74;
              bVar75 = (bVar75 < bVar94) * bVar94 | (bVar75 >= bVar94) * bVar75;
              bVar76 = (bVar76 < bVar95) * bVar95 | (bVar76 >= bVar95) * bVar76;
              bVar77 = (bVar77 < bVar96) * bVar96 | (bVar77 >= bVar96) * bVar77;
              bVar78 = (bVar78 < bVar97) * bVar97 | (bVar78 >= bVar97) * bVar78;
              bVar79 = (bVar79 < bVar98) * bVar98 | (bVar79 >= bVar98) * bVar79;
              bVar80 = (bVar80 < bVar99) * bVar99 | (bVar80 >= bVar99) * bVar80;
              bVar81 = (bVar81 < bVar100) * bVar100 | (bVar81 >= bVar100) * bVar81;
              bVar82 = (bVar82 < bVar101) * bVar101 | (bVar82 >= bVar101) * bVar82;
            } while (uVar62 < uVar65);
          }
          uVar60 = uVar60 + 1;
          lVar66 = lVar66 + param_2;
        } while (uVar60 < param_8);
      }
      uVar43 = uVar43 + 1;
      *pbStack_258 = bVar67;
      pbStack_258[1] = bVar68;
      pbStack_258[2] = bVar69;
      pbStack_258[3] = bVar70;
      pbStack_258[4] = bVar71;
      pbStack_258[5] = bVar72;
      pbStack_258[6] = bVar73;
      pbStack_258[7] = bVar74;
      pbStack_258[8] = bVar75;
      pbStack_258[9] = bVar76;
      pbStack_258[10] = bVar77;
      pbStack_258[0xb] = bVar78;
      pbStack_258[0xc] = bVar79;
      pbStack_258[0xd] = bVar80;
      pbStack_258[0xe] = bVar81;
      pbStack_258[0xf] = bVar82;
      pbStack_258 = pbStack_258 + 0x10;
      lVar53 = lVar53 + 0x10;
    } while (uVar43 < (uVar61 + 0xf) - lVar49 >> 4);
    uVar43 = 1;
    uVar60 = 0;
    if (uVar51 != 0) {
      lVar44 = 0;
      lVar46 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar48 = 0;
      lVar53 = lVar46;
      lVar66 = lVar44;
      do {
        uVar60 = uVar60 + 1;
        lVar45 = lVar45 + 0x10;
        lVar48 = lVar48 + 0x10;
        lVar66 = lVar66 + 0x10;
        lVar44 = lVar44 + 0x10;
        lVar56 = lVar56 + 0x10;
        lVar57 = lVar57 + 0x10;
        lVar46 = lVar46 + 0x10;
        lVar53 = lVar53 + 0x10;
      } while (uVar60 < (uVar61 - lVar49) + 0xf >> 7);
      lVar45 = lVar45 + lVar48 + lVar66 + lVar44 + lVar56 + lVar57 + lVar46 + lVar53;
      uVar43 = uVar60 * 8 + 1;
    }
    lVar49 = (uVar61 - 1) - lVar49;
    uVar60 = (longlong)(lVar49 + 0x10 + ((ulonglong)(lVar49 + 0x10 >> 3) >> 0x3c)) >> 4;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x00014043024a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14043024c + (byte)(&DAT_143089f08)[(uint)((int)uVar60 - (int)uVar43)]))();
      return;
    }
  }
  uVar43 = 0;
  lVar49 = lVar50;
  if (lVar45 < (longlong)uVar40) {
    uVar60 = (uVar40 + 7) - lVar45;
    do {
      bVar67 = 0;
      bVar68 = 0;
      bVar69 = 0;
      bVar70 = 0;
      bVar71 = 0;
      bVar72 = 0;
      bVar73 = 0;
      bVar74 = 0;
      uVar51 = 0;
      lVar48 = 0;
      if (0 < (longlong)param_8) {
        bVar67 = 0;
        bVar68 = 0;
        bVar69 = 0;
        bVar70 = 0;
        bVar71 = 0;
        bVar72 = 0;
        bVar73 = 0;
        bVar74 = 0;
        do {
          uVar65 = (ulonglong)*(ushort *)(param_9 + uVar51 * 4);
          uVar62 = 0;
          lVar53 = 0;
          if (uVar65 != 0) {
            do {
              uVar62 = uVar62 + 1;
              uVar4 = *(undefined8 *)
                       (lVar53 + (longlong)
                                 (int)((uint)*(ushort *)(param_9 + 2 + uVar51 * 4) * param_10) +
                                 lVar50 + uVar43 * 8 + lVar48);
              lVar53 = lVar53 + lVar63;
              bVar75 = (byte)uVar4;
              bVar67 = (bVar67 < bVar75) * bVar75 | (bVar67 >= bVar75) * bVar67;
              bVar75 = (byte)((ulonglong)uVar4 >> 8);
              bVar68 = (bVar68 < bVar75) * bVar75 | (bVar68 >= bVar75) * bVar68;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x10);
              bVar69 = (bVar69 < bVar75) * bVar75 | (bVar69 >= bVar75) * bVar69;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x18);
              bVar70 = (bVar70 < bVar75) * bVar75 | (bVar70 >= bVar75) * bVar70;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x20);
              bVar71 = (bVar71 < bVar75) * bVar75 | (bVar71 >= bVar75) * bVar71;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x28);
              bVar72 = (bVar72 < bVar75) * bVar75 | (bVar72 >= bVar75) * bVar72;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x30);
              bVar73 = (bVar73 < bVar75) * bVar75 | (bVar73 >= bVar75) * bVar73;
              bVar75 = (byte)((ulonglong)uVar4 >> 0x38);
              bVar74 = (bVar74 < bVar75) * bVar75 | (bVar74 >= bVar75) * bVar74;
            } while (uVar62 < uVar65);
          }
          uVar51 = uVar51 + 1;
          lVar48 = lVar48 + param_2;
        } while (uVar51 < param_8);
      }
      uVar43 = uVar43 + 1;
      *pbStack_258 = bVar67;
      pbStack_258[1] = bVar68;
      pbStack_258[2] = bVar69;
      pbStack_258[3] = bVar70;
      pbStack_258[4] = bVar71;
      pbStack_258[5] = bVar72;
      pbStack_258[6] = bVar73;
      pbStack_258[7] = bVar74;
      lVar49 = lVar49 + 8;
      pbStack_258 = pbStack_258 + 8;
      lVar45 = lVar45 + 8;
    } while (uVar43 < uVar60 >> 3);
  }
  lVar48 = lVar45;
  lVar50 = lVar49;
  if (lVar45 < (longlong)uVar59) {
    uVar43 = 1;
    uVar60 = 0;
    uVar51 = (uVar59 - lVar45) + 3 >> 5;
    if (uVar51 != 0) {
      lVar54 = 0;
      lVar57 = 0;
      lVar56 = 0;
      lVar50 = 0;
      lVar53 = lVar49;
      lVar66 = lVar54;
      lVar46 = lVar57;
      lVar44 = lVar56;
      do {
        uVar60 = uVar60 + 1;
        lVar53 = lVar53 + 4;
        lVar50 = lVar50 + 4;
        lVar66 = lVar66 + 4;
        lVar54 = lVar54 + 4;
        lVar46 = lVar46 + 4;
        lVar57 = lVar57 + 4;
        lVar44 = lVar44 + 4;
        lVar56 = lVar56 + 4;
      } while (uVar60 < uVar51);
      lVar50 = lVar53 + lVar50 + lVar66 + lVar54 + lVar46 + lVar57 + lVar44 + lVar56;
      uVar43 = uVar60 * 8 + 1;
    }
    lVar53 = (uVar59 - 1) - lVar45;
    uVar60 = (longlong)(lVar53 + 4 + ((ulonglong)(lVar53 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x000140430564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_140430566 + (byte)(&DAT_143089f10)[(uint)((int)uVar60 - (int)uVar43)]))();
      return;
    }
    uVar43 = 0;
    do {
      auVar83 = (undefined1  [16])0x0;
      uVar62 = 0;
      lVar53 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar64 = (ulonglong)*(ushort *)(param_9 + uVar62 * 4);
          uVar65 = 0;
          lVar66 = 0;
          if (uVar64 != 0) {
            auVar84 = auVar83;
            do {
              uVar65 = uVar65 + 1;
              uVar6 = *(undefined4 *)
                       (lVar66 + (longlong)
                                 (int)((uint)*(ushort *)(param_9 + 2 + uVar62 * 4) * param_10) +
                                 lVar49 + uVar43 * 4 + lVar53);
              lVar66 = lVar66 + lVar63;
              bVar67 = (byte)uVar6;
              bVar68 = auVar84[0];
              auVar83[0] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              bVar67 = (byte)((uint)uVar6 >> 8);
              bVar68 = auVar84[1];
              auVar83[1] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              bVar67 = (byte)((uint)uVar6 >> 0x10);
              bVar68 = auVar84[2];
              auVar83[2] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              bVar67 = (byte)((uint)uVar6 >> 0x18);
              bVar68 = auVar84[3];
              auVar83[3] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              auVar83._4_3_ = 0;
              auVar83[7] = auVar84[7];
              auVar83[8] = auVar84[8];
              auVar83[9] = auVar84[9];
              auVar83[10] = auVar84[10];
              auVar83[0xb] = auVar84[0xb];
              auVar83[0xc] = auVar84[0xc];
              auVar83[0xd] = auVar84[0xd];
              auVar83[0xe] = auVar84[0xe];
              auVar83[0xf] = auVar84[0xf];
              auVar84 = auVar83;
            } while (uVar65 < uVar64);
          }
          uVar62 = uVar62 + 1;
          lVar53 = lVar53 + param_2;
        } while (uVar62 < param_8);
      }
      uVar43 = uVar43 + 1;
      *(int *)pbStack_258 = auVar83._0_4_;
      pbStack_258 = pbStack_258 + 4;
    } while (uVar43 < (uVar59 + 3) - lVar45 >> 2);
    uVar43 = 0;
    if ((longlong)uVar60 < 2) {
      uVar62 = uVar43;
      if (uVar60 != 0) goto LAB_140430800;
    }
    else {
      uVar62 = uVar60 & 0xfffffffffffffffe;
      do {
        if (0 < (longlong)param_8) {
          if (uVar62 < uVar60) goto LAB_140430799;
          goto LAB_14043088f;
        }
        uVar43 = uVar43 + 2;
      } while (uVar43 < uVar62);
      if (((uVar62 < uVar60) && (uVar62 + 1 < uVar60)) && (uVar62 = uVar62 + 2, uVar62 < uVar60)) {
        while (uVar62 = uVar62 + 1, uVar62 < uVar60) {
LAB_140430800:
          if (0 < (longlong)param_8) {
            if (param_8 < 2) goto LAB_14043140b;
            if (param_8 < 3) goto LAB_14043140b;
            if (param_8 < 4) goto LAB_14043140b;
            if (param_8 < 5) goto LAB_14043140b;
            if (param_8 < 6) goto LAB_14043140b;
            if (param_8 < 7) goto LAB_14043140b;
            if (param_8 < 8) goto LAB_14043140b;
            if (param_8 < 9) goto LAB_14043140b;
            uVar43 = 9;
            if (param_8 < 10) goto LAB_140431406;
            while( true ) {
              do {
                uVar43 = uVar43 + 1;
              } while (uVar43 < param_8);
LAB_140431406:
              if ((longlong)param_8 < 1) break;
LAB_14043140b:
              uVar62 = uVar62 + 1;
              if (uVar60 <= uVar62) goto LAB_14043088f;
LAB_140430799:
              uVar43 = 0;
            }
            if (((uVar60 <= uVar62 + 1) || (uVar60 <= uVar62 + 2)) ||
               (uVar62 = uVar62 + 3, uVar60 <= uVar62)) break;
          }
        }
      }
    }
LAB_14043088f:
    uVar43 = 1;
    uVar60 = 0;
    if (uVar51 != 0) {
      lVar44 = 0;
      lVar46 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar49 = 0;
      lVar53 = lVar46;
      lVar66 = lVar44;
      do {
        uVar60 = uVar60 + 1;
        lVar48 = lVar48 + 4;
        lVar49 = lVar49 + 4;
        lVar66 = lVar66 + 4;
        lVar44 = lVar44 + 4;
        lVar56 = lVar56 + 4;
        lVar57 = lVar57 + 4;
        lVar46 = lVar46 + 4;
        lVar53 = lVar53 + 4;
      } while (uVar60 < (uVar59 - lVar45) + 3 >> 5);
      lVar48 = lVar48 + lVar49 + lVar66 + lVar44 + lVar56 + lVar57 + lVar46 + lVar53;
      uVar43 = uVar60 * 8 + 1;
    }
    lVar45 = (uVar59 - 1) - lVar45;
    uVar60 = (longlong)(lVar45 + 4 + ((ulonglong)(lVar45 + 4 >> 1) >> 0x3e)) >> 2;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x0001404309c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1404309cb + (byte)(&DAT_143089f18)[(uint)((int)uVar60 - (int)uVar43)]))();
      return;
    }
  }
  lVar49 = lVar48;
  lVar45 = lVar50;
  if (lVar48 < (longlong)uVar42) {
    uVar43 = 1;
    uVar60 = 0;
    uVar51 = (uVar42 - lVar48) + 1 >> 4;
    if (uVar51 != 0) {
      lVar54 = 0;
      lVar57 = 0;
      lVar56 = 0;
      lVar45 = 0;
      lVar53 = lVar50;
      lVar66 = lVar54;
      lVar46 = lVar57;
      lVar44 = lVar56;
      do {
        uVar60 = uVar60 + 1;
        lVar53 = lVar53 + 2;
        lVar45 = lVar45 + 2;
        lVar66 = lVar66 + 2;
        lVar54 = lVar54 + 2;
        lVar46 = lVar46 + 2;
        lVar57 = lVar57 + 2;
        lVar44 = lVar44 + 2;
        lVar56 = lVar56 + 2;
      } while (uVar60 < uVar51);
      lVar45 = lVar53 + lVar45 + lVar66 + lVar54 + lVar46 + lVar57 + lVar44 + lVar56;
      uVar43 = uVar60 * 8 + 1;
    }
    lVar53 = (uVar42 - 1) - lVar48;
    uVar60 = (lVar53 + 2) - (lVar53 + 2 >> 0x3f) >> 1;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x000140430b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_140430b6a + (byte)(&DAT_143089f20)[(uint)((int)uVar60 - (int)uVar43)]))();
      return;
    }
    uVar43 = 0;
    do {
      auVar84 = (undefined1  [16])0x0;
      uVar62 = 0;
      lVar53 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar64 = (ulonglong)*(ushort *)(param_9 + uVar62 * 4);
          uVar65 = 0;
          lVar66 = 0;
          if (uVar64 != 0) {
            auVar83 = auVar84;
            do {
              uVar65 = uVar65 + 1;
              uVar2 = *(undefined2 *)
                       (lVar66 + (longlong)
                                 (int)((uint)*(ushort *)(param_9 + 2 + uVar62 * 4) * param_10) +
                                 lVar50 + uVar43 * 2 + lVar53);
              lVar66 = lVar66 + lVar63;
              bVar67 = (byte)uVar2;
              bVar68 = auVar83[0];
              auVar84[0] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              bVar67 = (byte)((ushort)uVar2 >> 8);
              bVar68 = auVar83[1];
              auVar84[1] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              auVar84._2_5_ = 0;
              auVar84[7] = auVar83[7];
              auVar84[8] = auVar83[8];
              auVar84[9] = auVar83[9];
              auVar84[10] = auVar83[10];
              auVar84[0xb] = auVar83[0xb];
              auVar84[0xc] = auVar83[0xc];
              auVar84[0xd] = auVar83[0xd];
              auVar84[0xe] = auVar83[0xe];
              auVar84[0xf] = auVar83[0xf];
              auVar83 = auVar84;
            } while (uVar65 < uVar64);
          }
          uVar62 = uVar62 + 1;
          lVar53 = lVar53 + param_2;
        } while (uVar62 < param_8);
      }
      uVar43 = uVar43 + 1;
      *(short *)pbStack_258 = auVar84._0_2_;
      pbStack_258 = pbStack_258 + 2;
    } while (uVar43 < (uVar42 + 1) - lVar48 >> 1);
    uVar43 = 0;
    if (1 < (longlong)uVar60) {
      uVar62 = uVar60 & 0xfffffffffffffffe;
LAB_140430d80:
      if ((longlong)param_8 < 1) goto code_r0x000140430d89;
      uVar65 = 0;
      while( true ) {
        do {
          uVar65 = uVar65 + 1;
        } while (uVar65 < param_8);
        uVar43 = uVar43 + 2;
        if (uVar62 <= uVar43) break;
        uVar65 = 0;
      }
      if (uVar62 < uVar60) goto LAB_140430ea7;
      goto LAB_140430eab;
    }
    if (uVar60 != 0) {
      do {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_140431450;
          if (param_8 < 3) goto LAB_140431450;
          if (param_8 < 4) goto LAB_140431450;
          if (param_8 < 5) goto LAB_140431450;
          if (param_8 < 6) goto LAB_140431450;
          if (param_8 < 7) goto LAB_140431450;
          if (param_8 < 8) goto LAB_140431450;
          if (param_8 < 9) goto LAB_140431450;
          uVar65 = 9;
          if (param_8 < 10) goto LAB_14043144b;
          while( true ) {
            do {
              uVar65 = uVar65 + 1;
            } while (uVar65 < param_8);
LAB_14043144b:
            if ((longlong)param_8 < 1) break;
LAB_140431450:
            uVar62 = uVar43 + 1;
            if (uVar60 <= uVar62) goto LAB_140430eab;
LAB_140430ea7:
            uVar65 = 0;
            uVar43 = uVar62;
          }
          uVar62 = uVar43 + 1;
          if (uVar60 <= uVar62) goto LAB_140430eab;
LAB_140430da3:
          uVar43 = uVar62 + 1;
          if (uVar60 <= uVar43) goto LAB_140430eab;
        }
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar60);
    }
    goto LAB_140430eab;
  }
  goto LAB_14043100b;
code_r0x000140430d89:
  uVar43 = uVar43 + 2;
  if (uVar62 <= uVar43) goto code_r0x000140430d92;
  goto LAB_140430d80;
code_r0x000140430d92:
  if (uVar62 < uVar60) goto LAB_140430da3;
LAB_140430eab:
  uVar43 = 1;
  uVar60 = 0;
  if (uVar51 != 0) {
    lVar44 = 0;
    lVar46 = 0;
    lVar56 = 0;
    lVar57 = 0;
    lVar49 = 0;
    lVar50 = lVar48;
    lVar53 = lVar44;
    lVar66 = lVar46;
    do {
      uVar60 = uVar60 + 1;
      lVar50 = lVar50 + 2;
      lVar49 = lVar49 + 2;
      lVar53 = lVar53 + 2;
      lVar44 = lVar44 + 2;
      lVar56 = lVar56 + 2;
      lVar57 = lVar57 + 2;
      lVar66 = lVar66 + 2;
      lVar46 = lVar46 + 2;
    } while (uVar60 < (uVar42 - lVar48) + 1 >> 4);
    lVar49 = lVar50 + lVar49 + lVar53 + lVar44 + lVar56 + lVar57 + lVar66 + lVar46;
    uVar43 = uVar60 * 8 + 1;
  }
  lVar48 = (uVar42 - 1) - lVar48;
  uVar60 = (lVar48 + 2) - (lVar48 + 2 >> 0x3f) >> 1;
  if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x000140430fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_140430fef + (byte)(&DAT_143089f28)[(uint)((int)uVar60 - (int)uVar43)]))();
    return;
  }
LAB_14043100b:
  if (lVar49 < (longlong)param_5) {
    uVar43 = 1;
    uVar60 = 0;
    uVar51 = param_5 - lVar49;
    uVar62 = uVar51 >> 3;
    if (uVar62 != 0) {
      do {
        uVar60 = uVar60 + 1;
      } while (uVar60 < uVar62);
      uVar43 = uVar60 * 8 + 1;
    }
    uVar60 = (param_5 - (lVar49 + 1)) + 1;
    if (uVar43 <= uVar60) {
                    /* WARNING: Could not recover jumptable at 0x00014043108f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_143089f30)[(uint)((int)uVar60 - (int)uVar43)] + 0x140431091)
      )();
      return;
    }
    uVar43 = 0;
    do {
      auVar85 = (undefined1  [16])0x0;
      uVar65 = 0;
      lVar49 = 0;
      if (0 < (longlong)param_8) {
        do {
          uVar58 = (ulonglong)*(ushort *)(param_9 + uVar65 * 4);
          uVar64 = 0;
          lVar48 = 0;
          if (uVar58 != 0) {
            auVar83 = auVar85;
            do {
              uVar64 = uVar64 + 1;
              bVar67 = *(byte *)(lVar48 + lVar45 + uVar43 + lVar49 +
                                          (longlong)
                                          (int)((uint)*(ushort *)(param_9 + 2 + uVar65 * 4) *
                                               param_10));
              lVar48 = lVar48 + lVar63;
              bVar68 = auVar83[0];
              auVar85[0] = (bVar68 < bVar67) * bVar67 | (bVar68 >= bVar67) * bVar68;
              auVar85._1_6_ = 0;
              auVar85[7] = auVar83[7];
              auVar85[8] = auVar83[8];
              auVar85[9] = auVar83[9];
              auVar85[10] = auVar83[10];
              auVar85[0xb] = auVar83[0xb];
              auVar85[0xc] = auVar83[0xc];
              auVar85[0xd] = auVar83[0xd];
              auVar85[0xe] = auVar83[0xe];
              auVar85[0xf] = auVar83[0xf];
              auVar83 = auVar85;
            } while (uVar64 < uVar58);
          }
          uVar65 = uVar65 + 1;
          lVar49 = lVar49 + param_2;
        } while (uVar65 < param_8);
      }
      uVar43 = uVar43 + 1;
      *pbStack_258 = auVar85[0];
      pbStack_258 = pbStack_258 + 1;
    } while (uVar43 < uVar51);
    uVar43 = 0;
    do {
      if (0 < (longlong)param_8) {
        uVar65 = 0;
        while( true ) {
          do {
            uVar65 = uVar65 + 1;
          } while (uVar65 < param_8);
          uVar43 = uVar43 + 1;
          if (uVar51 <= uVar43) break;
          uVar65 = 0;
        }
        uVar43 = 0;
        goto LAB_1404312c0;
      }
      uVar43 = uVar43 + 1;
    } while (uVar43 < uVar51);
    uVar43 = 1;
    if (1 < uVar51) {
      while (uVar43 = uVar43 + 1, uVar43 < uVar51) {
        while (0 < (longlong)param_8) {
          if (param_8 < 2) goto LAB_1404312a9;
          if (param_8 < 3) goto LAB_1404312a9;
          if (param_8 < 4) goto LAB_1404312a9;
          if (param_8 < 5) goto LAB_1404312a9;
          if (param_8 < 6) goto LAB_1404312a9;
          if (param_8 < 7) goto LAB_1404312a9;
          if (param_8 < 8) goto LAB_1404312a9;
          if (param_8 < 9) goto LAB_1404312a9;
          uVar65 = 9;
          if (9 < param_8) goto LAB_1404312e0;
          while (0 < (longlong)param_8) {
LAB_1404312a9:
            uVar43 = uVar43 + 1;
            if (uVar51 <= uVar43) goto LAB_1404312eb;
LAB_1404312c0:
            uVar65 = 0;
LAB_1404312e0:
            do {
              uVar65 = uVar65 + 1;
            } while (uVar65 < param_8);
          }
          if ((uVar51 <= uVar43 + 1) || (uVar43 = uVar43 + 2, uVar51 <= uVar43)) goto LAB_1404312eb;
        }
      }
    }
LAB_1404312eb:
    uVar43 = 1;
    uVar65 = 0;
    if (uVar62 != 0) {
      do {
        uVar65 = uVar65 + 1;
      } while (uVar65 < uVar62);
      uVar43 = uVar65 * 8 + 1;
    }
    if (uVar43 <= uVar60) {
      uVar40 = (ulonglong)(uint)((int)uVar60 - (int)uVar43);
                    /* WARNING: Could not recover jumptable at 0x000140431337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)(byte)(&DAT_143089f38)[uVar40] + 0x140431339))
                (uVar40,param_2,uVar51,uVar59,unaff_XMM13_Bi,unaff_XMM14_Ba,unaff_XMM14_Bi,
                 unaff_XMM15_Ba,unaff_XMM15_Bi,unaff_XMM9_Ba,unaff_XMM9_Bi,unaff_XMM10_Ba,
                 unaff_XMM10_Bi,unaff_XMM11_Ba,unaff_XMM11_Bi,unaff_XMM12_Ba,unaff_XMM12_Bi);
      return;
    }
  }
  uVar41 = uVar41 + 1;
  lVar52 = lVar52 + param_2;
  lVar55 = lVar55 + param_4;
  if (param_6 - lVar47 <= uVar41) {
    return;
  }
  goto LAB_14042fb40;
}

