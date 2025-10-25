
void FUN_14020a480(longlong param_1,ulonglong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  
  uVar17 = param_3 * 3;
  uVar2 = *param_4;
  fVar3 = (float)param_4[1];
  uVar4 = param_4[2];
  if ((longlong)uVar17 < 1) {
    return;
  }
  if (0x1f < (longlong)uVar17) {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_14020a8ed;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 0x20) <= (longlong)uVar17) {
      uVar16 = 0;
      uVar18 = uVar17 - (uVar17 - uVar19 & 0x1f);
      if (uVar19 != 0) {
        do {
          auVar20._0_4_ = (float)*(byte *)(uVar16 + param_1);
          auVar20._4_8_ = SUB128(ZEXT812(0),4);
          auVar20._12_4_ = 0;
          auVar22._0_4_ =
               (float)((uint)*(byte *)((uVar16 - 6) + param_1) +
                      (uint)*(byte *)(uVar16 + 6 + param_1));
          auVar22._4_8_ = SUB128(ZEXT812(0),4);
          auVar22._12_4_ = 0;
          auVar22 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((uint)*(byte *)((uVar16 - 3) +
                                                                                  param_1) +
                                                                  (uint)*(byte *)(uVar16 + 3 +
                                                                                 param_1)))),auVar22
                                    ,ZEXT416(uVar2));
          auVar22 = vfmadd231ss_fma(auVar22,auVar20,ZEXT416(uVar4));
          *(int *)(param_2 + uVar16 * 4) = auVar22._0_4_;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar19);
      }
      auVar24._4_4_ = uVar2;
      auVar24._0_4_ = uVar2;
      auVar24._8_4_ = uVar2;
      auVar24._12_4_ = uVar2;
      auVar24._16_4_ = uVar2;
      auVar24._20_4_ = uVar2;
      auVar24._24_4_ = uVar2;
      auVar24._28_4_ = uVar2;
      auVar26._4_4_ = uVar4;
      auVar26._0_4_ = uVar4;
      auVar26._8_4_ = uVar4;
      auVar26._12_4_ = uVar4;
      auVar26._16_4_ = uVar4;
      auVar26._20_4_ = uVar4;
      auVar26._24_4_ = uVar4;
      auVar26._28_4_ = uVar4;
      do {
        auVar25 = *(undefined1 (*) [32])(uVar19 + 6 + param_1);
        auVar5 = *(undefined1 (*) [32])((uVar19 - 6) + param_1);
        auVar6 = *(undefined1 (*) [32])(uVar19 + 3 + param_1);
        auVar28 = *(undefined1 (*) [32])((uVar19 - 3) + param_1);
        auVar27 = vpmovzxbw_avx2(auVar5._0_16_);
        auVar10 = vpmovzxbw_avx2(auVar25._0_16_);
        auVar27 = vpaddw_avx2(auVar27,auVar10);
        auVar5 = vpmovzxbw_avx2(auVar5._16_16_);
        auVar25 = vpmovzxbw_avx2(auVar25._16_16_);
        auVar10 = vpaddw_avx2(auVar5,auVar25);
        auVar5 = vpmovzxwd_avx2(auVar27._16_16_);
        auVar25 = vpmovzxwd_avx2(auVar27._0_16_);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar5 = vcvtdq2ps_avx(auVar5);
        auVar27 = vpmovzxwd_avx2(auVar10._0_16_);
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar10 = vpmovzxwd_avx2(auVar10._16_16_);
        auVar10 = vcvtdq2ps_avx(auVar10);
        auVar11 = vpmovzxbw_avx2(auVar28._0_16_);
        auVar12 = vpmovzxbw_avx2(auVar6._0_16_);
        auVar11 = vpaddw_avx2(auVar11,auVar12);
        auVar28 = vpmovzxbw_avx2(auVar28._16_16_);
        auVar6 = vpmovzxbw_avx2(auVar6._16_16_);
        auVar12 = vpaddw_avx2(auVar28,auVar6);
        auVar6 = vpmovzxwd_avx2(auVar11._0_16_);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar11 = vpmovzxwd_avx2(auVar11._16_16_);
        auVar28 = vcvtdq2ps_avx(auVar11);
        auVar15._4_4_ = fVar3 * auVar6._4_4_;
        auVar15._0_4_ = fVar3 * auVar6._0_4_;
        auVar15._8_4_ = fVar3 * auVar6._8_4_;
        auVar15._12_4_ = fVar3 * auVar6._12_4_;
        auVar15._16_4_ = fVar3 * auVar6._16_4_;
        auVar15._20_4_ = fVar3 * auVar6._20_4_;
        auVar15._24_4_ = fVar3 * auVar6._24_4_;
        auVar15._28_4_ = auVar11._28_4_;
        auVar22 = vfmadd231ps_fma(auVar15,auVar25,auVar24);
        auVar6._4_4_ = fVar3 * auVar28._4_4_;
        auVar6._0_4_ = fVar3 * auVar28._0_4_;
        auVar6._8_4_ = fVar3 * auVar28._8_4_;
        auVar6._12_4_ = fVar3 * auVar28._12_4_;
        auVar6._16_4_ = fVar3 * auVar28._16_4_;
        auVar6._20_4_ = fVar3 * auVar28._20_4_;
        auVar6._24_4_ = fVar3 * auVar28._24_4_;
        auVar6._28_4_ = auVar25._28_4_;
        auVar20 = vfmadd231ps_fma(auVar6,auVar5,auVar24);
        auVar25 = vpmovzxwd_avx2(auVar12._0_16_);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar5 = vpmovzxwd_avx2(auVar12._16_16_);
        auVar28._0_4_ = fVar3 * auVar25._0_4_;
        auVar28._4_4_ = fVar3 * auVar25._4_4_;
        auVar28._8_4_ = fVar3 * auVar25._8_4_;
        auVar28._12_4_ = fVar3 * auVar25._12_4_;
        auVar28._16_4_ = fVar3 * auVar25._16_4_;
        auVar28._20_4_ = fVar3 * auVar25._20_4_;
        auVar28._24_4_ = fVar3 * auVar25._24_4_;
        auVar28._28_4_ = 0;
        auVar25 = vcvtdq2ps_avx(auVar5);
        auVar13 = vfmadd231ps_fma(auVar28,auVar27,auVar24);
        auVar5._4_4_ = fVar3 * auVar25._4_4_;
        auVar5._0_4_ = fVar3 * auVar25._0_4_;
        auVar5._8_4_ = fVar3 * auVar25._8_4_;
        auVar5._12_4_ = fVar3 * auVar25._12_4_;
        auVar5._16_4_ = fVar3 * auVar25._16_4_;
        auVar5._20_4_ = fVar3 * auVar25._20_4_;
        auVar5._24_4_ = fVar3 * auVar25._24_4_;
        auVar5._28_4_ = auVar27._28_4_;
        auVar14 = vfmadd231ps_fma(auVar5,auVar10,auVar24);
        auVar5 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar19 + param_1),0));
        auVar6 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar19 + param_1),0x10));
        auVar25 = vpmovzxwd_avx2(auVar5._0_16_);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar22),auVar25,auVar26);
        auVar25 = vpmovzxwd_avx2(auVar5._16_16_);
        *(undefined1 (*) [32])(param_2 + uVar19 * 4) = ZEXT1632(auVar22);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar20),auVar25,auVar26);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = ZEXT1632(auVar22);
        auVar25 = vpmovzxwd_avx2(auVar6._0_16_);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar13),auVar25,auVar26);
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4) = ZEXT1632(auVar22);
        auVar25 = vpmovzxwd_avx2(auVar6._16_16_);
        auVar25 = vcvtdq2ps_avx(auVar25);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar14),auVar25,auVar26);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4) = ZEXT1632(auVar22);
        uVar19 = uVar19 + 0x20;
      } while (uVar19 < uVar18);
      if (uVar17 < uVar18 + 1) {
        return;
      }
      uVar17 = uVar17 - uVar18;
      if ((longlong)uVar17 < 8) {
        FUN_14020a85b();
        return;
      }
      uVar16 = 0;
      auVar25._4_4_ = uVar2;
      auVar25._0_4_ = uVar2;
      auVar25._8_4_ = uVar2;
      auVar25._12_4_ = uVar2;
      auVar25._16_4_ = uVar2;
      auVar25._20_4_ = uVar2;
      auVar25._24_4_ = uVar2;
      auVar25._28_4_ = uVar2;
      uVar19 = uVar17 & 0xfffffffffffffff8;
      auVar27._4_4_ = uVar4;
      auVar27._0_4_ = uVar4;
      auVar27._8_4_ = uVar4;
      auVar27._12_4_ = uVar4;
      auVar27._16_4_ = uVar4;
      auVar27._20_4_ = uVar4;
      auVar27._24_4_ = uVar4;
      auVar27._28_4_ = uVar4;
      do {
        lVar1 = param_1 + uVar18;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)((uVar16 - 6) + lVar1);
        auVar22 = vpmovzxbw_avx(auVar13);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(uVar16 + 6 + lVar1);
        auVar20 = vpmovzxbw_avx(auVar14);
        auVar22 = vpaddw_avx(auVar22,auVar20);
        auVar24 = vpmovzxwd_avx2(auVar22);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)((uVar16 - 3) + lVar1);
        auVar22 = vpmovzxbw_avx(auVar7);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(uVar16 + 3 + lVar1);
        auVar20 = vpmovzxbw_avx(auVar8);
        auVar22 = vpaddw_avx(auVar22,auVar20);
        auVar26 = vpmovzxwd_avx2(auVar22);
        auVar26 = vcvtdq2ps_avx(auVar26);
        auVar10._4_4_ = fVar3 * auVar26._4_4_;
        auVar10._0_4_ = fVar3 * auVar26._0_4_;
        auVar10._8_4_ = fVar3 * auVar26._8_4_;
        auVar10._12_4_ = fVar3 * auVar26._12_4_;
        auVar10._16_4_ = fVar3 * auVar26._16_4_;
        auVar10._20_4_ = fVar3 * auVar26._20_4_;
        auVar10._24_4_ = fVar3 * auVar26._24_4_;
        auVar10._28_4_ = auVar26._28_4_;
        auVar20 = vfmadd231ps_fma(auVar10,auVar24,auVar25);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(uVar16 + lVar1);
        auVar22 = vpmovzxbw_avx(auVar9);
        auVar24 = vpmovzxwd_avx2(auVar22);
        auVar24 = vcvtdq2ps_avx(auVar24);
        auVar22 = vfmadd231ps_fma(ZEXT1632(auVar20),auVar24,auVar27);
        *(undefined1 (*) [32])(param_2 + uVar18 * 4 + uVar16 * 4) = ZEXT1632(auVar22);
        uVar16 = uVar16 + 8;
      } while (uVar16 < uVar19);
      if (uVar17 <= uVar19) {
        return;
      }
      param_1 = param_1 + uVar18;
      do {
        auVar21._0_4_ = (float)*(byte *)(uVar19 + param_1);
        auVar21._4_8_ = SUB128(ZEXT812(0),4);
        auVar21._12_4_ = 0;
        auVar23._0_4_ =
             (float)((uint)*(byte *)((uVar19 - 6) + param_1) + (uint)*(byte *)(uVar19 + 6 + param_1)
                    );
        auVar23._4_8_ = SUB128(ZEXT812(0),4);
        auVar23._12_4_ = 0;
        auVar22 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 * (float)((uint)*(byte *)((uVar19 - 3) +
                                                                                param_1) +
                                                                (uint)*(byte *)(uVar19 + 3 + param_1
                                                                               )))),auVar23,
                                  ZEXT416(uVar2));
        auVar22 = vfmadd231ss_fma(auVar22,auVar21,ZEXT416(uVar4));
        *(int *)(param_2 + uVar18 * 4 + uVar19 * 4) = auVar22._0_4_;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar17);
      return;
    }
  }
LAB_14020a8ed:
  FUN_14020a77e(uVar4,uVar17,0);
  return;
}

