
void FUN_1408624e0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,int param_7,int param_8)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  undefined2 uVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [32];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  
  uVar29 = (ulonglong)param_7;
  param_7 = param_7 >> 1;
  lVar17 = (longlong)param_3;
  lVar18 = lVar17 - param_7;
  lVar18 = (lVar18 >> 0x3f & uVar29) + lVar18;
  if (lVar18 == 0) {
    uVar19 = 0;
    uVar28 = uVar29;
  }
  else {
    uVar19 = (ulonglong)(int)lVar18;
    uVar28 = uVar19;
  }
  lVar23 = uVar28 - 1;
  uVar28 = uVar19 + 1;
  if (uVar19 + 1 == uVar29) {
    uVar28 = 0;
  }
  fVar4 = *param_6;
  uVar19 = (longlong)(int)lVar23;
  if ((longlong)(int)lVar23 < 1) {
    uVar19 = uVar29;
  }
  lVar25 = uVar19 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_140862e8d:
      uVar20 = 0;
      if (param_5 == 0) goto LAB_14086273e;
      uVar31 = 0;
      uVar19 = param_5;
    }
    else {
      uVar31 = param_2 * lVar18 + param_1;
      uVar19 = uVar31 & 0x1f;
      if (uVar19 != 0) {
        if ((uVar31 & 3) != 0) goto LAB_140862e8d;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 0x10)) goto LAB_140862e8d;
      lVar30 = param_2 * lVar23 + param_1;
      uVar32 = 0;
      uVar20 = param_5 - (param_5 - uVar19 & 0xf);
      if (uVar19 != 0) {
        do {
          *(float *)(uVar31 + uVar32 * 4) =
               fVar4 * (*(float *)(uVar31 + uVar32 * 4) + *(float *)(lVar30 + uVar32 * 4));
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar19);
      }
      auVar8 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
      do {
        auVar44 = *(undefined1 (*) [16])(lVar30 + uVar19 * 4);
        auVar5 = *(undefined1 (*) [16])(lVar30 + 0x10 + uVar19 * 4);
        pfVar24 = (float *)(uVar31 + uVar19 * 4);
        auVar6 = *(undefined1 (*) [16])(lVar30 + 0x20 + uVar19 * 4);
        fVar33 = auVar8._0_4_;
        auVar42._0_4_ = fVar33 * (auVar44._0_4_ + *pfVar24);
        fVar34 = auVar8._4_4_;
        auVar42._4_4_ = fVar34 * (auVar44._4_4_ + pfVar24[1]);
        fVar35 = auVar8._8_4_;
        auVar42._8_4_ = fVar35 * (auVar44._8_4_ + pfVar24[2]);
        fVar36 = auVar8._12_4_;
        auVar42._12_4_ = fVar36 * (auVar44._12_4_ + pfVar24[3]);
        auVar42._16_4_ = fVar33 * (auVar5._0_4_ + pfVar24[4]);
        auVar42._20_4_ = fVar34 * (auVar5._4_4_ + pfVar24[5]);
        auVar42._24_4_ = fVar35 * (auVar5._8_4_ + pfVar24[6]);
        auVar42._28_4_ = 0;
        *(undefined1 (*) [32])(uVar31 + uVar19 * 4) = auVar42;
        auVar44 = *(undefined1 (*) [16])(lVar30 + 0x30 + uVar19 * 4);
        pfVar24 = (float *)(uVar31 + 0x20 + uVar19 * 4);
        auVar43._0_4_ = fVar33 * (auVar6._0_4_ + *pfVar24);
        auVar43._4_4_ = fVar34 * (auVar6._4_4_ + pfVar24[1]);
        auVar43._8_4_ = fVar35 * (auVar6._8_4_ + pfVar24[2]);
        auVar43._12_4_ = fVar36 * (auVar6._12_4_ + pfVar24[3]);
        auVar43._16_4_ = fVar33 * (auVar44._0_4_ + pfVar24[4]);
        auVar43._20_4_ = fVar34 * (auVar44._4_4_ + pfVar24[5]);
        auVar43._24_4_ = fVar35 * (auVar44._8_4_ + pfVar24[6]);
        auVar43._28_4_ = 0;
        *(undefined1 (*) [32])(uVar31 + 0x20 + uVar19 * 4) = auVar43;
        uVar19 = uVar19 + 0x10;
      } while (uVar19 < uVar20);
      if (param_5 < uVar20 + 1) goto LAB_14086273e;
      uVar19 = param_5 - uVar20;
      if ((longlong)uVar19 < 4) {
        uVar31 = 0;
      }
      else {
        lVar1 = uVar31 + uVar20 * 4;
        uVar31 = uVar19 & 0xfffffffffffffffc;
        uVar32 = 0;
        do {
          auVar8 = *(undefined1 (*) [16])(lVar1 + uVar32 * 4);
          pfVar24 = (float *)(lVar30 + uVar20 * 4 + uVar32 * 4);
          fVar9 = pfVar24[1];
          fVar10 = pfVar24[2];
          fVar11 = pfVar24[3];
          pfVar2 = (float *)(lVar1 + uVar32 * 4);
          *pfVar2 = fVar33 * (auVar8._0_4_ + *pfVar24);
          pfVar2[1] = fVar34 * (auVar8._4_4_ + fVar9);
          pfVar2[2] = fVar35 * (auVar8._8_4_ + fVar10);
          pfVar2[3] = fVar36 * (auVar8._12_4_ + fVar11);
          uVar32 = uVar32 + 4;
        } while (uVar32 < uVar31);
      }
    }
    if (uVar31 < uVar19) {
      lVar30 = param_2 * lVar18 + param_1 + uVar20 * 4;
      do {
        *(float *)(lVar30 + uVar31 * 4) =
             fVar4 * (*(float *)(lVar30 + uVar31 * 4) +
                     *(float *)(lVar23 * param_2 + param_1 + uVar20 * 4 + uVar31 * 4));
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar19);
    }
  }
LAB_14086273e:
  if (1 < param_7) {
    uVar31 = param_2 * lVar18 + param_1;
    uVar16 = 0;
    uVar19 = uVar31 & 0x1f;
    pfVar24 = param_6;
    do {
      while( true ) {
        lVar23 = param_2 * uVar28;
        lVar30 = param_2 * lVar25;
        uVar28 = uVar28 + 1;
        if (uVar28 == uVar29) {
          uVar28 = 0;
        }
        lVar25 = lVar25 + -1;
        fVar4 = pfVar24[1];
        if (lVar25 < 0) {
          lVar25 = uVar29 - 1;
        }
        lVar23 = lVar23 + param_1;
        lVar30 = lVar30 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 0x10) ||
           (((uVar20 = uVar19, uVar19 != 0 && (uVar20 = 0x20 - uVar19 >> 2, (uVar31 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar20 + 0x10))))) {
          uVar32 = 0;
          if (param_5 != 0) {
            uVar21 = 0;
            uVar20 = param_5;
            goto LAB_140862965;
          }
        }
        else {
          uVar21 = 0;
          uVar32 = param_5 - (param_5 - uVar20 & 0xf);
          if (uVar20 != 0) {
            do {
              *(float *)(uVar31 + uVar21 * 4) =
                   fVar4 * (*(float *)(lVar23 + uVar21 * 4) + *(float *)(lVar30 + uVar21 * 4)) +
                   *(float *)(uVar31 + uVar21 * 4);
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar20);
          }
          auVar8 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
          do {
            auVar44 = *(undefined1 (*) [16])(lVar23 + uVar20 * 4);
            auVar5 = *(undefined1 (*) [16])(lVar30 + uVar20 * 4);
            auVar6 = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar20 * 4);
            auVar7 = *(undefined1 (*) [16])(lVar30 + 0x10 + uVar20 * 4);
            pfVar2 = (float *)(lVar23 + 0x20 + uVar20 * 4);
            fVar12 = *pfVar2;
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            fVar38 = auVar8._0_4_;
            fVar39 = auVar8._4_4_;
            fVar40 = auVar8._8_4_;
            fVar41 = auVar8._12_4_;
            pfVar2 = (float *)(uVar31 + uVar20 * 4);
            fVar33 = pfVar2[1];
            fVar34 = pfVar2[2];
            fVar35 = pfVar2[3];
            fVar36 = pfVar2[4];
            fVar9 = pfVar2[5];
            fVar10 = pfVar2[6];
            fVar11 = pfVar2[7];
            pfVar3 = (float *)(uVar31 + uVar20 * 4);
            *pfVar3 = fVar38 * (auVar44._0_4_ + auVar5._0_4_) + *pfVar2;
            pfVar3[1] = fVar39 * (auVar44._4_4_ + auVar5._4_4_) + fVar33;
            pfVar3[2] = fVar40 * (auVar44._8_4_ + auVar5._8_4_) + fVar34;
            pfVar3[3] = fVar41 * (auVar44._12_4_ + auVar5._12_4_) + fVar35;
            pfVar3[4] = fVar38 * (auVar6._0_4_ + auVar7._0_4_) + fVar36;
            pfVar3[5] = fVar39 * (auVar6._4_4_ + auVar7._4_4_) + fVar9;
            pfVar3[6] = fVar40 * (auVar6._8_4_ + auVar7._8_4_) + fVar10;
            pfVar3[7] = fVar11 + 0.0;
            auVar44 = *(undefined1 (*) [16])(lVar30 + 0x20 + uVar20 * 4);
            lVar1 = lVar23 + 0x30 + uVar20 * 4;
            auVar5 = *(undefined1 (*) [16])(lVar30 + 0x30 + uVar20 * 4);
            pfVar2 = (float *)(uVar31 + 0x20 + uVar20 * 4);
            auVar37._0_4_ = fVar38 * (fVar12 + auVar44._0_4_) + *pfVar2;
            auVar37._4_4_ = fVar39 * (fVar13 + auVar44._4_4_) + pfVar2[1];
            auVar37._8_4_ = fVar40 * (fVar14 + auVar44._8_4_) + pfVar2[2];
            auVar37._12_4_ = fVar41 * (fVar15 + auVar44._12_4_) + pfVar2[3];
            auVar37._16_4_ = fVar38 * (*(float *)(lVar1 + 0x10) + auVar5._0_4_) + pfVar2[4];
            auVar37._20_4_ = fVar39 * (*(float *)(lVar1 + 0x14) + auVar5._4_4_) + pfVar2[5];
            auVar37._24_4_ = fVar40 * (*(float *)(lVar1 + 0x18) + auVar5._8_4_) + pfVar2[6];
            auVar37._28_4_ = *(float *)(lVar1 + 0x1c) + auVar5._12_4_ + pfVar2[7];
            *(undefined1 (*) [32])(uVar31 + 0x20 + uVar20 * 4) = auVar37;
            uVar20 = uVar20 + 0x10;
          } while (uVar20 < uVar32);
          if (uVar32 + 1 <= param_5) {
            uVar20 = param_5 - uVar32;
            if ((longlong)uVar20 < 4) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar20 & 0xfffffffffffffffc;
              uVar22 = 0;
              lVar1 = uVar31 + uVar32 * 4;
              do {
                auVar8 = *(undefined1 (*) [16])(lVar23 + uVar32 * 4 + uVar22 * 4);
                pfVar2 = (float *)(lVar30 + uVar32 * 4 + uVar22 * 4);
                pfVar3 = (float *)(lVar1 + uVar22 * 4);
                auVar44._0_4_ = fVar38 * (auVar8._0_4_ + *pfVar2) + *pfVar3;
                auVar44._4_4_ = fVar39 * (auVar8._4_4_ + pfVar2[1]) + pfVar3[1];
                auVar44._8_4_ = fVar40 * (auVar8._8_4_ + pfVar2[2]) + pfVar3[2];
                auVar44._12_4_ = fVar41 * (auVar8._12_4_ + pfVar2[3]) + pfVar3[3];
                *(undefined1 (*) [16])(lVar1 + uVar22 * 4) = auVar44;
                uVar22 = uVar22 + 4;
              } while (uVar22 < uVar21);
            }
LAB_140862965:
            if (uVar21 < uVar20) {
              lVar1 = uVar31 + uVar32 * 4;
              do {
                *(float *)(lVar1 + uVar21 * 4) =
                     fVar4 * (*(float *)(lVar23 + uVar32 * 4 + uVar21 * 4) +
                             *(float *)(lVar30 + uVar32 * 4 + uVar21 * 4)) +
                     *(float *)(lVar1 + uVar21 * 4);
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar20);
            }
          }
        }
        uVar16 = uVar16 + 1;
        pfVar24 = pfVar24 + 1;
        if (param_7 - 1U <= uVar16) goto LAB_1408629dd;
      }
      uVar16 = uVar16 + 1;
      pfVar24 = pfVar24 + 1;
    } while (uVar16 < param_7 - 1U);
  }
LAB_1408629dd:
  fVar4 = param_6[param_7];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_140862e61:
      uVar31 = 0;
      if (param_5 == 0) goto LAB_140862bd8;
      uVar20 = 0;
      uVar19 = param_5;
    }
    else {
      uVar28 = param_2 * uVar29 + param_1;
      uVar19 = uVar28 & 0x1f;
      if (uVar19 != 0) {
        if ((uVar28 & 3) != 0) goto LAB_140862e61;
        uVar19 = 0x20 - uVar19 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar19 + 0x10)) goto LAB_140862e61;
      lVar25 = param_2 * lVar18 + param_1;
      lVar23 = param_2 * lVar17 + param_1;
      uVar20 = 0;
      uVar31 = param_5 - (param_5 - uVar19 & 0xf);
      if (uVar19 != 0) {
        do {
          *(float *)(uVar28 + uVar20 * 4) =
               fVar4 * *(float *)(lVar23 + uVar20 * 4) + *(float *)(lVar25 + uVar20 * 4);
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar19);
      }
      auVar8 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
      do {
        pfVar24 = (float *)(lVar25 + uVar19 * 4);
        fVar9 = pfVar24[1];
        fVar10 = pfVar24[2];
        fVar11 = pfVar24[3];
        auVar44 = *(undefined1 (*) [16])(lVar23 + uVar19 * 4);
        lVar30 = lVar25 + 0x10 + uVar19 * 4;
        fVar12 = *(float *)(lVar30 + 0x10);
        fVar13 = *(float *)(lVar30 + 0x14);
        fVar14 = *(float *)(lVar30 + 0x18);
        fVar15 = *(float *)(lVar30 + 0x1c);
        auVar5 = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar19 * 4);
        fVar38 = auVar8._0_4_;
        fVar39 = auVar8._4_4_;
        fVar40 = auVar8._8_4_;
        fVar41 = auVar8._12_4_;
        pfVar2 = (float *)(lVar25 + 0x20 + uVar19 * 4);
        fVar33 = *pfVar2;
        fVar34 = pfVar2[1];
        fVar35 = pfVar2[2];
        fVar36 = pfVar2[3];
        pfVar2 = (float *)(uVar28 + uVar19 * 4);
        *pfVar2 = *pfVar24 + fVar38 * auVar44._0_4_;
        pfVar2[1] = fVar9 + fVar39 * auVar44._4_4_;
        pfVar2[2] = fVar10 + fVar40 * auVar44._8_4_;
        pfVar2[3] = fVar11 + fVar41 * auVar44._12_4_;
        pfVar2[4] = fVar12 + fVar38 * auVar5._0_4_;
        pfVar2[5] = fVar13 + fVar39 * auVar5._4_4_;
        pfVar2[6] = fVar14 + fVar40 * auVar5._8_4_;
        pfVar2[7] = fVar15 + 0.0;
        auVar44 = *(undefined1 (*) [16])(lVar23 + 0x20 + uVar19 * 4);
        auVar5 = *(undefined1 (*) [16])(lVar23 + 0x30 + uVar19 * 4);
        lVar30 = lVar25 + 0x30 + uVar19 * 4;
        fVar9 = *(float *)(lVar30 + 0x10);
        fVar10 = *(float *)(lVar30 + 0x14);
        fVar11 = *(float *)(lVar30 + 0x18);
        fVar12 = *(float *)(lVar30 + 0x1c);
        pfVar24 = (float *)(uVar28 + 0x20 + uVar19 * 4);
        *pfVar24 = fVar33 + fVar38 * auVar44._0_4_;
        pfVar24[1] = fVar34 + fVar39 * auVar44._4_4_;
        pfVar24[2] = fVar35 + fVar40 * auVar44._8_4_;
        pfVar24[3] = fVar36 + fVar41 * auVar44._12_4_;
        pfVar24[4] = fVar9 + fVar38 * auVar5._0_4_;
        pfVar24[5] = fVar10 + fVar39 * auVar5._4_4_;
        pfVar24[6] = fVar11 + fVar40 * auVar5._8_4_;
        pfVar24[7] = fVar12 + 0.0;
        uVar19 = uVar19 + 0x10;
      } while (uVar19 < uVar31);
      if (param_5 < uVar31 + 1) goto LAB_140862bd8;
      uVar19 = param_5 - uVar31;
      if ((longlong)uVar19 < 4) {
        uVar20 = 0;
      }
      else {
        uVar32 = 0;
        uVar20 = uVar19 & 0xfffffffffffffffc;
        do {
          pfVar24 = (float *)(lVar23 + uVar31 * 4 + uVar32 * 4);
          fVar33 = pfVar24[1];
          fVar34 = pfVar24[2];
          fVar35 = pfVar24[3];
          pfVar2 = (float *)(lVar25 + uVar31 * 4 + uVar32 * 4);
          fVar36 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar3 = (float *)(uVar28 + uVar31 * 4 + uVar32 * 4);
          *pfVar3 = fVar38 * *pfVar24 + *pfVar2;
          pfVar3[1] = fVar39 * fVar33 + fVar36;
          pfVar3[2] = fVar40 * fVar34 + fVar9;
          pfVar3[3] = fVar41 * fVar35 + fVar10;
          uVar32 = uVar32 + 4;
        } while (uVar32 < uVar20);
      }
    }
    if (uVar20 < uVar19) {
      do {
        *(float *)(param_2 * uVar29 + param_1 + uVar31 * 4 + uVar20 * 4) =
             fVar4 * *(float *)(lVar17 * param_2 + param_1 + uVar31 * 4 + uVar20 * 4) +
             *(float *)(lVar18 * param_2 + param_1 + uVar31 * 4 + uVar20 * 4);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar19);
    }
  }
LAB_140862bd8:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (3 < (longlong)param_5) {
      uVar28 = param_2 * uVar29 + param_1;
      uVar19 = uVar28 & 0xf;
      if (uVar19 != 0) {
        if ((uVar28 & 3) != 0) goto LAB_140862e7e;
        uVar19 = 0x10 - uVar19 >> 2;
      }
      if ((longlong)(uVar19 + 4) <= (longlong)param_5) {
        uVar20 = 0;
        uVar31 = param_5 - (param_5 - uVar19 & 3);
        if (uVar19 != 0) {
          do {
            iVar27 = (int)ROUND(*(float *)(uVar28 + uVar20 * 4));
            if (0x7ffe < iVar27) {
              iVar27 = 0x7fff;
            }
            uVar26 = (undefined2)iVar27;
            if (iVar27 < -0x7fff) {
              uVar26 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar20 * 2) = uVar26;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar19);
        }
        do {
          auVar8 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar28 + uVar19 * 4));
          auVar8 = vpackssdw_avx(auVar8,auVar8);
          *(longlong *)(param_4 + uVar19 * 2) = auVar8._0_8_;
          uVar19 = uVar19 + 4;
        } while (uVar19 < uVar31);
        goto LAB_140862df7;
      }
    }
LAB_140862e7e:
    uVar31 = 0;
LAB_140862df7:
    if (param_5 <= uVar31) {
      return;
    }
    do {
      iVar27 = (int)ROUND(*(float *)(param_1 + param_2 * uVar29 + uVar31 * 4));
      if (0x7ffe < iVar27) {
        iVar27 = 0x7fff;
      }
      uVar26 = (undefined2)iVar27;
      if (iVar27 < -0x7fff) {
        uVar26 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar31 * 2) = uVar26;
      uVar31 = uVar31 + 1;
    } while (uVar31 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar28 = param_2 * uVar29 + param_1;
    uVar19 = uVar28 & 0xf;
    if (uVar19 != 0) {
      if ((uVar28 & 3) != 0) goto LAB_140862e77;
      uVar19 = 0x10 - uVar19 >> 2;
    }
    if ((longlong)(uVar19 + 8) <= (longlong)param_5) {
      uVar20 = 0;
      uVar31 = param_5 - (param_5 - uVar19 & 7);
      if (uVar19 != 0) {
        do {
          iVar27 = (int)ROUND(*(float *)(uVar28 + uVar20 * 4));
          if (0x7ffe < iVar27) {
            iVar27 = 0x7fff;
          }
          uVar26 = (undefined2)iVar27;
          if (iVar27 < -0x7fff) {
            uVar26 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar20 * 2) = uVar26;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar19);
      }
      do {
        auVar8 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar28 + uVar19 * 4));
        auVar8 = vpackssdw_avx(auVar8,auVar8);
        *(longlong *)(param_4 + uVar19 * 2) = auVar8._0_8_;
        auVar8 = vcvtps2dq_avx(*(undefined1 (*) [16])(uVar28 + 0x10 + uVar19 * 4));
        auVar8 = vpackssdw_avx(auVar8,auVar8);
        *(longlong *)(param_4 + 8 + uVar19 * 2) = auVar8._0_8_;
        uVar19 = uVar19 + 8;
      } while (uVar19 < uVar31);
      goto LAB_140862cc7;
    }
  }
LAB_140862e77:
  uVar31 = 0;
LAB_140862cc7:
  if (uVar31 < param_5) {
    do {
      iVar27 = (int)ROUND(*(float *)(param_1 + param_2 * uVar29 + uVar31 * 4));
      if (0x7ffe < iVar27) {
        iVar27 = 0x7fff;
      }
      uVar26 = (undefined2)iVar27;
      if (iVar27 < -0x7fff) {
        uVar26 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar31 * 2) = uVar26;
      uVar31 = uVar31 + 1;
    } while (uVar31 < param_5);
  }
  return;
}

