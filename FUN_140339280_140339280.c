
void FUN_140339280(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,undefined2 *param_9)

{
  longlong lVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  unkuint9 Var12;
  undefined1 auVar13 [11];
  undefined1 auVar14 [13];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  longlong lVar17;
  short sVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  short sVar24;
  short sVar25;
  uint uVar26;
  short sVar27;
  longlong lVar28;
  longlong lVar29;
  short sVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined2 *puVar33;
  short sVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined2 uVar39;
  longlong lVar40;
  undefined2 *puVar41;
  ulonglong uVar42;
  longlong lVar43;
  short sVar44;
  ulonglong uVar45;
  uint uVar46;
  ulonglong uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  undefined1 auVar56 [16];
  char cVar58;
  undefined1 auVar57 [16];
  short sVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  uVar20 = 0;
  lVar21 = (longlong)param_2 >> 1;
  uVar45 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar17 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar28 = (longlong)((int)param_6 + -1 >> 1);
  lVar40 = (lVar17 * lVar21 + lVar28) * -2 + param_1;
  if (param_7 == 0) {
    lVar43 = (longlong)param_6._4_4_;
    uVar42 = lVar43 - 1;
    puVar33 = param_9;
    if (uVar42 != 0 && 0 < lVar43) {
      lVar17 = lVar17 * lVar21 * -2;
      param_1 = param_1 + lVar21 * -2;
      uVar31 = (ulonglong)(int)param_6;
      lVar1 = lVar28 * -2 + lVar21 * 2;
      lVar29 = 0;
      lVar38 = param_1 + lVar21 * 2;
      lVar36 = lVar29;
      do {
        uVar32 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar40 = lVar17 + param_1 + lVar1 + lVar29;
          uVar37 = 0;
          do {
            uVar26 = 0x7fff;
            if (0 < (longlong)uVar31) {
              uVar19 = uVar37;
              if (7 < (longlong)uVar31) {
                uVar35 = lVar28 * -2 + lVar17 + lVar38 + lVar29 + uVar32 * 2;
                uVar22 = uVar35 & 0xf;
                if (uVar22 != 0) {
                  if ((uVar35 & 1) != 0) goto LAB_1403394fa;
                  uVar22 = 0x10 - uVar22 >> 1;
                }
                if ((longlong)(uVar22 + 8) <= (longlong)uVar31) {
                  lVar2 = lVar40 + uVar32 * 2;
                  uVar19 = uVar31 - (uVar31 - uVar22 & 7);
                  uVar35 = uVar37;
                  if (uVar22 != 0) {
                    do {
                      uVar46 = (uint)*(short *)(lVar2 + uVar35 * 2);
                      if ((int)uVar46 < (int)uVar26) {
                        uVar26 = uVar46;
                      }
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar22);
                  }
                  uVar48 = (ushort)uVar26;
                  uVar49 = uVar48;
                  uVar50 = uVar48;
                  uVar51 = uVar48;
                  uVar52 = uVar48;
                  uVar53 = uVar48;
                  uVar54 = uVar48;
                  uVar55 = uVar48;
                  do {
                    psVar3 = (short *)(lVar2 + uVar22 * 2);
                    sVar24 = *psVar3;
                    sVar59 = psVar3[1];
                    sVar18 = psVar3[2];
                    sVar25 = psVar3[3];
                    sVar27 = psVar3[4];
                    sVar30 = psVar3[5];
                    sVar34 = psVar3[6];
                    sVar44 = psVar3[7];
                    uVar48 = (ushort)(sVar24 < (short)uVar48) * sVar24 |
                             (sVar24 >= (short)uVar48) * uVar48;
                    uVar49 = (ushort)(sVar59 < (short)uVar49) * sVar59 |
                             (sVar59 >= (short)uVar49) * uVar49;
                    uVar50 = (ushort)(sVar18 < (short)uVar50) * sVar18 |
                             (sVar18 >= (short)uVar50) * uVar50;
                    uVar51 = (ushort)(sVar25 < (short)uVar51) * sVar25 |
                             (sVar25 >= (short)uVar51) * uVar51;
                    uVar52 = (ushort)(sVar27 < (short)uVar52) * sVar27 |
                             (sVar27 >= (short)uVar52) * uVar52;
                    uVar53 = (ushort)(sVar30 < (short)uVar53) * sVar30 |
                             (sVar30 >= (short)uVar53) * uVar53;
                    uVar54 = (ushort)(sVar34 < (short)uVar54) * sVar34 |
                             (sVar34 >= (short)uVar54) * uVar54;
                    uVar55 = (ushort)(sVar44 < (short)uVar55) * sVar44 |
                             (sVar44 >= (short)uVar55) * uVar55;
                    uVar22 = uVar22 + 8;
                  } while (uVar22 < uVar19);
                  uVar52 = ((short)uVar52 < (short)uVar48) * uVar52 |
                           ((short)uVar52 >= (short)uVar48) * uVar48;
                  uVar53 = ((short)uVar53 < (short)uVar49) * uVar53 |
                           ((short)uVar53 >= (short)uVar49) * uVar49;
                  uVar49 = ((short)uVar54 < (short)uVar50) * uVar54 |
                           ((short)uVar54 >= (short)uVar50) * uVar50;
                  uVar50 = ((short)uVar55 < (short)uVar51) * uVar55 |
                           ((short)uVar55 >= (short)uVar51) * uVar51;
                  uVar49 = ((short)uVar49 < (short)uVar52) * uVar49 |
                           ((short)uVar49 >= (short)uVar52) * uVar52;
                  uVar50 = ((short)uVar50 < (short)uVar53) * uVar50 |
                           ((short)uVar50 >= (short)uVar53) * uVar53;
                  uVar26 = (uint)(ushort)(((short)uVar50 < (short)uVar49) * uVar50 |
                                         ((short)uVar50 >= (short)uVar49) * uVar49);
                }
              }
LAB_1403394fa:
              if (uVar19 < uVar31) {
                do {
                  sVar24 = (short)uVar26;
                  uVar26 = (uint)*(short *)(lVar40 + uVar32 * 2 + uVar19 * 2);
                  if ((int)sVar24 <= (int)uVar26) {
                    uVar26 = (int)sVar24;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar31);
              }
            }
            *(short *)((longlong)param_9 + uVar32 * 2 + lVar36) = (short)uVar26;
            uVar32 = uVar32 + 1;
          } while (uVar32 < (ulonglong)(longlong)(int)param_5);
        }
        uVar20 = uVar20 + 1;
        lVar40 = lVar38 + lVar1 + lVar17 + lVar29;
        lVar29 = lVar29 + lVar21 * 2;
        puVar33 = (undefined2 *)((longlong)param_9 + lVar36 + uVar45 * 2);
        lVar36 = lVar36 + uVar45 * 2;
      } while (uVar20 < uVar42);
    }
    uVar20 = 0;
    if (0 < param_5._4_4_) {
      uVar31 = (ulonglong)(int)param_6;
      lVar17 = 0;
      do {
        uVar32 = (ulonglong)(int)param_5;
        uVar37 = 0;
        if (0 < (longlong)uVar32) {
          uVar19 = 0;
          puVar41 = puVar33;
          do {
            uVar26 = 0x7fff;
            if (0 < (longlong)uVar31) {
              uVar35 = uVar19;
              if (7 < (longlong)uVar31) {
                uVar22 = lVar40 + lVar17 + uVar37 * 2;
                uVar23 = uVar22 & 0xf;
                if (uVar23 != 0) {
                  if ((uVar22 & 1) != 0) goto LAB_14033975a;
                  uVar23 = 0x10 - uVar23 >> 1;
                }
                if ((longlong)(uVar23 + 8) <= (longlong)uVar31) {
                  uVar35 = uVar31 - (uVar31 - uVar23 & 7);
                  uVar47 = uVar19;
                  if (uVar23 != 0) {
                    do {
                      uVar46 = (uint)*(short *)(uVar22 + uVar47 * 2);
                      if ((int)uVar46 < (int)uVar26) {
                        uVar26 = uVar46;
                      }
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar23);
                  }
                  uVar48 = (ushort)uVar26;
                  uVar49 = uVar48;
                  uVar50 = uVar48;
                  uVar51 = uVar48;
                  uVar52 = uVar48;
                  uVar53 = uVar48;
                  uVar54 = uVar48;
                  uVar55 = uVar48;
                  do {
                    psVar3 = (short *)(uVar22 + uVar23 * 2);
                    sVar24 = *psVar3;
                    sVar59 = psVar3[1];
                    sVar18 = psVar3[2];
                    sVar25 = psVar3[3];
                    sVar27 = psVar3[4];
                    sVar30 = psVar3[5];
                    sVar34 = psVar3[6];
                    sVar44 = psVar3[7];
                    uVar48 = (ushort)(sVar24 < (short)uVar48) * sVar24 |
                             (sVar24 >= (short)uVar48) * uVar48;
                    uVar49 = (ushort)(sVar59 < (short)uVar49) * sVar59 |
                             (sVar59 >= (short)uVar49) * uVar49;
                    uVar50 = (ushort)(sVar18 < (short)uVar50) * sVar18 |
                             (sVar18 >= (short)uVar50) * uVar50;
                    uVar51 = (ushort)(sVar25 < (short)uVar51) * sVar25 |
                             (sVar25 >= (short)uVar51) * uVar51;
                    uVar52 = (ushort)(sVar27 < (short)uVar52) * sVar27 |
                             (sVar27 >= (short)uVar52) * uVar52;
                    uVar53 = (ushort)(sVar30 < (short)uVar53) * sVar30 |
                             (sVar30 >= (short)uVar53) * uVar53;
                    uVar54 = (ushort)(sVar34 < (short)uVar54) * sVar34 |
                             (sVar34 >= (short)uVar54) * uVar54;
                    uVar55 = (ushort)(sVar44 < (short)uVar55) * sVar44 |
                             (sVar44 >= (short)uVar55) * uVar55;
                    uVar23 = uVar23 + 8;
                  } while (uVar23 < uVar35);
                  uVar52 = ((short)uVar52 < (short)uVar48) * uVar52 |
                           ((short)uVar52 >= (short)uVar48) * uVar48;
                  uVar53 = ((short)uVar53 < (short)uVar49) * uVar53 |
                           ((short)uVar53 >= (short)uVar49) * uVar49;
                  uVar49 = ((short)uVar54 < (short)uVar50) * uVar54 |
                           ((short)uVar54 >= (short)uVar50) * uVar50;
                  uVar50 = ((short)uVar55 < (short)uVar51) * uVar55 |
                           ((short)uVar55 >= (short)uVar51) * uVar51;
                  uVar49 = ((short)uVar49 < (short)uVar52) * uVar49 |
                           ((short)uVar49 >= (short)uVar52) * uVar52;
                  uVar50 = ((short)uVar50 < (short)uVar53) * uVar50 |
                           ((short)uVar50 >= (short)uVar53) * uVar53;
                  uVar26 = (uint)(ushort)(((short)uVar50 < (short)uVar49) * uVar50 |
                                         ((short)uVar50 >= (short)uVar49) * uVar49);
                }
              }
LAB_14033975a:
              if (uVar35 < uVar31) {
                do {
                  sVar24 = (short)uVar26;
                  uVar26 = (uint)*(short *)(lVar40 + lVar17 + uVar37 * 2 + uVar35 * 2);
                  if ((int)sVar24 <= (int)uVar26) {
                    uVar26 = (int)sVar24;
                  }
                  uVar35 = uVar35 + 1;
                } while (uVar35 < uVar31);
              }
            }
            uVar37 = uVar37 + 1;
            *puVar41 = (short)uVar26;
            puVar41 = puVar41 + 1;
          } while (uVar37 < uVar32);
        }
        FUN_14033f6c0(param_9,uVar45,param_3,uVar32,lVar43);
        uVar42 = uVar42 + 1;
        puVar33 = puVar33 + uVar45;
        if (lVar43 <= (longlong)uVar42) {
          puVar33 = param_9;
          uVar42 = 0;
        }
        uVar20 = uVar20 + 1;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar17 = lVar17 + lVar21 * 2;
      } while (uVar20 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar17 = lVar17 * lVar21 * -2;
    param_1 = param_1 + lVar21 * -2;
    uVar45 = (ulonglong)(int)param_6;
    lVar40 = 0;
    lVar43 = 0;
    do {
      uVar42 = 0;
      if (0 < (int)param_5) {
        do {
          uVar31 = 0;
          uVar26 = 0x7fff;
          uVar39 = 0x7fff;
          if (0 < param_6._4_4_) {
            lVar1 = param_1 + lVar21 * 2 + lVar28 * -2 + lVar17 + lVar43 + uVar42 * 2;
            uVar32 = uVar31;
            uVar37 = uVar31;
            do {
              uVar19 = 0;
              if (0 < (longlong)uVar45) {
                if (7 < (longlong)uVar45) {
                  uVar60 = CONCAT22((short)uVar26,(short)uVar26);
                  auVar61._0_8_ = CONCAT44(uVar60,uVar60);
                  auVar61._8_8_ = auVar61._0_8_;
                  auVar56._8_4_ = 0xffffffff;
                  auVar56._0_8_ = 0xffffffffffffffff;
                  auVar56._12_4_ = 0xffffffff;
                  lVar38 = lVar17 + param_1 + lVar28 * -2 + lVar21 * 2 + lVar43 + uVar42 * 2 +
                           uVar32;
                  do {
                    uVar35 = *(ulonglong *)(param_7 + uVar37 + uVar19);
                    cVar58 = (char)(uVar35 >> 0x38);
                    auVar5._8_6_ = 0;
                    auVar5._0_8_ = uVar35;
                    auVar5[0xe] = cVar58;
                    auVar6._8_4_ = 0;
                    auVar6._0_8_ = uVar35;
                    auVar6[0xc] = (char)(uVar35 >> 0x30);
                    auVar6._13_2_ = auVar5._13_2_;
                    auVar7._8_4_ = 0;
                    auVar7._0_8_ = uVar35;
                    auVar7._12_3_ = auVar6._12_3_;
                    auVar8._8_2_ = 0;
                    auVar8._0_8_ = uVar35;
                    auVar8[10] = (char)(uVar35 >> 0x28);
                    auVar8._11_4_ = auVar7._11_4_;
                    auVar9._8_2_ = 0;
                    auVar9._0_8_ = uVar35;
                    auVar9._10_5_ = auVar8._10_5_;
                    auVar10[8] = (char)(uVar35 >> 0x20);
                    auVar10._0_8_ = uVar35;
                    auVar10._9_6_ = auVar9._9_6_;
                    auVar11._7_8_ = 0;
                    auVar11._0_7_ = auVar10._8_7_;
                    Var12 = CONCAT81(SUB158(auVar11 << 0x40,7),(char)(uVar35 >> 0x18));
                    auVar15._9_6_ = 0;
                    auVar15._0_9_ = Var12;
                    auVar13._1_10_ = SUB1510(auVar15 << 0x30,5);
                    auVar13[0] = (char)(uVar35 >> 0x10);
                    auVar16._11_4_ = 0;
                    auVar16._0_11_ = auVar13;
                    auVar14._1_12_ = SUB1512(auVar16 << 0x20,3);
                    auVar14[0] = (char)(uVar35 >> 8);
                    auVar57._0_2_ = -(ushort)((char)uVar35 == '\0');
                    auVar57._2_2_ = -(ushort)(auVar14._0_2_ == 0);
                    auVar57._4_2_ = -(ushort)(auVar13._0_2_ == 0);
                    auVar57._6_2_ = -(ushort)((short)Var12 == 0);
                    auVar57._8_2_ = -(ushort)(auVar10._8_2_ == 0);
                    auVar57._10_2_ = -(ushort)(auVar8._10_2_ == 0);
                    auVar57._12_2_ = -(ushort)(auVar6._12_2_ == 0);
                    auVar57._14_2_ = -(ushort)(cVar58 == '\0');
                    auVar57 = auVar57 ^ auVar56;
                    if ((auVar57 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar24 = 0;
                    }
                    else {
                      sVar24 = *(short *)(lVar1 + uVar32 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar59 = 0;
                    }
                    else {
                      sVar59 = *(short *)(lVar38 + 2 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar18 = 0;
                    }
                    else {
                      sVar18 = *(short *)(lVar38 + 4 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar25 = 0;
                    }
                    else {
                      sVar25 = *(short *)(lVar38 + 6 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar27 = 0;
                    }
                    else {
                      sVar27 = *(short *)(lVar38 + 8 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar30 = 0;
                    }
                    else {
                      sVar30 = *(short *)(lVar38 + 10 + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar34 = 0;
                    }
                    else {
                      sVar34 = *(short *)(lVar38 + 0xc + uVar19 * 2);
                    }
                    if ((auVar57 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar44 = 0;
                    }
                    else {
                      sVar44 = *(short *)(lVar38 + 0xe + uVar19 * 2);
                    }
                    uVar19 = uVar19 + 8;
                    sVar4 = auVar61._0_2_;
                    auVar62._0_2_ =
                         (ushort)(sVar4 < sVar24) * sVar4 | (ushort)(sVar4 >= sVar24) * sVar24;
                    sVar24 = auVar61._2_2_;
                    auVar62._2_2_ =
                         (ushort)(sVar24 < sVar59) * sVar24 | (ushort)(sVar24 >= sVar59) * sVar59;
                    sVar24 = auVar61._4_2_;
                    auVar62._4_2_ =
                         (ushort)(sVar24 < sVar18) * sVar24 | (ushort)(sVar24 >= sVar18) * sVar18;
                    sVar24 = auVar61._6_2_;
                    auVar62._6_2_ =
                         (ushort)(sVar24 < sVar25) * sVar24 | (ushort)(sVar24 >= sVar25) * sVar25;
                    sVar24 = auVar61._8_2_;
                    auVar62._8_2_ =
                         (ushort)(sVar24 < sVar27) * sVar24 | (ushort)(sVar24 >= sVar27) * sVar27;
                    sVar24 = auVar61._10_2_;
                    auVar62._10_2_ =
                         (ushort)(sVar24 < sVar30) * sVar24 | (ushort)(sVar24 >= sVar30) * sVar30;
                    sVar24 = auVar61._12_2_;
                    auVar62._12_2_ =
                         (ushort)(sVar24 < sVar34) * sVar24 | (ushort)(sVar24 >= sVar34) * sVar34;
                    sVar24 = auVar61._14_2_;
                    auVar62._14_2_ =
                         (ushort)(sVar24 < sVar44) * sVar24 | (ushort)(sVar24 >= sVar44) * sVar44;
                    auVar61 = auVar62 & auVar57 | ~auVar57 & auVar61;
                  } while (uVar19 < (uVar45 & 0xfffffffffffffff8));
                  sVar24 = auVar61._8_2_;
                  sVar59 = auVar61._0_2_;
                  uVar49 = (ushort)(sVar24 < sVar59) * sVar24 | (ushort)(sVar24 >= sVar59) * sVar59;
                  sVar24 = auVar61._10_2_;
                  sVar59 = auVar61._2_2_;
                  uVar50 = (ushort)(sVar24 < sVar59) * sVar24 | (ushort)(sVar24 >= sVar59) * sVar59;
                  sVar24 = auVar61._12_2_;
                  sVar59 = auVar61._4_2_;
                  uVar51 = (ushort)(sVar24 < sVar59) * sVar24 | (ushort)(sVar24 >= sVar59) * sVar59;
                  sVar24 = auVar61._14_2_;
                  sVar59 = auVar61._6_2_;
                  uVar52 = (ushort)(sVar24 < sVar59) * sVar24 | (ushort)(sVar24 >= sVar59) * sVar59;
                  uVar49 = ((short)uVar51 < (short)uVar49) * uVar51 |
                           ((short)uVar51 >= (short)uVar49) * uVar49;
                  uVar50 = ((short)uVar52 < (short)uVar50) * uVar52 |
                           ((short)uVar52 >= (short)uVar50) * uVar50;
                  uVar26 = (uint)(ushort)(((short)uVar50 < (short)uVar49) * uVar50 |
                                         ((short)uVar50 >= (short)uVar49) * uVar49);
                  uVar19 = uVar45 & 0xfffffffffffffff8;
                }
                if (uVar19 < uVar45) {
                  do {
                    if (*(char *)(uVar19 + param_7 + uVar37) != '\0') {
                      sVar24 = (short)uVar26;
                      uVar46 = (uint)*(short *)(lVar1 + uVar32 + uVar19 * 2);
                      uVar26 = (int)sVar24;
                      if ((int)uVar46 < (int)sVar24) {
                        uVar26 = uVar46;
                      }
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar45);
                }
              }
              uVar39 = (undefined2)uVar26;
              uVar31 = uVar31 + 1;
              uVar37 = uVar37 + uVar45;
              uVar32 = uVar32 + lVar21 * 2;
            } while (uVar31 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(undefined2 *)(param_3 + lVar40 + uVar42 * 2) = uVar39;
          uVar42 = uVar42 + 1;
        } while (uVar42 < (ulonglong)(longlong)(int)param_5);
      }
      uVar20 = uVar20 + 1;
      lVar40 = lVar40 + ((longlong)param_4 >> 1) * 2;
      lVar43 = lVar43 + lVar21 * 2;
    } while (uVar20 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

