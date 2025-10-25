
void FUN_1408a8e80(longlong param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  fVar4 = (float)param_4[2];
  fVar5 = (float)param_4[3];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 0x10) {
LAB_1408a92d6:
    uVar22 = 0;
  }
  else {
    if ((longlong)param_3 < 0x1d) {
      uVar23 = 0;
      uVar22 = param_3 & 0xfffffffffffffff0;
    }
    else {
      uVar23 = param_2 & 0x1f;
      if (uVar23 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1408a92d6;
        uVar23 = 0x20 - uVar23 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar23 + 0x10)) goto LAB_1408a92d6;
      uVar21 = 0;
      uVar22 = param_3 - (param_3 - uVar23 & 0xf);
      if (uVar23 != 0) {
        do {
          auVar27._0_4_ =
               (float)((int)*(short *)(param_1 + -4 + uVar21 * 2) +
                      (int)*(short *)(param_1 + 4 + uVar21 * 2));
          auVar27._4_12_ = in_ZMM2._4_12_;
          auVar27 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((int)*(short *)(param_1 + -2 +
                                                                                  uVar21 * 2) +
                                                                  (int)*(short *)(param_1 + 2 +
                                                                                 uVar21 * 2)))),
                                    auVar27,ZEXT416((uint)fVar3));
          auVar24 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)(int)*(short *)(param_1 +
                                                                                 uVar21 * 2))),
                                    ZEXT416((uint)(float)((int)*(short *)(param_1 + -6 + uVar21 * 2)
                                                         + (int)*(short *)(param_1 + 6 + uVar21 * 2)
                                                         )),ZEXT416(uVar2));
          in_ZMM2 = ZEXT1664(auVar24);
          *(float *)(param_2 + uVar21 * 4) = auVar27._0_4_ + auVar24._0_4_;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar23);
      }
    }
    auVar29._4_4_ = uVar2;
    auVar29._0_4_ = uVar2;
    auVar29._8_4_ = uVar2;
    auVar29._12_4_ = uVar2;
    auVar29._16_4_ = uVar2;
    auVar29._20_4_ = uVar2;
    auVar29._24_4_ = uVar2;
    auVar29._28_4_ = uVar2;
    in_ZMM2 = ZEXT3264(auVar29);
    auVar25._4_4_ = fVar4;
    auVar25._0_4_ = fVar4;
    auVar25._8_4_ = fVar4;
    auVar25._12_4_ = fVar4;
    auVar25._16_4_ = fVar4;
    auVar25._20_4_ = fVar4;
    auVar25._24_4_ = fVar4;
    auVar25._28_4_ = fVar4;
    auVar31._4_4_ = fVar5;
    auVar31._0_4_ = fVar5;
    auVar31._8_4_ = fVar5;
    auVar31._12_4_ = fVar5;
    auVar31._16_4_ = fVar5;
    auVar31._20_4_ = fVar5;
    auVar31._24_4_ = fVar5;
    auVar31._28_4_ = fVar5;
    do {
      auVar6 = *(undefined1 (*) [32])(param_1 + 6 + uVar23 * 2);
      auVar7 = *(undefined1 (*) [32])(param_1 + -6 + uVar23 * 2);
      auVar8 = *(undefined1 (*) [32])(param_1 + 4 + uVar23 * 2);
      auVar9 = *(undefined1 (*) [32])(param_1 + -4 + uVar23 * 2);
      auVar10 = *(undefined1 (*) [32])(param_1 + 2 + uVar23 * 2);
      auVar11 = *(undefined1 (*) [32])(param_1 + -2 + uVar23 * 2);
      auVar12 = *(undefined1 (*) [32])(param_1 + uVar23 * 2);
      auVar20 = vpmovsxwd_avx2(auVar7._0_16_);
      auVar33 = vpmovsxwd_avx2(auVar6._0_16_);
      auVar20 = vpaddd_avx2(auVar20,auVar33);
      auVar7 = vpmovsxwd_avx2(auVar7._16_16_);
      auVar6 = vpmovsxwd_avx2(auVar6._16_16_);
      auVar7 = vpaddd_avx2(auVar7,auVar6);
      auVar6 = vcvtdq2ps_avx(auVar20);
      auVar7 = vcvtdq2ps_avx(auVar7);
      auVar20 = vpmovsxwd_avx2(auVar9._0_16_);
      auVar33 = vpmovsxwd_avx2(auVar8._0_16_);
      auVar20 = vpaddd_avx2(auVar20,auVar33);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar9 = vpmovsxwd_avx2(auVar9._16_16_);
      auVar8 = vpmovsxwd_avx2(auVar8._16_16_);
      auVar8 = vpaddd_avx2(auVar9,auVar8);
      auVar33._0_4_ = fVar3 * auVar20._0_4_;
      auVar33._4_4_ = fVar3 * auVar20._4_4_;
      auVar33._8_4_ = fVar3 * auVar20._8_4_;
      auVar33._12_4_ = fVar3 * auVar20._12_4_;
      auVar33._16_4_ = fVar3 * auVar20._16_4_;
      auVar33._20_4_ = fVar3 * auVar20._20_4_;
      auVar33._24_4_ = fVar3 * auVar20._24_4_;
      auVar33._28_4_ = 0;
      auVar8 = vcvtdq2ps_avx(auVar8);
      auVar27 = vfmadd231ps_fma(auVar33,auVar6,auVar29);
      auVar9._4_4_ = fVar3 * auVar8._4_4_;
      auVar9._0_4_ = fVar3 * auVar8._0_4_;
      auVar9._8_4_ = fVar3 * auVar8._8_4_;
      auVar9._12_4_ = fVar3 * auVar8._12_4_;
      auVar9._16_4_ = fVar3 * auVar8._16_4_;
      auVar9._20_4_ = fVar3 * auVar8._20_4_;
      auVar9._24_4_ = fVar3 * auVar8._24_4_;
      auVar9._28_4_ = auVar6._28_4_;
      auVar24 = vfmadd231ps_fma(auVar9,auVar7,auVar29);
      auVar6 = vpmovsxwd_avx2(auVar11._0_16_);
      auVar7 = vpmovsxwd_avx2(auVar10._0_16_);
      auVar6 = vpaddd_avx2(auVar6,auVar7);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar7 = vpmovsxwd_avx2(auVar11._16_16_);
      auVar8 = vpmovsxwd_avx2(auVar10._16_16_);
      auVar7 = vpaddd_avx2(auVar7,auVar8);
      auVar27 = vfmadd231ps_fma(ZEXT1632(auVar27),auVar6,auVar25);
      auVar6 = vcvtdq2ps_avx(auVar7);
      auVar24 = vfmadd231ps_fma(ZEXT1632(auVar24),auVar6,auVar25);
      auVar6 = vpmovsxwd_avx2(auVar12._0_16_);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar27 = vfmadd231ps_fma(ZEXT1632(auVar27),auVar6,auVar31);
      *(undefined1 (*) [32])(param_2 + uVar23 * 4) = ZEXT1632(auVar27);
      auVar6 = vpmovsxwd_avx2(auVar12._16_16_);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar27 = vfmadd231ps_fma(ZEXT1632(auVar24),auVar6,auVar31);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar23 * 4) = ZEXT1632(auVar27);
      uVar23 = uVar23 + 0x10;
    } while (uVar23 < uVar22);
  }
  if (uVar22 + 1 <= param_3) {
    param_3 = param_3 - uVar22;
    if ((longlong)param_3 < 4) {
      uVar23 = 0;
    }
    else {
      uVar21 = 0;
      auVar30._4_4_ = uVar2;
      auVar30._0_4_ = uVar2;
      auVar30._8_4_ = uVar2;
      auVar30._12_4_ = uVar2;
      uVar23 = param_3 & 0xfffffffffffffffc;
      in_ZMM2 = ZEXT1664(CONCAT412(fVar3,CONCAT48(fVar3,CONCAT44(fVar3,fVar3))));
      auVar26._4_4_ = fVar4;
      auVar26._0_4_ = fVar4;
      auVar26._8_4_ = fVar4;
      auVar26._12_4_ = fVar4;
      auVar24._4_4_ = fVar5;
      auVar24._0_4_ = fVar5;
      auVar24._8_4_ = fVar5;
      auVar24._12_4_ = fVar5;
      do {
        lVar1 = uVar21 + uVar22;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + -6 + lVar1 * 2);
        auVar27 = vpmovsxwd_avx(auVar13);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + 6 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar14);
        auVar13 = vpaddd_avx(auVar27,auVar13);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + -4 + lVar1 * 2);
        auVar27 = vpmovsxwd_avx(auVar15);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(param_1 + 4 + lVar1 * 2);
        auVar14 = vpmovsxwd_avx(auVar16);
        auVar27 = vpaddd_avx(auVar27,auVar14);
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar32._0_4_ = fVar3 * auVar27._0_4_;
        auVar32._4_4_ = fVar3 * auVar27._4_4_;
        auVar32._8_4_ = fVar3 * auVar27._8_4_;
        auVar32._12_4_ = fVar3 * auVar27._12_4_;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)(param_1 + 2 + lVar1 * 2);
        auVar27 = vpmovsxwd_avx(auVar17);
        auVar14 = vfmadd231ps_fma(auVar32,auVar13,auVar30);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(param_1 + -2 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar18);
        auVar27 = vpaddd_avx(auVar13,auVar27);
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar19);
        auVar14 = vfmadd231ps_fma(auVar14,auVar27,auVar26);
        auVar27 = vcvtdq2ps_avx(auVar13);
        auVar27 = vfmadd231ps_fma(auVar14,auVar27,auVar24);
        *(undefined1 (*) [16])(param_2 + uVar22 * 4 + uVar21 * 4) = auVar27;
        uVar21 = uVar21 + 4;
      } while (uVar21 < uVar23);
    }
    if (uVar23 < param_3) {
      param_1 = param_1 + uVar22 * 2;
      do {
        auVar28._0_4_ =
             (float)((int)*(short *)(param_1 + -4 + uVar23 * 2) +
                    (int)*(short *)(param_1 + 4 + uVar23 * 2));
        auVar28._4_12_ = in_ZMM2._4_12_;
        auVar27 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((int)*(short *)(param_1 + -2 +
                                                                                uVar23 * 2) +
                                                                (int)*(short *)(param_1 + 2 +
                                                                               uVar23 * 2)))),
                                  auVar28,ZEXT416((uint)fVar3));
        auVar24 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)(int)*(short *)(param_1 + uVar23 * 2
                                                                               ))),
                                  ZEXT416((uint)(float)((int)*(short *)(param_1 + -6 + uVar23 * 2) +
                                                       (int)*(short *)(param_1 + 6 + uVar23 * 2))),
                                  ZEXT416(uVar2));
        in_ZMM2 = ZEXT1664(auVar24);
        *(float *)(param_2 + uVar22 * 4 + uVar23 * 4) = auVar27._0_4_ + auVar24._0_4_;
        uVar23 = uVar23 + 1;
      } while (uVar23 < param_3);
    }
  }
  return;
}

