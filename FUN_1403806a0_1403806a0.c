
void FUN_1403806a0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,undefined2 *param_9)

{
  short *psVar1;
  short sVar2;
  undefined1 auVar3 [16];
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
  ulonglong uVar16;
  short sVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  short sVar21;
  ulonglong uVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  short sVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  short sVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined2 *puVar35;
  short sVar36;
  longlong lVar37;
  ulonglong uVar38;
  short sVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  short sVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  char cVar55;
  undefined1 auVar54 [16];
  short sVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  
  uVar30 = 0;
  lVar19 = (longlong)param_2 >> 1;
  lVar37 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar16 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar32 = (longlong)((int)param_6 + -1 >> 1);
  lVar44 = (lVar19 * lVar37 + lVar32) * -2 + param_1;
  if (param_7 == 0) {
    uVar26 = (longlong)param_6._4_4_ - 1;
    puVar23 = param_9;
    if (uVar26 != 0 && 0 < (longlong)param_6._4_4_) {
      lVar34 = lVar19 * 2;
      lVar32 = lVar32 * -2;
      lVar37 = lVar37 * lVar19 * -2;
      lVar45 = lVar19 * -2 + param_1;
      lVar28 = 0;
      uVar41 = uVar30;
      do {
        uVar22 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar44 = lVar37 + lVar45 + lVar32 + lVar34 + lVar28;
          uVar38 = 0;
          uVar40 = (ulonglong)(int)param_6;
          do {
            uVar31 = 0xffff8000;
            if (0 < (longlong)uVar40) {
              uVar27 = uVar38;
              if (7 < (longlong)uVar40) {
                uVar24 = uVar22 * 2 + lVar34 + lVar45 + lVar32 + lVar37 + lVar28;
                uVar18 = uVar24 & 0xf;
                if (uVar18 != 0) {
                  if ((uVar24 & 1) != 0) goto LAB_140380931;
                  uVar18 = 0x10 - uVar18 >> 1;
                }
                if ((longlong)(uVar18 + 8) <= (longlong)uVar40) {
                  lVar20 = uVar22 * 2 + lVar44;
                  uVar27 = uVar40 - (uVar40 - uVar18 & 7);
                  uVar24 = uVar38;
                  if (uVar18 != 0) {
                    do {
                      uVar43 = (uint)*(short *)(lVar20 + uVar24 * 2);
                      if ((int)uVar31 < (int)uVar43) {
                        uVar31 = uVar43;
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar18);
                  }
                  uVar46 = (ushort)uVar31;
                  uVar47 = uVar46;
                  uVar48 = uVar46;
                  uVar49 = uVar46;
                  uVar50 = uVar46;
                  uVar51 = uVar46;
                  uVar52 = uVar46;
                  uVar53 = uVar46;
                  do {
                    psVar1 = (short *)(lVar20 + uVar18 * 2);
                    sVar39 = *psVar1;
                    sVar56 = psVar1[1];
                    sVar17 = psVar1[2];
                    sVar21 = psVar1[3];
                    sVar25 = psVar1[4];
                    sVar29 = psVar1[5];
                    sVar36 = psVar1[6];
                    sVar42 = psVar1[7];
                    uVar46 = (ushort)((short)uVar46 < sVar39) * sVar39 |
                             ((short)uVar46 >= sVar39) * uVar46;
                    uVar47 = (ushort)((short)uVar47 < sVar56) * sVar56 |
                             ((short)uVar47 >= sVar56) * uVar47;
                    uVar48 = (ushort)((short)uVar48 < sVar17) * sVar17 |
                             ((short)uVar48 >= sVar17) * uVar48;
                    uVar49 = (ushort)((short)uVar49 < sVar21) * sVar21 |
                             ((short)uVar49 >= sVar21) * uVar49;
                    uVar50 = (ushort)((short)uVar50 < sVar25) * sVar25 |
                             ((short)uVar50 >= sVar25) * uVar50;
                    uVar51 = (ushort)((short)uVar51 < sVar29) * sVar29 |
                             ((short)uVar51 >= sVar29) * uVar51;
                    uVar52 = (ushort)((short)uVar52 < sVar36) * sVar36 |
                             ((short)uVar52 >= sVar36) * uVar52;
                    uVar53 = (ushort)((short)uVar53 < sVar42) * sVar42 |
                             ((short)uVar53 >= sVar42) * uVar53;
                    uVar18 = uVar18 + 8;
                  } while (uVar18 < uVar27);
                  uVar50 = ((short)uVar46 < (short)uVar50) * uVar50 |
                           ((short)uVar46 >= (short)uVar50) * uVar46;
                  uVar51 = ((short)uVar47 < (short)uVar51) * uVar51 |
                           ((short)uVar47 >= (short)uVar51) * uVar47;
                  uVar47 = ((short)uVar48 < (short)uVar52) * uVar52 |
                           ((short)uVar48 >= (short)uVar52) * uVar48;
                  uVar48 = ((short)uVar49 < (short)uVar53) * uVar53 |
                           ((short)uVar49 >= (short)uVar53) * uVar49;
                  uVar47 = ((short)uVar50 < (short)uVar47) * uVar47 |
                           ((short)uVar50 >= (short)uVar47) * uVar50;
                  uVar48 = ((short)uVar51 < (short)uVar48) * uVar48 |
                           ((short)uVar51 >= (short)uVar48) * uVar51;
                  uVar31 = (uint)(ushort)(((short)uVar47 < (short)uVar48) * uVar48 |
                                         ((short)uVar47 >= (short)uVar48) * uVar47);
                }
              }
LAB_140380931:
              if (uVar27 < uVar40) {
                lVar20 = uVar22 * 2 + lVar44;
                do {
                  sVar39 = (short)uVar31;
                  if ((short)uVar31 < *(short *)(lVar20 + uVar27 * 2)) {
                    sVar39 = *(short *)(lVar20 + uVar27 * 2);
                  }
                  uVar31 = (uint)sVar39;
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar40);
              }
            }
            *(short *)((longlong)param_9 + uVar22 * 2 + uVar30) = (short)uVar31;
            uVar22 = uVar22 + 1;
          } while (uVar22 < (ulonglong)(longlong)(int)param_5);
        }
        uVar41 = uVar41 + 1;
        lVar44 = lVar28 + param_1 + lVar37;
        puVar23 = (undefined2 *)((longlong)param_9 + uVar30 + uVar16 * 2);
        lVar28 = lVar28 + lVar34;
        lVar44 = lVar44 + lVar19 * 2 + lVar32;
        uVar30 = uVar30 + uVar16 * 2;
      } while (uVar41 < uVar26);
    }
    uVar30 = 0;
    if (0 < param_5._4_4_) {
      lVar32 = 0;
      uVar41 = (ulonglong)(int)param_5;
      do {
        uVar22 = 0;
        if (0 < (longlong)uVar41) {
          uVar40 = (ulonglong)(int)param_6;
          puVar35 = puVar23;
          uVar38 = uVar22;
          do {
            uVar31 = 0xffff8000;
            if (0 < (longlong)uVar40) {
              uVar27 = uVar22;
              if (7 < (longlong)uVar40) {
                uVar24 = uVar38 * 2 + lVar44 + lVar32;
                uVar18 = uVar24 & 0xf;
                if (uVar18 != 0) {
                  if ((uVar24 & 1) != 0) goto LAB_140380b92;
                  uVar18 = 0x10 - uVar18 >> 1;
                }
                if ((longlong)(uVar18 + 8) <= (longlong)uVar40) {
                  uVar27 = uVar40 - (uVar40 - uVar18 & 7);
                  uVar33 = uVar22;
                  if (uVar18 != 0) {
                    do {
                      uVar43 = (uint)*(short *)(uVar24 + uVar33 * 2);
                      if ((int)uVar31 < (int)uVar43) {
                        uVar31 = uVar43;
                      }
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar18);
                  }
                  uVar46 = (ushort)uVar31;
                  uVar47 = uVar46;
                  uVar48 = uVar46;
                  uVar49 = uVar46;
                  uVar50 = uVar46;
                  uVar51 = uVar46;
                  uVar52 = uVar46;
                  uVar53 = uVar46;
                  do {
                    psVar1 = (short *)(uVar24 + uVar18 * 2);
                    sVar39 = *psVar1;
                    sVar56 = psVar1[1];
                    sVar17 = psVar1[2];
                    sVar21 = psVar1[3];
                    sVar25 = psVar1[4];
                    sVar29 = psVar1[5];
                    sVar36 = psVar1[6];
                    sVar42 = psVar1[7];
                    uVar46 = (ushort)((short)uVar46 < sVar39) * sVar39 |
                             ((short)uVar46 >= sVar39) * uVar46;
                    uVar47 = (ushort)((short)uVar47 < sVar56) * sVar56 |
                             ((short)uVar47 >= sVar56) * uVar47;
                    uVar48 = (ushort)((short)uVar48 < sVar17) * sVar17 |
                             ((short)uVar48 >= sVar17) * uVar48;
                    uVar49 = (ushort)((short)uVar49 < sVar21) * sVar21 |
                             ((short)uVar49 >= sVar21) * uVar49;
                    uVar50 = (ushort)((short)uVar50 < sVar25) * sVar25 |
                             ((short)uVar50 >= sVar25) * uVar50;
                    uVar51 = (ushort)((short)uVar51 < sVar29) * sVar29 |
                             ((short)uVar51 >= sVar29) * uVar51;
                    uVar52 = (ushort)((short)uVar52 < sVar36) * sVar36 |
                             ((short)uVar52 >= sVar36) * uVar52;
                    uVar53 = (ushort)((short)uVar53 < sVar42) * sVar42 |
                             ((short)uVar53 >= sVar42) * uVar53;
                    uVar18 = uVar18 + 8;
                  } while (uVar18 < uVar27);
                  uVar50 = ((short)uVar46 < (short)uVar50) * uVar50 |
                           ((short)uVar46 >= (short)uVar50) * uVar46;
                  uVar51 = ((short)uVar47 < (short)uVar51) * uVar51 |
                           ((short)uVar47 >= (short)uVar51) * uVar47;
                  uVar47 = ((short)uVar48 < (short)uVar52) * uVar52 |
                           ((short)uVar48 >= (short)uVar52) * uVar48;
                  uVar48 = ((short)uVar49 < (short)uVar53) * uVar53 |
                           ((short)uVar49 >= (short)uVar53) * uVar49;
                  uVar47 = ((short)uVar50 < (short)uVar47) * uVar47 |
                           ((short)uVar50 >= (short)uVar47) * uVar50;
                  uVar48 = ((short)uVar51 < (short)uVar48) * uVar48 |
                           ((short)uVar51 >= (short)uVar48) * uVar51;
                  uVar31 = (uint)(ushort)(((short)uVar47 < (short)uVar48) * uVar48 |
                                         ((short)uVar47 >= (short)uVar48) * uVar47);
                }
              }
LAB_140380b92:
              if (uVar27 < uVar40) {
                lVar37 = uVar38 * 2 + lVar44 + lVar32;
                do {
                  sVar39 = (short)uVar31;
                  if ((short)uVar31 < *(short *)(lVar37 + uVar27 * 2)) {
                    sVar39 = *(short *)(lVar37 + uVar27 * 2);
                  }
                  uVar31 = (uint)sVar39;
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar40);
              }
            }
            uVar38 = uVar38 + 1;
            *puVar35 = (short)uVar31;
            puVar35 = puVar35 + 1;
          } while (uVar38 < uVar41);
        }
        FUN_140388a20(param_9,uVar16,param_3,uVar41,(longlong)param_6._4_4_);
        uVar26 = uVar26 + 1;
        uVar30 = uVar30 + 1;
        puVar23 = puVar23 + uVar16;
        if ((longlong)param_6._4_4_ <= (longlong)uVar26) {
          uVar26 = 0;
          puVar23 = param_9;
        }
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar32 = lVar32 + lVar19 * 2;
      } while (uVar30 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar44 = lVar19 * 2;
    lVar37 = lVar37 * lVar19 * -2;
    param_1 = param_1 + lVar19 * -2;
    lVar28 = 0;
    lVar19 = 0;
    do {
      uVar16 = 0;
      if (0 < (int)param_5) {
        do {
          uVar26 = 0;
          uVar47 = 0x8000;
          if (0 < param_6._4_4_) {
            lVar34 = uVar16 * 2 + lVar44 + param_1 + lVar32 * -2 + lVar37 + lVar19;
            uVar41 = uVar26;
            uVar22 = uVar26;
            do {
              uVar38 = (ulonglong)(int)param_6;
              if (0 < (longlong)uVar38) {
                if ((longlong)uVar38 < 8) {
                  uVar38 = 0;
                }
                else {
                  auVar57._0_8_ = CONCAT44(CONCAT22(uVar47,uVar47),CONCAT22(uVar47,uVar47));
                  auVar57._8_8_ = auVar57._0_8_;
                  uVar38 = uVar38 & 0xfffffffffffffff8;
                  uVar40 = 0;
                  lVar45 = lVar37 + param_1 + lVar32 * -2 + lVar44 + lVar19 + uVar16 * 2 + uVar41;
                  do {
                    uVar27 = *(ulonglong *)(uVar40 + param_7 + uVar22);
                    cVar55 = (char)(uVar27 >> 0x38);
                    auVar4._8_6_ = 0;
                    auVar4._0_8_ = uVar27;
                    auVar4[0xe] = cVar55;
                    auVar5._8_4_ = 0;
                    auVar5._0_8_ = uVar27;
                    auVar5[0xc] = (char)(uVar27 >> 0x30);
                    auVar5._13_2_ = auVar4._13_2_;
                    auVar6._8_4_ = 0;
                    auVar6._0_8_ = uVar27;
                    auVar6._12_3_ = auVar5._12_3_;
                    auVar7._8_2_ = 0;
                    auVar7._0_8_ = uVar27;
                    auVar7[10] = (char)(uVar27 >> 0x28);
                    auVar7._11_4_ = auVar6._11_4_;
                    auVar8._8_2_ = 0;
                    auVar8._0_8_ = uVar27;
                    auVar8._10_5_ = auVar7._10_5_;
                    auVar9[8] = (char)(uVar27 >> 0x20);
                    auVar9._0_8_ = uVar27;
                    auVar9._9_6_ = auVar8._9_6_;
                    auVar10._7_8_ = 0;
                    auVar10._0_7_ = auVar9._8_7_;
                    Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar27 >> 0x18));
                    auVar14._9_6_ = 0;
                    auVar14._0_9_ = Var11;
                    auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                    auVar12[0] = (char)(uVar27 >> 0x10);
                    auVar15._11_4_ = 0;
                    auVar15._0_11_ = auVar12;
                    auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                    auVar13[0] = (char)(uVar27 >> 8);
                    auVar54._0_2_ = -(ushort)((char)uVar27 == '\0');
                    auVar54._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                    auVar54._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                    auVar54._6_2_ = -(ushort)((short)Var11 == 0);
                    auVar54._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                    auVar54._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                    auVar54._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                    auVar54._14_2_ = -(ushort)(cVar55 == '\0');
                    auVar3._8_4_ = 0xffffffff;
                    auVar3._0_8_ = 0xffffffffffffffff;
                    auVar3._12_4_ = 0xffffffff;
                    auVar54 = auVar54 ^ auVar3;
                    if ((auVar54 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar39 = 0;
                    }
                    else {
                      sVar39 = *(short *)(lVar34 + uVar41 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar56 = 0;
                    }
                    else {
                      sVar56 = *(short *)(lVar45 + 2 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar17 = 0;
                    }
                    else {
                      sVar17 = *(short *)(lVar45 + 4 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar21 = 0;
                    }
                    else {
                      sVar21 = *(short *)(lVar45 + 6 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar25 = 0;
                    }
                    else {
                      sVar25 = *(short *)(lVar45 + 8 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar29 = 0;
                    }
                    else {
                      sVar29 = *(short *)(lVar45 + 10 + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar36 = 0;
                    }
                    else {
                      sVar36 = *(short *)(lVar45 + 0xc + uVar40 * 2);
                    }
                    if ((auVar54 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar42 = 0;
                    }
                    else {
                      sVar42 = *(short *)(lVar45 + 0xe + uVar40 * 2);
                    }
                    uVar40 = uVar40 + 8;
                    sVar2 = auVar57._0_2_;
                    auVar58._0_2_ =
                         (ushort)(sVar39 < sVar2) * sVar2 | (ushort)(sVar39 >= sVar2) * sVar39;
                    sVar39 = auVar57._2_2_;
                    auVar58._2_2_ =
                         (ushort)(sVar56 < sVar39) * sVar39 | (ushort)(sVar56 >= sVar39) * sVar56;
                    sVar39 = auVar57._4_2_;
                    auVar58._4_2_ =
                         (ushort)(sVar17 < sVar39) * sVar39 | (ushort)(sVar17 >= sVar39) * sVar17;
                    sVar39 = auVar57._6_2_;
                    auVar58._6_2_ =
                         (ushort)(sVar21 < sVar39) * sVar39 | (ushort)(sVar21 >= sVar39) * sVar21;
                    sVar39 = auVar57._8_2_;
                    auVar58._8_2_ =
                         (ushort)(sVar25 < sVar39) * sVar39 | (ushort)(sVar25 >= sVar39) * sVar25;
                    sVar39 = auVar57._10_2_;
                    auVar58._10_2_ =
                         (ushort)(sVar29 < sVar39) * sVar39 | (ushort)(sVar29 >= sVar39) * sVar29;
                    sVar39 = auVar57._12_2_;
                    auVar58._12_2_ =
                         (ushort)(sVar36 < sVar39) * sVar39 | (ushort)(sVar36 >= sVar39) * sVar36;
                    sVar39 = auVar57._14_2_;
                    auVar58._14_2_ =
                         (ushort)(sVar42 < sVar39) * sVar39 | (ushort)(sVar42 >= sVar39) * sVar42;
                    auVar57 = auVar58 & auVar54 | ~auVar54 & auVar57;
                  } while (uVar40 < uVar38);
                  sVar39 = auVar57._8_2_;
                  sVar56 = auVar57._0_2_;
                  uVar47 = (ushort)(sVar56 < sVar39) * sVar39 | (ushort)(sVar56 >= sVar39) * sVar56;
                  sVar39 = auVar57._10_2_;
                  sVar56 = auVar57._2_2_;
                  uVar48 = (ushort)(sVar56 < sVar39) * sVar39 | (ushort)(sVar56 >= sVar39) * sVar56;
                  sVar39 = auVar57._12_2_;
                  sVar56 = auVar57._4_2_;
                  uVar49 = (ushort)(sVar56 < sVar39) * sVar39 | (ushort)(sVar56 >= sVar39) * sVar56;
                  sVar39 = auVar57._14_2_;
                  sVar56 = auVar57._6_2_;
                  uVar50 = (ushort)(sVar56 < sVar39) * sVar39 | (ushort)(sVar56 >= sVar39) * sVar56;
                  uVar47 = ((short)uVar47 < (short)uVar49) * uVar49 |
                           ((short)uVar47 >= (short)uVar49) * uVar47;
                  uVar48 = ((short)uVar48 < (short)uVar50) * uVar50 |
                           ((short)uVar48 >= (short)uVar50) * uVar48;
                  uVar47 = ((short)uVar47 < (short)uVar48) * uVar48 |
                           ((short)uVar47 >= (short)uVar48) * uVar47;
                }
                if (uVar38 < (ulonglong)(longlong)(int)param_6) {
                  lVar45 = lVar34 + uVar41;
                  do {
                    if ((*(char *)(uVar38 + param_7 + uVar22) != '\0') &&
                       ((short)uVar47 < *(short *)(lVar45 + uVar38 * 2))) {
                      uVar47 = *(ushort *)(lVar45 + uVar38 * 2);
                    }
                    uVar38 = uVar38 + 1;
                  } while (uVar38 < (ulonglong)(longlong)(int)param_6);
                }
              }
              uVar26 = uVar26 + 1;
              uVar22 = uVar22 + (longlong)(int)param_6;
              uVar41 = uVar41 + lVar44;
            } while (uVar26 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(ushort *)(param_3 + lVar28 + uVar16 * 2) = uVar47;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (ulonglong)(longlong)(int)param_5);
      }
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + ((longlong)param_4 >> 1) * 2;
      lVar19 = lVar19 + lVar44;
    } while (uVar30 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

