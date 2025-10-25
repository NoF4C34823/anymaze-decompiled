
void FUN_1405cb8fb(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  ulonglong uVar15;
  ulonglong in_R10;
  ulonglong uVar16;
  float in_XMM0_Da;
  float in_XMM2_Da;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined2 uVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  do {
    uVar15 = *(ulonglong *)(param_1 + in_R10 * 2);
    uVar20 = (undefined2)(uVar15 >> 0x30);
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar15;
    auVar23._12_2_ = uVar20;
    auVar23._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar15 >> 0x20);
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._8_2_ = 0;
    auVar22._0_8_ = uVar15;
    auVar22._10_2_ = uVar20;
    auVar21._10_6_ = auVar22._10_6_;
    auVar21._8_2_ = uVar20;
    auVar21._0_8_ = uVar15;
    uVar20 = (undefined2)(uVar15 >> 0x10);
    auVar6._4_8_ = auVar21._8_8_;
    auVar6._2_2_ = uVar20;
    auVar6._0_2_ = uVar20;
    uVar16 = *(ulonglong *)(param_1 + 2 + in_R10 * 2);
    uVar3 = *(ulonglong *)(param_1 + -2 + in_R10 * 2);
    uVar20 = (undefined2)(uVar16 >> 0x30);
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar16;
    auVar19._12_2_ = uVar20;
    auVar19._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar16 >> 0x20);
    auVar18._12_4_ = auVar19._12_4_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar16;
    auVar18._10_2_ = uVar20;
    auVar17._10_6_ = auVar18._10_6_;
    auVar17._8_2_ = uVar20;
    auVar17._0_8_ = uVar16;
    uVar20 = (undefined2)(uVar16 >> 0x10);
    auVar7._4_8_ = auVar17._8_8_;
    auVar7._2_2_ = uVar20;
    auVar7._0_2_ = uVar20;
    uVar20 = (undefined2)(uVar3 >> 0x30);
    auVar26._8_4_ = 0;
    auVar26._0_8_ = uVar3;
    auVar26._12_2_ = uVar20;
    auVar26._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar3 >> 0x20);
    auVar25._12_4_ = auVar26._12_4_;
    auVar25._8_2_ = 0;
    auVar25._0_8_ = uVar3;
    auVar25._10_2_ = uVar20;
    auVar24._10_6_ = auVar25._10_6_;
    auVar24._8_2_ = uVar20;
    auVar24._0_8_ = uVar3;
    uVar20 = (undefined2)(uVar3 >> 0x10);
    auVar8._4_8_ = auVar24._8_8_;
    auVar8._2_2_ = uVar20;
    auVar8._0_2_ = uVar20;
    pfVar1 = (float *)(param_3 + in_R10 * 4);
    *pfVar1 = (float)((int)(short)uVar3 + (int)(short)uVar16) * in_XMM2_Da +
              (float)(int)(short)uVar15 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar8._0_4_ >> 0x10) + (auVar7._0_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar6._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar24._8_4_ >> 0x10) + (auVar17._8_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar21._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar25._12_4_ >> 0x10) + (auVar18._12_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar22._12_4_ >> 0x10) * in_XMM0_Da;
    uVar15 = *(ulonglong *)(param_1 + 8 + in_R10 * 2);
    uVar20 = (undefined2)(uVar15 >> 0x30);
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar15;
    auVar35._12_2_ = uVar20;
    auVar35._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar15 >> 0x20);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._8_2_ = 0;
    auVar34._0_8_ = uVar15;
    auVar34._10_2_ = uVar20;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._8_2_ = uVar20;
    auVar33._0_8_ = uVar15;
    uVar20 = (undefined2)(uVar15 >> 0x10);
    auVar9._4_8_ = auVar33._8_8_;
    auVar9._2_2_ = uVar20;
    auVar9._0_2_ = uVar20;
    uVar16 = *(ulonglong *)(param_1 + 10 + in_R10 * 2);
    uVar3 = *(ulonglong *)(param_1 + 6 + in_R10 * 2);
    uVar20 = (undefined2)(uVar16 >> 0x30);
    auVar29._8_4_ = 0;
    auVar29._0_8_ = uVar16;
    auVar29._12_2_ = uVar20;
    auVar29._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar16 >> 0x20);
    auVar28._12_4_ = auVar29._12_4_;
    auVar28._8_2_ = 0;
    auVar28._0_8_ = uVar16;
    auVar28._10_2_ = uVar20;
    auVar27._10_6_ = auVar28._10_6_;
    auVar27._8_2_ = uVar20;
    auVar27._0_8_ = uVar16;
    uVar20 = (undefined2)(uVar16 >> 0x10);
    auVar10._4_8_ = auVar27._8_8_;
    auVar10._2_2_ = uVar20;
    auVar10._0_2_ = uVar20;
    uVar20 = (undefined2)(uVar3 >> 0x30);
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar3;
    auVar38._12_2_ = uVar20;
    auVar38._14_2_ = uVar20;
    uVar20 = (undefined2)(uVar3 >> 0x20);
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar3;
    auVar37._10_2_ = uVar20;
    auVar36._10_6_ = auVar37._10_6_;
    auVar36._8_2_ = uVar20;
    auVar36._0_8_ = uVar3;
    uVar20 = (undefined2)(uVar3 >> 0x10);
    auVar11._4_8_ = auVar36._8_8_;
    auVar11._2_2_ = uVar20;
    auVar11._0_2_ = uVar20;
    pfVar1 = (float *)(param_3 + 0x10 + in_R10 * 4);
    *pfVar1 = (float)((int)(short)uVar3 + (int)(short)uVar16) * in_XMM2_Da +
              (float)(int)(short)uVar15 * in_XMM0_Da;
    pfVar1[1] = (float)((auVar11._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar9._0_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[2] = (float)((auVar36._8_4_ >> 0x10) + (auVar27._8_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar33._8_4_ >> 0x10) * in_XMM0_Da;
    pfVar1[3] = (float)((auVar37._12_4_ >> 0x10) + (auVar28._12_4_ >> 0x10)) * in_XMM2_Da +
                (float)(auVar34._12_4_ >> 0x10) * in_XMM0_Da;
    in_R10 = in_R10 + 8;
  } while (in_R10 < param_2);
  if (param_2 + 1 <= param_4) {
    param_4 = param_4 - param_2;
    if ((longlong)param_4 < 4) {
      FUN_1405cba56();
      return;
    }
    uVar16 = 0;
    uVar15 = param_4 & 0xfffffffffffffffc;
    do {
      lVar2 = uVar16 + param_2;
      uVar3 = *(ulonglong *)(param_1 + lVar2 * 2);
      uVar20 = (undefined2)(uVar3 >> 0x30);
      auVar41._8_4_ = 0;
      auVar41._0_8_ = uVar3;
      auVar41._12_2_ = uVar20;
      auVar41._14_2_ = uVar20;
      uVar20 = (undefined2)(uVar3 >> 0x20);
      auVar40._12_4_ = auVar41._12_4_;
      auVar40._8_2_ = 0;
      auVar40._0_8_ = uVar3;
      auVar40._10_2_ = uVar20;
      auVar39._10_6_ = auVar40._10_6_;
      auVar39._8_2_ = uVar20;
      auVar39._0_8_ = uVar3;
      uVar20 = (undefined2)(uVar3 >> 0x10);
      auVar12._4_8_ = auVar39._8_8_;
      auVar12._2_2_ = uVar20;
      auVar12._0_2_ = uVar20;
      uVar4 = *(ulonglong *)(param_1 + 2 + lVar2 * 2);
      uVar5 = *(ulonglong *)(param_1 + -2 + lVar2 * 2);
      uVar20 = (undefined2)(uVar4 >> 0x30);
      auVar32._8_4_ = 0;
      auVar32._0_8_ = uVar4;
      auVar32._12_2_ = uVar20;
      auVar32._14_2_ = uVar20;
      uVar20 = (undefined2)(uVar4 >> 0x20);
      auVar31._12_4_ = auVar32._12_4_;
      auVar31._8_2_ = 0;
      auVar31._0_8_ = uVar4;
      auVar31._10_2_ = uVar20;
      auVar30._10_6_ = auVar31._10_6_;
      auVar30._8_2_ = uVar20;
      auVar30._0_8_ = uVar4;
      uVar20 = (undefined2)(uVar4 >> 0x10);
      auVar13._4_8_ = auVar30._8_8_;
      auVar13._2_2_ = uVar20;
      auVar13._0_2_ = uVar20;
      uVar20 = (undefined2)(uVar5 >> 0x30);
      auVar44._8_4_ = 0;
      auVar44._0_8_ = uVar5;
      auVar44._12_2_ = uVar20;
      auVar44._14_2_ = uVar20;
      uVar20 = (undefined2)(uVar5 >> 0x20);
      auVar43._12_4_ = auVar44._12_4_;
      auVar43._8_2_ = 0;
      auVar43._0_8_ = uVar5;
      auVar43._10_2_ = uVar20;
      auVar42._10_6_ = auVar43._10_6_;
      auVar42._8_2_ = uVar20;
      auVar42._0_8_ = uVar5;
      uVar20 = (undefined2)(uVar5 >> 0x10);
      auVar14._4_8_ = auVar42._8_8_;
      auVar14._2_2_ = uVar20;
      auVar14._0_2_ = uVar20;
      pfVar1 = (float *)(param_3 + param_2 * 4 + uVar16 * 4);
      *pfVar1 = (float)((int)(short)uVar5 + (int)(short)uVar4) * in_XMM2_Da +
                (float)(int)(short)uVar3 * in_XMM0_Da;
      pfVar1[1] = (float)((auVar14._0_4_ >> 0x10) + (auVar13._0_4_ >> 0x10)) * in_XMM2_Da +
                  (float)(auVar12._0_4_ >> 0x10) * in_XMM0_Da;
      pfVar1[2] = (float)((auVar42._8_4_ >> 0x10) + (auVar30._8_4_ >> 0x10)) * in_XMM2_Da +
                  (float)(auVar39._8_4_ >> 0x10) * in_XMM0_Da;
      pfVar1[3] = (float)((auVar43._12_4_ >> 0x10) + (auVar31._12_4_ >> 0x10)) * in_XMM2_Da +
                  (float)(auVar40._12_4_ >> 0x10) * in_XMM0_Da;
      uVar16 = uVar16 + 4;
    } while (uVar16 < uVar15);
    if (uVar15 < param_4) {
      param_1 = param_1 + param_2 * 2;
      do {
        *(float *)(param_3 + param_2 * 4 + uVar15 * 4) =
             (float)((int)*(short *)(param_1 + -2 + uVar15 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar15 * 2)) * in_XMM2_Da +
             (float)(int)*(short *)(param_1 + uVar15 * 2) * in_XMM0_Da;
        uVar15 = uVar15 + 1;
      } while (uVar15 < param_4);
    }
  }
  return;
}

