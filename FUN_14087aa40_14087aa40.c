
void FUN_14087aa40(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_14087ae42:
    uVar18 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14087ae42;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar19 + 0x10)) goto LAB_14087ae42;
    uVar17 = 0;
    uVar18 = param_3 - (param_3 - uVar19 & 0xf);
    if (uVar19 != 0) {
      do {
        *(float *)(param_2 + uVar17 * 4) =
             fVar2 * (float)((uint)*(byte *)((uVar17 - 2) + param_1) +
                            (uint)*(byte *)(uVar17 + 2 + param_1)) +
             fVar3 * (float)((uint)*(byte *)((uVar17 - 1) + param_1) +
                            (uint)*(byte *)(uVar17 + 1 + param_1)) +
             fVar4 * (float)*(byte *)(uVar17 + param_1);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar19);
    }
    auVar14 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
    auVar15 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
    auVar16 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
    do {
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulonglong *)((uVar19 - 2) + param_1);
      auVar31 = vpmovzxbw_avx(auVar31);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(uVar19 + 2 + param_1);
      auVar5 = vpmovzxbw_avx(auVar5);
      auVar31 = vpaddw_avx(auVar31,auVar5);
      auVar12 = vpmovzxwd_avx(auVar31);
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar13 = vpmovzxwd_avx(auVar31);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *(ulonglong *)(uVar19 + 6 + param_1);
      auVar31 = vpmovzxbw_avx(auVar29);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(uVar19 + 10 + param_1);
      auVar5 = vpmovzxbw_avx(auVar6);
      auVar31 = vpaddw_avx(auVar31,auVar5);
      auVar5 = vpmovzxwd_avx(auVar31);
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar31 = vpmovzxwd_avx(auVar31);
      auVar30._16_16_ = auVar13;
      auVar30._0_16_ = auVar12;
      auVar30 = vcvtdq2ps_avx(auVar30);
      fVar21 = auVar14._0_4_;
      fVar22 = auVar14._4_4_;
      fVar23 = auVar14._8_4_;
      fVar24 = auVar14._12_4_;
      auVar32._16_16_ = auVar31;
      auVar32._0_16_ = auVar5;
      auVar32 = vcvtdq2ps_avx(auVar32);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)((uVar19 - 1) + param_1);
      auVar31 = vpmovzxbw_avx(auVar12);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(uVar19 + 1 + param_1);
      auVar5 = vpmovzxbw_avx(auVar7);
      auVar31 = vpaddw_avx(auVar31,auVar5);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(uVar19 + 7 + param_1);
      auVar5 = vpmovzxbw_avx(auVar8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(uVar19 + 9 + param_1);
      auVar29 = vpmovzxbw_avx(auVar9);
      auVar5 = vpaddw_avx(auVar5,auVar29);
      auVar29 = vpmovzxwd_avx(auVar31);
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar31 = vpmovzxwd_avx(auVar31);
      auVar34._16_16_ = auVar31;
      auVar34._0_16_ = auVar29;
      auVar34 = vcvtdq2ps_avx(auVar34);
      fVar25 = auVar15._0_4_;
      fVar26 = auVar15._4_4_;
      fVar27 = auVar15._8_4_;
      fVar28 = auVar15._12_4_;
      auVar29 = vpsrldq_avx(auVar5,8);
      auVar31 = vpmovzxwd_avx(auVar5);
      auVar5 = vpmovzxwd_avx(auVar29);
      auVar33._16_16_ = auVar5;
      auVar33._0_16_ = auVar31;
      auVar33 = vcvtdq2ps_avx(auVar33);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(uVar19 + param_1);
      auVar31 = vpmovzxbw_avx(auVar10);
      auVar29 = vpmovzxwd_avx(auVar31);
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar6 = vpmovzxwd_avx(auVar31);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(uVar19 + 8 + param_1);
      auVar31 = vpmovzxbw_avx(auVar11);
      auVar36._16_16_ = auVar6;
      auVar36._0_16_ = auVar29;
      auVar35 = vcvtdq2ps_avx(auVar36);
      fVar37 = auVar16._0_4_;
      fVar38 = auVar16._4_4_;
      fVar39 = auVar16._8_4_;
      fVar40 = auVar16._12_4_;
      auVar29 = vpmovzxwd_avx(auVar31);
      auVar31 = vpsrldq_avx(auVar31,8);
      auVar31 = vpmovzxwd_avx(auVar31);
      pfVar1 = (float *)(param_2 + uVar19 * 4);
      *pfVar1 = fVar21 * auVar30._0_4_ + fVar25 * auVar34._0_4_ + fVar37 * auVar35._0_4_;
      pfVar1[1] = fVar22 * auVar30._4_4_ + fVar26 * auVar34._4_4_ + fVar38 * auVar35._4_4_;
      pfVar1[2] = fVar23 * auVar30._8_4_ + fVar27 * auVar34._8_4_ + fVar39 * auVar35._8_4_;
      pfVar1[3] = fVar24 * auVar30._12_4_ + fVar28 * auVar34._12_4_ + fVar40 * auVar35._12_4_;
      pfVar1[4] = fVar21 * auVar30._16_4_ + fVar25 * auVar34._16_4_ + fVar37 * auVar35._16_4_;
      pfVar1[5] = fVar22 * auVar30._20_4_ + fVar26 * auVar34._20_4_ + fVar38 * auVar35._20_4_;
      pfVar1[6] = fVar23 * auVar30._24_4_ + fVar27 * auVar34._24_4_ + fVar39 * auVar35._24_4_;
      pfVar1[7] = auVar13._12_4_ + 0.0 + auVar6._12_4_;
      auVar35._16_16_ = auVar31;
      auVar35._0_16_ = auVar29;
      auVar30 = vcvtdq2ps_avx(auVar35);
      pfVar1 = (float *)(param_2 + 0x20 + uVar19 * 4);
      *pfVar1 = fVar21 * auVar32._0_4_ + fVar25 * auVar33._0_4_ + fVar37 * auVar30._0_4_;
      pfVar1[1] = fVar22 * auVar32._4_4_ + fVar26 * auVar33._4_4_ + fVar38 * auVar30._4_4_;
      pfVar1[2] = fVar23 * auVar32._8_4_ + fVar27 * auVar33._8_4_ + fVar39 * auVar30._8_4_;
      pfVar1[3] = fVar24 * auVar32._12_4_ + fVar28 * auVar33._12_4_ + fVar40 * auVar30._12_4_;
      pfVar1[4] = fVar21 * auVar32._16_4_ + fVar25 * auVar33._16_4_ + fVar37 * auVar30._16_4_;
      pfVar1[5] = fVar22 * auVar32._20_4_ + fVar26 * auVar33._20_4_ + fVar38 * auVar30._20_4_;
      pfVar1[6] = fVar23 * auVar32._24_4_ + fVar27 * auVar33._24_4_ + fVar39 * auVar30._24_4_;
      pfVar1[7] = auVar5._12_4_ + 0.0 + 0.0;
      uVar19 = uVar19 + 0x10;
    } while (uVar19 < uVar18);
    if (param_3 < uVar18 + 1) {
      return;
    }
    param_3 = param_3 - uVar18;
    if (3 < (longlong)param_3) {
      uVar17 = 0;
      uVar19 = param_3 & 0xfffffffffffffffc;
      puVar20 = (uint *)(uVar18 + param_1);
      do {
        auVar14 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + -2)));
        auVar15 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + 2)));
        auVar14 = vpaddw_avx(auVar14,auVar15);
        auVar14 = vpmovzxwd_avx(auVar14);
        auVar14 = vcvtdq2ps_avx(auVar14);
        auVar15 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + -1)));
        auVar16 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar20 + 1)));
        auVar15 = vpaddw_avx(auVar15,auVar16);
        auVar15 = vpmovzxwd_avx(auVar15);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar16 = vpmovzxbw_avx(ZEXT416(*puVar20));
        puVar20 = puVar20 + 1;
        auVar16 = vpmovzxwd_avx(auVar16);
        auVar16 = vcvtdq2ps_avx(auVar16);
        pfVar1 = (float *)(param_2 + uVar18 * 4 + uVar17 * 4);
        *pfVar1 = fVar21 * auVar14._0_4_ + fVar25 * auVar15._0_4_ + fVar37 * auVar16._0_4_;
        pfVar1[1] = fVar22 * auVar14._4_4_ + fVar26 * auVar15._4_4_ + fVar38 * auVar16._4_4_;
        pfVar1[2] = fVar23 * auVar14._8_4_ + fVar27 * auVar15._8_4_ + fVar39 * auVar16._8_4_;
        pfVar1[3] = fVar24 * auVar14._12_4_ + fVar28 * auVar15._12_4_ + fVar40 * auVar16._12_4_;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar19);
      goto LAB_14087ada6;
    }
  }
  uVar19 = 0;
LAB_14087ada6:
  if (uVar19 < param_3) {
    param_1 = param_1 + uVar18;
    do {
      *(float *)(param_2 + uVar18 * 4 + uVar19 * 4) =
           fVar2 * (float)((uint)*(byte *)((uVar19 - 2) + param_1) +
                          (uint)*(byte *)(uVar19 + 2 + param_1)) +
           fVar3 * (float)((uint)*(byte *)((uVar19 - 1) + param_1) +
                          (uint)*(byte *)(uVar19 + 1 + param_1)) +
           fVar4 * (float)*(byte *)(uVar19 + param_1);
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_3);
  }
  return;
}

