
void FUN_14067cce0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  uVar21 = param_3 * 3;
  fVar3 = *param_4;
  fVar4 = param_4[1];
  if ((longlong)uVar21 < 1) {
    return;
  }
  if ((longlong)uVar21 < 8) {
LAB_14067cf3b:
    uVar19 = 0;
    if (uVar21 == 0) {
      return;
    }
  }
  else {
    uVar20 = param_2 & 0xf;
    if (uVar20 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14067cf3b;
      uVar20 = 0x10 - uVar20 >> 2;
    }
    if ((longlong)uVar21 < (longlong)(uVar20 + 8)) goto LAB_14067cf3b;
    uVar17 = 0;
    uVar19 = uVar21 - (uVar21 - uVar20 & 7);
    if (uVar20 != 0) {
      do {
        *(float *)(param_2 + uVar17 * 4) =
             (float)((int)*(short *)(param_1 + -6 + uVar17 * 2) +
                    (int)*(short *)(param_1 + 6 + uVar17 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar17 * 2) * fVar4;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar20);
    }
    puVar18 = (ulonglong *)(uVar20 * 2 + param_1);
    do {
      uVar17 = *(ulonglong *)((longlong)puVar18 + -6);
      uVar5 = *(ulonglong *)((longlong)puVar18 + 6);
      uVar34 = (undefined2)(uVar17 >> 0x30);
      auVar37._8_4_ = 0;
      auVar37._0_8_ = uVar17;
      auVar37._12_2_ = uVar34;
      auVar37._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar17 >> 0x20);
      auVar36._12_4_ = auVar37._12_4_;
      auVar36._8_2_ = 0;
      auVar36._0_8_ = uVar17;
      auVar36._10_2_ = uVar34;
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._8_2_ = uVar34;
      auVar35._0_8_ = uVar17;
      uVar34 = (undefined2)(uVar17 >> 0x10);
      auVar8._4_8_ = auVar35._8_8_;
      auVar8._2_2_ = uVar34;
      auVar8._0_2_ = uVar34;
      uVar34 = (undefined2)(uVar5 >> 0x30);
      auVar24._8_4_ = 0;
      auVar24._0_8_ = uVar5;
      auVar24._12_2_ = uVar34;
      auVar24._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar5 >> 0x20);
      auVar23._12_4_ = auVar24._12_4_;
      auVar23._8_2_ = 0;
      auVar23._0_8_ = uVar5;
      auVar23._10_2_ = uVar34;
      auVar22._10_6_ = auVar23._10_6_;
      auVar22._8_2_ = uVar34;
      auVar22._0_8_ = uVar5;
      uVar34 = (undefined2)(uVar5 >> 0x10);
      auVar9._4_8_ = auVar22._8_8_;
      auVar9._2_2_ = uVar34;
      auVar9._0_2_ = uVar34;
      uVar6 = *puVar18;
      uVar34 = (undefined2)(uVar6 >> 0x30);
      auVar27._8_4_ = 0;
      auVar27._0_8_ = uVar6;
      auVar27._12_2_ = uVar34;
      auVar27._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar6 >> 0x20);
      auVar26._12_4_ = auVar27._12_4_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar6;
      auVar26._10_2_ = uVar34;
      auVar25._10_6_ = auVar26._10_6_;
      auVar25._8_2_ = uVar34;
      auVar25._0_8_ = uVar6;
      uVar34 = (undefined2)(uVar6 >> 0x10);
      auVar10._4_8_ = auVar25._8_8_;
      auVar10._2_2_ = uVar34;
      auVar10._0_2_ = uVar34;
      pfVar1 = (float *)(param_2 + uVar20 * 4);
      *pfVar1 = (float)((int)(short)uVar17 + (int)(short)uVar5) * fVar3 +
                (float)(int)(short)uVar6 * fVar4;
      pfVar1[1] = (float)((auVar8._0_4_ >> 0x10) + (auVar9._0_4_ >> 0x10)) * fVar3 +
                  (float)(auVar10._0_4_ >> 0x10) * fVar4;
      pfVar1[2] = (float)((auVar35._8_4_ >> 0x10) + (auVar22._8_4_ >> 0x10)) * fVar3 +
                  (float)(auVar25._8_4_ >> 0x10) * fVar4;
      pfVar1[3] = (float)((auVar36._12_4_ >> 0x10) + (auVar23._12_4_ >> 0x10)) * fVar3 +
                  (float)(auVar26._12_4_ >> 0x10) * fVar4;
      uVar17 = *(ulonglong *)((longlong)puVar18 + 2);
      uVar5 = *(ulonglong *)((longlong)puVar18 + 0xe);
      uVar34 = (undefined2)(uVar17 >> 0x30);
      auVar30._8_4_ = 0;
      auVar30._0_8_ = uVar17;
      auVar30._12_2_ = uVar34;
      auVar30._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar17 >> 0x20);
      auVar29._12_4_ = auVar30._12_4_;
      auVar29._8_2_ = 0;
      auVar29._0_8_ = uVar17;
      auVar29._10_2_ = uVar34;
      auVar28._10_6_ = auVar29._10_6_;
      auVar28._8_2_ = uVar34;
      auVar28._0_8_ = uVar17;
      uVar34 = (undefined2)(uVar17 >> 0x10);
      auVar11._4_8_ = auVar28._8_8_;
      auVar11._2_2_ = uVar34;
      auVar11._0_2_ = uVar34;
      uVar34 = (undefined2)(uVar5 >> 0x30);
      auVar40._8_4_ = 0;
      auVar40._0_8_ = uVar5;
      auVar40._12_2_ = uVar34;
      auVar40._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar5 >> 0x20);
      auVar39._12_4_ = auVar40._12_4_;
      auVar39._8_2_ = 0;
      auVar39._0_8_ = uVar5;
      auVar39._10_2_ = uVar34;
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._8_2_ = uVar34;
      auVar38._0_8_ = uVar5;
      uVar34 = (undefined2)(uVar5 >> 0x10);
      auVar12._4_8_ = auVar38._8_8_;
      auVar12._2_2_ = uVar34;
      auVar12._0_2_ = uVar34;
      uVar6 = puVar18[1];
      puVar18 = puVar18 + 2;
      uVar34 = (undefined2)(uVar6 >> 0x30);
      auVar43._8_4_ = 0;
      auVar43._0_8_ = uVar6;
      auVar43._12_2_ = uVar34;
      auVar43._14_2_ = uVar34;
      uVar34 = (undefined2)(uVar6 >> 0x20);
      auVar42._12_4_ = auVar43._12_4_;
      auVar42._8_2_ = 0;
      auVar42._0_8_ = uVar6;
      auVar42._10_2_ = uVar34;
      auVar41._10_6_ = auVar42._10_6_;
      auVar41._8_2_ = uVar34;
      auVar41._0_8_ = uVar6;
      uVar34 = (undefined2)(uVar6 >> 0x10);
      auVar13._4_8_ = auVar41._8_8_;
      auVar13._2_2_ = uVar34;
      auVar13._0_2_ = uVar34;
      pfVar1 = (float *)(param_2 + 0x10 + uVar20 * 4);
      *pfVar1 = (float)((int)(short)uVar17 + (int)(short)uVar5) * fVar3 +
                (float)(int)(short)uVar6 * fVar4;
      pfVar1[1] = (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar3 +
                  (float)(auVar13._0_4_ >> 0x10) * fVar4;
      pfVar1[2] = (float)((auVar28._8_4_ >> 0x10) + (auVar38._8_4_ >> 0x10)) * fVar3 +
                  (float)(auVar41._8_4_ >> 0x10) * fVar4;
      pfVar1[3] = (float)((auVar29._12_4_ >> 0x10) + (auVar39._12_4_ >> 0x10)) * fVar3 +
                  (float)(auVar42._12_4_ >> 0x10) * fVar4;
      uVar20 = uVar20 + 8;
    } while (uVar20 < uVar19);
    if (uVar21 < uVar19 + 1) {
      return;
    }
    uVar21 = uVar21 - uVar19;
    if (3 < (longlong)uVar21) {
      uVar20 = uVar21 & 0xfffffffffffffffc;
      uVar17 = 0;
      lVar2 = param_1 + uVar19 * 2;
      do {
        uVar5 = *(ulonglong *)(lVar2 + -6 + uVar17 * 2);
        uVar6 = *(ulonglong *)(lVar2 + 6 + uVar17 * 2);
        uVar34 = (undefined2)(uVar5 >> 0x30);
        auVar33._8_4_ = 0;
        auVar33._0_8_ = uVar5;
        auVar33._12_2_ = uVar34;
        auVar33._14_2_ = uVar34;
        uVar34 = (undefined2)(uVar5 >> 0x20);
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._8_2_ = 0;
        auVar32._0_8_ = uVar5;
        auVar32._10_2_ = uVar34;
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._8_2_ = uVar34;
        auVar31._0_8_ = uVar5;
        uVar34 = (undefined2)(uVar5 >> 0x10);
        auVar14._4_8_ = auVar31._8_8_;
        auVar14._2_2_ = uVar34;
        auVar14._0_2_ = uVar34;
        uVar34 = (undefined2)(uVar6 >> 0x30);
        auVar46._8_4_ = 0;
        auVar46._0_8_ = uVar6;
        auVar46._12_2_ = uVar34;
        auVar46._14_2_ = uVar34;
        uVar34 = (undefined2)(uVar6 >> 0x20);
        auVar45._12_4_ = auVar46._12_4_;
        auVar45._8_2_ = 0;
        auVar45._0_8_ = uVar6;
        auVar45._10_2_ = uVar34;
        auVar44._10_6_ = auVar45._10_6_;
        auVar44._8_2_ = uVar34;
        auVar44._0_8_ = uVar6;
        uVar34 = (undefined2)(uVar6 >> 0x10);
        auVar15._4_8_ = auVar44._8_8_;
        auVar15._2_2_ = uVar34;
        auVar15._0_2_ = uVar34;
        uVar7 = *(ulonglong *)(lVar2 + uVar17 * 2);
        uVar34 = (undefined2)(uVar7 >> 0x30);
        auVar49._8_4_ = 0;
        auVar49._0_8_ = uVar7;
        auVar49._12_2_ = uVar34;
        auVar49._14_2_ = uVar34;
        uVar34 = (undefined2)(uVar7 >> 0x20);
        auVar48._12_4_ = auVar49._12_4_;
        auVar48._8_2_ = 0;
        auVar48._0_8_ = uVar7;
        auVar48._10_2_ = uVar34;
        auVar47._10_6_ = auVar48._10_6_;
        auVar47._8_2_ = uVar34;
        auVar47._0_8_ = uVar7;
        uVar34 = (undefined2)(uVar7 >> 0x10);
        auVar16._4_8_ = auVar47._8_8_;
        auVar16._2_2_ = uVar34;
        auVar16._0_2_ = uVar34;
        pfVar1 = (float *)(uVar19 * 4 + param_2 + uVar17 * 4);
        *pfVar1 = (float)((int)(short)uVar5 + (int)(short)uVar6) * fVar3 +
                  (float)(int)(short)uVar7 * fVar4;
        pfVar1[1] = (float)((auVar14._0_4_ >> 0x10) + (auVar15._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar16._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar31._8_4_ >> 0x10) + (auVar44._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar47._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar32._12_4_ >> 0x10) + (auVar45._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar48._12_4_ >> 0x10) * fVar4;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar20);
      goto LAB_14067cef0;
    }
  }
  uVar20 = 0;
LAB_14067cef0:
  if (uVar20 < uVar21) {
    param_1 = param_1 + uVar19 * 2;
    do {
      *(float *)(param_2 + uVar19 * 4 + uVar20 * 4) =
           (float)((int)*(short *)(param_1 + -6 + uVar20 * 2) +
                  (int)*(short *)(param_1 + 6 + uVar20 * 2)) * fVar3 +
           (float)(int)*(short *)(param_1 + uVar20 * 2) * fVar4;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar21);
  }
  return;
}

