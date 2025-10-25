
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140149960(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort uVar3;
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
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  ulonglong uVar25;
  short sVar26;
  longlong lVar27;
  short sVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  short sVar31;
  ulonglong uVar32;
  longlong lVar33;
  short sVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  short sVar37;
  longlong lVar38;
  short sVar39;
  short sVar40;
  longlong lVar41;
  undefined2 uVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
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
  
  sVar23 = _UNK_143087c0e;
  sVar22 = _UNK_143087c0c;
  sVar21 = _UNK_143087c0a;
  sVar20 = _UNK_143087c08;
  sVar19 = _UNK_143087c06;
  sVar18 = _UNK_143087c04;
  sVar17 = _UNK_143087c02;
  sVar16 = _DAT_143087c00;
  uVar25 = (ulonglong)param_6._4_4_;
  lVar44 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar38 = (longlong)param_2 >> 1;
  uVar29 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  uVar35 = (ulonglong)(int)param_6;
  lVar46 = (longlong)((int)param_6 + -1 >> 1);
  lVar27 = (lVar44 * lVar38 + lVar46) * -2 + param_1;
  if (param_7 == 0) {
    lVar47 = 0;
    lVar46 = uVar25 - 1;
    lVar44 = param_9;
    if (lVar46 != 0 && 0 < (longlong)uVar25) {
      do {
        FUN_14034a600(lVar27,lVar44,(longlong)(int)param_5,uVar35,1);
        lVar47 = lVar47 + 1;
        lVar27 = lVar27 + lVar38 * 2;
        lVar44 = lVar44 + uVar29 * 2;
      } while (lVar47 < lVar46);
    }
    lVar47 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_14034a600(lVar27,lVar44,(longlong)(int)param_5,uVar35,1);
        FUN_140355860(param_9,uVar29,param_3,(longlong)(int)param_5,uVar25);
        lVar46 = lVar46 + 1;
        lVar44 = lVar44 + uVar29 * 2;
        if ((longlong)uVar25 <= lVar46) {
          lVar44 = param_9;
        }
        lVar27 = lVar27 + lVar38 * 2;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        if ((longlong)uVar25 <= lVar46) {
          lVar46 = 0;
        }
        lVar47 = lVar47 + 1;
      } while (lVar47 < param_5._4_4_);
    }
  }
  else {
    uVar29 = 0;
    if (0 < param_5._4_4_) {
      lVar46 = lVar46 * -2;
      lVar44 = lVar44 * lVar38 * -2;
      param_1 = param_1 + lVar38 * -2;
      lVar27 = 0;
      lVar47 = 0;
      do {
        uVar36 = 0;
        if (0 < (int)param_5) {
          do {
            uVar32 = 0;
            uVar43 = 0xffff;
            uVar42 = 0xffff;
            lVar41 = 0;
            lVar33 = 0;
            if (0 < (longlong)uVar25) {
              lVar1 = param_1 + lVar38 * 2 + lVar46 + lVar44 + lVar47 + uVar36 * 2;
              do {
                if (0 < (longlong)uVar35) {
                  if ((longlong)uVar35 < 8) {
                    uVar48 = 0;
                  }
                  else {
                    uVar48 = uVar35 & 0xfffffffffffffff8;
                    uVar30 = 0;
                    auVar50._8_4_ = 0xffffffff;
                    auVar50._0_8_ = 0xffffffffffffffff;
                    auVar50._12_4_ = 0xffffffff;
                    uVar51 = CONCAT22((short)uVar43,(short)uVar43);
                    auVar52._0_8_ = CONCAT44(uVar51,uVar51);
                    auVar52._8_8_ = auVar52._0_8_;
                    lVar45 = lVar46 + lVar38 * 2 + param_1 + lVar44 + lVar47 + uVar36 * 2 + lVar33;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar41 + uVar30);
                      cVar56 = (char)(uVar2 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar2;
                      auVar4[0xe] = cVar56;
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
                      auVar54._0_2_ = -(ushort)((uVar2 & 0xff) == 0);
                      auVar54._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar54._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar54._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar54._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar54._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar54._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar54._14_2_ = -(ushort)(cVar56 == '\0');
                      auVar54 = auVar54 ^ auVar50;
                      if ((auVar54 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar1 + lVar33 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar24 = 0;
                      }
                      else {
                        sVar24 = *(short *)(lVar45 + 2 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar45 + 4 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar26 = 0;
                      }
                      else {
                        sVar26 = *(short *)(lVar45 + 6 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar45 + 8 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar45 + 10 + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar45 + 0xc + uVar30 * 2);
                      }
                      if ((auVar54 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar45 + 0xe + uVar30 * 2);
                      }
                      auVar53._2_2_ = sVar24;
                      auVar53._0_2_ = sVar39;
                      auVar53._6_2_ = sVar26;
                      auVar53._4_2_ = sVar28;
                      auVar53._10_2_ = sVar34;
                      auVar53._8_2_ = sVar31;
                      auVar53._14_2_ = sVar40;
                      auVar53._12_2_ = sVar37;
                      auVar57._0_2_ =
                           -(ushort)((short)(auVar52._0_2_ - sVar16) < (short)(sVar39 - sVar16));
                      auVar57._2_2_ =
                           -(ushort)((short)(auVar52._2_2_ - sVar17) < (short)(sVar24 - sVar17));
                      auVar57._4_2_ =
                           -(ushort)((short)(auVar52._4_2_ - sVar18) < (short)(sVar28 - sVar18));
                      auVar57._6_2_ =
                           -(ushort)((short)(auVar52._6_2_ - sVar19) < (short)(sVar26 - sVar19));
                      auVar57._8_2_ =
                           -(ushort)((short)(auVar52._8_2_ - sVar20) < (short)(sVar31 - sVar20));
                      auVar57._10_2_ =
                           -(ushort)((short)(auVar52._10_2_ - sVar21) < (short)(sVar34 - sVar21));
                      auVar57._12_2_ =
                           -(ushort)((short)(auVar52._12_2_ - sVar22) < (short)(sVar37 - sVar22));
                      auVar57._14_2_ =
                           -(ushort)((short)(auVar52._14_2_ - sVar23) < (short)(sVar40 - sVar23));
                      uVar30 = uVar30 + 8;
                      auVar52 = (auVar57 & (auVar52 ^ auVar53) ^ auVar53) & auVar54 |
                                ~auVar54 & auVar52;
                    } while (uVar30 < uVar48);
                    auVar55._0_2_ =
                         -(ushort)((short)(auVar52._8_2_ - sVar16) < (short)(auVar52._0_2_ - sVar16)
                                  );
                    auVar55._2_2_ =
                         -(ushort)((short)(auVar52._10_2_ - sVar17) <
                                  (short)(auVar52._2_2_ - sVar17));
                    auVar55._4_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar18) <
                                  (short)(auVar52._4_2_ - sVar18));
                    auVar55._6_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar19) <
                                  (short)(auVar52._6_2_ - sVar19));
                    auVar55._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar52._8_2_ - sVar20));
                    auVar55._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar52._10_2_ - sVar21));
                    auVar55._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar52._12_2_ - sVar22));
                    auVar55._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar52._14_2_ - sVar23));
                    auVar52 = auVar55 & (auVar52 >> 0x40 ^ auVar52) ^ auVar52;
                    auVar49._0_2_ =
                         -(ushort)((short)(auVar52._4_2_ - sVar16) < (short)(auVar52._0_2_ - sVar16)
                                  );
                    auVar49._2_2_ =
                         -(ushort)((short)(auVar52._6_2_ - sVar17) < (short)(auVar52._2_2_ - sVar17)
                                  );
                    auVar49._4_4_ = 0;
                    auVar49._8_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar20) <
                                  (short)(auVar52._8_2_ - sVar20));
                    auVar49._10_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar21) <
                                  (short)(auVar52._10_2_ - sVar21));
                    auVar49._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar52._12_2_ - sVar22));
                    auVar49._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar52._14_2_ - sVar23));
                    auVar52 = auVar49 & (auVar52 >> 0x20 ^ auVar52) ^ auVar52;
                    uVar43 = (uint)(ushort)-(ushort)((short)(auVar52._2_2_ - sVar16) <
                                                    (short)(auVar52._0_2_ - sVar16)) &
                             (auVar52._2_4_ ^ auVar52._0_4_) ^ auVar52._0_4_;
                  }
                  if (uVar48 < uVar35) {
                    do {
                      if (*(char *)(uVar48 + param_7 + lVar41) != '\0') {
                        uVar43 = uVar43 & 0xffff;
                        uVar3 = *(ushort *)(lVar1 + lVar33 + uVar48 * 2);
                        if (uVar3 < uVar43) {
                          uVar43 = (uint)uVar3;
                        }
                      }
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar35);
                  }
                }
                uVar42 = (undefined2)uVar43;
                uVar32 = uVar32 + 1;
                lVar41 = lVar41 + uVar35;
                lVar33 = lVar33 + lVar38 * 2;
              } while (uVar32 < uVar25);
            }
            *(undefined2 *)(param_3 + lVar27 + uVar36 * 2) = uVar42;
            uVar36 = uVar36 + 1;
          } while (uVar36 < (ulonglong)(longlong)(int)param_5);
        }
        uVar29 = uVar29 + 1;
        lVar27 = lVar27 + ((longlong)param_4 >> 1) * 2;
        lVar47 = lVar47 + lVar38 * 2;
      } while (uVar29 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

