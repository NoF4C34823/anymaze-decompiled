
void FUN_14070d380(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,int param_7,int param_8)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 uVar45;
  longlong lVar46;
  ulonglong uVar47;
  float *pfVar48;
  uint uVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  uVar39 = (ulonglong)param_7;
  lVar43 = (longlong)param_3;
  iVar37 = param_7 >> 1;
  lVar46 = lVar43 - iVar37;
  lVar46 = (lVar46 >> 0x3f & uVar39) + lVar46;
  if (lVar46 == 0) {
    uVar47 = 0;
    uVar41 = uVar39;
  }
  else {
    uVar47 = (ulonglong)(int)lVar46;
    uVar41 = uVar47;
  }
  lVar51 = uVar41 - 1;
  uVar41 = uVar47 + 1;
  if (uVar47 + 1 == uVar39) {
    uVar41 = 0;
  }
  fVar6 = *param_6;
  uVar47 = (longlong)(int)lVar51;
  if ((longlong)(int)lVar51 < 1) {
    uVar47 = uVar39;
  }
  lVar42 = uVar47 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14070dd24:
      uVar52 = 0;
    }
    else {
      uVar50 = param_2 * lVar46 + param_1;
      uVar47 = uVar50 & 0xf;
      if (uVar47 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_14070dd24;
        uVar47 = 0x10 - uVar47 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar47 + 8)) goto LAB_14070dd24;
      lVar44 = param_2 * lVar51 + param_1;
      uVar40 = 0;
      uVar52 = param_5 - (param_5 - uVar47 & 7);
      if (uVar47 != 0) {
        do {
          *(float *)(uVar50 + uVar40 * 4) =
               (*(float *)(uVar50 + uVar40 * 4) + *(float *)(lVar44 + uVar40 * 4)) * fVar6;
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar47);
      }
      if ((uVar47 * 4 + lVar44 & 0xf) == 0) {
        do {
          pfVar48 = (float *)(uVar50 + uVar47 * 4);
          fVar16 = pfVar48[1];
          fVar17 = pfVar48[2];
          fVar18 = pfVar48[3];
          pfVar2 = (float *)(uVar50 + 0x10 + uVar47 * 4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar2 = (float *)(lVar44 + uVar47 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(lVar44 + 0x10 + uVar47 * 4);
          fVar26 = *pfVar3;
          fVar27 = pfVar3[1];
          fVar28 = pfVar3[2];
          fVar29 = pfVar3[3];
          pfVar3 = (float *)(uVar50 + uVar47 * 4);
          *pfVar3 = (*pfVar48 + *pfVar2) * fVar6;
          pfVar3[1] = (fVar16 + fVar23) * fVar6;
          pfVar3[2] = (fVar17 + fVar24) * fVar6;
          pfVar3[3] = (fVar18 + fVar25) * fVar6;
          pfVar48 = (float *)(uVar50 + 0x10 + uVar47 * 4);
          *pfVar48 = (fVar19 + fVar26) * fVar6;
          pfVar48[1] = (fVar20 + fVar27) * fVar6;
          pfVar48[2] = (fVar21 + fVar28) * fVar6;
          pfVar48[3] = (fVar22 + fVar29) * fVar6;
          uVar47 = uVar47 + 8;
        } while (uVar47 < uVar52);
      }
      else {
        do {
          pfVar48 = (float *)(lVar44 + uVar47 * 4);
          fVar16 = pfVar48[1];
          fVar17 = pfVar48[2];
          fVar18 = pfVar48[3];
          pfVar2 = (float *)(lVar44 + 0x10 + uVar47 * 4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar2 = (float *)(uVar50 + uVar47 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar3 = (float *)(uVar50 + 0x10 + uVar47 * 4);
          fVar26 = *pfVar3;
          fVar27 = pfVar3[1];
          fVar28 = pfVar3[2];
          fVar29 = pfVar3[3];
          pfVar3 = (float *)(uVar50 + uVar47 * 4);
          *pfVar3 = (*pfVar48 + *pfVar2) * fVar6;
          pfVar3[1] = (fVar16 + fVar23) * fVar6;
          pfVar3[2] = (fVar17 + fVar24) * fVar6;
          pfVar3[3] = (fVar18 + fVar25) * fVar6;
          pfVar48 = (float *)(uVar50 + 0x10 + uVar47 * 4);
          *pfVar48 = (fVar19 + fVar26) * fVar6;
          pfVar48[1] = (fVar20 + fVar27) * fVar6;
          pfVar48[2] = (fVar21 + fVar28) * fVar6;
          pfVar48[3] = (fVar22 + fVar29) * fVar6;
          uVar47 = uVar47 + 8;
        } while (uVar47 < uVar52);
      }
    }
    uVar47 = 0;
    if (uVar52 + 1 <= param_5) {
      lVar44 = param_2 * lVar46 + param_1 + uVar52 * 4;
      do {
        *(float *)(lVar44 + uVar47 * 4) =
             (*(float *)(lVar44 + uVar47 * 4) +
             *(float *)(lVar51 * param_2 + param_1 + uVar52 * 4 + uVar47 * 4)) * fVar6;
        uVar47 = uVar47 + 1;
      } while (uVar47 < param_5 - uVar52);
    }
  }
  if (1 < iVar37) {
    uVar47 = param_2 * lVar46 + param_1;
    uVar49 = 0;
    uVar50 = uVar47 & 0xf;
    pfVar48 = param_6;
    do {
      while( true ) {
        lVar51 = param_2 * uVar41;
        lVar44 = param_2 * lVar42;
        uVar41 = uVar41 + 1;
        fVar6 = pfVar48[1];
        if (uVar41 == (longlong)param_7) {
          uVar41 = 0;
        }
        lVar42 = lVar42 + -1;
        if (lVar42 < 0) {
          lVar42 = uVar39 - 1;
        }
        lVar51 = lVar51 + param_1;
        lVar44 = lVar44 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar52 = uVar50, uVar50 != 0 && (uVar52 = 0x10 - uVar50 >> 2, (uVar47 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar52 + 8))))) {
          uVar40 = 0;
          if (param_5 != 0) {
            uVar52 = 0;
            uVar38 = param_5;
            goto LAB_14070d824;
          }
        }
        else {
          uVar38 = 0;
          uVar40 = param_5 - (param_5 - uVar52 & 7);
          if (uVar52 != 0) {
            do {
              *(float *)(uVar47 + uVar38 * 4) =
                   (*(float *)(lVar51 + uVar38 * 4) + *(float *)(lVar44 + uVar38 * 4)) * fVar6 +
                   *(float *)(uVar47 + uVar38 * 4);
              uVar38 = uVar38 + 1;
            } while (uVar38 < uVar52);
          }
          if ((uVar52 * 4 + lVar44 & 0xf) == 0) {
            do {
              pfVar2 = (float *)(lVar51 + uVar52 * 4);
              fVar16 = pfVar2[1];
              fVar17 = pfVar2[2];
              fVar18 = pfVar2[3];
              pfVar3 = (float *)(lVar51 + 0x10 + uVar52 * 4);
              fVar19 = *pfVar3;
              fVar20 = pfVar3[1];
              fVar21 = pfVar3[2];
              fVar22 = pfVar3[3];
              pfVar5 = (float *)(lVar44 + uVar52 * 4);
              fVar23 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar3 = (float *)(lVar44 + 0x10 + uVar52 * 4);
              fVar26 = *pfVar3;
              fVar27 = pfVar3[1];
              fVar28 = pfVar3[2];
              fVar29 = pfVar3[3];
              pfVar3 = (float *)(uVar47 + uVar52 * 4);
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              fVar32 = pfVar3[3];
              pfVar4 = (float *)(uVar47 + 0x10 + uVar52 * 4);
              fVar33 = *pfVar4;
              fVar34 = pfVar4[1];
              fVar35 = pfVar4[2];
              fVar36 = pfVar4[3];
              pfVar4 = (float *)(uVar47 + uVar52 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar4[2] = (fVar17 + fVar24) * fVar6 + fVar31;
              pfVar4[3] = (fVar18 + fVar25) * fVar6 + fVar32;
              pfVar2 = (float *)(uVar47 + 0x10 + uVar52 * 4);
              *pfVar2 = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar2[1] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar2[2] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar2[3] = (fVar22 + fVar29) * fVar6 + fVar36;
              uVar52 = uVar52 + 8;
            } while (uVar52 < uVar40);
          }
          else {
            do {
              pfVar2 = (float *)(lVar51 + uVar52 * 4);
              fVar16 = pfVar2[1];
              fVar17 = pfVar2[2];
              fVar18 = pfVar2[3];
              pfVar3 = (float *)(lVar51 + 0x10 + uVar52 * 4);
              fVar19 = *pfVar3;
              fVar20 = pfVar3[1];
              fVar21 = pfVar3[2];
              fVar22 = pfVar3[3];
              pfVar5 = (float *)(lVar44 + uVar52 * 4);
              fVar23 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar3 = (float *)(lVar44 + 0x10 + uVar52 * 4);
              fVar26 = *pfVar3;
              fVar27 = pfVar3[1];
              fVar28 = pfVar3[2];
              fVar29 = pfVar3[3];
              pfVar3 = (float *)(uVar47 + uVar52 * 4);
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              fVar32 = pfVar3[3];
              pfVar4 = (float *)(uVar47 + 0x10 + uVar52 * 4);
              fVar33 = *pfVar4;
              fVar34 = pfVar4[1];
              fVar35 = pfVar4[2];
              fVar36 = pfVar4[3];
              pfVar4 = (float *)(uVar47 + uVar52 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar4[2] = (fVar17 + fVar24) * fVar6 + fVar31;
              pfVar4[3] = (fVar18 + fVar25) * fVar6 + fVar32;
              pfVar2 = (float *)(uVar47 + 0x10 + uVar52 * 4);
              *pfVar2 = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar2[1] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar2[2] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar2[3] = (fVar22 + fVar29) * fVar6 + fVar36;
              uVar52 = uVar52 + 8;
            } while (uVar52 < uVar40);
          }
          if (uVar40 + 1 <= param_5) {
            uVar38 = param_5 - uVar40;
            if ((longlong)uVar38 < 4) {
              uVar52 = 0;
            }
            else {
              uVar52 = uVar38 & 0xfffffffffffffffc;
              uVar53 = 0;
              lVar1 = uVar47 + uVar40 * 4;
              do {
                pfVar5 = (float *)(lVar51 + uVar40 * 4 + uVar53 * 4);
                fVar16 = pfVar5[1];
                fVar17 = pfVar5[2];
                fVar18 = pfVar5[3];
                pfVar2 = (float *)(uVar40 * 4 + lVar44 + uVar53 * 4);
                fVar19 = pfVar2[1];
                fVar20 = pfVar2[2];
                fVar21 = pfVar2[3];
                pfVar3 = (float *)(lVar1 + uVar53 * 4);
                fVar22 = pfVar3[1];
                fVar23 = pfVar3[2];
                fVar24 = pfVar3[3];
                pfVar4 = (float *)(lVar1 + uVar53 * 4);
                *pfVar4 = (*pfVar5 + *pfVar2) * fVar6 + *pfVar3;
                pfVar4[1] = (fVar16 + fVar19) * fVar6 + fVar22;
                pfVar4[2] = (fVar17 + fVar20) * fVar6 + fVar23;
                pfVar4[3] = (fVar18 + fVar21) * fVar6 + fVar24;
                uVar53 = uVar53 + 4;
              } while (uVar53 < uVar52);
            }
LAB_14070d824:
            if (uVar52 < uVar38) {
              lVar1 = uVar47 + uVar40 * 4;
              do {
                *(float *)(lVar1 + uVar52 * 4) =
                     (*(float *)(lVar51 + uVar40 * 4 + uVar52 * 4) +
                     *(float *)(lVar44 + uVar40 * 4 + uVar52 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar52 * 4);
                uVar52 = uVar52 + 1;
              } while (uVar52 < uVar38);
            }
          }
        }
        uVar49 = uVar49 + 1;
        pfVar48 = pfVar48 + 1;
        if (iVar37 - 1U <= uVar49) goto LAB_14070d8a6;
      }
      uVar49 = uVar49 + 1;
      pfVar48 = pfVar48 + 1;
    } while (uVar49 < iVar37 - 1U);
  }
LAB_14070d8a6:
  lVar51 = (longlong)param_7;
  fVar6 = param_6[iVar37];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_14070dd12:
      uVar47 = 0;
    }
    else {
      uVar41 = lVar51 * param_2 + param_1;
      uVar39 = uVar41 & 0xf;
      if (uVar39 != 0) {
        if ((uVar41 & 3) != 0) goto LAB_14070dd12;
        uVar39 = 0x10 - uVar39 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar39 + 8)) goto LAB_14070dd12;
      lVar44 = param_2 * lVar43 + param_1;
      lVar42 = param_2 * lVar46 + param_1;
      uVar50 = 0;
      uVar47 = param_5 - (param_5 - uVar39 & 7);
      if (uVar39 != 0) {
        do {
          *(float *)(uVar41 + uVar50 * 4) =
               *(float *)(lVar44 + uVar50 * 4) * fVar6 + *(float *)(lVar42 + uVar50 * 4);
          uVar50 = uVar50 + 1;
        } while (uVar50 < uVar39);
      }
      if ((uVar39 * 4 + lVar44 & 0xf) == 0) {
        do {
          pfVar3 = (float *)(lVar44 + uVar39 * 4);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar48 = (float *)(lVar44 + 0x10 + uVar39 * 4);
          fVar19 = *pfVar48;
          fVar20 = pfVar48[1];
          fVar21 = pfVar48[2];
          fVar22 = pfVar48[3];
          pfVar48 = (float *)(lVar42 + uVar39 * 4);
          fVar23 = pfVar48[1];
          fVar24 = pfVar48[2];
          fVar25 = pfVar48[3];
          pfVar2 = (float *)(lVar42 + 0x10 + uVar39 * 4);
          fVar26 = *pfVar2;
          fVar27 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar29 = pfVar2[3];
          pfVar2 = (float *)(uVar41 + uVar39 * 4);
          *pfVar2 = *pfVar48 + *pfVar3 * fVar6;
          pfVar2[1] = fVar23 + fVar16 * fVar6;
          pfVar2[2] = fVar24 + fVar17 * fVar6;
          pfVar2[3] = fVar25 + fVar18 * fVar6;
          pfVar48 = (float *)(uVar41 + 0x10 + uVar39 * 4);
          *pfVar48 = fVar26 + fVar19 * fVar6;
          pfVar48[1] = fVar27 + fVar20 * fVar6;
          pfVar48[2] = fVar28 + fVar21 * fVar6;
          pfVar48[3] = fVar29 + fVar22 * fVar6;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar47);
      }
      else {
        do {
          pfVar3 = (float *)(lVar44 + uVar39 * 4);
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar18 = pfVar3[3];
          pfVar48 = (float *)(lVar44 + 0x10 + uVar39 * 4);
          fVar19 = *pfVar48;
          fVar20 = pfVar48[1];
          fVar21 = pfVar48[2];
          fVar22 = pfVar48[3];
          pfVar48 = (float *)(lVar42 + uVar39 * 4);
          fVar23 = pfVar48[1];
          fVar24 = pfVar48[2];
          fVar25 = pfVar48[3];
          pfVar2 = (float *)(lVar42 + 0x10 + uVar39 * 4);
          fVar26 = *pfVar2;
          fVar27 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar29 = pfVar2[3];
          pfVar2 = (float *)(uVar41 + uVar39 * 4);
          *pfVar2 = *pfVar48 + *pfVar3 * fVar6;
          pfVar2[1] = fVar23 + fVar16 * fVar6;
          pfVar2[2] = fVar24 + fVar17 * fVar6;
          pfVar2[3] = fVar25 + fVar18 * fVar6;
          pfVar48 = (float *)(uVar41 + 0x10 + uVar39 * 4);
          *pfVar48 = fVar26 + fVar19 * fVar6;
          pfVar48[1] = fVar27 + fVar20 * fVar6;
          pfVar48[2] = fVar28 + fVar21 * fVar6;
          pfVar48[3] = fVar29 + fVar22 * fVar6;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar47);
      }
    }
    if (uVar47 < param_5) {
      do {
        *(float *)(lVar51 * param_2 + param_1 + uVar47 * 4) =
             *(float *)(lVar43 * param_2 + param_1 + uVar47 * 4) * fVar6 +
             *(float *)(lVar46 * param_2 + param_1 + uVar47 * 4);
        uVar47 = uVar47 + 1;
      } while (uVar47 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar41 = lVar51 * param_2 + param_1;
      uVar39 = uVar41 & 0xf;
      if (uVar39 != 0) {
        if ((uVar41 & 3) != 0) goto LAB_14070dd20;
        uVar39 = 0x10 - uVar39 >> 2;
      }
      if ((longlong)(uVar39 + 8) <= (longlong)param_5) {
        uVar50 = 0;
        uVar47 = param_5 - (param_5 - uVar39 & 7);
        if (uVar39 != 0) {
          do {
            iVar37 = (int)ROUND(*(float *)(uVar41 + uVar50 * 4));
            if (0xfe < iVar37) {
              iVar37 = 0xff;
            }
            uVar45 = (undefined1)iVar37;
            if (iVar37 < 1) {
              uVar45 = 0;
            }
            *(undefined1 *)(uVar50 + param_4) = uVar45;
            uVar50 = uVar50 + 1;
          } while (uVar50 < uVar39);
        }
        do {
          pfVar48 = (float *)(uVar41 + uVar39 * 4);
          auVar56._0_4_ = (int)*pfVar48;
          auVar56._4_4_ = (int)pfVar48[1];
          auVar56._8_4_ = (int)pfVar48[2];
          auVar56._12_4_ = (int)pfVar48[3];
          pfVar48 = (float *)(uVar41 + 0x10 + uVar39 * 4);
          auVar55._4_4_ = (int)pfVar48[1];
          auVar55._0_4_ = (int)*pfVar48;
          auVar55._8_4_ = (int)pfVar48[2];
          auVar55._12_4_ = (int)pfVar48[3];
          auVar55 = packssdw(auVar56,auVar55);
          sVar7 = auVar55._0_2_;
          sVar8 = auVar55._2_2_;
          sVar9 = auVar55._4_2_;
          sVar10 = auVar55._6_2_;
          sVar11 = auVar55._8_2_;
          sVar12 = auVar55._10_2_;
          sVar13 = auVar55._12_2_;
          sVar14 = auVar55._14_2_;
          *(ulonglong *)(uVar39 + param_4) =
               CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar55[0xe] - (0xff < sVar14),
                        CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar55[0xc] - (0xff < sVar13),
                                 CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar55[10] -
                                          (0xff < sVar12),
                                          CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar55[8] -
                                                   (0xff < sVar11),
                                                   CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                            auVar55[6] - (0xff < sVar10),
                                                            CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                     auVar55[4] - (0xff < sVar9),
                                                                     CONCAT11((0 < sVar8) *
                                                                              (sVar8 < 0x100) *
                                                                              auVar55[2] -
                                                                              (0xff < sVar8),
                                                                              (0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              auVar55[0] -
                                                                              (0xff < sVar7))))))));
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar47);
        goto LAB_14070dca4;
      }
    }
LAB_14070dd20:
    uVar47 = 0;
LAB_14070dca4:
    if (param_5 <= uVar47) {
      return;
    }
    do {
      iVar37 = (int)ROUND(*(float *)(param_1 + param_2 * lVar51 + uVar47 * 4));
      if (0xfe < iVar37) {
        iVar37 = 0xff;
      }
      uVar45 = (undefined1)iVar37;
      if (iVar37 < 1) {
        uVar45 = 0;
      }
      *(undefined1 *)(uVar47 + param_4) = uVar45;
      uVar47 = uVar47 + 1;
    } while (uVar47 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar41 = lVar51 * param_2 + param_1;
    uVar39 = uVar41 & 0xf;
    if (uVar39 != 0) {
      if ((uVar41 & 3) != 0) goto LAB_14070dd19;
      uVar39 = 0x10 - uVar39 >> 2;
    }
    if ((longlong)(uVar39 + 8) <= (longlong)param_5) {
      uVar50 = 0;
      uVar47 = param_5 - (param_5 - uVar39 & 7);
      if (uVar39 != 0) {
        do {
          iVar37 = (int)ROUND(*(float *)(uVar41 + uVar50 * 4));
          if (0xfe < iVar37) {
            iVar37 = 0xff;
          }
          uVar45 = (undefined1)iVar37;
          if (iVar37 < 1) {
            uVar45 = 0;
          }
          *(undefined1 *)(uVar50 + param_4) = uVar45;
          uVar50 = uVar50 + 1;
        } while (uVar50 < uVar39);
      }
      do {
        pfVar48 = (float *)(uVar41 + uVar39 * 4);
        auVar54._0_4_ = (int)*pfVar48;
        auVar54._4_4_ = (int)pfVar48[1];
        auVar54._8_4_ = (int)pfVar48[2];
        auVar54._12_4_ = (int)pfVar48[3];
        pfVar48 = (float *)(uVar41 + 0x10 + uVar39 * 4);
        auVar15._4_4_ = (int)pfVar48[1];
        auVar15._0_4_ = (int)*pfVar48;
        auVar15._8_4_ = (int)pfVar48[2];
        auVar15._12_4_ = (int)pfVar48[3];
        auVar55 = packssdw(auVar54,auVar15);
        sVar7 = auVar55._0_2_;
        sVar8 = auVar55._2_2_;
        sVar9 = auVar55._4_2_;
        sVar10 = auVar55._6_2_;
        sVar11 = auVar55._8_2_;
        sVar12 = auVar55._10_2_;
        sVar13 = auVar55._12_2_;
        sVar14 = auVar55._14_2_;
        *(ulonglong *)(uVar39 + param_4) =
             CONCAT17((0 < sVar14) * (sVar14 < 0x100) * auVar55[0xe] - (0xff < sVar14),
                      CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar55[0xc] - (0xff < sVar13),
                               CONCAT15((0 < sVar12) * (sVar12 < 0x100) * auVar55[10] -
                                        (0xff < sVar12),
                                        CONCAT14((0 < sVar11) * (sVar11 < 0x100) * auVar55[8] -
                                                 (0xff < sVar11),
                                                 CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                          auVar55[6] - (0xff < sVar10),
                                                          CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                   auVar55[4] - (0xff < sVar9),
                                                                   CONCAT11((0 < sVar8) *
                                                                            (sVar8 < 0x100) *
                                                                            auVar55[2] -
                                                                            (0xff < sVar8),
                                                                            (0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            auVar55[0] -
                                                                            (0xff < sVar7))))))));
        uVar39 = uVar39 + 8;
      } while (uVar39 < uVar47);
      goto LAB_14070db64;
    }
  }
LAB_14070dd19:
  uVar47 = 0;
LAB_14070db64:
  if (uVar47 < param_5) {
    do {
      iVar37 = (int)ROUND(*(float *)(param_1 + param_2 * lVar51 + uVar47 * 4));
      if (0xfe < iVar37) {
        iVar37 = 0xff;
      }
      uVar45 = (undefined1)iVar37;
      if (iVar37 < 1) {
        uVar45 = 0;
      }
      *(undefined1 *)(uVar47 + param_4) = uVar45;
      uVar47 = uVar47 + 1;
    } while (uVar47 < param_5);
  }
  return;
}

