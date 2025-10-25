
void FUN_1403e61c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  ulonglong uVar1;
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
  ulonglong uVar17;
  short sVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  short sVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  short sVar27;
  longlong lVar28;
  short sVar29;
  longlong lVar30;
  short sVar31;
  ulonglong uVar32;
  short sVar33;
  short sVar34;
  longlong lVar35;
  longlong lVar36;
  char cVar38;
  undefined1 auVar37 [16];
  ushort uVar39;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  short sVar40;
  
  lVar30 = (longlong)param_2 >> 1;
  lVar20 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar16 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar19 = (longlong)((int)param_6 + -1 >> 1);
  lVar24 = (lVar30 * lVar20 + lVar19) * -2 + param_1;
  if (param_7 == 0) {
    lVar35 = 0;
    lVar20 = (longlong)param_6._4_4_ + -1;
    lVar19 = param_9;
    if (lVar20 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_14037f400(lVar24,lVar19,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar35 = lVar35 + 1;
        lVar24 = lVar24 + lVar30 * 2;
        lVar19 = lVar19 + uVar16 * 2;
      } while (lVar35 < lVar20);
    }
    lVar35 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14037f400(lVar24,lVar19,(longlong)(int)param_5,(longlong)(int)param_6,1);
        FUN_140388a20(param_9,uVar16,param_3,(longlong)(int)param_5,(longlong)param_6._4_4_);
        lVar20 = lVar20 + 1;
        lVar35 = lVar35 + 1;
        lVar19 = lVar19 + uVar16 * 2;
        if (param_6._4_4_ <= lVar20) {
          lVar20 = 0;
          lVar19 = param_9;
        }
        lVar24 = lVar24 + lVar30 * 2;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
      } while (lVar35 < param_5._4_4_);
    }
  }
  else {
    uVar16 = 0;
    if (0 < param_5._4_4_) {
      lVar24 = lVar30 * 2;
      lVar19 = lVar19 * -2;
      lVar20 = lVar20 * lVar30 * -2;
      param_1 = param_1 + lVar30 * -2;
      lVar30 = 0;
      lVar35 = 0;
      do {
        uVar32 = 0;
        if (0 < (int)param_5) {
          do {
            uVar25 = 0;
            uVar39 = 0x8000;
            lVar28 = 0;
            lVar26 = 0;
            if (0 < param_6._4_4_) {
              lVar21 = uVar32 * 2 + param_1 + lVar24 + lVar19 + lVar20 + lVar35;
              do {
                uVar17 = (ulonglong)(int)param_6;
                if (0 < (longlong)uVar17) {
                  if ((longlong)uVar17 < 8) {
                    uVar17 = 0;
                  }
                  else {
                    auVar41._0_8_ = CONCAT44(CONCAT22(uVar39,uVar39),CONCAT22(uVar39,uVar39));
                    auVar41._8_8_ = auVar41._0_8_;
                    uVar17 = uVar17 & 0xfffffffffffffff8;
                    uVar22 = 0;
                    lVar36 = lVar19 + lVar24 + param_1 + lVar20 + lVar35 + uVar32 * 2 + lVar26;
                    do {
                      uVar1 = *(ulonglong *)(uVar22 + param_7 + lVar28);
                      cVar38 = (char)(uVar1 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar1;
                      auVar4[0xe] = cVar38;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar1;
                      auVar5[0xc] = (char)(uVar1 >> 0x30);
                      auVar5._13_2_ = auVar4._13_2_;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar1;
                      auVar6._12_3_ = auVar5._12_3_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar1;
                      auVar7[10] = (char)(uVar1 >> 0x28);
                      auVar7._11_4_ = auVar6._11_4_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar1;
                      auVar8._10_5_ = auVar7._10_5_;
                      auVar9[8] = (char)(uVar1 >> 0x20);
                      auVar9._0_8_ = uVar1;
                      auVar9._9_6_ = auVar8._9_6_;
                      auVar10._7_8_ = 0;
                      auVar10._0_7_ = auVar9._8_7_;
                      Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar1 >> 0x18));
                      auVar14._9_6_ = 0;
                      auVar14._0_9_ = Var11;
                      auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                      auVar12[0] = (char)(uVar1 >> 0x10);
                      auVar15._11_4_ = 0;
                      auVar15._0_11_ = auVar12;
                      auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                      auVar13[0] = (char)(uVar1 >> 8);
                      auVar37._0_2_ = -(ushort)((char)uVar1 == '\0');
                      auVar37._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar37._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar37._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar37._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar37._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar37._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar37._14_2_ = -(ushort)(cVar38 == '\0');
                      auVar3._8_4_ = 0xffffffff;
                      auVar3._0_8_ = 0xffffffffffffffff;
                      auVar3._12_4_ = 0xffffffff;
                      auVar37 = auVar37 ^ auVar3;
                      if ((auVar37 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar33 = 0;
                      }
                      else {
                        sVar33 = *(short *)(lVar21 + lVar26 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar36 + 2 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar18 = 0;
                      }
                      else {
                        sVar18 = *(short *)(lVar36 + 4 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar23 = 0;
                      }
                      else {
                        sVar23 = *(short *)(lVar36 + 6 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar27 = 0;
                      }
                      else {
                        sVar27 = *(short *)(lVar36 + 8 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar36 + 10 + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar36 + 0xc + uVar22 * 2);
                      }
                      if ((auVar37 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar36 + 0xe + uVar22 * 2);
                      }
                      uVar22 = uVar22 + 8;
                      sVar2 = auVar41._0_2_;
                      auVar45._0_2_ =
                           (ushort)(sVar33 < sVar2) * sVar2 | (ushort)(sVar33 >= sVar2) * sVar33;
                      sVar33 = auVar41._2_2_;
                      auVar45._2_2_ =
                           (ushort)(sVar40 < sVar33) * sVar33 | (ushort)(sVar40 >= sVar33) * sVar40;
                      sVar33 = auVar41._4_2_;
                      auVar45._4_2_ =
                           (ushort)(sVar18 < sVar33) * sVar33 | (ushort)(sVar18 >= sVar33) * sVar18;
                      sVar33 = auVar41._6_2_;
                      auVar45._6_2_ =
                           (ushort)(sVar23 < sVar33) * sVar33 | (ushort)(sVar23 >= sVar33) * sVar23;
                      sVar33 = auVar41._8_2_;
                      auVar45._8_2_ =
                           (ushort)(sVar27 < sVar33) * sVar33 | (ushort)(sVar27 >= sVar33) * sVar27;
                      sVar33 = auVar41._10_2_;
                      auVar45._10_2_ =
                           (ushort)(sVar29 < sVar33) * sVar33 | (ushort)(sVar29 >= sVar33) * sVar29;
                      sVar33 = auVar41._12_2_;
                      auVar45._12_2_ =
                           (ushort)(sVar31 < sVar33) * sVar33 | (ushort)(sVar31 >= sVar33) * sVar31;
                      sVar33 = auVar41._14_2_;
                      auVar45._14_2_ =
                           (ushort)(sVar34 < sVar33) * sVar33 | (ushort)(sVar34 >= sVar33) * sVar34;
                      auVar41 = auVar45 & auVar37 | ~auVar37 & auVar41;
                    } while (uVar22 < uVar17);
                    sVar33 = auVar41._8_2_;
                    sVar40 = auVar41._0_2_;
                    uVar39 = (ushort)(sVar40 < sVar33) * sVar33 |
                             (ushort)(sVar40 >= sVar33) * sVar40;
                    sVar33 = auVar41._10_2_;
                    sVar40 = auVar41._2_2_;
                    uVar42 = (ushort)(sVar40 < sVar33) * sVar33 |
                             (ushort)(sVar40 >= sVar33) * sVar40;
                    sVar33 = auVar41._12_2_;
                    sVar40 = auVar41._4_2_;
                    uVar43 = (ushort)(sVar40 < sVar33) * sVar33 |
                             (ushort)(sVar40 >= sVar33) * sVar40;
                    sVar33 = auVar41._14_2_;
                    sVar40 = auVar41._6_2_;
                    uVar44 = (ushort)(sVar40 < sVar33) * sVar33 |
                             (ushort)(sVar40 >= sVar33) * sVar40;
                    uVar39 = ((short)uVar39 < (short)uVar43) * uVar43 |
                             ((short)uVar39 >= (short)uVar43) * uVar39;
                    uVar42 = ((short)uVar42 < (short)uVar44) * uVar44 |
                             ((short)uVar42 >= (short)uVar44) * uVar42;
                    uVar39 = ((short)uVar39 < (short)uVar42) * uVar42 |
                             ((short)uVar39 >= (short)uVar42) * uVar39;
                  }
                  if (uVar17 < (ulonglong)(longlong)(int)param_6) {
                    lVar36 = lVar21 + lVar26;
                    do {
                      if ((*(char *)(uVar17 + param_7 + lVar28) != '\0') &&
                         ((short)uVar39 < *(short *)(lVar36 + uVar17 * 2))) {
                        uVar39 = *(ushort *)(lVar36 + uVar17 * 2);
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < (ulonglong)(longlong)(int)param_6);
                  }
                }
                uVar25 = uVar25 + 1;
                lVar28 = lVar28 + (int)param_6;
                lVar26 = lVar26 + lVar24;
              } while (uVar25 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(ushort *)(param_3 + lVar30 + uVar32 * 2) = uVar39;
            uVar32 = uVar32 + 1;
          } while (uVar32 < (ulonglong)(longlong)(int)param_5);
        }
        uVar16 = uVar16 + 1;
        lVar30 = lVar30 + ((longlong)param_4 >> 1) * 2;
        lVar35 = lVar35 + lVar24;
      } while (uVar16 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

