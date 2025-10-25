
void FUN_1400a6e80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
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
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  
  iVar8 = param_10 >> 1;
  lVar15 = 0;
  uVar16 = param_7 & 0x10;
  uVar12 = 0;
  lVar19 = 0;
  if (0 < iVar8) {
    uVar9 = (ulonglong)iVar8;
    lVar10 = param_4 * uVar9 + param_3;
    uVar5 = param_7 & 0x20;
    lVar18 = lVar10;
    if ((param_7 & 0xf0) == 0xf0) goto LAB_1400a7279;
    uVar12 = 0;
LAB_1400a6f50:
    uVar13 = uVar12;
    if (((longlong)param_5[1] <= (longlong)uVar12) && (param_7 != 0xf0)) {
      if ((param_7 & 0xf) == 6) {
        if (uVar5 == 0) goto LAB_1400a7094;
      }
      else {
        if ((param_7 & 0xf) != 1) goto LAB_1400a6f8c;
        if (uVar5 == 0) {
          uVar13 = param_5[1] - 1;
        }
      }
    }
LAB_1400a701b:
    do {
      FUN_1400a7a80(param_1,param_2,uVar13);
      while( true ) {
        while( true ) {
          iVar11 = (int)uVar12;
          uVar12 = uVar12 + 1;
          lVar19 = lVar19 + param_4;
          lVar15 = (longlong)iVar11 + 1;
          if (uVar9 <= uVar12) {
            if (uVar16 != 0) {
              lVar15 = 0;
              lVar19 = -uVar9;
              do {
                FUN_1400a7a80(param_1,param_2,lVar19,param_3);
                lVar15 = lVar15 + 1;
                param_3 = param_3 + param_4;
                lVar19 = lVar19 + 1;
              } while (lVar15 < (longlong)uVar9);
              return;
            }
            goto LAB_1400a7323;
          }
          lVar18 = lVar10 + lVar19;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_1400a7279:
          (**(code **)(&UNK_143086aa0 + (longlong)param_6 * 8))
                    (param_2 * uVar12 + param_1,lVar18,*param_5,param_9);
        }
        if (-1 < (longlong)uVar12) goto LAB_1400a6f50;
        uVar13 = uVar12;
        if (param_7 == 0xf0) goto LAB_1400a701b;
        if ((param_7 & 0xf) != 6) break;
        if (uVar16 != 0) goto LAB_1400a701b;
LAB_1400a7094:
        uVar13 = *param_5;
        fVar20 = (float)(int)*param_8;
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 8) {
LAB_1400a79e0:
            uVar17 = 0;
          }
          else {
            uVar7 = param_4 * lVar15 + lVar10;
            uVar6 = uVar7 & 0xf;
            if (uVar6 != 0) {
              if ((uVar7 & 3) != 0) goto LAB_1400a79e0;
              uVar6 = 0x10 - uVar6 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar6 + 8)) goto LAB_1400a79e0;
            uVar14 = 0;
            uVar17 = uVar13 - (uVar13 - uVar6 & 7);
            if (uVar6 != 0) {
              do {
                *(float *)(uVar7 + uVar14 * 4) = fVar20;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar6);
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
          if (uVar17 < uVar13) {
            do {
              *(float *)(lVar15 * param_4 + lVar10 + uVar17 * 4) = fVar20;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar13);
          }
        }
      }
      if ((param_7 & 0xf) != 1) goto LAB_1400a6f8c;
      uVar13 = 0;
      if (uVar16 != 0) {
        uVar13 = uVar12;
      }
    } while( true );
  }
  if (uVar16 != 0) {
    return;
  }
LAB_1400a7323:
  uVar16 = param_7 & 0xf;
  if (uVar16 == 6) {
    fVar20 = (float)(int)*param_8;
    uVar12 = 0;
    if (0 < iVar8) {
      uVar9 = *param_5;
      do {
        if (0 < (longlong)uVar9) {
          if ((longlong)uVar9 < 8) {
LAB_1400a790f:
            uVar7 = 0;
          }
          else {
            uVar6 = param_4 * uVar12 + param_3;
            uVar13 = uVar6 & 0xf;
            if (uVar13 != 0) {
              if ((uVar6 & 3) != 0) goto LAB_1400a790f;
              uVar13 = 0x10 - uVar13 >> 2;
            }
            if ((longlong)uVar9 < (longlong)(uVar13 + 8)) goto LAB_1400a790f;
            uVar17 = 0;
            uVar7 = uVar9 - (uVar9 - uVar13 & 7);
            if (uVar13 != 0) {
              do {
                *(float *)(uVar6 + uVar17 * 4) = fVar20;
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar13);
            }
            do {
              pfVar1 = (float *)(uVar6 + uVar13 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              pfVar1 = (float *)(uVar6 + 0x10 + uVar13 * 4);
              *pfVar1 = fVar20;
              pfVar1[1] = fVar20;
              pfVar1[2] = fVar20;
              pfVar1[3] = fVar20;
              uVar13 = uVar13 + 8;
            } while (uVar13 < uVar7);
          }
          if (uVar7 < uVar9) {
            do {
              *(float *)(param_4 * uVar12 + param_3 + uVar7 * 4) = fVar20;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar9);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)(longlong)iVar8);
    }
    return;
  }
  if (uVar16 == 1) {
    uVar12 = 0;
    if (0 < iVar8) {
      uVar9 = *param_5;
      lVar15 = param_4 * iVar8 + param_3;
      do {
        if (0 < (longlong)uVar9) {
          if ((longlong)uVar9 < 4) {
LAB_1400a77b2:
            uVar7 = 0;
          }
          else {
            uVar6 = param_4 * uVar12 + param_3;
            uVar13 = uVar6 & 0xf;
            if (uVar13 != 0) {
              if ((uVar6 & 3) != 0) goto LAB_1400a77b2;
              uVar13 = 0x10 - uVar13 >> 2;
            }
            if ((longlong)uVar9 < (longlong)(uVar13 + 4)) goto LAB_1400a77b2;
            uVar17 = 0;
            uVar7 = uVar9 - (uVar9 - uVar13 & 3);
            if (uVar13 != 0) {
              do {
                *(undefined4 *)(uVar6 + uVar17 * 4) = *(undefined4 *)(lVar15 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar13);
            }
            if ((lVar15 + uVar13 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar13 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar6 + uVar13 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar13 = uVar13 + 4;
              } while (uVar13 < uVar7);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar13 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar6 + uVar13 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar13 = uVar13 + 4;
              } while (uVar13 < uVar7);
            }
          }
          if (uVar7 < uVar9) {
            do {
              *(undefined4 *)(param_4 * uVar12 + param_3 + uVar7 * 4) =
                   *(undefined4 *)(lVar15 + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar9);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)(longlong)iVar8);
    }
  }
  else if (uVar16 == 3) {
    lVar15 = (longlong)iVar8;
    if ((param_7 & 0xf0) == 0xf0) {
      (**(code **)(&UNK_143086aa0 + (longlong)param_6 * 8))
                (param_1 + param_2 * lVar15,param_3,*param_5,param_9);
    }
    else {
      if (((lVar15 < 0) || ((longlong)param_5[1] <= lVar15)) && (param_7 != 0xf0)) {
        uVar12 = param_5[1];
        if ((longlong)uVar12 < 2) {
          if (lVar15 < 0) {
            lVar15 = -lVar15;
            if ((param_7 & 0x20) == 0) {
              lVar15 = 0;
            }
          }
          else if ((0 < lVar15) && ((param_7 & 0x20) == 0)) {
            lVar15 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar15 < 0; lVar15 = -lVar15) {
            }
            if ((lVar15 < (longlong)uVar12) || ((param_7 & 0x20) != 0)) break;
            lVar15 = (uVar12 - 1) * 2 - lVar15;
          }
        }
      }
      FUN_1400a7a80(param_1,param_2,lVar15,param_3);
    }
    lVar15 = 1;
    uVar12 = 0;
    if (1 < iVar8) {
      uVar9 = *param_5;
      lVar19 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)uVar9) {
          if ((longlong)uVar9 < 4) {
LAB_1400a75c7:
            uVar7 = 0;
          }
          else {
            uVar13 = param_3 + param_4 * lVar15;
            uVar6 = uVar13 & 0xf;
            if (uVar6 != 0) {
              if ((uVar13 & 3) != 0) goto LAB_1400a75c7;
              uVar6 = 0x10 - uVar6 >> 2;
            }
            if ((longlong)uVar9 < (longlong)(uVar6 + 4)) goto LAB_1400a75c7;
            lVar18 = lVar19 - param_4 * lVar15;
            uVar17 = 0;
            uVar7 = uVar9 - (uVar9 - uVar6 & 3);
            if (uVar6 != 0) {
              do {
                *(undefined4 *)(uVar13 + uVar17 * 4) = *(undefined4 *)(lVar18 + uVar17 * 4);
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar6);
            }
            if ((lVar18 + uVar6 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar18 + uVar6 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar13 + uVar6 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar6 = uVar6 + 4;
              } while (uVar6 < uVar7);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar18 + uVar6 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar13 + uVar6 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar6 = uVar6 + 4;
              } while (uVar6 < uVar7);
            }
          }
          if (uVar7 < uVar9) {
            do {
              *(undefined4 *)(param_3 + lVar15 * param_4 + uVar7 * 4) =
                   *(undefined4 *)((lVar19 - lVar15 * param_4) + uVar7 * 4);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar9);
          }
        }
        lVar15 = uVar12 + 2;
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulonglong)(longlong)(iVar8 + -1));
    }
  }
  return;
LAB_1400a6f8c:
  uVar13 = uVar12;
  if ((param_7 & 0xf) == 3) {
    uVar6 = param_5[1];
    if ((longlong)uVar6 < 2) {
      if ((longlong)uVar12 < 0) {
        if (uVar16 == 0) {
          uVar13 = -uVar12;
          if (uVar5 == 0) {
            uVar13 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar12) && (uVar5 == 0)) {
        uVar13 = -uVar12;
        if (uVar16 == 0) {
          uVar13 = 0;
        }
      }
    }
    else if (((longlong)uVar12 < 0) || ((longlong)uVar6 <= (longlong)uVar12)) {
      if ((longlong)uVar12 < 0) goto LAB_1400a7220;
      while (uVar5 == 0) {
        for (uVar13 = (uVar6 - 1) * 2 - uVar13; (longlong)uVar13 < 0; uVar13 = -uVar13) {
LAB_1400a7220:
          if (uVar16 != 0) goto LAB_1400a701b;
        }
        if ((longlong)uVar13 < (longlong)uVar6) break;
      }
    }
  }
  goto LAB_1400a701b;
}

