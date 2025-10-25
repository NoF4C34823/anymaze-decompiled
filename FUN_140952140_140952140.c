
void FUN_140952140(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

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
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  
  uVar23 = param_3 * 3;
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  fVar4 = (float)param_4[2];
  fVar5 = (float)param_4[3];
  if ((longlong)uVar23 < 1) {
    return;
  }
  if ((longlong)uVar23 < 0x10) {
LAB_1409525d7:
    uVar22 = 0;
  }
  else {
    if ((longlong)uVar23 < 0x1d) {
      uVar24 = 0;
      uVar22 = uVar23 & 0xfffffffffffffff0;
    }
    else {
      uVar24 = param_2 & 0x1f;
      if (uVar24 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1409525d7;
        uVar24 = 0x20 - uVar24 >> 2;
      }
      if ((longlong)uVar23 < (longlong)(uVar24 + 0x10)) goto LAB_1409525d7;
      uVar21 = 0;
      uVar22 = uVar23 - (uVar23 - uVar24 & 0xf);
      if (uVar24 != 0) {
        do {
          auVar28._0_4_ =
               (float)((int)*(short *)(param_1 + -0xc + uVar21 * 2) +
                      (int)*(short *)(param_1 + 0xc + uVar21 * 2));
          auVar28._4_12_ = in_ZMM2._4_12_;
          auVar28 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((int)*(short *)(param_1 + -6 +
                                                                                  uVar21 * 2) +
                                                                  (int)*(short *)(param_1 + 6 +
                                                                                 uVar21 * 2)))),
                                    auVar28,ZEXT416((uint)fVar3));
          auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)(int)*(short *)(param_1 +
                                                                                 uVar21 * 2))),
                                    ZEXT416((uint)(float)((int)*(short *)(param_1 + -0x12 +
                                                                         uVar21 * 2) +
                                                         (int)*(short *)(param_1 + 0x12 + uVar21 * 2
                                                                        ))),ZEXT416(uVar2));
          in_ZMM2 = ZEXT1664(auVar25);
          *(float *)(param_2 + uVar21 * 4) = auVar28._0_4_ + auVar25._0_4_;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar24);
      }
    }
    auVar30._4_4_ = uVar2;
    auVar30._0_4_ = uVar2;
    auVar30._8_4_ = uVar2;
    auVar30._12_4_ = uVar2;
    auVar30._16_4_ = uVar2;
    auVar30._20_4_ = uVar2;
    auVar30._24_4_ = uVar2;
    auVar30._28_4_ = uVar2;
    in_ZMM2 = ZEXT3264(auVar30);
    auVar26._4_4_ = fVar4;
    auVar26._0_4_ = fVar4;
    auVar26._8_4_ = fVar4;
    auVar26._12_4_ = fVar4;
    auVar26._16_4_ = fVar4;
    auVar26._20_4_ = fVar4;
    auVar26._24_4_ = fVar4;
    auVar26._28_4_ = fVar4;
    auVar32._4_4_ = fVar5;
    auVar32._0_4_ = fVar5;
    auVar32._8_4_ = fVar5;
    auVar32._12_4_ = fVar5;
    auVar32._16_4_ = fVar5;
    auVar32._20_4_ = fVar5;
    auVar32._24_4_ = fVar5;
    auVar32._28_4_ = fVar5;
    do {
      auVar6 = *(undefined1 (*) [32])(param_1 + -0x12 + uVar24 * 2);
      auVar7 = *(undefined1 (*) [32])(param_1 + 0x12 + uVar24 * 2);
      auVar8 = *(undefined1 (*) [32])(param_1 + 0xc + uVar24 * 2);
      auVar9 = *(undefined1 (*) [32])(param_1 + -0xc + uVar24 * 2);
      auVar10 = *(undefined1 (*) [32])(param_1 + 6 + uVar24 * 2);
      auVar11 = *(undefined1 (*) [32])(param_1 + -6 + uVar24 * 2);
      auVar12 = *(undefined1 (*) [32])(param_1 + uVar24 * 2);
      auVar20 = vpmovsxwd_avx2(auVar6._0_16_);
      auVar34 = vpmovsxwd_avx2(auVar7._0_16_);
      auVar20 = vpaddd_avx2(auVar20,auVar34);
      auVar6 = vpmovsxwd_avx2(auVar6._16_16_);
      auVar7 = vpmovsxwd_avx2(auVar7._16_16_);
      auVar7 = vpaddd_avx2(auVar6,auVar7);
      auVar6 = vcvtdq2ps_avx(auVar20);
      auVar7 = vcvtdq2ps_avx(auVar7);
      auVar20 = vpmovsxwd_avx2(auVar9._0_16_);
      auVar34 = vpmovsxwd_avx2(auVar8._0_16_);
      auVar20 = vpaddd_avx2(auVar20,auVar34);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar9 = vpmovsxwd_avx2(auVar9._16_16_);
      auVar8 = vpmovsxwd_avx2(auVar8._16_16_);
      auVar8 = vpaddd_avx2(auVar9,auVar8);
      auVar34._0_4_ = fVar3 * auVar20._0_4_;
      auVar34._4_4_ = fVar3 * auVar20._4_4_;
      auVar34._8_4_ = fVar3 * auVar20._8_4_;
      auVar34._12_4_ = fVar3 * auVar20._12_4_;
      auVar34._16_4_ = fVar3 * auVar20._16_4_;
      auVar34._20_4_ = fVar3 * auVar20._20_4_;
      auVar34._24_4_ = fVar3 * auVar20._24_4_;
      auVar34._28_4_ = 0;
      auVar8 = vcvtdq2ps_avx(auVar8);
      auVar28 = vfmadd231ps_fma(auVar34,auVar6,auVar30);
      auVar9._4_4_ = fVar3 * auVar8._4_4_;
      auVar9._0_4_ = fVar3 * auVar8._0_4_;
      auVar9._8_4_ = fVar3 * auVar8._8_4_;
      auVar9._12_4_ = fVar3 * auVar8._12_4_;
      auVar9._16_4_ = fVar3 * auVar8._16_4_;
      auVar9._20_4_ = fVar3 * auVar8._20_4_;
      auVar9._24_4_ = fVar3 * auVar8._24_4_;
      auVar9._28_4_ = auVar6._28_4_;
      auVar25 = vfmadd231ps_fma(auVar9,auVar7,auVar30);
      auVar6 = vpmovsxwd_avx2(auVar11._0_16_);
      auVar7 = vpmovsxwd_avx2(auVar10._0_16_);
      auVar6 = vpaddd_avx2(auVar6,auVar7);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar7 = vpmovsxwd_avx2(auVar11._16_16_);
      auVar8 = vpmovsxwd_avx2(auVar10._16_16_);
      auVar7 = vpaddd_avx2(auVar7,auVar8);
      auVar28 = vfmadd231ps_fma(ZEXT1632(auVar28),auVar6,auVar26);
      auVar6 = vcvtdq2ps_avx(auVar7);
      auVar25 = vfmadd231ps_fma(ZEXT1632(auVar25),auVar6,auVar26);
      auVar6 = vpmovsxwd_avx2(auVar12._0_16_);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar28 = vfmadd231ps_fma(ZEXT1632(auVar28),auVar6,auVar32);
      *(undefined1 (*) [32])(param_2 + uVar24 * 4) = ZEXT1632(auVar28);
      auVar6 = vpmovsxwd_avx2(auVar12._16_16_);
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar28 = vfmadd231ps_fma(ZEXT1632(auVar25),auVar6,auVar32);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar24 * 4) = ZEXT1632(auVar28);
      uVar24 = uVar24 + 0x10;
    } while (uVar24 < uVar22);
  }
  if (uVar22 + 1 <= uVar23) {
    uVar23 = uVar23 - uVar22;
    if ((longlong)uVar23 < 4) {
      uVar24 = 0;
    }
    else {
      uVar21 = 0;
      auVar31._4_4_ = uVar2;
      auVar31._0_4_ = uVar2;
      auVar31._8_4_ = uVar2;
      auVar31._12_4_ = uVar2;
      uVar24 = uVar23 & 0xfffffffffffffffc;
      in_ZMM2 = ZEXT1664(CONCAT412(fVar3,CONCAT48(fVar3,CONCAT44(fVar3,fVar3))));
      auVar27._4_4_ = fVar4;
      auVar27._0_4_ = fVar4;
      auVar27._8_4_ = fVar4;
      auVar27._12_4_ = fVar4;
      auVar25._4_4_ = fVar5;
      auVar25._0_4_ = fVar5;
      auVar25._8_4_ = fVar5;
      auVar25._12_4_ = fVar5;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(param_1 + uVar22 * 2 + 0x12 + uVar21 * 2);
        auVar28 = vpmovsxwd_avx(auVar13);
        lVar1 = uVar21 + uVar22;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(param_1 + -0x12 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar14);
        auVar13 = vpaddd_avx(auVar13,auVar28);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(param_1 + -0xc + lVar1 * 2);
        auVar28 = vpmovsxwd_avx(auVar15);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(param_1 + 0xc + lVar1 * 2);
        auVar14 = vpmovsxwd_avx(auVar16);
        auVar28 = vpaddd_avx(auVar28,auVar14);
        auVar28 = vcvtdq2ps_avx(auVar28);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar33._0_4_ = fVar3 * auVar28._0_4_;
        auVar33._4_4_ = fVar3 * auVar28._4_4_;
        auVar33._8_4_ = fVar3 * auVar28._8_4_;
        auVar33._12_4_ = fVar3 * auVar28._12_4_;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = *(ulonglong *)(param_1 + 6 + lVar1 * 2);
        auVar28 = vpmovsxwd_avx(auVar17);
        auVar14 = vfmadd231ps_fma(auVar33,auVar13,auVar31);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(param_1 + -6 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar18);
        auVar28 = vpaddd_avx(auVar13,auVar28);
        auVar28 = vcvtdq2ps_avx(auVar28);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)(param_1 + lVar1 * 2);
        auVar13 = vpmovsxwd_avx(auVar19);
        auVar14 = vfmadd231ps_fma(auVar14,auVar28,auVar27);
        auVar28 = vcvtdq2ps_avx(auVar13);
        auVar28 = vfmadd231ps_fma(auVar14,auVar28,auVar25);
        *(undefined1 (*) [16])(param_2 + uVar22 * 4 + uVar21 * 4) = auVar28;
        uVar21 = uVar21 + 4;
      } while (uVar21 < uVar24);
    }
    if (uVar24 < uVar23) {
      param_1 = param_1 + uVar22 * 2;
      do {
        auVar29._0_4_ =
             (float)((int)*(short *)(param_1 + -0xc + uVar24 * 2) +
                    (int)*(short *)(param_1 + 0xc + uVar24 * 2));
        auVar29._4_12_ = in_ZMM2._4_12_;
        auVar28 = vfmadd231ss_fma(ZEXT416((uint)(fVar4 * (float)((int)*(short *)(param_1 + -6 +
                                                                                uVar24 * 2) +
                                                                (int)*(short *)(param_1 + 6 +
                                                                               uVar24 * 2)))),
                                  auVar29,ZEXT416((uint)fVar3));
        auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar5 * (float)(int)*(short *)(param_1 + uVar24 * 2
                                                                               ))),
                                  ZEXT416((uint)(float)((int)*(short *)(param_1 + -0x12 + uVar24 * 2
                                                                       ) +
                                                       (int)*(short *)(param_1 + 0x12 + uVar24 * 2))
                                         ),ZEXT416(uVar2));
        in_ZMM2 = ZEXT1664(auVar25);
        *(float *)(param_2 + uVar22 * 4 + uVar24 * 4) = auVar28._0_4_ + auVar25._0_4_;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar23);
    }
  }
  return;
}

