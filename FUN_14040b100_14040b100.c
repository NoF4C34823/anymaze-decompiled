
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14040b100(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  undefined2 *param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  unkuint9 Var10;
  undefined1 auVar11 [11];
  undefined1 auVar12 [13];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined2 uVar23;
  ushort uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  short sVar34;
  uint uVar35;
  longlong lVar36;
  short sVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  short sVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined2 *puVar44;
  short sVar45;
  ulonglong uVar46;
  short sVar47;
  short sVar48;
  undefined2 *puVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  short sVar54;
  short sVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  char cVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  
  sVar22 = _UNK_143089ede;
  sVar21 = _UNK_143089edc;
  sVar20 = _UNK_143089eda;
  sVar19 = _UNK_143089ed8;
  sVar18 = _UNK_143089ed6;
  sVar17 = _UNK_143089ed4;
  sVar16 = _UNK_143089ed2;
  sVar15 = _DAT_143089ed0;
  param_2 = param_2 >> 1;
  uVar27 = *param_6;
  uVar42 = param_6[1];
  uVar2 = *param_5;
  uVar38 = uVar42 - 1;
  uVar28 = uVar2 + 0xf & 0xfffffffffffffff0;
  uVar30 = 0;
  param_1 = param_1 + ((int)(uVar38 >> 1) * param_2 + (longlong)(int)(uVar27 - 1 >> 1)) * -2;
  param_4 = param_4 >> 1;
  if (param_7 == 0) {
    lVar26 = param_1;
    puVar49 = param_9;
    if (0 < (longlong)uVar38) {
      lVar41 = 0;
      uVar46 = uVar30;
      do {
        uVar43 = 0;
        if (0 < (longlong)uVar2) {
          uVar31 = 0;
          do {
            uVar35 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar27) {
              uVar29 = uVar31;
              if (7 < (longlong)uVar27) {
                uVar33 = uVar43 * 2 + param_1 + lVar41;
                uVar25 = uVar33 & 0xf;
                if (uVar25 != 0) {
                  if ((uVar33 & 1) != 0) goto LAB_14040b3ca;
                  uVar25 = 0x10 - uVar25 >> 1;
                }
                if ((longlong)(uVar25 + 8) <= (longlong)uVar27) {
                  uVar29 = uVar27 - (uVar27 - uVar25 & 7);
                  uVar39 = uVar31;
                  if (uVar25 != 0) {
                    do {
                      uVar24 = *(ushort *)(uVar33 + uVar39 * 2);
                      if (uVar24 < uVar35) {
                        uVar35 = (uint)uVar24;
                      }
                      uVar23 = (undefined2)uVar35;
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < uVar25);
                  }
                  auVar50._0_8_ = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
                  auVar50._8_8_ = auVar50._0_8_;
                  do {
                    auVar67 = *(undefined1 (*) [16])(uVar33 + uVar25 * 2);
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar50._0_2_ - sVar15) < (short)(auVar67._0_2_ - sVar15)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar50._2_2_ - sVar16) < (short)(auVar67._2_2_ - sVar16)
                                  );
                    auVar65._4_2_ =
                         -(ushort)((short)(auVar50._4_2_ - sVar17) < (short)(auVar67._4_2_ - sVar17)
                                  );
                    auVar65._6_2_ =
                         -(ushort)((short)(auVar50._6_2_ - sVar18) < (short)(auVar67._6_2_ - sVar18)
                                  );
                    auVar65._8_2_ =
                         -(ushort)((short)(auVar50._8_2_ - sVar19) < (short)(auVar67._8_2_ - sVar19)
                                  );
                    auVar65._10_2_ =
                         -(ushort)((short)(auVar50._10_2_ - sVar20) <
                                  (short)(auVar67._10_2_ - sVar20));
                    auVar65._12_2_ =
                         -(ushort)((short)(auVar50._12_2_ - sVar21) <
                                  (short)(auVar67._12_2_ - sVar21));
                    auVar65._14_2_ =
                         -(ushort)((short)(auVar50._14_2_ - sVar22) <
                                  (short)(auVar67._14_2_ - sVar22));
                    auVar50 = auVar65 & (auVar67 ^ auVar50) ^
                              *(undefined1 (*) [16])(uVar33 + uVar25 * 2);
                    uVar25 = uVar25 + 8;
                  } while (uVar25 < uVar29);
                  auVar66._0_8_ = auVar50._8_8_;
                  auVar66._8_4_ = auVar50._0_4_;
                  auVar66._12_4_ = auVar50._0_4_;
                  sVar54 = auVar50._0_2_;
                  sVar57 = auVar50._2_2_;
                  auVar55._0_2_ =
                       -(ushort)((short)(auVar50._8_2_ - sVar15) < (short)(sVar54 - sVar15));
                  auVar55._2_2_ =
                       -(ushort)((short)(auVar50._10_2_ - sVar16) < (short)(sVar57 - sVar16));
                  auVar55._4_2_ =
                       -(ushort)((short)(auVar50._12_2_ - sVar17) < (short)(auVar50._4_2_ - sVar17))
                  ;
                  auVar55._6_2_ =
                       -(ushort)((short)(auVar50._14_2_ - sVar18) < (short)(auVar50._6_2_ - sVar18))
                  ;
                  auVar55._8_2_ =
                       -(ushort)((short)(sVar54 - sVar19) < (short)(auVar50._8_2_ - sVar19));
                  auVar55._10_2_ =
                       -(ushort)((short)(sVar57 - sVar20) < (short)(auVar50._10_2_ - sVar20));
                  auVar55._12_2_ =
                       -(ushort)((short)(sVar54 - sVar21) < (short)(auVar50._12_2_ - sVar21));
                  auVar55._14_2_ =
                       -(ushort)((short)(sVar57 - sVar22) < (short)(auVar50._14_2_ - sVar22));
                  auVar50 = auVar55 & (auVar66 ^ auVar50) ^ auVar50;
                  auVar59._0_12_ = auVar50._4_12_;
                  auVar59._12_4_ = auVar50._0_4_;
                  auVar51._0_2_ =
                       -(ushort)((short)(auVar50._4_2_ - sVar15) < (short)(auVar50._0_2_ - sVar15));
                  auVar51._2_2_ =
                       -(ushort)((short)(auVar50._6_2_ - sVar16) < (short)(auVar50._2_2_ - sVar16));
                  auVar51._4_4_ = 0;
                  auVar51._8_2_ =
                       -(ushort)((short)(auVar50._12_2_ - sVar19) < (short)(auVar50._8_2_ - sVar19))
                  ;
                  auVar51._10_2_ =
                       -(ushort)((short)(auVar50._14_2_ - sVar20) < (short)(auVar50._10_2_ - sVar20)
                                );
                  auVar51._12_2_ =
                       -(ushort)((short)(auVar50._0_2_ - sVar21) < (short)(auVar50._12_2_ - sVar21))
                  ;
                  auVar51._14_2_ =
                       -(ushort)((short)(auVar50._2_2_ - sVar22) < (short)(auVar50._14_2_ - sVar22))
                  ;
                  auVar50 = auVar51 & (auVar59 ^ auVar50) ^ auVar50;
                  uVar35 = (uint)(ushort)-(ushort)((short)(auVar50._2_2_ - sVar15) <
                                                  (short)(auVar50._0_2_ - sVar15)) &
                           (auVar50._2_4_ ^ auVar50._0_4_) ^ auVar50._0_4_;
                }
              }
LAB_14040b3ca:
              uVar23 = (undefined2)uVar35;
              if (uVar29 < uVar27) {
                lVar26 = uVar43 * 2 + param_1 + lVar41;
                do {
                  uVar24 = (ushort)uVar35;
                  uVar35 = uVar35 & 0xffff;
                  if (*(ushort *)(lVar26 + uVar29 * 2) < uVar24) {
                    uVar35 = (uint)*(ushort *)(lVar26 + uVar29 * 2);
                  }
                  uVar23 = (undefined2)uVar35;
                  uVar29 = uVar29 + 1;
                } while (uVar29 < uVar27);
              }
            }
            *(undefined2 *)((longlong)param_9 + uVar43 * 2 + uVar46) = uVar23;
            uVar43 = uVar43 + 1;
          } while (uVar43 < uVar2);
        }
        uVar30 = uVar30 + 1;
        lVar26 = param_2 * 2 + lVar41;
        puVar49 = (undefined2 *)((longlong)param_9 + uVar46 + uVar28 * 2);
        lVar41 = lVar41 + param_2 * 2;
        lVar26 = lVar26 + param_1;
        uVar46 = uVar46 + uVar28 * 2;
      } while (uVar30 < uVar38);
    }
    sVar22 = _UNK_143089ede;
    sVar21 = _UNK_143089edc;
    sVar20 = _UNK_143089eda;
    sVar19 = _UNK_143089ed8;
    sVar18 = _UNK_143089ed6;
    sVar17 = _UNK_143089ed4;
    sVar16 = _UNK_143089ed2;
    sVar15 = _DAT_143089ed0;
    if (0 < (longlong)param_5[1]) {
      param_3 = param_3 + param_4 * -2;
      lVar41 = 0;
      lVar36 = 0;
      do {
        uVar27 = 0;
        param_3 = param_3 + param_4 * 2;
        lVar41 = lVar41 + 1;
        lVar36 = lVar36 + param_2 * 2;
        if (0 < (longlong)uVar2) {
          uVar30 = *param_6;
          lVar1 = param_2 * -2 + lVar26 + lVar36;
          uVar46 = uVar27;
          puVar44 = puVar49;
          do {
            uVar35 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar30) {
              uVar43 = uVar27;
              if (7 < (longlong)uVar30) {
                uVar29 = uVar46 * 2 + lVar1;
                uVar31 = uVar29 & 0xf;
                if (uVar31 != 0) {
                  if ((uVar29 & 1) != 0) goto LAB_14040b6aa;
                  uVar31 = 0x10 - uVar31 >> 1;
                }
                if ((longlong)(uVar31 + 8) <= (longlong)uVar30) {
                  uVar43 = uVar30 - (uVar30 - uVar31 & 7);
                  uVar25 = uVar27;
                  if (uVar31 != 0) {
                    do {
                      uVar24 = *(ushort *)(uVar29 + uVar25 * 2);
                      if (uVar24 < uVar35) {
                        uVar35 = (uint)uVar24;
                      }
                      uVar23 = (undefined2)uVar35;
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < uVar31);
                  }
                  auVar52._0_8_ = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
                  auVar52._8_8_ = auVar52._0_8_;
                  do {
                    auVar67 = *(undefined1 (*) [16])(uVar29 + uVar31 * 2);
                    auVar60._0_2_ =
                         -(ushort)((short)(auVar52._0_2_ - sVar15) < (short)(auVar67._0_2_ - sVar15)
                                  );
                    auVar60._2_2_ =
                         -(ushort)((short)(auVar52._2_2_ - sVar16) < (short)(auVar67._2_2_ - sVar16)
                                  );
                    auVar60._4_2_ =
                         -(ushort)((short)(auVar52._4_2_ - sVar17) < (short)(auVar67._4_2_ - sVar17)
                                  );
                    auVar60._6_2_ =
                         -(ushort)((short)(auVar52._6_2_ - sVar18) < (short)(auVar67._6_2_ - sVar18)
                                  );
                    auVar60._8_2_ =
                         -(ushort)((short)(auVar52._8_2_ - sVar19) < (short)(auVar67._8_2_ - sVar19)
                                  );
                    auVar60._10_2_ =
                         -(ushort)((short)(auVar52._10_2_ - sVar20) <
                                  (short)(auVar67._10_2_ - sVar20));
                    auVar60._12_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar21) <
                                  (short)(auVar67._12_2_ - sVar21));
                    auVar60._14_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar22) <
                                  (short)(auVar67._14_2_ - sVar22));
                    auVar52 = auVar60 & (auVar67 ^ auVar52) ^
                              *(undefined1 (*) [16])(uVar29 + uVar31 * 2);
                    uVar31 = uVar31 + 8;
                  } while (uVar31 < uVar43);
                  auVar61._0_8_ = auVar52._8_8_;
                  auVar61._8_4_ = auVar52._0_4_;
                  auVar61._12_4_ = auVar52._0_4_;
                  sVar54 = auVar52._0_2_;
                  sVar57 = auVar52._2_2_;
                  auVar56._0_2_ =
                       -(ushort)((short)(auVar52._8_2_ - sVar15) < (short)(sVar54 - sVar15));
                  auVar56._2_2_ =
                       -(ushort)((short)(auVar52._10_2_ - sVar16) < (short)(sVar57 - sVar16));
                  auVar56._4_2_ =
                       -(ushort)((short)(auVar52._12_2_ - sVar17) < (short)(auVar52._4_2_ - sVar17))
                  ;
                  auVar56._6_2_ =
                       -(ushort)((short)(auVar52._14_2_ - sVar18) < (short)(auVar52._6_2_ - sVar18))
                  ;
                  auVar56._8_2_ =
                       -(ushort)((short)(sVar54 - sVar19) < (short)(auVar52._8_2_ - sVar19));
                  auVar56._10_2_ =
                       -(ushort)((short)(sVar57 - sVar20) < (short)(auVar52._10_2_ - sVar20));
                  auVar56._12_2_ =
                       -(ushort)((short)(sVar54 - sVar21) < (short)(auVar52._12_2_ - sVar21));
                  auVar56._14_2_ =
                       -(ushort)((short)(sVar57 - sVar22) < (short)(auVar52._14_2_ - sVar22));
                  auVar52 = auVar56 & (auVar61 ^ auVar52) ^ auVar52;
                  auVar68._0_12_ = auVar52._4_12_;
                  auVar68._12_4_ = auVar52._0_4_;
                  auVar53._0_2_ =
                       -(ushort)((short)(auVar52._4_2_ - sVar15) < (short)(auVar52._0_2_ - sVar15));
                  auVar53._2_2_ =
                       -(ushort)((short)(auVar52._6_2_ - sVar16) < (short)(auVar52._2_2_ - sVar16));
                  auVar53._4_4_ = 0;
                  auVar53._8_2_ =
                       -(ushort)((short)(auVar52._12_2_ - sVar19) < (short)(auVar52._8_2_ - sVar19))
                  ;
                  auVar53._10_2_ =
                       -(ushort)((short)(auVar52._14_2_ - sVar20) < (short)(auVar52._10_2_ - sVar20)
                                );
                  auVar53._12_2_ =
                       -(ushort)((short)(auVar52._0_2_ - sVar21) < (short)(auVar52._12_2_ - sVar21))
                  ;
                  auVar53._14_2_ =
                       -(ushort)((short)(auVar52._2_2_ - sVar22) < (short)(auVar52._14_2_ - sVar22))
                  ;
                  auVar52 = auVar53 & (auVar68 ^ auVar52) ^ auVar52;
                  uVar35 = (uint)(ushort)-(ushort)((short)(auVar52._2_2_ - sVar15) <
                                                  (short)(auVar52._0_2_ - sVar15)) &
                           (auVar52._2_4_ ^ auVar52._0_4_) ^ auVar52._0_4_;
                }
              }
LAB_14040b6aa:
              uVar23 = (undefined2)uVar35;
              if (uVar43 < uVar30) {
                lVar32 = uVar46 * 2 + lVar1;
                do {
                  uVar24 = (ushort)uVar35;
                  uVar35 = uVar35 & 0xffff;
                  if (*(ushort *)(lVar32 + uVar43 * 2) < uVar24) {
                    uVar35 = (uint)*(ushort *)(lVar32 + uVar43 * 2);
                  }
                  uVar23 = (undefined2)uVar35;
                  uVar43 = uVar43 + 1;
                } while (uVar43 < uVar30);
              }
            }
            uVar46 = uVar46 + 1;
            *puVar44 = uVar23;
            puVar44 = puVar44 + 1;
          } while (uVar46 < uVar2);
        }
        FUN_14040bbe0(param_9,uVar28,param_3,uVar2,uVar42);
        uVar38 = uVar38 + 1;
        uVar42 = param_6[1];
        puVar49 = puVar49 + uVar28;
        if ((longlong)param_6[1] <= (longlong)uVar38) {
          uVar38 = 0;
          puVar49 = param_9;
        }
      } while (lVar41 < (longlong)param_5[1]);
    }
  }
  else {
    uVar38 = param_5[1];
    if (0 < (longlong)uVar38) {
      lVar41 = 0;
      lVar26 = 0;
      do {
        uVar28 = 0;
        if (0 < (longlong)uVar2) {
          uVar46 = uVar28;
          do {
            uVar43 = 0;
            uVar35 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar42) {
              lVar36 = param_1 + lVar26 + uVar28;
              uVar31 = uVar43;
              uVar29 = uVar43;
              do {
                uVar25 = 0;
                if (0 < (longlong)uVar27) {
                  if (7 < (longlong)uVar27) {
                    lVar1 = lVar36 + uVar43;
                    uVar64 = CONCAT22((short)uVar35,(short)uVar35);
                    auVar62._8_4_ = 0xffffffff;
                    auVar62._0_8_ = 0xffffffffffffffff;
                    auVar62._12_4_ = 0xffffffff;
                    auVar67._0_8_ = CONCAT44(uVar64,uVar64);
                    auVar67._8_8_ = auVar67._0_8_;
                    do {
                      uVar33 = *(ulonglong *)(uVar25 + param_7 + uVar31);
                      cVar73 = (char)(uVar33 >> 0x38);
                      auVar3._8_6_ = 0;
                      auVar3._0_8_ = uVar33;
                      auVar3[0xe] = cVar73;
                      auVar4._8_4_ = 0;
                      auVar4._0_8_ = uVar33;
                      auVar4[0xc] = (char)(uVar33 >> 0x30);
                      auVar4._13_2_ = auVar3._13_2_;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar33;
                      auVar5._12_3_ = auVar4._12_3_;
                      auVar6._8_2_ = 0;
                      auVar6._0_8_ = uVar33;
                      auVar6[10] = (char)(uVar33 >> 0x28);
                      auVar6._11_4_ = auVar5._11_4_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar33;
                      auVar7._10_5_ = auVar6._10_5_;
                      auVar8[8] = (char)(uVar33 >> 0x20);
                      auVar8._0_8_ = uVar33;
                      auVar8._9_6_ = auVar7._9_6_;
                      auVar9._7_8_ = 0;
                      auVar9._0_7_ = auVar8._8_7_;
                      Var10 = CONCAT81(SUB158(auVar9 << 0x40,7),(char)(uVar33 >> 0x18));
                      auVar13._9_6_ = 0;
                      auVar13._0_9_ = Var10;
                      auVar11._1_10_ = SUB1510(auVar13 << 0x30,5);
                      auVar11[0] = (char)(uVar33 >> 0x10);
                      auVar14._11_4_ = 0;
                      auVar14._0_11_ = auVar11;
                      auVar12._1_12_ = SUB1512(auVar14 << 0x20,3);
                      auVar12[0] = (char)(uVar33 >> 8);
                      auVar71._0_2_ = -(ushort)((uVar33 & 0xff) == 0);
                      auVar71._2_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar71._4_2_ = -(ushort)(auVar11._0_2_ == 0);
                      auVar71._6_2_ = -(ushort)((short)Var10 == 0);
                      auVar71._8_2_ = -(ushort)(auVar8._8_2_ == 0);
                      auVar71._10_2_ = -(ushort)(auVar6._10_2_ == 0);
                      auVar71._12_2_ = -(ushort)(auVar4._12_2_ == 0);
                      auVar71._14_2_ = -(ushort)(cVar73 == '\0');
                      auVar71 = auVar71 ^ auVar62;
                      if ((auVar71 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar54 = 0;
                      }
                      else {
                        sVar54 = *(short *)(lVar1 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar57 = 0;
                      }
                      else {
                        sVar57 = *(short *)(lVar1 + 2 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar1 + 4 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar1 + 6 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar1 + 8 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar45 = 0;
                      }
                      else {
                        sVar45 = *(short *)(lVar1 + 10 + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar47 = 0;
                      }
                      else {
                        sVar47 = *(short *)(lVar1 + 0xc + uVar25 * 2);
                      }
                      if ((auVar71 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar48 = 0;
                      }
                      else {
                        sVar48 = *(short *)(lVar1 + 0xe + uVar25 * 2);
                      }
                      auVar69._2_2_ = sVar57;
                      auVar69._0_2_ = sVar54;
                      auVar69._6_2_ = sVar37;
                      auVar69._4_2_ = sVar34;
                      auVar69._10_2_ = sVar45;
                      auVar69._8_2_ = sVar40;
                      auVar69._14_2_ = sVar48;
                      auVar69._12_2_ = sVar47;
                      auVar74._0_2_ =
                           -(ushort)((short)(auVar67._0_2_ - sVar15) < (short)(sVar54 - sVar15));
                      auVar74._2_2_ =
                           -(ushort)((short)(auVar67._2_2_ - sVar16) < (short)(sVar57 - sVar16));
                      auVar74._4_2_ =
                           -(ushort)((short)(auVar67._4_2_ - sVar17) < (short)(sVar34 - sVar17));
                      auVar74._6_2_ =
                           -(ushort)((short)(auVar67._6_2_ - sVar18) < (short)(sVar37 - sVar18));
                      auVar74._8_2_ =
                           -(ushort)((short)(auVar67._8_2_ - sVar19) < (short)(sVar40 - sVar19));
                      auVar74._10_2_ =
                           -(ushort)((short)(auVar67._10_2_ - sVar20) < (short)(sVar45 - sVar20));
                      auVar74._12_2_ =
                           -(ushort)((short)(auVar67._12_2_ - sVar21) < (short)(sVar47 - sVar21));
                      auVar74._14_2_ =
                           -(ushort)((short)(auVar67._14_2_ - sVar22) < (short)(sVar48 - sVar22));
                      uVar25 = uVar25 + 8;
                      auVar67 = (auVar74 & (auVar67 ^ auVar69) ^ auVar69) & auVar71 |
                                ~auVar71 & auVar67;
                    } while (uVar25 < (uVar27 & 0xfffffffffffffff8));
                    auVar63._0_8_ = auVar67._8_8_;
                    auVar63._8_4_ = auVar67._0_4_;
                    auVar63._12_4_ = auVar67._0_4_;
                    sVar54 = auVar67._0_2_;
                    sVar57 = auVar67._2_2_;
                    auVar72._0_2_ =
                         -(ushort)((short)(auVar67._8_2_ - sVar15) < (short)(sVar54 - sVar15));
                    auVar72._2_2_ =
                         -(ushort)((short)(auVar67._10_2_ - sVar16) < (short)(sVar57 - sVar16));
                    auVar72._4_2_ =
                         -(ushort)((short)(auVar67._12_2_ - sVar17) <
                                  (short)(auVar67._4_2_ - sVar17));
                    auVar72._6_2_ =
                         -(ushort)((short)(auVar67._14_2_ - sVar18) <
                                  (short)(auVar67._6_2_ - sVar18));
                    auVar72._8_2_ =
                         -(ushort)((short)(sVar54 - sVar19) < (short)(auVar67._8_2_ - sVar19));
                    auVar72._10_2_ =
                         -(ushort)((short)(sVar57 - sVar20) < (short)(auVar67._10_2_ - sVar20));
                    auVar72._12_2_ =
                         -(ushort)((short)(sVar54 - sVar21) < (short)(auVar67._12_2_ - sVar21));
                    auVar72._14_2_ =
                         -(ushort)((short)(sVar57 - sVar22) < (short)(auVar67._14_2_ - sVar22));
                    auVar67 = auVar72 & (auVar63 ^ auVar67) ^ auVar67;
                    auVar70._0_12_ = auVar67._4_12_;
                    auVar70._12_4_ = auVar67._0_4_;
                    auVar58._0_2_ =
                         -(ushort)((short)(auVar67._4_2_ - sVar15) < (short)(auVar67._0_2_ - sVar15)
                                  );
                    auVar58._2_2_ =
                         -(ushort)((short)(auVar67._6_2_ - sVar16) < (short)(auVar67._2_2_ - sVar16)
                                  );
                    auVar58._4_4_ = 0;
                    auVar58._8_2_ =
                         -(ushort)((short)(auVar67._12_2_ - sVar19) <
                                  (short)(auVar67._8_2_ - sVar19));
                    auVar58._10_2_ =
                         -(ushort)((short)(auVar67._14_2_ - sVar20) <
                                  (short)(auVar67._10_2_ - sVar20));
                    auVar58._12_2_ =
                         -(ushort)((short)(auVar67._0_2_ - sVar21) <
                                  (short)(auVar67._12_2_ - sVar21));
                    auVar58._14_2_ =
                         -(ushort)((short)(auVar67._2_2_ - sVar22) <
                                  (short)(auVar67._14_2_ - sVar22));
                    auVar67 = auVar58 & (auVar70 ^ auVar67) ^ auVar67;
                    uVar35 = (uint)(ushort)-(ushort)((short)(auVar67._2_2_ - sVar15) <
                                                    (short)(auVar67._0_2_ - sVar15)) &
                             (auVar67._2_4_ ^ auVar67._0_4_) ^ auVar67._0_4_;
                    uVar25 = uVar27 & 0xfffffffffffffff8;
                  }
                  if (uVar25 < uVar27) {
                    lVar1 = lVar36 + uVar43;
                    do {
                      if (*(char *)(uVar25 + param_7 + uVar31) != '\0') {
                        uVar24 = (ushort)uVar35;
                        uVar35 = uVar35 & 0xffff;
                        if (*(ushort *)(lVar1 + uVar25 * 2) < uVar24) {
                          uVar35 = (uint)*(ushort *)(lVar1 + uVar25 * 2);
                        }
                      }
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < uVar27);
                  }
                }
                uVar23 = (undefined2)uVar35;
                uVar29 = uVar29 + 1;
                uVar31 = uVar31 + uVar27;
                uVar43 = uVar43 + param_2 * 2;
              } while (uVar29 < uVar42);
            }
            uVar46 = uVar46 + 1;
            *(undefined2 *)(uVar28 + param_3 + lVar41) = uVar23;
            uVar28 = uVar28 + 2;
          } while (uVar46 < uVar2);
        }
        uVar30 = uVar30 + 1;
        lVar41 = lVar41 + param_4 * 2;
        lVar26 = lVar26 + param_2 * 2;
      } while (uVar30 < uVar38);
    }
  }
  return;
}

