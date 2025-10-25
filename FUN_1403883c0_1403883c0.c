
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403883c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
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
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  short sVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  short sVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  undefined2 uVar41;
  short sVar42;
  ushort uVar43;
  uint uVar44;
  ulonglong uVar45;
  short sVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  short sVar54;
  short sVar57;
  char cVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  
  sVar24 = _UNK_143089d6e;
  sVar23 = _UNK_143089d6c;
  sVar22 = _UNK_143089d6a;
  sVar21 = _UNK_143089d68;
  sVar20 = _UNK_143089d66;
  sVar19 = _UNK_143089d64;
  sVar18 = _UNK_143089d62;
  sVar17 = _DAT_143089d60;
  param_2 = param_2 >> 1;
  uVar45 = param_6[1];
  uVar34 = *param_6;
  uVar4 = *param_5;
  uVar35 = uVar4 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar34 - 1 >> 1) + (int)(uVar45 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar27 = 0;
    lVar39 = param_9;
    if (0 < (longlong)(uVar45 - 1)) {
      while( true ) {
        FUN_140402380(param_1,lVar39,uVar4,uVar34,1);
        uVar45 = param_6[1];
        lVar27 = lVar27 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar39 = lVar39 + uVar35 * 2;
        if ((longlong)(uVar45 - 1) <= lVar27) break;
        uVar34 = *param_6;
      }
    }
    lVar27 = uVar45 - 1;
    lVar28 = 0;
    if (0 < (longlong)param_5[1]) {
      do {
        FUN_140402380(param_1,lVar39,uVar4,*param_6,1);
        FUN_14040bbe0(param_9,uVar35,param_3,uVar4,param_6[1]);
        lVar27 = lVar27 + 1;
        lVar28 = lVar28 + 1;
        lVar39 = lVar39 + uVar35 * 2;
        if ((longlong)param_6[1] <= lVar27) {
          lVar27 = 0;
          lVar39 = param_9;
        }
        param_1 = param_1 + param_2 * 2;
        param_3 = param_3 + (param_4 >> 1) * 2;
      } while (lVar28 < (longlong)param_5[1]);
    }
  }
  else {
    uVar35 = param_5[1];
    uVar29 = 0;
    if (0 < (longlong)uVar35) {
      lVar27 = 0;
      lVar39 = 0;
      do {
        uVar33 = 0;
        lVar28 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar38 = 0;
            uVar44 = 0xffff;
            uVar41 = 0xffff;
            lVar40 = 0;
            lVar36 = 0;
            if (0 < (longlong)uVar45) {
              lVar1 = param_1 + lVar39 + lVar28;
              do {
                if (0 < (longlong)uVar34) {
                  if ((longlong)uVar34 < 8) {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = uVar34 & 0xfffffffffffffff8;
                    lVar2 = lVar1 + lVar36;
                    auVar48._8_4_ = 0xffffffff;
                    auVar48._0_8_ = 0xffffffffffffffff;
                    auVar48._12_4_ = 0xffffffff;
                    uVar50 = CONCAT22((short)uVar44,(short)uVar44);
                    uVar30 = 0;
                    auVar51._0_8_ = CONCAT44(uVar50,uVar50);
                    auVar51._8_8_ = auVar51._0_8_;
                    do {
                      uVar3 = *(ulonglong *)(uVar30 + param_7 + lVar40);
                      cVar58 = (char)(uVar3 >> 0x38);
                      auVar5._8_6_ = 0;
                      auVar5._0_8_ = uVar3;
                      auVar5[0xe] = cVar58;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar3;
                      auVar6[0xc] = (char)(uVar3 >> 0x30);
                      auVar6._13_2_ = auVar5._13_2_;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar3;
                      auVar7._12_3_ = auVar6._12_3_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar3;
                      auVar8[10] = (char)(uVar3 >> 0x28);
                      auVar8._11_4_ = auVar7._11_4_;
                      auVar9._8_2_ = 0;
                      auVar9._0_8_ = uVar3;
                      auVar9._10_5_ = auVar8._10_5_;
                      auVar10[8] = (char)(uVar3 >> 0x20);
                      auVar10._0_8_ = uVar3;
                      auVar10._9_6_ = auVar9._9_6_;
                      auVar11._7_8_ = 0;
                      auVar11._0_7_ = auVar10._8_7_;
                      Var12 = CONCAT81(SUB158(auVar11 << 0x40,7),(char)(uVar3 >> 0x18));
                      auVar15._9_6_ = 0;
                      auVar15._0_9_ = Var12;
                      auVar13._1_10_ = SUB1510(auVar15 << 0x30,5);
                      auVar13[0] = (char)(uVar3 >> 0x10);
                      auVar16._11_4_ = 0;
                      auVar16._0_11_ = auVar13;
                      auVar14._1_12_ = SUB1512(auVar16 << 0x20,3);
                      auVar14[0] = (char)(uVar3 >> 8);
                      auVar55._0_2_ = -(ushort)((uVar3 & 0xff) == 0);
                      auVar55._2_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar55._4_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar55._6_2_ = -(ushort)((short)Var12 == 0);
                      auVar55._8_2_ = -(ushort)(auVar10._8_2_ == 0);
                      auVar55._10_2_ = -(ushort)(auVar8._10_2_ == 0);
                      auVar55._12_2_ = -(ushort)(auVar6._12_2_ == 0);
                      auVar55._14_2_ = -(ushort)(cVar58 == '\0');
                      auVar55 = auVar55 ^ auVar48;
                      if ((auVar55 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar54 = 0;
                      }
                      else {
                        sVar54 = *(short *)(lVar2 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar57 = 0;
                      }
                      else {
                        sVar57 = *(short *)(lVar2 + 2 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar25 = 0;
                      }
                      else {
                        sVar25 = *(short *)(lVar2 + 4 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar2 + 6 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar32 = 0;
                      }
                      else {
                        sVar32 = *(short *)(lVar2 + 8 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar2 + 10 + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar2 + 0xc + uVar30 * 2);
                      }
                      if ((auVar55 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar46 = 0;
                      }
                      else {
                        sVar46 = *(short *)(lVar2 + 0xe + uVar30 * 2);
                      }
                      auVar52._2_2_ = sVar57;
                      auVar52._0_2_ = sVar54;
                      auVar52._6_2_ = sVar26;
                      auVar52._4_2_ = sVar25;
                      auVar52._10_2_ = sVar37;
                      auVar52._8_2_ = sVar32;
                      auVar52._14_2_ = sVar46;
                      auVar52._12_2_ = sVar42;
                      auVar59._0_2_ =
                           -(ushort)((short)(auVar51._0_2_ - sVar17) < (short)(sVar54 - sVar17));
                      auVar59._2_2_ =
                           -(ushort)((short)(auVar51._2_2_ - sVar18) < (short)(sVar57 - sVar18));
                      auVar59._4_2_ =
                           -(ushort)((short)(auVar51._4_2_ - sVar19) < (short)(sVar25 - sVar19));
                      auVar59._6_2_ =
                           -(ushort)((short)(auVar51._6_2_ - sVar20) < (short)(sVar26 - sVar20));
                      auVar59._8_2_ =
                           -(ushort)((short)(auVar51._8_2_ - sVar21) < (short)(sVar32 - sVar21));
                      auVar59._10_2_ =
                           -(ushort)((short)(auVar51._10_2_ - sVar22) < (short)(sVar37 - sVar22));
                      auVar59._12_2_ =
                           -(ushort)((short)(auVar51._12_2_ - sVar23) < (short)(sVar42 - sVar23));
                      auVar59._14_2_ =
                           -(ushort)((short)(auVar51._14_2_ - sVar24) < (short)(sVar46 - sVar24));
                      uVar30 = uVar30 + 8;
                      auVar51 = (auVar59 & (auVar51 ^ auVar52) ^ auVar52) & auVar55 |
                                ~auVar55 & auVar51;
                    } while (uVar30 < uVar31);
                    auVar49._0_8_ = auVar51._8_8_;
                    auVar49._8_4_ = auVar51._0_4_;
                    auVar49._12_4_ = auVar51._0_4_;
                    sVar54 = auVar51._0_2_;
                    sVar57 = auVar51._2_2_;
                    auVar56._0_2_ =
                         -(ushort)((short)(auVar51._8_2_ - sVar17) < (short)(sVar54 - sVar17));
                    auVar56._2_2_ =
                         -(ushort)((short)(auVar51._10_2_ - sVar18) < (short)(sVar57 - sVar18));
                    auVar56._4_2_ =
                         -(ushort)((short)(auVar51._12_2_ - sVar19) <
                                  (short)(auVar51._4_2_ - sVar19));
                    auVar56._6_2_ =
                         -(ushort)((short)(auVar51._14_2_ - sVar20) <
                                  (short)(auVar51._6_2_ - sVar20));
                    auVar56._8_2_ =
                         -(ushort)((short)(sVar54 - sVar21) < (short)(auVar51._8_2_ - sVar21));
                    auVar56._10_2_ =
                         -(ushort)((short)(sVar57 - sVar22) < (short)(auVar51._10_2_ - sVar22));
                    auVar56._12_2_ =
                         -(ushort)((short)(sVar54 - sVar23) < (short)(auVar51._12_2_ - sVar23));
                    auVar56._14_2_ =
                         -(ushort)((short)(sVar57 - sVar24) < (short)(auVar51._14_2_ - sVar24));
                    auVar51 = auVar56 & (auVar49 ^ auVar51) ^ auVar51;
                    auVar53._0_12_ = auVar51._4_12_;
                    auVar53._12_4_ = auVar51._0_4_;
                    auVar47._0_2_ =
                         -(ushort)((short)(auVar51._4_2_ - sVar17) < (short)(auVar51._0_2_ - sVar17)
                                  );
                    auVar47._2_2_ =
                         -(ushort)((short)(auVar51._6_2_ - sVar18) < (short)(auVar51._2_2_ - sVar18)
                                  );
                    auVar47._4_4_ = 0;
                    auVar47._8_2_ =
                         -(ushort)((short)(auVar51._12_2_ - sVar21) <
                                  (short)(auVar51._8_2_ - sVar21));
                    auVar47._10_2_ =
                         -(ushort)((short)(auVar51._14_2_ - sVar22) <
                                  (short)(auVar51._10_2_ - sVar22));
                    auVar47._12_2_ =
                         -(ushort)((short)(auVar51._0_2_ - sVar23) <
                                  (short)(auVar51._12_2_ - sVar23));
                    auVar47._14_2_ =
                         -(ushort)((short)(auVar51._2_2_ - sVar24) <
                                  (short)(auVar51._14_2_ - sVar24));
                    auVar51 = auVar47 & (auVar53 ^ auVar51) ^ auVar51;
                    uVar44 = (uint)(ushort)-(ushort)((short)(auVar51._2_2_ - sVar17) <
                                                    (short)(auVar51._0_2_ - sVar17)) &
                             (auVar51._2_4_ ^ auVar51._0_4_) ^ auVar51._0_4_;
                  }
                  if (uVar31 < uVar34) {
                    lVar2 = lVar1 + lVar36;
                    do {
                      if (*(char *)(uVar31 + param_7 + lVar40) != '\0') {
                        uVar43 = (ushort)uVar44;
                        uVar44 = uVar44 & 0xffff;
                        if (*(ushort *)(lVar2 + uVar31 * 2) < uVar43) {
                          uVar44 = (uint)*(ushort *)(lVar2 + uVar31 * 2);
                        }
                      }
                      uVar31 = uVar31 + 1;
                    } while (uVar31 < uVar34);
                  }
                }
                uVar41 = (undefined2)uVar44;
                uVar38 = uVar38 + 1;
                lVar40 = lVar40 + uVar34;
                lVar36 = lVar36 + param_2 * 2;
              } while (uVar38 < uVar45);
            }
            uVar33 = uVar33 + 1;
            *(undefined2 *)(lVar28 + param_3 + lVar27) = uVar41;
            lVar28 = lVar28 + 2;
          } while (uVar33 < uVar4);
        }
        uVar29 = uVar29 + 1;
        lVar27 = lVar27 + (param_4 >> 1) * 2;
        lVar39 = lVar39 + param_2 * 2;
      } while (uVar29 < uVar35);
    }
  }
  return;
}

