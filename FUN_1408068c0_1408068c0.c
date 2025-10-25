
void FUN_1408068c0(longlong param_1,float param_2,ulonglong param_3,ulonglong param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong in_RDX;
  longlong in_R10;
  uint *puVar12;
  ulonglong uVar13;
  float in_XMM0_Da;
  undefined1 in_register_00001204 [12];
  undefined1 in_register_00001244 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  
  auVar9._4_12_ = in_register_00001244;
  auVar9._0_4_ = param_2;
  auVar8._4_12_ = in_register_00001244;
  auVar8._0_4_ = param_2;
  auVar9 = vshufps_avx(auVar9,auVar8,0);
  auVar10._4_12_ = in_register_00001204;
  auVar10._0_4_ = in_XMM0_Da;
  auVar27._4_12_ = in_register_00001204;
  auVar27._0_4_ = in_XMM0_Da;
  auVar10 = vshufps_avx(auVar10,auVar27,0);
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)((in_RDX - 3) + param_1);
    auVar27 = vpmovzxbw_avx(auVar2);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(in_RDX + 3 + param_1);
    auVar8 = vpmovzxbw_avx(auVar28);
    auVar27 = vpaddw_avx(auVar27,auVar8);
    auVar2 = vpmovzxwd_avx(auVar27);
    auVar28 = vpsrldq_avx(auVar27,8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(in_RDX + 5 + param_1);
    auVar27 = vpmovzxbw_avx(auVar3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(in_RDX + 0xb + param_1);
    auVar8 = vpmovzxbw_avx(auVar4);
    auVar28 = vpmovzxwd_avx(auVar28);
    auVar27 = vpaddw_avx(auVar27,auVar8);
    auVar23._16_16_ = auVar28;
    auVar23._0_16_ = auVar2;
    auVar8 = vpmovzxwd_avx(auVar27);
    auVar27 = vpsrldq_avx(auVar27,8);
    auVar23 = vcvtdq2ps_avx(auVar23);
    auVar27 = vpmovzxwd_avx(auVar27);
    fVar14 = auVar9._0_4_;
    fVar15 = auVar9._4_4_;
    fVar16 = auVar9._8_4_;
    fVar17 = auVar9._12_4_;
    auVar24._16_16_ = auVar27;
    auVar24._0_16_ = auVar8;
    auVar24 = vcvtdq2ps_avx(auVar24);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(in_RDX + param_1);
    auVar27 = vpmovzxbw_avx(auVar5);
    auVar8 = vpmovzxwd_avx(auVar27);
    auVar27 = vpsrldq_avx(auVar27,8);
    auVar2 = vpmovzxwd_avx(auVar27);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(in_RDX + 8 + param_1);
    auVar27 = vpmovzxbw_avx(auVar6);
    auVar25._16_16_ = auVar2;
    auVar25._0_16_ = auVar8;
    auVar25 = vcvtdq2ps_avx(auVar25);
    fVar18 = auVar10._0_4_;
    fVar19 = auVar10._4_4_;
    fVar20 = auVar10._8_4_;
    fVar21 = auVar10._12_4_;
    auVar22._0_4_ = fVar14 * auVar23._0_4_ + fVar18 * auVar25._0_4_;
    auVar22._4_4_ = fVar15 * auVar23._4_4_ + fVar19 * auVar25._4_4_;
    auVar22._8_4_ = fVar16 * auVar23._8_4_ + fVar20 * auVar25._8_4_;
    auVar22._12_4_ = fVar17 * auVar23._12_4_ + fVar21 * auVar25._12_4_;
    auVar22._16_4_ = fVar14 * auVar23._16_4_ + fVar18 * auVar25._16_4_;
    auVar22._20_4_ = fVar15 * auVar23._20_4_ + fVar19 * auVar25._20_4_;
    auVar22._24_4_ = fVar16 * auVar23._24_4_ + fVar20 * auVar25._24_4_;
    auVar22._28_4_ = 0;
    *(undefined1 (*) [32])(in_R10 + in_RDX * 4) = auVar22;
    auVar8 = vpmovzxwd_avx(auVar27);
    auVar27 = vpsrldq_avx(auVar27,8);
    auVar27 = vpmovzxwd_avx(auVar27);
    auVar26._16_16_ = auVar27;
    auVar26._0_16_ = auVar8;
    auVar23 = vcvtdq2ps_avx(auVar26);
    auVar29._0_4_ = fVar14 * auVar24._0_4_ + fVar18 * auVar23._0_4_;
    auVar29._4_4_ = fVar15 * auVar24._4_4_ + fVar19 * auVar23._4_4_;
    auVar29._8_4_ = fVar16 * auVar24._8_4_ + fVar20 * auVar23._8_4_;
    auVar29._12_4_ = fVar17 * auVar24._12_4_ + fVar21 * auVar23._12_4_;
    auVar29._16_4_ = fVar14 * auVar24._16_4_ + fVar18 * auVar23._16_4_;
    auVar29._20_4_ = fVar15 * auVar24._20_4_ + fVar19 * auVar23._20_4_;
    auVar29._24_4_ = fVar16 * auVar24._24_4_ + fVar20 * auVar23._24_4_;
    auVar29._28_4_ = 0;
    *(undefined1 (*) [32])(in_R10 + 0x20 + in_RDX * 4) = auVar29;
    in_RDX = in_RDX + 0x10;
  } while (in_RDX < param_3);
  if (param_3 + 1 <= param_4) {
    param_4 = param_4 - param_3;
    if ((longlong)param_4 < 4) {
      uVar11 = 0;
    }
    else {
      uVar13 = 0;
      uVar11 = param_4 & 0xfffffffffffffffc;
      puVar12 = (uint *)(param_3 + param_1);
      do {
        auVar9 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar12 + -3)));
        auVar10 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar12 + 3)));
        auVar9 = vpaddw_avx(auVar9,auVar10);
        auVar9 = vpmovzxwd_avx(auVar9);
        auVar9 = vcvtdq2ps_avx(auVar9);
        uVar7 = *puVar12;
        puVar12 = puVar12 + 1;
        auVar10 = vpmovzxbw_avx(ZEXT416(uVar7));
        auVar10 = vpmovzxwd_avx(auVar10);
        auVar10 = vcvtdq2ps_avx(auVar10);
        pfVar1 = (float *)(in_R10 + param_3 * 4 + uVar13 * 4);
        *pfVar1 = fVar14 * auVar9._0_4_ + fVar18 * auVar10._0_4_;
        pfVar1[1] = fVar15 * auVar9._4_4_ + fVar19 * auVar10._4_4_;
        pfVar1[2] = fVar16 * auVar9._8_4_ + fVar20 * auVar10._8_4_;
        pfVar1[3] = fVar17 * auVar9._12_4_ + fVar21 * auVar10._12_4_;
        uVar13 = uVar13 + 4;
      } while (uVar13 < uVar11);
    }
    if (uVar11 < param_4) {
      param_1 = param_1 + param_3;
      do {
        *(float *)(in_R10 + param_3 * 4 + uVar11 * 4) =
             param_2 * (float)((uint)*(byte *)((uVar11 - 3) + param_1) +
                              (uint)*(byte *)(uVar11 + 3 + param_1)) +
             in_XMM0_Da * (float)*(byte *)(uVar11 + param_1);
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_4);
    }
  }
  return;
}

