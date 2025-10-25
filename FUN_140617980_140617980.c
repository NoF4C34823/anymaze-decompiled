
void FUN_140617980(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
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
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong lVar42;
  float *pfVar43;
  int iVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 uVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  uVar46 = (ulonglong)param_7;
  iVar44 = param_7 >> 1;
  lVar37 = (longlong)param_3;
  lVar38 = lVar37 - iVar44;
  lVar38 = (lVar38 >> 0x3f & uVar46) + lVar38;
  if (lVar38 == 0) {
    uVar39 = 0;
    uVar49 = uVar46;
  }
  else {
    uVar39 = (ulonglong)(int)lVar38;
    uVar49 = uVar39;
  }
  lVar42 = uVar49 - 1;
  uVar49 = uVar39 + 1;
  if (uVar39 + 1 == uVar46) {
    uVar49 = 0;
  }
  fVar6 = *param_6;
  uVar39 = (longlong)(int)lVar42;
  if ((longlong)(int)lVar42 < 1) {
    uVar39 = uVar46;
  }
  lVar48 = uVar39 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1406182ee:
      uVar41 = 0;
      if (param_5 == 0) goto LAB_140617bde;
      uVar50 = 0;
      uVar39 = param_5;
    }
    else {
      uVar50 = param_2 * lVar38 + param_1;
      uVar39 = uVar50 & 0xf;
      if (uVar39 != 0) {
        if ((uVar50 & 3) != 0) goto LAB_1406182ee;
        uVar39 = 0x10 - uVar39 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar39 + 8)) goto LAB_1406182ee;
      lVar51 = param_2 * lVar42 + param_1;
      uVar52 = 0;
      uVar41 = param_5 - (param_5 - uVar39 & 7);
      if (uVar39 != 0) {
        do {
          *(float *)(uVar50 + uVar52 * 4) =
               (*(float *)(uVar50 + uVar52 * 4) + *(float *)(lVar51 + uVar52 * 4)) * fVar6;
          uVar52 = uVar52 + 1;
        } while (uVar52 < uVar39);
      }
      if ((lVar51 + uVar39 * 4 & 0xf) == 0) {
        do {
          pfVar43 = (float *)(uVar50 + uVar39 * 4);
          fVar16 = pfVar43[1];
          fVar17 = pfVar43[2];
          fVar18 = pfVar43[3];
          pfVar2 = (float *)(uVar50 + 0x10 + uVar39 * 4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar5 = (float *)(lVar51 + uVar39 * 4);
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar25 = pfVar5[3];
          pfVar2 = (float *)(lVar51 + 0x10 + uVar39 * 4);
          fVar26 = *pfVar2;
          fVar27 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar29 = pfVar2[3];
          pfVar2 = (float *)(uVar50 + uVar39 * 4);
          *pfVar2 = (*pfVar43 + *pfVar5) * fVar6;
          pfVar2[1] = (fVar16 + fVar23) * fVar6;
          pfVar2[2] = (fVar17 + fVar24) * fVar6;
          pfVar2[3] = (fVar18 + fVar25) * fVar6;
          pfVar43 = (float *)(uVar50 + 0x10 + uVar39 * 4);
          *pfVar43 = (fVar19 + fVar26) * fVar6;
          pfVar43[1] = (fVar20 + fVar27) * fVar6;
          pfVar43[2] = (fVar21 + fVar28) * fVar6;
          pfVar43[3] = (fVar22 + fVar29) * fVar6;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar41);
      }
      else {
        do {
          pfVar5 = (float *)(lVar51 + uVar39 * 4);
          fVar16 = pfVar5[1];
          fVar17 = pfVar5[2];
          fVar18 = pfVar5[3];
          pfVar43 = (float *)(lVar51 + 0x10 + uVar39 * 4);
          fVar19 = *pfVar43;
          fVar20 = pfVar43[1];
          fVar21 = pfVar43[2];
          fVar22 = pfVar43[3];
          pfVar43 = (float *)(uVar50 + uVar39 * 4);
          fVar23 = pfVar43[1];
          fVar24 = pfVar43[2];
          fVar25 = pfVar43[3];
          pfVar2 = (float *)(uVar50 + 0x10 + uVar39 * 4);
          fVar26 = *pfVar2;
          fVar27 = pfVar2[1];
          fVar28 = pfVar2[2];
          fVar29 = pfVar2[3];
          pfVar2 = (float *)(uVar50 + uVar39 * 4);
          *pfVar2 = (*pfVar5 + *pfVar43) * fVar6;
          pfVar2[1] = (fVar16 + fVar23) * fVar6;
          pfVar2[2] = (fVar17 + fVar24) * fVar6;
          pfVar2[3] = (fVar18 + fVar25) * fVar6;
          pfVar43 = (float *)(uVar50 + 0x10 + uVar39 * 4);
          *pfVar43 = (fVar19 + fVar26) * fVar6;
          pfVar43[1] = (fVar20 + fVar27) * fVar6;
          pfVar43[2] = (fVar21 + fVar28) * fVar6;
          pfVar43[3] = (fVar22 + fVar29) * fVar6;
          uVar39 = uVar39 + 8;
        } while (uVar39 < uVar41);
      }
      if (param_5 < uVar41 + 1) goto LAB_140617bde;
      uVar39 = param_5 - uVar41;
      if ((longlong)uVar39 < 4) {
        uVar50 = 0;
      }
      else {
        uVar52 = 0;
        lVar1 = uVar50 + uVar41 * 4;
        uVar50 = uVar39 & 0xfffffffffffffffc;
        do {
          pfVar43 = (float *)(lVar51 + uVar41 * 4 + uVar52 * 4);
          fVar16 = pfVar43[1];
          fVar17 = pfVar43[2];
          fVar18 = pfVar43[3];
          pfVar2 = (float *)(lVar1 + uVar52 * 4);
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar5 = (float *)(lVar1 + uVar52 * 4);
          *pfVar5 = (*pfVar43 + *pfVar2) * fVar6;
          pfVar5[1] = (fVar16 + fVar19) * fVar6;
          pfVar5[2] = (fVar17 + fVar20) * fVar6;
          pfVar5[3] = (fVar18 + fVar21) * fVar6;
          uVar52 = uVar52 + 4;
        } while (uVar52 < uVar50);
      }
    }
    if (uVar50 < uVar39) {
      lVar51 = param_2 * lVar38 + param_1 + uVar41 * 4;
      do {
        *(float *)(lVar51 + uVar50 * 4) =
             (*(float *)(lVar51 + uVar50 * 4) +
             *(float *)(lVar42 * param_2 + param_1 + uVar41 * 4 + uVar50 * 4)) * fVar6;
        uVar50 = uVar50 + 1;
      } while (uVar50 < uVar39);
    }
  }
LAB_140617bde:
  if (1 < iVar44) {
    uVar39 = param_2 * lVar38 + param_1;
    uVar40 = 0;
    uVar50 = uVar39 & 0xf;
    pfVar43 = param_6;
    do {
      while( true ) {
        lVar42 = param_2 * uVar49;
        lVar51 = param_2 * lVar48;
        uVar49 = uVar49 + 1;
        if (uVar49 == (longlong)param_7) {
          uVar49 = 0;
        }
        lVar48 = lVar48 + -1;
        fVar6 = pfVar43[1];
        if (lVar48 < 0) {
          lVar48 = uVar46 - 1;
        }
        lVar42 = lVar42 + param_1;
        lVar51 = lVar51 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar41 = uVar50, uVar50 != 0 && (uVar41 = 0x10 - uVar50 >> 2, (uVar39 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar41 + 8))))) {
          uVar52 = 0;
          if (param_5 != 0) {
            uVar45 = 0;
            uVar41 = param_5;
            goto LAB_140617e44;
          }
        }
        else {
          uVar45 = 0;
          uVar52 = param_5 - (param_5 - uVar41 & 7);
          if (uVar41 != 0) {
            do {
              *(float *)(uVar39 + uVar45 * 4) =
                   (*(float *)(lVar42 + uVar45 * 4) + *(float *)(lVar51 + uVar45 * 4)) * fVar6 +
                   *(float *)(uVar39 + uVar45 * 4);
              uVar45 = uVar45 + 1;
            } while (uVar45 < uVar41);
          }
          if ((lVar51 + uVar41 * 4 & 0xf) == 0) {
            do {
              pfVar2 = (float *)(lVar42 + uVar41 * 4);
              fVar16 = pfVar2[1];
              fVar17 = pfVar2[2];
              fVar18 = pfVar2[3];
              pfVar5 = (float *)(lVar42 + 0x10 + uVar41 * 4);
              fVar19 = *pfVar5;
              fVar20 = pfVar5[1];
              fVar21 = pfVar5[2];
              fVar22 = pfVar5[3];
              pfVar5 = (float *)(lVar51 + uVar41 * 4);
              fVar23 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar3 = (float *)(lVar51 + 0x10 + uVar41 * 4);
              fVar26 = *pfVar3;
              fVar27 = pfVar3[1];
              fVar28 = pfVar3[2];
              fVar29 = pfVar3[3];
              pfVar3 = (float *)(uVar39 + uVar41 * 4);
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              fVar32 = pfVar3[3];
              pfVar4 = (float *)(uVar39 + 0x10 + uVar41 * 4);
              fVar33 = *pfVar4;
              fVar34 = pfVar4[1];
              fVar35 = pfVar4[2];
              fVar36 = pfVar4[3];
              pfVar4 = (float *)(uVar39 + uVar41 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar4[2] = (fVar17 + fVar24) * fVar6 + fVar31;
              pfVar4[3] = (fVar18 + fVar25) * fVar6 + fVar32;
              pfVar2 = (float *)(uVar39 + 0x10 + uVar41 * 4);
              *pfVar2 = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar2[1] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar2[2] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar2[3] = (fVar22 + fVar29) * fVar6 + fVar36;
              uVar41 = uVar41 + 8;
            } while (uVar41 < uVar52);
          }
          else {
            do {
              pfVar2 = (float *)(lVar42 + uVar41 * 4);
              fVar16 = pfVar2[1];
              fVar17 = pfVar2[2];
              fVar18 = pfVar2[3];
              pfVar5 = (float *)(lVar42 + 0x10 + uVar41 * 4);
              fVar19 = *pfVar5;
              fVar20 = pfVar5[1];
              fVar21 = pfVar5[2];
              fVar22 = pfVar5[3];
              pfVar5 = (float *)(lVar51 + uVar41 * 4);
              fVar23 = pfVar5[1];
              fVar24 = pfVar5[2];
              fVar25 = pfVar5[3];
              pfVar3 = (float *)(lVar51 + 0x10 + uVar41 * 4);
              fVar26 = *pfVar3;
              fVar27 = pfVar3[1];
              fVar28 = pfVar3[2];
              fVar29 = pfVar3[3];
              pfVar3 = (float *)(uVar39 + uVar41 * 4);
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              fVar32 = pfVar3[3];
              pfVar4 = (float *)(uVar39 + 0x10 + uVar41 * 4);
              fVar33 = *pfVar4;
              fVar34 = pfVar4[1];
              fVar35 = pfVar4[2];
              fVar36 = pfVar4[3];
              pfVar4 = (float *)(uVar39 + uVar41 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar4[2] = (fVar17 + fVar24) * fVar6 + fVar31;
              pfVar4[3] = (fVar18 + fVar25) * fVar6 + fVar32;
              pfVar2 = (float *)(uVar39 + 0x10 + uVar41 * 4);
              *pfVar2 = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar2[1] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar2[2] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar2[3] = (fVar22 + fVar29) * fVar6 + fVar36;
              uVar41 = uVar41 + 8;
            } while (uVar41 < uVar52);
          }
          if (uVar52 + 1 <= param_5) {
            uVar41 = param_5 - uVar52;
            if ((longlong)uVar41 < 4) {
              uVar45 = 0;
            }
            else {
              uVar53 = 0;
              uVar45 = uVar41 & 0xfffffffffffffffc;
              lVar1 = uVar39 + uVar52 * 4;
              do {
                pfVar4 = (float *)(lVar42 + uVar52 * 4 + uVar53 * 4);
                fVar16 = pfVar4[1];
                fVar17 = pfVar4[2];
                fVar18 = pfVar4[3];
                pfVar2 = (float *)(lVar51 + uVar52 * 4 + uVar53 * 4);
                fVar19 = pfVar2[1];
                fVar20 = pfVar2[2];
                fVar21 = pfVar2[3];
                pfVar5 = (float *)(lVar1 + uVar53 * 4);
                fVar22 = pfVar5[1];
                fVar23 = pfVar5[2];
                fVar24 = pfVar5[3];
                pfVar3 = (float *)(lVar1 + uVar53 * 4);
                *pfVar3 = (*pfVar4 + *pfVar2) * fVar6 + *pfVar5;
                pfVar3[1] = (fVar16 + fVar19) * fVar6 + fVar22;
                pfVar3[2] = (fVar17 + fVar20) * fVar6 + fVar23;
                pfVar3[3] = (fVar18 + fVar21) * fVar6 + fVar24;
                uVar53 = uVar53 + 4;
              } while (uVar53 < uVar45);
            }
LAB_140617e44:
            if (uVar45 < uVar41) {
              lVar1 = uVar39 + uVar52 * 4;
              do {
                *(float *)(lVar1 + uVar45 * 4) =
                     (*(float *)(lVar42 + uVar52 * 4 + uVar45 * 4) +
                     *(float *)(lVar51 + uVar52 * 4 + uVar45 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar45 * 4);
                uVar45 = uVar45 + 1;
              } while (uVar45 < uVar41);
            }
          }
        }
        uVar40 = uVar40 + 1;
        pfVar43 = pfVar43 + 1;
        if (iVar44 - 1U <= uVar40) goto LAB_140617ebb;
      }
      uVar40 = uVar40 + 1;
      pfVar43 = pfVar43 + 1;
    } while (uVar40 < iVar44 - 1U);
  }
LAB_140617ebb:
  lVar42 = (longlong)param_7;
  fVar6 = param_6[iVar44];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1406182d4:
      uVar39 = 0;
    }
    else {
      uVar49 = lVar42 * param_2 + param_1;
      uVar46 = uVar49 & 0xf;
      if (uVar46 != 0) {
        if ((uVar49 & 3) != 0) goto LAB_1406182d4;
        uVar46 = 0x10 - uVar46 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar46 + 8)) goto LAB_1406182d4;
      lVar51 = param_2 * lVar37 + param_1;
      lVar48 = param_2 * lVar38 + param_1;
      uVar50 = 0;
      uVar39 = param_5 - (param_5 - uVar46 & 7);
      if (uVar46 != 0) {
        do {
          *(float *)(uVar49 + uVar50 * 4) =
               *(float *)(lVar51 + uVar50 * 4) * fVar6 + *(float *)(lVar48 + uVar50 * 4);
          uVar50 = uVar50 + 1;
        } while (uVar50 < uVar46);
      }
      if ((lVar51 + uVar46 * 4 & 0xf) == 0) {
        do {
          pfVar43 = (float *)(lVar51 + uVar46 * 4);
          fVar16 = pfVar43[1];
          fVar17 = pfVar43[2];
          fVar18 = pfVar43[3];
          pfVar2 = (float *)(lVar51 + 0x10 + uVar46 * 4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar2 = (float *)(lVar48 + uVar46 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar5 = (float *)(lVar48 + 0x10 + uVar46 * 4);
          fVar26 = *pfVar5;
          fVar27 = pfVar5[1];
          fVar28 = pfVar5[2];
          fVar29 = pfVar5[3];
          pfVar5 = (float *)(uVar49 + uVar46 * 4);
          *pfVar5 = *pfVar2 + *pfVar43 * fVar6;
          pfVar5[1] = fVar23 + fVar16 * fVar6;
          pfVar5[2] = fVar24 + fVar17 * fVar6;
          pfVar5[3] = fVar25 + fVar18 * fVar6;
          pfVar43 = (float *)(uVar49 + 0x10 + uVar46 * 4);
          *pfVar43 = fVar26 + fVar19 * fVar6;
          pfVar43[1] = fVar27 + fVar20 * fVar6;
          pfVar43[2] = fVar28 + fVar21 * fVar6;
          pfVar43[3] = fVar29 + fVar22 * fVar6;
          uVar46 = uVar46 + 8;
        } while (uVar46 < uVar39);
      }
      else {
        do {
          pfVar43 = (float *)(lVar51 + uVar46 * 4);
          fVar16 = pfVar43[1];
          fVar17 = pfVar43[2];
          fVar18 = pfVar43[3];
          pfVar2 = (float *)(lVar51 + 0x10 + uVar46 * 4);
          fVar19 = *pfVar2;
          fVar20 = pfVar2[1];
          fVar21 = pfVar2[2];
          fVar22 = pfVar2[3];
          pfVar2 = (float *)(lVar48 + uVar46 * 4);
          fVar23 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar25 = pfVar2[3];
          pfVar5 = (float *)(lVar48 + 0x10 + uVar46 * 4);
          fVar26 = *pfVar5;
          fVar27 = pfVar5[1];
          fVar28 = pfVar5[2];
          fVar29 = pfVar5[3];
          pfVar5 = (float *)(uVar49 + uVar46 * 4);
          *pfVar5 = *pfVar2 + *pfVar43 * fVar6;
          pfVar5[1] = fVar23 + fVar16 * fVar6;
          pfVar5[2] = fVar24 + fVar17 * fVar6;
          pfVar5[3] = fVar25 + fVar18 * fVar6;
          pfVar43 = (float *)(uVar49 + 0x10 + uVar46 * 4);
          *pfVar43 = fVar26 + fVar19 * fVar6;
          pfVar43[1] = fVar27 + fVar20 * fVar6;
          pfVar43[2] = fVar28 + fVar21 * fVar6;
          pfVar43[3] = fVar29 + fVar22 * fVar6;
          uVar46 = uVar46 + 8;
        } while (uVar46 < uVar39);
      }
    }
    uVar46 = 0;
    if (uVar39 + 1 <= param_5) {
      do {
        *(float *)(lVar42 * param_2 + param_1 + uVar39 * 4 + uVar46 * 4) =
             *(float *)(lVar37 * param_2 + param_1 + uVar39 * 4 + uVar46 * 4) * fVar6 +
             *(float *)(lVar38 * param_2 + param_1 + uVar39 * 4 + uVar46 * 4);
        uVar46 = uVar46 + 1;
      } while (uVar46 < param_5 - uVar39);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar49 = lVar42 * param_2 + param_1;
      uVar46 = uVar49 & 0xf;
      if (uVar46 != 0) {
        if ((uVar49 & 3) != 0) goto LAB_1406182e2;
        uVar46 = 0x10 - uVar46 >> 2;
      }
      if ((longlong)(uVar46 + 8) <= (longlong)param_5) {
        uVar50 = 0;
        uVar39 = param_5 - (param_5 - uVar46 & 7);
        if (uVar46 != 0) {
          do {
            iVar44 = (int)ROUND(*(float *)(uVar49 + uVar50 * 4));
            if (0xfe < iVar44) {
              iVar44 = 0xff;
            }
            uVar47 = (undefined1)iVar44;
            if (iVar44 < 1) {
              uVar47 = 0;
            }
            *(undefined1 *)(uVar50 + param_4) = uVar47;
            uVar50 = uVar50 + 1;
          } while (uVar50 < uVar46);
        }
        do {
          pfVar43 = (float *)(uVar49 + uVar46 * 4);
          auVar56._0_4_ = (int)*pfVar43;
          auVar56._4_4_ = (int)pfVar43[1];
          auVar56._8_4_ = (int)pfVar43[2];
          auVar56._12_4_ = (int)pfVar43[3];
          pfVar43 = (float *)(uVar49 + 0x10 + uVar46 * 4);
          auVar55._4_4_ = (int)pfVar43[1];
          auVar55._0_4_ = (int)*pfVar43;
          auVar55._8_4_ = (int)pfVar43[2];
          auVar55._12_4_ = (int)pfVar43[3];
          auVar55 = packssdw(auVar56,auVar55);
          sVar7 = auVar55._0_2_;
          sVar8 = auVar55._2_2_;
          sVar9 = auVar55._4_2_;
          sVar10 = auVar55._6_2_;
          sVar11 = auVar55._8_2_;
          sVar12 = auVar55._10_2_;
          sVar13 = auVar55._12_2_;
          sVar14 = auVar55._14_2_;
          *(ulonglong *)(uVar46 + param_4) =
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
          uVar46 = uVar46 + 8;
        } while (uVar46 < uVar39);
        goto LAB_140618281;
      }
    }
LAB_1406182e2:
    uVar39 = 0;
LAB_140618281:
    if (param_5 <= uVar39) {
      return;
    }
    do {
      iVar44 = (int)ROUND(*(float *)(param_1 + param_2 * lVar42 + uVar39 * 4));
      if (0xfe < iVar44) {
        iVar44 = 0xff;
      }
      uVar47 = (undefined1)iVar44;
      if (iVar44 < 1) {
        uVar47 = 0;
      }
      *(undefined1 *)(uVar39 + param_4) = uVar47;
      uVar39 = uVar39 + 1;
    } while (uVar39 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar49 = lVar42 * param_2 + param_1;
    uVar46 = uVar49 & 0xf;
    if (uVar46 != 0) {
      if ((uVar49 & 3) != 0) goto LAB_1406182db;
      uVar46 = 0x10 - uVar46 >> 2;
    }
    if ((longlong)(uVar46 + 8) <= (longlong)param_5) {
      uVar50 = 0;
      uVar39 = param_5 - (param_5 - uVar46 & 7);
      if (uVar46 != 0) {
        do {
          iVar44 = (int)ROUND(*(float *)(uVar49 + uVar50 * 4));
          if (0xfe < iVar44) {
            iVar44 = 0xff;
          }
          uVar47 = (undefined1)iVar44;
          if (iVar44 < 1) {
            uVar47 = 0;
          }
          *(undefined1 *)(uVar50 + param_4) = uVar47;
          uVar50 = uVar50 + 1;
        } while (uVar50 < uVar46);
      }
      do {
        pfVar43 = (float *)(uVar49 + uVar46 * 4);
        auVar54._0_4_ = (int)*pfVar43;
        auVar54._4_4_ = (int)pfVar43[1];
        auVar54._8_4_ = (int)pfVar43[2];
        auVar54._12_4_ = (int)pfVar43[3];
        pfVar43 = (float *)(uVar49 + 0x10 + uVar46 * 4);
        auVar15._4_4_ = (int)pfVar43[1];
        auVar15._0_4_ = (int)*pfVar43;
        auVar15._8_4_ = (int)pfVar43[2];
        auVar15._12_4_ = (int)pfVar43[3];
        auVar55 = packssdw(auVar54,auVar15);
        sVar7 = auVar55._0_2_;
        sVar8 = auVar55._2_2_;
        sVar9 = auVar55._4_2_;
        sVar10 = auVar55._6_2_;
        sVar11 = auVar55._8_2_;
        sVar12 = auVar55._10_2_;
        sVar13 = auVar55._12_2_;
        sVar14 = auVar55._14_2_;
        *(ulonglong *)(uVar46 + param_4) =
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
        uVar46 = uVar46 + 8;
      } while (uVar46 < uVar39);
      goto LAB_140618161;
    }
  }
LAB_1406182db:
  uVar39 = 0;
LAB_140618161:
  if (uVar39 < param_5) {
    do {
      iVar44 = (int)ROUND(*(float *)(param_1 + param_2 * lVar42 + uVar39 * 4));
      if (0xfe < iVar44) {
        iVar44 = 0xff;
      }
      uVar47 = (undefined1)iVar44;
      if (iVar44 < 1) {
        uVar47 = 0;
      }
      *(undefined1 *)(uVar39 + param_4) = uVar47;
      uVar39 = uVar39 + 1;
    } while (uVar39 < param_5);
  }
  return;
}

