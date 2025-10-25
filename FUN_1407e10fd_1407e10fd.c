
void FUN_1407e10fd(longlong param_1,float param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  longlong lVar2;
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
  undefined1 auVar21 [16];
  ulonglong uVar22;
  ulonglong in_RDX;
  ulonglong in_R10;
  ulonglong uVar23;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  
  auVar20._4_12_ = in_register_00001244;
  auVar20._0_4_ = param_2;
  auVar19._4_12_ = in_register_00001244;
  auVar19._0_4_ = param_2;
  auVar20 = vshufps_avx(auVar20,auVar19,0);
  auVar21._4_12_ = in_register_00001204;
  auVar21._0_4_ = in_XMM0_Da;
  auVar18._4_12_ = in_register_00001204;
  auVar18._0_4_ = in_XMM0_Da;
  auVar21 = vshufps_avx(auVar21,auVar18,0);
  do {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(param_1 + -2 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(param_1 + 2 + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar4);
    auVar18 = vpaddd_avx(auVar18,auVar19);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(param_1 + 6 + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(param_1 + 10 + in_R10 * 2);
    auVar3 = vpmovzxwd_avx(auVar6);
    auVar19 = vpaddd_avx(auVar19,auVar3);
    auVar32._16_16_ = auVar19;
    auVar32._0_16_ = auVar18;
    auVar32 = vcvtdq2ps_avx(auVar32);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(param_1 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar7);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(param_1 + 8 + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar8);
    fVar24 = auVar20._0_4_;
    fVar25 = auVar20._4_4_;
    fVar26 = auVar20._8_4_;
    fVar27 = auVar20._12_4_;
    auVar33._16_16_ = auVar19;
    auVar33._0_16_ = auVar18;
    auVar33 = vcvtdq2ps_avx(auVar33);
    fVar28 = auVar21._0_4_;
    fVar29 = auVar21._4_4_;
    fVar30 = auVar21._8_4_;
    fVar31 = auVar21._12_4_;
    pfVar1 = (float *)(param_3 + in_R10 * 4);
    *pfVar1 = fVar24 * auVar32._0_4_ + fVar28 * auVar33._0_4_;
    pfVar1[1] = fVar25 * auVar32._4_4_ + fVar29 * auVar33._4_4_;
    pfVar1[2] = fVar26 * auVar32._8_4_ + fVar30 * auVar33._8_4_;
    pfVar1[3] = fVar27 * auVar32._12_4_ + fVar31 * auVar33._12_4_;
    pfVar1[4] = fVar24 * auVar32._16_4_ + fVar28 * auVar33._16_4_;
    pfVar1[5] = fVar25 * auVar32._20_4_ + fVar29 * auVar33._20_4_;
    pfVar1[6] = fVar26 * auVar32._24_4_ + fVar30 * auVar33._24_4_;
    pfVar1[7] = auVar32._28_4_ + auVar19._12_4_;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)(param_1 + 0xe + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar9);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_1 + 0x12 + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_1 + 0x16 + in_R10 * 2);
    auVar3 = vpmovzxwd_avx(auVar11);
    auVar18 = vpaddd_avx(auVar18,auVar19);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_1 + 0x1a + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar12);
    auVar19 = vpaddd_avx(auVar3,auVar19);
    auVar34._16_16_ = auVar19;
    auVar34._0_16_ = auVar18;
    auVar32 = vcvtdq2ps_avx(auVar34);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_1 + 0x10 + in_R10 * 2);
    auVar18 = vpmovzxwd_avx(auVar13);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_1 + 0x18 + in_R10 * 2);
    auVar19 = vpmovzxwd_avx(auVar14);
    auVar35._16_16_ = auVar19;
    auVar35._0_16_ = auVar18;
    auVar33 = vcvtdq2ps_avx(auVar35);
    pfVar1 = (float *)(param_3 + 0x20 + in_R10 * 4);
    *pfVar1 = fVar24 * auVar32._0_4_ + fVar28 * auVar33._0_4_;
    pfVar1[1] = fVar25 * auVar32._4_4_ + fVar29 * auVar33._4_4_;
    pfVar1[2] = fVar26 * auVar32._8_4_ + fVar30 * auVar33._8_4_;
    pfVar1[3] = fVar27 * auVar32._12_4_ + fVar31 * auVar33._12_4_;
    pfVar1[4] = fVar24 * auVar32._16_4_ + fVar28 * auVar33._16_4_;
    pfVar1[5] = fVar25 * auVar32._20_4_ + fVar29 * auVar33._20_4_;
    pfVar1[6] = fVar26 * auVar32._24_4_ + fVar30 * auVar33._24_4_;
    pfVar1[7] = auVar32._28_4_ + auVar19._12_4_;
    in_R10 = in_R10 + 0x10;
  } while (in_R10 < in_RDX);
  if (in_RDX + 1 <= param_4) {
    param_4 = param_4 - in_RDX;
    if ((longlong)param_4 < 4) {
      uVar22 = 0;
    }
    else {
      uVar23 = 0;
      uVar22 = param_4 & 0xfffffffffffffffc;
      do {
        lVar2 = uVar23 + in_RDX;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + -2 + lVar2 * 2);
        auVar20 = vpmovzxwd_avx(auVar15);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(param_1 + 2 + lVar2 * 2);
        auVar21 = vpmovzxwd_avx(auVar16);
        auVar20 = vpaddd_avx(auVar20,auVar21);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)(param_1 + lVar2 * 2);
        auVar21 = vpmovzxwd_avx(auVar17);
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar21 = vcvtdq2ps_avx(auVar21);
        pfVar1 = (float *)(param_3 + in_RDX * 4 + uVar23 * 4);
        *pfVar1 = fVar24 * auVar20._0_4_ + fVar28 * auVar21._0_4_;
        pfVar1[1] = fVar25 * auVar20._4_4_ + fVar29 * auVar21._4_4_;
        pfVar1[2] = fVar26 * auVar20._8_4_ + fVar30 * auVar21._8_4_;
        pfVar1[3] = fVar27 * auVar20._12_4_ + fVar31 * auVar21._12_4_;
        uVar23 = uVar23 + 4;
      } while (uVar23 < uVar22);
    }
    if (uVar22 < param_4) {
      param_1 = param_1 + in_RDX * 2;
      do {
        *(float *)(param_3 + in_RDX * 4 + uVar22 * 4) =
             param_2 * (float)((uint)*(ushort *)(param_1 + -2 + uVar22 * 2) +
                              (uint)*(ushort *)(param_1 + 2 + uVar22 * 2)) +
             in_XMM0_Da * (float)*(ushort *)(param_1 + uVar22 * 2);
        uVar22 = uVar22 + 1;
      } while (uVar22 < param_4);
    }
  }
  return;
}

