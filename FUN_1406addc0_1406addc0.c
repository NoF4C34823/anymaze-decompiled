
void FUN_1406addc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,int param_10)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lStack_a8;
  
  lVar12 = 0;
  uVar17 = 0;
  iVar20 = param_10 >> 1;
  uVar7 = param_7 & 0x10;
  lStack_a8 = 0;
  if (0 < iVar20) {
    uVar21 = (ulonglong)iVar20;
    lVar18 = param_4 * uVar21 + param_3;
    uVar19 = param_7 & 0xf;
    uVar13 = param_7 & 0x20;
    if ((param_7 & 0xf0) == 0xf0) {
      lStack_a8 = 0;
      lVar15 = lVar18;
      goto LAB_1406ae1e1;
    }
LAB_1406adea1:
    uVar10 = uVar17;
    if (((longlong)param_5[1] <= (longlong)uVar17) && (param_7 != 0xf0)) {
      if (uVar19 == 6) {
        if (uVar13 == 0) goto LAB_1406adff8;
      }
      else {
        if (uVar19 != 1) goto LAB_1406adedc;
        if (uVar13 == 0) {
          uVar10 = param_5[1] - 1;
        }
      }
    }
LAB_1406adf5b:
    do {
      FUN_1406aea60(param_1,param_2,uVar10);
      while( true ) {
        while( true ) {
          iVar16 = (int)uVar17;
          uVar17 = uVar17 + 1;
          lVar12 = (longlong)iVar16 + 1;
          lStack_a8 = lStack_a8 + param_4;
          if (uVar21 <= uVar17) {
            if (uVar7 != 0) {
              lVar12 = 0;
              lVar18 = -uVar21;
              do {
                FUN_1406aea60(param_1,param_2,lVar18,param_3);
                lVar12 = lVar12 + 1;
                lVar18 = lVar18 + 1;
                param_3 = param_3 + param_4;
              } while (lVar12 < (longlong)uVar21);
              return;
            }
            if (uVar19 == 6) {
              uVar10 = 0;
              uVar4 = *param_8;
              uVar5 = *param_8;
              uVar17 = *param_5;
              goto LAB_1406ae7c0;
            }
            if (uVar19 != 1) goto LAB_1406ae299;
            uVar10 = 0;
            uVar17 = *param_5;
            goto LAB_1406ae620;
          }
          lVar15 = lVar18 + lStack_a8;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_1406ae1e1:
          (**(code **)(&DAT_14308ba60 + (longlong)param_6 * 8))
                    (param_2 * uVar17 + param_1,lVar15,*param_5,param_9);
        }
        if (-1 < (longlong)uVar17) goto LAB_1406adea1;
        uVar10 = uVar17;
        if (param_7 == 0xf0) goto LAB_1406adf5b;
        if (uVar19 != 6) break;
        if (uVar7 != 0) goto LAB_1406adf5b;
LAB_1406adff8:
        uVar10 = *param_5;
        uVar4 = *param_8;
        if (0 < (longlong)uVar10) {
          if ((longlong)*param_5 < 8) {
LAB_1406ae9a4:
            uVar14 = 0;
          }
          else {
            uVar8 = param_4 * lVar12 + lVar18;
            uVar11 = uVar8 & 0xf;
            if (uVar11 != 0) {
              if ((uVar8 & 3) != 0) goto LAB_1406ae9a4;
              uVar11 = 0x10 - uVar11 >> 2;
            }
            if ((longlong)uVar10 < (longlong)(uVar11 + 8)) goto LAB_1406ae9a4;
            uVar9 = 0;
            uVar14 = uVar10 - (uVar10 - uVar11 & 7);
            if (uVar11 != 0) {
              do {
                *(undefined4 *)(uVar8 + uVar9 * 4) = uVar4;
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar11);
            }
            do {
              puVar1 = (undefined4 *)(uVar8 + uVar11 * 4);
              *puVar1 = uVar4;
              puVar1[1] = uVar4;
              puVar1[2] = uVar4;
              puVar1[3] = uVar4;
              puVar1 = (undefined4 *)(uVar8 + 0x10 + uVar11 * 4);
              *puVar1 = uVar4;
              puVar1[1] = uVar4;
              puVar1[2] = uVar4;
              puVar1[3] = uVar4;
              uVar11 = uVar11 + 8;
            } while (uVar11 < uVar14);
          }
          if (uVar14 < uVar10) {
            do {
              *(undefined4 *)(lVar12 * param_4 + lVar18 + uVar14 * 4) = uVar4;
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar10);
          }
        }
      }
      if (uVar19 != 1) goto LAB_1406adedc;
      uVar10 = 0;
      if (uVar7 != 0) {
        uVar10 = uVar17;
      }
    } while( true );
  }
  if (uVar7 != 0) {
    return;
  }
  if ((param_7 & 0xf) == 6) {
    return;
  }
  if ((param_7 & 0xf) == 1) {
    return;
  }
LAB_1406ae299:
  if ((param_7 & 0xf) != 3) {
    return;
  }
  lVar12 = (longlong)iVar20;
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&DAT_14308ba60 + (longlong)param_6 * 8))
              (param_1 + param_2 * lVar12,param_3,*param_5,param_9);
  }
  else {
    if (((lVar12 < 0) || ((longlong)param_5[1] <= lVar12)) && (param_7 != 0xf0)) {
      if ((longlong)param_5[1] < 2) {
        if (lVar12 < 0) {
          lVar12 = -lVar12;
          if ((param_7 & 0x20) == 0) {
            lVar12 = 0;
          }
        }
        else if ((0 < lVar12) && ((param_7 & 0x20) == 0)) {
          lVar12 = 0;
        }
      }
      else {
        if (lVar12 < 0) goto LAB_1406ae5a0;
        if ((longlong)param_5[1] <= lVar12) {
          do {
            if ((param_7 & 0x20) != 0) break;
            for (lVar12 = (param_5[1] - 1) * 2 - lVar12; lVar12 < 0; lVar12 = -lVar12) {
LAB_1406ae5a0:
            }
          } while ((longlong)param_5[1] <= lVar12);
        }
      }
    }
    FUN_1406aea60(param_1,param_2,lVar12,param_3);
  }
  lVar12 = 1;
  uVar17 = 0;
  if (iVar20 < 2) {
    return;
  }
  lVar18 = ((longlong)param_10 + -1) * param_4 + param_3;
  uVar21 = *param_5;
  do {
    if (0 < (longlong)uVar21) {
      if ((longlong)uVar21 < 4) {
LAB_1406ae566:
        uVar8 = 0;
      }
      else {
        uVar11 = param_3 + param_4 * lVar12;
        uVar10 = uVar11 & 0xf;
        if (uVar10 != 0) {
          if ((uVar11 & 3) != 0) goto LAB_1406ae566;
          uVar10 = 0x10 - uVar10 >> 2;
        }
        if ((longlong)uVar21 < (longlong)(uVar10 + 4)) goto LAB_1406ae566;
        lVar15 = lVar18 - param_4 * lVar12;
        uVar14 = 0;
        uVar8 = uVar21 - (uVar21 - uVar10 & 3);
        if (uVar10 != 0) {
          do {
            *(undefined4 *)(uVar11 + uVar14 * 4) = *(undefined4 *)(lVar15 + uVar14 * 4);
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar10);
        }
        if ((uVar10 * 4 + lVar15 & 0xf) == 0) {
          do {
            puVar2 = (undefined8 *)(lVar15 + uVar10 * 4);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(uVar11 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar8);
        }
        else {
          do {
            puVar2 = (undefined8 *)(lVar15 + uVar10 * 4);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(uVar11 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar8);
        }
      }
      if (uVar8 < uVar21) {
        do {
          *(undefined4 *)(param_3 + lVar12 * param_4 + uVar8 * 4) =
               *(undefined4 *)((lVar18 - lVar12 * param_4) + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar21);
      }
    }
    lVar12 = uVar17 + 2;
    uVar17 = uVar17 + 1;
    if ((ulonglong)(longlong)(iVar20 + -1) <= uVar17) {
      return;
    }
  } while( true );
LAB_1406ae7c0:
  if (0 < (longlong)uVar17) {
    if ((longlong)uVar17 < 8) {
LAB_1406ae8cf:
      uVar14 = 0;
    }
    else {
      uVar8 = param_4 * uVar10 + param_3;
      uVar11 = uVar8 & 0xf;
      if (uVar11 != 0) {
        if ((uVar8 & 3) != 0) goto LAB_1406ae8cf;
        uVar11 = 0x10 - uVar11 >> 2;
      }
      if ((longlong)uVar17 < (longlong)(uVar11 + 8)) goto LAB_1406ae8cf;
      uVar9 = 0;
      uVar14 = uVar17 - (uVar17 - uVar11 & 7);
      if (uVar11 != 0) {
        do {
          *(undefined4 *)(uVar8 + uVar9 * 4) = uVar5;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      do {
        puVar1 = (undefined4 *)(uVar8 + uVar11 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        puVar1 = (undefined4 *)(uVar8 + 0x10 + uVar11 * 4);
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        uVar11 = uVar11 + 8;
      } while (uVar11 < uVar14);
    }
    if (uVar14 < uVar17) {
      do {
        *(undefined4 *)(param_4 * uVar10 + param_3 + uVar14 * 4) = uVar5;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar17);
    }
  }
  uVar10 = uVar10 + 1;
  if (uVar21 <= uVar10) {
    return;
  }
  goto LAB_1406ae7c0;
LAB_1406ae620:
  if (0 < (longlong)uVar17) {
    if ((longlong)uVar17 < 4) {
LAB_1406ae773:
      uVar14 = 0;
    }
    else {
      uVar8 = param_4 * uVar10 + param_3;
      uVar11 = uVar8 & 0xf;
      if (uVar11 != 0) {
        if ((uVar8 & 3) != 0) goto LAB_1406ae773;
        uVar11 = 0x10 - uVar11 >> 2;
      }
      if ((longlong)uVar17 < (longlong)(uVar11 + 4)) goto LAB_1406ae773;
      uVar9 = 0;
      uVar14 = uVar17 - (uVar17 - uVar11 & 3);
      if (uVar11 != 0) {
        do {
          *(undefined4 *)(uVar8 + uVar9 * 4) = *(undefined4 *)(lVar18 + uVar9 * 4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      if ((uVar11 * 4 + lVar18 & 0xf) == 0) {
        do {
          puVar3 = (undefined8 *)(lVar18 + uVar11 * 4);
          uVar6 = puVar3[1];
          puVar2 = (undefined8 *)(uVar8 + uVar11 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          uVar11 = uVar11 + 4;
        } while (uVar11 < uVar14);
      }
      else {
        do {
          puVar3 = (undefined8 *)(lVar18 + uVar11 * 4);
          uVar6 = puVar3[1];
          puVar2 = (undefined8 *)(uVar8 + uVar11 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          uVar11 = uVar11 + 4;
        } while (uVar11 < uVar14);
      }
    }
    if (uVar14 < uVar17) {
      do {
        *(undefined4 *)(param_4 * uVar10 + param_3 + uVar14 * 4) =
             *(undefined4 *)(lVar18 + uVar14 * 4);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar17);
    }
  }
  uVar10 = uVar10 + 1;
  if (uVar21 <= uVar10) {
    return;
  }
  goto LAB_1406ae620;
LAB_1406adedc:
  uVar10 = uVar17;
  if (uVar19 == 3) {
    if ((longlong)param_5[1] < 2) {
      if ((longlong)uVar17 < 0) {
        if (uVar7 == 0) {
          uVar10 = -uVar17;
          if (uVar13 == 0) {
            uVar10 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar17) && (uVar13 == 0)) {
        uVar10 = -uVar17;
        if (uVar7 == 0) {
          uVar10 = 0;
        }
      }
    }
    else if (((longlong)uVar17 < 0) || ((longlong)param_5[1] <= (longlong)uVar17)) {
      if ((longlong)uVar17 < 0) goto LAB_1406ae180;
      while (uVar13 == 0) {
        for (uVar10 = (param_5[1] - 1) * 2 - uVar10; (longlong)uVar10 < 0; uVar10 = -uVar10) {
LAB_1406ae180:
          if (uVar7 != 0) goto LAB_1406adf5b;
        }
        if ((longlong)uVar10 < (longlong)param_5[1]) break;
      }
    }
  }
  goto LAB_1406adf5b;
}

