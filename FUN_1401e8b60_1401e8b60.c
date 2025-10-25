
void FUN_1401e8b60(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
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
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  
  uVar16 = (ulonglong)param_7;
  lVar24 = (longlong)param_3;
  lVar18 = (longlong)(param_7 >> 1);
  lVar20 = (lVar24 - lVar18 >> 0x3f & uVar16) + (lVar24 - lVar18);
  if (lVar20 == 0) {
    uVar25 = 0;
    uVar19 = uVar16;
  }
  else {
    uVar25 = (ulonglong)(int)lVar20;
    uVar19 = uVar25;
  }
  lVar28 = uVar19 - 1;
  uVar19 = uVar25 + 1;
  if (uVar25 + 1 == uVar16) {
    uVar19 = 0;
  }
  fVar5 = *param_6;
  uVar25 = (longlong)(int)lVar28;
  if ((longlong)(int)lVar28 < 1) {
    uVar25 = uVar16;
  }
  lVar22 = uVar25 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 0x10) {
LAB_1401e9395:
      uVar27 = 0;
      if (param_5 == 0) goto LAB_1401e8dbe;
      uVar26 = 0;
      uVar25 = param_5;
    }
    else {
      uVar26 = param_2 * lVar20 + param_1;
      uVar25 = uVar26 & 0x1f;
      if (uVar25 != 0) {
        if ((uVar26 & 3) != 0) goto LAB_1401e9395;
        uVar25 = 0x20 - uVar25 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar25 + 0x10)) goto LAB_1401e9395;
      lVar23 = param_2 * lVar28 + param_1;
      uVar29 = 0;
      uVar27 = param_5 - (param_5 - uVar25 & 0xf);
      if (uVar25 != 0) {
        do {
          *(float *)(uVar26 + uVar29 * 4) =
               fVar5 * (*(float *)(uVar26 + uVar29 * 4) + *(float *)(lVar23 + uVar29 * 4));
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar25);
      }
      auVar32 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
      do {
        auVar44 = *(undefined1 (*) [16])(lVar23 + uVar25 * 4);
        auVar6 = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar25 * 4);
        pfVar1 = (float *)(uVar26 + uVar25 * 4);
        auVar7 = *(undefined1 (*) [16])(lVar23 + 0x20 + uVar25 * 4);
        fVar31 = auVar32._0_4_;
        auVar39._0_4_ = fVar31 * (auVar44._0_4_ + *pfVar1);
        fVar33 = auVar32._4_4_;
        auVar39._4_4_ = fVar33 * (auVar44._4_4_ + pfVar1[1]);
        fVar34 = auVar32._8_4_;
        auVar39._8_4_ = fVar34 * (auVar44._8_4_ + pfVar1[2]);
        fVar35 = auVar32._12_4_;
        auVar39._12_4_ = fVar35 * (auVar44._12_4_ + pfVar1[3]);
        auVar39._16_4_ = fVar31 * (auVar6._0_4_ + pfVar1[4]);
        auVar39._20_4_ = fVar33 * (auVar6._4_4_ + pfVar1[5]);
        auVar39._24_4_ = fVar34 * (auVar6._8_4_ + pfVar1[6]);
        auVar39._28_4_ = 0;
        *(undefined1 (*) [32])(uVar26 + uVar25 * 4) = auVar39;
        auVar44 = *(undefined1 (*) [16])(lVar23 + 0x30 + uVar25 * 4);
        pfVar1 = (float *)(uVar26 + 0x20 + uVar25 * 4);
        auVar43._0_4_ = fVar31 * (auVar7._0_4_ + *pfVar1);
        auVar43._4_4_ = fVar33 * (auVar7._4_4_ + pfVar1[1]);
        auVar43._8_4_ = fVar34 * (auVar7._8_4_ + pfVar1[2]);
        auVar43._12_4_ = fVar35 * (auVar7._12_4_ + pfVar1[3]);
        auVar43._16_4_ = fVar31 * (auVar44._0_4_ + pfVar1[4]);
        auVar43._20_4_ = fVar33 * (auVar44._4_4_ + pfVar1[5]);
        auVar43._24_4_ = fVar34 * (auVar44._8_4_ + pfVar1[6]);
        auVar43._28_4_ = 0;
        *(undefined1 (*) [32])(uVar26 + 0x20 + uVar25 * 4) = auVar43;
        uVar25 = uVar25 + 0x10;
      } while (uVar25 < uVar27);
      if (param_5 < uVar27 + 1) goto LAB_1401e8dbe;
      uVar25 = param_5 - uVar27;
      if ((longlong)uVar25 < 4) {
        uVar26 = 0;
      }
      else {
        lVar2 = uVar26 + uVar27 * 4;
        uVar26 = uVar25 & 0xfffffffffffffffc;
        uVar29 = 0;
        do {
          auVar32 = *(undefined1 (*) [16])(lVar2 + uVar29 * 4);
          pfVar1 = (float *)(lVar23 + uVar27 * 4 + uVar29 * 4);
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar3 = (float *)(lVar2 + uVar29 * 4);
          *pfVar3 = fVar31 * (auVar32._0_4_ + *pfVar1);
          pfVar3[1] = fVar33 * (auVar32._4_4_ + fVar9);
          pfVar3[2] = fVar34 * (auVar32._8_4_ + fVar10);
          pfVar3[3] = fVar35 * (auVar32._12_4_ + fVar11);
          uVar29 = uVar29 + 4;
        } while (uVar29 < uVar26);
      }
    }
    if (uVar26 < uVar25) {
      lVar23 = param_2 * lVar20 + param_1 + uVar27 * 4;
      do {
        *(float *)(lVar23 + uVar26 * 4) =
             fVar5 * (*(float *)(lVar23 + uVar26 * 4) +
                     *(float *)(lVar28 * param_2 + param_1 + uVar27 * 4 + uVar26 * 4));
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar25);
    }
  }
LAB_1401e8dbe:
  if (1 < lVar18) {
    uVar25 = param_2 * lVar20 + param_1;
    uVar26 = 0;
    uVar27 = uVar25 & 0x1f;
    do {
      fVar5 = param_6[uVar26 + 1];
      lVar28 = param_2 * lVar22;
      uVar29 = uVar19 + 1;
      lVar23 = param_2 * uVar19 + param_1;
      uVar19 = uVar29;
      if (uVar29 == uVar16) {
        uVar19 = 0;
      }
      lVar22 = lVar22 + -1;
      if (lVar22 < 0) {
        lVar22 = uVar16 - 1;
      }
      lVar28 = lVar28 + param_1;
      if (0 < (longlong)param_5) {
        if (((longlong)param_5 < 0x10) ||
           (((uVar29 = uVar27, uVar27 != 0 && (uVar29 = 0x20 - uVar27 >> 2, (uVar25 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar29 + 0x10))))) {
          uVar21 = 0;
          if (param_5 != 0) {
            uVar17 = 0;
            uVar29 = param_5;
            goto LAB_1401e8fe5;
          }
        }
        else {
          uVar17 = 0;
          uVar21 = param_5 - (param_5 - uVar29 & 0xf);
          if (uVar29 != 0) {
            do {
              *(float *)(uVar25 + uVar17 * 4) =
                   fVar5 * (*(float *)(lVar23 + uVar17 * 4) + *(float *)(lVar28 + uVar17 * 4)) +
                   *(float *)(uVar25 + uVar17 * 4);
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar29);
          }
          auVar32 = vshufps_avx(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),0);
          do {
            auVar44 = *(undefined1 (*) [16])(lVar23 + uVar29 * 4);
            auVar6 = *(undefined1 (*) [16])(lVar28 + uVar29 * 4);
            auVar7 = *(undefined1 (*) [16])(lVar23 + 0x10 + uVar29 * 4);
            auVar8 = *(undefined1 (*) [16])(lVar28 + 0x10 + uVar29 * 4);
            pfVar1 = (float *)(lVar23 + 0x20 + uVar29 * 4);
            fVar12 = *pfVar1;
            fVar13 = pfVar1[1];
            fVar14 = pfVar1[2];
            fVar15 = pfVar1[3];
            fVar38 = auVar32._0_4_;
            fVar40 = auVar32._4_4_;
            fVar41 = auVar32._8_4_;
            fVar42 = auVar32._12_4_;
            pfVar1 = (float *)(uVar25 + uVar29 * 4);
            fVar31 = pfVar1[1];
            fVar33 = pfVar1[2];
            fVar34 = pfVar1[3];
            fVar35 = pfVar1[4];
            fVar9 = pfVar1[5];
            fVar10 = pfVar1[6];
            fVar11 = pfVar1[7];
            pfVar3 = (float *)(uVar25 + uVar29 * 4);
            *pfVar3 = fVar38 * (auVar44._0_4_ + auVar6._0_4_) + *pfVar1;
            pfVar3[1] = fVar40 * (auVar44._4_4_ + auVar6._4_4_) + fVar31;
            pfVar3[2] = fVar41 * (auVar44._8_4_ + auVar6._8_4_) + fVar33;
            pfVar3[3] = fVar42 * (auVar44._12_4_ + auVar6._12_4_) + fVar34;
            pfVar3[4] = fVar38 * (auVar7._0_4_ + auVar8._0_4_) + fVar35;
            pfVar3[5] = fVar40 * (auVar7._4_4_ + auVar8._4_4_) + fVar9;
            pfVar3[6] = fVar41 * (auVar7._8_4_ + auVar8._8_4_) + fVar10;
            pfVar3[7] = fVar11 + 0.0;
            auVar44 = *(undefined1 (*) [16])(lVar28 + 0x20 + uVar29 * 4);
            lVar2 = lVar23 + 0x30 + uVar29 * 4;
            auVar6 = *(undefined1 (*) [16])(lVar28 + 0x30 + uVar29 * 4);
            pfVar1 = (float *)(uVar25 + 0x20 + uVar29 * 4);
            auVar36._0_4_ = fVar38 * (fVar12 + auVar44._0_4_) + *pfVar1;
            auVar36._4_4_ = fVar40 * (fVar13 + auVar44._4_4_) + pfVar1[1];
            auVar36._8_4_ = fVar41 * (fVar14 + auVar44._8_4_) + pfVar1[2];
            auVar36._12_4_ = fVar42 * (fVar15 + auVar44._12_4_) + pfVar1[3];
            auVar36._16_4_ = fVar38 * (*(float *)(lVar2 + 0x10) + auVar6._0_4_) + pfVar1[4];
            auVar36._20_4_ = fVar40 * (*(float *)(lVar2 + 0x14) + auVar6._4_4_) + pfVar1[5];
            auVar36._24_4_ = fVar41 * (*(float *)(lVar2 + 0x18) + auVar6._8_4_) + pfVar1[6];
            auVar36._28_4_ = *(float *)(lVar2 + 0x1c) + auVar6._12_4_ + pfVar1[7];
            *(undefined1 (*) [32])(uVar25 + 0x20 + uVar29 * 4) = auVar36;
            uVar29 = uVar29 + 0x10;
          } while (uVar29 < uVar21);
          if (uVar21 + 1 <= param_5) {
            uVar29 = param_5 - uVar21;
            if ((longlong)uVar29 < 4) {
              uVar17 = 0;
            }
            else {
              uVar30 = 0;
              uVar17 = uVar29 & 0xfffffffffffffffc;
              lVar2 = uVar25 + uVar21 * 4;
              do {
                auVar32 = *(undefined1 (*) [16])(lVar23 + uVar21 * 4 + uVar30 * 4);
                pfVar1 = (float *)(lVar28 + uVar21 * 4 + uVar30 * 4);
                pfVar3 = (float *)(lVar2 + uVar30 * 4);
                auVar44._0_4_ = fVar38 * (auVar32._0_4_ + *pfVar1) + *pfVar3;
                auVar44._4_4_ = fVar40 * (auVar32._4_4_ + pfVar1[1]) + pfVar3[1];
                auVar44._8_4_ = fVar41 * (auVar32._8_4_ + pfVar1[2]) + pfVar3[2];
                auVar44._12_4_ = fVar42 * (auVar32._12_4_ + pfVar1[3]) + pfVar3[3];
                *(undefined1 (*) [16])(lVar2 + uVar30 * 4) = auVar44;
                uVar30 = uVar30 + 4;
              } while (uVar30 < uVar17);
            }
LAB_1401e8fe5:
            if (uVar17 < uVar29) {
              lVar2 = uVar25 + uVar21 * 4;
              do {
                *(float *)(lVar2 + uVar17 * 4) =
                     fVar5 * (*(float *)(lVar23 + uVar21 * 4 + uVar17 * 4) +
                             *(float *)(lVar28 + uVar21 * 4 + uVar17 * 4)) +
                     *(float *)(lVar2 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar29);
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < lVar18 - 1U);
  }
  fVar5 = param_6[lVar18];
  auVar32 = ZEXT416((uint)fVar5);
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar16 = param_4 & 0x1f;
      if (uVar16 != 0) {
        if ((param_4 & 3) != 0) goto LAB_1401e93bc;
        uVar16 = 0x20 - uVar16 >> 2;
      }
      if ((longlong)(uVar16 + 8) <= (longlong)param_5) {
        lVar28 = param_2 * lVar20 + param_1;
        lVar18 = param_2 * lVar24 + param_1;
        uVar25 = 0;
        uVar19 = param_5 - (param_5 - uVar16 & 7);
        if (uVar16 != 0) {
          do {
            *(float *)(param_4 + uVar25 * 4) =
                 fVar5 * *(float *)(lVar18 + uVar25 * 4) + *(float *)(lVar28 + uVar25 * 4);
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar16);
        }
        auVar32 = vshufps_avx(auVar32,auVar32,0);
        do {
          auVar44 = *(undefined1 (*) [16])(lVar18 + uVar16 * 4);
          pfVar1 = (float *)(lVar28 + uVar16 * 4);
          auVar6 = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar16 * 4);
          lVar22 = lVar28 + 0x10 + uVar16 * 4;
          auVar37._0_4_ = *pfVar1 + auVar32._0_4_ * auVar44._0_4_;
          auVar37._4_4_ = pfVar1[1] + auVar32._4_4_ * auVar44._4_4_;
          auVar37._8_4_ = pfVar1[2] + auVar32._8_4_ * auVar44._8_4_;
          auVar37._12_4_ = pfVar1[3] + auVar32._12_4_ * auVar44._12_4_;
          auVar37._16_4_ = *(float *)(lVar22 + 0x10) + auVar32._0_4_ * auVar6._0_4_;
          auVar37._20_4_ = *(float *)(lVar22 + 0x14) + auVar32._4_4_ * auVar6._4_4_;
          auVar37._24_4_ = *(float *)(lVar22 + 0x18) + auVar32._8_4_ * auVar6._8_4_;
          auVar37._28_4_ = *(float *)(lVar22 + 0x1c) + 0.0;
          auVar39 = vmovntps_avx(auVar37);
          *(undefined1 (*) [32])(param_4 + uVar16 * 4) = auVar39;
          uVar16 = uVar16 + 8;
        } while (uVar16 < uVar19);
        goto LAB_1401e9333;
      }
    }
LAB_1401e93bc:
    uVar19 = 0;
LAB_1401e9333:
    if (param_5 <= uVar19) {
      return;
    }
    do {
      *(float *)(param_4 + uVar19 * 4) =
           fVar5 * *(float *)(param_1 + param_2 * lVar24 + uVar19 * 4) +
           *(float *)(lVar20 * param_2 + param_1 + uVar19 * 4);
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if ((longlong)param_5 < 0x10) {
LAB_1401e93ad:
    uVar19 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    uVar16 = param_4 & 0x1f;
    if (uVar16 != 0) {
      if ((param_4 & 3) != 0) goto LAB_1401e93ad;
      uVar16 = 0x20 - uVar16 >> 2;
    }
    if ((longlong)param_5 < (longlong)(uVar16 + 0x10)) goto LAB_1401e93ad;
    lVar28 = param_2 * lVar20 + param_1;
    lVar18 = param_2 * lVar24 + param_1;
    uVar25 = 0;
    uVar19 = param_5 - (param_5 - uVar16 & 0xf);
    if (uVar16 != 0) {
      do {
        *(float *)(param_4 + uVar25 * 4) =
             fVar5 * *(float *)(lVar18 + uVar25 * 4) + *(float *)(lVar28 + uVar25 * 4);
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar16);
    }
    auVar32 = vshufps_avx(auVar32,auVar32,0);
    do {
      pfVar1 = (float *)(lVar28 + uVar16 * 4);
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      auVar44 = *(undefined1 (*) [16])(lVar18 + uVar16 * 4);
      lVar22 = lVar28 + 0x10 + uVar16 * 4;
      fVar12 = *(float *)(lVar22 + 0x10);
      fVar13 = *(float *)(lVar22 + 0x14);
      fVar14 = *(float *)(lVar22 + 0x18);
      fVar15 = *(float *)(lVar22 + 0x1c);
      auVar6 = *(undefined1 (*) [16])(lVar18 + 0x10 + uVar16 * 4);
      fVar38 = auVar32._0_4_;
      fVar40 = auVar32._4_4_;
      fVar41 = auVar32._8_4_;
      fVar42 = auVar32._12_4_;
      pfVar3 = (float *)(lVar28 + 0x20 + uVar16 * 4);
      fVar31 = *pfVar3;
      fVar33 = pfVar3[1];
      fVar34 = pfVar3[2];
      fVar35 = pfVar3[3];
      pfVar3 = (float *)(param_4 + uVar16 * 4);
      *pfVar3 = *pfVar1 + fVar38 * auVar44._0_4_;
      pfVar3[1] = fVar9 + fVar40 * auVar44._4_4_;
      pfVar3[2] = fVar10 + fVar41 * auVar44._8_4_;
      pfVar3[3] = fVar11 + fVar42 * auVar44._12_4_;
      pfVar3[4] = fVar12 + fVar38 * auVar6._0_4_;
      pfVar3[5] = fVar13 + fVar40 * auVar6._4_4_;
      pfVar3[6] = fVar14 + fVar41 * auVar6._8_4_;
      pfVar3[7] = fVar15 + 0.0;
      auVar44 = *(undefined1 (*) [16])(lVar18 + 0x20 + uVar16 * 4);
      auVar6 = *(undefined1 (*) [16])(lVar18 + 0x30 + uVar16 * 4);
      lVar22 = lVar28 + 0x30 + uVar16 * 4;
      fVar9 = *(float *)(lVar22 + 0x10);
      fVar10 = *(float *)(lVar22 + 0x14);
      fVar11 = *(float *)(lVar22 + 0x18);
      fVar12 = *(float *)(lVar22 + 0x1c);
      pfVar1 = (float *)(param_4 + 0x20 + uVar16 * 4);
      *pfVar1 = fVar31 + fVar38 * auVar44._0_4_;
      pfVar1[1] = fVar33 + fVar40 * auVar44._4_4_;
      pfVar1[2] = fVar34 + fVar41 * auVar44._8_4_;
      pfVar1[3] = fVar35 + fVar42 * auVar44._12_4_;
      pfVar1[4] = fVar9 + fVar38 * auVar6._0_4_;
      pfVar1[5] = fVar10 + fVar40 * auVar6._4_4_;
      pfVar1[6] = fVar11 + fVar41 * auVar6._8_4_;
      pfVar1[7] = fVar12 + 0.0;
      uVar16 = uVar16 + 0x10;
    } while (uVar16 < uVar19);
    if (param_5 < uVar19 + 1) {
      return;
    }
    param_5 = param_5 - uVar19;
    if (3 < (longlong)param_5) {
      uVar25 = 0;
      uVar16 = param_5 & 0xfffffffffffffffc;
      do {
        pfVar1 = (float *)(lVar18 + uVar19 * 4 + uVar25 * 4);
        fVar31 = pfVar1[1];
        fVar33 = pfVar1[2];
        fVar34 = pfVar1[3];
        pfVar3 = (float *)(lVar28 + uVar19 * 4 + uVar25 * 4);
        fVar35 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        pfVar4 = (float *)(param_4 + uVar19 * 4 + uVar25 * 4);
        *pfVar4 = fVar38 * *pfVar1 + *pfVar3;
        pfVar4[1] = fVar40 * fVar31 + fVar35;
        pfVar4[2] = fVar41 * fVar33 + fVar9;
        pfVar4[3] = fVar42 * fVar34 + fVar10;
        uVar25 = uVar25 + 4;
      } while (uVar25 < uVar16);
      goto LAB_1401e91db;
    }
  }
  uVar16 = 0;
LAB_1401e91db:
  if (uVar16 < param_5) {
    do {
      *(float *)(param_4 + uVar19 * 4 + uVar16 * 4) =
           fVar5 * *(float *)(param_1 + param_2 * lVar24 + uVar19 * 4 + uVar16 * 4) +
           *(float *)(lVar20 * param_2 + param_1 + uVar19 * 4 + uVar16 * 4);
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_5);
  }
  return;
}

