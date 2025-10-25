
void FUN_14087a740(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_14087aa29:
    uVar13 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar12 = param_2 & 0x1f;
    if (uVar12 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14087aa29;
      uVar12 = 0x20 - uVar12 >> 2;
    }
    if ((longlong)param_3 < (longlong)(uVar12 + 0x10)) goto LAB_14087aa29;
    uVar11 = 0;
    uVar13 = param_3 - (param_3 - uVar12 & 0xf);
    if (uVar12 != 0) {
      do {
        *(float *)(param_2 + uVar11 * 4) =
             fVar2 * (float)((uint)*(byte *)((uVar11 - 1) + param_1) +
                            (uint)*(byte *)(uVar11 + 1 + param_1)) +
             fVar3 * (float)*(byte *)(uVar11 + param_1);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    auVar9 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
    auVar10 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
    do {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)((uVar12 - 1) + param_1);
      auVar28 = vpmovzxbw_avx(auVar28);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(uVar12 + 1 + param_1);
      auVar4 = vpmovzxbw_avx(auVar4);
      auVar28 = vpaddw_avx(auVar28,auVar4);
      auVar8 = vpmovzxwd_avx(auVar28);
      auVar29 = vpsrldq_avx(auVar28,8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulonglong *)(uVar12 + 7 + param_1);
      auVar28 = vpmovzxbw_avx(auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(uVar12 + 9 + param_1);
      auVar4 = vpmovzxbw_avx(auVar6);
      auVar5 = vpmovzxwd_avx(auVar29);
      auVar28 = vpaddw_avx(auVar28,auVar4);
      auVar24._16_16_ = auVar5;
      auVar24._0_16_ = auVar8;
      auVar4 = vpmovzxwd_avx(auVar28);
      auVar28 = vpsrldq_avx(auVar28,8);
      auVar24 = vcvtdq2ps_avx(auVar24);
      auVar28 = vpmovzxwd_avx(auVar28);
      fVar15 = auVar9._0_4_;
      fVar16 = auVar9._4_4_;
      fVar17 = auVar9._8_4_;
      fVar18 = auVar9._12_4_;
      auVar25._16_16_ = auVar28;
      auVar25._0_16_ = auVar4;
      auVar25 = vcvtdq2ps_avx(auVar25);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(uVar12 + param_1);
      auVar28 = vpmovzxbw_avx(auVar8);
      auVar4 = vpmovzxwd_avx(auVar28);
      auVar28 = vpsrldq_avx(auVar28,8);
      auVar5 = vpmovzxwd_avx(auVar28);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *(ulonglong *)(uVar12 + 8 + param_1);
      auVar28 = vpmovzxbw_avx(auVar29);
      auVar26._16_16_ = auVar5;
      auVar26._0_16_ = auVar4;
      auVar26 = vcvtdq2ps_avx(auVar26);
      fVar19 = auVar10._0_4_;
      fVar20 = auVar10._4_4_;
      fVar21 = auVar10._8_4_;
      fVar22 = auVar10._12_4_;
      auVar23._0_4_ = fVar15 * auVar24._0_4_ + fVar19 * auVar26._0_4_;
      auVar23._4_4_ = fVar16 * auVar24._4_4_ + fVar20 * auVar26._4_4_;
      auVar23._8_4_ = fVar17 * auVar24._8_4_ + fVar21 * auVar26._8_4_;
      auVar23._12_4_ = fVar18 * auVar24._12_4_ + fVar22 * auVar26._12_4_;
      auVar23._16_4_ = fVar15 * auVar24._16_4_ + fVar19 * auVar26._16_4_;
      auVar23._20_4_ = fVar16 * auVar24._20_4_ + fVar20 * auVar26._20_4_;
      auVar23._24_4_ = fVar17 * auVar24._24_4_ + fVar21 * auVar26._24_4_;
      auVar23._28_4_ = 0;
      *(undefined1 (*) [32])(param_2 + uVar12 * 4) = auVar23;
      auVar4 = vpmovzxwd_avx(auVar28);
      auVar28 = vpsrldq_avx(auVar28,8);
      auVar28 = vpmovzxwd_avx(auVar28);
      auVar27._16_16_ = auVar28;
      auVar27._0_16_ = auVar4;
      auVar24 = vcvtdq2ps_avx(auVar27);
      auVar30._0_4_ = fVar15 * auVar25._0_4_ + fVar19 * auVar24._0_4_;
      auVar30._4_4_ = fVar16 * auVar25._4_4_ + fVar20 * auVar24._4_4_;
      auVar30._8_4_ = fVar17 * auVar25._8_4_ + fVar21 * auVar24._8_4_;
      auVar30._12_4_ = fVar18 * auVar25._12_4_ + fVar22 * auVar24._12_4_;
      auVar30._16_4_ = fVar15 * auVar25._16_4_ + fVar19 * auVar24._16_4_;
      auVar30._20_4_ = fVar16 * auVar25._20_4_ + fVar20 * auVar24._20_4_;
      auVar30._24_4_ = fVar17 * auVar25._24_4_ + fVar21 * auVar24._24_4_;
      auVar30._28_4_ = 0;
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 4) = auVar30;
      uVar12 = uVar12 + 0x10;
    } while (uVar12 < uVar13);
    if (param_3 < uVar13 + 1) {
      return;
    }
    param_3 = param_3 - uVar13;
    if (3 < (longlong)param_3) {
      uVar11 = 0;
      uVar12 = param_3 & 0xfffffffffffffffc;
      puVar14 = (uint *)(uVar13 + param_1);
      do {
        auVar9 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar14 + -1)));
        auVar10 = vpmovzxbw_avx(ZEXT416(*(uint *)((longlong)puVar14 + 1)));
        auVar9 = vpaddw_avx(auVar9,auVar10);
        auVar9 = vpmovzxwd_avx(auVar9);
        auVar9 = vcvtdq2ps_avx(auVar9);
        uVar7 = *puVar14;
        puVar14 = puVar14 + 1;
        auVar10 = vpmovzxbw_avx(ZEXT416(uVar7));
        auVar10 = vpmovzxwd_avx(auVar10);
        auVar10 = vcvtdq2ps_avx(auVar10);
        pfVar1 = (float *)(param_2 + uVar13 * 4 + uVar11 * 4);
        *pfVar1 = fVar15 * auVar9._0_4_ + fVar19 * auVar10._0_4_;
        pfVar1[1] = fVar16 * auVar9._4_4_ + fVar20 * auVar10._4_4_;
        pfVar1[2] = fVar17 * auVar9._8_4_ + fVar21 * auVar10._8_4_;
        pfVar1[3] = fVar18 * auVar9._12_4_ + fVar22 * auVar10._12_4_;
        uVar11 = uVar11 + 4;
      } while (uVar11 < uVar12);
      goto LAB_14087a9b5;
    }
  }
  uVar12 = 0;
LAB_14087a9b5:
  if (uVar12 < param_3) {
    param_1 = param_1 + uVar13;
    do {
      *(float *)(param_2 + uVar13 * 4 + uVar12 * 4) =
           fVar2 * (float)((uint)*(byte *)((uVar12 - 1) + param_1) +
                          (uint)*(byte *)(uVar12 + 1 + param_1)) +
           fVar3 * (float)*(byte *)(uVar12 + param_1);
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_3);
  }
  return;
}

