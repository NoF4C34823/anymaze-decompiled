
void FUN_14071ae20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  
  lVar14 = 0;
  uVar9 = 0;
  iVar18 = param_10 >> 1;
  uVar5 = param_7 & 0x10;
  lVar11 = 0;
  if (0 < iVar18) {
    uVar19 = (ulonglong)iVar18;
    lVar10 = param_4 * uVar19 + param_3;
    uVar16 = param_7 & 0x20;
    lVar15 = lVar10;
    if ((param_7 & 0xf0) == 0xf0) goto LAB_14071b241;
    uVar9 = 0;
LAB_14071af00:
    uVar12 = uVar9;
    if (((longlong)param_5[1] <= (longlong)uVar9) && (param_7 != 0xf0)) {
      if ((param_7 & 0xf) == 6) {
        if (uVar16 == 0) goto LAB_14071b057;
      }
      else {
        if ((param_7 & 0xf) != 1) goto LAB_14071af3a;
        if (uVar16 == 0) {
          uVar12 = param_5[1] - 1;
        }
      }
    }
LAB_14071afbb:
    do {
      FUN_14071baa0(param_1,param_2,uVar12);
      while( true ) {
        while( true ) {
          iVar8 = (int)uVar9;
          uVar9 = uVar9 + 1;
          lVar14 = (longlong)iVar8 + 1;
          lVar11 = lVar11 + param_4;
          if (uVar19 <= uVar9) {
            if (uVar5 != 0) {
              lVar11 = 0;
              lVar14 = -uVar19;
              do {
                FUN_14071baa0(param_1,param_2,lVar14,param_3);
                lVar11 = lVar11 + 1;
                lVar14 = lVar14 + 1;
                param_3 = param_3 + param_4;
              } while (lVar11 < (longlong)uVar19);
              return;
            }
            goto LAB_14071b2e5;
          }
          lVar15 = lVar10 + lVar11;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_14071b241:
          (*(code *)(&PTR_FUN_14308bd60)[param_6])
                    (param_2 * uVar9 + param_1,lVar15,*param_5,param_9);
        }
        if (-1 < (longlong)uVar9) goto LAB_14071af00;
        uVar12 = uVar9;
        if (param_7 == 0xf0) goto LAB_14071afbb;
        if ((param_7 & 0xf) != 6) break;
        if (uVar5 != 0) goto LAB_14071afbb;
LAB_14071b057:
        uVar12 = *param_5;
        fVar20 = (float)*param_8;
        if (0 < (longlong)uVar12) {
          if ((longlong)*param_5 < 8) {
LAB_14071ba04:
            uVar17 = 0;
          }
          else {
            uVar7 = param_4 * lVar14 + lVar10;
            uVar6 = uVar7 & 0xf;
            if (uVar6 != 0) {
              if ((uVar7 & 3) != 0) goto LAB_14071ba04;
              uVar6 = 0x10 - uVar6 >> 2;
            }
            if ((longlong)uVar12 < (longlong)(uVar6 + 8)) goto LAB_14071ba04;
            uVar13 = 0;
            uVar17 = uVar12 - (uVar12 - uVar6 & 7);
            if (uVar6 != 0) {
              do {
                *(float *)(uVar7 + uVar13 * 4) = fVar20;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar6);
            }
            do {
              pfVar1 = (float *)(uVar7 + uVar6 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              pfVar1 = (float *)(uVar7 + 0x10 + uVar6 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              uVar6 = uVar6 + 8;
            } while (uVar6 < uVar17);
          }
          if (uVar17 < uVar12) {
            do {
              *(float *)(lVar14 * param_4 + lVar10 + uVar17 * 4) = fVar20;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar12);
          }
        }
      }
      if ((param_7 & 0xf) != 1) goto LAB_14071af3a;
      uVar12 = 0;
      if (uVar5 != 0) {
        uVar12 = uVar9;
      }
    } while( true );
  }
  if (uVar5 != 0) {
    return;
  }
LAB_14071b2e5:
  uVar5 = param_7 & 0xf;
  if (uVar5 == 6) {
    fVar20 = (float)*param_8;
    uVar9 = 0;
    if (0 < iVar18) {
      uVar19 = *param_5;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 8) {
LAB_14071b930:
            uVar7 = 0;
          }
          else {
            uVar6 = param_4 * uVar9 + param_3;
            uVar12 = uVar6 & 0xf;
            if (uVar12 != 0) {
              if ((uVar6 & 3) != 0) goto LAB_14071b930;
              uVar12 = 0x10 - uVar12 >> 2;
            }
            if ((longlong)uVar19 < (longlong)(uVar12 + 8)) goto LAB_14071b930;
            uVar17 = 0;
            uVar7 = uVar19 - (uVar19 - uVar12 & 7);
            if (uVar12 != 0) {
              do {
                *(float *)(uVar6 + uVar17 * 4) = fVar20;
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar12);
            }
            do {
              pfVar1 = (float *)(uVar6 + uVar12 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              pfVar1 = (float *)(uVar6 + 0x10 + uVar12 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              uVar12 = uVar12 + 8;
            } while (uVar12 < uVar7);
          }
          if (uVar7 < uVar19) {
            do {
              *(float *)(param_4 * uVar9 + param_3 + uVar7 * 4) = fVar20;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar19);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar18);
    }
    return;
  }
  if (uVar5 == 1) {
    uVar9 = 0;
    if (0 < iVar18) {
      lVar11 = param_4 * iVar18 + param_3;
      uVar19 = *param_5;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 4) {
LAB_14071b7d3:
            uVar7 = 0;
          }
          else {
            uVar6 = param_4 * uVar9 + param_3;
            uVar12 = uVar6 & 0xf;
            if (uVar12 != 0) {
              if ((uVar6 & 3) != 0) goto LAB_14071b7d3;
              uVar12 = 0x10 - uVar12 >> 2;
            }
            if ((longlong)uVar19 < (longlong)(uVar12 + 4)) goto LAB_14071b7d3;
            uVar17 = 0;
            uVar7 = uVar19 - (uVar19 - uVar12 & 3);
            if (uVar12 != 0) {
              do {
                *(undefined4 *)(uVar6 + uVar17 * 4) = *(undefined4 *)(lVar11 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar12);
            }
            if ((uVar12 * 4 + lVar11 & 0xf) == 0) {
              do {
                puVar3 = (undefined8 *)(lVar11 + uVar12 * 4);
                uVar4 = puVar3[1];
                puVar2 = (undefined8 *)(uVar6 + uVar12 * 4);
                *puVar2 = *puVar3;
                puVar2[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar7);
            }
            else {
              do {
                puVar3 = (undefined8 *)(lVar11 + uVar12 * 4);
                uVar4 = puVar3[1];
                puVar2 = (undefined8 *)(uVar6 + uVar12 * 4);
                *puVar2 = *puVar3;
                puVar2[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar7);
            }
          }
          if (uVar7 < uVar19) {
            do {
              *(undefined4 *)(param_4 * uVar9 + param_3 + uVar7 * 4) =
                   *(undefined4 *)(lVar11 + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar19);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)iVar18);
    }
  }
  else if (uVar5 == 3) {
    lVar11 = (longlong)iVar18;
    if ((param_7 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308bd60)[param_6])(param_1 + param_2 * lVar11,param_3,*param_5,param_9);
    }
    else {
      if (((lVar11 < 0) || ((longlong)param_5[1] <= lVar11)) && (param_7 != 0xf0)) {
        if ((longlong)param_5[1] < 2) {
          if (lVar11 < 0) {
            lVar11 = -lVar11;
            if ((param_7 & 0x20) == 0) {
              lVar11 = 0;
            }
          }
          else if ((0 < lVar11) && ((param_7 & 0x20) == 0)) {
            lVar11 = 0;
          }
        }
        else {
          if (lVar11 < 0) goto LAB_14071b600;
          if ((longlong)param_5[1] <= lVar11) {
            do {
              if ((param_7 & 0x20) != 0) break;
              for (lVar11 = (param_5[1] - 1) * 2 - lVar11; lVar11 < 0; lVar11 = -lVar11) {
LAB_14071b600:
              }
            } while ((longlong)param_5[1] <= lVar11);
          }
        }
      }
      FUN_14071baa0(param_1,param_2,lVar11,param_3);
    }
    lVar11 = 1;
    uVar9 = 0;
    if (1 < iVar18) {
      lVar14 = ((longlong)param_10 + -1) * param_4 + param_3;
      uVar19 = *param_5;
      do {
        if (0 < (longlong)uVar19) {
          if ((longlong)uVar19 < 4) {
LAB_14071b5c6:
            uVar7 = 0;
          }
          else {
            uVar6 = param_3 + param_4 * lVar11;
            uVar12 = uVar6 & 0xf;
            if (uVar12 != 0) {
              if ((uVar6 & 3) != 0) goto LAB_14071b5c6;
              uVar12 = 0x10 - uVar12 >> 2;
            }
            if ((longlong)uVar19 < (longlong)(uVar12 + 4)) goto LAB_14071b5c6;
            lVar15 = lVar14 - param_4 * lVar11;
            uVar17 = 0;
            uVar7 = uVar19 - (uVar19 - uVar12 & 3);
            if (uVar12 != 0) {
              do {
                *(undefined4 *)(uVar6 + uVar17 * 4) = *(undefined4 *)(lVar15 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar12);
            }
            if ((uVar12 * 4 + lVar15 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar12 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar6 + uVar12 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar7);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar12 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar6 + uVar12 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar12 = uVar12 + 4;
              } while (uVar12 < uVar7);
            }
          }
          if (uVar7 < uVar19) {
            do {
              *(undefined4 *)(param_3 + lVar11 * param_4 + uVar7 * 4) =
                   *(undefined4 *)((lVar14 - lVar11 * param_4) + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar19);
          }
        }
        lVar11 = uVar9 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)(iVar18 + -1));
    }
  }
  return;
LAB_14071af3a:
  uVar12 = uVar9;
  if ((param_7 & 0xf) == 3) {
    if ((longlong)param_5[1] < 2) {
      if ((longlong)uVar9 < 0) {
        if (uVar5 == 0) {
          uVar12 = -uVar9;
          if (uVar16 == 0) {
            uVar12 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar9) && (uVar16 == 0)) {
        uVar12 = -uVar9;
        if (uVar5 == 0) {
          uVar12 = 0;
        }
      }
    }
    else if (((longlong)uVar9 < 0) || ((longlong)param_5[1] <= (longlong)uVar9)) {
      if ((longlong)uVar9 < 0) goto LAB_14071b1e0;
      while (uVar16 == 0) {
        for (uVar12 = (param_5[1] - 1) * 2 - uVar12; (longlong)uVar12 < 0; uVar12 = -uVar12) {
LAB_14071b1e0:
          if (uVar5 != 0) goto LAB_14071afbb;
        }
        if ((longlong)uVar12 < (longlong)param_5[1]) break;
      }
    }
  }
  goto LAB_14071afbb;
}

