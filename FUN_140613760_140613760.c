
void FUN_140613760(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined2 uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar9 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar9 < 1) {
    return;
  }
  if (3 < (longlong)uVar9) {
    uVar17 = param_2 & 0xf;
    if (uVar17 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14061397e;
      uVar17 = 0x10 - uVar17 >> 2;
    }
    if ((longlong)(uVar17 + 4) <= (longlong)uVar9) {
      uVar15 = 0;
      uVar16 = uVar9 - (uVar9 - uVar17 & 3);
      if (uVar17 != 0) {
        do {
          *(float *)(param_2 + uVar15 * 4) =
               (float)((int)*(short *)(param_1 + -0xc + uVar15 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar15 * 2)) * fVar2 +
               (float)((int)*(short *)(param_1 + -6 + uVar15 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar15 * 2)) * fVar3 +
               (float)(int)*(short *)(param_1 + uVar15 * 2) * fVar4;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar17);
      }
      do {
        uVar15 = *(ulonglong *)(param_1 + -0xc + uVar17 * 2);
        uVar5 = *(ulonglong *)(param_1 + 0xc + uVar17 * 2);
        uVar21 = (undefined2)(uVar15 >> 0x30);
        auVar20._8_4_ = 0;
        auVar20._0_8_ = uVar15;
        auVar20._12_2_ = uVar21;
        auVar20._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar15 >> 0x20);
        auVar19._12_4_ = auVar20._12_4_;
        auVar19._8_2_ = 0;
        auVar19._0_8_ = uVar15;
        auVar19._10_2_ = uVar21;
        auVar18._10_6_ = auVar19._10_6_;
        auVar18._8_2_ = uVar21;
        auVar18._0_8_ = uVar15;
        uVar21 = (undefined2)(uVar15 >> 0x10);
        auVar10._4_8_ = auVar18._8_8_;
        auVar10._2_2_ = uVar21;
        auVar10._0_2_ = uVar21;
        uVar21 = (undefined2)(uVar5 >> 0x30);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar5;
        auVar27._12_2_ = uVar21;
        auVar27._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar5 >> 0x20);
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar5;
        auVar26._10_2_ = uVar21;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = uVar21;
        auVar25._0_8_ = uVar5;
        uVar21 = (undefined2)(uVar5 >> 0x10);
        auVar11._4_8_ = auVar25._8_8_;
        auVar11._2_2_ = uVar21;
        auVar11._0_2_ = uVar21;
        uVar6 = *(ulonglong *)(param_1 + -6 + uVar17 * 2);
        uVar7 = *(ulonglong *)(param_1 + 6 + uVar17 * 2);
        uVar21 = (undefined2)(uVar6 >> 0x30);
        auVar24._8_4_ = 0;
        auVar24._0_8_ = uVar6;
        auVar24._12_2_ = uVar21;
        auVar24._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar6 >> 0x20);
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar6;
        auVar23._10_2_ = uVar21;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._8_2_ = uVar21;
        auVar22._0_8_ = uVar6;
        uVar21 = (undefined2)(uVar6 >> 0x10);
        auVar12._4_8_ = auVar22._8_8_;
        auVar12._2_2_ = uVar21;
        auVar12._0_2_ = uVar21;
        uVar21 = (undefined2)(uVar7 >> 0x30);
        auVar30._8_4_ = 0;
        auVar30._0_8_ = uVar7;
        auVar30._12_2_ = uVar21;
        auVar30._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar7 >> 0x20);
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._8_2_ = 0;
        auVar29._0_8_ = uVar7;
        auVar29._10_2_ = uVar21;
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._8_2_ = uVar21;
        auVar28._0_8_ = uVar7;
        uVar21 = (undefined2)(uVar7 >> 0x10);
        auVar13._4_8_ = auVar28._8_8_;
        auVar13._2_2_ = uVar21;
        auVar13._0_2_ = uVar21;
        uVar8 = *(ulonglong *)(param_1 + uVar17 * 2);
        uVar21 = (undefined2)(uVar8 >> 0x30);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar8;
        auVar33._12_2_ = uVar21;
        auVar33._14_2_ = uVar21;
        uVar21 = (undefined2)(uVar8 >> 0x20);
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar8;
        auVar32._10_2_ = uVar21;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._8_2_ = uVar21;
        auVar31._0_8_ = uVar8;
        uVar21 = (undefined2)(uVar8 >> 0x10);
        auVar14._4_8_ = auVar31._8_8_;
        auVar14._2_2_ = uVar21;
        auVar14._0_2_ = uVar21;
        pfVar1 = (float *)(param_2 + uVar17 * 4);
        *pfVar1 = (float)((int)(short)uVar15 + (int)(short)uVar5) * fVar2 +
                  (float)((int)(short)uVar6 + (int)(short)uVar7) * fVar3 +
                  (float)(int)(short)uVar8 * fVar4;
        pfVar1[1] = (float)((auVar10._0_4_ >> 0x10) + (auVar11._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar12._0_4_ >> 0x10) + (auVar13._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar14._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar18._8_4_ >> 0x10) + (auVar25._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar22._8_4_ >> 0x10) + (auVar28._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar31._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar19._12_4_ >> 0x10) + (auVar26._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar23._12_4_ >> 0x10) + (auVar29._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar32._12_4_ >> 0x10) * fVar4;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar16);
      for (; uVar16 < uVar9; uVar16 = uVar16 + 1) {
        *(float *)(param_2 + uVar16 * 4) =
             (float)((int)*(short *)(param_1 + -0xc + uVar16 * 2) +
                    (int)*(short *)(param_1 + 0xc + uVar16 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -6 + uVar16 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar16 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar16 * 2) * fVar4;
      }
      return;
    }
  }
LAB_14061397e:
  FUN_14061391a(0);
  return;
}

