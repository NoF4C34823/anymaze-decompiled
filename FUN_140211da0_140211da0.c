
void FUN_140211da0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,uint *param_6,undefined8 param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  
  uVar18 = 0;
  lVar16 = (longlong)param_3;
  uVar3 = *param_6;
  fVar4 = (float)param_6[1];
  uVar5 = param_6[2];
  uVar6 = param_6[3];
  lVar17 = lVar16 + -3;
  if (SCARRY8(lVar16,-3) != lVar16 + -3 < 0) {
    lVar17 = lVar16 + 4;
  }
  uVar15 = (longlong)(int)lVar17 + 1;
  if (6 < (longlong)uVar15) {
    uVar15 = uVar18;
  }
  uVar11 = (longlong)(int)uVar15 + 1;
  if (6 < (longlong)uVar11) {
    uVar11 = uVar18;
  }
  uVar14 = (longlong)(int)uVar11 + 1;
  if (6 < (longlong)uVar14) {
    uVar14 = uVar18;
  }
  uVar10 = (longlong)(int)uVar14 + 1;
  if (6 < (longlong)uVar10) {
    uVar10 = uVar18;
  }
  uVar12 = (longlong)(int)uVar10 + 1;
  if (6 < (longlong)uVar12) {
    uVar12 = uVar18;
  }
  uVar13 = (longlong)(int)uVar12 + 1;
  if (6 < (longlong)uVar13) {
    uVar13 = uVar18;
  }
  auVar29 = ZEXT416(uVar3);
  auVar28 = ZEXT416(uVar5);
  auVar27 = ZEXT416(uVar6);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar19 = param_4 & 0x1f;
      if (uVar19 != 0) {
        if ((param_4 & 3) != 0) goto LAB_140212412;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 8)) {
        uVar18 = 0;
      }
      else {
        lVar16 = param_2 * lVar17 + param_1;
        lVar21 = param_2 * uVar13 + param_1;
        lVar22 = param_2 * uVar15 + param_1;
        lVar23 = param_2 * uVar12 + param_1;
        uVar18 = param_5 - (param_5 - uVar19 & 7);
        lVar24 = param_2 * uVar11 + param_1;
        lVar25 = param_2 * uVar10 + param_1;
        lVar26 = param_2 * uVar14 + param_1;
        if (uVar19 != 0) {
          uVar20 = 0;
          do {
            auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(lVar22 + uVar20 * 4) +
                                                            *(float *)(lVar23 + uVar20 * 4)))),
                                     ZEXT416((uint)(*(float *)(lVar16 + uVar20 * 4) +
                                                   *(float *)(lVar21 + uVar20 * 4))),auVar29);
            auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(lVar24 + uVar20 * 4) +
                                                          *(float *)(lVar25 + uVar20 * 4))),auVar28)
            ;
            auVar8 = vfmadd231ss_fma(auVar8,auVar27,ZEXT416(*(uint *)(lVar26 + uVar20 * 4)));
            *(int *)(param_4 + uVar20 * 4) = auVar8._0_4_;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar19);
        }
        auVar31._4_4_ = uVar3;
        auVar31._0_4_ = uVar3;
        auVar31._8_4_ = uVar3;
        auVar31._12_4_ = uVar3;
        auVar31._16_4_ = uVar3;
        auVar31._20_4_ = uVar3;
        auVar31._24_4_ = uVar3;
        auVar31._28_4_ = uVar3;
        auVar33._4_4_ = uVar5;
        auVar33._0_4_ = uVar5;
        auVar33._8_4_ = uVar5;
        auVar33._12_4_ = uVar5;
        auVar33._16_4_ = uVar5;
        auVar33._20_4_ = uVar5;
        auVar33._24_4_ = uVar5;
        auVar33._28_4_ = uVar5;
        auVar39._4_4_ = uVar6;
        auVar39._0_4_ = uVar6;
        auVar39._8_4_ = uVar6;
        auVar39._12_4_ = uVar6;
        auVar39._16_4_ = uVar6;
        auVar39._20_4_ = uVar6;
        auVar39._24_4_ = uVar6;
        auVar39._28_4_ = uVar6;
        do {
          pfVar1 = (float *)(lVar16 + uVar19 * 4);
          pfVar2 = (float *)(lVar21 + uVar19 * 4);
          auVar36._0_4_ = *pfVar1 + *pfVar2;
          auVar36._4_4_ = pfVar1[1] + pfVar2[1];
          auVar36._8_4_ = pfVar1[2] + pfVar2[2];
          auVar36._12_4_ = pfVar1[3] + pfVar2[3];
          auVar36._16_4_ = pfVar1[4] + pfVar2[4];
          auVar36._20_4_ = pfVar1[5] + pfVar2[5];
          auVar36._24_4_ = pfVar1[6] + pfVar2[6];
          auVar36._28_4_ = pfVar1[7] + pfVar2[7];
          pfVar1 = (float *)(lVar22 + uVar19 * 4);
          pfVar2 = (float *)(lVar23 + uVar19 * 4);
          auVar7._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
          auVar7._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
          auVar7._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
          auVar7._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
          auVar7._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
          auVar7._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
          auVar7._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
          auVar7._28_4_ = pfVar1[7] + pfVar2[7];
          auVar8 = vfmadd231ps_fma(auVar7,auVar36,auVar31);
          pfVar1 = (float *)(lVar24 + uVar19 * 4);
          pfVar2 = (float *)(lVar25 + uVar19 * 4);
          auVar37._0_4_ = *pfVar1 + *pfVar2;
          auVar37._4_4_ = pfVar1[1] + pfVar2[1];
          auVar37._8_4_ = pfVar1[2] + pfVar2[2];
          auVar37._12_4_ = pfVar1[3] + pfVar2[3];
          auVar37._16_4_ = pfVar1[4] + pfVar2[4];
          auVar37._20_4_ = pfVar1[5] + pfVar2[5];
          auVar37._24_4_ = pfVar1[6] + pfVar2[6];
          auVar37._28_4_ = pfVar1[7] + pfVar2[7];
          auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar37,auVar33);
          auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar39,
                                   *(undefined1 (*) [32])(lVar26 + uVar19 * 4));
          auVar7 = vmovntps_avx(ZEXT1632(auVar8));
          *(undefined1 (*) [32])(param_4 + uVar19 * 4) = auVar7;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar18);
      }
    }
LAB_140212412:
    if (param_5 <= uVar18) {
      return;
    }
    do {
      auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(uVar15 * param_2 + param_1 +
                                                                 uVar18 * 4) +
                                                      *(float *)(uVar12 * param_2 + param_1 +
                                                                uVar18 * 4)))),
                               ZEXT416((uint)(*(float *)(lVar17 * param_2 + param_1 + uVar18 * 4) +
                                             *(float *)(uVar13 * param_2 + param_1 + uVar18 * 4))),
                               auVar29);
      auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(uVar11 * param_2 + param_1 +
                                                               uVar18 * 4) +
                                                    *(float *)(uVar10 * param_2 + param_1 +
                                                              uVar18 * 4))),auVar28);
      auVar8 = vfmadd231ss_fma(auVar8,auVar27,
                               ZEXT416(*(uint *)(param_1 + param_2 * uVar14 + uVar18 * 4)));
      *(int *)(param_4 + uVar18 * 4) = auVar8._0_4_;
      uVar18 = uVar18 + 1;
    } while (uVar18 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    if ((longlong)param_5 < 0x3fd) {
      lStack_68 = param_2 * lVar17 + param_1;
      uVar19 = 0;
      lStack_80 = param_2 * uVar13 + param_1;
      uVar18 = param_5 & 0xfffffffffffffff8;
      lStack_70 = param_2 * uVar15 + param_1;
      lStack_90 = param_2 * uVar12 + param_1;
      lStack_98 = param_2 * uVar11 + param_1;
      lStack_88 = param_2 * uVar10 + param_1;
      lStack_78 = param_2 * uVar14 + param_1;
    }
    else {
      uVar19 = param_4 & 0x1f;
      if (uVar19 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1402120f2;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 8)) {
        uVar18 = 0;
        goto LAB_1402120f2;
      }
      lStack_68 = param_2 * lVar17 + param_1;
      lStack_80 = param_2 * uVar13 + param_1;
      lStack_70 = param_2 * uVar15 + param_1;
      lStack_90 = param_2 * uVar12 + param_1;
      uVar18 = param_5 - (param_5 - uVar19 & 7);
      lStack_98 = param_2 * uVar11 + param_1;
      lStack_88 = param_2 * uVar10 + param_1;
      lStack_78 = param_2 * uVar14 + param_1;
      if (uVar19 != 0) {
        uVar20 = 0;
        do {
          auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(lStack_70 + uVar20 * 4) +
                                                          *(float *)(lStack_90 + uVar20 * 4)))),
                                   ZEXT416((uint)(*(float *)(lStack_68 + uVar20 * 4) +
                                                 *(float *)(lStack_80 + uVar20 * 4))),auVar29);
          auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(lStack_98 + uVar20 * 4) +
                                                        *(float *)(lStack_88 + uVar20 * 4))),auVar28
                                  );
          auVar8 = vfmadd231ss_fma(auVar8,auVar27,ZEXT416(*(uint *)(lStack_78 + uVar20 * 4)));
          *(int *)(param_4 + uVar20 * 4) = auVar8._0_4_;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar19);
      }
    }
    auVar30._4_4_ = uVar3;
    auVar30._0_4_ = uVar3;
    auVar30._8_4_ = uVar3;
    auVar30._12_4_ = uVar3;
    auVar30._16_4_ = uVar3;
    auVar30._20_4_ = uVar3;
    auVar30._24_4_ = uVar3;
    auVar30._28_4_ = uVar3;
    auVar32._4_4_ = uVar5;
    auVar32._0_4_ = uVar5;
    auVar32._8_4_ = uVar5;
    auVar32._12_4_ = uVar5;
    auVar32._16_4_ = uVar5;
    auVar32._20_4_ = uVar5;
    auVar32._24_4_ = uVar5;
    auVar32._28_4_ = uVar5;
    auVar38._4_4_ = uVar6;
    auVar38._0_4_ = uVar6;
    auVar38._8_4_ = uVar6;
    auVar38._12_4_ = uVar6;
    auVar38._16_4_ = uVar6;
    auVar38._20_4_ = uVar6;
    auVar38._24_4_ = uVar6;
    auVar38._28_4_ = uVar6;
    do {
      pfVar2 = (float *)(lStack_68 + uVar19 * 4);
      pfVar1 = (float *)(lStack_80 + uVar19 * 4);
      auVar34._0_4_ = *pfVar2 + *pfVar1;
      auVar34._4_4_ = pfVar2[1] + pfVar1[1];
      auVar34._8_4_ = pfVar2[2] + pfVar1[2];
      auVar34._12_4_ = pfVar2[3] + pfVar1[3];
      auVar34._16_4_ = pfVar2[4] + pfVar1[4];
      auVar34._20_4_ = pfVar2[5] + pfVar1[5];
      auVar34._24_4_ = pfVar2[6] + pfVar1[6];
      auVar34._28_4_ = pfVar2[7] + pfVar1[7];
      pfVar1 = (float *)(lStack_70 + uVar19 * 4);
      pfVar2 = (float *)(lStack_90 + uVar19 * 4);
      auVar9._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
      auVar9._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
      auVar9._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
      auVar9._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
      auVar9._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
      auVar9._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
      auVar9._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
      auVar9._28_4_ = pfVar1[7] + pfVar2[7];
      auVar8 = vfmadd231ps_fma(auVar9,auVar34,auVar30);
      pfVar1 = (float *)(lStack_98 + uVar19 * 4);
      pfVar2 = (float *)(lStack_88 + uVar19 * 4);
      auVar35._0_4_ = *pfVar1 + *pfVar2;
      auVar35._4_4_ = pfVar1[1] + pfVar2[1];
      auVar35._8_4_ = pfVar1[2] + pfVar2[2];
      auVar35._12_4_ = pfVar1[3] + pfVar2[3];
      auVar35._16_4_ = pfVar1[4] + pfVar2[4];
      auVar35._20_4_ = pfVar1[5] + pfVar2[5];
      auVar35._24_4_ = pfVar1[6] + pfVar2[6];
      auVar35._28_4_ = pfVar1[7] + pfVar2[7];
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar35,auVar32);
      auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar38,
                               *(undefined1 (*) [32])(lStack_78 + uVar19 * 4));
      *(undefined1 (*) [32])(param_4 + uVar19 * 4) = ZEXT1632(auVar8);
      uVar19 = uVar19 + 8;
    } while (uVar19 < uVar18);
  }
LAB_1402120f2:
  if (uVar18 < param_5) {
    do {
      auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (*(float *)(uVar15 * param_2 + param_1 +
                                                                 uVar18 * 4) +
                                                      *(float *)(uVar12 * param_2 + param_1 +
                                                                uVar18 * 4)))),
                               ZEXT416((uint)(*(float *)(lVar17 * param_2 + param_1 + uVar18 * 4) +
                                             *(float *)(uVar13 * param_2 + param_1 + uVar18 * 4))),
                               auVar29);
      auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(uVar11 * param_2 + param_1 +
                                                               uVar18 * 4) +
                                                    *(float *)(uVar10 * param_2 + param_1 +
                                                              uVar18 * 4))),auVar28);
      auVar8 = vfmadd231ss_fma(auVar8,auVar27,
                               ZEXT416(*(uint *)(param_1 + param_2 * uVar14 + uVar18 * 4)));
      *(int *)(param_4 + uVar18 * 4) = auVar8._0_4_;
      uVar18 = uVar18 + 1;
    } while (uVar18 < param_5);
  }
  return;
}

