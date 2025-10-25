
void FUN_140707da0(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined2 uVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_140708017:
    uVar19 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar20 = param_2 & 0xf;
    if (uVar20 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140708017;
      uVar20 = 0x10 - uVar20 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar20 + 8)) goto LAB_140708017;
    uVar17 = 0;
    uVar19 = param_3 - (param_3 - uVar20 & 7);
    if (uVar20 != 0) {
      do {
        *(float *)(param_2 + uVar17 * 4) =
             (float)((int)*(short *)(param_1 + -2 + uVar17 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar17 * 2)) * fVar3 +
             (float)(int)*(short *)(param_1 + uVar17 * 2) * fVar4;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar20);
    }
    puVar18 = (ulonglong *)(uVar20 * 2 + param_1);
    do {
      uVar17 = *(ulonglong *)((longlong)puVar18 + -2);
      uVar5 = *(ulonglong *)((longlong)puVar18 + 2);
      uVar33 = (undefined2)(uVar17 >> 0x30);
      auVar36._8_4_ = 0;
      auVar36._0_8_ = uVar17;
      auVar36._12_2_ = uVar33;
      auVar36._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar17 >> 0x20);
      auVar35._12_4_ = auVar36._12_4_;
      auVar35._8_2_ = 0;
      auVar35._0_8_ = uVar17;
      auVar35._10_2_ = uVar33;
      auVar34._10_6_ = auVar35._10_6_;
      auVar34._8_2_ = uVar33;
      auVar34._0_8_ = uVar17;
      uVar33 = (undefined2)(uVar17 >> 0x10);
      auVar8._4_8_ = auVar34._8_8_;
      auVar8._2_2_ = uVar33;
      auVar8._0_2_ = uVar33;
      uVar33 = (undefined2)(uVar5 >> 0x30);
      auVar23._8_4_ = 0;
      auVar23._0_8_ = uVar5;
      auVar23._12_2_ = uVar33;
      auVar23._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar5 >> 0x20);
      auVar22._12_4_ = auVar23._12_4_;
      auVar22._8_2_ = 0;
      auVar22._0_8_ = uVar5;
      auVar22._10_2_ = uVar33;
      auVar21._10_6_ = auVar22._10_6_;
      auVar21._8_2_ = uVar33;
      auVar21._0_8_ = uVar5;
      uVar33 = (undefined2)(uVar5 >> 0x10);
      auVar9._4_8_ = auVar21._8_8_;
      auVar9._2_2_ = uVar33;
      auVar9._0_2_ = uVar33;
      uVar6 = *puVar18;
      uVar33 = (undefined2)(uVar6 >> 0x30);
      auVar26._8_4_ = 0;
      auVar26._0_8_ = uVar6;
      auVar26._12_2_ = uVar33;
      auVar26._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar6 >> 0x20);
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._8_2_ = 0;
      auVar25._0_8_ = uVar6;
      auVar25._10_2_ = uVar33;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = uVar33;
      auVar24._0_8_ = uVar6;
      uVar33 = (undefined2)(uVar6 >> 0x10);
      auVar10._4_8_ = auVar24._8_8_;
      auVar10._2_2_ = uVar33;
      auVar10._0_2_ = uVar33;
      pfVar1 = (float *)(param_2 + uVar20 * 4);
      *pfVar1 = (float)((int)(short)uVar17 + (int)(short)uVar5) * fVar3 +
                (float)(int)(short)uVar6 * fVar4;
      pfVar1[1] = (float)((auVar8._0_4_ >> 0x10) + (auVar9._0_4_ >> 0x10)) * fVar3 +
                  (float)(auVar10._0_4_ >> 0x10) * fVar4;
      pfVar1[2] = (float)((auVar34._8_4_ >> 0x10) + (auVar21._8_4_ >> 0x10)) * fVar3 +
                  (float)(auVar24._8_4_ >> 0x10) * fVar4;
      pfVar1[3] = (float)((auVar35._12_4_ >> 0x10) + (auVar22._12_4_ >> 0x10)) * fVar3 +
                  (float)(auVar25._12_4_ >> 0x10) * fVar4;
      uVar17 = *(ulonglong *)((longlong)puVar18 + 6);
      uVar5 = *(ulonglong *)((longlong)puVar18 + 10);
      uVar33 = (undefined2)(uVar17 >> 0x30);
      auVar29._8_4_ = 0;
      auVar29._0_8_ = uVar17;
      auVar29._12_2_ = uVar33;
      auVar29._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar17 >> 0x20);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._8_2_ = 0;
      auVar28._0_8_ = uVar17;
      auVar28._10_2_ = uVar33;
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._8_2_ = uVar33;
      auVar27._0_8_ = uVar17;
      uVar33 = (undefined2)(uVar17 >> 0x10);
      auVar11._4_8_ = auVar27._8_8_;
      auVar11._2_2_ = uVar33;
      auVar11._0_2_ = uVar33;
      uVar33 = (undefined2)(uVar5 >> 0x30);
      auVar39._8_4_ = 0;
      auVar39._0_8_ = uVar5;
      auVar39._12_2_ = uVar33;
      auVar39._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar5 >> 0x20);
      auVar38._12_4_ = auVar39._12_4_;
      auVar38._8_2_ = 0;
      auVar38._0_8_ = uVar5;
      auVar38._10_2_ = uVar33;
      auVar37._10_6_ = auVar38._10_6_;
      auVar37._8_2_ = uVar33;
      auVar37._0_8_ = uVar5;
      uVar33 = (undefined2)(uVar5 >> 0x10);
      auVar12._4_8_ = auVar37._8_8_;
      auVar12._2_2_ = uVar33;
      auVar12._0_2_ = uVar33;
      uVar6 = puVar18[1];
      puVar18 = puVar18 + 2;
      uVar33 = (undefined2)(uVar6 >> 0x30);
      auVar42._8_4_ = 0;
      auVar42._0_8_ = uVar6;
      auVar42._12_2_ = uVar33;
      auVar42._14_2_ = uVar33;
      uVar33 = (undefined2)(uVar6 >> 0x20);
      auVar41._12_4_ = auVar42._12_4_;
      auVar41._8_2_ = 0;
      auVar41._0_8_ = uVar6;
      auVar41._10_2_ = uVar33;
      auVar40._10_6_ = auVar41._10_6_;
      auVar40._8_2_ = uVar33;
      auVar40._0_8_ = uVar6;
      uVar33 = (undefined2)(uVar6 >> 0x10);
      auVar13._4_8_ = auVar40._8_8_;
      auVar13._2_2_ = uVar33;
      auVar13._0_2_ = uVar33;
      pfVar1 = (float *)(param_2 + 0x10 + uVar20 * 4);
      *pfVar1 = (float)((int)(short)uVar17 + (int)(short)uVar5) * fVar3 +
                (float)(int)(short)uVar6 * fVar4;
      pfVar1[1] = (float)((auVar11._0_4_ >> 0x10) + (auVar12._0_4_ >> 0x10)) * fVar3 +
                  (float)(auVar13._0_4_ >> 0x10) * fVar4;
      pfVar1[2] = (float)((auVar27._8_4_ >> 0x10) + (auVar37._8_4_ >> 0x10)) * fVar3 +
                  (float)(auVar40._8_4_ >> 0x10) * fVar4;
      pfVar1[3] = (float)((auVar28._12_4_ >> 0x10) + (auVar38._12_4_ >> 0x10)) * fVar3 +
                  (float)(auVar41._12_4_ >> 0x10) * fVar4;
      uVar20 = uVar20 + 8;
    } while (uVar20 < uVar19);
    if (param_3 < uVar19 + 1) {
      return;
    }
    param_3 = param_3 - uVar19;
    if (3 < (longlong)param_3) {
      uVar20 = param_3 & 0xfffffffffffffffc;
      uVar17 = 0;
      lVar2 = param_1 + uVar19 * 2;
      do {
        uVar5 = *(ulonglong *)(lVar2 + -2 + uVar17 * 2);
        uVar6 = *(ulonglong *)(lVar2 + 2 + uVar17 * 2);
        uVar33 = (undefined2)(uVar5 >> 0x30);
        auVar32._8_4_ = 0;
        auVar32._0_8_ = uVar5;
        auVar32._12_2_ = uVar33;
        auVar32._14_2_ = uVar33;
        uVar33 = (undefined2)(uVar5 >> 0x20);
        auVar31._12_4_ = auVar32._12_4_;
        auVar31._8_2_ = 0;
        auVar31._0_8_ = uVar5;
        auVar31._10_2_ = uVar33;
        auVar30._10_6_ = auVar31._10_6_;
        auVar30._8_2_ = uVar33;
        auVar30._0_8_ = uVar5;
        uVar33 = (undefined2)(uVar5 >> 0x10);
        auVar14._4_8_ = auVar30._8_8_;
        auVar14._2_2_ = uVar33;
        auVar14._0_2_ = uVar33;
        uVar33 = (undefined2)(uVar6 >> 0x30);
        auVar45._8_4_ = 0;
        auVar45._0_8_ = uVar6;
        auVar45._12_2_ = uVar33;
        auVar45._14_2_ = uVar33;
        uVar33 = (undefined2)(uVar6 >> 0x20);
        auVar44._12_4_ = auVar45._12_4_;
        auVar44._8_2_ = 0;
        auVar44._0_8_ = uVar6;
        auVar44._10_2_ = uVar33;
        auVar43._10_6_ = auVar44._10_6_;
        auVar43._8_2_ = uVar33;
        auVar43._0_8_ = uVar6;
        uVar33 = (undefined2)(uVar6 >> 0x10);
        auVar15._4_8_ = auVar43._8_8_;
        auVar15._2_2_ = uVar33;
        auVar15._0_2_ = uVar33;
        uVar7 = *(ulonglong *)(lVar2 + uVar17 * 2);
        uVar33 = (undefined2)(uVar7 >> 0x30);
        auVar48._8_4_ = 0;
        auVar48._0_8_ = uVar7;
        auVar48._12_2_ = uVar33;
        auVar48._14_2_ = uVar33;
        uVar33 = (undefined2)(uVar7 >> 0x20);
        auVar47._12_4_ = auVar48._12_4_;
        auVar47._8_2_ = 0;
        auVar47._0_8_ = uVar7;
        auVar47._10_2_ = uVar33;
        auVar46._10_6_ = auVar47._10_6_;
        auVar46._8_2_ = uVar33;
        auVar46._0_8_ = uVar7;
        uVar33 = (undefined2)(uVar7 >> 0x10);
        auVar16._4_8_ = auVar46._8_8_;
        auVar16._2_2_ = uVar33;
        auVar16._0_2_ = uVar33;
        pfVar1 = (float *)(uVar19 * 4 + param_2 + uVar17 * 4);
        *pfVar1 = (float)((int)(short)uVar5 + (int)(short)uVar6) * fVar3 +
                  (float)(int)(short)uVar7 * fVar4;
        pfVar1[1] = (float)((auVar14._0_4_ >> 0x10) + (auVar15._0_4_ >> 0x10)) * fVar3 +
                    (float)(auVar16._0_4_ >> 0x10) * fVar4;
        pfVar1[2] = (float)((auVar30._8_4_ >> 0x10) + (auVar43._8_4_ >> 0x10)) * fVar3 +
                    (float)(auVar46._8_4_ >> 0x10) * fVar4;
        pfVar1[3] = (float)((auVar31._12_4_ >> 0x10) + (auVar44._12_4_ >> 0x10)) * fVar3 +
                    (float)(auVar47._12_4_ >> 0x10) * fVar4;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar20);
      goto LAB_140707fb0;
    }
  }
  uVar20 = 0;
LAB_140707fb0:
  if (uVar20 < param_3) {
    param_1 = param_1 + uVar19 * 2;
    do {
      *(float *)(param_2 + uVar19 * 4 + uVar20 * 4) =
           (float)((int)*(short *)(param_1 + -2 + uVar20 * 2) +
                  (int)*(short *)(param_1 + 2 + uVar20 * 2)) * fVar3 +
           (float)(int)*(short *)(param_1 + uVar20 * 2) * fVar4;
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_3);
  }
  return;
}

