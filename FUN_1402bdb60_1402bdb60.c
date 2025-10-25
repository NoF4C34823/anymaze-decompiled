
void FUN_1402bdb60(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
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
  short sVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  short sVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  short sVar27;
  short sVar28;
  ulonglong uVar29;
  short sVar30;
  undefined2 uVar31;
  short sVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  short sVar38;
  ulonglong uVar39;
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
  
  uVar39 = (ulonglong)param_6._4_4_;
  lVar17 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar21 = (longlong)param_2 >> 1;
  uVar23 = (ulonglong)(int)param_6;
  lVar20 = (longlong)((int)param_6 + -1 >> 1);
  uVar33 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar25 = (lVar17 * lVar21 + lVar20) * -2 + param_1;
  if (param_7 == 0) {
    lVar35 = 0;
    lVar20 = uVar39 - 1;
    lVar17 = param_9;
    if (lVar20 != 0 && 0 < (longlong)uVar39) {
      do {
        FUN_1402b1140(lVar25,lVar17,(longlong)(int)param_5,uVar23,1);
        lVar35 = lVar35 + 1;
        lVar25 = lVar25 + lVar21 * 2;
        lVar17 = lVar17 + uVar33 * 2;
      } while (lVar35 < lVar20);
    }
    uVar36 = 0;
    if (0 < param_5._4_4_) {
      lVar35 = 0;
      do {
        FUN_1402b1140(lVar25,lVar17,(longlong)(int)param_5,uVar23,1);
        uVar18 = 0;
        if (0 < (int)param_5) {
          do {
            sVar32 = -0x8000;
            sVar44 = -0x8000;
            if (0 < (longlong)uVar39) {
              uVar29 = 0;
              lVar24 = 1;
              lVar26 = 0;
              sVar44 = sVar32;
              if (uVar39 >> 3 != 0) {
                do {
                  uVar29 = uVar29 + 1;
                  sVar44 = *(short *)(lVar26 + uVar33 * 4 + param_9 + uVar18 * 2);
                  sVar22 = *(short *)(lVar26 + uVar33 * 0xe + param_9 + uVar18 * 2);
                  sVar16 = *(short *)(lVar26 + uVar33 * 2 + param_9 + uVar18 * 2);
                  sVar30 = *(short *)(lVar26 + uVar33 * 6 + param_9 + uVar18 * 2);
                  sVar38 = *(short *)(lVar26 + param_9 + uVar18 * 2);
                  sVar28 = *(short *)(lVar26 + uVar33 * 8 + param_9 + uVar18 * 2);
                  if (sVar38 <= sVar32) {
                    sVar38 = sVar32;
                  }
                  sVar27 = *(short *)(lVar26 + uVar33 * 10 + param_9 + uVar18 * 2);
                  if (sVar16 <= sVar38) {
                    sVar16 = sVar38;
                  }
                  if (sVar44 <= sVar16) {
                    sVar44 = sVar16;
                  }
                  sVar32 = *(short *)(lVar26 + uVar33 * 0xc + param_9 + uVar18 * 2);
                  if (sVar30 <= sVar44) {
                    sVar30 = sVar44;
                  }
                  if (sVar28 <= sVar30) {
                    sVar28 = sVar30;
                  }
                  if (sVar27 <= sVar28) {
                    sVar27 = sVar28;
                  }
                  if (sVar32 <= sVar27) {
                    sVar32 = sVar27;
                  }
                  if (sVar32 < sVar22) {
                    sVar32 = sVar22;
                  }
                  lVar26 = lVar26 + uVar33 * 0x10;
                } while (uVar29 < uVar39 >> 3);
                lVar24 = uVar29 * 8 + 1;
                sVar44 = sVar32;
              }
              uVar29 = lVar24 - 1;
              lVar24 = uVar33 * uVar29;
              if (uVar29 < uVar39) {
                do {
                  sVar32 = *(short *)(param_9 + uVar18 * 2 + lVar24 * 2);
                  if (sVar44 < sVar32) {
                    sVar44 = sVar32;
                  }
                  uVar29 = uVar29 + 1;
                  lVar24 = lVar24 + uVar33;
                } while (uVar29 < uVar39);
              }
            }
            *(short *)(param_3 + lVar35 + uVar18 * 2) = sVar44;
            uVar18 = uVar18 + 1;
          } while (uVar18 < (ulonglong)(longlong)(int)param_5);
        }
        lVar20 = lVar20 + 1;
        uVar36 = uVar36 + 1;
        lVar17 = lVar17 + uVar33 * 2;
        if ((longlong)uVar39 <= lVar20) {
          lVar17 = param_9;
        }
        if ((longlong)uVar39 <= lVar20) {
          lVar20 = 0;
        }
        lVar25 = lVar25 + lVar21 * 2;
        lVar35 = lVar35 + ((longlong)param_4 >> 1) * 2;
      } while (uVar36 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar33 = 0;
    if (0 < param_5._4_4_) {
      lVar20 = lVar20 * -2;
      lVar17 = lVar17 * lVar21 * -2;
      param_1 = param_1 + lVar21 * -2;
      lVar35 = 0;
      lVar25 = 0;
      do {
        uVar36 = 0;
        if (0 < (int)param_5) {
          do {
            uVar18 = 0;
            uVar46 = 0xffff8000;
            uVar31 = 0x8000;
            lVar26 = 0;
            lVar24 = 0;
            if (0 < (longlong)uVar39) {
              lVar1 = param_1 + lVar21 * 2 + lVar20 + lVar17 + lVar25 + uVar36 * 2;
              do {
                if (0 < (longlong)uVar23) {
                  if ((longlong)uVar23 < 8) {
                    uVar29 = 0;
                  }
                  else {
                    uVar45 = CONCAT22((short)uVar46,(short)uVar46);
                    auVar47._0_8_ = CONCAT44(uVar45,uVar45);
                    auVar47._8_8_ = auVar47._0_8_;
                    auVar40._8_4_ = 0xffffffff;
                    auVar40._0_8_ = 0xffffffffffffffff;
                    auVar40._12_4_ = 0xffffffff;
                    uVar29 = uVar23 & 0xfffffffffffffff8;
                    uVar19 = 0;
                    lVar37 = lVar20 + lVar21 * 2 + param_1 + lVar17 + lVar25 + uVar36 * 2 + lVar24;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar26 + uVar19);
                      cVar42 = (char)(uVar2 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar2;
                      auVar4[0xe] = cVar42;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar2;
                      auVar5[0xc] = (char)(uVar2 >> 0x30);
                      auVar5._13_2_ = auVar4._13_2_;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar2;
                      auVar6._12_3_ = auVar5._12_3_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar2;
                      auVar7[10] = (char)(uVar2 >> 0x28);
                      auVar7._11_4_ = auVar6._11_4_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar2;
                      auVar8._10_5_ = auVar7._10_5_;
                      auVar9[8] = (char)(uVar2 >> 0x20);
                      auVar9._0_8_ = uVar2;
                      auVar9._9_6_ = auVar8._9_6_;
                      auVar10._7_8_ = 0;
                      auVar10._0_7_ = auVar9._8_7_;
                      Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar2 >> 0x18));
                      auVar14._9_6_ = 0;
                      auVar14._0_9_ = Var11;
                      auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                      auVar12[0] = (char)(uVar2 >> 0x10);
                      auVar15._11_4_ = 0;
                      auVar15._0_11_ = auVar12;
                      auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                      auVar13[0] = (char)(uVar2 >> 8);
                      auVar41._0_2_ = -(ushort)((char)uVar2 == '\0');
                      auVar41._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar41._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar41._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar41._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar41._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar41._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar41._14_2_ = -(ushort)(cVar42 == '\0');
                      auVar41 = auVar41 ^ auVar40;
                      if ((auVar41 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar32 = 0;
                      }
                      else {
                        sVar32 = *(short *)(lVar1 + lVar24 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar37 + 2 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar22 = 0;
                      }
                      else {
                        sVar22 = *(short *)(lVar37 + 4 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar16 = 0;
                      }
                      else {
                        sVar16 = *(short *)(lVar37 + 6 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar30 = 0;
                      }
                      else {
                        sVar30 = *(short *)(lVar37 + 8 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar37 + 10 + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar37 + 0xc + uVar19 * 2);
                      }
                      if ((auVar41 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar27 = 0;
                      }
                      else {
                        sVar27 = *(short *)(lVar37 + 0xe + uVar19 * 2);
                      }
                      uVar19 = uVar19 + 8;
                      sVar3 = auVar47._0_2_;
                      auVar51._0_2_ =
                           (ushort)(sVar32 < sVar3) * sVar3 | (ushort)(sVar32 >= sVar3) * sVar32;
                      sVar32 = auVar47._2_2_;
                      auVar51._2_2_ =
                           (ushort)(sVar44 < sVar32) * sVar32 | (ushort)(sVar44 >= sVar32) * sVar44;
                      sVar32 = auVar47._4_2_;
                      auVar51._4_2_ =
                           (ushort)(sVar22 < sVar32) * sVar32 | (ushort)(sVar22 >= sVar32) * sVar22;
                      sVar32 = auVar47._6_2_;
                      auVar51._6_2_ =
                           (ushort)(sVar16 < sVar32) * sVar32 | (ushort)(sVar16 >= sVar32) * sVar16;
                      sVar32 = auVar47._8_2_;
                      auVar51._8_2_ =
                           (ushort)(sVar30 < sVar32) * sVar32 | (ushort)(sVar30 >= sVar32) * sVar30;
                      sVar32 = auVar47._10_2_;
                      auVar51._10_2_ =
                           (ushort)(sVar38 < sVar32) * sVar32 | (ushort)(sVar38 >= sVar32) * sVar38;
                      sVar32 = auVar47._12_2_;
                      auVar51._12_2_ =
                           (ushort)(sVar28 < sVar32) * sVar32 | (ushort)(sVar28 >= sVar32) * sVar28;
                      sVar32 = auVar47._14_2_;
                      auVar51._14_2_ =
                           (ushort)(sVar27 < sVar32) * sVar32 | (ushort)(sVar27 >= sVar32) * sVar27;
                      auVar47 = auVar51 & auVar41 | ~auVar41 & auVar47;
                    } while (uVar19 < uVar29);
                    sVar32 = auVar47._8_2_;
                    sVar44 = auVar47._0_2_;
                    uVar43 = (ushort)(sVar44 < sVar32) * sVar32 |
                             (ushort)(sVar44 >= sVar32) * sVar44;
                    sVar32 = auVar47._10_2_;
                    sVar44 = auVar47._2_2_;
                    uVar48 = (ushort)(sVar44 < sVar32) * sVar32 |
                             (ushort)(sVar44 >= sVar32) * sVar44;
                    sVar32 = auVar47._12_2_;
                    sVar44 = auVar47._4_2_;
                    uVar49 = (ushort)(sVar44 < sVar32) * sVar32 |
                             (ushort)(sVar44 >= sVar32) * sVar44;
                    sVar32 = auVar47._14_2_;
                    sVar44 = auVar47._6_2_;
                    uVar50 = (ushort)(sVar44 < sVar32) * sVar32 |
                             (ushort)(sVar44 >= sVar32) * sVar44;
                    uVar43 = ((short)uVar43 < (short)uVar49) * uVar49 |
                             ((short)uVar43 >= (short)uVar49) * uVar43;
                    uVar48 = ((short)uVar48 < (short)uVar50) * uVar50 |
                             ((short)uVar48 >= (short)uVar50) * uVar48;
                    uVar46 = (uint)(ushort)(((short)uVar43 < (short)uVar48) * uVar48 |
                                           ((short)uVar43 >= (short)uVar48) * uVar43);
                  }
                  if (uVar29 < uVar23) {
                    do {
                      if (*(char *)(uVar29 + param_7 + lVar26) != '\0') {
                        sVar32 = (short)uVar46;
                        uVar34 = (uint)*(short *)(lVar1 + lVar24 + uVar29 * 2);
                        uVar46 = (int)sVar32;
                        if ((int)sVar32 < (int)uVar34) {
                          uVar46 = uVar34;
                        }
                      }
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar23);
                  }
                }
                uVar31 = (undefined2)uVar46;
                uVar18 = uVar18 + 1;
                lVar26 = lVar26 + uVar23;
                lVar24 = lVar24 + lVar21 * 2;
              } while (uVar18 < uVar39);
            }
            *(undefined2 *)(param_3 + lVar35 + uVar36 * 2) = uVar31;
            uVar36 = uVar36 + 1;
          } while (uVar36 < (ulonglong)(longlong)(int)param_5);
        }
        uVar33 = uVar33 + 1;
        lVar35 = lVar35 + ((longlong)param_4 >> 1) * 2;
        lVar25 = lVar25 + lVar21 * 2;
      } while (uVar33 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

