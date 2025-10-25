
void FUN_1408a5080(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [32];
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  longlong lStack_a0;
  
  lVar26 = (longlong)(param_5 >> 1);
  uVar20 = param_3 * 3;
  lVar3 = lVar26 * 3;
  lVar29 = param_1 + lVar26 * -3;
  fVar4 = *param_4;
  if (0 < (longlong)uVar20) {
    if ((longlong)uVar20 < 0x20) {
LAB_1408a5ca8:
      uVar21 = 0;
    }
    else {
      uVar28 = param_2 & 0x1f;
      if (uVar28 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1408a5ca8;
        uVar28 = 0x20 - uVar28 >> 2;
      }
      if ((longlong)uVar20 < (longlong)(uVar28 + 0x20)) goto LAB_1408a5ca8;
      lVar18 = lVar26 * -3 + param_1;
      uVar16 = 0;
      uVar21 = uVar20 - (uVar20 - uVar28 & 0x1f);
      if (uVar28 != 0) {
        do {
          *(float *)(param_2 + uVar16 * 4) =
               fVar4 * (float)((uint)*(byte *)(uVar16 + lVar18) +
                              (uint)*(byte *)(uVar16 + param_1 + lVar3));
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar28);
      }
      do {
        auVar40 = *(undefined1 (*) [32])(uVar28 + lVar18);
        auVar6 = *(undefined1 (*) [32])(uVar28 + param_1 + lVar3);
        auVar14 = vpmovzxbw_avx2(auVar40._0_16_);
        auVar15 = vpmovzxbw_avx2(auVar6._0_16_);
        auVar14 = vpaddw_avx2(auVar14,auVar15);
        auVar40 = vpmovzxbw_avx2(auVar40._16_16_);
        auVar6 = vpmovzxbw_avx2(auVar6._16_16_);
        auVar15 = vpaddw_avx2(auVar40,auVar6);
        auVar40 = vpmovzxwd_avx2(auVar14._0_16_);
        auVar40 = vcvtdq2ps_avx(auVar40);
        auVar6 = vpmovzxwd_avx2(auVar14._16_16_);
        auVar6 = vcvtdq2ps_avx(auVar6);
        pfVar1 = (float *)(param_2 + uVar28 * 4);
        *pfVar1 = fVar4 * auVar40._0_4_;
        pfVar1[1] = fVar4 * auVar40._4_4_;
        pfVar1[2] = fVar4 * auVar40._8_4_;
        pfVar1[3] = fVar4 * auVar40._12_4_;
        pfVar1[4] = fVar4 * auVar40._16_4_;
        pfVar1[5] = fVar4 * auVar40._20_4_;
        pfVar1[6] = fVar4 * auVar40._24_4_;
        pfVar1[7] = auVar40._28_4_;
        auVar14._4_4_ = fVar4 * auVar6._4_4_;
        auVar14._0_4_ = fVar4 * auVar6._0_4_;
        auVar14._8_4_ = fVar4 * auVar6._8_4_;
        auVar14._12_4_ = fVar4 * auVar6._12_4_;
        auVar14._16_4_ = fVar4 * auVar6._16_4_;
        auVar14._20_4_ = fVar4 * auVar6._20_4_;
        auVar14._24_4_ = fVar4 * auVar6._24_4_;
        auVar14._28_4_ = auVar40._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = auVar14;
        auVar40 = vpmovzxwd_avx2(auVar15._0_16_);
        auVar40 = vcvtdq2ps_avx(auVar40);
        auVar14 = vpmovzxwd_avx2(auVar15._16_16_);
        auVar14 = vcvtdq2ps_avx(auVar14);
        auVar15._4_4_ = fVar4 * auVar40._4_4_;
        auVar15._0_4_ = fVar4 * auVar40._0_4_;
        auVar15._8_4_ = fVar4 * auVar40._8_4_;
        auVar15._12_4_ = fVar4 * auVar40._12_4_;
        auVar15._16_4_ = fVar4 * auVar40._16_4_;
        auVar15._20_4_ = fVar4 * auVar40._20_4_;
        auVar15._24_4_ = fVar4 * auVar40._24_4_;
        auVar15._28_4_ = auVar6._28_4_;
        auVar6._4_4_ = fVar4 * auVar14._4_4_;
        auVar6._0_4_ = fVar4 * auVar14._0_4_;
        auVar6._8_4_ = fVar4 * auVar14._8_4_;
        auVar6._12_4_ = fVar4 * auVar14._12_4_;
        auVar6._16_4_ = fVar4 * auVar14._16_4_;
        auVar6._20_4_ = fVar4 * auVar14._20_4_;
        auVar6._24_4_ = fVar4 * auVar14._24_4_;
        auVar6._28_4_ = auVar40._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4) = auVar15;
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4) = auVar6;
        uVar28 = uVar28 + 0x20;
      } while (uVar28 < uVar21);
    }
    if (uVar21 + 1 <= uVar20) {
      uVar28 = uVar20 - uVar21;
      if ((longlong)uVar28 < 8) {
        uVar16 = 0;
      }
      else {
        uVar31 = 0;
        uVar16 = uVar28 & 0xfffffffffffffff8;
        do {
          auVar38._8_8_ = 0;
          auVar38._0_8_ = *(ulonglong *)(lVar26 * -3 + param_1 + uVar21 + uVar31);
          auVar38 = vpmovzxbw_avx(auVar38);
          auVar46._8_8_ = 0;
          auVar46._0_8_ = *(ulonglong *)(param_1 + lVar3 + uVar21 + uVar31);
          auVar46 = vpmovzxbw_avx(auVar46);
          auVar38 = vpaddw_avx(auVar38,auVar46);
          auVar40 = vpmovzxwd_avx2(auVar38);
          auVar40 = vcvtdq2ps_avx(auVar40);
          auVar49._0_4_ = fVar4 * auVar40._0_4_;
          auVar49._4_4_ = fVar4 * auVar40._4_4_;
          auVar49._8_4_ = fVar4 * auVar40._8_4_;
          auVar49._12_4_ = fVar4 * auVar40._12_4_;
          auVar49._16_4_ = fVar4 * auVar40._16_4_;
          auVar49._20_4_ = fVar4 * auVar40._20_4_;
          auVar49._24_4_ = fVar4 * auVar40._24_4_;
          auVar49._28_4_ = 0;
          *(undefined1 (*) [32])(param_2 + uVar21 * 4 + uVar31 * 4) = auVar49;
          uVar31 = uVar31 + 8;
        } while (uVar31 < uVar16);
      }
      if (uVar16 < uVar28) {
        do {
          *(float *)(param_2 + uVar21 * 4 + uVar16 * 4) =
               fVar4 * (float)((uint)*(byte *)(uVar16 + lVar26 * -3 + param_1 + uVar21) +
                              (uint)*(byte *)(uVar16 + param_1 + lVar3 + uVar21));
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar28);
      }
    }
  }
  lStack_a0 = lVar29;
  if (1 < lVar26) {
    lVar22 = 0;
    lVar18 = 1;
    if (lVar26 - 1U >> 1 != 0) {
      uVar21 = param_2 & 0x1f;
      lVar18 = param_1 + lVar3;
      lVar19 = lVar29;
      uVar28 = 0;
      lVar32 = lVar22;
      do {
        uVar16 = uVar28;
        lStack_a0 = lVar19 + 6;
        fVar4 = param_4[uVar16 * 2 + 1];
        fVar5 = param_4[uVar16 * 2 + 2];
        if (0 < (longlong)uVar20) {
          if (((longlong)uVar20 < 0x20) ||
             (((uVar28 = uVar21, uVar21 != 0 && (uVar28 = 0x20 - uVar21 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar20 < (longlong)(uVar28 + 0x20))))) {
            uVar31 = 0;
          }
          else {
            uVar27 = 0;
            uVar31 = uVar20 - (uVar20 - uVar28 & 0x1f);
            lVar24 = lVar19;
            lVar25 = lVar18;
            if (uVar28 != 0) {
              do {
                auVar33._0_4_ = (float)((uint)*(byte *)(lVar24 + 6) + (uint)*(byte *)(lVar25 + -6));
                auVar33._4_8_ = SUB128(ZEXT812(0),4);
                auVar33._12_4_ = 0;
                auVar44._0_4_ = (float)((uint)*(byte *)(lVar24 + 3) + (uint)*(byte *)(lVar25 + -3));
                auVar44._4_8_ = SUB128(ZEXT812(0),4);
                auVar44._12_4_ = 0;
                auVar38 = vfmadd213ss_fma(auVar44,ZEXT416((uint)fVar4),
                                          ZEXT416(*(uint *)(param_2 + uVar27 * 4)));
                auVar38 = vfmadd231ss_fma(auVar38,auVar33,ZEXT416((uint)fVar5));
                *(int *)(param_2 + uVar27 * 4) = auVar38._0_4_;
                uVar27 = uVar27 + 1;
                lVar24 = lVar24 + 1;
                lVar25 = lVar25 + 1;
              } while (uVar27 < uVar28);
            }
            auVar47._4_4_ = fVar5;
            auVar47._0_4_ = fVar5;
            auVar47._8_4_ = fVar5;
            auVar47._12_4_ = fVar5;
            auVar47._16_4_ = fVar5;
            auVar47._20_4_ = fVar5;
            auVar47._24_4_ = fVar5;
            auVar47._28_4_ = fVar5;
            lVar24 = lVar19 + uVar28;
            auVar40._4_4_ = fVar4;
            auVar40._0_4_ = fVar4;
            auVar40._8_4_ = fVar4;
            auVar40._12_4_ = fVar4;
            auVar40._16_4_ = fVar4;
            auVar40._20_4_ = fVar4;
            auVar40._24_4_ = fVar4;
            auVar40._28_4_ = fVar4;
            do {
              auVar6 = *(undefined1 (*) [32])((uVar28 - 3) + lVar18);
              auVar15 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(lVar24 + 3),0));
              auVar14 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(lVar24 + 3),0x10));
              auVar49 = vpmovzxbw_avx2(auVar6._16_16_);
              auVar6 = vpmovzxbw_avx2(auVar6._0_16_);
              auVar14 = vpaddw_avx2(auVar14,auVar49);
              auVar15 = vpaddw_avx2(auVar15,auVar6);
              auVar6 = vpmovzxwd_avx2(auVar14._0_16_);
              auVar6 = vcvtdq2ps_avx(auVar6);
              auVar38 = vfmadd213ps_fma(auVar6,auVar40,
                                        *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4));
              auVar6 = vpmovzxwd_avx2(auVar15._0_16_);
              auVar14 = vpmovzxwd_avx2(auVar14._16_16_);
              auVar49 = vpmovzxwd_avx2(auVar15._16_16_);
              auVar14 = vcvtdq2ps_avx(auVar14);
              auVar15 = vcvtdq2ps_avx(auVar6);
              auVar49 = vcvtdq2ps_avx(auVar49);
              pauVar23 = (undefined1 (*) [32])(lVar24 + 6);
              auVar6 = *(undefined1 (*) [32])((uVar28 - 6) + lVar18);
              auVar46 = vfmadd213ps_fma(auVar15,auVar40,*(undefined1 (*) [32])(param_2 + uVar28 * 4)
                                       );
              auVar33 = vfmadd213ps_fma(auVar49,auVar40,
                                        *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4));
              auVar44 = vfmadd213ps_fma(auVar14,auVar40,
                                        *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4));
              lVar24 = lVar24 + 0x20;
              auVar14 = vpmovzxbw_avx2(SUB3216(*pauVar23,0));
              auVar15 = vpmovzxbw_avx2(auVar6._0_16_);
              auVar14 = vpaddw_avx2(auVar14,auVar15);
              auVar15 = vpmovzxbw_avx2(SUB3216(*pauVar23,0x10));
              auVar6 = vpmovzxbw_avx2(auVar6._16_16_);
              auVar15 = vpaddw_avx2(auVar15,auVar6);
              auVar6 = vpmovzxwd_avx2(auVar14._0_16_);
              auVar6 = vcvtdq2ps_avx(auVar6);
              auVar46 = vfmadd231ps_fma(ZEXT1632(auVar46),auVar6,auVar47);
              *(undefined1 (*) [32])(param_2 + uVar28 * 4) = ZEXT1632(auVar46);
              auVar6 = vpmovzxwd_avx2(auVar14._16_16_);
              auVar6 = vcvtdq2ps_avx(auVar6);
              auVar46 = vfmadd231ps_fma(ZEXT1632(auVar33),auVar6,auVar47);
              *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = ZEXT1632(auVar46);
              auVar6 = vpmovzxwd_avx2(auVar15._0_16_);
              auVar6 = vcvtdq2ps_avx(auVar6);
              auVar38 = vfmadd231ps_fma(ZEXT1632(auVar38),auVar6,auVar47);
              *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4) = ZEXT1632(auVar38);
              auVar6 = vpmovzxwd_avx2(auVar15._16_16_);
              auVar6 = vcvtdq2ps_avx(auVar6);
              auVar38 = vfmadd231ps_fma(ZEXT1632(auVar44),auVar6,auVar47);
              *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4) = ZEXT1632(auVar38);
              uVar28 = uVar28 + 0x20;
            } while (uVar28 < uVar31);
          }
          if (uVar31 + 1 <= uVar20) {
            uVar28 = uVar20 - uVar31;
            if ((longlong)uVar28 < 8) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar28 & 0xfffffffffffffff8;
              pauVar23 = (undefined1 (*) [32])(param_2 + uVar31 * 4);
              auVar48._4_4_ = fVar5;
              auVar48._0_4_ = fVar5;
              auVar48._8_4_ = fVar5;
              auVar48._12_4_ = fVar5;
              auVar48._16_4_ = fVar5;
              auVar48._20_4_ = fVar5;
              auVar48._24_4_ = fVar5;
              auVar48._28_4_ = fVar5;
              auVar41._4_4_ = fVar4;
              auVar41._0_4_ = fVar4;
              auVar41._8_4_ = fVar4;
              auVar41._12_4_ = fVar4;
              auVar41._16_4_ = fVar4;
              auVar41._20_4_ = fVar4;
              auVar41._24_4_ = fVar4;
              auVar41._28_4_ = fVar4;
              uVar30 = 0;
              lVar24 = lVar32;
              lVar25 = lVar22;
              do {
                uVar30 = uVar30 + 8;
                lVar2 = param_1 + lVar3 + uVar31;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *(ulonglong *)(lVar25 + -3 + lVar2);
                auVar38 = vpmovzxbw_avx(auVar7);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = *(ulonglong *)(lVar25 + -6 + lVar2);
                auVar46 = vpmovzxbw_avx(auVar8);
                lVar2 = lVar26 * -3 + param_1 + uVar31;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = *(ulonglong *)(lVar24 + 3 + lVar2);
                auVar33 = vpmovzxbw_avx(auVar9);
                lVar25 = lVar25 + 8;
                auVar38 = vpaddw_avx(auVar33,auVar38);
                auVar40 = vpmovzxwd_avx2(auVar38);
                auVar40 = vcvtdq2ps_avx(auVar40);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = *(ulonglong *)(lVar24 + 6 + lVar2);
                auVar38 = vpmovzxbw_avx(auVar10);
                lVar24 = lVar24 + 8;
                auVar38 = vpaddw_avx(auVar38,auVar46);
                auVar46 = vfmadd213ps_fma(auVar40,auVar41,*pauVar23);
                auVar40 = vpmovzxwd_avx2(auVar38);
                auVar40 = vcvtdq2ps_avx(auVar40);
                auVar38 = vfmadd231ps_fma(ZEXT1632(auVar46),auVar40,auVar48);
                *pauVar23 = ZEXT1632(auVar38);
                pauVar23 = pauVar23 + 1;
              } while (uVar30 < uVar27);
            }
            if (uVar27 < uVar28) {
              puVar17 = (uint *)(param_2 + uVar31 * 4 + uVar27 * 4);
              do {
                lVar24 = uVar27 - 3;
                auVar34._0_4_ =
                     (float)((uint)*(byte *)(uVar27 + 6 + uVar31 + lVar19) +
                            (uint)*(byte *)((uVar27 - 6) + uVar31 + lVar18));
                auVar34._4_8_ = SUB128(ZEXT812(0),4);
                auVar34._12_4_ = 0;
                lVar25 = uVar27 + 3;
                uVar27 = uVar27 + 1;
                auVar45._0_4_ =
                     (float)((uint)*(byte *)(lVar25 + uVar31 + lVar19) +
                            (uint)*(byte *)(lVar24 + uVar31 + lVar18));
                auVar45._4_8_ = SUB128(ZEXT812(0),4);
                auVar45._12_4_ = 0;
                auVar38 = vfmadd213ss_fma(auVar45,ZEXT416((uint)fVar4),ZEXT416(*puVar17));
                auVar38 = vfmadd231ss_fma(auVar38,auVar34,ZEXT416((uint)fVar5));
                *puVar17 = auVar38._0_4_;
                puVar17 = puVar17 + 1;
              } while (uVar27 < uVar28);
            }
          }
        }
        uVar28 = uVar16 + 1;
        lVar18 = lVar18 + -6;
        lVar22 = lVar22 + -6;
        lVar19 = lVar19 + 6;
        lVar32 = lVar32 + 6;
      } while (uVar28 < lVar26 - 1U >> 1);
      lVar18 = uVar16 + 2 + uVar28;
    }
    if (lVar26 != lVar18) {
      fVar4 = param_4[lVar18];
      lStack_a0 = lVar29 + lVar18 * 3;
      if (0 < (longlong)uVar20) {
        if ((longlong)uVar20 < 0x20) {
LAB_1408a5c89:
          uVar21 = 0;
        }
        else {
          uVar28 = param_2 & 0x1f;
          if (uVar28 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1408a5c89;
            uVar28 = 0x20 - uVar28 >> 2;
          }
          if ((longlong)uVar20 < (longlong)(uVar28 + 0x20)) goto LAB_1408a5c89;
          lVar29 = param_1 + lVar3 + lVar18 * -3;
          uVar21 = uVar20 - (uVar20 - uVar28 & 0x1f);
          uVar16 = 0;
          if (uVar28 != 0) {
            do {
              auVar35._0_4_ =
                   (float)((uint)*(byte *)(uVar16 + lStack_a0) + (uint)*(byte *)(uVar16 + lVar29));
              auVar35._4_8_ = SUB128(ZEXT812(0),4);
              auVar35._12_4_ = 0;
              auVar38 = vfmadd213ss_fma(auVar35,ZEXT416((uint)fVar4),
                                        ZEXT416(*(uint *)(param_2 + uVar16 * 4)));
              *(int *)(param_2 + uVar16 * 4) = auVar38._0_4_;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar28);
          }
          auVar50._4_4_ = fVar4;
          auVar50._0_4_ = fVar4;
          auVar50._8_4_ = fVar4;
          auVar50._12_4_ = fVar4;
          auVar50._16_4_ = fVar4;
          auVar50._20_4_ = fVar4;
          auVar50._24_4_ = fVar4;
          auVar50._28_4_ = fVar4;
          do {
            auVar40 = *(undefined1 (*) [32])(uVar28 + lVar29);
            auVar6 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar28 + lStack_a0),0));
            auVar14 = vpmovzxbw_avx2(auVar40._0_16_);
            auVar6 = vpaddw_avx2(auVar6,auVar14);
            auVar14 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar28 + lStack_a0),0x10));
            auVar40 = vpmovzxbw_avx2(auVar40._16_16_);
            auVar14 = vpaddw_avx2(auVar14,auVar40);
            auVar15 = vpmovzxwd_avx2(auVar6._0_16_);
            auVar40 = vpmovzxwd_avx2(auVar6._16_16_);
            auVar40 = vcvtdq2ps_avx(auVar40);
            auVar6 = vcvtdq2ps_avx(auVar15);
            auVar38 = vfmadd213ps_fma(auVar40,auVar50,
                                      *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4));
            auVar46 = vfmadd213ps_fma(auVar6,auVar50,*(undefined1 (*) [32])(param_2 + uVar28 * 4));
            *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = ZEXT1632(auVar38);
            *(undefined1 (*) [32])(param_2 + uVar28 * 4) = ZEXT1632(auVar46);
            auVar40 = vpmovzxwd_avx2(auVar14._0_16_);
            auVar40 = vcvtdq2ps_avx(auVar40);
            auVar6 = vpmovzxwd_avx2(auVar14._16_16_);
            auVar6 = vcvtdq2ps_avx(auVar6);
            auVar38 = vfmadd213ps_fma(auVar40,auVar50,
                                      *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4));
            auVar46 = vfmadd213ps_fma(auVar6,auVar50,
                                      *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4));
            *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4) = ZEXT1632(auVar38);
            *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4) = ZEXT1632(auVar46);
            uVar28 = uVar28 + 0x20;
          } while (uVar28 < uVar21);
        }
        if (uVar21 + 1 <= uVar20) {
          uVar28 = uVar20 - uVar21;
          if ((longlong)uVar28 < 8) {
            uVar16 = 0;
          }
          else {
            uVar31 = 0;
            auVar42._4_4_ = fVar4;
            auVar42._0_4_ = fVar4;
            auVar42._8_4_ = fVar4;
            auVar42._12_4_ = fVar4;
            auVar42._16_4_ = fVar4;
            auVar42._20_4_ = fVar4;
            auVar42._24_4_ = fVar4;
            auVar42._28_4_ = fVar4;
            uVar16 = uVar28 & 0xfffffffffffffff8;
            pauVar23 = (undefined1 (*) [32])(param_2 + uVar21 * 4);
            do {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = *(ulonglong *)((param_1 - (lVar3 + lVar18 * -3)) + uVar21 + uVar31);
              auVar38 = vpmovzxbw_avx(auVar11);
              auVar12._8_8_ = 0;
              auVar12._0_8_ = *(ulonglong *)(lVar18 * -3 + lVar3 + param_1 + uVar21 + uVar31);
              auVar46 = vpmovzxbw_avx(auVar12);
              uVar31 = uVar31 + 8;
              auVar38 = vpaddw_avx(auVar38,auVar46);
              auVar40 = vpmovzxwd_avx2(auVar38);
              auVar40 = vcvtdq2ps_avx(auVar40);
              auVar38 = vfmadd213ps_fma(auVar40,auVar42,*pauVar23);
              *pauVar23 = ZEXT1632(auVar38);
              pauVar23 = pauVar23 + 1;
            } while (uVar31 < uVar16);
          }
          if (uVar16 < uVar28) {
            puVar17 = (uint *)(param_2 + uVar21 * 4 + uVar16 * 4);
            do {
              auVar36._0_4_ =
                   (float)((uint)*(byte *)(uVar16 + (param_1 - (lVar18 * -3 + lVar3)) + uVar21) +
                          (uint)*(byte *)(uVar16 + param_1 + lVar3 + lVar18 * -3 + uVar21));
              auVar36._4_8_ = SUB128(ZEXT812(0),4);
              auVar36._12_4_ = 0;
              auVar38 = vfmadd213ss_fma(auVar36,ZEXT416((uint)fVar4),ZEXT416(*puVar17));
              uVar16 = uVar16 + 1;
              *puVar17 = auVar38._0_4_;
              puVar17 = puVar17 + 1;
            } while (uVar16 < uVar28);
          }
        }
      }
    }
  }
  fVar4 = param_4[lVar26];
  if ((longlong)uVar20 < 1) {
    return;
  }
  if (0x1f < (longlong)uVar20) {
    uVar28 = param_2 & 0x1f;
    if (uVar28 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408a5c7b;
      uVar28 = 0x20 - uVar28 >> 2;
    }
    if ((longlong)(uVar28 + 0x20) <= (longlong)uVar20) {
      uVar16 = 0;
      uVar21 = uVar20 - (uVar20 - uVar28 & 0x1f);
      if (uVar28 != 0) {
        do {
          auVar37._0_4_ = (float)*(byte *)(uVar16 + 3 + lStack_a0);
          auVar37._4_8_ = SUB128(ZEXT812(0),4);
          auVar37._12_4_ = 0;
          auVar38 = vfmadd213ss_fma(auVar37,ZEXT416((uint)fVar4),
                                    ZEXT416(*(uint *)(param_2 + uVar16 * 4)));
          *(int *)(param_2 + uVar16 * 4) = auVar38._0_4_;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar28);
      }
      auVar51._4_4_ = fVar4;
      auVar51._0_4_ = fVar4;
      auVar51._8_4_ = fVar4;
      auVar51._12_4_ = fVar4;
      auVar51._16_4_ = fVar4;
      auVar51._20_4_ = fVar4;
      auVar51._24_4_ = fVar4;
      auVar51._28_4_ = fVar4;
      do {
        auVar40 = *(undefined1 (*) [32])(uVar28 + 3 + lStack_a0);
        auVar46 = auVar40._0_16_;
        auVar33 = auVar40._16_16_;
        auVar38 = vpsrldq_avx(auVar46,8);
        auVar40 = vpmovzxbd_avx2(auVar46);
        auVar6 = vpmovzxbd_avx2(auVar38);
        auVar14 = vpmovzxbd_avx2(auVar33);
        auVar38 = vpsrldq_avx(auVar33,8);
        auVar15 = vpmovzxbd_avx2(auVar38);
        auVar40 = vcvtdq2ps_avx(auVar40);
        auVar6 = vcvtdq2ps_avx(auVar6);
        auVar14 = vcvtdq2ps_avx(auVar14);
        auVar15 = vcvtdq2ps_avx(auVar15);
        auVar38 = vfmadd213ps_fma(auVar40,auVar51,*(undefined1 (*) [32])(param_2 + uVar28 * 4));
        auVar46 = vfmadd213ps_fma(auVar6,auVar51,*(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4)
                                 );
        auVar33 = vfmadd213ps_fma(auVar14,auVar51,
                                  *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4));
        auVar44 = vfmadd213ps_fma(auVar15,auVar51,
                                  *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4));
        *(undefined1 (*) [32])(param_2 + uVar28 * 4) = ZEXT1632(auVar38);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = ZEXT1632(auVar46);
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar28 * 4) = ZEXT1632(auVar33);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar28 * 4) = ZEXT1632(auVar44);
        uVar28 = uVar28 + 0x20;
      } while (uVar28 < uVar21);
      goto LAB_1408a5bb9;
    }
  }
LAB_1408a5c7b:
  uVar21 = 0;
LAB_1408a5bb9:
  if (uVar21 + 1 <= uVar20) {
    uVar20 = uVar20 - uVar21;
    if ((longlong)uVar20 < 8) {
      uVar28 = 0;
    }
    else {
      auVar43._4_4_ = fVar4;
      auVar43._0_4_ = fVar4;
      auVar43._8_4_ = fVar4;
      auVar43._12_4_ = fVar4;
      auVar43._16_4_ = fVar4;
      auVar43._20_4_ = fVar4;
      auVar43._24_4_ = fVar4;
      auVar43._28_4_ = fVar4;
      uVar28 = uVar20 & 0xfffffffffffffff8;
      uVar16 = 0;
      pauVar23 = (undefined1 (*) [32])(param_2 + uVar21 * 4);
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(lStack_a0 + uVar21 + 3 + uVar16);
        auVar40 = vpmovzxbd_avx2(auVar13);
        uVar16 = uVar16 + 8;
        auVar40 = vcvtdq2ps_avx(auVar40);
        auVar38 = vfmadd213ps_fma(auVar40,auVar43,*pauVar23);
        *pauVar23 = ZEXT1632(auVar38);
        pauVar23 = pauVar23 + 1;
      } while (uVar16 < uVar28);
    }
    if (uVar28 < uVar20) {
      puVar17 = (uint *)(param_2 + uVar21 * 4 + uVar28 * 4);
      do {
        lVar3 = uVar28 + 3;
        uVar28 = uVar28 + 1;
        auVar39._0_4_ = (float)*(byte *)(lVar3 + uVar21 + lStack_a0);
        auVar39._4_8_ = SUB128(ZEXT812(0),4);
        auVar39._12_4_ = 0;
        auVar38 = vfmadd213ss_fma(auVar39,ZEXT416((uint)fVar4),ZEXT416(*puVar17));
        *puVar17 = auVar38._0_4_;
        puVar17 = puVar17 + 1;
      } while (uVar28 < uVar20);
    }
  }
  return;
}

