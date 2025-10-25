
void FUN_1407c60a0(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,float *param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float *pfVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  undefined2 uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  float fVar49;
  undefined1 in_XMM0 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  lVar33 = (longlong)param_3;
  uVar44 = (ulonglong)param_7;
  iVar39 = param_7 >> 1;
  lVar34 = lVar33 - iVar39;
  lVar34 = (lVar34 >> 0x3f & uVar44) + lVar34;
  if (lVar34 == 0) {
    uVar47 = 0;
    uVar43 = uVar44;
  }
  else {
    uVar47 = (ulonglong)(int)lVar34;
    uVar43 = uVar47;
  }
  lVar35 = uVar43 - 1;
  fVar6 = *param_6;
  uVar43 = uVar47 + 1;
  if (uVar47 + 1 == uVar44) {
    uVar43 = 0;
  }
  lVar41 = (longlong)(int)lVar35 + -1;
  if (SCARRY8((longlong)(int)lVar35,-1) != lVar41 < 0) {
    lVar41 = uVar44 - 1;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407c6b46:
      uVar37 = 0;
      if (param_5 == 0) goto LAB_1407c631f;
      uVar47 = 0;
      uVar44 = param_5;
    }
    else {
      uVar47 = param_2 * lVar34 + param_1;
      uVar44 = uVar47 & 0xf;
      if (uVar44 != 0) {
        if ((uVar47 & 3) != 0) goto LAB_1407c6b46;
        uVar44 = 0x10 - uVar44 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar44 + 8)) goto LAB_1407c6b46;
      uVar37 = param_5 - (param_5 - uVar44 & 7);
      lVar45 = param_2 * lVar35 + param_1;
      uVar48 = 0;
      if (uVar44 != 0) {
        do {
          *(float *)(uVar47 + uVar48 * 4) =
               (*(float *)(uVar47 + uVar48 * 4) + *(float *)(lVar45 + uVar48 * 4)) * fVar6;
          uVar48 = uVar48 + 1;
        } while (uVar48 < uVar44);
      }
      if ((lVar45 + uVar44 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(uVar47 + uVar44 * 4);
          fVar49 = pfVar4[1];
          fVar12 = pfVar4[2];
          fVar13 = pfVar4[3];
          pfVar38 = (float *)(uVar47 + 0x10 + uVar44 * 4);
          fVar14 = *pfVar38;
          fVar15 = pfVar38[1];
          fVar16 = pfVar38[2];
          fVar17 = pfVar38[3];
          pfVar38 = (float *)(lVar45 + uVar44 * 4);
          fVar18 = pfVar38[1];
          fVar19 = pfVar38[2];
          fVar20 = pfVar38[3];
          pfVar1 = (float *)(lVar45 + 0x10 + uVar44 * 4);
          fVar21 = *pfVar1;
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar1 = (float *)(uVar47 + uVar44 * 4);
          *pfVar1 = (*pfVar4 + *pfVar38) * fVar6;
          pfVar1[1] = (fVar49 + fVar18) * fVar6;
          pfVar1[2] = (fVar12 + fVar19) * fVar6;
          pfVar1[3] = (fVar13 + fVar20) * fVar6;
          pfVar38 = (float *)(uVar47 + 0x10 + uVar44 * 4);
          *pfVar38 = (fVar14 + fVar21) * fVar6;
          pfVar38[1] = (fVar15 + fVar22) * fVar6;
          pfVar38[2] = (fVar16 + fVar23) * fVar6;
          pfVar38[3] = (fVar17 + fVar24) * fVar6;
          uVar44 = uVar44 + 8;
        } while (uVar44 < uVar37);
      }
      else {
        do {
          pfVar38 = (float *)(lVar45 + uVar44 * 4);
          fVar49 = pfVar38[1];
          fVar12 = pfVar38[2];
          fVar13 = pfVar38[3];
          pfVar1 = (float *)(lVar45 + 0x10 + uVar44 * 4);
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar4 = (float *)(uVar47 + uVar44 * 4);
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar1 = (float *)(uVar47 + 0x10 + uVar44 * 4);
          fVar21 = *pfVar1;
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar1 = (float *)(uVar47 + uVar44 * 4);
          *pfVar1 = (*pfVar38 + *pfVar4) * fVar6;
          pfVar1[1] = (fVar49 + fVar18) * fVar6;
          pfVar1[2] = (fVar12 + fVar19) * fVar6;
          pfVar1[3] = (fVar13 + fVar20) * fVar6;
          pfVar38 = (float *)(uVar47 + 0x10 + uVar44 * 4);
          *pfVar38 = (fVar14 + fVar21) * fVar6;
          pfVar38[1] = (fVar15 + fVar22) * fVar6;
          pfVar38[2] = (fVar16 + fVar23) * fVar6;
          pfVar38[3] = (fVar17 + fVar24) * fVar6;
          uVar44 = uVar44 + 8;
        } while (uVar44 < uVar37);
      }
      in_XMM0._4_4_ = fVar6;
      in_XMM0._0_4_ = fVar6;
      in_XMM0._8_4_ = fVar6;
      in_XMM0._12_4_ = fVar6;
      if (param_5 < uVar37 + 1) goto LAB_1407c631f;
      uVar44 = param_5 - uVar37;
      if ((longlong)uVar44 < 2) {
        uVar47 = 0;
      }
      else {
        lVar5 = uVar47 + uVar37 * 4;
        uVar48 = 0;
        uVar47 = uVar44 & 0xfffffffffffffffe;
        lVar46 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar46 + lVar5);
          uVar48 = uVar48 + 2;
          uVar8 = *(undefined8 *)(lVar46 + lVar45 + uVar37 * 4);
          pfVar38 = (float *)(lVar46 + lVar5);
          *pfVar38 = ((float)uVar7 + (float)uVar8) * fVar6;
          pfVar38[1] = ((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)) *
                       fVar6;
          lVar46 = lVar46 + 8;
        } while (uVar48 < uVar47);
      }
    }
    if (uVar47 < uVar44) {
      lVar45 = param_2 * lVar34 + param_1 + uVar37 * 4;
      do {
        fVar49 = (*(float *)(lVar45 + uVar47 * 4) +
                 *(float *)(lVar35 * param_2 + param_1 + uVar37 * 4 + uVar47 * 4)) * fVar6;
        in_XMM0 = ZEXT416((uint)fVar49);
        *(float *)(lVar45 + uVar47 * 4) = fVar49;
        uVar47 = uVar47 + 1;
      } while (uVar47 < uVar44);
    }
  }
LAB_1407c631f:
  if (1 < iVar39) {
    uVar32 = 0;
    uVar47 = param_2 * lVar34 + param_1;
    uVar44 = uVar47 & 0xf;
    pfVar38 = param_6;
    do {
      while( true ) {
        lVar35 = param_2 * uVar43;
        fVar6 = pfVar38[1];
        uVar43 = uVar43 + 1;
        if (uVar43 == (longlong)param_7) {
          uVar43 = 0;
        }
        lVar35 = lVar35 + param_1;
        lVar45 = param_2 * lVar41 + param_1;
        lVar41 = lVar41 + -1;
        if (lVar41 < 0) {
          lVar41 = (longlong)param_7 + -1;
        }
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar37 = uVar44, uVar44 != 0 && (uVar37 = 0x10 - uVar44 >> 2, (uVar47 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar37 + 8))))) {
          uVar48 = 0;
          if (param_5 != 0) {
            uVar40 = 0;
            uVar37 = param_5;
            goto LAB_1407c658e;
          }
        }
        else {
          uVar40 = 0;
          uVar48 = param_5 - (param_5 - uVar37 & 7);
          if (uVar37 != 0) {
            do {
              *(float *)(uVar47 + uVar40 * 4) =
                   (*(float *)(lVar35 + uVar40 * 4) + *(float *)(lVar45 + uVar40 * 4)) * fVar6 +
                   *(float *)(uVar47 + uVar40 * 4);
              uVar40 = uVar40 + 1;
            } while (uVar40 < uVar37);
          }
          if ((lVar45 + uVar37 * 4 & 0xf) == 0) {
            do {
              pfVar1 = (float *)(lVar35 + uVar37 * 4);
              fVar49 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar4 = (float *)(lVar35 + 0x10 + uVar37 * 4);
              fVar14 = *pfVar4;
              fVar15 = pfVar4[1];
              fVar16 = pfVar4[2];
              fVar17 = pfVar4[3];
              pfVar4 = (float *)(lVar45 + uVar37 * 4);
              fVar18 = pfVar4[1];
              fVar19 = pfVar4[2];
              fVar20 = pfVar4[3];
              pfVar2 = (float *)(lVar45 + 0x10 + uVar37 * 4);
              fVar21 = *pfVar2;
              fVar22 = pfVar2[1];
              fVar23 = pfVar2[2];
              fVar24 = pfVar2[3];
              pfVar2 = (float *)(uVar47 + uVar37 * 4);
              fVar25 = pfVar2[1];
              fVar26 = pfVar2[2];
              fVar27 = pfVar2[3];
              pfVar3 = (float *)(uVar47 + 0x10 + uVar37 * 4);
              fVar28 = *pfVar3;
              fVar29 = pfVar3[1];
              fVar30 = pfVar3[2];
              fVar31 = pfVar3[3];
              pfVar3 = (float *)(uVar47 + uVar37 * 4);
              *pfVar3 = (*pfVar1 + *pfVar4) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar49 + fVar18) * fVar6 + fVar25;
              pfVar3[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar3[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar1 = (float *)(uVar47 + 0x10 + uVar37 * 4);
              *pfVar1 = (fVar14 + fVar21) * fVar6 + fVar28;
              pfVar1[1] = (fVar15 + fVar22) * fVar6 + fVar29;
              pfVar1[2] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar1[3] = (fVar17 + fVar24) * fVar6 + fVar31;
              uVar37 = uVar37 + 8;
            } while (uVar37 < uVar48);
          }
          else {
            do {
              pfVar1 = (float *)(lVar35 + uVar37 * 4);
              fVar49 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar4 = (float *)(lVar35 + 0x10 + uVar37 * 4);
              fVar14 = *pfVar4;
              fVar15 = pfVar4[1];
              fVar16 = pfVar4[2];
              fVar17 = pfVar4[3];
              pfVar4 = (float *)(lVar45 + uVar37 * 4);
              fVar18 = pfVar4[1];
              fVar19 = pfVar4[2];
              fVar20 = pfVar4[3];
              pfVar2 = (float *)(lVar45 + 0x10 + uVar37 * 4);
              fVar21 = *pfVar2;
              fVar22 = pfVar2[1];
              fVar23 = pfVar2[2];
              fVar24 = pfVar2[3];
              pfVar2 = (float *)(uVar47 + uVar37 * 4);
              fVar25 = pfVar2[1];
              fVar26 = pfVar2[2];
              fVar27 = pfVar2[3];
              pfVar3 = (float *)(uVar47 + 0x10 + uVar37 * 4);
              fVar28 = *pfVar3;
              fVar29 = pfVar3[1];
              fVar30 = pfVar3[2];
              fVar31 = pfVar3[3];
              pfVar3 = (float *)(uVar47 + uVar37 * 4);
              *pfVar3 = (*pfVar1 + *pfVar4) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar49 + fVar18) * fVar6 + fVar25;
              pfVar3[2] = (fVar12 + fVar19) * fVar6 + fVar26;
              pfVar3[3] = (fVar13 + fVar20) * fVar6 + fVar27;
              pfVar1 = (float *)(uVar47 + 0x10 + uVar37 * 4);
              *pfVar1 = (fVar14 + fVar21) * fVar6 + fVar28;
              pfVar1[1] = (fVar15 + fVar22) * fVar6 + fVar29;
              pfVar1[2] = (fVar16 + fVar23) * fVar6 + fVar30;
              pfVar1[3] = (fVar17 + fVar24) * fVar6 + fVar31;
              uVar37 = uVar37 + 8;
            } while (uVar37 < uVar48);
          }
          in_XMM0._4_4_ = fVar6;
          in_XMM0._0_4_ = fVar6;
          in_XMM0._8_4_ = fVar6;
          in_XMM0._12_4_ = fVar6;
          if (uVar48 + 1 <= param_5) {
            uVar37 = param_5 - uVar48;
            if ((longlong)uVar37 < 2) {
              uVar40 = 0;
            }
            else {
              uVar36 = 0;
              uVar40 = uVar37 & 0xfffffffffffffffe;
              lVar5 = uVar47 + uVar48 * 4;
              lVar46 = 0;
              do {
                uVar7 = *(undefined8 *)(lVar46 + lVar35 + uVar48 * 4);
                uVar36 = uVar36 + 2;
                uVar8 = *(undefined8 *)(lVar46 + lVar45 + uVar48 * 4);
                uVar9 = *(undefined8 *)(lVar46 + lVar5);
                *(ulonglong *)(lVar46 + lVar5) =
                     CONCAT44((float)((ulonglong)uVar9 >> 0x20) +
                              ((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)
                              ) * fVar6,(float)uVar9 + ((float)uVar7 + (float)uVar8) * fVar6);
                lVar46 = lVar46 + 8;
              } while (uVar36 < uVar40);
            }
LAB_1407c658e:
            if (uVar40 < uVar37) {
              lVar5 = uVar47 + uVar48 * 4;
              do {
                fVar49 = (*(float *)(lVar35 + uVar48 * 4 + uVar40 * 4) +
                         *(float *)(lVar45 + uVar48 * 4 + uVar40 * 4)) * fVar6 +
                         *(float *)(lVar5 + uVar40 * 4);
                in_XMM0 = ZEXT416((uint)fVar49);
                *(float *)(lVar5 + uVar40 * 4) = fVar49;
                uVar40 = uVar40 + 1;
              } while (uVar40 < uVar37);
            }
          }
        }
        uVar32 = uVar32 + 1;
        pfVar38 = pfVar38 + 1;
        if (iVar39 - 1U <= uVar32) goto LAB_1407c6620;
      }
      uVar32 = uVar32 + 1;
      pfVar38 = pfVar38 + 1;
    } while (uVar32 < iVar39 - 1U);
  }
LAB_1407c6620:
  lVar35 = (longlong)param_7;
  fVar6 = param_6[iVar39];
  auVar51 = ZEXT416((uint)fVar6);
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407c6b1d:
      uVar47 = 0;
      if (param_5 == 0) goto LAB_1407c683d;
      uVar37 = 0;
      uVar43 = param_5;
    }
    else {
      uVar44 = lVar35 * param_2 + param_1;
      uVar43 = uVar44 & 0xf;
      if (uVar43 != 0) {
        if ((uVar44 & 3) != 0) goto LAB_1407c6b1d;
        uVar43 = 0x10 - uVar43 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar43 + 8)) goto LAB_1407c6b1d;
      uVar47 = param_5 - (param_5 - uVar43 & 7);
      lVar41 = param_2 * lVar33 + param_1;
      lVar45 = param_2 * lVar34 + param_1;
      uVar37 = 0;
      if (uVar43 != 0) {
        do {
          *(float *)(uVar44 + uVar37 * 4) =
               *(float *)(lVar41 + uVar37 * 4) * fVar6 + *(float *)(lVar45 + uVar37 * 4);
          uVar37 = uVar37 + 1;
        } while (uVar37 < uVar43);
      }
      if ((lVar41 + uVar43 * 4 & 0xf) == 0) {
        do {
          pfVar38 = (float *)(lVar41 + uVar43 * 4);
          fVar49 = pfVar38[1];
          fVar12 = pfVar38[2];
          fVar13 = pfVar38[3];
          pfVar1 = (float *)(lVar41 + 0x10 + uVar43 * 4);
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar1 = (float *)(lVar45 + uVar43 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar4 = (float *)(lVar45 + 0x10 + uVar43 * 4);
          fVar21 = *pfVar4;
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar4 = (float *)(uVar44 + uVar43 * 4);
          *pfVar4 = *pfVar1 + *pfVar38 * fVar6;
          pfVar4[1] = fVar18 + fVar49 * fVar6;
          pfVar4[2] = fVar19 + fVar12 * fVar6;
          pfVar4[3] = fVar20 + fVar13 * fVar6;
          pfVar38 = (float *)(uVar44 + 0x10 + uVar43 * 4);
          *pfVar38 = fVar21 + fVar14 * fVar6;
          pfVar38[1] = fVar22 + fVar15 * fVar6;
          pfVar38[2] = fVar23 + fVar16 * fVar6;
          pfVar38[3] = fVar24 + fVar17 * fVar6;
          uVar43 = uVar43 + 8;
        } while (uVar43 < uVar47);
      }
      else {
        do {
          pfVar38 = (float *)(lVar41 + uVar43 * 4);
          fVar49 = pfVar38[1];
          fVar12 = pfVar38[2];
          fVar13 = pfVar38[3];
          pfVar1 = (float *)(lVar41 + 0x10 + uVar43 * 4);
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar1 = (float *)(lVar45 + uVar43 * 4);
          fVar18 = pfVar1[1];
          fVar19 = pfVar1[2];
          fVar20 = pfVar1[3];
          pfVar4 = (float *)(lVar45 + 0x10 + uVar43 * 4);
          fVar21 = *pfVar4;
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar4 = (float *)(uVar44 + uVar43 * 4);
          *pfVar4 = *pfVar1 + *pfVar38 * fVar6;
          pfVar4[1] = fVar18 + fVar49 * fVar6;
          pfVar4[2] = fVar19 + fVar12 * fVar6;
          pfVar4[3] = fVar20 + fVar13 * fVar6;
          pfVar38 = (float *)(uVar44 + 0x10 + uVar43 * 4);
          *pfVar38 = fVar21 + fVar14 * fVar6;
          pfVar38[1] = fVar22 + fVar15 * fVar6;
          pfVar38[2] = fVar23 + fVar16 * fVar6;
          pfVar38[3] = fVar24 + fVar17 * fVar6;
          uVar43 = uVar43 + 8;
        } while (uVar43 < uVar47);
      }
      in_XMM0._4_4_ = fVar6;
      in_XMM0._0_4_ = fVar6;
      in_XMM0._8_4_ = fVar6;
      in_XMM0._12_4_ = fVar6;
      if (param_5 < uVar47 + 1) goto LAB_1407c683d;
      uVar43 = param_5 - uVar47;
      if ((longlong)uVar43 < 4) {
        uVar37 = 0;
      }
      else {
        uVar48 = 0;
        uVar37 = uVar43 & 0xfffffffffffffffc;
        do {
          pfVar38 = (float *)(lVar41 + uVar47 * 4 + uVar48 * 4);
          fVar49 = pfVar38[1];
          fVar12 = pfVar38[2];
          fVar13 = pfVar38[3];
          pfVar1 = (float *)(lVar45 + uVar47 * 4 + uVar48 * 4);
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar4 = (float *)(uVar44 + uVar47 * 4 + uVar48 * 4);
          *pfVar4 = *pfVar1 + *pfVar38 * fVar6;
          pfVar4[1] = fVar14 + fVar49 * fVar6;
          pfVar4[2] = fVar15 + fVar12 * fVar6;
          pfVar4[3] = fVar16 + fVar13 * fVar6;
          uVar48 = uVar48 + 4;
        } while (uVar48 < uVar37);
      }
    }
    if (uVar37 < uVar43) {
      do {
        fVar49 = *(float *)(lVar33 * param_2 + param_1 + uVar47 * 4 + uVar37 * 4) * fVar6 +
                 *(float *)(lVar34 * param_2 + param_1 + uVar47 * 4 + uVar37 * 4);
        in_XMM0 = ZEXT416((uint)fVar49);
        *(float *)(lVar35 * param_2 + param_1 + uVar47 * 4 + uVar37 * 4) = fVar49;
        uVar37 = uVar37 + 1;
      } while (uVar37 < uVar43);
    }
  }
LAB_1407c683d:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar44 = param_4 & 0xf;
      if (uVar44 != 0) {
        if ((param_4 & 1) != 0) goto LAB_1407c6b3a;
        uVar44 = 0x10 - uVar44 >> 1;
      }
      if ((longlong)(uVar44 + 8) <= (longlong)param_5) {
        uVar43 = param_5 - (param_5 - uVar44 & 7);
        lVar33 = lVar35 * param_2 + param_1;
        uVar47 = 0;
        if (uVar44 != 0) {
          do {
            iVar39 = (int)ROUND(*(float *)(lVar33 + uVar47 * 4));
            if (0xfffe < iVar39) {
              iVar39 = 0xffff;
            }
            uVar42 = (undefined2)iVar39;
            if (iVar39 < 1) {
              uVar42 = 0;
            }
            *(undefined2 *)(param_4 + uVar47 * 2) = uVar42;
            uVar47 = uVar47 + 1;
          } while (uVar47 < uVar44);
        }
        if ((lVar33 + uVar44 * 4 & 0xf) == 0) {
          do {
            pfVar38 = (float *)(lVar33 + uVar44 * 4);
            auVar54._0_4_ = (int)*pfVar38;
            auVar54._4_4_ = (int)pfVar38[1];
            auVar54._8_4_ = (int)pfVar38[2];
            auVar54._12_4_ = (int)pfVar38[3];
            pfVar38 = (float *)(lVar33 + 0x10 + uVar44 * 4);
            auVar51._0_4_ = (int)*pfVar38;
            auVar51._4_4_ = (int)pfVar38[1];
            auVar51._8_4_ = (int)pfVar38[2];
            auVar51._12_4_ = (int)pfVar38[3];
            auVar51 = packusdw(auVar54,auVar51);
            *(undefined1 (*) [16])(param_4 + uVar44 * 2) = auVar51;
            uVar44 = uVar44 + 8;
          } while (uVar44 < uVar43);
        }
        else {
          do {
            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(lVar33 + uVar44 * 4));
            auVar51 = lddqu(auVar51,*(undefined1 (*) [16])(lVar33 + 0x10 + uVar44 * 4));
            auVar55._0_4_ = (int)in_XMM0._0_4_;
            auVar55._4_4_ = (int)in_XMM0._4_4_;
            auVar55._8_4_ = (int)in_XMM0._8_4_;
            auVar55._12_4_ = (int)in_XMM0._12_4_;
            auVar11._4_4_ = (int)auVar51._4_4_;
            auVar11._0_4_ = (int)auVar51._0_4_;
            auVar11._8_4_ = (int)auVar51._8_4_;
            auVar11._12_4_ = (int)auVar51._12_4_;
            auVar54 = packusdw(auVar55,auVar11);
            *(undefined1 (*) [16])(param_4 + uVar44 * 2) = auVar54;
            uVar44 = uVar44 + 8;
          } while (uVar44 < uVar43);
        }
        goto LAB_1407c6abe;
      }
    }
LAB_1407c6b3a:
    uVar43 = 0;
LAB_1407c6abe:
    if (param_5 <= uVar43) {
      return;
    }
    do {
      iVar39 = (int)ROUND(*(float *)(param_1 + param_2 * lVar35 + uVar43 * 4));
      if (0xfffe < iVar39) {
        iVar39 = 0xffff;
      }
      uVar42 = (undefined2)iVar39;
      if (iVar39 < 1) {
        uVar42 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2) = uVar42;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar44 = param_4 & 0xf;
    if (uVar44 != 0) {
      if ((param_4 & 1) != 0) goto LAB_1407c6b33;
      uVar44 = 0x10 - uVar44 >> 1;
    }
    if ((longlong)(uVar44 + 8) <= (longlong)param_5) {
      uVar43 = param_5 - (param_5 - uVar44 & 7);
      lVar33 = lVar35 * param_2 + param_1;
      uVar47 = 0;
      if (uVar44 != 0) {
        do {
          iVar39 = (int)ROUND(*(float *)(lVar33 + uVar47 * 4));
          if (0xfffe < iVar39) {
            iVar39 = 0xffff;
          }
          uVar42 = (undefined2)iVar39;
          if (iVar39 < 1) {
            uVar42 = 0;
          }
          *(undefined2 *)(param_4 + uVar47 * 2) = uVar42;
          uVar47 = uVar47 + 1;
        } while (uVar47 < uVar44);
      }
      if ((lVar33 + uVar44 * 4 & 0xf) == 0) {
        do {
          pfVar38 = (float *)(lVar33 + uVar44 * 4);
          auVar52._0_4_ = (int)*pfVar38;
          auVar52._4_4_ = (int)pfVar38[1];
          auVar52._8_4_ = (int)pfVar38[2];
          auVar52._12_4_ = (int)pfVar38[3];
          pfVar38 = (float *)(lVar33 + 0x10 + uVar44 * 4);
          auVar50._0_4_ = (int)*pfVar38;
          auVar50._4_4_ = (int)pfVar38[1];
          auVar50._8_4_ = (int)pfVar38[2];
          auVar50._12_4_ = (int)pfVar38[3];
          auVar51 = packusdw(auVar52,auVar50);
          *(undefined1 (*) [16])(param_4 + uVar44 * 2) = auVar51;
          uVar44 = uVar44 + 8;
        } while (uVar44 < uVar43);
      }
      else {
        do {
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(lVar33 + uVar44 * 4));
          auVar51 = lddqu(auVar51,*(undefined1 (*) [16])(lVar33 + 0x10 + uVar44 * 4));
          auVar53._0_4_ = (int)in_XMM0._0_4_;
          auVar53._4_4_ = (int)in_XMM0._4_4_;
          auVar53._8_4_ = (int)in_XMM0._8_4_;
          auVar53._12_4_ = (int)in_XMM0._12_4_;
          auVar10._4_4_ = (int)auVar51._4_4_;
          auVar10._0_4_ = (int)auVar51._0_4_;
          auVar10._8_4_ = (int)auVar51._8_4_;
          auVar10._12_4_ = (int)auVar51._12_4_;
          auVar54 = packusdw(auVar53,auVar10);
          *(undefined1 (*) [16])(param_4 + uVar44 * 2) = auVar54;
          uVar44 = uVar44 + 8;
        } while (uVar44 < uVar43);
      }
      goto LAB_1407c695e;
    }
  }
LAB_1407c6b33:
  uVar43 = 0;
LAB_1407c695e:
  if (uVar43 < param_5) {
    do {
      iVar39 = (int)ROUND(*(float *)(param_1 + param_2 * lVar35 + uVar43 * 4));
      if (0xfffe < iVar39) {
        iVar39 = 0xffff;
      }
      uVar42 = (undefined2)iVar39;
      if (iVar39 < 1) {
        uVar42 = 0;
      }
      *(undefined2 *)(param_4 + uVar43 * 2) = uVar42;
      uVar43 = uVar43 + 1;
    } while (uVar43 < param_5);
  }
  return;
}

