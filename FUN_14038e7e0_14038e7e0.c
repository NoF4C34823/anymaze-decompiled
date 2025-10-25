
void FUN_14038e7e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short sVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  unkuint9 Var19;
  undefined1 auVar20 [11];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  short sVar31;
  ulonglong uVar32;
  short sVar33;
  ulonglong uVar34;
  short sVar35;
  ulonglong uVar36;
  short sVar37;
  ulonglong uVar38;
  short sVar39;
  short sVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  short sVar44;
  char cVar46;
  undefined1 auVar45 [16];
  ushort uVar47;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  short sVar48;
  
  param_2 = param_2 >> 1;
  uVar41 = param_6[1];
  uVar34 = *param_6;
  uVar8 = *param_5;
  uVar36 = uVar8 + 0xf & 0xfffffffffffffff0;
  param_4 = param_4 >> 1;
  param_1 = param_1 + ((longlong)(int)(uVar34 - 1 >> 1) + (int)(uVar41 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar27 = 0;
    lVar24 = param_9;
    if (0 < (longlong)(uVar41 - 1)) {
      while( true ) {
        FUN_14037f400(param_1,lVar24,uVar8,uVar34,1);
        uVar41 = param_6[1];
        lVar27 = lVar27 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar24 = lVar24 + uVar36 * 2;
        if ((longlong)(uVar41 - 1) <= lVar27) break;
        uVar34 = *param_6;
      }
    }
    lVar27 = uVar41 - 1;
    if (0 < (longlong)param_5[1]) {
      param_1 = param_1 + param_2 * -2;
      lVar28 = 0;
      lVar43 = lVar28;
      do {
        param_1 = param_1 + param_2 * 2;
        lVar28 = lVar28 + 1;
        lVar43 = lVar43 + param_4 * 2;
        FUN_14037f400(param_1,lVar24,uVar8,*param_6,1);
        uVar41 = param_6[1];
        if (0 < (longlong)uVar8) {
          uVar34 = 0;
          do {
            sVar40 = -0x8000;
            if (0 < (longlong)uVar41) {
              uVar29 = 0;
              lVar25 = 1;
              lVar42 = 0;
              if (uVar41 >> 3 != 0) {
                lVar11 = uVar34 * 2;
                lVar25 = lVar11 + uVar36 * 8 + param_9;
                lVar1 = lVar11 + param_9 + uVar36 * 0xe;
                lVar2 = lVar11 + uVar36 * 0xc + param_9;
                lVar3 = lVar11 + uVar36 * 10 + param_9;
                lVar4 = lVar11 + uVar36 * 6 + param_9;
                lVar5 = lVar11 + uVar36 * 4 + param_9;
                lVar6 = lVar11 + uVar36 * 2 + param_9;
                do {
                  if (sVar40 < *(short *)(lVar42 + lVar11 + param_9)) {
                    sVar40 = *(short *)(lVar42 + lVar11 + param_9);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar6)) {
                    sVar40 = *(short *)(lVar42 + lVar6);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar5)) {
                    sVar40 = *(short *)(lVar42 + lVar5);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar4)) {
                    sVar40 = *(short *)(lVar42 + lVar4);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar25)) {
                    sVar40 = *(short *)(lVar42 + lVar25);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar3)) {
                    sVar40 = *(short *)(lVar42 + lVar3);
                  }
                  if (sVar40 < *(short *)(lVar42 + lVar2)) {
                    sVar40 = *(short *)(lVar42 + lVar2);
                  }
                  uVar29 = uVar29 + 1;
                  if (sVar40 < *(short *)(lVar42 + lVar1)) {
                    sVar40 = *(short *)(lVar42 + lVar1);
                  }
                  lVar42 = lVar42 + uVar36 * 0x10;
                } while (uVar29 < uVar41 >> 3);
                lVar25 = uVar29 * 8 + 1;
              }
              uVar29 = lVar25 - 1;
              lVar25 = uVar36 * uVar29;
              if (uVar29 < uVar41) {
                do {
                  sVar48 = *(short *)(uVar34 * 2 + param_9 + lVar25 * 2);
                  if (sVar40 < sVar48) {
                    sVar40 = sVar48;
                  }
                  uVar29 = uVar29 + 1;
                  lVar25 = lVar25 + uVar36;
                } while (uVar29 < uVar41);
              }
            }
            *(short *)(param_3 + param_4 * -2 + lVar43 + uVar34 * 2) = sVar40;
            uVar34 = uVar34 + 1;
          } while (uVar34 < uVar8);
        }
        lVar27 = lVar27 + 1;
        lVar24 = lVar24 + uVar36 * 2;
        if ((longlong)uVar41 <= lVar27) {
          lVar27 = 0;
          lVar24 = param_9;
        }
      } while (lVar28 < (longlong)param_5[1]);
    }
  }
  else {
    uVar36 = param_5[1];
    uVar29 = 0;
    if (0 < (longlong)uVar36) {
      lVar24 = 0;
      lVar27 = 0;
      do {
        uVar26 = 0;
        lVar43 = 0;
        if (0 < (longlong)uVar8) {
          do {
            uVar38 = 0;
            uVar47 = 0x8000;
            lVar25 = 0;
            lVar28 = 0;
            if (0 < (longlong)uVar41) {
              lVar42 = param_1 + lVar27 + lVar43;
              do {
                if (0 < (longlong)uVar34) {
                  if ((longlong)uVar34 < 8) {
                    uVar32 = 0;
                  }
                  else {
                    auVar49._0_8_ = CONCAT44(CONCAT22(uVar47,uVar47),CONCAT22(uVar47,uVar47));
                    lVar1 = lVar42 + lVar28;
                    auVar49._8_8_ = auVar49._0_8_;
                    uVar32 = uVar34 & 0xfffffffffffffff8;
                    uVar30 = 0;
                    do {
                      uVar7 = *(ulonglong *)(uVar30 + param_7 + lVar25);
                      cVar46 = (char)(uVar7 >> 0x38);
                      auVar12._8_6_ = 0;
                      auVar12._0_8_ = uVar7;
                      auVar12[0xe] = cVar46;
                      auVar13._8_4_ = 0;
                      auVar13._0_8_ = uVar7;
                      auVar13[0xc] = (char)(uVar7 >> 0x30);
                      auVar13._13_2_ = auVar12._13_2_;
                      auVar14._8_4_ = 0;
                      auVar14._0_8_ = uVar7;
                      auVar14._12_3_ = auVar13._12_3_;
                      auVar15._8_2_ = 0;
                      auVar15._0_8_ = uVar7;
                      auVar15[10] = (char)(uVar7 >> 0x28);
                      auVar15._11_4_ = auVar14._11_4_;
                      auVar16._8_2_ = 0;
                      auVar16._0_8_ = uVar7;
                      auVar16._10_5_ = auVar15._10_5_;
                      auVar17[8] = (char)(uVar7 >> 0x20);
                      auVar17._0_8_ = uVar7;
                      auVar17._9_6_ = auVar16._9_6_;
                      auVar18._7_8_ = 0;
                      auVar18._0_7_ = auVar17._8_7_;
                      Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar7 >> 0x18));
                      auVar22._9_6_ = 0;
                      auVar22._0_9_ = Var19;
                      auVar20._1_10_ = SUB1510(auVar22 << 0x30,5);
                      auVar20[0] = (char)(uVar7 >> 0x10);
                      auVar23._11_4_ = 0;
                      auVar23._0_11_ = auVar20;
                      auVar21._1_12_ = SUB1512(auVar23 << 0x20,3);
                      auVar21[0] = (char)(uVar7 >> 8);
                      auVar45._0_2_ = -(ushort)((char)uVar7 == '\0');
                      auVar45._2_2_ = -(ushort)(auVar21._0_2_ == 0);
                      auVar45._4_2_ = -(ushort)(auVar20._0_2_ == 0);
                      auVar45._6_2_ = -(ushort)((short)Var19 == 0);
                      auVar45._8_2_ = -(ushort)(auVar17._8_2_ == 0);
                      auVar45._10_2_ = -(ushort)(auVar15._10_2_ == 0);
                      auVar45._12_2_ = -(ushort)(auVar13._12_2_ == 0);
                      auVar45._14_2_ = -(ushort)(cVar46 == '\0');
                      auVar10._8_4_ = 0xffffffff;
                      auVar10._0_8_ = 0xffffffffffffffff;
                      auVar10._12_4_ = 0xffffffff;
                      auVar45 = auVar45 ^ auVar10;
                      if ((auVar45 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar1 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar48 = 0;
                      }
                      else {
                        sVar48 = *(short *)(lVar1 + 2 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar1 + 4 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar33 = 0;
                      }
                      else {
                        sVar33 = *(short *)(lVar1 + 6 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar1 + 8 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar1 + 10 + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar1 + 0xc + uVar30 * 2);
                      }
                      if ((auVar45 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar1 + 0xe + uVar30 * 2);
                      }
                      uVar30 = uVar30 + 8;
                      sVar9 = auVar49._0_2_;
                      auVar53._0_2_ =
                           (ushort)(sVar40 < sVar9) * sVar9 | (ushort)(sVar40 >= sVar9) * sVar40;
                      sVar40 = auVar49._2_2_;
                      auVar53._2_2_ =
                           (ushort)(sVar48 < sVar40) * sVar40 | (ushort)(sVar48 >= sVar40) * sVar48;
                      sVar40 = auVar49._4_2_;
                      auVar53._4_2_ =
                           (ushort)(sVar31 < sVar40) * sVar40 | (ushort)(sVar31 >= sVar40) * sVar31;
                      sVar40 = auVar49._6_2_;
                      auVar53._6_2_ =
                           (ushort)(sVar33 < sVar40) * sVar40 | (ushort)(sVar33 >= sVar40) * sVar33;
                      sVar40 = auVar49._8_2_;
                      auVar53._8_2_ =
                           (ushort)(sVar35 < sVar40) * sVar40 | (ushort)(sVar35 >= sVar40) * sVar35;
                      sVar40 = auVar49._10_2_;
                      auVar53._10_2_ =
                           (ushort)(sVar37 < sVar40) * sVar40 | (ushort)(sVar37 >= sVar40) * sVar37;
                      sVar40 = auVar49._12_2_;
                      auVar53._12_2_ =
                           (ushort)(sVar39 < sVar40) * sVar40 | (ushort)(sVar39 >= sVar40) * sVar39;
                      sVar40 = auVar49._14_2_;
                      auVar53._14_2_ =
                           (ushort)(sVar44 < sVar40) * sVar40 | (ushort)(sVar44 >= sVar40) * sVar44;
                      auVar49 = auVar53 & auVar45 | ~auVar45 & auVar49;
                    } while (uVar30 < uVar32);
                    sVar40 = auVar49._8_2_;
                    sVar48 = auVar49._0_2_;
                    uVar47 = (ushort)(sVar48 < sVar40) * sVar40 |
                             (ushort)(sVar48 >= sVar40) * sVar48;
                    sVar40 = auVar49._10_2_;
                    sVar48 = auVar49._2_2_;
                    uVar50 = (ushort)(sVar48 < sVar40) * sVar40 |
                             (ushort)(sVar48 >= sVar40) * sVar48;
                    sVar40 = auVar49._12_2_;
                    sVar48 = auVar49._4_2_;
                    uVar51 = (ushort)(sVar48 < sVar40) * sVar40 |
                             (ushort)(sVar48 >= sVar40) * sVar48;
                    sVar40 = auVar49._14_2_;
                    sVar48 = auVar49._6_2_;
                    uVar52 = (ushort)(sVar48 < sVar40) * sVar40 |
                             (ushort)(sVar48 >= sVar40) * sVar48;
                    uVar47 = ((short)uVar47 < (short)uVar51) * uVar51 |
                             ((short)uVar47 >= (short)uVar51) * uVar47;
                    uVar50 = ((short)uVar50 < (short)uVar52) * uVar52 |
                             ((short)uVar50 >= (short)uVar52) * uVar50;
                    uVar47 = ((short)uVar47 < (short)uVar50) * uVar50 |
                             ((short)uVar47 >= (short)uVar50) * uVar47;
                  }
                  if (uVar32 < uVar34) {
                    lVar1 = lVar42 + lVar28;
                    do {
                      if ((*(char *)(uVar32 + param_7 + lVar25) != '\0') &&
                         ((short)uVar47 < *(short *)(lVar1 + uVar32 * 2))) {
                        uVar47 = *(ushort *)(lVar1 + uVar32 * 2);
                      }
                      uVar32 = uVar32 + 1;
                    } while (uVar32 < uVar34);
                  }
                }
                uVar38 = uVar38 + 1;
                lVar25 = lVar25 + uVar34;
                lVar28 = lVar28 + param_2 * 2;
              } while (uVar38 < uVar41);
            }
            uVar26 = uVar26 + 1;
            *(ushort *)(lVar43 + param_3 + lVar24) = uVar47;
            lVar43 = lVar43 + 2;
          } while (uVar26 < uVar8);
        }
        uVar29 = uVar29 + 1;
        lVar24 = lVar24 + param_4 * 2;
        lVar27 = lVar27 + param_2 * 2;
      } while (uVar29 < uVar36);
    }
  }
  return;
}

