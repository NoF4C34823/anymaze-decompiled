
void FUN_140210700(longlong param_1,ulonglong param_2,longlong param_3,float *param_4,int param_5)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
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
  uint *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [16];
  undefined1 auVar52 [32];
  longlong lStack_98;
  
  lVar33 = (longlong)(param_5 >> 1);
  fVar5 = *param_4;
  uVar23 = param_3 * 3;
  lStack_98 = lVar33 * -6 + param_1;
  if (0 < (longlong)uVar23) {
    if ((longlong)uVar23 < 0x10) {
LAB_140211227:
      uVar21 = 0;
    }
    else {
      if ((longlong)uVar23 < 0x1d) {
        uVar21 = uVar23 & 0xfffffffffffffff0;
        uVar28 = 0;
        lVar18 = lVar33 * -6 + param_1;
        lVar30 = param_1 + lVar33 * 6;
      }
      else {
        uVar28 = param_2 & 0x1f;
        if (uVar28 != 0) {
          if ((param_2 & 3) != 0) goto LAB_140211227;
          uVar28 = 0x20 - uVar28 >> 2;
        }
        if ((longlong)uVar23 < (longlong)(uVar28 + 0x10)) goto LAB_140211227;
        lVar18 = lVar33 * -6 + param_1;
        uVar21 = uVar23 - (uVar23 - uVar28 & 0xf);
        uVar26 = 0;
        lVar30 = param_1 + lVar33 * 6;
        if (uVar28 != 0) {
          do {
            *(float *)(param_2 + uVar26 * 4) =
                 fVar5 * (float)((int)*(short *)(lVar18 + uVar26 * 2) +
                                (int)*(short *)(lVar30 + uVar26 * 2));
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar28);
        }
      }
      do {
        auVar48 = *(undefined1 (*) [32])(lVar18 + uVar28 * 2);
        auVar52 = *(undefined1 (*) [32])(lVar30 + uVar28 * 2);
        auVar16 = vpmovsxwd_avx2(auVar48._0_16_);
        auVar49 = vpmovsxwd_avx2(auVar52._0_16_);
        auVar16 = vpaddd_avx2(auVar16,auVar49);
        auVar16 = vcvtdq2ps_avx(auVar16);
        auVar48 = vpmovsxwd_avx2(auVar48._16_16_);
        auVar52 = vpmovsxwd_avx2(auVar52._16_16_);
        auVar52 = vpaddd_avx2(auVar48,auVar52);
        auVar48 = vcvtdq2ps_avx(auVar52);
        pfVar4 = (float *)(param_2 + uVar28 * 4);
        *pfVar4 = fVar5 * auVar16._0_4_;
        pfVar4[1] = fVar5 * auVar16._4_4_;
        pfVar4[2] = fVar5 * auVar16._8_4_;
        pfVar4[3] = fVar5 * auVar16._12_4_;
        pfVar4[4] = fVar5 * auVar16._16_4_;
        pfVar4[5] = fVar5 * auVar16._20_4_;
        pfVar4[6] = fVar5 * auVar16._24_4_;
        pfVar4[7] = auVar16._28_4_;
        auVar16._4_4_ = fVar5 * auVar48._4_4_;
        auVar16._0_4_ = fVar5 * auVar48._0_4_;
        auVar16._8_4_ = fVar5 * auVar48._8_4_;
        auVar16._12_4_ = fVar5 * auVar48._12_4_;
        auVar16._16_4_ = fVar5 * auVar48._16_4_;
        auVar16._20_4_ = fVar5 * auVar48._20_4_;
        auVar16._24_4_ = fVar5 * auVar48._24_4_;
        auVar16._28_4_ = auVar52._28_4_;
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = auVar16;
        uVar28 = uVar28 + 0x10;
      } while (uVar28 < uVar21);
    }
    if (uVar21 + 1 <= uVar23) {
      uVar28 = uVar23 - uVar21;
      if ((longlong)uVar28 < 4) {
        uVar26 = 0;
      }
      else {
        uVar35 = 0;
        uVar26 = uVar28 & 0xfffffffffffffffc;
        do {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(ulonglong *)(lVar33 * -6 + param_1 + uVar21 * 2 + uVar35 * 2);
          auVar7 = vpmovsxwd_avx(auVar7);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = *(ulonglong *)(param_1 + lVar33 * 6 + uVar21 * 2 + uVar35 * 2);
          auVar8 = vpmovsxwd_avx(auVar8);
          auVar7 = vpaddd_avx(auVar7,auVar8);
          auVar7 = vcvtdq2ps_avx(auVar7);
          auVar51._0_4_ = fVar5 * auVar7._0_4_;
          auVar51._4_4_ = fVar5 * auVar7._4_4_;
          auVar51._8_4_ = fVar5 * auVar7._8_4_;
          auVar51._12_4_ = fVar5 * auVar7._12_4_;
          *(undefined1 (*) [16])(param_2 + uVar21 * 4 + uVar35 * 4) = auVar51;
          uVar35 = uVar35 + 4;
        } while (uVar35 < uVar26);
      }
      if (uVar26 < uVar28) {
        do {
          *(float *)(param_2 + uVar21 * 4 + uVar26 * 4) =
               fVar5 * (float)((int)*(short *)(lVar33 * -6 + param_1 + uVar21 * 2 + uVar26 * 2) +
                              (int)*(short *)(param_1 + lVar33 * 6 + uVar21 * 2 + uVar26 * 2));
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar28);
      }
    }
  }
  if (1 < lVar33) {
    uVar21 = 0;
    lVar30 = 1;
    if (lVar33 - 1U >> 1 != 0) {
      uVar26 = param_2 & 0x1f;
      lVar30 = param_1 + lVar33 * 6;
      lVar22 = lVar33 * -6 + param_1;
      lVar18 = 0;
      lVar19 = lVar30;
      uVar28 = uVar21;
      do {
        uVar35 = uVar28;
        lStack_98 = lVar22 + 0xc;
        fVar5 = param_4[uVar35 * 2 + 1];
        fVar6 = param_4[uVar35 * 2 + 2];
        if (0 < (longlong)uVar23) {
          if (((longlong)uVar23 < 0x10) ||
             (((uVar28 = uVar26, uVar26 != 0 && (uVar28 = 0x20 - uVar26 >> 2, (param_2 & 3) != 0))
              || ((longlong)uVar23 < (longlong)(uVar28 + 0x10))))) {
            uVar32 = 0;
          }
          else {
            uVar29 = 0;
            uVar32 = uVar23 - (uVar23 - uVar28 & 0xf);
            lVar24 = lVar19;
            lVar31 = lVar22;
            if (uVar28 != 0) {
              do {
                auVar36._0_4_ =
                     (float)((int)*(short *)(lVar31 + 0xc) + (int)*(short *)(lVar24 + -0xc));
                auVar36._4_8_ = SUB128(ZEXT812(0),4);
                auVar36._12_4_ = 0;
                auVar42._0_4_ = (float)((int)*(short *)(lVar31 + 6) + (int)*(short *)(lVar24 + -6));
                auVar42._4_8_ = SUB128(ZEXT812(0),4);
                auVar42._12_4_ = 0;
                auVar7 = vfmadd213ss_fma(auVar42,ZEXT416((uint)fVar5),
                                         ZEXT416(*(uint *)(param_2 + uVar29 * 4)));
                auVar7 = vfmadd231ss_fma(auVar7,auVar36,ZEXT416((uint)fVar6));
                *(int *)(param_2 + uVar29 * 4) = auVar7._0_4_;
                uVar29 = uVar29 + 1;
                lVar24 = lVar24 + 2;
                lVar31 = lVar31 + 2;
              } while (uVar29 < uVar28);
            }
            auVar52._4_4_ = fVar6;
            auVar52._0_4_ = fVar6;
            auVar52._8_4_ = fVar6;
            auVar52._12_4_ = fVar6;
            auVar52._16_4_ = fVar6;
            auVar52._20_4_ = fVar6;
            auVar52._24_4_ = fVar6;
            auVar52._28_4_ = fVar6;
            lVar24 = lVar22 + uVar28 * 2;
            auVar48._4_4_ = fVar5;
            auVar48._0_4_ = fVar5;
            auVar48._8_4_ = fVar5;
            auVar48._12_4_ = fVar5;
            auVar48._16_4_ = fVar5;
            auVar48._20_4_ = fVar5;
            auVar48._24_4_ = fVar5;
            auVar48._28_4_ = fVar5;
            do {
              auVar16 = *(undefined1 (*) [32])(lVar19 + -6 + uVar28 * 2);
              auVar49 = vpmovsxwd_avx2(auVar16._0_16_);
              auVar50 = vpmovsxwd_avx2(SUB3216(*(undefined1 (*) [32])(lVar24 + 6),0));
              auVar17 = vpmovsxwd_avx2(SUB3216(*(undefined1 (*) [32])(lVar24 + 6),0x10));
              auVar16 = vpmovsxwd_avx2(auVar16._16_16_);
              pauVar1 = (undefined1 (*) [32])(lVar24 + 0xc);
              lVar24 = lVar24 + 0x20;
              auVar49 = vpaddd_avx2(auVar50,auVar49);
              auVar50 = vpaddd_avx2(auVar17,auVar16);
              auVar16 = *(undefined1 (*) [32])(lVar19 + -0xc + uVar28 * 2);
              auVar49 = vcvtdq2ps_avx(auVar49);
              auVar50 = vcvtdq2ps_avx(auVar50);
              auVar7 = vfmadd213ps_fma(auVar49,auVar48,*(undefined1 (*) [32])(param_2 + uVar28 * 4))
              ;
              auVar8 = vfmadd213ps_fma(auVar50,auVar48,
                                       *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4));
              auVar49 = vpmovsxwd_avx2(SUB3216(*pauVar1,0));
              auVar50 = vpmovsxwd_avx2(SUB3216(*pauVar1,0x10));
              auVar17 = vpmovsxwd_avx2(auVar16._0_16_);
              auVar49 = vpaddd_avx2(auVar49,auVar17);
              auVar49 = vcvtdq2ps_avx(auVar49);
              auVar7 = vfmadd231ps_fma(ZEXT1632(auVar7),auVar49,auVar52);
              *(undefined1 (*) [32])(param_2 + uVar28 * 4) = ZEXT1632(auVar7);
              auVar16 = vpmovsxwd_avx2(auVar16._16_16_);
              auVar16 = vpaddd_avx2(auVar50,auVar16);
              auVar16 = vcvtdq2ps_avx(auVar16);
              auVar7 = vfmadd231ps_fma(ZEXT1632(auVar8),auVar16,auVar52);
              *(undefined1 (*) [32])(param_2 + 0x20 + uVar28 * 4) = ZEXT1632(auVar7);
              uVar28 = uVar28 + 0x10;
            } while (uVar28 < uVar32);
          }
          if (uVar32 + 1 <= uVar23) {
            uVar28 = uVar23 - uVar32;
            if ((longlong)uVar28 < 4) {
              uVar29 = 0;
            }
            else {
              uVar29 = uVar28 & 0xfffffffffffffffc;
              auVar43._4_4_ = fVar6;
              auVar43._0_4_ = fVar6;
              auVar43._8_4_ = fVar6;
              auVar43._12_4_ = fVar6;
              pauVar27 = (undefined1 (*) [16])(param_2 + uVar32 * 4);
              auVar37._4_4_ = fVar5;
              auVar37._0_4_ = fVar5;
              auVar37._8_4_ = fVar5;
              auVar37._12_4_ = fVar5;
              uVar34 = 0;
              uVar25 = uVar21;
              lVar24 = lVar18;
              do {
                uVar34 = uVar34 + 4;
                lVar31 = lVar30 + uVar32 * 2;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = *(ulonglong *)(lVar24 + -6 + lVar31);
                auVar7 = vpmovsxwd_avx(auVar9);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = *(ulonglong *)(lVar24 + -0xc + lVar31);
                auVar8 = vpmovsxwd_avx(auVar10);
                lVar31 = lVar33 * -6 + param_1 + uVar32 * 2;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = *(ulonglong *)(uVar25 + 6 + lVar31);
                auVar51 = vpmovsxwd_avx(auVar11);
                lVar24 = lVar24 + 8;
                auVar7 = vpaddd_avx(auVar51,auVar7);
                auVar7 = vcvtdq2ps_avx(auVar7);
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulonglong *)(uVar25 + 0xc + lVar31);
                auVar51 = vpmovsxwd_avx(auVar12);
                uVar25 = uVar25 + 8;
                auVar8 = vpaddd_avx(auVar51,auVar8);
                auVar8 = vcvtdq2ps_avx(auVar8);
                auVar7 = vfmadd213ps_fma(auVar7,auVar37,*pauVar27);
                auVar7 = vfmadd231ps_fma(auVar7,auVar8,auVar43);
                *pauVar27 = auVar7;
                pauVar27 = pauVar27 + 1;
              } while (uVar34 < uVar29);
            }
            if (uVar29 < uVar28) {
              lVar24 = lVar22 + uVar32 * 2;
              puVar20 = (uint *)(param_2 + uVar32 * 4 + uVar29 * 4);
              lVar31 = lVar19 + uVar32 * 2;
              do {
                lVar2 = uVar29 * 2;
                auVar38._0_4_ =
                     (float)((int)*(short *)(lVar24 + 0xc + uVar29 * 2) +
                            (int)*(short *)(lVar31 + -0xc + uVar29 * 2));
                auVar38._4_8_ = SUB128(ZEXT812(0),4);
                auVar38._12_4_ = 0;
                lVar3 = uVar29 * 2;
                uVar29 = uVar29 + 1;
                auVar44._0_4_ =
                     (float)((int)*(short *)(lVar24 + 6 + lVar3) +
                            (int)*(short *)(lVar31 + -6 + lVar2));
                auVar44._4_8_ = SUB128(ZEXT812(0),4);
                auVar44._12_4_ = 0;
                auVar7 = vfmadd213ss_fma(auVar44,ZEXT416((uint)fVar5),ZEXT416(*puVar20));
                auVar7 = vfmadd231ss_fma(auVar7,auVar38,ZEXT416((uint)fVar6));
                *puVar20 = auVar7._0_4_;
                puVar20 = puVar20 + 1;
              } while (uVar29 < uVar28);
            }
          }
        }
        uVar28 = uVar35 + 1;
        lVar19 = lVar19 + -0xc;
        lVar18 = lVar18 + -0xc;
        lVar22 = lVar22 + 0xc;
        uVar21 = uVar21 + 0xc;
      } while (uVar28 < lVar33 - 1U >> 1);
      lVar30 = uVar35 + 2 + uVar28;
    }
    if (lVar33 != lVar30) {
      fVar5 = param_4[lVar30];
      lVar18 = lVar33 * -6;
      lStack_98 = param_1 + lVar18 + lVar30 * 6;
      if (0 < (longlong)uVar23) {
        if ((longlong)uVar23 < 0x10) {
LAB_140211209:
          uVar28 = 0;
        }
        else {
          uVar21 = param_2 & 0x1f;
          if (uVar21 != 0) {
            if ((param_2 & 3) != 0) goto LAB_140211209;
            uVar21 = 0x20 - uVar21 >> 2;
          }
          if ((longlong)uVar23 < (longlong)(uVar21 + 0x10)) goto LAB_140211209;
          uVar28 = uVar23 - (uVar23 - uVar21 & 0xf);
          lVar19 = lVar30 * -6 + param_1 + lVar33 * 6;
          uVar26 = 0;
          if (uVar21 != 0) {
            do {
              auVar45._0_4_ =
                   (float)((int)*(short *)(lStack_98 + uVar26 * 2) +
                          (int)*(short *)(lVar19 + uVar26 * 2));
              auVar45._4_8_ = SUB128(ZEXT812(0),4);
              auVar45._12_4_ = 0;
              auVar7 = vfmadd213ss_fma(auVar45,ZEXT416((uint)fVar5),
                                       ZEXT416(*(uint *)(param_2 + uVar26 * 4)));
              *(int *)(param_2 + uVar26 * 4) = auVar7._0_4_;
              uVar26 = uVar26 + 1;
            } while (uVar26 < uVar21);
          }
          auVar49._4_4_ = fVar5;
          auVar49._0_4_ = fVar5;
          auVar49._8_4_ = fVar5;
          auVar49._12_4_ = fVar5;
          auVar49._16_4_ = fVar5;
          auVar49._20_4_ = fVar5;
          auVar49._24_4_ = fVar5;
          auVar49._28_4_ = fVar5;
          do {
            auVar48 = *(undefined1 (*) [32])(lStack_98 + uVar21 * 2);
            auVar52 = *(undefined1 (*) [32])(lVar19 + uVar21 * 2);
            auVar16 = vpmovsxwd_avx2(auVar48._0_16_);
            auVar50 = vpmovsxwd_avx2(auVar52._0_16_);
            auVar16 = vpaddd_avx2(auVar16,auVar50);
            auVar16 = vcvtdq2ps_avx(auVar16);
            auVar48 = vpmovsxwd_avx2(auVar48._16_16_);
            auVar52 = vpmovsxwd_avx2(auVar52._16_16_);
            auVar48 = vpaddd_avx2(auVar48,auVar52);
            auVar7 = vfmadd213ps_fma(auVar16,auVar49,*(undefined1 (*) [32])(param_2 + uVar21 * 4));
            auVar48 = vcvtdq2ps_avx(auVar48);
            *(undefined1 (*) [32])(param_2 + uVar21 * 4) = ZEXT1632(auVar7);
            auVar7 = vfmadd213ps_fma(auVar48,auVar49,
                                     *(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 4));
            *(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 4) = ZEXT1632(auVar7);
            uVar21 = uVar21 + 0x10;
          } while (uVar21 < uVar28);
        }
        if (uVar28 + 1 <= uVar23) {
          uVar21 = uVar23 - uVar28;
          if ((longlong)uVar21 < 4) {
            uVar26 = 0;
          }
          else {
            uVar35 = 0;
            uVar26 = uVar21 & 0xfffffffffffffffc;
            auVar46._4_4_ = fVar5;
            auVar46._0_4_ = fVar5;
            auVar46._8_4_ = fVar5;
            auVar46._12_4_ = fVar5;
            pauVar27 = (undefined1 (*) [16])(param_2 + uVar28 * 4);
            do {
              auVar13._8_8_ = 0;
              auVar13._0_8_ =
                   *(ulonglong *)(lVar18 + lVar30 * 6 + param_1 + uVar28 * 2 + uVar35 * 2);
              auVar7 = vpmovsxwd_avx(auVar13);
              auVar14._8_8_ = 0;
              auVar14._0_8_ =
                   *(ulonglong *)(lVar30 * -6 + lVar33 * 6 + param_1 + uVar28 * 2 + uVar35 * 2);
              auVar8 = vpmovsxwd_avx(auVar14);
              uVar35 = uVar35 + 4;
              auVar7 = vpaddd_avx(auVar7,auVar8);
              auVar7 = vcvtdq2ps_avx(auVar7);
              auVar7 = vfmadd213ps_fma(auVar7,auVar46,*pauVar27);
              *pauVar27 = auVar7;
              pauVar27 = pauVar27 + 1;
            } while (uVar35 < uVar26);
          }
          if (uVar26 < uVar21) {
            puVar20 = (uint *)(param_2 + uVar28 * 4 + uVar26 * 4);
            do {
              auVar47._0_4_ =
                   (float)((int)*(short *)(lVar18 + lVar30 * 6 + param_1 + uVar28 * 2 + uVar26 * 2)
                          + (int)*(short *)(param_1 + lVar30 * -6 + lVar33 * 6 + uVar28 * 2 +
                                           uVar26 * 2));
              auVar47._4_8_ = SUB128(ZEXT812(0),4);
              auVar47._12_4_ = 0;
              auVar7 = vfmadd213ss_fma(auVar47,ZEXT416((uint)fVar5),ZEXT416(*puVar20));
              uVar26 = uVar26 + 1;
              *puVar20 = auVar7._0_4_;
              puVar20 = puVar20 + 1;
            } while (uVar26 < uVar21);
          }
        }
      }
    }
  }
  fVar5 = param_4[lVar33];
  if ((longlong)uVar23 < 1) {
    return;
  }
  if (0xf < (longlong)uVar23) {
    uVar21 = param_2 & 0x1f;
    if (uVar21 != 0) {
      if ((param_2 & 3) != 0) goto LAB_1402111fb;
      uVar21 = 0x20 - uVar21 >> 2;
    }
    if ((longlong)(uVar21 + 0x10) <= (longlong)uVar23) {
      uVar26 = 0;
      uVar28 = uVar23 - (uVar23 - uVar21 & 0xf);
      if (uVar21 != 0) {
        do {
          auVar39._0_4_ = (float)(int)*(short *)(lStack_98 + 6 + uVar26 * 2);
          auVar39._4_8_ = SUB128(ZEXT812(0),4);
          auVar39._12_4_ = 0;
          auVar7 = vfmadd213ss_fma(auVar39,ZEXT416((uint)fVar5),
                                   ZEXT416(*(uint *)(param_2 + uVar26 * 4)));
          *(int *)(param_2 + uVar26 * 4) = auVar7._0_4_;
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar21);
      }
      auVar50._4_4_ = fVar5;
      auVar50._0_4_ = fVar5;
      auVar50._8_4_ = fVar5;
      auVar50._12_4_ = fVar5;
      auVar50._16_4_ = fVar5;
      auVar50._20_4_ = fVar5;
      auVar50._24_4_ = fVar5;
      auVar50._28_4_ = fVar5;
      do {
        auVar48 = *(undefined1 (*) [32])(lStack_98 + 6 + uVar21 * 2);
        auVar52 = vpmovsxwd_avx2(auVar48._0_16_);
        auVar16 = vpmovsxwd_avx2(auVar48._16_16_);
        auVar48 = vcvtdq2ps_avx(auVar52);
        auVar52 = vcvtdq2ps_avx(auVar16);
        auVar7 = vfmadd213ps_fma(auVar48,auVar50,*(undefined1 (*) [32])(param_2 + uVar21 * 4));
        auVar8 = vfmadd213ps_fma(auVar52,auVar50,*(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 4)
                                );
        *(undefined1 (*) [32])(param_2 + uVar21 * 4) = ZEXT1632(auVar7);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 4) = ZEXT1632(auVar8);
        uVar21 = uVar21 + 0x10;
      } while (uVar21 < uVar28);
      goto LAB_140211141;
    }
  }
LAB_1402111fb:
  uVar28 = 0;
LAB_140211141:
  if (uVar28 + 1 <= uVar23) {
    uVar23 = uVar23 - uVar28;
    if ((longlong)uVar23 < 4) {
      uVar21 = 0;
    }
    else {
      auVar40._4_4_ = fVar5;
      auVar40._0_4_ = fVar5;
      auVar40._8_4_ = fVar5;
      auVar40._12_4_ = fVar5;
      uVar21 = uVar23 & 0xfffffffffffffffc;
      uVar26 = 0;
      pauVar27 = (undefined1 (*) [16])(param_2 + uVar28 * 4);
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *(ulonglong *)(lStack_98 + uVar28 * 2 + 6 + uVar26 * 2);
        auVar7 = vpmovsxwd_avx(auVar15);
        uVar26 = uVar26 + 4;
        auVar7 = vcvtdq2ps_avx(auVar7);
        auVar7 = vfmadd213ps_fma(auVar7,auVar40,*pauVar27);
        *pauVar27 = auVar7;
        pauVar27 = pauVar27 + 1;
      } while (uVar26 < uVar21);
    }
    if (uVar21 < uVar23) {
      puVar20 = (uint *)(param_2 + uVar28 * 4 + uVar21 * 4);
      do {
        lVar33 = uVar21 * 2;
        uVar21 = uVar21 + 1;
        auVar41._0_4_ = (float)(int)*(short *)(lStack_98 + uVar28 * 2 + 6 + lVar33);
        auVar41._4_8_ = SUB128(ZEXT812(0),4);
        auVar41._12_4_ = 0;
        auVar7 = vfmadd213ss_fma(auVar41,ZEXT416((uint)fVar5),ZEXT416(*puVar20));
        *puVar20 = auVar7._0_4_;
        puVar20 = puVar20 + 1;
      } while (uVar21 < uVar23);
    }
  }
  return;
}

