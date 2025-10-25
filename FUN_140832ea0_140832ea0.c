
void FUN_140832ea0(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
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
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
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
  
  uVar20 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  if ((longlong)uVar20 < 1) {
    return;
  }
  if (0xf < (longlong)uVar20) {
    uVar22 = param_2 & 0x1f;
    if (uVar22 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140833169;
      uVar22 = 0x20 - uVar22 >> 2;
    }
    if ((longlong)(uVar22 + 0x10) <= (longlong)uVar20) {
      uVar19 = 0;
      uVar21 = uVar20 - (uVar20 - uVar22 & 0xf);
      if (uVar22 != 0) {
        do {
          *(float *)(param_2 + uVar19 * 4) =
               fVar2 * (float)((int)*(short *)(param_1 + -6 + uVar19 * 2) +
                              (int)*(short *)(param_1 + 6 + uVar19 * 2)) +
               fVar3 * (float)(int)*(short *)(param_1 + uVar19 * 2);
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar22);
      }
      auVar17 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
      auVar18 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
      do {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *(ulonglong *)(param_1 + -6 + uVar22 * 2);
        auVar4 = vpmovsxwd_avx(auVar4);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + 6 + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar5);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + 2 + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + 0xe + uVar22 * 2);
        auVar6 = vpmovsxwd_avx(auVar7);
        auVar5 = vpaddd_avx(auVar5,auVar6);
        auVar31._16_16_ = auVar5;
        auVar31._0_16_ = auVar4;
        auVar31 = vcvtdq2ps_avx(auVar31);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + uVar22 * 2);
        auVar4 = vpmovsxwd_avx(auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(param_1 + 8 + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar9);
        fVar23 = auVar17._0_4_;
        fVar24 = auVar17._4_4_;
        fVar25 = auVar17._8_4_;
        fVar26 = auVar17._12_4_;
        auVar32._16_16_ = auVar5;
        auVar32._0_16_ = auVar4;
        auVar32 = vcvtdq2ps_avx(auVar32);
        fVar27 = auVar18._0_4_;
        fVar28 = auVar18._4_4_;
        fVar29 = auVar18._8_4_;
        fVar30 = auVar18._12_4_;
        pfVar1 = (float *)(param_2 + uVar22 * 4);
        *pfVar1 = fVar23 * auVar31._0_4_ + fVar27 * auVar32._0_4_;
        pfVar1[1] = fVar24 * auVar31._4_4_ + fVar28 * auVar32._4_4_;
        pfVar1[2] = fVar25 * auVar31._8_4_ + fVar29 * auVar32._8_4_;
        pfVar1[3] = fVar26 * auVar31._12_4_ + fVar30 * auVar32._12_4_;
        pfVar1[4] = fVar23 * auVar31._16_4_ + fVar27 * auVar32._16_4_;
        pfVar1[5] = fVar24 * auVar31._20_4_ + fVar28 * auVar32._20_4_;
        pfVar1[6] = fVar25 * auVar31._24_4_ + fVar29 * auVar32._24_4_;
        pfVar1[7] = auVar31._28_4_ + auVar5._12_4_;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + 10 + uVar22 * 2);
        auVar4 = vpmovsxwd_avx(auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + 0x16 + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + 0x12 + uVar22 * 2);
        auVar6 = vpmovsxwd_avx(auVar12);
        auVar4 = vpaddd_avx(auVar4,auVar5);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 0x1e + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar13);
        auVar5 = vpaddd_avx(auVar6,auVar5);
        auVar33._16_16_ = auVar5;
        auVar33._0_16_ = auVar4;
        auVar31 = vcvtdq2ps_avx(auVar33);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + 0x10 + uVar22 * 2);
        auVar4 = vpmovsxwd_avx(auVar14);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + 0x18 + uVar22 * 2);
        auVar5 = vpmovsxwd_avx(auVar15);
        auVar34._16_16_ = auVar5;
        auVar34._0_16_ = auVar4;
        auVar32 = vcvtdq2ps_avx(auVar34);
        pfVar1 = (float *)(param_2 + 0x20 + uVar22 * 4);
        *pfVar1 = fVar23 * auVar31._0_4_ + fVar27 * auVar32._0_4_;
        pfVar1[1] = fVar24 * auVar31._4_4_ + fVar28 * auVar32._4_4_;
        pfVar1[2] = fVar25 * auVar31._8_4_ + fVar29 * auVar32._8_4_;
        pfVar1[3] = fVar26 * auVar31._12_4_ + fVar30 * auVar32._12_4_;
        pfVar1[4] = fVar23 * auVar31._16_4_ + fVar27 * auVar32._16_4_;
        pfVar1[5] = fVar24 * auVar31._20_4_ + fVar28 * auVar32._20_4_;
        pfVar1[6] = fVar25 * auVar31._24_4_ + fVar29 * auVar32._24_4_;
        pfVar1[7] = auVar31._28_4_ + auVar5._12_4_;
        uVar22 = uVar22 + 0x10;
      } while (uVar22 < uVar21);
      if (uVar20 < uVar21 + 1) {
        return;
      }
      uVar20 = uVar20 - uVar21;
      if (3 < (longlong)uVar20) {
        uVar19 = 0;
        uVar22 = uVar20 & 0xfffffffffffffffc;
        do {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = *(ulonglong *)(param_1 + uVar21 * 2 + 6 + uVar19 * 2);
          auVar17 = vpmovsxwd_avx(auVar17);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = *(ulonglong *)(param_1 + -6 + (uVar19 + uVar21) * 2);
          auVar18 = vpmovsxwd_avx(auVar18);
          auVar17 = vpaddd_avx(auVar18,auVar17);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = *(ulonglong *)(param_1 + (uVar19 + uVar21) * 2);
          auVar18 = vpmovsxwd_avx(auVar16);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar18 = vcvtdq2ps_avx(auVar18);
          pfVar1 = (float *)(param_2 + uVar21 * 4 + uVar19 * 4);
          *pfVar1 = fVar23 * auVar17._0_4_ + fVar27 * auVar18._0_4_;
          pfVar1[1] = fVar24 * auVar17._4_4_ + fVar28 * auVar18._4_4_;
          pfVar1[2] = fVar25 * auVar17._8_4_ + fVar29 * auVar18._8_4_;
          pfVar1[3] = fVar26 * auVar17._12_4_ + fVar30 * auVar18._12_4_;
          uVar19 = uVar19 + 4;
        } while (uVar19 < uVar22);
        if (uVar20 <= uVar22) {
          return;
        }
        param_1 = param_1 + uVar21 * 2;
        do {
          *(float *)(param_2 + uVar21 * 4 + uVar22 * 4) =
               fVar2 * (float)((int)*(short *)(param_1 + -6 + uVar22 * 2) +
                              (int)*(short *)(param_1 + 6 + uVar22 * 2)) +
               fVar3 * (float)(int)*(short *)(param_1 + uVar22 * 2);
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar20);
        return;
      }
      goto LAB_140833171;
    }
  }
LAB_140833169:
  uVar21 = 0;
  if (uVar20 == 0) {
    return;
  }
LAB_140833171:
  FUN_140833104(fVar3,uVar21);
  return;
}

