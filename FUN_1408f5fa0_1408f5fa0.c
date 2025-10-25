
void FUN_1408f5fa0(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  
  uVar5 = *param_4;
  fVar6 = (float)param_4[1];
  fVar7 = (float)param_4[2];
  uVar12 = param_3 * 3;
  if ((longlong)uVar12 < 1) {
    return;
  }
  if (0xf < (longlong)uVar12) {
    if ((longlong)uVar12 < 0x1d) {
      FUN_1408f6059(0);
      return;
    }
    uVar11 = param_2 & 0x1f;
    if (uVar11 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408f6208;
      uVar11 = 0x20 - uVar11 >> 2;
    }
    if ((longlong)(uVar11 + 0x10) <= (longlong)uVar12) {
      uVar10 = 0;
      uVar13 = uVar12 - (uVar12 - uVar11 & 0xf);
      if (uVar11 != 0) {
        do {
          auVar14 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -0x18 + uVar10 * 4) +
                                                  *(float *)(param_1 + 0x18 + uVar10 * 4))),
                                    ZEXT416(uVar5),
                                    ZEXT416((uint)(fVar7 * *(float *)(param_1 + uVar10 * 4))));
          auVar14 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar10 * 4) +
                                                  *(float *)(param_1 + 0xc + uVar10 * 4))),
                                    ZEXT416((uint)fVar6),auVar14);
          *(int *)(param_2 + uVar10 * 4) = auVar14._0_4_;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      auVar15._4_4_ = uVar5;
      auVar15._0_4_ = uVar5;
      auVar15._8_4_ = uVar5;
      auVar15._12_4_ = uVar5;
      auVar15._16_4_ = uVar5;
      auVar15._20_4_ = uVar5;
      auVar15._24_4_ = uVar5;
      auVar15._28_4_ = uVar5;
      auVar17._4_4_ = fVar7;
      auVar17._0_4_ = fVar7;
      auVar17._8_4_ = fVar7;
      auVar17._12_4_ = fVar7;
      auVar17._16_4_ = fVar7;
      auVar17._20_4_ = fVar7;
      auVar17._24_4_ = fVar7;
      auVar17._28_4_ = fVar7;
      do {
        pfVar2 = (float *)(param_1 + -0xc + uVar11 * 4);
        pfVar3 = (float *)(param_1 + 0xc + uVar11 * 4);
        pfVar4 = (float *)(param_1 + -0x18 + uVar11 * 4);
        auVar8._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar8._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar8._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar8._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        auVar8._16_4_ = fVar6 * (pfVar2[4] + pfVar3[4]);
        auVar8._20_4_ = fVar6 * (pfVar2[5] + pfVar3[5]);
        auVar8._24_4_ = fVar6 * (pfVar2[6] + pfVar3[6]);
        auVar8._28_4_ = pfVar2[7] + pfVar3[7];
        pfVar2 = (float *)(param_1 + 0x18 + uVar11 * 4);
        auVar19._0_4_ = *pfVar4 + *pfVar2;
        auVar19._4_4_ = pfVar4[1] + pfVar2[1];
        auVar19._8_4_ = pfVar4[2] + pfVar2[2];
        auVar19._12_4_ = pfVar4[3] + pfVar2[3];
        auVar19._16_4_ = pfVar4[4] + pfVar2[4];
        auVar19._20_4_ = pfVar4[5] + pfVar2[5];
        auVar19._24_4_ = pfVar4[6] + pfVar2[6];
        auVar19._28_4_ = pfVar4[7] + pfVar2[7];
        auVar14 = vfmadd231ps_fma(auVar8,auVar19,auVar15);
        auVar14 = vfmadd231ps_fma(ZEXT1632(auVar14),auVar17,
                                  *(undefined1 (*) [32])(param_1 + uVar11 * 4));
        *(undefined1 (*) [32])(param_2 + uVar11 * 4) = ZEXT1632(auVar14);
        pfVar2 = (float *)(param_1 + 8 + uVar11 * 4);
        pfVar3 = (float *)(param_1 + 0x38 + uVar11 * 4);
        auVar20._0_4_ = *pfVar2 + *pfVar3;
        auVar20._4_4_ = pfVar2[1] + pfVar3[1];
        auVar20._8_4_ = pfVar2[2] + pfVar3[2];
        auVar20._12_4_ = pfVar2[3] + pfVar3[3];
        auVar20._16_4_ = pfVar2[4] + pfVar3[4];
        auVar20._20_4_ = pfVar2[5] + pfVar3[5];
        auVar20._24_4_ = pfVar2[6] + pfVar3[6];
        auVar20._28_4_ = pfVar2[7] + pfVar3[7];
        pfVar2 = (float *)(param_1 + 0x14 + uVar11 * 4);
        pfVar3 = (float *)(param_1 + 0x2c + uVar11 * 4);
        auVar9._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar9._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar9._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar9._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        auVar9._16_4_ = fVar6 * (pfVar2[4] + pfVar3[4]);
        auVar9._20_4_ = fVar6 * (pfVar2[5] + pfVar3[5]);
        auVar9._24_4_ = fVar6 * (pfVar2[6] + pfVar3[6]);
        auVar9._28_4_ = pfVar2[7] + pfVar3[7];
        auVar14 = vfmadd231ps_fma(auVar9,auVar20,auVar15);
        auVar14 = vfmadd231ps_fma(ZEXT1632(auVar14),auVar17,
                                  *(undefined1 (*) [32])(param_1 + 0x20 + uVar11 * 4));
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar11 * 4) = ZEXT1632(auVar14);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar13);
      if (uVar12 < uVar13 + 1) {
        return;
      }
      uVar12 = uVar12 - uVar13;
      if ((longlong)uVar12 < 4) {
        FUN_1408f61ad(uVar11,fVar6,0);
        return;
      }
      uVar11 = 0;
      auVar14._4_4_ = uVar5;
      auVar14._0_4_ = uVar5;
      auVar14._8_4_ = uVar5;
      auVar14._12_4_ = uVar5;
      uVar10 = uVar12 & 0xfffffffffffffffc;
      auVar16._4_4_ = fVar7;
      auVar16._0_4_ = fVar7;
      auVar16._8_4_ = fVar7;
      auVar16._12_4_ = fVar7;
      do {
        lVar1 = uVar11 + uVar13;
        pfVar2 = (float *)(param_1 + -0xc + lVar1 * 4);
        pfVar3 = (float *)(param_1 + 0xc + lVar1 * 4);
        pfVar4 = (float *)(param_1 + -0x18 + lVar1 * 4);
        auVar18._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar18._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar18._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar18._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        pfVar2 = (float *)(param_1 + uVar13 * 4 + 0x18 + uVar11 * 4);
        auVar21._0_4_ = *pfVar4 + *pfVar2;
        auVar21._4_4_ = pfVar4[1] + pfVar2[1];
        auVar21._8_4_ = pfVar4[2] + pfVar2[2];
        auVar21._12_4_ = pfVar4[3] + pfVar2[3];
        auVar18 = vfmadd231ps_fma(auVar18,auVar21,auVar14);
        auVar18 = vfmadd231ps_fma(auVar18,auVar16,*(undefined1 (*) [16])(param_1 + lVar1 * 4));
        *(undefined1 (*) [16])(param_2 + uVar13 * 4 + uVar11 * 4) = auVar18;
        uVar11 = uVar11 + 4;
      } while (uVar11 < uVar10);
      if (uVar12 <= uVar10) {
        return;
      }
      param_1 = param_1 + uVar13 * 4;
      do {
        auVar14 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -0x18 + uVar10 * 4) +
                                                *(float *)(param_1 + 0x18 + uVar10 * 4))),
                                  ZEXT416(uVar5),
                                  ZEXT416((uint)(fVar7 * *(float *)(param_1 + uVar10 * 4))));
        auVar14 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar10 * 4) +
                                                *(float *)(param_1 + 0xc + uVar10 * 4))),
                                  ZEXT416((uint)fVar6),auVar14);
        *(int *)(param_2 + uVar13 * 4 + uVar10 * 4) = auVar14._0_4_;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
      return;
    }
  }
LAB_1408f6208:
  FUN_1408f60f7();
  return;
}

