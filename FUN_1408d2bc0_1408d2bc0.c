
void FUN_1408d2bc0(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    if ((longlong)param_3 < 0x1d) {
      FUN_1408d2c7a(param_1,param_3 & 0xfffffffffffffff0);
      return;
    }
    uVar14 = param_2 & 0x1f;
    if (uVar14 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408d2e29;
      uVar14 = 0x20 - uVar14 >> 2;
    }
    if ((longlong)(uVar14 + 0x10) <= (longlong)param_3) {
      uVar12 = 0;
      uVar13 = param_3 - (param_3 - uVar14 & 0xf);
      if (uVar14 != 0) {
        do {
          auVar15._0_4_ =
               (float)((int)*(short *)(param_1 + -2 + uVar12 * 2) +
                      (int)*(short *)(param_1 + 2 + uVar12 * 2));
          auVar15._4_8_ = SUB128(ZEXT812(0),4);
          auVar15._12_4_ = 0;
          auVar15 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)(int)*(short *)(param_1 +
                                                                                 uVar12 * 2))),
                                    auVar15,ZEXT416(uVar2));
          *(int *)(param_2 + uVar12 * 4) = auVar15._0_4_;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar14);
      }
      auVar18._4_4_ = uVar2;
      auVar18._0_4_ = uVar2;
      auVar18._8_4_ = uVar2;
      auVar18._12_4_ = uVar2;
      auVar18._16_4_ = uVar2;
      auVar18._20_4_ = uVar2;
      auVar18._24_4_ = uVar2;
      auVar18._28_4_ = uVar2;
      do {
        auVar4 = *(undefined1 (*) [32])(param_1 + 2 + uVar14 * 2);
        auVar5 = *(undefined1 (*) [32])(param_1 + -2 + uVar14 * 2);
        auVar6 = *(undefined1 (*) [32])(param_1 + uVar14 * 2);
        auVar10 = vpmovsxwd_avx2(auVar5._0_16_);
        auVar11 = vpmovsxwd_avx2(auVar4._0_16_);
        auVar10 = vpaddd_avx2(auVar10,auVar11);
        auVar10 = vcvtdq2ps_avx(auVar10);
        auVar5 = vpmovsxwd_avx2(auVar5._16_16_);
        auVar4 = vpmovsxwd_avx2(auVar4._16_16_);
        auVar4 = vpaddd_avx2(auVar5,auVar4);
        auVar4 = vcvtdq2ps_avx(auVar4);
        auVar5 = vpmovsxwd_avx2(auVar6._0_16_);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar11._4_4_ = fVar3 * auVar5._4_4_;
        auVar11._0_4_ = fVar3 * auVar5._0_4_;
        auVar11._8_4_ = fVar3 * auVar5._8_4_;
        auVar11._12_4_ = fVar3 * auVar5._12_4_;
        auVar11._16_4_ = fVar3 * auVar5._16_4_;
        auVar11._20_4_ = fVar3 * auVar5._20_4_;
        auVar11._24_4_ = fVar3 * auVar5._24_4_;
        auVar11._28_4_ = auVar5._28_4_;
        auVar5 = vpmovsxwd_avx2(auVar6._16_16_);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar15 = vfmadd231ps_fma(auVar11,auVar10,auVar18);
        auVar6._4_4_ = fVar3 * auVar5._4_4_;
        auVar6._0_4_ = fVar3 * auVar5._0_4_;
        auVar6._8_4_ = fVar3 * auVar5._8_4_;
        auVar6._12_4_ = fVar3 * auVar5._12_4_;
        auVar6._16_4_ = fVar3 * auVar5._16_4_;
        auVar6._20_4_ = fVar3 * auVar5._20_4_;
        auVar6._24_4_ = fVar3 * auVar5._24_4_;
        auVar6._28_4_ = auVar10._28_4_;
        *(undefined1 (*) [32])(param_2 + uVar14 * 4) = ZEXT1632(auVar15);
        auVar15 = vfmadd231ps_fma(auVar6,auVar4,auVar18);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar14 * 4) = ZEXT1632(auVar15);
        uVar14 = uVar14 + 0x10;
      } while (uVar14 < uVar13);
      if (param_3 < uVar13 + 1) {
        return;
      }
      param_3 = param_3 - uVar13;
      if ((longlong)param_3 < 4) {
        uVar14 = 0;
      }
      else {
        uVar12 = 0;
        auVar19._4_4_ = uVar2;
        auVar19._0_4_ = uVar2;
        auVar19._8_4_ = uVar2;
        auVar19._12_4_ = uVar2;
        uVar14 = param_3 & 0xfffffffffffffffc;
        do {
          lVar1 = uVar12 + uVar13;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
          auVar15 = vpmovsxwd_avx(auVar7);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
          auVar7 = vpmovsxwd_avx(auVar8);
          auVar7 = vpaddd_avx(auVar15,auVar7);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
          auVar15 = vpmovsxwd_avx(auVar9);
          auVar15 = vcvtdq2ps_avx(auVar15);
          auVar7 = vcvtdq2ps_avx(auVar7);
          auVar16._0_4_ = fVar3 * auVar15._0_4_;
          auVar16._4_4_ = fVar3 * auVar15._4_4_;
          auVar16._8_4_ = fVar3 * auVar15._8_4_;
          auVar16._12_4_ = fVar3 * auVar15._12_4_;
          auVar15 = vfmadd231ps_fma(auVar16,auVar7,auVar19);
          *(undefined1 (*) [16])(param_2 + uVar13 * 4 + uVar12 * 4) = auVar15;
          uVar12 = uVar12 + 4;
        } while (uVar12 < uVar14);
      }
      if (param_3 <= uVar14) {
        return;
      }
      param_1 = param_1 + uVar13 * 2;
      do {
        auVar17._0_4_ =
             (float)((int)*(short *)(param_1 + -2 + uVar14 * 2) +
                    (int)*(short *)(param_1 + 2 + uVar14 * 2));
        auVar17._4_8_ = SUB128(ZEXT812(0),4);
        auVar17._12_4_ = 0;
        auVar15 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)(int)*(short *)(param_1 + uVar14 * 2
                                                                               ))),auVar17,
                                  ZEXT416(uVar2));
        *(int *)(param_2 + uVar13 * 4 + uVar14 * 4) = auVar15._0_4_;
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_3);
      return;
    }
  }
LAB_1408d2e29:
  FUN_1408d2d3c(param_1,0);
  return;
}

