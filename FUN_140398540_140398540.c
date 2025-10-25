
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140398540(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  ushort *param_9)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
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
  undefined2 uVar24;
  ushort uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ushort uVar35;
  short sVar36;
  uint uVar37;
  longlong lVar38;
  short sVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  short sVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ushort *puVar46;
  short sVar47;
  ulonglong uVar48;
  short sVar49;
  short sVar50;
  ushort *puVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  short sVar58;
  short sVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  char cVar73;
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  
  sVar23 = _UNK_143089d8e;
  sVar22 = _UNK_143089d8c;
  sVar21 = _UNK_143089d8a;
  sVar20 = _UNK_143089d88;
  sVar19 = _UNK_143089d86;
  sVar18 = _UNK_143089d84;
  sVar17 = _UNK_143089d82;
  sVar16 = _DAT_143089d80;
  param_2 = param_2 >> 1;
  uVar28 = *param_6;
  uVar44 = param_6[1];
  uVar3 = *param_5;
  uVar40 = uVar44 - 1;
  uVar29 = uVar3 + 0xf & 0xfffffffffffffff0;
  uVar31 = 0;
  param_1 = param_1 + ((int)(uVar40 >> 1) * param_2 + (longlong)(int)(uVar28 - 1 >> 1)) * -2;
  param_4 = param_4 >> 1;
  if (param_7 == 0) {
    lVar27 = param_1;
    puVar51 = param_9;
    if (0 < (longlong)uVar40) {
      lVar43 = 0;
      uVar48 = uVar31;
      do {
        uVar45 = 0;
        if (0 < (longlong)uVar3) {
          uVar32 = 0;
          do {
            uVar25 = 0;
            uVar35 = 0;
            uVar37 = 0;
            if (0 < (longlong)uVar28) {
              uVar30 = uVar32;
              if (7 < (longlong)uVar28) {
                uVar34 = uVar45 * 2 + param_1 + lVar43;
                uVar26 = uVar34 & 0xf;
                if (uVar26 != 0) {
                  if ((uVar34 & 1) != 0) goto LAB_140398805;
                  uVar26 = 0x10 - uVar26 >> 1;
                }
                if ((longlong)(uVar26 + 8) <= (longlong)uVar28) {
                  uVar30 = uVar28 - (uVar28 - uVar26 & 7);
                  uVar41 = uVar32;
                  if (uVar26 != 0) {
                    do {
                      uVar2 = *(ushort *)(uVar34 + uVar41 * 2);
                      uVar35 = uVar25;
                      if (uVar25 < uVar2) {
                        uVar35 = uVar2;
                      }
                      uVar41 = uVar41 + 1;
                      uVar25 = uVar35;
                    } while (uVar41 < uVar26);
                  }
                  auVar52._0_8_ = CONCAT44(CONCAT22(uVar35,uVar35),CONCAT22(uVar35,uVar35));
                  auVar52._8_8_ = auVar52._0_8_;
                  do {
                    auVar65 = *(undefined1 (*) [16])(uVar34 + uVar26 * 2);
                    auVar67._0_2_ =
                         -(ushort)((short)(auVar52._0_2_ - sVar16) < (short)(auVar65._0_2_ - sVar16)
                                  );
                    auVar67._2_2_ =
                         -(ushort)((short)(auVar52._2_2_ - sVar17) < (short)(auVar65._2_2_ - sVar17)
                                  );
                    auVar67._4_2_ =
                         -(ushort)((short)(auVar52._4_2_ - sVar18) < (short)(auVar65._4_2_ - sVar18)
                                  );
                    auVar67._6_2_ =
                         -(ushort)((short)(auVar52._6_2_ - sVar19) < (short)(auVar65._6_2_ - sVar19)
                                  );
                    auVar67._8_2_ =
                         -(ushort)((short)(auVar52._8_2_ - sVar20) < (short)(auVar65._8_2_ - sVar20)
                                  );
                    auVar67._10_2_ =
                         -(ushort)((short)(auVar52._10_2_ - sVar21) <
                                  (short)(auVar65._10_2_ - sVar21));
                    auVar67._12_2_ =
                         -(ushort)((short)(auVar52._12_2_ - sVar22) <
                                  (short)(auVar65._12_2_ - sVar22));
                    auVar67._14_2_ =
                         -(ushort)((short)(auVar52._14_2_ - sVar23) <
                                  (short)(auVar65._14_2_ - sVar23));
                    uVar26 = uVar26 + 8;
                    auVar52 = auVar52 ^ auVar67 & (auVar65 ^ auVar52);
                  } while (uVar26 < uVar30);
                  auVar60._0_8_ = auVar52._8_8_;
                  auVar60._8_4_ = auVar52._0_4_;
                  auVar60._12_4_ = auVar52._0_4_;
                  sVar58 = auVar52._0_2_;
                  sVar63 = auVar52._2_2_;
                  auVar59._0_2_ =
                       -(ushort)((short)(auVar52._8_2_ - sVar16) < (short)(sVar58 - sVar16));
                  auVar59._2_2_ =
                       -(ushort)((short)(auVar52._10_2_ - sVar17) < (short)(sVar63 - sVar17));
                  auVar59._4_2_ =
                       -(ushort)((short)(auVar52._12_2_ - sVar18) < (short)(auVar52._4_2_ - sVar18))
                  ;
                  auVar59._6_2_ =
                       -(ushort)((short)(auVar52._14_2_ - sVar19) < (short)(auVar52._6_2_ - sVar19))
                  ;
                  auVar59._8_2_ =
                       -(ushort)((short)(sVar58 - sVar20) < (short)(auVar52._8_2_ - sVar20));
                  auVar59._10_2_ =
                       -(ushort)((short)(sVar63 - sVar21) < (short)(auVar52._10_2_ - sVar21));
                  auVar59._12_2_ =
                       -(ushort)((short)(sVar58 - sVar22) < (short)(auVar52._12_2_ - sVar22));
                  auVar59._14_2_ =
                       -(ushort)((short)(sVar63 - sVar23) < (short)(auVar52._14_2_ - sVar23));
                  auVar60 = auVar59 & (auVar52 ^ auVar60) ^ auVar60;
                  auVar54._0_12_ = auVar60._4_12_;
                  auVar54._12_4_ = auVar60._0_4_;
                  auVar53._0_2_ =
                       -(ushort)((short)(auVar60._4_2_ - sVar16) < (short)(auVar60._0_2_ - sVar16));
                  auVar53._2_2_ =
                       -(ushort)((short)(auVar60._6_2_ - sVar17) < (short)(auVar60._2_2_ - sVar17));
                  auVar53._4_4_ = 0;
                  auVar53._8_2_ =
                       -(ushort)((short)(auVar60._12_2_ - sVar20) < (short)(auVar60._8_2_ - sVar20))
                  ;
                  auVar53._10_2_ =
                       -(ushort)((short)(auVar60._14_2_ - sVar21) < (short)(auVar60._10_2_ - sVar21)
                                );
                  auVar53._12_2_ =
                       -(ushort)((short)(auVar60._0_2_ - sVar22) < (short)(auVar60._12_2_ - sVar22))
                  ;
                  auVar53._14_2_ =
                       -(ushort)((short)(auVar60._2_2_ - sVar23) < (short)(auVar60._14_2_ - sVar23))
                  ;
                  auVar54 = auVar53 & (auVar60 ^ auVar54) ^ auVar54;
                  uVar37 = (uint)(ushort)-(ushort)((short)(auVar54._2_2_ - sVar16) <
                                                  (short)(auVar54._0_2_ - sVar16)) &
                           (auVar54._0_4_ ^ auVar54._2_4_) ^ auVar54._2_4_;
                }
              }
LAB_140398805:
              uVar35 = (ushort)uVar37;
              if (uVar30 < uVar28) {
                lVar27 = uVar45 * 2 + param_1 + lVar43;
                do {
                  uVar25 = (ushort)uVar37;
                  uVar37 = uVar37 & 0xffff;
                  if (uVar25 < *(ushort *)(lVar27 + uVar30 * 2)) {
                    uVar37 = (uint)*(ushort *)(lVar27 + uVar30 * 2);
                  }
                  uVar35 = (ushort)uVar37;
                  uVar30 = uVar30 + 1;
                } while (uVar30 < uVar28);
              }
            }
            *(ushort *)((longlong)param_9 + uVar45 * 2 + uVar48) = uVar35;
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar3);
        }
        uVar31 = uVar31 + 1;
        lVar27 = param_2 * 2 + lVar43;
        puVar51 = (ushort *)((longlong)param_9 + uVar48 + uVar29 * 2);
        lVar43 = lVar43 + param_2 * 2;
        lVar27 = lVar27 + param_1;
        uVar48 = uVar48 + uVar29 * 2;
      } while (uVar31 < uVar40);
    }
    sVar23 = _UNK_143089d8e;
    sVar22 = _UNK_143089d8c;
    sVar21 = _UNK_143089d8a;
    sVar20 = _UNK_143089d88;
    sVar19 = _UNK_143089d86;
    sVar18 = _UNK_143089d84;
    sVar17 = _UNK_143089d82;
    sVar16 = _DAT_143089d80;
    if (0 < (longlong)param_5[1]) {
      param_3 = param_3 + param_4 * -2;
      lVar43 = 0;
      lVar38 = 0;
      do {
        uVar28 = 0;
        param_3 = param_3 + param_4 * 2;
        lVar43 = lVar43 + 1;
        lVar38 = lVar38 + param_2 * 2;
        if (0 < (longlong)uVar3) {
          uVar31 = *param_6;
          lVar1 = param_2 * -2 + lVar27 + lVar38;
          uVar48 = uVar28;
          puVar46 = puVar51;
          do {
            uVar25 = 0;
            uVar35 = 0;
            uVar37 = 0;
            if (0 < (longlong)uVar31) {
              uVar45 = uVar28;
              if (7 < (longlong)uVar31) {
                uVar30 = uVar48 * 2 + lVar1;
                uVar32 = uVar30 & 0xf;
                if (uVar32 != 0) {
                  if ((uVar30 & 1) != 0) goto LAB_140398ae5;
                  uVar32 = 0x10 - uVar32 >> 1;
                }
                if ((longlong)(uVar32 + 8) <= (longlong)uVar31) {
                  uVar45 = uVar31 - (uVar31 - uVar32 & 7);
                  uVar26 = uVar28;
                  if (uVar32 != 0) {
                    do {
                      uVar2 = *(ushort *)(uVar30 + uVar26 * 2);
                      uVar35 = uVar25;
                      if (uVar25 < uVar2) {
                        uVar35 = uVar2;
                      }
                      uVar26 = uVar26 + 1;
                      uVar25 = uVar35;
                    } while (uVar26 < uVar32);
                  }
                  auVar55._0_8_ = CONCAT44(CONCAT22(uVar35,uVar35),CONCAT22(uVar35,uVar35));
                  auVar55._8_8_ = auVar55._0_8_;
                  do {
                    auVar65 = *(undefined1 (*) [16])(uVar30 + uVar32 * 2);
                    auVar64._0_2_ =
                         -(ushort)((short)(auVar55._0_2_ - sVar16) < (short)(auVar65._0_2_ - sVar16)
                                  );
                    auVar64._2_2_ =
                         -(ushort)((short)(auVar55._2_2_ - sVar17) < (short)(auVar65._2_2_ - sVar17)
                                  );
                    auVar64._4_2_ =
                         -(ushort)((short)(auVar55._4_2_ - sVar18) < (short)(auVar65._4_2_ - sVar18)
                                  );
                    auVar64._6_2_ =
                         -(ushort)((short)(auVar55._6_2_ - sVar19) < (short)(auVar65._6_2_ - sVar19)
                                  );
                    auVar64._8_2_ =
                         -(ushort)((short)(auVar55._8_2_ - sVar20) < (short)(auVar65._8_2_ - sVar20)
                                  );
                    auVar64._10_2_ =
                         -(ushort)((short)(auVar55._10_2_ - sVar21) <
                                  (short)(auVar65._10_2_ - sVar21));
                    auVar64._12_2_ =
                         -(ushort)((short)(auVar55._12_2_ - sVar22) <
                                  (short)(auVar65._12_2_ - sVar22));
                    auVar64._14_2_ =
                         -(ushort)((short)(auVar55._14_2_ - sVar23) <
                                  (short)(auVar65._14_2_ - sVar23));
                    uVar32 = uVar32 + 8;
                    auVar55 = auVar55 ^ auVar64 & (auVar65 ^ auVar55);
                  } while (uVar32 < uVar45);
                  auVar62._0_8_ = auVar55._8_8_;
                  auVar62._8_4_ = auVar55._0_4_;
                  auVar62._12_4_ = auVar55._0_4_;
                  sVar58 = auVar55._0_2_;
                  sVar63 = auVar55._2_2_;
                  auVar61._0_2_ =
                       -(ushort)((short)(auVar55._8_2_ - sVar16) < (short)(sVar58 - sVar16));
                  auVar61._2_2_ =
                       -(ushort)((short)(auVar55._10_2_ - sVar17) < (short)(sVar63 - sVar17));
                  auVar61._4_2_ =
                       -(ushort)((short)(auVar55._12_2_ - sVar18) < (short)(auVar55._4_2_ - sVar18))
                  ;
                  auVar61._6_2_ =
                       -(ushort)((short)(auVar55._14_2_ - sVar19) < (short)(auVar55._6_2_ - sVar19))
                  ;
                  auVar61._8_2_ =
                       -(ushort)((short)(sVar58 - sVar20) < (short)(auVar55._8_2_ - sVar20));
                  auVar61._10_2_ =
                       -(ushort)((short)(sVar63 - sVar21) < (short)(auVar55._10_2_ - sVar21));
                  auVar61._12_2_ =
                       -(ushort)((short)(sVar58 - sVar22) < (short)(auVar55._12_2_ - sVar22));
                  auVar61._14_2_ =
                       -(ushort)((short)(sVar63 - sVar23) < (short)(auVar55._14_2_ - sVar23));
                  auVar62 = auVar61 & (auVar55 ^ auVar62) ^ auVar62;
                  auVar57._0_12_ = auVar62._4_12_;
                  auVar57._12_4_ = auVar62._0_4_;
                  auVar56._0_2_ =
                       -(ushort)((short)(auVar62._4_2_ - sVar16) < (short)(auVar62._0_2_ - sVar16));
                  auVar56._2_2_ =
                       -(ushort)((short)(auVar62._6_2_ - sVar17) < (short)(auVar62._2_2_ - sVar17));
                  auVar56._4_4_ = 0;
                  auVar56._8_2_ =
                       -(ushort)((short)(auVar62._12_2_ - sVar20) < (short)(auVar62._8_2_ - sVar20))
                  ;
                  auVar56._10_2_ =
                       -(ushort)((short)(auVar62._14_2_ - sVar21) < (short)(auVar62._10_2_ - sVar21)
                                );
                  auVar56._12_2_ =
                       -(ushort)((short)(auVar62._0_2_ - sVar22) < (short)(auVar62._12_2_ - sVar22))
                  ;
                  auVar56._14_2_ =
                       -(ushort)((short)(auVar62._2_2_ - sVar23) < (short)(auVar62._14_2_ - sVar23))
                  ;
                  auVar57 = auVar56 & (auVar62 ^ auVar57) ^ auVar57;
                  uVar37 = (uint)(ushort)-(ushort)((short)(auVar57._2_2_ - sVar16) <
                                                  (short)(auVar57._0_2_ - sVar16)) &
                           (auVar57._0_4_ ^ auVar57._2_4_) ^ auVar57._2_4_;
                }
              }
LAB_140398ae5:
              uVar35 = (ushort)uVar37;
              if (uVar45 < uVar31) {
                lVar33 = uVar48 * 2 + lVar1;
                do {
                  uVar25 = (ushort)uVar37;
                  uVar37 = uVar37 & 0xffff;
                  if (uVar25 < *(ushort *)(lVar33 + uVar45 * 2)) {
                    uVar37 = (uint)*(ushort *)(lVar33 + uVar45 * 2);
                  }
                  uVar35 = (ushort)uVar37;
                  uVar45 = uVar45 + 1;
                } while (uVar45 < uVar31);
              }
            }
            uVar48 = uVar48 + 1;
            *puVar46 = uVar35;
            puVar46 = puVar46 + 1;
          } while (uVar48 < uVar3);
        }
        FUN_14039b8e0(param_9,uVar29,param_3,uVar3,uVar44);
        uVar40 = uVar40 + 1;
        uVar44 = param_6[1];
        puVar51 = puVar51 + uVar29;
        if ((longlong)param_6[1] <= (longlong)uVar40) {
          uVar40 = 0;
          puVar51 = param_9;
        }
      } while (lVar43 < (longlong)param_5[1]);
    }
  }
  else {
    uVar40 = param_5[1];
    if (0 < (longlong)uVar40) {
      lVar43 = 0;
      lVar27 = 0;
      do {
        uVar29 = 0;
        if (0 < (longlong)uVar3) {
          uVar48 = uVar29;
          do {
            uVar45 = 0;
            uVar37 = 0;
            uVar24 = 0;
            if (0 < (longlong)uVar44) {
              lVar38 = param_1 + lVar27 + uVar29;
              uVar32 = uVar45;
              uVar30 = uVar45;
              do {
                uVar26 = 0;
                if (0 < (longlong)uVar28) {
                  if (7 < (longlong)uVar28) {
                    lVar1 = lVar38 + uVar45;
                    uVar66 = CONCAT22((short)uVar37,(short)uVar37);
                    auVar65._8_4_ = 0xffffffff;
                    auVar65._0_8_ = 0xffffffffffffffff;
                    auVar65._12_4_ = 0xffffffff;
                    auVar68._0_8_ = CONCAT44(uVar66,uVar66);
                    auVar68._8_8_ = auVar68._0_8_;
                    do {
                      uVar34 = *(ulonglong *)(uVar26 + param_7 + uVar32);
                      cVar73 = (char)(uVar34 >> 0x38);
                      auVar4._8_6_ = 0;
                      auVar4._0_8_ = uVar34;
                      auVar4[0xe] = cVar73;
                      auVar5._8_4_ = 0;
                      auVar5._0_8_ = uVar34;
                      auVar5[0xc] = (char)(uVar34 >> 0x30);
                      auVar5._13_2_ = auVar4._13_2_;
                      auVar6._8_4_ = 0;
                      auVar6._0_8_ = uVar34;
                      auVar6._12_3_ = auVar5._12_3_;
                      auVar7._8_2_ = 0;
                      auVar7._0_8_ = uVar34;
                      auVar7[10] = (char)(uVar34 >> 0x28);
                      auVar7._11_4_ = auVar6._11_4_;
                      auVar8._8_2_ = 0;
                      auVar8._0_8_ = uVar34;
                      auVar8._10_5_ = auVar7._10_5_;
                      auVar9[8] = (char)(uVar34 >> 0x20);
                      auVar9._0_8_ = uVar34;
                      auVar9._9_6_ = auVar8._9_6_;
                      auVar10._7_8_ = 0;
                      auVar10._0_7_ = auVar9._8_7_;
                      Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),(char)(uVar34 >> 0x18));
                      auVar14._9_6_ = 0;
                      auVar14._0_9_ = Var11;
                      auVar12._1_10_ = SUB1510(auVar14 << 0x30,5);
                      auVar12[0] = (char)(uVar34 >> 0x10);
                      auVar15._11_4_ = 0;
                      auVar15._0_11_ = auVar12;
                      auVar13._1_12_ = SUB1512(auVar15 << 0x20,3);
                      auVar13[0] = (char)(uVar34 >> 8);
                      auVar72._0_2_ = -(ushort)((uVar34 & 0xff) == 0);
                      auVar72._2_2_ = -(ushort)(auVar13._0_2_ == 0);
                      auVar72._4_2_ = -(ushort)(auVar12._0_2_ == 0);
                      auVar72._6_2_ = -(ushort)((short)Var11 == 0);
                      auVar72._8_2_ = -(ushort)(auVar9._8_2_ == 0);
                      auVar72._10_2_ = -(ushort)(auVar7._10_2_ == 0);
                      auVar72._12_2_ = -(ushort)(auVar5._12_2_ == 0);
                      auVar72._14_2_ = -(ushort)(cVar73 == '\0');
                      auVar72 = auVar72 ^ auVar65;
                      if ((auVar72 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar58 = 0;
                      }
                      else {
                        sVar58 = *(short *)(lVar1 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar63 = 0;
                      }
                      else {
                        sVar63 = *(short *)(lVar1 + 2 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar36 = 0;
                      }
                      else {
                        sVar36 = *(short *)(lVar1 + 4 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar39 = 0;
                      }
                      else {
                        sVar39 = *(short *)(lVar1 + 6 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar1 + 8 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar47 = 0;
                      }
                      else {
                        sVar47 = *(short *)(lVar1 + 10 + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar49 = 0;
                      }
                      else {
                        sVar49 = *(short *)(lVar1 + 0xc + uVar26 * 2);
                      }
                      if ((auVar72 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar50 = 0;
                      }
                      else {
                        sVar50 = *(short *)(lVar1 + 0xe + uVar26 * 2);
                      }
                      auVar69._2_2_ = sVar63;
                      auVar69._0_2_ = sVar58;
                      auVar69._6_2_ = sVar39;
                      auVar69._4_2_ = sVar36;
                      auVar69._10_2_ = sVar47;
                      auVar69._8_2_ = sVar42;
                      auVar69._14_2_ = sVar50;
                      auVar69._12_2_ = sVar49;
                      uVar26 = uVar26 + 8;
                      auVar74._0_2_ =
                           -(ushort)((short)(auVar68._0_2_ - sVar16) < (short)(sVar58 - sVar16));
                      auVar74._2_2_ =
                           -(ushort)((short)(auVar68._2_2_ - sVar17) < (short)(sVar63 - sVar17));
                      auVar74._4_2_ =
                           -(ushort)((short)(auVar68._4_2_ - sVar18) < (short)(sVar36 - sVar18));
                      auVar74._6_2_ =
                           -(ushort)((short)(auVar68._6_2_ - sVar19) < (short)(sVar39 - sVar19));
                      auVar74._8_2_ =
                           -(ushort)((short)(auVar68._8_2_ - sVar20) < (short)(sVar42 - sVar20));
                      auVar74._10_2_ =
                           -(ushort)((short)(auVar68._10_2_ - sVar21) < (short)(sVar47 - sVar21));
                      auVar74._12_2_ =
                           -(ushort)((short)(auVar68._12_2_ - sVar22) < (short)(sVar49 - sVar22));
                      auVar74._14_2_ =
                           -(ushort)((short)(auVar68._14_2_ - sVar23) < (short)(sVar50 - sVar23));
                      auVar68 = (auVar74 & (auVar69 ^ auVar68) ^ auVar68) & auVar72 |
                                ~auVar72 & auVar68;
                    } while (uVar26 < (uVar28 & 0xfffffffffffffff8));
                    auVar71._0_8_ = auVar68._8_8_;
                    auVar71._8_4_ = auVar68._0_4_;
                    auVar71._12_4_ = auVar68._0_4_;
                    sVar58 = auVar68._0_2_;
                    sVar63 = auVar68._2_2_;
                    auVar70._0_2_ =
                         -(ushort)((short)(auVar68._8_2_ - sVar16) < (short)(sVar58 - sVar16));
                    auVar70._2_2_ =
                         -(ushort)((short)(auVar68._10_2_ - sVar17) < (short)(sVar63 - sVar17));
                    auVar70._4_2_ =
                         -(ushort)((short)(auVar68._12_2_ - sVar18) <
                                  (short)(auVar68._4_2_ - sVar18));
                    auVar70._6_2_ =
                         -(ushort)((short)(auVar68._14_2_ - sVar19) <
                                  (short)(auVar68._6_2_ - sVar19));
                    auVar70._8_2_ =
                         -(ushort)((short)(sVar58 - sVar20) < (short)(auVar68._8_2_ - sVar20));
                    auVar70._10_2_ =
                         -(ushort)((short)(sVar63 - sVar21) < (short)(auVar68._10_2_ - sVar21));
                    auVar70._12_2_ =
                         -(ushort)((short)(sVar58 - sVar22) < (short)(auVar68._12_2_ - sVar22));
                    auVar70._14_2_ =
                         -(ushort)((short)(sVar63 - sVar23) < (short)(auVar68._14_2_ - sVar23));
                    auVar71 = auVar70 & (auVar68 ^ auVar71) ^ auVar71;
                    auVar76._0_12_ = auVar71._4_12_;
                    auVar76._12_4_ = auVar71._0_4_;
                    auVar75._0_2_ =
                         -(ushort)((short)(auVar71._4_2_ - sVar16) < (short)(auVar71._0_2_ - sVar16)
                                  );
                    auVar75._2_2_ =
                         -(ushort)((short)(auVar71._6_2_ - sVar17) < (short)(auVar71._2_2_ - sVar17)
                                  );
                    auVar75._4_4_ = 0;
                    auVar75._8_2_ =
                         -(ushort)((short)(auVar71._12_2_ - sVar20) <
                                  (short)(auVar71._8_2_ - sVar20));
                    auVar75._10_2_ =
                         -(ushort)((short)(auVar71._14_2_ - sVar21) <
                                  (short)(auVar71._10_2_ - sVar21));
                    auVar75._12_2_ =
                         -(ushort)((short)(auVar71._0_2_ - sVar22) <
                                  (short)(auVar71._12_2_ - sVar22));
                    auVar75._14_2_ =
                         -(ushort)((short)(auVar71._2_2_ - sVar23) <
                                  (short)(auVar71._14_2_ - sVar23));
                    auVar76 = auVar75 & (auVar71 ^ auVar76) ^ auVar76;
                    uVar37 = (uint)(ushort)-(ushort)((short)(auVar76._2_2_ - sVar16) <
                                                    (short)(auVar76._0_2_ - sVar16)) &
                             (auVar76._0_4_ ^ auVar76._2_4_) ^ auVar76._2_4_;
                    uVar26 = uVar28 & 0xfffffffffffffff8;
                  }
                  if (uVar26 < uVar28) {
                    lVar1 = lVar38 + uVar45;
                    do {
                      if (*(char *)(uVar26 + param_7 + uVar32) != '\0') {
                        uVar25 = (ushort)uVar37;
                        uVar37 = uVar37 & 0xffff;
                        if (uVar25 < *(ushort *)(lVar1 + uVar26 * 2)) {
                          uVar37 = (uint)*(ushort *)(lVar1 + uVar26 * 2);
                        }
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar28);
                  }
                }
                uVar24 = (undefined2)uVar37;
                uVar30 = uVar30 + 1;
                uVar32 = uVar32 + uVar28;
                uVar45 = uVar45 + param_2 * 2;
              } while (uVar30 < uVar44);
            }
            uVar48 = uVar48 + 1;
            *(undefined2 *)(uVar29 + param_3 + lVar43) = uVar24;
            uVar29 = uVar29 + 2;
          } while (uVar48 < uVar3);
        }
        uVar31 = uVar31 + 1;
        lVar43 = lVar43 + param_4 * 2;
        lVar27 = lVar27 + param_2 * 2;
      } while (uVar31 < uVar40);
    }
  }
  return;
}

