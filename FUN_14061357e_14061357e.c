
void FUN_14061357e(ulonglong param_1,float param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  ulonglong in_RDX;
  ulonglong in_R10;
  ulonglong uVar15;
  float in_XMM0_Da;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined2 uVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  do {
    uVar14 = *(ulonglong *)(param_3 + in_R10 * 2);
    uVar19 = (undefined2)(uVar14 >> 0x30);
    auVar31._8_4_ = 0;
    auVar31._0_8_ = uVar14;
    auVar31._12_2_ = uVar19;
    auVar31._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar14 >> 0x20);
    auVar30._12_4_ = auVar31._12_4_;
    auVar30._8_2_ = 0;
    auVar30._0_8_ = uVar14;
    auVar30._10_2_ = uVar19;
    auVar29._10_6_ = auVar30._10_6_;
    auVar29._8_2_ = uVar19;
    auVar29._0_8_ = uVar14;
    uVar19 = (undefined2)(uVar14 >> 0x10);
    auVar5._4_8_ = auVar29._8_8_;
    auVar5._2_2_ = uVar19;
    auVar5._0_2_ = uVar19;
    uVar15 = *(ulonglong *)(param_3 + -6 + in_R10 * 2);
    uVar2 = *(ulonglong *)(param_3 + 6 + in_R10 * 2);
    uVar19 = (undefined2)(uVar15 >> 0x30);
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar15;
    auVar22._12_2_ = uVar19;
    auVar22._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar15 >> 0x20);
    auVar21._12_4_ = auVar22._12_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar15;
    auVar21._10_2_ = uVar19;
    auVar20._10_6_ = auVar21._10_6_;
    auVar20._8_2_ = uVar19;
    auVar20._0_8_ = uVar15;
    uVar19 = (undefined2)(uVar15 >> 0x10);
    auVar6._4_8_ = auVar20._8_8_;
    auVar6._2_2_ = uVar19;
    auVar6._0_2_ = uVar19;
    uVar19 = (undefined2)(uVar2 >> 0x30);
    auVar34._8_4_ = 0;
    auVar34._0_8_ = uVar2;
    auVar34._12_2_ = uVar19;
    auVar34._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar2 >> 0x20);
    auVar33._12_4_ = auVar34._12_4_;
    auVar33._8_2_ = 0;
    auVar33._0_8_ = uVar2;
    auVar33._10_2_ = uVar19;
    auVar32._10_6_ = auVar33._10_6_;
    auVar32._8_2_ = uVar19;
    auVar32._0_8_ = uVar2;
    uVar19 = (undefined2)(uVar2 >> 0x10);
    auVar7._4_8_ = auVar32._8_8_;
    auVar7._2_2_ = uVar19;
    auVar7._0_2_ = uVar19;
    pfVar1 = (float *)(param_4 + in_R10 * 4);
    *pfVar1 = (float)((int)(short)uVar15 + (int)(short)uVar2) * param_2 +
              (float)(int)(short)uVar14 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar6._0_4_ >> 0x10) + (auVar7._0_4_ >> 0x10)) * param_2 +
                (float)(auVar5._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar20._8_4_ >> 0x10) + (auVar32._8_4_ >> 0x10)) * param_2 +
                (float)(auVar29._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar21._12_4_ >> 0x10) + (auVar33._12_4_ >> 0x10)) * param_2 +
                (float)(auVar30._12_4_ >> 0x10) * in_XMM0_Da;
    uVar14 = *(ulonglong *)(param_3 + 2 + in_R10 * 2);
    uVar15 = *(ulonglong *)(param_3 + 0xe + in_R10 * 2);
    uVar2 = *(ulonglong *)(param_3 + 8 + in_R10 * 2);
    uVar19 = (undefined2)(uVar14 >> 0x30);
    auVar25._8_4_ = 0;
    auVar25._0_8_ = uVar14;
    auVar25._12_2_ = uVar19;
    auVar25._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar14 >> 0x20);
    auVar24._12_4_ = auVar25._12_4_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar14;
    auVar24._10_2_ = uVar19;
    auVar23._10_6_ = auVar24._10_6_;
    auVar23._8_2_ = uVar19;
    auVar23._0_8_ = uVar14;
    uVar19 = (undefined2)(uVar14 >> 0x10);
    auVar8._4_8_ = auVar23._8_8_;
    auVar8._2_2_ = uVar19;
    auVar8._0_2_ = uVar19;
    uVar19 = (undefined2)(uVar15 >> 0x30);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar15;
    auVar18._12_2_ = uVar19;
    auVar18._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar15 >> 0x20);
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar15;
    auVar17._10_2_ = uVar19;
    auVar16._10_6_ = auVar17._10_6_;
    auVar16._8_2_ = uVar19;
    auVar16._0_8_ = uVar15;
    uVar19 = (undefined2)(uVar15 >> 0x10);
    auVar9._4_8_ = auVar16._8_8_;
    auVar9._2_2_ = uVar19;
    auVar9._0_2_ = uVar19;
    uVar19 = (undefined2)(uVar2 >> 0x30);
    auVar37._8_4_ = 0;
    auVar37._0_8_ = uVar2;
    auVar37._12_2_ = uVar19;
    auVar37._14_2_ = uVar19;
    uVar19 = (undefined2)(uVar2 >> 0x20);
    auVar36._12_4_ = auVar37._12_4_;
    auVar36._8_2_ = 0;
    auVar36._0_8_ = uVar2;
    auVar36._10_2_ = uVar19;
    auVar35._10_6_ = auVar36._10_6_;
    auVar35._8_2_ = uVar19;
    auVar35._0_8_ = uVar2;
    uVar19 = (undefined2)(uVar2 >> 0x10);
    auVar10._4_8_ = auVar35._8_8_;
    auVar10._2_2_ = uVar19;
    auVar10._0_2_ = uVar19;
    pfVar1 = (float *)(param_4 + 0x10 + in_R10 * 4);
    *pfVar1 = (float)((int)(short)uVar14 + (int)(short)uVar15) * param_2 +
              (float)(int)(short)uVar2 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar8._0_4_ >> 0x10) + (auVar9._0_4_ >> 0x10)) * param_2 +
                (float)(auVar10._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar23._8_4_ >> 0x10) + (auVar16._8_4_ >> 0x10)) * param_2 +
                (float)(auVar35._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar24._12_4_ >> 0x10) + (auVar17._12_4_ >> 0x10)) * param_2 +
                (float)(auVar36._12_4_ >> 0x10) * in_XMM0_Da;
    in_R10 = in_R10 + 8;
  } while (in_R10 < in_RDX);
  if (in_RDX + 1 <= param_1) {
    param_1 = param_1 - in_RDX;
    if ((longlong)param_1 < 4) {
      FUN_1406136de();
      return;
    }
    uVar15 = 0;
    uVar14 = param_1 & 0xfffffffffffffffc;
    do {
      uVar2 = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar15 * 2);
      uVar3 = *(ulonglong *)(param_3 + (uVar15 + in_RDX) * 2);
      uVar19 = (undefined2)(uVar3 >> 0x30);
      auVar40._8_4_ = 0;
      auVar40._0_8_ = uVar3;
      auVar40._12_2_ = uVar19;
      auVar40._14_2_ = uVar19;
      uVar19 = (undefined2)(uVar3 >> 0x20);
      auVar39._12_4_ = auVar40._12_4_;
      auVar39._8_2_ = 0;
      auVar39._0_8_ = uVar3;
      auVar39._10_2_ = uVar19;
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._8_2_ = uVar19;
      auVar38._0_8_ = uVar3;
      uVar19 = (undefined2)(uVar3 >> 0x10);
      auVar11._4_8_ = auVar38._8_8_;
      auVar11._2_2_ = uVar19;
      auVar11._0_2_ = uVar19;
      uVar4 = *(ulonglong *)(param_3 + -6 + (uVar15 + in_RDX) * 2);
      uVar19 = (undefined2)(uVar2 >> 0x30);
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar2;
      auVar28._12_2_ = uVar19;
      auVar28._14_2_ = uVar19;
      uVar19 = (undefined2)(uVar2 >> 0x20);
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_2_ = 0;
      auVar27._0_8_ = uVar2;
      auVar27._10_2_ = uVar19;
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._8_2_ = uVar19;
      auVar26._0_8_ = uVar2;
      uVar19 = (undefined2)(uVar2 >> 0x10);
      auVar12._4_8_ = auVar26._8_8_;
      auVar12._2_2_ = uVar19;
      auVar12._0_2_ = uVar19;
      uVar19 = (undefined2)(uVar4 >> 0x30);
      auVar43._8_4_ = 0;
      auVar43._0_8_ = uVar4;
      auVar43._12_2_ = uVar19;
      auVar43._14_2_ = uVar19;
      uVar19 = (undefined2)(uVar4 >> 0x20);
      auVar42._12_4_ = auVar43._12_4_;
      auVar42._8_2_ = 0;
      auVar42._0_8_ = uVar4;
      auVar42._10_2_ = uVar19;
      auVar41._10_6_ = auVar42._10_6_;
      auVar41._8_2_ = uVar19;
      auVar41._0_8_ = uVar4;
      uVar19 = (undefined2)(uVar4 >> 0x10);
      auVar13._4_8_ = auVar41._8_8_;
      auVar13._2_2_ = uVar19;
      auVar13._0_2_ = uVar19;
      pfVar1 = (float *)(param_4 + in_RDX * 4 + uVar15 * 4);
      *pfVar1 = (float)((int)(short)uVar4 + (int)(short)uVar2) * param_2 +
                (float)(int)(short)uVar3 * in_XMM0_Da;
      pfVar1[1] = (float)((auVar13._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * param_2 +
                  (float)(auVar11._0_4_ >> 0x10) * in_XMM0_Da;
      pfVar1[2] = (float)((auVar41._8_4_ >> 0x10) + (auVar26._8_4_ >> 0x10)) * param_2 +
                  (float)(auVar38._8_4_ >> 0x10) * in_XMM0_Da;
      pfVar1[3] = (float)((auVar42._12_4_ >> 0x10) + (auVar27._12_4_ >> 0x10)) * param_2 +
                  (float)(auVar39._12_4_ >> 0x10) * in_XMM0_Da;
      uVar15 = uVar15 + 4;
    } while (uVar15 < uVar14);
    if (uVar14 < param_1) {
      param_3 = param_3 + in_RDX * 2;
      do {
        *(float *)(param_4 + in_RDX * 4 + uVar14 * 4) =
             (float)((int)*(short *)(param_3 + -6 + uVar14 * 2) +
                    (int)*(short *)(param_3 + 6 + uVar14 * 2)) * param_2 +
             (float)(int)*(short *)(param_3 + uVar14 * 2) * in_XMM0_Da;
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_1);
    }
  }
  return;
}

