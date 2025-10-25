
void FUN_1405db7e0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *in_stack_ffffffffffffff08;
  undefined4 uVar22;
  longlong lStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  int iStack_a0;
  ulonglong uStack_98;
  uint uStack_90;
  longlong lStack_88;
  uint uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  lVar15 = 0;
  uVar20 = 0;
  iVar21 = param_10 >> 1;
  uVar16 = param_7 & 0x10;
  lVar19 = 0;
  if (0 < iVar21) {
    uStack_50 = (ulonglong)iVar21;
    uStack_80 = param_7 & 0xf0;
    lVar12 = param_4 * uStack_50 + param_3;
    uVar11 = param_7 & 0xf;
    uStack_a8 = param_7 & 0x20;
    lVar10 = lVar12;
    iStack_a0 = iVar21;
    uStack_98 = param_3;
    uStack_90 = uVar16;
    lVar9 = param_2;
    lVar7 = param_1;
    lStack_58 = param_4;
    if (uStack_80 == 0xf0) {
      uStack_b0 = CONCAT44(uStack_b0._4_4_,param_7) & 0xffffffff0000000f;
      lStack_b8 = lVar12;
      goto LAB_1405dbd17;
    }
LAB_1405db8ad:
    lStack_60 = lVar7;
    lStack_68 = lVar9;
    uVar13 = uVar20;
    if ((param_5[1] <= (longlong)uVar20) && (param_7 != 0xf0)) {
      if (uVar11 == 6) {
        if (uStack_a8 == 0) goto LAB_1405db9d0;
      }
      else {
        if (uVar11 != 1) goto LAB_1405db8e5;
        if (uStack_a8 == 0) {
          uVar13 = param_5[1] - 1;
        }
      }
    }
LAB_1405db95a:
    in_stack_ffffffffffffff08 = &lStack_78;
    lStack_78 = *param_5;
    lStack_70 = param_5[1];
    FUN_1405dc600(lStack_60,lStack_68,uVar13,lVar10,in_stack_ffffffffffffff08,param_6,param_7,
                  param_8,param_9,param_10,param_11);
LAB_1405dbc00:
    do {
      while( true ) {
        uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
        iVar21 = (int)uVar20;
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + lStack_58;
        lVar15 = (longlong)iVar21 + 1;
        param_1 = lStack_60;
        param_2 = lStack_68;
        if (uStack_50 <= uVar20) {
          param_4 = lStack_58;
          param_3 = uStack_98;
          iVar21 = iStack_a0;
          if (uStack_90 != 0) {
            lVar15 = 0;
            lVar19 = -uStack_50;
            uVar20 = uStack_98;
            do {
              lStack_b8 = *param_5;
              uStack_b0 = param_5[1];
              FUN_1405dc600(lStack_60,lStack_68,lVar19,uVar20,&lStack_b8,param_6,param_7,param_8,
                            param_9,param_10,param_11);
              lVar15 = lVar15 + 1;
              lVar19 = lVar19 + 1;
              uVar20 = uVar20 + lStack_58;
            } while (lVar15 < (longlong)uStack_50);
            return;
          }
          goto LAB_1405dbda2;
        }
        lVar10 = lVar12 + lVar19;
        if (uStack_80 != 0xf0) break;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
        lStack_b8 = lVar12;
LAB_1405dbd17:
        in_stack_ffffffffffffff08 = (longlong *)CONCAT44(uVar22,param_10);
        (**(code **)(&DAT_14308b320 + (longlong)param_6 * 8))
                  (param_2 * uVar20 + param_1,lVar10,*param_5,param_9,in_stack_ffffffffffffff08);
        lVar12 = lStack_b8;
        uVar11 = (uint)uStack_b0;
        lStack_68 = param_2;
        lStack_60 = param_1;
      }
      lVar9 = lStack_68;
      lVar7 = lStack_60;
      if (-1 < (longlong)uVar20) goto LAB_1405db8ad;
      uVar13 = uVar20;
      if (param_7 == 0xf0) goto LAB_1405db95a;
      if (uVar11 != 6) {
        if (uVar11 != 1) goto LAB_1405db8e5;
        uVar13 = 0;
        if (uStack_90 != 0) {
          uVar13 = uVar20;
        }
        goto LAB_1405db95a;
      }
      if (uStack_90 != 0) goto LAB_1405db95a;
LAB_1405db9d0:
    } while (*param_5 * 3 < 1);
    uVar13 = *param_5 * 3 + 2;
    if (6 < (longlong)uVar13 / 3) {
      lStack_88 = lStack_58 * lVar15 + lVar12;
      lVar10 = ((longlong)uVar13 / 3) * 0xc;
      lVar9 = (longlong)param_8 + (4 - lStack_88);
      if (((lVar10 <= lVar9) || (7 < -lVar9)) &&
         ((3 < lStack_88 - (longlong)param_8 || (lVar10 <= -(lStack_88 - (longlong)param_8))))) {
        lVar15 = 1;
        uVar22 = *param_8;
        lVar10 = 0;
        uVar4 = param_8[1];
        uVar5 = param_8[2];
        uVar18 = 0;
        if (uVar13 / 6 != 0) {
          do {
            uVar17 = uVar18;
            uVar18 = uVar17 + 1;
            *(undefined4 *)(lVar10 + lStack_88) = uVar22;
            *(undefined4 *)(lVar10 + 4 + lStack_88) = uVar4;
            *(undefined4 *)(lVar10 + 8 + lStack_88) = uVar5;
            *(undefined4 *)(lVar10 + 0xc + lStack_88) = uVar22;
            *(undefined4 *)(lVar10 + 0x10 + lStack_88) = uVar4;
            *(undefined4 *)(lVar10 + 0x14 + lStack_88) = uVar5;
            lVar10 = lVar10 + 0x18;
          } while (uVar18 < uVar13 / 6);
          lVar15 = uVar17 + 2 + uVar18;
        }
        if (lVar15 - 1U < uVar13 / 3) {
          lVar15 = lVar15 * 3 + -3;
          *(undefined4 *)(lStack_88 + lVar15 * 4) = uVar22;
          *(undefined4 *)(lStack_88 + 4 + lVar15 * 4) = uVar4;
          *(undefined4 *)(lStack_88 + 8 + lVar15 * 4) = uVar5;
        }
        goto LAB_1405dbc00;
      }
    }
    lVar10 = 1;
    lVar9 = 0;
    if (uVar13 / 6 != 0) {
      lVar10 = lStack_58 * lVar15 + lVar12;
      uVar18 = 0;
      do {
        uVar17 = uVar18;
        uVar18 = uVar17 + 1;
        *(undefined4 *)(lVar9 + lVar10) = *param_8;
        *(undefined4 *)(lVar9 + 4 + lVar10) = param_8[1];
        *(undefined4 *)(lVar9 + 8 + lVar10) = param_8[2];
        *(undefined4 *)(lVar9 + 0xc + lVar10) = *param_8;
        *(undefined4 *)(lVar9 + 0x10 + lVar10) = param_8[1];
        *(undefined4 *)(lVar9 + 0x14 + lVar10) = param_8[2];
        lVar9 = lVar9 + 0x18;
      } while (uVar18 < uVar13 / 6);
      lVar10 = uVar17 + 2 + uVar18;
    }
    if (lVar10 - 1U < uVar13 / 3) {
      lVar9 = lVar15 * lStack_58 + lVar12;
      lVar15 = lVar10 * 3 + -3;
      *(undefined4 *)(lVar9 + lVar15 * 4) = *param_8;
      *(undefined4 *)(lVar9 + 4 + lVar15 * 4) = param_8[1];
      *(undefined4 *)(lVar9 + 8 + lVar15 * 4) = param_8[2];
    }
    goto LAB_1405dbc00;
  }
  if (uVar16 != 0) {
    return;
  }
  uVar11 = param_7 & 0xf;
LAB_1405dbda2:
  if (uVar11 == 6) {
    uVar20 = (ulonglong)iVar21;
    if (0 < (longlong)uVar20) {
      lVar15 = *param_5 * 3;
      uVar13 = lVar15 + 2;
      if (((param_4 < (longlong)uVar13 / 3) ||
          ((puVar2 = (undefined4 *)
                     ((uVar20 - 1) * param_4 + (((longlong)uVar13 / 3) * 3 + -3) * 4 + 0xb + param_3
                     ), param_8 < puVar2 && (param_3 < (longlong)param_8 + 3U)))) ||
         ((param_3 < (longlong)param_8 + 0xbU && (param_8 + 1 < puVar2)))) {
        uVar18 = 0;
        lVar19 = 0;
        do {
          if (0 < lVar15) {
            lVar10 = 1;
            lVar12 = 0;
            if (uVar13 / 6 != 0) {
              lVar10 = param_3 + lVar19;
              uVar17 = 0;
              do {
                uVar8 = uVar17;
                uVar17 = uVar8 + 1;
                *(undefined4 *)(lVar12 + lVar10) = *param_8;
                *(undefined4 *)(lVar12 + 4 + lVar10) = param_8[1];
                *(undefined4 *)(lVar12 + 8 + lVar10) = param_8[2];
                *(undefined4 *)(lVar12 + 0xc + lVar10) = *param_8;
                *(undefined4 *)(lVar12 + 0x10 + lVar10) = param_8[1];
                *(undefined4 *)(lVar12 + 0x14 + lVar10) = param_8[2];
                lVar12 = lVar12 + 0x18;
              } while (uVar17 < uVar13 / 6);
              lVar10 = uVar8 + 2 + uVar17;
            }
            if (lVar10 - 1U < uVar13 / 3) {
              lVar10 = param_3 + (lVar10 * 3 + -3) * 4;
              *(undefined4 *)(lVar10 + lVar19) = *param_8;
              *(undefined4 *)(lVar10 + 4 + lVar19) = param_8[1];
              *(undefined4 *)(lVar10 + 8 + lVar19) = param_8[2];
            }
          }
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + param_4;
        } while (uVar18 < uVar20);
      }
      else {
        uVar18 = 0;
        lVar19 = 0;
        do {
          if (0 < lVar15) {
            lVar10 = 1;
            lVar12 = 0;
            if (uVar13 / 6 != 0) {
              lVar10 = param_3 + lVar19;
              uVar17 = 0;
              do {
                uVar8 = uVar17;
                uVar17 = uVar8 + 1;
                *(undefined4 *)(lVar12 + lVar10) = *param_8;
                *(undefined4 *)(lVar12 + 4 + lVar10) = param_8[1];
                *(undefined4 *)(lVar12 + 8 + lVar10) = param_8[2];
                *(undefined4 *)(lVar12 + 0xc + lVar10) = *param_8;
                *(undefined4 *)(lVar12 + 0x10 + lVar10) = param_8[1];
                *(undefined4 *)(lVar12 + 0x14 + lVar10) = param_8[2];
                lVar12 = lVar12 + 0x18;
              } while (uVar17 < uVar13 / 6);
              lVar10 = uVar8 + 2 + uVar17;
            }
            if (lVar10 - 1U < uVar13 / 3) {
              lVar10 = param_3 + (lVar10 * 3 + -3) * 4;
              *(undefined4 *)(lVar10 + lVar19) = *param_8;
              *(undefined4 *)(lVar10 + 4 + lVar19) = param_8[1];
              *(undefined4 *)(lVar10 + 8 + lVar19) = param_8[2];
            }
          }
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + param_4;
        } while (uVar18 < uVar20);
      }
    }
    return;
  }
  if (uVar11 == 1) {
    uVar20 = 0;
    if (0 < iVar21) {
      uVar13 = *param_5 * 3;
      lVar15 = param_4 * iVar21 + param_3;
      do {
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 4) {
LAB_1405dc230:
            uVar8 = 0;
          }
          else {
            uVar17 = param_4 * uVar20 + param_3;
            uVar18 = uVar17 & 0xf;
            if (uVar18 != 0) {
              if ((uVar17 & 3) != 0) goto LAB_1405dc230;
              uVar18 = 0x10 - uVar18 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar18 + 4)) goto LAB_1405dc230;
            uVar14 = 0;
            uVar8 = uVar13 - (uVar13 - uVar18 & 3);
            if (uVar18 != 0) {
              do {
                *(undefined4 *)(uVar17 + uVar14 * 4) = *(undefined4 *)(lVar15 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar18);
            }
            if ((lVar15 + uVar18 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar15 + uVar18 * 4);
                uVar6 = puVar1[1];
                puVar3 = (undefined8 *)(uVar17 + uVar18 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar6;
                uVar18 = uVar18 + 4;
              } while (uVar18 < uVar8);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar15 + uVar18 * 4);
                uVar6 = puVar1[1];
                puVar3 = (undefined8 *)(uVar17 + uVar18 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar6;
                uVar18 = uVar18 + 4;
              } while (uVar18 < uVar8);
            }
          }
          if (uVar8 < uVar13) {
            do {
              *(undefined4 *)(param_4 * uVar20 + param_3 + uVar8 * 4) =
                   *(undefined4 *)(lVar15 + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar13);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulonglong)(longlong)iVar21);
    }
  }
  else if (uVar11 == 3) {
    lVar15 = (longlong)iVar21;
    if ((param_7 & 0xf0) == 0xf0) {
      (**(code **)(&DAT_14308b320 + (longlong)param_6 * 8))
                (param_1 + param_2 * lVar15,param_3,*param_5,param_9,CONCAT44(uVar22,param_10));
    }
    else {
      if ((((lVar15 < 0) || (param_5[1] <= lVar15)) && (param_7 != 0xf0)) &&
         (lVar19 = param_5[1], 1 < lVar19)) {
        while( true ) {
          for (; lVar15 < 0; lVar15 = -lVar15) {
          }
          if ((lVar15 < lVar19) || ((param_7 & 0x20) != 0)) break;
          lVar15 = (lVar19 + -1) * 2 - lVar15;
        }
      }
      lStack_b8 = *param_5;
      uStack_b0 = param_5[1];
      FUN_1405dc600();
    }
    lVar15 = 1;
    uVar20 = 0;
    if (1 < iVar21) {
      uVar13 = *param_5 * 3;
      lVar19 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)uVar13) {
          if ((longlong)uVar13 < 4) {
LAB_1405dc045:
            uVar8 = 0;
          }
          else {
            uVar18 = param_3 + param_4 * lVar15;
            uVar17 = uVar18 & 0xf;
            if (uVar17 != 0) {
              if ((uVar18 & 3) != 0) goto LAB_1405dc045;
              uVar17 = 0x10 - uVar17 >> 2;
            }
            if ((longlong)uVar13 < (longlong)(uVar17 + 4)) goto LAB_1405dc045;
            lVar10 = lVar19 - param_4 * lVar15;
            uVar14 = 0;
            uVar8 = uVar13 - (uVar13 - uVar17 & 3);
            if (uVar17 != 0) {
              do {
                *(undefined4 *)(uVar18 + uVar14 * 4) = *(undefined4 *)(lVar10 + uVar14 * 4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar17);
            }
            if ((lVar10 + uVar17 * 4 & 0xf) == 0) {
              do {
                puVar1 = (undefined8 *)(lVar10 + uVar17 * 4);
                uVar6 = puVar1[1];
                puVar3 = (undefined8 *)(uVar18 + uVar17 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar6;
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar8);
            }
            else {
              do {
                puVar1 = (undefined8 *)(lVar10 + uVar17 * 4);
                uVar6 = puVar1[1];
                puVar3 = (undefined8 *)(uVar18 + uVar17 * 4);
                *puVar3 = *puVar1;
                puVar3[1] = uVar6;
                uVar17 = uVar17 + 4;
              } while (uVar17 < uVar8);
            }
          }
          if (uVar8 < uVar13) {
            do {
              *(undefined4 *)(param_3 + lVar15 * param_4 + uVar8 * 4) =
                   *(undefined4 *)((lVar19 - lVar15 * param_4) + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar13);
          }
        }
        lVar15 = uVar20 + 2;
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulonglong)(longlong)(iVar21 + -1));
    }
  }
  return;
LAB_1405db8e5:
  uVar13 = uVar20;
  if (uVar11 == 3) {
    lVar15 = param_5[1];
    if (lVar15 < 2) {
      if ((longlong)uVar20 < 0) {
        if (uStack_90 == 0) {
          uVar13 = -uVar20;
          if (uStack_a8 == 0) {
            uVar13 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar20) && (uStack_a8 == 0)) {
        uVar13 = -uVar20;
        if (uStack_90 == 0) {
          uVar13 = 0;
        }
      }
    }
    else if (((longlong)uVar20 < 0) || (lVar15 <= (longlong)uVar20)) {
      if ((longlong)uVar20 < 0) goto LAB_1405dbcc0;
      while (uStack_a8 == 0) {
        for (uVar13 = (lVar15 + -1) * 2 - uVar13; (longlong)uVar13 < 0; uVar13 = -uVar13) {
LAB_1405dbcc0:
          if (uStack_90 != 0) goto LAB_1405db95a;
        }
        if ((longlong)uVar13 < lVar15) break;
      }
    }
  }
  goto LAB_1405db95a;
}

