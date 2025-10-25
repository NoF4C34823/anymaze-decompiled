
void FUN_14082f960(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4)

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
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (7 < (longlong)param_3) {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14082fba0;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 8) <= (longlong)param_3) {
      uVar17 = 0;
      uVar18 = param_3 - (param_3 - uVar19 & 7);
      if (uVar19 != 0) {
        do {
          *(float *)(param_2 + uVar17 * 4) =
               fVar2 * (float)((uint)*(ushort *)(param_1 + -4 + uVar17 * 2) +
                              (uint)*(ushort *)(param_1 + 4 + uVar17 * 2)) +
               fVar3 * (float)((uint)*(ushort *)(param_1 + -2 + uVar17 * 2) +
                              (uint)*(ushort *)(param_1 + 2 + uVar17 * 2)) +
               fVar4 * (float)*(ushort *)(param_1 + uVar17 * 2);
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar19);
      }
      auVar14 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
      auVar15 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
      auVar16 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_1 + -4 + uVar19 * 2);
        auVar5 = vpmovzxwd_avx(auVar5);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulonglong *)(param_1 + 4 + uVar19 * 2);
        auVar6 = vpmovzxwd_avx(auVar6);
        auVar5 = vpaddd_avx(auVar5,auVar6);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(param_1 + 0xc + uVar19 * 2);
        auVar7 = vpmovzxwd_avx(auVar7);
        auVar6 = vpaddd_avx(auVar6,auVar7);
        auVar20._16_16_ = auVar6;
        auVar20._0_16_ = auVar5;
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(param_1 + -2 + uVar19 * 2);
        auVar5 = vpmovzxwd_avx(auVar8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(param_1 + 2 + uVar19 * 2);
        auVar6 = vpmovzxwd_avx(auVar9);
        auVar5 = vpaddd_avx(auVar5,auVar6);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + 6 + uVar19 * 2);
        auVar6 = vpmovzxwd_avx(auVar10);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + 10 + uVar19 * 2);
        auVar7 = vpmovzxwd_avx(auVar11);
        auVar6 = vpaddd_avx(auVar6,auVar7);
        auVar21._16_16_ = auVar6;
        auVar21._0_16_ = auVar5;
        auVar21 = vcvtdq2ps_avx(auVar21);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + uVar19 * 2);
        auVar5 = vpmovzxwd_avx(auVar12);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 8 + uVar19 * 2);
        auVar7 = vpmovzxwd_avx(auVar13);
        auVar22._16_16_ = auVar7;
        auVar22._0_16_ = auVar5;
        auVar22 = vcvtdq2ps_avx(auVar22);
        pfVar1 = (float *)(param_2 + uVar19 * 4);
        *pfVar1 = auVar14._0_4_ * auVar20._0_4_ + auVar15._0_4_ * auVar21._0_4_ +
                  auVar16._0_4_ * auVar22._0_4_;
        pfVar1[1] = auVar14._4_4_ * auVar20._4_4_ + auVar15._4_4_ * auVar21._4_4_ +
                    auVar16._4_4_ * auVar22._4_4_;
        pfVar1[2] = auVar14._8_4_ * auVar20._8_4_ + auVar15._8_4_ * auVar21._8_4_ +
                    auVar16._8_4_ * auVar22._8_4_;
        pfVar1[3] = auVar14._12_4_ * auVar20._12_4_ + auVar15._12_4_ * auVar21._12_4_ +
                    auVar16._12_4_ * auVar22._12_4_;
        pfVar1[4] = auVar14._0_4_ * auVar20._16_4_ + auVar15._0_4_ * auVar21._16_4_ +
                    auVar16._0_4_ * auVar22._16_4_;
        pfVar1[5] = auVar14._4_4_ * auVar20._20_4_ + auVar15._4_4_ * auVar21._20_4_ +
                    auVar16._4_4_ * auVar22._20_4_;
        pfVar1[6] = auVar14._8_4_ * auVar20._24_4_ + auVar15._8_4_ * auVar21._24_4_ +
                    auVar16._8_4_ * auVar22._24_4_;
        pfVar1[7] = auVar6._12_4_ + 0.0 + 0.0;
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar18);
      for (; uVar18 < param_3; uVar18 = uVar18 + 1) {
        *(float *)(param_2 + uVar18 * 4) =
             fVar2 * (float)((uint)*(ushort *)(param_1 + -4 + uVar18 * 2) +
                            (uint)*(ushort *)(param_1 + 4 + uVar18 * 2)) +
             fVar3 * (float)((uint)*(ushort *)(param_1 + -2 + uVar18 * 2) +
                            (uint)*(ushort *)(param_1 + 2 + uVar18 * 2)) +
             fVar4 * (float)*(ushort *)(param_1 + uVar18 * 2);
      }
      return;
    }
  }
LAB_14082fba0:
  FUN_14082fb33(0);
  return;
}

