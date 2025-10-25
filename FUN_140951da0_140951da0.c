
void FUN_140951da0(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  uVar19 = param_3 * 3;
  uVar4 = param_4[2];
  if ((longlong)uVar19 < 1) {
    return;
  }
  if (0xf < (longlong)uVar19) {
    if ((longlong)uVar19 < 0x1d) {
      FUN_140951e9a(uVar19 & 0xfffffffffffffff0,uVar19,param_2,0);
      return;
    }
    uVar20 = param_2 & 0x1f;
    if (uVar20 != 0) {
      if ((param_2 & 3) != 0) goto LAB_140952129;
      uVar20 = 0x20 - uVar20 >> 2;
    }
    if ((longlong)(uVar20 + 0x10) <= (longlong)uVar19) {
      uVar17 = 0;
      uVar18 = uVar19 - (uVar19 - uVar20 & 0xf);
      if (uVar20 != 0) {
        do {
          auVar21._0_4_ = (float)(int)*(short *)(param_1 + uVar17 * 2);
          auVar21._4_8_ = SUB128(ZEXT812(0),4);
          auVar21._12_4_ = 0;
          auVar23._0_4_ =
               (float)((int)*(short *)(param_1 + -0xc + uVar17 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar17 * 2));
          auVar23._4_8_ = SUB128(ZEXT812(0),4);
          auVar23._12_4_ = 0;
          auVar23 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((int)*(short *)(param_1 + -6 +
                                                                                  uVar17 * 2) +
                                                                  (int)*(short *)(param_1 + 6 +
                                                                                 uVar17 * 2)))),
                                    auVar23,ZEXT416(uVar2));
          auVar23 = vfmadd231ss_fma(auVar23,auVar21,ZEXT416(uVar4));
          *(int *)(param_2 + uVar17 * 4) = auVar23._0_4_;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar20);
      }
      auVar26._4_4_ = uVar2;
      auVar26._0_4_ = uVar2;
      auVar26._8_4_ = uVar2;
      auVar26._12_4_ = uVar2;
      auVar26._16_4_ = uVar2;
      auVar26._20_4_ = uVar2;
      auVar26._24_4_ = uVar2;
      auVar26._28_4_ = uVar2;
      auVar28._4_4_ = uVar4;
      auVar28._0_4_ = uVar4;
      auVar28._8_4_ = uVar4;
      auVar28._12_4_ = uVar4;
      auVar28._16_4_ = uVar4;
      auVar28._20_4_ = uVar4;
      auVar28._24_4_ = uVar4;
      auVar28._28_4_ = uVar4;
      do {
        auVar5 = *(undefined1 (*) [32])(param_1 + 0xc + uVar20 * 2);
        auVar6 = *(undefined1 (*) [32])(param_1 + -0xc + uVar20 * 2);
        auVar7 = *(undefined1 (*) [32])(param_1 + 6 + uVar20 * 2);
        auVar8 = *(undefined1 (*) [32])(param_1 + -6 + uVar20 * 2);
        auVar9 = *(undefined1 (*) [32])(param_1 + uVar20 * 2);
        auVar15 = vpmovsxwd_avx2(auVar6._0_16_);
        auVar16 = vpmovsxwd_avx2(auVar5._0_16_);
        auVar15 = vpaddd_avx2(auVar15,auVar16);
        auVar6 = vpmovsxwd_avx2(auVar6._16_16_);
        auVar5 = vpmovsxwd_avx2(auVar5._16_16_);
        auVar6 = vpaddd_avx2(auVar6,auVar5);
        auVar5 = vcvtdq2ps_avx(auVar15);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar15 = vpmovsxwd_avx2(auVar8._0_16_);
        auVar16 = vpmovsxwd_avx2(auVar7._0_16_);
        auVar15 = vpaddd_avx2(auVar15,auVar16);
        auVar8 = vpmovsxwd_avx2(auVar8._16_16_);
        auVar7 = vpmovsxwd_avx2(auVar7._16_16_);
        auVar16 = vpaddd_avx2(auVar8,auVar7);
        auVar7 = vcvtdq2ps_avx(auVar15);
        auVar8 = vcvtdq2ps_avx(auVar16);
        auVar15._4_4_ = fVar3 * auVar7._4_4_;
        auVar15._0_4_ = fVar3 * auVar7._0_4_;
        auVar15._8_4_ = fVar3 * auVar7._8_4_;
        auVar15._12_4_ = fVar3 * auVar7._12_4_;
        auVar15._16_4_ = fVar3 * auVar7._16_4_;
        auVar15._20_4_ = fVar3 * auVar7._20_4_;
        auVar15._24_4_ = fVar3 * auVar7._24_4_;
        auVar15._28_4_ = auVar16._28_4_;
        auVar16._4_4_ = fVar3 * auVar8._4_4_;
        auVar16._0_4_ = fVar3 * auVar8._0_4_;
        auVar16._8_4_ = fVar3 * auVar8._8_4_;
        auVar16._12_4_ = fVar3 * auVar8._12_4_;
        auVar16._16_4_ = fVar3 * auVar8._16_4_;
        auVar16._20_4_ = fVar3 * auVar8._20_4_;
        auVar16._24_4_ = fVar3 * auVar8._24_4_;
        auVar16._28_4_ = auVar7._28_4_;
        auVar23 = vfmadd231ps_fma(auVar15,auVar5,auVar26);
        auVar21 = vfmadd231ps_fma(auVar16,auVar6,auVar26);
        auVar5 = vpmovsxwd_avx2(auVar9._0_16_);
        auVar6 = vpmovsxwd_avx2(auVar9._16_16_);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar23 = vfmadd231ps_fma(ZEXT1632(auVar23),auVar5,auVar28);
        auVar21 = vfmadd231ps_fma(ZEXT1632(auVar21),auVar6,auVar28);
        *(undefined1 (*) [32])(param_2 + uVar20 * 4) = ZEXT1632(auVar23);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4) = ZEXT1632(auVar21);
        uVar20 = uVar20 + 0x10;
      } while (uVar20 < uVar18);
      if (uVar19 < uVar18 + 1) {
        return;
      }
      uVar19 = uVar19 - uVar18;
      if ((longlong)uVar19 < 4) {
        FUN_1409520af();
        return;
      }
      uVar17 = 0;
      auVar24._4_4_ = uVar2;
      auVar24._0_4_ = uVar2;
      auVar24._8_4_ = uVar2;
      auVar24._12_4_ = uVar2;
      uVar20 = uVar19 & 0xfffffffffffffffc;
      auVar27._4_4_ = uVar4;
      auVar27._0_4_ = uVar4;
      auVar27._8_4_ = uVar4;
      auVar27._12_4_ = uVar4;
      do {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulonglong *)(param_1 + uVar18 * 2 + 0xc + uVar17 * 2);
        auVar23 = vpmovsxwd_avx(auVar10);
        lVar1 = uVar17 + uVar18;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(param_1 + -0xc + lVar1 * 2);
        auVar21 = vpmovsxwd_avx(auVar11);
        auVar21 = vpaddd_avx(auVar21,auVar23);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(param_1 + -6 + lVar1 * 2);
        auVar23 = vpmovsxwd_avx(auVar12);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + 6 + lVar1 * 2);
        auVar10 = vpmovsxwd_avx(auVar13);
        auVar23 = vpaddd_avx(auVar23,auVar10);
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar21 = vcvtdq2ps_avx(auVar21);
        auVar29._0_4_ = fVar3 * auVar23._0_4_;
        auVar29._4_4_ = fVar3 * auVar23._4_4_;
        auVar29._8_4_ = fVar3 * auVar23._8_4_;
        auVar29._12_4_ = fVar3 * auVar23._12_4_;
        auVar21 = vfmadd231ps_fma(auVar29,auVar21,auVar24);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar23 = vpmovsxwd_avx(auVar14);
        auVar23 = vcvtdq2ps_avx(auVar23);
        auVar23 = vfmadd231ps_fma(auVar21,auVar23,auVar27);
        *(undefined1 (*) [16])(param_2 + uVar18 * 4 + uVar17 * 4) = auVar23;
        uVar17 = uVar17 + 4;
      } while (uVar17 < uVar20);
      if (uVar19 <= uVar20) {
        return;
      }
      param_1 = param_1 + uVar18 * 2;
      do {
        auVar22._0_4_ = (float)(int)*(short *)(param_1 + uVar20 * 2);
        auVar22._4_8_ = SUB128(ZEXT812(0),4);
        auVar22._12_4_ = 0;
        auVar25._0_4_ =
             (float)((int)*(short *)(param_1 + -0xc + uVar20 * 2) +
                    (int)*(short *)(param_1 + 0xc + uVar20 * 2));
        auVar25._4_12_ = SUB1612(ZEXT816(0) << 0x40,4);
        auVar23 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((int)*(short *)(param_1 + -6 +
                                                                                uVar20 * 2) +
                                                                (int)*(short *)(param_1 + 6 +
                                                                               uVar20 * 2)))),
                                  auVar25,ZEXT416(uVar2));
        auVar23 = vfmadd231ss_fma(auVar23,auVar22,ZEXT416(uVar4));
        *(int *)(param_2 + uVar18 * 4 + uVar20 * 4) = auVar23._0_4_;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar19);
      return;
    }
  }
LAB_140952129:
  FUN_140951fe5(0);
  return;
}

