
void FUN_14069f2c0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined2 uVar35;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar21 = param_2 & 0xf;
    if (uVar21 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14069f582;
      uVar21 = 0x10 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 4) <= (longlong)param_3) {
      uVar19 = 0;
      uVar22 = param_3 - (param_3 - uVar21 & 3);
      if (uVar21 != 0) {
        do {
          *(float *)(param_2 + uVar19 * 4) =
               (float)((int)*(short *)(param_1 + -6 + uVar19 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar19 * 2)) * fVar2 +
               (float)((int)*(short *)(param_1 + -4 + uVar19 * 2) +
                      (int)*(short *)(param_1 + 4 + uVar19 * 2)) * fVar3 +
               (float)((int)*(short *)(param_1 + -2 + uVar19 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar19 * 2)) * fVar4 +
               (float)(int)*(short *)(param_1 + uVar19 * 2) * fVar5;
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar21);
      }
      puVar20 = (ulonglong *)(uVar21 * 2 + param_1);
      do {
        uVar19 = *(ulonglong *)((longlong)puVar20 + -6);
        uVar6 = *(ulonglong *)((longlong)puVar20 + 6);
        uVar35 = (undefined2)(uVar19 >> 0x30);
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar19;
        auVar38._12_2_ = uVar35;
        auVar38._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar19 >> 0x20);
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._8_2_ = 0;
        auVar37._0_8_ = uVar19;
        auVar37._10_2_ = uVar35;
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._8_2_ = uVar35;
        auVar36._0_8_ = uVar19;
        uVar35 = (undefined2)(uVar19 >> 0x10);
        auVar12._4_8_ = auVar36._8_8_;
        auVar12._2_2_ = uVar35;
        auVar12._0_2_ = uVar35;
        uVar35 = (undefined2)(uVar6 >> 0x30);
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar6;
        auVar25._12_2_ = uVar35;
        auVar25._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar6 >> 0x20);
        auVar24._12_4_ = auVar25._12_4_;
        auVar24._8_2_ = 0;
        auVar24._0_8_ = uVar6;
        auVar24._10_2_ = uVar35;
        auVar23._10_6_ = auVar24._10_6_;
        auVar23._8_2_ = uVar35;
        auVar23._0_8_ = uVar6;
        uVar35 = (undefined2)(uVar6 >> 0x10);
        auVar13._4_8_ = auVar23._8_8_;
        auVar13._2_2_ = uVar35;
        auVar13._0_2_ = uVar35;
        uVar7 = *(ulonglong *)((longlong)puVar20 + 4);
        uVar8 = *(ulonglong *)((longlong)puVar20 + -4);
        uVar35 = (undefined2)(uVar8 >> 0x30);
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar8;
        auVar41._12_2_ = uVar35;
        auVar41._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar8 >> 0x20);
        auVar40._12_4_ = auVar41._12_4_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar8;
        auVar40._10_2_ = uVar35;
        auVar39._10_6_ = auVar40._10_6_;
        auVar39._8_2_ = uVar35;
        auVar39._0_8_ = uVar8;
        uVar35 = (undefined2)(uVar8 >> 0x10);
        auVar14._4_8_ = auVar39._8_8_;
        auVar14._2_2_ = uVar35;
        auVar14._0_2_ = uVar35;
        uVar35 = (undefined2)(uVar7 >> 0x30);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar7;
        auVar28._12_2_ = uVar35;
        auVar28._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar7 >> 0x20);
        auVar27._12_4_ = auVar28._12_4_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar7;
        auVar27._10_2_ = uVar35;
        auVar26._10_6_ = auVar27._10_6_;
        auVar26._8_2_ = uVar35;
        auVar26._0_8_ = uVar7;
        uVar35 = (undefined2)(uVar7 >> 0x10);
        auVar15._4_8_ = auVar26._8_8_;
        auVar15._2_2_ = uVar35;
        auVar15._0_2_ = uVar35;
        uVar9 = *(ulonglong *)((longlong)puVar20 + 2);
        uVar10 = *(ulonglong *)((longlong)puVar20 + -2);
        uVar35 = (undefined2)(uVar10 >> 0x30);
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar10;
        auVar31._12_2_ = uVar35;
        auVar31._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar10 >> 0x20);
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._8_2_ = 0;
        auVar30._0_8_ = uVar10;
        auVar30._10_2_ = uVar35;
        auVar29._10_6_ = auVar30._10_6_;
        auVar29._8_2_ = uVar35;
        auVar29._0_8_ = uVar10;
        uVar35 = (undefined2)(uVar10 >> 0x10);
        auVar16._4_8_ = auVar29._8_8_;
        auVar16._2_2_ = uVar35;
        auVar16._0_2_ = uVar35;
        uVar35 = (undefined2)(uVar9 >> 0x30);
        auVar44._8_4_ = 0;
        auVar44._0_8_ = uVar9;
        auVar44._12_2_ = uVar35;
        auVar44._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar9 >> 0x20);
        auVar43._12_4_ = auVar44._12_4_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar9;
        auVar43._10_2_ = uVar35;
        auVar42._10_6_ = auVar43._10_6_;
        auVar42._8_2_ = uVar35;
        auVar42._0_8_ = uVar9;
        uVar35 = (undefined2)(uVar9 >> 0x10);
        auVar17._4_8_ = auVar42._8_8_;
        auVar17._2_2_ = uVar35;
        auVar17._0_2_ = uVar35;
        uVar11 = *puVar20;
        puVar20 = puVar20 + 1;
        uVar35 = (undefined2)(uVar11 >> 0x30);
        auVar34._8_4_ = 0;
        auVar34._0_8_ = uVar11;
        auVar34._12_2_ = uVar35;
        auVar34._14_2_ = uVar35;
        uVar35 = (undefined2)(uVar11 >> 0x20);
        auVar33._12_4_ = auVar34._12_4_;
        auVar33._8_2_ = 0;
        auVar33._0_8_ = uVar11;
        auVar33._10_2_ = uVar35;
        auVar32._10_6_ = auVar33._10_6_;
        auVar32._8_2_ = uVar35;
        auVar32._0_8_ = uVar11;
        uVar35 = (undefined2)(uVar11 >> 0x10);
        auVar18._4_8_ = auVar32._8_8_;
        auVar18._2_2_ = uVar35;
        auVar18._0_2_ = uVar35;
        pfVar1 = (float *)(param_2 + uVar21 * 4);
        *pfVar1 = (float)((int)(short)uVar19 + (int)(short)uVar6) * fVar2 +
                  (float)((int)(short)uVar8 + (int)(short)uVar7) * fVar3 +
                  (float)((int)(short)uVar10 + (int)(short)uVar9) * fVar4 +
                  (float)(int)(short)uVar11 * fVar5;
        pfVar1[1] = (float)((auVar12._0_4_ >> 0x10) + (auVar13._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar14._0_4_ >> 0x10) + (auVar15._0_4_ >> 0x10)) * fVar3 +
                    (float)((auVar16._0_4_ >> 0x10) + (auVar17._0_4_ >> 0x10)) * fVar4 +
                    (float)(auVar18._0_4_ >> 0x10) * fVar5;
        pfVar1[2] = (float)((auVar36._8_4_ >> 0x10) + (auVar23._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar39._8_4_ >> 0x10) + (auVar26._8_4_ >> 0x10)) * fVar3 +
                    (float)((auVar29._8_4_ >> 0x10) + (auVar42._8_4_ >> 0x10)) * fVar4 +
                    (float)(auVar32._8_4_ >> 0x10) * fVar5;
        pfVar1[3] = (float)((auVar37._12_4_ >> 0x10) + (auVar24._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar40._12_4_ >> 0x10) + (auVar27._12_4_ >> 0x10)) * fVar3 +
                    (float)((auVar30._12_4_ >> 0x10) + (auVar43._12_4_ >> 0x10)) * fVar4 +
                    (float)(auVar33._12_4_ >> 0x10) * fVar5;
        uVar21 = uVar21 + 4;
      } while (uVar21 < uVar22);
      for (; uVar22 < param_3; uVar22 = uVar22 + 1) {
        *(float *)(param_2 + uVar22 * 4) =
             (float)((int)*(short *)(param_1 + -6 + uVar22 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar22 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -4 + uVar22 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar22 * 2)) * fVar3 +
             (float)((int)*(short *)(param_1 + -2 + uVar22 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar22 * 2)) * fVar4 +
             (float)(int)*(short *)(param_1 + uVar22 * 2) * fVar5;
      }
      return;
    }
  }
LAB_14069f582:
  FUN_14069f4f7(fVar5,0);
  return;
}

