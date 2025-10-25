
/* WARNING: Removing unreachable block (ram,0x00014000fa28) */
/* WARNING: Removing unreachable block (ram,0x00014000f943) */
/* WARNING: Removing unreachable block (ram,0x00014000f87a) */
/* WARNING: Removing unreachable block (ram,0x00014000f91e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f840(byte *param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16],
                  int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
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
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  undefined1 auVar70 [12];
  undefined1 auVar71 [12];
  undefined1 auVar72 [12];
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  int iVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  longlong lVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 uVar115;
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar114 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined4 uVar118;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined4 uVar128;
  undefined1 auVar130 [16];
  undefined1 auVar135 [14];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar140 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar98 [16];
  undefined1 auVar94 [16];
  undefined1 auVar99 [16];
  undefined1 auVar95 [16];
  undefined1 auVar100 [16];
  undefined1 auVar103 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar113 [16];
  undefined1 auVar122 [16];
  undefined1 auVar119 [12];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar129 [12];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  
  auVar92 = _DAT_1430863f0;
  auVar89 = *param_4;
  uVar15 = auVar89._0_2_;
  uVar16 = auVar89._2_2_;
  uVar17 = auVar89._4_2_;
  if (param_5 != 4) {
    auVar96._0_8_ = auVar89._4_8_;
    auVar96._8_8_ = auVar89._0_8_;
    iVar77 = 0;
    auVar109._8_8_ = auVar96._0_8_;
    auVar109._0_8_ = auVar89._8_8_;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        uVar4 = *(undefined8 *)param_1;
        auVar50[10] = 0;
        auVar50._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar50[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar59[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar59._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar59._10_2_ = auVar50._10_2_;
        auVar68._9_3_ = auVar59._9_3_;
        auVar68._0_9_ = (unkuint9)0;
        auVar25._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar68._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar25[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar25._11_5_ = 0;
        auVar136._1_12_ = SUB1612(auVar25 << 0x28,4);
        auVar136[0] = (char)((ulonglong)uVar4 >> 8);
        auVar136._13_3_ = 0;
        auVar120._1_14_ = SUB1614(auVar136 << 0x18,2);
        auVar120[0] = (char)uVar4;
        auVar120[0xf] = 0;
        uVar4 = *(undefined8 *)(param_1 + 8);
        auVar136 = pmulhuw(auVar120 << 8,auVar89);
        iVar77 = iVar77 + 8;
        auVar51[10] = 0;
        auVar51._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar51[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar60[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar60._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar60._10_2_ = auVar51._10_2_;
        auVar69._9_3_ = auVar60._9_3_;
        auVar69._0_9_ = (unkuint9)0;
        auVar27._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar69._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar27[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar27._11_5_ = 0;
        auVar26._1_12_ = SUB1612(auVar27 << 0x28,4);
        auVar26[0] = (char)((ulonglong)uVar4 >> 8);
        auVar26._13_3_ = 0;
        auVar130._1_14_ = SUB1614(auVar26 << 0x18,2);
        auVar130[0] = (char)uVar4;
        auVar130[0xf] = 0;
        auVar120 = pmulhuw(auVar130 << 8,auVar96);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        param_1 = param_1 + 0x18;
        auVar52[10] = 0;
        auVar52._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar52[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar61[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar61._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar61._10_2_ = auVar52._10_2_;
        auVar70._9_3_ = auVar61._9_3_;
        auVar70._0_9_ = (unkuint9)0;
        auVar29._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar70._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar29[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar29._11_5_ = 0;
        auVar28._1_12_ = SUB1612(auVar29 << 0x28,4);
        auVar28[0] = (char)((ulonglong)uVar4 >> 8);
        auVar28._13_3_ = 0;
        auVar19._1_14_ = SUB1614(auVar28 << 0x18,2);
        auVar19[0] = (char)uVar4;
        auVar19[0xf] = 0;
        auVar130 = pmulhuw(auVar19 << 8,auVar109);
        auVar104._0_12_ = auVar136._0_12_;
        auVar105._12_2_ = auVar136._6_2_;
        auVar105._0_12_ = auVar104._0_12_;
        auVar105._14_2_ = auVar136._12_2_;
        auVar104._12_4_ = auVar105._12_4_;
        auVar103._10_6_ = auVar104._10_6_;
        auVar103._0_8_ = auVar136._0_8_;
        auVar103._8_2_ = auVar136._4_2_;
        auVar42._4_8_ = auVar103._8_8_;
        auVar42._2_2_ = auVar136._8_2_;
        auVar42._0_2_ = auVar136._2_2_;
        auVar102._0_4_ = CONCAT22(auVar136._6_2_,auVar136._0_2_);
        auVar102._4_12_ = auVar42;
        auVar132._0_8_ = auVar120._0_8_ << 0x20;
        auVar132._8_8_ = auVar120._8_8_ << 0x20 | auVar120._0_8_ >> 0x20;
        auVar135 = ZEXT414(auVar136._12_4_) | auVar132._0_14_;
        auVar139._0_12_ = auVar135._0_12_;
        auVar139._12_2_ = auVar135._6_2_;
        auVar139._14_2_ = auVar120._8_2_;
        auVar138._12_4_ = auVar139._12_4_;
        auVar138._0_10_ = auVar135._0_10_;
        auVar138._10_2_ = auVar120._6_2_;
        auVar137._10_6_ = auVar138._10_6_;
        auVar137._0_8_ = auVar135._0_8_;
        auVar137._8_2_ = auVar135._4_2_;
        auVar43._4_8_ = auVar137._8_8_;
        auVar43._2_2_ = auVar120._4_2_;
        auVar43._0_2_ = auVar135._2_2_;
        auVar134._6_2_ = auVar120._2_2_;
        auVar134._4_2_ = auVar135._0_2_;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = auVar130._0_8_;
        auVar120 = auVar120 >> 0x40 | auVar44 << 0x40;
        auVar123._0_12_ = auVar120._0_12_;
        auVar124._12_2_ = auVar120._6_2_;
        auVar124._0_12_ = auVar123._0_12_;
        auVar124._14_2_ = auVar120._12_2_;
        auVar123._12_4_ = auVar124._12_4_;
        auVar122._10_6_ = auVar123._10_6_;
        auVar122._0_8_ = auVar120._0_8_;
        auVar122._8_2_ = auVar120._4_2_;
        auVar45._4_8_ = auVar122._8_8_;
        auVar45._2_2_ = auVar120._8_2_;
        auVar45._0_2_ = auVar120._2_2_;
        auVar121._0_4_ = CONCAT22(auVar120._6_2_,auVar120._0_2_);
        auVar121._4_12_ = auVar45;
        auVar135._12_2_ = auVar130._10_2_;
        auVar135._0_12_ = auVar130._4_12_;
        auVar18._8_2_ = auVar130._8_2_;
        auVar18._0_8_ = auVar130._4_8_;
        auVar18._10_4_ = auVar135._10_4_;
        auVar134._14_2_ = auVar130._10_2_;
        auVar134._12_2_ = auVar130._4_2_;
        auVar133._0_8_ = auVar102._0_8_;
        auVar133._8_4_ = auVar42._0_4_;
        auVar133._12_4_ = auVar43._0_4_;
        auVar134._0_4_ = auVar102._0_4_;
        auVar106._4_4_ = auVar137._8_4_;
        auVar106._0_4_ = auVar103._8_4_;
        auVar106._12_4_ = auVar18._8_4_;
        auVar106._8_4_ = auVar122._8_4_;
        auVar140._0_8_ = auVar121._0_8_;
        auVar140._8_4_ = auVar45._0_4_;
        auVar140._12_4_ = (int)CONCAT82(CONCAT62(auVar18._8_6_,auVar130._12_2_),auVar130._6_2_);
        auVar134._8_4_ = auVar121._0_4_;
        auVar125._8_8_ = auVar140._8_8_;
        auVar125._0_8_ = auVar133._8_8_;
        auVar120 = paddusw(auVar125,auVar134);
        auVar120 = paddusw(auVar120,auVar106);
        auVar120 = paddusw(auVar120,auVar92);
        auVar120 = psraw(auVar120,7);
        sVar7 = auVar120._0_2_;
        sVar8 = auVar120._2_2_;
        sVar9 = auVar120._4_2_;
        sVar10 = auVar120._6_2_;
        sVar11 = auVar120._8_2_;
        sVar12 = auVar120._10_2_;
        sVar13 = auVar120._12_2_;
        sVar14 = auVar120._14_2_;
        *param_2 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar120[0xe] - (0xff < sVar14),
                            CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar120[0xc] -
                                     (0xff < sVar13),
                                     CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar120[10] -
                                              (0xff < sVar12),
                                              CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar120[8]
                                                       - (0xff < sVar11),
                                                       CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                                auVar120[6] - (0xff < sVar10),
                                                                CONCAT12((0 < sVar9) *
                                                                         (sVar9 < 0x100) *
                                                                         auVar120[4] -
                                                                         (0xff < sVar9),
                                                                         CONCAT11((0 < sVar8) *
                                                                                  (sVar8 < 0x100) *
                                                                                  auVar120[2] -
                                                                                  (0xff < sVar8),
                                                                                  (0 < sVar7) *
                                                                                  (sVar7 < 0x100) *
                                                                                  auVar120[0] -
                                                                                  (0xff < sVar7)))))
                                             )));
        param_2 = param_2 + 1;
      } while (iVar77 < (int)(param_3 & 0xfffffff8));
    }
    if ((param_3 & 4) != 0) {
      uVar4 = *(undefined8 *)param_1;
      uVar118 = *(undefined4 *)(param_1 + 8);
      param_1 = param_1 + 0xc;
      auVar53[10] = 0;
      auVar53._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar53[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar62[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar62._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar62._10_2_ = auVar53._10_2_;
      auVar71._9_3_ = auVar62._9_3_;
      auVar71._0_9_ = (unkuint9)0;
      auVar31._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar71._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar31[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar31._11_5_ = 0;
      auVar30._1_12_ = SUB1612(auVar31 << 0x28,4);
      auVar30[0] = (char)((ulonglong)uVar4 >> 8);
      auVar30._13_3_ = 0;
      auVar92._1_14_ = SUB1614(auVar30 << 0x18,2);
      auVar92[0] = (char)uVar4;
      auVar92[0xf] = 0;
      uVar115 = (undefined1)((uint)uVar118 >> 8);
      auVar54[10] = 0;
      auVar54._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar54[0xb] = uVar115;
      auVar63[9] = (char)uVar118;
      auVar63._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar63._10_2_ = auVar54._10_2_;
      auVar72._9_3_ = auVar63._9_3_;
      auVar72._0_9_ = (unkuint9)0;
      auVar33._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar72._8_4_,(char)((uint)uVar118 >> 0x18))) << 0x38,6);
      auVar33[0] = (char)((uint)uVar118 >> 0x10);
      auVar33._11_5_ = 0;
      auVar32._1_12_ = SUB1612(auVar33 << 0x28,4);
      auVar32[0] = uVar115;
      auVar32._13_3_ = 0;
      auVar20._1_14_ = SUB1614(auVar32 << 0x18,2);
      auVar20[0] = (char)uVar118;
      auVar20[0xf] = 0;
      auVar92 = pmulhuw(auVar92 << 8,auVar89);
      auVar89 = pmulhuw(auVar20 << 8,auVar96);
      auVar107._0_8_ = auVar89._0_8_ << 0x20;
      auVar107._8_8_ = auVar89._8_8_ << 0x20 | auVar89._0_8_ >> 0x20;
      auVar86._0_12_ = auVar92._0_12_;
      auVar87._12_2_ = auVar92._6_2_;
      auVar87._0_12_ = auVar86._0_12_;
      auVar87._14_2_ = auVar92._12_2_;
      auVar86._12_4_ = auVar87._12_4_;
      auVar85._10_6_ = auVar86._10_6_;
      auVar85._0_8_ = auVar92._0_8_;
      auVar85._8_2_ = auVar92._4_2_;
      auVar46._4_8_ = auVar85._8_8_;
      auVar46._2_2_ = auVar92._8_2_;
      auVar46._0_2_ = auVar92._2_2_;
      auVar84._0_4_ = CONCAT22(auVar92._6_2_,auVar92._0_2_);
      auVar84._4_12_ = auVar46;
      auVar135 = ZEXT414(auVar92._12_4_) | auVar107._0_14_;
      auVar95._0_12_ = auVar135._0_12_;
      auVar95._12_2_ = auVar135._6_2_;
      auVar95._14_2_ = auVar89._8_2_;
      auVar94._12_4_ = auVar95._12_4_;
      auVar94._0_10_ = auVar135._0_10_;
      auVar94._10_2_ = auVar89._6_2_;
      auVar93._10_6_ = auVar94._10_6_;
      auVar93._0_8_ = auVar135._0_8_;
      auVar93._8_2_ = auVar135._4_2_;
      auVar47._4_8_ = auVar93._8_8_;
      auVar47._2_2_ = auVar89._4_2_;
      auVar47._0_2_ = auVar135._2_2_;
      auVar90._6_2_ = auVar89._2_2_;
      auVar90._4_2_ = auVar135._0_2_;
      auVar91._0_8_ = auVar84._0_8_;
      auVar91._8_4_ = auVar46._0_4_;
      auVar91._12_4_ = auVar47._0_4_;
      auVar90._8_8_ = auVar91._8_8_;
      auVar90._0_4_ = auVar84._0_4_;
      auVar108._8_8_ = auVar90._8_8_;
      auVar108._0_8_ = auVar90._8_8_;
      auVar88._4_4_ = auVar93._8_4_;
      auVar88._0_4_ = auVar85._8_4_;
      auVar88._8_4_ = auVar86._12_4_;
      auVar88._12_4_ = auVar94._12_4_;
      auVar89 = paddusw(auVar108,auVar90);
      auVar89 = paddusw(auVar89,auVar88);
      auVar89 = paddusw(auVar89,_DAT_1430863f0);
      auVar89 = psraw(auVar89,7);
      sVar7 = auVar89._0_2_;
      sVar8 = auVar89._2_2_;
      sVar9 = auVar89._4_2_;
      sVar10 = auVar89._6_2_;
      *(uint *)param_2 =
           CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar89[6] - (0xff < sVar10),
                    CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar89[4] - (0xff < sVar9),
                             CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar89[2] - (0xff < sVar8),
                                      (0 < sVar7) * (sVar7 < 0x100) * auVar89[0] - (0xff < sVar7))))
      ;
      param_2 = (undefined8 *)((longlong)param_2 + 4);
    }
    param_3 = param_3 & 3;
    if ((param_3 != 0) && (param_3 != 0)) {
      iVar77 = 1;
      lVar81 = 0;
      if (param_3 >> 1 != 0) {
        uVar83 = 0;
        do {
          uVar82 = uVar83;
          *(char *)((longlong)param_2 + uVar82 * 2) =
               (char)((uint)param_1[lVar81] * (uint)uVar15 +
                      (uint)param_1[lVar81 + 1] * (uint)uVar16 + 0x4000 +
                      (uint)param_1[lVar81 + 2] * (uint)uVar17 >> 0xf);
          lVar1 = lVar81 + 3;
          lVar2 = lVar81 + 4;
          lVar3 = lVar81 + 5;
          lVar81 = lVar81 + 6;
          *(char *)((longlong)param_2 + uVar82 * 2 + 1) =
               (char)((uint)param_1[lVar1] * (uint)uVar15 + (uint)param_1[lVar2] * (uint)uVar16 +
                      0x4000 + (uint)param_1[lVar3] * (uint)uVar17 >> 0xf);
          uVar83 = uVar82 + 1;
        } while (uVar83 < param_3 >> 1);
        iVar77 = (int)uVar82 + 2 + (int)uVar83;
      }
      if (iVar77 - 1U < param_3) {
        lVar81 = (longlong)iVar77 * 3;
        *(char *)((longlong)iVar77 + -1 + (longlong)param_2) =
             (char)((uint)uVar15 * (uint)param_1[lVar81 + -3] +
                    (uint)uVar16 * (uint)param_1[lVar81 + -2] + 0x4000 +
                    (uint)uVar17 * (uint)param_1[lVar81 + -1] >> 0xf);
      }
    }
    return;
  }
  iVar77 = 0;
  auVar89._8_8_ = auVar89._0_8_;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      iVar77 = iVar77 + 8;
      auVar55[10] = 0;
      auVar55._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar55[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar64[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar64._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar64._10_2_ = auVar55._10_2_;
      auVar73._9_3_ = auVar64._9_3_;
      auVar73._0_9_ = (unkuint9)0;
      auVar35._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar73._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar35[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar35._11_5_ = 0;
      auVar34._1_12_ = SUB1612(auVar35 << 0x28,4);
      auVar34[0] = (char)((ulonglong)uVar4 >> 8);
      auVar34._13_3_ = 0;
      auVar21._1_14_ = SUB1614(auVar34 << 0x18,2);
      auVar21[0] = (char)uVar4;
      auVar21[0xf] = 0;
      auVar96 = pmulhuw(auVar21 << 8,auVar89);
      auVar56[10] = 0;
      auVar56._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar56[0xb] = (char)((ulonglong)uVar5 >> 0x28);
      auVar65[9] = (char)((ulonglong)uVar5 >> 0x20);
      auVar65._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar65._10_2_ = auVar56._10_2_;
      auVar74._9_3_ = auVar65._9_3_;
      auVar74._0_9_ = (unkuint9)0;
      auVar37._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar74._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
      auVar37[0] = (char)((ulonglong)uVar5 >> 0x10);
      auVar37._11_5_ = 0;
      auVar36._1_12_ = SUB1612(auVar37 << 0x28,4);
      auVar36[0] = (char)((ulonglong)uVar5 >> 8);
      auVar36._13_3_ = 0;
      auVar22._1_14_ = SUB1614(auVar36 << 0x18,2);
      auVar22[0] = (char)uVar5;
      auVar22[0xf] = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      param_1 = param_1 + 0x20;
      auVar57[10] = 0;
      auVar57._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar57[0xb] = (char)((ulonglong)uVar6 >> 0x28);
      auVar66[9] = (char)((ulonglong)uVar6 >> 0x20);
      auVar66._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar66._10_2_ = auVar57._10_2_;
      auVar75._9_3_ = auVar66._9_3_;
      auVar75._0_9_ = (unkuint9)0;
      auVar39._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar75._8_4_,(char)((ulonglong)uVar6 >> 0x18))) << 0x38,6);
      auVar39[0] = (char)((ulonglong)uVar6 >> 0x10);
      auVar39._11_5_ = 0;
      auVar38._1_12_ = SUB1612(auVar39 << 0x28,4);
      auVar38[0] = (char)((ulonglong)uVar6 >> 8);
      auVar38._13_3_ = 0;
      auVar23._1_14_ = SUB1614(auVar38 << 0x18,2);
      auVar23[0] = (char)uVar6;
      auVar23[0xf] = 0;
      auVar130 = pmulhuw(auVar22 << 8,auVar89);
      auVar120 = pmulhuw(auVar23 << 8,auVar89);
      auVar58[10] = 0;
      auVar58._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar58[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar67[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar67._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar67._10_2_ = auVar58._10_2_;
      auVar76._9_3_ = auVar67._9_3_;
      auVar76._0_9_ = (unkuint9)0;
      auVar41._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar76._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar41[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar41._11_5_ = 0;
      auVar40._1_12_ = SUB1612(auVar41 << 0x28,4);
      auVar40[0] = (char)((ulonglong)uVar4 >> 8);
      auVar40._13_3_ = 0;
      auVar24._1_14_ = SUB1614(auVar40 << 0x18,2);
      auVar24[0] = (char)uVar4;
      auVar24[0xf] = 0;
      auVar109 = pmulhuw(auVar24 << 8,auVar89);
      auVar126._0_8_ = auVar96._0_8_;
      auVar126._8_8_ = auVar130._0_8_;
      auVar131._0_8_ = auVar120._0_8_;
      auVar131._8_8_ = auVar109._0_8_;
      auVar113._0_12_ = auVar126._0_12_;
      auVar113._12_2_ = auVar96._6_2_;
      auVar113._14_2_ = auVar96._14_2_;
      auVar112._12_4_ = auVar113._12_4_;
      auVar112._0_10_ = auVar126._0_10_;
      auVar112._10_2_ = auVar96._12_2_;
      auVar111._10_6_ = auVar112._10_6_;
      auVar111._8_2_ = auVar96._4_2_;
      auVar111._0_8_ = auVar126._0_8_;
      auVar48._4_8_ = auVar111._8_8_;
      auVar48._2_2_ = auVar96._10_2_;
      auVar48._0_2_ = auVar96._2_2_;
      auVar110._0_4_ = CONCAT22(auVar96._8_2_,auVar96._0_2_);
      auVar110._4_12_ = auVar48;
      uVar118 = CONCAT22(auVar130._8_2_,auVar130._0_2_);
      auVar119._0_8_ = CONCAT26(auVar130._10_2_,CONCAT24(auVar130._2_2_,uVar118));
      auVar119._8_2_ = auVar130._4_2_;
      auVar119._10_2_ = auVar130._12_2_;
      auVar100._0_12_ = auVar131._0_12_;
      auVar100._12_2_ = auVar120._6_2_;
      auVar100._14_2_ = auVar120._14_2_;
      auVar99._12_4_ = auVar100._12_4_;
      auVar99._0_10_ = auVar131._0_10_;
      auVar99._10_2_ = auVar120._12_2_;
      auVar98._10_6_ = auVar99._10_6_;
      auVar98._8_2_ = auVar120._4_2_;
      auVar98._0_8_ = auVar131._0_8_;
      auVar49._4_8_ = auVar98._8_8_;
      auVar49._2_2_ = auVar120._10_2_;
      auVar49._0_2_ = auVar120._2_2_;
      auVar97._0_4_ = CONCAT22(auVar120._8_2_,auVar120._0_2_);
      auVar97._4_12_ = auVar49;
      uVar128 = CONCAT22(auVar109._8_2_,auVar109._0_2_);
      auVar129._0_8_ = CONCAT26(auVar109._10_2_,CONCAT24(auVar109._2_2_,uVar128));
      auVar129._8_2_ = auVar109._4_2_;
      auVar129._10_2_ = auVar109._12_2_;
      auVar116._0_8_ = auVar110._0_8_;
      auVar116._8_4_ = auVar48._0_4_;
      auVar116._12_4_ = (int)((ulonglong)auVar119._0_8_ >> 0x20);
      auVar101._4_4_ = uVar118;
      auVar101._0_4_ = auVar110._0_4_;
      auVar114._4_4_ = auVar119._8_4_;
      auVar114._0_4_ = auVar111._8_4_;
      auVar114._12_4_ = auVar129._8_4_;
      auVar114._8_4_ = auVar98._8_4_;
      auVar127._0_8_ = auVar97._0_8_;
      auVar127._8_4_ = auVar49._0_4_;
      auVar127._12_4_ = (int)((ulonglong)auVar129._0_8_ >> 0x20);
      auVar101._12_4_ = uVar128;
      auVar101._8_4_ = auVar97._0_4_;
      auVar117._8_8_ = auVar127._8_8_;
      auVar117._0_8_ = auVar116._8_8_;
      auVar96 = paddusw(auVar114,auVar101);
      auVar96 = paddusw(auVar96,auVar117);
      auVar96 = paddusw(auVar96,auVar92);
      auVar96 = psraw(auVar96,7);
      sVar7 = auVar96._0_2_;
      sVar8 = auVar96._2_2_;
      sVar9 = auVar96._4_2_;
      sVar10 = auVar96._6_2_;
      sVar11 = auVar96._8_2_;
      sVar12 = auVar96._10_2_;
      sVar13 = auVar96._12_2_;
      sVar14 = auVar96._14_2_;
      *param_2 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar96[0xe] - (0xff < sVar14),
                          CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar96[0xc] - (0xff < sVar13),
                                   CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar96[10] -
                                            (0xff < sVar12),
                                            CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar96[8] -
                                                     (0xff < sVar11),
                                                     CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                              auVar96[6] - (0xff < sVar10),
                                                              CONCAT12((0 < sVar9) * (sVar9 < 0x100)
                                                                       * auVar96[4] - (0xff < sVar9)
                                                                       ,CONCAT11((0 < sVar8) *
                                                                                 (sVar8 < 0x100) *
                                                                                 auVar96[2] -
                                                                                 (0xff < sVar8),
                                                                                 (0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar96[0] -
                                                                                 (0xff < sVar7))))))
                                  ));
      param_2 = param_2 + 1;
    } while (iVar77 < (int)(param_3 & 0xfffffff8));
  }
  param_3 = param_3 & 7;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar80 = (uint)uVar15;
  uVar79 = (uint)uVar16;
  uVar78 = (uint)uVar17;
  if (((longlong)param_2 - (longlong)param_1 < (longlong)((ulonglong)param_3 * 4 + -1)) &&
     (-((longlong)param_2 - (longlong)param_1) < (longlong)(ulonglong)param_3)) {
    iVar77 = 1;
    uVar83 = 0;
    if (param_3 >> 1 != 0) {
      do {
        uVar82 = uVar83;
        *(char *)((longlong)param_2 + uVar82 * 2) =
             (char)(param_1[uVar82 * 8] * uVar80 + param_1[uVar82 * 8 + 1] * uVar79 + 0x4000 +
                    param_1[uVar82 * 8 + 2] * uVar78 >> 0xf);
        *(char *)((longlong)param_2 + uVar82 * 2 + 1) =
             (char)(param_1[uVar82 * 8 + 4] * uVar80 + param_1[uVar82 * 8 + 5] * uVar79 + 0x4000 +
                    param_1[uVar82 * 8 + 6] * uVar78 >> 0xf);
        uVar83 = uVar82 + 1;
      } while (uVar83 < param_3 >> 1);
      iVar77 = (int)uVar82 + 2 + (int)uVar83;
    }
    if (param_3 <= iVar77 - 1U) {
      return;
    }
    lVar81 = (longlong)iVar77;
    *(char *)(lVar81 + -1 + (longlong)param_2) =
         (char)(uVar80 * param_1[lVar81 * 4 + -4] + uVar79 * param_1[lVar81 * 4 + -3] + 0x4000 +
                uVar78 * param_1[lVar81 * 4 + -2] >> 0xf);
    return;
  }
  switch(param_3) {
  case 1:
    goto LAB_14000fe54;
  case 2:
    goto LAB_14000fe1d;
  case 3:
    goto LAB_14000fde4;
  case 4:
    goto LAB_14000fdab;
  case 5:
    goto LAB_14000fd72;
  case 6:
    break;
  case 7:
    *(char *)((longlong)param_2 + 6) =
         (char)(param_1[0x18] * uVar80 + param_1[0x19] * uVar79 + 0x4000 + param_1[0x1a] * uVar78 >>
               0xf);
    break;
  default:
    goto switchD_14000fcf9_default;
  }
  *(char *)((longlong)param_2 + 5) =
       (char)(param_1[0x14] * uVar80 + param_1[0x15] * uVar79 + 0x4000 + param_1[0x16] * uVar78 >>
             0xf);
LAB_14000fd72:
  *(char *)((longlong)param_2 + 4) =
       (char)(param_1[0x10] * uVar80 + param_1[0x11] * uVar79 + 0x4000 + param_1[0x12] * uVar78 >>
             0xf);
LAB_14000fdab:
  *(char *)((longlong)param_2 + 3) =
       (char)(param_1[0xc] * uVar80 + param_1[0xd] * uVar79 + 0x4000 + param_1[0xe] * uVar78 >> 0xf)
  ;
LAB_14000fde4:
  *(char *)((longlong)param_2 + 2) =
       (char)(param_1[8] * uVar80 + param_1[9] * uVar79 + 0x4000 + param_1[10] * uVar78 >> 0xf);
LAB_14000fe1d:
  *(char *)((longlong)param_2 + 1) =
       (char)(param_1[4] * uVar80 + param_1[5] * uVar79 + 0x4000 + param_1[6] * uVar78 >> 0xf);
LAB_14000fe54:
  *(char *)param_2 =
       (char)(uVar80 * *param_1 + uVar79 * param_1[1] + 0x4000 + uVar78 * param_1[2] >> 0xf);
switchD_14000fcf9_default:
  return;
}

