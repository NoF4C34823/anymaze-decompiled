
void FUN_1403bc460(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  unkuint9 Var14;
  undefined1 auVar15 [11];
  undefined1 auVar16 [13];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  short sVar19;
  short sVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  short sVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  short sVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  short sVar35;
  short sVar36;
  ulonglong uVar37;
  short sVar38;
  char cVar40;
  undefined1 auVar39 [16];
  ushort uVar41;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  short sVar42;
  
  param_2 = param_2 >> 1;
  uVar37 = param_6[1];
  uVar28 = *param_6;
  uVar4 = *param_5;
  uVar29 = uVar4 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar28 - 1 >> 1) + (int)(uVar37 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar21 = 0;
    lVar33 = param_9;
    if (0 < (longlong)(uVar37 - 1)) {
      while( true ) {
        FUN_14037f400(param_1,lVar33,uVar4,uVar28,1);
        uVar37 = param_6[1];
        lVar21 = lVar21 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar33 = lVar33 + uVar29 * 2;
        if ((longlong)(uVar37 - 1) <= lVar21) break;
        uVar28 = *param_6;
      }
    }
    lVar21 = uVar37 - 1;
    lVar22 = 0;
    if (0 < (longlong)param_5[1]) {
      do {
        FUN_14037f400(param_1,lVar33,uVar4,*param_6,1);
        FUN_140388a20(param_9,uVar29,param_3,uVar4,param_6[1]);
        lVar21 = lVar21 + 1;
        lVar22 = lVar22 + 1;
        lVar33 = lVar33 + uVar29 * 2;
        if ((longlong)param_6[1] <= lVar21) {
          lVar21 = 0;
          lVar33 = param_9;
        }
        param_1 = param_1 + param_2 * 2;
        param_3 = param_3 + (param_4 >> 1) * 2;
      } while (lVar22 < (longlong)param_5[1]);
    }
  }
  else {
    uVar29 = param_5[1];
    uVar23 = 0;
    if (0 < (longlong)uVar29) {
      lVar21 = 0;
      lVar33 = 0;
      do {
        uVar27 = 0;
        lVar22 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar32 = 0;
            uVar41 = 0x8000;
            lVar34 = 0;
            lVar30 = 0;
            if (0 < (longlong)uVar37) {
              lVar1 = param_1 + lVar33 + lVar22;
              do {
                if (0 < (longlong)uVar28) {
                  if ((longlong)uVar28 < 8) {
                    uVar25 = 0;
                  }
                  else {
                    auVar43._0_8_ = CONCAT44(CONCAT22(uVar41,uVar41),CONCAT22(uVar41,uVar41));
                    lVar2 = lVar1 + lVar30;
                    auVar43._8_8_ = auVar43._0_8_;
                    uVar25 = uVar28 & 0xfffffffffffffff8;
                    uVar24 = 0;
                    do {
                      uVar3 = *(ulonglong *)(uVar24 + param_7 + lVar34);
                      cVar40 = (char)(uVar3 >> 0x38);
                      auVar7._8_6_ = 0;
                      auVar7._0_8_ = uVar3;
                      auVar7[0xe] = cVar40;
                      auVar8._8_4_ = 0;
                      auVar8._0_8_ = uVar3;
                      auVar8[0xc] = (char)(uVar3 >> 0x30);
                      auVar8._13_2_ = auVar7._13_2_;
                      auVar9._8_4_ = 0;
                      auVar9._0_8_ = uVar3;
                      auVar9._12_3_ = auVar8._12_3_;
                      auVar10._8_2_ = 0;
                      auVar10._0_8_ = uVar3;
                      auVar10[10] = (char)(uVar3 >> 0x28);
                      auVar10._11_4_ = auVar9._11_4_;
                      auVar11._8_2_ = 0;
                      auVar11._0_8_ = uVar3;
                      auVar11._10_5_ = auVar10._10_5_;
                      auVar12[8] = (char)(uVar3 >> 0x20);
                      auVar12._0_8_ = uVar3;
                      auVar12._9_6_ = auVar11._9_6_;
                      auVar13._7_8_ = 0;
                      auVar13._0_7_ = auVar12._8_7_;
                      Var14 = CONCAT81(SUB158(auVar13 << 0x40,7),(char)(uVar3 >> 0x18));
                      auVar17._9_6_ = 0;
                      auVar17._0_9_ = Var14;
                      auVar15._1_10_ = SUB1510(auVar17 << 0x30,5);
                      auVar15[0] = (char)(uVar3 >> 0x10);
                      auVar18._11_4_ = 0;
                      auVar18._0_11_ = auVar15;
                      auVar16._1_12_ = SUB1512(auVar18 << 0x20,3);
                      auVar16[0] = (char)(uVar3 >> 8);
                      auVar39._0_2_ = -(ushort)((char)uVar3 == '\0');
                      auVar39._2_2_ = -(ushort)(auVar16._0_2_ == 0);
                      auVar39._4_2_ = -(ushort)(auVar15._0_2_ == 0);
                      auVar39._6_2_ = -(ushort)((short)Var14 == 0);
                      auVar39._8_2_ = -(ushort)(auVar12._8_2_ == 0);
                      auVar39._10_2_ = -(ushort)(auVar10._10_2_ == 0);
                      auVar39._12_2_ = -(ushort)(auVar8._12_2_ == 0);
                      auVar39._14_2_ = -(ushort)(cVar40 == '\0');
                      auVar6._8_4_ = 0xffffffff;
                      auVar6._0_8_ = 0xffffffffffffffff;
                      auVar6._12_4_ = 0xffffffff;
                      auVar39 = auVar39 ^ auVar6;
                      if ((auVar39 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar2 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar2 + 2 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar19 = 0;
                      }
                      else {
                        sVar19 = *(short *)(lVar2 + 4 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar20 = 0;
                      }
                      else {
                        sVar20 = *(short *)(lVar2 + 6 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar2 + 8 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar2 + 10 + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar2 + 0xc + uVar24 * 2);
                      }
                      if ((auVar39 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar2 + 0xe + uVar24 * 2);
                      }
                      uVar24 = uVar24 + 8;
                      sVar5 = auVar43._0_2_;
                      auVar47._0_2_ =
                           (ushort)(sVar36 < sVar5) * sVar5 | (ushort)(sVar36 >= sVar5) * sVar36;
                      sVar36 = auVar43._2_2_;
                      auVar47._2_2_ =
                           (ushort)(sVar42 < sVar36) * sVar36 | (ushort)(sVar42 >= sVar36) * sVar42;
                      sVar36 = auVar43._4_2_;
                      auVar47._4_2_ =
                           (ushort)(sVar19 < sVar36) * sVar36 | (ushort)(sVar19 >= sVar36) * sVar19;
                      sVar36 = auVar43._6_2_;
                      auVar47._6_2_ =
                           (ushort)(sVar20 < sVar36) * sVar36 | (ushort)(sVar20 >= sVar36) * sVar20;
                      sVar36 = auVar43._8_2_;
                      auVar47._8_2_ =
                           (ushort)(sVar26 < sVar36) * sVar36 | (ushort)(sVar26 >= sVar36) * sVar26;
                      sVar36 = auVar43._10_2_;
                      auVar47._10_2_ =
                           (ushort)(sVar31 < sVar36) * sVar36 | (ushort)(sVar31 >= sVar36) * sVar31;
                      sVar36 = auVar43._12_2_;
                      auVar47._12_2_ =
                           (ushort)(sVar35 < sVar36) * sVar36 | (ushort)(sVar35 >= sVar36) * sVar35;
                      sVar36 = auVar43._14_2_;
                      auVar47._14_2_ =
                           (ushort)(sVar38 < sVar36) * sVar36 | (ushort)(sVar38 >= sVar36) * sVar38;
                      auVar43 = auVar47 & auVar39 | ~auVar39 & auVar43;
                    } while (uVar24 < uVar25);
                    sVar36 = auVar43._8_2_;
                    sVar42 = auVar43._0_2_;
                    uVar41 = (ushort)(sVar42 < sVar36) * sVar36 |
                             (ushort)(sVar42 >= sVar36) * sVar42;
                    sVar36 = auVar43._10_2_;
                    sVar42 = auVar43._2_2_;
                    uVar44 = (ushort)(sVar42 < sVar36) * sVar36 |
                             (ushort)(sVar42 >= sVar36) * sVar42;
                    sVar36 = auVar43._12_2_;
                    sVar42 = auVar43._4_2_;
                    uVar45 = (ushort)(sVar42 < sVar36) * sVar36 |
                             (ushort)(sVar42 >= sVar36) * sVar42;
                    sVar36 = auVar43._14_2_;
                    sVar42 = auVar43._6_2_;
                    uVar46 = (ushort)(sVar42 < sVar36) * sVar36 |
                             (ushort)(sVar42 >= sVar36) * sVar42;
                    uVar41 = ((short)uVar41 < (short)uVar45) * uVar45 |
                             ((short)uVar41 >= (short)uVar45) * uVar41;
                    uVar44 = ((short)uVar44 < (short)uVar46) * uVar46 |
                             ((short)uVar44 >= (short)uVar46) * uVar44;
                    uVar41 = ((short)uVar41 < (short)uVar44) * uVar44 |
                             ((short)uVar41 >= (short)uVar44) * uVar41;
                  }
                  if (uVar25 < uVar28) {
                    lVar2 = lVar1 + lVar30;
                    do {
                      if ((*(char *)(uVar25 + param_7 + lVar34) != '\0') &&
                         ((short)uVar41 < *(short *)(lVar2 + uVar25 * 2))) {
                        uVar41 = *(ushort *)(lVar2 + uVar25 * 2);
                      }
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < uVar28);
                  }
                }
                uVar32 = uVar32 + 1;
                lVar34 = lVar34 + uVar28;
                lVar30 = lVar30 + param_2 * 2;
              } while (uVar32 < uVar37);
            }
            uVar27 = uVar27 + 1;
            *(ushort *)(lVar22 + param_3 + lVar21) = uVar41;
            lVar22 = lVar22 + 2;
          } while (uVar27 < uVar4);
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + (param_4 >> 1) * 2;
        lVar33 = lVar33 + param_2 * 2;
      } while (uVar23 < uVar29);
    }
  }
  return;
}

