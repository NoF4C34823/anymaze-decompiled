
void FUN_1407080b7(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

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
  ulonglong in_RAX;
  ulonglong *puVar12;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM4_Da;
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined2 uVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         (float)((int)*(short *)(param_4 + -4 + in_RAX * 2) +
                (int)*(short *)(param_4 + 4 + in_RAX * 2)) * param_2 +
         (float)((int)*(short *)(param_4 + -2 + in_RAX * 2) +
                (int)*(short *)(param_4 + 2 + in_RAX * 2)) * in_XMM4_Da +
         (float)(int)*(short *)(param_4 + in_RAX * 2) * in_XMM0_Da;
    in_RAX = in_RAX + 1;
  } while (in_RAX < param_1);
  puVar12 = (ulonglong *)(param_1 * 2 + param_4);
  do {
    uVar2 = *(ulonglong *)((longlong)puVar12 + -4);
    uVar3 = *(ulonglong *)((longlong)puVar12 + 4);
    uVar19 = (undefined2)(uVar2 >> 0x30);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar2;
    auVar22._12_2_ = uVar19;
    auVar22._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar2 >> 0x20);
    auVar21._12_4_ = auVar22._12_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar2;
    auVar21._10_2_ = uVar19;
    auVar20._10_6_ = auVar21._10_6_;
    auVar20._8_2_ = uVar19;
    auVar20._0_8_ = uVar2;
    uVar19 = (undefined2)(uVar2 >> 0x10);
    auVar7._4_8_ = auVar20._8_8_;
    auVar7._2_2_ = uVar19;
    auVar7._0_2_ = uVar19;
    uVar19 = (undefined2)(uVar3 >> 0x30);
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar3;
    auVar15._12_2_ = uVar19;
    auVar15._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar3 >> 0x20);
    auVar14._12_4_ = auVar15._12_4_;
    auVar14._8_2_ = 0;
    auVar14._0_8_ = uVar3;
    auVar14._10_2_ = uVar19;
    auVar13._10_6_ = auVar14._10_6_;
    auVar13._8_2_ = uVar19;
    auVar13._0_8_ = uVar3;
    uVar19 = (undefined2)(uVar3 >> 0x10);
    auVar8._4_8_ = auVar13._8_8_;
    auVar8._2_2_ = uVar19;
    auVar8._0_2_ = uVar19;
    uVar4 = *(ulonglong *)((longlong)puVar12 + 2);
    uVar5 = *(ulonglong *)((longlong)puVar12 + -2);
    uVar19 = (undefined2)(uVar5 >> 0x30);
    auVar25._8_4_ = 0;
    auVar25._0_8_ = uVar5;
    auVar25._12_2_ = uVar19;
    auVar25._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar5 >> 0x20);
    auVar24._12_4_ = auVar25._12_4_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar5;
    auVar24._10_2_ = uVar19;
    auVar23._10_6_ = auVar24._10_6_;
    auVar23._8_2_ = uVar19;
    auVar23._0_8_ = uVar5;
    uVar19 = (undefined2)(uVar5 >> 0x10);
    auVar9._4_8_ = auVar23._8_8_;
    auVar9._2_2_ = uVar19;
    auVar9._0_2_ = uVar19;
    uVar19 = (undefined2)(uVar4 >> 0x30);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar4;
    auVar18._12_2_ = uVar19;
    auVar18._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar4 >> 0x20);
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar4;
    auVar17._10_2_ = uVar19;
    auVar16._10_6_ = auVar17._10_6_;
    auVar16._8_2_ = uVar19;
    auVar16._0_8_ = uVar4;
    uVar19 = (undefined2)(uVar4 >> 0x10);
    auVar10._4_8_ = auVar16._8_8_;
    auVar10._2_2_ = uVar19;
    auVar10._0_2_ = uVar19;
    uVar6 = *puVar12;
    puVar12 = puVar12 + 1;
    uVar19 = (undefined2)(uVar6 >> 0x30);
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar6;
    auVar28._12_2_ = uVar19;
    auVar28._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar6 >> 0x20);
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._8_2_ = 0;
    auVar27._0_8_ = uVar6;
    auVar27._10_2_ = uVar19;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._8_2_ = uVar19;
    auVar26._0_8_ = uVar6;
    uVar19 = (undefined2)(uVar6 >> 0x10);
    auVar11._4_8_ = auVar26._8_8_;
    auVar11._2_2_ = uVar19;
    auVar11._0_2_ = uVar19;
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    *pfVar1 = (float)((int)(short)uVar2 + (int)(short)uVar3) * param_2 +
              (float)((int)(short)uVar5 + (int)(short)uVar4) * in_XMM4_Da +
              (float)(int)(short)uVar6 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar7._0_4_ >> 0x10) + (auVar8._0_4_ >> 0x10)) * param_2 +
                (float)((auVar9._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar11._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar20._8_4_ >> 0x10) + (auVar13._8_4_ >> 0x10)) * param_2 +
                (float)((auVar23._8_4_ >> 0x10) + (auVar16._8_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar26._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar21._12_4_ >> 0x10) + (auVar14._12_4_ >> 0x10)) * param_2 +
                (float)((auVar24._12_4_ >> 0x10) + (auVar17._12_4_ >> 0x10)) * in_XMM4_Da +
                (float)(auVar27._12_4_ >> 0x10) * in_XMM0_Da;
    param_1 = param_1 + 4;
  } while (param_1 < in_RDX);
  if (in_RDX < param_3) {
    do {
      *(float *)(in_R10 + in_RDX * 4) =
           (float)((int)*(short *)(param_4 + -4 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 4 + in_RDX * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -2 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 2 + in_RDX * 2)) * in_XMM4_Da +
           (float)(int)*(short *)(param_4 + in_RDX * 2) * in_XMM0_Da;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

