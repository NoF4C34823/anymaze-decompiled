
void FUN_14033e760(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  undefined2 *param_9)

{
  short *psVar1;
  ulonglong uVar2;
  short sVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  unkuint9 Var11;
  undefined1 auVar12 [11];
  undefined1 auVar13 [13];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined2 uVar16;
  short sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  short sVar26;
  longlong lVar27;
  uint uVar28;
  short sVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  short sVar33;
  ulonglong uVar34;
  short sVar35;
  undefined2 *puVar36;
  short sVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  short sVar41;
  undefined2 *puVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  undefined1 auVar51 [16];
  char cVar53;
  undefined1 auVar52 [16];
  short sVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  param_2 = param_2 >> 1;
  uVar22 = *param_6;
  uVar34 = param_6[1];
  uVar2 = *param_5;
  param_4 = param_4 >> 1;
  uVar30 = uVar34 - 1;
  uVar38 = uVar2 + 0xf & 0xfffffffffffffff0;
  uVar19 = 0;
  param_1 = param_1 + ((int)(uVar30 >> 1) * param_2 + (longlong)(int)(uVar22 - 1 >> 1)) * -2;
  if (param_7 == 0) {
    lVar24 = param_1;
    puVar42 = param_9;
    if (0 < (longlong)uVar30) {
      lVar27 = 0;
      lVar25 = lVar27;
      do {
        uVar23 = 0;
        if (0 < (longlong)uVar2) {
          uVar40 = 0;
          do {
            uVar28 = 0x7fff;
            if (0 < (longlong)uVar22) {
              uVar21 = uVar40;
              if (7 < (longlong)uVar22) {
                uVar20 = param_1 + lVar27 + uVar23 * 2;
                uVar18 = uVar20 & 0xf;
                if (uVar18 != 0) {
                  if ((uVar20 & 1) != 0) goto LAB_14033e999;
                  uVar18 = 0x10 - uVar18 >> 1;
                }
                if ((longlong)(uVar18 + 8) <= (longlong)uVar22) {
                  uVar21 = uVar22 - (uVar22 - uVar18 & 7);
                  uVar39 = uVar40;
                  if (uVar18 != 0) {
                    do {
                      uVar32 = (uint)*(short *)(uVar20 + uVar39 * 2);
                      if ((int)uVar32 < (int)uVar28) {
                        uVar28 = uVar32;
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < uVar18);
                  }
                  uVar43 = (ushort)uVar28;
                  uVar44 = uVar43;
                  uVar45 = uVar43;
                  uVar46 = uVar43;
                  uVar47 = uVar43;
                  uVar48 = uVar43;
                  uVar49 = uVar43;
                  uVar50 = uVar43;
                  do {
                    psVar1 = (short *)(uVar20 + uVar18 * 2);
                    sVar17 = *psVar1;
                    sVar54 = psVar1[1];
                    sVar26 = psVar1[2];
                    sVar29 = psVar1[3];
                    sVar33 = psVar1[4];
                    sVar35 = psVar1[5];
                    sVar37 = psVar1[6];
                    sVar41 = psVar1[7];
                    uVar43 = (ushort)(sVar17 < (short)uVar43) * sVar17 |
                             (sVar17 >= (short)uVar43) * uVar43;
                    uVar44 = (ushort)(sVar54 < (short)uVar44) * sVar54 |
                             (sVar54 >= (short)uVar44) * uVar44;
                    uVar45 = (ushort)(sVar26 < (short)uVar45) * sVar26 |
                             (sVar26 >= (short)uVar45) * uVar45;
                    uVar46 = (ushort)(sVar29 < (short)uVar46) * sVar29 |
                             (sVar29 >= (short)uVar46) * uVar46;
                    uVar47 = (ushort)(sVar33 < (short)uVar47) * sVar33 |
                             (sVar33 >= (short)uVar47) * uVar47;
                    uVar48 = (ushort)(sVar35 < (short)uVar48) * sVar35 |
                             (sVar35 >= (short)uVar48) * uVar48;
                    uVar49 = (ushort)(sVar37 < (short)uVar49) * sVar37 |
                             (sVar37 >= (short)uVar49) * uVar49;
                    uVar50 = (ushort)(sVar41 < (short)uVar50) * sVar41 |
                             (sVar41 >= (short)uVar50) * uVar50;
                    uVar18 = uVar18 + 8;
                  } while (uVar18 < uVar21);
                  uVar47 = ((short)uVar47 < (short)uVar43) * uVar47 |
                           ((short)uVar47 >= (short)uVar43) * uVar43;
                  uVar48 = ((short)uVar48 < (short)uVar44) * uVar48 |
                           ((short)uVar48 >= (short)uVar44) * uVar44;
                  uVar44 = ((short)uVar49 < (short)uVar45) * uVar49 |
                           ((short)uVar49 >= (short)uVar45) * uVar45;
                  uVar45 = ((short)uVar50 < (short)uVar46) * uVar50 |
                           ((short)uVar50 >= (short)uVar46) * uVar46;
                  uVar44 = ((short)uVar44 < (short)uVar47) * uVar44 |
                           ((short)uVar44 >= (short)uVar47) * uVar47;
                  uVar45 = ((short)uVar45 < (short)uVar48) * uVar45 |
                           ((short)uVar45 >= (short)uVar48) * uVar48;
                  uVar28 = (uint)(ushort)(((short)uVar45 < (short)uVar44) * uVar45 |
                                         ((short)uVar45 >= (short)uVar44) * uVar44);
                }
              }
LAB_14033e999:
              if (uVar21 < uVar22) {
                do {
                  sVar17 = (short)uVar28;
                  uVar28 = (uint)*(short *)(param_1 + lVar27 + uVar23 * 2 + uVar21 * 2);
                  if ((int)sVar17 <= (int)uVar28) {
                    uVar28 = (int)sVar17;
                  }
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar22);
              }
            }
            *(short *)((longlong)param_9 + uVar23 * 2 + lVar25) = (short)uVar28;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar2);
        }
        uVar19 = uVar19 + 1;
        lVar24 = param_2 * 2 + lVar27 + param_1;
        lVar27 = lVar27 + param_2 * 2;
        puVar42 = (undefined2 *)((longlong)param_9 + lVar25 + uVar38 * 2);
        lVar25 = lVar25 + uVar38 * 2;
      } while (uVar19 < uVar30);
    }
    if (0 < (longlong)param_5[1]) {
      lVar27 = 0;
      param_3 = param_3 + param_4 * -2;
      lVar25 = 0;
      do {
        lVar27 = lVar27 + 1;
        uVar22 = 0;
        param_3 = param_3 + param_4 * 2;
        lVar25 = lVar25 + param_2 * 2;
        if (0 < (longlong)uVar2) {
          uVar19 = *param_6;
          lVar31 = param_2 * -2 + lVar24 + lVar25;
          uVar23 = 0;
          puVar36 = puVar42;
          do {
            uVar28 = 0x7fff;
            if (0 < (longlong)uVar19) {
              uVar40 = uVar23;
              if (7 < (longlong)uVar19) {
                uVar21 = lVar31 + uVar22 * 2;
                uVar20 = uVar21 & 0xf;
                if (uVar20 != 0) {
                  if ((uVar21 & 1) != 0) goto LAB_14033ebfa;
                  uVar20 = 0x10 - uVar20 >> 1;
                }
                if ((longlong)(uVar20 + 8) <= (longlong)uVar19) {
                  uVar40 = uVar19 - (uVar19 - uVar20 & 7);
                  uVar18 = uVar23;
                  if (uVar20 != 0) {
                    do {
                      uVar32 = (uint)*(short *)(uVar21 + uVar18 * 2);
                      if ((int)uVar32 < (int)uVar28) {
                        uVar28 = uVar32;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar20);
                  }
                  uVar43 = (ushort)uVar28;
                  uVar44 = uVar43;
                  uVar45 = uVar43;
                  uVar46 = uVar43;
                  uVar47 = uVar43;
                  uVar48 = uVar43;
                  uVar49 = uVar43;
                  uVar50 = uVar43;
                  do {
                    psVar1 = (short *)(uVar21 + uVar20 * 2);
                    sVar17 = *psVar1;
                    sVar54 = psVar1[1];
                    sVar26 = psVar1[2];
                    sVar29 = psVar1[3];
                    sVar33 = psVar1[4];
                    sVar35 = psVar1[5];
                    sVar37 = psVar1[6];
                    sVar41 = psVar1[7];
                    uVar43 = (ushort)(sVar17 < (short)uVar43) * sVar17 |
                             (sVar17 >= (short)uVar43) * uVar43;
                    uVar44 = (ushort)(sVar54 < (short)uVar44) * sVar54 |
                             (sVar54 >= (short)uVar44) * uVar44;
                    uVar45 = (ushort)(sVar26 < (short)uVar45) * sVar26 |
                             (sVar26 >= (short)uVar45) * uVar45;
                    uVar46 = (ushort)(sVar29 < (short)uVar46) * sVar29 |
                             (sVar29 >= (short)uVar46) * uVar46;
                    uVar47 = (ushort)(sVar33 < (short)uVar47) * sVar33 |
                             (sVar33 >= (short)uVar47) * uVar47;
                    uVar48 = (ushort)(sVar35 < (short)uVar48) * sVar35 |
                             (sVar35 >= (short)uVar48) * uVar48;
                    uVar49 = (ushort)(sVar37 < (short)uVar49) * sVar37 |
                             (sVar37 >= (short)uVar49) * uVar49;
                    uVar50 = (ushort)(sVar41 < (short)uVar50) * sVar41 |
                             (sVar41 >= (short)uVar50) * uVar50;
                    uVar20 = uVar20 + 8;
                  } while (uVar20 < uVar40);
                  uVar47 = ((short)uVar47 < (short)uVar43) * uVar47 |
                           ((short)uVar47 >= (short)uVar43) * uVar43;
                  uVar48 = ((short)uVar48 < (short)uVar44) * uVar48 |
                           ((short)uVar48 >= (short)uVar44) * uVar44;
                  uVar44 = ((short)uVar49 < (short)uVar45) * uVar49 |
                           ((short)uVar49 >= (short)uVar45) * uVar45;
                  uVar45 = ((short)uVar50 < (short)uVar46) * uVar50 |
                           ((short)uVar50 >= (short)uVar46) * uVar46;
                  uVar44 = ((short)uVar44 < (short)uVar47) * uVar44 |
                           ((short)uVar44 >= (short)uVar47) * uVar47;
                  uVar45 = ((short)uVar45 < (short)uVar48) * uVar45 |
                           ((short)uVar45 >= (short)uVar48) * uVar48;
                  uVar28 = (uint)(ushort)(((short)uVar45 < (short)uVar44) * uVar45 |
                                         ((short)uVar45 >= (short)uVar44) * uVar44);
                }
              }
LAB_14033ebfa:
              if (uVar40 < uVar19) {
                do {
                  sVar17 = (short)uVar28;
                  uVar28 = (uint)*(short *)(lVar31 + uVar22 * 2 + uVar40 * 2);
                  if ((int)sVar17 <= (int)uVar28) {
                    uVar28 = (int)sVar17;
                  }
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar19);
              }
            }
            uVar22 = uVar22 + 1;
            *puVar36 = (short)uVar28;
            puVar36 = puVar36 + 1;
          } while (uVar22 < uVar2);
        }
        FUN_14033f6c0(param_9,uVar38,param_3,uVar2,uVar34);
        uVar30 = uVar30 + 1;
        uVar34 = param_6[1];
        puVar42 = puVar42 + uVar38;
        if ((longlong)uVar34 <= (longlong)uVar30) {
          puVar42 = param_9;
          uVar30 = 0;
        }
      } while (lVar27 < (longlong)param_5[1]);
    }
  }
  else {
    uVar30 = param_5[1];
    if (0 < (longlong)uVar30) {
      lVar24 = 0;
      lVar25 = 0;
      do {
        uVar38 = 0;
        if (0 < (longlong)uVar2) {
          uVar23 = uVar38;
          do {
            uVar40 = 0;
            uVar28 = 0x7fff;
            uVar16 = 0x7fff;
            if (0 < (longlong)uVar34) {
              lVar27 = param_1 + lVar25 + uVar38;
              uVar21 = uVar40;
              uVar20 = uVar40;
              do {
                uVar18 = 0;
                if (0 < (longlong)uVar22) {
                  if (7 < (longlong)uVar22) {
                    uVar55 = CONCAT22((short)uVar28,(short)uVar28);
                    auVar56._0_8_ = CONCAT44(uVar55,uVar55);
                    auVar51._8_4_ = 0xffffffff;
                    auVar51._0_8_ = 0xffffffffffffffff;
                    auVar51._12_4_ = 0xffffffff;
                    auVar56._8_8_ = auVar56._0_8_;
                    lVar31 = lVar27 + uVar40;
                    do {
                      uVar39 = *(ulonglong *)(param_7 + uVar21 + uVar18);
                      cVar53 = (char)(uVar39 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar39;
                      auVar4[0xe] = cVar53;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar39;
                      auVar5[0xc] = (char)(uVar39 >> 0x30);
                      auVar5._13_2_ = auVar4._13_2_;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar39;
                      auVar6._12_3_ = auVar5._12_3_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar39;
                      auVar7[10] = (char)(uVar39 >> 0x28);
                      auVar7._11_4_ = auVar6._11_4_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar39;
                      auVar8._10_5_ = auVar7._10_5_;
                      auVar9[8] = (char)(uVar39 >> 0x20);
                      auVar9._0_8_ = uVar39;
                      auVar9._9_6_ = auVar8._9_6_;
                      auVar10._7_8_ = 0;
                      auVar10._0_7_ = auVar9._8_7_;
                      Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar39 >> 0x18));
                      auVar14._9_6_ = 0;
                      auVar14._0_9_ = Var11;
                      auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                      auVar12[0] = (char)(uVar39 >> 0x10);
                      auVar15._11_4_ = 0;
                      auVar15._0_11_ = auVar12;
                      auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                      auVar13[0] = (char)(uVar39 >> 8);
                      auVar52._0_2_ = -(ushort)((char)uVar39 == '\0');
                      auVar52._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar52._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar52._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar52._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar52._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar52._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar52._14_2_ = -(ushort)(cVar53 == '\0');
                      auVar52 = auVar52 ^ auVar51;
                      if ((auVar52 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar17 = 0;
                      }
                      else {
                        sVar17 = *(short *)(lVar31 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar54 = 0;
                      }
                      else {
                        sVar54 = *(short *)(lVar31 + 2 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar31 + 4 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar31 + 6 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar33 = 0;
                      }
                      else {
                        sVar33 = *(short *)(lVar31 + 8 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar31 + 10 + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar31 + 0xc + uVar18 * 2);
                      }
                      if ((auVar52 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar41 = 0;
                      }
                      else {
                        sVar41 = *(short *)(lVar31 + 0xe + uVar18 * 2);
                      }
                      uVar18 = uVar18 + 8;
                      sVar3 = auVar56._0_2_;
                      auVar57._0_2_ =
                           (ushort)(sVar3 < sVar17) * sVar3 | (ushort)(sVar3 >= sVar17) * sVar17;
                      sVar17 = auVar56._2_2_;
                      auVar57._2_2_ =
                           (ushort)(sVar17 < sVar54) * sVar17 | (ushort)(sVar17 >= sVar54) * sVar54;
                      sVar17 = auVar56._4_2_;
                      auVar57._4_2_ =
                           (ushort)(sVar17 < sVar26) * sVar17 | (ushort)(sVar17 >= sVar26) * sVar26;
                      sVar17 = auVar56._6_2_;
                      auVar57._6_2_ =
                           (ushort)(sVar17 < sVar29) * sVar17 | (ushort)(sVar17 >= sVar29) * sVar29;
                      sVar17 = auVar56._8_2_;
                      auVar57._8_2_ =
                           (ushort)(sVar17 < sVar33) * sVar17 | (ushort)(sVar17 >= sVar33) * sVar33;
                      sVar17 = auVar56._10_2_;
                      auVar57._10_2_ =
                           (ushort)(sVar17 < sVar35) * sVar17 | (ushort)(sVar17 >= sVar35) * sVar35;
                      sVar17 = auVar56._12_2_;
                      auVar57._12_2_ =
                           (ushort)(sVar17 < sVar37) * sVar17 | (ushort)(sVar17 >= sVar37) * sVar37;
                      sVar17 = auVar56._14_2_;
                      auVar57._14_2_ =
                           (ushort)(sVar17 < sVar41) * sVar17 | (ushort)(sVar17 >= sVar41) * sVar41;
                      auVar56 = auVar57 & auVar52 | ~auVar52 & auVar56;
                    } while (uVar18 < (uVar22 & 0xfffffffffffffff8));
                    sVar17 = auVar56._8_2_;
                    sVar54 = auVar56._0_2_;
                    uVar44 = (ushort)(sVar17 < sVar54) * sVar17 |
                             (ushort)(sVar17 >= sVar54) * sVar54;
                    sVar17 = auVar56._10_2_;
                    sVar54 = auVar56._2_2_;
                    uVar45 = (ushort)(sVar17 < sVar54) * sVar17 |
                             (ushort)(sVar17 >= sVar54) * sVar54;
                    sVar17 = auVar56._12_2_;
                    sVar54 = auVar56._4_2_;
                    uVar46 = (ushort)(sVar17 < sVar54) * sVar17 |
                             (ushort)(sVar17 >= sVar54) * sVar54;
                    sVar17 = auVar56._14_2_;
                    sVar54 = auVar56._6_2_;
                    uVar47 = (ushort)(sVar17 < sVar54) * sVar17 |
                             (ushort)(sVar17 >= sVar54) * sVar54;
                    uVar44 = ((short)uVar46 < (short)uVar44) * uVar46 |
                             ((short)uVar46 >= (short)uVar44) * uVar44;
                    uVar45 = ((short)uVar47 < (short)uVar45) * uVar47 |
                             ((short)uVar47 >= (short)uVar45) * uVar45;
                    uVar28 = (uint)(ushort)(((short)uVar45 < (short)uVar44) * uVar45 |
                                           ((short)uVar45 >= (short)uVar44) * uVar44);
                    uVar18 = uVar22 & 0xfffffffffffffff8;
                  }
                  if (uVar18 < uVar22) {
                    do {
                      if (*(char *)(uVar18 + param_7 + uVar21) != '\0') {
                        sVar17 = (short)uVar28;
                        uVar32 = (uint)*(short *)(lVar27 + uVar40 + uVar18 * 2);
                        uVar28 = (int)sVar17;
                        if ((int)uVar32 < (int)sVar17) {
                          uVar28 = uVar32;
                        }
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar22);
                  }
                }
                uVar16 = (undefined2)uVar28;
                uVar20 = uVar20 + 1;
                uVar21 = uVar21 + uVar22;
                uVar40 = uVar40 + param_2 * 2;
              } while (uVar20 < uVar34);
            }
            uVar23 = uVar23 + 1;
            *(undefined2 *)(uVar38 + param_3 + lVar24) = uVar16;
            uVar38 = uVar38 + 2;
          } while (uVar23 < uVar2);
        }
        uVar19 = uVar19 + 1;
        lVar24 = lVar24 + param_4 * 2;
        lVar25 = lVar25 + param_2 * 2;
      } while (uVar19 < uVar30);
    }
  }
  return;
}

