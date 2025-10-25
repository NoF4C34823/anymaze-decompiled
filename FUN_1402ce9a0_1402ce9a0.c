
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce9a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  ushort *param_9)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  unkuint9 Var10;
  undefined1 auVar11 [11];
  undefined1 auVar12 [13];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined2 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  short sVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  short sVar34;
  longlong lVar35;
  ushort uVar36;
  ushort uVar37;
  uint uVar38;
  short sVar39;
  ulonglong uVar40;
  longlong lVar41;
  short sVar42;
  ulonglong uVar43;
  short sVar44;
  ushort *puVar45;
  short sVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  short sVar50;
  short sVar51;
  ushort *puVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  char cVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  
  sVar22 = _UNK_143089b9e;
  sVar21 = _UNK_143089b9c;
  sVar20 = _UNK_143089b9a;
  sVar19 = _UNK_143089b98;
  sVar18 = _UNK_143089b96;
  sVar17 = _UNK_143089b94;
  sVar16 = _UNK_143089b92;
  sVar15 = _DAT_143089b90;
  param_2 = param_2 >> 1;
  uVar30 = *param_6;
  uVar43 = param_6[1];
  uVar2 = *param_5;
  param_4 = param_4 >> 1;
  uVar40 = uVar43 - 1;
  uVar47 = uVar2 + 0xf & 0xfffffffffffffff0;
  uVar25 = 0;
  param_1 = param_1 + ((int)(uVar40 >> 1) * param_2 + (longlong)(int)(uVar30 - 1 >> 1)) * -2;
  if (param_7 == 0) {
    lVar32 = param_1;
    puVar52 = param_9;
    if (0 < (longlong)uVar40) {
      lVar35 = 0;
      lVar33 = lVar35;
      do {
        uVar31 = 0;
        if (0 < (longlong)uVar2) {
          uVar49 = 0;
          do {
            uVar36 = 0;
            uVar38 = 0;
            if (0 < (longlong)uVar30) {
              uVar27 = uVar49;
              if (7 < (longlong)uVar30) {
                uVar26 = param_1 + lVar35 + uVar31 * 2;
                uVar24 = uVar26 & 0xf;
                if (uVar24 != 0) {
                  if ((uVar26 & 1) != 0) goto LAB_1402cec4d;
                  uVar24 = 0x10 - uVar24 >> 1;
                }
                if ((longlong)(uVar24 + 8) <= (longlong)uVar30) {
                  uVar27 = uVar30 - (uVar30 - uVar24 & 7);
                  uVar48 = uVar49;
                  uVar37 = 0;
                  if (uVar24 != 0) {
                    do {
                      uVar1 = *(ushort *)(uVar26 + uVar48 * 2);
                      uVar36 = uVar37;
                      if (uVar37 < uVar1) {
                        uVar36 = uVar1;
                      }
                      uVar48 = uVar48 + 1;
                      uVar37 = uVar36;
                    } while (uVar48 < uVar24);
                  }
                  auVar53._0_8_ = CONCAT44(CONCAT22(uVar36,uVar36),CONCAT22(uVar36,uVar36));
                  auVar53._8_8_ = auVar53._0_8_;
                  do {
                    auVar58 = *(undefined1 (*) [16])(uVar26 + uVar24 * 2);
                    auVar62._0_2_ =
                         -(ushort)((short)(auVar53._0_2_ - sVar15) < (short)(auVar58._0_2_ - sVar15)
                                  );
                    auVar62._2_2_ =
                         -(ushort)((short)(auVar53._2_2_ - sVar16) < (short)(auVar58._2_2_ - sVar16)
                                  );
                    auVar62._4_2_ =
                         -(ushort)((short)(auVar53._4_2_ - sVar17) < (short)(auVar58._4_2_ - sVar17)
                                  );
                    auVar62._6_2_ =
                         -(ushort)((short)(auVar53._6_2_ - sVar18) < (short)(auVar58._6_2_ - sVar18)
                                  );
                    auVar62._8_2_ =
                         -(ushort)((short)(auVar53._8_2_ - sVar19) < (short)(auVar58._8_2_ - sVar19)
                                  );
                    auVar62._10_2_ =
                         -(ushort)((short)(auVar53._10_2_ - sVar20) <
                                  (short)(auVar58._10_2_ - sVar20));
                    auVar62._12_2_ =
                         -(ushort)((short)(auVar53._12_2_ - sVar21) <
                                  (short)(auVar58._12_2_ - sVar21));
                    auVar62._14_2_ =
                         -(ushort)((short)(auVar53._14_2_ - sVar22) <
                                  (short)(auVar58._14_2_ - sVar22));
                    uVar24 = uVar24 + 8;
                    auVar53 = auVar53 ^ auVar62 & (auVar58 ^ auVar53);
                  } while (uVar24 < uVar27);
                  auVar57._0_2_ =
                       -(ushort)((short)(auVar53._8_2_ - sVar15) < (short)(auVar53._0_2_ - sVar15));
                  auVar57._2_2_ =
                       -(ushort)((short)(auVar53._10_2_ - sVar16) < (short)(auVar53._2_2_ - sVar16))
                  ;
                  auVar57._4_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar17) < (short)(auVar53._4_2_ - sVar17))
                  ;
                  auVar57._6_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar18) < (short)(auVar53._6_2_ - sVar18))
                  ;
                  auVar57._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar53._8_2_ - sVar19));
                  auVar57._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar53._10_2_ - sVar20));
                  auVar57._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar53._12_2_ - sVar21));
                  auVar57._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar53._14_2_ - sVar22));
                  auVar58 = auVar57 & (auVar53 ^ auVar53 >> 0x40) ^ auVar53 >> 0x40;
                  auVar54._0_2_ =
                       -(ushort)((short)(auVar58._4_2_ - sVar15) < (short)(auVar58._0_2_ - sVar15));
                  auVar54._2_2_ =
                       -(ushort)((short)(auVar58._6_2_ - sVar16) < (short)(auVar58._2_2_ - sVar16));
                  auVar54._4_4_ = 0;
                  auVar54._8_2_ =
                       -(ushort)((short)(auVar58._12_2_ - sVar19) < (short)(auVar58._8_2_ - sVar19))
                  ;
                  auVar54._10_2_ =
                       -(ushort)((short)(auVar58._14_2_ - sVar20) < (short)(auVar58._10_2_ - sVar20)
                                );
                  auVar54._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar58._12_2_ - sVar21));
                  auVar54._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._14_2_ - sVar22));
                  auVar58 = auVar54 & (auVar58 ^ auVar58 >> 0x20) ^ auVar58 >> 0x20;
                  uVar38 = (uint)(ushort)-(ushort)((short)(auVar58._2_2_ - sVar15) <
                                                  (short)(auVar58._0_2_ - sVar15)) &
                           (auVar58._0_4_ ^ auVar58._2_4_) ^ auVar58._2_4_;
                }
              }
LAB_1402cec4d:
              uVar36 = (ushort)uVar38;
              if (uVar27 < uVar30) {
                do {
                  uVar29 = uVar38 & 0xffff;
                  uVar38 = (uint)*(ushort *)(param_1 + lVar35 + uVar31 * 2 + uVar27 * 2);
                  if (uVar38 <= uVar29) {
                    uVar38 = uVar29;
                  }
                  uVar36 = (ushort)uVar38;
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar30);
              }
            }
            *(ushort *)((longlong)param_9 + uVar31 * 2 + lVar33) = uVar36;
            uVar31 = uVar31 + 1;
          } while (uVar31 < uVar2);
        }
        uVar25 = uVar25 + 1;
        lVar32 = param_2 * 2 + lVar35 + param_1;
        lVar35 = lVar35 + param_2 * 2;
        puVar52 = (ushort *)((longlong)param_9 + lVar33 + uVar47 * 2);
        lVar33 = lVar33 + uVar47 * 2;
      } while (uVar25 < uVar40);
    }
    sVar22 = _UNK_143089b9e;
    sVar21 = _UNK_143089b9c;
    sVar20 = _UNK_143089b9a;
    sVar19 = _UNK_143089b98;
    sVar18 = _UNK_143089b96;
    sVar17 = _UNK_143089b94;
    sVar16 = _UNK_143089b92;
    sVar15 = _DAT_143089b90;
    if (0 < (longlong)param_5[1]) {
      lVar35 = 0;
      param_3 = param_3 + param_4 * -2;
      lVar33 = 0;
      do {
        lVar35 = lVar35 + 1;
        uVar30 = 0;
        param_3 = param_3 + param_4 * 2;
        lVar33 = lVar33 + param_2 * 2;
        if (0 < (longlong)uVar2) {
          uVar25 = *param_6;
          lVar41 = param_2 * -2 + lVar32 + lVar33;
          uVar31 = 0;
          puVar45 = puVar52;
          do {
            uVar36 = 0;
            uVar38 = 0;
            if (0 < (longlong)uVar25) {
              uVar49 = uVar31;
              if (7 < (longlong)uVar25) {
                uVar27 = lVar41 + uVar30 * 2;
                uVar26 = uVar27 & 0xf;
                if (uVar26 != 0) {
                  if ((uVar27 & 1) != 0) goto LAB_1402cef0e;
                  uVar26 = 0x10 - uVar26 >> 1;
                }
                if ((longlong)(uVar26 + 8) <= (longlong)uVar25) {
                  uVar49 = uVar25 - (uVar25 - uVar26 & 7);
                  uVar24 = uVar31;
                  uVar37 = 0;
                  if (uVar26 != 0) {
                    do {
                      uVar1 = *(ushort *)(uVar27 + uVar24 * 2);
                      uVar36 = uVar37;
                      if (uVar37 < uVar1) {
                        uVar36 = uVar1;
                      }
                      uVar24 = uVar24 + 1;
                      uVar37 = uVar36;
                    } while (uVar24 < uVar26);
                  }
                  auVar55._0_8_ = CONCAT44(CONCAT22(uVar36,uVar36),CONCAT22(uVar36,uVar36));
                  auVar55._8_8_ = auVar55._0_8_;
                  do {
                    auVar58 = *(undefined1 (*) [16])(uVar27 + uVar26 * 2);
                    auVar60._0_2_ =
                         -(ushort)((short)(auVar55._0_2_ - sVar15) < (short)(auVar58._0_2_ - sVar15)
                                  );
                    auVar60._2_2_ =
                         -(ushort)((short)(auVar55._2_2_ - sVar16) < (short)(auVar58._2_2_ - sVar16)
                                  );
                    auVar60._4_2_ =
                         -(ushort)((short)(auVar55._4_2_ - sVar17) < (short)(auVar58._4_2_ - sVar17)
                                  );
                    auVar60._6_2_ =
                         -(ushort)((short)(auVar55._6_2_ - sVar18) < (short)(auVar58._6_2_ - sVar18)
                                  );
                    auVar60._8_2_ =
                         -(ushort)((short)(auVar55._8_2_ - sVar19) < (short)(auVar58._8_2_ - sVar19)
                                  );
                    auVar60._10_2_ =
                         -(ushort)((short)(auVar55._10_2_ - sVar20) <
                                  (short)(auVar58._10_2_ - sVar20));
                    auVar60._12_2_ =
                         -(ushort)((short)(auVar55._12_2_ - sVar21) <
                                  (short)(auVar58._12_2_ - sVar21));
                    auVar60._14_2_ =
                         -(ushort)((short)(auVar55._14_2_ - sVar22) <
                                  (short)(auVar58._14_2_ - sVar22));
                    uVar26 = uVar26 + 8;
                    auVar55 = auVar55 ^ auVar60 & (auVar58 ^ auVar55);
                  } while (uVar26 < uVar49);
                  auVar59._0_2_ =
                       -(ushort)((short)(auVar55._8_2_ - sVar15) < (short)(auVar55._0_2_ - sVar15));
                  auVar59._2_2_ =
                       -(ushort)((short)(auVar55._10_2_ - sVar16) < (short)(auVar55._2_2_ - sVar16))
                  ;
                  auVar59._4_2_ =
                       -(ushort)((short)(auVar55._12_2_ - sVar17) < (short)(auVar55._4_2_ - sVar17))
                  ;
                  auVar59._6_2_ =
                       -(ushort)((short)(auVar55._14_2_ - sVar18) < (short)(auVar55._6_2_ - sVar18))
                  ;
                  auVar59._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar55._8_2_ - sVar19));
                  auVar59._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar55._10_2_ - sVar20));
                  auVar59._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar55._12_2_ - sVar21));
                  auVar59._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar55._14_2_ - sVar22));
                  auVar58 = auVar59 & (auVar55 ^ auVar55 >> 0x40) ^ auVar55 >> 0x40;
                  auVar56._0_2_ =
                       -(ushort)((short)(auVar58._4_2_ - sVar15) < (short)(auVar58._0_2_ - sVar15));
                  auVar56._2_2_ =
                       -(ushort)((short)(auVar58._6_2_ - sVar16) < (short)(auVar58._2_2_ - sVar16));
                  auVar56._4_4_ = 0;
                  auVar56._8_2_ =
                       -(ushort)((short)(auVar58._12_2_ - sVar19) < (short)(auVar58._8_2_ - sVar19))
                  ;
                  auVar56._10_2_ =
                       -(ushort)((short)(auVar58._14_2_ - sVar20) < (short)(auVar58._10_2_ - sVar20)
                                );
                  auVar56._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar58._12_2_ - sVar21));
                  auVar56._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._14_2_ - sVar22));
                  auVar58 = auVar56 & (auVar58 ^ auVar58 >> 0x20) ^ auVar58 >> 0x20;
                  uVar38 = (uint)(ushort)-(ushort)((short)(auVar58._2_2_ - sVar15) <
                                                  (short)(auVar58._0_2_ - sVar15)) &
                           (auVar58._0_4_ ^ auVar58._2_4_) ^ auVar58._2_4_;
                }
              }
LAB_1402cef0e:
              uVar36 = (ushort)uVar38;
              if (uVar49 < uVar25) {
                do {
                  uVar29 = uVar38 & 0xffff;
                  uVar38 = (uint)*(ushort *)(lVar41 + uVar30 * 2 + uVar49 * 2);
                  if (uVar38 <= uVar29) {
                    uVar38 = uVar29;
                  }
                  uVar36 = (ushort)uVar38;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar25);
              }
            }
            uVar30 = uVar30 + 1;
            *puVar45 = uVar36;
            puVar45 = puVar45 + 1;
          } while (uVar30 < uVar2);
        }
        FUN_1402d22e0(param_9,uVar47,param_3,uVar2,uVar43);
        uVar40 = uVar40 + 1;
        uVar43 = param_6[1];
        puVar52 = puVar52 + uVar47;
        if ((longlong)uVar43 <= (longlong)uVar40) {
          puVar52 = param_9;
          uVar40 = 0;
        }
      } while (lVar35 < (longlong)param_5[1]);
    }
  }
  else {
    uVar40 = param_5[1];
    if (0 < (longlong)uVar40) {
      lVar32 = 0;
      lVar33 = 0;
      do {
        uVar47 = 0;
        if (0 < (longlong)uVar2) {
          uVar31 = uVar47;
          do {
            uVar49 = 0;
            uVar38 = 0;
            uVar23 = 0;
            if (0 < (longlong)uVar43) {
              lVar35 = param_1 + lVar33 + uVar47;
              uVar27 = uVar49;
              uVar26 = uVar49;
              do {
                uVar24 = 0;
                if (0 < (longlong)uVar30) {
                  if (7 < (longlong)uVar30) {
                    auVar58._8_4_ = 0xffffffff;
                    auVar58._0_8_ = 0xffffffffffffffff;
                    auVar58._12_4_ = 0xffffffff;
                    uVar61 = CONCAT22((short)uVar38,(short)uVar38);
                    lVar41 = lVar35 + uVar49;
                    auVar63._0_8_ = CONCAT44(uVar61,uVar61);
                    auVar63._8_8_ = auVar63._0_8_;
                    do {
                      uVar48 = *(ulonglong *)(param_7 + uVar27 + uVar24);
                      cVar66 = (char)(uVar48 >> 0x38);
                      auVar3._8_6_ = 0;
                      auVar3._0_8_ = uVar48;
                      auVar3[0xe] = cVar66;
                      auVar4._8_4_ = 0;
                      auVar4._0_8_ = uVar48;
                      auVar4[0xc] = (char)(uVar48 >> 0x30);
                      auVar4._13_2_ = auVar3._13_2_;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar48;
                      auVar5._12_3_ = auVar4._12_3_;
                      auVar6._8_2_ = 0;
                      auVar6._0_8_ = uVar48;
                      auVar6[10] = (char)(uVar48 >> 0x28);
                      auVar6._11_4_ = auVar5._11_4_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar48;
                      auVar7._10_5_ = auVar6._10_5_;
                      auVar8[8] = (char)(uVar48 >> 0x20);
                      auVar8._0_8_ = uVar48;
                      auVar8._9_6_ = auVar7._9_6_;
                      auVar9._7_8_ = 0;
                      auVar9._0_7_ = auVar8._8_7_;
                      Var10 = CONCAT81(SUB158(auVar9 << 0x40,7),(char)(uVar48 >> 0x18));
                      auVar13._9_6_ = 0;
                      auVar13._0_9_ = Var10;
                      auVar11._1_10_ = SUB1510(auVar13 << 0x30,5);
                      auVar11[0] = (char)(uVar48 >> 0x10);
                      auVar14._11_4_ = 0;
                      auVar14._0_11_ = auVar11;
                      auVar12._1_12_ = SUB1512(auVar14 << 0x20,3);
                      auVar12[0] = (char)(uVar48 >> 8);
                      auVar64._0_2_ = -(ushort)((uVar48 & 0xff) == 0);
                      auVar64._2_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar64._4_2_ = -(ushort)(auVar11._0_2_ == 0);
                      auVar64._6_2_ = -(ushort)((short)Var10 == 0);
                      auVar64._8_2_ = -(ushort)(auVar8._8_2_ == 0);
                      auVar64._10_2_ = -(ushort)(auVar6._10_2_ == 0);
                      auVar64._12_2_ = -(ushort)(auVar4._12_2_ == 0);
                      auVar64._14_2_ = -(ushort)(cVar66 == '\0');
                      auVar64 = auVar64 ^ auVar58;
                      if ((auVar64 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar50 = 0;
                      }
                      else {
                        sVar50 = *(short *)(lVar41 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar41 + 2 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar41 + 4 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar41 + 6 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar41 + 8 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar41 + 10 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar46 = 0;
                      }
                      else {
                        sVar46 = *(short *)(lVar41 + 0xc + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar51 = 0;
                      }
                      else {
                        sVar51 = *(short *)(lVar41 + 0xe + uVar24 * 2);
                      }
                      auVar67._2_2_ = sVar28;
                      auVar67._0_2_ = sVar50;
                      auVar67._6_2_ = sVar39;
                      auVar67._4_2_ = sVar34;
                      auVar67._10_2_ = sVar44;
                      auVar67._8_2_ = sVar42;
                      auVar67._14_2_ = sVar51;
                      auVar67._12_2_ = sVar46;
                      uVar24 = uVar24 + 8;
                      auVar68._0_2_ =
                           -(ushort)((short)(auVar63._0_2_ - sVar15) < (short)(sVar50 - sVar15));
                      auVar68._2_2_ =
                           -(ushort)((short)(auVar63._2_2_ - sVar16) < (short)(sVar28 - sVar16));
                      auVar68._4_2_ =
                           -(ushort)((short)(auVar63._4_2_ - sVar17) < (short)(sVar34 - sVar17));
                      auVar68._6_2_ =
                           -(ushort)((short)(auVar63._6_2_ - sVar18) < (short)(sVar39 - sVar18));
                      auVar68._8_2_ =
                           -(ushort)((short)(auVar63._8_2_ - sVar19) < (short)(sVar42 - sVar19));
                      auVar68._10_2_ =
                           -(ushort)((short)(auVar63._10_2_ - sVar20) < (short)(sVar44 - sVar20));
                      auVar68._12_2_ =
                           -(ushort)((short)(auVar63._12_2_ - sVar21) < (short)(sVar46 - sVar21));
                      auVar68._14_2_ =
                           -(ushort)((short)(auVar63._14_2_ - sVar22) < (short)(sVar51 - sVar22));
                      auVar63 = (auVar68 & (auVar67 ^ auVar63) ^ auVar63) & auVar64 |
                                ~auVar64 & auVar63;
                    } while (uVar24 < (uVar30 & 0xfffffffffffffff8));
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar63._8_2_ - sVar15) < (short)(auVar63._0_2_ - sVar15)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar63._10_2_ - sVar16) <
                                  (short)(auVar63._2_2_ - sVar16));
                    auVar65._4_2_ =
                         -(ushort)((short)(auVar63._12_2_ - sVar17) <
                                  (short)(auVar63._4_2_ - sVar17));
                    auVar65._6_2_ =
                         -(ushort)((short)(auVar63._14_2_ - sVar18) <
                                  (short)(auVar63._6_2_ - sVar18));
                    auVar65._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar63._8_2_ - sVar19));
                    auVar65._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar63._10_2_ - sVar20));
                    auVar65._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar63._12_2_ - sVar21));
                    auVar65._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar63._14_2_ - sVar22));
                    auVar58 = auVar65 & (auVar63 ^ auVar63 >> 0x40) ^ auVar63 >> 0x40;
                    auVar69._0_2_ =
                         -(ushort)((short)(auVar58._4_2_ - sVar15) < (short)(auVar58._0_2_ - sVar15)
                                  );
                    auVar69._2_2_ =
                         -(ushort)((short)(auVar58._6_2_ - sVar16) < (short)(auVar58._2_2_ - sVar16)
                                  );
                    auVar69._4_4_ = 0;
                    auVar69._8_2_ =
                         -(ushort)((short)(auVar58._12_2_ - sVar19) <
                                  (short)(auVar58._8_2_ - sVar19));
                    auVar69._10_2_ =
                         -(ushort)((short)(auVar58._14_2_ - sVar20) <
                                  (short)(auVar58._10_2_ - sVar20));
                    auVar69._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar58._12_2_ - sVar21));
                    auVar69._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._14_2_ - sVar22));
                    auVar58 = auVar69 & (auVar58 ^ auVar58 >> 0x20) ^ auVar58 >> 0x20;
                    uVar38 = (uint)(ushort)-(ushort)((short)(auVar58._2_2_ - sVar15) <
                                                    (short)(auVar58._0_2_ - sVar15)) &
                             (auVar58._0_4_ ^ auVar58._2_4_) ^ auVar58._2_4_;
                    uVar24 = uVar30 & 0xfffffffffffffff8;
                  }
                  if (uVar24 < uVar30) {
                    do {
                      if (*(char *)(uVar24 + param_7 + uVar27) != '\0') {
                        uVar38 = uVar38 & 0xffff;
                        uVar36 = *(ushort *)(lVar35 + uVar49 + uVar24 * 2);
                        if (uVar38 < uVar36) {
                          uVar38 = (uint)uVar36;
                        }
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar30);
                  }
                }
                uVar23 = (undefined2)uVar38;
                uVar26 = uVar26 + 1;
                uVar27 = uVar27 + uVar30;
                uVar49 = uVar49 + param_2 * 2;
              } while (uVar26 < uVar43);
            }
            uVar31 = uVar31 + 1;
            *(undefined2 *)(uVar47 + param_3 + lVar32) = uVar23;
            uVar47 = uVar47 + 2;
          } while (uVar31 < uVar2);
        }
        uVar25 = uVar25 + 1;
        lVar32 = lVar32 + param_4 * 2;
        lVar33 = lVar33 + param_2 * 2;
      } while (uVar25 < uVar40);
    }
  }
  return;
}

