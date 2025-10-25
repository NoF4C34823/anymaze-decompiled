
void FUN_14091faa0(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar3 = *param_4;
  fVar4 = (float)param_4[1];
  uVar9 = param_3 * 3;
  if ((longlong)uVar9 < 1) {
    return;
  }
  if ((longlong)uVar9 < 0x10) {
LAB_14091fc75:
    uVar10 = 0;
  }
  else {
    if ((longlong)uVar9 < 0x1d) {
      uVar8 = 0;
      uVar10 = uVar9 & 0xfffffffffffffff0;
    }
    else {
      uVar8 = param_2 & 0x1f;
      if (uVar8 != 0) {
        if ((param_2 & 3) != 0) goto LAB_14091fc75;
        uVar8 = 0x20 - uVar8 >> 2;
      }
      if ((longlong)uVar9 < (longlong)(uVar8 + 0x10)) goto LAB_14091fc75;
      uVar7 = 0;
      uVar10 = uVar9 - (uVar9 - uVar8 & 0xf);
      if (uVar8 != 0) {
        do {
          auVar13 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(param_1 + uVar7 * 4))),
                                    ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar7 * 4) +
                                                  *(float *)(param_1 + 0xc + uVar7 * 4))),
                                    ZEXT416(uVar3));
          *(int *)(param_2 + uVar7 * 4) = auVar13._0_4_;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
    auVar12._4_4_ = uVar3;
    auVar12._0_4_ = uVar3;
    auVar12._8_4_ = uVar3;
    auVar12._12_4_ = uVar3;
    auVar12._16_4_ = uVar3;
    auVar12._20_4_ = uVar3;
    auVar12._24_4_ = uVar3;
    auVar12._28_4_ = uVar3;
    do {
      pfVar1 = (float *)(param_1 + -0xc + uVar8 * 4);
      pfVar2 = (float *)(param_1 + 0xc + uVar8 * 4);
      auVar16._0_4_ = *pfVar1 + *pfVar2;
      auVar16._4_4_ = pfVar1[1] + pfVar2[1];
      auVar16._8_4_ = pfVar1[2] + pfVar2[2];
      auVar16._12_4_ = pfVar1[3] + pfVar2[3];
      auVar16._16_4_ = pfVar1[4] + pfVar2[4];
      auVar16._20_4_ = pfVar1[5] + pfVar2[5];
      auVar16._24_4_ = pfVar1[6] + pfVar2[6];
      auVar16._28_4_ = pfVar1[7] + pfVar2[7];
      pfVar2 = (float *)(param_1 + uVar8 * 4);
      auVar5._4_4_ = fVar4 * pfVar2[1];
      auVar5._0_4_ = fVar4 * *pfVar2;
      auVar5._8_4_ = fVar4 * pfVar2[2];
      auVar5._12_4_ = fVar4 * pfVar2[3];
      auVar5._16_4_ = fVar4 * pfVar2[4];
      auVar5._20_4_ = fVar4 * pfVar2[5];
      auVar5._24_4_ = fVar4 * pfVar2[6];
      auVar5._28_4_ = pfVar1[7];
      auVar13 = vfmadd231ps_fma(auVar5,auVar16,auVar12);
      *(undefined1 (*) [32])(param_2 + uVar8 * 4) = ZEXT1632(auVar13);
      pfVar2 = (float *)(param_1 + 0x14 + uVar8 * 4);
      pfVar1 = (float *)(param_1 + 0x2c + uVar8 * 4);
      auVar14._0_4_ = *pfVar2 + *pfVar1;
      auVar14._4_4_ = pfVar2[1] + pfVar1[1];
      auVar14._8_4_ = pfVar2[2] + pfVar1[2];
      auVar14._12_4_ = pfVar2[3] + pfVar1[3];
      auVar14._16_4_ = pfVar2[4] + pfVar1[4];
      auVar14._20_4_ = pfVar2[5] + pfVar1[5];
      auVar14._24_4_ = pfVar2[6] + pfVar1[6];
      auVar14._28_4_ = pfVar2[7] + pfVar1[7];
      pfVar1 = (float *)(param_1 + 0x20 + uVar8 * 4);
      auVar6._4_4_ = fVar4 * pfVar1[1];
      auVar6._0_4_ = fVar4 * *pfVar1;
      auVar6._8_4_ = fVar4 * pfVar1[2];
      auVar6._12_4_ = fVar4 * pfVar1[3];
      auVar6._16_4_ = fVar4 * pfVar1[4];
      auVar6._20_4_ = fVar4 * pfVar1[5];
      auVar6._24_4_ = fVar4 * pfVar1[6];
      auVar6._28_4_ = pfVar2[7];
      auVar13 = vfmadd231ps_fma(auVar6,auVar14,auVar12);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 4) = ZEXT1632(auVar13);
      uVar8 = uVar8 + 0x10;
    } while (uVar8 < uVar10);
  }
  if (uVar10 + 1 <= uVar9) {
    uVar9 = uVar9 - uVar10;
    if ((longlong)uVar9 < 4) {
      FUN_14091fc2f(fVar4,uVar3,0);
      return;
    }
    uVar8 = 0;
    auVar13._4_4_ = uVar3;
    auVar13._0_4_ = uVar3;
    auVar13._8_4_ = uVar3;
    auVar13._12_4_ = uVar3;
    uVar7 = uVar9 & 0xfffffffffffffffc;
    do {
      pfVar1 = (float *)(param_1 + -0xc + (uVar8 + uVar10) * 4);
      pfVar2 = (float *)(param_1 + (uVar8 + uVar10) * 4);
      auVar11._0_4_ = fVar4 * *pfVar2;
      auVar11._4_4_ = fVar4 * pfVar2[1];
      auVar11._8_4_ = fVar4 * pfVar2[2];
      auVar11._12_4_ = fVar4 * pfVar2[3];
      pfVar2 = (float *)(param_1 + uVar10 * 4 + 0xc + uVar8 * 4);
      auVar15._0_4_ = *pfVar1 + *pfVar2;
      auVar15._4_4_ = pfVar1[1] + pfVar2[1];
      auVar15._8_4_ = pfVar1[2] + pfVar2[2];
      auVar15._12_4_ = pfVar1[3] + pfVar2[3];
      auVar11 = vfmadd231ps_fma(auVar11,auVar15,auVar13);
      *(undefined1 (*) [16])(param_2 + uVar10 * 4 + uVar8 * 4) = auVar11;
      uVar8 = uVar8 + 4;
    } while (uVar8 < uVar7);
    if (uVar7 < uVar9) {
      param_1 = param_1 + uVar10 * 4;
      do {
        auVar13 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * *(float *)(param_1 + uVar7 * 4))),
                                  ZEXT416((uint)(*(float *)(param_1 + -0xc + uVar7 * 4) +
                                                *(float *)(param_1 + 0xc + uVar7 * 4))),
                                  ZEXT416(uVar3));
        *(int *)(param_2 + uVar10 * 4 + uVar7 * 4) = auVar13._0_4_;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
  }
  return;
}

