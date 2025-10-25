
longlong *
FUN_1406ff740(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             int param_6,uint param_7,short *param_8,undefined8 param_9,int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar17 = 0;
  uVar22 = 0;
  iVar10 = param_10 >> 1;
  uVar5 = param_7 & 0x10;
  lVar8 = 0;
  if (0 < iVar10) {
    uVar11 = (ulonglong)iVar10;
    lVar20 = param_4 * uVar11 + param_3;
    uVar18 = param_7 & 0x20;
    lVar15 = lVar20;
    if ((param_7 & 0xf0) == 0xf0) goto LAB_1406ffb80;
LAB_1406ff816:
    uVar12 = uVar22;
    if ((param_5[1] <= (longlong)uVar22) && (param_7 != 0xf0)) {
      if ((param_7 & 0xf) == 6) {
        if (uVar18 == 0) goto LAB_1406ff956;
      }
      else {
        if ((param_7 & 0xf) != 1) goto LAB_1406ff851;
        if (uVar18 == 0) {
          uVar12 = param_5[1] - 1;
        }
      }
    }
LAB_1406ff8da:
    do {
      FUN_1407003c0(param_1,param_2,uVar12);
      while( true ) {
        while( true ) {
          iVar21 = (int)uVar22;
          uVar22 = uVar22 + 1;
          lVar17 = (longlong)iVar21 + 1;
          lVar8 = lVar8 + param_4;
          if (uVar11 <= uVar22) {
            if (uVar5 != 0) {
              lVar8 = 0;
              lVar17 = -uVar11;
              do {
                plVar6 = (longlong *)FUN_1407003c0(param_1,param_2,lVar17,param_3);
                lVar8 = lVar8 + 1;
                lVar17 = lVar17 + 1;
                param_3 = param_3 + param_4;
              } while (lVar8 < (longlong)uVar11);
              return plVar6;
            }
            goto LAB_1406ffc20;
          }
          lVar15 = lVar20 + lVar8;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_1406ffb80:
          (*(code *)(&PTR_FUN_14308bcc0)[param_6])
                    (param_2 * uVar22 + param_1,lVar15,*param_5,param_9);
        }
        if (-1 < (longlong)uVar22) goto LAB_1406ff816;
        uVar12 = uVar22;
        if (param_7 == 0xf0) goto LAB_1406ff8da;
        if ((param_7 & 0xf) != 6) break;
        if (uVar5 != 0) goto LAB_1406ff8da;
LAB_1406ff956:
        lVar15 = *param_5 * 2 + *param_5;
        fVar25 = (float)(int)*param_8;
        fVar24 = (float)(int)param_8[1];
        fVar23 = (float)(int)param_8[2];
        if (0 < lVar15) {
          uVar16 = lVar15 + 2;
          uVar13 = 0;
          lVar7 = 1;
          uVar12 = uVar16 / 6;
          lVar15 = 0;
          if (uVar12 != 0) {
            lVar7 = param_4 * lVar17 + lVar20;
            do {
              uVar13 = uVar13 + 1;
              *(float *)(lVar15 + lVar7) = fVar25;
              *(float *)(lVar15 + 4 + lVar7) = fVar24;
              *(float *)(lVar15 + 8 + lVar7) = fVar23;
              *(float *)(lVar15 + 0xc + lVar7) = fVar25;
              *(float *)(lVar15 + 0x10 + lVar7) = fVar24;
              *(float *)(lVar15 + 0x14 + lVar7) = fVar23;
              lVar15 = lVar15 + 0x18;
            } while (uVar13 < uVar12);
            lVar7 = uVar13 * 2 + 1;
          }
          if (lVar7 - 1U < uVar16 / 3) {
            lVar15 = lVar17 * param_4 + lVar20;
            lVar17 = (lVar7 - 1U) * 0xc;
            *(float *)(lVar15 + lVar17) = fVar25;
            *(float *)(lVar15 + 4 + lVar17) = fVar24;
            *(float *)(lVar15 + 8 + lVar17) = fVar23;
          }
        }
      }
      if ((param_7 & 0xf) != 1) goto LAB_1406ff851;
      uVar12 = 0;
      if (uVar5 != 0) {
        uVar12 = uVar22;
      }
    } while( true );
  }
  if (uVar5 != 0) {
    return (longlong *)(ulonglong)uVar5;
  }
LAB_1406ffc20:
  uVar18 = param_7 & 0xf;
  if (uVar18 == 6) {
    fVar24 = (float)(int)param_8[1];
    uVar22 = 0;
    plVar6 = (longlong *)(ulonglong)(uint)(int)*param_8;
    lVar8 = 0;
    fVar25 = (float)(int)*param_8;
    fVar23 = (float)(int)param_8[2];
    if (0 < iVar10) {
      lVar17 = *param_5 * 2 + *param_5;
      uVar11 = lVar17 + 2;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar11;
      plVar6 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      do {
        if (0 < lVar17) {
          uVar12 = 0;
          lVar20 = 1;
          lVar15 = 0;
          if (uVar11 / 6 != 0) {
            lVar20 = param_3 + lVar8;
            do {
              uVar12 = uVar12 + 1;
              *(float *)(lVar15 + lVar20) = fVar25;
              *(float *)(lVar15 + 4 + lVar20) = fVar24;
              *(float *)(lVar15 + 8 + lVar20) = fVar23;
              *(float *)(lVar15 + 0xc + lVar20) = fVar25;
              *(float *)(lVar15 + 0x10 + lVar20) = fVar24;
              *(float *)(lVar15 + 0x14 + lVar20) = fVar23;
              lVar15 = lVar15 + 0x18;
            } while (uVar12 < uVar11 / 6);
            lVar20 = uVar12 * 2 + 1;
          }
          plVar9 = (longlong *)(lVar20 - 1);
          plVar6 = plVar9;
          if (plVar9 < (longlong *)(uVar11 / 3)) {
            plVar6 = (longlong *)((longlong)plVar9 * 4);
            lVar15 = (longlong)plVar9 * 0xc + param_3;
            *(float *)(lVar15 + lVar8) = fVar25;
            *(float *)(lVar15 + 4 + lVar8) = fVar24;
            *(float *)(lVar15 + 8 + lVar8) = fVar23;
          }
        }
        uVar22 = uVar22 + 1;
        lVar8 = lVar8 + param_4;
      } while (uVar22 < (ulonglong)(longlong)iVar10);
    }
    return plVar6;
  }
  plVar6 = (longlong *)(ulonglong)uVar5;
  if (uVar18 == 1) {
    uVar22 = 0;
    if (0 < iVar10) {
      plVar6 = (longlong *)(param_4 * iVar10 + param_3);
      uVar11 = *param_5 * 2 + *param_5;
      do {
        if (0 < (longlong)uVar11) {
          if ((longlong)uVar11 < 4) {
LAB_140700113:
            uVar16 = 0;
          }
          else {
            uVar13 = param_4 * uVar22 + param_3;
            uVar12 = uVar13 & 0xf;
            if (uVar12 != 0) {
              if ((uVar13 & 3) != 0) goto LAB_140700113;
              uVar12 = 0x10 - uVar12 >> 2;
            }
            if ((longlong)uVar11 < (longlong)(uVar12 + 4)) goto LAB_140700113;
            uVar14 = 0;
            uVar16 = uVar11 - (uVar11 - uVar12 & 3);
            if (uVar12 != 0) {
              do {
                *(undefined4 *)(uVar13 + uVar14 * 4) =
                     *(undefined4 *)((longlong)plVar6 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
            }
            if ((uVar12 * 4 + (longlong)plVar6 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)((longlong)plVar6 + uVar12 * 4);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(uVar13 + uVar12 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar16);
            }
            else {
              do {
                puVar1 = (undefined8 *)((longlong)plVar6 + uVar12 * 4);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(uVar13 + uVar12 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar16);
            }
          }
          if (uVar16 < uVar11) {
            do {
              *(undefined4 *)(param_4 * uVar22 + param_3 + uVar16 * 4) =
                   *(undefined4 *)((longlong)plVar6 + uVar16 * 4);
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar11);
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < (ulonglong)(longlong)iVar10);
    }
  }
  else if (uVar18 == 3) {
    lVar8 = (longlong)iVar10;
    if ((param_7 & 0xf0) == 0xf0) {
      plVar6 = (longlong *)
               (*(code *)(&PTR_FUN_14308bcc0)[param_6])
                         (param_1 + param_2 * lVar8,param_3,*param_5,param_9);
    }
    else {
      if (((lVar8 < 0) || (param_5[1] <= lVar8)) && (param_7 != 0xf0)) {
        if (param_5[1] < 2) {
          if (lVar8 < 0) {
            lVar8 = -lVar8;
            if ((param_7 & 0x20) == 0) {
              lVar8 = 0;
            }
          }
          else if ((0 < lVar8) && ((param_7 & 0x20) == 0)) {
            lVar8 = 0;
          }
        }
        else {
          if (lVar8 < 0) goto LAB_1406fff40;
          if (param_5[1] <= lVar8) {
            do {
              if ((param_7 & 0x20) != 0) break;
              for (lVar8 = (param_5[1] + -1) * 2 - lVar8; lVar8 < 0; lVar8 = -lVar8) {
LAB_1406fff40:
              }
            } while (param_5[1] <= lVar8);
          }
        }
      }
      plVar6 = (longlong *)FUN_1407003c0(param_1,param_2,lVar8,param_3);
    }
    lVar8 = 1;
    uVar22 = 0;
    if (1 < iVar10) {
      lVar17 = ((longlong)param_10 + -1) * param_4 + param_3;
      plVar9 = (longlong *)(*param_5 * 2 + *param_5);
      do {
        if (0 < (longlong)plVar9) {
          if ((longlong)plVar9 < 4) {
LAB_1406fff06:
            param_5 = (longlong *)0x0;
          }
          else {
            uVar11 = param_3 + param_4 * lVar8;
            plVar6 = (longlong *)(uVar11 & 0xf);
            if (plVar6 != (longlong *)0x0) {
              if ((uVar11 & 3) != 0) goto LAB_1406fff06;
              plVar6 = (longlong *)(0x10U - (longlong)plVar6 >> 2);
            }
            if ((longlong)plVar9 < (longlong)plVar6 + 4) goto LAB_1406fff06;
            lVar15 = lVar17 - param_4 * lVar8;
            plVar19 = (longlong *)0x0;
            param_5 = (longlong *)((longlong)plVar9 - ((longlong)plVar9 - (longlong)plVar6 & 3U));
            if (plVar6 != (longlong *)0x0) {
              do {
                *(undefined4 *)(uVar11 + (longlong)plVar19 * 4) =
                     *(undefined4 *)(lVar15 + (longlong)plVar19 * 4);
                plVar19 = (longlong *)((longlong)plVar19 + 1);
              } while (plVar19 < plVar6);
            }
            if (((longlong)plVar6 * 4 + lVar15 & 0xfU) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar15 + (longlong)plVar6 * 4);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(uVar11 + (longlong)plVar6 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                plVar6 = (longlong *)((longlong)plVar6 + 4);
              } while (plVar6 < param_5);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar15 + (longlong)plVar6 * 4);
                uVar4 = puVar1[1];
                puVar2 = (undefined8 *)(uVar11 + (longlong)plVar6 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar4;
                plVar6 = (longlong *)((longlong)plVar6 + 4);
              } while (plVar6 < param_5);
            }
          }
          if (param_5 < plVar9) {
            do {
              *(undefined4 *)(param_3 + lVar8 * param_4 + (longlong)param_5 * 4) =
                   *(undefined4 *)((lVar17 - lVar8 * param_4) + (longlong)param_5 * 4);
              param_5 = (longlong *)((longlong)param_5 + 1);
            } while (param_5 < plVar9);
          }
        }
        lVar8 = uVar22 + 2;
        uVar22 = uVar22 + 1;
        plVar6 = param_5;
      } while (uVar22 < (ulonglong)(longlong)(iVar10 + -1));
    }
  }
  return plVar6;
LAB_1406ff851:
  uVar12 = uVar22;
  if ((param_7 & 0xf) == 3) {
    if (param_5[1] < 2) {
      if ((longlong)uVar22 < 0) {
        if (uVar5 == 0) {
          uVar12 = -uVar22;
          if (uVar18 == 0) {
            uVar12 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar22) && (uVar18 == 0)) {
        uVar12 = -uVar22;
        if (uVar5 == 0) {
          uVar12 = 0;
        }
      }
    }
    else if (((longlong)uVar22 < 0) || (param_5[1] <= (longlong)uVar22)) {
      if ((longlong)uVar22 < 0) goto LAB_1406ffb20;
      while (uVar18 == 0) {
        for (uVar12 = (param_5[1] + -1) * 2 - uVar12; (longlong)uVar12 < 0; uVar12 = -uVar12) {
LAB_1406ffb20:
          if (uVar5 != 0) goto LAB_1406ff8da;
        }
        if ((longlong)uVar12 < param_5[1]) break;
      }
    }
  }
  goto LAB_1406ff8da;
}

