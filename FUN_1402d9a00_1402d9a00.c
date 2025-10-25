
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9a00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort uVar3;
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
  ushort uVar26;
  short sVar27;
  ulonglong uVar28;
  longlong lVar29;
  short sVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ushort uVar34;
  ushort uVar35;
  short sVar36;
  ushort uVar37;
  ulonglong uVar38;
  ushort uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ushort uVar43;
  short sVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  short sVar47;
  short sVar48;
  undefined2 uVar49;
  short sVar50;
  uint uVar51;
  longlong lVar52;
  longlong lVar53;
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
  
  sVar24 = _UNK_143089bae;
  sVar23 = _UNK_143089bac;
  sVar22 = _UNK_143089baa;
  sVar21 = _UNK_143089ba8;
  sVar20 = _UNK_143089ba6;
  sVar19 = _UNK_143089ba4;
  sVar18 = _UNK_143089ba2;
  sVar17 = _DAT_143089ba0;
  param_2 = param_2 >> 1;
  uVar28 = param_6[1];
  uVar40 = *param_6;
  uVar4 = *param_5;
  param_4 = param_4 >> 1;
  uVar45 = uVar4 + 0xf & 0xfffffffffffffff0;
  param_1 = param_1 + ((longlong)(int)(uVar40 - 1 >> 1) + (int)(uVar28 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar52 = 0;
    lVar31 = param_9;
    if (0 < (longlong)(uVar28 - 1)) {
      while( true ) {
        FUN_1402c7100(param_1,lVar31,uVar4,uVar40,1);
        uVar28 = param_6[1];
        lVar52 = lVar52 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar31 = lVar31 + uVar45 * 2;
        if ((longlong)(uVar28 - 1) <= lVar52) break;
        uVar40 = *param_6;
      }
    }
    lVar52 = uVar28 - 1;
    if (0 < (longlong)param_5[1]) {
      param_1 = param_1 + param_2 * -2;
      lVar42 = 0;
      lVar53 = lVar42;
      do {
        lVar53 = lVar53 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar42 = lVar42 + param_4 * 2;
        FUN_1402c7100(param_1,lVar31,uVar4,*param_6,1);
        uVar28 = param_6[1];
        if (0 < (longlong)uVar4) {
          uVar40 = 0;
          do {
            uVar35 = 0;
            if (0 < (longlong)uVar28) {
              uVar54 = 0;
              lVar29 = 1;
              lVar32 = 0;
              if (uVar28 >> 3 != 0) {
                do {
                  uVar54 = uVar54 + 1;
                  uVar3 = *(ushort *)(lVar32 + uVar45 * 0xe + param_9 + uVar40 * 2);
                  uVar26 = *(ushort *)(lVar32 + uVar45 * 2 + param_9 + uVar40 * 2);
                  uVar34 = *(ushort *)(lVar32 + uVar45 * 4 + param_9 + uVar40 * 2);
                  uVar37 = *(ushort *)(lVar32 + param_9 + uVar40 * 2);
                  uVar43 = *(ushort *)(lVar32 + uVar45 * 6 + param_9 + uVar40 * 2);
                  if (uVar37 <= uVar35) {
                    uVar37 = uVar35;
                  }
                  uVar39 = *(ushort *)(lVar32 + uVar45 * 8 + param_9 + uVar40 * 2);
                  if (uVar26 <= uVar37) {
                    uVar26 = uVar37;
                  }
                  uVar37 = *(ushort *)(lVar32 + uVar45 * 10 + param_9 + uVar40 * 2);
                  if (uVar34 <= uVar26) {
                    uVar34 = uVar26;
                  }
                  uVar35 = *(ushort *)(lVar32 + uVar45 * 0xc + param_9 + uVar40 * 2);
                  if (uVar43 <= uVar34) {
                    uVar43 = uVar34;
                  }
                  if (uVar39 <= uVar43) {
                    uVar39 = uVar43;
                  }
                  if (uVar37 <= uVar39) {
                    uVar37 = uVar39;
                  }
                  if (uVar35 <= uVar37) {
                    uVar35 = uVar37;
                  }
                  if (uVar35 < uVar3) {
                    uVar35 = uVar3;
                  }
                  lVar32 = lVar32 + uVar45 * 0x10;
                } while (uVar54 < uVar28 >> 3);
                lVar29 = uVar54 * 8 + 1;
              }
              uVar54 = lVar29 - 1;
              lVar29 = uVar45 * uVar54;
              if (uVar54 < uVar28) {
                do {
                  uVar3 = *(ushort *)(param_9 + uVar40 * 2 + lVar29 * 2);
                  if (uVar35 < uVar3) {
                    uVar35 = uVar3;
                  }
                  uVar54 = uVar54 + 1;
                  lVar29 = lVar29 + uVar45;
                } while (uVar54 < uVar28);
              }
            }
            *(ushort *)(param_3 + param_4 * -2 + lVar42 + uVar40 * 2) = uVar35;
            uVar40 = uVar40 + 1;
          } while (uVar40 < uVar4);
        }
        lVar52 = lVar52 + 1;
        lVar31 = lVar31 + uVar45 * 2;
        if ((longlong)uVar28 <= lVar52) {
          lVar52 = 0;
          lVar31 = param_9;
        }
      } while (lVar53 < (longlong)param_5[1]);
    }
  }
  else {
    uVar45 = param_5[1];
    uVar54 = 0;
    if (0 < (longlong)uVar45) {
      lVar31 = 0;
      lVar52 = 0;
      do {
        uVar46 = 0;
        lVar42 = 0;
        if (0 < (longlong)uVar4) {
          do {
            uVar33 = 0;
            uVar51 = 0;
            uVar49 = 0;
            lVar29 = 0;
            lVar53 = 0;
            if (0 < (longlong)uVar28) {
              lVar32 = param_1 + lVar52 + lVar42;
              do {
                if (0 < (longlong)uVar40) {
                  if ((longlong)uVar40 < 8) {
                    uVar41 = 0;
                  }
                  else {
                    uVar41 = uVar40 & 0xfffffffffffffff8;
                    uVar38 = 0;
                    auVar59._8_4_ = 0xffffffff;
                    auVar59._0_8_ = 0xffffffffffffffff;
                    auVar59._12_4_ = 0xffffffff;
                    uVar55 = CONCAT22((short)uVar51,(short)uVar51);
                    lVar1 = lVar32 + lVar53;
                    auVar56._0_8_ = CONCAT44(uVar55,uVar55);
                    auVar56._8_8_ = auVar56._0_8_;
                    do {
                      uVar2 = *(ulonglong *)(param_7 + lVar29 + uVar38);
                      cVar60 = (char)(uVar2 >> 0x38);
                      auVar5._8_6_ = 0;
                      auVar5._0_8_ = uVar2;
                      auVar5[0xe] = cVar60;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar2;
                      auVar6[0xc] = (char)(uVar2 >> 0x30);
                      auVar6._13_2_ = auVar5._13_2_;
                      auVar7._8_4_ = 0;
                      auVar7._0_8_ = uVar2;
                      auVar7._12_3_ = auVar6._12_3_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar2;
                      auVar8[10] = (char)(uVar2 >> 0x28);
                      auVar8._11_4_ = auVar7._11_4_;
                      auVar9._8_2_ = 0;
                      auVar9._0_8_ = uVar2;
                      auVar9._10_5_ = auVar8._10_5_;
                      auVar10[8] = (char)(uVar2 >> 0x20);
                      auVar10._0_8_ = uVar2;
                      auVar10._9_6_ = auVar9._9_6_;
                      auVar11._7_8_ = 0;
                      auVar11._0_7_ = auVar10._8_7_;
                      Var12 = CONCAT81(SUB158(auVar11 << 0x40,7),(char)(uVar2 >> 0x18));
                      auVar15._9_6_ = 0;
                      auVar15._0_9_ = Var12;
                      auVar13._1_10_ = SUB1510(auVar15 << 0x30,5);
                      auVar13[0] = (char)(uVar2 >> 0x10);
                      auVar16._11_4_ = 0;
                      auVar16._0_11_ = auVar13;
                      auVar14._1_12_ = SUB1512(auVar16 << 0x20,3);
                      auVar14[0] = (char)(uVar2 >> 8);
                      auVar57._0_2_ = -(ushort)((uVar2 & 0xff) == 0);
                      auVar57._2_2_ = -(ushort)(auVar14._0_2_ == 0);
                      auVar57._4_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar57._6_2_ = -(ushort)((short)Var12 == 0);
                      auVar57._8_2_ = -(ushort)(auVar10._8_2_ == 0);
                      auVar57._10_2_ = -(ushort)(auVar8._10_2_ == 0);
                      auVar57._12_2_ = -(ushort)(auVar6._12_2_ == 0);
                      auVar57._14_2_ = -(ushort)(cVar60 == '\0');
                      auVar57 = auVar57 ^ auVar59;
                      if ((auVar57 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar48 = 0;
                      }
                      else {
                        sVar48 = *(short *)(lVar1 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar25 = 0;
                      }
                      else {
                        sVar25 = *(short *)(lVar1 + 2 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar27 = 0;
                      }
                      else {
                        sVar27 = *(short *)(lVar1 + 4 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar30 = 0;
                      }
                      else {
                        sVar30 = *(short *)(lVar1 + 6 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar1 + 8 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar1 + 10 + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar47 = 0;
                      }
                      else {
                        sVar47 = *(short *)(lVar1 + 0xc + uVar38 * 2);
                      }
                      if ((auVar57 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar50 = 0;
                      }
                      else {
                        sVar50 = *(short *)(lVar1 + 0xe + uVar38 * 2);
                      }
                      auVar61._2_2_ = sVar25;
                      auVar61._0_2_ = sVar48;
                      auVar61._6_2_ = sVar30;
                      auVar61._4_2_ = sVar27;
                      auVar61._10_2_ = sVar44;
                      auVar61._8_2_ = sVar36;
                      auVar61._14_2_ = sVar50;
                      auVar61._12_2_ = sVar47;
                      uVar38 = uVar38 + 8;
                      auVar62._0_2_ =
                           -(ushort)((short)(auVar56._0_2_ - sVar17) < (short)(sVar48 - sVar17));
                      auVar62._2_2_ =
                           -(ushort)((short)(auVar56._2_2_ - sVar18) < (short)(sVar25 - sVar18));
                      auVar62._4_2_ =
                           -(ushort)((short)(auVar56._4_2_ - sVar19) < (short)(sVar27 - sVar19));
                      auVar62._6_2_ =
                           -(ushort)((short)(auVar56._6_2_ - sVar20) < (short)(sVar30 - sVar20));
                      auVar62._8_2_ =
                           -(ushort)((short)(auVar56._8_2_ - sVar21) < (short)(sVar36 - sVar21));
                      auVar62._10_2_ =
                           -(ushort)((short)(auVar56._10_2_ - sVar22) < (short)(sVar44 - sVar22));
                      auVar62._12_2_ =
                           -(ushort)((short)(auVar56._12_2_ - sVar23) < (short)(sVar47 - sVar23));
                      auVar62._14_2_ =
                           -(ushort)((short)(auVar56._14_2_ - sVar24) < (short)(sVar50 - sVar24));
                      auVar56 = (auVar62 & (auVar61 ^ auVar56) ^ auVar56) & auVar57 |
                                ~auVar57 & auVar56;
                    } while (uVar38 < uVar41);
                    auVar58._0_2_ =
                         -(ushort)((short)(auVar56._8_2_ - sVar17) < (short)(auVar56._0_2_ - sVar17)
                                  );
                    auVar58._2_2_ =
                         -(ushort)((short)(auVar56._10_2_ - sVar18) <
                                  (short)(auVar56._2_2_ - sVar18));
                    auVar58._4_2_ =
                         -(ushort)((short)(auVar56._12_2_ - sVar19) <
                                  (short)(auVar56._4_2_ - sVar19));
                    auVar58._6_2_ =
                         -(ushort)((short)(auVar56._14_2_ - sVar20) <
                                  (short)(auVar56._6_2_ - sVar20));
                    auVar58._8_2_ = -(ushort)((short)-sVar21 < (short)(auVar56._8_2_ - sVar21));
                    auVar58._10_2_ = -(ushort)((short)-sVar22 < (short)(auVar56._10_2_ - sVar22));
                    auVar58._12_2_ = -(ushort)((short)-sVar23 < (short)(auVar56._12_2_ - sVar23));
                    auVar58._14_2_ = -(ushort)((short)-sVar24 < (short)(auVar56._14_2_ - sVar24));
                    auVar59 = auVar58 & (auVar56 ^ auVar56 >> 0x40) ^ auVar56 >> 0x40;
                    auVar63._0_2_ =
                         -(ushort)((short)(auVar59._4_2_ - sVar17) < (short)(auVar59._0_2_ - sVar17)
                                  );
                    auVar63._2_2_ =
                         -(ushort)((short)(auVar59._6_2_ - sVar18) < (short)(auVar59._2_2_ - sVar18)
                                  );
                    auVar63._4_4_ = 0;
                    auVar63._8_2_ =
                         -(ushort)((short)(auVar59._12_2_ - sVar21) <
                                  (short)(auVar59._8_2_ - sVar21));
                    auVar63._10_2_ =
                         -(ushort)((short)(auVar59._14_2_ - sVar22) <
                                  (short)(auVar59._10_2_ - sVar22));
                    auVar63._12_2_ = -(ushort)((short)-sVar23 < (short)(auVar59._12_2_ - sVar23));
                    auVar63._14_2_ = -(ushort)((short)-sVar24 < (short)(auVar59._14_2_ - sVar24));
                    auVar59 = auVar63 & (auVar59 ^ auVar59 >> 0x20) ^ auVar59 >> 0x20;
                    uVar51 = (uint)(ushort)-(ushort)((short)(auVar59._2_2_ - sVar17) <
                                                    (short)(auVar59._0_2_ - sVar17)) &
                             (auVar59._0_4_ ^ auVar59._2_4_) ^ auVar59._2_4_;
                  }
                  if (uVar41 < uVar40) {
                    do {
                      if (*(char *)(uVar41 + param_7 + lVar29) != '\0') {
                        uVar51 = uVar51 & 0xffff;
                        uVar35 = *(ushort *)(lVar32 + lVar53 + uVar41 * 2);
                        if (uVar51 < uVar35) {
                          uVar51 = (uint)uVar35;
                        }
                      }
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar40);
                  }
                }
                uVar49 = (undefined2)uVar51;
                uVar33 = uVar33 + 1;
                lVar29 = lVar29 + uVar40;
                lVar53 = lVar53 + param_2 * 2;
              } while (uVar33 < uVar28);
            }
            uVar46 = uVar46 + 1;
            *(undefined2 *)(lVar42 + param_3 + lVar31) = uVar49;
            lVar42 = lVar42 + 2;
          } while (uVar46 < uVar4);
        }
        uVar54 = uVar54 + 1;
        lVar31 = lVar31 + param_4 * 2;
        lVar52 = lVar52 + param_2 * 2;
      } while (uVar54 < uVar45);
    }
  }
  return;
}

