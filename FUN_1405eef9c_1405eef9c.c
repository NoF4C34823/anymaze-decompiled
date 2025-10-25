
void FUN_1405eef9c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined2 uVar14;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar10 = 0;
  uVar9 = in_R9 & 0xfffffffffffffffc;
  do {
    lVar1 = uVar10 + in_RDX;
    uVar3 = *(ulonglong *)(param_1 + lVar1 * 2);
    uVar14 = (undefined2)(uVar3 >> 0x30);
    auVar17._8_4_ = 0;
    auVar17._0_8_ = uVar3;
    auVar17._12_2_ = uVar14;
    auVar17._14_2_ = uVar14;
    uVar14 = (undefined2)(uVar3 >> 0x20);
    auVar16._12_4_ = auVar17._12_4_;
    auVar16._8_2_ = 0;
    auVar16._0_8_ = uVar3;
    auVar16._10_2_ = uVar14;
    auVar15._10_6_ = auVar16._10_6_;
    auVar15._8_2_ = uVar14;
    auVar15._0_8_ = uVar3;
    uVar14 = (undefined2)(uVar3 >> 0x10);
    auVar6._4_8_ = auVar15._8_8_;
    auVar6._2_2_ = uVar14;
    auVar6._0_2_ = uVar14;
    uVar4 = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
    uVar5 = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
    uVar14 = (undefined2)(uVar4 >> 0x30);
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar4;
    auVar13._12_2_ = uVar14;
    auVar13._14_2_ = uVar14;
    uVar14 = (undefined2)(uVar4 >> 0x20);
    auVar12._12_4_ = auVar13._12_4_;
    auVar12._8_2_ = 0;
    auVar12._0_8_ = uVar4;
    auVar12._10_2_ = uVar14;
    auVar11._10_6_ = auVar12._10_6_;
    auVar11._8_2_ = uVar14;
    auVar11._0_8_ = uVar4;
    uVar14 = (undefined2)(uVar4 >> 0x10);
    auVar7._4_8_ = auVar11._8_8_;
    auVar7._2_2_ = uVar14;
    auVar7._0_2_ = uVar14;
    uVar14 = (undefined2)(uVar5 >> 0x30);
    auVar20._8_4_ = 0;
    auVar20._0_8_ = uVar5;
    auVar20._12_2_ = uVar14;
    auVar20._14_2_ = uVar14;
    uVar14 = (undefined2)(uVar5 >> 0x20);
    auVar19._12_4_ = auVar20._12_4_;
    auVar19._8_2_ = 0;
    auVar19._0_8_ = uVar5;
    auVar19._10_2_ = uVar14;
    auVar18._10_6_ = auVar19._10_6_;
    auVar18._8_2_ = uVar14;
    auVar18._0_8_ = uVar5;
    uVar14 = (undefined2)(uVar5 >> 0x10);
    auVar8._4_8_ = auVar18._8_8_;
    auVar8._2_2_ = uVar14;
    auVar8._0_2_ = uVar14;
    pfVar2 = (float *)(param_3 + in_RDX * 4 + uVar10 * 4);
    *pfVar2 = (float)((int)(short)uVar5 + (int)(short)uVar4) * (float)param_2 +
              (float)(int)(short)uVar3 * (float)param_4;
    pfVar2[1] = (float)((auVar8._0_4_ >> 0x10) + (auVar7._0_4_ >> 0x10)) *
                (float)((ulonglong)param_2 >> 0x20) +
                (float)(auVar6._0_4_ >> 0x10) * (float)((ulonglong)param_4 >> 0x20);
    pfVar2[2] = (float)((auVar18._8_4_ >> 0x10) + (auVar11._8_4_ >> 0x10)) * in_XMM1_Dc +
                (float)(auVar15._8_4_ >> 0x10) * in_XMM3_Dc;
    pfVar2[3] = (float)((auVar19._12_4_ >> 0x10) + (auVar12._12_4_ >> 0x10)) * in_XMM1_Dd +
                (float)(auVar16._12_4_ >> 0x10) * in_XMM3_Dd;
    uVar10 = uVar10 + 4;
  } while (uVar10 < uVar9);
  if (uVar9 < in_R9) {
    param_1 = param_1 + in_RDX * 2;
    do {
      *(float *)(param_3 + in_RDX * 4 + uVar9 * 4) =
           (float)((int)*(short *)(param_1 + -2 + uVar9 * 2) +
                  (int)*(short *)(param_1 + 2 + uVar9 * 2)) * in_XMM2_Da +
           (float)(int)*(short *)(param_1 + uVar9 * 2) * in_XMM0_Da;
      uVar9 = uVar9 + 1;
    } while (uVar9 < in_R9);
  }
  return;
}

