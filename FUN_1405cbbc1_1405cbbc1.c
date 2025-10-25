
void FUN_1405cbbc1(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM4_Da;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined2 uVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  do {
    uVar2 = *(ulonglong *)(param_4 + 2 + in_RDX * 2);
    uVar3 = *(ulonglong *)(param_4 + in_RDX * 2);
    uVar4 = *(ulonglong *)(param_4 + -2 + in_RDX * 2);
    uVar15 = (undefined2)(uVar2 >> 0x30);
    auVar24._8_4_ = 0;
    auVar24._0_8_ = uVar2;
    auVar24._12_2_ = uVar15;
    auVar24._14_2_ = uVar15;
    uVar15 = (undefined2)(uVar2 >> 0x20);
    auVar23._12_4_ = auVar24._12_4_;
    auVar23._8_2_ = 0;
    auVar23._0_8_ = uVar2;
    auVar23._10_2_ = uVar15;
    auVar22._10_6_ = auVar23._10_6_;
    auVar22._8_2_ = uVar15;
    auVar22._0_8_ = uVar2;
    uVar15 = (undefined2)(uVar2 >> 0x10);
    auVar7._4_8_ = auVar22._8_8_;
    auVar7._2_2_ = uVar15;
    auVar7._0_2_ = uVar15;
    uVar15 = (undefined2)(uVar3 >> 0x30);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar3;
    auVar18._12_2_ = uVar15;
    auVar18._14_2_ = uVar15;
    uVar15 = (undefined2)(uVar3 >> 0x20);
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar3;
    auVar17._10_2_ = uVar15;
    auVar16._10_6_ = auVar17._10_6_;
    auVar16._8_2_ = uVar15;
    auVar16._0_8_ = uVar3;
    uVar15 = (undefined2)(uVar3 >> 0x10);
    auVar8._4_8_ = auVar16._8_8_;
    auVar8._2_2_ = uVar15;
    auVar8._0_2_ = uVar15;
    uVar15 = (undefined2)(uVar4 >> 0x30);
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar4;
    auVar14._12_2_ = uVar15;
    auVar14._14_2_ = uVar15;
    uVar15 = (undefined2)(uVar4 >> 0x20);
    auVar13._12_4_ = auVar14._12_4_;
    auVar13._8_2_ = 0;
    auVar13._0_8_ = uVar4;
    auVar13._10_2_ = uVar15;
    auVar12._10_6_ = auVar13._10_6_;
    auVar12._8_2_ = uVar15;
    auVar12._0_8_ = uVar4;
    uVar15 = (undefined2)(uVar4 >> 0x10);
    auVar9._4_8_ = auVar12._8_8_;
    auVar9._2_2_ = uVar15;
    auVar9._0_2_ = uVar15;
    uVar5 = *(ulonglong *)(param_4 + 4 + in_RDX * 2);
    uVar6 = *(ulonglong *)(param_4 + -4 + in_RDX * 2);
    uVar15 = (undefined2)(uVar6 >> 0x30);
    auVar27._8_4_ = 0;
    auVar27._0_8_ = uVar6;
    auVar27._12_2_ = uVar15;
    auVar27._14_2_ = uVar15;
    uVar15 = (undefined2)(uVar6 >> 0x20);
    auVar26._12_4_ = auVar27._12_4_;
    auVar26._8_2_ = 0;
    auVar26._0_8_ = uVar6;
    auVar26._10_2_ = uVar15;
    auVar25._10_6_ = auVar26._10_6_;
    auVar25._8_2_ = uVar15;
    auVar25._0_8_ = uVar6;
    uVar15 = (undefined2)(uVar6 >> 0x10);
    auVar10._4_8_ = auVar25._8_8_;
    auVar10._2_2_ = uVar15;
    auVar10._0_2_ = uVar15;
    uVar15 = (undefined2)(uVar5 >> 0x30);
    auVar21._8_4_ = 0;
    auVar21._0_8_ = uVar5;
    auVar21._12_2_ = uVar15;
    auVar21._14_2_ = uVar15;
    uVar15 = (undefined2)(uVar5 >> 0x20);
    auVar20._12_4_ = auVar21._12_4_;
    auVar20._8_2_ = 0;
    auVar20._0_8_ = uVar5;
    auVar20._10_2_ = uVar15;
    auVar19._10_6_ = auVar20._10_6_;
    auVar19._8_2_ = uVar15;
    auVar19._0_8_ = uVar5;
    uVar15 = (undefined2)(uVar5 >> 0x10);
    auVar11._4_8_ = auVar19._8_8_;
    auVar11._2_2_ = uVar15;
    auVar11._0_2_ = uVar15;
    pfVar1 = (float *)(in_R10 + in_RDX * 4);
    *pfVar1 = (float)((int)(short)uVar6 + (int)(short)uVar5) * param_2 +
              (float)((int)(short)uVar4 + (int)(short)uVar2) * in_XMM4_Da +
              (float)(int)(short)uVar3 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar10._0_4_ >> 0x10) + (auVar11._0_4_ >> 0x10)) * param_2 +
                (float)((auVar9._0_4_ >> 0x10) + (auVar7._0_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar8._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar25._8_4_ >> 0x10) + (auVar19._8_4_ >> 0x10)) * param_2 +
                (float)((auVar12._8_4_ >> 0x10) + (auVar22._8_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar16._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar26._12_4_ >> 0x10) + (auVar20._12_4_ >> 0x10)) * param_2 +
                (float)((auVar13._12_4_ >> 0x10) + (auVar23._12_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar17._12_4_ >> 0x10) * in_XMM0_Da;
    in_RDX = in_RDX + 4;
  } while (in_RDX < param_1);
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           (float)((int)*(short *)(param_4 + -4 + param_1 * 2) +
                  (int)*(short *)(param_4 + 4 + param_1 * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -2 + param_1 * 2) +
                  (int)*(short *)(param_4 + 2 + param_1 * 2)) * in_XMM4_Da +
           (float)(int)*(short *)(param_4 + param_1 * 2) * in_XMM0_Da;
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

