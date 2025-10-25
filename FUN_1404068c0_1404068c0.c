
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404068c0(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,undefined2 *param_9)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  unkuint9 Var8;
  undefined1 auVar9 [11];
  undefined1 auVar10 [13];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  ulonglong uVar21;
  short sVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  short sVar26;
  ulonglong uVar27;
  undefined2 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined2 uVar33;
  ushort uVar34;
  ulonglong uVar35;
  short sVar36;
  uint uVar37;
  short sVar38;
  longlong lVar39;
  ulonglong uVar40;
  short sVar41;
  undefined2 *puVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  short sVar48;
  longlong lVar49;
  longlong lVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  short sVar55;
  short sVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
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
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  char cVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  
  sVar20 = _UNK_143089ede;
  sVar19 = _UNK_143089edc;
  sVar18 = _UNK_143089eda;
  sVar17 = _UNK_143089ed8;
  sVar16 = _UNK_143089ed6;
  sVar15 = _UNK_143089ed4;
  sVar14 = _UNK_143089ed2;
  sVar13 = _DAT_143089ed0;
  uVar35 = 0;
  lVar24 = (longlong)param_2 >> 1;
  lVar43 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar21 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar39 = (longlong)((int)param_6 + -1 >> 1);
  lVar49 = (lVar24 * lVar43 + lVar39) * -2 + param_1;
  if (param_7 == 0) {
    uVar30 = (longlong)param_6._4_4_ - 1;
    puVar28 = param_9;
    if (uVar30 != 0 && 0 < (longlong)param_6._4_4_) {
      lVar45 = lVar24 * 2;
      lVar39 = lVar39 * -2;
      lVar43 = lVar43 * lVar24 * -2;
      lVar50 = lVar24 * -2 + param_1;
      lVar32 = 0;
      uVar47 = uVar35;
      do {
        uVar27 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar49 = lVar43 + lVar50 + lVar39 + lVar45 + lVar32;
          uVar44 = 0;
          uVar46 = (ulonglong)(int)param_6;
          do {
            uVar37 = 0xffff;
            uVar33 = 0xffff;
            if (0 < (longlong)uVar46) {
              uVar31 = uVar44;
              if (7 < (longlong)uVar46) {
                uVar29 = uVar27 * 2 + lVar45 + lVar50 + lVar39 + lVar43 + lVar32;
                uVar23 = uVar29 & 0xf;
                if (uVar23 != 0) {
                  if ((uVar29 & 1) != 0) goto LAB_140406bca;
                  uVar23 = 0x10 - uVar23 >> 1;
                }
                if ((longlong)(uVar23 + 8) <= (longlong)uVar46) {
                  lVar25 = uVar27 * 2 + lVar49;
                  uVar31 = uVar46 - (uVar46 - uVar23 & 7);
                  uVar29 = uVar44;
                  if (uVar23 != 0) {
                    do {
                      uVar34 = *(ushort *)(lVar25 + uVar29 * 2);
                      if (uVar34 < uVar37) {
                        uVar37 = (uint)uVar34;
                      }
                      uVar33 = (undefined2)uVar37;
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < uVar23);
                  }
                  auVar51._0_8_ = CONCAT44(CONCAT22(uVar33,uVar33),CONCAT22(uVar33,uVar33));
                  auVar51._8_8_ = auVar51._0_8_;
                  do {
                    auVar68 = *(undefined1 (*) [16])(lVar25 + uVar23 * 2);
                    auVar66._0_2_ =
                         -(ushort)((short)(auVar51._0_2_ - sVar13) < (short)(auVar68._0_2_ - sVar13)
                                  );
                    auVar66._2_2_ =
                         -(ushort)((short)(auVar51._2_2_ - sVar14) < (short)(auVar68._2_2_ - sVar14)
                                  );
                    auVar66._4_2_ =
                         -(ushort)((short)(auVar51._4_2_ - sVar15) < (short)(auVar68._4_2_ - sVar15)
                                  );
                    auVar66._6_2_ =
                         -(ushort)((short)(auVar51._6_2_ - sVar16) < (short)(auVar68._6_2_ - sVar16)
                                  );
                    auVar66._8_2_ =
                         -(ushort)((short)(auVar51._8_2_ - sVar17) < (short)(auVar68._8_2_ - sVar17)
                                  );
                    auVar66._10_2_ =
                         -(ushort)((short)(auVar51._10_2_ - sVar18) <
                                  (short)(auVar68._10_2_ - sVar18));
                    auVar66._12_2_ =
                         -(ushort)((short)(auVar51._12_2_ - sVar19) <
                                  (short)(auVar68._12_2_ - sVar19));
                    auVar66._14_2_ =
                         -(ushort)((short)(auVar51._14_2_ - sVar20) <
                                  (short)(auVar68._14_2_ - sVar20));
                    auVar51 = auVar66 & (auVar68 ^ auVar51) ^
                              *(undefined1 (*) [16])(lVar25 + uVar23 * 2);
                    uVar23 = uVar23 + 8;
                  } while (uVar23 < uVar31);
                  auVar67._0_8_ = auVar51._8_8_;
                  auVar67._8_4_ = auVar51._0_4_;
                  auVar67._12_4_ = auVar51._0_4_;
                  sVar55 = auVar51._0_2_;
                  sVar58 = auVar51._2_2_;
                  auVar56._0_2_ =
                       -(ushort)((short)(auVar51._8_2_ - sVar13) < (short)(sVar55 - sVar13));
                  auVar56._2_2_ =
                       -(ushort)((short)(auVar51._10_2_ - sVar14) < (short)(sVar58 - sVar14));
                  auVar56._4_2_ =
                       -(ushort)((short)(auVar51._12_2_ - sVar15) < (short)(auVar51._4_2_ - sVar15))
                  ;
                  auVar56._6_2_ =
                       -(ushort)((short)(auVar51._14_2_ - sVar16) < (short)(auVar51._6_2_ - sVar16))
                  ;
                  auVar56._8_2_ =
                       -(ushort)((short)(sVar55 - sVar17) < (short)(auVar51._8_2_ - sVar17));
                  auVar56._10_2_ =
                       -(ushort)((short)(sVar58 - sVar18) < (short)(auVar51._10_2_ - sVar18));
                  auVar56._12_2_ =
                       -(ushort)((short)(sVar55 - sVar19) < (short)(auVar51._12_2_ - sVar19));
                  auVar56._14_2_ =
                       -(ushort)((short)(sVar58 - sVar20) < (short)(auVar51._14_2_ - sVar20));
                  auVar51 = auVar56 & (auVar67 ^ auVar51) ^ auVar51;
                  auVar60._0_12_ = auVar51._4_12_;
                  auVar60._12_4_ = auVar51._0_4_;
                  auVar52._0_2_ =
                       -(ushort)((short)(auVar51._4_2_ - sVar13) < (short)(auVar51._0_2_ - sVar13));
                  auVar52._2_2_ =
                       -(ushort)((short)(auVar51._6_2_ - sVar14) < (short)(auVar51._2_2_ - sVar14));
                  auVar52._4_4_ = 0;
                  auVar52._8_2_ =
                       -(ushort)((short)(auVar51._12_2_ - sVar17) < (short)(auVar51._8_2_ - sVar17))
                  ;
                  auVar52._10_2_ =
                       -(ushort)((short)(auVar51._14_2_ - sVar18) < (short)(auVar51._10_2_ - sVar18)
                                );
                  auVar52._12_2_ =
                       -(ushort)((short)(auVar51._0_2_ - sVar19) < (short)(auVar51._12_2_ - sVar19))
                  ;
                  auVar52._14_2_ =
                       -(ushort)((short)(auVar51._2_2_ - sVar20) < (short)(auVar51._14_2_ - sVar20))
                  ;
                  auVar51 = auVar52 & (auVar60 ^ auVar51) ^ auVar51;
                  uVar37 = (uint)(ushort)-(ushort)((short)(auVar51._2_2_ - sVar13) <
                                                  (short)(auVar51._0_2_ - sVar13)) &
                           (auVar51._2_4_ ^ auVar51._0_4_) ^ auVar51._0_4_;
                }
              }
LAB_140406bca:
              uVar33 = (undefined2)uVar37;
              if (uVar31 < uVar46) {
                lVar25 = uVar27 * 2 + lVar49;
                do {
                  uVar34 = (ushort)uVar37;
                  uVar37 = uVar37 & 0xffff;
                  if (*(ushort *)(lVar25 + uVar31 * 2) < uVar34) {
                    uVar37 = (uint)*(ushort *)(lVar25 + uVar31 * 2);
                  }
                  uVar33 = (undefined2)uVar37;
                  uVar31 = uVar31 + 1;
                } while (uVar31 < uVar46);
              }
            }
            *(undefined2 *)((longlong)param_9 + uVar27 * 2 + uVar35) = uVar33;
            uVar27 = uVar27 + 1;
          } while (uVar27 < (ulonglong)(longlong)(int)param_5);
        }
        uVar47 = uVar47 + 1;
        lVar49 = lVar32 + param_1 + lVar43;
        puVar28 = (undefined2 *)((longlong)param_9 + uVar35 + uVar21 * 2);
        lVar32 = lVar32 + lVar45;
        lVar49 = lVar49 + lVar24 * 2 + lVar39;
        uVar35 = uVar35 + uVar21 * 2;
      } while (uVar47 < uVar30);
    }
    sVar20 = _UNK_143089ede;
    sVar19 = _UNK_143089edc;
    sVar18 = _UNK_143089eda;
    sVar17 = _UNK_143089ed8;
    sVar16 = _UNK_143089ed6;
    sVar15 = _UNK_143089ed4;
    sVar14 = _UNK_143089ed2;
    sVar13 = _DAT_143089ed0;
    uVar35 = 0;
    if (0 < param_5._4_4_) {
      lVar39 = 0;
      uVar47 = (ulonglong)(int)param_5;
      do {
        uVar27 = 0;
        if (0 < (longlong)uVar47) {
          uVar46 = (ulonglong)(int)param_6;
          puVar42 = puVar28;
          uVar44 = uVar27;
          do {
            uVar37 = 0xffff;
            uVar33 = 0xffff;
            if (0 < (longlong)uVar46) {
              uVar31 = uVar27;
              if (7 < (longlong)uVar46) {
                uVar29 = uVar44 * 2 + lVar49 + lVar39;
                uVar23 = uVar29 & 0xf;
                if (uVar23 != 0) {
                  if ((uVar29 & 1) != 0) goto LAB_140406ecb;
                  uVar23 = 0x10 - uVar23 >> 1;
                }
                if ((longlong)(uVar23 + 8) <= (longlong)uVar46) {
                  uVar31 = uVar46 - (uVar46 - uVar23 & 7);
                  uVar40 = uVar27;
                  if (uVar23 != 0) {
                    do {
                      uVar34 = *(ushort *)(uVar29 + uVar40 * 2);
                      if (uVar34 < uVar37) {
                        uVar37 = (uint)uVar34;
                      }
                      uVar33 = (undefined2)uVar37;
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar23);
                  }
                  auVar53._0_8_ = CONCAT44(CONCAT22(uVar33,uVar33),CONCAT22(uVar33,uVar33));
                  auVar53._8_8_ = auVar53._0_8_;
                  do {
                    auVar68 = *(undefined1 (*) [16])(uVar29 + uVar23 * 2);
                    auVar61._0_2_ =
                         -(ushort)((short)(auVar53._0_2_ - sVar13) < (short)(auVar68._0_2_ - sVar13)
                                  );
                    auVar61._2_2_ =
                         -(ushort)((short)(auVar53._2_2_ - sVar14) < (short)(auVar68._2_2_ - sVar14)
                                  );
                    auVar61._4_2_ =
                         -(ushort)((short)(auVar53._4_2_ - sVar15) < (short)(auVar68._4_2_ - sVar15)
                                  );
                    auVar61._6_2_ =
                         -(ushort)((short)(auVar53._6_2_ - sVar16) < (short)(auVar68._6_2_ - sVar16)
                                  );
                    auVar61._8_2_ =
                         -(ushort)((short)(auVar53._8_2_ - sVar17) < (short)(auVar68._8_2_ - sVar17)
                                  );
                    auVar61._10_2_ =
                         -(ushort)((short)(auVar53._10_2_ - sVar18) <
                                  (short)(auVar68._10_2_ - sVar18));
                    auVar61._12_2_ =
                         -(ushort)((short)(auVar53._12_2_ - sVar19) <
                                  (short)(auVar68._12_2_ - sVar19));
                    auVar61._14_2_ =
                         -(ushort)((short)(auVar53._14_2_ - sVar20) <
                                  (short)(auVar68._14_2_ - sVar20));
                    auVar53 = auVar61 & (auVar68 ^ auVar53) ^
                              *(undefined1 (*) [16])(uVar29 + uVar23 * 2);
                    uVar23 = uVar23 + 8;
                  } while (uVar23 < uVar31);
                  auVar62._0_8_ = auVar53._8_8_;
                  auVar62._8_4_ = auVar53._0_4_;
                  auVar62._12_4_ = auVar53._0_4_;
                  sVar55 = auVar53._0_2_;
                  sVar58 = auVar53._2_2_;
                  auVar57._0_2_ =
                       -(ushort)((short)(auVar53._8_2_ - sVar13) < (short)(sVar55 - sVar13));
                  auVar57._2_2_ =
                       -(ushort)((short)(auVar53._10_2_ - sVar14) < (short)(sVar58 - sVar14));
                  auVar57._4_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar15) < (short)(auVar53._4_2_ - sVar15))
                  ;
                  auVar57._6_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar16) < (short)(auVar53._6_2_ - sVar16))
                  ;
                  auVar57._8_2_ =
                       -(ushort)((short)(sVar55 - sVar17) < (short)(auVar53._8_2_ - sVar17));
                  auVar57._10_2_ =
                       -(ushort)((short)(sVar58 - sVar18) < (short)(auVar53._10_2_ - sVar18));
                  auVar57._12_2_ =
                       -(ushort)((short)(sVar55 - sVar19) < (short)(auVar53._12_2_ - sVar19));
                  auVar57._14_2_ =
                       -(ushort)((short)(sVar58 - sVar20) < (short)(auVar53._14_2_ - sVar20));
                  auVar53 = auVar57 & (auVar62 ^ auVar53) ^ auVar53;
                  auVar69._0_12_ = auVar53._4_12_;
                  auVar69._12_4_ = auVar53._0_4_;
                  auVar54._0_2_ =
                       -(ushort)((short)(auVar53._4_2_ - sVar13) < (short)(auVar53._0_2_ - sVar13));
                  auVar54._2_2_ =
                       -(ushort)((short)(auVar53._6_2_ - sVar14) < (short)(auVar53._2_2_ - sVar14));
                  auVar54._4_4_ = 0;
                  auVar54._8_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar17) < (short)(auVar53._8_2_ - sVar17))
                  ;
                  auVar54._10_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar18) < (short)(auVar53._10_2_ - sVar18)
                                );
                  auVar54._12_2_ =
                       -(ushort)((short)(auVar53._0_2_ - sVar19) < (short)(auVar53._12_2_ - sVar19))
                  ;
                  auVar54._14_2_ =
                       -(ushort)((short)(auVar53._2_2_ - sVar20) < (short)(auVar53._14_2_ - sVar20))
                  ;
                  auVar53 = auVar54 & (auVar69 ^ auVar53) ^ auVar53;
                  uVar37 = (uint)(ushort)-(ushort)((short)(auVar53._2_2_ - sVar13) <
                                                  (short)(auVar53._0_2_ - sVar13)) &
                           (auVar53._2_4_ ^ auVar53._0_4_) ^ auVar53._0_4_;
                }
              }
LAB_140406ecb:
              uVar33 = (undefined2)uVar37;
              if (uVar31 < uVar46) {
                lVar43 = uVar44 * 2 + lVar49 + lVar39;
                do {
                  uVar34 = (ushort)uVar37;
                  uVar37 = uVar37 & 0xffff;
                  if (*(ushort *)(lVar43 + uVar31 * 2) < uVar34) {
                    uVar37 = (uint)*(ushort *)(lVar43 + uVar31 * 2);
                  }
                  uVar33 = (undefined2)uVar37;
                  uVar31 = uVar31 + 1;
                } while (uVar31 < uVar46);
              }
            }
            uVar44 = uVar44 + 1;
            *puVar42 = uVar33;
            puVar42 = puVar42 + 1;
          } while (uVar44 < uVar47);
        }
        FUN_14040bbe0(param_9,uVar21,param_3,uVar47,(longlong)param_6._4_4_);
        uVar30 = uVar30 + 1;
        uVar35 = uVar35 + 1;
        puVar28 = puVar28 + uVar21;
        if ((longlong)param_6._4_4_ <= (longlong)uVar30) {
          uVar30 = 0;
          puVar28 = param_9;
        }
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar39 = lVar39 + lVar24 * 2;
      } while (uVar35 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar49 = lVar24 * 2;
    lVar43 = lVar43 * lVar24 * -2;
    param_1 = param_1 + lVar24 * -2;
    lVar32 = 0;
    lVar24 = 0;
    do {
      uVar21 = 0;
      if (0 < (int)param_5) {
        do {
          uVar30 = 0;
          uVar37 = 0xffff;
          uVar33 = 0xffff;
          if (0 < param_6._4_4_) {
            lVar45 = uVar21 * 2 + lVar49 + param_1 + lVar39 * -2 + lVar43 + lVar24;
            uVar47 = uVar30;
            uVar27 = uVar30;
            do {
              uVar46 = (ulonglong)(int)param_6;
              uVar44 = 0;
              if (0 < (longlong)uVar46) {
                if (7 < (longlong)uVar46) {
                  uVar65 = CONCAT22((short)uVar37,(short)uVar37);
                  auVar63._8_4_ = 0xffffffff;
                  auVar63._0_8_ = 0xffffffffffffffff;
                  auVar63._12_4_ = 0xffffffff;
                  auVar68._0_8_ = CONCAT44(uVar65,uVar65);
                  auVar68._8_8_ = auVar68._0_8_;
                  lVar50 = lVar43 + param_1 + lVar39 * -2 + lVar49 + lVar24 + uVar21 * 2 + uVar47;
                  do {
                    uVar31 = *(ulonglong *)(uVar44 + param_7 + uVar27);
                    cVar74 = (char)(uVar31 >> 0x38);
                    auVar1._8_6_ = 0;
                    auVar1._0_8_ = uVar31;
                    auVar1[0xe] = cVar74;
                    auVar2._8_4_ = 0;
                    auVar2._0_8_ = uVar31;
                    auVar2[0xc] = (char)(uVar31 >> 0x30);
                    auVar2._13_2_ = auVar1._13_2_;
                    auVar3._8_4_ = 0;
                    auVar3._0_8_ = uVar31;
                    auVar3._12_3_ = auVar2._12_3_;
                    auVar4._8_2_ = 0;
                    auVar4._0_8_ = uVar31;
                    auVar4[10] = (char)(uVar31 >> 0x28);
                    auVar4._11_4_ = auVar3._11_4_;
                    auVar5._8_2_ = 0;
                    auVar5._0_8_ = uVar31;
                    auVar5._10_5_ = auVar4._10_5_;
                    auVar6[8] = (char)(uVar31 >> 0x20);
                    auVar6._0_8_ = uVar31;
                    auVar6._9_6_ = auVar5._9_6_;
                    auVar7._7_8_ = 0;
                    auVar7._0_7_ = auVar6._8_7_;
                    Var8 = CONCAT81(SUB158(auVar7 << 0x40,7),(char)(uVar31 >> 0x18));
                    auVar11._9_6_ = 0;
                    auVar11._0_9_ = Var8;
                    auVar9._1_10_ = SUB1510(auVar11 << 0x30,5);
                    auVar9[0] = (char)(uVar31 >> 0x10);
                    auVar12._11_4_ = 0;
                    auVar12._0_11_ = auVar9;
                    auVar10._1_12_ = SUB1512(auVar12 << 0x20,3);
                    auVar10[0] = (char)(uVar31 >> 8);
                    auVar72._0_2_ = -(ushort)((uVar31 & 0xff) == 0);
                    auVar72._2_2_ = -(ushort)(auVar10._0_2_ == 0);
                    auVar72._4_2_ = -(ushort)(auVar9._0_2_ == 0);
                    auVar72._6_2_ = -(ushort)((short)Var8 == 0);
                    auVar72._8_2_ = -(ushort)(auVar6._8_2_ == 0);
                    auVar72._10_2_ = -(ushort)(auVar4._10_2_ == 0);
                    auVar72._12_2_ = -(ushort)(auVar2._12_2_ == 0);
                    auVar72._14_2_ = -(ushort)(cVar74 == '\0');
                    auVar72 = auVar72 ^ auVar63;
                    if ((auVar72 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar55 = 0;
                    }
                    else {
                      sVar55 = *(short *)(lVar45 + uVar47 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar58 = 0;
                    }
                    else {
                      sVar58 = *(short *)(lVar50 + 2 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar22 = 0;
                    }
                    else {
                      sVar22 = *(short *)(lVar50 + 4 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar26 = 0;
                    }
                    else {
                      sVar26 = *(short *)(lVar50 + 6 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar36 = 0;
                    }
                    else {
                      sVar36 = *(short *)(lVar50 + 8 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar38 = 0;
                    }
                    else {
                      sVar38 = *(short *)(lVar50 + 10 + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar41 = 0;
                    }
                    else {
                      sVar41 = *(short *)(lVar50 + 0xc + uVar44 * 2);
                    }
                    if ((auVar72 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar48 = 0;
                    }
                    else {
                      sVar48 = *(short *)(lVar50 + 0xe + uVar44 * 2);
                    }
                    auVar70._2_2_ = sVar58;
                    auVar70._0_2_ = sVar55;
                    auVar70._6_2_ = sVar26;
                    auVar70._4_2_ = sVar22;
                    auVar70._10_2_ = sVar38;
                    auVar70._8_2_ = sVar36;
                    auVar70._14_2_ = sVar48;
                    auVar70._12_2_ = sVar41;
                    auVar75._0_2_ =
                         -(ushort)((short)(auVar68._0_2_ - sVar13) < (short)(sVar55 - sVar13));
                    auVar75._2_2_ =
                         -(ushort)((short)(auVar68._2_2_ - sVar14) < (short)(sVar58 - sVar14));
                    auVar75._4_2_ =
                         -(ushort)((short)(auVar68._4_2_ - sVar15) < (short)(sVar22 - sVar15));
                    auVar75._6_2_ =
                         -(ushort)((short)(auVar68._6_2_ - sVar16) < (short)(sVar26 - sVar16));
                    auVar75._8_2_ =
                         -(ushort)((short)(auVar68._8_2_ - sVar17) < (short)(sVar36 - sVar17));
                    auVar75._10_2_ =
                         -(ushort)((short)(auVar68._10_2_ - sVar18) < (short)(sVar38 - sVar18));
                    auVar75._12_2_ =
                         -(ushort)((short)(auVar68._12_2_ - sVar19) < (short)(sVar41 - sVar19));
                    auVar75._14_2_ =
                         -(ushort)((short)(auVar68._14_2_ - sVar20) < (short)(sVar48 - sVar20));
                    uVar44 = uVar44 + 8;
                    auVar68 = (auVar75 & (auVar68 ^ auVar70) ^ auVar70) & auVar72 |
                              ~auVar72 & auVar68;
                  } while (uVar44 < (uVar46 & 0xfffffffffffffff8));
                  auVar64._0_8_ = auVar68._8_8_;
                  auVar64._8_4_ = auVar68._0_4_;
                  auVar64._12_4_ = auVar68._0_4_;
                  sVar55 = auVar68._0_2_;
                  sVar58 = auVar68._2_2_;
                  auVar73._0_2_ =
                       -(ushort)((short)(auVar68._8_2_ - sVar13) < (short)(sVar55 - sVar13));
                  auVar73._2_2_ =
                       -(ushort)((short)(auVar68._10_2_ - sVar14) < (short)(sVar58 - sVar14));
                  auVar73._4_2_ =
                       -(ushort)((short)(auVar68._12_2_ - sVar15) < (short)(auVar68._4_2_ - sVar15))
                  ;
                  auVar73._6_2_ =
                       -(ushort)((short)(auVar68._14_2_ - sVar16) < (short)(auVar68._6_2_ - sVar16))
                  ;
                  auVar73._8_2_ =
                       -(ushort)((short)(sVar55 - sVar17) < (short)(auVar68._8_2_ - sVar17));
                  auVar73._10_2_ =
                       -(ushort)((short)(sVar58 - sVar18) < (short)(auVar68._10_2_ - sVar18));
                  auVar73._12_2_ =
                       -(ushort)((short)(sVar55 - sVar19) < (short)(auVar68._12_2_ - sVar19));
                  auVar73._14_2_ =
                       -(ushort)((short)(sVar58 - sVar20) < (short)(auVar68._14_2_ - sVar20));
                  auVar68 = auVar73 & (auVar64 ^ auVar68) ^ auVar68;
                  auVar71._0_12_ = auVar68._4_12_;
                  auVar71._12_4_ = auVar68._0_4_;
                  auVar59._0_2_ =
                       -(ushort)((short)(auVar68._4_2_ - sVar13) < (short)(auVar68._0_2_ - sVar13));
                  auVar59._2_2_ =
                       -(ushort)((short)(auVar68._6_2_ - sVar14) < (short)(auVar68._2_2_ - sVar14));
                  auVar59._4_4_ = 0;
                  auVar59._8_2_ =
                       -(ushort)((short)(auVar68._12_2_ - sVar17) < (short)(auVar68._8_2_ - sVar17))
                  ;
                  auVar59._10_2_ =
                       -(ushort)((short)(auVar68._14_2_ - sVar18) < (short)(auVar68._10_2_ - sVar18)
                                );
                  auVar59._12_2_ =
                       -(ushort)((short)(auVar68._0_2_ - sVar19) < (short)(auVar68._12_2_ - sVar19))
                  ;
                  auVar59._14_2_ =
                       -(ushort)((short)(auVar68._2_2_ - sVar20) < (short)(auVar68._14_2_ - sVar20))
                  ;
                  auVar68 = auVar59 & (auVar71 ^ auVar68) ^ auVar68;
                  uVar37 = (uint)(ushort)-(ushort)((short)(auVar68._2_2_ - sVar13) <
                                                  (short)(auVar68._0_2_ - sVar13)) &
                           (auVar68._2_4_ ^ auVar68._0_4_) ^ auVar68._0_4_;
                  uVar44 = uVar46 & 0xfffffffffffffff8;
                }
                if (uVar44 < (ulonglong)(longlong)(int)param_6) {
                  lVar50 = lVar45 + uVar47;
                  do {
                    if (*(char *)(uVar44 + param_7 + uVar27) != '\0') {
                      uVar34 = (ushort)uVar37;
                      uVar37 = uVar37 & 0xffff;
                      if (*(ushort *)(lVar50 + uVar44 * 2) < uVar34) {
                        uVar37 = (uint)*(ushort *)(lVar50 + uVar44 * 2);
                      }
                    }
                    uVar44 = uVar44 + 1;
                  } while (uVar44 < (ulonglong)(longlong)(int)param_6);
                }
              }
              uVar33 = (undefined2)uVar37;
              uVar30 = uVar30 + 1;
              uVar27 = uVar27 + (longlong)(int)param_6;
              uVar47 = uVar47 + lVar49;
            } while (uVar30 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(undefined2 *)(param_3 + lVar32 + uVar21 * 2) = uVar33;
          uVar21 = uVar21 + 1;
        } while (uVar21 < (ulonglong)(longlong)(int)param_5);
      }
      uVar35 = uVar35 + 1;
      lVar32 = lVar32 + ((longlong)param_4 >> 1) * 2;
      lVar24 = lVar24 + lVar49;
    } while (uVar35 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

