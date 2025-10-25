
void FUN_1406c2180(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined2 uVar24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar16 = param_2 & 0xf;
    if (uVar16 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406c2397;
      uVar16 = 0x10 - uVar16 >> 2;
    }
    if ((longlong)(uVar16 + 4) <= (longlong)param_3) {
      uVar14 = 0;
      uVar17 = param_3 - (param_3 - uVar16 & 3);
      if (uVar16 != 0) {
        do {
          *(float *)(param_2 + uVar14 * 4) =
               (float)((int)*(short *)(param_1 + -4 + uVar14 * 2) +
                      (int)*(short *)(param_1 + 4 + uVar14 * 2)) * fVar2 +
               (float)((int)*(short *)(param_1 + -2 + uVar14 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar14 * 2)) * fVar3 +
               (float)(int)*(short *)(param_1 + uVar14 * 2) * fVar4;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar16);
      }
      puVar15 = (ulonglong *)(uVar16 * 2 + param_1);
      do {
        uVar14 = *(ulonglong *)((longlong)puVar15 + -4);
        uVar5 = *(ulonglong *)((longlong)puVar15 + 4);
        uVar24 = (undefined2)(uVar14 >> 0x30);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar14;
        auVar27._12_2_ = uVar24;
        auVar27._14_2_ = uVar24;
        uVar24 = (undefined2)(uVar14 >> 0x20);
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar14;
        auVar26._10_2_ = uVar24;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = uVar24;
        auVar25._0_8_ = uVar14;
        uVar24 = (undefined2)(uVar14 >> 0x10);
        auVar9._4_8_ = auVar25._8_8_;
        auVar9._2_2_ = uVar24;
        auVar9._0_2_ = uVar24;
        uVar24 = (undefined2)(uVar5 >> 0x30);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar5;
        auVar20._12_2_ = uVar24;
        auVar20._14_2_ = uVar24;
        uVar24 = (undefined2)(uVar5 >> 0x20);
        auVar19._12_4_ = auVar20._12_4_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar5;
        auVar19._10_2_ = uVar24;
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._8_2_ = uVar24;
        auVar18._0_8_ = uVar5;
        uVar24 = (undefined2)(uVar5 >> 0x10);
        auVar10._4_8_ = auVar18._8_8_;
        auVar10._2_2_ = uVar24;
        auVar10._0_2_ = uVar24;
        uVar6 = *(ulonglong *)((longlong)puVar15 + 2);
        uVar7 = *(ulonglong *)((longlong)puVar15 + -2);
        uVar24 = (undefined2)(uVar7 >> 0x30);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar7;
        auVar30._12_2_ = uVar24;
        auVar30._14_2_ = uVar24;
        uVar24 = (undefined2)(uVar7 >> 0x20);
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar7;
        auVar29._10_2_ = uVar24;
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._8_2_ = uVar24;
        auVar28._0_8_ = uVar7;
        uVar24 = (undefined2)(uVar7 >> 0x10);
        auVar11._4_8_ = auVar28._8_8_;
        auVar11._2_2_ = uVar24;
        auVar11._0_2_ = uVar24;
        uVar24 = (undefined2)(uVar6 >> 0x30);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar6;
        auVar23._12_2_ = uVar24;
        auVar23._14_2_ = uVar24;
        uVar24 = (undefined2)(uVar6 >> 0x20);
        auVar22._12_4_ = auVar23._12_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar6;
        auVar22._10_2_ = uVar24;
        auVar21._10_6_ = auVar22._10_6_;
        auVar21._8_2_ = uVar24;
        auVar21._0_8_ = uVar6;
        uVar24 = (undefined2)(uVar6 >> 0x10);
        auVar12._4_8_ = auVar21._8_8_;
        auVar12._2_2_ = uVar24;
        auVar12._0_2_ = uVar24;
        uVar8 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar24 = (undefined2)(uVar8 >> 0x30);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar8;
        auVar33._12_2_ = uVar24;
        auVar33._14_2_ = uVar24;
        uVar24 = (undefined2)(uVar8 >> 0x20);
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar8;
        auVar32._10_2_ = uVar24;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._8_2_ = uVar24;
        auVar31._0_8_ = uVar8;
        uVar24 = (undefined2)(uVar8 >> 0x10);
        auVar13._4_8_ = auVar31._8_8_;
        auVar13._2_2_ = uVar24;
        auVar13._0_2_ = uVar24;
        pfVar1 = (float *)(param_2 + uVar16 * 4);
        *pfVar1 = (float)((int)(short)uVar14 + (int)(short)uVar5) * fVar2 +
                  (float)((int)(short)uVar7 + (int)(short)uVar6) * fVar3 +
                  (float)(int)(short)uVar8 * fVar4;
        pfVar1[1] = (float)((auVar9._0_4_ >> 0x10) + (auVar10._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar13._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar25._8_4_ >> 0x10) + (auVar18._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar28._8_4_ >> 0x10) + (auVar21._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar31._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar26._12_4_ >> 0x10) + (auVar19._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar29._12_4_ >> 0x10) + (auVar22._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar32._12_4_ >> 0x10) * fVar4;
        uVar16 = uVar16 + 4;
      } while (uVar16 < uVar17);
      for (; uVar17 < param_3; uVar17 = uVar17 + 1) {
        *(float *)(param_2 + uVar17 * 4) =
             (float)((int)*(short *)(param_1 + -4 + uVar17 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar17 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -2 + uVar17 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar17 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar17 * 2) * fVar4;
      }
      return;
    }
  }
LAB_1406c2397:
  FUN_1406c2339(fVar4,0);
  return;
}

