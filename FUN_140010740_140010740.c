
/* WARNING: Removing unreachable block (ram,0x000140010972) */
/* WARNING: Removing unreachable block (ram,0x000140010786) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010740(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16],
                  int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  longlong lVar75;
  ulonglong uVar76;
  uint uVar77;
  ulonglong uVar78;
  undefined1 auVar89 [14];
  ulonglong uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 uVar108;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined4 uVar113;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined4 uVar119;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar96 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar114 [12];
  undefined1 auVar120 [12];
  
  auVar81 = _DAT_1430864f0;
  auVar28 = _DAT_1430864e0;
  auVar27 = _DAT_1430864d0;
  auVar123 = _DAT_1430864c0;
  auVar110 = _DAT_1430864b0;
  auVar102 = _DAT_1430864a0;
  auVar91 = _DAT_143086490;
  auVar86 = *param_4;
  uVar14 = auVar86._0_2_;
  uVar15 = auVar86._2_2_;
  uVar16 = auVar86._4_2_;
  if (param_5 != 4) {
    iVar71 = 0;
    auVar80._0_8_ = auVar86._4_8_;
    auVar80._8_8_ = auVar86._0_8_;
    auVar90._8_8_ = auVar80._0_8_;
    auVar90._0_8_ = auVar86._8_8_;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        uVar4 = *param_1;
        iVar71 = iVar71 + 8;
        uVar5 = param_1[1];
        auVar41[10] = 0;
        auVar41._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar41[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar50[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar50._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar50._10_2_ = auVar41._10_2_;
        auVar59._9_3_ = auVar50._9_3_;
        auVar59._0_9_ = (unkuint9)0;
        auVar122._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar59._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar122[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar122._11_5_ = 0;
        auVar121._1_12_ = SUB1612(auVar122 << 0x28,4);
        auVar121[0] = (char)((ulonglong)uVar4 >> 8);
        auVar121._13_3_ = 0;
        auVar109._1_14_ = SUB1614(auVar121 << 0x18,2);
        auVar109[0] = (char)uVar4;
        auVar109[0xf] = 0;
        auVar42[10] = 0;
        auVar42._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar42[0xb] = (char)((ulonglong)uVar5 >> 0x28);
        auVar51[9] = (char)((ulonglong)uVar5 >> 0x20);
        auVar51._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar51._10_2_ = auVar42._10_2_;
        auVar60._9_3_ = auVar51._9_3_;
        auVar60._0_9_ = (unkuint9)0;
        auVar24._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar60._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
        auVar24[0] = (char)((ulonglong)uVar5 >> 0x10);
        auVar24._11_5_ = 0;
        auVar23._1_12_ = SUB1612(auVar24 << 0x28,4);
        auVar23[0] = (char)((ulonglong)uVar5 >> 8);
        auVar23._13_3_ = 0;
        auVar115._1_14_ = SUB1614(auVar23 << 0x18,2);
        auVar115[0] = (char)uVar5;
        auVar115[0xf] = 0;
        auVar109 = pmulhuw(auVar109 << 8,auVar86);
        uVar4 = param_1[2];
        param_1 = param_1 + 3;
        auVar115 = pmulhuw(auVar115 << 8,auVar80);
        auVar43[10] = 0;
        auVar43._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar43[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar52[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar52._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar52._10_2_ = auVar43._10_2_;
        auVar61._9_3_ = auVar52._9_3_;
        auVar61._0_9_ = (unkuint9)0;
        auVar26._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar61._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar26[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar26._11_5_ = 0;
        auVar25._1_12_ = SUB1612(auVar26 << 0x28,4);
        auVar25[0] = (char)((ulonglong)uVar4 >> 8);
        auVar25._13_3_ = 0;
        auVar116._1_14_ = SUB1614(auVar25 << 0x18,2);
        auVar116[0] = (char)uVar4;
        auVar116[0xf] = 0;
        auVar121 = pmulhuw(auVar116 << 8,auVar90);
        auVar116 = auVar115 ^ auVar91 & (auVar109 ^ auVar115);
        auVar109 = auVar109 ^ auVar115 ^ auVar116 ^ auVar121;
        auVar121 = auVar121 ^ auVar102 & auVar109;
        auVar116 = auVar116 ^ auVar121;
        auVar109 = pshufb(auVar109 ^ auVar121,auVar123);
        auVar121 = auVar121 ^ auVar110 & auVar116;
        auVar122 = pshufb(auVar121,auVar28);
        auVar115 = pshufb(auVar116 ^ auVar121,auVar27);
        auVar109 = paddusw(auVar122,auVar109);
        auVar109 = paddusw(auVar109,auVar115);
        auVar109 = paddusw(auVar109,auVar81);
        auVar109 = psraw(auVar109,7);
        sVar6 = auVar109._0_2_;
        sVar7 = auVar109._2_2_;
        sVar8 = auVar109._4_2_;
        sVar9 = auVar109._6_2_;
        sVar10 = auVar109._8_2_;
        sVar11 = auVar109._10_2_;
        sVar12 = auVar109._12_2_;
        sVar13 = auVar109._14_2_;
        *param_2 = CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar109[0xe] - (0xff < sVar13),
                            CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar109[0xc] -
                                     (0xff < sVar12),
                                     CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar109[10] -
                                              (0xff < sVar11),
                                              CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar109[8]
                                                       - (0xff < sVar10),
                                                       CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                                auVar109[6] - (0xff < sVar9),
                                                                CONCAT12((0 < sVar8) *
                                                                         (sVar8 < 0x100) *
                                                                         auVar109[4] -
                                                                         (0xff < sVar8),
                                                                         CONCAT11((0 < sVar7) *
                                                                                  (sVar7 < 0x100) *
                                                                                  auVar109[2] -
                                                                                  (0xff < sVar7),
                                                                                  (0 < sVar6) *
                                                                                  (sVar6 < 0x100) *
                                                                                  auVar109[0] -
                                                                                  (0xff < sVar6)))))
                                             )));
        param_2 = param_2 + 1;
      } while (iVar71 < (int)(param_3 & 0xfffffff8));
    }
    if ((param_3 & 4) != 0) {
      uVar4 = *param_1;
      uVar113 = *(undefined4 *)(param_1 + 1);
      auVar44[10] = 0;
      auVar44._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar44[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar53[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar53._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar53._10_2_ = auVar44._10_2_;
      auVar62._9_3_ = auVar53._9_3_;
      auVar62._0_9_ = (unkuint9)0;
      auVar123._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar62._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar123[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar123._11_5_ = 0;
      auVar110._1_12_ = SUB1612(auVar123 << 0x28,4);
      auVar110[0] = (char)((ulonglong)uVar4 >> 8);
      auVar110._13_3_ = 0;
      auVar91._1_14_ = SUB1614(auVar110 << 0x18,2);
      auVar91[0] = (char)uVar4;
      auVar91[0xf] = 0;
      param_1 = (undefined8 *)((longlong)param_1 + 0xc);
      auVar91 = pmulhuw(auVar91 << 8,auVar86);
      uVar108 = (undefined1)((uint)uVar113 >> 8);
      auVar45[10] = 0;
      auVar45._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar45[0xb] = uVar108;
      auVar54[9] = (char)uVar113;
      auVar54._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar54._10_2_ = auVar45._10_2_;
      auVar63._9_3_ = auVar54._9_3_;
      auVar63._0_9_ = (unkuint9)0;
      auVar28._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar63._8_4_,(char)((uint)uVar113 >> 0x18))) << 0x38,6);
      auVar28[0] = (char)((uint)uVar113 >> 0x10);
      auVar28._11_5_ = 0;
      auVar27._1_12_ = SUB1612(auVar28 << 0x28,4);
      auVar27[0] = uVar108;
      auVar27._13_3_ = 0;
      auVar102._1_14_ = SUB1614(auVar27 << 0x18,2);
      auVar102[0] = (char)uVar113;
      auVar102[0xf] = 0;
      auVar86 = pmulhuw(auVar102 << 8,auVar80);
      auVar83._0_12_ = auVar91._0_12_;
      auVar84._12_2_ = auVar91._6_2_;
      auVar84._0_12_ = auVar83._0_12_;
      auVar84._14_2_ = auVar91._12_2_;
      auVar83._12_4_ = auVar84._12_4_;
      auVar82._10_6_ = auVar83._10_6_;
      auVar82._0_8_ = auVar91._0_8_;
      auVar82._8_2_ = auVar91._4_2_;
      auVar37._4_8_ = auVar82._8_8_;
      auVar37._2_2_ = auVar91._8_2_;
      auVar37._0_2_ = auVar91._2_2_;
      auVar81._0_4_ = CONCAT22(auVar91._6_2_,auVar91._0_2_);
      auVar81._4_12_ = auVar37;
      auVar100._0_8_ = auVar86._0_8_ << 0x20;
      auVar100._8_8_ = auVar86._8_8_ << 0x20 | auVar86._0_8_ >> 0x20;
      auVar89 = ZEXT414(auVar91._12_4_) | auVar100._0_14_;
      auVar94._0_12_ = auVar89._0_12_;
      auVar94._12_2_ = auVar89._6_2_;
      auVar94._14_2_ = auVar86._8_2_;
      auVar93._12_4_ = auVar94._12_4_;
      auVar93._0_10_ = auVar89._0_10_;
      auVar93._10_2_ = auVar86._6_2_;
      auVar92._10_6_ = auVar93._10_6_;
      auVar92._0_8_ = auVar89._0_8_;
      auVar92._8_2_ = auVar89._4_2_;
      auVar38._4_8_ = auVar92._8_8_;
      auVar38._2_2_ = auVar86._4_2_;
      auVar38._0_2_ = auVar89._2_2_;
      auVar87._6_2_ = auVar86._2_2_;
      auVar87._4_2_ = auVar89._0_2_;
      auVar88._0_8_ = auVar81._0_8_;
      auVar88._8_4_ = auVar37._0_4_;
      auVar88._12_4_ = auVar38._0_4_;
      auVar87._8_8_ = auVar88._8_8_;
      auVar87._0_4_ = auVar81._0_4_;
      auVar85._4_4_ = auVar92._8_4_;
      auVar85._0_4_ = auVar82._8_4_;
      auVar85._8_4_ = auVar83._12_4_;
      auVar85._12_4_ = auVar93._12_4_;
      auVar101._8_8_ = auVar87._8_8_;
      auVar101._0_8_ = auVar87._8_8_;
      auVar86 = paddusw(auVar101,auVar87);
      auVar86 = paddusw(auVar86,auVar85);
      auVar86 = paddusw(auVar86,_DAT_1430864f0);
      auVar86 = psraw(auVar86,7);
      sVar6 = auVar86._0_2_;
      sVar7 = auVar86._2_2_;
      sVar8 = auVar86._4_2_;
      sVar9 = auVar86._6_2_;
      *(uint *)param_2 =
           CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar86[6] - (0xff < sVar9),
                    CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar86[4] - (0xff < sVar8),
                             CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar86[2] - (0xff < sVar7),
                                      (0 < sVar6) * (sVar6 < 0x100) * auVar86[0] - (0xff < sVar6))))
      ;
      param_2 = (undefined8 *)((longlong)param_2 + 4);
    }
    param_3 = param_3 & 3;
    if ((param_3 != 0) && (param_3 != 0)) {
      iVar71 = 1;
      lVar75 = 0;
      if (param_3 >> 1 != 0) {
        uVar79 = 0;
        do {
          uVar78 = uVar79;
          *(char *)((longlong)param_2 + uVar78 * 2) =
               (char)((uint)*(byte *)(lVar75 + (longlong)param_1) * (uint)uVar14 +
                      (uint)*(byte *)(lVar75 + 1 + (longlong)param_1) * (uint)uVar15 + 0x4000 +
                      (uint)*(byte *)(lVar75 + 2 + (longlong)param_1) * (uint)uVar16 >> 0xf);
          lVar1 = lVar75 + 3;
          lVar2 = lVar75 + 4;
          lVar3 = lVar75 + 5;
          lVar75 = lVar75 + 6;
          *(char *)((longlong)param_2 + uVar78 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar14 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar15 + 0x4000 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar16 >> 0xf);
          uVar79 = uVar78 + 1;
        } while (uVar79 < param_3 >> 1);
        iVar71 = (int)uVar78 + 2 + (int)uVar79;
      }
      if (iVar71 - 1U < param_3) {
        lVar75 = (longlong)iVar71 * 3;
        *(char *)((longlong)iVar71 + -1 + (longlong)param_2) =
             (char)((uint)uVar14 * (uint)*(byte *)(lVar75 + -3 + (longlong)param_1) +
                    (uint)uVar15 * (uint)*(byte *)(lVar75 + -2 + (longlong)param_1) + 0x4000 +
                    (uint)uVar16 * (uint)*(byte *)(lVar75 + -1 + (longlong)param_1) >> 0xf);
      }
    }
    return;
  }
  auVar86._8_8_ = auVar86._0_8_;
  iVar71 = 0;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      uVar4 = *param_1;
      iVar71 = iVar71 + 8;
      uVar5 = param_1[1];
      auVar46[10] = 0;
      auVar46._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar46[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar55[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar55._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar55._10_2_ = auVar46._10_2_;
      auVar64._9_3_ = auVar55._9_3_;
      auVar64._0_9_ = (unkuint9)0;
      auVar30._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar64._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar30[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar30._11_5_ = 0;
      auVar29._1_12_ = SUB1612(auVar30 << 0x28,4);
      auVar29[0] = (char)((ulonglong)uVar4 >> 8);
      auVar29._13_3_ = 0;
      auVar19._1_14_ = SUB1614(auVar29 << 0x18,2);
      auVar19[0] = (char)uVar4;
      auVar19[0xf] = 0;
      uVar4 = param_1[2];
      auVar91 = pmulhuw(auVar19 << 8,auVar86);
      auVar47[10] = 0;
      auVar47._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar47[0xb] = (char)((ulonglong)uVar5 >> 0x28);
      auVar56[9] = (char)((ulonglong)uVar5 >> 0x20);
      auVar56._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar56._10_2_ = auVar47._10_2_;
      auVar65._9_3_ = auVar56._9_3_;
      auVar65._0_9_ = (unkuint9)0;
      auVar32._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar65._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
      auVar32[0] = (char)((ulonglong)uVar5 >> 0x10);
      auVar32._11_5_ = 0;
      auVar31._1_12_ = SUB1612(auVar32 << 0x28,4);
      auVar31[0] = (char)((ulonglong)uVar5 >> 8);
      auVar31._13_3_ = 0;
      auVar20._1_14_ = SUB1614(auVar31 << 0x18,2);
      auVar20[0] = (char)uVar5;
      auVar20[0xf] = 0;
      uVar5 = param_1[3];
      auVar48[10] = 0;
      auVar48._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar48[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar57[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar57._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar57._10_2_ = auVar48._10_2_;
      auVar66._9_3_ = auVar57._9_3_;
      auVar66._0_9_ = (unkuint9)0;
      auVar34._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar66._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar34[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar34._11_5_ = 0;
      auVar33._1_12_ = SUB1612(auVar34 << 0x28,4);
      auVar33[0] = (char)((ulonglong)uVar4 >> 8);
      auVar33._13_3_ = 0;
      auVar21._1_14_ = SUB1614(auVar33 << 0x18,2);
      auVar21[0] = (char)uVar4;
      auVar21[0xf] = 0;
      param_1 = param_1 + 4;
      auVar123 = pmulhuw(auVar20 << 8,auVar86);
      auVar49[10] = 0;
      auVar49._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar49[0xb] = (char)((ulonglong)uVar5 >> 0x28);
      auVar58[9] = (char)((ulonglong)uVar5 >> 0x20);
      auVar58._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar58._10_2_ = auVar49._10_2_;
      auVar67._9_3_ = auVar58._9_3_;
      auVar67._0_9_ = (unkuint9)0;
      auVar36._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar67._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
      auVar36[0] = (char)((ulonglong)uVar5 >> 0x10);
      auVar36._11_5_ = 0;
      auVar35._1_12_ = SUB1612(auVar36 << 0x28,4);
      auVar35[0] = (char)((ulonglong)uVar5 >> 8);
      auVar35._13_3_ = 0;
      auVar22._1_14_ = SUB1614(auVar35 << 0x18,2);
      auVar22[0] = (char)uVar5;
      auVar22[0xf] = 0;
      auVar110 = pmulhuw(auVar21 << 8,auVar86);
      auVar102 = pmulhuw(auVar22 << 8,auVar86);
      auVar117._0_8_ = auVar91._0_8_;
      auVar117._8_8_ = auVar123._0_8_;
      auVar124._0_8_ = auVar110._0_8_;
      auVar124._8_8_ = auVar102._0_8_;
      auVar106._0_12_ = auVar117._0_12_;
      auVar106._12_2_ = auVar91._6_2_;
      auVar106._14_2_ = auVar91._14_2_;
      auVar105._12_4_ = auVar106._12_4_;
      auVar105._0_10_ = auVar117._0_10_;
      auVar105._10_2_ = auVar91._12_2_;
      auVar104._10_6_ = auVar105._10_6_;
      auVar104._8_2_ = auVar91._4_2_;
      auVar104._0_8_ = auVar117._0_8_;
      auVar39._4_8_ = auVar104._8_8_;
      auVar39._2_2_ = auVar91._10_2_;
      auVar39._0_2_ = auVar91._2_2_;
      auVar103._0_4_ = CONCAT22(auVar91._8_2_,auVar91._0_2_);
      auVar103._4_12_ = auVar39;
      uVar113 = CONCAT22(auVar123._8_2_,auVar123._0_2_);
      auVar114._0_8_ = CONCAT26(auVar123._10_2_,CONCAT24(auVar123._2_2_,uVar113));
      auVar114._8_2_ = auVar123._4_2_;
      auVar114._10_2_ = auVar123._12_2_;
      auVar98._0_12_ = auVar124._0_12_;
      auVar98._12_2_ = auVar110._6_2_;
      auVar98._14_2_ = auVar110._14_2_;
      auVar97._12_4_ = auVar98._12_4_;
      auVar97._0_10_ = auVar124._0_10_;
      auVar97._10_2_ = auVar110._12_2_;
      auVar96._10_6_ = auVar97._10_6_;
      auVar96._8_2_ = auVar110._4_2_;
      auVar96._0_8_ = auVar124._0_8_;
      auVar40._4_8_ = auVar96._8_8_;
      auVar40._2_2_ = auVar110._10_2_;
      auVar40._0_2_ = auVar110._2_2_;
      auVar95._0_4_ = CONCAT22(auVar110._8_2_,auVar110._0_2_);
      auVar95._4_12_ = auVar40;
      uVar119 = CONCAT22(auVar102._8_2_,auVar102._0_2_);
      auVar120._0_8_ = CONCAT26(auVar102._10_2_,CONCAT24(auVar102._2_2_,uVar119));
      auVar120._8_2_ = auVar102._4_2_;
      auVar120._10_2_ = auVar102._12_2_;
      auVar111._0_8_ = auVar103._0_8_;
      auVar111._8_4_ = auVar39._0_4_;
      auVar111._12_4_ = (int)((ulonglong)auVar114._0_8_ >> 0x20);
      auVar99._4_4_ = uVar113;
      auVar99._0_4_ = auVar103._0_4_;
      auVar107._4_4_ = auVar114._8_4_;
      auVar107._0_4_ = auVar104._8_4_;
      auVar107._12_4_ = auVar120._8_4_;
      auVar107._8_4_ = auVar96._8_4_;
      auVar118._0_8_ = auVar95._0_8_;
      auVar118._8_4_ = auVar40._0_4_;
      auVar118._12_4_ = (int)((ulonglong)auVar120._0_8_ >> 0x20);
      auVar99._12_4_ = uVar119;
      auVar99._8_4_ = auVar95._0_4_;
      auVar112._8_8_ = auVar118._8_8_;
      auVar112._0_8_ = auVar111._8_8_;
      auVar91 = paddusw(auVar107,auVar99);
      auVar91 = paddusw(auVar91,auVar112);
      auVar91 = paddusw(auVar91,auVar81);
      auVar91 = psraw(auVar91,7);
      sVar6 = auVar91._0_2_;
      sVar7 = auVar91._2_2_;
      sVar8 = auVar91._4_2_;
      sVar9 = auVar91._6_2_;
      sVar10 = auVar91._8_2_;
      sVar11 = auVar91._10_2_;
      sVar12 = auVar91._12_2_;
      sVar13 = auVar91._14_2_;
      *param_2 = CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar91[0xe] - (0xff < sVar13),
                          CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar91[0xc] - (0xff < sVar12),
                                   CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar91[10] -
                                            (0xff < sVar11),
                                            CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar91[8] -
                                                     (0xff < sVar10),
                                                     CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                              auVar91[6] - (0xff < sVar9),
                                                              CONCAT12((0 < sVar8) * (sVar8 < 0x100)
                                                                       * auVar91[4] - (0xff < sVar8)
                                                                       ,CONCAT11((0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar91[2] -
                                                                                 (0xff < sVar7),
                                                                                 (0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar91[0] -
                                                                                 (0xff < sVar6))))))
                                  ));
      param_2 = param_2 + 1;
    } while (iVar71 < (int)(param_3 & 0xfffffff8));
  }
  auVar91 = _DAT_143086520;
  iVar70 = _UNK_14308651c;
  iVar69 = _UNK_143086518;
  iVar68 = _UNK_143086514;
  iVar71 = _DAT_143086510;
  auVar86 = _DAT_143086500;
  uVar77 = param_3 & 7;
  if ((uVar77 != 0) && (uVar77 != 0)) {
    uVar79 = (ulonglong)uVar77;
    uVar73 = (uint)uVar14;
    uVar74 = (uint)uVar15;
    uVar72 = (uint)uVar16;
    if (((longlong)param_2 - (longlong)param_1 < (longlong)(uVar79 * 4 + -1)) &&
       (-((longlong)param_2 - (longlong)param_1) < (longlong)uVar79)) {
      iVar71 = 1;
      uVar79 = 0;
      if (uVar77 >> 1 != 0) {
        do {
          uVar78 = uVar79;
          *(char *)((longlong)param_2 + uVar78 * 2) =
               (char)(*(byte *)(param_1 + uVar78) * uVar73 +
                      *(byte *)((longlong)param_1 + uVar78 * 8 + 1) * uVar74 + 0x4000 +
                      *(byte *)((longlong)param_1 + uVar78 * 8 + 2) * uVar72 >> 0xf);
          *(char *)((longlong)param_2 + uVar78 * 2 + 1) =
               (char)(*(byte *)((longlong)param_1 + uVar78 * 8 + 4) * uVar73 +
                      *(byte *)((longlong)param_1 + uVar78 * 8 + 5) * uVar74 + 0x4000 +
                      *(byte *)((longlong)param_1 + uVar78 * 8 + 6) * uVar72 >> 0xf);
          uVar79 = uVar78 + 1;
        } while (uVar79 < uVar77 >> 1);
        iVar71 = (int)uVar78 + 2 + (int)uVar79;
      }
      if (iVar71 - 1U < uVar77) {
        lVar75 = (longlong)iVar71;
        *(char *)(lVar75 + -1 + (longlong)param_2) =
             (char)(uVar73 * *(byte *)((longlong)param_1 + lVar75 * 4 + -4) +
                    uVar74 * *(byte *)((longlong)param_1 + lVar75 * 4 + -3) + 0x4000 +
                    uVar72 * *(byte *)((longlong)param_1 + lVar75 * 4 + -2) >> 0xf);
      }
    }
    else {
      if (uVar79 < 4) {
        FUN_140010e2c(0,auVar81._0_8_,0);
        return;
      }
      uVar78 = (ulonglong)(param_3 & 4);
      uVar76 = 0;
      auVar89._12_2_ = uVar14;
      auVar89._0_12_ = ZEXT212(uVar14) << 0x40;
      auVar17._12_2_ = uVar15;
      auVar17._0_12_ = ZEXT212(uVar15) << 0x40;
      auVar18._12_2_ = uVar16;
      auVar18._0_12_ = ZEXT212(uVar16) << 0x40;
      do {
        auVar110 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 0xc),
                                    CONCAT12(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 8),
                                             CONCAT11(*(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4 + 4),
                                                      *(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4)))));
        auVar102 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 0xd),
                                    CONCAT12(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 9),
                                             CONCAT11(*(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4 + 5),
                                                      *(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4 + 1)))));
        auVar110 = pmovzxbd(auVar110,auVar110);
        auVar102 = pmovzxbd(auVar102,auVar102);
        auVar125._0_8_ = (ulonglong)uVar73 * (ulonglong)auVar110._0_4_;
        auVar125._8_8_ = ((ulonglong)auVar89._8_6_ & 0xffffffff) * (ulonglong)auVar110._8_4_;
        auVar123 = ZEXT416(CONCAT13(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 0xe),
                                    CONCAT12(*(undefined1 *)((longlong)param_1 + uVar76 * 4 + 10),
                                             CONCAT11(*(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4 + 6),
                                                      *(undefined1 *)
                                                       ((longlong)param_1 + uVar76 * 4 + 2)))));
        auVar123 = pmovzxbd(auVar123,auVar123);
        auVar128._0_8_ = (ulonglong)uVar74 * (ulonglong)auVar102._0_4_;
        auVar128._8_8_ = ((ulonglong)auVar17._8_6_ & 0xffffffff) * (ulonglong)auVar102._8_4_;
        auVar130._0_8_ = (ulonglong)uVar72 * (ulonglong)auVar123._0_4_;
        auVar130._8_8_ = ((ulonglong)auVar18._8_6_ & 0xffffffff) * (ulonglong)auVar123._8_4_;
        auVar126._0_8_ = (auVar110._0_8_ >> 0x20) * (ulonglong)uVar73 << 0x20;
        auVar126._8_8_ = (auVar110._8_8_ >> 0x20) * (ulonglong)(auVar89._8_6_ >> 0x20) << 0x20;
        auVar129._0_8_ = (auVar102._0_8_ >> 0x20) * (ulonglong)uVar74 << 0x20;
        auVar129._8_8_ = (auVar102._8_8_ >> 0x20) * (ulonglong)(auVar17._8_6_ >> 0x20) << 0x20;
        auVar131._0_8_ = (auVar123._0_8_ >> 0x20) * (ulonglong)uVar72 << 0x20;
        auVar131._8_8_ = (auVar123._8_8_ >> 0x20) * (ulonglong)(auVar18._8_6_ >> 0x20) << 0x20;
        auVar126 = auVar125 & auVar86 | auVar126;
        auVar129 = auVar128 & auVar86 | auVar129;
        auVar131 = auVar130 & auVar86 | auVar131;
        auVar127._0_4_ = auVar126._0_4_ + auVar129._0_4_ + auVar131._0_4_ + iVar71 >> 0xf;
        auVar127._4_4_ = auVar126._4_4_ + auVar129._4_4_ + auVar131._4_4_ + iVar68 >> 0xf;
        auVar127._8_4_ = auVar126._8_4_ + auVar129._8_4_ + auVar131._8_4_ + iVar69 >> 0xf;
        auVar127._12_4_ = auVar126._12_4_ + auVar129._12_4_ + auVar131._12_4_ + iVar70 >> 0xf;
        auVar102 = pshufb(auVar127,auVar91);
        *(int *)(uVar76 + (longlong)param_2) = auVar102._0_4_;
        uVar76 = uVar76 + 4;
      } while (uVar76 < uVar78);
      for (; uVar78 < uVar79; uVar78 = uVar78 + 1) {
        *(char *)(uVar78 + (longlong)param_2) =
             (char)(*(byte *)((longlong)param_1 + uVar78 * 4) * uVar73 +
                    *(byte *)((longlong)param_1 + uVar78 * 4 + 1) * uVar74 + 0x4000 +
                    *(byte *)((longlong)param_1 + uVar78 * 4 + 2) * uVar72 >> 0xf);
      }
    }
  }
  return;
}

