
void FUN_140206eac(longlong param_1,longlong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  ulonglong in_RAX;
  ulonglong in_R10;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined4 in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  undefined4 in_XMM5_Da;
  undefined1 in_register_00001344 [12];
  undefined4 uVar10;
  undefined1 in_ZMM6 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  float unaff_XMM12_Da;
  
  auVar7._4_4_ = in_XMM5_Da;
  auVar7._0_4_ = in_XMM5_Da;
  auVar7._8_4_ = in_XMM5_Da;
  auVar7._12_4_ = in_XMM5_Da;
  auVar7._16_4_ = in_XMM5_Da;
  auVar7._20_4_ = in_XMM5_Da;
  auVar7._24_4_ = in_XMM5_Da;
  auVar7._28_4_ = in_XMM5_Da;
  uVar10 = in_ZMM6._0_4_;
  auVar8._4_4_ = uVar10;
  auVar8._0_4_ = uVar10;
  auVar8._8_4_ = uVar10;
  auVar8._12_4_ = uVar10;
  auVar8._16_4_ = uVar10;
  auVar8._20_4_ = uVar10;
  auVar8._24_4_ = uVar10;
  auVar8._28_4_ = uVar10;
  auVar9._4_4_ = in_XMM4_Da;
  auVar9._0_4_ = in_XMM4_Da;
  auVar9._8_4_ = in_XMM4_Da;
  auVar9._12_4_ = in_XMM4_Da;
  auVar9._16_4_ = in_XMM4_Da;
  auVar9._20_4_ = in_XMM4_Da;
  auVar9._24_4_ = in_XMM4_Da;
  auVar9._28_4_ = in_XMM4_Da;
  do {
    pfVar1 = (float *)(param_1 + -4 + in_R10 * 4);
    pfVar2 = (float *)(param_1 + -8 + in_R10 * 4);
    pfVar3 = (float *)(param_1 + 4 + in_R10 * 4);
    auVar11._0_4_ = *pfVar1 + *pfVar3;
    auVar11._4_4_ = pfVar1[1] + pfVar3[1];
    auVar11._8_4_ = pfVar1[2] + pfVar3[2];
    auVar11._12_4_ = pfVar1[3] + pfVar3[3];
    auVar11._16_4_ = pfVar1[4] + pfVar3[4];
    auVar11._20_4_ = pfVar1[5] + pfVar3[5];
    auVar11._24_4_ = pfVar1[6] + pfVar3[6];
    auVar11._28_4_ = pfVar1[7] + pfVar3[7];
    pfVar1 = (float *)(param_1 + 8 + in_R10 * 4);
    auVar6._4_4_ = unaff_XMM12_Da * (pfVar2[1] + pfVar1[1]);
    auVar6._0_4_ = unaff_XMM12_Da * (*pfVar2 + *pfVar1);
    auVar6._8_4_ = unaff_XMM12_Da * (pfVar2[2] + pfVar1[2]);
    auVar6._12_4_ = unaff_XMM12_Da * (pfVar2[3] + pfVar1[3]);
    auVar6._16_4_ = unaff_XMM12_Da * (pfVar2[4] + pfVar1[4]);
    auVar6._20_4_ = unaff_XMM12_Da * (pfVar2[5] + pfVar1[5]);
    auVar6._24_4_ = unaff_XMM12_Da * (pfVar2[6] + pfVar1[6]);
    auVar6._28_4_ = pfVar2[7];
    pfVar1 = (float *)(param_1 + -0xc + in_R10 * 4);
    pfVar2 = (float *)(param_1 + 0xc + in_R10 * 4);
    auVar12._0_4_ = *pfVar1 + *pfVar2;
    auVar12._4_4_ = pfVar1[1] + pfVar2[1];
    auVar12._8_4_ = pfVar1[2] + pfVar2[2];
    auVar12._12_4_ = pfVar1[3] + pfVar2[3];
    auVar12._16_4_ = pfVar1[4] + pfVar2[4];
    auVar12._20_4_ = pfVar1[5] + pfVar2[5];
    auVar12._24_4_ = pfVar1[6] + pfVar2[6];
    auVar12._28_4_ = pfVar1[7] + pfVar2[7];
    auVar4 = vfmadd231ps_fma(auVar6,auVar12,auVar7);
    auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar11,auVar8);
    auVar4 = vfmadd231ps_fma(ZEXT1632(auVar4),auVar9,*(undefined1 (*) [32])(param_1 + in_R10 * 4));
    *(undefined1 (*) [32])(param_2 + in_R10 * 4) = ZEXT1632(auVar4);
    in_R10 = in_R10 + 8;
  } while (in_R10 < in_RAX);
  if (in_RAX < param_3) {
    do {
      auVar4._4_12_ = in_register_00001344;
      auVar4._0_4_ = in_XMM5_Da;
      auVar4 = vfmadd231ss_fma(ZEXT416((uint)(unaff_XMM12_Da *
                                             (*(float *)(param_1 + -8 + in_RAX * 4) +
                                             *(float *)(param_1 + 8 + in_RAX * 4)))),
                               ZEXT416((uint)(*(float *)(param_1 + -0xc + in_RAX * 4) +
                                             *(float *)(param_1 + 0xc + in_RAX * 4))),auVar4);
      auVar4 = vfmadd231ss_fma(auVar4,ZEXT416((uint)(*(float *)(param_1 + -4 + in_RAX * 4) +
                                                    *(float *)(param_1 + 4 + in_RAX * 4))),
                               in_ZMM6._0_16_);
      auVar5._4_12_ = in_register_00001304;
      auVar5._0_4_ = in_XMM4_Da;
      auVar4 = vfmadd231ss_fma(auVar4,auVar5,ZEXT416(*(uint *)(param_1 + in_RAX * 4)));
      *(int *)(param_2 + in_RAX * 4) = auVar4._0_4_;
      in_RAX = in_RAX + 1;
    } while (in_RAX < param_3);
  }
  return;
}

