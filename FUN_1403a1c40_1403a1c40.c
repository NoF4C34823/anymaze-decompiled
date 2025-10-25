
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a1c40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,ulonglong *param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  unkuint9 Var18;
  undefined1 auVar19 [11];
  undefined1 auVar20 [13];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  short sVar38;
  ulonglong uVar39;
  short sVar40;
  ulonglong uVar41;
  short sVar42;
  ulonglong uVar43;
  short sVar44;
  ulonglong uVar45;
  short sVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  undefined2 uVar50;
  short sVar51;
  ushort uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined1 auVar56 [16];
  short sVar57;
  short sVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  char cVar63;
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  
  sVar30 = _UNK_143089d9e;
  sVar29 = _UNK_143089d9c;
  sVar28 = _UNK_143089d9a;
  sVar27 = _UNK_143089d98;
  sVar26 = _UNK_143089d96;
  sVar25 = _UNK_143089d94;
  sVar24 = _UNK_143089d92;
  sVar23 = _DAT_143089d90;
  param_2 = param_2 >> 1;
  uVar47 = param_6[1];
  uVar41 = *param_6;
  uVar9 = *param_5;
  uVar43 = uVar9 + 0xf & 0xfffffffffffffff0;
  param_4 = param_4 >> 1;
  param_1 = param_1 + ((longlong)(int)(uVar41 - 1 >> 1) + (int)(uVar47 - 1 >> 1) * param_2) * -2;
  if (param_7 == 0) {
    lVar34 = 0;
    lVar31 = param_9;
    if (0 < (longlong)(uVar47 - 1)) {
      while( true ) {
        FUN_1403920a0(param_1,lVar31,uVar9,uVar41,1);
        uVar47 = param_6[1];
        lVar34 = lVar34 + 1;
        param_1 = param_1 + param_2 * 2;
        lVar31 = lVar31 + uVar43 * 2;
        if ((longlong)(uVar47 - 1) <= lVar34) break;
        uVar41 = *param_6;
      }
    }
    lVar34 = uVar47 - 1;
    if (0 < (longlong)param_5[1]) {
      param_1 = param_1 + param_2 * -2;
      lVar35 = 0;
      lVar49 = lVar35;
      do {
        param_1 = param_1 + param_2 * 2;
        lVar35 = lVar35 + 1;
        lVar49 = lVar49 + param_4 * 2;
        FUN_1403920a0(param_1,lVar31,uVar9,*param_6,1);
        uVar47 = param_6[1];
        if (0 < (longlong)uVar9) {
          uVar41 = 0;
          do {
            uVar52 = 0;
            if (0 < (longlong)uVar47) {
              uVar36 = 0;
              lVar32 = 1;
              lVar48 = 0;
              if (uVar47 >> 3 != 0) {
                lVar10 = uVar41 * 2;
                lVar32 = lVar10 + uVar43 * 8 + param_9;
                lVar1 = lVar10 + param_9 + uVar43 * 0xe;
                lVar2 = lVar10 + uVar43 * 0xc + param_9;
                lVar3 = lVar10 + uVar43 * 10 + param_9;
                lVar4 = lVar10 + uVar43 * 6 + param_9;
                lVar5 = lVar10 + uVar43 * 4 + param_9;
                lVar6 = lVar10 + uVar43 * 2 + param_9;
                do {
                  if (uVar52 < *(ushort *)(lVar48 + lVar10 + param_9)) {
                    uVar52 = *(ushort *)(lVar48 + lVar10 + param_9);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar6)) {
                    uVar52 = *(ushort *)(lVar48 + lVar6);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar5)) {
                    uVar52 = *(ushort *)(lVar48 + lVar5);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar4)) {
                    uVar52 = *(ushort *)(lVar48 + lVar4);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar32)) {
                    uVar52 = *(ushort *)(lVar48 + lVar32);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar3)) {
                    uVar52 = *(ushort *)(lVar48 + lVar3);
                  }
                  if (uVar52 < *(ushort *)(lVar48 + lVar2)) {
                    uVar52 = *(ushort *)(lVar48 + lVar2);
                  }
                  uVar36 = uVar36 + 1;
                  if (uVar52 < *(ushort *)(lVar48 + lVar1)) {
                    uVar52 = *(ushort *)(lVar48 + lVar1);
                  }
                  lVar48 = lVar48 + uVar43 * 0x10;
                } while (uVar36 < uVar47 >> 3);
                lVar32 = uVar36 * 8 + 1;
              }
              uVar36 = lVar32 - 1;
              lVar32 = uVar43 * uVar36;
              if (uVar36 < uVar47) {
                do {
                  uVar8 = *(ushort *)(uVar41 * 2 + param_9 + lVar32 * 2);
                  if (uVar52 < uVar8) {
                    uVar52 = uVar8;
                  }
                  uVar36 = uVar36 + 1;
                  lVar32 = lVar32 + uVar43;
                } while (uVar36 < uVar47);
              }
            }
            *(ushort *)(param_3 + param_4 * -2 + lVar49 + uVar41 * 2) = uVar52;
            uVar41 = uVar41 + 1;
          } while (uVar41 < uVar9);
        }
        lVar34 = lVar34 + 1;
        lVar31 = lVar31 + uVar43 * 2;
        if ((longlong)uVar47 <= lVar34) {
          lVar34 = 0;
          lVar31 = param_9;
        }
      } while (lVar35 < (longlong)param_5[1]);
    }
  }
  else {
    uVar43 = param_5[1];
    uVar36 = 0;
    if (0 < (longlong)uVar43) {
      lVar31 = 0;
      lVar34 = 0;
      do {
        uVar33 = 0;
        lVar49 = 0;
        if (0 < (longlong)uVar9) {
          do {
            uVar45 = 0;
            uVar53 = 0;
            uVar50 = 0;
            lVar32 = 0;
            lVar35 = 0;
            if (0 < (longlong)uVar47) {
              lVar48 = param_1 + lVar34 + lVar49;
              do {
                if (0 < (longlong)uVar41) {
                  if ((longlong)uVar41 < 8) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = uVar41 & 0xfffffffffffffff8;
                    uVar37 = 0;
                    lVar1 = lVar48 + lVar35;
                    uVar55 = CONCAT22((short)uVar53,(short)uVar53);
                    auVar54._8_4_ = 0xffffffff;
                    auVar54._0_8_ = 0xffffffffffffffff;
                    auVar54._12_4_ = 0xffffffff;
                    auVar56._0_8_ = CONCAT44(uVar55,uVar55);
                    auVar56._8_8_ = auVar56._0_8_;
                    do {
                      uVar7 = *(ulonglong *)(uVar37 + param_7 + lVar32);
                      cVar63 = (char)(uVar7 >> 0x38);
                      auVar11._8_6_ = 0;
                      auVar11._0_8_ = uVar7;
                      auVar11[0xe] = cVar63;
                      auVar12._8_4_ = 0;
                      auVar12._0_8_ = uVar7;
                      auVar12[0xc] = (char)(uVar7 >> 0x30);
                      auVar12._13_2_ = auVar11._13_2_;
                      auVar13._8_4_ = 0;
                      auVar13._0_8_ = uVar7;
                      auVar13._12_3_ = auVar12._12_3_;
                      auVar14._8_2_ = 0;
                      auVar14._0_8_ = uVar7;
                      auVar14[10] = (char)(uVar7 >> 0x28);
                      auVar14._11_4_ = auVar13._11_4_;
                      auVar15._8_2_ = 0;
                      auVar15._0_8_ = uVar7;
                      auVar15._10_5_ = auVar14._10_5_;
                      auVar16[8] = (char)(uVar7 >> 0x20);
                      auVar16._0_8_ = uVar7;
                      auVar16._9_6_ = auVar15._9_6_;
                      auVar17._7_8_ = 0;
                      auVar17._0_7_ = auVar16._8_7_;
                      Var18 = CONCAT81(SUB158(auVar17 << 0x40,7),(char)(uVar7 >> 0x18));
                      auVar21._9_6_ = 0;
                      auVar21._0_9_ = Var18;
                      auVar19._1_10_ = SUB1510(auVar21 << 0x30,5);
                      auVar19[0] = (char)(uVar7 >> 0x10);
                      auVar22._11_4_ = 0;
                      auVar22._0_11_ = auVar19;
                      auVar20._1_12_ = SUB1512(auVar22 << 0x20,3);
                      auVar20[0] = (char)(uVar7 >> 8);
                      auVar62._0_2_ = -(ushort)((uVar7 & 0xff) == 0);
                      auVar62._2_2_ = -(ushort)(auVar20._0_2_ == 0);
                      auVar62._4_2_ = -(ushort)(auVar19._0_2_ == 0);
                      auVar62._6_2_ = -(ushort)((short)Var18 == 0);
                      auVar62._8_2_ = -(ushort)(auVar16._8_2_ == 0);
                      auVar62._10_2_ = -(ushort)(auVar14._10_2_ == 0);
                      auVar62._12_2_ = -(ushort)(auVar12._12_2_ == 0);
                      auVar62._14_2_ = -(ushort)(cVar63 == '\0');
                      auVar62 = auVar62 ^ auVar54;
                      if ((auVar62 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar57 = 0;
                      }
                      else {
                        sVar57 = *(short *)(lVar1 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar61 = 0;
                      }
                      else {
                        sVar61 = *(short *)(lVar1 + 2 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar38 = 0;
                      }
                      else {
                        sVar38 = *(short *)(lVar1 + 4 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar40 = 0;
                      }
                      else {
                        sVar40 = *(short *)(lVar1 + 6 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar42 = 0;
                      }
                      else {
                        sVar42 = *(short *)(lVar1 + 8 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar44 = 0;
                      }
                      else {
                        sVar44 = *(short *)(lVar1 + 10 + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar46 = 0;
                      }
                      else {
                        sVar46 = *(short *)(lVar1 + 0xc + uVar37 * 2);
                      }
                      if ((auVar62 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                        sVar51 = 0;
                      }
                      else {
                        sVar51 = *(short *)(lVar1 + 0xe + uVar37 * 2);
                      }
                      auVar58._2_2_ = sVar61;
                      auVar58._0_2_ = sVar57;
                      auVar58._6_2_ = sVar40;
                      auVar58._4_2_ = sVar38;
                      auVar58._10_2_ = sVar44;
                      auVar58._8_2_ = sVar42;
                      auVar58._14_2_ = sVar51;
                      auVar58._12_2_ = sVar46;
                      uVar37 = uVar37 + 8;
                      auVar64._0_2_ =
                           -(ushort)((short)(auVar56._0_2_ - sVar23) < (short)(sVar57 - sVar23));
                      auVar64._2_2_ =
                           -(ushort)((short)(auVar56._2_2_ - sVar24) < (short)(sVar61 - sVar24));
                      auVar64._4_2_ =
                           -(ushort)((short)(auVar56._4_2_ - sVar25) < (short)(sVar38 - sVar25));
                      auVar64._6_2_ =
                           -(ushort)((short)(auVar56._6_2_ - sVar26) < (short)(sVar40 - sVar26));
                      auVar64._8_2_ =
                           -(ushort)((short)(auVar56._8_2_ - sVar27) < (short)(sVar42 - sVar27));
                      auVar64._10_2_ =
                           -(ushort)((short)(auVar56._10_2_ - sVar28) < (short)(sVar44 - sVar28));
                      auVar64._12_2_ =
                           -(ushort)((short)(auVar56._12_2_ - sVar29) < (short)(sVar46 - sVar29));
                      auVar64._14_2_ =
                           -(ushort)((short)(auVar56._14_2_ - sVar30) < (short)(sVar51 - sVar30));
                      auVar56 = (auVar64 & (auVar58 ^ auVar56) ^ auVar56) & auVar62 |
                                ~auVar62 & auVar56;
                    } while (uVar37 < uVar39);
                    auVar60._0_8_ = auVar56._8_8_;
                    auVar60._8_4_ = auVar56._0_4_;
                    auVar60._12_4_ = auVar56._0_4_;
                    sVar57 = auVar56._0_2_;
                    sVar61 = auVar56._2_2_;
                    auVar59._0_2_ =
                         -(ushort)((short)(auVar56._8_2_ - sVar23) < (short)(sVar57 - sVar23));
                    auVar59._2_2_ =
                         -(ushort)((short)(auVar56._10_2_ - sVar24) < (short)(sVar61 - sVar24));
                    auVar59._4_2_ =
                         -(ushort)((short)(auVar56._12_2_ - sVar25) <
                                  (short)(auVar56._4_2_ - sVar25));
                    auVar59._6_2_ =
                         -(ushort)((short)(auVar56._14_2_ - sVar26) <
                                  (short)(auVar56._6_2_ - sVar26));
                    auVar59._8_2_ =
                         -(ushort)((short)(sVar57 - sVar27) < (short)(auVar56._8_2_ - sVar27));
                    auVar59._10_2_ =
                         -(ushort)((short)(sVar61 - sVar28) < (short)(auVar56._10_2_ - sVar28));
                    auVar59._12_2_ =
                         -(ushort)((short)(sVar57 - sVar29) < (short)(auVar56._12_2_ - sVar29));
                    auVar59._14_2_ =
                         -(ushort)((short)(sVar61 - sVar30) < (short)(auVar56._14_2_ - sVar30));
                    auVar60 = auVar59 & (auVar56 ^ auVar60) ^ auVar60;
                    auVar66._0_12_ = auVar60._4_12_;
                    auVar66._12_4_ = auVar60._0_4_;
                    auVar65._0_2_ =
                         -(ushort)((short)(auVar60._4_2_ - sVar23) < (short)(auVar60._0_2_ - sVar23)
                                  );
                    auVar65._2_2_ =
                         -(ushort)((short)(auVar60._6_2_ - sVar24) < (short)(auVar60._2_2_ - sVar24)
                                  );
                    auVar65._4_4_ = 0;
                    auVar65._8_2_ =
                         -(ushort)((short)(auVar60._12_2_ - sVar27) <
                                  (short)(auVar60._8_2_ - sVar27));
                    auVar65._10_2_ =
                         -(ushort)((short)(auVar60._14_2_ - sVar28) <
                                  (short)(auVar60._10_2_ - sVar28));
                    auVar65._12_2_ =
                         -(ushort)((short)(auVar60._0_2_ - sVar29) <
                                  (short)(auVar60._12_2_ - sVar29));
                    auVar65._14_2_ =
                         -(ushort)((short)(auVar60._2_2_ - sVar30) <
                                  (short)(auVar60._14_2_ - sVar30));
                    auVar66 = auVar65 & (auVar60 ^ auVar66) ^ auVar66;
                    uVar53 = (uint)(ushort)-(ushort)((short)(auVar66._2_2_ - sVar23) <
                                                    (short)(auVar66._0_2_ - sVar23)) &
                             (auVar66._0_4_ ^ auVar66._2_4_) ^ auVar66._2_4_;
                  }
                  if (uVar39 < uVar41) {
                    lVar1 = lVar48 + lVar35;
                    do {
                      if (*(char *)(uVar39 + param_7 + lVar32) != '\0') {
                        uVar52 = (ushort)uVar53;
                        uVar53 = uVar53 & 0xffff;
                        if (uVar52 < *(ushort *)(lVar1 + uVar39 * 2)) {
                          uVar53 = (uint)*(ushort *)(lVar1 + uVar39 * 2);
                        }
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 < uVar41);
                  }
                }
                uVar50 = (undefined2)uVar53;
                uVar45 = uVar45 + 1;
                lVar32 = lVar32 + uVar41;
                lVar35 = lVar35 + param_2 * 2;
              } while (uVar45 < uVar47);
            }
            uVar33 = uVar33 + 1;
            *(undefined2 *)(lVar49 + param_3 + lVar31) = uVar50;
            lVar49 = lVar49 + 2;
          } while (uVar33 < uVar9);
        }
        uVar36 = uVar36 + 1;
        lVar31 = lVar31 + param_4 * 2;
        lVar34 = lVar34 + param_2 * 2;
      } while (uVar36 < uVar43);
    }
  }
  return;
}

