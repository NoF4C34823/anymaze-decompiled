
void FUN_140349720(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
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
  short sVar17;
  short sVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  short sVar35;
  undefined2 uVar36;
  short sVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  char cVar42;
  undefined1 auVar41 [16];
  ushort uVar43;
  undefined4 uVar45;
  ushort uVar48;
  uint uVar46;
  ushort uVar49;
  ushort uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  short sVar44;
  
  param_2 = param_2 >> 1;
  uVar19 = param_6[1];
  uVar29 = *param_6;
  uVar3 = *param_5;
  param_4 = param_4 >> 1;
  uVar32 = uVar3 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar29 - 1 >> 1) + (int)(uVar19 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar38 = 0;
    lVar21 = param_9;
    if (0 < (longlong)(uVar19 - 1)) {
      while( true ) {
        FUN_140334640(param_1,lVar21,uVar3,uVar29,1);
        uVar19 = param_6[1];
        lVar38 = lVar38 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar21 = lVar21 + uVar32 * 2;
        if ((longlong)(uVar19 - 1) <= lVar38) break;
        uVar29 = *param_6;
      }
    }
    lVar38 = uVar19 - 1;
    if (0 < (longlong)param_5[1]) {
      param_1 = param_1 + param_2 * -2;
      lVar31 = 0;
      lVar39 = lVar31;
      do {
        lVar39 = lVar39 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar31 = lVar31 + param_4 * 2;
        FUN_140334640(param_1,lVar21,uVar3,*param_6,1);
        uVar19 = param_6[1];
        if (0 < (longlong)uVar3) {
          uVar29 = 0;
          do {
            sVar37 = 0x7fff;
            sVar44 = 0x7fff;
            if (0 < (longlong)uVar19) {
              uVar34 = 0;
              lVar20 = 1;
              lVar22 = 0;
              sVar44 = sVar37;
              if (uVar19 >> 3 != 0) {
                do {
                  uVar34 = uVar34 + 1;
                  sVar44 = *(short *)(lVar22 + uVar32 * 4 + param_9 + uVar29 * 2);
                  sVar18 = *(short *)(lVar22 + uVar32 * 0xe + param_9 + uVar29 * 2);
                  sVar17 = *(short *)(lVar22 + uVar32 * 2 + param_9 + uVar29 * 2);
                  sVar26 = *(short *)(lVar22 + uVar32 * 6 + param_9 + uVar29 * 2);
                  sVar35 = *(short *)(lVar22 + param_9 + uVar29 * 2);
                  sVar25 = *(short *)(lVar22 + uVar32 * 8 + param_9 + uVar29 * 2);
                  if (sVar37 <= sVar35) {
                    sVar35 = sVar37;
                  }
                  sVar24 = *(short *)(lVar22 + uVar32 * 10 + param_9 + uVar29 * 2);
                  if (sVar35 <= sVar17) {
                    sVar17 = sVar35;
                  }
                  if (sVar17 <= sVar44) {
                    sVar44 = sVar17;
                  }
                  sVar37 = *(short *)(lVar22 + uVar32 * 0xc + param_9 + uVar29 * 2);
                  if (sVar44 <= sVar26) {
                    sVar26 = sVar44;
                  }
                  if (sVar26 <= sVar25) {
                    sVar25 = sVar26;
                  }
                  if (sVar25 <= sVar24) {
                    sVar24 = sVar25;
                  }
                  if (sVar24 <= sVar37) {
                    sVar37 = sVar24;
                  }
                  if (sVar18 < sVar37) {
                    sVar37 = sVar18;
                  }
                  lVar22 = lVar22 + uVar32 * 0x10;
                } while (uVar34 < uVar19 >> 3);
                lVar20 = uVar34 * 8 + 1;
                sVar44 = sVar37;
              }
              uVar34 = lVar20 - 1;
              lVar20 = uVar32 * uVar34;
              if (uVar34 < uVar19) {
                do {
                  sVar37 = *(short *)(param_9 + uVar29 * 2 + lVar20 * 2);
                  if (sVar37 < sVar44) {
                    sVar44 = sVar37;
                  }
                  uVar34 = uVar34 + 1;
                  lVar20 = lVar20 + uVar32;
                } while (uVar34 < uVar19);
              }
            }
            *(short *)(param_3 + param_4 * -2 + lVar31 + uVar29 * 2) = sVar44;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar3);
        }
        lVar38 = lVar38 + 1;
        lVar21 = lVar21 + uVar32 * 2;
        if ((longlong)uVar19 <= lVar38) {
          lVar38 = 0;
          lVar21 = param_9;
        }
      } while (lVar39 < (longlong)param_5[1]);
    }
  }
  else {
    uVar32 = param_5[1];
    uVar34 = 0;
    if (0 < (longlong)uVar32) {
      lVar21 = 0;
      lVar38 = 0;
      do {
        uVar33 = 0;
        lVar31 = 0;
        if (0 < (longlong)uVar3) {
          do {
            uVar23 = 0;
            uVar46 = 0x7fff;
            uVar36 = 0x7fff;
            lVar20 = 0;
            lVar39 = 0;
            if (0 < (longlong)uVar19) {
              lVar22 = param_1 + lVar38 + lVar31;
              do {
                if (0 < (longlong)uVar29) {
                  if ((longlong)uVar29 < 8) {
                    uVar30 = 0;
                  }
                  else {
                    uVar45 = CONCAT22((short)uVar46,(short)uVar46);
                    auVar47._0_8_ = CONCAT44(uVar45,uVar45);
                    auVar40._8_4_ = 0xffffffff;
                    auVar40._0_8_ = 0xffffffffffffffff;
                    auVar40._12_4_ = 0xffffffff;
                    auVar47._8_8_ = auVar47._0_8_;
                    lVar1 = lVar22 + lVar39;
                    uVar30 = uVar29 & 0xfffffffffffffff8;
                    uVar28 = 0;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar20 + uVar28);
                      cVar42 = (char)(uVar2 >> 0x38);
                      auVar5._8_6_ = 0;
                      auVar5._0_8_ = uVar2;
                      auVar5[0xe] = cVar42;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar2;
                      auVar6[0xc] = (char)(uVar2 >> 0x30);
                      auVar6._13_2_ = auVar5._13_2_;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar2;
                      auVar7._12_3_ = auVar6._12_3_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar2;
                      auVar8[10] = (char)(uVar2 >> 0x28);
                      auVar8._11_4_ = auVar7._11_4_;
                      auVar9._8_2_ = 0;
                      auVar9._0_8_ = uVar2;
                      auVar9._10_5_ = auVar8._10_5_;
                      auVar10[8] = (char)(uVar2 >> 0x20);
                      auVar10._0_8_ = uVar2;
                      auVar10._9_6_ = auVar9._9_6_;
                      auVar11._7_8_ = 0;
                      auVar11._0_7_ = auVar10._8_7_;
                      Var12 = CONCAT81(SUB158(auVar11 << 0x40,7),(char)(uVar2 >> 0x18));
                      auVar15._9_6_ = 0;
                      auVar15._0_9_ = Var12;
                      auVar13._1_10_ = SUB1510(auVar15 << 0x30,5);
                      auVar13[0] = (char)(uVar2 >> 0x10);
                      auVar16._11_4_ = 0;
                      auVar16._0_11_ = auVar13;
                      auVar14._1_12_ = SUB1512(auVar16 << 0x20,3);
                      auVar14[0] = (char)(uVar2 >> 8);
                      auVar41._0_2_ = -(ushort)((char)uVar2 == '\0');
                      auVar41._2_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar41._4_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar41._6_2_ = -(ushort)((short)Var12 == 0);
                      auVar41._8_2_ = -(ushort)(auVar10._8_2_ == 0);
                      auVar41._10_2_ = -(ushort)(auVar8._10_2_ == 0);
                      auVar41._12_2_ = -(ushort)(auVar6._12_2_ == 0);
                      auVar41._14_2_ = -(ushort)(cVar42 == '\0');
                      auVar41 = auVar41 ^ auVar40;
                      if ((auVar41 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar1 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar1 + 2 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar18 = 0;
                      }
                      else {
                        sVar18 = *(short *)(lVar1 + 4 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar17 = 0;
                      }
                      else {
                        sVar17 = *(short *)(lVar1 + 6 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar1 + 8 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar1 + 10 + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar25 = 0;
                      }
                      else {
                        sVar25 = *(short *)(lVar1 + 0xc + uVar28 * 2);
                      }
                      if ((auVar41 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar24 = 0;
                      }
                      else {
                        sVar24 = *(short *)(lVar1 + 0xe + uVar28 * 2);
                      }
                      uVar28 = uVar28 + 8;
                      sVar4 = auVar47._0_2_;
                      auVar51._0_2_ =
                           (ushort)(sVar4 < sVar37) * sVar4 | (ushort)(sVar4 >= sVar37) * sVar37;
                      sVar37 = auVar47._2_2_;
                      auVar51._2_2_ =
                           (ushort)(sVar37 < sVar44) * sVar37 | (ushort)(sVar37 >= sVar44) * sVar44;
                      sVar37 = auVar47._4_2_;
                      auVar51._4_2_ =
                           (ushort)(sVar37 < sVar18) * sVar37 | (ushort)(sVar37 >= sVar18) * sVar18;
                      sVar37 = auVar47._6_2_;
                      auVar51._6_2_ =
                           (ushort)(sVar37 < sVar17) * sVar37 | (ushort)(sVar37 >= sVar17) * sVar17;
                      sVar37 = auVar47._8_2_;
                      auVar51._8_2_ =
                           (ushort)(sVar37 < sVar26) * sVar37 | (ushort)(sVar37 >= sVar26) * sVar26;
                      sVar37 = auVar47._10_2_;
                      auVar51._10_2_ =
                           (ushort)(sVar37 < sVar35) * sVar37 | (ushort)(sVar37 >= sVar35) * sVar35;
                      sVar37 = auVar47._12_2_;
                      auVar51._12_2_ =
                           (ushort)(sVar37 < sVar25) * sVar37 | (ushort)(sVar37 >= sVar25) * sVar25;
                      sVar37 = auVar47._14_2_;
                      auVar51._14_2_ =
                           (ushort)(sVar37 < sVar24) * sVar37 | (ushort)(sVar37 >= sVar24) * sVar24;
                      auVar47 = auVar51 & auVar41 | ~auVar41 & auVar47;
                    } while (uVar28 < uVar30);
                    sVar37 = auVar47._8_2_;
                    sVar44 = auVar47._0_2_;
                    uVar43 = (ushort)(sVar37 < sVar44) * sVar37 |
                             (ushort)(sVar37 >= sVar44) * sVar44;
                    sVar37 = auVar47._10_2_;
                    sVar44 = auVar47._2_2_;
                    uVar48 = (ushort)(sVar37 < sVar44) * sVar37 |
                             (ushort)(sVar37 >= sVar44) * sVar44;
                    sVar37 = auVar47._12_2_;
                    sVar44 = auVar47._4_2_;
                    uVar49 = (ushort)(sVar37 < sVar44) * sVar37 |
                             (ushort)(sVar37 >= sVar44) * sVar44;
                    sVar37 = auVar47._14_2_;
                    sVar44 = auVar47._6_2_;
                    uVar50 = (ushort)(sVar37 < sVar44) * sVar37 |
                             (ushort)(sVar37 >= sVar44) * sVar44;
                    uVar43 = ((short)uVar49 < (short)uVar43) * uVar49 |
                             ((short)uVar49 >= (short)uVar43) * uVar43;
                    uVar48 = ((short)uVar50 < (short)uVar48) * uVar50 |
                             ((short)uVar50 >= (short)uVar48) * uVar48;
                    uVar46 = (uint)(ushort)(((short)uVar48 < (short)uVar43) * uVar48 |
                                           ((short)uVar48 >= (short)uVar43) * uVar43);
                  }
                  if (uVar30 < uVar29) {
                    do {
                      if (*(char *)(uVar30 + param_7 + lVar20) != '\0') {
                        sVar37 = (short)uVar46;
                        uVar27 = (uint)*(short *)(lVar22 + lVar39 + uVar30 * 2);
                        uVar46 = (int)sVar37;
                        if ((int)uVar27 < (int)sVar37) {
                          uVar46 = uVar27;
                        }
                      }
                      uVar30 = uVar30 + 1;
                    } while (uVar30 < uVar29);
                  }
                }
                uVar36 = (undefined2)uVar46;
                uVar23 = uVar23 + 1;
                lVar20 = lVar20 + uVar29;
                lVar39 = lVar39 + param_2 * 2;
              } while (uVar23 < uVar19);
            }
            uVar33 = uVar33 + 1;
            *(undefined2 *)(lVar31 + param_3 + lVar21) = uVar36;
            lVar31 = lVar31 + 2;
          } while (uVar33 < uVar3);
        }
        uVar34 = uVar34 + 1;
        lVar21 = lVar21 + param_4 * 2;
        lVar38 = lVar38 + param_2 * 2;
      } while (uVar34 < uVar32);
    }
  }
  return;
}

