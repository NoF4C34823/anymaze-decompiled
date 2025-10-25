
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140ac8120(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             ulonglong param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [32];
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [32];
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar30;
  byte *pbVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 (*pauVar39) [32];
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  ulonglong uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  longlong lVar54;
  longlong lVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  int iVar59;
  uint uVar60;
  uint uVar61;
  ulonglong uVar62;
  byte *pbVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint in_K2;
  undefined1 auVar70 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar77 [64];
  undefined1 auVar79 [64];
  undefined1 auVar81 [64];
  undefined1 auVar83 [64];
  undefined1 auVar85 [64];
  undefined1 auVar87 [64];
  undefined1 auVar89 [64];
  undefined1 auVar91 [64];
  undefined1 auVar93 [64];
  undefined1 auVar95 [64];
  undefined1 auVar97 [64];
  undefined1 auVar99 [64];
  undefined1 auVar101 [64];
  undefined1 auVar103 [64];
  undefined1 auVar105 [64];
  undefined1 auVar106 [64];
  undefined1 auVar107 [64];
  undefined1 auVar108 [64];
  undefined1 auVar110 [64];
  undefined1 auVar112 [64];
  undefined1 auVar114 [64];
  undefined1 auVar116 [64];
  undefined1 auVar118 [64];
  undefined1 auVar120 [64];
  undefined1 auVar122 [64];
  undefined1 auVar124 [64];
  undefined1 auVar126 [64];
  undefined1 auVar128 [64];
  undefined1 auVar130 [64];
  undefined1 auVar132 [64];
  undefined1 auVar134 [64];
  undefined1 auVar136 [64];
  undefined1 auVar138 [64];
  undefined1 auVar140 [64];
  undefined1 auVar142 [64];
  undefined1 auVar144 [64];
  undefined1 auVar146 [64];
  undefined1 auVar148 [64];
  undefined1 auVar150 [64];
  undefined1 auVar152 [64];
  undefined1 auVar154 [64];
  undefined1 auVar156 [64];
  undefined1 auVar158 [64];
  undefined1 auVar160 [64];
  undefined1 auVar71 [32];
  undefined1 auVar162 [64];
  undefined1 auVar164 [64];
  undefined1 auVar166 [64];
  undefined1 auVar168 [64];
  undefined1 auVar170 [64];
  undefined1 auVar172 [64];
  longlong lStack_70;
  longlong lStack_48;
  ulonglong uVar29;
  ulonglong uVar69;
  undefined1 auVar76 [64];
  undefined1 auVar78 [64];
  undefined1 auVar80 [64];
  undefined1 auVar82 [64];
  undefined1 auVar84 [64];
  undefined1 auVar86 [64];
  undefined1 auVar88 [64];
  undefined1 auVar90 [64];
  undefined1 auVar92 [64];
  undefined1 auVar94 [64];
  undefined1 auVar96 [64];
  undefined1 auVar98 [64];
  undefined1 auVar100 [64];
  undefined1 auVar102 [64];
  undefined1 auVar104 [64];
  undefined1 auVar109 [64];
  undefined1 auVar111 [64];
  undefined1 auVar113 [64];
  undefined1 auVar115 [64];
  undefined1 auVar117 [64];
  undefined1 auVar119 [64];
  undefined1 auVar121 [64];
  undefined1 auVar123 [64];
  undefined1 auVar125 [64];
  undefined1 auVar127 [64];
  undefined1 auVar129 [64];
  undefined1 auVar131 [64];
  undefined1 auVar133 [64];
  undefined1 auVar135 [64];
  undefined1 auVar137 [64];
  undefined1 auVar139 [64];
  undefined1 auVar141 [64];
  undefined1 auVar143 [64];
  undefined1 auVar145 [64];
  undefined1 auVar147 [64];
  undefined1 auVar149 [64];
  undefined1 auVar151 [64];
  undefined1 auVar153 [64];
  undefined1 auVar155 [64];
  undefined1 auVar157 [64];
  undefined1 auVar159 [64];
  undefined1 auVar161 [64];
  undefined1 auVar163 [64];
  undefined1 auVar165 [64];
  undefined1 auVar167 [64];
  undefined1 auVar169 [64];
  undefined1 auVar171 [64];
  
  auVar16 = _DAT_14308f900;
  auVar15 = _DAT_14308f8c0;
  auVar14 = _DAT_14308f880;
  lVar44 = 0;
  lVar54 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      lVar44 = (longlong)(int)param_5;
      uVar25 = param_7 & 0xf;
      uVar19 = 2;
      if ((uint)param_6 < 3) {
        uVar19 = param_6 & 0xffffffff;
      }
      auVar72 = vpbroadcastb_avx512bw();
      auVar70 = vpbroadcastb_avx512vl();
      uVar62 = (ulonglong)(1 < (int)(uint)param_6);
      uVar46 = param_5 & 0xffffffc0;
      uVar9 = (uint)uVar19;
      uVar32 = param_5 + uVar9;
      iVar47 = -param_5;
      uVar33 = (uint)param_3 & 0x3f;
      uVar37 = (ulonglong)(int)(uint)param_6;
      lVar34 = param_1 - lVar44;
      uVar64 = param_7 & 0x40;
      pbVar2 = param_3 + lVar44;
      uVar1 = iVar47 + 2;
      uVar56 = (uint)param_6 - (1 < (int)(uint)param_6);
      lVar28 = -lVar44 + 4;
      uVar57 = (uint)pbVar2 & 0x3f;
      lVar13 = uVar37 - lVar44;
      uVar65 = uVar1 >> 1;
      uVar69 = (ulonglong)uVar65;
      uVar66 = param_7 & 0x80;
      uVar51 = uVar9 & 0xffffffc0;
      uVar67 = (uint)param_6 - 2;
      uVar58 = uVar1 & 0xffffffc0;
      uVar52 = param_5 - 1;
      uVar26 = param_5 >> 1;
      uVar29 = (ulonglong)uVar26;
      uVar53 = 0xffffffff - (iVar47 + -1);
      uVar10 = uVar19 >> 1;
      uVar68 = 0x40 - uVar33;
      lVar3 = param_1 + uVar37;
      iVar59 = (int)uVar10;
      uVar11 = uVar68;
      if ((int)uVar53 < (int)uVar68) {
        uVar11 = uVar53;
      }
      iVar24 = ((int)(uint)param_6 < 2) - 1;
      uVar60 = 0x40 - uVar57;
      if (uVar9 < 0x40 - uVar57) {
        uVar60 = uVar9;
      }
      lVar35 = (longlong)(int)uVar1;
      if ((int)param_5 < (int)uVar68) {
        uVar68 = param_5;
      }
      lVar55 = (longlong)(int)uVar53;
      uVar61 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar61 = uVar25;
      }
      uVar48 = uVar53 & 0xffffffc0;
      uVar36 = 0;
      lStack_70 = 0;
      uVar38 = uVar37;
LAB_140ac8520:
      if ((int)uVar38 == 1) {
        uVar17 = uVar61;
        if (uVar25 != 6) goto LAB_140ac856f;
        goto LAB_140ac8f85;
      }
      do {
        uVar17 = uVar25;
        if (uVar25 == 6) {
LAB_140ac8f85:
          uVar18 = 0;
          uVar17 = 0;
          if (uVar64 == 0) {
            uVar43 = 0;
            if (0 < (int)param_5) {
              if ((int)param_5 < 0x40) {
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0xc1) {
                  uVar43 = 0;
                  uVar49 = uVar46;
                }
                else {
                  uVar43 = uVar33;
                  if (((ulonglong)param_3 & 0x3f) != 0) {
                    uVar43 = uVar68;
                  }
                  uVar49 = param_5 - (param_5 - uVar43 & 0x3f);
                  if (uVar43 != 0) {
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      in_K2 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar71 = vmovdqu8_avx512vl(auVar70);
                      *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                      uVar50 = uVar50 + 0x20;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                    uVar18 = uVar43;
                    if (uVar43 == param_5) goto LAB_140ac93a7;
                  }
                }
                uVar17 = uVar18;
                if ((int)(uVar43 + 0x40) <= (int)uVar49) {
                  lVar20 = (longlong)(int)uVar43;
                  do {
                    uVar43 = uVar43 + 0x40;
                    auVar75 = vmovdqu32_avx512f(auVar72);
                    *(undefined1 (*) [64])(param_3 + lVar20) = auVar75;
                    lVar20 = lVar20 + 0x40;
                    uVar17 = uVar49;
                  } while (uVar43 < uVar49);
                }
              }
              uVar43 = uVar17;
              if (uVar49 + 1 <= param_5) {
                uVar17 = 0;
                lVar20 = 0;
                auVar73 = vpbroadcastd_avx512f();
                auVar75 = auVar16;
                auVar74 = auVar15;
                do {
                  vpcmpgtd_avx512f(auVar73,auVar75);
                  uVar17 = uVar17 + 0x20;
                  uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                  in_K2 = (uint)uVar8;
                  auVar74 = vpaddd_avx512f(auVar74,auVar14);
                  auVar75 = vpaddd_avx512f(auVar75,auVar14);
                  auVar71 = vmovdqu8_avx512vl(auVar70);
                  *(undefined1 (*) [32])(param_3 + lVar20 + (int)uVar49) = auVar71;
                  lVar20 = lVar20 + 0x20;
                } while (uVar17 < param_5 - uVar49);
                uVar43 = (param_5 - uVar49) + uVar49;
              }
            }
          }
          else {
            uVar43 = 0;
            if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar20 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70),
                  lVar20 < lVar44 && (-lVar20 < lVar44)))) {
                uVar18 = 1;
                if (uVar26 != 0) {
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2] = *(byte *)(lVar34 + lStack_70 + uVar23 * 2);
                    param_3[uVar23 * 2 + 1] = *(byte *)(lVar34 + lStack_70 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar29);
                  uVar17 = (int)uVar50 * 2;
                  uVar18 = (int)uVar23 + 2 + (int)uVar50;
                }
                uVar43 = uVar17;
                if (uVar18 - 1 < param_5) {
                  param_3[(longlong)(int)uVar18 + -1] =
                       *(byte *)(lVar34 + (int)uVar18 + -1 + lStack_70);
                  uVar43 = uVar18;
                }
              }
              else {
                uVar43 = param_5;
                if ((int)param_5 < 0x40) {
                  uVar17 = 0;
                }
                else {
                  if ((int)param_5 < 0xeb) {
                    uVar18 = 0;
                    uVar17 = uVar46;
                  }
                  else {
                    uVar18 = uVar33;
                    if (((ulonglong)param_3 & 0x3f) != 0) {
                      uVar18 = uVar68;
                    }
                    uVar17 = param_5 - (param_5 - uVar18 & 0x3f);
                    if (uVar18 != 0) {
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      uVar49 = in_K2;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        uVar12 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        in_K2 = uVar49 << 0x10;
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar106._32_32_ = auVar75._32_32_;
                        auVar106._0_32_ =
                             vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar34 + lStack_70));
                        auVar107[1] = ((byte)(uVar12 >> 1) & 1) * auVar106[1];
                        auVar107[0] = ((byte)uVar8 & 1) * auVar106[0];
                        auVar107[2] = ((byte)(uVar12 >> 2) & 1) * auVar106[2];
                        auVar107[3] = ((byte)(uVar12 >> 3) & 1) * auVar106[3];
                        auVar107[4] = ((byte)(uVar12 >> 4) & 1) * auVar106[4];
                        auVar107[5] = ((byte)(uVar12 >> 5) & 1) * auVar106[5];
                        auVar107[6] = ((byte)(uVar12 >> 6) & 1) * auVar106[6];
                        auVar107[7] = ((byte)(uVar12 >> 7) & 1) * auVar106[7];
                        auVar107[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar106[8];
                        auVar107[9] = ((byte)(uVar12 >> 9) & 1) * auVar106[9];
                        auVar107[10] = ((byte)(uVar12 >> 10) & 1) * auVar106[10];
                        auVar107[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar106[0xb];
                        auVar107[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar106[0xc];
                        auVar107[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar106[0xd];
                        auVar107[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar106[0xe];
                        auVar107[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar106[0xf];
                        auVar107[0x10] = ((byte)uVar49 & 1) * auVar106[0x10];
                        auVar107[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar106[0x11];
                        auVar107[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar106[0x12];
                        auVar107[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar106[0x13];
                        auVar107[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar106[0x14];
                        auVar107[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar106[0x15];
                        auVar107[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar106[0x16];
                        auVar107[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar106[0x17];
                        bVar6 = (byte)(uVar49 >> 8);
                        auVar107[0x18] = (bVar6 & 1) * auVar106[0x18];
                        auVar107[0x19] = (bVar6 >> 1 & 1) * auVar106[0x19];
                        auVar107[0x1a] = (bVar6 >> 2 & 1) * auVar106[0x1a];
                        auVar107[0x1b] = (bVar6 >> 3 & 1) * auVar106[0x1b];
                        auVar107[0x1c] = (bVar6 >> 4 & 1) * auVar106[0x1c];
                        auVar107._30_34_ = auVar106._30_34_;
                        auVar107[0x1d] = (bVar6 >> 5 & 1) * auVar106[0x1d];
                        auVar71 = vmovdqu8_avx512vl(auVar107._0_32_);
                        *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                        uVar50 = uVar50 + 0x20;
                        uVar49 = in_K2;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                      if (uVar18 == param_5) goto LAB_140ac93a7;
                    }
                  }
                  if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                    uVar50 = (ulonglong)(int)uVar18;
                    do {
                      auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])
                                                   (uVar50 + lVar34 + lStack_70));
                      *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                      uVar50 = uVar50 + 0x40;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                  }
                }
                if (uVar17 + 1 <= param_5) {
                  lVar20 = (longlong)(int)uVar17;
                  uVar50 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar17 = in_K2;
                  do {
                    vpcmpgtd_avx512f(auVar73,auVar75);
                    uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                    uVar18 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar17 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar92._32_32_ = auVar75._32_32_;
                    auVar92._0_32_ =
                         vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                            (uVar50 + lVar34 + lStack_70 + lVar20));
                    auVar93[1] = ((byte)(uVar18 >> 1) & 1) * auVar92[1];
                    auVar93[0] = ((byte)uVar8 & 1) * auVar92[0];
                    auVar93[2] = ((byte)(uVar18 >> 2) & 1) * auVar92[2];
                    auVar93[3] = ((byte)(uVar18 >> 3) & 1) * auVar92[3];
                    auVar93[4] = ((byte)(uVar18 >> 4) & 1) * auVar92[4];
                    auVar93[5] = ((byte)(uVar18 >> 5) & 1) * auVar92[5];
                    auVar93[6] = ((byte)(uVar18 >> 6) & 1) * auVar92[6];
                    auVar93[7] = ((byte)(uVar18 >> 7) & 1) * auVar92[7];
                    auVar93[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar92[8];
                    auVar93[9] = ((byte)(uVar18 >> 9) & 1) * auVar92[9];
                    auVar93[10] = ((byte)(uVar18 >> 10) & 1) * auVar92[10];
                    auVar93[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar92[0xb];
                    auVar93[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar92[0xc];
                    auVar93[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar92[0xd];
                    auVar93[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar92[0xe];
                    auVar93[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar92[0xf];
                    auVar93[0x10] = ((byte)uVar17 & 1) * auVar92[0x10];
                    auVar93[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar92[0x11];
                    auVar93[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar92[0x12];
                    auVar93[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar92[0x13];
                    auVar93[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar92[0x14];
                    auVar93[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar92[0x15];
                    auVar93[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar92[0x16];
                    auVar93[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar92[0x17];
                    bVar6 = (byte)(uVar17 >> 8);
                    auVar93[0x18] = (bVar6 & 1) * auVar92[0x18];
                    auVar93[0x19] = (bVar6 >> 1 & 1) * auVar92[0x19];
                    auVar93[0x1a] = (bVar6 >> 2 & 1) * auVar92[0x1a];
                    auVar93[0x1b] = (bVar6 >> 3 & 1) * auVar92[0x1b];
                    auVar93[0x1c] = (bVar6 >> 4 & 1) * auVar92[0x1c];
                    auVar93._30_34_ = auVar92._30_34_;
                    auVar93[0x1d] = (bVar6 >> 5 & 1) * auVar92[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar93._0_32_);
                    *(undefined1 (*) [32])(param_3 + uVar50 + lVar20) = auVar71;
                    uVar50 = uVar50 + 0x20;
                    uVar17 = in_K2;
                  } while (uVar50 < (ulonglong)(lVar44 - lVar20));
                }
              }
            }
          }
LAB_140ac93a7:
          lVar20 = (longlong)(int)uVar43;
          iVar40 = (int)uVar38;
          if (iVar40 < 1) {
            if (uVar66 != 0) goto LAB_140ac9854;
LAB_140ac9698:
            lStack_48 = lVar44;
            if ((int)uVar1 < 1) goto LAB_140ac9ae0;
LAB_140ac96a0:
            iVar41 = (int)lVar20;
            if ((int)uVar1 < 0x40) {
              uVar17 = 0;
            }
            else {
              if ((int)uVar1 < 0xc1) {
                uVar50 = 0;
                uVar17 = uVar58;
              }
              else {
                uVar50 = (ulonglong)(param_3 + lVar20) & 0x3f;
                if (((int)uVar50 != 0) &&
                   (uVar17 = 0x40 - (int)uVar50, uVar50 = (ulonglong)uVar17,
                   (int)uVar1 < (int)uVar17)) {
                  uVar50 = (ulonglong)uVar1;
                }
                uVar18 = (uint)uVar50;
                uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                if (uVar18 != 0) {
                  uVar23 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  do {
                    vpcmpgtd_avx512f(auVar73,auVar75);
                    uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                    in_K2 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar71 = vmovdqu8_avx512vl(auVar70);
                    *(undefined1 (*) [32])(param_3 + lVar20 + uVar23) = auVar71;
                    uVar23 = uVar23 + 0x20;
                  } while (uVar23 < (ulonglong)(longlong)(int)uVar18);
                  uVar43 = iVar41 + uVar18;
                  if (uVar1 == uVar18) goto LAB_140ac9aad;
                }
              }
              if ((int)uVar50 + 0x40 <= (int)uVar17) {
                lVar30 = (longlong)(int)uVar50;
                do {
                  uVar18 = (int)uVar50 + 0x40;
                  uVar50 = (ulonglong)uVar18;
                  auVar75 = vmovdqu32_avx512f(auVar72);
                  *(undefined1 (*) [64])(param_3 + lVar30 + lVar20) = auVar75;
                  lVar30 = lVar30 + 0x40;
                } while (uVar18 < uVar17);
                uVar43 = iVar41 + uVar17;
              }
            }
            if (uVar17 + 1 <= uVar1) {
              uVar18 = 0;
              lVar30 = 0;
              auVar73 = vpbroadcastd_avx512f();
              auVar75 = auVar16;
              auVar74 = auVar15;
              do {
                vpcmpgtd_avx512f(auVar73,auVar75);
                uVar18 = uVar18 + 0x20;
                uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                in_K2 = (uint)uVar8;
                auVar74 = vpaddd_avx512f(auVar74,auVar14);
                auVar75 = vpaddd_avx512f(auVar75,auVar14);
                auVar71 = vmovdqu8_avx512vl(auVar70);
                *(undefined1 (*) [32])(param_3 + lVar30 + (int)uVar17 + lVar20) = auVar71;
                lVar30 = lVar30 + 0x20;
              } while (uVar18 < uVar1 - uVar17);
              uVar43 = iVar41 + uVar17 + (uVar1 - uVar17);
            }
LAB_140ac9aad:
            lStack_48 = lVar44;
            if (iVar40 < 3) goto LAB_140ac9ae0;
          }
          else {
            if (uVar9 < 7) {
LAB_140ac95b4:
              iVar41 = 1;
              uVar17 = uVar43;
              if (iVar59 != 0) {
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  param_3[uVar23 * 2 + lVar20] = *(byte *)(param_1 + lStack_70 + uVar23 * 2);
                  param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(param_1 + lStack_70 + 1 + uVar23 * 2)
                  ;
                  uVar50 = uVar23 + 1;
                } while (uVar50 < uVar10);
                uVar17 = uVar43 + (int)uVar50 * 2;
                iVar41 = (int)uVar23 + 2 + (int)uVar50;
              }
              if (iVar41 - 1U < uVar9) {
                param_3[(longlong)iVar41 + -1 + lVar20] =
                     *(byte *)(param_1 + iVar41 + -1 + lStack_70);
                uVar17 = uVar43 + iVar41;
              }
            }
            else {
              pbVar63 = param_3 + lVar20;
              lVar30 = param_1 + lStack_70;
              if (((longlong)pbVar63 - lVar30 < (longlong)uVar19) &&
                 (-((longlong)pbVar63 - lVar30) < (longlong)uVar19)) goto LAB_140ac95b4;
              if (uVar9 < 0x40) {
                uVar17 = 0;
LAB_140ac9517:
                if (uVar17 + 1 <= uVar9) {
                  uVar49 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar18 = in_K2;
                  do {
                    vpcmpud_avx512f(auVar75,auVar73,1);
                    uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                    uVar12 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar18 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar96._32_32_ = auVar75._32_32_;
                    auVar96._0_32_ =
                         vmovdqu8_avx512vl(*(undefined1 (*) [32])((int)(uVar17 + uVar49) + lVar30));
                    auVar97[1] = ((byte)(uVar12 >> 1) & 1) * auVar96[1];
                    auVar97[0] = ((byte)uVar8 & 1) * auVar96[0];
                    auVar97[2] = ((byte)(uVar12 >> 2) & 1) * auVar96[2];
                    auVar97[3] = ((byte)(uVar12 >> 3) & 1) * auVar96[3];
                    auVar97[4] = ((byte)(uVar12 >> 4) & 1) * auVar96[4];
                    auVar97[5] = ((byte)(uVar12 >> 5) & 1) * auVar96[5];
                    auVar97[6] = ((byte)(uVar12 >> 6) & 1) * auVar96[6];
                    auVar97[7] = ((byte)(uVar12 >> 7) & 1) * auVar96[7];
                    auVar97[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar96[8];
                    auVar97[9] = ((byte)(uVar12 >> 9) & 1) * auVar96[9];
                    auVar97[10] = ((byte)(uVar12 >> 10) & 1) * auVar96[10];
                    auVar97[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar96[0xb];
                    auVar97[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar96[0xc];
                    auVar97[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar96[0xd];
                    auVar97[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar96[0xe];
                    auVar97[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar96[0xf];
                    auVar97[0x10] = ((byte)uVar18 & 1) * auVar96[0x10];
                    auVar97[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar96[0x11];
                    auVar97[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar96[0x12];
                    auVar97[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar96[0x13];
                    auVar97[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar96[0x14];
                    auVar97[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar96[0x15];
                    auVar97[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar96[0x16];
                    auVar97[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar96[0x17];
                    bVar6 = (byte)(uVar18 >> 8);
                    auVar97[0x18] = (bVar6 & 1) * auVar96[0x18];
                    auVar97[0x19] = (bVar6 >> 1 & 1) * auVar96[0x19];
                    auVar97[0x1a] = (bVar6 >> 2 & 1) * auVar96[0x1a];
                    auVar97[0x1b] = (bVar6 >> 3 & 1) * auVar96[0x1b];
                    auVar97[0x1c] = (bVar6 >> 4 & 1) * auVar96[0x1c];
                    auVar97._30_34_ = auVar96._30_34_;
                    auVar97[0x1d] = (bVar6 >> 5 & 1) * auVar96[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar97._0_32_);
                    *(undefined1 (*) [32])
                     (param_3 + (longlong)(int)uVar49 + (longlong)(int)(uVar17 + uVar43)) = auVar71;
                    uVar49 = uVar49 + 0x20;
                    uVar18 = in_K2;
                  } while (uVar49 < uVar9 - uVar17);
                }
              }
              else {
                if (uVar9 < 0xeb) {
                  uVar18 = 0;
                  uVar17 = uVar51;
LAB_140ac94df:
                  if (uVar18 + 0x40 <= uVar17) {
                    uVar50 = (ulonglong)(int)uVar18;
                    do {
                      auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                      *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                      uVar50 = uVar50 + 0x40;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                  }
                  goto LAB_140ac9517;
                }
                uVar18 = (uint)pbVar63 & 0x3f;
                if (((ulonglong)pbVar63 & 0x3f) == 0) {
                  uVar17 = uVar9 - (uVar9 & 0x3f);
                  goto LAB_140ac94df;
                }
                uVar18 = 0x40 - uVar18;
                if (uVar9 < uVar18) {
                  uVar18 = uVar9;
                }
                uVar17 = uVar9 - (uVar9 - uVar18 & 0x3f);
                if (uVar18 == 0) goto LAB_140ac94df;
                uVar50 = 0;
                auVar73 = vpbroadcastd_avx512f();
                auVar75 = auVar16;
                auVar74 = auVar15;
                uVar49 = in_K2;
                do {
                  vpcmpud_avx512f(auVar75,auVar73,1);
                  uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                  uVar12 = (uint)uVar8;
                  auVar74 = vpaddd_avx512f(auVar74,auVar14);
                  in_K2 = uVar49 << 0x10;
                  auVar75 = vpaddd_avx512f(auVar75,auVar14);
                  auVar94._32_32_ = auVar75._32_32_;
                  auVar94._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                  auVar95[1] = ((byte)(uVar12 >> 1) & 1) * auVar94[1];
                  auVar95[0] = ((byte)uVar8 & 1) * auVar94[0];
                  auVar95[2] = ((byte)(uVar12 >> 2) & 1) * auVar94[2];
                  auVar95[3] = ((byte)(uVar12 >> 3) & 1) * auVar94[3];
                  auVar95[4] = ((byte)(uVar12 >> 4) & 1) * auVar94[4];
                  auVar95[5] = ((byte)(uVar12 >> 5) & 1) * auVar94[5];
                  auVar95[6] = ((byte)(uVar12 >> 6) & 1) * auVar94[6];
                  auVar95[7] = ((byte)(uVar12 >> 7) & 1) * auVar94[7];
                  auVar95[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar94[8];
                  auVar95[9] = ((byte)(uVar12 >> 9) & 1) * auVar94[9];
                  auVar95[10] = ((byte)(uVar12 >> 10) & 1) * auVar94[10];
                  auVar95[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar94[0xb];
                  auVar95[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar94[0xc];
                  auVar95[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar94[0xd];
                  auVar95[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar94[0xe];
                  auVar95[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar94[0xf];
                  auVar95[0x10] = ((byte)uVar49 & 1) * auVar94[0x10];
                  auVar95[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar94[0x11];
                  auVar95[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar94[0x12];
                  auVar95[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar94[0x13];
                  auVar95[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar94[0x14];
                  auVar95[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar94[0x15];
                  auVar95[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar94[0x16];
                  auVar95[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar94[0x17];
                  bVar6 = (byte)(uVar49 >> 8);
                  auVar95[0x18] = (bVar6 & 1) * auVar94[0x18];
                  auVar95[0x19] = (bVar6 >> 1 & 1) * auVar94[0x19];
                  auVar95[0x1a] = (bVar6 >> 2 & 1) * auVar94[0x1a];
                  auVar95[0x1b] = (bVar6 >> 3 & 1) * auVar94[0x1b];
                  auVar95[0x1c] = (bVar6 >> 4 & 1) * auVar94[0x1c];
                  auVar95._30_34_ = auVar94._30_34_;
                  auVar95[0x1d] = (bVar6 >> 5 & 1) * auVar94[0x1d];
                  auVar71 = vmovdqu8_avx512vl(auVar95._0_32_);
                  *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                  uVar50 = uVar50 + 0x20;
                  uVar49 = in_K2;
                } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                if (uVar18 != uVar9) goto LAB_140ac94df;
              }
              uVar17 = uVar43 + uVar9;
            }
            uVar43 = uVar17;
            lVar20 = (longlong)(int)uVar43;
            if (iVar40 < 3) {
              if (uVar66 == 0) goto LAB_140ac9698;
LAB_140ac9854:
              lStack_48 = lVar44;
              if ((int)uVar1 < 1) goto LAB_140ac9ae0;
LAB_140ac985c:
              iVar41 = (int)lVar20;
              if (6 < (int)uVar1) {
                pbVar63 = param_3 + lVar20;
                lVar30 = lVar3 + lStack_70;
                if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                   (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                  if ((int)uVar1 < 0x40) {
                    uVar17 = 0;
LAB_140ac9997:
                    if (uVar17 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar17;
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      uVar17 = in_K2;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        uVar18 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        in_K2 = uVar17 << 0x10;
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar100._32_32_ = auVar75._32_32_;
                        auVar100._0_32_ =
                             vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20));
                        auVar101[1] = ((byte)(uVar18 >> 1) & 1) * auVar100[1];
                        auVar101[0] = ((byte)uVar8 & 1) * auVar100[0];
                        auVar101[2] = ((byte)(uVar18 >> 2) & 1) * auVar100[2];
                        auVar101[3] = ((byte)(uVar18 >> 3) & 1) * auVar100[3];
                        auVar101[4] = ((byte)(uVar18 >> 4) & 1) * auVar100[4];
                        auVar101[5] = ((byte)(uVar18 >> 5) & 1) * auVar100[5];
                        auVar101[6] = ((byte)(uVar18 >> 6) & 1) * auVar100[6];
                        auVar101[7] = ((byte)(uVar18 >> 7) & 1) * auVar100[7];
                        auVar101[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar100[8];
                        auVar101[9] = ((byte)(uVar18 >> 9) & 1) * auVar100[9];
                        auVar101[10] = ((byte)(uVar18 >> 10) & 1) * auVar100[10];
                        auVar101[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar100[0xb];
                        auVar101[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar100[0xc];
                        auVar101[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar100[0xd];
                        auVar101[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar100[0xe];
                        auVar101[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar100[0xf];
                        auVar101[0x10] = ((byte)uVar17 & 1) * auVar100[0x10];
                        auVar101[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar100[0x11];
                        auVar101[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar100[0x12];
                        auVar101[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar100[0x13];
                        auVar101[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar100[0x14];
                        auVar101[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar100[0x15];
                        auVar101[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar100[0x16];
                        auVar101[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar100[0x17];
                        bVar6 = (byte)(uVar17 >> 8);
                        auVar101[0x18] = (bVar6 & 1) * auVar100[0x18];
                        auVar101[0x19] = (bVar6 >> 1 & 1) * auVar100[0x19];
                        auVar101[0x1a] = (bVar6 >> 2 & 1) * auVar100[0x1a];
                        auVar101[0x1b] = (bVar6 >> 3 & 1) * auVar100[0x1b];
                        auVar101[0x1c] = (bVar6 >> 4 & 1) * auVar100[0x1c];
                        auVar101._30_34_ = auVar100._30_34_;
                        auVar101[0x1d] = (bVar6 >> 5 & 1) * auVar100[0x1d];
                        auVar71 = vmovdqu8_avx512vl(auVar101._0_32_);
                        *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                        uVar50 = uVar50 + 0x20;
                        uVar17 = in_K2;
                      } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                    }
                  }
                  else {
                    if ((int)uVar1 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar58;
LAB_140ac9962:
                      if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                        uVar50 = (ulonglong)(int)uVar18;
                        do {
                          auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                          *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                          uVar50 = uVar50 + 0x40;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                      }
                      goto LAB_140ac9997;
                    }
                    uVar18 = (uint)pbVar63 & 0x3f;
                    if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                       (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                      uVar18 = uVar1;
                    }
                    uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                    if (uVar18 == 0) goto LAB_140ac9962;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar43 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar49 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar43 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar98._32_32_ = auVar75._32_32_;
                      auVar98._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                      auVar99[1] = ((byte)(uVar49 >> 1) & 1) * auVar98[1];
                      auVar99[0] = ((byte)uVar8 & 1) * auVar98[0];
                      auVar99[2] = ((byte)(uVar49 >> 2) & 1) * auVar98[2];
                      auVar99[3] = ((byte)(uVar49 >> 3) & 1) * auVar98[3];
                      auVar99[4] = ((byte)(uVar49 >> 4) & 1) * auVar98[4];
                      auVar99[5] = ((byte)(uVar49 >> 5) & 1) * auVar98[5];
                      auVar99[6] = ((byte)(uVar49 >> 6) & 1) * auVar98[6];
                      auVar99[7] = ((byte)(uVar49 >> 7) & 1) * auVar98[7];
                      auVar99[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar98[8];
                      auVar99[9] = ((byte)(uVar49 >> 9) & 1) * auVar98[9];
                      auVar99[10] = ((byte)(uVar49 >> 10) & 1) * auVar98[10];
                      auVar99[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar98[0xb];
                      auVar99[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar98[0xc];
                      auVar99[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar98[0xd];
                      auVar99[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar98[0xe];
                      auVar99[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar98[0xf];
                      auVar99[0x10] = ((byte)uVar43 & 1) * auVar98[0x10];
                      auVar99[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar98[0x11];
                      auVar99[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar98[0x12];
                      auVar99[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar98[0x13];
                      auVar99[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar98[0x14];
                      auVar99[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar98[0x15];
                      auVar99[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar98[0x16];
                      auVar99[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar98[0x17];
                      bVar6 = (byte)(uVar43 >> 8);
                      auVar99[0x18] = (bVar6 & 1) * auVar98[0x18];
                      auVar99[0x19] = (bVar6 >> 1 & 1) * auVar98[0x19];
                      auVar99[0x1a] = (bVar6 >> 2 & 1) * auVar98[0x1a];
                      auVar99[0x1b] = (bVar6 >> 3 & 1) * auVar98[0x1b];
                      auVar99[0x1c] = (bVar6 >> 4 & 1) * auVar98[0x1c];
                      auVar99._30_34_ = auVar98._30_34_;
                      auVar99[0x1d] = (bVar6 >> 5 & 1) * auVar98[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar99._0_32_);
                      *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar43 = in_K2;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                    if (uVar1 != uVar18) goto LAB_140ac9962;
                  }
                  uVar43 = iVar41 + 2 + iVar47;
                  goto LAB_140ac9aad;
                }
              }
              iVar27 = 1;
              if (uVar65 != 0) {
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar3 + lStack_70 + uVar23 * 2);
                  param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar3 + lStack_70 + 1 + uVar23 * 2);
                  uVar50 = uVar23 + 1;
                } while (uVar50 < uVar69);
                uVar43 = iVar41 + (int)uVar50 * 2;
                iVar27 = (int)uVar23 + 2 + (int)uVar50;
              }
              if (iVar27 - 1U < uVar1) {
                uVar43 = iVar41 + iVar27;
                param_3[(longlong)iVar27 + -1 + lVar20] = *(byte *)(lVar3 + iVar27 + -1 + lStack_70)
                ;
              }
              goto LAB_140ac9aad;
            }
            uVar43 = uVar43 + 2;
            param_3[lVar20] = *(byte *)(lStack_70 + -2 + lVar3);
            param_3[lVar20 + 1] = *(byte *)(lStack_70 + -1 + lVar3);
            lVar20 = (longlong)(int)uVar43;
            if (uVar66 == 0) {
              if (0 < (int)uVar1) goto LAB_140ac96a0;
            }
            else if (0 < (int)uVar1) goto LAB_140ac985c;
          }
          lStack_48 = (int)uVar43 - lVar28;
        }
        else {
LAB_140ac856f:
          iVar40 = (int)uVar38;
          if (uVar17 == 1) {
            uVar18 = 0;
            uVar17 = 0;
            lVar20 = lVar54 * uVar36;
            if (uVar64 == 0) {
              uVar43 = 0;
              if (0 < (int)param_5) {
                if ((int)param_5 < 0x40) {
                  uVar49 = 0;
                }
                else {
                  if ((int)param_5 < 0xc1) {
                    uVar43 = 0;
                    uVar49 = uVar46;
                  }
                  else {
                    uVar43 = uVar33;
                    if (((ulonglong)param_3 & 0x3f) != 0) {
                      uVar43 = uVar68;
                    }
                    uVar49 = param_5 - (param_5 - uVar43 & 0x3f);
                    if (uVar43 != 0) {
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar71 = vpbroadcastb_avx512vl();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        in_K2 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar5 = vmovdqu8_avx512vl(auVar71);
                        *(undefined1 (*) [32])(param_3 + uVar50) = auVar5;
                        uVar50 = uVar50 + 0x20;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                      uVar18 = uVar43;
                      if (uVar43 == param_5) goto LAB_140acc90c;
                    }
                  }
                  uVar17 = uVar18;
                  if ((int)(uVar43 + 0x40) <= (int)uVar49) {
                    auVar75 = vpbroadcastb_avx512bw();
                    lVar30 = (longlong)(int)uVar43;
                    do {
                      uVar43 = uVar43 + 0x40;
                      auVar74 = vmovdqu32_avx512f(auVar75);
                      *(undefined1 (*) [64])(param_3 + lVar30) = auVar74;
                      lVar30 = lVar30 + 0x40;
                      uVar17 = uVar49;
                    } while (uVar43 < uVar49);
                  }
                }
                uVar43 = uVar17;
                if (uVar49 + 1 <= param_5) {
                  uVar17 = 0;
                  auVar71 = vpbroadcastb_avx512vl();
                  auVar73 = vpbroadcastd_avx512f();
                  lVar30 = 0;
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  do {
                    vpcmpgtd_avx512f(auVar73,auVar75);
                    uVar17 = uVar17 + 0x20;
                    uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                    in_K2 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar5 = vmovdqu8_avx512vl(auVar71);
                    *(undefined1 (*) [32])(param_3 + lVar30 + (int)uVar49) = auVar5;
                    lVar30 = lVar30 + 0x20;
                  } while (uVar17 < param_5 - uVar49);
                  uVar43 = (param_5 - uVar49) + uVar49;
                }
              }
            }
            else {
              uVar43 = 0;
              if (0 < (int)param_5) {
                if (((int)param_5 < 7) ||
                   ((lVar30 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar20),
                    lVar30 < lVar44 && (-lVar30 < lVar44)))) {
                  uVar18 = 1;
                  if (uVar26 != 0) {
                    uVar50 = 0;
                    do {
                      uVar23 = uVar50;
                      param_3[uVar23 * 2] = *(byte *)(lVar34 + lVar20 + uVar23 * 2);
                      param_3[uVar23 * 2 + 1] = *(byte *)(lVar34 + lVar20 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                    } while (uVar50 < uVar29);
                    uVar17 = (int)uVar50 * 2;
                    uVar18 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  uVar43 = uVar17;
                  if (uVar18 - 1 < param_5) {
                    param_3[(longlong)(int)uVar18 + -1] =
                         *(byte *)((longlong)(int)uVar18 + -1 + lVar20 + lVar34);
                    uVar43 = uVar18;
                  }
                }
                else {
                  uVar43 = param_5;
                  if ((int)param_5 < 0x40) {
                    uVar17 = 0;
                  }
                  else {
                    if ((int)param_5 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar46;
                    }
                    else {
                      uVar18 = uVar33;
                      if (((ulonglong)param_3 & 0x3f) != 0) {
                        uVar18 = uVar68;
                      }
                      uVar17 = param_5 - (param_5 - uVar18 & 0x3f);
                      if (uVar18 != 0) {
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar49 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar12 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar49 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar161._32_32_ = auVar75._32_32_;
                          auVar161._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar20 + lVar34));
                          auVar162[1] = ((byte)(uVar12 >> 1) & 1) * auVar161[1];
                          auVar162[0] = ((byte)uVar8 & 1) * auVar161[0];
                          auVar162[2] = ((byte)(uVar12 >> 2) & 1) * auVar161[2];
                          auVar162[3] = ((byte)(uVar12 >> 3) & 1) * auVar161[3];
                          auVar162[4] = ((byte)(uVar12 >> 4) & 1) * auVar161[4];
                          auVar162[5] = ((byte)(uVar12 >> 5) & 1) * auVar161[5];
                          auVar162[6] = ((byte)(uVar12 >> 6) & 1) * auVar161[6];
                          auVar162[7] = ((byte)(uVar12 >> 7) & 1) * auVar161[7];
                          auVar162[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar161[8];
                          auVar162[9] = ((byte)(uVar12 >> 9) & 1) * auVar161[9];
                          auVar162[10] = ((byte)(uVar12 >> 10) & 1) * auVar161[10];
                          auVar162[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar161[0xb];
                          auVar162[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar161[0xc];
                          auVar162[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar161[0xd];
                          auVar162[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar161[0xe];
                          auVar162[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar161[0xf];
                          auVar162[0x10] = ((byte)uVar49 & 1) * auVar161[0x10];
                          auVar162[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar161[0x11];
                          auVar162[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar161[0x12];
                          auVar162[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar161[0x13];
                          auVar162[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar161[0x14];
                          auVar162[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar161[0x15];
                          auVar162[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar161[0x16];
                          auVar162[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar161[0x17];
                          bVar6 = (byte)(uVar49 >> 8);
                          auVar162[0x18] = (bVar6 & 1) * auVar161[0x18];
                          auVar162[0x19] = (bVar6 >> 1 & 1) * auVar161[0x19];
                          auVar162[0x1a] = (bVar6 >> 2 & 1) * auVar161[0x1a];
                          auVar162[0x1b] = (bVar6 >> 3 & 1) * auVar161[0x1b];
                          auVar162[0x1c] = (bVar6 >> 4 & 1) * auVar161[0x1c];
                          auVar162._30_34_ = auVar161._30_34_;
                          auVar162[0x1d] = (bVar6 >> 5 & 1) * auVar161[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar162._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar49 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        if (uVar18 == param_5) goto LAB_140acc90c;
                      }
                    }
                    if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                      uVar50 = (ulonglong)(int)uVar18;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar20 + lVar34)
                                                   );
                        *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                  }
                  if (uVar17 + 1 <= param_5) {
                    lVar30 = (longlong)(int)uVar17;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar17 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar18 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar17 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar163._32_32_ = auVar75._32_32_;
                      auVar163._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                              (uVar50 + lVar20 + lVar34 + lVar30));
                      auVar164[1] = ((byte)(uVar18 >> 1) & 1) * auVar163[1];
                      auVar164[0] = ((byte)uVar8 & 1) * auVar163[0];
                      auVar164[2] = ((byte)(uVar18 >> 2) & 1) * auVar163[2];
                      auVar164[3] = ((byte)(uVar18 >> 3) & 1) * auVar163[3];
                      auVar164[4] = ((byte)(uVar18 >> 4) & 1) * auVar163[4];
                      auVar164[5] = ((byte)(uVar18 >> 5) & 1) * auVar163[5];
                      auVar164[6] = ((byte)(uVar18 >> 6) & 1) * auVar163[6];
                      auVar164[7] = ((byte)(uVar18 >> 7) & 1) * auVar163[7];
                      auVar164[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar163[8];
                      auVar164[9] = ((byte)(uVar18 >> 9) & 1) * auVar163[9];
                      auVar164[10] = ((byte)(uVar18 >> 10) & 1) * auVar163[10];
                      auVar164[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar163[0xb];
                      auVar164[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar163[0xc];
                      auVar164[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar163[0xd];
                      auVar164[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar163[0xe];
                      auVar164[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar163[0xf];
                      auVar164[0x10] = ((byte)uVar17 & 1) * auVar163[0x10];
                      auVar164[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar163[0x11];
                      auVar164[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar163[0x12];
                      auVar164[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar163[0x13];
                      auVar164[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar163[0x14];
                      auVar164[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar163[0x15];
                      auVar164[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar163[0x16];
                      auVar164[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar163[0x17];
                      bVar6 = (byte)(uVar17 >> 8);
                      auVar164[0x18] = (bVar6 & 1) * auVar163[0x18];
                      auVar164[0x19] = (bVar6 >> 1 & 1) * auVar163[0x19];
                      auVar164[0x1a] = (bVar6 >> 2 & 1) * auVar163[0x1a];
                      auVar164[0x1b] = (bVar6 >> 3 & 1) * auVar163[0x1b];
                      auVar164[0x1c] = (bVar6 >> 4 & 1) * auVar163[0x1c];
                      auVar164._30_34_ = auVar163._30_34_;
                      auVar164[0x1d] = (bVar6 >> 5 & 1) * auVar163[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar164._0_32_);
                      *(undefined1 (*) [32])(param_3 + uVar50 + lVar30) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar17 = in_K2;
                    } while (uVar50 < (ulonglong)(lVar44 - lVar30));
                  }
                }
              }
            }
LAB_140acc90c:
            lVar30 = (longlong)(int)uVar43;
            if (0 < iVar40) {
              if (uVar9 < 7) {
LAB_140accaed:
                iVar41 = 1;
                uVar17 = uVar43;
                if (iVar59 != 0) {
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2 + lVar30] = *(byte *)(param_1 + lVar20 + uVar23 * 2);
                    param_3[uVar23 * 2 + lVar30 + 1] = *(byte *)(param_1 + lVar20 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar10);
                  uVar17 = uVar43 + (int)uVar50 * 2;
                  iVar41 = (int)uVar23 + 2 + (int)uVar50;
                }
                if (iVar41 - 1U < uVar9) {
                  param_3[(longlong)iVar41 + -1 + lVar30] =
                       *(byte *)((longlong)iVar41 + -1 + param_1 + lVar20);
                  uVar17 = uVar43 + iVar41;
                }
              }
              else {
                lVar45 = param_1 + lVar20;
                pbVar63 = param_3 + lVar30;
                if (((longlong)pbVar63 - lVar45 < (longlong)uVar19) &&
                   (-((longlong)pbVar63 - lVar45) < (longlong)uVar19)) goto LAB_140accaed;
                if (uVar9 < 0x40) {
                  uVar17 = 0;
LAB_140acca57:
                  if (uVar17 + 1 <= uVar9) {
                    uVar49 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar18 = in_K2;
                    do {
                      vpcmpud_avx512f(auVar75,auVar73,1);
                      uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                      uVar12 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar18 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar167._32_32_ = auVar75._32_32_;
                      auVar167._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])((int)(uVar17 + uVar49) + lVar45)
                                            );
                      auVar168[1] = ((byte)(uVar12 >> 1) & 1) * auVar167[1];
                      auVar168[0] = ((byte)uVar8 & 1) * auVar167[0];
                      auVar168[2] = ((byte)(uVar12 >> 2) & 1) * auVar167[2];
                      auVar168[3] = ((byte)(uVar12 >> 3) & 1) * auVar167[3];
                      auVar168[4] = ((byte)(uVar12 >> 4) & 1) * auVar167[4];
                      auVar168[5] = ((byte)(uVar12 >> 5) & 1) * auVar167[5];
                      auVar168[6] = ((byte)(uVar12 >> 6) & 1) * auVar167[6];
                      auVar168[7] = ((byte)(uVar12 >> 7) & 1) * auVar167[7];
                      auVar168[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar167[8];
                      auVar168[9] = ((byte)(uVar12 >> 9) & 1) * auVar167[9];
                      auVar168[10] = ((byte)(uVar12 >> 10) & 1) * auVar167[10];
                      auVar168[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar167[0xb];
                      auVar168[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar167[0xc];
                      auVar168[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar167[0xd];
                      auVar168[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar167[0xe];
                      auVar168[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar167[0xf];
                      auVar168[0x10] = ((byte)uVar18 & 1) * auVar167[0x10];
                      auVar168[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar167[0x11];
                      auVar168[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar167[0x12];
                      auVar168[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar167[0x13];
                      auVar168[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar167[0x14];
                      auVar168[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar167[0x15];
                      auVar168[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar167[0x16];
                      auVar168[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar167[0x17];
                      bVar6 = (byte)(uVar18 >> 8);
                      auVar168[0x18] = (bVar6 & 1) * auVar167[0x18];
                      auVar168[0x19] = (bVar6 >> 1 & 1) * auVar167[0x19];
                      auVar168[0x1a] = (bVar6 >> 2 & 1) * auVar167[0x1a];
                      auVar168[0x1b] = (bVar6 >> 3 & 1) * auVar167[0x1b];
                      auVar168[0x1c] = (bVar6 >> 4 & 1) * auVar167[0x1c];
                      auVar168._30_34_ = auVar167._30_34_;
                      auVar168[0x1d] = (bVar6 >> 5 & 1) * auVar167[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar168._0_32_);
                      *(undefined1 (*) [32])
                       (param_3 + (longlong)(int)uVar49 + (longlong)(int)(uVar17 + uVar43)) =
                           auVar71;
                      uVar49 = uVar49 + 0x20;
                      uVar18 = in_K2;
                    } while (uVar49 < uVar9 - uVar17);
                  }
                }
                else {
                  if (uVar9 < 0xeb) {
                    uVar18 = 0;
                    uVar17 = uVar51;
LAB_140acca13:
                    if (uVar18 + 0x40 <= uVar17) {
                      uVar50 = (ulonglong)(int)uVar18;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar45));
                        *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                    goto LAB_140acca57;
                  }
                  uVar18 = (uint)pbVar63 & 0x3f;
                  if (((ulonglong)pbVar63 & 0x3f) == 0) {
                    uVar17 = uVar9 - (uVar9 & 0x3f);
                    goto LAB_140acca13;
                  }
                  uVar18 = 0x40 - uVar18;
                  if (uVar9 < uVar18) {
                    uVar18 = uVar9;
                  }
                  uVar17 = uVar9 - (uVar9 - uVar18 & 0x3f);
                  if (uVar18 == 0) goto LAB_140acca13;
                  uVar50 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar49 = in_K2;
                  do {
                    vpcmpud_avx512f(auVar75,auVar73,1);
                    uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                    uVar12 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar49 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar165._32_32_ = auVar75._32_32_;
                    auVar165._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45));
                    auVar166[1] = ((byte)(uVar12 >> 1) & 1) * auVar165[1];
                    auVar166[0] = ((byte)uVar8 & 1) * auVar165[0];
                    auVar166[2] = ((byte)(uVar12 >> 2) & 1) * auVar165[2];
                    auVar166[3] = ((byte)(uVar12 >> 3) & 1) * auVar165[3];
                    auVar166[4] = ((byte)(uVar12 >> 4) & 1) * auVar165[4];
                    auVar166[5] = ((byte)(uVar12 >> 5) & 1) * auVar165[5];
                    auVar166[6] = ((byte)(uVar12 >> 6) & 1) * auVar165[6];
                    auVar166[7] = ((byte)(uVar12 >> 7) & 1) * auVar165[7];
                    auVar166[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar165[8];
                    auVar166[9] = ((byte)(uVar12 >> 9) & 1) * auVar165[9];
                    auVar166[10] = ((byte)(uVar12 >> 10) & 1) * auVar165[10];
                    auVar166[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar165[0xb];
                    auVar166[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar165[0xc];
                    auVar166[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar165[0xd];
                    auVar166[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar165[0xe];
                    auVar166[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar165[0xf];
                    auVar166[0x10] = ((byte)uVar49 & 1) * auVar165[0x10];
                    auVar166[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar165[0x11];
                    auVar166[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar165[0x12];
                    auVar166[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar165[0x13];
                    auVar166[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar165[0x14];
                    auVar166[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar165[0x15];
                    auVar166[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar165[0x16];
                    auVar166[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar165[0x17];
                    bVar6 = (byte)(uVar49 >> 8);
                    auVar166[0x18] = (bVar6 & 1) * auVar165[0x18];
                    auVar166[0x19] = (bVar6 >> 1 & 1) * auVar165[0x19];
                    auVar166[0x1a] = (bVar6 >> 2 & 1) * auVar165[0x1a];
                    auVar166[0x1b] = (bVar6 >> 3 & 1) * auVar165[0x1b];
                    auVar166[0x1c] = (bVar6 >> 4 & 1) * auVar165[0x1c];
                    auVar166._30_34_ = auVar165._30_34_;
                    auVar166[0x1d] = (bVar6 >> 5 & 1) * auVar165[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar166._0_32_);
                    *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                    uVar50 = uVar50 + 0x20;
                    uVar49 = in_K2;
                  } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                  if (uVar9 != uVar18) goto LAB_140acca13;
                }
                uVar17 = uVar43 + uVar9;
              }
              uVar43 = uVar17;
              lVar30 = (longlong)(int)uVar43;
              if (2 < iVar40) {
                uVar43 = uVar43 + 2;
                param_3[lVar30] = *(byte *)(lVar3 + -2 + lVar20);
                param_3[lVar30 + 1] = *(byte *)(lVar3 + -1 + lVar20);
                lVar30 = (longlong)(int)uVar43;
              }
            }
            iVar41 = (int)lVar30;
            if (uVar66 == 0) {
              if (0 < (int)uVar1) {
                if ((int)uVar1 < 0x40) {
                  uVar17 = 0;
                }
                else {
                  if ((int)uVar1 < 0xc1) {
                    uVar50 = 0;
                    uVar17 = uVar58;
                  }
                  else {
                    uVar50 = (ulonglong)(param_3 + lVar30) & 0x3f;
                    if (((int)uVar50 != 0) &&
                       (uVar17 = 0x40 - (int)uVar50, uVar50 = (ulonglong)uVar17,
                       (int)uVar1 < (int)uVar17)) {
                      uVar50 = (ulonglong)uVar1;
                    }
                    uVar18 = (uint)uVar50;
                    uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                    if (uVar18 != 0) {
                      uVar23 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar71 = vpbroadcastb_avx512vl();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        in_K2 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar5 = vmovdqu8_avx512vl(auVar71);
                        *(undefined1 (*) [32])(param_3 + lVar30 + uVar23) = auVar5;
                        uVar23 = uVar23 + 0x20;
                      } while (uVar23 < (ulonglong)(longlong)(int)uVar18);
                      uVar43 = iVar41 + uVar18;
                      if (uVar1 == uVar18) goto LAB_140accfad;
                    }
                  }
                  if ((int)uVar50 + 0x40 <= (int)uVar17) {
                    auVar75 = vpbroadcastb_avx512bw();
                    lVar20 = (longlong)(int)uVar50;
                    do {
                      uVar18 = (int)uVar50 + 0x40;
                      uVar50 = (ulonglong)uVar18;
                      auVar74 = vmovdqu32_avx512f(auVar75);
                      *(undefined1 (*) [64])(param_3 + lVar20 + lVar30) = auVar74;
                      lVar20 = lVar20 + 0x40;
                    } while (uVar18 < uVar17);
                    uVar43 = iVar41 + uVar17;
                  }
                }
                if (uVar1 < uVar17 + 1) goto LAB_140accfad;
                lVar20 = 0;
                auVar71 = vpbroadcastb_avx512vl();
                uVar18 = 0;
                auVar73 = vpbroadcastd_avx512f();
                auVar75 = auVar16;
                auVar74 = auVar15;
                do {
                  vpcmpgtd_avx512f(auVar73,auVar75);
                  uVar18 = uVar18 + 0x20;
                  uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                  in_K2 = (uint)uVar8;
                  auVar74 = vpaddd_avx512f(auVar74,auVar14);
                  auVar75 = vpaddd_avx512f(auVar75,auVar14);
                  auVar5 = vmovdqu8_avx512vl(auVar71);
                  *(undefined1 (*) [32])(param_3 + lVar20 + (int)uVar17 + lVar30) = auVar5;
                  lVar20 = lVar20 + 0x20;
                } while (uVar18 < uVar1 - uVar17);
                lVar30 = (longlong)(int)(iVar41 + uVar17 + (uVar1 - uVar17));
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140accfb0;
              if (6 < (int)uVar1) {
                pbVar63 = param_3 + lVar30;
                lVar45 = lVar3 + lVar20;
                if ((2 - lVar44 <= (longlong)pbVar63 - lVar45) ||
                   (2 - lVar44 <= -((longlong)pbVar63 - lVar45))) {
                  if ((int)uVar1 < 0x40) {
                    uVar17 = 0;
LAB_140acce97:
                    if (uVar17 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar17;
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      uVar17 = in_K2;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        uVar18 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        in_K2 = uVar17 << 0x10;
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar171._32_32_ = auVar75._32_32_;
                        auVar171._0_32_ =
                             vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45 + lVar20));
                        auVar172[1] = ((byte)(uVar18 >> 1) & 1) * auVar171[1];
                        auVar172[0] = ((byte)uVar8 & 1) * auVar171[0];
                        auVar172[2] = ((byte)(uVar18 >> 2) & 1) * auVar171[2];
                        auVar172[3] = ((byte)(uVar18 >> 3) & 1) * auVar171[3];
                        auVar172[4] = ((byte)(uVar18 >> 4) & 1) * auVar171[4];
                        auVar172[5] = ((byte)(uVar18 >> 5) & 1) * auVar171[5];
                        auVar172[6] = ((byte)(uVar18 >> 6) & 1) * auVar171[6];
                        auVar172[7] = ((byte)(uVar18 >> 7) & 1) * auVar171[7];
                        auVar172[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar171[8];
                        auVar172[9] = ((byte)(uVar18 >> 9) & 1) * auVar171[9];
                        auVar172[10] = ((byte)(uVar18 >> 10) & 1) * auVar171[10];
                        auVar172[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar171[0xb];
                        auVar172[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar171[0xc];
                        auVar172[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar171[0xd];
                        auVar172[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar171[0xe];
                        auVar172[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar171[0xf];
                        auVar172[0x10] = ((byte)uVar17 & 1) * auVar171[0x10];
                        auVar172[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar171[0x11];
                        auVar172[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar171[0x12];
                        auVar172[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar171[0x13];
                        auVar172[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar171[0x14];
                        auVar172[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar171[0x15];
                        auVar172[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar171[0x16];
                        auVar172[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar171[0x17];
                        bVar6 = (byte)(uVar17 >> 8);
                        auVar172[0x18] = (bVar6 & 1) * auVar171[0x18];
                        auVar172[0x19] = (bVar6 >> 1 & 1) * auVar171[0x19];
                        auVar172[0x1a] = (bVar6 >> 2 & 1) * auVar171[0x1a];
                        auVar172[0x1b] = (bVar6 >> 3 & 1) * auVar171[0x1b];
                        auVar172[0x1c] = (bVar6 >> 4 & 1) * auVar171[0x1c];
                        auVar172._30_34_ = auVar171._30_34_;
                        auVar172[0x1d] = (bVar6 >> 5 & 1) * auVar171[0x1d];
                        auVar71 = vmovdqu8_avx512vl(auVar172._0_32_);
                        *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                        uVar50 = uVar50 + 0x20;
                        uVar17 = in_K2;
                      } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                    }
                  }
                  else {
                    if ((int)uVar1 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar58;
LAB_140acce63:
                      if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                        uVar50 = (ulonglong)(int)uVar18;
                        do {
                          auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar45));
                          *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                          uVar50 = uVar50 + 0x40;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                      }
                      goto LAB_140acce97;
                    }
                    uVar18 = (uint)pbVar63 & 0x3f;
                    if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                       (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                      uVar18 = uVar1;
                    }
                    uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                    if (uVar18 == 0) goto LAB_140acce63;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar43 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar49 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar43 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar169._32_32_ = auVar75._32_32_;
                      auVar169._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45));
                      auVar170[1] = ((byte)(uVar49 >> 1) & 1) * auVar169[1];
                      auVar170[0] = ((byte)uVar8 & 1) * auVar169[0];
                      auVar170[2] = ((byte)(uVar49 >> 2) & 1) * auVar169[2];
                      auVar170[3] = ((byte)(uVar49 >> 3) & 1) * auVar169[3];
                      auVar170[4] = ((byte)(uVar49 >> 4) & 1) * auVar169[4];
                      auVar170[5] = ((byte)(uVar49 >> 5) & 1) * auVar169[5];
                      auVar170[6] = ((byte)(uVar49 >> 6) & 1) * auVar169[6];
                      auVar170[7] = ((byte)(uVar49 >> 7) & 1) * auVar169[7];
                      auVar170[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar169[8];
                      auVar170[9] = ((byte)(uVar49 >> 9) & 1) * auVar169[9];
                      auVar170[10] = ((byte)(uVar49 >> 10) & 1) * auVar169[10];
                      auVar170[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar169[0xb];
                      auVar170[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar169[0xc];
                      auVar170[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar169[0xd];
                      auVar170[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar169[0xe];
                      auVar170[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar169[0xf];
                      auVar170[0x10] = ((byte)uVar43 & 1) * auVar169[0x10];
                      auVar170[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar169[0x11];
                      auVar170[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar169[0x12];
                      auVar170[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar169[0x13];
                      auVar170[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar169[0x14];
                      auVar170[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar169[0x15];
                      auVar170[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar169[0x16];
                      auVar170[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar169[0x17];
                      bVar6 = (byte)(uVar43 >> 8);
                      auVar170[0x18] = (bVar6 & 1) * auVar169[0x18];
                      auVar170[0x19] = (bVar6 >> 1 & 1) * auVar169[0x19];
                      auVar170[0x1a] = (bVar6 >> 2 & 1) * auVar169[0x1a];
                      auVar170[0x1b] = (bVar6 >> 3 & 1) * auVar169[0x1b];
                      auVar170[0x1c] = (bVar6 >> 4 & 1) * auVar169[0x1c];
                      auVar170._30_34_ = auVar169._30_34_;
                      auVar170[0x1d] = (bVar6 >> 5 & 1) * auVar169[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar170._0_32_);
                      *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar43 = in_K2;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                    if (uVar1 != uVar18) goto LAB_140acce63;
                  }
                  lVar30 = (longlong)(iVar41 + 2 + iVar47);
                  goto LAB_140accfb0;
                }
              }
              iVar27 = 1;
              if (uVar65 != 0) {
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  param_3[uVar23 * 2 + lVar30] = *(byte *)(lVar20 + lVar3 + uVar23 * 2);
                  param_3[uVar23 * 2 + lVar30 + 1] = *(byte *)(lVar20 + lVar3 + 1 + uVar23 * 2);
                  uVar50 = uVar23 + 1;
                } while (uVar50 < uVar69);
                uVar43 = iVar41 + (int)uVar50 * 2;
                iVar27 = (int)uVar23 + 2 + (int)uVar50;
              }
              if (iVar27 - 1U < uVar1) {
                param_3[(longlong)iVar27 + -1 + lVar30] =
                     *(byte *)((longlong)iVar27 + -1 + lVar20 + lVar3);
                lVar30 = (longlong)(iVar27 + iVar41);
              }
              else {
LAB_140accfad:
                lVar30 = (longlong)(int)uVar43;
              }
            }
LAB_140accfb0:
            lStack_48 = lVar30 - lVar28;
            if (iVar40 < 3) {
              lStack_48 = lVar44;
            }
          }
          else if (uVar17 == 2) {
            lVar20 = lVar44;
            if (0 < iVar40) {
              if (uVar9 < 7) {
LAB_140acaf13:
                iVar41 = 1;
                uVar17 = param_5;
                if (iVar59 != 0) {
                  lVar20 = lVar54 * uVar36 + param_1;
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    pbVar2[uVar23 * 2] = *(byte *)(lVar20 + uVar23 * 2);
                    pbVar2[uVar23 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar10);
                  iVar41 = (int)uVar23 + 2 + (int)uVar50;
                  uVar17 = param_5 + (int)uVar50 * 2;
                }
                if (iVar41 - 1U < uVar9) {
                  pbVar2[(longlong)iVar41 + -1] = *(byte *)(param_1 + iVar41 + -1 + lVar54 * uVar36)
                  ;
                  uVar17 = param_5 + iVar41;
                }
              }
              else {
                lVar20 = lVar54 * uVar36 + param_1;
                if (((longlong)pbVar2 - lVar20 < (longlong)uVar19) &&
                   (-((longlong)pbVar2 - lVar20) < (longlong)uVar19)) goto LAB_140acaf13;
                uVar17 = uVar32;
                if (uVar9 < 0x40) {
                  uVar18 = 0;
LAB_140acae77:
                  if (uVar18 + 1 <= uVar9) {
                    uVar49 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar43 = in_K2;
                    do {
                      vpcmpud_avx512f(auVar75,auVar73,1);
                      uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                      uVar12 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar43 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar127._32_32_ = auVar75._32_32_;
                      auVar127._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])((int)(uVar18 + uVar49) + lVar20)
                                            );
                      auVar128[1] = ((byte)(uVar12 >> 1) & 1) * auVar127[1];
                      auVar128[0] = ((byte)uVar8 & 1) * auVar127[0];
                      auVar128[2] = ((byte)(uVar12 >> 2) & 1) * auVar127[2];
                      auVar128[3] = ((byte)(uVar12 >> 3) & 1) * auVar127[3];
                      auVar128[4] = ((byte)(uVar12 >> 4) & 1) * auVar127[4];
                      auVar128[5] = ((byte)(uVar12 >> 5) & 1) * auVar127[5];
                      auVar128[6] = ((byte)(uVar12 >> 6) & 1) * auVar127[6];
                      auVar128[7] = ((byte)(uVar12 >> 7) & 1) * auVar127[7];
                      auVar128[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar127[8];
                      auVar128[9] = ((byte)(uVar12 >> 9) & 1) * auVar127[9];
                      auVar128[10] = ((byte)(uVar12 >> 10) & 1) * auVar127[10];
                      auVar128[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar127[0xb];
                      auVar128[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar127[0xc];
                      auVar128[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar127[0xd];
                      auVar128[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar127[0xe];
                      auVar128[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar127[0xf];
                      auVar128[0x10] = ((byte)uVar43 & 1) * auVar127[0x10];
                      auVar128[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar127[0x11];
                      auVar128[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar127[0x12];
                      auVar128[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar127[0x13];
                      auVar128[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar127[0x14];
                      auVar128[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar127[0x15];
                      auVar128[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar127[0x16];
                      auVar128[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar127[0x17];
                      bVar6 = (byte)(uVar43 >> 8);
                      auVar128[0x18] = (bVar6 & 1) * auVar127[0x18];
                      auVar128[0x19] = (bVar6 >> 1 & 1) * auVar127[0x19];
                      auVar128[0x1a] = (bVar6 >> 2 & 1) * auVar127[0x1a];
                      auVar128[0x1b] = (bVar6 >> 3 & 1) * auVar127[0x1b];
                      auVar128[0x1c] = (bVar6 >> 4 & 1) * auVar127[0x1c];
                      auVar128._30_34_ = auVar127._30_34_;
                      auVar128[0x1d] = (bVar6 >> 5 & 1) * auVar127[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar128._0_32_);
                      *(undefined1 (*) [32])
                       (param_3 + (longlong)(int)uVar49 + (longlong)(int)(param_5 + uVar18)) =
                           auVar71;
                      uVar49 = uVar49 + 0x20;
                      uVar43 = in_K2;
                    } while (uVar49 < uVar9 - uVar18);
                  }
                }
                else {
                  if (uVar9 < 0xeb) {
                    uVar43 = 0;
                    uVar18 = uVar51;
LAB_140acae45:
                    if (uVar43 + 0x40 <= uVar18) {
                      uVar50 = (ulonglong)(int)uVar43;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar20));
                        *(undefined1 (*) [64])(pbVar2 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                    }
                    goto LAB_140acae77;
                  }
                  uVar43 = uVar57;
                  if (((ulonglong)pbVar2 & 0x3f) != 0) {
                    uVar43 = uVar60;
                  }
                  uVar18 = uVar9 - (uVar9 - uVar43 & 0x3f);
                  if (uVar43 == 0) goto LAB_140acae45;
                  uVar50 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar49 = in_K2;
                  do {
                    vpcmpud_avx512f(auVar75,auVar73,1);
                    uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                    uVar12 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar49 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar125._32_32_ = auVar75._32_32_;
                    auVar125._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar20));
                    auVar126[1] = ((byte)(uVar12 >> 1) & 1) * auVar125[1];
                    auVar126[0] = ((byte)uVar8 & 1) * auVar125[0];
                    auVar126[2] = ((byte)(uVar12 >> 2) & 1) * auVar125[2];
                    auVar126[3] = ((byte)(uVar12 >> 3) & 1) * auVar125[3];
                    auVar126[4] = ((byte)(uVar12 >> 4) & 1) * auVar125[4];
                    auVar126[5] = ((byte)(uVar12 >> 5) & 1) * auVar125[5];
                    auVar126[6] = ((byte)(uVar12 >> 6) & 1) * auVar125[6];
                    auVar126[7] = ((byte)(uVar12 >> 7) & 1) * auVar125[7];
                    auVar126[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar125[8];
                    auVar126[9] = ((byte)(uVar12 >> 9) & 1) * auVar125[9];
                    auVar126[10] = ((byte)(uVar12 >> 10) & 1) * auVar125[10];
                    auVar126[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar125[0xb];
                    auVar126[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar125[0xc];
                    auVar126[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar125[0xd];
                    auVar126[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar125[0xe];
                    auVar126[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar125[0xf];
                    auVar126[0x10] = ((byte)uVar49 & 1) * auVar125[0x10];
                    auVar126[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar125[0x11];
                    auVar126[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar125[0x12];
                    auVar126[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar125[0x13];
                    auVar126[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar125[0x14];
                    auVar126[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar125[0x15];
                    auVar126[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar125[0x16];
                    auVar126[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar125[0x17];
                    bVar6 = (byte)(uVar49 >> 8);
                    auVar126[0x18] = (bVar6 & 1) * auVar125[0x18];
                    auVar126[0x19] = (bVar6 >> 1 & 1) * auVar125[0x19];
                    auVar126[0x1a] = (bVar6 >> 2 & 1) * auVar125[0x1a];
                    auVar126[0x1b] = (bVar6 >> 3 & 1) * auVar125[0x1b];
                    auVar126[0x1c] = (bVar6 >> 4 & 1) * auVar125[0x1c];
                    auVar126._30_34_ = auVar125._30_34_;
                    auVar126[0x1d] = (bVar6 >> 5 & 1) * auVar125[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar126._0_32_);
                    *(undefined1 (*) [32])(pbVar2 + uVar50) = auVar71;
                    uVar50 = uVar50 + 0x20;
                    uVar49 = in_K2;
                  } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                  if (uVar9 != uVar43) goto LAB_140acae45;
                }
              }
              lVar20 = (longlong)(int)uVar17;
              if (2 < iVar40) {
                lVar30 = lVar54 * uVar36;
                if (uVar64 == 0) {
                  lVar45 = lVar30 + lVar3;
                  if (-1 < (int)uVar52) {
                    if (((int)param_5 < 7) ||
                       ((pbVar63 = param_3 + ((lVar44 + -1) - (lVar30 + -1 + lVar3)),
                        (longlong)pbVar63 <= lVar44 &&
                        ((byte *)-lVar44 == pbVar63 || -(longlong)pbVar63 < lVar44)))) {
                      iVar40 = 1;
                      lVar22 = 0;
                      uVar50 = 0;
                      if (uVar26 != 0) {
                        do {
                          uVar23 = uVar50;
                          uVar50 = uVar23 + 1;
                          pbVar2[lVar22 + -1] = *(byte *)(lVar22 + -1 + lVar45);
                          pbVar2[lVar22 + -2] = *(byte *)(lVar22 + -2 + lVar45);
                          lVar22 = lVar22 + -2;
                        } while (uVar50 < uVar29);
                        iVar40 = (int)uVar23 + 2 + (int)uVar50;
                      }
                      if (iVar40 - 1U < param_5) {
                        pbVar2[-(longlong)iVar40] = *(byte *)(lVar45 - iVar40);
                      }
                    }
                    else {
                      if ((int)uVar53 < 0x40) {
                        uVar18 = 0;
                      }
                      else {
                        if ((int)uVar53 < 0xeb) {
                          uVar43 = 0;
                          uVar18 = uVar48;
                        }
                        else {
                          uVar43 = uVar33;
                          if (((ulonglong)param_3 & 0x3f) != 0) {
                            uVar43 = uVar11;
                          }
                          uVar18 = uVar53 - (uVar53 - uVar43 & 0x3f);
                          if (uVar43 != 0) {
                            uVar50 = 0;
                            auVar73 = vpbroadcastd_avx512f();
                            auVar75 = auVar16;
                            auVar74 = auVar15;
                            uVar49 = in_K2;
                            do {
                              vpcmpgtd_avx512f(auVar73,auVar75);
                              uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                              uVar12 = (uint)uVar8;
                              auVar74 = vpaddd_avx512f(auVar74,auVar14);
                              in_K2 = uVar49 << 0x10;
                              auVar75 = vpaddd_avx512f(auVar75,auVar14);
                              auVar129._32_32_ = auVar75._32_32_;
                              auVar129._0_32_ =
                                   vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                      (uVar50 + (lVar45 - lVar44)));
                              auVar130[1] = ((byte)(uVar12 >> 1) & 1) * auVar129[1];
                              auVar130[0] = ((byte)uVar8 & 1) * auVar129[0];
                              auVar130[2] = ((byte)(uVar12 >> 2) & 1) * auVar129[2];
                              auVar130[3] = ((byte)(uVar12 >> 3) & 1) * auVar129[3];
                              auVar130[4] = ((byte)(uVar12 >> 4) & 1) * auVar129[4];
                              auVar130[5] = ((byte)(uVar12 >> 5) & 1) * auVar129[5];
                              auVar130[6] = ((byte)(uVar12 >> 6) & 1) * auVar129[6];
                              auVar130[7] = ((byte)(uVar12 >> 7) & 1) * auVar129[7];
                              auVar130[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar129[8];
                              auVar130[9] = ((byte)(uVar12 >> 9) & 1) * auVar129[9];
                              auVar130[10] = ((byte)(uVar12 >> 10) & 1) * auVar129[10];
                              auVar130[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar129[0xb];
                              auVar130[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar129[0xc];
                              auVar130[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar129[0xd];
                              auVar130[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar129[0xe];
                              auVar130[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar129[0xf];
                              auVar130[0x10] = ((byte)uVar49 & 1) * auVar129[0x10];
                              auVar130[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar129[0x11];
                              auVar130[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar129[0x12];
                              auVar130[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar129[0x13];
                              auVar130[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar129[0x14];
                              auVar130[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar129[0x15];
                              auVar130[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar129[0x16];
                              auVar130[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar129[0x17];
                              bVar6 = (byte)(uVar49 >> 8);
                              auVar130[0x18] = (bVar6 & 1) * auVar129[0x18];
                              auVar130[0x19] = (bVar6 >> 1 & 1) * auVar129[0x19];
                              auVar130[0x1a] = (bVar6 >> 2 & 1) * auVar129[0x1a];
                              auVar130[0x1b] = (bVar6 >> 3 & 1) * auVar129[0x1b];
                              auVar130[0x1c] = (bVar6 >> 4 & 1) * auVar129[0x1c];
                              auVar130._30_34_ = auVar129._30_34_;
                              auVar130[0x1d] = (bVar6 >> 5 & 1) * auVar129[0x1d];
                              auVar71 = vmovdqu8_avx512vl(auVar130._0_32_);
                              *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                              uVar50 = uVar50 + 0x20;
                              uVar49 = in_K2;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                            if (uVar43 == uVar53) goto LAB_140acb52e;
                          }
                        }
                        if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                          uVar50 = (ulonglong)(int)uVar43;
                          do {
                            auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])
                                                         (uVar50 + (lVar45 - lVar44)));
                            *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                            uVar50 = uVar50 + 0x40;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        }
                      }
                      if (uVar18 + 1 <= uVar53) {
                        lVar22 = (longlong)(int)uVar18;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar18 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar43 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar18 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar131._32_32_ = auVar75._32_32_;
                          auVar131._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                  (uVar50 + (lVar45 - lVar44) + lVar22));
                          auVar132[1] = ((byte)(uVar43 >> 1) & 1) * auVar131[1];
                          auVar132[0] = ((byte)uVar8 & 1) * auVar131[0];
                          auVar132[2] = ((byte)(uVar43 >> 2) & 1) * auVar131[2];
                          auVar132[3] = ((byte)(uVar43 >> 3) & 1) * auVar131[3];
                          auVar132[4] = ((byte)(uVar43 >> 4) & 1) * auVar131[4];
                          auVar132[5] = ((byte)(uVar43 >> 5) & 1) * auVar131[5];
                          auVar132[6] = ((byte)(uVar43 >> 6) & 1) * auVar131[6];
                          auVar132[7] = ((byte)(uVar43 >> 7) & 1) * auVar131[7];
                          auVar132[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar131[8];
                          auVar132[9] = ((byte)(uVar43 >> 9) & 1) * auVar131[9];
                          auVar132[10] = ((byte)(uVar43 >> 10) & 1) * auVar131[10];
                          auVar132[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar131[0xb];
                          auVar132[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar131[0xc];
                          auVar132[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar131[0xd];
                          auVar132[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar131[0xe];
                          auVar132[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar131[0xf];
                          auVar132[0x10] = ((byte)uVar18 & 1) * auVar131[0x10];
                          auVar132[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar131[0x11];
                          auVar132[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar131[0x12];
                          auVar132[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar131[0x13];
                          auVar132[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar131[0x14];
                          auVar132[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar131[0x15];
                          auVar132[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar131[0x16];
                          auVar132[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar131[0x17];
                          bVar6 = (byte)(uVar18 >> 8);
                          auVar132[0x18] = (bVar6 & 1) * auVar131[0x18];
                          auVar132[0x19] = (bVar6 >> 1 & 1) * auVar131[0x19];
                          auVar132[0x1a] = (bVar6 >> 2 & 1) * auVar131[0x1a];
                          auVar132[0x1b] = (bVar6 >> 3 & 1) * auVar131[0x1b];
                          auVar132[0x1c] = (bVar6 >> 4 & 1) * auVar131[0x1c];
                          auVar132._30_34_ = auVar131._30_34_;
                          auVar132[0x1d] = (bVar6 >> 5 & 1) * auVar131[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar132._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50 + lVar22) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar18 = in_K2;
                        } while (uVar50 < (ulonglong)(lVar55 - lVar22));
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar52) {
                  if (6 < (int)param_5) {
                    pbVar63 = param_3 + ((lVar44 + -1) - (param_1 + -1 + lVar30));
                    lVar45 = param_1 + lVar30;
                    if ((lVar44 < (longlong)pbVar63) ||
                       ((byte *)-lVar44 != pbVar63 && lVar44 <= -(longlong)pbVar63)) {
                      if ((int)uVar53 < 0x40) {
                        uVar18 = 0;
                      }
                      else {
                        if ((int)uVar53 < 0xeb) {
                          uVar43 = 0;
                          uVar18 = uVar48;
                        }
                        else {
                          uVar43 = uVar33;
                          if (((ulonglong)param_3 & 0x3f) != 0) {
                            uVar43 = uVar11;
                          }
                          uVar18 = uVar53 - (uVar53 - uVar43 & 0x3f);
                          if (uVar43 != 0) {
                            uVar50 = 0;
                            auVar73 = vpbroadcastd_avx512f();
                            auVar75 = auVar16;
                            auVar74 = auVar15;
                            uVar49 = in_K2;
                            do {
                              vpcmpgtd_avx512f(auVar73,auVar75);
                              uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                              uVar12 = (uint)uVar8;
                              auVar74 = vpaddd_avx512f(auVar74,auVar14);
                              in_K2 = uVar49 << 0x10;
                              auVar75 = vpaddd_avx512f(auVar75,auVar14);
                              auVar133._32_32_ = auVar75._32_32_;
                              auVar133._0_32_ =
                                   vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                      (uVar50 + (lVar45 - lVar44)));
                              auVar134[1] = ((byte)(uVar12 >> 1) & 1) * auVar133[1];
                              auVar134[0] = ((byte)uVar8 & 1) * auVar133[0];
                              auVar134[2] = ((byte)(uVar12 >> 2) & 1) * auVar133[2];
                              auVar134[3] = ((byte)(uVar12 >> 3) & 1) * auVar133[3];
                              auVar134[4] = ((byte)(uVar12 >> 4) & 1) * auVar133[4];
                              auVar134[5] = ((byte)(uVar12 >> 5) & 1) * auVar133[5];
                              auVar134[6] = ((byte)(uVar12 >> 6) & 1) * auVar133[6];
                              auVar134[7] = ((byte)(uVar12 >> 7) & 1) * auVar133[7];
                              auVar134[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar133[8];
                              auVar134[9] = ((byte)(uVar12 >> 9) & 1) * auVar133[9];
                              auVar134[10] = ((byte)(uVar12 >> 10) & 1) * auVar133[10];
                              auVar134[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar133[0xb];
                              auVar134[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar133[0xc];
                              auVar134[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar133[0xd];
                              auVar134[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar133[0xe];
                              auVar134[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar133[0xf];
                              auVar134[0x10] = ((byte)uVar49 & 1) * auVar133[0x10];
                              auVar134[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar133[0x11];
                              auVar134[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar133[0x12];
                              auVar134[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar133[0x13];
                              auVar134[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar133[0x14];
                              auVar134[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar133[0x15];
                              auVar134[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar133[0x16];
                              auVar134[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar133[0x17];
                              bVar6 = (byte)(uVar49 >> 8);
                              auVar134[0x18] = (bVar6 & 1) * auVar133[0x18];
                              auVar134[0x19] = (bVar6 >> 1 & 1) * auVar133[0x19];
                              auVar134[0x1a] = (bVar6 >> 2 & 1) * auVar133[0x1a];
                              auVar134[0x1b] = (bVar6 >> 3 & 1) * auVar133[0x1b];
                              auVar134[0x1c] = (bVar6 >> 4 & 1) * auVar133[0x1c];
                              auVar134._30_34_ = auVar133._30_34_;
                              auVar134[0x1d] = (bVar6 >> 5 & 1) * auVar133[0x1d];
                              auVar71 = vmovdqu8_avx512vl(auVar134._0_32_);
                              *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                              uVar50 = uVar50 + 0x20;
                              uVar49 = in_K2;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                            if (uVar43 == uVar53) goto LAB_140acb52e;
                          }
                        }
                        if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                          uVar50 = (ulonglong)(int)uVar43;
                          do {
                            auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])
                                                         (uVar50 + (lVar45 - lVar44)));
                            *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                            uVar50 = uVar50 + 0x40;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        }
                      }
                      if (uVar18 + 1 <= uVar53) {
                        lVar22 = (longlong)(int)uVar18;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar18 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar43 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar18 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar135._32_32_ = auVar75._32_32_;
                          auVar135._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                  (uVar50 + (lVar45 - lVar44) + lVar22));
                          auVar136[1] = ((byte)(uVar43 >> 1) & 1) * auVar135[1];
                          auVar136[0] = ((byte)uVar8 & 1) * auVar135[0];
                          auVar136[2] = ((byte)(uVar43 >> 2) & 1) * auVar135[2];
                          auVar136[3] = ((byte)(uVar43 >> 3) & 1) * auVar135[3];
                          auVar136[4] = ((byte)(uVar43 >> 4) & 1) * auVar135[4];
                          auVar136[5] = ((byte)(uVar43 >> 5) & 1) * auVar135[5];
                          auVar136[6] = ((byte)(uVar43 >> 6) & 1) * auVar135[6];
                          auVar136[7] = ((byte)(uVar43 >> 7) & 1) * auVar135[7];
                          auVar136[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar135[8];
                          auVar136[9] = ((byte)(uVar43 >> 9) & 1) * auVar135[9];
                          auVar136[10] = ((byte)(uVar43 >> 10) & 1) * auVar135[10];
                          auVar136[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar135[0xb];
                          auVar136[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar135[0xc];
                          auVar136[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar135[0xd];
                          auVar136[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar135[0xe];
                          auVar136[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar135[0xf];
                          auVar136[0x10] = ((byte)uVar18 & 1) * auVar135[0x10];
                          auVar136[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar135[0x11];
                          auVar136[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar135[0x12];
                          auVar136[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar135[0x13];
                          auVar136[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar135[0x14];
                          auVar136[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar135[0x15];
                          auVar136[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar135[0x16];
                          auVar136[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar135[0x17];
                          bVar6 = (byte)(uVar18 >> 8);
                          auVar136[0x18] = (bVar6 & 1) * auVar135[0x18];
                          auVar136[0x19] = (bVar6 >> 1 & 1) * auVar135[0x19];
                          auVar136[0x1a] = (bVar6 >> 2 & 1) * auVar135[0x1a];
                          auVar136[0x1b] = (bVar6 >> 3 & 1) * auVar135[0x1b];
                          auVar136[0x1c] = (bVar6 >> 4 & 1) * auVar135[0x1c];
                          auVar136._30_34_ = auVar135._30_34_;
                          auVar136[0x1d] = (bVar6 >> 5 & 1) * auVar135[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar136._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50 + lVar22) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar18 = in_K2;
                        } while (uVar50 < (ulonglong)(lVar55 - lVar22));
                      }
                      goto LAB_140acb52e;
                    }
                  }
                  iVar40 = 1;
                  lVar45 = 0;
                  if (uVar26 != 0) {
                    uVar50 = 0;
                    do {
                      uVar23 = uVar50;
                      uVar50 = uVar23 + 1;
                      pbVar2[lVar45 + -1] = *(byte *)(lVar45 + -1 + param_1 + lVar30);
                      pbVar2[lVar45 + -2] = *(byte *)(lVar45 + -2 + param_1 + lVar30);
                      lVar45 = lVar45 + -2;
                    } while (uVar50 < uVar29);
                    iVar40 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar40 - 1U < param_5) {
                    pbVar2[-(longlong)iVar40] = *(byte *)((param_1 + lVar30) - (longlong)iVar40);
                  }
                }
LAB_140acb52e:
                lVar45 = lVar30 + lVar3;
                param_3[lVar20] = *(byte *)(lVar45 + -2);
                param_3[lVar20 + 1] = *(byte *)(lVar45 + -1);
                iVar41 = uVar17 + 2;
                lVar20 = (longlong)iVar41;
                iVar40 = iVar41;
                if (uVar66 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      lVar45 = param_1 + lVar30;
                      pbVar63 = param_3 + lVar20;
                      if ((2 - lVar44 <= (longlong)pbVar63 - lVar45) ||
                         (2 - lVar44 <= -((longlong)pbVar63 - lVar45))) {
                        if ((int)uVar1 < 0x40) {
                          uVar18 = 0;
LAB_140acb677:
                          if (uVar18 + 1 <= uVar1) {
                            lVar20 = (longlong)(int)uVar18;
                            uVar50 = 0;
                            auVar73 = vpbroadcastd_avx512f();
                            auVar75 = auVar16;
                            auVar74 = auVar15;
                            uVar18 = in_K2;
                            do {
                              vpcmpgtd_avx512f(auVar73,auVar75);
                              uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                              uVar43 = (uint)uVar8;
                              auVar74 = vpaddd_avx512f(auVar74,auVar14);
                              in_K2 = uVar18 << 0x10;
                              auVar75 = vpaddd_avx512f(auVar75,auVar14);
                              auVar139._32_32_ = auVar75._32_32_;
                              auVar139._0_32_ =
                                   vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                      (uVar50 + lVar45 + lVar20));
                              auVar140[1] = ((byte)(uVar43 >> 1) & 1) * auVar139[1];
                              auVar140[0] = ((byte)uVar8 & 1) * auVar139[0];
                              auVar140[2] = ((byte)(uVar43 >> 2) & 1) * auVar139[2];
                              auVar140[3] = ((byte)(uVar43 >> 3) & 1) * auVar139[3];
                              auVar140[4] = ((byte)(uVar43 >> 4) & 1) * auVar139[4];
                              auVar140[5] = ((byte)(uVar43 >> 5) & 1) * auVar139[5];
                              auVar140[6] = ((byte)(uVar43 >> 6) & 1) * auVar139[6];
                              auVar140[7] = ((byte)(uVar43 >> 7) & 1) * auVar139[7];
                              auVar140[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar139[8];
                              auVar140[9] = ((byte)(uVar43 >> 9) & 1) * auVar139[9];
                              auVar140[10] = ((byte)(uVar43 >> 10) & 1) * auVar139[10];
                              auVar140[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar139[0xb];
                              auVar140[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar139[0xc];
                              auVar140[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar139[0xd];
                              auVar140[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar139[0xe];
                              auVar140[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar139[0xf];
                              auVar140[0x10] = ((byte)uVar18 & 1) * auVar139[0x10];
                              auVar140[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar139[0x11];
                              auVar140[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar139[0x12];
                              auVar140[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar139[0x13];
                              auVar140[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar139[0x14];
                              auVar140[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar139[0x15];
                              auVar140[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar139[0x16];
                              auVar140[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar139[0x17];
                              bVar6 = (byte)(uVar18 >> 8);
                              auVar140[0x18] = (bVar6 & 1) * auVar139[0x18];
                              auVar140[0x19] = (bVar6 >> 1 & 1) * auVar139[0x19];
                              auVar140[0x1a] = (bVar6 >> 2 & 1) * auVar139[0x1a];
                              auVar140[0x1b] = (bVar6 >> 3 & 1) * auVar139[0x1b];
                              auVar140[0x1c] = (bVar6 >> 4 & 1) * auVar139[0x1c];
                              auVar140._30_34_ = auVar139._30_34_;
                              auVar140[0x1d] = (bVar6 >> 5 & 1) * auVar139[0x1d];
                              auVar71 = vmovdqu8_avx512vl(auVar140._0_32_);
                              *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                              uVar50 = uVar50 + 0x20;
                              uVar18 = in_K2;
                            } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                          }
                        }
                        else {
                          if ((int)uVar1 < 0xeb) {
                            uVar43 = 0;
                            uVar18 = uVar58;
LAB_140acb642:
                            if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                              uVar50 = (ulonglong)(int)uVar43;
                              do {
                                auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar45))
                                ;
                                *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                                uVar50 = uVar50 + 0x40;
                              } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                            }
                            goto LAB_140acb677;
                          }
                          uVar43 = (uint)pbVar63 & 0x3f;
                          if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                             (uVar43 = 0x40 - uVar43, (int)uVar1 < (int)uVar43)) {
                            uVar43 = uVar1;
                          }
                          uVar18 = uVar1 - (uVar1 - uVar43 & 0x3f);
                          if (uVar43 == 0) goto LAB_140acb642;
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar49 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar12 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar49 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar137._32_32_ = auVar75._32_32_;
                            auVar137._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45));
                            auVar138[1] = ((byte)(uVar12 >> 1) & 1) * auVar137[1];
                            auVar138[0] = ((byte)uVar8 & 1) * auVar137[0];
                            auVar138[2] = ((byte)(uVar12 >> 2) & 1) * auVar137[2];
                            auVar138[3] = ((byte)(uVar12 >> 3) & 1) * auVar137[3];
                            auVar138[4] = ((byte)(uVar12 >> 4) & 1) * auVar137[4];
                            auVar138[5] = ((byte)(uVar12 >> 5) & 1) * auVar137[5];
                            auVar138[6] = ((byte)(uVar12 >> 6) & 1) * auVar137[6];
                            auVar138[7] = ((byte)(uVar12 >> 7) & 1) * auVar137[7];
                            auVar138[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar137[8];
                            auVar138[9] = ((byte)(uVar12 >> 9) & 1) * auVar137[9];
                            auVar138[10] = ((byte)(uVar12 >> 10) & 1) * auVar137[10];
                            auVar138[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar137[0xb];
                            auVar138[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar137[0xc];
                            auVar138[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar137[0xd];
                            auVar138[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar137[0xe];
                            auVar138[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar137[0xf];
                            auVar138[0x10] = ((byte)uVar49 & 1) * auVar137[0x10];
                            auVar138[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar137[0x11];
                            auVar138[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar137[0x12];
                            auVar138[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar137[0x13];
                            auVar138[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar137[0x14];
                            auVar138[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar137[0x15];
                            auVar138[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar137[0x16];
                            auVar138[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar137[0x17];
                            bVar6 = (byte)(uVar49 >> 8);
                            auVar138[0x18] = (bVar6 & 1) * auVar137[0x18];
                            auVar138[0x19] = (bVar6 >> 1 & 1) * auVar137[0x19];
                            auVar138[0x1a] = (bVar6 >> 2 & 1) * auVar137[0x1a];
                            auVar138[0x1b] = (bVar6 >> 3 & 1) * auVar137[0x1b];
                            auVar138[0x1c] = (bVar6 >> 4 & 1) * auVar137[0x1c];
                            auVar138._30_34_ = auVar137._30_34_;
                            auVar138[0x1d] = (bVar6 >> 5 & 1) * auVar137[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar138._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar49 = in_K2;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                          if (uVar1 != uVar43) goto LAB_140acb642;
                        }
                        lVar20 = (longlong)(int)(iVar47 + 4 + uVar17);
                        goto LAB_140acb9cd;
                      }
                    }
                    iVar27 = 1;
                    if (uVar65 != 0) {
                      uVar50 = 0;
                      do {
                        uVar23 = uVar50;
                        param_3[uVar23 * 2 + lVar20] = *(byte *)(param_1 + lVar30 + uVar23 * 2);
                        param_3[uVar23 * 2 + lVar20 + 1] =
                             *(byte *)(param_1 + lVar30 + 1 + uVar23 * 2);
                        uVar50 = uVar23 + 1;
                      } while (uVar50 < uVar69);
                      iVar40 = (int)uVar50 * 2 + 2 + uVar17;
                      iVar27 = (int)uVar23 + 2 + (int)uVar50;
                    }
                    if (uVar1 <= iVar27 - 1U) goto LAB_140acb9ca;
                    param_3[(longlong)iVar27 + -1 + lVar20] =
                         *(byte *)((longlong)iVar27 + -1 + lVar30 + param_1);
                    lVar20 = (longlong)(iVar27 + iVar41);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140acb9cd;
                  if (6 < (int)uVar1) {
                    pbVar63 = param_3 + lVar20;
                    if ((2 - lVar44 <= (longlong)pbVar63 - lVar45) ||
                       (2 - lVar44 <= -((longlong)pbVar63 - lVar45))) {
                      if ((int)uVar1 < 0x40) {
                        uVar18 = 0;
LAB_140acb8b7:
                        if (uVar18 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar18;
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar18 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar43 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar18 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar143._32_32_ = auVar75._32_32_;
                            auVar143._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45 + lVar20))
                            ;
                            auVar144[1] = ((byte)(uVar43 >> 1) & 1) * auVar143[1];
                            auVar144[0] = ((byte)uVar8 & 1) * auVar143[0];
                            auVar144[2] = ((byte)(uVar43 >> 2) & 1) * auVar143[2];
                            auVar144[3] = ((byte)(uVar43 >> 3) & 1) * auVar143[3];
                            auVar144[4] = ((byte)(uVar43 >> 4) & 1) * auVar143[4];
                            auVar144[5] = ((byte)(uVar43 >> 5) & 1) * auVar143[5];
                            auVar144[6] = ((byte)(uVar43 >> 6) & 1) * auVar143[6];
                            auVar144[7] = ((byte)(uVar43 >> 7) & 1) * auVar143[7];
                            auVar144[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar143[8];
                            auVar144[9] = ((byte)(uVar43 >> 9) & 1) * auVar143[9];
                            auVar144[10] = ((byte)(uVar43 >> 10) & 1) * auVar143[10];
                            auVar144[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar143[0xb];
                            auVar144[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar143[0xc];
                            auVar144[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar143[0xd];
                            auVar144[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar143[0xe];
                            auVar144[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar143[0xf];
                            auVar144[0x10] = ((byte)uVar18 & 1) * auVar143[0x10];
                            auVar144[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar143[0x11];
                            auVar144[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar143[0x12];
                            auVar144[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar143[0x13];
                            auVar144[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar143[0x14];
                            auVar144[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar143[0x15];
                            auVar144[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar143[0x16];
                            auVar144[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar143[0x17];
                            bVar6 = (byte)(uVar18 >> 8);
                            auVar144[0x18] = (bVar6 & 1) * auVar143[0x18];
                            auVar144[0x19] = (bVar6 >> 1 & 1) * auVar143[0x19];
                            auVar144[0x1a] = (bVar6 >> 2 & 1) * auVar143[0x1a];
                            auVar144[0x1b] = (bVar6 >> 3 & 1) * auVar143[0x1b];
                            auVar144[0x1c] = (bVar6 >> 4 & 1) * auVar143[0x1c];
                            auVar144._30_34_ = auVar143._30_34_;
                            auVar144[0x1d] = (bVar6 >> 5 & 1) * auVar143[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar144._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar18 = in_K2;
                          } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                        }
                      }
                      else {
                        if ((int)uVar1 < 0xeb) {
                          uVar43 = 0;
                          uVar18 = uVar58;
LAB_140acb883:
                          if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                            uVar50 = (ulonglong)(int)uVar43;
                            do {
                              auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar45));
                              *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                              uVar50 = uVar50 + 0x40;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          }
                          goto LAB_140acb8b7;
                        }
                        uVar43 = (uint)pbVar63 & 0x3f;
                        if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                           (uVar43 = 0x40 - uVar43, (int)uVar1 < (int)uVar43)) {
                          uVar43 = uVar1;
                        }
                        uVar18 = uVar1 - (uVar1 - uVar43 & 0x3f);
                        if (uVar43 == 0) goto LAB_140acb883;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar49 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar12 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar49 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar141._32_32_ = auVar75._32_32_;
                          auVar141._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar45));
                          auVar142[1] = ((byte)(uVar12 >> 1) & 1) * auVar141[1];
                          auVar142[0] = ((byte)uVar8 & 1) * auVar141[0];
                          auVar142[2] = ((byte)(uVar12 >> 2) & 1) * auVar141[2];
                          auVar142[3] = ((byte)(uVar12 >> 3) & 1) * auVar141[3];
                          auVar142[4] = ((byte)(uVar12 >> 4) & 1) * auVar141[4];
                          auVar142[5] = ((byte)(uVar12 >> 5) & 1) * auVar141[5];
                          auVar142[6] = ((byte)(uVar12 >> 6) & 1) * auVar141[6];
                          auVar142[7] = ((byte)(uVar12 >> 7) & 1) * auVar141[7];
                          auVar142[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar141[8];
                          auVar142[9] = ((byte)(uVar12 >> 9) & 1) * auVar141[9];
                          auVar142[10] = ((byte)(uVar12 >> 10) & 1) * auVar141[10];
                          auVar142[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar141[0xb];
                          auVar142[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar141[0xc];
                          auVar142[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar141[0xd];
                          auVar142[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar141[0xe];
                          auVar142[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar141[0xf];
                          auVar142[0x10] = ((byte)uVar49 & 1) * auVar141[0x10];
                          auVar142[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar141[0x11];
                          auVar142[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar141[0x12];
                          auVar142[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar141[0x13];
                          auVar142[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar141[0x14];
                          auVar142[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar141[0x15];
                          auVar142[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar141[0x16];
                          auVar142[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar141[0x17];
                          bVar6 = (byte)(uVar49 >> 8);
                          auVar142[0x18] = (bVar6 & 1) * auVar141[0x18];
                          auVar142[0x19] = (bVar6 >> 1 & 1) * auVar141[0x19];
                          auVar142[0x1a] = (bVar6 >> 2 & 1) * auVar141[0x1a];
                          auVar142[0x1b] = (bVar6 >> 3 & 1) * auVar141[0x1b];
                          auVar142[0x1c] = (bVar6 >> 4 & 1) * auVar141[0x1c];
                          auVar142._30_34_ = auVar141._30_34_;
                          auVar142[0x1d] = (bVar6 >> 5 & 1) * auVar141[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar142._0_32_);
                          *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar49 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                        if (uVar1 != uVar43) goto LAB_140acb883;
                      }
                      lVar20 = (longlong)(int)(iVar47 + 4 + uVar17);
                      goto LAB_140acb9cd;
                    }
                  }
                  iVar27 = 1;
                  uVar50 = 0;
                  if (uVar65 != 0) {
                    do {
                      uVar23 = uVar50;
                      param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar45 + uVar23 * 2);
                      param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar45 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                    } while (uVar50 < uVar69);
                    iVar40 = (int)uVar50 * 2 + 2 + uVar17;
                    iVar27 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar27 - 1U < uVar1) {
                    param_3[(longlong)iVar27 + -1 + lVar20] =
                         *(byte *)((longlong)iVar27 + -1 + lVar45);
                    lVar20 = (longlong)(iVar27 + iVar41);
                    goto LAB_140acb9cd;
                  }
LAB_140acb9ca:
                  lVar20 = (longlong)iVar40;
                }
LAB_140acb9cd:
                lStack_48 = lVar20 - lVar28;
                goto LAB_140ac9ae0;
              }
            }
            if (uVar64 == 0) {
              if (-1 < (int)uVar52) {
                if (((int)param_5 < 7) ||
                   ((pbVar63 = param_3 + ((lVar44 + -1) - (longlong)(pbVar2 + (uVar37 - 1))),
                    (longlong)pbVar63 <= lVar44 &&
                    ((byte *)-lVar44 == pbVar63 || -(longlong)pbVar63 < lVar44)))) {
                  iVar40 = 1;
                  lVar30 = 0;
                  uVar50 = 0;
                  if (uVar26 != 0) {
                    do {
                      uVar23 = uVar50;
                      uVar50 = uVar23 + 1;
                      pbVar2[lVar30 + -1] = pbVar2[lVar30 + -1 + uVar37];
                      pbVar2[lVar30 + -2] = pbVar2[lVar30 + -2 + uVar37];
                      lVar30 = lVar30 + -2;
                    } while (uVar50 < uVar29);
                    iVar40 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar40 - 1U < param_5) {
                    pbVar2[-(longlong)iVar40] = pbVar2[uVar37 - (longlong)iVar40];
                  }
                }
                else {
                  if ((int)uVar53 < 0x40) {
                    uVar17 = 0;
                  }
                  else {
                    if ((int)uVar53 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar48;
                    }
                    else {
                      uVar18 = uVar33;
                      if (((ulonglong)param_3 & 0x3f) != 0) {
                        uVar18 = uVar11;
                      }
                      uVar17 = uVar53 - (uVar53 - uVar18 & 0x3f);
                      if (uVar18 != 0) {
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar43 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar49 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar43 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar145._32_32_ = auVar75._32_32_;
                          auVar145._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(pbVar2 + uVar50 + lVar13));
                          auVar146[1] = ((byte)(uVar49 >> 1) & 1) * auVar145[1];
                          auVar146[0] = ((byte)uVar8 & 1) * auVar145[0];
                          auVar146[2] = ((byte)(uVar49 >> 2) & 1) * auVar145[2];
                          auVar146[3] = ((byte)(uVar49 >> 3) & 1) * auVar145[3];
                          auVar146[4] = ((byte)(uVar49 >> 4) & 1) * auVar145[4];
                          auVar146[5] = ((byte)(uVar49 >> 5) & 1) * auVar145[5];
                          auVar146[6] = ((byte)(uVar49 >> 6) & 1) * auVar145[6];
                          auVar146[7] = ((byte)(uVar49 >> 7) & 1) * auVar145[7];
                          auVar146[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar145[8];
                          auVar146[9] = ((byte)(uVar49 >> 9) & 1) * auVar145[9];
                          auVar146[10] = ((byte)(uVar49 >> 10) & 1) * auVar145[10];
                          auVar146[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar145[0xb];
                          auVar146[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar145[0xc];
                          auVar146[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar145[0xd];
                          auVar146[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar145[0xe];
                          auVar146[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar145[0xf];
                          auVar146[0x10] = ((byte)uVar43 & 1) * auVar145[0x10];
                          auVar146[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar145[0x11];
                          auVar146[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar145[0x12];
                          auVar146[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar145[0x13];
                          auVar146[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar145[0x14];
                          auVar146[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar145[0x15];
                          auVar146[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar145[0x16];
                          auVar146[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar145[0x17];
                          bVar6 = (byte)(uVar43 >> 8);
                          auVar146[0x18] = (bVar6 & 1) * auVar145[0x18];
                          auVar146[0x19] = (bVar6 >> 1 & 1) * auVar145[0x19];
                          auVar146[0x1a] = (bVar6 >> 2 & 1) * auVar145[0x1a];
                          auVar146[0x1b] = (bVar6 >> 3 & 1) * auVar145[0x1b];
                          auVar146[0x1c] = (bVar6 >> 4 & 1) * auVar145[0x1c];
                          auVar146._30_34_ = auVar145._30_34_;
                          auVar146[0x1d] = (bVar6 >> 5 & 1) * auVar145[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar146._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar43 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        if (uVar18 == uVar53) goto LAB_140acbf3e;
                      }
                    }
                    if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                      uVar50 = (ulonglong)(int)uVar18;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(pbVar2 + uVar50 + lVar13)
                                                   );
                        *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                  }
                  if (uVar17 + 1 <= uVar53) {
                    lVar30 = (longlong)(int)uVar17;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar17 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar18 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar17 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar147._32_32_ = auVar75._32_32_;
                      auVar147._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                              (pbVar2 + uVar50 + lVar30 + lVar13));
                      auVar148[1] = ((byte)(uVar18 >> 1) & 1) * auVar147[1];
                      auVar148[0] = ((byte)uVar8 & 1) * auVar147[0];
                      auVar148[2] = ((byte)(uVar18 >> 2) & 1) * auVar147[2];
                      auVar148[3] = ((byte)(uVar18 >> 3) & 1) * auVar147[3];
                      auVar148[4] = ((byte)(uVar18 >> 4) & 1) * auVar147[4];
                      auVar148[5] = ((byte)(uVar18 >> 5) & 1) * auVar147[5];
                      auVar148[6] = ((byte)(uVar18 >> 6) & 1) * auVar147[6];
                      auVar148[7] = ((byte)(uVar18 >> 7) & 1) * auVar147[7];
                      auVar148[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar147[8];
                      auVar148[9] = ((byte)(uVar18 >> 9) & 1) * auVar147[9];
                      auVar148[10] = ((byte)(uVar18 >> 10) & 1) * auVar147[10];
                      auVar148[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar147[0xb];
                      auVar148[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar147[0xc];
                      auVar148[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar147[0xd];
                      auVar148[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar147[0xe];
                      auVar148[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar147[0xf];
                      auVar148[0x10] = ((byte)uVar17 & 1) * auVar147[0x10];
                      auVar148[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar147[0x11];
                      auVar148[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar147[0x12];
                      auVar148[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar147[0x13];
                      auVar148[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar147[0x14];
                      auVar148[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar147[0x15];
                      auVar148[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar147[0x16];
                      auVar148[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar147[0x17];
                      bVar6 = (byte)(uVar17 >> 8);
                      auVar148[0x18] = (bVar6 & 1) * auVar147[0x18];
                      auVar148[0x19] = (bVar6 >> 1 & 1) * auVar147[0x19];
                      auVar148[0x1a] = (bVar6 >> 2 & 1) * auVar147[0x1a];
                      auVar148[0x1b] = (bVar6 >> 3 & 1) * auVar147[0x1b];
                      auVar148[0x1c] = (bVar6 >> 4 & 1) * auVar147[0x1c];
                      auVar148._30_34_ = auVar147._30_34_;
                      auVar148[0x1d] = (bVar6 >> 5 & 1) * auVar147[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar148._0_32_);
                      *(undefined1 (*) [32])(param_3 + uVar50 + lVar30) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar17 = in_K2;
                    } while (uVar50 < (ulonglong)(lVar55 - lVar30));
                  }
                }
              }
            }
            else if (-1 < (int)uVar52) {
              if (6 < (int)param_5) {
                lVar30 = param_1 + lVar54 * uVar36;
                pbVar63 = param_3 + ((lVar44 + -1) - (lVar30 + -1));
                if ((lVar44 < (longlong)pbVar63) ||
                   ((byte *)-lVar44 != pbVar63 && lVar44 <= -(longlong)pbVar63)) {
                  if ((int)uVar53 < 0x40) {
                    uVar17 = 0;
                  }
                  else {
                    if ((int)uVar53 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar48;
                    }
                    else {
                      uVar18 = uVar33;
                      if (((ulonglong)param_3 & 0x3f) != 0) {
                        uVar18 = uVar11;
                      }
                      uVar17 = uVar53 - (uVar53 - uVar18 & 0x3f);
                      if (uVar18 != 0) {
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar43 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar49 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar43 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar149._32_32_ = auVar75._32_32_;
                          auVar149._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + (lVar30 - lVar44)))
                          ;
                          auVar150[1] = ((byte)(uVar49 >> 1) & 1) * auVar149[1];
                          auVar150[0] = ((byte)uVar8 & 1) * auVar149[0];
                          auVar150[2] = ((byte)(uVar49 >> 2) & 1) * auVar149[2];
                          auVar150[3] = ((byte)(uVar49 >> 3) & 1) * auVar149[3];
                          auVar150[4] = ((byte)(uVar49 >> 4) & 1) * auVar149[4];
                          auVar150[5] = ((byte)(uVar49 >> 5) & 1) * auVar149[5];
                          auVar150[6] = ((byte)(uVar49 >> 6) & 1) * auVar149[6];
                          auVar150[7] = ((byte)(uVar49 >> 7) & 1) * auVar149[7];
                          auVar150[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar149[8];
                          auVar150[9] = ((byte)(uVar49 >> 9) & 1) * auVar149[9];
                          auVar150[10] = ((byte)(uVar49 >> 10) & 1) * auVar149[10];
                          auVar150[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar149[0xb];
                          auVar150[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar149[0xc];
                          auVar150[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar149[0xd];
                          auVar150[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar149[0xe];
                          auVar150[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar149[0xf];
                          auVar150[0x10] = ((byte)uVar43 & 1) * auVar149[0x10];
                          auVar150[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar149[0x11];
                          auVar150[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar149[0x12];
                          auVar150[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar149[0x13];
                          auVar150[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar149[0x14];
                          auVar150[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar149[0x15];
                          auVar150[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar149[0x16];
                          auVar150[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar149[0x17];
                          bVar6 = (byte)(uVar43 >> 8);
                          auVar150[0x18] = (bVar6 & 1) * auVar149[0x18];
                          auVar150[0x19] = (bVar6 >> 1 & 1) * auVar149[0x19];
                          auVar150[0x1a] = (bVar6 >> 2 & 1) * auVar149[0x1a];
                          auVar150[0x1b] = (bVar6 >> 3 & 1) * auVar149[0x1b];
                          auVar150[0x1c] = (bVar6 >> 4 & 1) * auVar149[0x1c];
                          auVar150._30_34_ = auVar149._30_34_;
                          auVar150[0x1d] = (bVar6 >> 5 & 1) * auVar149[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar150._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar43 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        if (uVar18 == uVar53) goto LAB_140acbf3e;
                      }
                    }
                    if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                      uVar50 = (ulonglong)(int)uVar18;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])
                                                     (uVar50 + (lVar30 - lVar44)));
                        *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                  }
                  if (uVar17 + 1 <= uVar53) {
                    lVar45 = (longlong)(int)uVar17;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar17 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar18 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar17 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar151._32_32_ = auVar75._32_32_;
                      auVar151._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                              (uVar50 + (lVar30 - lVar44) + lVar45));
                      auVar152[1] = ((byte)(uVar18 >> 1) & 1) * auVar151[1];
                      auVar152[0] = ((byte)uVar8 & 1) * auVar151[0];
                      auVar152[2] = ((byte)(uVar18 >> 2) & 1) * auVar151[2];
                      auVar152[3] = ((byte)(uVar18 >> 3) & 1) * auVar151[3];
                      auVar152[4] = ((byte)(uVar18 >> 4) & 1) * auVar151[4];
                      auVar152[5] = ((byte)(uVar18 >> 5) & 1) * auVar151[5];
                      auVar152[6] = ((byte)(uVar18 >> 6) & 1) * auVar151[6];
                      auVar152[7] = ((byte)(uVar18 >> 7) & 1) * auVar151[7];
                      auVar152[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar151[8];
                      auVar152[9] = ((byte)(uVar18 >> 9) & 1) * auVar151[9];
                      auVar152[10] = ((byte)(uVar18 >> 10) & 1) * auVar151[10];
                      auVar152[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar151[0xb];
                      auVar152[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar151[0xc];
                      auVar152[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar151[0xd];
                      auVar152[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar151[0xe];
                      auVar152[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar151[0xf];
                      auVar152[0x10] = ((byte)uVar17 & 1) * auVar151[0x10];
                      auVar152[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar151[0x11];
                      auVar152[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar151[0x12];
                      auVar152[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar151[0x13];
                      auVar152[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar151[0x14];
                      auVar152[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar151[0x15];
                      auVar152[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar151[0x16];
                      auVar152[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar151[0x17];
                      bVar6 = (byte)(uVar17 >> 8);
                      auVar152[0x18] = (bVar6 & 1) * auVar151[0x18];
                      auVar152[0x19] = (bVar6 >> 1 & 1) * auVar151[0x19];
                      auVar152[0x1a] = (bVar6 >> 2 & 1) * auVar151[0x1a];
                      auVar152[0x1b] = (bVar6 >> 3 & 1) * auVar151[0x1b];
                      auVar152[0x1c] = (bVar6 >> 4 & 1) * auVar151[0x1c];
                      auVar152._30_34_ = auVar151._30_34_;
                      auVar152[0x1d] = (bVar6 >> 5 & 1) * auVar151[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar152._0_32_);
                      *(undefined1 (*) [32])(param_3 + uVar50 + lVar45) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar17 = in_K2;
                    } while (uVar50 < (ulonglong)(lVar55 - lVar45));
                  }
                  goto LAB_140acbf3e;
                }
              }
              iVar40 = 1;
              lVar30 = 0;
              if (uVar26 != 0) {
                lVar45 = lVar54 * uVar36 + param_1;
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  uVar50 = uVar23 + 1;
                  pbVar2[lVar30 + -1] = *(byte *)(lVar30 + -1 + lVar45);
                  pbVar2[lVar30 + -2] = *(byte *)(lVar30 + -2 + lVar45);
                  lVar30 = lVar30 + -2;
                } while (uVar50 < uVar29);
                iVar40 = (int)uVar23 + 2 + (int)uVar50;
              }
              if (iVar40 - 1U < param_5) {
                pbVar2[-(longlong)iVar40] = *(byte *)((param_1 - iVar40) + lVar54 * uVar36);
              }
            }
LAB_140acbf3e:
            if (uVar66 == 0) {
              lStack_48 = lVar44;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar63 = param_3 + lVar20;
                  pbVar31 = param_3 + (lVar20 - uVar37);
                  if ((2 - lVar44 <= (longlong)pbVar63 - (longlong)pbVar31) ||
                     (2 - lVar44 <= -((longlong)pbVar63 - (longlong)pbVar31))) {
                    if ((int)uVar1 < 0x40) {
                      uVar17 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xeb) {
                        uVar18 = 0;
                        uVar17 = uVar58;
                      }
                      else {
                        uVar18 = (uint)pbVar63 & 0x3f;
                        if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                           (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                          uVar18 = uVar1;
                        }
                        uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                        if (uVar18 != 0) {
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar43 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar49 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar43 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar153._32_32_ = auVar75._32_32_;
                            auVar153._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(pbVar31 + uVar50));
                            auVar154[1] = ((byte)(uVar49 >> 1) & 1) * auVar153[1];
                            auVar154[0] = ((byte)uVar8 & 1) * auVar153[0];
                            auVar154[2] = ((byte)(uVar49 >> 2) & 1) * auVar153[2];
                            auVar154[3] = ((byte)(uVar49 >> 3) & 1) * auVar153[3];
                            auVar154[4] = ((byte)(uVar49 >> 4) & 1) * auVar153[4];
                            auVar154[5] = ((byte)(uVar49 >> 5) & 1) * auVar153[5];
                            auVar154[6] = ((byte)(uVar49 >> 6) & 1) * auVar153[6];
                            auVar154[7] = ((byte)(uVar49 >> 7) & 1) * auVar153[7];
                            auVar154[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar153[8];
                            auVar154[9] = ((byte)(uVar49 >> 9) & 1) * auVar153[9];
                            auVar154[10] = ((byte)(uVar49 >> 10) & 1) * auVar153[10];
                            auVar154[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar153[0xb];
                            auVar154[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar153[0xc];
                            auVar154[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar153[0xd];
                            auVar154[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar153[0xe];
                            auVar154[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar153[0xf];
                            auVar154[0x10] = ((byte)uVar43 & 1) * auVar153[0x10];
                            auVar154[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar153[0x11];
                            auVar154[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar153[0x12];
                            auVar154[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar153[0x13];
                            auVar154[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar153[0x14];
                            auVar154[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar153[0x15];
                            auVar154[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar153[0x16];
                            auVar154[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar153[0x17];
                            bVar6 = (byte)(uVar43 >> 8);
                            auVar154[0x18] = (bVar6 & 1) * auVar153[0x18];
                            auVar154[0x19] = (bVar6 >> 1 & 1) * auVar153[0x19];
                            auVar154[0x1a] = (bVar6 >> 2 & 1) * auVar153[0x1a];
                            auVar154[0x1b] = (bVar6 >> 3 & 1) * auVar153[0x1b];
                            auVar154[0x1c] = (bVar6 >> 4 & 1) * auVar153[0x1c];
                            auVar154._30_34_ = auVar153._30_34_;
                            auVar154[0x1d] = (bVar6 >> 5 & 1) * auVar153[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar154._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar43 = in_K2;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          if (uVar1 == uVar18) goto LAB_140ac9ae0;
                        }
                      }
                      if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                        uVar50 = (ulonglong)(int)uVar18;
                        do {
                          auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(pbVar31 + uVar50));
                          *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                          uVar50 = uVar50 + 0x40;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                      }
                    }
                    if (uVar17 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar17;
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      uVar17 = in_K2;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        uVar18 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        in_K2 = uVar17 << 0x10;
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar155._32_32_ = auVar75._32_32_;
                        auVar155._0_32_ =
                             vmovdqu8_avx512vl(*(undefined1 (*) [32])(pbVar31 + uVar50 + lVar20));
                        auVar156[1] = ((byte)(uVar18 >> 1) & 1) * auVar155[1];
                        auVar156[0] = ((byte)uVar8 & 1) * auVar155[0];
                        auVar156[2] = ((byte)(uVar18 >> 2) & 1) * auVar155[2];
                        auVar156[3] = ((byte)(uVar18 >> 3) & 1) * auVar155[3];
                        auVar156[4] = ((byte)(uVar18 >> 4) & 1) * auVar155[4];
                        auVar156[5] = ((byte)(uVar18 >> 5) & 1) * auVar155[5];
                        auVar156[6] = ((byte)(uVar18 >> 6) & 1) * auVar155[6];
                        auVar156[7] = ((byte)(uVar18 >> 7) & 1) * auVar155[7];
                        auVar156[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar155[8];
                        auVar156[9] = ((byte)(uVar18 >> 9) & 1) * auVar155[9];
                        auVar156[10] = ((byte)(uVar18 >> 10) & 1) * auVar155[10];
                        auVar156[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar155[0xb];
                        auVar156[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar155[0xc];
                        auVar156[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar155[0xd];
                        auVar156[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar155[0xe];
                        auVar156[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar155[0xf];
                        auVar156[0x10] = ((byte)uVar17 & 1) * auVar155[0x10];
                        auVar156[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar155[0x11];
                        auVar156[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar155[0x12];
                        auVar156[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar155[0x13];
                        auVar156[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar155[0x14];
                        auVar156[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar155[0x15];
                        auVar156[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar155[0x16];
                        auVar156[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar155[0x17];
                        bVar6 = (byte)(uVar17 >> 8);
                        auVar156[0x18] = (bVar6 & 1) * auVar155[0x18];
                        auVar156[0x19] = (bVar6 >> 1 & 1) * auVar155[0x19];
                        auVar156[0x1a] = (bVar6 >> 2 & 1) * auVar155[0x1a];
                        auVar156[0x1b] = (bVar6 >> 3 & 1) * auVar155[0x1b];
                        auVar156[0x1c] = (bVar6 >> 4 & 1) * auVar155[0x1c];
                        auVar156._30_34_ = auVar155._30_34_;
                        auVar156[0x1d] = (bVar6 >> 5 & 1) * auVar155[0x1d];
                        auVar71 = vmovdqu8_avx512vl(auVar156._0_32_);
                        *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                        uVar50 = uVar50 + 0x20;
                        uVar17 = in_K2;
                      } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                    }
                    goto LAB_140ac9ae0;
                  }
                }
                iVar40 = 1;
                if (uVar65 != 0) {
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2 + lVar20] = param_3[uVar23 * 2 + (lVar20 - uVar37)];
                    param_3[uVar23 * 2 + lVar20 + 1] = param_3[uVar23 * 2 + (lVar20 - uVar37) + 1];
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar69);
                  iVar40 = (int)uVar23 + 2 + (int)uVar50;
                }
                if (iVar40 - 1U < uVar1) {
                  param_3[(longlong)iVar40 + -1 + lVar20] =
                       param_3[(longlong)iVar40 + -1 + (lVar20 - uVar37)];
                }
              }
            }
            else {
              lStack_48 = lVar44;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar63 = param_3 + lVar20;
                  lVar30 = lVar54 * uVar36 + lVar3;
                  if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                     (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                    if ((int)uVar1 < 0x40) {
                      uVar17 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xeb) {
                        uVar18 = 0;
                        uVar17 = uVar58;
                      }
                      else {
                        uVar18 = (uint)pbVar63 & 0x3f;
                        if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                           (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                          uVar18 = uVar1;
                        }
                        uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                        if (uVar18 != 0) {
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar43 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar49 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar43 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar157._32_32_ = auVar75._32_32_;
                            auVar157._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                            auVar158[1] = ((byte)(uVar49 >> 1) & 1) * auVar157[1];
                            auVar158[0] = ((byte)uVar8 & 1) * auVar157[0];
                            auVar158[2] = ((byte)(uVar49 >> 2) & 1) * auVar157[2];
                            auVar158[3] = ((byte)(uVar49 >> 3) & 1) * auVar157[3];
                            auVar158[4] = ((byte)(uVar49 >> 4) & 1) * auVar157[4];
                            auVar158[5] = ((byte)(uVar49 >> 5) & 1) * auVar157[5];
                            auVar158[6] = ((byte)(uVar49 >> 6) & 1) * auVar157[6];
                            auVar158[7] = ((byte)(uVar49 >> 7) & 1) * auVar157[7];
                            auVar158[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar157[8];
                            auVar158[9] = ((byte)(uVar49 >> 9) & 1) * auVar157[9];
                            auVar158[10] = ((byte)(uVar49 >> 10) & 1) * auVar157[10];
                            auVar158[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar157[0xb];
                            auVar158[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar157[0xc];
                            auVar158[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar157[0xd];
                            auVar158[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar157[0xe];
                            auVar158[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar157[0xf];
                            auVar158[0x10] = ((byte)uVar43 & 1) * auVar157[0x10];
                            auVar158[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar157[0x11];
                            auVar158[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar157[0x12];
                            auVar158[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar157[0x13];
                            auVar158[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar157[0x14];
                            auVar158[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar157[0x15];
                            auVar158[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar157[0x16];
                            auVar158[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar157[0x17];
                            bVar6 = (byte)(uVar43 >> 8);
                            auVar158[0x18] = (bVar6 & 1) * auVar157[0x18];
                            auVar158[0x19] = (bVar6 >> 1 & 1) * auVar157[0x19];
                            auVar158[0x1a] = (bVar6 >> 2 & 1) * auVar157[0x1a];
                            auVar158[0x1b] = (bVar6 >> 3 & 1) * auVar157[0x1b];
                            auVar158[0x1c] = (bVar6 >> 4 & 1) * auVar157[0x1c];
                            auVar158._30_34_ = auVar157._30_34_;
                            auVar158[0x1d] = (bVar6 >> 5 & 1) * auVar157[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar158._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar43 = in_K2;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          if (uVar1 == uVar18) goto LAB_140ac9ae0;
                        }
                      }
                      if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                        uVar50 = (ulonglong)(int)uVar18;
                        do {
                          auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                          *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                          uVar50 = uVar50 + 0x40;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                      }
                    }
                    if (uVar17 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar17;
                      uVar50 = 0;
                      auVar73 = vpbroadcastd_avx512f();
                      auVar75 = auVar16;
                      auVar74 = auVar15;
                      uVar17 = in_K2;
                      do {
                        vpcmpgtd_avx512f(auVar73,auVar75);
                        uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                        uVar18 = (uint)uVar8;
                        auVar74 = vpaddd_avx512f(auVar74,auVar14);
                        in_K2 = uVar17 << 0x10;
                        auVar75 = vpaddd_avx512f(auVar75,auVar14);
                        auVar159._32_32_ = auVar75._32_32_;
                        auVar159._0_32_ =
                             vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20));
                        auVar160[1] = ((byte)(uVar18 >> 1) & 1) * auVar159[1];
                        auVar160[0] = ((byte)uVar8 & 1) * auVar159[0];
                        auVar160[2] = ((byte)(uVar18 >> 2) & 1) * auVar159[2];
                        auVar160[3] = ((byte)(uVar18 >> 3) & 1) * auVar159[3];
                        auVar160[4] = ((byte)(uVar18 >> 4) & 1) * auVar159[4];
                        auVar160[5] = ((byte)(uVar18 >> 5) & 1) * auVar159[5];
                        auVar160[6] = ((byte)(uVar18 >> 6) & 1) * auVar159[6];
                        auVar160[7] = ((byte)(uVar18 >> 7) & 1) * auVar159[7];
                        auVar160[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar159[8];
                        auVar160[9] = ((byte)(uVar18 >> 9) & 1) * auVar159[9];
                        auVar160[10] = ((byte)(uVar18 >> 10) & 1) * auVar159[10];
                        auVar160[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar159[0xb];
                        auVar160[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar159[0xc];
                        auVar160[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar159[0xd];
                        auVar160[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar159[0xe];
                        auVar160[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar159[0xf];
                        auVar160[0x10] = ((byte)uVar17 & 1) * auVar159[0x10];
                        auVar160[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar159[0x11];
                        auVar160[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar159[0x12];
                        auVar160[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar159[0x13];
                        auVar160[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar159[0x14];
                        auVar160[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar159[0x15];
                        auVar160[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar159[0x16];
                        auVar160[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar159[0x17];
                        bVar6 = (byte)(uVar17 >> 8);
                        auVar160[0x18] = (bVar6 & 1) * auVar159[0x18];
                        auVar160[0x19] = (bVar6 >> 1 & 1) * auVar159[0x19];
                        auVar160[0x1a] = (bVar6 >> 2 & 1) * auVar159[0x1a];
                        auVar160[0x1b] = (bVar6 >> 3 & 1) * auVar159[0x1b];
                        auVar160[0x1c] = (bVar6 >> 4 & 1) * auVar159[0x1c];
                        auVar160._30_34_ = auVar159._30_34_;
                        auVar160[0x1d] = (bVar6 >> 5 & 1) * auVar159[0x1d];
                        auVar71 = vmovdqu8_avx512vl(auVar160._0_32_);
                        *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                        uVar50 = uVar50 + 0x20;
                        uVar17 = in_K2;
                      } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                    }
                    goto LAB_140ac9ae0;
                  }
                }
                iVar40 = 1;
                if (uVar65 != 0) {
                  lVar30 = lVar54 * uVar36 + lVar3;
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                    param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar69);
                  iVar40 = (int)uVar23 + 2 + (int)uVar50;
                }
                if (iVar40 - 1U < uVar1) {
                  param_3[(longlong)iVar40 + -1 + lVar20] =
                       *(byte *)(lVar3 + iVar40 + -1 + lVar54 * uVar36);
                }
              }
            }
          }
          else if (uVar17 == 3) {
            lVar20 = lVar44;
            if (0 < iVar40) {
              if (uVar9 < 7) {
LAB_140aca013:
                iVar41 = 1;
                uVar17 = param_5;
                if (iVar59 != 0) {
                  lVar20 = lVar54 * uVar36 + param_1;
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    pbVar2[uVar23 * 2] = *(byte *)(lVar20 + uVar23 * 2);
                    pbVar2[uVar23 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar10);
                  iVar41 = (int)uVar23 + 2 + (int)uVar50;
                  uVar17 = param_5 + (int)uVar50 * 2;
                }
                if (iVar41 - 1U < uVar9) {
                  pbVar2[(longlong)iVar41 + -1] = *(byte *)(param_1 + iVar41 + -1 + lVar54 * uVar36)
                  ;
                  uVar17 = param_5 + iVar41;
                }
              }
              else {
                lVar20 = lVar54 * uVar36 + param_1;
                if (((longlong)pbVar2 - lVar20 < (longlong)uVar19) &&
                   (-((longlong)pbVar2 - lVar20) < (longlong)uVar19)) goto LAB_140aca013;
                uVar17 = uVar32;
                if (uVar9 < 0x40) {
                  uVar18 = 0;
LAB_140ac9f77:
                  if (uVar18 + 1 <= uVar9) {
                    uVar49 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar43 = in_K2;
                    do {
                      vpcmpud_avx512f(auVar75,auVar73,1);
                      uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                      uVar12 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar43 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar111._32_32_ = auVar75._32_32_;
                      auVar111._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])((int)(uVar18 + uVar49) + lVar20)
                                            );
                      auVar112[1] = ((byte)(uVar12 >> 1) & 1) * auVar111[1];
                      auVar112[0] = ((byte)uVar8 & 1) * auVar111[0];
                      auVar112[2] = ((byte)(uVar12 >> 2) & 1) * auVar111[2];
                      auVar112[3] = ((byte)(uVar12 >> 3) & 1) * auVar111[3];
                      auVar112[4] = ((byte)(uVar12 >> 4) & 1) * auVar111[4];
                      auVar112[5] = ((byte)(uVar12 >> 5) & 1) * auVar111[5];
                      auVar112[6] = ((byte)(uVar12 >> 6) & 1) * auVar111[6];
                      auVar112[7] = ((byte)(uVar12 >> 7) & 1) * auVar111[7];
                      auVar112[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar111[8];
                      auVar112[9] = ((byte)(uVar12 >> 9) & 1) * auVar111[9];
                      auVar112[10] = ((byte)(uVar12 >> 10) & 1) * auVar111[10];
                      auVar112[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar111[0xb];
                      auVar112[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar111[0xc];
                      auVar112[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar111[0xd];
                      auVar112[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar111[0xe];
                      auVar112[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar111[0xf];
                      auVar112[0x10] = ((byte)uVar43 & 1) * auVar111[0x10];
                      auVar112[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar111[0x11];
                      auVar112[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar111[0x12];
                      auVar112[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar111[0x13];
                      auVar112[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar111[0x14];
                      auVar112[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar111[0x15];
                      auVar112[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar111[0x16];
                      auVar112[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar111[0x17];
                      bVar6 = (byte)(uVar43 >> 8);
                      auVar112[0x18] = (bVar6 & 1) * auVar111[0x18];
                      auVar112[0x19] = (bVar6 >> 1 & 1) * auVar111[0x19];
                      auVar112[0x1a] = (bVar6 >> 2 & 1) * auVar111[0x1a];
                      auVar112[0x1b] = (bVar6 >> 3 & 1) * auVar111[0x1b];
                      auVar112[0x1c] = (bVar6 >> 4 & 1) * auVar111[0x1c];
                      auVar112._30_34_ = auVar111._30_34_;
                      auVar112[0x1d] = (bVar6 >> 5 & 1) * auVar111[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar112._0_32_);
                      *(undefined1 (*) [32])
                       (param_3 + (longlong)(int)uVar49 + (longlong)(int)(param_5 + uVar18)) =
                           auVar71;
                      uVar49 = uVar49 + 0x20;
                      uVar43 = in_K2;
                    } while (uVar49 < uVar9 - uVar18);
                  }
                }
                else {
                  if (uVar9 < 0xeb) {
                    uVar43 = 0;
                    uVar18 = uVar51;
LAB_140ac9f45:
                    if (uVar43 + 0x40 <= uVar18) {
                      uVar50 = (ulonglong)(int)uVar43;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar20));
                        *(undefined1 (*) [64])(pbVar2 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                    }
                    goto LAB_140ac9f77;
                  }
                  uVar43 = uVar57;
                  if (((ulonglong)pbVar2 & 0x3f) != 0) {
                    uVar43 = uVar60;
                  }
                  uVar18 = uVar9 - (uVar9 - uVar43 & 0x3f);
                  if (uVar43 == 0) goto LAB_140ac9f45;
                  uVar50 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar49 = in_K2;
                  do {
                    vpcmpud_avx512f(auVar75,auVar73,1);
                    uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                    uVar12 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar49 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar109._32_32_ = auVar75._32_32_;
                    auVar109._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar20));
                    auVar110[1] = ((byte)(uVar12 >> 1) & 1) * auVar109[1];
                    auVar110[0] = ((byte)uVar8 & 1) * auVar109[0];
                    auVar110[2] = ((byte)(uVar12 >> 2) & 1) * auVar109[2];
                    auVar110[3] = ((byte)(uVar12 >> 3) & 1) * auVar109[3];
                    auVar110[4] = ((byte)(uVar12 >> 4) & 1) * auVar109[4];
                    auVar110[5] = ((byte)(uVar12 >> 5) & 1) * auVar109[5];
                    auVar110[6] = ((byte)(uVar12 >> 6) & 1) * auVar109[6];
                    auVar110[7] = ((byte)(uVar12 >> 7) & 1) * auVar109[7];
                    auVar110[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar109[8];
                    auVar110[9] = ((byte)(uVar12 >> 9) & 1) * auVar109[9];
                    auVar110[10] = ((byte)(uVar12 >> 10) & 1) * auVar109[10];
                    auVar110[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar109[0xb];
                    auVar110[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar109[0xc];
                    auVar110[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar109[0xd];
                    auVar110[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar109[0xe];
                    auVar110[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar109[0xf];
                    auVar110[0x10] = ((byte)uVar49 & 1) * auVar109[0x10];
                    auVar110[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar109[0x11];
                    auVar110[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar109[0x12];
                    auVar110[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar109[0x13];
                    auVar110[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar109[0x14];
                    auVar110[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar109[0x15];
                    auVar110[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar109[0x16];
                    auVar110[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar109[0x17];
                    bVar6 = (byte)(uVar49 >> 8);
                    auVar110[0x18] = (bVar6 & 1) * auVar109[0x18];
                    auVar110[0x19] = (bVar6 >> 1 & 1) * auVar109[0x19];
                    auVar110[0x1a] = (bVar6 >> 2 & 1) * auVar109[0x1a];
                    auVar110[0x1b] = (bVar6 >> 3 & 1) * auVar109[0x1b];
                    auVar110[0x1c] = (bVar6 >> 4 & 1) * auVar109[0x1c];
                    auVar110._30_34_ = auVar109._30_34_;
                    auVar110[0x1d] = (bVar6 >> 5 & 1) * auVar109[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar110._0_32_);
                    *(undefined1 (*) [32])(pbVar2 + uVar50) = auVar71;
                    uVar50 = uVar50 + 0x20;
                    uVar49 = in_K2;
                  } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                  if (uVar9 != uVar43) goto LAB_140ac9f45;
                }
              }
              lVar20 = (longlong)(int)uVar17;
              if (2 < iVar40) {
                if (uVar64 == 0) {
                  if (-1 < (int)uVar52) {
                    iVar40 = 1;
                    lVar30 = 0;
                    if (uVar26 != 0) {
                      lVar45 = lVar54 * uVar36 + param_1 + uVar62;
                      uVar50 = 0;
                      do {
                        uVar23 = uVar50;
                        pbVar2[lVar30 + -1] = *(byte *)(lVar45 + uVar23 * 2);
                        uVar50 = uVar23 + 1;
                        pbVar2[lVar30 + -2] = *(byte *)(lVar45 + 1 + uVar23 * 2);
                        lVar30 = lVar30 + -2;
                      } while (uVar50 < uVar29);
                      iVar40 = (int)uVar23 + 2 + (int)uVar50;
                    }
                    if (iVar40 - 1U < param_5) {
                      pbVar2[-(longlong)iVar40] =
                           *(byte *)((longlong)iVar40 + -1 + lVar54 * uVar36 + param_1 + uVar62);
                    }
                  }
                }
                else {
                  lVar30 = lVar54 * uVar36;
                  if (-1 < (int)uVar52) {
                    if (6 < (int)param_5) {
                      pbVar63 = param_3 + ((lVar44 + -1) - (param_1 + -1 + lVar30));
                      lVar45 = param_1 + lVar30;
                      if ((lVar44 < (longlong)pbVar63) ||
                         ((byte *)-lVar44 != pbVar63 && lVar44 <= -(longlong)pbVar63)) {
                        if ((int)uVar53 < 0x40) {
                          uVar18 = 0;
                        }
                        else {
                          if ((int)uVar53 < 0xeb) {
                            uVar43 = 0;
                            uVar18 = uVar48;
                          }
                          else {
                            uVar43 = uVar33;
                            if (((ulonglong)param_3 & 0x3f) != 0) {
                              uVar43 = uVar11;
                            }
                            uVar18 = uVar53 - (uVar53 - uVar43 & 0x3f);
                            if (uVar43 != 0) {
                              uVar50 = 0;
                              auVar73 = vpbroadcastd_avx512f();
                              auVar75 = auVar16;
                              auVar74 = auVar15;
                              uVar49 = in_K2;
                              do {
                                vpcmpgtd_avx512f(auVar73,auVar75);
                                uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                                uVar12 = (uint)uVar8;
                                auVar74 = vpaddd_avx512f(auVar74,auVar14);
                                in_K2 = uVar49 << 0x10;
                                auVar75 = vpaddd_avx512f(auVar75,auVar14);
                                auVar113._32_32_ = auVar75._32_32_;
                                auVar113._0_32_ =
                                     vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                        (uVar50 + (lVar45 - lVar44)));
                                auVar114[1] = ((byte)(uVar12 >> 1) & 1) * auVar113[1];
                                auVar114[0] = ((byte)uVar8 & 1) * auVar113[0];
                                auVar114[2] = ((byte)(uVar12 >> 2) & 1) * auVar113[2];
                                auVar114[3] = ((byte)(uVar12 >> 3) & 1) * auVar113[3];
                                auVar114[4] = ((byte)(uVar12 >> 4) & 1) * auVar113[4];
                                auVar114[5] = ((byte)(uVar12 >> 5) & 1) * auVar113[5];
                                auVar114[6] = ((byte)(uVar12 >> 6) & 1) * auVar113[6];
                                auVar114[7] = ((byte)(uVar12 >> 7) & 1) * auVar113[7];
                                auVar114[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar113[8];
                                auVar114[9] = ((byte)(uVar12 >> 9) & 1) * auVar113[9];
                                auVar114[10] = ((byte)(uVar12 >> 10) & 1) * auVar113[10];
                                auVar114[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar113[0xb];
                                auVar114[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar113[0xc];
                                auVar114[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar113[0xd];
                                auVar114[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar113[0xe];
                                auVar114[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar113[0xf];
                                auVar114[0x10] = ((byte)uVar49 & 1) * auVar113[0x10];
                                auVar114[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar113[0x11];
                                auVar114[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar113[0x12];
                                auVar114[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar113[0x13];
                                auVar114[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar113[0x14];
                                auVar114[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar113[0x15];
                                auVar114[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar113[0x16];
                                auVar114[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar113[0x17];
                                bVar6 = (byte)(uVar49 >> 8);
                                auVar114[0x18] = (bVar6 & 1) * auVar113[0x18];
                                auVar114[0x19] = (bVar6 >> 1 & 1) * auVar113[0x19];
                                auVar114[0x1a] = (bVar6 >> 2 & 1) * auVar113[0x1a];
                                auVar114[0x1b] = (bVar6 >> 3 & 1) * auVar113[0x1b];
                                auVar114[0x1c] = (bVar6 >> 4 & 1) * auVar113[0x1c];
                                auVar114._30_34_ = auVar113._30_34_;
                                auVar114[0x1d] = (bVar6 >> 5 & 1) * auVar113[0x1d];
                                auVar71 = vmovdqu8_avx512vl(auVar114._0_32_);
                                *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                                uVar50 = uVar50 + 0x20;
                                uVar49 = in_K2;
                              } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                              if (uVar43 == uVar53) goto LAB_140aca454;
                            }
                          }
                          if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                            uVar50 = (ulonglong)(int)uVar43;
                            do {
                              auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])
                                                           (uVar50 + (lVar45 - lVar44)));
                              *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                              uVar50 = uVar50 + 0x40;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          }
                        }
                        if (uVar18 + 1 <= uVar53) {
                          lVar30 = (longlong)(int)uVar18;
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar18 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar43 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar18 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar115._32_32_ = auVar75._32_32_;
                            auVar115._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                                    (uVar50 + (lVar45 - lVar44) + lVar30));
                            auVar116[1] = ((byte)(uVar43 >> 1) & 1) * auVar115[1];
                            auVar116[0] = ((byte)uVar8 & 1) * auVar115[0];
                            auVar116[2] = ((byte)(uVar43 >> 2) & 1) * auVar115[2];
                            auVar116[3] = ((byte)(uVar43 >> 3) & 1) * auVar115[3];
                            auVar116[4] = ((byte)(uVar43 >> 4) & 1) * auVar115[4];
                            auVar116[5] = ((byte)(uVar43 >> 5) & 1) * auVar115[5];
                            auVar116[6] = ((byte)(uVar43 >> 6) & 1) * auVar115[6];
                            auVar116[7] = ((byte)(uVar43 >> 7) & 1) * auVar115[7];
                            auVar116[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar115[8];
                            auVar116[9] = ((byte)(uVar43 >> 9) & 1) * auVar115[9];
                            auVar116[10] = ((byte)(uVar43 >> 10) & 1) * auVar115[10];
                            auVar116[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar115[0xb];
                            auVar116[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar115[0xc];
                            auVar116[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar115[0xd];
                            auVar116[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar115[0xe];
                            auVar116[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar115[0xf];
                            auVar116[0x10] = ((byte)uVar18 & 1) * auVar115[0x10];
                            auVar116[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar115[0x11];
                            auVar116[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar115[0x12];
                            auVar116[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar115[0x13];
                            auVar116[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar115[0x14];
                            auVar116[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar115[0x15];
                            auVar116[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar115[0x16];
                            auVar116[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar115[0x17];
                            bVar6 = (byte)(uVar18 >> 8);
                            auVar116[0x18] = (bVar6 & 1) * auVar115[0x18];
                            auVar116[0x19] = (bVar6 >> 1 & 1) * auVar115[0x19];
                            auVar116[0x1a] = (bVar6 >> 2 & 1) * auVar115[0x1a];
                            auVar116[0x1b] = (bVar6 >> 3 & 1) * auVar115[0x1b];
                            auVar116[0x1c] = (bVar6 >> 4 & 1) * auVar115[0x1c];
                            auVar116._30_34_ = auVar115._30_34_;
                            auVar116[0x1d] = (bVar6 >> 5 & 1) * auVar115[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar116._0_32_);
                            *(undefined1 (*) [32])(param_3 + uVar50 + lVar30) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar18 = in_K2;
                          } while (uVar50 < (ulonglong)(lVar55 - lVar30));
                        }
                        goto LAB_140aca454;
                      }
                    }
                    iVar40 = 1;
                    lVar45 = 0;
                    if (uVar26 != 0) {
                      uVar50 = 0;
                      do {
                        uVar23 = uVar50;
                        uVar50 = uVar23 + 1;
                        pbVar2[lVar45 + -1] = *(byte *)(lVar45 + -1 + param_1 + lVar30);
                        pbVar2[lVar45 + -2] = *(byte *)(lVar45 + -2 + param_1 + lVar30);
                        lVar45 = lVar45 + -2;
                      } while (uVar50 < uVar29);
                      iVar40 = (int)uVar23 + 2 + (int)uVar50;
                    }
                    if (iVar40 - 1U < param_5) {
                      pbVar2[-(longlong)iVar40] = *(byte *)((param_1 + lVar30) - (longlong)iVar40);
                    }
                  }
                }
LAB_140aca454:
                lVar45 = lVar54 * uVar36;
                lVar30 = lVar45 + lVar3;
                param_3[lVar20] = *(byte *)(lVar30 + -2);
                param_3[lVar20 + 1] = *(byte *)(lVar30 + -1);
                iVar40 = uVar17 + 2;
                lVar20 = (longlong)iVar40;
                iVar41 = iVar40;
                if (uVar66 == 0) {
                  if (0 < (int)uVar1) {
                    iVar27 = 1;
                    lVar30 = 0;
                    if (uVar65 != 0) {
                      lVar22 = lVar45 + (lVar3 - uVar62);
                      uVar50 = 0;
                      do {
                        uVar23 = uVar50;
                        param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + -1 + lVar22);
                        lVar4 = lVar30 + -2;
                        lVar30 = lVar30 + -2;
                        param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar4 + lVar22);
                        uVar50 = uVar23 + 1;
                      } while (uVar50 < uVar69);
                      iVar41 = (int)uVar50 * 2 + 2 + uVar17;
                      iVar27 = (int)uVar23 + 2 + (int)uVar50;
                    }
                    if (uVar1 <= iVar27 - 1U) goto LAB_140aca749;
                    param_3[(longlong)iVar27 + -1 + lVar20] =
                         *(byte *)((lVar45 + (lVar3 - uVar62)) - (longlong)iVar27);
                    lVar20 = (longlong)(iVar27 + iVar40);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140aca74c;
                  if (6 < (int)uVar1) {
                    pbVar63 = param_3 + lVar20;
                    if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                       (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                      if ((int)uVar1 < 0x40) {
                        uVar18 = 0;
LAB_140aca637:
                        if (uVar18 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar18;
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar18 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar43 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar18 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar119._32_32_ = auVar75._32_32_;
                            auVar119._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20))
                            ;
                            auVar120[1] = ((byte)(uVar43 >> 1) & 1) * auVar119[1];
                            auVar120[0] = ((byte)uVar8 & 1) * auVar119[0];
                            auVar120[2] = ((byte)(uVar43 >> 2) & 1) * auVar119[2];
                            auVar120[3] = ((byte)(uVar43 >> 3) & 1) * auVar119[3];
                            auVar120[4] = ((byte)(uVar43 >> 4) & 1) * auVar119[4];
                            auVar120[5] = ((byte)(uVar43 >> 5) & 1) * auVar119[5];
                            auVar120[6] = ((byte)(uVar43 >> 6) & 1) * auVar119[6];
                            auVar120[7] = ((byte)(uVar43 >> 7) & 1) * auVar119[7];
                            auVar120[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar119[8];
                            auVar120[9] = ((byte)(uVar43 >> 9) & 1) * auVar119[9];
                            auVar120[10] = ((byte)(uVar43 >> 10) & 1) * auVar119[10];
                            auVar120[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar119[0xb];
                            auVar120[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar119[0xc];
                            auVar120[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar119[0xd];
                            auVar120[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar119[0xe];
                            auVar120[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar119[0xf];
                            auVar120[0x10] = ((byte)uVar18 & 1) * auVar119[0x10];
                            auVar120[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar119[0x11];
                            auVar120[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar119[0x12];
                            auVar120[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar119[0x13];
                            auVar120[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar119[0x14];
                            auVar120[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar119[0x15];
                            auVar120[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar119[0x16];
                            auVar120[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar119[0x17];
                            bVar6 = (byte)(uVar18 >> 8);
                            auVar120[0x18] = (bVar6 & 1) * auVar119[0x18];
                            auVar120[0x19] = (bVar6 >> 1 & 1) * auVar119[0x19];
                            auVar120[0x1a] = (bVar6 >> 2 & 1) * auVar119[0x1a];
                            auVar120[0x1b] = (bVar6 >> 3 & 1) * auVar119[0x1b];
                            auVar120[0x1c] = (bVar6 >> 4 & 1) * auVar119[0x1c];
                            auVar120._30_34_ = auVar119._30_34_;
                            auVar120[0x1d] = (bVar6 >> 5 & 1) * auVar119[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar120._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar18 = in_K2;
                          } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                        }
                      }
                      else {
                        if ((int)uVar1 < 0xeb) {
                          uVar43 = 0;
                          uVar18 = uVar58;
LAB_140aca603:
                          if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                            uVar50 = (ulonglong)(int)uVar43;
                            do {
                              auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                              *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                              uVar50 = uVar50 + 0x40;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          }
                          goto LAB_140aca637;
                        }
                        uVar43 = (uint)pbVar63 & 0x3f;
                        if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                           (uVar43 = 0x40 - uVar43, (int)uVar1 < (int)uVar43)) {
                          uVar43 = uVar1;
                        }
                        uVar18 = uVar1 - (uVar1 - uVar43 & 0x3f);
                        if (uVar43 == 0) goto LAB_140aca603;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar49 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar12 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar49 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar117._32_32_ = auVar75._32_32_;
                          auVar117._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                          auVar118[1] = ((byte)(uVar12 >> 1) & 1) * auVar117[1];
                          auVar118[0] = ((byte)uVar8 & 1) * auVar117[0];
                          auVar118[2] = ((byte)(uVar12 >> 2) & 1) * auVar117[2];
                          auVar118[3] = ((byte)(uVar12 >> 3) & 1) * auVar117[3];
                          auVar118[4] = ((byte)(uVar12 >> 4) & 1) * auVar117[4];
                          auVar118[5] = ((byte)(uVar12 >> 5) & 1) * auVar117[5];
                          auVar118[6] = ((byte)(uVar12 >> 6) & 1) * auVar117[6];
                          auVar118[7] = ((byte)(uVar12 >> 7) & 1) * auVar117[7];
                          auVar118[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar117[8];
                          auVar118[9] = ((byte)(uVar12 >> 9) & 1) * auVar117[9];
                          auVar118[10] = ((byte)(uVar12 >> 10) & 1) * auVar117[10];
                          auVar118[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar117[0xb];
                          auVar118[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar117[0xc];
                          auVar118[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar117[0xd];
                          auVar118[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar117[0xe];
                          auVar118[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar117[0xf];
                          auVar118[0x10] = ((byte)uVar49 & 1) * auVar117[0x10];
                          auVar118[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar117[0x11];
                          auVar118[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar117[0x12];
                          auVar118[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar117[0x13];
                          auVar118[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar117[0x14];
                          auVar118[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar117[0x15];
                          auVar118[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar117[0x16];
                          auVar118[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar117[0x17];
                          bVar6 = (byte)(uVar49 >> 8);
                          auVar118[0x18] = (bVar6 & 1) * auVar117[0x18];
                          auVar118[0x19] = (bVar6 >> 1 & 1) * auVar117[0x19];
                          auVar118[0x1a] = (bVar6 >> 2 & 1) * auVar117[0x1a];
                          auVar118[0x1b] = (bVar6 >> 3 & 1) * auVar117[0x1b];
                          auVar118[0x1c] = (bVar6 >> 4 & 1) * auVar117[0x1c];
                          auVar118._30_34_ = auVar117._30_34_;
                          auVar118[0x1d] = (bVar6 >> 5 & 1) * auVar117[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar118._0_32_);
                          *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar49 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                        if (uVar1 != uVar43) goto LAB_140aca603;
                      }
                      lVar20 = (longlong)(int)(iVar47 + 4 + uVar17);
                      goto LAB_140aca74c;
                    }
                  }
                  iVar27 = 1;
                  uVar50 = 0;
                  if (uVar65 != 0) {
                    do {
                      uVar23 = uVar50;
                      param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                      param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                    } while (uVar50 < uVar69);
                    iVar41 = (int)uVar50 * 2 + 2 + uVar17;
                    iVar27 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar27 - 1U < uVar1) {
                    param_3[(longlong)iVar27 + -1 + lVar20] =
                         *(byte *)((longlong)iVar27 + -1 + lVar30);
                    lVar20 = (longlong)(iVar27 + iVar40);
                  }
                  else {
LAB_140aca749:
                    lVar20 = (longlong)iVar41;
                  }
                }
LAB_140aca74c:
                lStack_48 = lVar20 - lVar28;
                goto LAB_140ac9ae0;
              }
            }
            uVar50 = (ulonglong)uVar52;
            if (uVar64 == 0) {
              uVar17 = uVar52;
              if (uVar66 == 0) {
                while (-1 < (int)uVar17) {
                  uVar17 = 0;
                  if ((int)(uint)(1 < iVar40) < iVar40) {
                    uVar23 = (ulonglong)(int)uVar50;
                    uVar50 = uVar23;
                    do {
                      if ((int)uVar50 < 0) break;
                      lVar20 = (longlong)(int)uVar17;
                      uVar17 = uVar17 + 1;
                      uVar50 = (ulonglong)((int)uVar50 - 1);
                      param_3[uVar23 - lVar20] = param_3[lVar20 + uVar62 + 1 + uVar23];
                    } while (uVar17 < uVar56);
                  }
                  uVar17 = (uint)uVar50;
                }
                uVar50 = 0;
                iVar40 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                iVar41 = iVar24;
                iVar27 = iVar24;
                lStack_48 = lVar44;
                if ((int)param_5 < 2) {
                  do {
                    iVar42 = iVar40 + iVar41;
                    pbVar2[uVar50 + uVar37] = param_3[iVar40];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar42) || (iVar42 < (int)param_5)) {
                      iVar40 = iVar41 + iVar27;
                      iVar41 = -iVar41;
                      iVar42 = iVar42 - iVar40;
                      iVar27 = -iVar27;
                    }
                    uVar50 = uVar50 + 1;
                    iVar40 = iVar42;
                  } while (uVar50 < -lVar44 + 2U);
                  uVar38 = uVar38 & 0xffffffff;
                }
              }
              else {
                if (-1 < (int)uVar52) {
                  iVar40 = 1;
                  lVar30 = 0;
                  if (uVar26 != 0) {
                    lVar45 = lVar54 * uVar36 + param_1;
                    uVar50 = 0;
                    do {
                      uVar23 = uVar50;
                      pbVar2[lVar30 + -1] = *(byte *)(lVar45 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                      pbVar2[lVar30 + -2] = *(byte *)(lVar45 + 2 + uVar23 * 2);
                      lVar30 = lVar30 + -2;
                    } while (uVar50 < uVar29);
                    iVar40 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar40 - 1U < param_5) {
                    pbVar2[-(longlong)iVar40] = *(byte *)(param_1 + iVar40 + lVar54 * uVar36);
                  }
                }
LAB_140acaa09:
                lStack_48 = lVar44;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar63 = param_3 + lVar20;
                    lVar30 = lVar54 * uVar36 + lVar3;
                    if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                       (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                      if ((int)uVar1 < 0x40) {
                        uVar17 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xeb) {
                          uVar18 = 0;
                          uVar17 = uVar58;
                        }
                        else {
                          uVar18 = (uint)pbVar63 & 0x3f;
                          if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                             (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                            uVar18 = uVar1;
                          }
                          uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                          if (uVar18 != 0) {
                            uVar50 = 0;
                            auVar73 = vpbroadcastd_avx512f();
                            auVar75 = auVar16;
                            auVar74 = auVar15;
                            uVar43 = in_K2;
                            do {
                              vpcmpgtd_avx512f(auVar73,auVar75);
                              uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                              uVar49 = (uint)uVar8;
                              auVar74 = vpaddd_avx512f(auVar74,auVar14);
                              in_K2 = uVar43 << 0x10;
                              auVar75 = vpaddd_avx512f(auVar75,auVar14);
                              auVar121._32_32_ = auVar75._32_32_;
                              auVar121._0_32_ =
                                   vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                              auVar122[1] = ((byte)(uVar49 >> 1) & 1) * auVar121[1];
                              auVar122[0] = ((byte)uVar8 & 1) * auVar121[0];
                              auVar122[2] = ((byte)(uVar49 >> 2) & 1) * auVar121[2];
                              auVar122[3] = ((byte)(uVar49 >> 3) & 1) * auVar121[3];
                              auVar122[4] = ((byte)(uVar49 >> 4) & 1) * auVar121[4];
                              auVar122[5] = ((byte)(uVar49 >> 5) & 1) * auVar121[5];
                              auVar122[6] = ((byte)(uVar49 >> 6) & 1) * auVar121[6];
                              auVar122[7] = ((byte)(uVar49 >> 7) & 1) * auVar121[7];
                              auVar122[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar121[8];
                              auVar122[9] = ((byte)(uVar49 >> 9) & 1) * auVar121[9];
                              auVar122[10] = ((byte)(uVar49 >> 10) & 1) * auVar121[10];
                              auVar122[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar121[0xb];
                              auVar122[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar121[0xc];
                              auVar122[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar121[0xd];
                              auVar122[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar121[0xe];
                              auVar122[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar121[0xf];
                              auVar122[0x10] = ((byte)uVar43 & 1) * auVar121[0x10];
                              auVar122[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar121[0x11];
                              auVar122[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar121[0x12];
                              auVar122[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar121[0x13];
                              auVar122[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar121[0x14];
                              auVar122[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar121[0x15];
                              auVar122[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar121[0x16];
                              auVar122[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar121[0x17];
                              bVar6 = (byte)(uVar43 >> 8);
                              auVar122[0x18] = (bVar6 & 1) * auVar121[0x18];
                              auVar122[0x19] = (bVar6 >> 1 & 1) * auVar121[0x19];
                              auVar122[0x1a] = (bVar6 >> 2 & 1) * auVar121[0x1a];
                              auVar122[0x1b] = (bVar6 >> 3 & 1) * auVar121[0x1b];
                              auVar122[0x1c] = (bVar6 >> 4 & 1) * auVar121[0x1c];
                              auVar122._30_34_ = auVar121._30_34_;
                              auVar122[0x1d] = (bVar6 >> 5 & 1) * auVar121[0x1d];
                              auVar71 = vmovdqu8_avx512vl(auVar122._0_32_);
                              *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                              uVar50 = uVar50 + 0x20;
                              uVar43 = in_K2;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                            if (uVar1 == uVar18) goto LAB_140ac9ae0;
                          }
                        }
                        if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                          uVar50 = (ulonglong)(int)uVar18;
                          do {
                            auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                            *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                            uVar50 = uVar50 + 0x40;
                          } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                        }
                      }
                      if (uVar17 + 1 <= uVar1) {
                        lVar20 = (longlong)(int)uVar17;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar17 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar18 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar17 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar123._32_32_ = auVar75._32_32_;
                          auVar123._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20));
                          auVar124[1] = ((byte)(uVar18 >> 1) & 1) * auVar123[1];
                          auVar124[0] = ((byte)uVar8 & 1) * auVar123[0];
                          auVar124[2] = ((byte)(uVar18 >> 2) & 1) * auVar123[2];
                          auVar124[3] = ((byte)(uVar18 >> 3) & 1) * auVar123[3];
                          auVar124[4] = ((byte)(uVar18 >> 4) & 1) * auVar123[4];
                          auVar124[5] = ((byte)(uVar18 >> 5) & 1) * auVar123[5];
                          auVar124[6] = ((byte)(uVar18 >> 6) & 1) * auVar123[6];
                          auVar124[7] = ((byte)(uVar18 >> 7) & 1) * auVar123[7];
                          auVar124[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar123[8];
                          auVar124[9] = ((byte)(uVar18 >> 9) & 1) * auVar123[9];
                          auVar124[10] = ((byte)(uVar18 >> 10) & 1) * auVar123[10];
                          auVar124[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar123[0xb];
                          auVar124[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar123[0xc];
                          auVar124[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar123[0xd];
                          auVar124[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar123[0xe];
                          auVar124[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar123[0xf];
                          auVar124[0x10] = ((byte)uVar17 & 1) * auVar123[0x10];
                          auVar124[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar123[0x11];
                          auVar124[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar123[0x12];
                          auVar124[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar123[0x13];
                          auVar124[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar123[0x14];
                          auVar124[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar123[0x15];
                          auVar124[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar123[0x16];
                          auVar124[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar123[0x17];
                          bVar6 = (byte)(uVar17 >> 8);
                          auVar124[0x18] = (bVar6 & 1) * auVar123[0x18];
                          auVar124[0x19] = (bVar6 >> 1 & 1) * auVar123[0x19];
                          auVar124[0x1a] = (bVar6 >> 2 & 1) * auVar123[0x1a];
                          auVar124[0x1b] = (bVar6 >> 3 & 1) * auVar123[0x1b];
                          auVar124[0x1c] = (bVar6 >> 4 & 1) * auVar123[0x1c];
                          auVar124._30_34_ = auVar123._30_34_;
                          auVar124[0x1d] = (bVar6 >> 5 & 1) * auVar123[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar124._0_32_);
                          *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar17 = in_K2;
                        } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                      }
                      goto LAB_140ac9ae0;
                    }
                  }
                  iVar40 = 1;
                  if (uVar65 != 0) {
                    lVar30 = lVar54 * uVar36 + lVar3;
                    uVar50 = 0;
                    do {
                      uVar23 = uVar50;
                      param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                      param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                    } while (uVar50 < uVar69);
                    iVar40 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar40 - 1U < uVar1) {
                    param_3[(longlong)iVar40 + -1 + lVar20] =
                         *(byte *)(lVar3 + iVar40 + -1 + lVar54 * uVar36);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar52) {
                do {
                  uVar17 = 0;
                  if ((int)(uint)(1 < iVar40) < iVar40) {
                    iVar41 = (int)uVar50;
                    do {
                      if ((int)uVar50 < 0) break;
                      lVar30 = (longlong)(int)uVar17;
                      uVar17 = uVar17 + 1;
                      uVar50 = (ulonglong)((int)uVar50 - 1);
                      param_3[iVar41 - lVar30] =
                           *(byte *)(((longlong)iVar41 + lVar54 * uVar36 + lVar34) - lVar30);
                    } while (uVar17 < uVar56);
                  }
                } while (-1 < (int)uVar50);
              }
              if (uVar66 != 0) goto LAB_140acaa09;
              lStack_48 = lVar44;
              if (0 < (int)uVar1) {
                iVar40 = 1;
                lVar30 = 0;
                if (uVar65 != 0) {
                  lVar45 = lVar54 * uVar36 + lVar3;
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + -2 + lVar45);
                    lVar22 = lVar30 + -3;
                    lVar30 = lVar30 + -2;
                    param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar22 + lVar45);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar69);
                  iVar40 = (int)uVar23 + 2 + (int)uVar50;
                }
                if (iVar40 - 1U < uVar1) {
                  param_3[(longlong)iVar40 + -1 + lVar20] =
                       *(byte *)((lVar3 - iVar40) + -1 + lVar54 * uVar36);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar17 = 0;
            uVar18 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar30 = lVar54 * uVar36;
                lVar20 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar30);
                if ((lVar44 <= lVar20) || (lVar44 <= -lVar20)) {
                  uVar18 = param_5;
                  if ((int)param_5 < 0x40) {
                    uVar17 = 0;
                  }
                  else {
                    if ((int)param_5 < 0xeb) {
                      uVar43 = 0;
                      uVar17 = uVar46;
                    }
                    else {
                      uVar43 = uVar33;
                      if (((ulonglong)param_3 & 0x3f) != 0) {
                        uVar43 = uVar68;
                      }
                      uVar17 = param_5 - (param_5 - uVar43 & 0x3f);
                      if (uVar43 != 0) {
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar49 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar12 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar49 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar76._32_32_ = auVar75._32_32_;
                          auVar76._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar34));
                          auVar77[1] = ((byte)(uVar12 >> 1) & 1) * auVar76[1];
                          auVar77[0] = ((byte)uVar8 & 1) * auVar76[0];
                          auVar77[2] = ((byte)(uVar12 >> 2) & 1) * auVar76[2];
                          auVar77[3] = ((byte)(uVar12 >> 3) & 1) * auVar76[3];
                          auVar77[4] = ((byte)(uVar12 >> 4) & 1) * auVar76[4];
                          auVar77[5] = ((byte)(uVar12 >> 5) & 1) * auVar76[5];
                          auVar77[6] = ((byte)(uVar12 >> 6) & 1) * auVar76[6];
                          auVar77[7] = ((byte)(uVar12 >> 7) & 1) * auVar76[7];
                          auVar77[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar76[8];
                          auVar77[9] = ((byte)(uVar12 >> 9) & 1) * auVar76[9];
                          auVar77[10] = ((byte)(uVar12 >> 10) & 1) * auVar76[10];
                          auVar77[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar76[0xb];
                          auVar77[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar76[0xc];
                          auVar77[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar76[0xd];
                          auVar77[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar76[0xe];
                          auVar77[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar76[0xf];
                          auVar77[0x10] = ((byte)uVar49 & 1) * auVar76[0x10];
                          auVar77[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar76[0x11];
                          auVar77[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar76[0x12];
                          auVar77[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar76[0x13];
                          auVar77[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar76[0x14];
                          auVar77[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar76[0x15];
                          auVar77[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar76[0x16];
                          auVar77[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar76[0x17];
                          bVar6 = (byte)(uVar49 >> 8);
                          auVar77[0x18] = (bVar6 & 1) * auVar76[0x18];
                          auVar77[0x19] = (bVar6 >> 1 & 1) * auVar76[0x19];
                          auVar77[0x1a] = (bVar6 >> 2 & 1) * auVar76[0x1a];
                          auVar77[0x1b] = (bVar6 >> 3 & 1) * auVar76[0x1b];
                          auVar77[0x1c] = (bVar6 >> 4 & 1) * auVar76[0x1c];
                          auVar77._30_34_ = auVar76._30_34_;
                          auVar77[0x1d] = (bVar6 >> 5 & 1) * auVar76[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar77._0_32_);
                          *(undefined1 (*) [32])(param_3 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar49 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                        if (uVar43 == param_5) goto LAB_140ac8856;
                      }
                    }
                    if ((int)(uVar43 + 0x40) <= (int)uVar17) {
                      uVar50 = (ulonglong)(int)uVar43;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30 + lVar34)
                                                   );
                        *(undefined1 (*) [64])(param_3 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                  }
                  if (uVar17 + 1 <= param_5) {
                    lVar20 = (longlong)(int)uVar17;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar17 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar43 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar17 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar78._32_32_ = auVar75._32_32_;
                      auVar78._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])
                                              (uVar50 + lVar30 + lVar34 + lVar20));
                      auVar79[1] = ((byte)(uVar43 >> 1) & 1) * auVar78[1];
                      auVar79[0] = ((byte)uVar8 & 1) * auVar78[0];
                      auVar79[2] = ((byte)(uVar43 >> 2) & 1) * auVar78[2];
                      auVar79[3] = ((byte)(uVar43 >> 3) & 1) * auVar78[3];
                      auVar79[4] = ((byte)(uVar43 >> 4) & 1) * auVar78[4];
                      auVar79[5] = ((byte)(uVar43 >> 5) & 1) * auVar78[5];
                      auVar79[6] = ((byte)(uVar43 >> 6) & 1) * auVar78[6];
                      auVar79[7] = ((byte)(uVar43 >> 7) & 1) * auVar78[7];
                      auVar79[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar78[8];
                      auVar79[9] = ((byte)(uVar43 >> 9) & 1) * auVar78[9];
                      auVar79[10] = ((byte)(uVar43 >> 10) & 1) * auVar78[10];
                      auVar79[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar78[0xb];
                      auVar79[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar78[0xc];
                      auVar79[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar78[0xd];
                      auVar79[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar78[0xe];
                      auVar79[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar78[0xf];
                      auVar79[0x10] = ((byte)uVar17 & 1) * auVar78[0x10];
                      auVar79[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar78[0x11];
                      auVar79[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar78[0x12];
                      auVar79[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar78[0x13];
                      auVar79[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar78[0x14];
                      auVar79[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar78[0x15];
                      auVar79[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar78[0x16];
                      auVar79[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar78[0x17];
                      bVar6 = (byte)(uVar17 >> 8);
                      auVar79[0x18] = (bVar6 & 1) * auVar78[0x18];
                      auVar79[0x19] = (bVar6 >> 1 & 1) * auVar78[0x19];
                      auVar79[0x1a] = (bVar6 >> 2 & 1) * auVar78[0x1a];
                      auVar79[0x1b] = (bVar6 >> 3 & 1) * auVar78[0x1b];
                      auVar79[0x1c] = (bVar6 >> 4 & 1) * auVar78[0x1c];
                      auVar79._30_34_ = auVar78._30_34_;
                      auVar79[0x1d] = (bVar6 >> 5 & 1) * auVar78[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar79._0_32_);
                      *(undefined1 (*) [32])(param_3 + uVar50 + lVar20) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar17 = in_K2;
                    } while (uVar50 < (ulonglong)(lVar44 - lVar20));
                  }
                  goto LAB_140ac8856;
                }
              }
              uVar43 = 1;
              if (uVar26 != 0) {
                lVar20 = lVar54 * uVar36 + lVar34;
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  param_3[uVar23 * 2] = *(byte *)(lVar20 + uVar23 * 2);
                  param_3[uVar23 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar23 * 2);
                  uVar50 = uVar23 + 1;
                } while (uVar50 < uVar29);
                uVar17 = (int)uVar50 * 2;
                uVar43 = (int)uVar23 + 2 + (int)uVar50;
              }
              uVar18 = uVar17;
              if (uVar43 - 1 < param_5) {
                param_3[(longlong)(int)uVar43 + -1] =
                     *(byte *)(lVar34 + (int)uVar43 + -1 + lVar54 * uVar36);
                uVar18 = uVar43;
              }
            }
LAB_140ac8856:
            lVar20 = (longlong)(int)uVar18;
            if (0 < iVar40) {
              if (uVar9 < 7) {
LAB_140ac8a0d:
                iVar41 = 1;
                uVar17 = uVar18;
                if (iVar59 != 0) {
                  lVar30 = lVar54 * uVar36 + param_1;
                  uVar50 = 0;
                  do {
                    uVar23 = uVar50;
                    param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                    param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                    uVar50 = uVar23 + 1;
                  } while (uVar50 < uVar10);
                  uVar17 = uVar18 + (int)uVar50 * 2;
                  iVar41 = (int)uVar23 + 2 + (int)uVar50;
                }
                if (iVar41 - 1U < uVar9) {
                  uVar17 = uVar18 + iVar41;
                  param_3[(longlong)iVar41 + -1 + lVar20] =
                       *(byte *)(param_1 + iVar41 + -1 + lVar54 * uVar36);
                }
              }
              else {
                pbVar63 = param_3 + lVar20;
                lVar30 = lVar54 * uVar36 + param_1;
                if (((longlong)pbVar63 - lVar30 < (longlong)uVar19) &&
                   (-((longlong)pbVar63 - lVar30) < (longlong)uVar19)) goto LAB_140ac8a0d;
                if (uVar9 < 0x40) {
                  uVar17 = 0;
LAB_140ac8977:
                  if (uVar17 + 1 <= uVar9) {
                    uVar49 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar43 = in_K2;
                    do {
                      vpcmpud_avx512f(auVar75,auVar73,1);
                      uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                      uVar12 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar43 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar82._32_32_ = auVar75._32_32_;
                      auVar82._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])((int)(uVar17 + uVar49) + lVar30)
                                            );
                      auVar83[1] = ((byte)(uVar12 >> 1) & 1) * auVar82[1];
                      auVar83[0] = ((byte)uVar8 & 1) * auVar82[0];
                      auVar83[2] = ((byte)(uVar12 >> 2) & 1) * auVar82[2];
                      auVar83[3] = ((byte)(uVar12 >> 3) & 1) * auVar82[3];
                      auVar83[4] = ((byte)(uVar12 >> 4) & 1) * auVar82[4];
                      auVar83[5] = ((byte)(uVar12 >> 5) & 1) * auVar82[5];
                      auVar83[6] = ((byte)(uVar12 >> 6) & 1) * auVar82[6];
                      auVar83[7] = ((byte)(uVar12 >> 7) & 1) * auVar82[7];
                      auVar83[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar82[8];
                      auVar83[9] = ((byte)(uVar12 >> 9) & 1) * auVar82[9];
                      auVar83[10] = ((byte)(uVar12 >> 10) & 1) * auVar82[10];
                      auVar83[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar82[0xb];
                      auVar83[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar82[0xc];
                      auVar83[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar82[0xd];
                      auVar83[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar82[0xe];
                      auVar83[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar82[0xf];
                      auVar83[0x10] = ((byte)uVar43 & 1) * auVar82[0x10];
                      auVar83[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar82[0x11];
                      auVar83[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar82[0x12];
                      auVar83[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar82[0x13];
                      auVar83[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar82[0x14];
                      auVar83[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar82[0x15];
                      auVar83[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar82[0x16];
                      auVar83[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar82[0x17];
                      bVar6 = (byte)(uVar43 >> 8);
                      auVar83[0x18] = (bVar6 & 1) * auVar82[0x18];
                      auVar83[0x19] = (bVar6 >> 1 & 1) * auVar82[0x19];
                      auVar83[0x1a] = (bVar6 >> 2 & 1) * auVar82[0x1a];
                      auVar83[0x1b] = (bVar6 >> 3 & 1) * auVar82[0x1b];
                      auVar83[0x1c] = (bVar6 >> 4 & 1) * auVar82[0x1c];
                      auVar83._30_34_ = auVar82._30_34_;
                      auVar83[0x1d] = (bVar6 >> 5 & 1) * auVar82[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar83._0_32_);
                      *(undefined1 (*) [32])
                       (param_3 + (longlong)(int)uVar49 + (longlong)(int)(uVar17 + uVar18)) =
                           auVar71;
                      uVar49 = uVar49 + 0x20;
                      uVar43 = in_K2;
                    } while (uVar49 < uVar9 - uVar17);
                  }
                }
                else {
                  if (uVar9 < 0xeb) {
                    uVar43 = 0;
                    uVar17 = uVar51;
LAB_140ac8950:
                    if (uVar43 + 0x40 <= uVar17) {
                      uVar50 = (ulonglong)(int)uVar43;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                        *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                    goto LAB_140ac8977;
                  }
                  uVar43 = (uint)pbVar63 & 0x3f;
                  if (((ulonglong)pbVar63 & 0x3f) == 0) {
                    uVar17 = uVar9 - (uVar9 & 0x3f);
                    goto LAB_140ac8950;
                  }
                  uVar43 = 0x40 - uVar43;
                  if (uVar9 < uVar43) {
                    uVar43 = uVar9;
                  }
                  uVar17 = uVar9 - (uVar9 - uVar43 & 0x3f);
                  if (uVar43 == 0) goto LAB_140ac8950;
                  uVar50 = 0;
                  auVar73 = vpbroadcastd_avx512f();
                  auVar75 = auVar16;
                  auVar74 = auVar15;
                  uVar49 = in_K2;
                  do {
                    vpcmpud_avx512f(auVar75,auVar73,1);
                    uVar8 = vpcmpud_avx512f(auVar74,auVar73,1);
                    uVar12 = (uint)uVar8;
                    auVar74 = vpaddd_avx512f(auVar74,auVar14);
                    in_K2 = uVar49 << 0x10;
                    auVar75 = vpaddd_avx512f(auVar75,auVar14);
                    auVar80._32_32_ = auVar75._32_32_;
                    auVar80._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                    auVar81[1] = ((byte)(uVar12 >> 1) & 1) * auVar80[1];
                    auVar81[0] = ((byte)uVar8 & 1) * auVar80[0];
                    auVar81[2] = ((byte)(uVar12 >> 2) & 1) * auVar80[2];
                    auVar81[3] = ((byte)(uVar12 >> 3) & 1) * auVar80[3];
                    auVar81[4] = ((byte)(uVar12 >> 4) & 1) * auVar80[4];
                    auVar81[5] = ((byte)(uVar12 >> 5) & 1) * auVar80[5];
                    auVar81[6] = ((byte)(uVar12 >> 6) & 1) * auVar80[6];
                    auVar81[7] = ((byte)(uVar12 >> 7) & 1) * auVar80[7];
                    auVar81[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar80[8];
                    auVar81[9] = ((byte)(uVar12 >> 9) & 1) * auVar80[9];
                    auVar81[10] = ((byte)(uVar12 >> 10) & 1) * auVar80[10];
                    auVar81[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar80[0xb];
                    auVar81[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar80[0xc];
                    auVar81[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar80[0xd];
                    auVar81[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar80[0xe];
                    auVar81[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar80[0xf];
                    auVar81[0x10] = ((byte)uVar49 & 1) * auVar80[0x10];
                    auVar81[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar80[0x11];
                    auVar81[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar80[0x12];
                    auVar81[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar80[0x13];
                    auVar81[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar80[0x14];
                    auVar81[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar80[0x15];
                    auVar81[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar80[0x16];
                    auVar81[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar80[0x17];
                    bVar6 = (byte)(uVar49 >> 8);
                    auVar81[0x18] = (bVar6 & 1) * auVar80[0x18];
                    auVar81[0x19] = (bVar6 >> 1 & 1) * auVar80[0x19];
                    auVar81[0x1a] = (bVar6 >> 2 & 1) * auVar80[0x1a];
                    auVar81[0x1b] = (bVar6 >> 3 & 1) * auVar80[0x1b];
                    auVar81[0x1c] = (bVar6 >> 4 & 1) * auVar80[0x1c];
                    auVar81._30_34_ = auVar80._30_34_;
                    auVar81[0x1d] = (bVar6 >> 5 & 1) * auVar80[0x1d];
                    auVar71 = vmovdqu8_avx512vl(auVar81._0_32_);
                    *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                    uVar50 = uVar50 + 0x20;
                    uVar49 = in_K2;
                  } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                  if (uVar9 != uVar43) goto LAB_140ac8950;
                }
                uVar17 = uVar18 + uVar9;
              }
              lVar20 = (longlong)(int)uVar17;
              if (2 < iVar40) {
                iVar40 = uVar17 + 2;
                lVar30 = lVar54 * uVar36 + lVar3;
                param_3[lVar20] = *(byte *)(lVar30 + -2);
                param_3[lVar20 + 1] = *(byte *)(lVar30 + -1);
                lVar20 = (longlong)iVar40;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar63 = param_3 + lVar20;
                    if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                       (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                      if ((int)uVar1 < 0x40) {
                        uVar18 = 0;
LAB_140ac8bf7:
                        if (uVar18 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar18;
                          uVar50 = 0;
                          auVar73 = vpbroadcastd_avx512f();
                          auVar75 = auVar16;
                          auVar74 = auVar15;
                          uVar18 = in_K2;
                          do {
                            vpcmpgtd_avx512f(auVar73,auVar75);
                            uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                            uVar43 = (uint)uVar8;
                            auVar74 = vpaddd_avx512f(auVar74,auVar14);
                            in_K2 = uVar18 << 0x10;
                            auVar75 = vpaddd_avx512f(auVar75,auVar14);
                            auVar86._32_32_ = auVar75._32_32_;
                            auVar86._0_32_ =
                                 vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20))
                            ;
                            auVar87[1] = ((byte)(uVar43 >> 1) & 1) * auVar86[1];
                            auVar87[0] = ((byte)uVar8 & 1) * auVar86[0];
                            auVar87[2] = ((byte)(uVar43 >> 2) & 1) * auVar86[2];
                            auVar87[3] = ((byte)(uVar43 >> 3) & 1) * auVar86[3];
                            auVar87[4] = ((byte)(uVar43 >> 4) & 1) * auVar86[4];
                            auVar87[5] = ((byte)(uVar43 >> 5) & 1) * auVar86[5];
                            auVar87[6] = ((byte)(uVar43 >> 6) & 1) * auVar86[6];
                            auVar87[7] = ((byte)(uVar43 >> 7) & 1) * auVar86[7];
                            auVar87[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar86[8];
                            auVar87[9] = ((byte)(uVar43 >> 9) & 1) * auVar86[9];
                            auVar87[10] = ((byte)(uVar43 >> 10) & 1) * auVar86[10];
                            auVar87[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar86[0xb];
                            auVar87[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar86[0xc];
                            auVar87[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar86[0xd];
                            auVar87[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar86[0xe];
                            auVar87[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar86[0xf];
                            auVar87[0x10] = ((byte)uVar18 & 1) * auVar86[0x10];
                            auVar87[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar86[0x11];
                            auVar87[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar86[0x12];
                            auVar87[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar86[0x13];
                            auVar87[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar86[0x14];
                            auVar87[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar86[0x15];
                            auVar87[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar86[0x16];
                            auVar87[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar86[0x17];
                            bVar6 = (byte)(uVar18 >> 8);
                            auVar87[0x18] = (bVar6 & 1) * auVar86[0x18];
                            auVar87[0x19] = (bVar6 >> 1 & 1) * auVar86[0x19];
                            auVar87[0x1a] = (bVar6 >> 2 & 1) * auVar86[0x1a];
                            auVar87[0x1b] = (bVar6 >> 3 & 1) * auVar86[0x1b];
                            auVar87[0x1c] = (bVar6 >> 4 & 1) * auVar86[0x1c];
                            auVar87._30_34_ = auVar86._30_34_;
                            auVar87[0x1d] = (bVar6 >> 5 & 1) * auVar86[0x1d];
                            auVar71 = vmovdqu8_avx512vl(auVar87._0_32_);
                            *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                            uVar50 = uVar50 + 0x20;
                            uVar18 = in_K2;
                          } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                        }
                      }
                      else {
                        if ((int)uVar1 < 0xeb) {
                          uVar43 = 0;
                          uVar18 = uVar58;
LAB_140ac8bc3:
                          if ((int)(uVar43 + 0x40) <= (int)uVar18) {
                            uVar50 = (ulonglong)(int)uVar43;
                            do {
                              auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                              *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                              uVar50 = uVar50 + 0x40;
                            } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                          }
                          goto LAB_140ac8bf7;
                        }
                        uVar43 = (uint)pbVar63 & 0x3f;
                        if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                           (uVar43 = 0x40 - uVar43, (int)uVar1 < (int)uVar43)) {
                          uVar43 = uVar1;
                        }
                        uVar18 = uVar1 - (uVar1 - uVar43 & 0x3f);
                        if (uVar43 == 0) goto LAB_140ac8bc3;
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar49 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar12 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar49 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar84._32_32_ = auVar75._32_32_;
                          auVar84._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                          auVar85[1] = ((byte)(uVar12 >> 1) & 1) * auVar84[1];
                          auVar85[0] = ((byte)uVar8 & 1) * auVar84[0];
                          auVar85[2] = ((byte)(uVar12 >> 2) & 1) * auVar84[2];
                          auVar85[3] = ((byte)(uVar12 >> 3) & 1) * auVar84[3];
                          auVar85[4] = ((byte)(uVar12 >> 4) & 1) * auVar84[4];
                          auVar85[5] = ((byte)(uVar12 >> 5) & 1) * auVar84[5];
                          auVar85[6] = ((byte)(uVar12 >> 6) & 1) * auVar84[6];
                          auVar85[7] = ((byte)(uVar12 >> 7) & 1) * auVar84[7];
                          auVar85[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar84[8];
                          auVar85[9] = ((byte)(uVar12 >> 9) & 1) * auVar84[9];
                          auVar85[10] = ((byte)(uVar12 >> 10) & 1) * auVar84[10];
                          auVar85[0xb] = ((byte)(uVar12 >> 0xb) & 1) * auVar84[0xb];
                          auVar85[0xc] = ((byte)(uVar12 >> 0xc) & 1) * auVar84[0xc];
                          auVar85[0xd] = ((byte)(uVar12 >> 0xd) & 1) * auVar84[0xd];
                          auVar85[0xe] = ((byte)(uVar12 >> 0xe) & 1) * auVar84[0xe];
                          auVar85[0xf] = ((byte)(uVar12 >> 0xf) & 1) * auVar84[0xf];
                          auVar85[0x10] = ((byte)uVar49 & 1) * auVar84[0x10];
                          auVar85[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar84[0x11];
                          auVar85[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar84[0x12];
                          auVar85[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar84[0x13];
                          auVar85[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar84[0x14];
                          auVar85[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar84[0x15];
                          auVar85[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar84[0x16];
                          auVar85[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar84[0x17];
                          bVar6 = (byte)(uVar49 >> 8);
                          auVar85[0x18] = (bVar6 & 1) * auVar84[0x18];
                          auVar85[0x19] = (bVar6 >> 1 & 1) * auVar84[0x19];
                          auVar85[0x1a] = (bVar6 >> 2 & 1) * auVar84[0x1a];
                          auVar85[0x1b] = (bVar6 >> 3 & 1) * auVar84[0x1b];
                          auVar85[0x1c] = (bVar6 >> 4 & 1) * auVar84[0x1c];
                          auVar85._30_34_ = auVar84._30_34_;
                          auVar85[0x1d] = (bVar6 >> 5 & 1) * auVar84[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar85._0_32_);
                          *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar49 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                        if (uVar1 != uVar43) goto LAB_140ac8bc3;
                      }
                      lVar20 = (longlong)(int)(iVar47 + 4 + uVar17);
                      goto LAB_140ac8d0a;
                    }
                  }
                  iVar27 = 1;
                  uVar50 = 0;
                  iVar41 = iVar40;
                  if (uVar65 != 0) {
                    do {
                      uVar23 = uVar50;
                      param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                      param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                      uVar50 = uVar23 + 1;
                    } while (uVar50 < uVar69);
                    iVar41 = (int)uVar50 * 2 + 2 + uVar17;
                    iVar27 = (int)uVar23 + 2 + (int)uVar50;
                  }
                  if (iVar27 - 1U < uVar1) {
                    param_3[(longlong)iVar27 + -1 + lVar20] =
                         *(byte *)((longlong)iVar27 + -1 + lVar30);
                    lVar20 = (longlong)(iVar27 + iVar40);
                  }
                  else {
                    lVar20 = (longlong)iVar41;
                  }
                }
LAB_140ac8d0a:
                lStack_48 = lVar20 - lVar28;
                goto LAB_140ac9ae0;
              }
            }
            lStack_48 = lVar44;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar63 = param_3 + lVar20;
                lVar30 = lVar54 * uVar36 + lVar3;
                if ((2 - lVar44 <= (longlong)pbVar63 - lVar30) ||
                   (2 - lVar44 <= -((longlong)pbVar63 - lVar30))) {
                  if ((int)uVar1 < 0x40) {
                    uVar17 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xeb) {
                      uVar18 = 0;
                      uVar17 = uVar58;
                    }
                    else {
                      uVar18 = (uint)pbVar63 & 0x3f;
                      if ((((ulonglong)pbVar63 & 0x3f) != 0) &&
                         (uVar18 = 0x40 - uVar18, (int)uVar1 < (int)uVar18)) {
                        uVar18 = uVar1;
                      }
                      uVar17 = uVar1 - (uVar1 - uVar18 & 0x3f);
                      if (uVar18 != 0) {
                        uVar50 = 0;
                        auVar73 = vpbroadcastd_avx512f();
                        auVar75 = auVar16;
                        auVar74 = auVar15;
                        uVar43 = in_K2;
                        do {
                          vpcmpgtd_avx512f(auVar73,auVar75);
                          uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                          uVar49 = (uint)uVar8;
                          auVar74 = vpaddd_avx512f(auVar74,auVar14);
                          in_K2 = uVar43 << 0x10;
                          auVar75 = vpaddd_avx512f(auVar75,auVar14);
                          auVar88._32_32_ = auVar75._32_32_;
                          auVar88._0_32_ =
                               vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30));
                          auVar89[1] = ((byte)(uVar49 >> 1) & 1) * auVar88[1];
                          auVar89[0] = ((byte)uVar8 & 1) * auVar88[0];
                          auVar89[2] = ((byte)(uVar49 >> 2) & 1) * auVar88[2];
                          auVar89[3] = ((byte)(uVar49 >> 3) & 1) * auVar88[3];
                          auVar89[4] = ((byte)(uVar49 >> 4) & 1) * auVar88[4];
                          auVar89[5] = ((byte)(uVar49 >> 5) & 1) * auVar88[5];
                          auVar89[6] = ((byte)(uVar49 >> 6) & 1) * auVar88[6];
                          auVar89[7] = ((byte)(uVar49 >> 7) & 1) * auVar88[7];
                          auVar89[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar88[8];
                          auVar89[9] = ((byte)(uVar49 >> 9) & 1) * auVar88[9];
                          auVar89[10] = ((byte)(uVar49 >> 10) & 1) * auVar88[10];
                          auVar89[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar88[0xb];
                          auVar89[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar88[0xc];
                          auVar89[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar88[0xd];
                          auVar89[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar88[0xe];
                          auVar89[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar88[0xf];
                          auVar89[0x10] = ((byte)uVar43 & 1) * auVar88[0x10];
                          auVar89[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar88[0x11];
                          auVar89[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar88[0x12];
                          auVar89[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar88[0x13];
                          auVar89[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar88[0x14];
                          auVar89[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar88[0x15];
                          auVar89[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar88[0x16];
                          auVar89[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar88[0x17];
                          bVar6 = (byte)(uVar43 >> 8);
                          auVar89[0x18] = (bVar6 & 1) * auVar88[0x18];
                          auVar89[0x19] = (bVar6 >> 1 & 1) * auVar88[0x19];
                          auVar89[0x1a] = (bVar6 >> 2 & 1) * auVar88[0x1a];
                          auVar89[0x1b] = (bVar6 >> 3 & 1) * auVar88[0x1b];
                          auVar89[0x1c] = (bVar6 >> 4 & 1) * auVar88[0x1c];
                          auVar89._30_34_ = auVar88._30_34_;
                          auVar89[0x1d] = (bVar6 >> 5 & 1) * auVar88[0x1d];
                          auVar71 = vmovdqu8_avx512vl(auVar89._0_32_);
                          *(undefined1 (*) [32])(pbVar63 + uVar50) = auVar71;
                          uVar50 = uVar50 + 0x20;
                          uVar43 = in_K2;
                        } while (uVar50 < (ulonglong)(longlong)(int)uVar18);
                        if (uVar1 == uVar18) goto LAB_140ac9ae0;
                      }
                    }
                    if ((int)(uVar18 + 0x40) <= (int)uVar17) {
                      uVar50 = (ulonglong)(int)uVar18;
                      do {
                        auVar75 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar50 + lVar30));
                        *(undefined1 (*) [64])(pbVar63 + uVar50) = auVar75;
                        uVar50 = uVar50 + 0x40;
                      } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                    }
                  }
                  if (uVar17 + 1 <= uVar1) {
                    lVar20 = (longlong)(int)uVar17;
                    uVar50 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar17 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar18 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar17 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar90._32_32_ = auVar75._32_32_;
                      auVar90._0_32_ =
                           vmovdqu8_avx512vl(*(undefined1 (*) [32])(uVar50 + lVar30 + lVar20));
                      auVar91[1] = ((byte)(uVar18 >> 1) & 1) * auVar90[1];
                      auVar91[0] = ((byte)uVar8 & 1) * auVar90[0];
                      auVar91[2] = ((byte)(uVar18 >> 2) & 1) * auVar90[2];
                      auVar91[3] = ((byte)(uVar18 >> 3) & 1) * auVar90[3];
                      auVar91[4] = ((byte)(uVar18 >> 4) & 1) * auVar90[4];
                      auVar91[5] = ((byte)(uVar18 >> 5) & 1) * auVar90[5];
                      auVar91[6] = ((byte)(uVar18 >> 6) & 1) * auVar90[6];
                      auVar91[7] = ((byte)(uVar18 >> 7) & 1) * auVar90[7];
                      auVar91[8] = ((byte)((ulonglong)uVar8 >> 8) & 1) * auVar90[8];
                      auVar91[9] = ((byte)(uVar18 >> 9) & 1) * auVar90[9];
                      auVar91[10] = ((byte)(uVar18 >> 10) & 1) * auVar90[10];
                      auVar91[0xb] = ((byte)(uVar18 >> 0xb) & 1) * auVar90[0xb];
                      auVar91[0xc] = ((byte)(uVar18 >> 0xc) & 1) * auVar90[0xc];
                      auVar91[0xd] = ((byte)(uVar18 >> 0xd) & 1) * auVar90[0xd];
                      auVar91[0xe] = ((byte)(uVar18 >> 0xe) & 1) * auVar90[0xe];
                      auVar91[0xf] = ((byte)(uVar18 >> 0xf) & 1) * auVar90[0xf];
                      auVar91[0x10] = ((byte)uVar17 & 1) * auVar90[0x10];
                      auVar91[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar90[0x11];
                      auVar91[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar90[0x12];
                      auVar91[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar90[0x13];
                      auVar91[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar90[0x14];
                      auVar91[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar90[0x15];
                      auVar91[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar90[0x16];
                      auVar91[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar90[0x17];
                      bVar6 = (byte)(uVar17 >> 8);
                      auVar91[0x18] = (bVar6 & 1) * auVar90[0x18];
                      auVar91[0x19] = (bVar6 >> 1 & 1) * auVar90[0x19];
                      auVar91[0x1a] = (bVar6 >> 2 & 1) * auVar90[0x1a];
                      auVar91[0x1b] = (bVar6 >> 3 & 1) * auVar90[0x1b];
                      auVar91[0x1c] = (bVar6 >> 4 & 1) * auVar90[0x1c];
                      auVar91._30_34_ = auVar90._30_34_;
                      auVar91[0x1d] = (bVar6 >> 5 & 1) * auVar90[0x1d];
                      auVar71 = vmovdqu8_avx512vl(auVar91._0_32_);
                      *(undefined1 (*) [32])(pbVar63 + uVar50 + lVar20) = auVar71;
                      uVar50 = uVar50 + 0x20;
                      uVar17 = in_K2;
                    } while (uVar50 < (ulonglong)(lVar35 - lVar20));
                  }
                  goto LAB_140ac9ae0;
                }
              }
              iVar40 = 1;
              if (uVar65 != 0) {
                lVar30 = lVar54 * uVar36 + lVar3;
                uVar50 = 0;
                do {
                  uVar23 = uVar50;
                  param_3[uVar23 * 2 + lVar20] = *(byte *)(lVar30 + uVar23 * 2);
                  param_3[uVar23 * 2 + lVar20 + 1] = *(byte *)(lVar30 + 1 + uVar23 * 2);
                  uVar50 = uVar23 + 1;
                } while (uVar50 < uVar69);
                iVar40 = (int)uVar23 + 2 + (int)uVar50;
              }
              if (iVar40 - 1U < uVar1) {
                param_3[(longlong)iVar40 + -1 + lVar20] =
                     *(byte *)(lVar3 + iVar40 + -1 + lVar54 * uVar36);
              }
            }
          }
          else {
            lStack_48 = 0;
          }
        }
LAB_140ac9ae0:
        **(short **)(param_2 + uVar36 * 8) = (ushort)*param_3 - (ushort)param_3[2];
        if (0 < (int)uVar67) {
          pauVar21 = (undefined1 (*) [32])(param_1 + lVar54 * uVar36);
          if (6 < (int)uVar67) {
            uVar50 = *(longlong *)(param_2 + uVar36 * 8) + 2;
            if (((longlong)uVar37 <= (longlong)(uVar50 - (longlong)pauVar21)) ||
               ((longlong)(uVar37 * 2 + -4) <= (longlong)-(uVar50 - (longlong)pauVar21))) {
              if ((int)uVar67 < 0x20) {
                uVar17 = 0;
                uVar18 = in_K2;
              }
              else {
                if ((int)uVar67 < 0xcb) {
                  uVar43 = 0;
                  uVar17 = uVar67 & 0xffffffe0;
                }
                else {
                  uVar43 = (uint)uVar50 & 0x3f;
                  if ((uVar50 & 1) == 0) {
                    if (((uVar50 & 0x3f) != 0) &&
                       (uVar43 = 0x40 - uVar43 >> 1, (int)uVar67 < (int)uVar43)) {
                      uVar43 = uVar67;
                    }
                  }
                  else {
                    uVar43 = 0;
                  }
                  uVar17 = uVar67 - (uVar67 - uVar43 & 0x1f);
                  if (uVar43 != 0) {
                    uVar50 = 0;
                    lVar20 = 0;
                    auVar73 = vpbroadcastd_avx512f();
                    pauVar39 = pauVar21;
                    auVar75 = auVar16;
                    auVar74 = auVar15;
                    uVar18 = in_K2;
                    do {
                      vpcmpgtd_avx512f(auVar73,auVar75);
                      uVar50 = uVar50 + 0x20;
                      uVar8 = vpcmpgtd_avx512f(auVar73,auVar74);
                      uVar49 = (uint)uVar8;
                      auVar74 = vpaddd_avx512f(auVar74,auVar14);
                      in_K2 = uVar18 << 0x10;
                      auVar75 = vpaddd_avx512f(auVar75,auVar14);
                      auVar102._32_32_ = auVar75._32_32_;
                      auVar102._0_32_ = vmovdqu8_avx512vl(*pauVar39);
                      auVar103[1] = ((byte)(uVar49 >> 1) & 1) * auVar102[1];
                      auVar103[0] = ((byte)uVar8 & 1) * auVar102[0];
                      auVar103[2] = ((byte)(uVar49 >> 2) & 1) * auVar102[2];
                      auVar103[3] = ((byte)(uVar49 >> 3) & 1) * auVar102[3];
                      auVar103[4] = ((byte)(uVar49 >> 4) & 1) * auVar102[4];
                      auVar103[5] = ((byte)(uVar49 >> 5) & 1) * auVar102[5];
                      auVar103[6] = ((byte)(uVar49 >> 6) & 1) * auVar102[6];
                      auVar103[7] = ((byte)(uVar49 >> 7) & 1) * auVar102[7];
                      bVar6 = (byte)((ulonglong)uVar8 >> 8);
                      auVar103[8] = (bVar6 & 1) * auVar102[8];
                      auVar103[9] = ((byte)(uVar49 >> 9) & 1) * auVar102[9];
                      auVar103[10] = ((byte)(uVar49 >> 10) & 1) * auVar102[10];
                      auVar103[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar102[0xb];
                      auVar103[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar102[0xc];
                      auVar103[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar102[0xd];
                      auVar103[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar102[0xe];
                      auVar103[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar102[0xf];
                      auVar103[0x10] = ((byte)uVar18 & 1) * auVar102[0x10];
                      auVar103[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar102[0x11];
                      auVar103[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar102[0x12];
                      auVar103[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar102[0x13];
                      auVar103[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar102[0x14];
                      auVar103[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar102[0x15];
                      auVar103[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar102[0x16];
                      auVar103[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar102[0x17];
                      bVar7 = (byte)(uVar18 >> 8);
                      auVar103[0x18] = (bVar7 & 1) * auVar102[0x18];
                      auVar103[0x19] = (bVar7 >> 1 & 1) * auVar102[0x19];
                      auVar103[0x1a] = (bVar7 >> 2 & 1) * auVar102[0x1a];
                      auVar103[0x1b] = (bVar7 >> 3 & 1) * auVar102[0x1b];
                      auVar103[0x1c] = (bVar7 >> 4 & 1) * auVar102[0x1c];
                      auVar103._30_34_ = auVar102._30_34_;
                      auVar103[0x1d] = (bVar7 >> 5 & 1) * auVar102[0x1d];
                      auVar104._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar39 + 2));
                      auVar104._32_32_ = auVar102._32_32_;
                      auVar105[1] = ((byte)(uVar49 >> 1) & 1) * auVar104[1];
                      auVar105[0] = ((byte)uVar8 & 1) * auVar104[0];
                      auVar105[2] = ((byte)(uVar49 >> 2) & 1) * auVar104[2];
                      auVar105[3] = ((byte)(uVar49 >> 3) & 1) * auVar104[3];
                      auVar105[4] = ((byte)(uVar49 >> 4) & 1) * auVar104[4];
                      auVar105[5] = ((byte)(uVar49 >> 5) & 1) * auVar104[5];
                      auVar105[6] = ((byte)(uVar49 >> 6) & 1) * auVar104[6];
                      auVar105[7] = ((byte)(uVar49 >> 7) & 1) * auVar104[7];
                      auVar105[8] = (bVar6 & 1) * auVar104[8];
                      auVar105[9] = ((byte)(uVar49 >> 9) & 1) * auVar104[9];
                      auVar105[10] = ((byte)(uVar49 >> 10) & 1) * auVar104[10];
                      auVar105[0xb] = ((byte)(uVar49 >> 0xb) & 1) * auVar104[0xb];
                      auVar105[0xc] = ((byte)(uVar49 >> 0xc) & 1) * auVar104[0xc];
                      auVar105[0xd] = ((byte)(uVar49 >> 0xd) & 1) * auVar104[0xd];
                      auVar105[0xe] = ((byte)(uVar49 >> 0xe) & 1) * auVar104[0xe];
                      auVar105[0xf] = ((byte)(uVar49 >> 0xf) & 1) * auVar104[0xf];
                      auVar105[0x10] = ((byte)uVar18 & 1) * auVar104[0x10];
                      auVar105[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar104[0x11];
                      auVar105[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar104[0x12];
                      auVar105[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar104[0x13];
                      auVar105[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar104[0x14];
                      auVar105[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar104[0x15];
                      auVar105[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar104[0x16];
                      auVar105[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar104[0x17];
                      auVar105[0x18] = (bVar7 & 1) * auVar104[0x18];
                      auVar105[0x19] = (bVar7 >> 1 & 1) * auVar104[0x19];
                      auVar105[0x1a] = (bVar7 >> 2 & 1) * auVar104[0x1a];
                      auVar105[0x1b] = (bVar7 >> 3 & 1) * auVar104[0x1b];
                      auVar105[0x1c] = (bVar7 >> 4 & 1) * auVar104[0x1c];
                      auVar105._30_34_ = auVar104._30_34_;
                      auVar105[0x1d] = (bVar7 >> 5 & 1) * auVar104[0x1d];
                      auVar106 = vpmovzxbw_avx512bw(auVar103._0_32_);
                      auVar107 = vpmovzxbw_avx512bw(auVar105._0_32_);
                      auVar106 = vpsubw_avx512bw(auVar106,auVar107);
                      pauVar39 = pauVar39 + 1;
                      auVar106 = vmovdqu16_avx512bw(auVar106);
                      *(undefined1 (*) [64])(*(longlong *)(param_2 + uVar36 * 8) + 2 + lVar20) =
                           auVar106;
                      lVar20 = lVar20 + 0x40;
                      uVar18 = in_K2;
                    } while (uVar50 < (ulonglong)(longlong)(int)uVar43);
                    uVar38 = uVar38 & 0xffffffff;
                    if (uVar67 == uVar43) goto LAB_140ac9d5f;
                  }
                }
                uVar18 = in_K2;
                if ((int)(uVar43 + 0x20) <= (int)uVar17) {
                  uVar50 = (ulonglong)(int)uVar43;
                  lVar20 = lVar54 * uVar36 + param_1;
                  do {
                    auVar75 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(uVar50 + lVar20));
                    auVar74 = vpmovzxbw_avx512bw(*(undefined1 (*) [32])(uVar50 + 2 + lVar20));
                    auVar75 = vpsubw_avx512bw(auVar75,auVar74);
                    auVar75 = vmovdqu32_avx512f(auVar75);
                    *(undefined1 (*) [64])(*(longlong *)(param_2 + uVar36 * 8) + 2 + uVar50 * 2) =
                         auVar75;
                    uVar50 = uVar50 + 0x20;
                  } while (uVar50 < (ulonglong)(longlong)(int)uVar17);
                }
              }
              in_K2 = uVar18;
              if (uVar17 + 1 <= uVar67) {
                auVar75 = vpbroadcastd_avx512f();
                vpcmpgtd_avx512f(auVar75,auVar16);
                uVar8 = vpcmpgtd_avx512f(auVar75,auVar15);
                uVar43 = (uint)uVar8;
                in_K2 = uVar18 << 0x10;
                lVar20 = (longlong)(int)uVar17;
                auVar75._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar21 + lVar20));
                auVar74[1] = ((byte)(uVar43 >> 1) & 1) * auVar75[1];
                auVar74[0] = ((byte)uVar8 & 1) * auVar75[0];
                auVar74[2] = ((byte)(uVar43 >> 2) & 1) * auVar75[2];
                auVar74[3] = ((byte)(uVar43 >> 3) & 1) * auVar75[3];
                auVar74[4] = ((byte)(uVar43 >> 4) & 1) * auVar75[4];
                auVar74[5] = ((byte)(uVar43 >> 5) & 1) * auVar75[5];
                auVar74[6] = ((byte)(uVar43 >> 6) & 1) * auVar75[6];
                auVar74[7] = ((byte)(uVar43 >> 7) & 1) * auVar75[7];
                bVar6 = (byte)((ulonglong)uVar8 >> 8);
                auVar74[8] = (bVar6 & 1) * auVar75[8];
                auVar74[9] = ((byte)(uVar43 >> 9) & 1) * auVar75[9];
                auVar74[10] = ((byte)(uVar43 >> 10) & 1) * auVar75[10];
                auVar74[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar75[0xb];
                auVar74[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar75[0xc];
                auVar74[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar75[0xd];
                auVar74[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar75[0xe];
                auVar74[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar75[0xf];
                auVar74[0x10] = ((byte)uVar18 & 1) * auVar75[0x10];
                auVar74[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar75[0x11];
                auVar74[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar75[0x12];
                auVar74[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar75[0x13];
                auVar74[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar75[0x14];
                auVar74[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar75[0x15];
                auVar74[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar75[0x16];
                auVar74[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar75[0x17];
                bVar7 = (byte)(uVar18 >> 8);
                auVar74[0x18] = (bVar7 & 1) * auVar75[0x18];
                auVar74[0x19] = (bVar7 >> 1 & 1) * auVar75[0x19];
                auVar74[0x1a] = (bVar7 >> 2 & 1) * auVar75[0x1a];
                auVar74[0x1b] = (bVar7 >> 3 & 1) * auVar75[0x1b];
                auVar74[0x1c] = (bVar7 >> 4 & 1) * auVar75[0x1c];
                auVar74._30_34_ = auVar75._30_34_;
                auVar74[0x1d] = (bVar7 >> 5 & 1) * auVar75[0x1d];
                auVar73._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar21 + lVar20 + 2));
                auVar73._32_32_ = auVar75._32_32_;
                auVar108[1] = ((byte)(uVar43 >> 1) & 1) * auVar73[1];
                auVar108[0] = ((byte)uVar8 & 1) * auVar73[0];
                auVar108[2] = ((byte)(uVar43 >> 2) & 1) * auVar73[2];
                auVar108[3] = ((byte)(uVar43 >> 3) & 1) * auVar73[3];
                auVar108[4] = ((byte)(uVar43 >> 4) & 1) * auVar73[4];
                auVar108[5] = ((byte)(uVar43 >> 5) & 1) * auVar73[5];
                auVar108[6] = ((byte)(uVar43 >> 6) & 1) * auVar73[6];
                auVar108[7] = ((byte)(uVar43 >> 7) & 1) * auVar73[7];
                auVar108[8] = (bVar6 & 1) * auVar73[8];
                auVar108[9] = ((byte)(uVar43 >> 9) & 1) * auVar73[9];
                auVar108[10] = ((byte)(uVar43 >> 10) & 1) * auVar73[10];
                auVar108[0xb] = ((byte)(uVar43 >> 0xb) & 1) * auVar73[0xb];
                auVar108[0xc] = ((byte)(uVar43 >> 0xc) & 1) * auVar73[0xc];
                auVar108[0xd] = ((byte)(uVar43 >> 0xd) & 1) * auVar73[0xd];
                auVar108[0xe] = ((byte)(uVar43 >> 0xe) & 1) * auVar73[0xe];
                auVar108[0xf] = ((byte)(uVar43 >> 0xf) & 1) * auVar73[0xf];
                auVar108[0x10] = ((byte)uVar18 & 1) * auVar73[0x10];
                auVar108[0x11] = ((byte)(in_K2 >> 0x11) & 1) * auVar73[0x11];
                auVar108[0x12] = ((byte)(in_K2 >> 0x12) & 1) * auVar73[0x12];
                auVar108[0x13] = ((byte)(in_K2 >> 0x13) & 1) * auVar73[0x13];
                auVar108[0x14] = ((byte)(in_K2 >> 0x14) & 1) * auVar73[0x14];
                auVar108[0x15] = ((byte)(in_K2 >> 0x15) & 1) * auVar73[0x15];
                auVar108[0x16] = ((byte)(in_K2 >> 0x16) & 1) * auVar73[0x16];
                auVar108[0x17] = ((byte)(in_K2 >> 0x17) & 1) * auVar73[0x17];
                auVar108[0x18] = (bVar7 & 1) * auVar73[0x18];
                auVar108[0x19] = (bVar7 >> 1 & 1) * auVar73[0x19];
                auVar108[0x1a] = (bVar7 >> 2 & 1) * auVar73[0x1a];
                auVar108[0x1b] = (bVar7 >> 3 & 1) * auVar73[0x1b];
                auVar108[0x1c] = (bVar7 >> 4 & 1) * auVar73[0x1c];
                auVar108._30_34_ = auVar73._30_34_;
                auVar108[0x1d] = (bVar7 >> 5 & 1) * auVar73[0x1d];
                auVar75 = vpmovzxbw_avx512bw(auVar74._0_32_);
                auVar74 = vpmovzxbw_avx512bw(auVar108._0_32_);
                auVar75 = vpsubw_avx512bw(auVar75,auVar74);
                auVar75 = vmovdqu16_avx512bw(auVar75);
                *(undefined1 (*) [64])(*(longlong *)(param_2 + uVar36 * 8) + 2 + lVar20 * 2) =
                     auVar75;
              }
              goto LAB_140ac9d5f;
            }
          }
          uVar50 = 0;
          do {
            *(ushort *)(*(longlong *)(param_2 + uVar36 * 8) + 2 + uVar50 * 2) =
                 (ushort)(byte)(*pauVar21)[uVar50] - (ushort)(byte)(*pauVar21)[uVar50 + 2];
            uVar50 = uVar50 + 1;
          } while (uVar50 < uVar37 - 2);
        }
LAB_140ac9d5f:
        if ((int)uVar38 < 2) goto LAB_140ac9da9;
        lVar20 = uVar36 * 8;
        uVar36 = uVar36 + 1;
        lStack_70 = lStack_70 + lVar54;
        *(ushort *)(*(longlong *)(param_2 + lVar20) + -2 + uVar37 * 2) =
             (ushort)param_3[lStack_48] - (ushort)param_3[lStack_48 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar36) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar44 = 1;
      break;
    case 2:
      lVar44 = 2;
      break;
    case 3:
      lVar44 = 3;
      break;
    case 4:
      lVar44 = 4;
    }
    (*(code *)(&PTR_FUN_14308f940)[lVar44])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar54 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140ac9da9:
  uVar36 = uVar36 + 1;
  lStack_70 = lStack_70 + lVar54;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar36) {
    return 0;
  }
  goto LAB_140ac8520;
}

