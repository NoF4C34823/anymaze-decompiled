
void FUN_140949a59(ulonglong param_1,float param_2,undefined4 param_3,ulonglong param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  ulonglong uVar9;
  longlong in_RDX;
  ulonglong uVar10;
  longlong in_R10;
  ulonglong in_R11;
  float in_XMM0_Da;
  undefined1 in_register_00001244 [12];
  undefined1 in_register_00001284 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  
  auVar12._4_4_ = param_3;
  auVar12._0_4_ = param_3;
  auVar12._8_4_ = param_3;
  auVar12._12_4_ = param_3;
  auVar12._16_4_ = param_3;
  auVar12._20_4_ = param_3;
  auVar12._24_4_ = param_3;
  auVar12._28_4_ = param_3;
  auVar14._4_4_ = in_XMM0_Da;
  auVar14._0_4_ = in_XMM0_Da;
  auVar14._8_4_ = in_XMM0_Da;
  auVar14._12_4_ = in_XMM0_Da;
  auVar14._16_4_ = in_XMM0_Da;
  auVar14._20_4_ = in_XMM0_Da;
  auVar14._24_4_ = in_XMM0_Da;
  auVar14._28_4_ = in_XMM0_Da;
  do {
    pfVar2 = (float *)(in_R10 + -0xc + param_1 * 4);
    pfVar3 = (float *)(in_R10 + 0xc + param_1 * 4);
    pfVar4 = (float *)(in_R10 + -0x18 + param_1 * 4);
    auVar7._4_4_ = param_2 * (pfVar2[1] + pfVar3[1]);
    auVar7._0_4_ = param_2 * (*pfVar2 + *pfVar3);
    auVar7._8_4_ = param_2 * (pfVar2[2] + pfVar3[2]);
    auVar7._12_4_ = param_2 * (pfVar2[3] + pfVar3[3]);
    auVar7._16_4_ = param_2 * (pfVar2[4] + pfVar3[4]);
    auVar7._20_4_ = param_2 * (pfVar2[5] + pfVar3[5]);
    auVar7._24_4_ = param_2 * (pfVar2[6] + pfVar3[6]);
    auVar7._28_4_ = pfVar2[7] + pfVar3[7];
    pfVar2 = (float *)(in_R10 + 0x18 + param_1 * 4);
    auVar16._0_4_ = *pfVar4 + *pfVar2;
    auVar16._4_4_ = pfVar4[1] + pfVar2[1];
    auVar16._8_4_ = pfVar4[2] + pfVar2[2];
    auVar16._12_4_ = pfVar4[3] + pfVar2[3];
    auVar16._16_4_ = pfVar4[4] + pfVar2[4];
    auVar16._20_4_ = pfVar4[5] + pfVar2[5];
    auVar16._24_4_ = pfVar4[6] + pfVar2[6];
    auVar16._28_4_ = pfVar4[7] + pfVar2[7];
    auVar11 = vfmadd231ps_fma(auVar7,auVar16,auVar12);
    auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar14,*(undefined1 (*) [32])(in_R10 + param_1 * 4)
                             );
    *(undefined1 (*) [32])(in_RDX + param_1 * 4) = ZEXT1632(auVar11);
    pfVar2 = (float *)(in_R10 + 8 + param_1 * 4);
    pfVar3 = (float *)(in_R10 + 0x38 + param_1 * 4);
    auVar17._0_4_ = *pfVar2 + *pfVar3;
    auVar17._4_4_ = pfVar2[1] + pfVar3[1];
    auVar17._8_4_ = pfVar2[2] + pfVar3[2];
    auVar17._12_4_ = pfVar2[3] + pfVar3[3];
    auVar17._16_4_ = pfVar2[4] + pfVar3[4];
    auVar17._20_4_ = pfVar2[5] + pfVar3[5];
    auVar17._24_4_ = pfVar2[6] + pfVar3[6];
    auVar17._28_4_ = pfVar2[7] + pfVar3[7];
    pfVar2 = (float *)(in_R10 + 0x14 + param_1 * 4);
    pfVar3 = (float *)(in_R10 + 0x2c + param_1 * 4);
    auVar8._4_4_ = param_2 * (pfVar2[1] + pfVar3[1]);
    auVar8._0_4_ = param_2 * (*pfVar2 + *pfVar3);
    auVar8._8_4_ = param_2 * (pfVar2[2] + pfVar3[2]);
    auVar8._12_4_ = param_2 * (pfVar2[3] + pfVar3[3]);
    auVar8._16_4_ = param_2 * (pfVar2[4] + pfVar3[4]);
    auVar8._20_4_ = param_2 * (pfVar2[5] + pfVar3[5]);
    auVar8._24_4_ = param_2 * (pfVar2[6] + pfVar3[6]);
    auVar8._28_4_ = pfVar2[7] + pfVar3[7];
    auVar11 = vfmadd231ps_fma(auVar8,auVar17,auVar12);
    auVar11 = vfmadd231ps_fma(ZEXT1632(auVar11),auVar14,
                              *(undefined1 (*) [32])(in_R10 + 0x20 + param_1 * 4));
    *(undefined1 (*) [32])(in_RDX + 0x20 + param_1 * 4) = ZEXT1632(auVar11);
    param_1 = param_1 + 0x10;
  } while (param_1 < in_R11);
  if (in_R11 + 1 <= param_4) {
    param_4 = param_4 - in_R11;
    if ((longlong)param_4 < 4) {
      FUN_140949bad(param_1,in_RDX,0);
      return;
    }
    uVar9 = 0;
    auVar11._4_4_ = param_3;
    auVar11._0_4_ = param_3;
    auVar11._8_4_ = param_3;
    auVar11._12_4_ = param_3;
    uVar10 = param_4 & 0xfffffffffffffffc;
    auVar13._4_4_ = in_XMM0_Da;
    auVar13._0_4_ = in_XMM0_Da;
    auVar13._8_4_ = in_XMM0_Da;
    auVar13._12_4_ = in_XMM0_Da;
    do {
      lVar1 = uVar9 + in_R11;
      pfVar2 = (float *)(in_R10 + -0xc + lVar1 * 4);
      pfVar3 = (float *)(in_R10 + 0xc + lVar1 * 4);
      pfVar4 = (float *)(in_R10 + -0x18 + lVar1 * 4);
      auVar15._0_4_ = param_2 * (*pfVar2 + *pfVar3);
      auVar15._4_4_ = param_2 * (pfVar2[1] + pfVar3[1]);
      auVar15._8_4_ = param_2 * (pfVar2[2] + pfVar3[2]);
      auVar15._12_4_ = param_2 * (pfVar2[3] + pfVar3[3]);
      pfVar2 = (float *)(in_R10 + in_R11 * 4 + 0x18 + uVar9 * 4);
      auVar18._0_4_ = *pfVar4 + *pfVar2;
      auVar18._4_4_ = pfVar4[1] + pfVar2[1];
      auVar18._8_4_ = pfVar4[2] + pfVar2[2];
      auVar18._12_4_ = pfVar4[3] + pfVar2[3];
      auVar15 = vfmadd231ps_fma(auVar15,auVar18,auVar11);
      auVar15 = vfmadd231ps_fma(auVar15,auVar13,*(undefined1 (*) [16])(in_R10 + lVar1 * 4));
      *(undefined1 (*) [16])(in_RDX + in_R11 * 4 + uVar9 * 4) = auVar15;
      uVar9 = uVar9 + 4;
    } while (uVar9 < uVar10);
    if (uVar10 < param_4) {
      lVar1 = in_R10 + in_R11 * 4;
      do {
        auVar6._4_12_ = in_register_00001284;
        auVar6._0_4_ = param_3;
        auVar11 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -0x18 + uVar10 * 4) +
                                                *(float *)(lVar1 + 0x18 + uVar10 * 4))),auVar6,
                                  ZEXT416((uint)(in_XMM0_Da * *(float *)(lVar1 + uVar10 * 4))));
        auVar5._4_12_ = in_register_00001244;
        auVar5._0_4_ = param_2;
        auVar11 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar1 + -0xc + uVar10 * 4) +
                                                *(float *)(lVar1 + 0xc + uVar10 * 4))),auVar5,
                                  auVar11);
        *(int *)(in_RDX + in_R11 * 4 + uVar10 * 4) = auVar11._0_4_;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_4);
    }
  }
  return;
}

