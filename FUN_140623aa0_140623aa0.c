
void FUN_140623aa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  ulonglong *in_stack_ffffffffffffff18;
  undefined4 uVar19;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  longlong lStack_88;
  int iStack_80;
  uint uStack_78;
  uint uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar12 = 0;
  uVar8 = 0;
  iVar6 = param_10 >> 1;
  uVar13 = param_7 & 0x10;
  lVar16 = 0;
  if (0 < iVar6) {
    uStack_48 = (ulonglong)iVar6;
    uStack_70 = param_7 & 0xf0;
    uVar7 = param_4 * uStack_48 + param_3;
    uVar17 = param_7 & 0xf;
    uStack_90 = param_7 & 0x20;
    lStack_88 = param_3;
    iStack_80 = iVar6;
    uStack_78 = uVar13;
    if (uStack_70 == 0xf0) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,param_7) & 0xffffffff0000000f;
      uStack_a8 = uVar7;
      lStack_98 = param_4;
      goto LAB_140623e99;
    }
    uVar8 = 0;
    uVar10 = uVar7;
    lStack_58 = param_2;
    lStack_50 = param_1;
LAB_140623b6f:
    uVar9 = uVar8;
    if (((longlong)param_5[1] <= (longlong)uVar8) && (param_7 != 0xf0)) {
      if (uVar17 == 6) {
        if (uStack_90 == 0) goto LAB_140623cb3;
      }
      else {
        if (uVar17 != 1) goto LAB_140623ba8;
        if (uStack_90 == 0) {
          uVar9 = param_5[1] - 1;
        }
      }
    }
LAB_140623c3b:
    do {
      in_stack_ffffffffffffff18 = &uStack_68;
      uStack_68 = *param_5;
      uStack_60 = param_5[1];
      FUN_140624680(lStack_50,lStack_58,uVar9,uVar7,in_stack_ffffffffffffff18,param_6,param_7,
                    param_8,param_9,param_10,param_11);
      while( true ) {
        while( true ) {
          uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          iVar6 = (int)uVar8;
          uVar8 = uVar8 + 1;
          lVar16 = lVar16 + param_4;
          lVar12 = (longlong)iVar6 + 1;
          param_2 = lStack_58;
          param_1 = lStack_50;
          if (uStack_48 <= uVar8) {
            param_3 = lStack_88;
            iVar6 = iStack_80;
            if (uStack_78 != 0) {
              lVar16 = 0;
              lVar15 = -uStack_48;
              lVar12 = lStack_88;
              lStack_98 = param_4;
              do {
                uStack_a8 = *param_5;
                uStack_a0 = param_5[1];
                FUN_140624680(lStack_50,lStack_58,lVar15,lVar12,&uStack_a8,param_6,param_7,param_8,
                              param_9,param_10,param_11);
                lVar16 = lVar16 + 1;
                lVar15 = lVar15 + 1;
                lVar12 = lVar12 + lStack_98;
              } while (lVar16 < (longlong)uStack_48);
              return;
            }
            goto LAB_140623f22;
          }
          uVar7 = uVar10 + lVar16;
          if (uStack_70 != 0xf0) break;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
          uStack_a8 = uVar10;
          lStack_98 = param_4;
LAB_140623e99:
          in_stack_ffffffffffffff18 = (ulonglong *)CONCAT44(uVar19,param_10);
          (**(code **)(&DAT_14308b480 + (longlong)param_6 * 8))
                    (param_2 * uVar8 + param_1,uVar7,*param_5,param_9,in_stack_ffffffffffffff18);
          uVar10 = uStack_a8;
          param_4 = lStack_98;
          uVar17 = (uint)uStack_a0;
          lStack_58 = param_2;
          lStack_50 = param_1;
        }
        if (-1 < (longlong)uVar8) goto LAB_140623b6f;
        uVar9 = uVar8;
        if (param_7 == 0xf0) goto LAB_140623c3b;
        if (uVar17 != 6) break;
        if (uStack_78 != 0) goto LAB_140623c3b;
LAB_140623cb3:
        uVar7 = *param_5;
        fVar18 = (float)*param_8;
        if (0 < (longlong)uVar7) {
          if ((longlong)uVar7 < 8) {
LAB_1406245db:
            uVar14 = 0;
          }
          else {
            uVar5 = param_4 * lVar12 + uVar10;
            uVar9 = uVar5 & 0xf;
            if (uVar9 != 0) {
              if ((uVar5 & 3) != 0) goto LAB_1406245db;
              uVar9 = 0x10 - uVar9 >> 2;
            }
            if ((longlong)uVar7 < (longlong)(uVar9 + 8)) goto LAB_1406245db;
            uVar11 = 0;
            uVar14 = uVar7 - (uVar7 - uVar9 & 7);
            if (uVar9 != 0) {
              do {
                *(float *)(uVar5 + uVar11 * 4) = fVar18;
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar9);
            }
            do {
              pfVar1 = (float *)(uVar5 + uVar9 * 4);
              *pfVar1 = fVar18;
              pfVar1[1] = fVar18;
              pfVar1[2] = fVar18;
              pfVar1[3] = fVar18;
              pfVar1 = (float *)(uVar5 + 0x10 + uVar9 * 4);
              *pfVar1 = fVar18;
              pfVar1[1] = fVar18;
              pfVar1[2] = fVar18;
              pfVar1[3] = fVar18;
              uVar9 = uVar9 + 8;
            } while (uVar9 < uVar14);
          }
          if (uVar14 < uVar7) {
            do {
              *(float *)(lVar12 * param_4 + uVar10 + uVar14 * 4) = fVar18;
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar7);
          }
        }
      }
      if (uVar17 != 1) goto LAB_140623ba8;
      uVar9 = 0;
      if (uStack_78 != 0) {
        uVar9 = uVar8;
      }
    } while( true );
  }
  if (uVar13 != 0) {
    return;
  }
  uVar17 = param_7 & 0xf;
LAB_140623f22:
  if (uVar17 == 6) {
    fVar18 = (float)*param_8;
    uVar8 = 0;
    if (0 < iVar6) {
      uVar7 = *param_5;
      do {
        if (0 < (longlong)uVar7) {
          if ((longlong)uVar7 < 8) {
LAB_14062450d:
            uVar5 = 0;
          }
          else {
            uVar9 = param_4 * uVar8 + param_3;
            uVar10 = uVar9 & 0xf;
            if (uVar10 != 0) {
              if ((uVar9 & 3) != 0) goto LAB_14062450d;
              uVar10 = 0x10 - uVar10 >> 2;
            }
            if ((longlong)uVar7 < (longlong)(uVar10 + 8)) goto LAB_14062450d;
            uVar14 = 0;
            uVar5 = uVar7 - (uVar7 - uVar10 & 7);
            if (uVar10 != 0) {
              do {
                *(float *)(uVar9 + uVar14 * 4) = fVar18;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar10);
            }
            do {
              pfVar1 = (float *)(uVar9 + uVar10 * 4);
              *pfVar1 = fVar18;
              pfVar1[1] = fVar18;
              pfVar1[2] = fVar18;
              pfVar1[3] = fVar18;
              pfVar1 = (float *)(uVar9 + 0x10 + uVar10 * 4);
              *pfVar1 = fVar18;
              pfVar1[1] = fVar18;
              pfVar1[2] = fVar18;
              pfVar1[3] = fVar18;
              uVar10 = uVar10 + 8;
            } while (uVar10 < uVar5);
          }
          if (uVar5 < uVar7) {
            do {
              *(float *)(param_4 * uVar8 + param_3 + uVar5 * 4) = fVar18;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)(longlong)iVar6);
    }
    return;
  }
  if (uVar17 == 1) {
    uVar8 = 0;
    if (0 < iVar6) {
      lVar12 = param_4 * iVar6 + param_3;
      uVar7 = *param_5;
      do {
        if (0 < (longlong)uVar7) {
          if ((longlong)uVar7 < 4) {
LAB_1406243b0:
            uVar5 = 0;
          }
          else {
            uVar9 = param_4 * uVar8 + param_3;
            uVar10 = uVar9 & 0xf;
            if (uVar10 != 0) {
              if ((uVar9 & 3) != 0) goto LAB_1406243b0;
              uVar10 = 0x10 - uVar10 >> 2;
            }
            if ((longlong)uVar7 < (longlong)(uVar10 + 4)) goto LAB_1406243b0;
            uVar14 = 0;
            uVar5 = uVar7 - (uVar7 - uVar10 & 3);
            if (uVar10 != 0) {
              do {
                *(undefined4 *)(uVar9 + uVar14 * 4) = *(undefined4 *)(lVar12 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar10);
            }
            if ((lVar12 + uVar10 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar12 + uVar10 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar9 + uVar10 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar10 = uVar10 + 4;
              } while (uVar10 < uVar5);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar12 + uVar10 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar9 + uVar10 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar10 = uVar10 + 4;
              } while (uVar10 < uVar5);
            }
          }
          if (uVar5 < uVar7) {
            do {
              *(undefined4 *)(param_4 * uVar8 + param_3 + uVar5 * 4) =
                   *(undefined4 *)(lVar12 + uVar5 * 4);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)(longlong)iVar6);
    }
  }
  else if (uVar17 == 3) {
    lVar12 = (longlong)iVar6;
    if ((param_7 & 0xf0) == 0xf0) {
      (**(code **)(&DAT_14308b480 + (longlong)param_6 * 8))
                (param_1 + param_2 * lVar12,param_3,*param_5,param_9,CONCAT44(uVar19,param_10));
    }
    else {
      if (((lVar12 < 0) || ((longlong)param_5[1] <= lVar12)) && (param_7 != 0xf0)) {
        uVar8 = param_5[1];
        if ((longlong)uVar8 < 2) {
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
          while( true ) {
            for (; lVar12 < 0; lVar12 = -lVar12) {
            }
            if ((lVar12 < (longlong)uVar8) || ((param_7 & 0x20) != 0)) break;
            lVar12 = (uVar8 - 1) * 2 - lVar12;
          }
        }
      }
      uStack_a8 = *param_5;
      uStack_a0 = param_5[1];
      FUN_140624680(param_1,param_2,lVar12,param_3,&uStack_a8,param_6,param_7,param_8,param_9,
                    param_10,param_11);
    }
    lVar12 = 1;
    uVar8 = 0;
    if (1 < iVar6) {
      lVar16 = ((longlong)param_10 + -1) * param_4 + param_3;
      uVar7 = *param_5;
      do {
        if (0 < (longlong)uVar7) {
          if ((longlong)uVar7 < 4) {
LAB_1406241c5:
            uVar5 = 0;
          }
          else {
            uVar10 = param_3 + param_4 * lVar12;
            uVar9 = uVar10 & 0xf;
            if (uVar9 != 0) {
              if ((uVar10 & 3) != 0) goto LAB_1406241c5;
              uVar9 = 0x10 - uVar9 >> 2;
            }
            if ((longlong)uVar7 < (longlong)(uVar9 + 4)) goto LAB_1406241c5;
            lVar15 = lVar16 - param_4 * lVar12;
            uVar14 = 0;
            uVar5 = uVar7 - (uVar7 - uVar9 & 3);
            if (uVar9 != 0) {
              do {
                *(undefined4 *)(uVar10 + uVar14 * 4) = *(undefined4 *)(lVar15 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar9);
            }
            if ((lVar15 + uVar9 * 4 & 0xf) == 0) {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar9 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar10 + uVar9 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar9 = uVar9 + 4;
              } while (uVar9 < uVar5);
            }
            else {
              do {
                puVar2 = (undefined8 *)(lVar15 + uVar9 * 4);
                uVar4 = puVar2[1];
                puVar3 = (undefined8 *)(uVar10 + uVar9 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                uVar9 = uVar9 + 4;
              } while (uVar9 < uVar5);
            }
          }
          if (uVar5 < uVar7) {
            do {
              *(undefined4 *)(param_3 + lVar12 * param_4 + uVar5 * 4) =
                   *(undefined4 *)((lVar16 - lVar12 * param_4) + uVar5 * 4);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
        }
        lVar12 = uVar8 + 2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulonglong)(longlong)(iVar6 + -1));
    }
  }
  return;
LAB_140623ba8:
  uVar9 = uVar8;
  if (uVar17 == 3) {
    uVar5 = param_5[1];
    if ((longlong)uVar5 < 2) {
      if ((longlong)uVar8 < 0) {
        if (uStack_78 == 0) {
          uVar9 = -uVar8;
          if (uStack_90 == 0) {
            uVar9 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar8) && (uStack_90 == 0)) {
        uVar9 = -uVar8;
        if (uStack_78 == 0) {
          uVar9 = 0;
        }
      }
    }
    else if (((longlong)uVar8 < 0) || ((longlong)uVar5 <= (longlong)uVar8)) {
      if ((longlong)uVar8 < 0) goto LAB_140623e40;
      while (uStack_90 == 0) {
        for (uVar9 = (uVar5 - 1) * 2 - uVar9; (longlong)uVar9 < 0; uVar9 = -uVar9) {
LAB_140623e40:
          if (uStack_78 != 0) goto LAB_140623c3b;
        }
        if ((longlong)uVar9 < (longlong)uVar5) break;
      }
    }
  }
  goto LAB_140623c3b;
}

