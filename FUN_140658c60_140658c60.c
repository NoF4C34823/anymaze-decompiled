
void FUN_140658c60(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
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
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (3 < (longlong)param_3) {
    uVar16 = param_2 & 0xf;
    if (uVar16 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140658e9e;
      uVar16 = 0x10 - uVar16 >> 2;
    }
    if ((longlong)(uVar16 + 4) <= (longlong)param_3) {
      uVar14 = 0;
      uVar15 = param_3 - (param_3 - uVar16 & 3);
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
      do {
        uVar14 = *(ulonglong *)(param_1 + 2 + uVar16 * 2);
        uVar5 = *(ulonglong *)(param_1 + uVar16 * 2);
        uVar6 = *(ulonglong *)(param_1 + -2 + uVar16 * 2);
        uVar20 = (undefined2)(uVar14 >> 0x30);
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar14;
        auVar29._12_2_ = uVar20;
        auVar29._14_2_ = uVar20;
        uVar20 = (undefined2)(uVar14 >> 0x20);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._8_2_ = 0;
        auVar28._0_8_ = uVar14;
        auVar28._10_2_ = uVar20;
        auVar27._10_6_ = auVar28._10_6_;
        auVar27._8_2_ = uVar20;
        auVar27._0_8_ = uVar14;
        uVar20 = (undefined2)(uVar14 >> 0x10);
        auVar9._4_8_ = auVar27._8_8_;
        auVar9._2_2_ = uVar20;
        auVar9._0_2_ = uVar20;
        uVar20 = (undefined2)(uVar5 >> 0x30);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar5;
        auVar23._12_2_ = uVar20;
        auVar23._14_2_ = uVar20;
        uVar20 = (undefined2)(uVar5 >> 0x20);
        auVar22._12_4_ = auVar23._12_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar5;
        auVar22._10_2_ = uVar20;
        auVar21._10_6_ = auVar22._10_6_;
        auVar21._8_2_ = uVar20;
        auVar21._0_8_ = uVar5;
        uVar20 = (undefined2)(uVar5 >> 0x10);
        auVar10._4_8_ = auVar21._8_8_;
        auVar10._2_2_ = uVar20;
        auVar10._0_2_ = uVar20;
        uVar20 = (undefined2)(uVar6 >> 0x30);
        auVar19._8_4_ = 0;
        auVar19._0_8_ = uVar6;
        auVar19._12_2_ = uVar20;
        auVar19._14_2_ = uVar20;
        uVar20 = (undefined2)(uVar6 >> 0x20);
        auVar18._12_4_ = auVar19._12_4_;
        auVar18._8_2_ = 0;
        auVar18._0_8_ = uVar6;
        auVar18._10_2_ = uVar20;
        auVar17._10_6_ = auVar18._10_6_;
        auVar17._8_2_ = uVar20;
        auVar17._0_8_ = uVar6;
        uVar20 = (undefined2)(uVar6 >> 0x10);
        auVar11._4_8_ = auVar17._8_8_;
        auVar11._2_2_ = uVar20;
        auVar11._0_2_ = uVar20;
        uVar7 = *(ulonglong *)(param_1 + 4 + uVar16 * 2);
        uVar8 = *(ulonglong *)(param_1 + -4 + uVar16 * 2);
        uVar20 = (undefined2)(uVar8 >> 0x30);
        auVar32._8_4_ = 0;
        auVar32._0_8_ = uVar8;
        auVar32._12_2_ = uVar20;
        auVar32._14_2_ = uVar20;
        uVar20 = (undefined2)(uVar8 >> 0x20);
        auVar31._12_4_ = auVar32._12_4_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar8;
        auVar31._10_2_ = uVar20;
        auVar30._10_6_ = auVar31._10_6_;
        auVar30._8_2_ = uVar20;
        auVar30._0_8_ = uVar8;
        uVar20 = (undefined2)(uVar8 >> 0x10);
        auVar12._4_8_ = auVar30._8_8_;
        auVar12._2_2_ = uVar20;
        auVar12._0_2_ = uVar20;
        uVar20 = (undefined2)(uVar7 >> 0x30);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar7;
        auVar26._12_2_ = uVar20;
        auVar26._14_2_ = uVar20;
        uVar20 = (undefined2)(uVar7 >> 0x20);
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar7;
        auVar25._10_2_ = uVar20;
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._8_2_ = uVar20;
        auVar24._0_8_ = uVar7;
        uVar20 = (undefined2)(uVar7 >> 0x10);
        auVar13._4_8_ = auVar24._8_8_;
        auVar13._2_2_ = uVar20;
        auVar13._0_2_ = uVar20;
        pfVar1 = (float *)(param_2 + uVar16 * 4);
        *pfVar1 = (float)((int)(short)uVar8 + (int)(short)uVar7) * fVar2 +
                  (float)((int)(short)uVar6 + (int)(short)uVar14) * fVar3 +
                  (float)(int)(short)uVar5 * fVar4;
        pfVar1[1] = (float)((auVar12._0_4_ >> 0x10) + (auVar13._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar11._0_4_ >> 0x10) + (auVar9._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar10._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar30._8_4_ >> 0x10) + (auVar24._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar17._8_4_ >> 0x10) + (auVar27._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar21._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar31._12_4_ >> 0x10) + (auVar25._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar18._12_4_ >> 0x10) + (auVar28._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar22._12_4_ >> 0x10) * fVar4;
        uVar16 = uVar16 + 4;
      } while (uVar16 < uVar15);
      for (; uVar15 < param_3; uVar15 = uVar15 + 1) {
        *(float *)(param_2 + uVar15 * 4) =
             (float)((int)*(short *)(param_1 + -4 + uVar15 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar15 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -2 + uVar15 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar15 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar15 * 2) * fVar4;
      }
      return;
    }
  }
LAB_140658e9e:
  FUN_140658e26(0);
  return;
}

