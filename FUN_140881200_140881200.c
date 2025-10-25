
void FUN_140881200(longlong param_1,ulonglong param_2,longlong param_3,float *param_4)

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
  undefined1 auVar17 [16];
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  
  uVar18 = param_3 * 3;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)uVar18 < 1) {
    return;
  }
  if (7 < (longlong)uVar18) {
    uVar21 = param_2 & 0x1f;
    if (uVar21 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140881440;
      uVar21 = 0x20 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 8) <= (longlong)uVar18) {
      uVar19 = 0;
      uVar20 = uVar18 - (uVar18 - uVar21 & 7);
      if (uVar21 != 0) {
        do {
          *(float *)(param_2 + uVar19 * 4) =
               fVar2 * (float)((int)*(short *)(param_1 + -0xc + uVar19 * 2) +
                              (int)*(short *)(param_1 + 0xc + uVar19 * 2)) +
               fVar3 * (float)((int)*(short *)(param_1 + -6 + uVar19 * 2) +
                              (int)*(short *)(param_1 + 6 + uVar19 * 2)) +
               fVar4 * (float)(int)*(short *)(param_1 + uVar19 * 2);
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar21);
      }
      auVar15 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
      auVar16 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
      auVar17 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + -0xc + uVar21 * 2);
        auVar5 = vpmovsxwd_avx(auVar5);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + 0xc + uVar21 * 2);
        auVar6 = vpmovsxwd_avx(auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + -4 + uVar21 * 2);
        auVar7 = vpmovsxwd_avx(auVar7);
        auVar5 = vpaddd_avx(auVar5,auVar6);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + 0x14 + uVar21 * 2);
        auVar6 = vpmovsxwd_avx(auVar8);
        auVar6 = vpaddd_avx(auVar7,auVar6);
        auVar22._16_16_ = auVar6;
        auVar22._0_16_ = auVar5;
        auVar22 = vcvtdq2ps_avx(auVar22);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(param_1 + -6 + uVar21 * 2);
        auVar5 = vpmovsxwd_avx(auVar9);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + 6 + uVar21 * 2);
        auVar6 = vpmovsxwd_avx(auVar10);
        auVar5 = vpaddd_avx(auVar5,auVar6);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + 2 + uVar21 * 2);
        auVar6 = vpmovsxwd_avx(auVar11);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + 0xe + uVar21 * 2);
        auVar7 = vpmovsxwd_avx(auVar12);
        auVar6 = vpaddd_avx(auVar6,auVar7);
        auVar23._16_16_ = auVar6;
        auVar23._0_16_ = auVar5;
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + uVar21 * 2);
        auVar5 = vpmovsxwd_avx(auVar13);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + 8 + uVar21 * 2);
        auVar7 = vpmovsxwd_avx(auVar14);
        auVar24._16_16_ = auVar7;
        auVar24._0_16_ = auVar5;
        auVar24 = vcvtdq2ps_avx(auVar24);
        pfVar1 = (float *)(param_2 + uVar21 * 4);
        *pfVar1 = auVar15._0_4_ * auVar22._0_4_ + auVar16._0_4_ * auVar23._0_4_ +
                  auVar17._0_4_ * auVar24._0_4_;
        pfVar1[1] = auVar15._4_4_ * auVar22._4_4_ + auVar16._4_4_ * auVar23._4_4_ +
                    auVar17._4_4_ * auVar24._4_4_;
        pfVar1[2] = auVar15._8_4_ * auVar22._8_4_ + auVar16._8_4_ * auVar23._8_4_ +
                    auVar17._8_4_ * auVar24._8_4_;
        pfVar1[3] = auVar15._12_4_ * auVar22._12_4_ + auVar16._12_4_ * auVar23._12_4_ +
                    auVar17._12_4_ * auVar24._12_4_;
        pfVar1[4] = auVar15._0_4_ * auVar22._16_4_ + auVar16._0_4_ * auVar23._16_4_ +
                    auVar17._0_4_ * auVar24._16_4_;
        pfVar1[5] = auVar15._4_4_ * auVar22._20_4_ + auVar16._4_4_ * auVar23._20_4_ +
                    auVar17._4_4_ * auVar24._20_4_;
        pfVar1[6] = auVar15._8_4_ * auVar22._24_4_ + auVar16._8_4_ * auVar23._24_4_ +
                    auVar17._8_4_ * auVar24._24_4_;
        pfVar1[7] = auVar6._12_4_ + 0.0 + 0.0;
        uVar21 = uVar21 + 8;
      } while (uVar21 < uVar20);
      for (; uVar20 < uVar18; uVar20 = uVar20 + 1) {
        *(float *)(param_2 + uVar20 * 4) =
             fVar2 * (float)((int)*(short *)(param_1 + -0xc + uVar20 * 2) +
                            (int)*(short *)(param_1 + 0xc + uVar20 * 2)) +
             fVar3 * (float)((int)*(short *)(param_1 + -6 + uVar20 * 2) +
                            (int)*(short *)(param_1 + 6 + uVar20 * 2)) +
             fVar4 * (float)(int)*(short *)(param_1 + uVar20 * 2);
      }
      return;
    }
  }
LAB_140881440:
  FUN_1408813d6(0);
  return;
}

