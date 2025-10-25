
void FUN_140046b9c(ulonglong param_1,float param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  longlong in_RDX;
  longlong in_R9;
  ulonglong uVar9;
  float in_XMM0_Da;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar9 = 0;
  uVar8 = param_1 & 0xfffffffffffffffc;
  do {
    uVar2 = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar9 * 2);
    uVar3 = *(ulonglong *)(param_3 + (uVar9 + in_RDX) * 2);
    uVar13 = (undefined2)(uVar3 >> 0x30);
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar3;
    auVar16._12_2_ = uVar13;
    auVar16._14_2_ = uVar13;
    uVar13 = (undefined2)(uVar3 >> 0x20);
    auVar15._12_4_ = auVar16._12_4_;
    auVar15._8_2_ = 0;
    auVar15._0_8_ = uVar3;
    auVar15._10_2_ = uVar13;
    auVar14._10_6_ = auVar15._10_6_;
    auVar14._8_2_ = uVar13;
    auVar14._0_8_ = uVar3;
    uVar13 = (undefined2)(uVar3 >> 0x10);
    auVar5._4_8_ = auVar14._8_8_;
    auVar5._2_2_ = uVar13;
    auVar5._0_2_ = uVar13;
    uVar4 = *(ulonglong *)(param_3 + -6 + (uVar9 + in_RDX) * 2);
    uVar13 = (undefined2)(uVar2 >> 0x30);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar2;
    auVar12._12_2_ = uVar13;
    auVar12._14_2_ = uVar13;
    uVar13 = (undefined2)(uVar2 >> 0x20);
    auVar11._12_4_ = auVar12._12_4_;
    auVar11._8_2_ = 0;
    auVar11._0_8_ = uVar2;
    auVar11._10_2_ = uVar13;
    auVar10._10_6_ = auVar11._10_6_;
    auVar10._8_2_ = uVar13;
    auVar10._0_8_ = uVar2;
    uVar13 = (undefined2)(uVar2 >> 0x10);
    auVar6._4_8_ = auVar10._8_8_;
    auVar6._2_2_ = uVar13;
    auVar6._0_2_ = uVar13;
    uVar13 = (undefined2)(uVar4 >> 0x30);
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar4;
    auVar19._12_2_ = uVar13;
    auVar19._14_2_ = uVar13;
    uVar13 = (undefined2)(uVar4 >> 0x20);
    auVar18._12_4_ = auVar19._12_4_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar4;
    auVar18._10_2_ = uVar13;
    auVar17._10_6_ = auVar18._10_6_;
    auVar17._8_2_ = uVar13;
    auVar17._0_8_ = uVar4;
    uVar13 = (undefined2)(uVar4 >> 0x10);
    auVar7._4_8_ = auVar17._8_8_;
    auVar7._2_2_ = uVar13;
    auVar7._0_2_ = uVar13;
    pfVar1 = (float *)(in_R9 + in_RDX * 4 + uVar9 * 4);
    *pfVar1 = (float)((int)(short)uVar4 + (int)(short)uVar2) * (float)param_4 +
              (float)(int)(short)uVar3 * (float)in_XMM2_Qa;
    pfVar1[1] = (float)((auVar7._0_4_ >> 0x10) + (auVar6._0_4_ >> 0x10)) *
                (float)((ulonglong)param_4 >> 0x20) +
                (float)(auVar5._0_4_ >> 0x10) * (float)((ulonglong)in_XMM2_Qa >> 0x20);
    pfVar1[2] = (float)((auVar17._8_4_ >> 0x10) + (auVar10._8_4_ >> 0x10)) * in_XMM3_Dc +
                (float)(auVar14._8_4_ >> 0x10) * in_XMM2_Dc;
    pfVar1[3] = (float)((auVar18._12_4_ >> 0x10) + (auVar11._12_4_ >> 0x10)) * in_XMM3_Dd +
                (float)(auVar15._12_4_ >> 0x10) * in_XMM2_Dd;
    uVar9 = uVar9 + 4;
  } while (uVar9 < uVar8);
  if (uVar8 < param_1) {
    param_3 = param_3 + in_RDX * 2;
    do {
      *(float *)(in_R9 + in_RDX * 4 + uVar8 * 4) =
           (float)((int)*(short *)(param_3 + -6 + uVar8 * 2) +
                  (int)*(short *)(param_3 + 6 + uVar8 * 2)) * param_2 +
           (float)(int)*(short *)(param_3 + uVar8 * 2) * in_XMM0_Da;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_1);
  }
  return;
}

