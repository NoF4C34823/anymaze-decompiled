
void FUN_14025cd40(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
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
  ulonglong uVar16;
  short sVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  short sVar21;
  ulonglong uVar22;
  uint uVar23;
  short sVar24;
  ulonglong uVar25;
  short sVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  short sVar29;
  longlong lVar30;
  longlong lVar31;
  short sVar32;
  longlong lVar33;
  longlong lVar34;
  undefined2 uVar35;
  short sVar36;
  longlong lVar37;
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
  
  uVar16 = (ulonglong)param_6._4_4_;
  lVar33 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar30 = (longlong)param_2 >> 1;
  uVar19 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  uVar27 = (ulonglong)(int)param_6;
  lVar37 = (longlong)((int)param_6 + -1 >> 1);
  lVar18 = (lVar33 * lVar30 + lVar37) * -2 + param_1;
  if (param_7 == 0) {
    lVar38 = 0;
    lVar37 = uVar16 - 1;
    lVar33 = param_9;
    if (lVar37 != 0 && 0 < (longlong)uVar16) {
      do {
        FUN_1402b1140(lVar18,lVar33,(longlong)(int)param_5,uVar27,1);
        lVar38 = lVar38 + 1;
        lVar18 = lVar18 + lVar30 * 2;
        lVar33 = lVar33 + uVar19 * 2;
      } while (lVar38 < lVar37);
    }
    lVar38 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_1402b1140(lVar18,lVar33,(longlong)(int)param_5,uVar27,1);
        FUN_1402bc1c0(param_9,uVar19,param_3,(longlong)(int)param_5,uVar16);
        lVar37 = lVar37 + 1;
        lVar33 = lVar33 + uVar19 * 2;
        if ((longlong)uVar16 <= lVar37) {
          lVar33 = param_9;
        }
        lVar18 = lVar18 + lVar30 * 2;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        if ((longlong)uVar16 <= lVar37) {
          lVar37 = 0;
        }
        lVar38 = lVar38 + 1;
      } while (lVar38 < param_5._4_4_);
    }
  }
  else {
    uVar19 = 0;
    if (0 < param_5._4_4_) {
      lVar37 = lVar37 * -2;
      lVar33 = lVar33 * lVar30 * -2;
      param_1 = param_1 + lVar30 * -2;
      lVar18 = 0;
      lVar38 = 0;
      do {
        uVar28 = 0;
        if (0 < (int)param_5) {
          do {
            uVar25 = 0;
            uVar46 = 0xffff8000;
            uVar35 = 0x8000;
            lVar34 = 0;
            lVar31 = 0;
            if (0 < (longlong)uVar16) {
              lVar1 = param_1 + lVar30 * 2 + lVar37 + lVar33 + lVar38 + uVar28 * 2;
              do {
                if (0 < (longlong)uVar27) {
                  if ((longlong)uVar27 < 8) {
                    uVar20 = 0;
                  }
                  else {
                    uVar45 = CONCAT22((short)uVar46,(short)uVar46);
                    auVar47._0_8_ = CONCAT44(uVar45,uVar45);
                    auVar47._8_8_ = auVar47._0_8_;
                    auVar40._8_4_ = 0xffffffff;
                    auVar40._0_8_ = 0xffffffffffffffff;
                    auVar40._12_4_ = 0xffffffff;
                    uVar20 = uVar27 & 0xfffffffffffffff8;
                    uVar22 = 0;
                    lVar39 = lVar37 + lVar30 * 2 + param_1 + lVar33 + lVar38 + uVar28 * 2 + lVar31;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar34 + uVar22);
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
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar1 + lVar31 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar39 + 2 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar17 = 0;
                      }
                      else {
                        sVar17 = *(short *)(lVar39 + 4 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar21 = 0;
                      }
                      else {
                        sVar21 = *(short *)(lVar39 + 6 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar24 = 0;
                      }
                      else {
                        sVar24 = *(short *)(lVar39 + 8 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar39 + 10 + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar39 + 0xc + uVar22 * 2);
                      }
                      if ((auVar41 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar32 = 0;
                      }
                      else {
                        sVar32 = *(short *)(lVar39 + 0xe + uVar22 * 2);
                      }
                      uVar22 = uVar22 + 8;
                      sVar3 = auVar47._0_2_;
                      auVar51._0_2_ =
                           (ushort)(sVar36 < sVar3) * sVar3 | (ushort)(sVar36 >= sVar3) * sVar36;
                      sVar36 = auVar47._2_2_;
                      auVar51._2_2_ =
                           (ushort)(sVar44 < sVar36) * sVar36 | (ushort)(sVar44 >= sVar36) * sVar44;
                      sVar36 = auVar47._4_2_;
                      auVar51._4_2_ =
                           (ushort)(sVar17 < sVar36) * sVar36 | (ushort)(sVar17 >= sVar36) * sVar17;
                      sVar36 = auVar47._6_2_;
                      auVar51._6_2_ =
                           (ushort)(sVar21 < sVar36) * sVar36 | (ushort)(sVar21 >= sVar36) * sVar21;
                      sVar36 = auVar47._8_2_;
                      auVar51._8_2_ =
                           (ushort)(sVar24 < sVar36) * sVar36 | (ushort)(sVar24 >= sVar36) * sVar24;
                      sVar36 = auVar47._10_2_;
                      auVar51._10_2_ =
                           (ushort)(sVar26 < sVar36) * sVar36 | (ushort)(sVar26 >= sVar36) * sVar26;
                      sVar36 = auVar47._12_2_;
                      auVar51._12_2_ =
                           (ushort)(sVar29 < sVar36) * sVar36 | (ushort)(sVar29 >= sVar36) * sVar29;
                      sVar36 = auVar47._14_2_;
                      auVar51._14_2_ =
                           (ushort)(sVar32 < sVar36) * sVar36 | (ushort)(sVar32 >= sVar36) * sVar32;
                      auVar47 = auVar51 & auVar41 | ~auVar41 & auVar47;
                    } while (uVar22 < uVar20);
                    sVar36 = auVar47._8_2_;
                    sVar44 = auVar47._0_2_;
                    uVar43 = (ushort)(sVar44 < sVar36) * sVar36 |
                             (ushort)(sVar44 >= sVar36) * sVar44;
                    sVar36 = auVar47._10_2_;
                    sVar44 = auVar47._2_2_;
                    uVar48 = (ushort)(sVar44 < sVar36) * sVar36 |
                             (ushort)(sVar44 >= sVar36) * sVar44;
                    sVar36 = auVar47._12_2_;
                    sVar44 = auVar47._4_2_;
                    uVar49 = (ushort)(sVar44 < sVar36) * sVar36 |
                             (ushort)(sVar44 >= sVar36) * sVar44;
                    sVar36 = auVar47._14_2_;
                    sVar44 = auVar47._6_2_;
                    uVar50 = (ushort)(sVar44 < sVar36) * sVar36 |
                             (ushort)(sVar44 >= sVar36) * sVar44;
                    uVar43 = ((short)uVar43 < (short)uVar49) * uVar49 |
                             ((short)uVar43 >= (short)uVar49) * uVar43;
                    uVar48 = ((short)uVar48 < (short)uVar50) * uVar50 |
                             ((short)uVar48 >= (short)uVar50) * uVar48;
                    uVar46 = (uint)(ushort)(((short)uVar43 < (short)uVar48) * uVar48 |
                                           ((short)uVar43 >= (short)uVar48) * uVar43);
                  }
                  if (uVar20 < uVar27) {
                    do {
                      if (*(char *)(uVar20 + param_7 + lVar34) != '\0') {
                        sVar36 = (short)uVar46;
                        uVar23 = (uint)*(short *)(lVar1 + lVar31 + uVar20 * 2);
                        uVar46 = (int)sVar36;
                        if ((int)sVar36 < (int)uVar23) {
                          uVar46 = uVar23;
                        }
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 < uVar27);
                  }
                }
                uVar35 = (undefined2)uVar46;
                uVar25 = uVar25 + 1;
                lVar34 = lVar34 + uVar27;
                lVar31 = lVar31 + lVar30 * 2;
              } while (uVar25 < uVar16);
            }
            *(undefined2 *)(param_3 + lVar18 + uVar28 * 2) = uVar35;
            uVar28 = uVar28 + 1;
          } while (uVar28 < (ulonglong)(longlong)(int)param_5);
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + ((longlong)param_4 >> 1) * 2;
        lVar38 = lVar38 + lVar30 * 2;
      } while (uVar19 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

