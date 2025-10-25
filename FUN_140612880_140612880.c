
void FUN_140612880(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined2 uVar25;
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
      if ((param_2 & 3) != 0) goto LAB_140612b6c;
      uVar21 = 0x10 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 4) <= (longlong)param_3) {
      uVar19 = 0;
      uVar20 = param_3 - (param_3 - uVar21 & 3);
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
      do {
        uVar19 = *(ulonglong *)(param_1 + uVar21 * 2);
        uVar25 = (undefined2)(uVar19 >> 0x30);
        auVar34._8_4_ = 0;
        auVar34._0_8_ = uVar19;
        auVar34._12_2_ = uVar25;
        auVar34._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar19 >> 0x20);
        auVar33._12_4_ = auVar34._12_4_;
        auVar33._8_2_ = 0;
        auVar33._0_8_ = uVar19;
        auVar33._10_2_ = uVar25;
        auVar32._10_6_ = auVar33._10_6_;
        auVar32._8_2_ = uVar25;
        auVar32._0_8_ = uVar19;
        uVar25 = (undefined2)(uVar19 >> 0x10);
        auVar12._4_8_ = auVar32._8_8_;
        auVar12._2_2_ = uVar25;
        auVar12._0_2_ = uVar25;
        uVar6 = *(ulonglong *)(param_1 + 6 + uVar21 * 2);
        uVar7 = *(ulonglong *)(param_1 + -6 + uVar21 * 2);
        uVar25 = (undefined2)(uVar7 >> 0x30);
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uVar7;
        auVar37._12_2_ = uVar25;
        auVar37._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar7 >> 0x20);
        auVar36._12_4_ = auVar37._12_4_;
        auVar36._8_2_ = 0;
        auVar36._0_8_ = uVar7;
        auVar36._10_2_ = uVar25;
        auVar35._10_6_ = auVar36._10_6_;
        auVar35._8_2_ = uVar25;
        auVar35._0_8_ = uVar7;
        uVar25 = (undefined2)(uVar7 >> 0x10);
        auVar13._4_8_ = auVar35._8_8_;
        auVar13._2_2_ = uVar25;
        auVar13._0_2_ = uVar25;
        uVar25 = (undefined2)(uVar6 >> 0x30);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar6;
        auVar24._12_2_ = uVar25;
        auVar24._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar6 >> 0x20);
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar6;
        auVar23._10_2_ = uVar25;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._8_2_ = uVar25;
        auVar22._0_8_ = uVar6;
        uVar25 = (undefined2)(uVar6 >> 0x10);
        auVar14._4_8_ = auVar22._8_8_;
        auVar14._2_2_ = uVar25;
        auVar14._0_2_ = uVar25;
        uVar8 = *(ulonglong *)(param_1 + -4 + uVar21 * 2);
        uVar9 = *(ulonglong *)(param_1 + 4 + uVar21 * 2);
        uVar25 = (undefined2)(uVar8 >> 0x30);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar8;
        auVar28._12_2_ = uVar25;
        auVar28._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar8 >> 0x20);
        auVar27._12_4_ = auVar28._12_4_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uVar8;
        auVar27._10_2_ = uVar25;
        auVar26._10_6_ = auVar27._10_6_;
        auVar26._8_2_ = uVar25;
        auVar26._0_8_ = uVar8;
        uVar25 = (undefined2)(uVar8 >> 0x10);
        auVar15._4_8_ = auVar26._8_8_;
        auVar15._2_2_ = uVar25;
        auVar15._0_2_ = uVar25;
        uVar25 = (undefined2)(uVar9 >> 0x30);
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar9;
        auVar40._12_2_ = uVar25;
        auVar40._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar9 >> 0x20);
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._8_2_ = 0;
        auVar39._0_8_ = uVar9;
        auVar39._10_2_ = uVar25;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._8_2_ = uVar25;
        auVar38._0_8_ = uVar9;
        uVar25 = (undefined2)(uVar9 >> 0x10);
        auVar16._4_8_ = auVar38._8_8_;
        auVar16._2_2_ = uVar25;
        auVar16._0_2_ = uVar25;
        uVar10 = *(ulonglong *)(param_1 + -2 + uVar21 * 2);
        uVar11 = *(ulonglong *)(param_1 + 2 + uVar21 * 2);
        uVar25 = (undefined2)(uVar10 >> 0x30);
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar10;
        auVar31._12_2_ = uVar25;
        auVar31._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar10 >> 0x20);
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._8_2_ = 0;
        auVar30._0_8_ = uVar10;
        auVar30._10_2_ = uVar25;
        auVar29._10_6_ = auVar30._10_6_;
        auVar29._8_2_ = uVar25;
        auVar29._0_8_ = uVar10;
        uVar25 = (undefined2)(uVar10 >> 0x10);
        auVar17._4_8_ = auVar29._8_8_;
        auVar17._2_2_ = uVar25;
        auVar17._0_2_ = uVar25;
        uVar25 = (undefined2)(uVar11 >> 0x30);
        auVar43._8_4_ = 0;
        auVar43._0_8_ = uVar11;
        auVar43._12_2_ = uVar25;
        auVar43._14_2_ = uVar25;
        uVar25 = (undefined2)(uVar11 >> 0x20);
        auVar42._12_4_ = auVar43._12_4_;
        auVar42._8_2_ = 0;
        auVar42._0_8_ = uVar11;
        auVar42._10_2_ = uVar25;
        auVar41._10_6_ = auVar42._10_6_;
        auVar41._8_2_ = uVar25;
        auVar41._0_8_ = uVar11;
        uVar25 = (undefined2)(uVar11 >> 0x10);
        auVar18._4_8_ = auVar41._8_8_;
        auVar18._2_2_ = uVar25;
        auVar18._0_2_ = uVar25;
        pfVar1 = (float *)(param_2 + uVar21 * 4);
        *pfVar1 = (float)((int)(short)uVar7 + (int)(short)uVar6) * fVar2 +
                  (float)((int)(short)uVar8 + (int)(short)uVar9) * fVar3 +
                  (float)((int)(short)uVar10 + (int)(short)uVar11) * fVar4 +
                  (float)(int)(short)uVar19 * fVar5;
        pfVar1[1] = (float)((auVar13._0_4_ >> 0x10) + (auVar14._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar15._0_4_ >> 0x10) + (auVar16._0_4_ >> 0x10)) * fVar3 +
                    (float)((auVar17._0_4_ >> 0x10) + (auVar18._0_4_ >> 0x10)) * fVar4 +
                    (float)(auVar12._0_4_ >> 0x10) * fVar5;
        pfVar1[2] = (float)((auVar35._8_4_ >> 0x10) + (auVar22._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar26._8_4_ >> 0x10) + (auVar38._8_4_ >> 0x10)) * fVar3 +
                    (float)((auVar29._8_4_ >> 0x10) + (auVar41._8_4_ >> 0x10)) * fVar4 +
                    (float)(auVar32._8_4_ >> 0x10) * fVar5;
        pfVar1[3] = (float)((auVar36._12_4_ >> 0x10) + (auVar23._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar27._12_4_ >> 0x10) + (auVar39._12_4_ >> 0x10)) * fVar3 +
                    (float)((auVar30._12_4_ >> 0x10) + (auVar42._12_4_ >> 0x10)) * fVar4 +
                    (float)(auVar33._12_4_ >> 0x10) * fVar5;
        uVar21 = uVar21 + 4;
      } while (uVar21 < uVar20);
      for (; uVar20 < param_3; uVar20 = uVar20 + 1) {
        *(float *)(param_2 + uVar20 * 4) =
             (float)((int)*(short *)(param_1 + -6 + uVar20 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar20 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -4 + uVar20 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar20 * 2)) * fVar3 +
             (float)((int)*(short *)(param_1 + -2 + uVar20 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar20 * 2)) * fVar4 +
             (float)(int)*(short *)(param_1 + uVar20 * 2) * fVar5;
      }
      return;
    }
  }
LAB_140612b6c:
  FUN_140612ac8(0);
  return;
}

