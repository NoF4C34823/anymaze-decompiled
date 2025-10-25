
void FUN_140207d20(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  undefined1 auVar10 [32];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  uVar9 = param_3 * 3;
  uVar4 = *param_4;
  fVar5 = (float)param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  if ((longlong)uVar9 < 1) {
    return;
  }
  if (7 < (longlong)uVar9) {
    if ((longlong)uVar9 < 0x3fd) {
      FUN_140207e0c(param_1,param_2,param_3,0);
      return;
    }
    uVar13 = param_2 & 0x1f;
    if (uVar13 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140207f19;
      uVar13 = 0x20 - uVar13 >> 2;
    }
    if ((longlong)(uVar13 + 8) <= (longlong)uVar9) {
      uVar12 = 0;
      uVar11 = uVar9 - (uVar9 - uVar13 & 7);
      if (uVar13 != 0) {
        do {
          auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (*(float *)(param_1 + -0x18 + uVar12 * 4)
                                                          + *(float *)(param_1 + 0x18 + uVar12 * 4))
                                                 )),
                                   ZEXT416((uint)(*(float *)(param_1 + -0x24 + uVar12 * 4) +
                                                 *(float *)(param_1 + 0x24 + uVar12 * 4))),
                                   ZEXT416(uVar4));
          auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar12 * 4) +
                                                        *(float *)(param_1 + 0xc + uVar12 * 4))),
                                   ZEXT416(uVar6));
          auVar8 = vfmadd231ss_fma(auVar8,ZEXT416(uVar7),ZEXT416(*(uint *)(param_1 + uVar12 * 4)));
          *(int *)(param_2 + uVar12 * 4) = auVar8._0_4_;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
      auVar14._4_4_ = uVar4;
      auVar14._0_4_ = uVar4;
      auVar14._8_4_ = uVar4;
      auVar14._12_4_ = uVar4;
      auVar14._16_4_ = uVar4;
      auVar14._20_4_ = uVar4;
      auVar14._24_4_ = uVar4;
      auVar14._28_4_ = uVar4;
      auVar15._4_4_ = uVar6;
      auVar15._0_4_ = uVar6;
      auVar15._8_4_ = uVar6;
      auVar15._12_4_ = uVar6;
      auVar15._16_4_ = uVar6;
      auVar15._20_4_ = uVar6;
      auVar15._24_4_ = uVar6;
      auVar15._28_4_ = uVar6;
      auVar16._4_4_ = uVar7;
      auVar16._0_4_ = uVar7;
      auVar16._8_4_ = uVar7;
      auVar16._12_4_ = uVar7;
      auVar16._16_4_ = uVar7;
      auVar16._20_4_ = uVar7;
      auVar16._24_4_ = uVar7;
      auVar16._28_4_ = uVar7;
      do {
        pfVar1 = (float *)(param_1 + -0xc + uVar13 * 4);
        pfVar2 = (float *)(param_1 + -0x18 + uVar13 * 4);
        pfVar3 = (float *)(param_1 + 0xc + uVar13 * 4);
        auVar17._0_4_ = *pfVar1 + *pfVar3;
        auVar17._4_4_ = pfVar1[1] + pfVar3[1];
        auVar17._8_4_ = pfVar1[2] + pfVar3[2];
        auVar17._12_4_ = pfVar1[3] + pfVar3[3];
        auVar17._16_4_ = pfVar1[4] + pfVar3[4];
        auVar17._20_4_ = pfVar1[5] + pfVar3[5];
        auVar17._24_4_ = pfVar1[6] + pfVar3[6];
        auVar17._28_4_ = pfVar1[7] + pfVar3[7];
        pfVar1 = (float *)(param_1 + 0x18 + uVar13 * 4);
        auVar10._4_4_ = fVar5 * (pfVar2[1] + pfVar1[1]);
        auVar10._0_4_ = fVar5 * (*pfVar2 + *pfVar1);
        auVar10._8_4_ = fVar5 * (pfVar2[2] + pfVar1[2]);
        auVar10._12_4_ = fVar5 * (pfVar2[3] + pfVar1[3]);
        auVar10._16_4_ = fVar5 * (pfVar2[4] + pfVar1[4]);
        auVar10._20_4_ = fVar5 * (pfVar2[5] + pfVar1[5]);
        auVar10._24_4_ = fVar5 * (pfVar2[6] + pfVar1[6]);
        auVar10._28_4_ = pfVar2[7];
        pfVar1 = (float *)(param_1 + -0x24 + uVar13 * 4);
        pfVar2 = (float *)(param_1 + 0x24 + uVar13 * 4);
        auVar18._0_4_ = *pfVar1 + *pfVar2;
        auVar18._4_4_ = pfVar1[1] + pfVar2[1];
        auVar18._8_4_ = pfVar1[2] + pfVar2[2];
        auVar18._12_4_ = pfVar1[3] + pfVar2[3];
        auVar18._16_4_ = pfVar1[4] + pfVar2[4];
        auVar18._20_4_ = pfVar1[5] + pfVar2[5];
        auVar18._24_4_ = pfVar1[6] + pfVar2[6];
        auVar18._28_4_ = pfVar1[7] + pfVar2[7];
        auVar8 = vfmadd231ps_fma(auVar10,auVar18,auVar14);
        auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar17,auVar15);
        auVar8 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar16,
                                 *(undefined1 (*) [32])(param_1 + uVar13 * 4));
        *(undefined1 (*) [32])(param_2 + uVar13 * 4) = ZEXT1632(auVar8);
        uVar13 = uVar13 + 8;
      } while (uVar13 < uVar11);
      for (; uVar11 < uVar9; uVar11 = uVar11 + 1) {
        auVar8 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (*(float *)(param_1 + -0x18 + uVar11 * 4) +
                                                        *(float *)(param_1 + 0x18 + uVar11 * 4)))),
                                 ZEXT416((uint)(*(float *)(param_1 + -0x24 + uVar11 * 4) +
                                               *(float *)(param_1 + 0x24 + uVar11 * 4))),
                                 ZEXT416(uVar4));
        auVar8 = vfmadd231ss_fma(auVar8,ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar11 * 4) +
                                                      *(float *)(param_1 + 0xc + uVar11 * 4))),
                                 ZEXT416(uVar6));
        auVar8 = vfmadd231ss_fma(auVar8,ZEXT416(uVar7),ZEXT416(*(uint *)(param_1 + uVar11 * 4)));
        *(int *)(param_2 + uVar11 * 4) = auVar8._0_4_;
      }
      return;
    }
  }
LAB_140207f19:
  FUN_140207ea0();
  return;
}

