
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402c90c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,ushort *param_9)

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
  ushort *puVar39;
  ushort uVar40;
  ushort uVar41;
  short sVar42;
  uint uVar43;
  ulonglong uVar44;
  short sVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ushort *puVar49;
  short sVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  short sVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  char cVar71;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  
  sVar23 = _UNK_143089b9e;
  sVar22 = _UNK_143089b9c;
  sVar21 = _UNK_143089b9a;
  sVar20 = _UNK_143089b98;
  sVar19 = _UNK_143089b96;
  sVar18 = _UNK_143089b94;
  sVar17 = _UNK_143089b92;
  sVar16 = _DAT_143089b90;
  uVar44 = 0;
  lVar29 = (longlong)param_2 >> 1;
  lVar33 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar55 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar47 = (longlong)((int)param_6 + -1 >> 1);
  lVar26 = (lVar33 * lVar29 + lVar47) * -2 + param_1;
  if (param_7 == 0) {
    lVar37 = (longlong)param_6._4_4_;
    uVar51 = lVar37 - 1;
    puVar39 = param_9;
    if (uVar51 != 0 && 0 < lVar37) {
      lVar33 = lVar33 * lVar29 * -2;
      param_1 = param_1 + lVar29 * -2;
      lVar52 = 0;
      lVar1 = lVar47 * -2 + lVar29 * 2;
      uVar24 = (ulonglong)(int)param_6;
      lVar56 = 0;
      lVar34 = param_1 + lVar29 * 2;
      do {
        uVar46 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar26 = lVar33 + param_1 + lVar1 + lVar52;
          uVar48 = 0;
          do {
            uVar40 = 0;
            uVar43 = 0;
            if (0 < (longlong)uVar24) {
              uVar36 = uVar48;
              if (7 < (longlong)uVar24) {
                uVar53 = lVar47 * -2 + lVar33 + lVar34 + lVar52 + uVar46 * 2;
                uVar30 = uVar53 & 0xf;
                if (uVar30 != 0) {
                  if ((uVar53 & 1) != 0) goto LAB_1402c938e;
                  uVar30 = 0x10 - uVar30 >> 1;
                }
                if ((longlong)(uVar30 + 8) <= (longlong)uVar24) {
                  lVar2 = lVar26 + uVar46 * 2;
                  uVar36 = uVar24 - (uVar24 - uVar30 & 7);
                  uVar53 = uVar48;
                  uVar41 = 0;
                  if (uVar30 != 0) {
                    do {
                      uVar3 = *(ushort *)(lVar2 + uVar53 * 2);
                      uVar40 = uVar41;
                      if (uVar41 < uVar3) {
                        uVar40 = uVar3;
                      }
                      uVar53 = uVar53 + 1;
                      uVar41 = uVar40;
                    } while (uVar53 < uVar30);
                  }
                  auVar58._0_8_ = CONCAT44(CONCAT22(uVar40,uVar40),CONCAT22(uVar40,uVar40));
                  auVar58._8_8_ = auVar58._0_8_;
                  do {
                    auVar63 = *(undefined1 (*) [16])(lVar2 + uVar30 * 2);
                    auVar67._0_2_ =
                         -(ushort)((short)(auVar58._0_2_ - sVar16) < (short)(auVar63._0_2_ - sVar16)
                                  );
                    auVar67._2_2_ =
                         -(ushort)((short)(auVar58._2_2_ - sVar17) < (short)(auVar63._2_2_ - sVar17)
                                  );
                    auVar67._4_2_ =
                         -(ushort)((short)(auVar58._4_2_ - sVar18) < (short)(auVar63._4_2_ - sVar18)
                                  );
                    auVar67._6_2_ =
                         -(ushort)((short)(auVar58._6_2_ - sVar19) < (short)(auVar63._6_2_ - sVar19)
                                  );
                    auVar67._8_2_ =
                         -(ushort)((short)(auVar58._8_2_ - sVar20) < (short)(auVar63._8_2_ - sVar20)
                                  );
                    auVar67._10_2_ =
                         -(ushort)((short)(auVar58._10_2_ - sVar21) <
                                  (short)(auVar63._10_2_ - sVar21));
                    auVar67._12_2_ =
                         -(ushort)((short)(auVar58._12_2_ - sVar22) <
                                  (short)(auVar63._12_2_ - sVar22));
                    auVar67._14_2_ =
                         -(ushort)((short)(auVar58._14_2_ - sVar23) <
                                  (short)(auVar63._14_2_ - sVar23));
                    uVar30 = uVar30 + 8;
                    auVar58 = auVar58 ^ auVar67 & (auVar63 ^ auVar58);
                  } while (uVar30 < uVar36);
                  auVar62._0_2_ =
                       -(ushort)((short)(auVar58._8_2_ - sVar16) < (short)(auVar58._0_2_ - sVar16));
                  auVar62._2_2_ =
                       -(ushort)((short)(auVar58._10_2_ - sVar17) < (short)(auVar58._2_2_ - sVar17))
                  ;
                  auVar62._4_2_ =
                       -(ushort)((short)(auVar58._12_2_ - sVar18) < (short)(auVar58._4_2_ - sVar18))
                  ;
                  auVar62._6_2_ =
                       -(ushort)((short)(auVar58._14_2_ - sVar19) < (short)(auVar58._6_2_ - sVar19))
                  ;
                  auVar62._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar58._8_2_ - sVar20));
                  auVar62._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar58._10_2_ - sVar21));
                  auVar62._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar58._12_2_ - sVar22));
                  auVar62._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar58._14_2_ - sVar23));
                  auVar63 = auVar62 & (auVar58 ^ auVar58 >> 0x40) ^ auVar58 >> 0x40;
                  auVar59._0_2_ =
                       -(ushort)((short)(auVar63._4_2_ - sVar16) < (short)(auVar63._0_2_ - sVar16));
                  auVar59._2_2_ =
                       -(ushort)((short)(auVar63._6_2_ - sVar17) < (short)(auVar63._2_2_ - sVar17));
                  auVar59._4_4_ = 0;
                  auVar59._8_2_ =
                       -(ushort)((short)(auVar63._12_2_ - sVar20) < (short)(auVar63._8_2_ - sVar20))
                  ;
                  auVar59._10_2_ =
                       -(ushort)((short)(auVar63._14_2_ - sVar21) < (short)(auVar63._10_2_ - sVar21)
                                );
                  auVar59._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar63._12_2_ - sVar22));
                  auVar59._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar63._14_2_ - sVar23));
                  auVar63 = auVar59 & (auVar63 ^ auVar63 >> 0x20) ^ auVar63 >> 0x20;
                  uVar43 = (uint)(ushort)-(ushort)((short)(auVar63._2_2_ - sVar16) <
                                                  (short)(auVar63._0_2_ - sVar16)) &
                           (auVar63._0_4_ ^ auVar63._2_4_) ^ auVar63._2_4_;
                }
              }
LAB_1402c938e:
              uVar40 = (ushort)uVar43;
              if (uVar36 < uVar24) {
                do {
                  uVar28 = uVar43 & 0xffff;
                  uVar43 = (uint)*(ushort *)(lVar26 + uVar46 * 2 + uVar36 * 2);
                  if (uVar43 <= uVar28) {
                    uVar43 = uVar28;
                  }
                  uVar40 = (ushort)uVar43;
                  uVar36 = uVar36 + 1;
                } while (uVar36 < uVar24);
              }
            }
            *(ushort *)((longlong)param_9 + uVar46 * 2 + lVar56) = uVar40;
            uVar46 = uVar46 + 1;
          } while (uVar46 < (ulonglong)(longlong)(int)param_5);
        }
        uVar44 = uVar44 + 1;
        lVar26 = lVar34 + lVar1 + lVar33 + lVar52;
        lVar52 = lVar52 + lVar29 * 2;
        puVar39 = (ushort *)((longlong)param_9 + lVar56 + uVar55 * 2);
        lVar56 = lVar56 + uVar55 * 2;
      } while (uVar44 < uVar51);
    }
    sVar23 = _UNK_143089b9e;
    sVar22 = _UNK_143089b9c;
    sVar21 = _UNK_143089b9a;
    sVar20 = _UNK_143089b98;
    sVar19 = _UNK_143089b96;
    sVar18 = _UNK_143089b94;
    sVar17 = _UNK_143089b92;
    sVar16 = _DAT_143089b90;
    uVar44 = 0;
    if (0 < param_5._4_4_) {
      uVar24 = (ulonglong)(int)param_6;
      lVar33 = 0;
      do {
        uVar46 = (ulonglong)(int)param_5;
        uVar48 = 0;
        if (0 < (longlong)uVar46) {
          uVar36 = 0;
          puVar49 = puVar39;
          do {
            uVar40 = 0;
            uVar43 = 0;
            if (0 < (longlong)uVar24) {
              uVar53 = uVar36;
              if (7 < (longlong)uVar24) {
                uVar30 = lVar26 + lVar33 + uVar48 * 2;
                uVar31 = uVar30 & 0xf;
                if (uVar31 != 0) {
                  if ((uVar30 & 1) != 0) goto LAB_1402c964e;
                  uVar31 = 0x10 - uVar31 >> 1;
                }
                if ((longlong)(uVar31 + 8) <= (longlong)uVar24) {
                  uVar53 = uVar24 - (uVar24 - uVar31 & 7);
                  uVar57 = uVar36;
                  uVar41 = 0;
                  if (uVar31 != 0) {
                    do {
                      uVar3 = *(ushort *)(uVar30 + uVar57 * 2);
                      uVar40 = uVar41;
                      if (uVar41 < uVar3) {
                        uVar40 = uVar3;
                      }
                      uVar57 = uVar57 + 1;
                      uVar41 = uVar40;
                    } while (uVar57 < uVar31);
                  }
                  auVar60._0_8_ = CONCAT44(CONCAT22(uVar40,uVar40),CONCAT22(uVar40,uVar40));
                  auVar60._8_8_ = auVar60._0_8_;
                  do {
                    auVar63 = *(undefined1 (*) [16])(uVar30 + uVar31 * 2);
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar60._0_2_ - sVar16) < (short)(auVar63._0_2_ - sVar16)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar60._2_2_ - sVar17) < (short)(auVar63._2_2_ - sVar17)
                                  );
                    auVar65._4_2_ =
                         -(ushort)((short)(auVar60._4_2_ - sVar18) < (short)(auVar63._4_2_ - sVar18)
                                  );
                    auVar65._6_2_ =
                         -(ushort)((short)(auVar60._6_2_ - sVar19) < (short)(auVar63._6_2_ - sVar19)
                                  );
                    auVar65._8_2_ =
                         -(ushort)((short)(auVar60._8_2_ - sVar20) < (short)(auVar63._8_2_ - sVar20)
                                  );
                    auVar65._10_2_ =
                         -(ushort)((short)(auVar60._10_2_ - sVar21) <
                                  (short)(auVar63._10_2_ - sVar21));
                    auVar65._12_2_ =
                         -(ushort)((short)(auVar60._12_2_ - sVar22) <
                                  (short)(auVar63._12_2_ - sVar22));
                    auVar65._14_2_ =
                         -(ushort)((short)(auVar60._14_2_ - sVar23) <
                                  (short)(auVar63._14_2_ - sVar23));
                    uVar31 = uVar31 + 8;
                    auVar60 = auVar60 ^ auVar65 & (auVar63 ^ auVar60);
                  } while (uVar31 < uVar53);
                  auVar64._0_2_ =
                       -(ushort)((short)(auVar60._8_2_ - sVar16) < (short)(auVar60._0_2_ - sVar16));
                  auVar64._2_2_ =
                       -(ushort)((short)(auVar60._10_2_ - sVar17) < (short)(auVar60._2_2_ - sVar17))
                  ;
                  auVar64._4_2_ =
                       -(ushort)((short)(auVar60._12_2_ - sVar18) < (short)(auVar60._4_2_ - sVar18))
                  ;
                  auVar64._6_2_ =
                       -(ushort)((short)(auVar60._14_2_ - sVar19) < (short)(auVar60._6_2_ - sVar19))
                  ;
                  auVar64._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar60._8_2_ - sVar20));
                  auVar64._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar60._10_2_ - sVar21));
                  auVar64._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar60._12_2_ - sVar22));
                  auVar64._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar60._14_2_ - sVar23));
                  auVar63 = auVar64 & (auVar60 ^ auVar60 >> 0x40) ^ auVar60 >> 0x40;
                  auVar61._0_2_ =
                       -(ushort)((short)(auVar63._4_2_ - sVar16) < (short)(auVar63._0_2_ - sVar16));
                  auVar61._2_2_ =
                       -(ushort)((short)(auVar63._6_2_ - sVar17) < (short)(auVar63._2_2_ - sVar17));
                  auVar61._4_4_ = 0;
                  auVar61._8_2_ =
                       -(ushort)((short)(auVar63._12_2_ - sVar20) < (short)(auVar63._8_2_ - sVar20))
                  ;
                  auVar61._10_2_ =
                       -(ushort)((short)(auVar63._14_2_ - sVar21) < (short)(auVar63._10_2_ - sVar21)
                                );
                  auVar61._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar63._12_2_ - sVar22));
                  auVar61._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar63._14_2_ - sVar23));
                  auVar63 = auVar61 & (auVar63 ^ auVar63 >> 0x20) ^ auVar63 >> 0x20;
                  uVar43 = (uint)(ushort)-(ushort)((short)(auVar63._2_2_ - sVar16) <
                                                  (short)(auVar63._0_2_ - sVar16)) &
                           (auVar63._0_4_ ^ auVar63._2_4_) ^ auVar63._2_4_;
                }
              }
LAB_1402c964e:
              uVar40 = (ushort)uVar43;
              if (uVar53 < uVar24) {
                do {
                  uVar28 = uVar43 & 0xffff;
                  uVar43 = (uint)*(ushort *)(lVar26 + lVar33 + uVar48 * 2 + uVar53 * 2);
                  if (uVar43 <= uVar28) {
                    uVar43 = uVar28;
                  }
                  uVar40 = (ushort)uVar43;
                  uVar53 = uVar53 + 1;
                } while (uVar53 < uVar24);
              }
            }
            uVar48 = uVar48 + 1;
            *puVar49 = uVar40;
            puVar49 = puVar49 + 1;
          } while (uVar48 < uVar46);
        }
        FUN_1402d22e0(param_9,uVar55,param_3,uVar46,lVar37);
        uVar51 = uVar51 + 1;
        puVar39 = puVar39 + uVar55;
        if (lVar37 <= (longlong)uVar51) {
          puVar39 = param_9;
          uVar51 = 0;
        }
        uVar44 = uVar44 + 1;
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar33 = lVar33 + lVar29 * 2;
      } while (uVar44 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar33 = lVar33 * lVar29 * -2;
    param_1 = param_1 + lVar29 * -2;
    uVar55 = (ulonglong)(int)param_6;
    lVar26 = 0;
    lVar37 = 0;
    do {
      uVar51 = 0;
      if (0 < (int)param_5) {
        do {
          uVar24 = 0;
          uVar43 = 0;
          uVar32 = 0;
          if (0 < param_6._4_4_) {
            lVar1 = param_1 + lVar29 * 2 + lVar47 * -2 + lVar33 + lVar37 + uVar51 * 2;
            uVar46 = uVar24;
            uVar48 = uVar24;
            do {
              uVar36 = 0;
              if (0 < (longlong)uVar55) {
                if (7 < (longlong)uVar55) {
                  uVar66 = CONCAT22((short)uVar43,(short)uVar43);
                  auVar63._8_4_ = 0xffffffff;
                  auVar63._0_8_ = 0xffffffffffffffff;
                  auVar63._12_4_ = 0xffffffff;
                  auVar68._0_8_ = CONCAT44(uVar66,uVar66);
                  auVar68._8_8_ = auVar68._0_8_;
                  lVar34 = lVar33 + param_1 + lVar47 * -2 + lVar29 * 2 + lVar37 + uVar51 * 2 +
                           uVar46;
                  do {
                    uVar53 = *(ulonglong *)(param_7 + uVar48 + uVar36);
                    cVar71 = (char)(uVar53 >> 0x38);
                    auVar4._8_6_ = 0;
                    auVar4._0_8_ = uVar53;
                    auVar4[0xe] = cVar71;
                    auVar5._8_4_ = 0;
                    auVar5._0_8_ = uVar53;
                    auVar5[0xc] = (char)(uVar53 >> 0x30);
                    auVar5._13_2_ = auVar4._13_2_;
                    auVar6._8_4_ = 0;
                    auVar6._0_8_ = uVar53;
                    auVar6._12_3_ = auVar5._12_3_;
                    auVar7._8_2_ = 0;
                    auVar7._0_8_ = uVar53;
                    auVar7[10] = (char)(uVar53 >> 0x28);
                    auVar7._11_4_ = auVar6._11_4_;
                    auVar8._8_2_ = 0;
                    auVar8._0_8_ = uVar53;
                    auVar8._10_5_ = auVar7._10_5_;
                    auVar9[8] = (char)(uVar53 >> 0x20);
                    auVar9._0_8_ = uVar53;
                    auVar9._9_6_ = auVar8._9_6_;
                    auVar10._7_8_ = 0;
                    auVar10._0_7_ = auVar9._8_7_;
                    Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar53 >> 0x18));
                    auVar14._9_6_ = 0;
                    auVar14._0_9_ = Var11;
                    auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                    auVar12[0] = (char)(uVar53 >> 0x10);
                    auVar15._11_4_ = 0;
                    auVar15._0_11_ = auVar12;
                    auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                    auVar13[0] = (char)(uVar53 >> 8);
                    auVar69._0_2_ = -(ushort)((uVar53 & 0xff) == 0);
                    auVar69._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                    auVar69._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                    auVar69._6_2_ = -(ushort)((short)Var11 == 0);
                    auVar69._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                    auVar69._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                    auVar69._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                    auVar69._14_2_ = -(ushort)(cVar71 == '\0');
                    auVar69 = auVar69 ^ auVar63;
                    if ((auVar69 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar50 = 0;
                    }
                    else {
                      sVar50 = *(short *)(lVar1 + uVar46 + uVar36 * 2);
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
                      sVar42 = 0;
                    }
                    else {
                      sVar42 = *(short *)(lVar34 + 10 + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar45 = 0;
                    }
                    else {
                      sVar45 = *(short *)(lVar34 + 0xc + uVar36 * 2);
                    }
                    if ((auVar69 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar54 = 0;
                    }
                    else {
                      sVar54 = *(short *)(lVar34 + 0xe + uVar36 * 2);
                    }
                    auVar72._2_2_ = sVar27;
                    auVar72._0_2_ = sVar50;
                    auVar72._6_2_ = sVar35;
                    auVar72._4_2_ = sVar25;
                    auVar72._10_2_ = sVar42;
                    auVar72._8_2_ = sVar38;
                    auVar72._14_2_ = sVar54;
                    auVar72._12_2_ = sVar45;
                    uVar36 = uVar36 + 8;
                    auVar73._0_2_ =
                         -(ushort)((short)(auVar68._0_2_ - sVar16) < (short)(sVar50 - sVar16));
                    auVar73._2_2_ =
                         -(ushort)((short)(auVar68._2_2_ - sVar17) < (short)(sVar27 - sVar17));
                    auVar73._4_2_ =
                         -(ushort)((short)(auVar68._4_2_ - sVar18) < (short)(sVar25 - sVar18));
                    auVar73._6_2_ =
                         -(ushort)((short)(auVar68._6_2_ - sVar19) < (short)(sVar35 - sVar19));
                    auVar73._8_2_ =
                         -(ushort)((short)(auVar68._8_2_ - sVar20) < (short)(sVar38 - sVar20));
                    auVar73._10_2_ =
                         -(ushort)((short)(auVar68._10_2_ - sVar21) < (short)(sVar42 - sVar21));
                    auVar73._12_2_ =
                         -(ushort)((short)(auVar68._12_2_ - sVar22) < (short)(sVar45 - sVar22));
                    auVar73._14_2_ =
                         -(ushort)((short)(auVar68._14_2_ - sVar23) < (short)(sVar54 - sVar23));
                    auVar68 = (auVar73 & (auVar72 ^ auVar68) ^ auVar68) & auVar69 |
                              ~auVar69 & auVar68;
                  } while (uVar36 < (uVar55 & 0xfffffffffffffff8));
                  auVar70._0_2_ =
                       -(ushort)((short)(auVar68._8_2_ - sVar16) < (short)(auVar68._0_2_ - sVar16));
                  auVar70._2_2_ =
                       -(ushort)((short)(auVar68._10_2_ - sVar17) < (short)(auVar68._2_2_ - sVar17))
                  ;
                  auVar70._4_2_ =
                       -(ushort)((short)(auVar68._12_2_ - sVar18) < (short)(auVar68._4_2_ - sVar18))
                  ;
                  auVar70._6_2_ =
                       -(ushort)((short)(auVar68._14_2_ - sVar19) < (short)(auVar68._6_2_ - sVar19))
                  ;
                  auVar70._8_2_ = -(ushort)((short)-sVar20 < (short)(auVar68._8_2_ - sVar20));
                  auVar70._10_2_ = -(ushort)((short)-sVar21 < (short)(auVar68._10_2_ - sVar21));
                  auVar70._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar68._12_2_ - sVar22));
                  auVar70._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar68._14_2_ - sVar23));
                  auVar63 = auVar70 & (auVar68 ^ auVar68 >> 0x40) ^ auVar68 >> 0x40;
                  auVar74._0_2_ =
                       -(ushort)((short)(auVar63._4_2_ - sVar16) < (short)(auVar63._0_2_ - sVar16));
                  auVar74._2_2_ =
                       -(ushort)((short)(auVar63._6_2_ - sVar17) < (short)(auVar63._2_2_ - sVar17));
                  auVar74._4_4_ = 0;
                  auVar74._8_2_ =
                       -(ushort)((short)(auVar63._12_2_ - sVar20) < (short)(auVar63._8_2_ - sVar20))
                  ;
                  auVar74._10_2_ =
                       -(ushort)((short)(auVar63._14_2_ - sVar21) < (short)(auVar63._10_2_ - sVar21)
                                );
                  auVar74._12_2_ = -(ushort)((short)-sVar22 < (short)(auVar63._12_2_ - sVar22));
                  auVar74._14_2_ = -(ushort)((short)-sVar23 < (short)(auVar63._14_2_ - sVar23));
                  auVar63 = auVar74 & (auVar63 ^ auVar63 >> 0x20) ^ auVar63 >> 0x20;
                  uVar43 = (uint)(ushort)-(ushort)((short)(auVar63._2_2_ - sVar16) <
                                                  (short)(auVar63._0_2_ - sVar16)) &
                           (auVar63._0_4_ ^ auVar63._2_4_) ^ auVar63._2_4_;
                  uVar36 = uVar55 & 0xfffffffffffffff8;
                }
                if (uVar36 < uVar55) {
                  do {
                    if (*(char *)(uVar36 + param_7 + uVar48) != '\0') {
                      uVar43 = uVar43 & 0xffff;
                      uVar40 = *(ushort *)(lVar1 + uVar46 + uVar36 * 2);
                      if (uVar43 < uVar40) {
                        uVar43 = (uint)uVar40;
                      }
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < uVar55);
                }
              }
              uVar32 = (undefined2)uVar43;
              uVar24 = uVar24 + 1;
              uVar48 = uVar48 + uVar55;
              uVar46 = uVar46 + lVar29 * 2;
            } while (uVar24 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(undefined2 *)(param_3 + lVar26 + uVar51 * 2) = uVar32;
          uVar51 = uVar51 + 1;
        } while (uVar51 < (ulonglong)(longlong)(int)param_5);
      }
      uVar44 = uVar44 + 1;
      lVar26 = lVar26 + ((longlong)param_4 >> 1) * 2;
      lVar37 = lVar37 + lVar29 * 2;
    } while (uVar44 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

