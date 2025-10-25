
void FUN_1400688d9(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  ulonglong *puVar16;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM6_Da;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined2 uVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  puVar16 = (ulonglong *)(param_1 * 2 + param_4);
  do {
    uVar2 = *(ulonglong *)((longlong)puVar16 + -6);
    uVar3 = *(ulonglong *)((longlong)puVar16 + 6);
    uVar29 = (undefined2)(uVar2 >> 0x30);
    auVar32._8_4_ = 0;
    auVar32._0_8_ = uVar2;
    auVar32._12_2_ = uVar29;
    auVar32._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar2 >> 0x20);
    auVar31._12_4_ = auVar32._12_4_;
    auVar31._8_2_ = 0;
    auVar31._0_8_ = uVar2;
    auVar31._10_2_ = uVar29;
    auVar30._10_6_ = auVar31._10_6_;
    auVar30._8_2_ = uVar29;
    auVar30._0_8_ = uVar2;
    uVar29 = (undefined2)(uVar2 >> 0x10);
    auVar9._4_8_ = auVar30._8_8_;
    auVar9._2_2_ = uVar29;
    auVar9._0_2_ = uVar29;
    uVar29 = (undefined2)(uVar3 >> 0x30);
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar3;
    auVar19._12_2_ = uVar29;
    auVar19._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar3 >> 0x20);
    auVar18._12_4_ = auVar19._12_4_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar3;
    auVar18._10_2_ = uVar29;
    auVar17._10_6_ = auVar18._10_6_;
    auVar17._8_2_ = uVar29;
    auVar17._0_8_ = uVar3;
    uVar29 = (undefined2)(uVar3 >> 0x10);
    auVar10._4_8_ = auVar17._8_8_;
    auVar10._2_2_ = uVar29;
    auVar10._0_2_ = uVar29;
    uVar4 = *(ulonglong *)((longlong)puVar16 + 4);
    uVar5 = *(ulonglong *)((longlong)puVar16 + -4);
    uVar29 = (undefined2)(uVar5 >> 0x30);
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar5;
    auVar35._12_2_ = uVar29;
    auVar35._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar5 >> 0x20);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._8_2_ = 0;
    auVar34._0_8_ = uVar5;
    auVar34._10_2_ = uVar29;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._8_2_ = uVar29;
    auVar33._0_8_ = uVar5;
    uVar29 = (undefined2)(uVar5 >> 0x10);
    auVar11._4_8_ = auVar33._8_8_;
    auVar11._2_2_ = uVar29;
    auVar11._0_2_ = uVar29;
    uVar29 = (undefined2)(uVar4 >> 0x30);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar4;
    auVar22._12_2_ = uVar29;
    auVar22._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar4 >> 0x20);
    auVar21._12_4_ = auVar22._12_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21._10_2_ = uVar29;
    auVar20._10_6_ = auVar21._10_6_;
    auVar20._8_2_ = uVar29;
    auVar20._0_8_ = uVar4;
    uVar29 = (undefined2)(uVar4 >> 0x10);
    auVar12._4_8_ = auVar20._8_8_;
    auVar12._2_2_ = uVar29;
    auVar12._0_2_ = uVar29;
    uVar6 = *(ulonglong *)((longlong)puVar16 + 2);
    uVar7 = *(ulonglong *)((longlong)puVar16 + -2);
    uVar29 = (undefined2)(uVar7 >> 0x30);
    auVar25._8_4_ = 0;
    auVar25._0_8_ = uVar7;
    auVar25._12_2_ = uVar29;
    auVar25._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar7 >> 0x20);
    auVar24._12_4_ = auVar25._12_4_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar7;
    auVar24._10_2_ = uVar29;
    auVar23._10_6_ = auVar24._10_6_;
    auVar23._8_2_ = uVar29;
    auVar23._0_8_ = uVar7;
    uVar29 = (undefined2)(uVar7 >> 0x10);
    auVar13._4_8_ = auVar23._8_8_;
    auVar13._2_2_ = uVar29;
    auVar13._0_2_ = uVar29;
    uVar29 = (undefined2)(uVar6 >> 0x30);
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar6;
    auVar38._12_2_ = uVar29;
    auVar38._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar6 >> 0x20);
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar6;
    auVar37._10_2_ = uVar29;
    auVar36._10_6_ = auVar37._10_6_;
    auVar36._8_2_ = uVar29;
    auVar36._0_8_ = uVar6;
    uVar29 = (undefined2)(uVar6 >> 0x10);
    auVar14._4_8_ = auVar36._8_8_;
    auVar14._2_2_ = uVar29;
    auVar14._0_2_ = uVar29;
    uVar8 = *puVar16;
    puVar16 = puVar16 + 1;
    uVar29 = (undefined2)(uVar8 >> 0x30);
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar8;
    auVar28._12_2_ = uVar29;
    auVar28._14_2_ = uVar29;
    uVar29 = (undefined2)(uVar8 >> 0x20);
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._8_2_ = 0;
    auVar27._0_8_ = uVar8;
    auVar27._10_2_ = uVar29;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._8_2_ = uVar29;
    auVar26._0_8_ = uVar8;
    uVar29 = (undefined2)(uVar8 >> 0x10);
    auVar15._4_8_ = auVar26._8_8_;
    auVar15._2_2_ = uVar29;
    auVar15._0_2_ = uVar29;
    pfVar1 = (float *)(in_R10 + param_1 * 4);
    *pfVar1 = (float)((int)(short)uVar2 + (int)(short)uVar3) * param_2 +
              (float)((int)(short)uVar5 + (int)(short)uVar4) * in_XMM2_Da +
              (float)((int)(short)uVar7 + (int)(short)uVar6) * unaff_XMM6_Da +
              (float)(int)(short)uVar8 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar9._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * param_2 +
                (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * in_XMM2_Da +
                (float)((auVar13._0_4_ >> 0x10) + (auVar14._0_4_ >> 0x10)) * unaff_XMM6_Da +
                (float)(auVar15._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar30._8_4_ >> 0x10) + (auVar17._8_4_ >> 0x10)) * param_2 +
                (float)((auVar33._8_4_ >> 0x10) + (auVar20._8_4_ >> 0x10)) * in_XMM2_Da +
                (float)((auVar23._8_4_ >> 0x10) + (auVar36._8_4_ >> 0x10)) * unaff_XMM6_Da +
                (float)(auVar26._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar31._12_4_ >> 0x10) + (auVar18._12_4_ >> 0x10)) * param_2 +
                (float)((auVar34._12_4_ >> 0x10) + (auVar21._12_4_ >> 0x10)) * in_XMM2_Da +
                (float)((auVar24._12_4_ >> 0x10) + (auVar37._12_4_ >> 0x10)) * unaff_XMM6_Da +
                (float)(auVar27._12_4_ >> 0x10) * in_XMM0_Da;
    param_1 = param_1 + 4;
  } while (param_1 < in_RDX);
  if (in_RDX < param_3) {
    do {
      *(float *)(in_R10 + in_RDX * 4) =
           (float)((int)*(short *)(param_4 + -6 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 6 + in_RDX * 2)) * param_2 +
           (float)((int)*(short *)(param_4 + -4 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 4 + in_RDX * 2)) * in_XMM2_Da +
           (float)((int)*(short *)(param_4 + -2 + in_RDX * 2) +
                  (int)*(short *)(param_4 + 2 + in_RDX * 2)) * unaff_XMM6_Da +
           (float)(int)*(short *)(param_4 + in_RDX * 2) * in_XMM0_Da;
      in_RDX = in_RDX + 1;
    } while (in_RDX < param_3);
  }
  return;
}

