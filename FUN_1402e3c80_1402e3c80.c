
void FUN_1402e3c80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
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
  short sVar19;
  short sVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  short sVar28;
  ulonglong uVar29;
  short sVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined2 uVar34;
  short sVar35;
  short sVar36;
  ulonglong uVar37;
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
  
  param_2 = param_2 >> 1;
  uVar21 = param_6[1];
  uVar26 = *param_6;
  uVar4 = *param_5;
  uVar39 = uVar4 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar26 - 1 >> 1) + (int)(uVar21 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar31 = 0;
    lVar25 = param_9;
    if (0 < (longlong)(uVar21 - 1)) {
      while( true ) {
        FUN_1402b1140(param_1,lVar25,uVar4,uVar26,1);
        uVar21 = param_6[1];
        lVar31 = lVar31 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar25 = lVar25 + uVar39 * 2;
        if ((longlong)(uVar21 - 1) <= lVar31) break;
        uVar26 = *param_6;
      }
    }
    lVar31 = uVar21 - 1;
    lVar32 = 0;
    if (0 < (longlong)param_5[1]) {
      do {
        FUN_1402b1140(param_1,lVar25,uVar4,*param_6,1);
        FUN_1402bc1c0(param_9,uVar39,param_3,uVar4,param_6[1]);
        lVar31 = lVar31 + 1;
        lVar32 = lVar32 + 1;
        param_1 = param_1 + param_2 * 2;
        param_3 = param_3 + (param_4 >> 1) * 2;
        lVar25 = lVar25 + uVar39 * 2;
        if ((longlong)param_6[1] <= lVar31) {
          lVar31 = 0;
          lVar25 = param_9;
        }
      } while (lVar32 < (longlong)param_5[1]);
    }
  }
  else {
    uVar39 = param_5[1];
    uVar18 = 0;
    if (0 < (longlong)uVar39) {
      lVar31 = 0;
      lVar25 = 0;
      do {
        uVar37 = 0;
        lVar32 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar29 = 0;
            uVar46 = 0xffff8000;
            uVar34 = 0x8000;
            lVar33 = 0;
            lVar27 = 0;
            if (0 < (longlong)uVar21) {
              lVar1 = param_1 + lVar25 + lVar32;
              do {
                if (0 < (longlong)uVar26) {
                  if ((longlong)uVar26 < 8) {
                    uVar24 = 0;
                  }
                  else {
                    uVar45 = CONCAT22((short)uVar46,(short)uVar46);
                    auVar47._0_8_ = CONCAT44(uVar45,uVar45);
                    auVar40._8_4_ = 0xffffffff;
                    auVar40._0_8_ = 0xffffffffffffffff;
                    auVar40._12_4_ = 0xffffffff;
                    auVar47._8_8_ = auVar47._0_8_;
                    lVar2 = lVar1 + lVar27;
                    uVar24 = uVar26 & 0xfffffffffffffff8;
                    uVar23 = 0;
                    do {
                      uVar3 = *(ulonglong *)(param_7 + lVar33 + uVar23);
                      cVar42 = (char)(uVar3 >> 0x38);
                      auVar6._8_6_ = 0;
                      auVar6._0_8_ = uVar3;
                      auVar6[0xe] = cVar42;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar3;
                      auVar7[0xc] = (char)(uVar3 >> 0x30);
                      auVar7._13_2_ = auVar6._13_2_;
                      auVar8._8_4_ = 0;
                      auVar8._0_8_ = uVar3;
                      auVar8._12_3_ = auVar7._12_3_;
                      auVar9._8_2_ = 0;
                      auVar9._0_8_ = uVar3;
                      auVar9[10] = (char)(uVar3 >> 0x28);
                      auVar9._11_4_ = auVar8._11_4_;
                      auVar10._8_2_ = 0;
                      auVar10._0_8_ = uVar3;
                      auVar10._10_5_ = auVar9._10_5_;
                      auVar11[8] = (char)(uVar3 >> 0x20);
                      auVar11._0_8_ = uVar3;
                      auVar11._9_6_ = auVar10._9_6_;
                      auVar12._7_8_ = 0;
                      auVar12._0_7_ = auVar11._8_7_;
                      Var13 = CONCAT81(SUB158(auVar12 << 0x40,7),(char)(uVar3 >> 0x18));
                      auVar16._9_6_ = 0;
                      auVar16._0_9_ = Var13;
                      auVar14._1_10_ = SUB1510(auVar16 << 0x30,5);
                      auVar14[0] = (char)(uVar3 >> 0x10);
                      auVar17._11_4_ = 0;
                      auVar17._0_11_ = auVar14;
                      auVar15._1_12_ = SUB1512(auVar17 << 0x20,3);
                      auVar15[0] = (char)(uVar3 >> 8);
                      auVar41._0_2_ = -(ushort)((char)uVar3 == '\0');
                      auVar41._2_2_ = -(ushort)(auVar15._0_2_ == 0);
                      auVar41._4_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar41._6_2_ = -(ushort)((short)Var13 == 0);
                      auVar41._8_2_ = -(ushort)(auVar11._8_2_ == 0);
                      auVar41._10_2_ = -(ushort)(auVar9._10_2_ == 0);
                      auVar41._12_2_ = -(ushort)(auVar7._12_2_ == 0);
                      auVar41._14_2_ = -(ushort)(cVar42 == '\0');
                      auVar41 = auVar41 ^ auVar40;
                      if ((auVar41 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar2 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar2 + 2 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar19 = 0;
                      }
                      else {
                        sVar19 = *(short *)(lVar2 + 4 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar20 = 0;
                      }
                      else {
                        sVar20 = *(short *)(lVar2 + 6 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar2 + 8 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar30 = 0;
                      }
                      else {
                        sVar30 = *(short *)(lVar2 + 10 + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar2 + 0xc + uVar23 * 2);
                      }
                      if ((auVar41 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar2 + 0xe + uVar23 * 2);
                      }
                      uVar23 = uVar23 + 8;
                      sVar5 = auVar47._0_2_;
                      auVar51._0_2_ =
                           (ushort)(sVar36 < sVar5) * sVar5 | (ushort)(sVar36 >= sVar5) * sVar36;
                      sVar36 = auVar47._2_2_;
                      auVar51._2_2_ =
                           (ushort)(sVar44 < sVar36) * sVar36 | (ushort)(sVar44 >= sVar36) * sVar44;
                      sVar36 = auVar47._4_2_;
                      auVar51._4_2_ =
                           (ushort)(sVar19 < sVar36) * sVar36 | (ushort)(sVar19 >= sVar36) * sVar19;
                      sVar36 = auVar47._6_2_;
                      auVar51._6_2_ =
                           (ushort)(sVar20 < sVar36) * sVar36 | (ushort)(sVar20 >= sVar36) * sVar20;
                      sVar36 = auVar47._8_2_;
                      auVar51._8_2_ =
                           (ushort)(sVar28 < sVar36) * sVar36 | (ushort)(sVar28 >= sVar36) * sVar28;
                      sVar36 = auVar47._10_2_;
                      auVar51._10_2_ =
                           (ushort)(sVar30 < sVar36) * sVar36 | (ushort)(sVar30 >= sVar36) * sVar30;
                      sVar36 = auVar47._12_2_;
                      auVar51._12_2_ =
                           (ushort)(sVar35 < sVar36) * sVar36 | (ushort)(sVar35 >= sVar36) * sVar35;
                      sVar36 = auVar47._14_2_;
                      auVar51._14_2_ =
                           (ushort)(sVar38 < sVar36) * sVar36 | (ushort)(sVar38 >= sVar36) * sVar38;
                      auVar47 = auVar51 & auVar41 | ~auVar41 & auVar47;
                    } while (uVar23 < uVar24);
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
                  if (uVar24 < uVar26) {
                    do {
                      if (*(char *)(uVar24 + param_7 + lVar33) != '\0') {
                        sVar36 = (short)uVar46;
                        uVar22 = (uint)*(short *)(lVar1 + lVar27 + uVar24 * 2);
                        uVar46 = (int)sVar36;
                        if ((int)sVar36 < (int)uVar22) {
                          uVar46 = uVar22;
                        }
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar26);
                  }
                }
                uVar34 = (undefined2)uVar46;
                uVar29 = uVar29 + 1;
                lVar33 = lVar33 + uVar26;
                lVar27 = lVar27 + param_2 * 2;
              } while (uVar29 < uVar21);
            }
            uVar37 = uVar37 + 1;
            *(undefined2 *)(lVar32 + param_3 + lVar31) = uVar34;
            lVar32 = lVar32 + 2;
          } while (uVar37 < uVar4);
        }
        uVar18 = uVar18 + 1;
        lVar31 = lVar31 + (param_4 >> 1) * 2;
        lVar25 = lVar25 + param_2 * 2;
      } while (uVar18 < uVar39);
    }
  }
  return;
}

