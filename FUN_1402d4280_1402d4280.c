
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4280(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
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
  ushort uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  short sVar28;
  longlong lVar29;
  longlong lVar30;
  short sVar31;
  ulonglong uVar32;
  longlong lVar33;
  ushort uVar34;
  short sVar35;
  longlong lVar36;
  short sVar37;
  ushort uVar38;
  ulonglong uVar39;
  short sVar40;
  short sVar41;
  ulonglong uVar42;
  ushort uVar43;
  short sVar44;
  ushort uVar45;
  undefined2 uVar46;
  uint uVar47;
  ulonglong uVar48;
  longlong lVar49;
  ushort uVar50;
  longlong lVar51;
  ulonglong uVar52;
  short sVar53;
  ulonglong uVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  char cVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  sVar23 = _UNK_143089bae;
  sVar22 = _UNK_143089bac;
  sVar21 = _UNK_143089baa;
  sVar20 = _UNK_143089ba8;
  sVar19 = _UNK_143089ba6;
  sVar18 = _UNK_143089ba4;
  sVar17 = _UNK_143089ba2;
  sVar16 = _DAT_143089ba0;
  uVar54 = (ulonglong)param_6._4_4_;
  lVar25 = (longlong)(param_6._4_4_ + -1 >> 1);
  lVar29 = (longlong)param_2 >> 1;
  uVar32 = (ulonglong)(int)param_6;
  lVar26 = (longlong)((int)param_6 + -1 >> 1);
  uVar48 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar36 = (lVar25 * lVar29 + lVar26) * -2 + param_1;
  if (param_7 == 0) {
    lVar51 = 0;
    lVar26 = uVar54 - 1;
    lVar25 = param_9;
    if (lVar26 != 0 && 0 < (longlong)uVar54) {
      do {
        FUN_1402c7100(lVar36,lVar25,(longlong)(int)param_5,uVar32,1);
        lVar51 = lVar51 + 1;
        lVar36 = lVar36 + lVar29 * 2;
        lVar25 = lVar25 + uVar48 * 2;
      } while (lVar51 < lVar26);
    }
    uVar52 = 0;
    if (0 < param_5._4_4_) {
      lVar51 = 0;
      do {
        FUN_1402c7100(lVar36,lVar25,(longlong)(int)param_5,uVar32,1);
        uVar39 = 0;
        if (0 < (int)param_5) {
          do {
            uVar38 = 0;
            if (0 < (longlong)uVar54) {
              uVar42 = 0;
              lVar30 = 1;
              lVar33 = 0;
              if (uVar54 >> 3 != 0) {
                do {
                  uVar42 = uVar42 + 1;
                  uVar3 = *(ushort *)(lVar33 + uVar48 * 0xe + param_9 + uVar39 * 2);
                  uVar24 = *(ushort *)(lVar33 + uVar48 * 2 + param_9 + uVar39 * 2);
                  uVar34 = *(ushort *)(lVar33 + uVar48 * 4 + param_9 + uVar39 * 2);
                  uVar43 = *(ushort *)(lVar33 + param_9 + uVar39 * 2);
                  uVar50 = *(ushort *)(lVar33 + uVar48 * 6 + param_9 + uVar39 * 2);
                  if (uVar43 <= uVar38) {
                    uVar43 = uVar38;
                  }
                  uVar45 = *(ushort *)(lVar33 + uVar48 * 8 + param_9 + uVar39 * 2);
                  if (uVar24 <= uVar43) {
                    uVar24 = uVar43;
                  }
                  uVar43 = *(ushort *)(lVar33 + uVar48 * 10 + param_9 + uVar39 * 2);
                  if (uVar34 <= uVar24) {
                    uVar34 = uVar24;
                  }
                  uVar38 = *(ushort *)(lVar33 + uVar48 * 0xc + param_9 + uVar39 * 2);
                  if (uVar50 <= uVar34) {
                    uVar50 = uVar34;
                  }
                  if (uVar45 <= uVar50) {
                    uVar45 = uVar50;
                  }
                  if (uVar43 <= uVar45) {
                    uVar43 = uVar45;
                  }
                  if (uVar38 <= uVar43) {
                    uVar38 = uVar43;
                  }
                  if (uVar38 < uVar3) {
                    uVar38 = uVar3;
                  }
                  lVar33 = lVar33 + uVar48 * 0x10;
                } while (uVar42 < uVar54 >> 3);
                lVar30 = uVar42 * 8 + 1;
              }
              uVar42 = lVar30 - 1;
              lVar30 = uVar48 * uVar42;
              if (uVar42 < uVar54) {
                do {
                  uVar3 = *(ushort *)(param_9 + uVar39 * 2 + lVar30 * 2);
                  if (uVar38 < uVar3) {
                    uVar38 = uVar3;
                  }
                  uVar42 = uVar42 + 1;
                  lVar30 = lVar30 + uVar48;
                } while (uVar42 < uVar54);
              }
            }
            *(ushort *)(param_3 + lVar51 + uVar39 * 2) = uVar38;
            uVar39 = uVar39 + 1;
          } while (uVar39 < (ulonglong)(longlong)(int)param_5);
        }
        lVar26 = lVar26 + 1;
        uVar52 = uVar52 + 1;
        lVar25 = lVar25 + uVar48 * 2;
        if ((longlong)uVar54 <= lVar26) {
          lVar25 = param_9;
        }
        if ((longlong)uVar54 <= lVar26) {
          lVar26 = 0;
        }
        lVar36 = lVar36 + lVar29 * 2;
        lVar51 = lVar51 + ((longlong)param_4 >> 1) * 2;
      } while (uVar52 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar48 = 0;
    if (0 < param_5._4_4_) {
      lVar26 = lVar26 * -2;
      lVar25 = lVar25 * lVar29 * -2;
      param_1 = param_1 + lVar29 * -2;
      lVar51 = 0;
      lVar36 = 0;
      do {
        uVar52 = 0;
        if (0 < (int)param_5) {
          do {
            uVar39 = 0;
            uVar47 = 0;
            uVar46 = 0;
            lVar33 = 0;
            lVar30 = 0;
            if (0 < (longlong)uVar54) {
              lVar1 = param_1 + lVar29 * 2 + lVar26 + lVar25 + lVar36 + uVar52 * 2;
              do {
                if (0 < (longlong)uVar32) {
                  if ((longlong)uVar32 < 8) {
                    uVar42 = 0;
                  }
                  else {
                    uVar42 = uVar32 & 0xfffffffffffffff8;
                    uVar27 = 0;
                    auVar59._8_4_ = 0xffffffff;
                    auVar59._0_8_ = 0xffffffffffffffff;
                    auVar59._12_4_ = 0xffffffff;
                    uVar55 = CONCAT22((short)uVar47,(short)uVar47);
                    auVar56._0_8_ = CONCAT44(uVar55,uVar55);
                    auVar56._8_8_ = auVar56._0_8_;
                    lVar49 = lVar26 + lVar29 * 2 + param_1 + lVar25 + lVar36 + uVar52 * 2 + lVar30;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar33 + uVar27);
                      cVar60 = (char)(uVar2 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar2;
                      auVar4[0xe] = cVar60;
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
                      auVar57._0_2_ = -(ushort)((uVar2 & 0xff) == 0);
                      auVar57._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar57._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar57._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar57._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar57._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar57._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar57._14_2_ = -(ushort)(cVar60 == '\0');
                      auVar57 = auVar57 ^ auVar59;
                      if ((auVar57 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar1 + lVar30 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar49 + 2 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar49 + 4 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar35 = 0;
                      }
                      else {
                        sVar35 = *(short *)(lVar49 + 6 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar49 + 8 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar49 + 10 + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar41 = 0;
                      }
                      else {
                        sVar41 = *(short *)(lVar49 + 0xc + uVar27 * 2);
                      }
                      if ((auVar57 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar53 = 0;
                      }
                      else {
                        sVar53 = *(short *)(lVar49 + 0xe + uVar27 * 2);
                      }
                      auVar61._2_2_ = sVar28;
                      auVar61._0_2_ = sVar44;
                      auVar61._6_2_ = sVar35;
                      auVar61._4_2_ = sVar31;
                      auVar61._10_2_ = sVar40;
                      auVar61._8_2_ = sVar37;
                      auVar61._14_2_ = sVar53;
                      auVar61._12_2_ = sVar41;
                      uVar27 = uVar27 + 8;
                      auVar62._0_2_ =
                           -(ushort)((short)(auVar56._0_2_ - sVar16) < (short)(sVar44 - sVar16));
                      auVar62._2_2_ =
                           -(ushort)((short)(auVar56._2_2_ - sVar17) < (short)(sVar28 - sVar17));
                      auVar62._4_2_ =
                           -(ushort)((short)(auVar56._4_2_ - sVar18) < (short)(sVar31 - sVar18));
                      auVar62._6_2_ =
                           -(ushort)((short)(auVar56._6_2_ - sVar19) < (short)(sVar35 - sVar19));
                      auVar62._8_2_ =
                           -(ushort)((short)(auVar56._8_2_ - sVar20) < (short)(sVar37 - sVar20));
                      auVar62._10_2_ =
                           -(ushort)((short)(auVar56._10_2_ - sVar21) < (short)(sVar40 - sVar21));
                      auVar62._12_2_ =
                           -(ushort)((short)(auVar56._12_2_ - sVar22) < (short)(sVar41 - sVar22));
                      auVar62._14_2_ =
                           -(ushort)((short)(auVar56._14_2_ - sVar23) < (short)(sVar53 - sVar23));
                      auVar56 = (auVar62 & (auVar61 ^ auVar56) ^ auVar56) & auVar57 |
                                ~auVar57 & auVar56;
                    } while (uVar27 < uVar42);
                    auVar58._0_2_ =
                         -(ushort)((short)(auVar56._8_2_ - sVar16) < (short)(auVar56._0_2_ - sVar16)
                                  );
                    auVar58._2_2_ =
                         -(ushort)((short)(auVar56._10_2_ - sVar17) <
                                  (short)(auVar56._2_2_ - sVar17));
                    auVar58._4_2_ =
                         -(ushort)((short)(auVar56._12_2_ - sVar18) <
                                  (short)(auVar56._4_2_ - sVar18));
                    auVar58._6_2_ =
                         -(ushort)((short)(auVar56._14_2_ - sVar19) <
                                  (short)(auVar56._6_2_ - sVar19));
                    auVar58._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar56._8_2_ - sVar20));
                    auVar58._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar56._10_2_ - sVar21));
                    auVar58._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar56._12_2_ - sVar22));
                    auVar58._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar56._14_2_ - sVar23));
                    auVar59 = auVar58 & (auVar56 ^ auVar56 >> 0x40) ^ auVar56 >> 0x40;
                    auVar63._0_2_ =
                         -(ushort)((short)(auVar59._4_2_ - sVar16) < (short)(auVar59._0_2_ - sVar16)
                                  );
                    auVar63._2_2_ =
                         -(ushort)((short)(auVar59._6_2_ - sVar17) < (short)(auVar59._2_2_ - sVar17)
                                  );
                    auVar63._4_4_ = 0;
                    auVar63._8_2_ =
                         -(ushort)((short)(auVar59._12_2_ - sVar20) <
                                  (short)(auVar59._8_2_ - sVar20));
                    auVar63._10_2_ =
                         -(ushort)((short)(auVar59._14_2_ - sVar21) <
                                  (short)(auVar59._10_2_ - sVar21));
                    auVar63._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar59._12_2_ - sVar22));
                    auVar63._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar59._14_2_ - sVar23));
                    auVar59 = auVar63 & (auVar59 ^ auVar59 >> 0x20) ^ auVar59 >> 0x20;
                    uVar47 = (uint)(ushort)-(ushort)((short)(auVar59._2_2_ - sVar16) <
                                                    (short)(auVar59._0_2_ - sVar16)) &
                             (auVar59._0_4_ ^ auVar59._2_4_) ^ auVar59._2_4_;
                  }
                  if (uVar42 < uVar32) {
                    do {
                      if (*(char *)(uVar42 + param_7 + lVar33) != '\0') {
                        uVar47 = uVar47 & 0xffff;
                        uVar38 = *(ushort *)(lVar1 + lVar30 + uVar42 * 2);
                        if (uVar47 < uVar38) {
                          uVar47 = (uint)uVar38;
                        }
                      }
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < uVar32);
                  }
                }
                uVar46 = (undefined2)uVar47;
                uVar39 = uVar39 + 1;
                lVar33 = lVar33 + uVar32;
                lVar30 = lVar30 + lVar29 * 2;
              } while (uVar39 < uVar54);
            }
            *(undefined2 *)(param_3 + lVar51 + uVar52 * 2) = uVar46;
            uVar52 = uVar52 + 1;
          } while (uVar52 < (ulonglong)(longlong)(int)param_5);
        }
        uVar48 = uVar48 + 1;
        lVar51 = lVar51 + ((longlong)param_4 >> 1) * 2;
        lVar36 = lVar36 + lVar29 * 2;
      } while (uVar48 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

