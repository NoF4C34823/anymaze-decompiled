
void FUN_1407c3fa0(longlong param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
                  float *param_6,int param_7,int param_8)

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
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
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
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  float *pfVar46;
  int iVar47;
  ulonglong uVar48;
  longlong lVar49;
  undefined1 uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  uVar52 = (ulonglong)param_7;
  lVar41 = (longlong)param_3;
  iVar47 = param_7 >> 1;
  lVar42 = lVar41 - iVar47;
  lVar42 = (lVar42 >> 0x3f & uVar52) + lVar42;
  if (lVar42 == 0) {
    uVar55 = 0;
    uVar51 = uVar52;
  }
  else {
    uVar55 = (ulonglong)(int)lVar42;
    uVar51 = uVar55;
  }
  lVar43 = uVar51 - 1;
  fVar6 = *param_6;
  uVar51 = uVar55 + 1;
  if (uVar55 + 1 == uVar52) {
    uVar51 = 0;
  }
  lVar49 = (longlong)(int)lVar43 + -1;
  if (SCARRY8((longlong)(int)lVar43,-1) != lVar49 < 0) {
    lVar49 = uVar52 - 1;
  }
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407c49c4:
      uVar45 = 0;
      if (param_5 == 0) goto LAB_1407c421f;
      uVar55 = 0;
      uVar52 = param_5;
    }
    else {
      uVar55 = param_2 * lVar42 + param_1;
      uVar52 = uVar55 & 0xf;
      if (uVar52 != 0) {
        if ((uVar55 & 3) != 0) goto LAB_1407c49c4;
        uVar52 = 0x10 - uVar52 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar52 + 8)) goto LAB_1407c49c4;
      uVar45 = param_5 - (param_5 - uVar52 & 7);
      lVar53 = param_2 * lVar43 + param_1;
      uVar56 = 0;
      if (uVar52 != 0) {
        do {
          *(float *)(uVar55 + uVar56 * 4) =
               (*(float *)(uVar55 + uVar56 * 4) + *(float *)(lVar53 + uVar56 * 4)) * fVar6;
          uVar56 = uVar56 + 1;
        } while (uVar56 < uVar52);
      }
      if ((lVar53 + uVar52 * 4 & 0xf) == 0) {
        do {
          pfVar4 = (float *)(uVar55 + uVar52 * 4);
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar21 = pfVar4[3];
          pfVar46 = (float *)(uVar55 + 0x10 + uVar52 * 4);
          fVar22 = *pfVar46;
          fVar23 = pfVar46[1];
          fVar24 = pfVar46[2];
          fVar25 = pfVar46[3];
          pfVar46 = (float *)(lVar53 + uVar52 * 4);
          fVar26 = pfVar46[1];
          fVar27 = pfVar46[2];
          fVar28 = pfVar46[3];
          pfVar1 = (float *)(lVar53 + 0x10 + uVar52 * 4);
          fVar29 = *pfVar1;
          fVar30 = pfVar1[1];
          fVar31 = pfVar1[2];
          fVar32 = pfVar1[3];
          pfVar1 = (float *)(uVar55 + uVar52 * 4);
          *pfVar1 = (*pfVar4 + *pfVar46) * fVar6;
          pfVar1[1] = (fVar19 + fVar26) * fVar6;
          pfVar1[2] = (fVar20 + fVar27) * fVar6;
          pfVar1[3] = (fVar21 + fVar28) * fVar6;
          pfVar46 = (float *)(uVar55 + 0x10 + uVar52 * 4);
          *pfVar46 = (fVar22 + fVar29) * fVar6;
          pfVar46[1] = (fVar23 + fVar30) * fVar6;
          pfVar46[2] = (fVar24 + fVar31) * fVar6;
          pfVar46[3] = (fVar25 + fVar32) * fVar6;
          uVar52 = uVar52 + 8;
        } while (uVar52 < uVar45);
      }
      else {
        do {
          pfVar46 = (float *)(lVar53 + uVar52 * 4);
          fVar19 = pfVar46[1];
          fVar20 = pfVar46[2];
          fVar21 = pfVar46[3];
          pfVar1 = (float *)(lVar53 + 0x10 + uVar52 * 4);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar4 = (float *)(uVar55 + uVar52 * 4);
          fVar26 = pfVar4[1];
          fVar27 = pfVar4[2];
          fVar28 = pfVar4[3];
          pfVar1 = (float *)(uVar55 + 0x10 + uVar52 * 4);
          fVar29 = *pfVar1;
          fVar30 = pfVar1[1];
          fVar31 = pfVar1[2];
          fVar32 = pfVar1[3];
          pfVar1 = (float *)(uVar55 + uVar52 * 4);
          *pfVar1 = (*pfVar46 + *pfVar4) * fVar6;
          pfVar1[1] = (fVar19 + fVar26) * fVar6;
          pfVar1[2] = (fVar20 + fVar27) * fVar6;
          pfVar1[3] = (fVar21 + fVar28) * fVar6;
          pfVar46 = (float *)(uVar55 + 0x10 + uVar52 * 4);
          *pfVar46 = (fVar22 + fVar29) * fVar6;
          pfVar46[1] = (fVar23 + fVar30) * fVar6;
          pfVar46[2] = (fVar24 + fVar31) * fVar6;
          pfVar46[3] = (fVar25 + fVar32) * fVar6;
          uVar52 = uVar52 + 8;
        } while (uVar52 < uVar45);
      }
      if (param_5 < uVar45 + 1) goto LAB_1407c421f;
      uVar52 = param_5 - uVar45;
      if ((longlong)uVar52 < 2) {
        uVar55 = 0;
      }
      else {
        lVar5 = uVar55 + uVar45 * 4;
        uVar56 = 0;
        uVar55 = uVar52 & 0xfffffffffffffffe;
        lVar54 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar54 + lVar5);
          uVar56 = uVar56 + 2;
          uVar8 = *(undefined8 *)(lVar54 + lVar53 + uVar45 * 4);
          *(ulonglong *)(lVar54 + lVar5) =
               CONCAT44(((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)) *
                        fVar6,((float)uVar7 + (float)uVar8) * fVar6);
          lVar54 = lVar54 + 8;
        } while (uVar56 < uVar55);
      }
    }
    if (uVar55 < uVar52) {
      lVar53 = param_2 * lVar42 + param_1 + uVar45 * 4;
      do {
        *(float *)(lVar53 + uVar55 * 4) =
             (*(float *)(lVar53 + uVar55 * 4) +
             *(float *)(lVar43 * param_2 + param_1 + uVar45 * 4 + uVar55 * 4)) * fVar6;
        uVar55 = uVar55 + 1;
      } while (uVar55 < uVar52);
    }
  }
LAB_1407c421f:
  if (1 < iVar47) {
    uVar40 = 0;
    uVar55 = param_2 * lVar42 + param_1;
    uVar52 = uVar55 & 0xf;
    pfVar46 = param_6;
    do {
      while( true ) {
        lVar43 = param_2 * uVar51;
        fVar6 = pfVar46[1];
        uVar51 = uVar51 + 1;
        if (uVar51 == (longlong)param_7) {
          uVar51 = 0;
        }
        lVar43 = lVar43 + param_1;
        lVar53 = param_2 * lVar49 + param_1;
        lVar49 = lVar49 + -1;
        if (lVar49 < 0) {
          lVar49 = (longlong)param_7 + -1;
        }
        if ((longlong)param_5 < 1) break;
        if (((longlong)param_5 < 8) ||
           (((uVar45 = uVar52, uVar52 != 0 && (uVar45 = 0x10 - uVar52 >> 2, (uVar55 & 3) != 0)) ||
            ((longlong)param_5 < (longlong)(uVar45 + 8))))) {
          uVar56 = 0;
          if (param_5 != 0) {
            uVar48 = 0;
            uVar45 = param_5;
            goto LAB_1407c448e;
          }
        }
        else {
          uVar48 = 0;
          uVar56 = param_5 - (param_5 - uVar45 & 7);
          if (uVar45 != 0) {
            do {
              *(float *)(uVar55 + uVar48 * 4) =
                   (*(float *)(lVar43 + uVar48 * 4) + *(float *)(lVar53 + uVar48 * 4)) * fVar6 +
                   *(float *)(uVar55 + uVar48 * 4);
              uVar48 = uVar48 + 1;
            } while (uVar48 < uVar45);
          }
          if ((lVar53 + uVar45 * 4 & 0xf) == 0) {
            do {
              pfVar1 = (float *)(lVar43 + uVar45 * 4);
              fVar19 = pfVar1[1];
              fVar20 = pfVar1[2];
              fVar21 = pfVar1[3];
              pfVar4 = (float *)(lVar43 + 0x10 + uVar45 * 4);
              fVar22 = *pfVar4;
              fVar23 = pfVar4[1];
              fVar24 = pfVar4[2];
              fVar25 = pfVar4[3];
              pfVar4 = (float *)(lVar53 + uVar45 * 4);
              fVar26 = pfVar4[1];
              fVar27 = pfVar4[2];
              fVar28 = pfVar4[3];
              pfVar2 = (float *)(lVar53 + 0x10 + uVar45 * 4);
              fVar29 = *pfVar2;
              fVar30 = pfVar2[1];
              fVar31 = pfVar2[2];
              fVar32 = pfVar2[3];
              pfVar2 = (float *)(uVar55 + uVar45 * 4);
              fVar33 = pfVar2[1];
              fVar34 = pfVar2[2];
              fVar35 = pfVar2[3];
              pfVar3 = (float *)(uVar55 + 0x10 + uVar45 * 4);
              fVar36 = *pfVar3;
              fVar37 = pfVar3[1];
              fVar38 = pfVar3[2];
              fVar39 = pfVar3[3];
              pfVar3 = (float *)(uVar55 + uVar45 * 4);
              *pfVar3 = (*pfVar1 + *pfVar4) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar3[2] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar3[3] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar1 = (float *)(uVar55 + 0x10 + uVar45 * 4);
              *pfVar1 = (fVar22 + fVar29) * fVar6 + fVar36;
              pfVar1[1] = (fVar23 + fVar30) * fVar6 + fVar37;
              pfVar1[2] = (fVar24 + fVar31) * fVar6 + fVar38;
              pfVar1[3] = (fVar25 + fVar32) * fVar6 + fVar39;
              uVar45 = uVar45 + 8;
            } while (uVar45 < uVar56);
          }
          else {
            do {
              pfVar1 = (float *)(lVar43 + uVar45 * 4);
              fVar19 = pfVar1[1];
              fVar20 = pfVar1[2];
              fVar21 = pfVar1[3];
              pfVar4 = (float *)(lVar43 + 0x10 + uVar45 * 4);
              fVar22 = *pfVar4;
              fVar23 = pfVar4[1];
              fVar24 = pfVar4[2];
              fVar25 = pfVar4[3];
              pfVar4 = (float *)(lVar53 + uVar45 * 4);
              fVar26 = pfVar4[1];
              fVar27 = pfVar4[2];
              fVar28 = pfVar4[3];
              pfVar2 = (float *)(lVar53 + 0x10 + uVar45 * 4);
              fVar29 = *pfVar2;
              fVar30 = pfVar2[1];
              fVar31 = pfVar2[2];
              fVar32 = pfVar2[3];
              pfVar2 = (float *)(uVar55 + uVar45 * 4);
              fVar33 = pfVar2[1];
              fVar34 = pfVar2[2];
              fVar35 = pfVar2[3];
              pfVar3 = (float *)(uVar55 + 0x10 + uVar45 * 4);
              fVar36 = *pfVar3;
              fVar37 = pfVar3[1];
              fVar38 = pfVar3[2];
              fVar39 = pfVar3[3];
              pfVar3 = (float *)(uVar55 + uVar45 * 4);
              *pfVar3 = (*pfVar1 + *pfVar4) * fVar6 + *pfVar2;
              pfVar3[1] = (fVar19 + fVar26) * fVar6 + fVar33;
              pfVar3[2] = (fVar20 + fVar27) * fVar6 + fVar34;
              pfVar3[3] = (fVar21 + fVar28) * fVar6 + fVar35;
              pfVar1 = (float *)(uVar55 + 0x10 + uVar45 * 4);
              *pfVar1 = (fVar22 + fVar29) * fVar6 + fVar36;
              pfVar1[1] = (fVar23 + fVar30) * fVar6 + fVar37;
              pfVar1[2] = (fVar24 + fVar31) * fVar6 + fVar38;
              pfVar1[3] = (fVar25 + fVar32) * fVar6 + fVar39;
              uVar45 = uVar45 + 8;
            } while (uVar45 < uVar56);
          }
          if (uVar56 + 1 <= param_5) {
            uVar45 = param_5 - uVar56;
            if ((longlong)uVar45 < 2) {
              uVar48 = 0;
            }
            else {
              uVar44 = 0;
              uVar48 = uVar45 & 0xfffffffffffffffe;
              lVar5 = uVar55 + uVar56 * 4;
              lVar54 = 0;
              do {
                uVar7 = *(undefined8 *)(lVar54 + lVar43 + uVar56 * 4);
                uVar44 = uVar44 + 2;
                uVar8 = *(undefined8 *)(lVar54 + lVar53 + uVar56 * 4);
                uVar9 = *(undefined8 *)(lVar54 + lVar5);
                *(ulonglong *)(lVar54 + lVar5) =
                     CONCAT44((float)((ulonglong)uVar9 >> 0x20) +
                              ((float)((ulonglong)uVar7 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)
                              ) * fVar6,(float)uVar9 + ((float)uVar7 + (float)uVar8) * fVar6);
                lVar54 = lVar54 + 8;
              } while (uVar44 < uVar48);
            }
LAB_1407c448e:
            if (uVar48 < uVar45) {
              lVar5 = uVar55 + uVar56 * 4;
              do {
                *(float *)(lVar5 + uVar48 * 4) =
                     (*(float *)(lVar43 + uVar56 * 4 + uVar48 * 4) +
                     *(float *)(lVar53 + uVar56 * 4 + uVar48 * 4)) * fVar6 +
                     *(float *)(lVar5 + uVar48 * 4);
                uVar48 = uVar48 + 1;
              } while (uVar48 < uVar45);
            }
          }
        }
        uVar40 = uVar40 + 1;
        pfVar46 = pfVar46 + 1;
        if (iVar47 - 1U <= uVar40) goto LAB_1407c4520;
      }
      uVar40 = uVar40 + 1;
      pfVar46 = pfVar46 + 1;
    } while (uVar40 < iVar47 - 1U);
  }
LAB_1407c4520:
  lVar43 = (longlong)param_7;
  fVar6 = param_6[iVar47];
  if (0 < (longlong)param_5) {
    if ((longlong)param_5 < 8) {
LAB_1407c499b:
      uVar55 = 0;
      if (param_5 == 0) goto LAB_1407c473d;
      uVar45 = 0;
      uVar51 = param_5;
    }
    else {
      uVar52 = lVar43 * param_2 + param_1;
      uVar51 = uVar52 & 0xf;
      if (uVar51 != 0) {
        if ((uVar52 & 3) != 0) goto LAB_1407c499b;
        uVar51 = 0x10 - uVar51 >> 2;
      }
      if ((longlong)param_5 < (longlong)(uVar51 + 8)) goto LAB_1407c499b;
      uVar55 = param_5 - (param_5 - uVar51 & 7);
      lVar49 = param_2 * lVar41 + param_1;
      lVar53 = param_2 * lVar42 + param_1;
      uVar45 = 0;
      if (uVar51 != 0) {
        do {
          *(float *)(uVar52 + uVar45 * 4) =
               *(float *)(lVar49 + uVar45 * 4) * fVar6 + *(float *)(lVar53 + uVar45 * 4);
          uVar45 = uVar45 + 1;
        } while (uVar45 < uVar51);
      }
      if ((lVar49 + uVar51 * 4 & 0xf) == 0) {
        do {
          pfVar46 = (float *)(lVar49 + uVar51 * 4);
          fVar19 = pfVar46[1];
          fVar20 = pfVar46[2];
          fVar21 = pfVar46[3];
          pfVar1 = (float *)(lVar49 + 0x10 + uVar51 * 4);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar1 = (float *)(lVar53 + uVar51 * 4);
          fVar26 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar28 = pfVar1[3];
          pfVar4 = (float *)(lVar53 + 0x10 + uVar51 * 4);
          fVar29 = *pfVar4;
          fVar30 = pfVar4[1];
          fVar31 = pfVar4[2];
          fVar32 = pfVar4[3];
          pfVar4 = (float *)(uVar52 + uVar51 * 4);
          *pfVar4 = *pfVar1 + *pfVar46 * fVar6;
          pfVar4[1] = fVar26 + fVar19 * fVar6;
          pfVar4[2] = fVar27 + fVar20 * fVar6;
          pfVar4[3] = fVar28 + fVar21 * fVar6;
          pfVar46 = (float *)(uVar52 + 0x10 + uVar51 * 4);
          *pfVar46 = fVar29 + fVar22 * fVar6;
          pfVar46[1] = fVar30 + fVar23 * fVar6;
          pfVar46[2] = fVar31 + fVar24 * fVar6;
          pfVar46[3] = fVar32 + fVar25 * fVar6;
          uVar51 = uVar51 + 8;
        } while (uVar51 < uVar55);
      }
      else {
        do {
          pfVar46 = (float *)(lVar49 + uVar51 * 4);
          fVar19 = pfVar46[1];
          fVar20 = pfVar46[2];
          fVar21 = pfVar46[3];
          pfVar1 = (float *)(lVar49 + 0x10 + uVar51 * 4);
          fVar22 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar24 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar1 = (float *)(lVar53 + uVar51 * 4);
          fVar26 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar28 = pfVar1[3];
          pfVar4 = (float *)(lVar53 + 0x10 + uVar51 * 4);
          fVar29 = *pfVar4;
          fVar30 = pfVar4[1];
          fVar31 = pfVar4[2];
          fVar32 = pfVar4[3];
          pfVar4 = (float *)(uVar52 + uVar51 * 4);
          *pfVar4 = *pfVar1 + *pfVar46 * fVar6;
          pfVar4[1] = fVar26 + fVar19 * fVar6;
          pfVar4[2] = fVar27 + fVar20 * fVar6;
          pfVar4[3] = fVar28 + fVar21 * fVar6;
          pfVar46 = (float *)(uVar52 + 0x10 + uVar51 * 4);
          *pfVar46 = fVar29 + fVar22 * fVar6;
          pfVar46[1] = fVar30 + fVar23 * fVar6;
          pfVar46[2] = fVar31 + fVar24 * fVar6;
          pfVar46[3] = fVar32 + fVar25 * fVar6;
          uVar51 = uVar51 + 8;
        } while (uVar51 < uVar55);
      }
      if (param_5 < uVar55 + 1) goto LAB_1407c473d;
      uVar51 = param_5 - uVar55;
      if ((longlong)uVar51 < 4) {
        uVar45 = 0;
      }
      else {
        uVar56 = 0;
        uVar45 = uVar51 & 0xfffffffffffffffc;
        do {
          pfVar46 = (float *)(lVar49 + uVar55 * 4 + uVar56 * 4);
          fVar19 = pfVar46[1];
          fVar20 = pfVar46[2];
          fVar21 = pfVar46[3];
          pfVar1 = (float *)(lVar53 + uVar55 * 4 + uVar56 * 4);
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          pfVar4 = (float *)(uVar52 + uVar55 * 4 + uVar56 * 4);
          *pfVar4 = *pfVar1 + *pfVar46 * fVar6;
          pfVar4[1] = fVar22 + fVar19 * fVar6;
          pfVar4[2] = fVar23 + fVar20 * fVar6;
          pfVar4[3] = fVar24 + fVar21 * fVar6;
          uVar56 = uVar56 + 4;
        } while (uVar56 < uVar45);
      }
    }
    if (uVar45 < uVar51) {
      do {
        *(float *)(lVar43 * param_2 + param_1 + uVar55 * 4 + uVar45 * 4) =
             *(float *)(lVar41 * param_2 + param_1 + uVar55 * 4 + uVar45 * 4) * fVar6 +
             *(float *)(lVar42 * param_2 + param_1 + uVar55 * 4 + uVar45 * 4);
        uVar45 = uVar45 + 1;
      } while (uVar45 < uVar51);
    }
  }
LAB_1407c473d:
  if (param_8 != 0) {
    if ((longlong)param_5 < 1) {
      return;
    }
    if (7 < (longlong)param_5) {
      uVar51 = lVar43 * param_2 + param_1;
      uVar52 = uVar51 & 0xf;
      if (uVar52 != 0) {
        if ((uVar51 & 3) != 0) goto LAB_1407c49b8;
        uVar52 = 0x10 - uVar52 >> 2;
      }
      if ((longlong)(uVar52 + 8) <= (longlong)param_5) {
        uVar45 = 0;
        uVar55 = param_5 - (param_5 - uVar52 & 7);
        if (uVar52 != 0) {
          do {
            iVar47 = (int)ROUND(*(float *)(uVar51 + uVar45 * 4));
            if (0xfe < iVar47) {
              iVar47 = 0xff;
            }
            uVar50 = (undefined1)iVar47;
            if (iVar47 < 1) {
              uVar50 = 0;
            }
            *(undefined1 *)(uVar45 + param_4) = uVar50;
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar52);
        }
        do {
          pfVar46 = (float *)(uVar51 + uVar52 * 4);
          auVar59._0_4_ = (int)*pfVar46;
          auVar59._4_4_ = (int)pfVar46[1];
          auVar59._8_4_ = (int)pfVar46[2];
          auVar59._12_4_ = (int)pfVar46[3];
          pfVar46 = (float *)(uVar51 + 0x10 + uVar52 * 4);
          auVar58._4_4_ = (int)pfVar46[1];
          auVar58._0_4_ = (int)*pfVar46;
          auVar58._8_4_ = (int)pfVar46[2];
          auVar58._12_4_ = (int)pfVar46[3];
          auVar58 = packssdw(auVar59,auVar58);
          sVar10 = auVar58._0_2_;
          sVar11 = auVar58._2_2_;
          sVar12 = auVar58._4_2_;
          sVar13 = auVar58._6_2_;
          sVar14 = auVar58._8_2_;
          sVar15 = auVar58._10_2_;
          sVar16 = auVar58._12_2_;
          sVar17 = auVar58._14_2_;
          *(ulonglong *)(uVar52 + param_4) =
               CONCAT17((0 < sVar17) * (sVar17 < 0x100) * auVar58[0xe] - (0xff < sVar17),
                        CONCAT16((0 < sVar16) * (sVar16 < 0x100) * auVar58[0xc] - (0xff < sVar16),
                                 CONCAT15((0 < sVar15) * (sVar15 < 0x100) * auVar58[10] -
                                          (0xff < sVar15),
                                          CONCAT14((0 < sVar14) * (sVar14 < 0x100) * auVar58[8] -
                                                   (0xff < sVar14),
                                                   CONCAT13((0 < sVar13) * (sVar13 < 0x100) *
                                                            auVar58[6] - (0xff < sVar13),
                                                            CONCAT12((0 < sVar12) * (sVar12 < 0x100)
                                                                     * auVar58[4] - (0xff < sVar12),
                                                                     CONCAT11((0 < sVar11) *
                                                                              (sVar11 < 0x100) *
                                                                              auVar58[2] -
                                                                              (0xff < sVar11),
                                                                              (0 < sVar10) *
                                                                              (sVar10 < 0x100) *
                                                                              auVar58[0] -
                                                                              (0xff < sVar10))))))))
          ;
          uVar52 = uVar52 + 8;
        } while (uVar52 < uVar55);
        goto LAB_1407c4942;
      }
    }
LAB_1407c49b8:
    uVar55 = 0;
LAB_1407c4942:
    if (param_5 <= uVar55) {
      return;
    }
    do {
      iVar47 = (int)ROUND(*(float *)(param_1 + param_2 * lVar43 + uVar55 * 4));
      if (0xfe < iVar47) {
        iVar47 = 0xff;
      }
      uVar50 = (undefined1)iVar47;
      if (iVar47 < 1) {
        uVar50 = 0;
      }
      *(undefined1 *)(uVar55 + param_4) = uVar50;
      uVar55 = uVar55 + 1;
    } while (uVar55 < param_5);
    return;
  }
  if ((longlong)param_5 < 1) {
    return;
  }
  if (7 < (longlong)param_5) {
    uVar51 = lVar43 * param_2 + param_1;
    uVar52 = uVar51 & 0xf;
    if (uVar52 != 0) {
      if ((uVar51 & 3) != 0) goto LAB_1407c49b1;
      uVar52 = 0x10 - uVar52 >> 2;
    }
    if ((longlong)(uVar52 + 8) <= (longlong)param_5) {
      uVar45 = 0;
      uVar55 = param_5 - (param_5 - uVar52 & 7);
      if (uVar52 != 0) {
        do {
          iVar47 = (int)ROUND(*(float *)(uVar51 + uVar45 * 4));
          if (0xfe < iVar47) {
            iVar47 = 0xff;
          }
          uVar50 = (undefined1)iVar47;
          if (iVar47 < 1) {
            uVar50 = 0;
          }
          *(undefined1 *)(uVar45 + param_4) = uVar50;
          uVar45 = uVar45 + 1;
        } while (uVar45 < uVar52);
      }
      do {
        pfVar46 = (float *)(uVar51 + uVar52 * 4);
        auVar57._0_4_ = (int)*pfVar46;
        auVar57._4_4_ = (int)pfVar46[1];
        auVar57._8_4_ = (int)pfVar46[2];
        auVar57._12_4_ = (int)pfVar46[3];
        pfVar46 = (float *)(uVar51 + 0x10 + uVar52 * 4);
        auVar18._4_4_ = (int)pfVar46[1];
        auVar18._0_4_ = (int)*pfVar46;
        auVar18._8_4_ = (int)pfVar46[2];
        auVar18._12_4_ = (int)pfVar46[3];
        auVar58 = packssdw(auVar57,auVar18);
        sVar10 = auVar58._0_2_;
        sVar11 = auVar58._2_2_;
        sVar12 = auVar58._4_2_;
        sVar13 = auVar58._6_2_;
        sVar14 = auVar58._8_2_;
        sVar15 = auVar58._10_2_;
        sVar16 = auVar58._12_2_;
        sVar17 = auVar58._14_2_;
        *(ulonglong *)(uVar52 + param_4) =
             CONCAT17((0 < sVar17) * (sVar17 < 0x100) * auVar58[0xe] - (0xff < sVar17),
                      CONCAT16((0 < sVar16) * (sVar16 < 0x100) * auVar58[0xc] - (0xff < sVar16),
                               CONCAT15((0 < sVar15) * (sVar15 < 0x100) * auVar58[10] -
                                        (0xff < sVar15),
                                        CONCAT14((0 < sVar14) * (sVar14 < 0x100) * auVar58[8] -
                                                 (0xff < sVar14),
                                                 CONCAT13((0 < sVar13) * (sVar13 < 0x100) *
                                                          auVar58[6] - (0xff < sVar13),
                                                          CONCAT12((0 < sVar12) * (sVar12 < 0x100) *
                                                                   auVar58[4] - (0xff < sVar12),
                                                                   CONCAT11((0 < sVar11) *
                                                                            (sVar11 < 0x100) *
                                                                            auVar58[2] -
                                                                            (0xff < sVar11),
                                                                            (0 < sVar10) *
                                                                            (sVar10 < 0x100) *
                                                                            auVar58[0] -
                                                                            (0xff < sVar10))))))));
        uVar52 = uVar52 + 8;
      } while (uVar52 < uVar55);
      goto LAB_1407c4822;
    }
  }
LAB_1407c49b1:
  uVar55 = 0;
LAB_1407c4822:
  if (uVar55 < param_5) {
    do {
      iVar47 = (int)ROUND(*(float *)(param_1 + param_2 * lVar43 + uVar55 * 4));
      if (0xfe < iVar47) {
        iVar47 = 0xff;
      }
      uVar50 = (undefined1)iVar47;
      if (iVar47 < 1) {
        uVar50 = 0;
      }
      *(undefined1 *)(uVar55 + param_4) = uVar50;
      uVar55 = uVar55 + 1;
    } while (uVar55 < param_5);
  }
  return;
}

