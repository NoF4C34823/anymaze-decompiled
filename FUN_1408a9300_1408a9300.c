
void FUN_1408a9300(longlong param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  undefined1 (*pauVar1) [32];
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  
  lVar29 = (longlong)(param_5 >> 1);
  fVar5 = *param_4;
  lVar27 = lVar29 * -2 + param_1;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x10) {
LAB_1408a9dc8:
      uVar20 = 0;
    }
    else {
      if ((longlong)param_3 < 0x1d) {
        uVar20 = param_3 & 0xfffffffffffffff0;
        uVar25 = 0;
        lVar28 = param_1 + lVar29 * 2;
        lVar18 = lVar29 * -2 + param_1;
      }
      else {
        uVar25 = param_2 & 0x1f;
        if (uVar25 != 0) {
          if ((param_2 & 3) != 0) goto LAB_1408a9dc8;
          uVar25 = 0x20 - uVar25 >> 2;
        }
        if ((longlong)param_3 < (longlong)(uVar25 + 0x10)) goto LAB_1408a9dc8;
        lVar18 = lVar29 * -2 + param_1;
        uVar22 = 0;
        uVar20 = param_3 - (param_3 - uVar25 & 0xf);
        lVar28 = param_1 + lVar29 * 2;
        if (uVar25 != 0) {
          do {
            *(float *)(param_2 + uVar22 * 4) =
                 fVar5 * (float)((int)*(short *)(lVar18 + uVar22 * 2) +
                                (int)*(short *)(lVar28 + uVar22 * 2));
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar25);
        }
      }
      do {
        auVar46 = *(undefined1 (*) [32])(lVar18 + uVar25 * 2);
        auVar50 = *(undefined1 (*) [32])(lVar28 + uVar25 * 2);
        auVar16 = vpmovsxwd_avx2(auVar46._0_16_);
        auVar47 = vpmovsxwd_avx2(auVar50._0_16_);
        auVar16 = vpaddd_avx2(auVar16,auVar47);
        auVar16 = vcvtdq2ps_avx(auVar16);
        auVar46 = vpmovsxwd_avx2(auVar46._16_16_);
        auVar50 = vpmovsxwd_avx2(auVar50._16_16_);
        auVar50 = vpaddd_avx2(auVar46,auVar50);
        auVar46 = vcvtdq2ps_avx(auVar50);
        pfVar2 = (float *)(param_2 + uVar25 * 4);
        *pfVar2 = fVar5 * auVar16._0_4_;
        pfVar2[1] = fVar5 * auVar16._4_4_;
        pfVar2[2] = fVar5 * auVar16._8_4_;
        pfVar2[3] = fVar5 * auVar16._12_4_;
        pfVar2[4] = fVar5 * auVar16._16_4_;
        pfVar2[5] = fVar5 * auVar16._20_4_;
        pfVar2[6] = fVar5 * auVar16._24_4_;
        pfVar2[7] = auVar16._28_4_;
        auVar16._4_4_ = fVar5 * auVar46._4_4_;
        auVar16._0_4_ = fVar5 * auVar46._0_4_;
        auVar16._8_4_ = fVar5 * auVar46._8_4_;
        auVar16._12_4_ = fVar5 * auVar46._12_4_;
        auVar16._16_4_ = fVar5 * auVar46._16_4_;
        auVar16._20_4_ = fVar5 * auVar46._20_4_;
        auVar16._24_4_ = fVar5 * auVar46._24_4_;
        auVar16._28_4_ = auVar50._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar25 * 4) = auVar16;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 < uVar20);
    }
    if (uVar20 + 1 <= param_3) {
      uVar25 = param_3 - uVar20;
      if ((longlong)uVar25 < 4) {
        uVar22 = 0;
      }
      else {
        uVar33 = 0;
        uVar22 = uVar25 & 0xfffffffffffffffc;
        do {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(lVar29 * -2 + param_1 + uVar20 * 2 + uVar33 * 2);
          auVar7 = vpmovsxwd_avx(auVar7);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulonglong *)(param_1 + lVar29 * 2 + uVar20 * 2 + uVar33 * 2);
          auVar8 = vpmovsxwd_avx(auVar8);
          auVar7 = vpaddd_avx(auVar7,auVar8);
          auVar7 = vcvtdq2ps_avx(auVar7);
          auVar49._0_4_ = fVar5 * auVar7._0_4_;
          auVar49._4_4_ = fVar5 * auVar7._4_4_;
          auVar49._8_4_ = fVar5 * auVar7._8_4_;
          auVar49._12_4_ = fVar5 * auVar7._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar20 * 4 + uVar33 * 4) = auVar49;
          uVar33 = uVar33 + 4;
        } while (uVar33 < uVar22);
      }
      if (uVar22 < uVar25) {
        do {
          *(float *)(param_2 + uVar20 * 4 + uVar22 * 4) =
               fVar5 * (float)((int)*(short *)(lVar29 * -2 + param_1 + uVar20 * 2 + uVar22 * 2) +
                              (int)*(short *)(param_1 + lVar29 * 2 + uVar20 * 2 + uVar22 * 2));
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar25);
      }
    }
  }
  if (1 < lVar29) {
    lVar18 = 0;
    lVar28 = 1;
    lVar26 = 0;
    if (lVar29 - 1U >> 1 != 0) {
      uVar25 = param_2 & 0x1f;
      lVar28 = param_1 + lVar29 * 2;
      lVar19 = lVar29 * -2 + param_1;
      uVar20 = 0;
      do {
        uVar22 = uVar20;
        fVar5 = param_4[uVar22 * 2 + 1];
        fVar6 = param_4[uVar22 * 2 + 2];
        lVar27 = lVar19 + 4;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x10) ||
             (((uVar20 = uVar25, uVar25 != 0 && (uVar20 = 0x20 - uVar25 >> 2, (param_2 & 3) != 0))
              || ((longlong)param_3 < (longlong)(uVar20 + 0x10))))) {
            uVar33 = 0;
          }
          else {
            uVar30 = 0;
            uVar33 = param_3 - (param_3 - uVar20 & 0xf);
            lVar31 = lVar19;
            lVar32 = lVar28;
            if (uVar20 != 0) {
              do {
                auVar34._0_4_ = (float)((int)*(short *)(lVar31 + 4) + (int)*(short *)(lVar32 + -4));
                auVar34._4_8_ = SUB128(ZEXT812(0),4);
                auVar34._12_4_ = 0;
                auVar40._0_4_ = (float)((int)*(short *)(lVar31 + 2) + (int)*(short *)(lVar32 + -2));
                auVar40._4_8_ = SUB128(ZEXT812(0),4);
                auVar40._12_4_ = 0;
                auVar7 = vfmadd213ss_fma(auVar40,ZEXT416((uint)fVar5),
                                         ZEXT416(*(uint *)(param_2 + uVar30 * 4)));
                auVar7 = vfmadd231ss_fma(auVar7,auVar34,ZEXT416((uint)fVar6));
                *(int *)(param_2 + uVar30 * 4) = auVar7._0_4_;
                uVar30 = uVar30 + 1;
                lVar31 = lVar31 + 2;
                lVar32 = lVar32 + 2;
              } while (uVar30 < uVar20);
            }
            auVar50._4_4_ = fVar6;
            auVar50._0_4_ = fVar6;
            auVar50._8_4_ = fVar6;
            auVar50._12_4_ = fVar6;
            auVar50._16_4_ = fVar6;
            auVar50._20_4_ = fVar6;
            auVar50._24_4_ = fVar6;
            auVar50._28_4_ = fVar6;
            lVar31 = lVar19 + uVar20 * 2;
            auVar46._4_4_ = fVar5;
            auVar46._0_4_ = fVar5;
            auVar46._8_4_ = fVar5;
            auVar46._12_4_ = fVar5;
            auVar46._16_4_ = fVar5;
            auVar46._20_4_ = fVar5;
            auVar46._24_4_ = fVar5;
            auVar46._28_4_ = fVar5;
            do {
              auVar16 = *(undefined1 (*) [32])(lVar28 + -2 + uVar20 * 2);
              auVar47 = vpmovsxwd_avx2(auVar16._0_16_);
              auVar48 = vpmovsxwd_avx2(SUB3216(*(undefined1 (*) [32])(lVar31 + 2),0));
              auVar17 = vpmovsxwd_avx2(SUB3216(*(undefined1 (*) [32])(lVar31 + 2),0x10));
              auVar16 = vpmovsxwd_avx2(auVar16._16_16_);
              pauVar1 = (undefined1 (*) [32])(lVar31 + 4);
              lVar31 = lVar31 + 0x20;
              auVar47 = vpaddd_avx2(auVar48,auVar47);
              auVar48 = vpaddd_avx2(auVar17,auVar16);
              auVar16 = *(undefined1 (*) [32])(lVar28 + -4 + uVar20 * 2);
              auVar47 = vcvtdq2ps_avx(auVar47);
              auVar48 = vcvtdq2ps_avx(auVar48);
              auVar7 = vfmadd213ps_fma(auVar47,auVar46,*(undefined1 (*) [32])(param_2 + uVar20 * 4))
              ;
              auVar8 = vfmadd213ps_fma(auVar48,auVar46,
                                       *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4));
              auVar47 = vpmovsxwd_avx2(SUB3216(*pauVar1,0));
              auVar48 = vpmovsxwd_avx2(SUB3216(*pauVar1,0x10));
              auVar17 = vpmovsxwd_avx2(auVar16._0_16_);
              auVar47 = vpaddd_avx2(auVar47,auVar17);
              auVar47 = vcvtdq2ps_avx(auVar47);
              auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar47,auVar50);
              *(undefined1 (*) [32])(param_2 + uVar20 * 4) = ZEXT1632(auVar7);
              auVar16 = vpmovsxwd_avx2(auVar16._16_16_);
              auVar16 = vpaddd_avx2(auVar48,auVar16);
              auVar16 = vcvtdq2ps_avx(auVar16);
              auVar7 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar16,auVar50);
              *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4) = ZEXT1632(auVar7);
              uVar20 = uVar20 + 0x10;
            } while (uVar20 < uVar33);
          }
          if (uVar33 + 1 <= param_3) {
            uVar20 = param_3 - uVar33;
            if ((longlong)uVar20 < 4) {
              uVar30 = 0;
            }
            else {
              uVar30 = uVar20 & 0xfffffffffffffffc;
              pauVar24 = (undefined1 (*) [16])(param_2 + uVar33 * 4);
              auVar41._4_4_ = fVar6;
              auVar41._0_4_ = fVar6;
              auVar41._8_4_ = fVar6;
              auVar41._12_4_ = fVar6;
              auVar35._4_4_ = fVar5;
              auVar35._0_4_ = fVar5;
              auVar35._8_4_ = fVar5;
              auVar35._12_4_ = fVar5;
              uVar23 = 0;
              lVar31 = lVar26;
              lVar32 = lVar18;
              do {
                uVar23 = uVar23 + 4;
                lVar4 = lVar32 + -4 + param_1;
                lVar32 = lVar32 + 8;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = *(ulonglong *)(lVar4 + 2 + (lVar29 + uVar33) * 2);
                auVar7 = vpmovsxwd_avx(auVar9);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = *(ulonglong *)(lVar4 + (lVar29 + uVar33) * 2);
                auVar8 = vpmovsxwd_avx(auVar10);
                lVar4 = lVar29 * -2 + param_1 + uVar33 * 2;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = *(ulonglong *)(lVar31 + 2 + lVar4);
                auVar49 = vpmovsxwd_avx(auVar11);
                auVar7 = vpaddd_avx(auVar49,auVar7);
                auVar7 = vcvtdq2ps_avx(auVar7);
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulonglong *)(lVar31 + 4 + lVar4);
                auVar49 = vpmovsxwd_avx(auVar12);
                lVar31 = lVar31 + 8;
                auVar8 = vpaddd_avx(auVar49,auVar8);
                auVar8 = vcvtdq2ps_avx(auVar8);
                auVar7 = vfmadd213ps_fma(auVar7,auVar35,*pauVar24);
                auVar7 = vfmadd231ps_fma(auVar7,auVar8,auVar41);
                *pauVar24 = auVar7;
                pauVar24 = pauVar24 + 1;
              } while (uVar23 < uVar30);
            }
            if (uVar30 < uVar20) {
              lVar31 = lVar19 + uVar33 * 2;
              puVar21 = (uint *)(param_2 + uVar33 * 4 + uVar30 * 4);
              lVar32 = lVar28 + uVar33 * 2;
              do {
                lVar4 = uVar30 * 2;
                auVar36._0_4_ =
                     (float)((int)*(short *)(lVar31 + 4 + uVar30 * 2) +
                            (int)*(short *)(lVar32 + -4 + uVar30 * 2));
                auVar36._4_8_ = SUB128(ZEXT812(0),4);
                auVar36._12_4_ = 0;
                lVar3 = uVar30 * 2;
                uVar30 = uVar30 + 1;
                auVar42._0_4_ =
                     (float)((int)*(short *)(lVar31 + 2 + lVar3) +
                            (int)*(short *)(lVar32 + -2 + lVar4));
                auVar42._4_8_ = SUB128(ZEXT812(0),4);
                auVar42._12_4_ = 0;
                auVar7 = vfmadd213ss_fma(auVar42,ZEXT416((uint)fVar5),ZEXT416(*puVar21));
                auVar7 = vfmadd231ss_fma(auVar7,auVar36,ZEXT416((uint)fVar6));
                *puVar21 = auVar7._0_4_;
                puVar21 = puVar21 + 1;
              } while (uVar30 < uVar20);
            }
          }
        }
        uVar20 = uVar22 + 1;
        lVar28 = lVar28 + -4;
        lVar18 = lVar18 + -4;
        lVar19 = lVar19 + 4;
        lVar26 = lVar26 + 4;
      } while (uVar20 < lVar29 - 1U >> 1);
      lVar28 = uVar22 + 2 + uVar20;
    }
    if (lVar29 != lVar28) {
      fVar5 = param_4[lVar28];
      lVar18 = lVar29 * -2;
      lVar27 = param_1 + lVar18 + lVar28 * 2;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_1408a9daa:
          uVar25 = 0;
        }
        else {
          uVar20 = param_2 & 0x1f;
          if (uVar20 != 0) {
            if ((param_2 & 3) != 0) goto LAB_1408a9daa;
            uVar20 = 0x20 - uVar20 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar20 + 0x10)) goto LAB_1408a9daa;
          lVar19 = lVar28 * -2 + param_1 + lVar29 * 2;
          uVar25 = param_3 - (param_3 - uVar20 & 0xf);
          lVar26 = param_1 + lVar18 + lVar28 * 2;
          uVar22 = 0;
          if (uVar20 != 0) {
            do {
              auVar43._0_4_ =
                   (float)((int)*(short *)(lVar26 + uVar22 * 2) +
                          (int)*(short *)(lVar19 + uVar22 * 2));
              auVar43._4_8_ = SUB128(ZEXT812(0),4);
              auVar43._12_4_ = 0;
              auVar7 = vfmadd213ss_fma(auVar43,ZEXT416((uint)fVar5),
                                       ZEXT416(*(uint *)(param_2 + uVar22 * 4)));
              *(int *)(param_2 + uVar22 * 4) = auVar7._0_4_;
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar20);
          }
          auVar47._4_4_ = fVar5;
          auVar47._0_4_ = fVar5;
          auVar47._8_4_ = fVar5;
          auVar47._12_4_ = fVar5;
          auVar47._16_4_ = fVar5;
          auVar47._20_4_ = fVar5;
          auVar47._24_4_ = fVar5;
          auVar47._28_4_ = fVar5;
          do {
            auVar46 = *(undefined1 (*) [32])(lVar26 + uVar20 * 2);
            auVar50 = *(undefined1 (*) [32])(lVar19 + uVar20 * 2);
            auVar16 = vpmovsxwd_avx2(auVar46._0_16_);
            auVar48 = vpmovsxwd_avx2(auVar50._0_16_);
            auVar16 = vpaddd_avx2(auVar16,auVar48);
            auVar16 = vcvtdq2ps_avx(auVar16);
            auVar46 = vpmovsxwd_avx2(auVar46._16_16_);
            auVar50 = vpmovsxwd_avx2(auVar50._16_16_);
            auVar46 = vpaddd_avx2(auVar46,auVar50);
            auVar7 = vfmadd213ps_fma(auVar16,auVar47,*(undefined1 (*) [32])(param_2 + uVar20 * 4));
            auVar46 = vcvtdq2ps_avx(auVar46);
            *(undefined1 (*) [32])(param_2 + uVar20 * 4) = ZEXT1632(auVar7);
            auVar7 = vfmadd213ps_fma(auVar46,auVar47,
                                     *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4));
            *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4) = ZEXT1632(auVar7);
            uVar20 = uVar20 + 0x10;
          } while (uVar20 < uVar25);
        }
        if (uVar25 + 1 <= param_3) {
          uVar20 = param_3 - uVar25;
          if ((longlong)uVar20 < 4) {
            uVar22 = 0;
          }
          else {
            uVar33 = 0;
            auVar44._4_4_ = fVar5;
            auVar44._0_4_ = fVar5;
            auVar44._8_4_ = fVar5;
            auVar44._12_4_ = fVar5;
            uVar22 = uVar20 & 0xfffffffffffffffc;
            pauVar24 = (undefined1 (*) [16])(param_2 + uVar25 * 4);
            do {
              auVar13._8_8_ = 0;
              auVar13._0_8_ =
                   *(ulonglong *)(lVar18 + lVar28 * 2 + param_1 + uVar25 * 2 + uVar33 * 2);
              auVar7 = vpmovsxwd_avx(auVar13);
              auVar14._8_8_ = 0;
              auVar14._0_8_ =
                   *(ulonglong *)(lVar28 * -2 + lVar29 * 2 + param_1 + uVar25 * 2 + uVar33 * 2);
              auVar8 = vpmovsxwd_avx(auVar14);
              uVar33 = uVar33 + 4;
              auVar7 = vpaddd_avx(auVar7,auVar8);
              auVar7 = vcvtdq2ps_avx(auVar7);
              auVar7 = vfmadd213ps_fma(auVar7,auVar44,*pauVar24);
              *pauVar24 = auVar7;
              pauVar24 = pauVar24 + 1;
            } while (uVar33 < uVar22);
          }
          if (uVar22 < uVar20) {
            puVar21 = (uint *)(param_2 + uVar25 * 4 + uVar22 * 4);
            do {
              auVar45._0_4_ =
                   (float)((int)*(short *)(lVar18 + lVar28 * 2 + param_1 + uVar25 * 2 + uVar22 * 2)
                          + (int)*(short *)(param_1 + lVar28 * -2 + lVar29 * 2 + uVar25 * 2 +
                                           uVar22 * 2));
              auVar45._4_8_ = SUB128(ZEXT812(0),4);
              auVar45._12_4_ = 0;
              auVar7 = vfmadd213ss_fma(auVar45,ZEXT416((uint)fVar5),ZEXT416(*puVar21));
              uVar22 = uVar22 + 1;
              *puVar21 = auVar7._0_4_;
              puVar21 = puVar21 + 1;
            } while (uVar22 < uVar20);
          }
        }
      }
    }
  }
  fVar5 = param_4[lVar29];
  if ((longlong)param_3 < 1) {
    return;
  }
  if (0xf < (longlong)param_3) {
    uVar20 = param_2 & 0x1f;
    if (uVar20 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1408a9d9b;
      uVar20 = 0x20 - uVar20 >> 2;
    }
    if ((longlong)(uVar20 + 0x10) <= (longlong)param_3) {
      uVar22 = 0;
      uVar25 = param_3 - (param_3 - uVar20 & 0xf);
      if (uVar20 != 0) {
        do {
          auVar37._0_4_ = (float)(int)*(short *)(lVar27 + 2 + uVar22 * 2);
          auVar37._4_8_ = SUB128(ZEXT812(0),4);
          auVar37._12_4_ = 0;
          auVar7 = vfmadd213ss_fma(auVar37,ZEXT416((uint)fVar5),
                                   ZEXT416(*(uint *)(param_2 + uVar22 * 4)));
          *(int *)(param_2 + uVar22 * 4) = auVar7._0_4_;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar20);
      }
      auVar48._4_4_ = fVar5;
      auVar48._0_4_ = fVar5;
      auVar48._8_4_ = fVar5;
      auVar48._12_4_ = fVar5;
      auVar48._16_4_ = fVar5;
      auVar48._20_4_ = fVar5;
      auVar48._24_4_ = fVar5;
      auVar48._28_4_ = fVar5;
      do {
        auVar46 = *(undefined1 (*) [32])(lVar27 + 2 + uVar20 * 2);
        auVar50 = vpmovsxwd_avx2(auVar46._0_16_);
        auVar16 = vpmovsxwd_avx2(auVar46._16_16_);
        auVar46 = vcvtdq2ps_avx(auVar50);
        auVar50 = vcvtdq2ps_avx(auVar16);
        auVar7 = vfmadd213ps_fma(auVar46,auVar48,*(undefined1 (*) [32])(param_2 + uVar20 * 4));
        auVar8 = vfmadd213ps_fma(auVar50,auVar48,*(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4)
                                );
        *(undefined1 (*) [32])(param_2 + uVar20 * 4) = ZEXT1632(auVar7);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar20 * 4) = ZEXT1632(auVar8);
        uVar20 = uVar20 + 0x10;
      } while (uVar20 < uVar25);
      goto LAB_1408a9ce1;
    }
  }
LAB_1408a9d9b:
  uVar25 = 0;
LAB_1408a9ce1:
  if (uVar25 + 1 <= param_3) {
    param_3 = param_3 - uVar25;
    if ((longlong)param_3 < 4) {
      uVar20 = 0;
    }
    else {
      uVar22 = 0;
      auVar38._4_4_ = fVar5;
      auVar38._0_4_ = fVar5;
      auVar38._8_4_ = fVar5;
      auVar38._12_4_ = fVar5;
      uVar20 = param_3 & 0xfffffffffffffffc;
      pauVar24 = (undefined1 (*) [16])(param_2 + uVar25 * 4);
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(lVar27 + uVar25 * 2 + 2 + uVar22 * 2);
        auVar7 = vpmovsxwd_avx(auVar15);
        uVar22 = uVar22 + 4;
        auVar7 = vcvtdq2ps_avx(auVar7);
        auVar7 = vfmadd213ps_fma(auVar7,auVar38,*pauVar24);
        *pauVar24 = auVar7;
        pauVar24 = pauVar24 + 1;
      } while (uVar22 < uVar20);
    }
    if (uVar20 < param_3) {
      puVar21 = (uint *)(param_2 + uVar25 * 4 + uVar20 * 4);
      do {
        lVar29 = uVar20 * 2;
        uVar20 = uVar20 + 1;
        auVar39._0_4_ = (float)(int)*(short *)(lVar27 + uVar25 * 2 + 2 + lVar29);
        auVar39._4_8_ = SUB128(ZEXT812(0),4);
        auVar39._12_4_ = 0;
        auVar7 = vfmadd213ss_fma(auVar39,ZEXT416((uint)fVar5),ZEXT416(*puVar21));
        *puVar21 = auVar7._0_4_;
        puVar21 = puVar21 + 1;
      } while (uVar20 < param_3);
    }
  }
  return;
}

