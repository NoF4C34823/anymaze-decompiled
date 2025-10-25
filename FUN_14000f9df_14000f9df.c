
/* WARNING: Removing unreachable block (ram,0x00014000fa28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f9df(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 in_XMM0 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 auVar36 [14];
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar48 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  if ((param_3 & 4) != 0) {
    uVar4 = *param_1;
    uVar5 = *(undefined4 *)(param_1 + 1);
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
    auVar44._0_14_ = in_XMM1._0_14_;
    auVar44[0xe] = in_XMM1[7];
    auVar44[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar43._14_2_ = auVar44._14_2_;
    auVar43._0_13_ = in_XMM1._0_13_;
    auVar43[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar42._13_3_ = auVar43._13_3_;
    auVar42._0_12_ = in_XMM1._0_12_;
    auVar42[0xc] = in_XMM1[6];
    auVar41._12_4_ = auVar42._12_4_;
    auVar41._0_11_ = in_XMM1._0_11_;
    auVar41[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar40._11_5_ = auVar41._11_5_;
    auVar40._0_10_ = in_XMM1._0_10_;
    auVar40[10] = in_XMM1[5];
    auVar39._10_6_ = auVar40._10_6_;
    auVar39._0_9_ = in_XMM1._0_9_;
    auVar39[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar38._9_7_ = auVar39._9_7_;
    auVar38._0_8_ = in_XMM1._0_8_;
    auVar38[8] = in_XMM1[4];
    auVar37._8_8_ = auVar38._8_8_;
    auVar37[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar37[6] = in_XMM1[3];
    auVar37[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar37[4] = in_XMM1[2];
    auVar37[3] = (char)((ulonglong)uVar4 >> 8);
    auVar37[2] = in_XMM1[1];
    auVar37[0] = in_XMM1[0];
    auVar37[1] = (char)uVar4;
    uVar53 = (undefined1)((uint)uVar5 >> 0x18);
    auVar32[0xe] = in_XMM1[7];
    auVar32._0_14_ = auVar44._0_14_;
    auVar32[0xf] = uVar53;
    auVar31._14_2_ = auVar32._14_2_;
    uVar52 = (undefined1)((uint)uVar5 >> 0x10);
    auVar31[0xd] = uVar52;
    auVar31._0_13_ = auVar43._0_13_;
    auVar30._13_3_ = auVar31._13_3_;
    auVar30[0xc] = in_XMM1[6];
    auVar30._0_12_ = auVar42._0_12_;
    auVar29._12_4_ = auVar30._12_4_;
    uVar51 = (undefined1)((uint)uVar5 >> 8);
    auVar29[0xb] = uVar51;
    auVar29._0_11_ = auVar41._0_11_;
    auVar28._11_5_ = auVar29._11_5_;
    auVar28[10] = in_XMM1[5];
    auVar28._0_10_ = auVar40._0_10_;
    auVar27._10_6_ = auVar28._10_6_;
    auVar27[9] = (char)uVar5;
    auVar27._0_9_ = auVar39._0_9_;
    auVar26._9_7_ = auVar27._9_7_;
    auVar26[8] = in_XMM1[4];
    auVar26._0_8_ = auVar38._0_8_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25[7] = uVar53;
    auVar25[6] = in_XMM1[3];
    auVar25[5] = uVar52;
    auVar25[4] = in_XMM1[2];
    auVar25[3] = uVar51;
    auVar25[2] = in_XMM1[1];
    auVar25[1] = (char)uVar5;
    auVar25[0] = auVar37[0];
    auVar33._8_8_ = in_XMM2_Qb;
    auVar33._0_8_ = in_XMM2_Qa;
    auVar45 = pmulhuw(auVar37,auVar33);
    auVar33 = pmulhuw(auVar25,in_XMM0);
    auVar49._0_8_ = auVar33._0_8_ << 0x20;
    auVar49._8_8_ = auVar33._8_8_ << 0x20 | auVar33._0_8_ >> 0x20;
    auVar23._0_12_ = auVar45._0_12_;
    auVar24._12_2_ = auVar45._6_2_;
    auVar24._0_12_ = auVar23._0_12_;
    auVar24._14_2_ = auVar45._12_2_;
    auVar23._12_4_ = auVar24._12_4_;
    auVar22._10_6_ = auVar23._10_6_;
    auVar22._0_8_ = auVar45._0_8_;
    auVar22._8_2_ = auVar45._4_2_;
    auVar13._4_8_ = auVar22._8_8_;
    auVar13._2_2_ = auVar45._8_2_;
    auVar13._0_2_ = auVar45._2_2_;
    auVar21._0_4_ = CONCAT22(auVar45._6_2_,auVar45._0_2_);
    auVar21._4_12_ = auVar13;
    auVar36 = ZEXT414(auVar45._12_4_) | auVar49._0_14_;
    auVar48._0_12_ = auVar36._0_12_;
    auVar48._12_2_ = auVar36._6_2_;
    auVar48._14_2_ = auVar33._8_2_;
    auVar47._12_4_ = auVar48._12_4_;
    auVar47._0_10_ = auVar36._0_10_;
    auVar47._10_2_ = auVar33._6_2_;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46._0_8_ = auVar36._0_8_;
    auVar46._8_2_ = auVar36._4_2_;
    auVar14._4_8_ = auVar46._8_8_;
    auVar14._2_2_ = auVar33._4_2_;
    auVar14._0_2_ = auVar36._2_2_;
    auVar34._6_2_ = auVar33._2_2_;
    auVar34._4_2_ = auVar36._0_2_;
    auVar35._0_8_ = auVar21._0_8_;
    auVar35._8_4_ = auVar13._0_4_;
    auVar35._12_4_ = auVar14._0_4_;
    auVar34._8_8_ = auVar35._8_8_;
    auVar34._0_4_ = auVar21._0_4_;
    auVar50._8_8_ = auVar34._8_8_;
    auVar50._0_8_ = auVar34._8_8_;
    auVar45._4_4_ = auVar46._8_4_;
    auVar45._0_4_ = auVar22._8_4_;
    auVar45._8_4_ = auVar23._12_4_;
    auVar45._12_4_ = auVar47._12_4_;
    auVar33 = paddusw(auVar50,auVar34);
    auVar33 = paddusw(auVar33,auVar45);
    auVar33 = paddusw(auVar33,_DAT_1430863f0);
    auVar33 = psraw(auVar33,7);
    sVar6 = auVar33._0_2_;
    sVar7 = auVar33._2_2_;
    sVar8 = auVar33._4_2_;
    sVar9 = auVar33._6_2_;
    *param_2 = CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar33[6] - (0xff < sVar9),
                        CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar33[4] - (0xff < sVar8),
                                 CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar33[2] -
                                          (0xff < sVar7),
                                          (0 < sVar6) * (sVar6 < 0x100) * auVar33[0] -
                                          (0xff < sVar6))));
    param_2 = param_2 + 1;
  }
  uVar15 = param_3 & 3;
  bVar20 = (param_3 & 3) != 0;
  if (bVar20) {
    uVar10 = (ushort)in_XMM2_Qa;
    uVar11 = (ushort)((ulonglong)in_XMM2_Qa >> 0x10);
    uVar12 = (ushort)((ulonglong)in_XMM2_Qa >> 0x20);
    if (bVar20) {
      iVar16 = 1;
      lVar17 = 0;
      if (uVar15 >> 1 != 0) {
        uVar19 = 0;
        do {
          uVar18 = uVar19;
          *(char *)((longlong)param_2 + uVar18 * 2) =
               (char)((uint)*(byte *)(lVar17 + (longlong)param_1) * (uint)uVar10 +
                      (uint)*(byte *)(lVar17 + 1 + (longlong)param_1) * (uint)uVar11 + 0x4000 +
                      (uint)*(byte *)(lVar17 + 2 + (longlong)param_1) * (uint)uVar12 >> 0xf);
          lVar1 = lVar17 + 3;
          lVar2 = lVar17 + 4;
          lVar3 = lVar17 + 5;
          lVar17 = lVar17 + 6;
          *(char *)((longlong)param_2 + uVar18 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar10 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar11 + 0x4000 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar12 >> 0xf);
          uVar19 = uVar18 + 1;
        } while (uVar19 < uVar15 >> 1);
        iVar16 = (int)uVar18 + 2 + (int)uVar19;
      }
      if (iVar16 - 1U < uVar15) {
        lVar17 = (longlong)iVar16 * 3;
        *(char *)((longlong)iVar16 + -1 + (longlong)param_2) =
             (char)((uint)uVar10 * (uint)*(byte *)(lVar17 + -3 + (longlong)param_1) +
                    (uint)uVar11 * (uint)*(byte *)(lVar17 + -2 + (longlong)param_1) + 0x4000 +
                    (uint)uVar12 * (uint)*(byte *)(lVar17 + -1 + (longlong)param_1) >> 0xf);
      }
    }
  }
  return;
}

