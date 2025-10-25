
void FUN_1403851c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  undefined2 *param_9)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  unkuint9 Var13;
  undefined1 auVar14 [11];
  undefined1 auVar15 [13];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  short sVar27;
  uint uVar28;
  longlong lVar29;
  short sVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  short sVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined2 *puVar37;
  short sVar38;
  ulonglong uVar39;
  short sVar40;
  uint uVar41;
  short sVar42;
  short sVar43;
  undefined2 *puVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  char cVar54;
  undefined1 auVar53 [16];
  short sVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  param_2 = param_2 >> 1;
  uVar20 = *param_6;
  uVar35 = param_6[1];
  uVar3 = *param_5;
  uVar31 = uVar35 - 1;
  uVar21 = uVar3 + 0xf & 0xfffffffffffffff0;
  uVar23 = 0;
  param_1 = param_1 + ((int)(uVar31 >> 1) * param_2 + (longlong)(int)(uVar20 - 1 >> 1)) * -2;
  param_4 = param_4 >> 1;
  if (param_7 == 0) {
    lVar19 = param_1;
    puVar44 = param_9;
    if (0 < (longlong)uVar31) {
      lVar34 = 0;
      uVar39 = uVar23;
      do {
        uVar36 = 0;
        if (0 < (longlong)uVar3) {
          uVar24 = 0;
          do {
            uVar28 = 0xffff8000;
            if (0 < (longlong)uVar20) {
              uVar22 = uVar24;
              if (7 < (longlong)uVar20) {
                uVar26 = uVar36 * 2 + param_1 + lVar34;
                uVar18 = uVar26 & 0xf;
                if (uVar18 != 0) {
                  if ((uVar26 & 1) != 0) goto LAB_140385411;
                  uVar18 = 0x10 - uVar18 >> 1;
                }
                if ((longlong)(uVar18 + 8) <= (longlong)uVar20) {
                  uVar22 = uVar20 - (uVar20 - uVar18 & 7);
                  uVar32 = uVar24;
                  if (uVar18 != 0) {
                    do {
                      uVar41 = (uint)*(short *)(uVar26 + uVar32 * 2);
                      if ((int)uVar28 < (int)uVar41) {
                        uVar28 = uVar41;
                      }
                      uVar32 = uVar32 + 1;
                    } while (uVar32 < uVar18);
                  }
                  uVar45 = (ushort)uVar28;
                  uVar46 = uVar45;
                  uVar47 = uVar45;
                  uVar48 = uVar45;
                  uVar49 = uVar45;
                  uVar50 = uVar45;
                  uVar51 = uVar45;
                  uVar52 = uVar45;
                  do {
                    psVar1 = (short *)(uVar26 + uVar18 * 2);
                    sVar42 = *psVar1;
                    sVar55 = psVar1[1];
                    sVar27 = psVar1[2];
                    sVar30 = psVar1[3];
                    sVar33 = psVar1[4];
                    sVar38 = psVar1[5];
                    sVar40 = psVar1[6];
                    sVar43 = psVar1[7];
                    uVar45 = (ushort)((short)uVar45 < sVar42) * sVar42 |
                             ((short)uVar45 >= sVar42) * uVar45;
                    uVar46 = (ushort)((short)uVar46 < sVar55) * sVar55 |
                             ((short)uVar46 >= sVar55) * uVar46;
                    uVar47 = (ushort)((short)uVar47 < sVar27) * sVar27 |
                             ((short)uVar47 >= sVar27) * uVar47;
                    uVar48 = (ushort)((short)uVar48 < sVar30) * sVar30 |
                             ((short)uVar48 >= sVar30) * uVar48;
                    uVar49 = (ushort)((short)uVar49 < sVar33) * sVar33 |
                             ((short)uVar49 >= sVar33) * uVar49;
                    uVar50 = (ushort)((short)uVar50 < sVar38) * sVar38 |
                             ((short)uVar50 >= sVar38) * uVar50;
                    uVar51 = (ushort)((short)uVar51 < sVar40) * sVar40 |
                             ((short)uVar51 >= sVar40) * uVar51;
                    uVar52 = (ushort)((short)uVar52 < sVar43) * sVar43 |
                             ((short)uVar52 >= sVar43) * uVar52;
                    uVar18 = uVar18 + 8;
                  } while (uVar18 < uVar22);
                  uVar49 = ((short)uVar45 < (short)uVar49) * uVar49 |
                           ((short)uVar45 >= (short)uVar49) * uVar45;
                  uVar50 = ((short)uVar46 < (short)uVar50) * uVar50 |
                           ((short)uVar46 >= (short)uVar50) * uVar46;
                  uVar46 = ((short)uVar47 < (short)uVar51) * uVar51 |
                           ((short)uVar47 >= (short)uVar51) * uVar47;
                  uVar47 = ((short)uVar48 < (short)uVar52) * uVar52 |
                           ((short)uVar48 >= (short)uVar52) * uVar48;
                  uVar46 = ((short)uVar49 < (short)uVar46) * uVar46 |
                           ((short)uVar49 >= (short)uVar46) * uVar49;
                  uVar47 = ((short)uVar50 < (short)uVar47) * uVar47 |
                           ((short)uVar50 >= (short)uVar47) * uVar50;
                  uVar28 = (uint)(ushort)(((short)uVar46 < (short)uVar47) * uVar47 |
                                         ((short)uVar46 >= (short)uVar47) * uVar46);
                }
              }
LAB_140385411:
              if (uVar22 < uVar20) {
                lVar19 = uVar36 * 2 + param_1 + lVar34;
                do {
                  sVar42 = (short)uVar28;
                  if ((short)uVar28 < *(short *)(lVar19 + uVar22 * 2)) {
                    sVar42 = *(short *)(lVar19 + uVar22 * 2);
                  }
                  uVar28 = (uint)sVar42;
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar20);
              }
            }
            *(short *)((longlong)param_9 + uVar36 * 2 + uVar39) = (short)uVar28;
            uVar36 = uVar36 + 1;
          } while (uVar36 < uVar3);
        }
        uVar23 = uVar23 + 1;
        lVar19 = param_2 * 2 + lVar34;
        puVar44 = (undefined2 *)((longlong)param_9 + uVar39 + uVar21 * 2);
        lVar34 = lVar34 + param_2 * 2;
        lVar19 = lVar19 + param_1;
        uVar39 = uVar39 + uVar21 * 2;
      } while (uVar23 < uVar31);
    }
    if (0 < (longlong)param_5[1]) {
      param_3 = param_3 + param_4 * -2;
      lVar34 = 0;
      lVar29 = 0;
      do {
        uVar20 = 0;
        param_3 = param_3 + param_4 * 2;
        lVar34 = lVar34 + 1;
        lVar29 = lVar29 + param_2 * 2;
        if (0 < (longlong)uVar3) {
          uVar23 = *param_6;
          lVar2 = param_2 * -2 + lVar19 + lVar29;
          uVar39 = uVar20;
          puVar37 = puVar44;
          do {
            uVar28 = 0xffff8000;
            if (0 < (longlong)uVar23) {
              uVar36 = uVar20;
              if (7 < (longlong)uVar23) {
                uVar22 = uVar39 * 2 + lVar2;
                uVar24 = uVar22 & 0xf;
                if (uVar24 != 0) {
                  if ((uVar22 & 1) != 0) goto LAB_140385651;
                  uVar24 = 0x10 - uVar24 >> 1;
                }
                if ((longlong)(uVar24 + 8) <= (longlong)uVar23) {
                  uVar36 = uVar23 - (uVar23 - uVar24 & 7);
                  uVar18 = uVar20;
                  if (uVar24 != 0) {
                    do {
                      uVar41 = (uint)*(short *)(uVar22 + uVar18 * 2);
                      if ((int)uVar28 < (int)uVar41) {
                        uVar28 = uVar41;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar24);
                  }
                  uVar45 = (ushort)uVar28;
                  uVar46 = uVar45;
                  uVar47 = uVar45;
                  uVar48 = uVar45;
                  uVar49 = uVar45;
                  uVar50 = uVar45;
                  uVar51 = uVar45;
                  uVar52 = uVar45;
                  do {
                    psVar1 = (short *)(uVar22 + uVar24 * 2);
                    sVar42 = *psVar1;
                    sVar55 = psVar1[1];
                    sVar27 = psVar1[2];
                    sVar30 = psVar1[3];
                    sVar33 = psVar1[4];
                    sVar38 = psVar1[5];
                    sVar40 = psVar1[6];
                    sVar43 = psVar1[7];
                    uVar45 = (ushort)((short)uVar45 < sVar42) * sVar42 |
                             ((short)uVar45 >= sVar42) * uVar45;
                    uVar46 = (ushort)((short)uVar46 < sVar55) * sVar55 |
                             ((short)uVar46 >= sVar55) * uVar46;
                    uVar47 = (ushort)((short)uVar47 < sVar27) * sVar27 |
                             ((short)uVar47 >= sVar27) * uVar47;
                    uVar48 = (ushort)((short)uVar48 < sVar30) * sVar30 |
                             ((short)uVar48 >= sVar30) * uVar48;
                    uVar49 = (ushort)((short)uVar49 < sVar33) * sVar33 |
                             ((short)uVar49 >= sVar33) * uVar49;
                    uVar50 = (ushort)((short)uVar50 < sVar38) * sVar38 |
                             ((short)uVar50 >= sVar38) * uVar50;
                    uVar51 = (ushort)((short)uVar51 < sVar40) * sVar40 |
                             ((short)uVar51 >= sVar40) * uVar51;
                    uVar52 = (ushort)((short)uVar52 < sVar43) * sVar43 |
                             ((short)uVar52 >= sVar43) * uVar52;
                    uVar24 = uVar24 + 8;
                  } while (uVar24 < uVar36);
                  uVar49 = ((short)uVar45 < (short)uVar49) * uVar49 |
                           ((short)uVar45 >= (short)uVar49) * uVar45;
                  uVar50 = ((short)uVar46 < (short)uVar50) * uVar50 |
                           ((short)uVar46 >= (short)uVar50) * uVar46;
                  uVar46 = ((short)uVar47 < (short)uVar51) * uVar51 |
                           ((short)uVar47 >= (short)uVar51) * uVar47;
                  uVar47 = ((short)uVar48 < (short)uVar52) * uVar52 |
                           ((short)uVar48 >= (short)uVar52) * uVar48;
                  uVar46 = ((short)uVar49 < (short)uVar46) * uVar46 |
                           ((short)uVar49 >= (short)uVar46) * uVar49;
                  uVar47 = ((short)uVar50 < (short)uVar47) * uVar47 |
                           ((short)uVar50 >= (short)uVar47) * uVar50;
                  uVar28 = (uint)(ushort)(((short)uVar46 < (short)uVar47) * uVar47 |
                                         ((short)uVar46 >= (short)uVar47) * uVar46);
                }
              }
LAB_140385651:
              if (uVar36 < uVar23) {
                lVar25 = uVar39 * 2 + lVar2;
                do {
                  sVar42 = (short)uVar28;
                  if ((short)uVar28 < *(short *)(lVar25 + uVar36 * 2)) {
                    sVar42 = *(short *)(lVar25 + uVar36 * 2);
                  }
                  uVar28 = (uint)sVar42;
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar23);
              }
            }
            uVar39 = uVar39 + 1;
            *puVar37 = (short)uVar28;
            puVar37 = puVar37 + 1;
          } while (uVar39 < uVar3);
        }
        FUN_140388a20(param_9,uVar21,param_3,uVar3,uVar35);
        uVar31 = uVar31 + 1;
        uVar35 = param_6[1];
        puVar44 = puVar44 + uVar21;
        if ((longlong)param_6[1] <= (longlong)uVar31) {
          uVar31 = 0;
          puVar44 = param_9;
        }
      } while (lVar34 < (longlong)param_5[1]);
    }
  }
  else {
    uVar31 = param_5[1];
    if (0 < (longlong)uVar31) {
      lVar34 = 0;
      lVar19 = 0;
      do {
        uVar21 = 0;
        if (0 < (longlong)uVar3) {
          uVar39 = uVar21;
          do {
            uVar36 = 0;
            uVar46 = 0x8000;
            if (0 < (longlong)uVar35) {
              lVar29 = param_1 + lVar19 + uVar21;
              uVar24 = uVar36;
              uVar22 = uVar36;
              do {
                uVar18 = 0;
                if (0 < (longlong)uVar20) {
                  if (7 < (longlong)uVar20) {
                    auVar56._0_8_ = CONCAT44(CONCAT22(uVar46,uVar46),CONCAT22(uVar46,uVar46));
                    lVar2 = lVar29 + uVar36;
                    auVar56._8_8_ = auVar56._0_8_;
                    do {
                      uVar26 = *(ulonglong *)(uVar18 + param_7 + uVar24);
                      cVar54 = (char)(uVar26 >> 0x38);
                      auVar6._8_6_ = 0;
                      auVar6._0_8_ = uVar26;
                      auVar6[0xe] = cVar54;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar26;
                      auVar7[0xc] = (char)(uVar26 >> 0x30);
                      auVar7._13_2_ = auVar6._13_2_;
                      auVar8._8_4_ = 0;
                      auVar8._0_8_ = uVar26;
                      auVar8._12_3_ = auVar7._12_3_;
                      auVar9._8_2_ = 0;
                      auVar9._0_8_ = uVar26;
                      auVar9[10] = (char)(uVar26 >> 0x28);
                      auVar9._11_4_ = auVar8._11_4_;
                      auVar10._8_2_ = 0;
                      auVar10._0_8_ = uVar26;
                      auVar10._10_5_ = auVar9._10_5_;
                      auVar11[8] = (char)(uVar26 >> 0x20);
                      auVar11._0_8_ = uVar26;
                      auVar11._9_6_ = auVar10._9_6_;
                      auVar12._7_8_ = 0;
                      auVar12._0_7_ = auVar11._8_7_;
                      Var13 = CONCAT81(SUB158(auVar12 << 0x40,7),(char)(uVar26 >> 0x18));
                      auVar16._9_6_ = 0;
                      auVar16._0_9_ = Var13;
                      auVar14._1_10_ = SUB1510(auVar16 << 0x30,5);
                      auVar14[0] = (char)(uVar26 >> 0x10);
                      auVar17._11_4_ = 0;
                      auVar17._0_11_ = auVar14;
                      auVar15._1_12_ = SUB1512(auVar17 << 0x20,3);
                      auVar15[0] = (char)(uVar26 >> 8);
                      auVar53._0_2_ = -(ushort)((char)uVar26 == '\0');
                      auVar53._2_2_ = -(ushort)(auVar15._0_2_ == 0);
                      auVar53._4_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar53._6_2_ = -(ushort)((short)Var13 == 0);
                      auVar53._8_2_ = -(ushort)(auVar11._8_2_ == 0);
                      auVar53._10_2_ = -(ushort)(auVar9._10_2_ == 0);
                      auVar53._12_2_ = -(ushort)(auVar7._12_2_ == 0);
                      auVar53._14_2_ = -(ushort)(cVar54 == '\0');
                      auVar5._8_4_ = 0xffffffff;
                      auVar5._0_8_ = 0xffffffffffffffff;
                      auVar5._12_4_ = 0xffffffff;
                      auVar53 = auVar53 ^ auVar5;
                      if ((auVar53 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar2 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar55 = 0;
                      }
                      else {
                        sVar55 = *(short *)(lVar2 + 2 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar27 = 0;
                      }
                      else {
                        sVar27 = *(short *)(lVar2 + 4 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar30 = 0;
                      }
                      else {
                        sVar30 = *(short *)(lVar2 + 6 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar33 = 0;
                      }
                      else {
                        sVar33 = *(short *)(lVar2 + 8 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar2 + 10 + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar2 + 0xc + uVar18 * 2);
                      }
                      if ((auVar53 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar43 = 0;
                      }
                      else {
                        sVar43 = *(short *)(lVar2 + 0xe + uVar18 * 2);
                      }
                      uVar18 = uVar18 + 8;
                      sVar4 = auVar56._0_2_;
                      auVar57._0_2_ =
                           (ushort)(sVar42 < sVar4) * sVar4 | (ushort)(sVar42 >= sVar4) * sVar42;
                      sVar42 = auVar56._2_2_;
                      auVar57._2_2_ =
                           (ushort)(sVar55 < sVar42) * sVar42 | (ushort)(sVar55 >= sVar42) * sVar55;
                      sVar42 = auVar56._4_2_;
                      auVar57._4_2_ =
                           (ushort)(sVar27 < sVar42) * sVar42 | (ushort)(sVar27 >= sVar42) * sVar27;
                      sVar42 = auVar56._6_2_;
                      auVar57._6_2_ =
                           (ushort)(sVar30 < sVar42) * sVar42 | (ushort)(sVar30 >= sVar42) * sVar30;
                      sVar42 = auVar56._8_2_;
                      auVar57._8_2_ =
                           (ushort)(sVar33 < sVar42) * sVar42 | (ushort)(sVar33 >= sVar42) * sVar33;
                      sVar42 = auVar56._10_2_;
                      auVar57._10_2_ =
                           (ushort)(sVar38 < sVar42) * sVar42 | (ushort)(sVar38 >= sVar42) * sVar38;
                      sVar42 = auVar56._12_2_;
                      auVar57._12_2_ =
                           (ushort)(sVar40 < sVar42) * sVar42 | (ushort)(sVar40 >= sVar42) * sVar40;
                      sVar42 = auVar56._14_2_;
                      auVar57._14_2_ =
                           (ushort)(sVar43 < sVar42) * sVar42 | (ushort)(sVar43 >= sVar42) * sVar43;
                      auVar56 = auVar57 & auVar53 | ~auVar53 & auVar56;
                    } while (uVar18 < (uVar20 & 0xfffffffffffffff8));
                    sVar42 = auVar56._8_2_;
                    sVar55 = auVar56._0_2_;
                    uVar46 = (ushort)(sVar55 < sVar42) * sVar42 |
                             (ushort)(sVar55 >= sVar42) * sVar55;
                    sVar42 = auVar56._10_2_;
                    sVar55 = auVar56._2_2_;
                    uVar47 = (ushort)(sVar55 < sVar42) * sVar42 |
                             (ushort)(sVar55 >= sVar42) * sVar55;
                    sVar42 = auVar56._12_2_;
                    sVar55 = auVar56._4_2_;
                    uVar48 = (ushort)(sVar55 < sVar42) * sVar42 |
                             (ushort)(sVar55 >= sVar42) * sVar55;
                    sVar42 = auVar56._14_2_;
                    sVar55 = auVar56._6_2_;
                    uVar49 = (ushort)(sVar55 < sVar42) * sVar42 |
                             (ushort)(sVar55 >= sVar42) * sVar55;
                    uVar46 = ((short)uVar46 < (short)uVar48) * uVar48 |
                             ((short)uVar46 >= (short)uVar48) * uVar46;
                    uVar47 = ((short)uVar47 < (short)uVar49) * uVar49 |
                             ((short)uVar47 >= (short)uVar49) * uVar47;
                    uVar46 = ((short)uVar46 < (short)uVar47) * uVar47 |
                             ((short)uVar46 >= (short)uVar47) * uVar46;
                    uVar18 = uVar20 & 0xfffffffffffffff8;
                  }
                  if (uVar18 < uVar20) {
                    lVar2 = lVar29 + uVar36;
                    do {
                      if ((*(char *)(uVar18 + param_7 + uVar24) != '\0') &&
                         ((short)uVar46 < *(short *)(lVar2 + uVar18 * 2))) {
                        uVar46 = *(ushort *)(lVar2 + uVar18 * 2);
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar20);
                  }
                }
                uVar22 = uVar22 + 1;
                uVar24 = uVar24 + uVar20;
                uVar36 = uVar36 + param_2 * 2;
              } while (uVar22 < uVar35);
            }
            uVar39 = uVar39 + 1;
            *(ushort *)(uVar21 + param_3 + lVar34) = uVar46;
            uVar21 = uVar21 + 2;
          } while (uVar39 < uVar3);
        }
        uVar23 = uVar23 + 1;
        lVar34 = lVar34 + param_4 * 2;
        lVar19 = lVar19 + param_2 * 2;
      } while (uVar23 < uVar31);
    }
  }
  return;
}

