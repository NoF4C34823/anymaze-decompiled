
void FUN_1406855a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  float *pfVar35;
  undefined2 uVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 in_XMM1 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  uVar41 = (ulonglong)param_7;
  lVar39 = (longlong)param_3;
  iVar29 = param_7 >> 1;
  lVar42 = lVar39 - iVar29;
  lVar42 = (lVar42 >> 0x3f & uVar41) + lVar42;
  if (lVar42 == 0) {
    uVar34 = 0;
    uVar30 = uVar41;
  }
  else {
    uVar34 = (ulonglong)(int)lVar42;
    uVar30 = uVar34;
  }
  lVar43 = uVar30 - 1;
  uVar30 = uVar34 + 1;
  if (uVar34 + 1 == uVar41) {
    uVar30 = 0;
  }
  fVar6 = *param_6;
  uVar34 = (longlong)(int)lVar43;
  if ((longlong)(int)lVar43 < 1) {
    uVar34 = uVar41;
  }
  lVar32 = uVar34 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_140685f8a:
      uVar44 = 0;
    }
    else {
      uVar38 = param_2 * lVar42 + param_1;
      uVar34 = uVar38 & 0xf;
      if (uVar34 != 0) {
        if ((uVar38 & 3) != 0) goto LAB_140685f8a;
        uVar34 = 0x10 - uVar34 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar34 + 8)) goto LAB_140685f8a;
      lVar33 = param_2 * lVar43 + param_1;
      uVar40 = 0;
      uVar44 = param_5 - (param_5 - uVar34 & 7);
      if (uVar34 != 0) {
        do {
          *(float *)(uVar38 + uVar40 * 4) =
               (*(float *)(uVar38 + uVar40 * 4) + *(float *)(lVar33 + uVar40 * 4)) * fVar6;
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar34);
      }
      if ((uVar34 * 4 + lVar33 & 0xf) == 0) {
        in_XMM1._4_4_ = fVar6;
        in_XMM1._0_4_ = fVar6;
        in_XMM1._8_4_ = fVar6;
        in_XMM1._12_4_ = fVar6;
        do {
          pfVar35 = (float *)(uVar38 + uVar34 * 4);
          fVar48 = pfVar35[1];
          fVar9 = pfVar35[2];
          fVar10 = pfVar35[3];
          pfVar1 = (float *)(uVar38 + 0x10 + uVar34 * 4);
          fVar11 = *pfVar1;
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar3 = (float *)(lVar33 + uVar34 * 4);
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          pfVar1 = (float *)(lVar33 + 0x10 + uVar34 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = (float *)(uVar38 + uVar34 * 4);
          *pfVar1 = (*pfVar35 + *pfVar3) * fVar6;
          pfVar1[1] = (fVar48 + fVar15) * fVar6;
          pfVar1[2] = (fVar9 + fVar16) * fVar6;
          pfVar1[3] = (fVar10 + fVar17) * fVar6;
          pfVar35 = (float *)(uVar38 + 0x10 + uVar34 * 4);
          *pfVar35 = (fVar11 + fVar18) * fVar6;
          pfVar35[1] = (fVar12 + fVar19) * fVar6;
          pfVar35[2] = (fVar13 + fVar20) * fVar6;
          pfVar35[3] = (fVar14 + fVar21) * fVar6;
          uVar34 = uVar34 + 8;
        } while (uVar34 < uVar44);
      }
      else {
        in_XMM1._4_4_ = fVar6;
        in_XMM1._0_4_ = fVar6;
        in_XMM1._8_4_ = fVar6;
        in_XMM1._12_4_ = fVar6;
        do {
          pfVar3 = (float *)(lVar33 + uVar34 * 4);
          fVar48 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          pfVar35 = (float *)(lVar33 + 0x10 + uVar34 * 4);
          fVar11 = *pfVar35;
          fVar12 = pfVar35[1];
          fVar13 = pfVar35[2];
          fVar14 = pfVar35[3];
          pfVar35 = (float *)(uVar38 + uVar34 * 4);
          fVar15 = pfVar35[1];
          fVar16 = pfVar35[2];
          fVar17 = pfVar35[3];
          pfVar1 = (float *)(uVar38 + 0x10 + uVar34 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = (float *)(uVar38 + uVar34 * 4);
          *pfVar1 = (*pfVar3 + *pfVar35) * fVar6;
          pfVar1[1] = (fVar48 + fVar15) * fVar6;
          pfVar1[2] = (fVar9 + fVar16) * fVar6;
          pfVar1[3] = (fVar10 + fVar17) * fVar6;
          pfVar35 = (float *)(uVar38 + 0x10 + uVar34 * 4);
          *pfVar35 = (fVar11 + fVar18) * fVar6;
          pfVar35[1] = (fVar12 + fVar19) * fVar6;
          pfVar35[2] = (fVar13 + fVar20) * fVar6;
          pfVar35[3] = (fVar14 + fVar21) * fVar6;
          uVar34 = uVar34 + 8;
        } while (uVar34 < uVar44);
      }
    }
    uVar34 = 0;
    if (uVar44 + 1 <= param_5) {
      lVar33 = param_2 * lVar42 + param_1 + uVar44 * 4;
      do {
        fVar48 = (*(float *)(lVar33 + uVar34 * 4) +
                 *(float *)(lVar43 * param_2 + param_1 + uVar44 * 4 + uVar34 * 4)) * fVar6;
        in_XMM1 = ZEXT416((uint)fVar48);
        *(float *)(lVar33 + uVar34 * 4) = fVar48;
        uVar34 = uVar34 + 1;
      } while (uVar34 < param_5 - uVar44);
    }
  }
  if (1 < iVar29) {
    uVar34 = param_2 * lVar42 + param_1;
    uVar37 = 0;
    uVar38 = uVar34 & 0xf;
    pfVar35 = param_6;
    do {
      while( true ) {
        lVar43 = param_2 * uVar30;
        lVar33 = param_2 * lVar32;
        uVar30 = uVar30 + 1;
        fVar6 = pfVar35[1];
        in_XMM1 = ZEXT416((uint)fVar6);
        if (uVar30 == (longlong)param_7) {
          uVar30 = 0;
        }
        lVar32 = lVar32 + -1;
        if (lVar32 < 0) {
          lVar32 = uVar41 - 1;
        }
        lVar43 = lVar43 + param_1;
        lVar33 = lVar33 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar44 = uVar38, uVar38 != 0 && (uVar44 = 0x10 - uVar38 >> 2, (uVar34 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar44 + 8))))) {
          uVar40 = 0;
          if (param_5 != 0) {
            uVar44 = 0;
            uVar31 = param_5;
            goto LAB_140685a24;
          }
        }
        else {
          uVar31 = 0;
          uVar40 = param_5 - (param_5 - uVar44 & 7);
          if (uVar44 != 0) {
            do {
              *(float *)(uVar34 + uVar31 * 4) =
                   (*(float *)(lVar43 + uVar31 * 4) + *(float *)(lVar33 + uVar31 * 4)) * fVar6 +
                   *(float *)(uVar34 + uVar31 * 4);
              uVar31 = uVar31 + 1;
            } while (uVar31 < uVar44);
          }
          if ((uVar44 * 4 + lVar33 & 0xf) == 0) {
            do {
              pfVar1 = (float *)(lVar43 + uVar44 * 4);
              fVar48 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar3 = (float *)(lVar43 + 0x10 + uVar44 * 4);
              fVar11 = *pfVar3;
              fVar12 = pfVar3[1];
              fVar13 = pfVar3[2];
              fVar14 = pfVar3[3];
              pfVar3 = (float *)(lVar33 + uVar44 * 4);
              fVar15 = pfVar3[1];
              fVar16 = pfVar3[2];
              fVar17 = pfVar3[3];
              pfVar2 = (float *)(lVar33 + 0x10 + uVar44 * 4);
              fVar18 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar20 = pfVar2[2];
              fVar21 = pfVar2[3];
              pfVar4 = (float *)(uVar34 + uVar44 * 4);
              fVar22 = pfVar4[1];
              fVar23 = pfVar4[2];
              fVar24 = pfVar4[3];
              pfVar2 = (float *)(uVar34 + 0x10 + uVar44 * 4);
              fVar25 = *pfVar2;
              fVar26 = pfVar2[1];
              fVar27 = pfVar2[2];
              fVar28 = pfVar2[3];
              pfVar2 = (float *)(uVar34 + uVar44 * 4);
              *pfVar2 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar2[1] = (fVar48 + fVar15) * fVar6 + fVar22;
              pfVar2[2] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2[3] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1 = (float *)(uVar34 + 0x10 + uVar44 * 4);
              *pfVar1 = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[1] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[2] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar1[3] = (fVar14 + fVar21) * fVar6 + fVar28;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar40);
          }
          else {
            do {
              pfVar1 = (float *)(lVar43 + uVar44 * 4);
              fVar48 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar3 = (float *)(lVar43 + 0x10 + uVar44 * 4);
              fVar11 = *pfVar3;
              fVar12 = pfVar3[1];
              fVar13 = pfVar3[2];
              fVar14 = pfVar3[3];
              pfVar3 = (float *)(lVar33 + uVar44 * 4);
              fVar15 = pfVar3[1];
              fVar16 = pfVar3[2];
              fVar17 = pfVar3[3];
              pfVar2 = (float *)(lVar33 + 0x10 + uVar44 * 4);
              fVar18 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar20 = pfVar2[2];
              fVar21 = pfVar2[3];
              pfVar4 = (float *)(uVar34 + uVar44 * 4);
              fVar22 = pfVar4[1];
              fVar23 = pfVar4[2];
              fVar24 = pfVar4[3];
              pfVar2 = (float *)(uVar34 + 0x10 + uVar44 * 4);
              fVar25 = *pfVar2;
              fVar26 = pfVar2[1];
              fVar27 = pfVar2[2];
              fVar28 = pfVar2[3];
              pfVar2 = (float *)(uVar34 + uVar44 * 4);
              *pfVar2 = (*pfVar1 + *pfVar3) * fVar6 + *pfVar4;
              pfVar2[1] = (fVar48 + fVar15) * fVar6 + fVar22;
              pfVar2[2] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar2[3] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar1 = (float *)(uVar34 + 0x10 + uVar44 * 4);
              *pfVar1 = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar1[1] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar1[2] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar1[3] = (fVar14 + fVar21) * fVar6 + fVar28;
              uVar44 = uVar44 + 8;
            } while (uVar44 < uVar40);
          }
          if (uVar40 + 1 <= param_5) {
            uVar31 = param_5 - uVar40;
            if ((longlong)uVar31 < 4) {
              uVar44 = 0;
            }
            else {
              uVar44 = uVar31 & 0xfffffffffffffffc;
              uVar45 = 0;
              lVar5 = uVar34 + uVar40 * 4;
              do {
                pfVar4 = (float *)(lVar43 + uVar40 * 4 + uVar45 * 4);
                fVar48 = pfVar4[1];
                fVar9 = pfVar4[2];
                fVar10 = pfVar4[3];
                pfVar1 = (float *)(uVar40 * 4 + lVar33 + uVar45 * 4);
                fVar11 = pfVar1[1];
                fVar12 = pfVar1[2];
                fVar13 = pfVar1[3];
                pfVar3 = (float *)(lVar5 + uVar45 * 4);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar2 = (float *)(lVar5 + uVar45 * 4);
                *pfVar2 = (*pfVar4 + *pfVar1) * fVar6 + *pfVar3;
                pfVar2[1] = (fVar48 + fVar11) * fVar6 + fVar14;
                pfVar2[2] = (fVar9 + fVar12) * fVar6 + fVar15;
                pfVar2[3] = (fVar10 + fVar13) * fVar6 + fVar16;
                uVar45 = uVar45 + 4;
              } while (uVar45 < uVar44);
            }
LAB_140685a24:
            if (uVar44 < uVar31) {
              lVar5 = uVar34 + uVar40 * 4;
              do {
                *(float *)(lVar5 + uVar44 * 4) =
                     (*(float *)(lVar43 + uVar40 * 4 + uVar44 * 4) +
                     *(float *)(lVar33 + uVar40 * 4 + uVar44 * 4)) * fVar6 +
                     *(float *)(lVar5 + uVar44 * 4);
                uVar44 = uVar44 + 1;
              } while (uVar44 < uVar31);
            }
          }
        }
        uVar37 = uVar37 + 1;
        pfVar35 = pfVar35 + 1;
        if (iVar29 - 1U <= uVar37) goto LAB_140685aa3;
      }
      uVar37 = uVar37 + 1;
      pfVar35 = pfVar35 + 1;
    } while (uVar37 < iVar29 - 1U);
  }
LAB_140685aa3:
  lVar43 = (longlong)param_7;
  fVar6 = param_6[iVar29];
  auVar46 = ZEXT416((uint)fVar6);
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_140685f78:
      uVar34 = 0;
    }
    else {
      uVar30 = lVar43 * param_2 + param_1;
      uVar41 = uVar30 & 0xf;
      if (uVar41 != 0) {
        if ((uVar30 & 3) != 0) goto LAB_140685f78;
        uVar41 = 0x10 - uVar41 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar41 + 8)) goto LAB_140685f78;
      lVar33 = param_2 * lVar39 + param_1;
      lVar32 = param_2 * lVar42 + param_1;
      uVar38 = 0;
      uVar34 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          *(float *)(uVar30 + uVar38 * 4) =
               *(float *)(lVar33 + uVar38 * 4) * fVar6 + *(float *)(lVar32 + uVar38 * 4);
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar41);
      }
      if ((uVar41 * 4 + lVar33 & 0xf) == 0) {
        in_XMM1._4_4_ = fVar6;
        in_XMM1._0_4_ = fVar6;
        in_XMM1._8_4_ = fVar6;
        in_XMM1._12_4_ = fVar6;
        do {
          pfVar3 = (float *)(lVar33 + uVar41 * 4);
          fVar48 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          pfVar35 = (float *)(lVar33 + 0x10 + uVar41 * 4);
          fVar11 = *pfVar35;
          fVar12 = pfVar35[1];
          fVar13 = pfVar35[2];
          fVar14 = pfVar35[3];
          pfVar35 = (float *)(lVar32 + uVar41 * 4);
          fVar15 = pfVar35[1];
          fVar16 = pfVar35[2];
          fVar17 = pfVar35[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar41 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = (float *)(uVar30 + uVar41 * 4);
          *pfVar1 = *pfVar35 + *pfVar3 * fVar6;
          pfVar1[1] = fVar15 + fVar48 * fVar6;
          pfVar1[2] = fVar16 + fVar9 * fVar6;
          pfVar1[3] = fVar17 + fVar10 * fVar6;
          pfVar35 = (float *)(uVar30 + 0x10 + uVar41 * 4);
          *pfVar35 = fVar18 + fVar11 * fVar6;
          pfVar35[1] = fVar19 + fVar12 * fVar6;
          pfVar35[2] = fVar20 + fVar13 * fVar6;
          pfVar35[3] = fVar21 + fVar14 * fVar6;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar34);
      }
      else {
        in_XMM1._4_4_ = fVar6;
        in_XMM1._0_4_ = fVar6;
        in_XMM1._8_4_ = fVar6;
        in_XMM1._12_4_ = fVar6;
        do {
          pfVar3 = (float *)(lVar33 + uVar41 * 4);
          fVar48 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          pfVar35 = (float *)(lVar33 + 0x10 + uVar41 * 4);
          fVar11 = *pfVar35;
          fVar12 = pfVar35[1];
          fVar13 = pfVar35[2];
          fVar14 = pfVar35[3];
          pfVar35 = (float *)(lVar32 + uVar41 * 4);
          fVar15 = pfVar35[1];
          fVar16 = pfVar35[2];
          fVar17 = pfVar35[3];
          pfVar1 = (float *)(lVar32 + 0x10 + uVar41 * 4);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          pfVar1 = (float *)(uVar30 + uVar41 * 4);
          *pfVar1 = *pfVar35 + *pfVar3 * fVar6;
          pfVar1[1] = fVar15 + fVar48 * fVar6;
          pfVar1[2] = fVar16 + fVar9 * fVar6;
          pfVar1[3] = fVar17 + fVar10 * fVar6;
          pfVar35 = (float *)(uVar30 + 0x10 + uVar41 * 4);
          *pfVar35 = fVar18 + fVar11 * fVar6;
          pfVar35[1] = fVar19 + fVar12 * fVar6;
          pfVar35[2] = fVar20 + fVar13 * fVar6;
          pfVar35[3] = fVar21 + fVar14 * fVar6;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar34);
      }
    }
    if (uVar34 < param_5) {
      do {
        fVar48 = *(float *)(lVar39 * param_2 + param_1 + uVar34 * 4) * fVar6 +
                 *(float *)(lVar42 * param_2 + param_1 + uVar34 * 4);
        in_XMM1 = ZEXT416((uint)fVar48);
        *(float *)(lVar43 * param_2 + param_1 + uVar34 * 4) = fVar48;
        uVar34 = uVar34 + 1;
      } while (uVar34 < param_5);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar41 = param_4 & 0xf;
      if (uVar41 != 0) {
        if ((param_4 & 1) != 0) goto LAB_140685f86;
        uVar41 = 0x10 - uVar41 >> 1;
      }
      if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
        lVar42 = lVar43 * param_2 + param_1;
        uVar34 = 0;
        uVar30 = param_5 - (param_5 - uVar41 & 7);
        if (uVar41 != 0) {
          do {
            iVar29 = (int)ROUND(*(float *)(lVar42 + uVar34 * 4));
            if (0x7ffe < iVar29) {
              iVar29 = 0x7fff;
            }
            uVar36 = (undefined2)iVar29;
            if (iVar29 < -0x7fff) {
              uVar36 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar34 * 2) = uVar36;
            uVar34 = uVar34 + 1;
          } while (uVar34 < uVar41);
        }
        if ((uVar41 * 4 + lVar42 & 0xf) == 0) {
          do {
            pfVar35 = (float *)(lVar42 + uVar41 * 4);
            auVar51._0_4_ = (int)*pfVar35;
            auVar51._4_4_ = (int)pfVar35[1];
            auVar51._8_4_ = (int)pfVar35[2];
            auVar51._12_4_ = (int)pfVar35[3];
            pfVar35 = (float *)(lVar42 + 0x10 + uVar41 * 4);
            auVar46._0_4_ = (int)*pfVar35;
            auVar46._4_4_ = (int)pfVar35[1];
            auVar46._8_4_ = (int)pfVar35[2];
            auVar46._12_4_ = (int)pfVar35[3];
            auVar46 = packssdw(auVar51,auVar46);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar46;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar30);
        }
        else {
          do {
            auVar46 = lddqu(auVar46,*(undefined1 (*) [16])(lVar42 + uVar41 * 4));
            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(lVar42 + 0x10 + uVar41 * 4));
            auVar52._0_4_ = (int)auVar46._0_4_;
            auVar52._4_4_ = (int)auVar46._4_4_;
            auVar52._8_4_ = (int)auVar46._8_4_;
            auVar52._12_4_ = (int)auVar46._12_4_;
            auVar8._4_4_ = (int)in_XMM1._4_4_;
            auVar8._0_4_ = (int)in_XMM1._0_4_;
            auVar8._8_4_ = (int)in_XMM1._8_4_;
            auVar8._12_4_ = (int)in_XMM1._12_4_;
            auVar51 = packssdw(auVar52,auVar8);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar51;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar30);
        }
        goto LAB_140685f1d;
      }
    }
LAB_140685f86:
    uVar30 = 0;
LAB_140685f1d:
    if (param_5 <= uVar30) {
      return;
    }
    do {
      iVar29 = (int)ROUND(*(float *)(param_1 + param_2 * lVar43 + uVar30 * 4));
      if (0x7ffe < iVar29) {
        iVar29 = 0x7fff;
      }
      uVar36 = (undefined2)iVar29;
      if (iVar29 < -0x7fff) {
        uVar36 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar30 * 2) = uVar36;
      uVar30 = uVar30 + 1;
    } while (uVar30 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar41 = param_4 & 0xf;
    if (uVar41 != 0) {
      if ((param_4 & 1) != 0) goto LAB_140685f7f;
      uVar41 = 0x10 - uVar41 >> 1;
    }
    if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
      lVar42 = lVar43 * param_2 + param_1;
      uVar34 = 0;
      uVar30 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          iVar29 = (int)ROUND(*(float *)(lVar42 + uVar34 * 4));
          if (0x7ffe < iVar29) {
            iVar29 = 0x7fff;
          }
          uVar36 = (undefined2)iVar29;
          if (iVar29 < -0x7fff) {
            uVar36 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar34 * 2) = uVar36;
          uVar34 = uVar34 + 1;
        } while (uVar34 < uVar41);
      }
      if ((uVar41 * 4 + lVar42 & 0xf) == 0) {
        do {
          pfVar35 = (float *)(lVar42 + uVar41 * 4);
          auVar49._0_4_ = (int)*pfVar35;
          auVar49._4_4_ = (int)pfVar35[1];
          auVar49._8_4_ = (int)pfVar35[2];
          auVar49._12_4_ = (int)pfVar35[3];
          pfVar35 = (float *)(lVar42 + 0x10 + uVar41 * 4);
          auVar47._0_4_ = (int)*pfVar35;
          auVar47._4_4_ = (int)pfVar35[1];
          auVar47._8_4_ = (int)pfVar35[2];
          auVar47._12_4_ = (int)pfVar35[3];
          auVar46 = packssdw(auVar49,auVar47);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar46;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar30);
      }
      else {
        do {
          auVar46 = lddqu(auVar46,*(undefined1 (*) [16])(lVar42 + uVar41 * 4));
          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(lVar42 + 0x10 + uVar41 * 4));
          auVar50._0_4_ = (int)auVar46._0_4_;
          auVar50._4_4_ = (int)auVar46._4_4_;
          auVar50._8_4_ = (int)auVar46._8_4_;
          auVar50._12_4_ = (int)auVar46._12_4_;
          auVar7._4_4_ = (int)in_XMM1._4_4_;
          auVar7._0_4_ = (int)in_XMM1._0_4_;
          auVar7._8_4_ = (int)in_XMM1._8_4_;
          auVar7._12_4_ = (int)in_XMM1._12_4_;
          auVar51 = packssdw(auVar50,auVar7);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar51;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar30);
      }
      goto LAB_140685d7d;
    }
  }
LAB_140685f7f:
  uVar30 = 0;
LAB_140685d7d:
  if (uVar30 < param_5) {
    do {
      iVar29 = (int)ROUND(*(float *)(param_1 + param_2 * lVar43 + uVar30 * 4));
      if (0x7ffe < iVar29) {
        iVar29 = 0x7fff;
      }
      uVar36 = (undefined2)iVar29;
      if (iVar29 < -0x7fff) {
        uVar36 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar30 * 2) = uVar36;
      uVar30 = uVar30 + 1;
    } while (uVar30 < param_5);
  }
  return;
}

