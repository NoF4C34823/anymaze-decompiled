
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039d160(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,longlong param_7,undefined8 param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  unkuint9 Var15;
  undefined1 auVar16 [11];
  undefined1 auVar17 [13];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  ulonglong uVar28;
  short sVar29;
  longlong lVar30;
  short sVar31;
  longlong lVar32;
  ulonglong uVar33;
  short sVar34;
  longlong lVar35;
  longlong lVar36;
  short sVar37;
  longlong lVar38;
  longlong lVar39;
  undefined2 uVar40;
  ushort uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  short sVar45;
  ulonglong uVar46;
  longlong lVar47;
  short sVar48;
  longlong lVar49;
  longlong lVar50;
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined1 auVar53 [16];
  short sVar54;
  short sVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  char cVar60;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  sVar27 = _UNK_143089d9e;
  sVar26 = _UNK_143089d9c;
  sVar25 = _UNK_143089d9a;
  sVar24 = _UNK_143089d98;
  sVar23 = _UNK_143089d96;
  sVar22 = _UNK_143089d94;
  sVar21 = _UNK_143089d92;
  sVar20 = _DAT_143089d90;
  lVar30 = (longlong)param_2 >> 1;
  lVar35 = (longlong)(param_6._4_4_ + -1 >> 1);
  uVar28 = (longlong)(int)param_5 + 0xfU & 0xfffffffffffffff0;
  lVar47 = (longlong)((int)param_6 + -1 >> 1);
  lVar38 = (lVar30 * lVar35 + lVar47) * -2 + param_1;
  if (param_7 == 0) {
    lVar36 = 0;
    lVar47 = (longlong)param_6._4_4_ + -1;
    lVar35 = param_9;
    if (lVar47 != 0 && 0 < (longlong)param_6._4_4_) {
      do {
        FUN_1403920a0(lVar38,lVar35,(longlong)(int)param_5,(longlong)(int)param_6,1);
        lVar36 = lVar36 + 1;
        lVar38 = lVar38 + lVar30 * 2;
        lVar35 = lVar35 + uVar28 * 2;
      } while (lVar36 < lVar47);
    }
    uVar33 = 0;
    if (0 < param_5._4_4_) {
      lVar36 = 0;
      do {
        FUN_1403920a0(lVar38,lVar35,(longlong)(int)param_5,(longlong)(int)param_6,1);
        uVar43 = 0;
        if (0 < (longlong)(int)param_5) {
          do {
            uVar41 = 0;
            if (0 < param_6._4_4_) {
              uVar46 = 0;
              lVar32 = 1;
              lVar49 = 0;
              if ((ulonglong)(longlong)param_6._4_4_ >> 3 != 0) {
                lVar7 = uVar43 * 2;
                lVar32 = lVar7 + uVar28 * 8 + param_9;
                lVar39 = lVar7 + param_9 + uVar28 * 0xe;
                lVar50 = lVar7 + uVar28 * 0xc + param_9;
                lVar1 = lVar7 + uVar28 * 10 + param_9;
                lVar2 = lVar7 + uVar28 * 6 + param_9;
                lVar3 = lVar7 + uVar28 * 4 + param_9;
                lVar4 = lVar7 + uVar28 * 2 + param_9;
                do {
                  if (uVar41 < *(ushort *)(lVar49 + lVar7 + param_9)) {
                    uVar41 = *(ushort *)(lVar49 + lVar7 + param_9);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar4)) {
                    uVar41 = *(ushort *)(lVar49 + lVar4);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar3)) {
                    uVar41 = *(ushort *)(lVar49 + lVar3);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar2)) {
                    uVar41 = *(ushort *)(lVar49 + lVar2);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar32)) {
                    uVar41 = *(ushort *)(lVar49 + lVar32);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar1)) {
                    uVar41 = *(ushort *)(lVar49 + lVar1);
                  }
                  if (uVar41 < *(ushort *)(lVar49 + lVar50)) {
                    uVar41 = *(ushort *)(lVar49 + lVar50);
                  }
                  uVar46 = uVar46 + 1;
                  if (uVar41 < *(ushort *)(lVar49 + lVar39)) {
                    uVar41 = *(ushort *)(lVar49 + lVar39);
                  }
                  lVar49 = lVar49 + uVar28 * 0x10;
                } while (uVar46 < (ulonglong)(longlong)param_6._4_4_ >> 3);
                lVar32 = uVar46 * 8 + 1;
              }
              uVar46 = lVar32 - 1;
              lVar32 = uVar28 * uVar46;
              if (uVar46 < (ulonglong)(longlong)param_6._4_4_) {
                do {
                  uVar6 = *(ushort *)(uVar43 * 2 + param_9 + lVar32 * 2);
                  if (uVar41 < uVar6) {
                    uVar41 = uVar6;
                  }
                  uVar46 = uVar46 + 1;
                  lVar32 = lVar32 + uVar28;
                } while (uVar46 < (ulonglong)(longlong)param_6._4_4_);
              }
            }
            *(ushort *)(param_3 + lVar36 + uVar43 * 2) = uVar41;
            uVar43 = uVar43 + 1;
          } while (uVar43 < (ulonglong)(longlong)(int)param_5);
        }
        lVar47 = lVar47 + 1;
        uVar33 = uVar33 + 1;
        lVar35 = lVar35 + uVar28 * 2;
        if (param_6._4_4_ <= lVar47) {
          lVar47 = 0;
          lVar35 = param_9;
        }
        lVar38 = lVar38 + lVar30 * 2;
        lVar36 = lVar36 + ((longlong)param_4 >> 1) * 2;
      } while (uVar33 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  else {
    uVar28 = 0;
    if (0 < param_5._4_4_) {
      lVar38 = lVar30 * 2;
      lVar47 = lVar47 * -2;
      lVar35 = lVar35 * lVar30 * -2;
      param_1 = param_1 + lVar30 * -2;
      lVar36 = 0;
      lVar30 = 0;
      do {
        uVar33 = 0;
        if (0 < (int)param_5) {
          do {
            uVar43 = 0;
            uVar42 = 0;
            uVar40 = 0;
            lVar49 = 0;
            lVar32 = 0;
            if (0 < param_6._4_4_) {
              lVar39 = uVar33 * 2 + param_1 + lVar38 + lVar47 + lVar35 + lVar30;
              do {
                uVar46 = (ulonglong)(int)param_6;
                if (0 < (longlong)uVar46) {
                  if ((longlong)uVar46 < 8) {
                    uVar46 = 0;
                  }
                  else {
                    uVar46 = uVar46 & 0xfffffffffffffff8;
                    uVar44 = 0;
                    uVar52 = CONCAT22((short)uVar42,(short)uVar42);
                    auVar53._0_8_ = CONCAT44(uVar52,uVar52);
                    auVar51._8_4_ = 0xffffffff;
                    auVar51._0_8_ = 0xffffffffffffffff;
                    auVar51._12_4_ = 0xffffffff;
                    auVar53._8_8_ = auVar53._0_8_;
                    lVar50 = lVar47 + lVar38 + param_1 + lVar35 + lVar30 + uVar33 * 2 + lVar32;
                    do {
                      uVar5 = *(ulonglong *)(uVar44 + param_7 + lVar49);
                      cVar60 = (char)(uVar5 >> 0x38);
                      auVar8._8_6_ = 0;
                      auVar8._0_8_ = uVar5;
                      auVar8[0xe] = cVar60;
                      auVar9._8_4_ = 0;
                      auVar9._0_8_ = uVar5;
                      auVar9[0xc] = (char)(uVar5 >> 0x30);
                      auVar9._13_2_ = auVar8._13_2_;
                      auVar10._8_4_ = 0;
                      auVar10._0_8_ = uVar5;
                      auVar10._12_3_ = auVar9._12_3_;
                      auVar11._8_2_ = 0;
                      auVar11._0_8_ = uVar5;
                      auVar11[10] = (char)(uVar5 >> 0x28);
                      auVar11._11_4_ = auVar10._11_4_;
                      auVar12._8_2_ = 0;
                      auVar12._0_8_ = uVar5;
                      auVar12._10_5_ = auVar11._10_5_;
                      auVar13[8] = (char)(uVar5 >> 0x20);
                      auVar13._0_8_ = uVar5;
                      auVar13._9_6_ = auVar12._9_6_;
                      auVar14._7_8_ = 0;
                      auVar14._0_7_ = auVar13._8_7_;
                      Var15 = CONCAT81(SUB158(auVar14 << 0x40,7),(char)(uVar5 >> 0x18));
                      auVar18._9_6_ = 0;
                      auVar18._0_9_ = Var15;
                      auVar16._1_10_ = SUB1510(auVar18 << 0x30,5);
                      auVar16[0] = (char)(uVar5 >> 0x10);
                      auVar19._11_4_ = 0;
                      auVar19._0_11_ = auVar16;
                      auVar17._1_12_ = SUB1512(auVar19 << 0x20,3);
                      auVar17[0] = (char)(uVar5 >> 8);
                      auVar59._0_2_ = -(ushort)((uVar5 & 0xff) == 0);
                      auVar59._2_2_ = -(ushort)(auVar17._0_2_ == 0);
                      auVar59._4_2_ = -(ushort)(auVar16._0_2_ == 0);
                      auVar59._6_2_ = -(ushort)((short)Var15 == 0);
                      auVar59._8_2_ = -(ushort)(auVar13._8_2_ == 0);
                      auVar59._10_2_ = -(ushort)(auVar11._10_2_ == 0);
                      auVar59._12_2_ = -(ushort)(auVar9._12_2_ == 0);
                      auVar59._14_2_ = -(ushort)(cVar60 == '\0');
                      auVar59 = auVar59 ^ auVar51;
                      if ((auVar59 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar54 = 0;
                      }
                      else {
                        sVar54 = *(short *)(lVar39 + lVar32 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar58 = 0;
                      }
                      else {
                        sVar58 = *(short *)(lVar50 + 2 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar29 = 0;
                      }
                      else {
                        sVar29 = *(short *)(lVar50 + 4 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar31 = 0;
                      }
                      else {
                        sVar31 = *(short *)(lVar50 + 6 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar34 = 0;
                      }
                      else {
                        sVar34 = *(short *)(lVar50 + 8 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar37 = 0;
                      }
                      else {
                        sVar37 = *(short *)(lVar50 + 10 + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar45 = 0;
                      }
                      else {
                        sVar45 = *(short *)(lVar50 + 0xc + uVar44 * 2);
                      }
                      if ((auVar59 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar48 = 0;
                      }
                      else {
                        sVar48 = *(short *)(lVar50 + 0xe + uVar44 * 2);
                      }
                      auVar55._2_2_ = sVar58;
                      auVar55._0_2_ = sVar54;
                      auVar55._6_2_ = sVar31;
                      auVar55._4_2_ = sVar29;
                      auVar55._10_2_ = sVar37;
                      auVar55._8_2_ = sVar34;
                      auVar55._14_2_ = sVar48;
                      auVar55._12_2_ = sVar45;
                      uVar44 = uVar44 + 8;
                      auVar61._0_2_ =
                           -(ushort)((short)(auVar53._0_2_ - sVar20) < (short)(sVar54 - sVar20));
                      auVar61._2_2_ =
                           -(ushort)((short)(auVar53._2_2_ - sVar21) < (short)(sVar58 - sVar21));
                      auVar61._4_2_ =
                           -(ushort)((short)(auVar53._4_2_ - sVar22) < (short)(sVar29 - sVar22));
                      auVar61._6_2_ =
                           -(ushort)((short)(auVar53._6_2_ - sVar23) < (short)(sVar31 - sVar23));
                      auVar61._8_2_ =
                           -(ushort)((short)(auVar53._8_2_ - sVar24) < (short)(sVar34 - sVar24));
                      auVar61._10_2_ =
                           -(ushort)((short)(auVar53._10_2_ - sVar25) < (short)(sVar37 - sVar25));
                      auVar61._12_2_ =
                           -(ushort)((short)(auVar53._12_2_ - sVar26) < (short)(sVar45 - sVar26));
                      auVar61._14_2_ =
                           -(ushort)((short)(auVar53._14_2_ - sVar27) < (short)(sVar48 - sVar27));
                      auVar53 = (auVar61 & (auVar55 ^ auVar53) ^ auVar53) & auVar59 |
                                ~auVar59 & auVar53;
                    } while (uVar44 < uVar46);
                    auVar57._0_8_ = auVar53._8_8_;
                    auVar57._8_4_ = auVar53._0_4_;
                    auVar57._12_4_ = auVar53._0_4_;
                    sVar54 = auVar53._0_2_;
                    sVar58 = auVar53._2_2_;
                    auVar56._0_2_ =
                         -(ushort)((short)(auVar53._8_2_ - sVar20) < (short)(sVar54 - sVar20));
                    auVar56._2_2_ =
                         -(ushort)((short)(auVar53._10_2_ - sVar21) < (short)(sVar58 - sVar21));
                    auVar56._4_2_ =
                         -(ushort)((short)(auVar53._12_2_ - sVar22) <
                                  (short)(auVar53._4_2_ - sVar22));
                    auVar56._6_2_ =
                         -(ushort)((short)(auVar53._14_2_ - sVar23) <
                                  (short)(auVar53._6_2_ - sVar23));
                    auVar56._8_2_ =
                         -(ushort)((short)(sVar54 - sVar24) < (short)(auVar53._8_2_ - sVar24));
                    auVar56._10_2_ =
                         -(ushort)((short)(sVar58 - sVar25) < (short)(auVar53._10_2_ - sVar25));
                    auVar56._12_2_ =
                         -(ushort)((short)(sVar54 - sVar26) < (short)(auVar53._12_2_ - sVar26));
                    auVar56._14_2_ =
                         -(ushort)((short)(sVar58 - sVar27) < (short)(auVar53._14_2_ - sVar27));
                    auVar57 = auVar56 & (auVar53 ^ auVar57) ^ auVar57;
                    auVar63._0_12_ = auVar57._4_12_;
                    auVar63._12_4_ = auVar57._0_4_;
                    auVar62._0_2_ =
                         -(ushort)((short)(auVar57._4_2_ - sVar20) < (short)(auVar57._0_2_ - sVar20)
                                  );
                    auVar62._2_2_ =
                         -(ushort)((short)(auVar57._6_2_ - sVar21) < (short)(auVar57._2_2_ - sVar21)
                                  );
                    auVar62._4_4_ = 0;
                    auVar62._8_2_ =
                         -(ushort)((short)(auVar57._12_2_ - sVar24) <
                                  (short)(auVar57._8_2_ - sVar24));
                    auVar62._10_2_ =
                         -(ushort)((short)(auVar57._14_2_ - sVar25) <
                                  (short)(auVar57._10_2_ - sVar25));
                    auVar62._12_2_ =
                         -(ushort)((short)(auVar57._0_2_ - sVar26) <
                                  (short)(auVar57._12_2_ - sVar26));
                    auVar62._14_2_ =
                         -(ushort)((short)(auVar57._2_2_ - sVar27) <
                                  (short)(auVar57._14_2_ - sVar27));
                    auVar63 = auVar62 & (auVar57 ^ auVar63) ^ auVar63;
                    uVar42 = (uint)(ushort)-(ushort)((short)(auVar63._2_2_ - sVar20) <
                                                    (short)(auVar63._0_2_ - sVar20)) &
                             (auVar63._0_4_ ^ auVar63._2_4_) ^ auVar63._2_4_;
                  }
                  if (uVar46 < (ulonglong)(longlong)(int)param_6) {
                    lVar50 = lVar39 + lVar32;
                    do {
                      if (*(char *)(uVar46 + param_7 + lVar49) != '\0') {
                        uVar41 = (ushort)uVar42;
                        uVar42 = uVar42 & 0xffff;
                        if (uVar41 < *(ushort *)(lVar50 + uVar46 * 2)) {
                          uVar42 = (uint)*(ushort *)(lVar50 + uVar46 * 2);
                        }
                      }
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < (ulonglong)(longlong)(int)param_6);
                  }
                }
                uVar40 = (undefined2)uVar42;
                uVar43 = uVar43 + 1;
                lVar49 = lVar49 + (int)param_6;
                lVar32 = lVar32 + lVar38;
              } while (uVar43 < (ulonglong)(longlong)param_6._4_4_);
            }
            *(undefined2 *)(param_3 + lVar36 + uVar33 * 2) = uVar40;
            uVar33 = uVar33 + 1;
          } while (uVar33 < (ulonglong)(longlong)(int)param_5);
        }
        uVar28 = uVar28 + 1;
        lVar36 = lVar36 + ((longlong)param_4 >> 1) * 2;
        lVar30 = lVar30 + lVar38;
      } while (uVar28 < (ulonglong)(longlong)param_5._4_4_);
    }
  }
  return;
}

