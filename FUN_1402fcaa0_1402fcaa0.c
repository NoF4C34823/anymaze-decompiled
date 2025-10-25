
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fcaa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
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
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  ulonglong uVar27;
  short sVar28;
  short sVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  short sVar36;
  ulonglong uVar37;
  short sVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  undefined2 uVar42;
  short sVar43;
  uint uVar44;
  short sVar45;
  ulonglong uVar46;
  short sVar47;
  ulonglong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  char cVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  
  sVar25 = _UNK_143089bde;
  sVar24 = _UNK_143089bdc;
  sVar23 = _UNK_143089bda;
  sVar22 = _UNK_143089bd8;
  sVar21 = _UNK_143089bd6;
  sVar20 = _UNK_143089bd4;
  sVar19 = _UNK_143089bd2;
  sVar18 = _DAT_143089bd0;
  param_2 = param_2 >> 1;
  uVar30 = param_6[1];
  uVar34 = *param_6;
  uVar5 = *param_5;
  uVar48 = uVar5 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar34 - 1 >> 1) + (int)(uVar30 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar39 = 0;
    lVar33 = param_9;
    if (0 < (longlong)(uVar30 - 1)) {
      while( true ) {
        FUN_14034a600(param_1,lVar33,uVar5,uVar34,1);
        uVar30 = param_6[1];
        lVar39 = lVar39 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar33 = lVar33 + uVar48 * 2;
        if ((longlong)(uVar30 - 1) <= lVar39) break;
        uVar34 = *param_6;
      }
    }
    lVar39 = uVar30 - 1;
    lVar40 = 0;
    if (0 < (longlong)param_5[1]) {
      do {
        FUN_14034a600(param_1,lVar33,uVar5,*param_6,1);
        FUN_140355860(param_9,uVar48,param_3,uVar5,param_6[1]);
        lVar39 = lVar39 + 1;
        lVar40 = lVar40 + 1;
        param_1 = param_1 + param_2 * 2;
        param_3 = param_3 + (param_4 >> 1) * 2;
        lVar33 = lVar33 + uVar48 * 2;
        if ((longlong)param_6[1] <= lVar39) {
          lVar39 = 0;
          lVar33 = param_9;
        }
      } while (lVar40 < (longlong)param_5[1]);
    }
  }
  else {
    uVar48 = param_5[1];
    uVar27 = 0;
    if (0 < (longlong)uVar48) {
      lVar39 = 0;
      lVar33 = 0;
      do {
        uVar46 = 0;
        lVar40 = 0;
        if (0 < (longlong)uVar5) {
          do {
            uVar37 = 0;
            uVar44 = 0xffff;
            uVar42 = 0xffff;
            lVar41 = 0;
            lVar35 = 0;
            if (0 < (longlong)uVar30) {
              lVar1 = param_1 + lVar33 + lVar40;
              do {
                if (0 < (longlong)uVar34) {
                  if ((longlong)uVar34 < 8) {
                    uVar32 = 0;
                  }
                  else {
                    uVar32 = uVar34 & 0xfffffffffffffff8;
                    uVar31 = 0;
                    auVar50._8_4_ = 0xffffffff;
                    auVar50._0_8_ = 0xffffffffffffffff;
                    auVar50._12_4_ = 0xffffffff;
                    uVar51 = CONCAT22((short)uVar44,(short)uVar44);
                    lVar2 = lVar1 + lVar35;
                    auVar52._0_8_ = CONCAT44(uVar51,uVar51);
                    auVar52._8_8_ = auVar52._0_8_;
                    do {
                      uVar3 = *(ulonglong *)(param_7 + lVar41 + uVar31);
                      cVar56 = (char)(uVar3 >> 0x38);
                      auVar6._8_6_ = 0;
                      auVar6._0_8_ = uVar3;
                      auVar6[0xe] = cVar56;
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
                      auVar54._0_2_ = -(ushort)((uVar3 & 0xff) == 0);
                      auVar54._2_2_ = -(ushort)(auVar15._0_2_ == 0);
                      auVar54._4_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar54._6_2_ = -(ushort)((short)Var13 == 0);
                      auVar54._8_2_ = -(ushort)(auVar11._8_2_ == 0);
                      auVar54._10_2_ = -(ushort)(auVar9._10_2_ == 0);
                      auVar54._12_2_ = -(ushort)(auVar7._12_2_ == 0);
                      auVar54._14_2_ = -(ushort)(cVar56 == '\0');
                      auVar54 = auVar54 ^ auVar50;
                      if ((auVar54 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar45 = 0;
                      }
                      else {
                        sVar45 = *(short *)(lVar2 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar2 + 2 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar2 + 4 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar2 + 6 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar2 + 8 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar2 + 10 + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar43 = 0;
                      }
                      else {
                        sVar43 = *(short *)(lVar2 + 0xc + uVar31 * 2);
                      }
                      if ((auVar54 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar47 = 0;
                      }
                      else {
                        sVar47 = *(short *)(lVar2 + 0xe + uVar31 * 2);
                      }
                      auVar53._2_2_ = sVar26;
                      auVar53._0_2_ = sVar45;
                      auVar53._6_2_ = sVar29;
                      auVar53._4_2_ = sVar28;
                      auVar53._10_2_ = sVar38;
                      auVar53._8_2_ = sVar36;
                      auVar53._14_2_ = sVar47;
                      auVar53._12_2_ = sVar43;
                      auVar57._0_2_ =
                           -(ushort)((short)(auVar52._0_2_ - sVar18) < (short)(sVar45 - sVar18));
                      auVar57._2_2_ =
                           -(ushort)((short)(auVar52._2_2_ - sVar19) < (short)(sVar26 - sVar19));
                      auVar57._4_2_ =
                           -(ushort)((short)(auVar52._4_2_ - sVar20) < (short)(sVar28 - sVar20));
                      auVar57._6_2_ =
                           -(ushort)((short)(auVar52._6_2_ - sVar21) < (short)(sVar29 - sVar21));
                      auVar57._8_2_ =
                           -(ushort)((short)(auVar52._8_2_ - sVar22) < (short)(sVar36 - sVar22));
                      auVar57._10_2_ =
                           -(ushort)((short)(auVar52._10_2_ - sVar23) < (short)(sVar38 - sVar23));
                      auVar57._12_2_ =
                           -(ushort)((short)(auVar52._12_2_ - sVar24) < (short)(sVar43 - sVar24));
                      auVar57._14_2_ =
                           -(ushort)((short)(auVar52._14_2_ - sVar25) < (short)(sVar47 - sVar25));
                      uVar31 = uVar31 + 8;
                      auVar52 = (auVar57 & (auVar52 ^ auVar53) ^ auVar53) & auVar54 |
                                ~auVar54 & auVar52;
                    } while (uVar31 < uVar32);
                    auVar55._0_2_ =
                         -(ushort)((short)(auVar52._8_2_ - sVar18) < (short)(auVar52._0_2_ - sVar18)
                                  );
                    auVar55._2_2_ =
                         -(ushort)((short)(auVar52._10_2_ - sVar19) <
                                  (short)(auVar52._2_2_ - sVar19));
                    auVar55._4_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar20) <
                                  (short)(auVar52._4_2_ - sVar20));
                    auVar55._6_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar21) <
                                  (short)(auVar52._6_2_ - sVar21));
                    auVar55._8_2_ = -(ushort)((short)-sVar22 < (short)(auVar52._8_2_ - sVar22));
                    auVar55._10_2_ = -(ushort)((short)-sVar23 < (short)(auVar52._10_2_ - sVar23));
                    auVar55._12_2_ = -(ushort)((short)-sVar24 < (short)(auVar52._12_2_ - sVar24));
                    auVar55._14_2_ = -(ushort)((short)-sVar25 < (short)(auVar52._14_2_ - sVar25));
                    auVar52 = auVar55 & (auVar52 >> 0x40 ^ auVar52) ^ auVar52;
                    auVar49._0_2_ =
                         -(ushort)((short)(auVar52._4_2_ - sVar18) < (short)(auVar52._0_2_ - sVar18)
                                  );
                    auVar49._2_2_ =
                         -(ushort)((short)(auVar52._6_2_ - sVar19) < (short)(auVar52._2_2_ - sVar19)
                                  );
                    auVar49._4_4_ = 0;
                    auVar49._8_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar22) <
                                  (short)(auVar52._8_2_ - sVar22));
                    auVar49._10_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar23) <
                                  (short)(auVar52._10_2_ - sVar23));
                    auVar49._12_2_ = -(ushort)((short)-sVar24 < (short)(auVar52._12_2_ - sVar24));
                    auVar49._14_2_ = -(ushort)((short)-sVar25 < (short)(auVar52._14_2_ - sVar25));
                    auVar52 = auVar49 & (auVar52 >> 0x20 ^ auVar52) ^ auVar52;
                    uVar44 = (uint)(ushort)-(ushort)((short)(auVar52._2_2_ - sVar18) <
                                                    (short)(auVar52._0_2_ - sVar18)) &
                             (auVar52._2_4_ ^ auVar52._0_4_) ^ auVar52._0_4_;
                  }
                  if (uVar32 < uVar34) {
                    do {
                      if (*(char *)(uVar32 + param_7 + lVar41) != '\0') {
                        uVar44 = uVar44 & 0xffff;
                        uVar4 = *(ushort *)(lVar1 + lVar35 + uVar32 * 2);
                        if (uVar4 < uVar44) {
                          uVar44 = (uint)uVar4;
                        }
                      }
                      uVar32 = uVar32 + 1;
                    } while (uVar32 < uVar34);
                  }
                }
                uVar42 = (undefined2)uVar44;
                uVar37 = uVar37 + 1;
                lVar41 = lVar41 + uVar34;
                lVar35 = lVar35 + param_2 * 2;
              } while (uVar37 < uVar30);
            }
            uVar46 = uVar46 + 1;
            *(undefined2 *)(lVar40 + param_3 + lVar39) = uVar42;
            lVar40 = lVar40 + 2;
          } while (uVar46 < uVar5);
        }
        uVar27 = uVar27 + 1;
        lVar39 = lVar39 + (param_4 >> 1) * 2;
        lVar33 = lVar33 + param_2 * 2;
      } while (uVar27 < uVar48);
    }
  }
  return;
}

