
void FUN_1408f54e0(longlong param_1,uint *param_2,ulonglong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  undefined1 auVar38 [32];
  undefined1 auVar37 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  
  lVar18 = (longlong)(param_5 >> 1);
  fVar5 = *param_4;
  lVar16 = param_1 + lVar18 * -4;
  if (0 < (longlong)param_3) {
    if ((longlong)param_3 < 0x10) {
LAB_1408f5d66:
      uVar10 = 0;
    }
    else {
      if ((longlong)param_3 < 0x1d) {
        uVar10 = param_3 & 0xfffffffffffffff0;
        uVar13 = 0;
        lVar17 = param_1 + lVar18 * 4;
        lVar9 = lVar18 * -4 + param_1;
      }
      else {
        uVar13 = (ulonglong)param_2 & 0x1f;
        if (uVar13 != 0) {
          if (((ulonglong)param_2 & 3) != 0) goto LAB_1408f5d66;
          uVar13 = 0x20 - uVar13 >> 2;
        }
        if ((longlong)param_3 < (longlong)(uVar13 + 0x10)) goto LAB_1408f5d66;
        lVar9 = lVar18 * -4 + param_1;
        uVar12 = 0;
        uVar10 = param_3 - (param_3 - uVar13 & 0xf);
        lVar17 = param_1 + lVar18 * 4;
        if (uVar13 != 0) {
          do {
            param_2[uVar12] =
                 (uint)(fVar5 * (*(float *)(lVar9 + uVar12 * 4) + *(float *)(lVar17 + uVar12 * 4)));
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
        }
      }
      do {
        pfVar1 = (float *)(lVar9 + uVar13 * 4);
        auVar38 = *(undefined1 (*) [32])(lVar9 + 0x20 + uVar13 * 4);
        pfVar2 = (float *)(lVar17 + uVar13 * 4);
        pfVar4 = (float *)(lVar17 + 0x20 + uVar13 * 4);
        auVar39._0_4_ = fVar5 * (*pfVar1 + *pfVar2);
        auVar39._4_4_ = fVar5 * (pfVar1[1] + pfVar2[1]);
        auVar39._8_4_ = fVar5 * (pfVar1[2] + pfVar2[2]);
        auVar39._12_4_ = fVar5 * (pfVar1[3] + pfVar2[3]);
        auVar39._16_4_ = fVar5 * (pfVar1[4] + pfVar2[4]);
        auVar39._20_4_ = fVar5 * (pfVar1[5] + pfVar2[5]);
        auVar39._28_36_ = in_ZMM4._28_36_;
        auVar39._24_4_ = fVar5 * (pfVar1[6] + pfVar2[6]);
        in_ZMM4 = ZEXT3264(auVar39._0_32_);
        auVar8._4_4_ = fVar5 * (auVar38._4_4_ + pfVar4[1]);
        auVar8._0_4_ = fVar5 * (auVar38._0_4_ + *pfVar4);
        auVar8._8_4_ = fVar5 * (auVar38._8_4_ + pfVar4[2]);
        auVar8._12_4_ = fVar5 * (auVar38._12_4_ + pfVar4[3]);
        auVar8._16_4_ = fVar5 * (auVar38._16_4_ + pfVar4[4]);
        auVar8._20_4_ = fVar5 * (auVar38._20_4_ + pfVar4[5]);
        auVar8._24_4_ = fVar5 * (auVar38._24_4_ + pfVar4[6]);
        auVar8._28_4_ = pfVar1[7] + pfVar2[7];
        *(undefined1 (*) [32])(param_2 + uVar13) = auVar39._0_32_;
        *(undefined1 (*) [32])(param_2 + uVar13 + 8) = auVar8;
        uVar13 = uVar13 + 0x10;
      } while (uVar13 < uVar10);
    }
    if (uVar10 + 1 <= param_3) {
      uVar13 = param_3 - uVar10;
      if ((longlong)uVar13 < 4) {
        uVar12 = 0;
      }
      else {
        uVar21 = 0;
        uVar12 = uVar13 & 0xfffffffffffffffc;
        do {
          auVar37 = *(undefined1 (*) [16])(lVar18 * -4 + param_1 + uVar10 * 4 + uVar21 * 4);
          pfVar1 = (float *)(param_1 + lVar18 * 4 + uVar10 * 4 + uVar21 * 4);
          auVar36._0_4_ = fVar5 * (auVar37._0_4_ + *pfVar1);
          auVar36._4_4_ = fVar5 * (auVar37._4_4_ + pfVar1[1]);
          auVar36._8_4_ = fVar5 * (auVar37._8_4_ + pfVar1[2]);
          auVar36._12_4_ = fVar5 * (auVar37._12_4_ + pfVar1[3]);
          *(undefined1 (*) [16])(param_2 + uVar10 + uVar21) = auVar36;
          uVar21 = uVar21 + 4;
        } while (uVar21 < uVar12);
      }
      if (uVar12 < uVar13) {
        do {
          param_2[uVar10 + uVar12] =
               (uint)(fVar5 * (*(float *)(lVar18 * -4 + param_1 + uVar10 * 4 + uVar12 * 4) +
                              *(float *)(param_1 + lVar18 * 4 + uVar10 * 4 + uVar12 * 4)));
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
    }
  }
  if (1 < lVar18) {
    lVar9 = 0;
    lVar17 = 1;
    lVar15 = 0;
    if (lVar18 - 1U >> 1 != 0) {
      uVar13 = (ulonglong)param_2 & 0x1f;
      lVar17 = param_1 + lVar18 * 4;
      lVar11 = lVar18 * -4 + param_1;
      uVar10 = 0;
      do {
        uVar12 = uVar10;
        uVar6 = *(uint *)(lVar9 + 4 + (longlong)param_4);
        uVar7 = *(uint *)(lVar9 + 8 + (longlong)param_4);
        lVar16 = lVar11 + 8;
        if (0 < (longlong)param_3) {
          if (((longlong)param_3 < 0x10) ||
             (((uVar10 = uVar13, uVar13 != 0 &&
               (uVar10 = 0x20 - uVar13 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)param_3 < (longlong)(uVar10 + 0x10))))) {
            uVar21 = 0;
          }
          else {
            uVar23 = 0;
            uVar21 = param_3 - (param_3 - uVar10 & 0xf);
            lVar19 = lVar17;
            lVar20 = lVar11;
            puVar22 = param_2;
            if (uVar10 != 0) {
              do {
                uVar23 = uVar23 + 1;
                auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar20 + 4) +
                                                        *(float *)(lVar19 + -4))),ZEXT416(uVar6),
                                          ZEXT416(*puVar22));
                auVar37 = vfmadd231ss_fma(auVar37,ZEXT416((uint)(*(float *)(lVar20 + 8) +
                                                                *(float *)(lVar19 + -8))),
                                          ZEXT416(uVar7));
                *puVar22 = auVar37._0_4_;
                lVar19 = lVar19 + 4;
                lVar20 = lVar20 + 4;
                puVar22 = puVar22 + 1;
              } while (uVar23 < uVar10);
            }
            auVar38._4_4_ = uVar7;
            auVar38._0_4_ = uVar7;
            auVar38._8_4_ = uVar7;
            auVar38._12_4_ = uVar7;
            auVar38._16_4_ = uVar7;
            auVar38._20_4_ = uVar7;
            auVar38._24_4_ = uVar7;
            auVar38._28_4_ = uVar7;
            lVar19 = lVar11 + uVar10 * 4;
            auVar41._4_4_ = uVar6;
            auVar41._0_4_ = uVar6;
            auVar41._8_4_ = uVar6;
            auVar41._12_4_ = uVar6;
            auVar41._16_4_ = uVar6;
            auVar41._20_4_ = uVar6;
            auVar41._24_4_ = uVar6;
            auVar41._28_4_ = uVar6;
            do {
              pfVar1 = (float *)(lVar17 + -4 + uVar10 * 4);
              auVar33._0_4_ = *(float *)(lVar19 + 4) + *pfVar1;
              auVar33._4_4_ = *(float *)(lVar19 + 8) + pfVar1[1];
              auVar33._8_4_ = *(float *)(lVar19 + 0xc) + pfVar1[2];
              auVar33._12_4_ = *(float *)(lVar19 + 0x10) + pfVar1[3];
              auVar33._16_4_ = *(float *)(lVar19 + 0x14) + pfVar1[4];
              auVar33._20_4_ = *(float *)(lVar19 + 0x18) + pfVar1[5];
              auVar33._24_4_ = *(float *)(lVar19 + 0x1c) + pfVar1[6];
              auVar33._28_4_ = *(float *)(lVar19 + 0x20) + pfVar1[7];
              auVar37 = vfmadd213ps_fma(auVar33,auVar41,*(undefined1 (*) [32])(param_2 + uVar10));
              pfVar1 = (float *)(lVar17 + -8 + uVar10 * 4);
              auVar29._0_4_ = *(float *)(lVar19 + 8) + *pfVar1;
              auVar29._4_4_ = *(float *)(lVar19 + 0xc) + pfVar1[1];
              auVar29._8_4_ = *(float *)(lVar19 + 0x10) + pfVar1[2];
              auVar29._12_4_ = *(float *)(lVar19 + 0x14) + pfVar1[3];
              auVar29._16_4_ = *(float *)(lVar19 + 0x18) + pfVar1[4];
              auVar29._20_4_ = *(float *)(lVar19 + 0x1c) + pfVar1[5];
              auVar29._24_4_ = *(float *)(lVar19 + 0x20) + pfVar1[6];
              auVar29._28_4_ = *(float *)(lVar19 + 0x24) + pfVar1[7];
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar37),auVar29,auVar38);
              *(undefined1 (*) [32])(param_2 + uVar10) = ZEXT1632(auVar37);
              pfVar1 = (float *)(lVar17 + 0x1c + uVar10 * 4);
              auVar30._0_4_ = *(float *)(lVar19 + 0x24) + *pfVar1;
              auVar30._4_4_ = *(float *)(lVar19 + 0x28) + pfVar1[1];
              auVar30._8_4_ = *(float *)(lVar19 + 0x2c) + pfVar1[2];
              auVar30._12_4_ = *(float *)(lVar19 + 0x30) + pfVar1[3];
              auVar30._16_4_ = *(float *)(lVar19 + 0x34) + pfVar1[4];
              auVar30._20_4_ = *(float *)(lVar19 + 0x38) + pfVar1[5];
              auVar30._24_4_ = *(float *)(lVar19 + 0x3c) + pfVar1[6];
              auVar30._28_4_ = *(float *)(lVar19 + 0x40) + pfVar1[7];
              auVar37 = vfmadd213ps_fma(auVar30,auVar41,*(undefined1 (*) [32])(param_2 + uVar10 + 8)
                                       );
              pfVar1 = (float *)(lVar17 + 0x18 + uVar10 * 4);
              auVar34._0_4_ = *(float *)(lVar19 + 0x28) + *pfVar1;
              auVar34._4_4_ = *(float *)(lVar19 + 0x2c) + pfVar1[1];
              auVar34._8_4_ = *(float *)(lVar19 + 0x30) + pfVar1[2];
              auVar34._12_4_ = *(float *)(lVar19 + 0x34) + pfVar1[3];
              auVar34._16_4_ = *(float *)(lVar19 + 0x38) + pfVar1[4];
              auVar34._20_4_ = *(float *)(lVar19 + 0x3c) + pfVar1[5];
              auVar34._24_4_ = *(float *)(lVar19 + 0x40) + pfVar1[6];
              auVar34._28_4_ = *(float *)(lVar19 + 0x44) + pfVar1[7];
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar37),auVar34,auVar38);
              lVar19 = lVar19 + 0x40;
              *(undefined1 (*) [32])(param_2 + uVar10 + 8) = ZEXT1632(auVar37);
              uVar10 = uVar10 + 0x10;
            } while (uVar10 < uVar21);
          }
          if (uVar21 + 1 <= param_3) {
            uVar10 = param_3 - uVar21;
            if ((longlong)uVar10 < 4) {
              uVar23 = 0;
            }
            else {
              pauVar14 = (undefined1 (*) [16])(param_2 + uVar21);
              uVar23 = uVar10 & 0xfffffffffffffffc;
              uVar24 = 0;
              auVar37._4_4_ = uVar7;
              auVar37._0_4_ = uVar7;
              auVar37._8_4_ = uVar7;
              auVar37._12_4_ = uVar7;
              auVar40._4_4_ = uVar6;
              auVar40._0_4_ = uVar6;
              auVar40._8_4_ = uVar6;
              auVar40._12_4_ = uVar6;
              lVar19 = lVar9;
              lVar20 = lVar15;
              do {
                uVar24 = uVar24 + 4;
                lVar3 = lVar18 * -4 + param_1 + uVar21 * 4;
                pfVar1 = (float *)(lVar19 + 4 + lVar3);
                pfVar2 = (float *)(lVar19 + 8 + lVar3);
                lVar19 = lVar19 + 0x10;
                lVar3 = lVar20 + -8 + param_1;
                lVar20 = lVar20 + 0x10;
                pfVar4 = (float *)(lVar3 + 4 + (lVar18 + uVar21) * 4);
                auVar28._0_4_ = *pfVar1 + *pfVar4;
                auVar28._4_4_ = pfVar1[1] + pfVar4[1];
                auVar28._8_4_ = pfVar1[2] + pfVar4[2];
                auVar28._12_4_ = pfVar1[3] + pfVar4[3];
                pfVar1 = (float *)(lVar3 + (lVar18 + uVar21) * 4);
                auVar31._0_4_ = *pfVar2 + *pfVar1;
                auVar31._4_4_ = pfVar2[1] + pfVar1[1];
                auVar31._8_4_ = pfVar2[2] + pfVar1[2];
                auVar31._12_4_ = pfVar2[3] + pfVar1[3];
                auVar36 = vfmadd213ps_fma(auVar28,auVar40,*pauVar14);
                auVar36 = vfmadd231ps_fma(auVar36,auVar31,auVar37);
                *pauVar14 = auVar36;
                pauVar14 = pauVar14 + 1;
              } while (uVar24 < uVar23);
            }
            if (uVar23 < uVar10) {
              lVar19 = lVar11 + uVar21 * 4;
              lVar20 = lVar17 + uVar21 * 4;
              do {
                auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar19 + 4 + uVar23 * 4) +
                                                        *(float *)(lVar20 + -4 + uVar23 * 4))),
                                          ZEXT416(uVar6),ZEXT416(param_2[uVar21 + uVar23]));
                auVar37 = vfmadd231ss_fma(auVar37,ZEXT416((uint)(*(float *)(lVar19 + 8 + uVar23 * 4)
                                                                + *(float *)(lVar20 + -8 +
                                                                            uVar23 * 4))),
                                          ZEXT416(uVar7));
                param_2[uVar21 + uVar23] = auVar37._0_4_;
                uVar23 = uVar23 + 1;
              } while (uVar23 < uVar10);
            }
          }
        }
        uVar10 = uVar12 + 1;
        lVar11 = lVar11 + 8;
        lVar9 = lVar9 + 8;
        lVar17 = lVar17 + -8;
        lVar15 = lVar15 + -8;
      } while (uVar10 < lVar18 - 1U >> 1);
      lVar17 = uVar12 + 2 + uVar10;
    }
    if (lVar18 != lVar17) {
      fVar5 = param_4[lVar17];
      lVar9 = lVar18 * -4;
      lVar16 = param_1 + lVar9 + lVar17 * 4;
      if (0 < (longlong)param_3) {
        if ((longlong)param_3 < 0x10) {
LAB_1408f5d48:
          uVar13 = 0;
        }
        else {
          uVar10 = (ulonglong)param_2 & 0x1f;
          if (uVar10 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_1408f5d48;
            uVar10 = 0x20 - uVar10 >> 2;
          }
          if ((longlong)param_3 < (longlong)(uVar10 + 0x10)) goto LAB_1408f5d48;
          lVar11 = param_1 + lVar18 * 4 + lVar17 * -4;
          uVar13 = param_3 - (param_3 - uVar10 & 0xf);
          lVar15 = param_1 + lVar9 + lVar17 * 4;
          uVar12 = 0;
          if (uVar10 != 0) {
            do {
              auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar15 + uVar12 * 4) +
                                                      *(float *)(lVar11 + uVar12 * 4))),
                                        ZEXT416((uint)fVar5),ZEXT416(param_2[uVar12]));
              param_2[uVar12] = auVar37._0_4_;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
          }
          auVar26._4_4_ = fVar5;
          auVar26._0_4_ = fVar5;
          auVar26._8_4_ = fVar5;
          auVar26._12_4_ = fVar5;
          auVar26._16_4_ = fVar5;
          auVar26._20_4_ = fVar5;
          auVar26._24_4_ = fVar5;
          auVar26._28_4_ = fVar5;
          do {
            pfVar1 = (float *)(lVar15 + uVar10 * 4);
            pfVar2 = (float *)(lVar9 + lVar17 * 4 + param_1 + 0x20 + uVar10 * 4);
            pfVar4 = (float *)(lVar11 + uVar10 * 4);
            auVar35._0_4_ = *pfVar1 + *pfVar4;
            auVar35._4_4_ = pfVar1[1] + pfVar4[1];
            auVar35._8_4_ = pfVar1[2] + pfVar4[2];
            auVar35._12_4_ = pfVar1[3] + pfVar4[3];
            auVar35._16_4_ = pfVar1[4] + pfVar4[4];
            auVar35._20_4_ = pfVar1[5] + pfVar4[5];
            auVar35._24_4_ = pfVar1[6] + pfVar4[6];
            auVar35._28_4_ = pfVar1[7] + pfVar4[7];
            pfVar1 = (float *)(lVar17 * -4 + lVar18 * 4 + param_1 + 0x20 + uVar10 * 4);
            auVar42._0_4_ = *pfVar2 + *pfVar1;
            auVar42._4_4_ = pfVar2[1] + pfVar1[1];
            auVar42._8_4_ = pfVar2[2] + pfVar1[2];
            auVar42._12_4_ = pfVar2[3] + pfVar1[3];
            auVar42._16_4_ = pfVar2[4] + pfVar1[4];
            auVar42._20_4_ = pfVar2[5] + pfVar1[5];
            auVar42._24_4_ = pfVar2[6] + pfVar1[6];
            auVar42._28_4_ = pfVar2[7] + pfVar1[7];
            auVar37 = vfmadd213ps_fma(auVar35,auVar26,*(undefined1 (*) [32])(param_2 + uVar10));
            auVar36 = vfmadd213ps_fma(auVar42,auVar26,*(undefined1 (*) [32])(param_2 + uVar10 + 8));
            *(undefined1 (*) [32])(param_2 + uVar10) = ZEXT1632(auVar37);
            *(undefined1 (*) [32])(param_2 + uVar10 + 8) = ZEXT1632(auVar36);
            uVar10 = uVar10 + 0x10;
          } while (uVar10 < uVar13);
        }
        if (uVar13 + 1 <= param_3) {
          uVar10 = param_3 - uVar13;
          if ((longlong)uVar10 < 4) {
            uVar12 = 0;
          }
          else {
            uVar21 = 0;
            auVar25._4_4_ = fVar5;
            auVar25._0_4_ = fVar5;
            auVar25._8_4_ = fVar5;
            auVar25._12_4_ = fVar5;
            uVar12 = uVar10 & 0xfffffffffffffffc;
            do {
              pfVar1 = (float *)(lVar9 + lVar17 * 4 + param_1 + uVar13 * 4 + uVar21 * 4);
              pfVar2 = (float *)(lVar17 * -4 + lVar18 * 4 + param_1 + uVar13 * 4 + uVar21 * 4);
              auVar32._0_4_ = *pfVar1 + *pfVar2;
              auVar32._4_4_ = pfVar1[1] + pfVar2[1];
              auVar32._8_4_ = pfVar1[2] + pfVar2[2];
              auVar32._12_4_ = pfVar1[3] + pfVar2[3];
              auVar37 = vfmadd213ps_fma(auVar32,auVar25,
                                        *(undefined1 (*) [16])(param_2 + uVar13 + uVar21));
              *(undefined1 (*) [16])(param_2 + uVar13 + uVar21) = auVar37;
              uVar21 = uVar21 + 4;
            } while (uVar21 < uVar12);
          }
          if (uVar12 < uVar10) {
            do {
              auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar9 + lVar17 * 4 + param_1 +
                                                                  uVar13 * 4 + uVar12 * 4) +
                                                      *(float *)(param_1 + lVar17 * -4 + lVar18 * 4
                                                                 + uVar13 * 4 + uVar12 * 4))),
                                        ZEXT416((uint)fVar5),ZEXT416(param_2[uVar13 + uVar12]));
              param_2[uVar13 + uVar12] = auVar37._0_4_;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
          }
        }
      }
    }
  }
  fVar5 = param_4[lVar18];
  if ((longlong)param_3 < 1) {
    return;
  }
  if ((longlong)param_3 < 8) {
LAB_1408f5d2e:
    uVar10 = 0;
  }
  else {
    if ((longlong)param_3 < 0xe1) {
      uVar13 = 0;
      uVar10 = param_3 & 0xfffffffffffffff8;
    }
    else {
      uVar13 = (ulonglong)param_2 & 0x1f;
      if (uVar13 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_1408f5d2e;
        uVar13 = 0x20 - uVar13 >> 2;
      }
      if ((longlong)param_3 < (longlong)(uVar13 + 8)) goto LAB_1408f5d2e;
      uVar12 = 0;
      uVar10 = param_3 - (param_3 - uVar13 & 7);
      if (uVar13 != 0) {
        do {
          auVar37 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar16 + 4 + uVar12 * 4)),ZEXT416((uint)fVar5)
                                    ,ZEXT416(param_2[uVar12]));
          param_2[uVar12] = auVar37._0_4_;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
      }
    }
    auVar27._4_4_ = fVar5;
    auVar27._0_4_ = fVar5;
    auVar27._8_4_ = fVar5;
    auVar27._12_4_ = fVar5;
    auVar27._16_4_ = fVar5;
    auVar27._20_4_ = fVar5;
    auVar27._24_4_ = fVar5;
    auVar27._28_4_ = fVar5;
    do {
      auVar37 = vfmadd213ps_fma(*(undefined1 (*) [32])(lVar16 + 4 + uVar13 * 4),auVar27,
                                *(undefined1 (*) [32])(param_2 + uVar13));
      *(undefined1 (*) [32])(param_2 + uVar13) = ZEXT1632(auVar37);
      uVar13 = uVar13 + 8;
    } while (uVar13 < uVar10);
  }
  uVar13 = 0;
  if (uVar10 + 1 <= param_3) {
    do {
      auVar37 = vfmadd213ss_fma(ZEXT416(*(uint *)(lVar16 + uVar10 * 4 + 4 + uVar13 * 4)),
                                ZEXT416((uint)fVar5),ZEXT416(param_2[uVar10 + uVar13]));
      param_2[uVar10 + uVar13] = auVar37._0_4_;
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_3 - uVar10);
  }
  return;
}

