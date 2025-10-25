
void FUN_1408a0d20(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

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
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  
  uVar5 = *param_4;
  fVar6 = (float)param_4[1];
  fVar7 = (float)param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    if ((longlong)param_3 < 0x1d) {
      FUN_1408a0dd9(0);
      return;
    }
    uVar11 = param_2 & 0x1f;
    if (uVar11 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408a0f88;
      uVar11 = 0x20 - uVar11 >> 2;
    }
    if ((longlong)(uVar11 + 0x10) <= (longlong)param_3) {
      uVar10 = 0;
      uVar12 = param_3 - (param_3 - uVar11 & 0xf);
      if (uVar11 != 0) {
        do {
          auVar13 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -8 + uVar10 * 4) +
                                                  *(float *)(param_1 + 8 + uVar10 * 4))),
                                    ZEXT416(uVar5),
                                    ZEXT416((uint)(fVar7 * *(float *)(param_1 + uVar10 * 4))));
          auVar13 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar10 * 4) +
                                                  *(float *)(param_1 + 4 + uVar10 * 4))),
                                    ZEXT416((uint)fVar6),auVar13);
          *(int *)(param_2 + uVar10 * 4) = auVar13._0_4_;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      auVar14._4_4_ = uVar5;
      auVar14._0_4_ = uVar5;
      auVar14._8_4_ = uVar5;
      auVar14._12_4_ = uVar5;
      auVar14._16_4_ = uVar5;
      auVar14._20_4_ = uVar5;
      auVar14._24_4_ = uVar5;
      auVar14._28_4_ = uVar5;
      auVar16._4_4_ = fVar7;
      auVar16._0_4_ = fVar7;
      auVar16._8_4_ = fVar7;
      auVar16._12_4_ = fVar7;
      auVar16._16_4_ = fVar7;
      auVar16._20_4_ = fVar7;
      auVar16._24_4_ = fVar7;
      auVar16._28_4_ = fVar7;
      do {
        pfVar2 = (float *)(param_1 + -4 + uVar11 * 4);
        pfVar3 = (float *)(param_1 + 4 + uVar11 * 4);
        pfVar4 = (float *)(param_1 + -8 + uVar11 * 4);
        auVar8._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar8._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar8._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar8._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        auVar8._16_4_ = fVar6 * (pfVar2[4] + pfVar3[4]);
        auVar8._20_4_ = fVar6 * (pfVar2[5] + pfVar3[5]);
        auVar8._24_4_ = fVar6 * (pfVar2[6] + pfVar3[6]);
        auVar8._28_4_ = pfVar2[7] + pfVar3[7];
        pfVar2 = (float *)(param_1 + 8 + uVar11 * 4);
        auVar18._0_4_ = *pfVar4 + *pfVar2;
        auVar18._4_4_ = pfVar4[1] + pfVar2[1];
        auVar18._8_4_ = pfVar4[2] + pfVar2[2];
        auVar18._12_4_ = pfVar4[3] + pfVar2[3];
        auVar18._16_4_ = pfVar4[4] + pfVar2[4];
        auVar18._20_4_ = pfVar4[5] + pfVar2[5];
        auVar18._24_4_ = pfVar4[6] + pfVar2[6];
        auVar18._28_4_ = pfVar4[7] + pfVar2[7];
        auVar13 = vfmadd231ps_fma(auVar8,auVar18,auVar14);
        auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar16,
                                  *(undefined1 (*) [32])(param_1 + uVar11 * 4));
        *(undefined1 (*) [32])(param_2 + uVar11 * 4) = ZEXT1632(auVar13);
        pfVar2 = (float *)(param_1 + 0x1c + uVar11 * 4);
        pfVar3 = (float *)(param_1 + 0x24 + uVar11 * 4);
        pfVar4 = (float *)(param_1 + 0x18 + uVar11 * 4);
        auVar9._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar9._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar9._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar9._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        auVar9._16_4_ = fVar6 * (pfVar2[4] + pfVar3[4]);
        auVar9._20_4_ = fVar6 * (pfVar2[5] + pfVar3[5]);
        auVar9._24_4_ = fVar6 * (pfVar2[6] + pfVar3[6]);
        auVar9._28_4_ = pfVar2[7] + pfVar3[7];
        pfVar2 = (float *)(param_1 + 0x28 + uVar11 * 4);
        auVar20._0_4_ = *pfVar4 + *pfVar2;
        auVar20._4_4_ = pfVar4[1] + pfVar2[1];
        auVar20._8_4_ = pfVar4[2] + pfVar2[2];
        auVar20._12_4_ = pfVar4[3] + pfVar2[3];
        auVar20._16_4_ = pfVar4[4] + pfVar2[4];
        auVar20._20_4_ = pfVar4[5] + pfVar2[5];
        auVar20._24_4_ = pfVar4[6] + pfVar2[6];
        auVar20._28_4_ = pfVar4[7] + pfVar2[7];
        auVar13 = vfmadd231ps_fma(auVar9,auVar20,auVar14);
        auVar13 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar16,
                                  *(undefined1 (*) [32])(param_1 + 0x20 + uVar11 * 4));
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar11 * 4) = ZEXT1632(auVar13);
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar12);
      if (param_3 < uVar12 + 1) {
        return;
      }
      param_3 = param_3 - uVar12;
      if ((longlong)param_3 < 4) {
        FUN_1408a0f2d();
        return;
      }
      uVar11 = 0;
      auVar13._4_4_ = uVar5;
      auVar13._0_4_ = uVar5;
      auVar13._8_4_ = uVar5;
      auVar13._12_4_ = uVar5;
      uVar10 = param_3 & 0xfffffffffffffffc;
      auVar15._4_4_ = fVar7;
      auVar15._0_4_ = fVar7;
      auVar15._8_4_ = fVar7;
      auVar15._12_4_ = fVar7;
      do {
        lVar1 = uVar11 + uVar12;
        pfVar2 = (float *)(param_1 + -4 + lVar1 * 4);
        pfVar3 = (float *)(param_1 + 4 + lVar1 * 4);
        pfVar4 = (float *)(param_1 + -8 + lVar1 * 4);
        auVar17._0_4_ = fVar6 * (*pfVar2 + *pfVar3);
        auVar17._4_4_ = fVar6 * (pfVar2[1] + pfVar3[1]);
        auVar17._8_4_ = fVar6 * (pfVar2[2] + pfVar3[2]);
        auVar17._12_4_ = fVar6 * (pfVar2[3] + pfVar3[3]);
        pfVar2 = (float *)(param_1 + uVar12 * 4 + 8 + uVar11 * 4);
        auVar19._0_4_ = *pfVar4 + *pfVar2;
        auVar19._4_4_ = pfVar4[1] + pfVar2[1];
        auVar19._8_4_ = pfVar4[2] + pfVar2[2];
        auVar19._12_4_ = pfVar4[3] + pfVar2[3];
        auVar17 = vfmadd231ps_fma(auVar17,auVar19,auVar13);
        auVar17 = vfmadd231ps_fma(auVar17,auVar15,*(undefined1 (*) [16])(param_1 + lVar1 * 4));
        *(undefined1 (*) [16])(param_2 + uVar12 * 4 + uVar11 * 4) = auVar17;
        uVar11 = uVar11 + 4;
      } while (uVar11 < uVar10);
      if (param_3 <= uVar10) {
        return;
      }
      param_1 = param_1 + uVar12 * 4;
      do {
        auVar13 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -8 + uVar10 * 4) +
                                                *(float *)(param_1 + 8 + uVar10 * 4))),
                                  ZEXT416(uVar5),
                                  ZEXT416((uint)(fVar7 * *(float *)(param_1 + uVar10 * 4))));
        auVar13 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(param_1 + -4 + uVar10 * 4) +
                                                *(float *)(param_1 + 4 + uVar10 * 4))),
                                  ZEXT416((uint)fVar6),auVar13);
        *(int *)(param_2 + uVar12 * 4 + uVar10 * 4) = auVar13._0_4_;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_3);
      return;
    }
  }
LAB_1408a0f88:
  FUN_1408a0e77();
  return;
}

