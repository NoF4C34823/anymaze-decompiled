
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  undefined2 *param_9)

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
  uint uVar36;
  short sVar37;
  ulonglong uVar38;
  longlong lVar39;
  short sVar40;
  ulonglong uVar41;
  short sVar42;
  undefined2 *puVar43;
  short sVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  short sVar48;
  short sVar49;
  undefined2 *puVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  char cVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  
  sVar22 = _UNK_143089cce;
  sVar21 = _UNK_143089ccc;
  sVar20 = _UNK_143089cca;
  sVar19 = _UNK_143089cc8;
  sVar18 = _UNK_143089cc6;
  sVar17 = _UNK_143089cc4;
  sVar16 = _UNK_143089cc2;
  sVar15 = _DAT_143089cc0;
  param_2 = param_2 >> 1;
  uVar30 = *param_6;
  uVar41 = param_6[1];
  uVar2 = *param_5;
  param_4 = param_4 >> 1;
  uVar38 = uVar41 - 1;
  uVar45 = uVar2 + 0xf & 0xfffffffffffffff0;
  uVar25 = 0;
  param_1 = param_1 + ((int)(uVar38 >> 1) * param_2 + (longlong)(int)(uVar30 - 1 >> 1)) * -2;
  if (param_7 == 0) {
    lVar32 = param_1;
    puVar50 = param_9;
    if (0 < (longlong)uVar38) {
      lVar35 = 0;
      lVar33 = lVar35;
      do {
        uVar31 = 0;
        if (0 < (longlong)uVar2) {
          uVar47 = 0;
          do {
            uVar36 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar30) {
              uVar27 = uVar47;
              if (7 < (longlong)uVar30) {
                uVar26 = param_1 + lVar35 + uVar31 * 2;
                uVar24 = uVar26 & 0xf;
                if (uVar24 != 0) {
                  if ((uVar26 & 1) != 0) goto LAB_140355051;
                  uVar24 = 0x10 - uVar24 >> 1;
                }
                if ((longlong)(uVar24 + 8) <= (longlong)uVar30) {
                  uVar27 = uVar30 - (uVar30 - uVar24 & 7);
                  uVar46 = uVar47;
                  if (uVar24 != 0) {
                    do {
                      uVar1 = *(ushort *)(uVar26 + uVar46 * 2);
                      if (uVar1 < uVar36) {
                        uVar36 = (uint)uVar1;
                      }
                      uVar23 = (undefined2)uVar36;
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < uVar24);
                  }
                  auVar51._0_8_ = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
                  auVar51._8_8_ = auVar51._0_8_;
                  do {
                    auVar62 = *(undefined1 (*) [16])(uVar26 + uVar24 * 2);
                    auVar61._0_2_ =
                         -(ushort)((short)(auVar51._0_2_ - sVar15) < (short)(auVar62._0_2_ - sVar15)
                                  );
                    auVar61._2_2_ =
                         -(ushort)((short)(auVar51._2_2_ - sVar16) < (short)(auVar62._2_2_ - sVar16)
                                  );
                    auVar61._4_2_ =
                         -(ushort)((short)(auVar51._4_2_ - sVar17) < (short)(auVar62._4_2_ - sVar17)
                                  );
                    auVar61._6_2_ =
                         -(ushort)((short)(auVar51._6_2_ - sVar18) < (short)(auVar62._6_2_ - sVar18)
                                  );
                    auVar61._8_2_ =
                         -(ushort)((short)(auVar51._8_2_ - sVar19) < (short)(auVar62._8_2_ - sVar19)
                                  );
                    auVar61._10_2_ =
                         -(ushort)((short)(auVar51._10_2_ - sVar20) <
                                  (short)(auVar62._10_2_ - sVar20));
                    auVar61._12_2_ =
                         -(ushort)((short)(auVar51._12_2_ - sVar21) <
                                  (short)(auVar62._12_2_ - sVar21));
                    auVar61._14_2_ =
                         -(ushort)((short)(auVar51._14_2_ - sVar22) <
                                  (short)(auVar62._14_2_ - sVar22));
                    uVar24 = uVar24 + 8;
                    auVar51 = auVar62 ^ auVar61 & (auVar51 ^ auVar62);
                  } while (uVar24 < uVar27);
                  auVar55._0_2_ =
                       -(ushort)((short)(auVar51._8_2_ - sVar15) < (short)(auVar51._0_2_ - sVar15));
                  auVar55._2_2_ =
                       -(ushort)((short)(auVar51._10_2_ - sVar16) < (short)(auVar51._2_2_ - sVar16))
                  ;
                  auVar55._4_2_ =
                       -(ushort)((short)(auVar51._12_2_ - sVar17) < (short)(auVar51._4_2_ - sVar17))
                  ;
                  auVar55._6_2_ =
                       -(ushort)((short)(auVar51._14_2_ - sVar18) < (short)(auVar51._6_2_ - sVar18))
                  ;
                  auVar55._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar51._8_2_ - sVar19));
                  auVar55._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar51._10_2_ - sVar20));
                  auVar55._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar51._12_2_ - sVar21));
                  auVar55._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar51._14_2_ - sVar22));
                  auVar51 = auVar55 & (auVar51 >> 0x40 ^ auVar51) ^ auVar51;
                  auVar52._0_2_ =
                       -(ushort)((short)(auVar51._4_2_ - sVar15) < (short)(auVar51._0_2_ - sVar15));
                  auVar52._2_2_ =
                       -(ushort)((short)(auVar51._6_2_ - sVar16) < (short)(auVar51._2_2_ - sVar16));
                  auVar52._4_4_ = 0;
                  auVar52._8_2_ =
                       -(ushort)((short)(auVar51._12_2_ - sVar19) < (short)(auVar51._8_2_ - sVar19))
                  ;
                  auVar52._10_2_ =
                       -(ushort)((short)(auVar51._14_2_ - sVar20) < (short)(auVar51._10_2_ - sVar20)
                                );
                  auVar52._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar51._12_2_ - sVar21));
                  auVar52._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar51._14_2_ - sVar22));
                  auVar51 = auVar52 & (auVar51 >> 0x20 ^ auVar51) ^ auVar51;
                  uVar36 = (uint)(ushort)-(ushort)((short)(auVar51._2_2_ - sVar15) <
                                                  (short)(auVar51._0_2_ - sVar15)) &
                           (auVar51._2_4_ ^ auVar51._0_4_) ^ auVar51._0_4_;
                }
              }
LAB_140355051:
              uVar23 = (undefined2)uVar36;
              if (uVar27 < uVar30) {
                do {
                  uVar29 = uVar36 & 0xffff;
                  uVar36 = (uint)*(ushort *)(param_1 + lVar35 + uVar31 * 2 + uVar27 * 2);
                  if (uVar29 <= uVar36) {
                    uVar36 = uVar29;
                  }
                  uVar23 = (undefined2)uVar36;
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar30);
              }
            }
            *(undefined2 *)((longlong)param_9 + uVar31 * 2 + lVar33) = uVar23;
            uVar31 = uVar31 + 1;
          } while (uVar31 < uVar2);
        }
        uVar25 = uVar25 + 1;
        lVar32 = param_2 * 2 + lVar35 + param_1;
        lVar35 = lVar35 + param_2 * 2;
        puVar50 = (undefined2 *)((longlong)param_9 + lVar33 + uVar45 * 2);
        lVar33 = lVar33 + uVar45 * 2;
      } while (uVar25 < uVar38);
    }
    sVar22 = _UNK_143089cce;
    sVar21 = _UNK_143089ccc;
    sVar20 = _UNK_143089cca;
    sVar19 = _UNK_143089cc8;
    sVar18 = _UNK_143089cc6;
    sVar17 = _UNK_143089cc4;
    sVar16 = _UNK_143089cc2;
    sVar15 = _DAT_143089cc0;
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
          lVar39 = param_2 * -2 + lVar32 + lVar33;
          uVar31 = 0;
          puVar43 = puVar50;
          do {
            uVar36 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar25) {
              uVar47 = uVar31;
              if (7 < (longlong)uVar25) {
                uVar27 = lVar39 + uVar30 * 2;
                uVar26 = uVar27 & 0xf;
                if (uVar26 != 0) {
                  if ((uVar27 & 1) != 0) goto LAB_140355332;
                  uVar26 = 0x10 - uVar26 >> 1;
                }
                if ((longlong)(uVar26 + 8) <= (longlong)uVar25) {
                  uVar47 = uVar25 - (uVar25 - uVar26 & 7);
                  uVar24 = uVar31;
                  if (uVar26 != 0) {
                    do {
                      uVar1 = *(ushort *)(uVar27 + uVar24 * 2);
                      if (uVar1 < uVar36) {
                        uVar36 = (uint)uVar1;
                      }
                      uVar23 = (undefined2)uVar36;
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar26);
                  }
                  auVar53._0_8_ = CONCAT44(CONCAT22(uVar23,uVar23),CONCAT22(uVar23,uVar23));
                  auVar53._8_8_ = auVar53._0_8_;
                  do {
                    auVar62 = *(undefined1 (*) [16])(uVar27 + uVar26 * 2);
                    auVar58._0_2_ =
                         -(ushort)((short)(auVar53._0_2_ - sVar15) < (short)(auVar62._0_2_ - sVar15)
                                  );
                    auVar58._2_2_ =
                         -(ushort)((short)(auVar53._2_2_ - sVar16) < (short)(auVar62._2_2_ - sVar16)
                                  );
                    auVar58._4_2_ =
                         -(ushort)((short)(auVar53._4_2_ - sVar17) < (short)(auVar62._4_2_ - sVar17)
                                  );
                    auVar58._6_2_ =
                         -(ushort)((short)(auVar53._6_2_ - sVar18) < (short)(auVar62._6_2_ - sVar18)
                                  );
                    auVar58._8_2_ =
                         -(ushort)((short)(auVar53._8_2_ - sVar19) < (short)(auVar62._8_2_ - sVar19)
                                  );
                    auVar58._10_2_ =
                         -(ushort)((short)(auVar53._10_2_ - sVar20) <
                                  (short)(auVar62._10_2_ - sVar20));
                    auVar58._12_2_ =
                         -(ushort)((short)(auVar53._12_2_ - sVar21) <
                                  (short)(auVar62._12_2_ - sVar21));
                    auVar58._14_2_ =
                         -(ushort)((short)(auVar53._14_2_ - sVar22) <
                                  (short)(auVar62._14_2_ - sVar22));
                    uVar26 = uVar26 + 8;
                    auVar53 = auVar62 ^ auVar58 & (auVar53 ^ auVar62);
                  } while (uVar26 < uVar47);
                  auVar56._0_2_ =
                       -(ushort)((short)(auVar53._8_2_ - sVar15) < (short)(auVar53._0_2_ - sVar15));
                  auVar56._2_2_ =
                       -(ushort)((short)(auVar53._10_2_ - sVar16) < (short)(auVar53._2_2_ - sVar16))
                  ;
                  auVar56._4_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar17) < (short)(auVar53._4_2_ - sVar17))
                  ;
                  auVar56._6_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar18) < (short)(auVar53._6_2_ - sVar18))
                  ;
                  auVar56._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar53._8_2_ - sVar19));
                  auVar56._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar53._10_2_ - sVar20));
                  auVar56._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar53._12_2_ - sVar21));
                  auVar56._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar53._14_2_ - sVar22));
                  auVar53 = auVar56 & (auVar53 >> 0x40 ^ auVar53) ^ auVar53;
                  auVar54._0_2_ =
                       -(ushort)((short)(auVar53._4_2_ - sVar15) < (short)(auVar53._0_2_ - sVar15));
                  auVar54._2_2_ =
                       -(ushort)((short)(auVar53._6_2_ - sVar16) < (short)(auVar53._2_2_ - sVar16));
                  auVar54._4_4_ = 0;
                  auVar54._8_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar19) < (short)(auVar53._8_2_ - sVar19))
                  ;
                  auVar54._10_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar20) < (short)(auVar53._10_2_ - sVar20)
                                );
                  auVar54._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar53._12_2_ - sVar21));
                  auVar54._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar53._14_2_ - sVar22));
                  auVar53 = auVar54 & (auVar53 >> 0x20 ^ auVar53) ^ auVar53;
                  uVar36 = (uint)(ushort)-(ushort)((short)(auVar53._2_2_ - sVar15) <
                                                  (short)(auVar53._0_2_ - sVar15)) &
                           (auVar53._2_4_ ^ auVar53._0_4_) ^ auVar53._0_4_;
                }
              }
LAB_140355332:
              uVar23 = (undefined2)uVar36;
              if (uVar47 < uVar25) {
                do {
                  uVar29 = uVar36 & 0xffff;
                  uVar36 = (uint)*(ushort *)(lVar39 + uVar30 * 2 + uVar47 * 2);
                  if (uVar29 <= uVar36) {
                    uVar36 = uVar29;
                  }
                  uVar23 = (undefined2)uVar36;
                  uVar47 = uVar47 + 1;
                } while (uVar47 < uVar25);
              }
            }
            uVar30 = uVar30 + 1;
            *puVar43 = uVar23;
            puVar43 = puVar43 + 1;
          } while (uVar30 < uVar2);
        }
        FUN_140355860(param_9,uVar45,param_3,uVar2,uVar41);
        uVar38 = uVar38 + 1;
        uVar41 = param_6[1];
        puVar50 = puVar50 + uVar45;
        if ((longlong)uVar41 <= (longlong)uVar38) {
          puVar50 = param_9;
          uVar38 = 0;
        }
      } while (lVar35 < (longlong)param_5[1]);
    }
  }
  else {
    uVar38 = param_5[1];
    if (0 < (longlong)uVar38) {
      lVar32 = 0;
      lVar33 = 0;
      do {
        uVar45 = 0;
        if (0 < (longlong)uVar2) {
          uVar31 = uVar45;
          do {
            uVar47 = 0;
            uVar36 = 0xffff;
            uVar23 = 0xffff;
            if (0 < (longlong)uVar41) {
              lVar35 = param_1 + lVar33 + uVar45;
              uVar27 = uVar47;
              uVar26 = uVar47;
              do {
                uVar24 = 0;
                if (0 < (longlong)uVar30) {
                  if (7 < (longlong)uVar30) {
                    auVar59._8_4_ = 0xffffffff;
                    auVar59._0_8_ = 0xffffffffffffffff;
                    auVar59._12_4_ = 0xffffffff;
                    uVar60 = CONCAT22((short)uVar36,(short)uVar36);
                    lVar39 = lVar35 + uVar47;
                    auVar62._0_8_ = CONCAT44(uVar60,uVar60);
                    auVar62._8_8_ = auVar62._0_8_;
                    do {
                      uVar46 = *(ulonglong *)(param_7 + uVar27 + uVar24);
                      cVar66 = (char)(uVar46 >> 0x38);
                      auVar3._8_6_ = 0;
                      auVar3._0_8_ = uVar46;
                      auVar3[0xe] = cVar66;
                      auVar4._8_4_ = 0;
                      auVar4._0_8_ = uVar46;
                      auVar4[0xc] = (char)(uVar46 >> 0x30);
                      auVar4._13_2_ = auVar3._13_2_;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar46;
                      auVar5._12_3_ = auVar4._12_3_;
                      auVar6._8_2_ = 0;
                      auVar6._0_8_ = uVar46;
                      auVar6[10] = (char)(uVar46 >> 0x28);
                      auVar6._11_4_ = auVar5._11_4_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar46;
                      auVar7._10_5_ = auVar6._10_5_;
                      auVar8[8] = (char)(uVar46 >> 0x20);
                      auVar8._0_8_ = uVar46;
                      auVar8._9_6_ = auVar7._9_6_;
                      auVar9._7_8_ = 0;
                      auVar9._0_7_ = auVar8._8_7_;
                      Var10 = CONCAT81(SUB158(auVar9 << 0x40,7),(char)(uVar46 >> 0x18));
                      auVar13._9_6_ = 0;
                      auVar13._0_9_ = Var10;
                      auVar11._1_10_ = SUB1510(auVar13 << 0x30,5);
                      auVar11[0] = (char)(uVar46 >> 0x10);
                      auVar14._11_4_ = 0;
                      auVar14._0_11_ = auVar11;
                      auVar12._1_12_ = SUB1512(auVar14 << 0x20,3);
                      auVar12[0] = (char)(uVar46 >> 8);
                      auVar64._0_2_ = -(ushort)((uVar46 & 0xff) == 0);
                      auVar64._2_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar64._4_2_ = -(ushort)(auVar11._0_2_ == 0);
                      auVar64._6_2_ = -(ushort)((short)Var10 == 0);
                      auVar64._8_2_ = -(ushort)(auVar8._8_2_ == 0);
                      auVar64._10_2_ = -(ushort)(auVar6._10_2_ == 0);
                      auVar64._12_2_ = -(ushort)(auVar4._12_2_ == 0);
                      auVar64._14_2_ = -(ushort)(cVar66 == '\0');
                      auVar64 = auVar64 ^ auVar59;
                      if ((auVar64 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar48 = 0;
                      }
                      else {
                        sVar48 = *(short *)(lVar39 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar28 = 0;
                      }
                      else {
                        sVar28 = *(short *)(lVar39 + 2 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar39 + 4 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar39 + 6 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar39 + 8 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar39 + 10 + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar39 + 0xc + uVar24 * 2);
                      }
                      if ((auVar64 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar49 = 0;
                      }
                      else {
                        sVar49 = *(short *)(lVar39 + 0xe + uVar24 * 2);
                      }
                      auVar63._2_2_ = sVar28;
                      auVar63._0_2_ = sVar48;
                      auVar63._6_2_ = sVar37;
                      auVar63._4_2_ = sVar34;
                      auVar63._10_2_ = sVar42;
                      auVar63._8_2_ = sVar40;
                      auVar63._14_2_ = sVar49;
                      auVar63._12_2_ = sVar44;
                      auVar67._0_2_ =
                           -(ushort)((short)(auVar62._0_2_ - sVar15) < (short)(sVar48 - sVar15));
                      auVar67._2_2_ =
                           -(ushort)((short)(auVar62._2_2_ - sVar16) < (short)(sVar28 - sVar16));
                      auVar67._4_2_ =
                           -(ushort)((short)(auVar62._4_2_ - sVar17) < (short)(sVar34 - sVar17));
                      auVar67._6_2_ =
                           -(ushort)((short)(auVar62._6_2_ - sVar18) < (short)(sVar37 - sVar18));
                      auVar67._8_2_ =
                           -(ushort)((short)(auVar62._8_2_ - sVar19) < (short)(sVar40 - sVar19));
                      auVar67._10_2_ =
                           -(ushort)((short)(auVar62._10_2_ - sVar20) < (short)(sVar42 - sVar20));
                      auVar67._12_2_ =
                           -(ushort)((short)(auVar62._12_2_ - sVar21) < (short)(sVar44 - sVar21));
                      auVar67._14_2_ =
                           -(ushort)((short)(auVar62._14_2_ - sVar22) < (short)(sVar49 - sVar22));
                      uVar24 = uVar24 + 8;
                      auVar62 = (auVar67 & (auVar62 ^ auVar63) ^ auVar63) & auVar64 |
                                ~auVar64 & auVar62;
                    } while (uVar24 < (uVar30 & 0xfffffffffffffff8));
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar62._8_2_ - sVar15) < (short)(auVar62._0_2_ - sVar15)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar62._10_2_ - sVar16) <
                                  (short)(auVar62._2_2_ - sVar16));
                    auVar65._4_2_ =
                         -(ushort)((short)(auVar62._12_2_ - sVar17) <
                                  (short)(auVar62._4_2_ - sVar17));
                    auVar65._6_2_ =
                         -(ushort)((short)(auVar62._14_2_ - sVar18) <
                                  (short)(auVar62._6_2_ - sVar18));
                    auVar65._8_2_ = -(ushort)((short)-sVar19 < (short)(auVar62._8_2_ - sVar19));
                    auVar65._10_2_ = -(ushort)((short)-sVar20 < (short)(auVar62._10_2_ - sVar20));
                    auVar65._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar62._12_2_ - sVar21));
                    auVar65._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar62._14_2_ - sVar22));
                    auVar62 = auVar65 & (auVar62 >> 0x40 ^ auVar62) ^ auVar62;
                    auVar57._0_2_ =
                         -(ushort)((short)(auVar62._4_2_ - sVar15) < (short)(auVar62._0_2_ - sVar15)
                                  );
                    auVar57._2_2_ =
                         -(ushort)((short)(auVar62._6_2_ - sVar16) < (short)(auVar62._2_2_ - sVar16)
                                  );
                    auVar57._4_4_ = 0;
                    auVar57._8_2_ =
                         -(ushort)((short)(auVar62._12_2_ - sVar19) <
                                  (short)(auVar62._8_2_ - sVar19));
                    auVar57._10_2_ =
                         -(ushort)((short)(auVar62._14_2_ - sVar20) <
                                  (short)(auVar62._10_2_ - sVar20));
                    auVar57._12_2_ = -(ushort)((short)-sVar21 < (short)(auVar62._12_2_ - sVar21));
                    auVar57._14_2_ = -(ushort)((short)-sVar22 < (short)(auVar62._14_2_ - sVar22));
                    auVar62 = auVar57 & (auVar62 >> 0x20 ^ auVar62) ^ auVar62;
                    uVar36 = (uint)(ushort)-(ushort)((short)(auVar62._2_2_ - sVar15) <
                                                    (short)(auVar62._0_2_ - sVar15)) &
                             (auVar62._2_4_ ^ auVar62._0_4_) ^ auVar62._0_4_;
                    uVar24 = uVar30 & 0xfffffffffffffff8;
                  }
                  if (uVar24 < uVar30) {
                    do {
                      if (*(char *)(uVar24 + param_7 + uVar27) != '\0') {
                        uVar36 = uVar36 & 0xffff;
                        uVar1 = *(ushort *)(lVar35 + uVar47 + uVar24 * 2);
                        if (uVar1 < uVar36) {
                          uVar36 = (uint)uVar1;
                        }
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar30);
                  }
                }
                uVar23 = (undefined2)uVar36;
                uVar26 = uVar26 + 1;
                uVar27 = uVar27 + uVar30;
                uVar47 = uVar47 + param_2 * 2;
              } while (uVar26 < uVar41);
            }
            uVar31 = uVar31 + 1;
            *(undefined2 *)(uVar45 + param_3 + lVar32) = uVar23;
            uVar45 = uVar45 + 2;
          } while (uVar31 < uVar2);
        }
        uVar25 = uVar25 + 1;
        lVar32 = lVar32 + param_4 * 2;
        lVar33 = lVar33 + param_2 * 2;
      } while (uVar25 < uVar38);
    }
  }
  return;
}

