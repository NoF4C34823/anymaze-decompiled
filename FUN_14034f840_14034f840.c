
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14034f840(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,undefined2 *param_9)

{
  longlong lVar1;
  longlong lVar2;
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
  ulonglong uVar24;
  short sVar25;
  longlong lVar26;
  short sVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined2 uVar32;
  longlong lVar33;
  longlong lVar34;
  short sVar35;
  ulonglong uVar36;
  longlong lVar37;
  short sVar38;
  undefined2 *puVar39;
  short sVar40;
  uint uVar41;
  ulonglong uVar42;
  short sVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  undefined2 *puVar47;
  short sVar48;
  ulonglong uVar49;
  longlong lVar50;
  ulonglong uVar51;
  short sVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  char cVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  
  sVar23 = _UNK_143089cce;
  sVar22 = _UNK_143089ccc;
  sVar21 = _UNK_143089cca;
  sVar20 = _UNK_143089cc8;
  sVar19 = _UNK_143089cc6;
  sVar18 = _UNK_143089cc4;
  sVar17 = _UNK_143089cc2;
  sVar16 = _DAT_143089cc0;
  uVar42 = 0;
  lVar29 = (longlong)param_2 >> 1;
  lVar33 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar53 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar45 = (longlong)((int)param_6 + -1 >> 1);
  lVar26 = (lVar33 * lVar29 + lVar45) * -2 + param_1;
  if (param_7 == 0) {
    lVar37 = (longlong)param_6._4_4_;
    uVar49 = lVar37 - 1;
    puVar39 = param_9;
    if (uVar49 != 0 && 0 < lVar37) {
      lVar33 = lVar33 * lVar29 * -2;
      param_1 = param_1 + lVar29 * -2;
      lVar50 = 0;
      lVar1 = lVar45 * -2 + lVar29 * 2;
      uVar24 = (ulonglong)(int)param_6;
      lVar54 = 0;
      lVar34 = param_1 + lVar29 * 2;
      do {
        uVar44 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar26 = lVar33 + param_1 + lVar1 + lVar50;
          uVar46 = 0;
          do {
            uVar41 = 0xffff;
            uVar32 = 0xffff;
            if (0 < (longlong)uVar24) {
              uVar36 = uVar46;
              if (7 < (longlong)uVar24) {
                uVar51 = lVar45 * -2 + lVar33 + lVar34 + lVar50 + uVar44 * 2;
                uVar30 = uVar51 & 0xf;
                if (uVar30 != 0) {
                  if ((uVar51 & 1) != 0) goto LAB_14034fb32;
                  uVar30 = 0x10 - uVar30 >> 1;
                }
                if ((longlong)(uVar30 + 8) <= (longlong)uVar24) {
                  lVar2 = lVar26 + uVar44 * 2;
                  uVar36 = uVar24 - (uVar24 - uVar30 & 7);
                  uVar51 = uVar46;
                  if (uVar30 != 0) {
                    do {
                      uVar3 = *(ushort *)(lVar2 + uVar51 * 2);
                      if (uVar3 < uVar41) {
                        uVar41 = (uint)uVar3;
                      }
                      uVar32 = (undefined2)uVar41;
                      uVar51 = uVar51 + 1;
                    } while (uVar51 < uVar30);
                  }
                  auVar56._0_8_ = CONCAT44(CONCAT22(uVar32,uVar32),CONCAT22(uVar32,uVar32));
                  auVar56._8_8_ = auVar56._0_8_;
                  do {
                    auVar67 = *(undefined1 (*) [16])(lVar2 + uVar30 * 2);
                    auVar66._0_2_ =
                         -(ushort)((short)(auVar56._0_2_ - sVar16) < (short)(auVar67._0_2_ - sVar16)
                                  );
                    auVar66._2_2_ =
                         -(ushort)((short)(auVar56._2_2_ - sVar17) < (short)(auVar67._2_2_ - sVar17)
                                  );
                    auVar66._4_2_ =
                         -(ushort)((short)(auVar56._4_2_ - sVar18) < (short)(auVar67._4_2_ - sVar18)
                                  );
                    auVar66._6_2_ =
                         -(ushort)((short)(auVar56._6_2_ - sVar19) < (short)(auVar67._6_2_ - sVar19)
                                  );
                    auVar66._8_2_ =
                         -(ushort)((short)(auVar56._8_2_ - sVar20) < (short)(auVar67._8_2_ - sVar20)
                                  );
                    auVar66._10_2_ =
                         -(ushort)((short)(auVar56._10_2_ - sVar21) <
                                  (short)(auVar67._10_2_ - sVar21));
                    auVar66._12_2_ =
                         -(ushort)((short)(auVar56._12_2_ - sVar22) <
                                  (short)(auVar67._12_2_ - sVar22));
                    auVar66._14_2_ =
                         -(ushort)((short)(auVar56._14_2_ - sVar23) <
                                  (short)(auVar67._14_2_ - sVar23));
                    uVar30 = uVar30 + 8;
                    auVar56 = auVar67 ^ auVar66 & (auVar56 ^ auVar67);
                  } while (uVar30 < uVar36);
                  auVar60._0_2_ =
                       -(ushort)((short)(auVar56._8_2_ - sVar16) < (short)(auVar56._0_2_ - sVar16));
                  auVar60._2_2_ =
                       -(ushort)((short)(auVar56._10_2_ - sVar17) < (short)(auVar56._2_2_ - sVar17))
                  ;
                  auVar60._4_2_ =
                       -(ushort)((short)(auVar56._12_2_ - sVar18) < (short)(auVar56._4_2_ - sVar18))
                  ;
                  auVar60._6_2_ =
                       -(ushort)((short)(auVar56._14_2_ - sVar19) < (short)(auVar56._6_2_ - sVar19))
                  ;
                  auVar60._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar56._8_2_ - sVar20));
                  auVar60._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar56._10_2_ - sVar21));
                  auVar60._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar56._12_2_ - sVar22));
                  auVar60._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar56._14_2_ - sVar23));
                  auVar56 = auVar60 & (auVar56 >> 0x40 ^ auVar56) ^ auVar56;
                  auVar57._0_2_ =
                       -(ushort)((short)(auVar56._4_2_ - sVar16) < (short)(auVar56._0_2_ - sVar16));
                  auVar57._2_2_ =
                       -(ushort)((short)(auVar56._6_2_ - sVar17) < (short)(auVar56._2_2_ - sVar17));
                  auVar57._4_4_ = 0;
                  auVar57._8_2_ =
                       -(ushort)((short)(auVar56._12_2_ - sVar20) < (short)(auVar56._8_2_ - sVar20))
                  ;
                  auVar57._10_2_ =
                       -(ushort)((short)(auVar56._14_2_ - sVar21) < (short)(auVar56._10_2_ - sVar21)
                                );
                  auVar57._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar56._12_2_ - sVar22));
                  auVar57._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar56._14_2_ - sVar23));
                  auVar56 = auVar57 & (auVar56 >> 0x20 ^ auVar56) ^ auVar56;
                  uVar41 = (uint)(ushort)-(ushort)((short)(auVar56._2_2_ - sVar16) <
                                                  (short)(auVar56._0_2_ - sVar16)) &
                           (auVar56._2_4_ ^ auVar56._0_4_) ^ auVar56._0_4_;
                }
              }
LAB_14034fb32:
              uVar32 = (undefined2)uVar41;
              if (uVar36 < uVar24) {
                do {
                  uVar28 = uVar41 & 0xffff;
                  uVar41 = (uint)*(ushort *)(lVar26 + uVar44 * 2 + uVar36 * 2);
                  if (uVar28 <= uVar41) {
                    uVar41 = uVar28;
                  }
                  uVar32 = (undefined2)uVar41;
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar24);
              }
            }
            *(undefined2 *)((longlong)param_9 + uVar44 * 2 + lVar54) = uVar32;
            uVar44 = uVar44 + 1;
          } while (uVar44 < (ulonglong)(longlong)(int)param_5);
        }
        uVar42 = uVar42 + 1;
        lVar26 = lVar34 + lVar1 + lVar33 + lVar50;
        lVar50 = lVar50 + lVar29 * 2;
        puVar39 = (undefined2 *)((longlong)param_9 + lVar54 + uVar53 * 2);
        lVar54 = lVar54 + uVar53 * 2;
      } while (uVar42 < uVar49);
    }
    sVar23 = _UNK_143089cce;
    sVar22 = _UNK_143089ccc;
    sVar21 = _UNK_143089cca;
    sVar20 = _UNK_143089cc8;
    sVar19 = _UNK_143089cc6;
    sVar18 = _UNK_143089cc4;
    sVar17 = _UNK_143089cc2;
    sVar16 = _DAT_143089cc0;
    uVar42 = 0;
    if (0 < param_5._4_4_) {
      uVar24 = (ulonglong)(int)param_6;
      lVar33 = 0;
      do {
        uVar44 = (ulonglong)(int)param_5;
        uVar46 = 0;
        if (0 < (longlong)uVar44) {
          uVar36 = 0;
          puVar47 = puVar39;
          do {
            uVar41 = 0xffff;
            uVar32 = 0xffff;
            if (0 < (longlong)uVar24) {
              uVar51 = uVar36;
              if (7 < (longlong)uVar24) {
                uVar30 = lVar26 + lVar33 + uVar46 * 2;
                uVar31 = uVar30 & 0xf;
                if (uVar31 != 0) {
                  if ((uVar30 & 1) != 0) goto LAB_14034fe12;
                  uVar31 = 0x10 - uVar31 >> 1;
                }
                if ((longlong)(uVar31 + 8) <= (longlong)uVar24) {
                  uVar51 = uVar24 - (uVar24 - uVar31 & 7);
                  uVar55 = uVar36;
                  if (uVar31 != 0) {
                    do {
                      uVar3 = *(ushort *)(uVar30 + uVar55 * 2);
                      if (uVar3 < uVar41) {
                        uVar41 = (uint)uVar3;
                      }
                      uVar32 = (undefined2)uVar41;
                      uVar55 = uVar55 + 1;
                    } while (uVar55 < uVar31);
                  }
                  auVar58._0_8_ = CONCAT44(CONCAT22(uVar32,uVar32),CONCAT22(uVar32,uVar32));
                  auVar58._8_8_ = auVar58._0_8_;
                  do {
                    auVar67 = *(undefined1 (*) [16])(uVar30 + uVar31 * 2);
                    auVar63._0_2_ =
                         -(ushort)((short)(auVar58._0_2_ - sVar16) < (short)(auVar67._0_2_ - sVar16)
                                  );
                    auVar63._2_2_ =
                         -(ushort)((short)(auVar58._2_2_ - sVar17) < (short)(auVar67._2_2_ - sVar17)
                                  );
                    auVar63._4_2_ =
                         -(ushort)((short)(auVar58._4_2_ - sVar18) < (short)(auVar67._4_2_ - sVar18)
                                  );
                    auVar63._6_2_ =
                         -(ushort)((short)(auVar58._6_2_ - sVar19) < (short)(auVar67._6_2_ - sVar19)
                                  );
                    auVar63._8_2_ =
                         -(ushort)((short)(auVar58._8_2_ - sVar20) < (short)(auVar67._8_2_ - sVar20)
                                  );
                    auVar63._10_2_ =
                         -(ushort)((short)(auVar58._10_2_ - sVar21) <
                                  (short)(auVar67._10_2_ - sVar21));
                    auVar63._12_2_ =
                         -(ushort)((short)(auVar58._12_2_ - sVar22) <
                                  (short)(auVar67._12_2_ - sVar22));
                    auVar63._14_2_ =
                         -(ushort)((short)(auVar58._14_2_ - sVar23) <
                                  (short)(auVar67._14_2_ - sVar23));
                    uVar31 = uVar31 + 8;
                    auVar58 = auVar67 ^ auVar63 & (auVar58 ^ auVar67);
                  } while (uVar31 < uVar51);
                  auVar61._0_2_ =
                       -(ushort)((short)(auVar58._8_2_ - sVar16) < (short)(auVar58._0_2_ - sVar16));
                  auVar61._2_2_ =
                       -(ushort)((short)(auVar58._10_2_ - sVar17) < (short)(auVar58._2_2_ - sVar17))
                  ;
                  auVar61._4_2_ =
                       -(ushort)((short)(auVar58._12_2_ - sVar18) < (short)(auVar58._4_2_ - sVar18))
                  ;
                  auVar61._6_2_ =
                       -(ushort)((short)(auVar58._14_2_ - sVar19) < (short)(auVar58._6_2_ - sVar19))
                  ;
                  auVar61._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar58._8_2_ - sVar20));
                  auVar61._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar58._10_2_ - sVar21));
                  auVar61._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._12_2_ - sVar22));
                  auVar61._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar58._14_2_ - sVar23));
                  auVar58 = auVar61 & (auVar58 >> 0x40 ^ auVar58) ^ auVar58;
                  auVar59._0_2_ =
                       -(ushort)((short)(auVar58._4_2_ - sVar16) < (short)(auVar58._0_2_ - sVar16));
                  auVar59._2_2_ =
                       -(ushort)((short)(auVar58._6_2_ - sVar17) < (short)(auVar58._2_2_ - sVar17));
                  auVar59._4_4_ = 0;
                  auVar59._8_2_ =
                       -(ushort)((short)(auVar58._12_2_ - sVar20) < (short)(auVar58._8_2_ - sVar20))
                  ;
                  auVar59._10_2_ =
                       -(ushort)((short)(auVar58._14_2_ - sVar21) < (short)(auVar58._10_2_ - sVar21)
                                );
                  auVar59._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._12_2_ - sVar22));
                  auVar59._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar58._14_2_ - sVar23));
                  auVar58 = auVar59 & (auVar58 >> 0x20 ^ auVar58) ^ auVar58;
                  uVar41 = (uint)(ushort)-(ushort)((short)(auVar58._2_2_ - sVar16) <
                                                  (short)(auVar58._0_2_ - sVar16)) &
                           (auVar58._2_4_ ^ auVar58._0_4_) ^ auVar58._0_4_;
                }
              }
LAB_14034fe12:
              uVar32 = (undefined2)uVar41;
              if (uVar51 < uVar24) {
                do {
                  uVar28 = uVar41 & 0xffff;
                  uVar41 = (uint)*(ushort *)(lVar26 + lVar33 + uVar46 * 2 + uVar51 * 2);
                  if (uVar28 <= uVar41) {
                    uVar41 = uVar28;
                  }
                  uVar32 = (undefined2)uVar41;
                  uVar51 = uVar51 + 1;
                } while (uVar51 < uVar24);
              }
            }
            uVar46 = uVar46 + 1;
            *puVar47 = uVar32;
            puVar47 = puVar47 + 1;
          } while (uVar46 < uVar44);
        }
        FUN_140355860(param_9,uVar53,param_3,uVar44,lVar37);
        uVar49 = uVar49 + 1;
        puVar39 = puVar39 + uVar53;
        if (lVar37 <= (longlong)uVar49) {
          puVar39 = param_9;
          uVar49 = 0;
        }
        uVar42 = uVar42 + 1;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar33 = lVar33 + lVar29 * 2;
      } while (uVar42 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar33 = lVar33 * lVar29 * -2;
    param_1 = param_1 + lVar29 * -2;
    uVar53 = (ulonglong)(int)param_6;
    lVar26 = 0;
    lVar37 = 0;
    do {
      uVar49 = 0;
      if (0 < (int)param_5) {
        do {
          uVar24 = 0;
          uVar41 = 0xffff;
          uVar32 = 0xffff;
          if (0 < param_6._4_4_) {
            lVar1 = param_1 + lVar29 * 2 + lVar45 * -2 + lVar33 + lVar37 + uVar49 * 2;
            uVar44 = uVar24;
            uVar46 = uVar24;
            do {
              uVar36 = 0;
              if (0 < (longlong)uVar53) {
                if (7 < (longlong)uVar53) {
                  uVar65 = CONCAT22((short)uVar41,(short)uVar41);
                  auVar64._8_4_ = 0xffffffff;
                  auVar64._0_8_ = 0xffffffffffffffff;
                  auVar64._12_4_ = 0xffffffff;
                  auVar67._0_8_ = CONCAT44(uVar65,uVar65);
                  auVar67._8_8_ = auVar67._0_8_;
                  lVar34 = lVar33 + param_1 + lVar45 * -2 + lVar29 * 2 + lVar37 + uVar49 * 2 +
                           uVar44;
                  do {
                    uVar51 = *(ulonglong *)(param_7 + uVar46 + uVar36);
                    cVar71 = (char)(uVar51 >> 0x38);
                    auVar4._8_6_ = 0;
                    auVar4._0_8_ = uVar51;
                    auVar4[0xe] = cVar71;
                    auVar5._8_4_ = 0;
                    auVar5._0_8_ = uVar51;
                    auVar5[0xc] = (char)(uVar51 >> 0x30);
                    auVar5._13_2_ = auVar4._13_2_;
                    auVar6._8_4_ = 0;
                    auVar6._0_8_ = uVar51;
                    auVar6._12_3_ = auVar5._12_3_;
                    auVar7._8_2_ = 0;
                    auVar7._0_8_ = uVar51;
                    auVar7[10] = (char)(uVar51 >> 0x28);
                    auVar7._11_4_ = auVar6._11_4_;
                    auVar8._8_2_ = 0;
                    auVar8._0_8_ = uVar51;
                    auVar8._10_5_ = auVar7._10_5_;
                    auVar9[8] = (char)(uVar51 >> 0x20);
                    auVar9._0_8_ = uVar51;
                    auVar9._9_6_ = auVar8._9_6_;
                    auVar10._7_8_ = 0;
                    auVar10._0_7_ = auVar9._8_7_;
                    Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar51 >> 0x18));
                    auVar14._9_6_ = 0;
                    auVar14._0_9_ = Var11;
                    auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                    auVar12[0] = (char)(uVar51 >> 0x10);
                    auVar15._11_4_ = 0;
                    auVar15._0_11_ = auVar12;
                    auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                    auVar13[0] = (char)(uVar51 >> 8);
                    auVar69._0_2_ = -(ushort)((uVar51 & 0xff) == 0);
                    auVar69._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                    auVar69._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                    auVar69._6_2_ = -(ushort)((short)Var11 == 0);
                    auVar69._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                    auVar69._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                    auVar69._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                    auVar69._14_2_ = -(ushort)(cVar71 == '\0');
                    auVar69 = auVar69 ^ auVar64;
                    if ((auVar69 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar48 = 0;
                    }
                    else {
                      sVar48 = *(short *)(lVar1 + uVar44 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar27 = 0;
                    }
                    else {
                      sVar27 = *(short *)(lVar34 + 2 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar25 = 0;
                    }
                    else {
                      sVar25 = *(short *)(lVar34 + 4 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar35 = 0;
                    }
                    else {
                      sVar35 = *(short *)(lVar34 + 6 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar38 = 0;
                    }
                    else {
                      sVar38 = *(short *)(lVar34 + 8 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar40 = 0;
                    }
                    else {
                      sVar40 = *(short *)(lVar34 + 10 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar43 = 0;
                    }
                    else {
                      sVar43 = *(short *)(lVar34 + 0xc + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar52 = 0;
                    }
                    else {
                      sVar52 = *(short *)(lVar34 + 0xe + uVar36 * 2);
                    }
                    auVar68._2_2_ = sVar27;
                    auVar68._0_2_ = sVar48;
                    auVar68._6_2_ = sVar35;
                    auVar68._4_2_ = sVar25;
                    auVar68._10_2_ = sVar40;
                    auVar68._8_2_ = sVar38;
                    auVar68._14_2_ = sVar52;
                    auVar68._12_2_ = sVar43;
                    auVar72._0_2_ =
                         -(ushort)((short)(auVar67._0_2_ - sVar16) < (short)(sVar48 - sVar16));
                    auVar72._2_2_ =
                         -(ushort)((short)(auVar67._2_2_ - sVar17) < (short)(sVar27 - sVar17));
                    auVar72._4_2_ =
                         -(ushort)((short)(auVar67._4_2_ - sVar18) < (short)(sVar25 - sVar18));
                    auVar72._6_2_ =
                         -(ushort)((short)(auVar67._6_2_ - sVar19) < (short)(sVar35 - sVar19));
                    auVar72._8_2_ =
                         -(ushort)((short)(auVar67._8_2_ - sVar20) < (short)(sVar38 - sVar20));
                    auVar72._10_2_ =
                         -(ushort)((short)(auVar67._10_2_ - sVar21) < (short)(sVar40 - sVar21));
                    auVar72._12_2_ =
                         -(ushort)((short)(auVar67._12_2_ - sVar22) < (short)(sVar43 - sVar22));
                    auVar72._14_2_ =
                         -(ushort)((short)(auVar67._14_2_ - sVar23) < (short)(sVar52 - sVar23));
                    uVar36 = uVar36 + 8;
                    auVar67 = (auVar72 & (auVar67 ^ auVar68) ^ auVar68) & auVar69 |
                              ~auVar69 & auVar67;
                  } while (uVar36 < (uVar53 & 0xfffffffffffffff8));
                  auVar70._0_2_ =
                       -(ushort)((short)(auVar67._8_2_ - sVar16) < (short)(auVar67._0_2_ - sVar16));
                  auVar70._2_2_ =
                       -(ushort)((short)(auVar67._10_2_ - sVar17) < (short)(auVar67._2_2_ - sVar17))
                  ;
                  auVar70._4_2_ =
                       -(ushort)((short)(auVar67._12_2_ - sVar18) < (short)(auVar67._4_2_ - sVar18))
                  ;
                  auVar70._6_2_ =
                       -(ushort)((short)(auVar67._14_2_ - sVar19) < (short)(auVar67._6_2_ - sVar19))
                  ;
                  auVar70._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar67._8_2_ - sVar20));
                  auVar70._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar67._10_2_ - sVar21));
                  auVar70._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar67._12_2_ - sVar22));
                  auVar70._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar67._14_2_ - sVar23));
                  auVar67 = auVar70 & (auVar67 >> 0x40 ^ auVar67) ^ auVar67;
                  auVar62._0_2_ =
                       -(ushort)((short)(auVar67._4_2_ - sVar16) < (short)(auVar67._0_2_ - sVar16));
                  auVar62._2_2_ =
                       -(ushort)((short)(auVar67._6_2_ - sVar17) < (short)(auVar67._2_2_ - sVar17));
                  auVar62._4_4_ = 0;
                  auVar62._8_2_ =
                       -(ushort)((short)(auVar67._12_2_ - sVar20) < (short)(auVar67._8_2_ - sVar20))
                  ;
                  auVar62._10_2_ =
                       -(ushort)((short)(auVar67._14_2_ - sVar21) < (short)(auVar67._10_2_ - sVar21)
                                );
                  auVar62._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar67._12_2_ - sVar22));
                  auVar62._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar67._14_2_ - sVar23));
                  auVar67 = auVar62 & (auVar67 >> 0x20 ^ auVar67) ^ auVar67;
                  uVar41 = (uint)(ushort)-(ushort)((short)(auVar67._2_2_ - sVar16) <
                                                  (short)(auVar67._0_2_ - sVar16)) &
                           (auVar67._2_4_ ^ auVar67._0_4_) ^ auVar67._0_4_;
                  uVar36 = uVar53 & 0xfffffffffffffff8;
                }
                if (uVar36 < uVar53) {
                  do {
                    if (*(char *)(uVar36 + param_7 + uVar46) != '\0') {
                      uVar41 = uVar41 & 0xffff;
                      uVar3 = *(ushort *)(lVar1 + uVar44 + uVar36 * 2);
                      if (uVar3 < uVar41) {
                        uVar41 = (uint)uVar3;
                      }
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < uVar53);
                }
              }
              uVar32 = (undefined2)uVar41;
              uVar24 = uVar24 + 1;
              uVar46 = uVar46 + uVar53;
              uVar44 = uVar44 + lVar29 * 2;
            } while (uVar24 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(undefined2 *)(param_3 + lVar26 + uVar49 * 2) = uVar32;
          uVar49 = uVar49 + 1;
        } while (uVar49 < (ulonglong)(longlong)(int)param_5);
      }
      uVar42 = uVar42 + 1;
      lVar26 = lVar26 + ((longlong)param_4 >> 1) * 2;
      lVar37 = lVar37 + lVar29 * 2;
    } while (uVar42 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

