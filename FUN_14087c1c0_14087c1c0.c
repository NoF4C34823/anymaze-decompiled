
void FUN_14087c1c0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  ulonglong uVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  uVar20 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar20 < 1) {
    return;
  }
  if ((longlong)uVar20 < 0x10) {
LAB_14087c5bf:
    uVar18 = 0;
    if (uVar20 == 0) {
      return;
    }
  }
  else {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14087c5bf;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)uVar20 < (longlong)(uVar19 + 0x10)) goto LAB_14087c5bf;
    uVar17 = 0;
    uVar18 = uVar20 - (uVar20 - uVar19 & 0xf);
    if (uVar19 != 0) {
      do {
        *(float *)(param_2 + uVar17 * 4) =
             fVar2 * (float)((uint)*(byte *)((uVar17 - 6) + param_1) +
                            (uint)*(byte *)(uVar17 + 6 + param_1)) +
             fVar3 * (float)((uint)*(byte *)((uVar17 - 3) + param_1) +
                            (uint)*(byte *)(uVar17 + 3 + param_1)) +
             fVar4 * (float)*(byte *)(uVar17 + param_1);
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar19);
    }
    auVar14 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
    auVar15 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
    auVar16 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
    do {
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)((uVar19 - 6) + param_1);
      auVar32 = vpmovzxbw_avx(auVar32);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(uVar19 + 6 + param_1);
      auVar5 = vpmovzxbw_avx(auVar5);
      auVar32 = vpaddw_avx(auVar32,auVar5);
      auVar12 = vpmovzxwd_avx(auVar32);
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar13 = vpmovzxwd_avx(auVar32);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *(ulonglong *)(uVar19 + 2 + param_1);
      auVar32 = vpmovzxbw_avx(auVar30);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(uVar19 + 0xe + param_1);
      auVar5 = vpmovzxbw_avx(auVar6);
      auVar32 = vpaddw_avx(auVar32,auVar5);
      auVar5 = vpmovzxwd_avx(auVar32);
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar32 = vpmovzxwd_avx(auVar32);
      auVar31._16_16_ = auVar13;
      auVar31._0_16_ = auVar12;
      auVar31 = vcvtdq2ps_avx(auVar31);
      fVar22 = auVar14._0_4_;
      fVar23 = auVar14._4_4_;
      fVar24 = auVar14._8_4_;
      fVar25 = auVar14._12_4_;
      auVar33._16_16_ = auVar32;
      auVar33._0_16_ = auVar5;
      auVar33 = vcvtdq2ps_avx(auVar33);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)((uVar19 - 3) + param_1);
      auVar32 = vpmovzxbw_avx(auVar12);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulonglong *)(uVar19 + 3 + param_1);
      auVar5 = vpmovzxbw_avx(auVar7);
      auVar32 = vpaddw_avx(auVar32,auVar5);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(uVar19 + 5 + param_1);
      auVar5 = vpmovzxbw_avx(auVar8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *(ulonglong *)(uVar19 + 0xb + param_1);
      auVar30 = vpmovzxbw_avx(auVar9);
      auVar5 = vpaddw_avx(auVar5,auVar30);
      auVar30 = vpmovzxwd_avx(auVar32);
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar32 = vpmovzxwd_avx(auVar32);
      auVar35._16_16_ = auVar32;
      auVar35._0_16_ = auVar30;
      auVar35 = vcvtdq2ps_avx(auVar35);
      fVar26 = auVar15._0_4_;
      fVar27 = auVar15._4_4_;
      fVar28 = auVar15._8_4_;
      fVar29 = auVar15._12_4_;
      auVar30 = vpsrldq_avx(auVar5,8);
      auVar32 = vpmovzxwd_avx(auVar5);
      auVar5 = vpmovzxwd_avx(auVar30);
      auVar34._16_16_ = auVar5;
      auVar34._0_16_ = auVar32;
      auVar34 = vcvtdq2ps_avx(auVar34);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulonglong *)(uVar19 + param_1);
      auVar32 = vpmovzxbw_avx(auVar10);
      auVar30 = vpmovzxwd_avx(auVar32);
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar6 = vpmovzxwd_avx(auVar32);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(uVar19 + 8 + param_1);
      auVar32 = vpmovzxbw_avx(auVar11);
      auVar37._16_16_ = auVar6;
      auVar37._0_16_ = auVar30;
      auVar36 = vcvtdq2ps_avx(auVar37);
      fVar38 = auVar16._0_4_;
      fVar39 = auVar16._4_4_;
      fVar40 = auVar16._8_4_;
      fVar41 = auVar16._12_4_;
      auVar30 = vpmovzxwd_avx(auVar32);
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar32 = vpmovzxwd_avx(auVar32);
      pfVar1 = (float *)(param_2 + uVar19 * 4);
      *pfVar1 = fVar22 * auVar31._0_4_ + fVar26 * auVar35._0_4_ + fVar38 * auVar36._0_4_;
      pfVar1[1] = fVar23 * auVar31._4_4_ + fVar27 * auVar35._4_4_ + fVar39 * auVar36._4_4_;
      pfVar1[2] = fVar24 * auVar31._8_4_ + fVar28 * auVar35._8_4_ + fVar40 * auVar36._8_4_;
      pfVar1[3] = fVar25 * auVar31._12_4_ + fVar29 * auVar35._12_4_ + fVar41 * auVar36._12_4_;
      pfVar1[4] = fVar22 * auVar31._16_4_ + fVar26 * auVar35._16_4_ + fVar38 * auVar36._16_4_;
      pfVar1[5] = fVar23 * auVar31._20_4_ + fVar27 * auVar35._20_4_ + fVar39 * auVar36._20_4_;
      pfVar1[6] = fVar24 * auVar31._24_4_ + fVar28 * auVar35._24_4_ + fVar40 * auVar36._24_4_;
      pfVar1[7] = auVar13._12_4_ + 0.0 + auVar6._12_4_;
      auVar36._16_16_ = auVar32;
      auVar36._0_16_ = auVar30;
      auVar31 = vcvtdq2ps_avx(auVar36);
      pfVar1 = (float *)(param_2 + 0x20 + uVar19 * 4);
      *pfVar1 = fVar22 * auVar33._0_4_ + fVar26 * auVar34._0_4_ + fVar38 * auVar31._0_4_;
      pfVar1[1] = fVar23 * auVar33._4_4_ + fVar27 * auVar34._4_4_ + fVar39 * auVar31._4_4_;
      pfVar1[2] = fVar24 * auVar33._8_4_ + fVar28 * auVar34._8_4_ + fVar40 * auVar31._8_4_;
      pfVar1[3] = fVar25 * auVar33._12_4_ + fVar29 * auVar34._12_4_ + fVar41 * auVar31._12_4_;
      pfVar1[4] = fVar22 * auVar33._16_4_ + fVar26 * auVar34._16_4_ + fVar38 * auVar31._16_4_;
      pfVar1[5] = fVar23 * auVar33._20_4_ + fVar27 * auVar34._20_4_ + fVar39 * auVar31._20_4_;
      pfVar1[6] = fVar24 * auVar33._24_4_ + fVar28 * auVar34._24_4_ + fVar40 * auVar31._24_4_;
      pfVar1[7] = auVar5._12_4_ + 0.0 + 0.0;
      uVar19 = uVar19 + 0x10;
    } while (uVar19 < uVar18);
    if (uVar20 < uVar18 + 1) {
      return;
    }
    uVar20 = uVar20 - uVar18;
    if (3 < (longlong)uVar20) {
      uVar17 = 0;
      uVar19 = uVar20 & 0xfffffffffffffffc;
      puVar21 = (uint *)(uVar18 + param_1);
      do {
        auVar14 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar21 + -6)));
        auVar15 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar21 + 6)));
        auVar14 = vpaddw_avx(auVar14,auVar15);
        auVar14 = vpmovzxwd_avx(auVar14);
        auVar14 = vcvtdq2ps_avx(auVar14);
        auVar15 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar21 + -3)));
        auVar16 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar21 + 3)));
        auVar15 = vpaddw_avx(auVar15,auVar16);
        auVar15 = vpmovzxwd_avx(auVar15);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar16 = vpmovzxbw_avx(ZEXT416(*puVar21));
        puVar21 = puVar21 + 1;
        auVar16 = vpmovzxwd_avx(auVar16);
        auVar16 = vcvtdq2ps_avx(auVar16);
        pfVar1 = (float *)(param_2 + uVar18 * 4 + uVar17 * 4);
        *pfVar1 = fVar22 * auVar14._0_4_ + fVar26 * auVar15._0_4_ + fVar38 * auVar16._0_4_;
        pfVar1[1] = fVar23 * auVar14._4_4_ + fVar27 * auVar15._4_4_ + fVar39 * auVar16._4_4_;
        pfVar1[2] = fVar24 * auVar14._8_4_ + fVar28 * auVar15._8_4_ + fVar40 * auVar16._8_4_;
        pfVar1[3] = fVar25 * auVar14._12_4_ + fVar29 * auVar15._12_4_ + fVar41 * auVar16._12_4_;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar19);
      goto LAB_14087c526;
    }
  }
  uVar19 = 0;
LAB_14087c526:
  if (uVar19 < uVar20) {
    param_1 = param_1 + uVar18;
    do {
      *(float *)(param_2 + uVar18 * 4 + uVar19 * 4) =
           fVar2 * (float)((uint)*(byte *)((uVar19 - 6) + param_1) +
                          (uint)*(byte *)(uVar19 + 6 + param_1)) +
           fVar3 * (float)((uint)*(byte *)((uVar19 - 3) + param_1) +
                          (uint)*(byte *)(uVar19 + 3 + param_1)) +
           fVar4 * (float)*(byte *)(uVar19 + param_1);
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar20);
  }
  return;
}

