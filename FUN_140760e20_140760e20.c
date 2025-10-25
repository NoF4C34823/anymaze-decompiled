
void FUN_140760e20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,int param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined4 *in_stack_ffffffffffffff18;
  undefined4 uVar20;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  int iStack_88;
  longlong lStack_80;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  iVar19 = param_10 >> 1;
  lVar6 = 0;
  uVar14 = param_7 & 0x10;
  uVar16 = 0;
  uVar9 = 0;
  if (0 < iVar19) {
    uStack_48 = (ulonglong)iVar19;
    uStack_70 = param_7 & 0xf0;
    uVar18 = param_7 & 0xf;
    lVar17 = param_4 * uStack_48 + param_3;
    uStack_90 = param_7 & 0x20;
    uVar12 = lVar17;
    iStack_88 = iVar19;
    lStack_80 = param_3;
    uStack_78 = uVar14;
    lVar15 = param_2;
    lVar5 = param_1;
    if (uStack_70 == 0xf0) {
      uStack_a8 = 0;
      uVar9 = uStack_a8;
      lVar15 = param_4;
      goto LAB_140761220;
    }
LAB_140760ef1:
    lStack_50 = lVar5;
    lStack_58 = lVar15;
    uVar10 = uVar16;
    if (((longlong)param_5[1] <= (longlong)uVar16) && (param_7 != 0xf0)) {
      if (uVar18 == 6) {
        if (uStack_90 == 0) goto LAB_14076102b;
      }
      else {
        if (uVar18 != 1) goto LAB_140760f2c;
        if (uStack_90 == 0) {
          uVar10 = param_5[1] - 1;
        }
      }
    }
LAB_140760fba:
    do {
      uStack_68 = (undefined4)*param_5;
      uStack_64 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_60 = (undefined4)param_5[1];
      uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
      in_stack_ffffffffffffff18 = &uStack_68;
      FUN_140761a20(lStack_50,lStack_58,uVar10,lVar17,in_stack_ffffffffffffff18,param_6,param_7,
                    param_8,param_9,param_10,param_11);
      while( true ) {
        while( true ) {
          uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
          iVar19 = (int)uVar16;
          uVar16 = uVar16 + 1;
          uVar9 = uVar9 + param_4;
          lVar6 = (longlong)iVar19 + 1;
          param_2 = lStack_58;
          param_1 = lStack_50;
          if (uStack_48 <= uVar16) {
            if (uStack_78 != 0) {
              lVar17 = 0;
              lVar15 = -uStack_48;
              lVar6 = lStack_80;
              lStack_98 = param_4;
              do {
                uStack_a8 = *param_5;
                uStack_a0 = param_5[1];
                FUN_140761a20(lStack_50,lStack_58,lVar15,lVar6,&uStack_a8,param_6,param_7,param_8,
                              param_9,param_10,param_11);
                lVar17 = lVar17 + 1;
                lVar6 = lVar6 + lStack_98;
                lVar15 = lVar15 + 1;
              } while (lVar17 < (longlong)uStack_48);
              return;
            }
            if (uVar18 == 6) {
              uVar20 = *param_8;
              uVar16 = 0;
              uVar9 = *param_5;
              goto LAB_140761780;
            }
            param_3 = lStack_80;
            iVar19 = iStack_88;
            if (uVar18 != 1) goto LAB_1407612d7;
            uVar16 = 0;
            uVar9 = *param_5;
            goto LAB_140761620;
          }
          lVar17 = uVar12 + uVar9;
          lVar15 = param_4;
          if (uStack_70 != 0xf0) break;
LAB_140761220:
          lStack_98 = lVar15;
          uStack_a0 = uVar12;
          uStack_a8 = uVar9;
          in_stack_ffffffffffffff18 = (undefined4 *)CONCAT44(uVar20,param_10);
          (*(code *)(&PTR_FUN_14308c100)[param_6])
                    (param_2 * uVar16 + param_1,lVar17,*param_5,param_9,in_stack_ffffffffffffff18);
          param_4 = lStack_98;
          uVar9 = uStack_a8;
          uVar12 = uStack_a0;
          lStack_58 = param_2;
          lStack_50 = param_1;
        }
        lVar15 = lStack_58;
        lVar5 = lStack_50;
        if (-1 < (longlong)uVar16) goto LAB_140760ef1;
        uVar10 = uVar16;
        if (param_7 == 0xf0) goto LAB_140760fba;
        if (uVar18 != 6) break;
        if (uStack_78 != 0) goto LAB_140760fba;
LAB_14076102b:
        uVar10 = *param_5;
        uVar20 = *param_8;
        if (0 < (longlong)uVar10) {
          if ((longlong)uVar10 < 8) {
LAB_140761960:
            uVar7 = 0;
          }
          else {
            uVar13 = param_4 * lVar6 + uVar12;
            uVar11 = uVar13 & 0xf;
            if (uVar11 != 0) {
              if ((uVar13 & 3) != 0) goto LAB_140761960;
              uVar11 = 0x10 - uVar11 >> 2;
            }
            if ((longlong)uVar10 < (longlong)(uVar11 + 8)) goto LAB_140761960;
            uVar8 = 0;
            uVar7 = uVar10 - (uVar10 - uVar11 & 7);
            if (uVar11 != 0) {
              do {
                *(undefined4 *)(uVar13 + uVar8 * 4) = uVar20;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar11);
            }
            do {
              puVar1 = (undefined4 *)(uVar13 + uVar11 * 4);
              *puVar1 = uVar20;
              puVar1[1] = uVar20;
              puVar1[2] = uVar20;
              puVar1[3] = uVar20;
              puVar1 = (undefined4 *)(uVar13 + 0x10 + uVar11 * 4);
              *puVar1 = uVar20;
              puVar1[1] = uVar20;
              puVar1[2] = uVar20;
              puVar1[3] = uVar20;
              uVar11 = uVar11 + 8;
            } while (uVar11 < uVar7);
          }
          if (uVar7 < uVar10) {
            do {
              *(undefined4 *)(lVar6 * param_4 + uVar12 + uVar7 * 4) = uVar20;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar10);
          }
        }
      }
      if (uVar18 != 1) goto LAB_140760f2c;
      uVar10 = 0;
      if (uStack_78 != 0) {
        uVar10 = uVar16;
      }
    } while( true );
  }
  if (uVar14 != 0) {
    return;
  }
  if ((param_7 & 0xf) == 6) {
    return;
  }
  if ((param_7 & 0xf) == 1) {
    return;
  }
LAB_1407612d7:
  if ((param_7 & 0xf) != 3) {
    return;
  }
  lVar6 = (longlong)iVar19;
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308c100)[param_6])
              (param_1 + param_2 * lVar6,param_3,*param_5,param_9,CONCAT44(uVar20,param_10));
  }
  else {
    if (((lVar6 < 0) || ((longlong)param_5[1] <= lVar6)) && (param_7 != 0xf0)) {
      uVar9 = param_5[1];
      if ((longlong)uVar9 < 2) {
        if (lVar6 < 0) {
          lVar6 = -lVar6;
          if ((param_7 & 0x20) == 0) {
            lVar6 = 0;
          }
        }
        else if ((0 < lVar6) && ((param_7 & 0x20) == 0)) {
          lVar6 = 0;
        }
      }
      else {
        while( true ) {
          for (; lVar6 < 0; lVar6 = -lVar6) {
          }
          if ((lVar6 < (longlong)uVar9) || ((param_7 & 0x20) != 0)) break;
          lVar6 = (uVar9 - 1) * 2 - lVar6;
        }
      }
    }
    uStack_a8 = *param_5;
    uStack_a0 = param_5[1];
    FUN_140761a20(param_1,param_2,lVar6,param_3,&uStack_a8,param_6,param_7,param_8,param_9,param_10,
                  param_11);
  }
  lVar6 = 1;
  uVar9 = 0;
  if (iVar19 < 2) {
    return;
  }
  uVar16 = *param_5;
  lVar17 = ((longlong)param_10 + -1) * param_4 + param_3;
  do {
    if (0 < (longlong)uVar16) {
      if ((longlong)uVar16 < 4) {
LAB_140761567:
        uVar11 = 0;
      }
      else {
        uVar12 = param_3 + param_4 * lVar6;
        uVar10 = uVar12 & 0xf;
        if (uVar10 != 0) {
          if ((uVar12 & 3) != 0) goto LAB_140761567;
          uVar10 = 0x10 - uVar10 >> 2;
        }
        if ((longlong)uVar16 < (longlong)(uVar10 + 4)) goto LAB_140761567;
        lVar15 = lVar17 - param_4 * lVar6;
        uVar13 = 0;
        uVar11 = uVar16 - (uVar16 - uVar10 & 3);
        if (uVar10 != 0) {
          do {
            *(undefined4 *)(uVar12 + uVar13 * 4) = *(undefined4 *)(lVar15 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar10);
        }
        if ((lVar15 + uVar10 * 4 & 0xf) == 0) {
          do {
            puVar2 = (undefined8 *)(lVar15 + uVar10 * 4);
            uVar4 = puVar2[1];
            puVar3 = (undefined8 *)(uVar12 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar4;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar11);
        }
        else {
          do {
            puVar2 = (undefined8 *)(lVar15 + uVar10 * 4);
            uVar4 = puVar2[1];
            puVar3 = (undefined8 *)(uVar12 + uVar10 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar4;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar11);
        }
      }
      if (uVar11 < uVar16) {
        do {
          *(undefined4 *)(param_3 + lVar6 * param_4 + uVar11 * 4) =
               *(undefined4 *)((lVar17 - lVar6 * param_4) + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar16);
      }
    }
    lVar6 = uVar9 + 2;
    uVar9 = uVar9 + 1;
    if ((ulonglong)(longlong)(iVar19 + -1) <= uVar9) {
      return;
    }
  } while( true );
LAB_140761780:
  if (0 < (longlong)uVar9) {
    if ((longlong)uVar9 < 8) {
LAB_14076188f:
      uVar11 = 0;
    }
    else {
      uVar10 = param_4 * uVar16 + lStack_80;
      uVar12 = uVar10 & 0xf;
      if (uVar12 != 0) {
        if ((uVar10 & 3) != 0) goto LAB_14076188f;
        uVar12 = 0x10 - uVar12 >> 2;
      }
      if ((longlong)uVar9 < (longlong)(uVar12 + 8)) goto LAB_14076188f;
      uVar13 = 0;
      uVar11 = uVar9 - (uVar9 - uVar12 & 7);
      if (uVar12 != 0) {
        do {
          *(undefined4 *)(uVar10 + uVar13 * 4) = uVar20;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      do {
        puVar1 = (undefined4 *)(uVar10 + uVar12 * 4);
        *puVar1 = uVar20;
        puVar1[1] = uVar20;
        puVar1[2] = uVar20;
        puVar1[3] = uVar20;
        puVar1 = (undefined4 *)(uVar10 + 0x10 + uVar12 * 4);
        *puVar1 = uVar20;
        puVar1[1] = uVar20;
        puVar1[2] = uVar20;
        puVar1[3] = uVar20;
        uVar12 = uVar12 + 8;
      } while (uVar12 < uVar11);
    }
    if (uVar11 < uVar9) {
      do {
        *(undefined4 *)(param_4 * uVar16 + lStack_80 + uVar11 * 4) = uVar20;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
  }
  uVar16 = uVar16 + 1;
  if (uStack_48 <= uVar16) {
    return;
  }
  goto LAB_140761780;
LAB_140761620:
  if (0 < (longlong)uVar9) {
    if ((longlong)uVar9 < 4) {
LAB_140761753:
      uVar13 = 0;
    }
    else {
      uVar11 = param_4 * uVar16 + lStack_80;
      uVar10 = uVar11 & 0xf;
      if (uVar10 != 0) {
        if ((uVar11 & 3) != 0) goto LAB_140761753;
        uVar10 = 0x10 - uVar10 >> 2;
      }
      if ((longlong)uVar9 < (longlong)(uVar10 + 4)) goto LAB_140761753;
      uVar7 = 0;
      uVar13 = uVar9 - (uVar9 - uVar10 & 3);
      if (uVar10 != 0) {
        do {
          *(undefined4 *)(uVar11 + uVar7 * 4) = *(undefined4 *)(uVar12 + uVar7 * 4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar10);
      }
      if ((uVar12 + uVar10 * 4 & 0xf) == 0) {
        do {
          puVar3 = (undefined8 *)(uVar12 + uVar10 * 4);
          uVar4 = puVar3[1];
          puVar2 = (undefined8 *)(uVar11 + uVar10 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar10 < uVar13);
      }
      else {
        do {
          puVar3 = (undefined8 *)(uVar12 + uVar10 * 4);
          uVar4 = puVar3[1];
          puVar2 = (undefined8 *)(uVar11 + uVar10 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar4;
          uVar10 = uVar10 + 4;
        } while (uVar10 < uVar13);
      }
    }
    if (uVar13 < uVar9) {
      do {
        *(undefined4 *)(param_4 * uVar16 + lStack_80 + uVar13 * 4) =
             *(undefined4 *)(uVar12 + uVar13 * 4);
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar9);
    }
  }
  uVar16 = uVar16 + 1;
  if (uStack_48 <= uVar16) {
    return;
  }
  goto LAB_140761620;
LAB_140760f2c:
  uVar10 = uVar16;
  if (uVar18 == 3) {
    uVar11 = param_5[1];
    if ((longlong)uVar11 < 2) {
      if ((longlong)uVar16 < 0) {
        if (uStack_78 == 0) {
          uVar10 = -uVar16;
          if (uStack_90 == 0) {
            uVar10 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar16) && (uStack_90 == 0)) {
        uVar10 = -uVar16;
        if (uStack_78 == 0) {
          uVar10 = 0;
        }
      }
    }
    else if (((longlong)uVar16 < 0) || ((longlong)uVar11 <= (longlong)uVar16)) {
      if ((longlong)uVar16 < 0) goto LAB_1407611c0;
      while (uStack_90 == 0) {
        for (uVar10 = (uVar11 - 1) * 2 - uVar10; (longlong)uVar10 < 0; uVar10 = -uVar10) {
LAB_1407611c0:
          if (uStack_78 != 0) goto LAB_140760fba;
        }
        if ((longlong)uVar10 < (longlong)uVar11) break;
      }
    }
  }
  goto LAB_140760fba;
}

