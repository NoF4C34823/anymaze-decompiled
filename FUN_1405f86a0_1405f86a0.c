
void FUN_1405f86a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
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
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  float *pfVar35;
  int iVar36;
  ulonglong uVar37;
  undefined2 uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar41 = (ulonglong)param_7;
  iVar36 = param_7 >> 1;
  lVar29 = (longlong)param_3;
  lVar30 = lVar29 - iVar36;
  lVar30 = (lVar30 >> 0x3f & uVar41) + lVar30;
  if (lVar30 == 0) {
    uVar31 = 0;
    uVar40 = uVar41;
  }
  else {
    uVar31 = (ulonglong)(int)lVar30;
    uVar40 = uVar31;
  }
  lVar34 = uVar40 - 1;
  uVar40 = uVar31 + 1;
  if (uVar31 + 1 == uVar41) {
    uVar40 = 0;
  }
  fVar6 = *param_6;
  auVar49 = ZEXT416((uint)fVar6);
  uVar31 = (longlong)(int)lVar34;
  if ((longlong)(int)lVar34 < 1) {
    uVar31 = uVar41;
  }
  lVar39 = uVar31 - 1;
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1405f9093:
      uVar33 = 0;
      if (param_5 == 0) goto LAB_1405f88fe;
      uVar42 = 0;
      uVar31 = param_5;
    }
    else {
      uVar42 = param_2 * lVar30 + param_1;
      uVar31 = uVar42 & 0xf;
      if (uVar31 != 0) {
        if ((uVar42 & 3) != 0) goto LAB_1405f9093;
        uVar31 = 0x10 - uVar31 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar31 + 8)) goto LAB_1405f9093;
      lVar43 = param_2 * lVar34 + param_1;
      uVar44 = 0;
      uVar33 = param_5 - (param_5 - uVar31 & 7);
      if (uVar31 != 0) {
        do {
          *(float *)(uVar42 + uVar44 * 4) =
               (*(float *)(uVar42 + uVar44 * 4) + *(float *)(lVar43 + uVar44 * 4)) * fVar6;
          uVar44 = uVar44 + 1;
        } while (uVar44 < uVar31);
      }
      if ((lVar43 + uVar31 * 4 & 0xf) == 0) {
        do {
          pfVar35 = (float *)(uVar42 + uVar31 * 4);
          fVar48 = pfVar35[1];
          fVar9 = pfVar35[2];
          fVar10 = pfVar35[3];
          pfVar2 = (float *)(uVar42 + 0x10 + uVar31 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar5 = (float *)(lVar43 + uVar31 * 4);
          fVar15 = pfVar5[1];
          fVar16 = pfVar5[2];
          fVar17 = pfVar5[3];
          pfVar2 = (float *)(lVar43 + 0x10 + uVar31 * 4);
          fVar18 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar2 = (float *)(uVar42 + uVar31 * 4);
          *pfVar2 = (*pfVar35 + *pfVar5) * fVar6;
          pfVar2[1] = (fVar48 + fVar15) * fVar6;
          pfVar2[2] = (fVar9 + fVar16) * fVar6;
          pfVar2[3] = (fVar10 + fVar17) * fVar6;
          pfVar35 = (float *)(uVar42 + 0x10 + uVar31 * 4);
          *pfVar35 = (fVar11 + fVar18) * fVar6;
          pfVar35[1] = (fVar12 + fVar19) * fVar6;
          pfVar35[2] = (fVar13 + fVar20) * fVar6;
          pfVar35[3] = (fVar14 + fVar21) * fVar6;
          uVar31 = uVar31 + 8;
        } while (uVar31 < uVar33);
      }
      else {
        do {
          pfVar5 = (float *)(lVar43 + uVar31 * 4);
          fVar48 = pfVar5[1];
          fVar9 = pfVar5[2];
          fVar10 = pfVar5[3];
          pfVar35 = (float *)(lVar43 + 0x10 + uVar31 * 4);
          fVar11 = *pfVar35;
          fVar12 = pfVar35[1];
          fVar13 = pfVar35[2];
          fVar14 = pfVar35[3];
          pfVar35 = (float *)(uVar42 + uVar31 * 4);
          fVar15 = pfVar35[1];
          fVar16 = pfVar35[2];
          fVar17 = pfVar35[3];
          pfVar2 = (float *)(uVar42 + 0x10 + uVar31 * 4);
          fVar18 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar20 = pfVar2[2];
          fVar21 = pfVar2[3];
          pfVar2 = (float *)(uVar42 + uVar31 * 4);
          *pfVar2 = (*pfVar5 + *pfVar35) * fVar6;
          pfVar2[1] = (fVar48 + fVar15) * fVar6;
          pfVar2[2] = (fVar9 + fVar16) * fVar6;
          pfVar2[3] = (fVar10 + fVar17) * fVar6;
          pfVar35 = (float *)(uVar42 + 0x10 + uVar31 * 4);
          *pfVar35 = (fVar11 + fVar18) * fVar6;
          pfVar35[1] = (fVar12 + fVar19) * fVar6;
          pfVar35[2] = (fVar13 + fVar20) * fVar6;
          pfVar35[3] = (fVar14 + fVar21) * fVar6;
          uVar31 = uVar31 + 8;
        } while (uVar31 < uVar33);
      }
      if (param_5 < uVar33 + 1) goto LAB_1405f88fe;
      uVar31 = param_5 - uVar33;
      if ((longlong)uVar31 < 4) {
        uVar42 = 0;
      }
      else {
        uVar44 = 0;
        lVar1 = uVar42 + uVar33 * 4;
        uVar42 = uVar31 & 0xfffffffffffffffc;
        do {
          pfVar35 = (float *)(lVar43 + uVar33 * 4 + uVar44 * 4);
          fVar48 = pfVar35[1];
          fVar9 = pfVar35[2];
          fVar10 = pfVar35[3];
          pfVar2 = (float *)(lVar1 + uVar44 * 4);
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar5 = (float *)(lVar1 + uVar44 * 4);
          *pfVar5 = (*pfVar35 + *pfVar2) * fVar6;
          pfVar5[1] = (fVar48 + fVar11) * fVar6;
          pfVar5[2] = (fVar9 + fVar12) * fVar6;
          pfVar5[3] = (fVar10 + fVar13) * fVar6;
          uVar44 = uVar44 + 4;
        } while (uVar44 < uVar42);
      }
    }
    if (uVar42 < uVar31) {
      lVar43 = param_2 * lVar30 + param_1 + uVar33 * 4;
      do {
        *(float *)(lVar43 + uVar42 * 4) =
             (*(float *)(lVar43 + uVar42 * 4) +
             *(float *)(lVar34 * param_2 + param_1 + uVar33 * 4 + uVar42 * 4)) * fVar6;
        uVar42 = uVar42 + 1;
      } while (uVar42 < uVar31);
    }
  }
LAB_1405f88fe:
  if (1 < iVar36) {
    uVar31 = param_2 * lVar30 + param_1;
    uVar32 = 0;
    uVar42 = uVar31 & 0xf;
    pfVar35 = param_6;
    do {
      while( true ) {
        lVar34 = param_2 * uVar40;
        lVar43 = param_2 * lVar39;
        uVar40 = uVar40 + 1;
        if (uVar40 == (longlong)param_7) {
          uVar40 = 0;
        }
        lVar39 = lVar39 + -1;
        fVar6 = pfVar35[1];
        auVar49 = ZEXT416((uint)fVar6);
        if (lVar39 < 0) {
          lVar39 = uVar41 - 1;
        }
        lVar34 = lVar34 + param_1;
        lVar43 = lVar43 + param_1;
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar33 = uVar42, uVar42 != 0 && (uVar33 = 0x10 - uVar42 >> 2, (uVar31 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar33 + 8))))) {
          uVar44 = 0;
          if (param_5 != 0) {
            uVar37 = 0;
            uVar33 = param_5;
            goto LAB_1405f8b64;
          }
        }
        else {
          uVar37 = 0;
          uVar44 = param_5 - (param_5 - uVar33 & 7);
          if (uVar33 != 0) {
            do {
              *(float *)(uVar31 + uVar37 * 4) =
                   (*(float *)(lVar34 + uVar37 * 4) + *(float *)(lVar43 + uVar37 * 4)) * fVar6 +
                   *(float *)(uVar31 + uVar37 * 4);
              uVar37 = uVar37 + 1;
            } while (uVar37 < uVar33);
          }
          if ((lVar43 + uVar33 * 4 & 0xf) == 0) {
            do {
              pfVar2 = (float *)(lVar34 + uVar33 * 4);
              fVar48 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar5 = (float *)(lVar34 + 0x10 + uVar33 * 4);
              fVar11 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar13 = pfVar5[2];
              fVar14 = pfVar5[3];
              pfVar5 = (float *)(lVar43 + uVar33 * 4);
              fVar15 = pfVar5[1];
              fVar16 = pfVar5[2];
              fVar17 = pfVar5[3];
              pfVar3 = (float *)(lVar43 + 0x10 + uVar33 * 4);
              fVar18 = *pfVar3;
              fVar19 = pfVar3[1];
              fVar20 = pfVar3[2];
              fVar21 = pfVar3[3];
              pfVar3 = (float *)(uVar31 + uVar33 * 4);
              fVar22 = pfVar3[1];
              fVar23 = pfVar3[2];
              fVar24 = pfVar3[3];
              pfVar4 = (float *)(uVar31 + 0x10 + uVar33 * 4);
              fVar25 = *pfVar4;
              fVar26 = pfVar4[1];
              fVar27 = pfVar4[2];
              fVar28 = pfVar4[3];
              pfVar4 = (float *)(uVar31 + uVar33 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar48 + fVar15) * fVar6 + fVar22;
              pfVar4[2] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar4[3] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2 = (float *)(uVar31 + 0x10 + uVar33 * 4);
              *pfVar2 = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[1] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[2] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar2[3] = (fVar14 + fVar21) * fVar6 + fVar28;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar44);
          }
          else {
            do {
              pfVar2 = (float *)(lVar34 + uVar33 * 4);
              fVar48 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar5 = (float *)(lVar34 + 0x10 + uVar33 * 4);
              fVar11 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar13 = pfVar5[2];
              fVar14 = pfVar5[3];
              pfVar5 = (float *)(lVar43 + uVar33 * 4);
              fVar15 = pfVar5[1];
              fVar16 = pfVar5[2];
              fVar17 = pfVar5[3];
              pfVar3 = (float *)(lVar43 + 0x10 + uVar33 * 4);
              fVar18 = *pfVar3;
              fVar19 = pfVar3[1];
              fVar20 = pfVar3[2];
              fVar21 = pfVar3[3];
              pfVar3 = (float *)(uVar31 + uVar33 * 4);
              fVar22 = pfVar3[1];
              fVar23 = pfVar3[2];
              fVar24 = pfVar3[3];
              pfVar4 = (float *)(uVar31 + 0x10 + uVar33 * 4);
              fVar25 = *pfVar4;
              fVar26 = pfVar4[1];
              fVar27 = pfVar4[2];
              fVar28 = pfVar4[3];
              pfVar4 = (float *)(uVar31 + uVar33 * 4);
              *pfVar4 = (*pfVar2 + *pfVar5) * fVar6 + *pfVar3;
              pfVar4[1] = (fVar48 + fVar15) * fVar6 + fVar22;
              pfVar4[2] = (fVar9 + fVar16) * fVar6 + fVar23;
              pfVar4[3] = (fVar10 + fVar17) * fVar6 + fVar24;
              pfVar2 = (float *)(uVar31 + 0x10 + uVar33 * 4);
              *pfVar2 = (fVar11 + fVar18) * fVar6 + fVar25;
              pfVar2[1] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar2[2] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar2[3] = (fVar14 + fVar21) * fVar6 + fVar28;
              uVar33 = uVar33 + 8;
            } while (uVar33 < uVar44);
          }
          if (uVar44 + 1 <= param_5) {
            uVar33 = param_5 - uVar44;
            if ((longlong)uVar33 < 4) {
              uVar37 = 0;
            }
            else {
              uVar45 = 0;
              uVar37 = uVar33 & 0xfffffffffffffffc;
              lVar1 = uVar31 + uVar44 * 4;
              do {
                pfVar4 = (float *)(lVar34 + uVar44 * 4 + uVar45 * 4);
                fVar48 = pfVar4[1];
                fVar9 = pfVar4[2];
                fVar10 = pfVar4[3];
                pfVar2 = (float *)(lVar43 + uVar44 * 4 + uVar45 * 4);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                pfVar5 = (float *)(lVar1 + uVar45 * 4);
                fVar14 = pfVar5[1];
                fVar15 = pfVar5[2];
                fVar16 = pfVar5[3];
                pfVar3 = (float *)(lVar1 + uVar45 * 4);
                *pfVar3 = (*pfVar4 + *pfVar2) * fVar6 + *pfVar5;
                pfVar3[1] = (fVar48 + fVar11) * fVar6 + fVar14;
                pfVar3[2] = (fVar9 + fVar12) * fVar6 + fVar15;
                pfVar3[3] = (fVar10 + fVar13) * fVar6 + fVar16;
                uVar45 = uVar45 + 4;
              } while (uVar45 < uVar37);
            }
LAB_1405f8b64:
            if (uVar37 < uVar33) {
              lVar1 = uVar31 + uVar44 * 4;
              do {
                *(float *)(lVar1 + uVar37 * 4) =
                     (*(float *)(lVar34 + uVar44 * 4 + uVar37 * 4) +
                     *(float *)(lVar43 + uVar44 * 4 + uVar37 * 4)) * fVar6 +
                     *(float *)(lVar1 + uVar37 * 4);
                uVar37 = uVar37 + 1;
              } while (uVar37 < uVar33);
            }
          }
        }
        uVar32 = uVar32 + 1;
        pfVar35 = pfVar35 + 1;
        if (iVar36 - 1U <= uVar32) goto LAB_1405f8bde;
      }
      uVar32 = uVar32 + 1;
      pfVar35 = pfVar35 + 1;
    } while (uVar32 < iVar36 - 1U);
  }
LAB_1405f8bde:
  lVar34 = (longlong)param_7;
  fVar6 = param_6[iVar36];
  auVar46 = ZEXT416((uint)fVar6);
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1405f9079:
      uVar31 = 0;
    }
    else {
      uVar40 = lVar34 * param_2 + param_1;
      uVar41 = uVar40 & 0xf;
      if (uVar41 != 0) {
        if ((uVar40 & 3) != 0) goto LAB_1405f9079;
        uVar41 = 0x10 - uVar41 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar41 + 8)) goto LAB_1405f9079;
      lVar43 = param_2 * lVar29 + param_1;
      lVar39 = param_2 * lVar30 + param_1;
      uVar42 = 0;
      uVar31 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          *(float *)(uVar40 + uVar42 * 4) =
               *(float *)(lVar43 + uVar42 * 4) * fVar6 + *(float *)(lVar39 + uVar42 * 4);
          uVar42 = uVar42 + 1;
        } while (uVar42 < uVar41);
      }
      if ((lVar43 + uVar41 * 4 & 0xf) == 0) {
        auVar49._4_4_ = fVar6;
        auVar49._0_4_ = fVar6;
        auVar49._8_4_ = fVar6;
        auVar49._12_4_ = fVar6;
        do {
          pfVar35 = (float *)(lVar43 + uVar41 * 4);
          fVar48 = pfVar35[1];
          fVar9 = pfVar35[2];
          fVar10 = pfVar35[3];
          pfVar2 = (float *)(lVar43 + 0x10 + uVar41 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar2 = (float *)(lVar39 + uVar41 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar5 = (float *)(lVar39 + 0x10 + uVar41 * 4);
          fVar18 = *pfVar5;
          fVar19 = pfVar5[1];
          fVar20 = pfVar5[2];
          fVar21 = pfVar5[3];
          pfVar5 = (float *)(uVar40 + uVar41 * 4);
          *pfVar5 = *pfVar2 + *pfVar35 * fVar6;
          pfVar5[1] = fVar15 + fVar48 * fVar6;
          pfVar5[2] = fVar16 + fVar9 * fVar6;
          pfVar5[3] = fVar17 + fVar10 * fVar6;
          pfVar35 = (float *)(uVar40 + 0x10 + uVar41 * 4);
          *pfVar35 = fVar18 + fVar11 * fVar6;
          pfVar35[1] = fVar19 + fVar12 * fVar6;
          pfVar35[2] = fVar20 + fVar13 * fVar6;
          pfVar35[3] = fVar21 + fVar14 * fVar6;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar31);
      }
      else {
        auVar49._4_4_ = fVar6;
        auVar49._0_4_ = fVar6;
        auVar49._8_4_ = fVar6;
        auVar49._12_4_ = fVar6;
        do {
          pfVar35 = (float *)(lVar43 + uVar41 * 4);
          fVar48 = pfVar35[1];
          fVar9 = pfVar35[2];
          fVar10 = pfVar35[3];
          pfVar2 = (float *)(lVar43 + 0x10 + uVar41 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar2 = (float *)(lVar39 + uVar41 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar5 = (float *)(lVar39 + 0x10 + uVar41 * 4);
          fVar18 = *pfVar5;
          fVar19 = pfVar5[1];
          fVar20 = pfVar5[2];
          fVar21 = pfVar5[3];
          pfVar5 = (float *)(uVar40 + uVar41 * 4);
          *pfVar5 = *pfVar2 + *pfVar35 * fVar6;
          pfVar5[1] = fVar15 + fVar48 * fVar6;
          pfVar5[2] = fVar16 + fVar9 * fVar6;
          pfVar5[3] = fVar17 + fVar10 * fVar6;
          pfVar35 = (float *)(uVar40 + 0x10 + uVar41 * 4);
          *pfVar35 = fVar18 + fVar11 * fVar6;
          pfVar35[1] = fVar19 + fVar12 * fVar6;
          pfVar35[2] = fVar20 + fVar13 * fVar6;
          pfVar35[3] = fVar21 + fVar14 * fVar6;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar31);
      }
    }
    uVar41 = 0;
    if (uVar31 + 1 <= param_5) {
      do {
        fVar48 = *(float *)(lVar29 * param_2 + param_1 + uVar31 * 4 + uVar41 * 4) * fVar6 +
                 *(float *)(lVar30 * param_2 + param_1 + uVar31 * 4 + uVar41 * 4);
        auVar49 = ZEXT416((uint)fVar48);
        *(float *)(lVar34 * param_2 + param_1 + uVar31 * 4 + uVar41 * 4) = fVar48;
        uVar41 = uVar41 + 1;
      } while (uVar41 < param_5 - uVar31);
    }
  }
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar41 = param_4 & 0xf;
      if (uVar41 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1405f9087;
        uVar41 = 0x10 - uVar41 >> 1;
      }
      if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
        lVar29 = lVar34 * param_2 + param_1;
        uVar31 = 0;
        uVar40 = param_5 - (param_5 - uVar41 & 7);
        if (uVar41 != 0) {
          do {
            iVar36 = (int)ROUND(*(float *)(lVar29 + uVar31 * 4));
            if (0x7ffe < iVar36) {
              iVar36 = 0x7fff;
            }
            uVar38 = (undefined2)iVar36;
            if (iVar36 < -0x7fff) {
              uVar38 = 0x8000;
            }
            *(undefined2 *)(param_4 + uVar31 * 2) = uVar38;
            uVar31 = uVar31 + 1;
          } while (uVar31 < uVar41);
        }
        if ((lVar29 + uVar41 * 4 & 0xf) == 0) {
          do {
            pfVar35 = (float *)(lVar29 + uVar41 * 4);
            auVar52._0_4_ = (int)*pfVar35;
            auVar52._4_4_ = (int)pfVar35[1];
            auVar52._8_4_ = (int)pfVar35[2];
            auVar52._12_4_ = (int)pfVar35[3];
            pfVar35 = (float *)(lVar29 + 0x10 + uVar41 * 4);
            auVar46._0_4_ = (int)*pfVar35;
            auVar46._4_4_ = (int)pfVar35[1];
            auVar46._8_4_ = (int)pfVar35[2];
            auVar46._12_4_ = (int)pfVar35[3];
            auVar49 = packssdw(auVar52,auVar46);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar49;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar40);
        }
        else {
          do {
            auVar46 = lddqu(auVar46,*(undefined1 (*) [16])(lVar29 + uVar41 * 4));
            auVar49 = lddqu(auVar49,*(undefined1 (*) [16])(lVar29 + 0x10 + uVar41 * 4));
            auVar53._0_4_ = (int)auVar46._0_4_;
            auVar53._4_4_ = (int)auVar46._4_4_;
            auVar53._8_4_ = (int)auVar46._8_4_;
            auVar53._12_4_ = (int)auVar46._12_4_;
            auVar8._4_4_ = (int)auVar49._4_4_;
            auVar8._0_4_ = (int)auVar49._0_4_;
            auVar8._8_4_ = (int)auVar49._8_4_;
            auVar8._12_4_ = (int)auVar49._12_4_;
            auVar52 = packssdw(auVar53,auVar8);
            *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar52;
            uVar41 = uVar41 + 8;
          } while (uVar41 < uVar40);
        }
        goto LAB_1405f901e;
      }
    }
LAB_1405f9087:
    uVar40 = 0;
LAB_1405f901e:
    if (param_5 <= uVar40) {
      return;
    }
    do {
      iVar36 = (int)ROUND(*(float *)(param_1 + param_2 * lVar34 + uVar40 * 4));
      if (0x7ffe < iVar36) {
        iVar36 = 0x7fff;
      }
      uVar38 = (undefined2)iVar36;
      if (iVar36 < -0x7fff) {
        uVar38 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar40 * 2) = uVar38;
      uVar40 = uVar40 + 1;
    } while (uVar40 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar41 = param_4 & 0xf;
    if (uVar41 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1405f9080;
      uVar41 = 0x10 - uVar41 >> 1;
    }
    if ((longlong)(uVar41 + 8) <= (longlong)param_5) {
      lVar29 = lVar34 * param_2 + param_1;
      uVar31 = 0;
      uVar40 = param_5 - (param_5 - uVar41 & 7);
      if (uVar41 != 0) {
        do {
          iVar36 = (int)ROUND(*(float *)(lVar29 + uVar31 * 4));
          if (0x7ffe < iVar36) {
            iVar36 = 0x7fff;
          }
          uVar38 = (undefined2)iVar36;
          if (iVar36 < -0x7fff) {
            uVar38 = 0x8000;
          }
          *(undefined2 *)(param_4 + uVar31 * 2) = uVar38;
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar41);
      }
      if ((lVar29 + uVar41 * 4 & 0xf) == 0) {
        do {
          pfVar35 = (float *)(lVar29 + uVar41 * 4);
          auVar50._0_4_ = (int)*pfVar35;
          auVar50._4_4_ = (int)pfVar35[1];
          auVar50._8_4_ = (int)pfVar35[2];
          auVar50._12_4_ = (int)pfVar35[3];
          pfVar35 = (float *)(lVar29 + 0x10 + uVar41 * 4);
          auVar47._0_4_ = (int)*pfVar35;
          auVar47._4_4_ = (int)pfVar35[1];
          auVar47._8_4_ = (int)pfVar35[2];
          auVar47._12_4_ = (int)pfVar35[3];
          auVar49 = packssdw(auVar50,auVar47);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar49;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar40);
      }
      else {
        do {
          auVar46 = lddqu(auVar46,*(undefined1 (*) [16])(lVar29 + uVar41 * 4));
          auVar49 = lddqu(auVar49,*(undefined1 (*) [16])(lVar29 + 0x10 + uVar41 * 4));
          auVar51._0_4_ = (int)auVar46._0_4_;
          auVar51._4_4_ = (int)auVar46._4_4_;
          auVar51._8_4_ = (int)auVar46._8_4_;
          auVar51._12_4_ = (int)auVar46._12_4_;
          auVar7._4_4_ = (int)auVar49._4_4_;
          auVar7._0_4_ = (int)auVar49._0_4_;
          auVar7._8_4_ = (int)auVar49._8_4_;
          auVar7._12_4_ = (int)auVar49._12_4_;
          auVar52 = packssdw(auVar51,auVar7);
          *(undefined1 (*) [16])(param_4 + uVar41 * 2) = auVar52;
          uVar41 = uVar41 + 8;
        } while (uVar41 < uVar40);
      }
      goto LAB_1405f8ebe;
    }
  }
LAB_1405f9080:
  uVar40 = 0;
LAB_1405f8ebe:
  if (uVar40 < param_5) {
    do {
      iVar36 = (int)ROUND(*(float *)(param_1 + param_2 * lVar34 + uVar40 * 4));
      if (0x7ffe < iVar36) {
        iVar36 = 0x7fff;
      }
      uVar38 = (undefined2)iVar36;
      if (iVar36 < -0x7fff) {
        uVar38 = 0x8000;
      }
      *(undefined2 *)(param_4 + uVar40 * 2) = uVar38;
      uVar40 = uVar40 + 1;
    } while (uVar40 < param_5);
  }
  return;
}

