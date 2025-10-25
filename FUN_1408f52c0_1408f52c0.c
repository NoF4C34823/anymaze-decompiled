
void FUN_1408f52c0(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar4 = *param_4;
  fVar5 = (float)param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    if ((longlong)param_3 < 0x3fd) {
      FUN_1408f53ac();
      return;
    }
    uVar12 = param_2 & 0x1f;
    if (uVar12 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408f54b9;
      uVar12 = 0x20 - uVar12 >> 2;
    }
    if ((longlong)(uVar12 + 8) <= (longlong)param_3) {
      uVar11 = 0;
      uVar10 = param_3 - (param_3 - uVar12 & 7);
      if (uVar12 != 0) {
        do {
          auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (*(float *)(param_1 + -8 + uVar11 * 4) +
                                                          *(float *)(param_1 + 8 + uVar11 * 4)))),
                                   ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar11 * 4) +
                                                 *(float *)(param_1 + 0xc + uVar11 * 4))),
                                   ZEXT416(uVar4));
          auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(param_1 + -4 + uVar11 * 4) +
                                                        *(float *)(param_1 + 4 + uVar11 * 4))),
                                   ZEXT416(uVar6));
          auVar8 = vfmadd231ss_fma(auVar8,ZEXT416(uVar7),ZEXT416(*(uint *)(param_1 + uVar11 * 4)));
          *(int *)(param_2 + uVar11 * 4) = auVar8._0_4_;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
      auVar13._4_4_ = uVar4;
      auVar13._0_4_ = uVar4;
      auVar13._8_4_ = uVar4;
      auVar13._12_4_ = uVar4;
      auVar13._16_4_ = uVar4;
      auVar13._20_4_ = uVar4;
      auVar13._24_4_ = uVar4;
      auVar13._28_4_ = uVar4;
      auVar14._4_4_ = uVar6;
      auVar14._0_4_ = uVar6;
      auVar14._8_4_ = uVar6;
      auVar14._12_4_ = uVar6;
      auVar14._16_4_ = uVar6;
      auVar14._20_4_ = uVar6;
      auVar14._24_4_ = uVar6;
      auVar14._28_4_ = uVar6;
      auVar15._4_4_ = uVar7;
      auVar15._0_4_ = uVar7;
      auVar15._8_4_ = uVar7;
      auVar15._12_4_ = uVar7;
      auVar15._16_4_ = uVar7;
      auVar15._20_4_ = uVar7;
      auVar15._24_4_ = uVar7;
      auVar15._28_4_ = uVar7;
      do {
        pfVar1 = (float *)(param_1 + -4 + uVar12 * 4);
        pfVar2 = (float *)(param_1 + -8 + uVar12 * 4);
        pfVar3 = (float *)(param_1 + 4 + uVar12 * 4);
        auVar16._0_4_ = *pfVar1 + *pfVar3;
        auVar16._4_4_ = pfVar1[1] + pfVar3[1];
        auVar16._8_4_ = pfVar1[2] + pfVar3[2];
        auVar16._12_4_ = pfVar1[3] + pfVar3[3];
        auVar16._16_4_ = pfVar1[4] + pfVar3[4];
        auVar16._20_4_ = pfVar1[5] + pfVar3[5];
        auVar16._24_4_ = pfVar1[6] + pfVar3[6];
        auVar16._28_4_ = pfVar1[7] + pfVar3[7];
        pfVar1 = (float *)(param_1 + 8 + uVar12 * 4);
        auVar9._4_4_ = fVar5 * (pfVar2[1] + pfVar1[1]);
        auVar9._0_4_ = fVar5 * (*pfVar2 + *pfVar1);
        auVar9._8_4_ = fVar5 * (pfVar2[2] + pfVar1[2]);
        auVar9._12_4_ = fVar5 * (pfVar2[3] + pfVar1[3]);
        auVar9._16_4_ = fVar5 * (pfVar2[4] + pfVar1[4]);
        auVar9._20_4_ = fVar5 * (pfVar2[5] + pfVar1[5]);
        auVar9._24_4_ = fVar5 * (pfVar2[6] + pfVar1[6]);
        auVar9._28_4_ = pfVar2[7];
        pfVar1 = (float *)(param_1 + -0xc + uVar12 * 4);
        pfVar2 = (float *)(param_1 + 0xc + uVar12 * 4);
        auVar17._0_4_ = *pfVar1 + *pfVar2;
        auVar17._4_4_ = pfVar1[1] + pfVar2[1];
        auVar17._8_4_ = pfVar1[2] + pfVar2[2];
        auVar17._12_4_ = pfVar1[3] + pfVar2[3];
        auVar17._16_4_ = pfVar1[4] + pfVar2[4];
        auVar17._20_4_ = pfVar1[5] + pfVar2[5];
        auVar17._24_4_ = pfVar1[6] + pfVar2[6];
        auVar17._28_4_ = pfVar1[7] + pfVar2[7];
        auVar8 = vfmadd231ps_fma(auVar9,auVar17,auVar13);
        auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar16,auVar14);
        auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar15,
                                 *(undefined1 (*) [32])(param_1 + uVar12 * 4));
        *(undefined1 (*) [32])(param_2 + uVar12 * 4) = ZEXT1632(auVar8);
        uVar12 = uVar12 + 8;
      } while (uVar12 < uVar10);
      for (; uVar10 < param_3; uVar10 = uVar10 + 1) {
        auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (*(float *)(param_1 + -8 + uVar10 * 4) +
                                                        *(float *)(param_1 + 8 + uVar10 * 4)))),
                                 ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar10 * 4) +
                                               *(float *)(param_1 + 0xc + uVar10 * 4))),
                                 ZEXT416(uVar4));
        auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(param_1 + -4 + uVar10 * 4) +
                                                      *(float *)(param_1 + 4 + uVar10 * 4))),
                                 ZEXT416(uVar6));
        auVar8 = vfmadd231ss_fma(auVar8,ZEXT416(uVar7),ZEXT416(*(uint *)(param_1 + uVar10 * 4)));
        *(int *)(param_2 + uVar10 * 4) = auVar8._0_4_;
      }
      return;
    }
  }
LAB_1408f54b9:
  FUN_1408f5440();
  return;
}

