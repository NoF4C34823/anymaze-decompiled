
/* WARNING: Removing unreachable block (ram,0x000140010199) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140010150(undefined8 *param_1,undefined4 *param_2,uint param_3)

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
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 auVar20 [14];
  undefined1 auVar21 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar31 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar38 [16];
  undefined1 auVar47 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  if ((param_3 & 4) != 0) {
    uVar4 = *param_1;
    uVar5 = *(undefined4 *)(param_1 + 1);
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
    auVar27._0_14_ = in_XMM4._0_14_;
    auVar27[0xe] = in_XMM4[7];
    auVar27[0xf] = (char)((ulonglong)uVar4 >> 0x38);
    auVar26._14_2_ = auVar27._14_2_;
    auVar26._0_13_ = in_XMM4._0_13_;
    auVar26[0xd] = (char)((ulonglong)uVar4 >> 0x30);
    auVar25._13_3_ = auVar26._13_3_;
    auVar25._0_12_ = in_XMM4._0_12_;
    auVar25[0xc] = in_XMM4[6];
    auVar24._12_4_ = auVar25._12_4_;
    auVar24._0_11_ = in_XMM4._0_11_;
    auVar24[0xb] = (char)((ulonglong)uVar4 >> 0x28);
    auVar23._11_5_ = auVar24._11_5_;
    auVar23._0_10_ = in_XMM4._0_10_;
    auVar23[10] = in_XMM4[5];
    auVar22._10_6_ = auVar23._10_6_;
    auVar22._0_9_ = in_XMM4._0_9_;
    auVar22[9] = (char)((ulonglong)uVar4 >> 0x20);
    auVar21._9_7_ = auVar22._9_7_;
    auVar21._0_8_ = in_XMM4._0_8_;
    auVar21[8] = in_XMM4[4];
    auVar45._8_8_ = auVar21._8_8_;
    auVar45[7] = (char)((ulonglong)uVar4 >> 0x18);
    auVar45[6] = in_XMM4[3];
    auVar45[5] = (char)((ulonglong)uVar4 >> 0x10);
    auVar45[4] = in_XMM4[2];
    auVar45[3] = (char)((ulonglong)uVar4 >> 8);
    auVar45[2] = in_XMM4[1];
    auVar45[0] = in_XMM4[0];
    auVar45[1] = (char)uVar4;
    uVar36 = (undefined1)((uint)uVar5 >> 0x18);
    auVar44[0xe] = in_XMM4[7];
    auVar44._0_14_ = auVar27._0_14_;
    auVar44[0xf] = uVar36;
    uVar35 = (undefined1)((uint)uVar5 >> 0x10);
    auVar43._14_2_ = auVar44._14_2_;
    auVar43[0xd] = uVar35;
    auVar43._0_13_ = auVar26._0_13_;
    auVar42._13_3_ = auVar43._13_3_;
    auVar42[0xc] = in_XMM4[6];
    auVar42._0_12_ = auVar25._0_12_;
    uVar34 = (undefined1)((uint)uVar5 >> 8);
    auVar41._12_4_ = auVar42._12_4_;
    auVar41[0xb] = uVar34;
    auVar41._0_11_ = auVar24._0_11_;
    auVar40._11_5_ = auVar41._11_5_;
    auVar40[10] = in_XMM4[5];
    auVar40._0_10_ = auVar23._0_10_;
    auVar39._10_6_ = auVar40._10_6_;
    auVar39[9] = (char)uVar5;
    auVar39._0_9_ = auVar22._0_9_;
    auVar38._9_7_ = auVar39._9_7_;
    auVar38[8] = in_XMM4[4];
    auVar38._0_8_ = auVar21._0_8_;
    auVar37._8_8_ = auVar38._8_8_;
    auVar37[7] = uVar36;
    auVar37[6] = in_XMM4[3];
    auVar37[5] = uVar35;
    auVar37[4] = in_XMM4[2];
    auVar37[3] = uVar34;
    auVar37[2] = in_XMM4[1];
    auVar37[1] = (char)uVar5;
    auVar37[0] = auVar45[0];
    auVar28._8_8_ = in_XMM2_Qb;
    auVar28._0_8_ = in_XMM2_Qa;
    auVar28 = pmulhuw(auVar45,auVar28);
    auVar45 = pmulhuw(auVar37,in_XMM5);
    auVar32._0_8_ = auVar45._0_8_ << 0x20;
    auVar32._8_8_ = auVar45._8_8_ << 0x20 | auVar45._0_8_ >> 0x20;
    auVar50._0_12_ = auVar28._0_12_;
    auVar51._12_2_ = auVar28._6_2_;
    auVar51._0_12_ = auVar50._0_12_;
    auVar51._14_2_ = auVar28._12_2_;
    auVar50._12_4_ = auVar51._12_4_;
    auVar49._10_6_ = auVar50._10_6_;
    auVar49._0_8_ = auVar28._0_8_;
    auVar49._8_2_ = auVar28._4_2_;
    auVar13._4_8_ = auVar49._8_8_;
    auVar13._2_2_ = auVar28._8_2_;
    auVar13._0_2_ = auVar28._2_2_;
    auVar48._0_4_ = CONCAT22(auVar28._6_2_,auVar28._0_2_);
    auVar48._4_12_ = auVar13;
    auVar20 = ZEXT414(auVar28._12_4_) | auVar32._0_14_;
    auVar31._0_12_ = auVar20._0_12_;
    auVar31._12_2_ = auVar20._6_2_;
    auVar31._14_2_ = auVar45._8_2_;
    auVar30._12_4_ = auVar31._12_4_;
    auVar30._0_10_ = auVar20._0_10_;
    auVar30._10_2_ = auVar45._6_2_;
    auVar29._10_6_ = auVar30._10_6_;
    auVar29._0_8_ = auVar20._0_8_;
    auVar29._8_2_ = auVar20._4_2_;
    auVar14._4_8_ = auVar29._8_8_;
    auVar14._2_2_ = auVar45._4_2_;
    auVar14._0_2_ = auVar20._2_2_;
    auVar46._6_2_ = auVar45._2_2_;
    auVar46._4_2_ = auVar20._0_2_;
    auVar47._0_8_ = auVar48._0_8_;
    auVar47._8_4_ = auVar13._0_4_;
    auVar47._12_4_ = auVar14._0_4_;
    auVar46._8_8_ = auVar47._8_8_;
    auVar46._0_4_ = auVar48._0_4_;
    auVar33._8_8_ = auVar46._8_8_;
    auVar33._0_8_ = auVar46._8_8_;
    auVar52._4_4_ = auVar29._8_4_;
    auVar52._0_4_ = auVar49._8_4_;
    auVar52._8_4_ = auVar50._12_4_;
    auVar52._12_4_ = auVar30._12_4_;
    auVar28 = paddusw(auVar33,auVar46);
    auVar28 = paddusw(auVar28,auVar52);
    auVar28 = paddusw(auVar28,_DAT_143086470);
    auVar28 = psraw(auVar28,7);
    sVar6 = auVar28._0_2_;
    sVar7 = auVar28._2_2_;
    sVar8 = auVar28._4_2_;
    sVar9 = auVar28._6_2_;
    *param_2 = CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar28[6] - (0xff < sVar9),
                        CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar28[4] - (0xff < sVar8),
                                 CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar28[2] -
                                          (0xff < sVar7),
                                          (0 < sVar6) * (sVar6 < 0x100) * auVar28[0] -
                                          (0xff < sVar6))));
    param_2 = param_2 + 1;
  }
  bVar19 = (param_3 & 3) != 0;
  if (bVar19) {
    uVar10 = (ushort)in_XMM2_Qa;
    uVar11 = (ushort)((ulonglong)in_XMM2_Qa >> 0x10);
    uVar12 = (ushort)((ulonglong)in_XMM2_Qa >> 0x20);
    if (bVar19) {
      uVar15 = 0;
      uVar17 = (param_3 & 3) >> 1;
      iVar18 = 1;
      lVar16 = 0;
      if (uVar17 != 0) {
        do {
          *(char *)((longlong)param_2 + uVar15 * 2) =
               (char)((uint)*(byte *)(lVar16 + (longlong)param_1) * (uint)uVar10 +
                      (uint)*(byte *)(lVar16 + 1 + (longlong)param_1) * (uint)uVar11 +
                      (uint)*(byte *)(lVar16 + 2 + (longlong)param_1) * (uint)uVar12 + 0x4000 >> 0xf
                     );
          lVar1 = lVar16 + 3;
          lVar2 = lVar16 + 4;
          lVar3 = lVar16 + 5;
          lVar16 = lVar16 + 6;
          *(char *)((longlong)param_2 + uVar15 * 2 + 1) =
               (char)((uint)*(byte *)(lVar1 + (longlong)param_1) * (uint)uVar10 +
                      (uint)*(byte *)(lVar2 + (longlong)param_1) * (uint)uVar11 +
                      (uint)*(byte *)(lVar3 + (longlong)param_1) * (uint)uVar12 + 0x4000 >> 0xf);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar17);
        iVar18 = (int)uVar15 * 2 + 1;
      }
      if (iVar18 - 1U < (param_3 & 3)) {
        lVar16 = (longlong)iVar18 * 3;
        *(char *)((longlong)iVar18 + -1 + (longlong)param_2) =
             (char)((uint)uVar10 * (uint)*(byte *)(lVar16 + -3 + (longlong)param_1) +
                    (uint)uVar11 * (uint)*(byte *)(lVar16 + -2 + (longlong)param_1) +
                    (uint)uVar12 * (uint)*(byte *)(lVar16 + -1 + (longlong)param_1) + 0x4000 >> 0xf)
        ;
      }
    }
  }
  return;
}

