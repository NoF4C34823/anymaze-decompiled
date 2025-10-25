
void FUN_1405d9f20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,int param_10,undefined8 param_11)

{
  undefined4 *puVar1;
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
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong *in_stack_ffffffffffffff18;
  undefined4 uVar19;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
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
  lVar13 = 0;
  uVar9 = 0;
  iVar6 = param_10 >> 1;
  uVar15 = param_7 & 0x10;
  uVar7 = 0;
  if (0 < iVar6) {
    uStack_48 = (ulonglong)iVar6;
    uStack_70 = param_7 & 0xf0;
    lVar17 = param_4 * uStack_48 + param_3;
    uVar18 = param_7 & 0xf;
    uStack_90 = param_7 & 0x20;
    lStack_88 = param_3;
    iStack_80 = iVar6;
    uStack_78 = uVar15;
    if (uStack_70 == 0xf0) {
      uStack_a8 = 0;
      uVar7 = uStack_a8;
      uVar8 = lVar17;
      lVar14 = param_4;
      goto LAB_1405da2fc;
    }
    uVar9 = 0;
    uVar8 = lVar17;
    lStack_58 = param_2;
    lStack_50 = param_1;
LAB_1405d9fee:
    uVar10 = uVar9;
    if (((longlong)param_5[1] <= (longlong)uVar9) && (param_7 != 0xf0)) {
      if (uVar18 == 6) {
        if (uStack_90 == 0) goto LAB_1405da134;
      }
      else {
        if (uVar18 != 1) goto LAB_1405da028;
        if (uStack_90 == 0) {
          uVar10 = param_5[1] - 1;
        }
      }
    }
LAB_1405da0bb:
    do {
      in_stack_ffffffffffffff18 = &uStack_68;
      uStack_68 = *param_5;
      uStack_60 = param_5[1];
      FUN_1405dab00(lStack_50,lStack_58,uVar10,lVar17,in_stack_ffffffffffffff18,param_6,param_7,
                    param_8,param_9,param_10,param_11);
      while( true ) {
        while( true ) {
          uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          iVar6 = (int)uVar9;
          uVar9 = uVar9 + 1;
          uVar7 = uVar7 + param_4;
          lVar13 = (longlong)iVar6 + 1;
          param_2 = lStack_58;
          param_1 = lStack_50;
          if (uStack_48 <= uVar9) {
            if (uStack_78 != 0) {
              lVar17 = 0;
              lVar14 = -uStack_48;
              lVar13 = lStack_88;
              lStack_98 = param_4;
              do {
                uStack_a8 = *param_5;
                uStack_a0 = param_5[1];
                FUN_1405dab00(lStack_50,lStack_58,lVar14,lVar13,&uStack_a8,param_6,param_7,param_8,
                              param_9,param_10,param_11);
                lVar17 = lVar17 + 1;
                lVar14 = lVar14 + 1;
                lVar13 = lVar13 + lStack_98;
              } while (lVar17 < (longlong)uStack_48);
              return;
            }
            if (uVar18 == 6) {
              uVar19 = *param_8;
              uVar9 = 0;
              uVar7 = *param_5;
              goto LAB_1405da880;
            }
            param_3 = lStack_88;
            iVar6 = iStack_80;
            if (uVar18 != 1) goto LAB_1405da3b9;
            uVar9 = 0;
            uVar7 = *param_5;
            goto LAB_1405da720;
          }
          lVar17 = uVar8 + uVar7;
          lVar14 = param_4;
          if (uStack_70 != 0xf0) break;
LAB_1405da2fc:
          lStack_98 = lVar14;
          uStack_a0 = uVar8;
          uStack_a8 = uVar7;
          in_stack_ffffffffffffff18 = (ulonglong *)CONCAT44(uVar19,param_10);
          (**(code **)(&DAT_14308b300 + (longlong)param_6 * 8))
                    (param_2 * uVar9 + param_1,lVar17,*param_5,param_9,in_stack_ffffffffffffff18);
          uVar7 = uStack_a8;
          uVar8 = uStack_a0;
          param_4 = lStack_98;
          lStack_58 = param_2;
          lStack_50 = param_1;
        }
        if (-1 < (longlong)uVar9) goto LAB_1405d9fee;
        uVar10 = uVar9;
        if (param_7 == 0xf0) goto LAB_1405da0bb;
        if (uVar18 != 6) break;
        if (uStack_78 != 0) goto LAB_1405da0bb;
LAB_1405da134:
        uVar10 = *param_5;
        uVar19 = *param_8;
        if (0 < (longlong)uVar10) {
          if ((longlong)uVar10 < 8) {
LAB_1405daa5b:
            uVar16 = 0;
          }
          else {
            uVar5 = param_4 * lVar13 + uVar8;
            uVar11 = uVar5 & 0xf;
            if (uVar11 != 0) {
              if ((uVar5 & 3) != 0) goto LAB_1405daa5b;
              uVar11 = 0x10 - uVar11 >> 2;
            }
            if ((longlong)uVar10 < (longlong)(uVar11 + 8)) goto LAB_1405daa5b;
            uVar12 = 0;
            uVar16 = uVar10 - (uVar10 - uVar11 & 7);
            if (uVar11 != 0) {
              do {
                *(undefined4 *)(uVar5 + uVar12 * 4) = uVar19;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar11);
            }
            do {
              puVar1 = (undefined4 *)(uVar5 + uVar11 * 4);
              *puVar1 = uVar19;
              puVar1[1] = uVar19;
              puVar1[2] = uVar19;
              puVar1[3] = uVar19;
              puVar1 = (undefined4 *)(uVar5 + 0x10 + uVar11 * 4);
              *puVar1 = uVar19;
              puVar1[1] = uVar19;
              puVar1[2] = uVar19;
              puVar1[3] = uVar19;
              uVar11 = uVar11 + 8;
            } while (uVar11 < uVar16);
          }
          if (uVar16 < uVar10) {
            do {
              *(undefined4 *)(lVar13 * param_4 + uVar8 + uVar16 * 4) = uVar19;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar10);
          }
        }
      }
      if (uVar18 != 1) goto LAB_1405da028;
      uVar10 = 0;
      if (uStack_78 != 0) {
        uVar10 = uVar9;
      }
    } while( true );
  }
  if (uVar15 != 0) {
    return;
  }
  if ((param_7 & 0xf) == 6) {
    return;
  }
  if ((param_7 & 0xf) == 1) {
    return;
  }
LAB_1405da3b9:
  if ((param_7 & 0xf) != 3) {
    return;
  }
  lVar13 = (longlong)iVar6;
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&DAT_14308b300 + (longlong)param_6 * 8))
              (param_1 + param_2 * lVar13,param_3,*param_5,param_9,CONCAT44(uVar19,param_10));
  }
  else {
    if (((lVar13 < 0) || ((longlong)param_5[1] <= lVar13)) && (param_7 != 0xf0)) {
      uVar7 = param_5[1];
      if ((longlong)uVar7 < 2) {
        if (lVar13 < 0) {
          lVar13 = -lVar13;
          if ((param_7 & 0x20) == 0) {
            lVar13 = 0;
          }
        }
        else if ((0 < lVar13) && ((param_7 & 0x20) == 0)) {
          lVar13 = 0;
        }
      }
      else {
        while( true ) {
          for (; lVar13 < 0; lVar13 = -lVar13) {
          }
          if ((lVar13 < (longlong)uVar7) || ((param_7 & 0x20) != 0)) break;
          lVar13 = (uVar7 - 1) * 2 - lVar13;
        }
      }
    }
    uStack_a8 = *param_5;
    uStack_a0 = param_5[1];
    FUN_1405dab00(param_1,param_2,lVar13,param_3,&uStack_a8,param_6,param_7,param_8,param_9,param_10
                  ,param_11);
  }
  lVar13 = 1;
  uVar7 = 0;
  if (iVar6 < 2) {
    return;
  }
  lVar17 = ((longlong)param_10 + -1) * param_4 + param_3;
  uVar9 = *param_5;
  do {
    if (0 < (longlong)uVar9) {
      if ((longlong)uVar9 < 4) {
LAB_1405da665:
        uVar5 = 0;
      }
      else {
        uVar8 = param_3 + param_4 * lVar13;
        uVar10 = uVar8 & 0xf;
        if (uVar10 != 0) {
          if ((uVar8 & 3) != 0) goto LAB_1405da665;
          uVar10 = 0x10 - uVar10 >> 2;
        }
        if ((longlong)uVar9 < (longlong)(uVar10 + 4)) goto LAB_1405da665;
        lVar14 = lVar17 - param_4 * lVar13;
        uVar11 = 0;
        uVar5 = uVar9 - (uVar9 - uVar10 & 3);
        if (uVar10 != 0) {
          do {
            *(undefined4 *)(uVar8 + uVar11 * 4) = *(undefined4 *)(lVar14 + uVar11 * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
        if ((lVar14 + uVar10 * 4 & 0xf) == 0) {
          do {
            puVar2 = (undefined8 *)(lVar14 + uVar10 * 4);
            uVar4 = puVar2[1];
            puVar3 = (undefined8 *)(uVar8 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar4;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar5);
        }
        else {
          do {
            puVar2 = (undefined8 *)(lVar14 + uVar10 * 4);
            uVar4 = puVar2[1];
            puVar3 = (undefined8 *)(uVar8 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar4;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar5);
        }
      }
      if (uVar5 < uVar9) {
        do {
          *(undefined4 *)(param_3 + lVar13 * param_4 + uVar5 * 4) =
               *(undefined4 *)((lVar17 - lVar13 * param_4) + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    lVar13 = uVar7 + 2;
    uVar7 = uVar7 + 1;
    if ((ulonglong)(longlong)(iVar6 + -1) <= uVar7) {
      return;
    }
  } while( true );
LAB_1405da880:
  if (0 < (longlong)uVar7) {
    if ((longlong)uVar7 < 8) {
LAB_1405da98d:
      uVar5 = 0;
    }
    else {
      uVar10 = param_4 * uVar9 + lStack_88;
      uVar8 = uVar10 & 0xf;
      if (uVar8 != 0) {
        if ((uVar10 & 3) != 0) goto LAB_1405da98d;
        uVar8 = 0x10 - uVar8 >> 2;
      }
      if ((longlong)uVar7 < (longlong)(uVar8 + 8)) goto LAB_1405da98d;
      uVar11 = 0;
      uVar5 = uVar7 - (uVar7 - uVar8 & 7);
      if (uVar8 != 0) {
        do {
          *(undefined4 *)(uVar10 + uVar11 * 4) = uVar19;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
      }
      do {
        puVar1 = (undefined4 *)(uVar10 + uVar8 * 4);
        *puVar1 = uVar19;
        puVar1[1] = uVar19;
        puVar1[2] = uVar19;
        puVar1[3] = uVar19;
        puVar1 = (undefined4 *)(uVar10 + 0x10 + uVar8 * 4);
        *puVar1 = uVar19;
        puVar1[1] = uVar19;
        puVar1[2] = uVar19;
        puVar1[3] = uVar19;
        uVar8 = uVar8 + 8;
      } while (uVar8 < uVar5);
    }
    if (uVar5 < uVar7) {
      do {
        *(undefined4 *)(param_4 * uVar9 + lStack_88 + uVar5 * 4) = uVar19;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
  }
  uVar9 = uVar9 + 1;
  if (uStack_48 <= uVar9) {
    return;
  }
  goto LAB_1405da880;
LAB_1405da720:
  if (0 < (longlong)uVar7) {
    if ((longlong)uVar7 < 4) {
LAB_1405da84f:
      uVar11 = 0;
    }
    else {
      uVar5 = param_4 * uVar9 + lStack_88;
      uVar10 = uVar5 & 0xf;
      if (uVar10 != 0) {
        if ((uVar5 & 3) != 0) goto LAB_1405da84f;
        uVar10 = 0x10 - uVar10 >> 2;
      }
      if ((longlong)uVar7 < (longlong)(uVar10 + 4)) goto LAB_1405da84f;
      uVar16 = 0;
      uVar11 = uVar7 - (uVar7 - uVar10 & 3);
      if (uVar10 != 0) {
        do {
          *(undefined4 *)(uVar5 + uVar16 * 4) = *(undefined4 *)(uVar8 + uVar16 * 4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar10);
      }
      if ((uVar8 + uVar10 * 4 & 0xf) == 0) {
        do {
          puVar2 = (undefined8 *)(uVar8 + uVar10 * 4);
          uVar4 = puVar2[1];
          puVar3 = (undefined8 *)(uVar5 + uVar10 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar10 < uVar11);
      }
      else {
        do {
          puVar2 = (undefined8 *)(uVar8 + uVar10 * 4);
          uVar4 = puVar2[1];
          puVar3 = (undefined8 *)(uVar5 + uVar10 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar10 < uVar11);
      }
    }
    if (uVar11 < uVar7) {
      do {
        *(undefined4 *)(param_4 * uVar9 + lStack_88 + uVar11 * 4) =
             *(undefined4 *)(uVar8 + uVar11 * 4);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
    }
  }
  uVar9 = uVar9 + 1;
  if (uStack_48 <= uVar9) {
    return;
  }
  goto LAB_1405da720;
LAB_1405da028:
  uVar10 = uVar9;
  if (uVar18 == 3) {
    uVar5 = param_5[1];
    if ((longlong)uVar5 < 2) {
      if ((longlong)uVar9 < 0) {
        if (uStack_78 == 0) {
          uVar10 = -uVar9;
          if (uStack_90 == 0) {
            uVar10 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar9) && (uStack_90 == 0)) {
        uVar10 = -uVar9;
        if (uStack_78 == 0) {
          uVar10 = 0;
        }
      }
    }
    else if (((longlong)uVar9 < 0) || ((longlong)uVar5 <= (longlong)uVar9)) {
      if ((longlong)uVar9 < 0) goto LAB_1405da2a0;
      while (uStack_90 == 0) {
        for (uVar10 = (uVar5 - 1) * 2 - uVar10; (longlong)uVar10 < 0; uVar10 = -uVar10) {
LAB_1405da2a0:
          if (uStack_78 != 0) goto LAB_1405da0bb;
        }
        if ((longlong)uVar10 < (longlong)uVar5) break;
      }
    }
  }
  goto LAB_1405da0bb;
}

