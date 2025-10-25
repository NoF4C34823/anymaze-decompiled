
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140396ae0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  ulonglong uVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  unkuint9 Var9;
  undefined1 auVar10 [11];
  undefined1 auVar11 [13];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  short sVar25;
  ulonglong uVar26;
  short sVar27;
  ulonglong uVar28;
  short sVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  short sVar33;
  longlong lVar34;
  longlong lVar35;
  undefined2 uVar36;
  ushort uVar37;
  uint uVar38;
  short sVar39;
  longlong lVar40;
  longlong lVar41;
  short sVar42;
  longlong lVar43;
  ulonglong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  short sVar52;
  short sVar55;
  char cVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  
  sVar21 = _UNK_143089d8e;
  sVar20 = _UNK_143089d8c;
  sVar19 = _UNK_143089d8a;
  sVar18 = _UNK_143089d88;
  sVar17 = _UNK_143089d86;
  sVar16 = _UNK_143089d84;
  sVar15 = _UNK_143089d82;
  sVar14 = _DAT_143089d80;
  lVar40 = (longlong)param_2 >> 1;
  lVar34 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar26 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar22 = (longlong)((int)param_6 + -1 >> 1);
  lVar23 = (lVar40 * lVar34 + lVar22) * -2 + param_1;
  if (param_7 == 0) {
    lVar43 = 0;
    lVar34 = (longlong)param_6._4_4_ + -1;
    lVar22 = param_9;
    if (lVar34 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_140402380(lVar23,lVar22,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar43 = lVar43 + 1;
        lVar23 = lVar23 + lVar40 * 2;
        lVar22 = lVar22 + uVar26 * 2;
      } while (lVar43 < lVar34);
    }
    lVar43 = 0;
    if (0 < param_5._4_4_) {
      do {
        FUN_140402380(lVar23,lVar22,(longlong)(int)param_5,(longlong)(int)param_6,1);
        FUN_14040bbe0(param_9,uVar26,param_3,(longlong)(int)param_5,(longlong)param_6._4_4_);
        lVar34 = lVar34 + 1;
        lVar43 = lVar43 + 1;
        lVar22 = lVar22 + uVar26 * 2;
        if (param_6._4_4_ <= lVar34) {
          lVar34 = 0;
          lVar22 = param_9;
        }
        lVar23 = lVar23 + lVar40 * 2;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
      } while (lVar43 < param_5._4_4_);
    }
  }
  else {
    uVar26 = 0;
    if (0 < param_5._4_4_) {
      lVar23 = lVar40 * 2;
      lVar22 = lVar22 * -2;
      lVar34 = lVar34 * lVar40 * -2;
      param_1 = param_1 + lVar40 * -2;
      lVar43 = 0;
      lVar40 = 0;
      do {
        uVar30 = 0;
        if (0 < (int)param_5) {
          do {
            uVar28 = 0;
            uVar38 = 0xffff;
            uVar36 = 0xffff;
            lVar35 = 0;
            lVar32 = 0;
            if (0 < param_6._4_4_) {
              lVar24 = uVar30 * 2 + param_1 + lVar23 + lVar22 + lVar34 + lVar40;
              do {
                uVar44 = (ulonglong)(int)param_6;
                if (0 < (longlong)uVar44) {
                  if ((longlong)uVar44 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar44 & 0xfffffffffffffff8;
                    uVar31 = 0;
                    uVar48 = CONCAT22((short)uVar38,(short)uVar38);
                    auVar49._0_8_ = CONCAT44(uVar48,uVar48);
                    auVar46._8_4_ = 0xffffffff;
                    auVar46._0_8_ = 0xffffffffffffffff;
                    auVar46._12_4_ = 0xffffffff;
                    auVar49._8_8_ = auVar49._0_8_;
                    lVar41 = lVar22 + lVar23 + param_1 + lVar34 + lVar40 + uVar30 * 2 + lVar32;
                    do {
                      uVar1 = *(ulonglong *)(uVar31 + param_7 + lVar35);
                      cVar56 = (char)(uVar1 >> 0x38);
                      auVar2._8_6_ = 0;
                      auVar2._0_8_ = uVar1;
                      auVar2[0xe] = cVar56;
                      auVar3._8_4_ = 0;
                      auVar3._0_8_ = uVar1;
                      auVar3[0xc] = (char)(uVar1 >> 0x30);
                      auVar3._13_2_ = auVar2._13_2_;
                      auVar4._8_4_ = 0;
                      auVar4._0_8_ = uVar1;
                      auVar4._12_3_ = auVar3._12_3_;
                      auVar5._8_2_ = 0;
                      auVar5._0_8_ = uVar1;
                      auVar5[10] = (char)(uVar1 >> 0x28);
                      auVar5._11_4_ = auVar4._11_4_;
                      auVar6._8_2_ = 0;
                      auVar6._0_8_ = uVar1;
                      auVar6._10_5_ = auVar5._10_5_;
                      auVar7[8] = (char)(uVar1 >> 0x20);
                      auVar7._0_8_ = uVar1;
                      auVar7._9_6_ = auVar6._9_6_;
                      auVar8._7_8_ = 0;
                      auVar8._0_7_ = auVar7._8_7_;
                      Var9 = CONCAT81(SUB158(auVar8 << 0x40,7),(char)(uVar1 >> 0x18));
                      auVar12._9_6_ = 0;
                      auVar12._0_9_ = Var9;
                      auVar10._1_10_ = SUB1510(auVar12 << 0x30,5);
                      auVar10[0] = (char)(uVar1 >> 0x10);
                      auVar13._11_4_ = 0;
                      auVar13._0_11_ = auVar10;
                      auVar11._1_12_ = SUB1512(auVar13 << 0x20,3);
                      auVar11[0] = (char)(uVar1 >> 8);
                      auVar53._0_2_ = -(ushort)((uVar1 & 0xff) == 0);
                      auVar53._2_2_ = -(ushort)(auVar11._0_2_ == 0);
                      auVar53._4_2_ = -(ushort)(auVar10._0_2_ == 0);
                      auVar53._6_2_ = -(ushort)((short)Var9 == 0);
                      auVar53._8_2_ = -(ushort)(auVar7._8_2_ == 0);
                      auVar53._10_2_ = -(ushort)(auVar5._10_2_ == 0);
                      auVar53._12_2_ = -(ushort)(auVar3._12_2_ == 0);
                      auVar53._14_2_ = -(ushort)(cVar56 == '\0');
                      auVar53 = auVar53 ^ auVar46;
                      if ((auVar53 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar52 = 0;
                      }
                      else {
                        sVar52 = *(short *)(lVar24 + lVar32 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar55 = 0;
                      }
                      else {
                        sVar55 = *(short *)(lVar41 + 2 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar25 = 0;
                      }
                      else {
                        sVar25 = *(short *)(lVar41 + 4 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar27 = 0;
                      }
                      else {
                        sVar27 = *(short *)(lVar41 + 6 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar41 + 8 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar33 = 0;
                      }
                      else {
                        sVar33 = *(short *)(lVar41 + 10 + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar41 + 0xc + uVar31 * 2);
                      }
                      if ((auVar53 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar41 + 0xe + uVar31 * 2);
                      }
                      auVar50._2_2_ = sVar55;
                      auVar50._0_2_ = sVar52;
                      auVar50._6_2_ = sVar27;
                      auVar50._4_2_ = sVar25;
                      auVar50._10_2_ = sVar33;
                      auVar50._8_2_ = sVar29;
                      auVar50._14_2_ = sVar42;
                      auVar50._12_2_ = sVar39;
                      auVar57._0_2_ =
                           -(ushort)((short)(auVar49._0_2_ - sVar14) < (short)(sVar52 - sVar14));
                      auVar57._2_2_ =
                           -(ushort)((short)(auVar49._2_2_ - sVar15) < (short)(sVar55 - sVar15));
                      auVar57._4_2_ =
                           -(ushort)((short)(auVar49._4_2_ - sVar16) < (short)(sVar25 - sVar16));
                      auVar57._6_2_ =
                           -(ushort)((short)(auVar49._6_2_ - sVar17) < (short)(sVar27 - sVar17));
                      auVar57._8_2_ =
                           -(ushort)((short)(auVar49._8_2_ - sVar18) < (short)(sVar29 - sVar18));
                      auVar57._10_2_ =
                           -(ushort)((short)(auVar49._10_2_ - sVar19) < (short)(sVar33 - sVar19));
                      auVar57._12_2_ =
                           -(ushort)((short)(auVar49._12_2_ - sVar20) < (short)(sVar39 - sVar20));
                      auVar57._14_2_ =
                           -(ushort)((short)(auVar49._14_2_ - sVar21) < (short)(sVar42 - sVar21));
                      uVar31 = uVar31 + 8;
                      auVar49 = (auVar57 & (auVar49 ^ auVar50) ^ auVar50) & auVar53 |
                                ~auVar53 & auVar49;
                    } while (uVar31 < uVar44);
                    auVar47._0_8_ = auVar49._8_8_;
                    auVar47._8_4_ = auVar49._0_4_;
                    auVar47._12_4_ = auVar49._0_4_;
                    sVar52 = auVar49._0_2_;
                    sVar55 = auVar49._2_2_;
                    auVar54._0_2_ =
                         -(ushort)((short)(auVar49._8_2_ - sVar14) < (short)(sVar52 - sVar14));
                    auVar54._2_2_ =
                         -(ushort)((short)(auVar49._10_2_ - sVar15) < (short)(sVar55 - sVar15));
                    auVar54._4_2_ =
                         -(ushort)((short)(auVar49._12_2_ - sVar16) <
                                  (short)(auVar49._4_2_ - sVar16));
                    auVar54._6_2_ =
                         -(ushort)((short)(auVar49._14_2_ - sVar17) <
                                  (short)(auVar49._6_2_ - sVar17));
                    auVar54._8_2_ =
                         -(ushort)((short)(sVar52 - sVar18) < (short)(auVar49._8_2_ - sVar18));
                    auVar54._10_2_ =
                         -(ushort)((short)(sVar55 - sVar19) < (short)(auVar49._10_2_ - sVar19));
                    auVar54._12_2_ =
                         -(ushort)((short)(sVar52 - sVar20) < (short)(auVar49._12_2_ - sVar20));
                    auVar54._14_2_ =
                         -(ushort)((short)(sVar55 - sVar21) < (short)(auVar49._14_2_ - sVar21));
                    auVar49 = auVar54 & (auVar47 ^ auVar49) ^ auVar49;
                    auVar51._0_12_ = auVar49._4_12_;
                    auVar51._12_4_ = auVar49._0_4_;
                    auVar45._0_2_ =
                         -(ushort)((short)(auVar49._4_2_ - sVar14) < (short)(auVar49._0_2_ - sVar14)
                                  );
                    auVar45._2_2_ =
                         -(ushort)((short)(auVar49._6_2_ - sVar15) < (short)(auVar49._2_2_ - sVar15)
                                  );
                    auVar45._4_4_ = 0;
                    auVar45._8_2_ =
                         -(ushort)((short)(auVar49._12_2_ - sVar18) <
                                  (short)(auVar49._8_2_ - sVar18));
                    auVar45._10_2_ =
                         -(ushort)((short)(auVar49._14_2_ - sVar19) <
                                  (short)(auVar49._10_2_ - sVar19));
                    auVar45._12_2_ =
                         -(ushort)((short)(auVar49._0_2_ - sVar20) <
                                  (short)(auVar49._12_2_ - sVar20));
                    auVar45._14_2_ =
                         -(ushort)((short)(auVar49._2_2_ - sVar21) <
                                  (short)(auVar49._14_2_ - sVar21));
                    auVar49 = auVar45 & (auVar51 ^ auVar49) ^ auVar49;
                    uVar38 = (uint)(ushort)-(ushort)((short)(auVar49._2_2_ - sVar14) <
                                                    (short)(auVar49._0_2_ - sVar14)) &
                             (auVar49._2_4_ ^ auVar49._0_4_) ^ auVar49._0_4_;
                  }
                  if (uVar44 < (ulonglong)(longlong)(int)param_6) {
                    lVar41 = lVar24 + lVar32;
                    do {
                      if (*(char *)(uVar44 + param_7 + lVar35) != '\0') {
                        uVar37 = (ushort)uVar38;
                        uVar38 = uVar38 & 0xffff;
                        if (*(ushort *)(lVar41 + uVar44 * 2) < uVar37) {
                          uVar38 = (uint)*(ushort *)(lVar41 + uVar44 * 2);
                        }
                      }
                      uVar44 = uVar44 + 1;
                    } while (uVar44 < (ulonglong)(longlong)(int)param_6);
                  }
                }
                uVar36 = (undefined2)uVar38;
                uVar28 = uVar28 + 1;
                lVar35 = lVar35 + (int)param_6;
                lVar32 = lVar32 + lVar23;
              } while (uVar28 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(undefined2 *)(param_3 + lVar43 + uVar30 * 2) = uVar36;
            uVar30 = uVar30 + 1;
          } while (uVar30 < (ulonglong)(longlong)(int)param_5);
        }
        uVar26 = uVar26 + 1;
        lVar43 = lVar43 + ((longlong)param_4 >> 1) * 2;
        lVar40 = lVar40 + lVar23;
      } while (uVar26 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

