
void FUN_1408f7a80(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  longlong lVar15;
  undefined1 (*pauVar16) [32];
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  
  lVar29 = (longlong)(param_5 >> 1);
  lVar26 = param_1 - lVar29;
  fVar3 = *param_4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x20) {
LAB_1408f8647:
      uVar23 = 0;
    }
    else {
      uVar19 = param_2 & 0x1f;
      if (uVar19 != 0) {
        if ((param_2 & 3) != 0) goto LAB_1408f8647;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar19 + 0x20)) goto LAB_1408f8647;
      uVar18 = 0;
      uVar23 = param_3 - (param_3 - uVar19 & 0x1f);
      if (uVar19 != 0) {
        do {
          *(float *)(param_2 + uVar18 * 4) =
               fVar3 * (float)((uint)*(byte *)(uVar18 + lVar26) +
                              (uint)*(byte *)(uVar18 + lVar29 + param_1));
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar19);
      }
      do {
        auVar39 = *(undefined1 (*) [32])(uVar19 + lVar29 + param_1);
        auVar12 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar19 + lVar26),0));
        auVar48 = vpmovzxbw_avx2(auVar39._0_16_);
        auVar12 = vpaddw_avx2(auVar12,auVar48);
        auVar48 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar19 + lVar26),0x10));
        auVar39 = vpmovzxbw_avx2(auVar39._16_16_);
        auVar48 = vpaddw_avx2(auVar48,auVar39);
        auVar39 = vpmovzxwd_avx2(auVar12._0_16_);
        auVar39 = vcvtdq2ps_avx(auVar39);
        auVar12 = vpmovzxwd_avx2(auVar12._16_16_);
        auVar12 = vcvtdq2ps_avx(auVar12);
        pfVar1 = (float *)(param_2 + uVar19 * 4);
        *pfVar1 = fVar3 * auVar39._0_4_;
        pfVar1[1] = fVar3 * auVar39._4_4_;
        pfVar1[2] = fVar3 * auVar39._8_4_;
        pfVar1[3] = fVar3 * auVar39._12_4_;
        pfVar1[4] = fVar3 * auVar39._16_4_;
        pfVar1[5] = fVar3 * auVar39._20_4_;
        pfVar1[6] = fVar3 * auVar39._24_4_;
        pfVar1[7] = auVar39._28_4_;
        auVar13._4_4_ = fVar3 * auVar12._4_4_;
        auVar13._0_4_ = fVar3 * auVar12._0_4_;
        auVar13._8_4_ = fVar3 * auVar12._8_4_;
        auVar13._12_4_ = fVar3 * auVar12._12_4_;
        auVar13._16_4_ = fVar3 * auVar12._16_4_;
        auVar13._20_4_ = fVar3 * auVar12._20_4_;
        auVar13._24_4_ = fVar3 * auVar12._24_4_;
        auVar13._28_4_ = auVar39._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = auVar13;
        auVar39 = vpmovzxwd_avx2(auVar48._0_16_);
        auVar39 = vcvtdq2ps_avx(auVar39);
        auVar48 = vpmovzxwd_avx2(auVar48._16_16_);
        auVar48 = vcvtdq2ps_avx(auVar48);
        auVar14._4_4_ = fVar3 * auVar39._4_4_;
        auVar14._0_4_ = fVar3 * auVar39._0_4_;
        auVar14._8_4_ = fVar3 * auVar39._8_4_;
        auVar14._12_4_ = fVar3 * auVar39._12_4_;
        auVar14._16_4_ = fVar3 * auVar39._16_4_;
        auVar14._20_4_ = fVar3 * auVar39._20_4_;
        auVar14._24_4_ = fVar3 * auVar39._24_4_;
        auVar14._28_4_ = auVar12._28_4_;
        auVar12._4_4_ = fVar3 * auVar48._4_4_;
        auVar12._0_4_ = fVar3 * auVar48._0_4_;
        auVar12._8_4_ = fVar3 * auVar48._8_4_;
        auVar12._12_4_ = fVar3 * auVar48._12_4_;
        auVar12._16_4_ = fVar3 * auVar48._16_4_;
        auVar12._20_4_ = fVar3 * auVar48._20_4_;
        auVar12._24_4_ = fVar3 * auVar48._24_4_;
        auVar12._28_4_ = auVar39._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4) = auVar14;
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4) = auVar12;
        uVar19 = uVar19 + 0x20;
      } while (uVar19 < uVar23);
    }
    if (uVar23 + 1 <= param_3) {
      uVar19 = param_3 - uVar23;
      if ((longlong)uVar19 < 8) {
        uVar18 = 0;
      }
      else {
        uVar31 = 0;
        uVar18 = uVar19 & 0xfffffffffffffff8;
        do {
          auVar37._8_8_ = 0;
          auVar37._0_8_ = *(ulonglong *)(uVar23 + lVar26 + uVar31);
          auVar37 = vpmovzxbw_avx(auVar37);
          auVar45._8_8_ = 0;
          auVar45._0_8_ = *(ulonglong *)(lVar29 + param_1 + uVar23 + uVar31);
          auVar45 = vpmovzxbw_avx(auVar45);
          auVar37 = vpaddw_avx(auVar37,auVar45);
          auVar39 = vpmovzxwd_avx2(auVar37);
          auVar39 = vcvtdq2ps_avx(auVar39);
          auVar48._0_4_ = fVar3 * auVar39._0_4_;
          auVar48._4_4_ = fVar3 * auVar39._4_4_;
          auVar48._8_4_ = fVar3 * auVar39._8_4_;
          auVar48._12_4_ = fVar3 * auVar39._12_4_;
          auVar48._16_4_ = fVar3 * auVar39._16_4_;
          auVar48._20_4_ = fVar3 * auVar39._20_4_;
          auVar48._24_4_ = fVar3 * auVar39._24_4_;
          auVar48._28_4_ = 0;
          *(undefined1 (*) [32])(param_2 + uVar23 * 4 + uVar31 * 4) = auVar48;
          uVar31 = uVar31 + 8;
        } while (uVar31 < uVar18);
      }
      if (uVar18 < uVar19) {
        do {
          *(float *)(param_2 + uVar23 * 4 + uVar18 * 4) =
               fVar3 * (float)((uint)*(byte *)(uVar18 + uVar23 + lVar26) +
                              (uint)*(byte *)(uVar18 + lVar29 + param_1 + uVar23));
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar19);
      }
    }
  }
  lVar15 = lVar26;
  if (1 < lVar29) {
    lVar17 = 0;
    lVar24 = 1;
    lVar22 = 0;
    if (lVar29 - 1U >> 1 != 0) {
      lVar24 = lVar29 + param_1;
      uVar23 = param_2 & 0x1f;
      uVar19 = 0;
      lVar20 = lVar26;
      do {
        uVar18 = uVar19;
        fVar3 = param_4[uVar18 * 2 + 1];
        fVar4 = param_4[uVar18 * 2 + 2];
        lVar15 = lVar20 + 2;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x20) ||
             (((uVar19 = uVar23, uVar23 != 0 && (uVar19 = 0x20 - uVar23 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar19 + 0x20))))) {
            uVar31 = 0;
          }
          else {
            uVar27 = 0;
            uVar31 = param_3 - (param_3 - uVar19 & 0x1f);
            lVar28 = lVar20;
            lVar25 = lVar24;
            if (uVar19 != 0) {
              do {
                auVar32._0_4_ = (float)((uint)*(byte *)(lVar28 + 2) + (uint)*(byte *)(lVar25 + -2));
                auVar32._4_8_ = SUB128(ZEXT812(0),4);
                auVar32._12_4_ = 0;
                auVar43._0_4_ = (float)((uint)*(byte *)(lVar28 + 1) + (uint)*(byte *)(lVar25 + -1));
                auVar43._4_8_ = SUB128(ZEXT812(0),4);
                auVar43._12_4_ = 0;
                auVar37 = vfmadd213ss_fma(auVar43,ZEXT416((uint)fVar3),
                                          ZEXT416(*(uint *)(param_2 + uVar27 * 4)));
                auVar37 = vfmadd231ss_fma(auVar37,auVar32,ZEXT416((uint)fVar4));
                *(int *)(param_2 + uVar27 * 4) = auVar37._0_4_;
                uVar27 = uVar27 + 1;
                lVar28 = lVar28 + 1;
                lVar25 = lVar25 + 1;
              } while (uVar27 < uVar19);
            }
            auVar46._4_4_ = fVar4;
            auVar46._0_4_ = fVar4;
            auVar46._8_4_ = fVar4;
            auVar46._12_4_ = fVar4;
            auVar46._16_4_ = fVar4;
            auVar46._20_4_ = fVar4;
            auVar46._24_4_ = fVar4;
            auVar46._28_4_ = fVar4;
            lVar28 = lVar20 + uVar19;
            auVar39._4_4_ = fVar3;
            auVar39._0_4_ = fVar3;
            auVar39._8_4_ = fVar3;
            auVar39._12_4_ = fVar3;
            auVar39._16_4_ = fVar3;
            auVar39._20_4_ = fVar3;
            auVar39._24_4_ = fVar3;
            auVar39._28_4_ = fVar3;
            do {
              auVar12 = *(undefined1 (*) [32])((uVar19 - 1) + lVar24);
              auVar13 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(lVar28 + 1),0));
              auVar48 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(lVar28 + 1),0x10));
              auVar14 = vpmovzxbw_avx2(auVar12._16_16_);
              auVar12 = vpmovzxbw_avx2(auVar12._0_16_);
              auVar48 = vpaddw_avx2(auVar48,auVar14);
              auVar13 = vpaddw_avx2(auVar13,auVar12);
              auVar12 = vpmovzxwd_avx2(auVar48._0_16_);
              auVar12 = vcvtdq2ps_avx(auVar12);
              auVar37 = vfmadd213ps_fma(auVar12,auVar39,
                                        *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4));
              auVar12 = vpmovzxwd_avx2(auVar13._0_16_);
              auVar48 = vpmovzxwd_avx2(auVar48._16_16_);
              auVar14 = vpmovzxwd_avx2(auVar13._16_16_);
              auVar48 = vcvtdq2ps_avx(auVar48);
              auVar13 = vcvtdq2ps_avx(auVar12);
              auVar14 = vcvtdq2ps_avx(auVar14);
              pauVar16 = (undefined1 (*) [32])(lVar28 + 2);
              auVar12 = *(undefined1 (*) [32])((uVar19 - 2) + lVar24);
              auVar45 = vfmadd213ps_fma(auVar13,auVar39,*(undefined1 (*) [32])(param_2 + uVar19 * 4)
                                       );
              auVar32 = vfmadd213ps_fma(auVar14,auVar39,
                                        *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4));
              auVar43 = vfmadd213ps_fma(auVar48,auVar39,
                                        *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4));
              lVar28 = lVar28 + 0x20;
              auVar48 = vpmovzxbw_avx2(SUB3216(*pauVar16,0));
              auVar13 = vpmovzxbw_avx2(auVar12._0_16_);
              auVar48 = vpaddw_avx2(auVar48,auVar13);
              auVar13 = vpmovzxbw_avx2(SUB3216(*pauVar16,0x10));
              auVar12 = vpmovzxbw_avx2(auVar12._16_16_);
              auVar13 = vpaddw_avx2(auVar13,auVar12);
              auVar12 = vpmovzxwd_avx2(auVar48._0_16_);
              auVar12 = vcvtdq2ps_avx(auVar12);
              auVar45 = vfmadd231ps_fma(ZEXT1632(auVar45),auVar12,auVar46);
              *(undefined1 (*) [32])(param_2 + uVar19 * 4) = ZEXT1632(auVar45);
              auVar12 = vpmovzxwd_avx2(auVar48._16_16_);
              auVar12 = vcvtdq2ps_avx(auVar12);
              auVar45 = vfmadd231ps_fma(ZEXT1632(auVar32),auVar12,auVar46);
              *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = ZEXT1632(auVar45);
              auVar12 = vpmovzxwd_avx2(auVar13._0_16_);
              auVar12 = vcvtdq2ps_avx(auVar12);
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar37),auVar12,auVar46);
              *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4) = ZEXT1632(auVar37);
              auVar12 = vpmovzxwd_avx2(auVar13._16_16_);
              auVar12 = vcvtdq2ps_avx(auVar12);
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar43),auVar12,auVar46);
              *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4) = ZEXT1632(auVar37);
              uVar19 = uVar19 + 0x20;
            } while (uVar19 < uVar31);
          }
          if (uVar31 + 1 <= param_3) {
            uVar19 = param_3 - uVar31;
            if ((longlong)uVar19 < 8) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar19 & 0xfffffffffffffff8;
              pauVar16 = (undefined1 (*) [32])(param_2 + uVar31 * 4);
              auVar47._4_4_ = fVar4;
              auVar47._0_4_ = fVar4;
              auVar47._8_4_ = fVar4;
              auVar47._12_4_ = fVar4;
              auVar47._16_4_ = fVar4;
              auVar47._20_4_ = fVar4;
              auVar47._24_4_ = fVar4;
              auVar47._28_4_ = fVar4;
              auVar40._4_4_ = fVar3;
              auVar40._0_4_ = fVar3;
              auVar40._8_4_ = fVar3;
              auVar40._12_4_ = fVar3;
              auVar40._16_4_ = fVar3;
              auVar40._20_4_ = fVar3;
              auVar40._24_4_ = fVar3;
              auVar40._28_4_ = fVar3;
              uVar30 = 0;
              lVar28 = lVar17;
              lVar25 = lVar22;
              do {
                uVar30 = uVar30 + 8;
                lVar2 = param_1 + lVar29 + uVar31;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = *(ulonglong *)(lVar28 + -1 + lVar2);
                auVar37 = vpmovzxbw_avx(auVar5);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = *(ulonglong *)(lVar28 + -2 + lVar2);
                auVar45 = vpmovzxbw_avx(auVar6);
                lVar2 = (param_1 - lVar29) + uVar31;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *(ulonglong *)(lVar25 + 1 + lVar2);
                auVar32 = vpmovzxbw_avx(auVar7);
                lVar28 = lVar28 + 8;
                auVar37 = vpaddw_avx(auVar32,auVar37);
                auVar39 = vpmovzxwd_avx2(auVar37);
                auVar39 = vcvtdq2ps_avx(auVar39);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = *(ulonglong *)(lVar25 + 2 + lVar2);
                auVar37 = vpmovzxbw_avx(auVar8);
                lVar25 = lVar25 + 8;
                auVar37 = vpaddw_avx(auVar37,auVar45);
                auVar45 = vfmadd213ps_fma(auVar39,auVar40,*pauVar16);
                auVar39 = vpmovzxwd_avx2(auVar37);
                auVar39 = vcvtdq2ps_avx(auVar39);
                auVar37 = vfmadd231ps_fma(ZEXT1632(auVar45),auVar39,auVar47);
                *pauVar16 = ZEXT1632(auVar37);
                pauVar16 = pauVar16 + 1;
              } while (uVar30 < uVar27);
            }
            if (uVar27 < uVar19) {
              puVar21 = (uint *)(param_2 + uVar31 * 4 + uVar27 * 4);
              do {
                lVar28 = uVar27 - 1;
                auVar33._0_4_ =
                     (float)((uint)*(byte *)(uVar27 + 2 + uVar31 + lVar20) +
                            (uint)*(byte *)((uVar27 - 2) + uVar31 + lVar24));
                auVar33._4_8_ = SUB128(ZEXT812(0),4);
                auVar33._12_4_ = 0;
                lVar25 = uVar27 + 1;
                uVar27 = uVar27 + 1;
                auVar44._0_4_ =
                     (float)((uint)*(byte *)(lVar25 + uVar31 + lVar20) +
                            (uint)*(byte *)(lVar28 + uVar31 + lVar24));
                auVar44._4_8_ = SUB128(ZEXT812(0),4);
                auVar44._12_4_ = 0;
                auVar37 = vfmadd213ss_fma(auVar44,ZEXT416((uint)fVar3),ZEXT416(*puVar21));
                auVar37 = vfmadd231ss_fma(auVar37,auVar33,ZEXT416((uint)fVar4));
                *puVar21 = auVar37._0_4_;
                puVar21 = puVar21 + 1;
              } while (uVar27 < uVar19);
            }
          }
        }
        uVar19 = uVar18 + 1;
        lVar24 = lVar24 + -2;
        lVar17 = lVar17 + -2;
        lVar20 = lVar20 + 2;
        lVar22 = lVar22 + 2;
      } while (uVar19 < lVar29 - 1U >> 1);
      lVar24 = uVar18 + 2 + uVar19;
    }
    if (lVar29 != lVar24) {
      fVar3 = param_4[lVar24];
      lVar15 = lVar24 + lVar26;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x20) {
LAB_1408f8629:
          uVar23 = 0;
        }
        else {
          uVar19 = param_2 & 0x1f;
          if (uVar19 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1408f8629;
            uVar19 = 0x20 - uVar19 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar19 + 0x20)) goto LAB_1408f8629;
          lVar17 = (lVar29 + param_1) - lVar24;
          uVar18 = 0;
          uVar23 = param_3 - (param_3 - uVar19 & 0x1f);
          if (uVar19 != 0) {
            do {
              auVar34._0_4_ =
                   (float)((uint)*(byte *)(uVar18 + lVar26 + lVar24) +
                          (uint)*(byte *)(uVar18 + lVar17));
              auVar34._4_8_ = SUB128(ZEXT812(0),4);
              auVar34._12_4_ = 0;
              auVar37 = vfmadd213ss_fma(auVar34,ZEXT416((uint)fVar3),
                                        ZEXT416(*(uint *)(param_2 + uVar18 * 4)));
              *(int *)(param_2 + uVar18 * 4) = auVar37._0_4_;
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar19);
          }
          auVar49._4_4_ = fVar3;
          auVar49._0_4_ = fVar3;
          auVar49._8_4_ = fVar3;
          auVar49._12_4_ = fVar3;
          auVar49._16_4_ = fVar3;
          auVar49._20_4_ = fVar3;
          auVar49._24_4_ = fVar3;
          auVar49._28_4_ = fVar3;
          do {
            auVar39 = *(undefined1 (*) [32])(uVar19 + lVar26 + lVar24);
            auVar12 = *(undefined1 (*) [32])(uVar19 + lVar17);
            auVar48 = vpmovzxbw_avx2(auVar39._0_16_);
            auVar13 = vpmovzxbw_avx2(auVar12._0_16_);
            auVar48 = vpaddw_avx2(auVar48,auVar13);
            auVar39 = vpmovzxbw_avx2(auVar39._16_16_);
            auVar12 = vpmovzxbw_avx2(auVar12._16_16_);
            auVar13 = vpaddw_avx2(auVar39,auVar12);
            auVar12 = vpmovzxwd_avx2(auVar48._0_16_);
            auVar39 = vpmovzxwd_avx2(auVar48._16_16_);
            auVar39 = vcvtdq2ps_avx(auVar39);
            auVar12 = vcvtdq2ps_avx(auVar12);
            auVar37 = vfmadd213ps_fma(auVar39,auVar49,
                                      *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4));
            auVar45 = vfmadd213ps_fma(auVar12,auVar49,*(undefined1 (*) [32])(param_2 + uVar19 * 4));
            *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = ZEXT1632(auVar37);
            *(undefined1 (*) [32])(param_2 + uVar19 * 4) = ZEXT1632(auVar45);
            auVar39 = vpmovzxwd_avx2(auVar13._0_16_);
            auVar39 = vcvtdq2ps_avx(auVar39);
            auVar12 = vpmovzxwd_avx2(auVar13._16_16_);
            auVar12 = vcvtdq2ps_avx(auVar12);
            auVar37 = vfmadd213ps_fma(auVar39,auVar49,
                                      *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4));
            auVar45 = vfmadd213ps_fma(auVar12,auVar49,
                                      *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4));
            *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4) = ZEXT1632(auVar37);
            *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4) = ZEXT1632(auVar45);
            uVar19 = uVar19 + 0x20;
          } while (uVar19 < uVar23);
        }
        if (uVar23 + 1 <= param_3) {
          uVar19 = param_3 - uVar23;
          if ((longlong)uVar19 < 8) {
            uVar18 = 0;
          }
          else {
            auVar41._4_4_ = fVar3;
            auVar41._0_4_ = fVar3;
            auVar41._8_4_ = fVar3;
            auVar41._12_4_ = fVar3;
            auVar41._16_4_ = fVar3;
            auVar41._20_4_ = fVar3;
            auVar41._24_4_ = fVar3;
            auVar41._28_4_ = fVar3;
            uVar31 = 0;
            uVar18 = uVar19 & 0xfffffffffffffff8;
            pauVar16 = (undefined1 (*) [32])(param_2 + uVar23 * 4);
            do {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = *(ulonglong *)((param_1 - (lVar29 - lVar24)) + uVar23 + uVar31);
              auVar37 = vpmovzxbw_avx(auVar9);
              auVar10._8_8_ = 0;
              auVar10._0_8_ = *(ulonglong *)((lVar29 - lVar24) + param_1 + uVar23 + uVar31);
              auVar45 = vpmovzxbw_avx(auVar10);
              uVar31 = uVar31 + 8;
              auVar37 = vpaddw_avx(auVar37,auVar45);
              auVar39 = vpmovzxwd_avx2(auVar37);
              auVar39 = vcvtdq2ps_avx(auVar39);
              auVar37 = vfmadd213ps_fma(auVar39,auVar41,*pauVar16);
              *pauVar16 = ZEXT1632(auVar37);
              pauVar16 = pauVar16 + 1;
            } while (uVar31 < uVar18);
          }
          if (uVar18 < uVar19) {
            puVar21 = (uint *)(param_2 + uVar23 * 4 + uVar18 * 4);
            do {
              auVar35._0_4_ =
                   (float)((uint)*(byte *)(uVar18 + (param_1 - (lVar29 - lVar24)) + uVar23) +
                          (uint)*(byte *)(uVar18 + uVar23 + param_1 + (lVar29 - lVar24)));
              auVar35._4_8_ = SUB128(ZEXT812(0),4);
              auVar35._12_4_ = 0;
              auVar37 = vfmadd213ss_fma(auVar35,ZEXT416((uint)fVar3),ZEXT416(*puVar21));
              uVar18 = uVar18 + 1;
              *puVar21 = auVar37._0_4_;
              puVar21 = puVar21 + 1;
            } while (uVar18 < uVar19);
          }
        }
      }
    }
  }
  fVar3 = param_4[lVar29];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0x1f < (longlong)param_3) {
    uVar19 = param_2 & 0x1f;
    if (uVar19 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408f861b;
      uVar19 = 0x20 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 0x20) <= (longlong)param_3) {
      uVar18 = 0;
      uVar23 = param_3 - (param_3 - uVar19 & 0x1f);
      if (uVar19 != 0) {
        do {
          auVar36._0_4_ = (float)*(byte *)(uVar18 + 1 + lVar15);
          auVar36._4_8_ = SUB128(ZEXT812(0),4);
          auVar36._12_4_ = 0;
          auVar37 = vfmadd213ss_fma(auVar36,ZEXT416((uint)fVar3),
                                    ZEXT416(*(uint *)(param_2 + uVar18 * 4)));
          *(int *)(param_2 + uVar18 * 4) = auVar37._0_4_;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar19);
      }
      auVar50._4_4_ = fVar3;
      auVar50._0_4_ = fVar3;
      auVar50._8_4_ = fVar3;
      auVar50._12_4_ = fVar3;
      auVar50._16_4_ = fVar3;
      auVar50._20_4_ = fVar3;
      auVar50._24_4_ = fVar3;
      auVar50._28_4_ = fVar3;
      do {
        auVar39 = *(undefined1 (*) [32])(uVar19 + 1 + lVar15);
        auVar45 = auVar39._0_16_;
        auVar32 = auVar39._16_16_;
        auVar37 = vpsrldq_avx(auVar45,8);
        auVar39 = vpmovzxbd_avx2(auVar45);
        auVar12 = vpmovzxbd_avx2(auVar37);
        auVar48 = vpmovzxbd_avx2(auVar32);
        auVar37 = vpsrldq_avx(auVar32,8);
        auVar13 = vpmovzxbd_avx2(auVar37);
        auVar39 = vcvtdq2ps_avx(auVar39);
        auVar12 = vcvtdq2ps_avx(auVar12);
        auVar48 = vcvtdq2ps_avx(auVar48);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar37 = vfmadd213ps_fma(auVar39,auVar50,*(undefined1 (*) [32])(param_2 + uVar19 * 4));
        auVar45 = vfmadd213ps_fma(auVar12,auVar50,
                                  *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4));
        auVar32 = vfmadd213ps_fma(auVar48,auVar50,
                                  *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4));
        auVar43 = vfmadd213ps_fma(auVar13,auVar50,
                                  *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4));
        *(undefined1 (*) [32])(param_2 + uVar19 * 4) = ZEXT1632(auVar37);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar19 * 4) = ZEXT1632(auVar45);
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar19 * 4) = ZEXT1632(auVar32);
        *(undefined1 (*) [32])(param_2 + 0x60 + uVar19 * 4) = ZEXT1632(auVar43);
        uVar19 = uVar19 + 0x20;
      } while (uVar19 < uVar23);
      goto LAB_1408f8559;
    }
  }
LAB_1408f861b:
  uVar23 = 0;
LAB_1408f8559:
  if (uVar23 + 1 <= param_3) {
    param_3 = param_3 - uVar23;
    if ((longlong)param_3 < 8) {
      uVar19 = 0;
    }
    else {
      uVar18 = 0;
      auVar42._4_4_ = fVar3;
      auVar42._0_4_ = fVar3;
      auVar42._8_4_ = fVar3;
      auVar42._12_4_ = fVar3;
      auVar42._16_4_ = fVar3;
      auVar42._20_4_ = fVar3;
      auVar42._24_4_ = fVar3;
      auVar42._28_4_ = fVar3;
      uVar19 = param_3 & 0xfffffffffffffff8;
      pauVar16 = (undefined1 (*) [32])(param_2 + uVar23 * 4);
      do {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(uVar23 + lVar15 + 1 + uVar18);
        auVar39 = vpmovzxbd_avx2(auVar11);
        uVar18 = uVar18 + 8;
        auVar39 = vcvtdq2ps_avx(auVar39);
        auVar37 = vfmadd213ps_fma(auVar39,auVar42,*pauVar16);
        *pauVar16 = ZEXT1632(auVar37);
        pauVar16 = pauVar16 + 1;
      } while (uVar18 < uVar19);
    }
    if (uVar19 < param_3) {
      puVar21 = (uint *)(param_2 + uVar23 * 4 + uVar19 * 4);
      do {
        lVar26 = uVar19 + 1;
        uVar19 = uVar19 + 1;
        auVar38._0_4_ = (float)*(byte *)(lVar26 + uVar23 + lVar15);
        auVar38._4_8_ = SUB128(ZEXT812(0),4);
        auVar38._12_4_ = 0;
        auVar37 = vfmadd213ss_fma(auVar38,ZEXT416((uint)fVar3),ZEXT416(*puVar21));
        *puVar21 = auVar37._0_4_;
        puVar21 = puVar21 + 1;
      } while (uVar19 < param_3);
    }
  }
  return;
}

