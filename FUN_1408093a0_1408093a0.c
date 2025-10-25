
void FUN_1408093a0(ulonglong param_1,float param_2,longlong param_3,longlong param_4)

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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar21;
  ulonglong in_RDX;
  ulonglong in_R10;
  ulonglong uVar22;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  
  auVar19._4_12_ = in_register_00001244;
  auVar19._0_4_ = param_2;
  auVar18._4_12_ = in_register_00001244;
  auVar18._0_4_ = param_2;
  auVar19 = vshufps_avx(auVar19,auVar18,0);
  auVar20._4_12_ = in_register_00001204;
  auVar20._0_4_ = in_XMM0_Da;
  auVar17._4_12_ = in_register_00001204;
  auVar17._0_4_ = in_XMM0_Da;
  auVar20 = vshufps_avx(auVar20,auVar17,0);
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(param_3 + -6 + in_R10 * 2);
    auVar17 = vpmovzxwd_avx(auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(param_3 + 6 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar3);
    auVar17 = vpaddd_avx(auVar17,auVar18);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(param_3 + 2 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(param_3 + 0xe + in_R10 * 2);
    auVar2 = vpmovzxwd_avx(auVar5);
    auVar18 = vpaddd_avx(auVar18,auVar2);
    auVar31._16_16_ = auVar18;
    auVar31._0_16_ = auVar17;
    auVar31 = vcvtdq2ps_avx(auVar31);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(param_3 + in_R10 * 2);
    auVar17 = vpmovzxwd_avx(auVar6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(param_3 + 8 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar7);
    fVar23 = auVar19._0_4_;
    fVar24 = auVar19._4_4_;
    fVar25 = auVar19._8_4_;
    fVar26 = auVar19._12_4_;
    auVar32._16_16_ = auVar18;
    auVar32._0_16_ = auVar17;
    auVar32 = vcvtdq2ps_avx(auVar32);
    fVar27 = auVar20._0_4_;
    fVar28 = auVar20._4_4_;
    fVar29 = auVar20._8_4_;
    fVar30 = auVar20._12_4_;
    pfVar1 = (float *)(param_4 + in_R10 * 4);
    *pfVar1 = fVar23 * auVar31._0_4_ + fVar27 * auVar32._0_4_;
    pfVar1[1] = fVar24 * auVar31._4_4_ + fVar28 * auVar32._4_4_;
    pfVar1[2] = fVar25 * auVar31._8_4_ + fVar29 * auVar32._8_4_;
    pfVar1[3] = fVar26 * auVar31._12_4_ + fVar30 * auVar32._12_4_;
    pfVar1[4] = fVar23 * auVar31._16_4_ + fVar27 * auVar32._16_4_;
    pfVar1[5] = fVar24 * auVar31._20_4_ + fVar28 * auVar32._20_4_;
    pfVar1[6] = fVar25 * auVar31._24_4_ + fVar29 * auVar32._24_4_;
    pfVar1[7] = auVar31._28_4_ + auVar18._12_4_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(param_3 + 10 + in_R10 * 2);
    auVar17 = vpmovzxwd_avx(auVar8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)(param_3 + 0x16 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar9);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_3 + 0x12 + in_R10 * 2);
    auVar2 = vpmovzxwd_avx(auVar10);
    auVar17 = vpaddd_avx(auVar17,auVar18);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_3 + 0x1e + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar11);
    auVar18 = vpaddd_avx(auVar2,auVar18);
    auVar33._16_16_ = auVar18;
    auVar33._0_16_ = auVar17;
    auVar31 = vcvtdq2ps_avx(auVar33);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_3 + 0x10 + in_R10 * 2);
    auVar17 = vpmovzxwd_avx(auVar12);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_3 + 0x18 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar13);
    auVar34._16_16_ = auVar18;
    auVar34._0_16_ = auVar17;
    auVar32 = vcvtdq2ps_avx(auVar34);
    pfVar1 = (float *)(param_4 + 0x20 + in_R10 * 4);
    *pfVar1 = fVar23 * auVar31._0_4_ + fVar27 * auVar32._0_4_;
    pfVar1[1] = fVar24 * auVar31._4_4_ + fVar28 * auVar32._4_4_;
    pfVar1[2] = fVar25 * auVar31._8_4_ + fVar29 * auVar32._8_4_;
    pfVar1[3] = fVar26 * auVar31._12_4_ + fVar30 * auVar32._12_4_;
    pfVar1[4] = fVar23 * auVar31._16_4_ + fVar27 * auVar32._16_4_;
    pfVar1[5] = fVar24 * auVar31._20_4_ + fVar28 * auVar32._20_4_;
    pfVar1[6] = fVar25 * auVar31._24_4_ + fVar29 * auVar32._24_4_;
    pfVar1[7] = auVar31._28_4_ + auVar18._12_4_;
    in_R10 = in_R10 + 0x10;
  } while (in_R10 < in_RDX);
  if (in_RDX + 1 <= param_1) {
    param_1 = param_1 - in_RDX;
    if ((longlong)param_1 < 4) {
      FUN_140809544();
      return;
    }
    uVar22 = 0;
    uVar21 = param_1 & 0xfffffffffffffffc;
    do {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulonglong *)(param_3 + in_RDX * 2 + 6 + uVar22 * 2);
      auVar19 = vpmovzxwd_avx(auVar14);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *(ulonglong *)(param_3 + -6 + (uVar22 + in_RDX) * 2);
      auVar20 = vpmovzxwd_avx(auVar15);
      auVar19 = vpaddd_avx(auVar20,auVar19);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulonglong *)(param_3 + (uVar22 + in_RDX) * 2);
      auVar20 = vpmovzxwd_avx(auVar16);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar20 = vcvtdq2ps_avx(auVar20);
      pfVar1 = (float *)(param_4 + in_RDX * 4 + uVar22 * 4);
      *pfVar1 = fVar23 * auVar19._0_4_ + fVar27 * auVar20._0_4_;
      pfVar1[1] = fVar24 * auVar19._4_4_ + fVar28 * auVar20._4_4_;
      pfVar1[2] = fVar25 * auVar19._8_4_ + fVar29 * auVar20._8_4_;
      pfVar1[3] = fVar26 * auVar19._12_4_ + fVar30 * auVar20._12_4_;
      uVar22 = uVar22 + 4;
    } while (uVar22 < uVar21);
    if (uVar21 < param_1) {
      param_3 = param_3 + in_RDX * 2;
      do {
        *(float *)(param_4 + in_RDX * 4 + uVar21 * 4) =
             param_2 * (float)((uint)*(ushort *)(param_3 + -6 + uVar21 * 2) +
                              (uint)*(ushort *)(param_3 + 6 + uVar21 * 2)) +
             in_XMM0_Da * (float)*(ushort *)(param_3 + uVar21 * 2);
        uVar21 = uVar21 + 1;
      } while (uVar21 < param_1);
    }
  }
  return;
}

