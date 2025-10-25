
void FUN_140207f40(longlong param_1,uint *param_2,longlong param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  longlong lVar23;
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
  longlong lStack_b0;
  
  lVar19 = (longlong)(param_5 >> 1);
  uVar6 = param_3 * 3;
  fVar4 = *param_4;
  lStack_b0 = lVar19 * -0xc + param_1;
  if (0 < (longlong)uVar6) {
    if ((longlong)uVar6 < 0x10) {
LAB_140208823:
      uVar14 = 0;
    }
    else {
      if ((longlong)uVar6 < 0x1d) {
        uVar14 = uVar6 & 0xfffffffffffffff0;
        uVar12 = 0;
        lVar8 = lVar19 * -0xc + param_1;
        lVar16 = param_1 + lVar19 * 0xc;
      }
      else {
        uVar12 = (ulonglong)param_2 & 0x1f;
        if (uVar12 != 0) {
          if (((ulonglong)param_2 & 3) != 0) goto LAB_140208823;
          uVar12 = 0x20 - uVar12 >> 2;
        }
        if ((longlong)uVar6 < (longlong)(uVar12 + 0x10)) goto LAB_140208823;
        lVar8 = lVar19 * -0xc + param_1;
        uVar14 = uVar6 - (uVar6 - uVar12 & 0xf);
        uVar10 = 0;
        lVar16 = param_1 + lVar19 * 0xc;
        if (uVar12 != 0) {
          do {
            param_2[uVar10] =
                 (uint)(fVar4 * (*(float *)(lVar8 + uVar10 * 4) + *(float *)(lVar16 + uVar10 * 4)));
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar12);
        }
      }
      do {
        pfVar1 = (float *)(lVar8 + uVar12 * 4);
        auVar38 = *(undefined1 (*) [32])(lVar8 + 0x20 + uVar12 * 4);
        pfVar2 = (float *)(lVar16 + uVar12 * 4);
        pfVar3 = (float *)(lVar16 + 0x20 + uVar12 * 4);
        auVar39._0_4_ = fVar4 * (*pfVar1 + *pfVar2);
        auVar39._4_4_ = fVar4 * (pfVar1[1] + pfVar2[1]);
        auVar39._8_4_ = fVar4 * (pfVar1[2] + pfVar2[2]);
        auVar39._12_4_ = fVar4 * (pfVar1[3] + pfVar2[3]);
        auVar39._16_4_ = fVar4 * (pfVar1[4] + pfVar2[4]);
        auVar39._20_4_ = fVar4 * (pfVar1[5] + pfVar2[5]);
        auVar39._28_36_ = in_ZMM4._28_36_;
        auVar39._24_4_ = fVar4 * (pfVar1[6] + pfVar2[6]);
        in_ZMM4 = ZEXT3264(auVar39._0_32_);
        auVar7._4_4_ = fVar4 * (auVar38._4_4_ + pfVar3[1]);
        auVar7._0_4_ = fVar4 * (auVar38._0_4_ + *pfVar3);
        auVar7._8_4_ = fVar4 * (auVar38._8_4_ + pfVar3[2]);
        auVar7._12_4_ = fVar4 * (auVar38._12_4_ + pfVar3[3]);
        auVar7._16_4_ = fVar4 * (auVar38._16_4_ + pfVar3[4]);
        auVar7._20_4_ = fVar4 * (auVar38._20_4_ + pfVar3[5]);
        auVar7._24_4_ = fVar4 * (auVar38._24_4_ + pfVar3[6]);
        auVar7._28_4_ = pfVar1[7] + pfVar2[7];
        *(undefined1 (*) [32])(param_2 + uVar12) = auVar39._0_32_;
        *(undefined1 (*) [32])(param_2 + uVar12 + 8) = auVar7;
        uVar12 = uVar12 + 0x10;
      } while (uVar12 < uVar14);
    }
    if (uVar14 + 1 <= uVar6) {
      uVar12 = uVar6 - uVar14;
      if ((longlong)uVar12 < 4) {
        uVar10 = 0;
      }
      else {
        uVar9 = 0;
        uVar10 = uVar12 & 0xfffffffffffffffc;
        do {
          auVar37 = *(undefined1 (*) [16])(lVar19 * -0xc + param_1 + uVar14 * 4 + uVar9 * 4);
          pfVar1 = (float *)(param_1 + lVar19 * 0xc + uVar14 * 4 + uVar9 * 4);
          auVar36._0_4_ = fVar4 * (auVar37._0_4_ + *pfVar1);
          auVar36._4_4_ = fVar4 * (auVar37._4_4_ + pfVar1[1]);
          auVar36._8_4_ = fVar4 * (auVar37._8_4_ + pfVar1[2]);
          auVar36._12_4_ = fVar4 * (auVar37._12_4_ + pfVar1[3]);
          *(undefined1 (*) [16])(param_2 + uVar14 + uVar9) = auVar36;
          uVar9 = uVar9 + 4;
        } while (uVar9 < uVar10);
      }
      if (uVar10 < uVar12) {
        do {
          param_2[uVar14 + uVar10] =
               (uint)(fVar4 * (*(float *)(lVar19 * -0xc + param_1 + uVar14 * 4 + uVar10 * 4) +
                              *(float *)(param_1 + lVar19 * 0xc + uVar14 * 4 + uVar10 * 4)));
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
    }
  }
  if (1 < lVar19) {
    uVar12 = 0;
    lVar16 = 1;
    if (lVar19 - 1U >> 1 != 0) {
      uVar10 = (ulonglong)param_2 & 0x1f;
      lVar16 = param_1 + lVar19 * 0xc;
      lVar23 = lVar19 * -0xc + param_1;
      lVar8 = 0;
      uVar14 = uVar12;
      lVar22 = lVar16;
      do {
        uVar9 = uVar14;
        lStack_b0 = lVar23 + 0x18;
        fVar4 = param_4[uVar9 * 2 + 1];
        fVar5 = param_4[uVar9 * 2 + 2];
        if (0 < (longlong)uVar6) {
          if (((longlong)uVar6 < 0x10) ||
             (((uVar14 = uVar10, uVar10 != 0 &&
               (uVar14 = 0x20 - uVar10 >> 2, ((ulonglong)param_2 & 3) != 0)) ||
              ((longlong)uVar6 < (longlong)(uVar14 + 0x10))))) {
            uVar15 = 0;
          }
          else {
            uVar24 = 0;
            uVar15 = uVar6 - (uVar6 - uVar14 & 0xf);
            lVar11 = lVar22;
            lVar13 = lVar23;
            puVar17 = param_2;
            if (uVar14 != 0) {
              do {
                uVar24 = uVar24 + 1;
                auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar13 + 0xc) +
                                                        *(float *)(lVar11 + -0xc))),
                                          ZEXT416((uint)fVar4),ZEXT416(*puVar17));
                auVar37 = vfmadd231ss_fma(auVar37,ZEXT416((uint)(*(float *)(lVar13 + 0x18) +
                                                                *(float *)(lVar11 + -0x18))),
                                          ZEXT416((uint)fVar5));
                *puVar17 = auVar37._0_4_;
                lVar11 = lVar11 + 4;
                lVar13 = lVar13 + 4;
                puVar17 = puVar17 + 1;
              } while (uVar24 < uVar14);
            }
            auVar38._4_4_ = fVar5;
            auVar38._0_4_ = fVar5;
            auVar38._8_4_ = fVar5;
            auVar38._12_4_ = fVar5;
            auVar38._16_4_ = fVar5;
            auVar38._20_4_ = fVar5;
            auVar38._24_4_ = fVar5;
            auVar38._28_4_ = fVar5;
            lVar11 = lVar23 + uVar14 * 4;
            auVar41._4_4_ = fVar4;
            auVar41._0_4_ = fVar4;
            auVar41._8_4_ = fVar4;
            auVar41._12_4_ = fVar4;
            auVar41._16_4_ = fVar4;
            auVar41._20_4_ = fVar4;
            auVar41._24_4_ = fVar4;
            auVar41._28_4_ = fVar4;
            do {
              pfVar1 = (float *)(lVar22 + -0xc + uVar14 * 4);
              auVar33._0_4_ = *(float *)(lVar11 + 0xc) + *pfVar1;
              auVar33._4_4_ = *(float *)(lVar11 + 0x10) + pfVar1[1];
              auVar33._8_4_ = *(float *)(lVar11 + 0x14) + pfVar1[2];
              auVar33._12_4_ = *(float *)(lVar11 + 0x18) + pfVar1[3];
              auVar33._16_4_ = *(float *)(lVar11 + 0x1c) + pfVar1[4];
              auVar33._20_4_ = *(float *)(lVar11 + 0x20) + pfVar1[5];
              auVar33._24_4_ = *(float *)(lVar11 + 0x24) + pfVar1[6];
              auVar33._28_4_ = *(float *)(lVar11 + 0x28) + pfVar1[7];
              auVar37 = vfmadd213ps_fma(auVar33,auVar41,*(undefined1 (*) [32])(param_2 + uVar14));
              pfVar1 = (float *)(lVar22 + -0x18 + uVar14 * 4);
              auVar29._0_4_ = *(float *)(lVar11 + 0x18) + *pfVar1;
              auVar29._4_4_ = *(float *)(lVar11 + 0x1c) + pfVar1[1];
              auVar29._8_4_ = *(float *)(lVar11 + 0x20) + pfVar1[2];
              auVar29._12_4_ = *(float *)(lVar11 + 0x24) + pfVar1[3];
              auVar29._16_4_ = *(float *)(lVar11 + 0x28) + pfVar1[4];
              auVar29._20_4_ = *(float *)(lVar11 + 0x2c) + pfVar1[5];
              auVar29._24_4_ = *(float *)(lVar11 + 0x30) + pfVar1[6];
              auVar29._28_4_ = *(float *)(lVar11 + 0x34) + pfVar1[7];
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar37),auVar29,auVar38);
              *(undefined1 (*) [32])(param_2 + uVar14) = ZEXT1632(auVar37);
              pfVar1 = (float *)(lVar22 + 0x14 + uVar14 * 4);
              auVar30._0_4_ = *(float *)(lVar11 + 0x2c) + *pfVar1;
              auVar30._4_4_ = *(float *)(lVar11 + 0x30) + pfVar1[1];
              auVar30._8_4_ = *(float *)(lVar11 + 0x34) + pfVar1[2];
              auVar30._12_4_ = *(float *)(lVar11 + 0x38) + pfVar1[3];
              auVar30._16_4_ = *(float *)(lVar11 + 0x3c) + pfVar1[4];
              auVar30._20_4_ = *(float *)(lVar11 + 0x40) + pfVar1[5];
              auVar30._24_4_ = *(float *)(lVar11 + 0x44) + pfVar1[6];
              auVar30._28_4_ = *(float *)(lVar11 + 0x48) + pfVar1[7];
              auVar37 = vfmadd213ps_fma(auVar30,auVar41,*(undefined1 (*) [32])(param_2 + uVar14 + 8)
                                       );
              pfVar1 = (float *)(lVar22 + 8 + uVar14 * 4);
              auVar34._0_4_ = *(float *)(lVar11 + 0x38) + *pfVar1;
              auVar34._4_4_ = *(float *)(lVar11 + 0x3c) + pfVar1[1];
              auVar34._8_4_ = *(float *)(lVar11 + 0x40) + pfVar1[2];
              auVar34._12_4_ = *(float *)(lVar11 + 0x44) + pfVar1[3];
              auVar34._16_4_ = *(float *)(lVar11 + 0x48) + pfVar1[4];
              auVar34._20_4_ = *(float *)(lVar11 + 0x4c) + pfVar1[5];
              auVar34._24_4_ = *(float *)(lVar11 + 0x50) + pfVar1[6];
              auVar34._28_4_ = *(float *)(lVar11 + 0x54) + pfVar1[7];
              auVar37 = vfmadd231ps_fma(ZEXT1632(auVar37),auVar34,auVar38);
              lVar11 = lVar11 + 0x40;
              *(undefined1 (*) [32])(param_2 + uVar14 + 8) = ZEXT1632(auVar37);
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar15);
          }
          if (uVar15 + 1 <= uVar6) {
            uVar14 = uVar6 - uVar15;
            if ((longlong)uVar14 < 4) {
              uVar24 = 0;
            }
            else {
              pauVar21 = (undefined1 (*) [16])(param_2 + uVar15);
              uVar24 = uVar14 & 0xfffffffffffffffc;
              uVar18 = 0;
              auVar37._4_4_ = fVar5;
              auVar37._0_4_ = fVar5;
              auVar37._8_4_ = fVar5;
              auVar37._12_4_ = fVar5;
              auVar40._4_4_ = fVar4;
              auVar40._0_4_ = fVar4;
              auVar40._8_4_ = fVar4;
              auVar40._12_4_ = fVar4;
              lVar11 = lVar8;
              uVar20 = uVar12;
              do {
                uVar18 = uVar18 + 4;
                lVar13 = lVar19 * -0xc + param_1 + uVar15 * 4;
                pfVar1 = (float *)(uVar20 + 0xc + lVar13);
                pfVar2 = (float *)(uVar20 + 0x18 + lVar13);
                uVar20 = uVar20 + 0x10;
                lVar13 = lVar16 + uVar15 * 4;
                pfVar3 = (float *)(lVar11 + -0xc + lVar13);
                auVar28._0_4_ = *pfVar1 + *pfVar3;
                auVar28._4_4_ = pfVar1[1] + pfVar3[1];
                auVar28._8_4_ = pfVar1[2] + pfVar3[2];
                auVar28._12_4_ = pfVar1[3] + pfVar3[3];
                pfVar1 = (float *)(lVar11 + -0x18 + lVar13);
                auVar31._0_4_ = *pfVar2 + *pfVar1;
                auVar31._4_4_ = pfVar2[1] + pfVar1[1];
                auVar31._8_4_ = pfVar2[2] + pfVar1[2];
                auVar31._12_4_ = pfVar2[3] + pfVar1[3];
                auVar36 = vfmadd213ps_fma(auVar28,auVar40,*pauVar21);
                auVar36 = vfmadd231ps_fma(auVar36,auVar31,auVar37);
                lVar11 = lVar11 + 0x10;
                *pauVar21 = auVar36;
                pauVar21 = pauVar21 + 1;
              } while (uVar18 < uVar24);
            }
            if (uVar24 < uVar14) {
              lVar11 = lVar23 + uVar15 * 4;
              lVar13 = lVar22 + uVar15 * 4;
              do {
                auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar11 + 0xc + uVar24 * 4) +
                                                        *(float *)(lVar13 + -0xc + uVar24 * 4))),
                                          ZEXT416((uint)fVar4),ZEXT416(param_2[uVar15 + uVar24]));
                auVar37 = vfmadd231ss_fma(auVar37,ZEXT416((uint)(*(float *)(lVar11 + 0x18 +
                                                                           uVar24 * 4) +
                                                                *(float *)(lVar13 + -0x18 +
                                                                          uVar24 * 4))),
                                          ZEXT416((uint)fVar5));
                param_2[uVar15 + uVar24] = auVar37._0_4_;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar14);
            }
          }
        }
        uVar14 = uVar9 + 1;
        lVar22 = lVar22 + -0x18;
        lVar8 = lVar8 + -0x18;
        lVar23 = lVar23 + 0x18;
        uVar12 = uVar12 + 0x18;
      } while (uVar14 < lVar19 - 1U >> 1);
      lVar16 = uVar9 + 2 + uVar14;
    }
    if (lVar19 != lVar16) {
      lVar8 = lVar19 * -0xc;
      fVar4 = param_4[lVar16];
      lStack_b0 = param_1 + lVar8 + lVar16 * 0xc;
      if (0 < (longlong)uVar6) {
        if ((longlong)uVar6 < 0x10) {
LAB_140208807:
          uVar14 = 0;
        }
        else {
          uVar12 = (ulonglong)param_2 & 0x1f;
          if (uVar12 != 0) {
            if (((ulonglong)param_2 & 3) != 0) goto LAB_140208807;
            uVar12 = 0x20 - uVar12 >> 2;
          }
          if ((longlong)uVar6 < (longlong)(uVar12 + 0x10)) goto LAB_140208807;
          uVar14 = uVar6 - (uVar6 - uVar12 & 0xf);
          lVar22 = param_1 + lVar19 * 0xc + lVar16 * -0xc;
          uVar10 = 0;
          if (uVar12 != 0) {
            do {
              auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lStack_b0 + uVar10 * 4) +
                                                      *(float *)(lVar22 + uVar10 * 4))),
                                        ZEXT416((uint)fVar4),ZEXT416(param_2[uVar10]));
              param_2[uVar10] = auVar37._0_4_;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
          auVar26._4_4_ = fVar4;
          auVar26._0_4_ = fVar4;
          auVar26._8_4_ = fVar4;
          auVar26._12_4_ = fVar4;
          auVar26._16_4_ = fVar4;
          auVar26._20_4_ = fVar4;
          auVar26._24_4_ = fVar4;
          auVar26._28_4_ = fVar4;
          do {
            pfVar1 = (float *)(lStack_b0 + uVar12 * 4);
            pfVar3 = (float *)(lVar8 + lVar16 * 0xc + param_1 + 0x20 + uVar12 * 4);
            pfVar2 = (float *)(lVar22 + uVar12 * 4);
            auVar35._0_4_ = *pfVar1 + *pfVar2;
            auVar35._4_4_ = pfVar1[1] + pfVar2[1];
            auVar35._8_4_ = pfVar1[2] + pfVar2[2];
            auVar35._12_4_ = pfVar1[3] + pfVar2[3];
            auVar35._16_4_ = pfVar1[4] + pfVar2[4];
            auVar35._20_4_ = pfVar1[5] + pfVar2[5];
            auVar35._24_4_ = pfVar1[6] + pfVar2[6];
            auVar35._28_4_ = pfVar1[7] + pfVar2[7];
            pfVar1 = (float *)(lVar16 * -0xc + lVar19 * 0xc + param_1 + 0x20 + uVar12 * 4);
            auVar42._0_4_ = *pfVar3 + *pfVar1;
            auVar42._4_4_ = pfVar3[1] + pfVar1[1];
            auVar42._8_4_ = pfVar3[2] + pfVar1[2];
            auVar42._12_4_ = pfVar3[3] + pfVar1[3];
            auVar42._16_4_ = pfVar3[4] + pfVar1[4];
            auVar42._20_4_ = pfVar3[5] + pfVar1[5];
            auVar42._24_4_ = pfVar3[6] + pfVar1[6];
            auVar42._28_4_ = pfVar3[7] + pfVar1[7];
            auVar37 = vfmadd213ps_fma(auVar35,auVar26,*(undefined1 (*) [32])(param_2 + uVar12));
            auVar36 = vfmadd213ps_fma(auVar42,auVar26,*(undefined1 (*) [32])(param_2 + uVar12 + 8));
            *(undefined1 (*) [32])(param_2 + uVar12) = ZEXT1632(auVar37);
            *(undefined1 (*) [32])(param_2 + uVar12 + 8) = ZEXT1632(auVar36);
            uVar12 = uVar12 + 0x10;
          } while (uVar12 < uVar14);
        }
        if (uVar14 + 1 <= uVar6) {
          uVar12 = uVar6 - uVar14;
          if ((longlong)uVar12 < 4) {
            uVar10 = 0;
          }
          else {
            uVar9 = 0;
            uVar10 = uVar12 & 0xfffffffffffffffc;
            auVar25._4_4_ = fVar4;
            auVar25._0_4_ = fVar4;
            auVar25._8_4_ = fVar4;
            auVar25._12_4_ = fVar4;
            do {
              pfVar1 = (float *)(lVar8 + lVar16 * 0xc + param_1 + uVar14 * 4 + uVar9 * 4);
              pfVar2 = (float *)(lVar16 * -0xc + lVar19 * 0xc + param_1 + uVar14 * 4 + uVar9 * 4);
              auVar32._0_4_ = *pfVar1 + *pfVar2;
              auVar32._4_4_ = pfVar1[1] + pfVar2[1];
              auVar32._8_4_ = pfVar1[2] + pfVar2[2];
              auVar32._12_4_ = pfVar1[3] + pfVar2[3];
              auVar37 = vfmadd213ps_fma(auVar32,auVar25,
                                        *(undefined1 (*) [16])(param_2 + uVar14 + uVar9));
              *(undefined1 (*) [16])(param_2 + uVar14 + uVar9) = auVar37;
              uVar9 = uVar9 + 4;
            } while (uVar9 < uVar10);
          }
          if (uVar10 < uVar12) {
            do {
              auVar37 = vfmadd213ss_fma(ZEXT416((uint)(*(float *)(lVar8 + lVar16 * 0xc + param_1 +
                                                                  uVar14 * 4 + uVar10 * 4) +
                                                      *(float *)(param_1 + lVar16 * -0xc +
                                                                           lVar19 * 0xc + uVar14 * 4
                                                                + uVar10 * 4))),ZEXT416((uint)fVar4)
                                        ,ZEXT416(param_2[uVar14 + uVar10]));
              param_2[uVar14 + uVar10] = auVar37._0_4_;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
        }
      }
    }
  }
  fVar4 = param_4[lVar19];
  if ((longlong)uVar6 < 1) {
    return;
  }
  if ((longlong)uVar6 < 8) {
LAB_1402087ee:
    uVar12 = 0;
  }
  else {
    if ((longlong)uVar6 < 0xe1) {
      uVar14 = 0;
      uVar12 = uVar6 & 0xfffffffffffffff8;
    }
    else {
      uVar14 = (ulonglong)param_2 & 0x1f;
      if (uVar14 != 0) {
        if (((ulonglong)param_2 & 3) != 0) goto LAB_1402087ee;
        uVar14 = 0x20 - uVar14 >> 2;
      }
      if ((longlong)uVar6 < (longlong)(uVar14 + 8)) goto LAB_1402087ee;
      uVar10 = 0;
      uVar12 = uVar6 - (uVar6 - uVar14 & 7);
      if (uVar14 != 0) {
        do {
          auVar37 = vfmadd213ss_fma(ZEXT416(*(uint *)(lStack_b0 + 0xc + uVar10 * 4)),
                                    ZEXT416((uint)fVar4),ZEXT416(param_2[uVar10]));
          param_2[uVar10] = auVar37._0_4_;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar14);
      }
    }
    auVar27._4_4_ = fVar4;
    auVar27._0_4_ = fVar4;
    auVar27._8_4_ = fVar4;
    auVar27._12_4_ = fVar4;
    auVar27._16_4_ = fVar4;
    auVar27._20_4_ = fVar4;
    auVar27._24_4_ = fVar4;
    auVar27._28_4_ = fVar4;
    do {
      auVar37 = vfmadd213ps_fma(*(undefined1 (*) [32])(lStack_b0 + 0xc + uVar14 * 4),auVar27,
                                *(undefined1 (*) [32])(param_2 + uVar14));
      *(undefined1 (*) [32])(param_2 + uVar14) = ZEXT1632(auVar37);
      uVar14 = uVar14 + 8;
    } while (uVar14 < uVar12);
  }
  uVar14 = 0;
  if (uVar12 + 1 <= uVar6) {
    do {
      auVar37 = vfmadd213ss_fma(ZEXT416(*(uint *)(lStack_b0 + uVar12 * 4 + 0xc + uVar14 * 4)),
                                ZEXT416((uint)fVar4),ZEXT416(param_2[uVar12 + uVar14]));
      param_2[uVar12 + uVar14] = auVar37._0_4_;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6 - uVar12);
  }
  return;
}

