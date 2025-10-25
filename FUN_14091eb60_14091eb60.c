
void FUN_14091eb60(ulonglong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar4 = *param_4;
  fVar5 = (float)param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  uVar9 = param_1;
  if ((longlong)param_3 < 0x10) {
LAB_14091ed14:
    uVar10 = 0;
  }
  else {
    if ((longlong)param_3 < 0x1d) {
      uVar9 = 0;
      uVar10 = param_3 & 0xfffffffffffffff0;
    }
    else {
      uVar9 = param_2 & 0x1f;
      if (uVar9 != 0) {
        if ((param_2 & 3) != 0) goto LAB_14091ed14;
        uVar9 = 0x20 - uVar9 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar9 + 0x10)) goto LAB_14091ed14;
      uVar8 = 0;
      uVar10 = param_3 - (param_3 - uVar9 & 0xf);
      if (uVar9 != 0) {
        do {
          auVar11 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * *(float *)(param_1 + uVar8 * 4))),
                                    ZEXT416((uint)(*(float *)((param_1 - 4) + uVar8 * 4) +
                                                  *(float *)(param_1 + 4 + uVar8 * 4))),
                                    ZEXT416(uVar4));
          *(int *)(param_2 + uVar8 * 4) = auVar11._0_4_;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
    }
    auVar12._4_4_ = uVar4;
    auVar12._0_4_ = uVar4;
    auVar12._8_4_ = uVar4;
    auVar12._12_4_ = uVar4;
    auVar12._16_4_ = uVar4;
    auVar12._20_4_ = uVar4;
    auVar12._24_4_ = uVar4;
    auVar12._28_4_ = uVar4;
    do {
      pfVar2 = (float *)((param_1 - 4) + uVar9 * 4);
      pfVar3 = (float *)(param_1 + 4 + uVar9 * 4);
      auVar16._0_4_ = *pfVar2 + *pfVar3;
      auVar16._4_4_ = pfVar2[1] + pfVar3[1];
      auVar16._8_4_ = pfVar2[2] + pfVar3[2];
      auVar16._12_4_ = pfVar2[3] + pfVar3[3];
      auVar16._16_4_ = pfVar2[4] + pfVar3[4];
      auVar16._20_4_ = pfVar2[5] + pfVar3[5];
      auVar16._24_4_ = pfVar2[6] + pfVar3[6];
      auVar16._28_4_ = pfVar2[7] + pfVar3[7];
      pfVar3 = (float *)(param_1 + uVar9 * 4);
      auVar6._4_4_ = fVar5 * pfVar3[1];
      auVar6._0_4_ = fVar5 * *pfVar3;
      auVar6._8_4_ = fVar5 * pfVar3[2];
      auVar6._12_4_ = fVar5 * pfVar3[3];
      auVar6._16_4_ = fVar5 * pfVar3[4];
      auVar6._20_4_ = fVar5 * pfVar3[5];
      auVar6._24_4_ = fVar5 * pfVar3[6];
      auVar6._28_4_ = pfVar2[7];
      auVar11 = vfmadd231ps_fma(auVar6,auVar16,auVar12);
      *(undefined1 (*) [32])(param_2 + uVar9 * 4) = ZEXT1632(auVar11);
      pfVar3 = (float *)(param_1 + 0x1c + uVar9 * 4);
      pfVar2 = (float *)(param_1 + 0x24 + uVar9 * 4);
      auVar14._0_4_ = *pfVar3 + *pfVar2;
      auVar14._4_4_ = pfVar3[1] + pfVar2[1];
      auVar14._8_4_ = pfVar3[2] + pfVar2[2];
      auVar14._12_4_ = pfVar3[3] + pfVar2[3];
      auVar14._16_4_ = pfVar3[4] + pfVar2[4];
      auVar14._20_4_ = pfVar3[5] + pfVar2[5];
      auVar14._24_4_ = pfVar3[6] + pfVar2[6];
      auVar14._28_4_ = pfVar3[7] + pfVar2[7];
      pfVar2 = (float *)(param_1 + 0x20 + uVar9 * 4);
      auVar7._4_4_ = fVar5 * pfVar2[1];
      auVar7._0_4_ = fVar5 * *pfVar2;
      auVar7._8_4_ = fVar5 * pfVar2[2];
      auVar7._12_4_ = fVar5 * pfVar2[3];
      auVar7._16_4_ = fVar5 * pfVar2[4];
      auVar7._20_4_ = fVar5 * pfVar2[5];
      auVar7._24_4_ = fVar5 * pfVar2[6];
      auVar7._28_4_ = pfVar3[7];
      auVar11 = vfmadd231ps_fma(auVar7,auVar14,auVar12);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar9 * 4) = ZEXT1632(auVar11);
      uVar9 = uVar9 + 0x10;
    } while (uVar9 < uVar10);
  }
  if (uVar10 + 1 <= param_3) {
    param_3 = param_3 - uVar10;
    if ((longlong)param_3 < 4) {
      FUN_14091ecd0(uVar9,param_2,param_3,0);
      return;
    }
    uVar9 = 0;
    auVar11._4_4_ = uVar4;
    auVar11._0_4_ = uVar4;
    auVar11._8_4_ = uVar4;
    auVar11._12_4_ = uVar4;
    uVar8 = param_3 & 0xfffffffffffffffc;
    do {
      lVar1 = uVar9 + uVar10;
      pfVar3 = (float *)((param_1 - 4) + lVar1 * 4);
      pfVar2 = (float *)(param_1 + 4 + lVar1 * 4);
      auVar15._0_4_ = *pfVar3 + *pfVar2;
      auVar15._4_4_ = pfVar3[1] + pfVar2[1];
      auVar15._8_4_ = pfVar3[2] + pfVar2[2];
      auVar15._12_4_ = pfVar3[3] + pfVar2[3];
      pfVar3 = (float *)(param_1 + lVar1 * 4);
      auVar13._0_4_ = fVar5 * *pfVar3;
      auVar13._4_4_ = fVar5 * pfVar3[1];
      auVar13._8_4_ = fVar5 * pfVar3[2];
      auVar13._12_4_ = fVar5 * pfVar3[3];
      auVar13 = vfmadd231ps_fma(auVar13,auVar15,auVar11);
      *(undefined1 (*) [16])(param_2 + uVar10 * 4 + uVar9 * 4) = auVar13;
      uVar9 = uVar9 + 4;
    } while (uVar9 < uVar8);
    if (uVar8 < param_3) {
      lVar1 = param_1 + uVar10 * 4;
      do {
        auVar11 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * *(float *)(lVar1 + uVar8 * 4))),
                                  ZEXT416((uint)(*(float *)(lVar1 + -4 + uVar8 * 4) +
                                                *(float *)(lVar1 + 4 + uVar8 * 4))),ZEXT416(uVar4));
        *(int *)(param_2 + uVar10 * 4 + uVar8 * 4) = auVar11._0_4_;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_3);
    }
  }
  return;
}

