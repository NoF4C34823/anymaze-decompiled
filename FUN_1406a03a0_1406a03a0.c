
void FUN_1406a03a0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined2 uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  uVar12 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  if ((longlong)uVar12 < 1) {
    return;
  }
  if (3 < (longlong)uVar12) {
    uVar22 = param_2 & 0xf;
    if (uVar22 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1406a0664;
      uVar22 = 0x10 - uVar22 >> 2;
    }
    if ((longlong)(uVar22 + 4) <= (longlong)uVar12) {
      uVar20 = 0;
      uVar23 = uVar12 - (uVar12 - uVar22 & 3);
      if (uVar22 != 0) {
        do {
          *(float *)(param_2 + uVar20 * 4) =
               (float)((int)*(short *)(param_1 + -0x12 + uVar20 * 2) +
                      (int)*(short *)(param_1 + 0x12 + uVar20 * 2)) * fVar2 +
               (float)((int)*(short *)(param_1 + -0xc + uVar20 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar20 * 2)) * fVar3 +
               (float)((int)*(short *)(param_1 + -6 + uVar20 * 2) +
                      (int)*(short *)(param_1 + 6 + uVar20 * 2)) * fVar4 +
               (float)(int)*(short *)(param_1 + uVar20 * 2) * fVar5;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar22);
      }
      puVar21 = (ulonglong *)(uVar22 * 2 + param_1);
      do {
        uVar20 = *(ulonglong *)((longlong)puVar21 + -0x12);
        uVar6 = *(ulonglong *)((longlong)puVar21 + 0x12);
        uVar36 = (undefined2)(uVar20 >> 0x30);
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar20;
        auVar39._12_2_ = uVar36;
        auVar39._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar20 >> 0x20);
        auVar38._12_4_ = auVar39._12_4_;
        auVar38._8_2_ = 0;
        auVar38._0_8_ = uVar20;
        auVar38._10_2_ = uVar36;
        auVar37._10_6_ = auVar38._10_6_;
        auVar37._8_2_ = uVar36;
        auVar37._0_8_ = uVar20;
        uVar36 = (undefined2)(uVar20 >> 0x10);
        auVar13._4_8_ = auVar37._8_8_;
        auVar13._2_2_ = uVar36;
        auVar13._0_2_ = uVar36;
        uVar36 = (undefined2)(uVar6 >> 0x30);
        auVar26._8_4_ = 0;
        auVar26._0_8_ = uVar6;
        auVar26._12_2_ = uVar36;
        auVar26._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar6 >> 0x20);
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_2_ = 0;
        auVar25._0_8_ = uVar6;
        auVar25._10_2_ = uVar36;
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._8_2_ = uVar36;
        auVar24._0_8_ = uVar6;
        uVar36 = (undefined2)(uVar6 >> 0x10);
        auVar14._4_8_ = auVar24._8_8_;
        auVar14._2_2_ = uVar36;
        auVar14._0_2_ = uVar36;
        uVar7 = *(ulonglong *)((longlong)puVar21 + 0xc);
        uVar8 = *(ulonglong *)((longlong)puVar21 + -0xc);
        uVar36 = (undefined2)(uVar8 >> 0x30);
        auVar42._8_4_ = 0;
        auVar42._0_8_ = uVar8;
        auVar42._12_2_ = uVar36;
        auVar42._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar8 >> 0x20);
        auVar41._12_4_ = auVar42._12_4_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar8;
        auVar41._10_2_ = uVar36;
        auVar40._10_6_ = auVar41._10_6_;
        auVar40._8_2_ = uVar36;
        auVar40._0_8_ = uVar8;
        uVar36 = (undefined2)(uVar8 >> 0x10);
        auVar15._4_8_ = auVar40._8_8_;
        auVar15._2_2_ = uVar36;
        auVar15._0_2_ = uVar36;
        uVar36 = (undefined2)(uVar7 >> 0x30);
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uVar7;
        auVar29._12_2_ = uVar36;
        auVar29._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar7 >> 0x20);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._8_2_ = 0;
        auVar28._0_8_ = uVar7;
        auVar28._10_2_ = uVar36;
        auVar27._10_6_ = auVar28._10_6_;
        auVar27._8_2_ = uVar36;
        auVar27._0_8_ = uVar7;
        uVar36 = (undefined2)(uVar7 >> 0x10);
        auVar16._4_8_ = auVar27._8_8_;
        auVar16._2_2_ = uVar36;
        auVar16._0_2_ = uVar36;
        uVar9 = *(ulonglong *)((longlong)puVar21 + 6);
        uVar10 = *(ulonglong *)((longlong)puVar21 + -6);
        uVar36 = (undefined2)(uVar10 >> 0x30);
        auVar32._8_4_ = 0;
        auVar32._0_8_ = uVar10;
        auVar32._12_2_ = uVar36;
        auVar32._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar10 >> 0x20);
        auVar31._12_4_ = auVar32._12_4_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar10;
        auVar31._10_2_ = uVar36;
        auVar30._10_6_ = auVar31._10_6_;
        auVar30._8_2_ = uVar36;
        auVar30._0_8_ = uVar10;
        uVar36 = (undefined2)(uVar10 >> 0x10);
        auVar17._4_8_ = auVar30._8_8_;
        auVar17._2_2_ = uVar36;
        auVar17._0_2_ = uVar36;
        uVar36 = (undefined2)(uVar9 >> 0x30);
        auVar45._8_4_ = 0;
        auVar45._0_8_ = uVar9;
        auVar45._12_2_ = uVar36;
        auVar45._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar9 >> 0x20);
        auVar44._12_4_ = auVar45._12_4_;
        auVar44._8_2_ = 0;
        auVar44._0_8_ = uVar9;
        auVar44._10_2_ = uVar36;
        auVar43._10_6_ = auVar44._10_6_;
        auVar43._8_2_ = uVar36;
        auVar43._0_8_ = uVar9;
        uVar36 = (undefined2)(uVar9 >> 0x10);
        auVar18._4_8_ = auVar43._8_8_;
        auVar18._2_2_ = uVar36;
        auVar18._0_2_ = uVar36;
        uVar11 = *puVar21;
        puVar21 = puVar21 + 1;
        uVar36 = (undefined2)(uVar11 >> 0x30);
        auVar35._8_4_ = 0;
        auVar35._0_8_ = uVar11;
        auVar35._12_2_ = uVar36;
        auVar35._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar11 >> 0x20);
        auVar34._12_4_ = auVar35._12_4_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar11;
        auVar34._10_2_ = uVar36;
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._8_2_ = uVar36;
        auVar33._0_8_ = uVar11;
        uVar36 = (undefined2)(uVar11 >> 0x10);
        auVar19._4_8_ = auVar33._8_8_;
        auVar19._2_2_ = uVar36;
        auVar19._0_2_ = uVar36;
        pfVar1 = (float *)(param_2 + uVar22 * 4);
        *pfVar1 = (float)((int)(short)uVar20 + (int)(short)uVar6) * fVar2 +
                  (float)((int)(short)uVar8 + (int)(short)uVar7) * fVar3 +
                  (float)((int)(short)uVar10 + (int)(short)uVar9) * fVar4 +
                  (float)(int)(short)uVar11 * fVar5;
        pfVar1[1] = (float)((auVar13._0_4_ >> 0x10) + (auVar14._0_4_ >> 0x10)) * fVar2 +
                    (float)((auVar15._0_4_ >> 0x10) + (auVar16._0_4_ >> 0x10)) * fVar3 +
                    (float)((auVar17._0_4_ >> 0x10) + (auVar18._0_4_ >> 0x10)) * fVar4 +
                    (float)(auVar19._0_4_ >> 0x10) * fVar5;
        pfVar1[2] = (float)((auVar37._8_4_ >> 0x10) + (auVar24._8_4_ >> 0x10)) * fVar2 +
                    (float)((auVar40._8_4_ >> 0x10) + (auVar27._8_4_ >> 0x10)) * fVar3 +
                    (float)((auVar30._8_4_ >> 0x10) + (auVar43._8_4_ >> 0x10)) * fVar4 +
                    (float)(auVar33._8_4_ >> 0x10) * fVar5;
        pfVar1[3] = (float)((auVar38._12_4_ >> 0x10) + (auVar25._12_4_ >> 0x10)) * fVar2 +
                    (float)((auVar41._12_4_ >> 0x10) + (auVar28._12_4_ >> 0x10)) * fVar3 +
                    (float)((auVar31._12_4_ >> 0x10) + (auVar44._12_4_ >> 0x10)) * fVar4 +
                    (float)(auVar34._12_4_ >> 0x10) * fVar5;
        uVar22 = uVar22 + 4;
      } while (uVar22 < uVar23);
      for (; uVar23 < uVar12; uVar23 = uVar23 + 1) {
        *(float *)(param_2 + uVar23 * 4) =
             (float)((int)*(short *)(param_1 + -0x12 + uVar23 * 2) +
                    (int)*(short *)(param_1 + 0x12 + uVar23 * 2)) * fVar2 +
             (float)((int)*(short *)(param_1 + -0xc + uVar23 * 2) +
                    (int)*(short *)(param_1 + 0xc + uVar23 * 2)) * fVar3 +
             (float)((int)*(short *)(param_1 + -6 + uVar23 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar23 * 2)) * fVar4 +
             (float)(int)*(short *)(param_1 + uVar23 * 2) * fVar5;
      }
      return;
    }
  }
LAB_1406a0664:
  FUN_1406a05c8(fVar5,0);
  return;
}

