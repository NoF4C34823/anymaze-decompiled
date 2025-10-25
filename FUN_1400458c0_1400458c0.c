
void FUN_1400458c0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined2 uVar23;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar19 = param_2 & 0xf;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140045b43;
      uVar19 = 0x10 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 8) <= (longlong)param_3) {
      uVar17 = 0;
      uVar18 = param_3 - (param_3 - uVar19 & 7);
      if (uVar19 != 0) {
        do {
          *(float *)(param_2 + uVar17 * 4) =
               (float)((int)*(short *)(param_1 + -2 + uVar17 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar17 * 2)) * fVar3 +
               (float)(int)*(short *)(param_1 + uVar17 * 2) * fVar4;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      do {
        uVar17 = *(ulonglong *)(param_1 + uVar19 * 2);
        uVar23 = (undefined2)(uVar17 >> 0x30);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar17;
        auVar26._12_2_ = uVar23;
        auVar26._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar17 >> 0x20);
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar17;
        auVar25._10_2_ = uVar23;
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._8_2_ = uVar23;
        auVar24._0_8_ = uVar17;
        uVar23 = (undefined2)(uVar17 >> 0x10);
        auVar8._4_8_ = auVar24._8_8_;
        auVar8._2_2_ = uVar23;
        auVar8._0_2_ = uVar23;
        uVar5 = *(ulonglong *)(param_1 + 2 + uVar19 * 2);
        uVar6 = *(ulonglong *)(param_1 + -2 + uVar19 * 2);
        uVar23 = (undefined2)(uVar5 >> 0x30);
        auVar22._8_4_ = 0;
        auVar22._0_8_ = uVar5;
        auVar22._12_2_ = uVar23;
        auVar22._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar5 >> 0x20);
        auVar21._12_4_ = auVar22._12_4_;
        auVar21._8_2_ = 0;
        auVar21._0_8_ = uVar5;
        auVar21._10_2_ = uVar23;
        auVar20._10_6_ = auVar21._10_6_;
        auVar20._8_2_ = uVar23;
        auVar20._0_8_ = uVar5;
        uVar23 = (undefined2)(uVar5 >> 0x10);
        auVar9._4_8_ = auVar20._8_8_;
        auVar9._2_2_ = uVar23;
        auVar9._0_2_ = uVar23;
        uVar23 = (undefined2)(uVar6 >> 0x30);
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar6;
        auVar29._12_2_ = uVar23;
        auVar29._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar6 >> 0x20);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._8_2_ = 0;
        auVar28._0_8_ = uVar6;
        auVar28._10_2_ = uVar23;
        auVar27._10_6_ = auVar28._10_6_;
        auVar27._8_2_ = uVar23;
        auVar27._0_8_ = uVar6;
        uVar23 = (undefined2)(uVar6 >> 0x10);
        auVar10._4_8_ = auVar27._8_8_;
        auVar10._2_2_ = uVar23;
        auVar10._0_2_ = uVar23;
        pfVar1 = (float *)(param_2 + uVar19 * 4);
        *pfVar1 = (float)((int)(short)uVar6 + (int)(short)uVar5) * fVar3 +
                  (float)(int)(short)uVar17 * fVar4;
        pfVar1[1] = (float)((auVar10._0_4_ >> 0x10) + (auVar9._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar8._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar27._8_4_ >> 0x10) + (auVar20._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar24._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar28._12_4_ >> 0x10) + (auVar21._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar25._12_4_ >> 0x10) * fVar4;
        uVar17 = *(ulonglong *)(param_1 + 8 + uVar19 * 2);
        uVar23 = (undefined2)(uVar17 >> 0x30);
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar17;
        auVar38._12_2_ = uVar23;
        auVar38._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar17 >> 0x20);
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._8_2_ = 0;
        auVar37._0_8_ = uVar17;
        auVar37._10_2_ = uVar23;
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._8_2_ = uVar23;
        auVar36._0_8_ = uVar17;
        uVar23 = (undefined2)(uVar17 >> 0x10);
        auVar11._4_8_ = auVar36._8_8_;
        auVar11._2_2_ = uVar23;
        auVar11._0_2_ = uVar23;
        uVar5 = *(ulonglong *)(param_1 + 10 + uVar19 * 2);
        uVar6 = *(ulonglong *)(param_1 + 6 + uVar19 * 2);
        uVar23 = (undefined2)(uVar5 >> 0x30);
        auVar32._8_4_ = 0;
        auVar32._0_8_ = uVar5;
        auVar32._12_2_ = uVar23;
        auVar32._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar5 >> 0x20);
        auVar31._12_4_ = auVar32._12_4_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar5;
        auVar31._10_2_ = uVar23;
        auVar30._10_6_ = auVar31._10_6_;
        auVar30._8_2_ = uVar23;
        auVar30._0_8_ = uVar5;
        uVar23 = (undefined2)(uVar5 >> 0x10);
        auVar12._4_8_ = auVar30._8_8_;
        auVar12._2_2_ = uVar23;
        auVar12._0_2_ = uVar23;
        uVar23 = (undefined2)(uVar6 >> 0x30);
        auVar41._8_4_ = 0;
        auVar41._0_8_ = uVar6;
        auVar41._12_2_ = uVar23;
        auVar41._14_2_ = uVar23;
        uVar23 = (undefined2)(uVar6 >> 0x20);
        auVar40._12_4_ = auVar41._12_4_;
        auVar40._8_2_ = 0;
        auVar40._0_8_ = uVar6;
        auVar40._10_2_ = uVar23;
        auVar39._10_6_ = auVar40._10_6_;
        auVar39._8_2_ = uVar23;
        auVar39._0_8_ = uVar6;
        uVar23 = (undefined2)(uVar6 >> 0x10);
        auVar13._4_8_ = auVar39._8_8_;
        auVar13._2_2_ = uVar23;
        auVar13._0_2_ = uVar23;
        pfVar1 = (float *)(param_2 + 0x10 + uVar19 * 4);
        *pfVar1 = (float)((int)(short)uVar6 + (int)(short)uVar5) * fVar3 +
                  (float)(int)(short)uVar17 * fVar4;
        pfVar1[1] = (float)((auVar13._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar11._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar39._8_4_ >> 0x10) + (auVar30._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar36._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar40._12_4_ >> 0x10) + (auVar31._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar37._12_4_ >> 0x10) * fVar4;
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar18);
      if (param_3 < uVar18 + 1) {
        return;
      }
      param_3 = param_3 - uVar18;
      if (3 < (longlong)param_3) {
        uVar17 = 0;
        uVar19 = param_3 & 0xfffffffffffffffc;
        do {
          lVar2 = uVar17 + uVar18;
          uVar5 = *(ulonglong *)(param_1 + lVar2 * 2);
          uVar23 = (undefined2)(uVar5 >> 0x30);
          auVar44._8_4_ = 0;
          auVar44._0_8_ = uVar5;
          auVar44._12_2_ = uVar23;
          auVar44._14_2_ = uVar23;
          uVar23 = (undefined2)(uVar5 >> 0x20);
          auVar43._12_4_ = auVar44._12_4_;
          auVar43._8_2_ = 0;
          auVar43._0_8_ = uVar5;
          auVar43._10_2_ = uVar23;
          auVar42._10_6_ = auVar43._10_6_;
          auVar42._8_2_ = uVar23;
          auVar42._0_8_ = uVar5;
          uVar23 = (undefined2)(uVar5 >> 0x10);
          auVar14._4_8_ = auVar42._8_8_;
          auVar14._2_2_ = uVar23;
          auVar14._0_2_ = uVar23;
          uVar6 = *(ulonglong *)(param_1 + 2 + lVar2 * 2);
          uVar7 = *(ulonglong *)(param_1 + -2 + lVar2 * 2);
          uVar23 = (undefined2)(uVar6 >> 0x30);
          auVar35._8_4_ = 0;
          auVar35._0_8_ = uVar6;
          auVar35._12_2_ = uVar23;
          auVar35._14_2_ = uVar23;
          uVar23 = (undefined2)(uVar6 >> 0x20);
          auVar34._12_4_ = auVar35._12_4_;
          auVar34._8_2_ = 0;
          auVar34._0_8_ = uVar6;
          auVar34._10_2_ = uVar23;
          auVar33._10_6_ = auVar34._10_6_;
          auVar33._8_2_ = uVar23;
          auVar33._0_8_ = uVar6;
          uVar23 = (undefined2)(uVar6 >> 0x10);
          auVar15._4_8_ = auVar33._8_8_;
          auVar15._2_2_ = uVar23;
          auVar15._0_2_ = uVar23;
          uVar23 = (undefined2)(uVar7 >> 0x30);
          auVar47._8_4_ = 0;
          auVar47._0_8_ = uVar7;
          auVar47._12_2_ = uVar23;
          auVar47._14_2_ = uVar23;
          uVar23 = (undefined2)(uVar7 >> 0x20);
          auVar46._12_4_ = auVar47._12_4_;
          auVar46._8_2_ = 0;
          auVar46._0_8_ = uVar7;
          auVar46._10_2_ = uVar23;
          auVar45._10_6_ = auVar46._10_6_;
          auVar45._8_2_ = uVar23;
          auVar45._0_8_ = uVar7;
          uVar23 = (undefined2)(uVar7 >> 0x10);
          auVar16._4_8_ = auVar45._8_8_;
          auVar16._2_2_ = uVar23;
          auVar16._0_2_ = uVar23;
          pfVar1 = (float *)(param_2 + uVar18 * 4 + uVar17 * 4);
          *pfVar1 = (float)((int)(short)uVar7 + (int)(short)uVar6) * fVar3 +
                    (float)(int)(short)uVar5 * fVar4;
          pfVar1[1] = (float)((auVar16._0_4_ >> 0x10) + (auVar15._0_4_ >> 0x10)) * fVar3 +
                      (float)(auVar14._0_4_ >> 0x10) * fVar4;
          pfVar1[2] = (float)((auVar45._8_4_ >> 0x10) + (auVar33._8_4_ >> 0x10)) * fVar3 +
                      (float)(auVar42._8_4_ >> 0x10) * fVar4;
          pfVar1[3] = (float)((auVar46._12_4_ >> 0x10) + (auVar34._12_4_ >> 0x10)) * fVar3 +
                      (float)(auVar43._12_4_ >> 0x10) * fVar4;
          uVar17 = uVar17 + 4;
        } while (uVar17 < uVar19);
        if (param_3 <= uVar19) {
          return;
        }
        param_1 = param_1 + uVar18 * 2;
        do {
          *(float *)(param_2 + uVar18 * 4 + uVar19 * 4) =
               (float)((int)*(short *)(param_1 + -2 + uVar19 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar19 * 2)) * fVar3 +
               (float)(int)*(short *)(param_1 + uVar19 * 2) * fVar4;
          uVar19 = uVar19 + 1;
        } while (uVar19 < param_3);
        return;
      }
      goto LAB_140045b4b;
    }
  }
LAB_140045b43:
  uVar18 = 0;
  if (param_3 == 0) {
    return;
  }
LAB_140045b4b:
  FUN_140045ad6(fVar4,uVar18);
  return;
}

