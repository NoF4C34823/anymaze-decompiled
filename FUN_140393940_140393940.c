
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140393940(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,ushort *param_9)

{
  ushort uVar1;
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
  ulonglong uVar22;
  short sVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  short sVar27;
  ulonglong uVar28;
  ushort *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined2 uVar34;
  ushort uVar35;
  ulonglong uVar36;
  ushort uVar37;
  short sVar38;
  uint uVar39;
  short sVar40;
  longlong lVar41;
  ulonglong uVar42;
  short sVar43;
  ushort *puVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  short sVar50;
  longlong lVar51;
  longlong lVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  short sVar59;
  short sVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  char cVar74;
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  sVar21 = _UNK_143089d8e;
  sVar20 = _UNK_143089d8c;
  sVar19 = _UNK_143089d8a;
  sVar18 = _UNK_143089d88;
  sVar17 = _UNK_143089d86;
  sVar16 = _UNK_143089d84;
  sVar15 = _UNK_143089d82;
  sVar14 = _DAT_143089d80;
  uVar36 = 0;
  lVar25 = (longlong)param_2 >> 1;
  lVar45 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar22 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar41 = (longlong)((int)param_6 + -1 >> 1);
  lVar51 = (lVar25 * lVar45 + lVar41) * -2 + param_1;
  if (param_7 == 0) {
    uVar31 = (longlong)param_6._4_4_ - 1;
    puVar29 = param_9;
    if (uVar31 != 0 && 0 < (longlong)param_6._4_4_) {
      lVar47 = lVar25 * 2;
      lVar41 = lVar41 * -2;
      lVar45 = lVar45 * lVar25 * -2;
      lVar52 = lVar25 * -2 + param_1;
      lVar33 = 0;
      uVar49 = uVar36;
      do {
        uVar28 = 0;
        if (0 < (longlong)(int)param_5) {
          lVar51 = lVar45 + lVar52 + lVar41 + lVar47 + lVar33;
          uVar46 = 0;
          uVar48 = (ulonglong)(int)param_6;
          do {
            uVar35 = 0;
            uVar37 = 0;
            uVar39 = 0;
            if (0 < (longlong)uVar48) {
              uVar32 = uVar46;
              if (7 < (longlong)uVar48) {
                uVar30 = uVar28 * 2 + lVar47 + lVar52 + lVar41 + lVar45 + lVar33;
                uVar24 = uVar30 & 0xf;
                if (uVar24 != 0) {
                  if ((uVar30 & 1) != 0) goto LAB_140393c45;
                  uVar24 = 0x10 - uVar24 >> 1;
                }
                if ((longlong)(uVar24 + 8) <= (longlong)uVar48) {
                  lVar26 = uVar28 * 2 + lVar51;
                  uVar32 = uVar48 - (uVar48 - uVar24 & 7);
                  uVar30 = uVar46;
                  if (uVar24 != 0) {
                    do {
                      uVar1 = *(ushort *)(lVar26 + uVar30 * 2);
                      uVar37 = uVar35;
                      if (uVar35 < uVar1) {
                        uVar37 = uVar1;
                      }
                      uVar30 = uVar30 + 1;
                      uVar35 = uVar37;
                    } while (uVar30 < uVar24);
                  }
                  auVar53._0_8_ = CONCAT44(CONCAT22(uVar37,uVar37),CONCAT22(uVar37,uVar37));
                  auVar53._8_8_ = auVar53._0_8_;
                  do {
                    auVar66 = *(undefined1 (*) [16])(lVar26 + uVar24 * 2);
                    auVar68._0_2_ =
                         -(ushort)((short)(auVar53._0_2_ - sVar14) < (short)(auVar66._0_2_ - sVar14)
                                  );
                    auVar68._2_2_ =
                         -(ushort)((short)(auVar53._2_2_ - sVar15) < (short)(auVar66._2_2_ - sVar15)
                                  );
                    auVar68._4_2_ =
                         -(ushort)((short)(auVar53._4_2_ - sVar16) < (short)(auVar66._4_2_ - sVar16)
                                  );
                    auVar68._6_2_ =
                         -(ushort)((short)(auVar53._6_2_ - sVar17) < (short)(auVar66._6_2_ - sVar17)
                                  );
                    auVar68._8_2_ =
                         -(ushort)((short)(auVar53._8_2_ - sVar18) < (short)(auVar66._8_2_ - sVar18)
                                  );
                    auVar68._10_2_ =
                         -(ushort)((short)(auVar53._10_2_ - sVar19) <
                                  (short)(auVar66._10_2_ - sVar19));
                    auVar68._12_2_ =
                         -(ushort)((short)(auVar53._12_2_ - sVar20) <
                                  (short)(auVar66._12_2_ - sVar20));
                    auVar68._14_2_ =
                         -(ushort)((short)(auVar53._14_2_ - sVar21) <
                                  (short)(auVar66._14_2_ - sVar21));
                    uVar24 = uVar24 + 8;
                    auVar53 = auVar53 ^ auVar68 & (auVar66 ^ auVar53);
                  } while (uVar24 < uVar32);
                  auVar61._0_8_ = auVar53._8_8_;
                  auVar61._8_4_ = auVar53._0_4_;
                  auVar61._12_4_ = auVar53._0_4_;
                  sVar59 = auVar53._0_2_;
                  sVar64 = auVar53._2_2_;
                  auVar60._0_2_ =
                       -(ushort)((short)(auVar53._8_2_ - sVar14) < (short)(sVar59 - sVar14));
                  auVar60._2_2_ =
                       -(ushort)((short)(auVar53._10_2_ - sVar15) < (short)(sVar64 - sVar15));
                  auVar60._4_2_ =
                       -(ushort)((short)(auVar53._12_2_ - sVar16) < (short)(auVar53._4_2_ - sVar16))
                  ;
                  auVar60._6_2_ =
                       -(ushort)((short)(auVar53._14_2_ - sVar17) < (short)(auVar53._6_2_ - sVar17))
                  ;
                  auVar60._8_2_ =
                       -(ushort)((short)(sVar59 - sVar18) < (short)(auVar53._8_2_ - sVar18));
                  auVar60._10_2_ =
                       -(ushort)((short)(sVar64 - sVar19) < (short)(auVar53._10_2_ - sVar19));
                  auVar60._12_2_ =
                       -(ushort)((short)(sVar59 - sVar20) < (short)(auVar53._12_2_ - sVar20));
                  auVar60._14_2_ =
                       -(ushort)((short)(sVar64 - sVar21) < (short)(auVar53._14_2_ - sVar21));
                  auVar61 = auVar60 & (auVar53 ^ auVar61) ^ auVar61;
                  auVar55._0_12_ = auVar61._4_12_;
                  auVar55._12_4_ = auVar61._0_4_;
                  auVar54._0_2_ =
                       -(ushort)((short)(auVar61._4_2_ - sVar14) < (short)(auVar61._0_2_ - sVar14));
                  auVar54._2_2_ =
                       -(ushort)((short)(auVar61._6_2_ - sVar15) < (short)(auVar61._2_2_ - sVar15));
                  auVar54._4_4_ = 0;
                  auVar54._8_2_ =
                       -(ushort)((short)(auVar61._12_2_ - sVar18) < (short)(auVar61._8_2_ - sVar18))
                  ;
                  auVar54._10_2_ =
                       -(ushort)((short)(auVar61._14_2_ - sVar19) < (short)(auVar61._10_2_ - sVar19)
                                );
                  auVar54._12_2_ =
                       -(ushort)((short)(auVar61._0_2_ - sVar20) < (short)(auVar61._12_2_ - sVar20))
                  ;
                  auVar54._14_2_ =
                       -(ushort)((short)(auVar61._2_2_ - sVar21) < (short)(auVar61._14_2_ - sVar21))
                  ;
                  auVar55 = auVar54 & (auVar61 ^ auVar55) ^ auVar55;
                  uVar39 = (uint)(ushort)-(ushort)((short)(auVar55._2_2_ - sVar14) <
                                                  (short)(auVar55._0_2_ - sVar14)) &
                           (auVar55._0_4_ ^ auVar55._2_4_) ^ auVar55._2_4_;
                }
              }
LAB_140393c45:
              uVar37 = (ushort)uVar39;
              if (uVar32 < uVar48) {
                lVar26 = uVar28 * 2 + lVar51;
                do {
                  uVar35 = (ushort)uVar39;
                  uVar39 = uVar39 & 0xffff;
                  if (uVar35 < *(ushort *)(lVar26 + uVar32 * 2)) {
                    uVar39 = (uint)*(ushort *)(lVar26 + uVar32 * 2);
                  }
                  uVar37 = (ushort)uVar39;
                  uVar32 = uVar32 + 1;
                } while (uVar32 < uVar48);
              }
            }
            *(ushort *)((longlong)param_9 + uVar28 * 2 + uVar36) = uVar37;
            uVar28 = uVar28 + 1;
          } while (uVar28 < (ulonglong)(longlong)(int)param_5);
        }
        uVar49 = uVar49 + 1;
        lVar51 = lVar33 + param_1 + lVar45;
        puVar29 = (ushort *)((longlong)param_9 + uVar36 + uVar22 * 2);
        lVar33 = lVar33 + lVar47;
        lVar51 = lVar51 + lVar25 * 2 + lVar41;
        uVar36 = uVar36 + uVar22 * 2;
      } while (uVar49 < uVar31);
    }
    sVar21 = _UNK_143089d8e;
    sVar20 = _UNK_143089d8c;
    sVar19 = _UNK_143089d8a;
    sVar18 = _UNK_143089d88;
    sVar17 = _UNK_143089d86;
    sVar16 = _UNK_143089d84;
    sVar15 = _UNK_143089d82;
    sVar14 = _DAT_143089d80;
    uVar36 = 0;
    if (0 < param_5._4_4_) {
      lVar41 = 0;
      uVar49 = (ulonglong)(int)param_5;
      do {
        uVar28 = 0;
        if (0 < (longlong)uVar49) {
          uVar48 = (ulonglong)(int)param_6;
          puVar44 = puVar29;
          uVar46 = uVar28;
          do {
            uVar37 = 0;
            uVar35 = 0;
            uVar39 = 0;
            if (0 < (longlong)uVar48) {
              uVar32 = uVar28;
              if (7 < (longlong)uVar48) {
                uVar30 = uVar46 * 2 + lVar51 + lVar41;
                uVar24 = uVar30 & 0xf;
                if (uVar24 != 0) {
                  if ((uVar30 & 1) != 0) goto LAB_140393f46;
                  uVar24 = 0x10 - uVar24 >> 1;
                }
                if ((longlong)(uVar24 + 8) <= (longlong)uVar48) {
                  uVar32 = uVar48 - (uVar48 - uVar24 & 7);
                  uVar42 = uVar28;
                  if (uVar24 != 0) {
                    do {
                      uVar1 = *(ushort *)(uVar30 + uVar42 * 2);
                      uVar35 = uVar37;
                      if (uVar37 < uVar1) {
                        uVar35 = uVar1;
                      }
                      uVar42 = uVar42 + 1;
                      uVar37 = uVar35;
                    } while (uVar42 < uVar24);
                  }
                  auVar56._0_8_ = CONCAT44(CONCAT22(uVar35,uVar35),CONCAT22(uVar35,uVar35));
                  auVar56._8_8_ = auVar56._0_8_;
                  do {
                    auVar66 = *(undefined1 (*) [16])(uVar30 + uVar24 * 2);
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar56._0_2_ - sVar14) < (short)(auVar66._0_2_ - sVar14)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar56._2_2_ - sVar15) < (short)(auVar66._2_2_ - sVar15)
                                  );
                    auVar65._4_2_ =
                         -(ushort)((short)(auVar56._4_2_ - sVar16) < (short)(auVar66._4_2_ - sVar16)
                                  );
                    auVar65._6_2_ =
                         -(ushort)((short)(auVar56._6_2_ - sVar17) < (short)(auVar66._6_2_ - sVar17)
                                  );
                    auVar65._8_2_ =
                         -(ushort)((short)(auVar56._8_2_ - sVar18) < (short)(auVar66._8_2_ - sVar18)
                                  );
                    auVar65._10_2_ =
                         -(ushort)((short)(auVar56._10_2_ - sVar19) <
                                  (short)(auVar66._10_2_ - sVar19));
                    auVar65._12_2_ =
                         -(ushort)((short)(auVar56._12_2_ - sVar20) <
                                  (short)(auVar66._12_2_ - sVar20));
                    auVar65._14_2_ =
                         -(ushort)((short)(auVar56._14_2_ - sVar21) <
                                  (short)(auVar66._14_2_ - sVar21));
                    uVar24 = uVar24 + 8;
                    auVar56 = auVar56 ^ auVar65 & (auVar66 ^ auVar56);
                  } while (uVar24 < uVar32);
                  auVar63._0_8_ = auVar56._8_8_;
                  auVar63._8_4_ = auVar56._0_4_;
                  auVar63._12_4_ = auVar56._0_4_;
                  sVar59 = auVar56._0_2_;
                  sVar64 = auVar56._2_2_;
                  auVar62._0_2_ =
                       -(ushort)((short)(auVar56._8_2_ - sVar14) < (short)(sVar59 - sVar14));
                  auVar62._2_2_ =
                       -(ushort)((short)(auVar56._10_2_ - sVar15) < (short)(sVar64 - sVar15));
                  auVar62._4_2_ =
                       -(ushort)((short)(auVar56._12_2_ - sVar16) < (short)(auVar56._4_2_ - sVar16))
                  ;
                  auVar62._6_2_ =
                       -(ushort)((short)(auVar56._14_2_ - sVar17) < (short)(auVar56._6_2_ - sVar17))
                  ;
                  auVar62._8_2_ =
                       -(ushort)((short)(sVar59 - sVar18) < (short)(auVar56._8_2_ - sVar18));
                  auVar62._10_2_ =
                       -(ushort)((short)(sVar64 - sVar19) < (short)(auVar56._10_2_ - sVar19));
                  auVar62._12_2_ =
                       -(ushort)((short)(sVar59 - sVar20) < (short)(auVar56._12_2_ - sVar20));
                  auVar62._14_2_ =
                       -(ushort)((short)(sVar64 - sVar21) < (short)(auVar56._14_2_ - sVar21));
                  auVar63 = auVar62 & (auVar56 ^ auVar63) ^ auVar63;
                  auVar58._0_12_ = auVar63._4_12_;
                  auVar58._12_4_ = auVar63._0_4_;
                  auVar57._0_2_ =
                       -(ushort)((short)(auVar63._4_2_ - sVar14) < (short)(auVar63._0_2_ - sVar14));
                  auVar57._2_2_ =
                       -(ushort)((short)(auVar63._6_2_ - sVar15) < (short)(auVar63._2_2_ - sVar15));
                  auVar57._4_4_ = 0;
                  auVar57._8_2_ =
                       -(ushort)((short)(auVar63._12_2_ - sVar18) < (short)(auVar63._8_2_ - sVar18))
                  ;
                  auVar57._10_2_ =
                       -(ushort)((short)(auVar63._14_2_ - sVar19) < (short)(auVar63._10_2_ - sVar19)
                                );
                  auVar57._12_2_ =
                       -(ushort)((short)(auVar63._0_2_ - sVar20) < (short)(auVar63._12_2_ - sVar20))
                  ;
                  auVar57._14_2_ =
                       -(ushort)((short)(auVar63._2_2_ - sVar21) < (short)(auVar63._14_2_ - sVar21))
                  ;
                  auVar58 = auVar57 & (auVar63 ^ auVar58) ^ auVar58;
                  uVar39 = (uint)(ushort)-(ushort)((short)(auVar58._2_2_ - sVar14) <
                                                  (short)(auVar58._0_2_ - sVar14)) &
                           (auVar58._0_4_ ^ auVar58._2_4_) ^ auVar58._2_4_;
                }
              }
LAB_140393f46:
              uVar35 = (ushort)uVar39;
              if (uVar32 < uVar48) {
                lVar45 = uVar46 * 2 + lVar51 + lVar41;
                do {
                  uVar35 = (ushort)uVar39;
                  uVar39 = uVar39 & 0xffff;
                  if (uVar35 < *(ushort *)(lVar45 + uVar32 * 2)) {
                    uVar39 = (uint)*(ushort *)(lVar45 + uVar32 * 2);
                  }
                  uVar35 = (ushort)uVar39;
                  uVar32 = uVar32 + 1;
                } while (uVar32 < uVar48);
              }
            }
            uVar46 = uVar46 + 1;
            *puVar44 = uVar35;
            puVar44 = puVar44 + 1;
          } while (uVar46 < uVar49);
        }
        FUN_14039b8e0(param_9,uVar22,param_3,uVar49,(longlong)param_6._4_4_);
        uVar31 = uVar31 + 1;
        uVar36 = uVar36 + 1;
        puVar29 = puVar29 + uVar22;
        if ((longlong)param_6._4_4_ <= (longlong)uVar31) {
          uVar31 = 0;
          puVar29 = param_9;
        }
        param_3 = param_3 + ((longlong)param_4 >> 1) * 2;
        lVar41 = lVar41 + lVar25 * 2;
      } while (uVar36 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else if (0 < param_5._4_4_) {
    lVar51 = lVar25 * 2;
    lVar45 = lVar45 * lVar25 * -2;
    param_1 = param_1 + lVar25 * -2;
    lVar33 = 0;
    lVar25 = 0;
    do {
      uVar22 = 0;
      if (0 < (int)param_5) {
        do {
          uVar31 = 0;
          uVar39 = 0;
          uVar34 = 0;
          if (0 < param_6._4_4_) {
            lVar47 = uVar22 * 2 + lVar51 + param_1 + lVar41 * -2 + lVar45 + lVar25;
            uVar49 = uVar31;
            uVar28 = uVar31;
            do {
              uVar48 = (ulonglong)(int)param_6;
              uVar46 = 0;
              if (0 < (longlong)uVar48) {
                if (7 < (longlong)uVar48) {
                  uVar67 = CONCAT22((short)uVar39,(short)uVar39);
                  auVar66._8_4_ = 0xffffffff;
                  auVar66._0_8_ = 0xffffffffffffffff;
                  auVar66._12_4_ = 0xffffffff;
                  auVar69._0_8_ = CONCAT44(uVar67,uVar67);
                  auVar69._8_8_ = auVar69._0_8_;
                  lVar52 = lVar45 + param_1 + lVar41 * -2 + lVar51 + lVar25 + uVar22 * 2 + uVar49;
                  do {
                    uVar32 = *(ulonglong *)(uVar46 + param_7 + uVar28);
                    cVar74 = (char)(uVar32 >> 0x38);
                    auVar2._8_6_ = 0;
                    auVar2._0_8_ = uVar32;
                    auVar2[0xe] = cVar74;
                    auVar3._8_4_ = 0;
                    auVar3._0_8_ = uVar32;
                    auVar3[0xc] = (char)(uVar32 >> 0x30);
                    auVar3._13_2_ = auVar2._13_2_;
                    auVar4._8_4_ = 0;
                    auVar4._0_8_ = uVar32;
                    auVar4._12_3_ = auVar3._12_3_;
                    auVar5._8_2_ = 0;
                    auVar5._0_8_ = uVar32;
                    auVar5[10] = (char)(uVar32 >> 0x28);
                    auVar5._11_4_ = auVar4._11_4_;
                    auVar6._8_2_ = 0;
                    auVar6._0_8_ = uVar32;
                    auVar6._10_5_ = auVar5._10_5_;
                    auVar7[8] = (char)(uVar32 >> 0x20);
                    auVar7._0_8_ = uVar32;
                    auVar7._9_6_ = auVar6._9_6_;
                    auVar8._7_8_ = 0;
                    auVar8._0_7_ = auVar7._8_7_;
                    Var9 = CONCAT81(SUB158(auVar8 << 0x40,7),(char)(uVar32 >> 0x18));
                    auVar12._9_6_ = 0;
                    auVar12._0_9_ = Var9;
                    auVar10._1_10_ = SUB1510(auVar12 << 0x30,5);
                    auVar10[0] = (char)(uVar32 >> 0x10);
                    auVar13._11_4_ = 0;
                    auVar13._0_11_ = auVar10;
                    auVar11._1_12_ = SUB1512(auVar13 << 0x20,3);
                    auVar11[0] = (char)(uVar32 >> 8);
                    auVar73._0_2_ = -(ushort)((uVar32 & 0xff) == 0);
                    auVar73._2_2_ = -(ushort)(auVar11._0_2_ == 0);
                    auVar73._4_2_ = -(ushort)(auVar10._0_2_ == 0);
                    auVar73._6_2_ = -(ushort)((short)Var9 == 0);
                    auVar73._8_2_ = -(ushort)(auVar7._8_2_ == 0);
                    auVar73._10_2_ = -(ushort)(auVar5._10_2_ == 0);
                    auVar73._12_2_ = -(ushort)(auVar3._12_2_ == 0);
                    auVar73._14_2_ = -(ushort)(cVar74 == '\0');
                    auVar73 = auVar73 ^ auVar66;
                    if ((auVar73 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar59 = 0;
                    }
                    else {
                      sVar59 = *(short *)(lVar47 + uVar49 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar64 = 0;
                    }
                    else {
                      sVar64 = *(short *)(lVar52 + 2 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar23 = 0;
                    }
                    else {
                      sVar23 = *(short *)(lVar52 + 4 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar27 = 0;
                    }
                    else {
                      sVar27 = *(short *)(lVar52 + 6 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar38 = 0;
                    }
                    else {
                      sVar38 = *(short *)(lVar52 + 8 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar40 = 0;
                    }
                    else {
                      sVar40 = *(short *)(lVar52 + 10 + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar43 = 0;
                    }
                    else {
                      sVar43 = *(short *)(lVar52 + 0xc + uVar46 * 2);
                    }
                    if ((auVar73 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                      sVar50 = 0;
                    }
                    else {
                      sVar50 = *(short *)(lVar52 + 0xe + uVar46 * 2);
                    }
                    auVar70._2_2_ = sVar64;
                    auVar70._0_2_ = sVar59;
                    auVar70._6_2_ = sVar27;
                    auVar70._4_2_ = sVar23;
                    auVar70._10_2_ = sVar40;
                    auVar70._8_2_ = sVar38;
                    auVar70._14_2_ = sVar50;
                    auVar70._12_2_ = sVar43;
                    uVar46 = uVar46 + 8;
                    auVar75._0_2_ =
                         -(ushort)((short)(auVar69._0_2_ - sVar14) < (short)(sVar59 - sVar14));
                    auVar75._2_2_ =
                         -(ushort)((short)(auVar69._2_2_ - sVar15) < (short)(sVar64 - sVar15));
                    auVar75._4_2_ =
                         -(ushort)((short)(auVar69._4_2_ - sVar16) < (short)(sVar23 - sVar16));
                    auVar75._6_2_ =
                         -(ushort)((short)(auVar69._6_2_ - sVar17) < (short)(sVar27 - sVar17));
                    auVar75._8_2_ =
                         -(ushort)((short)(auVar69._8_2_ - sVar18) < (short)(sVar38 - sVar18));
                    auVar75._10_2_ =
                         -(ushort)((short)(auVar69._10_2_ - sVar19) < (short)(sVar40 - sVar19));
                    auVar75._12_2_ =
                         -(ushort)((short)(auVar69._12_2_ - sVar20) < (short)(sVar43 - sVar20));
                    auVar75._14_2_ =
                         -(ushort)((short)(auVar69._14_2_ - sVar21) < (short)(sVar50 - sVar21));
                    auVar69 = (auVar75 & (auVar70 ^ auVar69) ^ auVar69) & auVar73 |
                              ~auVar73 & auVar69;
                  } while (uVar46 < (uVar48 & 0xfffffffffffffff8));
                  auVar72._0_8_ = auVar69._8_8_;
                  auVar72._8_4_ = auVar69._0_4_;
                  auVar72._12_4_ = auVar69._0_4_;
                  sVar59 = auVar69._0_2_;
                  sVar64 = auVar69._2_2_;
                  auVar71._0_2_ =
                       -(ushort)((short)(auVar69._8_2_ - sVar14) < (short)(sVar59 - sVar14));
                  auVar71._2_2_ =
                       -(ushort)((short)(auVar69._10_2_ - sVar15) < (short)(sVar64 - sVar15));
                  auVar71._4_2_ =
                       -(ushort)((short)(auVar69._12_2_ - sVar16) < (short)(auVar69._4_2_ - sVar16))
                  ;
                  auVar71._6_2_ =
                       -(ushort)((short)(auVar69._14_2_ - sVar17) < (short)(auVar69._6_2_ - sVar17))
                  ;
                  auVar71._8_2_ =
                       -(ushort)((short)(sVar59 - sVar18) < (short)(auVar69._8_2_ - sVar18));
                  auVar71._10_2_ =
                       -(ushort)((short)(sVar64 - sVar19) < (short)(auVar69._10_2_ - sVar19));
                  auVar71._12_2_ =
                       -(ushort)((short)(sVar59 - sVar20) < (short)(auVar69._12_2_ - sVar20));
                  auVar71._14_2_ =
                       -(ushort)((short)(sVar64 - sVar21) < (short)(auVar69._14_2_ - sVar21));
                  auVar72 = auVar71 & (auVar69 ^ auVar72) ^ auVar72;
                  auVar77._0_12_ = auVar72._4_12_;
                  auVar77._12_4_ = auVar72._0_4_;
                  auVar76._0_2_ =
                       -(ushort)((short)(auVar72._4_2_ - sVar14) < (short)(auVar72._0_2_ - sVar14));
                  auVar76._2_2_ =
                       -(ushort)((short)(auVar72._6_2_ - sVar15) < (short)(auVar72._2_2_ - sVar15));
                  auVar76._4_4_ = 0;
                  auVar76._8_2_ =
                       -(ushort)((short)(auVar72._12_2_ - sVar18) < (short)(auVar72._8_2_ - sVar18))
                  ;
                  auVar76._10_2_ =
                       -(ushort)((short)(auVar72._14_2_ - sVar19) < (short)(auVar72._10_2_ - sVar19)
                                );
                  auVar76._12_2_ =
                       -(ushort)((short)(auVar72._0_2_ - sVar20) < (short)(auVar72._12_2_ - sVar20))
                  ;
                  auVar76._14_2_ =
                       -(ushort)((short)(auVar72._2_2_ - sVar21) < (short)(auVar72._14_2_ - sVar21))
                  ;
                  auVar77 = auVar76 & (auVar72 ^ auVar77) ^ auVar77;
                  uVar39 = (uint)(ushort)-(ushort)((short)(auVar77._2_2_ - sVar14) <
                                                  (short)(auVar77._0_2_ - sVar14)) &
                           (auVar77._0_4_ ^ auVar77._2_4_) ^ auVar77._2_4_;
                  uVar46 = uVar48 & 0xfffffffffffffff8;
                }
                if (uVar46 < (ulonglong)(longlong)(int)param_6) {
                  lVar52 = lVar47 + uVar49;
                  do {
                    if (*(char *)(uVar46 + param_7 + uVar28) != '\0') {
                      uVar35 = (ushort)uVar39;
                      uVar39 = uVar39 & 0xffff;
                      if (uVar35 < *(ushort *)(lVar52 + uVar46 * 2)) {
                        uVar39 = (uint)*(ushort *)(lVar52 + uVar46 * 2);
                      }
                    }
                    uVar46 = uVar46 + 1;
                  } while (uVar46 < (ulonglong)(longlong)(int)param_6);
                }
              }
              uVar34 = (undefined2)uVar39;
              uVar31 = uVar31 + 1;
              uVar28 = uVar28 + (longlong)(int)param_6;
              uVar49 = uVar49 + lVar51;
            } while (uVar31 < (ulonglong)(longlong)param_6._4_4_);
          }
          *(undefined2 *)(param_3 + lVar33 + uVar22 * 2) = uVar34;
          uVar22 = uVar22 + 1;
        } while (uVar22 < (ulonglong)(longlong)(int)param_5);
      }
      uVar36 = uVar36 + 1;
      lVar33 = lVar33 + ((longlong)param_4 >> 1) * 2;
      lVar25 = lVar25 + lVar51;
    } while (uVar36 < (ulonglong)(longlong)param_5._4_4_);
  }
  return;
}

