
void FUN_14004385f(longlong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  ulonglong uVar9;
  longlong in_RDX;
  ulonglong in_R9;
  ulonglong uVar10;
  float in_XMM0_Da;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined8 in_XMM2_Qa;
  undefined2 uVar14;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar10 = 0;
  uVar9 = in_R9 & 0xfffffffffffffffc;
  do {
    lVar1 = uVar10 + in_RDX;
    uVar3 = *(ulonglong *)(param_1 + lVar1 * 2);
    uVar14 = (undefined2)((ulonglong)in_XMM2_Qa >> 0x30);
    auVar20._8_4_ = 0;
    auVar20._0_8_ = uVar3;
    auVar20._12_2_ = (short)(uVar3 >> 0x30);
    auVar20._14_2_ = uVar14;
    uVar13 = (undefined2)((ulonglong)in_XMM2_Qa >> 0x20);
    auVar19._12_4_ = auVar20._12_4_;
    auVar19._8_2_ = 0;
    auVar19._0_8_ = uVar3;
    auVar19._10_2_ = uVar13;
    auVar18._10_6_ = auVar19._10_6_;
    auVar18._8_2_ = (short)(uVar3 >> 0x20);
    auVar18._0_8_ = uVar3;
    uVar12 = (undefined2)((ulonglong)in_XMM2_Qa >> 0x10);
    auVar6._4_8_ = auVar18._8_8_;
    auVar6._2_2_ = uVar12;
    auVar6._0_2_ = (short)(uVar3 >> 0x10);
    uVar11 = (undefined2)in_XMM2_Qa;
    uVar4 = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
    uVar5 = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
    auVar17._8_4_ = 0;
    auVar17._0_8_ = uVar4;
    auVar17._12_2_ = (short)(uVar4 >> 0x30);
    auVar17._14_2_ = uVar14;
    auVar16._12_4_ = auVar17._12_4_;
    auVar16._8_2_ = 0;
    auVar16._0_8_ = uVar4;
    auVar16._10_2_ = uVar13;
    auVar15._10_6_ = auVar16._10_6_;
    auVar15._8_2_ = (short)(uVar4 >> 0x20);
    auVar15._0_8_ = uVar4;
    auVar7._4_8_ = auVar15._8_8_;
    auVar7._2_2_ = uVar12;
    auVar7._0_2_ = (short)(uVar4 >> 0x10);
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar5;
    auVar23._12_2_ = (short)(uVar5 >> 0x30);
    auVar23._14_2_ = uVar14;
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._8_2_ = 0;
    auVar22._0_8_ = uVar5;
    auVar22._10_2_ = uVar13;
    auVar21._10_6_ = auVar22._10_6_;
    auVar21._8_2_ = (short)(uVar5 >> 0x20);
    auVar21._0_8_ = uVar5;
    auVar8._4_8_ = auVar21._8_8_;
    auVar8._2_2_ = uVar12;
    auVar8._0_2_ = (short)(uVar5 >> 0x10);
    pfVar2 = (float *)(param_3 + in_RDX * 4 + uVar10 * 4);
    *pfVar2 = (float)(CONCAT22(uVar11,(short)uVar5) + CONCAT22(uVar11,(short)uVar4)) *
              (float)param_4 + (float)CONCAT22(uVar11,(short)uVar3) * in_XMM4_Da;
    pfVar2[1] = (float)(auVar8._0_4_ + auVar7._0_4_) * (float)((ulonglong)param_4 >> 0x20) +
                (float)auVar6._0_4_ * in_XMM4_Db;
    pfVar2[2] = (float)(auVar21._8_4_ + auVar15._8_4_) * in_XMM3_Dc +
                (float)auVar18._8_4_ * in_XMM4_Dc;
    pfVar2[3] = (float)(auVar22._12_4_ + auVar16._12_4_) * in_XMM3_Dd +
                (float)auVar19._12_4_ * in_XMM4_Dd;
    uVar10 = uVar10 + 4;
  } while (uVar10 < uVar9);
  if (uVar9 < in_R9) {
    param_1 = param_1 + in_RDX * 2;
    do {
      *(float *)(param_3 + in_RDX * 4 + uVar9 * 4) =
           (float)((uint)*(ushort *)(param_1 + -2 + uVar9 * 2) +
                  (uint)*(ushort *)(param_1 + 2 + uVar9 * 2)) * param_2 +
           (float)*(ushort *)(param_1 + uVar9 * 2) * in_XMM0_Da;
      uVar9 = uVar9 + 1;
    } while (uVar9 < in_R9);
  }
  return;
}

