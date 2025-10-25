
void FUN_140389ca0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  short sVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  unkuint9 Var16;
  undefined1 auVar17 [11];
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  ulonglong uVar21;
  short sVar22;
  short sVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  short sVar30;
  longlong lVar31;
  short sVar32;
  longlong lVar33;
  short sVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  short sVar38;
  short sVar39;
  longlong lVar40;
  longlong lVar41;
  char cVar43;
  undefined1 auVar42 [16];
  ushort uVar44;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  short sVar45;
  
  lVar33 = (longlong)param_2 >> 1;
  lVar27 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar21 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar24 = (longlong)((int)param_6 + -1 >> 1);
  lVar31 = (lVar33 * lVar27 + lVar24) * -2 + param_1;
  if (param_7 == 0) {
    lVar28 = 0;
    lVar27 = (longlong)param_6._4_4_ + -1;
    lVar24 = param_9;
    if (lVar27 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_14037f400(lVar31,lVar24,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar28 = lVar28 + 1;
        lVar31 = lVar31 + lVar33 * 2;
        lVar24 = lVar24 + uVar21 * 2;
      } while (lVar28 < lVar27);
    }
    uVar26 = 0;
    if (0 < param_5._4_4_) {
      lVar28 = 0;
      do {
        FUN_14037f400(lVar31,lVar24,(longlong)(int)param_5,(longlong)(int)param_6,1);
        uVar35 = 0;
        if (0 < (longlong)(int)param_5) {
          do {
            sVar38 = -0x8000;
            if (0 < param_6._4_4_) {
              uVar36 = 0;
              lVar25 = 1;
              lVar40 = 0;
              if ((ulonglong)(longlong)param_6._4_4_ >> 3 != 0) {
                lVar8 = uVar35 * 2;
                lVar25 = lVar8 + uVar21 * 8 + param_9;
                lVar37 = lVar8 + param_9 + uVar21 * 0xe;
                lVar41 = lVar8 + uVar21 * 0xc + param_9;
                lVar1 = lVar8 + uVar21 * 10 + param_9;
                lVar2 = lVar8 + uVar21 * 6 + param_9;
                lVar3 = lVar8 + uVar21 * 4 + param_9;
                lVar4 = lVar8 + uVar21 * 2 + param_9;
                do {
                  if (sVar38 < *(short *)(lVar40 + lVar8 + param_9)) {
                    sVar38 = *(short *)(lVar40 + lVar8 + param_9);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar4)) {
                    sVar38 = *(short *)(lVar40 + lVar4);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar3)) {
                    sVar38 = *(short *)(lVar40 + lVar3);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar2)) {
                    sVar38 = *(short *)(lVar40 + lVar2);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar25)) {
                    sVar38 = *(short *)(lVar40 + lVar25);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar1)) {
                    sVar38 = *(short *)(lVar40 + lVar1);
                  }
                  if (sVar38 < *(short *)(lVar40 + lVar41)) {
                    sVar38 = *(short *)(lVar40 + lVar41);
                  }
                  uVar36 = uVar36 + 1;
                  if (sVar38 < *(short *)(lVar40 + lVar37)) {
                    sVar38 = *(short *)(lVar40 + lVar37);
                  }
                  lVar40 = lVar40 + uVar21 * 0x10;
                } while (uVar36 < (ulonglong)(longlong)param_6._4_4_ >> 3);
                lVar25 = uVar36 * 8 + 1;
              }
              uVar36 = lVar25 - 1;
              lVar25 = uVar21 * uVar36;
              if (uVar36 < (ulonglong)(longlong)param_6._4_4_) {
                do {
                  sVar45 = *(short *)(uVar35 * 2 + param_9 + lVar25 * 2);
                  if (sVar38 < sVar45) {
                    sVar38 = sVar45;
                  }
                  uVar36 = uVar36 + 1;
                  lVar25 = lVar25 + uVar21;
                } while (uVar36 < (ulonglong)(longlong)param_6._4_4_);
              }
            }
            *(short *)(param_3 + lVar28 + uVar35 * 2) = sVar38;
            uVar35 = uVar35 + 1;
          } while (uVar35 < (ulonglong)(longlong)(int)param_5);
        }
        lVar27 = lVar27 + 1;
        uVar26 = uVar26 + 1;
        lVar24 = lVar24 + uVar21 * 2;
        if (param_6._4_4_ <= lVar27) {
          lVar27 = 0;
          lVar24 = param_9;
        }
        lVar31 = lVar31 + lVar33 * 2;
        lVar28 = lVar28 + ((longlong)param_4 >> 1) * 2;
      } while (uVar26 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar21 = 0;
    if (0 < param_5._4_4_) {
      lVar31 = lVar33 * 2;
      lVar24 = lVar24 * -2;
      lVar27 = lVar27 * lVar33 * -2;
      param_1 = param_1 + lVar33 * -2;
      lVar28 = 0;
      lVar33 = 0;
      do {
        uVar26 = 0;
        if (0 < (int)param_5) {
          do {
            uVar35 = 0;
            uVar44 = 0x8000;
            lVar40 = 0;
            lVar25 = 0;
            if (0 < param_6._4_4_) {
              lVar37 = uVar26 * 2 + param_1 + lVar31 + lVar24 + lVar27 + lVar33;
              do {
                uVar36 = (ulonglong)(int)param_6;
                if (0 < (longlong)uVar36) {
                  if ((longlong)uVar36 < 8) {
                    uVar36 = 0;
                  }
                  else {
                    auVar46._0_8_ = CONCAT44(CONCAT22(uVar44,uVar44),CONCAT22(uVar44,uVar44));
                    auVar46._8_8_ = auVar46._0_8_;
                    uVar36 = uVar36 & 0xfffffffffffffff8;
                    uVar29 = 0;
                    lVar41 = lVar24 + lVar31 + param_1 + lVar27 + lVar33 + uVar26 * 2 + lVar25;
                    do {
                      uVar5 = *(ulonglong *)(uVar29 + param_7 + lVar40);
                      cVar43 = (char)(uVar5 >> 0x38);
                      auVar9._8_6_ = 0;
                      auVar9._0_8_ = uVar5;
                      auVar9[0xe] = cVar43;
                      auVar10._8_4_ = 0;
                      auVar10._0_8_ = uVar5;
                      auVar10[0xc] = (char)(uVar5 >> 0x30);
                      auVar10._13_2_ = auVar9._13_2_;
                      auVar11._8_4_ = 0;
                      auVar11._0_8_ = uVar5;
                      auVar11._12_3_ = auVar10._12_3_;
                      auVar12._8_2_ = 0;
                      auVar12._0_8_ = uVar5;
                      auVar12[10] = (char)(uVar5 >> 0x28);
                      auVar12._11_4_ = auVar11._11_4_;
                      auVar13._8_2_ = 0;
                      auVar13._0_8_ = uVar5;
                      auVar13._10_5_ = auVar12._10_5_;
                      auVar14[8] = (char)(uVar5 >> 0x20);
                      auVar14._0_8_ = uVar5;
                      auVar14._9_6_ = auVar13._9_6_;
                      auVar15._7_8_ = 0;
                      auVar15._0_7_ = auVar14._8_7_;
                      Var16 = CONCAT81(SUB158(auVar15 << 0x40,7),(char)(uVar5 >> 0x18));
                      auVar19._9_6_ = 0;
                      auVar19._0_9_ = Var16;
                      auVar17._1_10_ = SUB1510(auVar19 << 0x30,5);
                      auVar17[0] = (char)(uVar5 >> 0x10);
                      auVar20._11_4_ = 0;
                      auVar20._0_11_ = auVar17;
                      auVar18._1_12_ = SUB1512(auVar20 << 0x20,3);
                      auVar18[0] = (char)(uVar5 >> 8);
                      auVar42._0_2_ = -(ushort)((char)uVar5 == '\0');
                      auVar42._2_2_ = -(ushort)(auVar18._0_2_ == 0);
                      auVar42._4_2_ = -(ushort)(auVar17._0_2_ == 0);
                      auVar42._6_2_ = -(ushort)((short)Var16 == 0);
                      auVar42._8_2_ = -(ushort)(auVar14._8_2_ == 0);
                      auVar42._10_2_ = -(ushort)(auVar12._10_2_ == 0);
                      auVar42._12_2_ = -(ushort)(auVar10._12_2_ == 0);
                      auVar42._14_2_ = -(ushort)(cVar43 == '\0');
                      auVar7._8_4_ = 0xffffffff;
                      auVar7._0_8_ = 0xffffffffffffffff;
                      auVar7._12_4_ = 0xffffffff;
                      auVar42 = auVar42 ^ auVar7;
                      if ((auVar42 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar37 + lVar25 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar45 = 0;
                      }
                      else {
                        sVar45 = *(short *)(lVar41 + 2 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar23 = 0;
                      }
                      else {
                        sVar23 = *(short *)(lVar41 + 4 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar22 = 0;
                      }
                      else {
                        sVar22 = *(short *)(lVar41 + 6 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar30 = 0;
                      }
                      else {
                        sVar30 = *(short *)(lVar41 + 8 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar32 = 0;
                      }
                      else {
                        sVar32 = *(short *)(lVar41 + 10 + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar41 + 0xc + uVar29 * 2);
                      }
                      if ((auVar42 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar41 + 0xe + uVar29 * 2);
                      }
                      uVar29 = uVar29 + 8;
                      sVar6 = auVar46._0_2_;
                      auVar50._0_2_ =
                           (ushort)(sVar38 < sVar6) * sVar6 | (ushort)(sVar38 >= sVar6) * sVar38;
                      sVar38 = auVar46._2_2_;
                      auVar50._2_2_ =
                           (ushort)(sVar45 < sVar38) * sVar38 | (ushort)(sVar45 >= sVar38) * sVar45;
                      sVar38 = auVar46._4_2_;
                      auVar50._4_2_ =
                           (ushort)(sVar23 < sVar38) * sVar38 | (ushort)(sVar23 >= sVar38) * sVar23;
                      sVar38 = auVar46._6_2_;
                      auVar50._6_2_ =
                           (ushort)(sVar22 < sVar38) * sVar38 | (ushort)(sVar22 >= sVar38) * sVar22;
                      sVar38 = auVar46._8_2_;
                      auVar50._8_2_ =
                           (ushort)(sVar30 < sVar38) * sVar38 | (ushort)(sVar30 >= sVar38) * sVar30;
                      sVar38 = auVar46._10_2_;
                      auVar50._10_2_ =
                           (ushort)(sVar32 < sVar38) * sVar38 | (ushort)(sVar32 >= sVar38) * sVar32;
                      sVar38 = auVar46._12_2_;
                      auVar50._12_2_ =
                           (ushort)(sVar34 < sVar38) * sVar38 | (ushort)(sVar34 >= sVar38) * sVar34;
                      sVar38 = auVar46._14_2_;
                      auVar50._14_2_ =
                           (ushort)(sVar39 < sVar38) * sVar38 | (ushort)(sVar39 >= sVar38) * sVar39;
                      auVar46 = auVar50 & auVar42 | ~auVar42 & auVar46;
                    } while (uVar29 < uVar36);
                    sVar38 = auVar46._8_2_;
                    sVar45 = auVar46._0_2_;
                    uVar44 = (ushort)(sVar45 < sVar38) * sVar38 |
                             (ushort)(sVar45 >= sVar38) * sVar45;
                    sVar38 = auVar46._10_2_;
                    sVar45 = auVar46._2_2_;
                    uVar47 = (ushort)(sVar45 < sVar38) * sVar38 |
                             (ushort)(sVar45 >= sVar38) * sVar45;
                    sVar38 = auVar46._12_2_;
                    sVar45 = auVar46._4_2_;
                    uVar48 = (ushort)(sVar45 < sVar38) * sVar38 |
                             (ushort)(sVar45 >= sVar38) * sVar45;
                    sVar38 = auVar46._14_2_;
                    sVar45 = auVar46._6_2_;
                    uVar49 = (ushort)(sVar45 < sVar38) * sVar38 |
                             (ushort)(sVar45 >= sVar38) * sVar45;
                    uVar44 = ((short)uVar44 < (short)uVar48) * uVar48 |
                             ((short)uVar44 >= (short)uVar48) * uVar44;
                    uVar47 = ((short)uVar47 < (short)uVar49) * uVar49 |
                             ((short)uVar47 >= (short)uVar49) * uVar47;
                    uVar44 = ((short)uVar44 < (short)uVar47) * uVar47 |
                             ((short)uVar44 >= (short)uVar47) * uVar44;
                  }
                  if (uVar36 < (ulonglong)(longlong)(int)param_6) {
                    lVar41 = lVar37 + lVar25;
                    do {
                      if ((*(char *)(uVar36 + param_7 + lVar40) != '\0') &&
                         ((short)uVar44 < *(short *)(lVar41 + uVar36 * 2))) {
                        uVar44 = *(ushort *)(lVar41 + uVar36 * 2);
                      }
                      uVar36 = uVar36 + 1;
                    } while (uVar36 < (ulonglong)(longlong)(int)param_6);
                  }
                }
                uVar35 = uVar35 + 1;
                lVar40 = lVar40 + (int)param_6;
                lVar25 = lVar25 + lVar31;
              } while (uVar35 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(ushort *)(param_3 + lVar28 + uVar26 * 2) = uVar44;
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)(longlong)(int)param_5);
        }
        uVar21 = uVar21 + 1;
        lVar28 = lVar28 + ((longlong)param_4 >> 1) * 2;
        lVar33 = lVar33 + lVar31;
      } while (uVar21 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

