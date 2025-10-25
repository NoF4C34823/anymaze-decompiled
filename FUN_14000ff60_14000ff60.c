
/* WARNING: Removing unreachable block (ram,0x000140010199) */
/* WARNING: Removing unreachable block (ram,0x00014000ffa6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ff60(byte *param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16],
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
  undefined1 auVar18 [16];
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
  undefined1 auVar36 [12];
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
  int iVar67;
  ulonglong uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  longlong lVar72;
  undefined1 auVar73 [14];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 uVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined4 uVar101;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar91 [16];
  undefined1 auVar88 [12];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar102 [12];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  
  auVar75 = _DAT_143086470;
  auVar27 = _DAT_143086460;
  auVar26 = _DAT_143086450;
  auVar113 = _DAT_143086440;
  auVar107 = _DAT_143086430;
  auVar99 = _DAT_143086420;
  auVar89 = _DAT_143086410;
  auVar74 = *param_4;
  uVar15 = auVar74._0_2_;
  uVar16 = auVar74._2_2_;
  uVar17 = auVar74._4_2_;
  if (param_5 != 4) {
    auVar93._0_8_ = auVar74._4_8_;
    auVar93._8_8_ = *(undefined8 *)*param_4;
    iVar67 = 0;
    auVar78._8_8_ = auVar93._0_8_;
    auVar78._0_8_ = auVar74._8_8_;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = *(undefined8 *)param_1;
        uVar6 = *(undefined8 *)(param_1 + 8);
        iVar67 = iVar67 + 8;
        auVar40[10] = 0;
        auVar40._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar40[0xb] = (char)((ulonglong)uVar4 >> 0x28);
        auVar49[9] = (char)((ulonglong)uVar4 >> 0x20);
        auVar49._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar49._10_2_ = auVar40._10_2_;
        auVar58._9_3_ = auVar49._9_3_;
        auVar58._0_9_ = (unkuint9)0;
        auVar117._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar58._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
        auVar117[0] = (char)((ulonglong)uVar4 >> 0x10);
        auVar117._11_5_ = 0;
        auVar116._1_12_ = SUB1612(auVar117 << 0x28,4);
        auVar116[0] = (char)((ulonglong)uVar4 >> 8);
        auVar116._13_3_ = 0;
        auVar104._1_14_ = SUB1614(auVar116 << 0x18,2);
        auVar104[0] = (char)uVar4;
        auVar104[0xf] = 0;
        auVar41[10] = 0;
        auVar41._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar41[0xb] = (char)((ulonglong)uVar6 >> 0x28);
        auVar50[9] = (char)((ulonglong)uVar6 >> 0x20);
        auVar50._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar50._10_2_ = auVar41._10_2_;
        auVar59._9_3_ = auVar50._9_3_;
        auVar59._0_9_ = (unkuint9)0;
        auVar23._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar59._8_4_,(char)((ulonglong)uVar6 >> 0x18))) << 0x38,6);
        auVar23[0] = (char)((ulonglong)uVar6 >> 0x10);
        auVar23._11_5_ = 0;
        auVar22._1_12_ = SUB1612(auVar23 << 0x28,4);
        auVar22[0] = (char)((ulonglong)uVar6 >> 8);
        auVar22._13_3_ = 0;
        auVar103._1_14_ = SUB1614(auVar22 << 0x18,2);
        auVar103[0] = (char)uVar6;
        auVar103[0xf] = 0;
        auVar42[10] = 0;
        auVar42._0_10_ = SUB1610((undefined1  [16])0x0,0);
        auVar42[0xb] = (char)((ulonglong)uVar5 >> 0x28);
        auVar51[9] = (char)((ulonglong)uVar5 >> 0x20);
        auVar51._0_9_ = SUB169((undefined1  [16])0x0,0);
        auVar51._10_2_ = auVar42._10_2_;
        auVar60._9_3_ = auVar51._9_3_;
        auVar60._0_9_ = (unkuint9)0;
        auVar25._1_10_ =
             SUB1610(ZEXT516(CONCAT41(auVar60._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
        auVar25[0] = (char)((ulonglong)uVar5 >> 0x10);
        auVar25._11_5_ = 0;
        auVar24._1_12_ = SUB1612(auVar25 << 0x28,4);
        auVar24[0] = (char)((ulonglong)uVar5 >> 8);
        auVar24._13_3_ = 0;
        auVar106._1_14_ = SUB1614(auVar24 << 0x18,2);
        auVar106[0] = (char)uVar5;
        auVar106[0xf] = 0;
        auVar116 = pmulhuw(auVar103 << 8,auVar93);
        param_1 = param_1 + 0x18;
        auVar103 = pmulhuw(auVar106 << 8,auVar74);
        auVar106 = pmulhuw(auVar104 << 8,auVar78);
        auVar117 = auVar116 ^ auVar89 & (auVar103 ^ auVar116);
        auVar104 = auVar103 ^ auVar116 ^ auVar117 ^ auVar106;
        auVar106 = auVar106 ^ auVar99 & auVar104;
        auVar117 = auVar117 ^ auVar106;
        auVar103 = auVar107 & auVar117 ^ auVar106;
        auVar116 = pshufb(auVar103,auVar27);
        auVar104 = pshufb(auVar104 ^ auVar106,auVar113);
        auVar103 = pshufb(auVar117 ^ auVar103,auVar26);
        auVar104 = paddusw(auVar116,auVar104);
        auVar104 = paddusw(auVar104,auVar103);
        auVar104 = paddusw(auVar104,auVar75);
        auVar104 = psraw(auVar104,7);
        sVar7 = auVar104._0_2_;
        sVar8 = auVar104._2_2_;
        sVar9 = auVar104._4_2_;
        sVar10 = auVar104._6_2_;
        sVar11 = auVar104._8_2_;
        sVar12 = auVar104._10_2_;
        sVar13 = auVar104._12_2_;
        sVar14 = auVar104._14_2_;
        *param_2 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar104[0xe] - (0xff < sVar14),
                            CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar104[0xc] -
                                     (0xff < sVar13),
                                     CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar104[10] -
                                              (0xff < sVar12),
                                              CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar104[8]
                                                       - (0xff < sVar11),
                                                       CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                                auVar104[6] - (0xff < sVar10),
                                                                CONCAT12((0 < sVar9) *
                                                                         (sVar9 < 0x100) *
                                                                         auVar104[4] -
                                                                         (0xff < sVar9),
                                                                         CONCAT11((0 < sVar8) *
                                                                                  (sVar8 < 0x100) *
                                                                                  auVar104[2] -
                                                                                  (0xff < sVar8),
                                                                                  (0 < sVar7) *
                                                                                  (sVar7 < 0x100) *
                                                                                  auVar104[0] -
                                                                                  (0xff < sVar7)))))
                                             )));
        param_2 = param_2 + 1;
      } while (iVar67 < (int)(param_3 & 0xfffffff8));
    }
    if ((param_3 & 4) != 0) {
      uVar4 = *(undefined8 *)param_1;
      uVar87 = *(undefined4 *)(param_1 + 8);
      param_1 = param_1 + 0xc;
      auVar43[10] = 0;
      auVar43._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar43[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar52[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar52._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar52._10_2_ = auVar43._10_2_;
      auVar61._9_3_ = auVar52._9_3_;
      auVar61._0_9_ = (unkuint9)0;
      auVar113._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar61._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar113[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar113._11_5_ = 0;
      auVar107._1_12_ = SUB1612(auVar113 << 0x28,4);
      auVar107[0] = (char)((ulonglong)uVar4 >> 8);
      auVar107._13_3_ = 0;
      auVar89._1_14_ = SUB1614(auVar107 << 0x18,2);
      auVar89[0] = (char)uVar4;
      auVar89[0xf] = 0;
      uVar81 = (undefined1)((uint)uVar87 >> 8);
      auVar44[10] = 0;
      auVar44._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar44[0xb] = uVar81;
      auVar53[9] = (char)uVar87;
      auVar53._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar53._10_2_ = auVar44._10_2_;
      auVar62._9_3_ = auVar53._9_3_;
      auVar62._0_9_ = (unkuint9)0;
      auVar27._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar62._8_4_,(char)((uint)uVar87 >> 0x18))) << 0x38,6);
      auVar27[0] = (char)((uint)uVar87 >> 0x10);
      auVar27._11_5_ = 0;
      auVar26._1_12_ = SUB1612(auVar27 << 0x28,4);
      auVar26[0] = uVar81;
      auVar26._13_3_ = 0;
      auVar99._1_14_ = SUB1614(auVar26 << 0x18,2);
      auVar99[0] = (char)uVar87;
      auVar99[0xf] = 0;
      auVar74 = pmulhuw(auVar89 << 8,auVar74);
      auVar89 = pmulhuw(auVar99 << 8,auVar93);
      auVar79._0_8_ = auVar89._0_8_ << 0x20;
      auVar79._8_8_ = auVar89._8_8_ << 0x20 | auVar89._0_8_ >> 0x20;
      auVar96._0_12_ = auVar74._0_12_;
      auVar97._12_2_ = auVar74._6_2_;
      auVar97._0_12_ = auVar96._0_12_;
      auVar97._14_2_ = auVar74._12_2_;
      auVar96._12_4_ = auVar97._12_4_;
      auVar95._10_6_ = auVar96._10_6_;
      auVar95._0_8_ = auVar74._0_8_;
      auVar95._8_2_ = auVar74._4_2_;
      auVar36._4_8_ = auVar95._8_8_;
      auVar36._2_2_ = auVar74._8_2_;
      auVar36._0_2_ = auVar74._2_2_;
      auVar94._0_4_ = CONCAT22(auVar74._6_2_,auVar74._0_2_);
      auVar94._4_12_ = auVar36;
      auVar73 = ZEXT414(auVar74._12_4_) | auVar79._0_14_;
      auVar77._0_12_ = auVar73._0_12_;
      auVar77._12_2_ = auVar73._6_2_;
      auVar77._14_2_ = auVar89._8_2_;
      auVar76._12_4_ = auVar77._12_4_;
      auVar76._0_10_ = auVar73._0_10_;
      auVar76._10_2_ = auVar89._6_2_;
      auVar75._10_6_ = auVar76._10_6_;
      auVar75._0_8_ = auVar73._0_8_;
      auVar75._8_2_ = auVar73._4_2_;
      auVar37._4_8_ = auVar75._8_8_;
      auVar37._2_2_ = auVar89._4_2_;
      auVar37._0_2_ = auVar73._2_2_;
      auVar90._6_2_ = auVar89._2_2_;
      auVar90._4_2_ = auVar73._0_2_;
      auVar91._0_8_ = auVar94._0_8_;
      auVar91._8_4_ = auVar36._0_4_;
      auVar91._12_4_ = auVar37._0_4_;
      auVar90._8_8_ = auVar91._8_8_;
      auVar90._0_4_ = auVar94._0_4_;
      auVar80._8_8_ = auVar90._8_8_;
      auVar80._0_8_ = auVar90._8_8_;
      auVar98._4_4_ = auVar75._8_4_;
      auVar98._0_4_ = auVar95._8_4_;
      auVar98._8_4_ = auVar96._12_4_;
      auVar98._12_4_ = auVar76._12_4_;
      auVar74 = paddusw(auVar80,auVar90);
      auVar74 = paddusw(auVar74,auVar98);
      auVar74 = paddusw(auVar74,_DAT_143086470);
      auVar74 = psraw(auVar74,7);
      sVar7 = auVar74._0_2_;
      sVar8 = auVar74._2_2_;
      sVar9 = auVar74._4_2_;
      sVar10 = auVar74._6_2_;
      *(uint *)param_2 =
           CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar74[6] - (0xff < sVar10),
                    CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar74[4] - (0xff < sVar9),
                             CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar74[2] - (0xff < sVar8),
                                      (0 < sVar7) * (sVar7 < 0x100) * auVar74[0] - (0xff < sVar7))))
      ;
      param_2 = (undefined8 *)((longlong)param_2 + 4);
    }
    param_3 = param_3 & 3;
    if ((param_3 != 0) && (param_3 != 0)) {
      uVar68 = 0;
      iVar67 = 1;
      lVar72 = 0;
      if (param_3 >> 1 != 0) {
        do {
          *(char *)((longlong)param_2 + uVar68 * 2) =
               (char)((uint)param_1[lVar72] * (uint)uVar15 +
                      (uint)param_1[lVar72 + 1] * (uint)uVar16 +
                      (uint)param_1[lVar72 + 2] * (uint)uVar17 + 0x4000 >> 0xf);
          lVar1 = lVar72 + 3;
          lVar2 = lVar72 + 4;
          lVar3 = lVar72 + 5;
          lVar72 = lVar72 + 6;
          *(char *)((longlong)param_2 + uVar68 * 2 + 1) =
               (char)((uint)param_1[lVar1] * (uint)uVar15 + (uint)param_1[lVar2] * (uint)uVar16 +
                      (uint)param_1[lVar3] * (uint)uVar17 + 0x4000 >> 0xf);
          uVar68 = uVar68 + 1;
        } while (uVar68 < param_3 >> 1);
        iVar67 = (int)uVar68 * 2 + 1;
      }
      if (iVar67 - 1U < param_3) {
        lVar72 = (longlong)iVar67 * 3;
        *(char *)((longlong)iVar67 + -1 + (longlong)param_2) =
             (char)((uint)uVar15 * (uint)param_1[lVar72 + -3] +
                    (uint)uVar16 * (uint)param_1[lVar72 + -2] +
                    (uint)uVar17 * (uint)param_1[lVar72 + -1] + 0x4000 >> 0xf);
      }
    }
    return;
  }
  iVar67 = 0;
  auVar74._8_8_ = auVar74._0_8_;
  if (0 < (int)(param_3 & 0xfffffff8)) {
    do {
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 8);
      auVar45[10] = 0;
      auVar45._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar45[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar54[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar54._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar54._10_2_ = auVar45._10_2_;
      auVar63._9_3_ = auVar54._9_3_;
      auVar63._0_9_ = (unkuint9)0;
      auVar29._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar63._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar29[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar29._11_5_ = 0;
      auVar28._1_12_ = SUB1612(auVar29 << 0x28,4);
      auVar28[0] = (char)((ulonglong)uVar4 >> 8);
      auVar28._13_3_ = 0;
      auVar18._1_14_ = SUB1614(auVar28 << 0x18,2);
      auVar18[0] = (char)uVar4;
      auVar18[0xf] = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      iVar67 = iVar67 + 8;
      auVar46[10] = 0;
      auVar46._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar46[0xb] = (char)((ulonglong)uVar5 >> 0x28);
      auVar55[9] = (char)((ulonglong)uVar5 >> 0x20);
      auVar55._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar55._10_2_ = auVar46._10_2_;
      auVar64._9_3_ = auVar55._9_3_;
      auVar64._0_9_ = (unkuint9)0;
      auVar31._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar64._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
      auVar31[0] = (char)((ulonglong)uVar5 >> 0x10);
      auVar31._11_5_ = 0;
      auVar30._1_12_ = SUB1612(auVar31 << 0x28,4);
      auVar30[0] = (char)((ulonglong)uVar5 >> 8);
      auVar30._13_3_ = 0;
      auVar19._1_14_ = SUB1614(auVar30 << 0x18,2);
      auVar19[0] = (char)uVar5;
      auVar19[0xf] = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      param_1 = param_1 + 0x20;
      auVar89 = pmulhuw(auVar18 << 8,auVar74);
      auVar107 = pmulhuw(auVar19 << 8,auVar74);
      auVar47[10] = 0;
      auVar47._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar47[0xb] = (char)((ulonglong)uVar4 >> 0x28);
      auVar56[9] = (char)((ulonglong)uVar4 >> 0x20);
      auVar56._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar56._10_2_ = auVar47._10_2_;
      auVar65._9_3_ = auVar56._9_3_;
      auVar65._0_9_ = (unkuint9)0;
      auVar33._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar65._8_4_,(char)((ulonglong)uVar4 >> 0x18))) << 0x38,6);
      auVar33[0] = (char)((ulonglong)uVar4 >> 0x10);
      auVar33._11_5_ = 0;
      auVar32._1_12_ = SUB1612(auVar33 << 0x28,4);
      auVar32[0] = (char)((ulonglong)uVar4 >> 8);
      auVar32._13_3_ = 0;
      auVar20._1_14_ = SUB1614(auVar32 << 0x18,2);
      auVar20[0] = (char)uVar4;
      auVar20[0xf] = 0;
      auVar99 = pmulhuw(auVar20 << 8,auVar74);
      auVar48[10] = 0;
      auVar48._0_10_ = SUB1610((undefined1  [16])0x0,0);
      auVar48[0xb] = (char)((ulonglong)uVar5 >> 0x28);
      auVar57[9] = (char)((ulonglong)uVar5 >> 0x20);
      auVar57._0_9_ = SUB169((undefined1  [16])0x0,0);
      auVar57._10_2_ = auVar48._10_2_;
      auVar66._9_3_ = auVar57._9_3_;
      auVar66._0_9_ = (unkuint9)0;
      auVar35._1_10_ =
           SUB1610(ZEXT516(CONCAT41(auVar66._8_4_,(char)((ulonglong)uVar5 >> 0x18))) << 0x38,6);
      auVar35[0] = (char)((ulonglong)uVar5 >> 0x10);
      auVar35._11_5_ = 0;
      auVar34._1_12_ = SUB1612(auVar35 << 0x28,4);
      auVar34[0] = (char)((ulonglong)uVar5 >> 8);
      auVar34._13_3_ = 0;
      auVar21._1_14_ = SUB1614(auVar34 << 0x18,2);
      auVar21[0] = (char)uVar5;
      auVar21[0xf] = 0;
      auVar113 = pmulhuw(auVar21 << 8,auVar74);
      auVar105._0_8_ = auVar89._0_8_;
      auVar105._8_8_ = auVar107._0_8_;
      auVar92._0_8_ = auVar99._0_8_;
      auVar92._8_8_ = auVar113._0_8_;
      auVar111._0_12_ = auVar105._0_12_;
      auVar111._12_2_ = auVar89._6_2_;
      auVar111._14_2_ = auVar89._14_2_;
      auVar110._12_4_ = auVar111._12_4_;
      auVar110._0_10_ = auVar105._0_10_;
      auVar110._10_2_ = auVar89._12_2_;
      auVar109._10_6_ = auVar110._10_6_;
      auVar109._8_2_ = auVar89._4_2_;
      auVar109._0_8_ = auVar105._0_8_;
      auVar38._4_8_ = auVar109._8_8_;
      auVar38._2_2_ = auVar89._10_2_;
      auVar38._0_2_ = auVar89._2_2_;
      auVar108._0_4_ = CONCAT22(auVar89._8_2_,auVar89._0_2_);
      auVar108._4_12_ = auVar38;
      uVar101 = CONCAT22(auVar107._8_2_,auVar107._0_2_);
      auVar102._0_8_ = CONCAT26(auVar107._10_2_,CONCAT24(auVar107._2_2_,uVar101));
      auVar102._8_2_ = auVar107._4_2_;
      auVar102._10_2_ = auVar107._12_2_;
      auVar85._0_12_ = auVar92._0_12_;
      auVar85._12_2_ = auVar99._6_2_;
      auVar85._14_2_ = auVar99._14_2_;
      auVar84._12_4_ = auVar85._12_4_;
      auVar84._0_10_ = auVar92._0_10_;
      auVar84._10_2_ = auVar99._12_2_;
      auVar83._10_6_ = auVar84._10_6_;
      auVar83._8_2_ = auVar99._4_2_;
      auVar83._0_8_ = auVar92._0_8_;
      auVar39._4_8_ = auVar83._8_8_;
      auVar39._2_2_ = auVar99._10_2_;
      auVar39._0_2_ = auVar99._2_2_;
      auVar82._0_4_ = CONCAT22(auVar99._8_2_,auVar99._0_2_);
      auVar82._4_12_ = auVar39;
      uVar87 = CONCAT22(auVar113._8_2_,auVar113._0_2_);
      auVar88._0_8_ = CONCAT26(auVar113._10_2_,CONCAT24(auVar113._2_2_,uVar87));
      auVar88._8_2_ = auVar113._4_2_;
      auVar88._10_2_ = auVar113._12_2_;
      auVar114._0_8_ = auVar108._0_8_;
      auVar114._8_4_ = auVar38._0_4_;
      auVar114._12_4_ = (int)((ulonglong)auVar102._0_8_ >> 0x20);
      auVar86._4_4_ = uVar101;
      auVar86._0_4_ = auVar108._0_4_;
      auVar112._4_4_ = auVar102._8_4_;
      auVar112._0_4_ = auVar109._8_4_;
      auVar112._12_4_ = auVar88._8_4_;
      auVar112._8_4_ = auVar83._8_4_;
      auVar100._0_8_ = auVar82._0_8_;
      auVar100._8_4_ = auVar39._0_4_;
      auVar100._12_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
      auVar86._12_4_ = uVar87;
      auVar86._8_4_ = auVar82._0_4_;
      auVar115._8_8_ = auVar100._8_8_;
      auVar115._0_8_ = auVar114._8_8_;
      auVar89 = paddusw(auVar112,auVar86);
      auVar89 = paddusw(auVar89,auVar115);
      auVar89 = paddusw(auVar89,auVar75);
      auVar89 = psraw(auVar89,7);
      sVar7 = auVar89._0_2_;
      sVar8 = auVar89._2_2_;
      sVar9 = auVar89._4_2_;
      sVar10 = auVar89._6_2_;
      sVar11 = auVar89._8_2_;
      sVar12 = auVar89._10_2_;
      sVar13 = auVar89._12_2_;
      sVar14 = auVar89._14_2_;
      *param_2 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar89[0xe] - (0xff < sVar14),
                          CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar89[0xc] - (0xff < sVar13),
                                   CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar89[10] -
                                            (0xff < sVar12),
                                            CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar89[8] -
                                                     (0xff < sVar11),
                                                     CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                              auVar89[6] - (0xff < sVar10),
                                                              CONCAT12((0 < sVar9) * (sVar9 < 0x100)
                                                                       * auVar89[4] - (0xff < sVar9)
                                                                       ,CONCAT11((0 < sVar8) *
                                                                                 (sVar8 < 0x100) *
                                                                                 auVar89[2] -
                                                                                 (0xff < sVar8),
                                                                                 (0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar89[0] -
                                                                                 (0xff < sVar7))))))
                                  ));
      param_2 = param_2 + 1;
    } while (iVar67 < (int)(param_3 & 0xfffffff8));
  }
  param_3 = param_3 & 7;
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar71 = (uint)uVar15;
  uVar70 = (uint)uVar16;
  uVar69 = (uint)uVar17;
  if (((longlong)param_2 - (longlong)param_1 < (longlong)((ulonglong)param_3 * 4 + -1)) &&
     (-((longlong)param_2 - (longlong)param_1) < (longlong)(ulonglong)param_3)) {
    iVar67 = 1;
    uVar68 = 0;
    if (param_3 >> 1 != 0) {
      do {
        *(char *)((longlong)param_2 + uVar68 * 2) =
             (char)(param_1[uVar68 * 8] * uVar71 + param_1[uVar68 * 8 + 1] * uVar70 +
                    param_1[uVar68 * 8 + 2] * uVar69 + 0x4000 >> 0xf);
        *(char *)((longlong)param_2 + uVar68 * 2 + 1) =
             (char)(param_1[uVar68 * 8 + 4] * uVar71 + param_1[uVar68 * 8 + 5] * uVar70 +
                    param_1[uVar68 * 8 + 6] * uVar69 + 0x4000 >> 0xf);
        uVar68 = uVar68 + 1;
      } while (uVar68 < param_3 >> 1);
      iVar67 = (int)uVar68 * 2 + 1;
    }
    if (param_3 <= iVar67 - 1U) {
      return;
    }
    lVar72 = (longlong)iVar67;
    *(char *)(lVar72 + -1 + (longlong)param_2) =
         (char)(uVar71 * param_1[lVar72 * 4 + -4] + uVar70 * param_1[lVar72 * 4 + -3] +
                uVar69 * param_1[lVar72 * 4 + -2] + 0x4000 >> 0xf);
    return;
  }
  switch(param_3) {
  case 1:
    goto LAB_14001060d;
  case 2:
    goto LAB_1400105d6;
  case 3:
    goto LAB_14001059d;
  case 4:
    goto LAB_140010564;
  case 5:
    goto LAB_14001052b;
  case 6:
    break;
  case 7:
    *(char *)((longlong)param_2 + 6) =
         (char)(param_1[0x18] * uVar71 + param_1[0x19] * uVar70 + 0x4000 + param_1[0x1a] * uVar69 >>
               0xf);
    break;
  default:
    goto switchD_1400104b2_default;
  }
  *(char *)((longlong)param_2 + 5) =
       (char)(param_1[0x14] * uVar71 + param_1[0x15] * uVar70 + 0x4000 + param_1[0x16] * uVar69 >>
             0xf);
LAB_14001052b:
  *(char *)((longlong)param_2 + 4) =
       (char)(param_1[0x10] * uVar71 + param_1[0x11] * uVar70 + 0x4000 + param_1[0x12] * uVar69 >>
             0xf);
LAB_140010564:
  *(char *)((longlong)param_2 + 3) =
       (char)(param_1[0xc] * uVar71 + param_1[0xd] * uVar70 + 0x4000 + param_1[0xe] * uVar69 >> 0xf)
  ;
LAB_14001059d:
  *(char *)((longlong)param_2 + 2) =
       (char)(param_1[8] * uVar71 + param_1[9] * uVar70 + 0x4000 + param_1[10] * uVar69 >> 0xf);
LAB_1400105d6:
  *(char *)((longlong)param_2 + 1) =
       (char)(param_1[4] * uVar71 + param_1[5] * uVar70 + 0x4000 + param_1[6] * uVar69 >> 0xf);
LAB_14001060d:
  *(char *)param_2 =
       (char)(uVar71 * *param_1 + uVar70 * param_1[1] + uVar69 * param_1[2] + 0x4000 >> 0xf);
switchD_1400104b2_default:
  return;
}

