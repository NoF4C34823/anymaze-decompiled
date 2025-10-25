
void FUN_140858f97(ulonglong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong in_RAX;
  ulonglong in_RDX;
  longlong in_R10;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  float in_XMM4_Da;
  undefined1 in_register_00001304 [12];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  do {
    *(float *)(in_R10 + in_RAX * 4) =
         param_2 * (float)((int)*(short *)(param_4 + -4 + in_RAX * 2) +
                          (int)*(short *)(param_4 + 4 + in_RAX * 2)) +
         in_XMM4_Da *
         (float)((int)*(short *)(param_4 + -2 + in_RAX * 2) +
                (int)*(short *)(param_4 + 2 + in_RAX * 2)) +
         in_XMM0_Da * (float)(int)*(short *)(param_4 + in_RAX * 2);
    in_RAX = in_RAX + 1;
  } while (in_RAX < in_RDX);
  auVar14._4_12_ = in_register_00001244;
  auVar14._0_4_ = param_2;
  auVar15._4_12_ = in_register_00001244;
  auVar15._0_4_ = param_2;
  auVar14 = vshufps_avx(auVar14,auVar15,0);
  auVar12._4_12_ = in_register_00001304;
  auVar12._0_4_ = in_XMM4_Da;
  auVar13._4_12_ = in_register_00001304;
  auVar13._0_4_ = in_XMM4_Da;
  auVar15 = vshufps_avx(auVar12,auVar13,0);
  auVar16._4_12_ = in_register_00001204;
  auVar16._0_4_ = in_XMM0_Da;
  auVar11._4_12_ = in_register_00001204;
  auVar11._0_4_ = in_XMM0_Da;
  auVar16 = vshufps_avx(auVar16,auVar11,0);
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(param_4 + -4 + in_RDX * 2);
    auVar11 = vpmovsxwd_avx(auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(param_4 + 4 + in_RDX * 2);
    auVar12 = vpmovsxwd_avx(auVar3);
    auVar11 = vpaddd_avx(auVar11,auVar12);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(param_4 + 0xc + in_RDX * 2);
    auVar13 = vpmovsxwd_avx(auVar4);
    auVar12 = vpaddd_avx(auVar12,auVar13);
    auVar17._16_16_ = auVar12;
    auVar17._0_16_ = auVar11;
    auVar17 = vcvtdq2ps_avx(auVar17);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(param_4 + -2 + in_RDX * 2);
    auVar11 = vpmovsxwd_avx(auVar5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(param_4 + 2 + in_RDX * 2);
    auVar12 = vpmovsxwd_avx(auVar6);
    auVar11 = vpaddd_avx(auVar11,auVar12);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(param_4 + 6 + in_RDX * 2);
    auVar12 = vpmovsxwd_avx(auVar7);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(param_4 + 10 + in_RDX * 2);
    auVar13 = vpmovsxwd_avx(auVar8);
    auVar12 = vpaddd_avx(auVar12,auVar13);
    auVar18._16_16_ = auVar12;
    auVar18._0_16_ = auVar11;
    auVar18 = vcvtdq2ps_avx(auVar18);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)(param_4 + in_RDX * 2);
    auVar11 = vpmovsxwd_avx(auVar9);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_4 + 8 + in_RDX * 2);
    auVar13 = vpmovsxwd_avx(auVar10);
    auVar19._16_16_ = auVar13;
    auVar19._0_16_ = auVar11;
    auVar19 = vcvtdq2ps_avx(auVar19);
    pfVar1 = (float *)(in_R10 + in_RDX * 4);
    *pfVar1 = auVar14._0_4_ * auVar17._0_4_ + auVar15._0_4_ * auVar18._0_4_ +
              auVar16._0_4_ * auVar19._0_4_;
    pfVar1[1] = auVar14._4_4_ * auVar17._4_4_ + auVar15._4_4_ * auVar18._4_4_ +
                auVar16._4_4_ * auVar19._4_4_;
    pfVar1[2] = auVar14._8_4_ * auVar17._8_4_ + auVar15._8_4_ * auVar18._8_4_ +
                auVar16._8_4_ * auVar19._8_4_;
    pfVar1[3] = auVar14._12_4_ * auVar17._12_4_ + auVar15._12_4_ * auVar18._12_4_ +
                auVar16._12_4_ * auVar19._12_4_;
    pfVar1[4] = auVar14._0_4_ * auVar17._16_4_ + auVar15._0_4_ * auVar18._16_4_ +
                auVar16._0_4_ * auVar19._16_4_;
    pfVar1[5] = auVar14._4_4_ * auVar17._20_4_ + auVar15._4_4_ * auVar18._20_4_ +
                auVar16._4_4_ * auVar19._20_4_;
    pfVar1[6] = auVar14._8_4_ * auVar17._24_4_ + auVar15._8_4_ * auVar18._24_4_ +
                auVar16._8_4_ * auVar19._24_4_;
    pfVar1[7] = auVar12._12_4_ + 0.0 + 0.0;
    in_RDX = in_RDX + 8;
  } while (in_RDX < param_1);
  if (param_1 < param_3) {
    do {
      *(float *)(in_R10 + param_1 * 4) =
           param_2 * (float)((int)*(short *)(param_4 + -4 + param_1 * 2) +
                            (int)*(short *)(param_4 + 4 + param_1 * 2)) +
           in_XMM4_Da *
           (float)((int)*(short *)(param_4 + -2 + param_1 * 2) +
                  (int)*(short *)(param_4 + 2 + param_1 * 2)) +
           in_XMM0_Da * (float)(int)*(short *)(param_4 + param_1 * 2);
      param_1 = param_1 + 1;
    } while (param_1 < param_3);
  }
  return;
}

