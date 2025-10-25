
void FUN_1400c2960(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                  int param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  ulonglong *in_stack_fffffffffffffee8;
  undefined4 uVar20;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  uint *puStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  int iStack_a8;
  uint uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  lStack_50 = (longlong)param_6;
  lVar3 = 0;
  iStack_68 = param_10;
  uVar15 = 0;
  param_10 = param_10 >> 1;
  uVar5 = param_7 & 0x10;
  uVar12 = 0;
  uStack_58 = param_9;
  uStack_60 = param_11;
  lStack_98 = param_3;
  lStack_78 = param_1;
  lStack_70 = param_2;
  lStack_40 = param_4;
  if (0 < param_10) {
    uStack_48 = (ulonglong)param_10;
    uStack_90 = param_7 & 0xf0;
    param_3 = param_4 * uStack_48 + param_3;
    uVar13 = param_7 & 0xf;
    uStack_b0 = param_7 & 0x20;
    lVar4 = param_3;
    iStack_a8 = param_10;
    uStack_a0 = uVar5;
    if (uStack_90 == 0xf0) {
      uStack_d8 = CONCAT44(uStack_d8._4_4_,param_7) & 0xffffffff0000000f;
      uStack_d0 = 0;
      puStack_c0 = param_8;
      uStack_b8 = param_7;
      lStack_c8 = param_3;
      goto LAB_1400c2e0e;
    }
LAB_1400c2a67:
    uVar7 = uVar15;
    if (((longlong)param_5[1] <= (longlong)uVar15) && (param_7 != 0xf0)) {
      if (uVar13 == 6) {
        if (uStack_b0 == 0) goto LAB_1400c2baa;
      }
      else {
        if (uVar13 != 1) goto LAB_1400c2aa4;
        if (uStack_b0 == 0) {
          uVar7 = param_5[1] - 1;
        }
      }
    }
LAB_1400c2b40:
    in_stack_fffffffffffffee8 = &uStack_88;
    uStack_88 = *param_5;
    uStack_80 = param_5[1];
    FUN_1400c35c0(lStack_78,lStack_70,uVar7,param_3,in_stack_fffffffffffffee8,(int)lStack_50,param_7
                  ,param_8,uStack_58,iStack_68,uStack_60);
LAB_1400c2ce0:
    do {
      while( true ) {
        uVar2 = uStack_60;
        uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
        iVar14 = (int)uVar15;
        uVar15 = uVar15 + 1;
        uVar12 = uVar12 + lStack_40;
        lVar3 = (longlong)iVar14 + 1;
        if (uStack_48 <= uVar15) {
          if (uStack_a0 != 0) {
            lVar4 = 0;
            lVar9 = -uStack_48;
            lVar3 = lStack_98;
            do {
              uStack_d8 = *param_5;
              uStack_d0 = param_5[1];
              FUN_1400c35c0(lStack_78,lStack_70,lVar9,lVar3,&uStack_d8,(int)lStack_50,param_7,
                            param_8,uStack_58,iStack_68,uVar2);
              lVar4 = lVar4 + 1;
              lVar9 = lVar9 + 1;
              lVar3 = lVar3 + lStack_40;
            } while (lVar4 < (longlong)uStack_48);
            return;
          }
          if (uVar13 == 6) {
            uVar5 = *param_8;
            uVar15 = 0;
            auVar1 = vshufps_avx(ZEXT416(uVar5),ZEXT416(uVar5),0);
            uVar12 = *param_5;
            auVar16._16_16_ = auVar1;
            auVar16._0_16_ = auVar1;
            goto LAB_1400c32c0;
          }
          param_10 = iStack_a8;
          if (uVar13 != 1) goto LAB_1400c2e8b;
          uVar12 = *param_5;
          uVar15 = 0;
          goto LAB_1400c3180;
        }
        param_3 = lVar4 + uVar12;
        if (uStack_90 != 0xf0) break;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar13);
        uStack_d0 = uVar12;
        lStack_c8 = lVar4;
        puStack_c0 = param_8;
        uStack_b8 = param_7;
LAB_1400c2e0e:
        in_stack_fffffffffffffee8 = (ulonglong *)CONCAT44(uVar20,iStack_68);
        (**(code **)(&UNK_143086c00 + lStack_50 * 8))
                  (lStack_70 * uVar15 + lStack_78,param_3,*param_5,uStack_58,
                   in_stack_fffffffffffffee8);
        param_8 = puStack_c0;
        lVar4 = lStack_c8;
        uVar12 = uStack_d0;
        uVar13 = (uint)uStack_d8;
        param_7 = uStack_b8;
      }
      if (-1 < (longlong)uVar15) goto LAB_1400c2a67;
      uVar7 = uVar15;
      if (param_7 == 0xf0) goto LAB_1400c2b40;
      if (uVar13 != 6) {
        if (uVar13 != 1) goto LAB_1400c2aa4;
        uVar7 = 0;
        if (uStack_a0 != 0) {
          uVar7 = uVar15;
        }
        goto LAB_1400c2b40;
      }
      if (uStack_a0 != 0) goto LAB_1400c2b40;
LAB_1400c2baa:
      uVar7 = *param_5;
      uVar5 = *param_8;
    } while ((longlong)uVar7 < 1);
    if ((longlong)uVar7 < 0x10) {
LAB_1400c3503:
      uVar8 = 0;
      if (uVar7 == 0) goto LAB_1400c2ce0;
LAB_1400c3510:
      uVar11 = 0;
    }
    else {
      uVar6 = lStack_40 * lVar3 + lVar4;
      uVar11 = uVar6 & 0x1f;
      if (uVar11 != 0) {
        if ((uVar6 & 3) != 0) goto LAB_1400c3503;
        uVar11 = 0x20 - uVar11 >> 2;
      }
      if ((longlong)uVar7 < (longlong)(uVar11 + 0x10)) goto LAB_1400c3503;
      uVar10 = 0;
      uVar8 = uVar7 - (uVar7 - uVar11 & 0xf);
      if (uVar11 != 0) {
        do {
          *(uint *)(uVar6 + uVar10 * 4) = uVar5;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      auVar1 = vshufps_avx(ZEXT416(uVar5),ZEXT416(uVar5),0);
      auVar17._16_16_ = auVar1;
      auVar17._0_16_ = auVar1;
      do {
        *(undefined1 (*) [32])(uVar6 + uVar11 * 4) = auVar17;
        *(undefined1 (*) [32])(uVar6 + 0x20 + uVar11 * 4) = auVar17;
        uVar11 = uVar11 + 0x10;
      } while (uVar11 < uVar8);
      if (uVar7 < uVar8 + 1) goto LAB_1400c2ce0;
      uVar7 = uVar7 - uVar8;
      if ((longlong)uVar7 < 4) goto LAB_1400c3510;
      uVar11 = uVar7 & 0xfffffffffffffffc;
      uVar10 = 0;
      do {
        *(undefined1 (*) [16])(uVar6 + uVar8 * 4 + uVar10 * 4) = auVar1;
        uVar10 = uVar10 + 4;
      } while (uVar10 < uVar11);
    }
    if (uVar11 < uVar7) {
      do {
        *(uint *)(lVar3 * lStack_40 + lVar4 + uVar8 * 4 + uVar11 * 4) = uVar5;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar7);
    }
    goto LAB_1400c2ce0;
  }
  if (uVar5 != 0) {
    return;
  }
  uVar13 = param_7 & 0xf;
  if (uVar13 == 6) {
    return;
  }
  if (uVar13 == 1) {
    return;
  }
LAB_1400c2e8b:
  if (uVar13 != 3) {
    return;
  }
  lVar3 = (longlong)param_10;
  if ((param_7 & 0xf0) == 0xf0) {
    (**(code **)(&UNK_143086c00 + lStack_50 * 8))
              (lStack_78 + lStack_70 * lVar3,lStack_98,*param_5,uStack_58,CONCAT44(uVar20,iStack_68)
              );
  }
  else {
    if (((lVar3 < 0) || ((longlong)param_5[1] <= lVar3)) && (param_7 != 0xf0)) {
      uVar12 = param_5[1];
      if ((longlong)uVar12 < 2) {
        if (lVar3 < 0) {
          lVar3 = -lVar3;
          if ((param_7 & 0x20) == 0) {
            lVar3 = 0;
          }
        }
        else if ((0 < lVar3) && ((param_7 & 0x20) == 0)) {
          lVar3 = 0;
        }
      }
      else {
        while( true ) {
          for (; lVar3 < 0; lVar3 = -lVar3) {
          }
          if ((lVar3 < (longlong)uVar12) || ((param_7 & 0x20) != 0)) break;
          lVar3 = (uVar12 - 1) * 2 - lVar3;
        }
      }
    }
    uStack_d8 = *param_5;
    uStack_d0 = param_5[1];
    FUN_1400c35c0(lStack_78,lStack_70,lVar3,lStack_98,&uStack_d8,(int)lStack_50,param_7,param_8,
                  uStack_58,iStack_68,uStack_60);
  }
  lVar3 = 1;
  uVar12 = 0;
  if (param_10 < 2) {
    return;
  }
  lVar4 = ((longlong)iStack_68 + -1) * lStack_40 + lStack_98;
  uVar15 = *param_5;
  do {
    if (0 < (longlong)uVar15) {
      if ((longlong)uVar15 < 8) {
LAB_1400c30c5:
        uVar11 = 0;
      }
      else {
        uVar7 = lStack_98 + lStack_40 * lVar3;
        uVar6 = uVar7 & 0x1f;
        if (uVar6 != 0) {
          if ((uVar7 & 3) != 0) goto LAB_1400c30c5;
          uVar6 = 0x20 - uVar6 >> 2;
        }
        if ((longlong)uVar15 < (longlong)(uVar6 + 8)) goto LAB_1400c30c5;
        lVar9 = lVar4 - lStack_40 * lVar3;
        uVar8 = 0;
        uVar11 = uVar15 - (uVar15 - uVar6 & 7);
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(uVar7 + uVar8 * 4) = *(undefined4 *)(lVar9 + uVar8 * 4);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
        }
        do {
          auVar18._16_16_ = *(undefined1 (*) [16])(lVar9 + 0x10 + uVar6 * 4);
          auVar18._0_16_ = *(undefined1 (*) [16])(lVar9 + uVar6 * 4);
          *(undefined1 (*) [32])(uVar7 + uVar6 * 4) = auVar18;
          uVar6 = uVar6 + 8;
        } while (uVar6 < uVar11);
      }
      if (uVar11 < uVar15) {
        do {
          *(undefined4 *)(lStack_98 + lVar3 * lStack_40 + uVar11 * 4) =
               *(undefined4 *)((lVar4 - lVar3 * lStack_40) + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar15);
      }
    }
    lVar3 = uVar12 + 2;
    uVar12 = uVar12 + 1;
    if ((ulonglong)(longlong)(param_10 + -1) <= uVar12) {
      return;
    }
  } while( true );
LAB_1400c32c0:
  if (0 < (longlong)uVar12) {
    while (0xf < (longlong)uVar12) {
      uVar7 = lStack_40 * uVar15 + lStack_98;
      uVar6 = uVar7 & 0x1f;
      if (uVar6 != 0) {
        if ((uVar7 & 3) != 0) break;
        uVar6 = 0x20 - uVar6 >> 2;
      }
      if ((longlong)uVar12 < (longlong)(uVar6 + 0x10)) break;
      uVar8 = 0;
      uVar11 = uVar12 - (uVar12 - uVar6 & 0xf);
      if (uVar6 != 0) {
        do {
          *(uint *)(uVar7 + uVar8 * 4) = uVar5;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
      do {
        *(undefined1 (*) [32])(uVar7 + uVar6 * 4) = auVar16;
        *(undefined1 (*) [32])(uVar7 + 0x20 + uVar6 * 4) = auVar16;
        uVar6 = uVar6 + 0x10;
      } while (uVar6 < uVar11);
      if (uVar11 + 1 <= uVar12) {
        uVar6 = uVar12 - uVar11;
        if ((longlong)uVar6 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar6 & 0xfffffffffffffffc;
          uVar10 = 0;
          do {
            *(undefined1 (*) [16])(uVar7 + uVar11 * 4 + uVar10 * 4) = auVar1;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar8);
        }
        goto LAB_1400c33cf;
      }
      uVar15 = uVar15 + 1;
      if (uStack_48 <= uVar15) {
        return;
      }
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar8 = 0;
      uVar6 = uVar12;
LAB_1400c33cf:
      if (uVar8 < uVar6) {
        do {
          *(uint *)(lStack_40 * uVar15 + lStack_98 + uVar11 * 4 + uVar8 * 4) = uVar5;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar6);
      }
    }
  }
  uVar15 = uVar15 + 1;
  if (uStack_48 <= uVar15) {
    return;
  }
  goto LAB_1400c32c0;
LAB_1400c3180:
  if (0 < (longlong)uVar12) {
    if ((longlong)uVar12 < 8) {
LAB_1400c3290:
      uVar11 = 0;
    }
    else {
      uVar6 = lStack_40 * uVar15 + lStack_98;
      uVar7 = uVar6 & 0x1f;
      if (uVar7 != 0) {
        if ((uVar6 & 3) != 0) goto LAB_1400c3290;
        uVar7 = 0x20 - uVar7 >> 2;
      }
      if ((longlong)uVar12 < (longlong)(uVar7 + 8)) goto LAB_1400c3290;
      uVar8 = 0;
      uVar11 = uVar12 - (uVar12 - uVar7 & 7);
      if (uVar7 != 0) {
        do {
          *(undefined4 *)(uVar6 + uVar8 * 4) = *(undefined4 *)(lVar4 + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      do {
        auVar19._16_16_ = *(undefined1 (*) [16])(lVar4 + 0x10 + uVar7 * 4);
        auVar19._0_16_ = *(undefined1 (*) [16])(lVar4 + uVar7 * 4);
        *(undefined1 (*) [32])(uVar6 + uVar7 * 4) = auVar19;
        uVar7 = uVar7 + 8;
      } while (uVar7 < uVar11);
    }
    if (uVar11 < uVar12) {
      do {
        *(undefined4 *)(lStack_40 * uVar15 + lStack_98 + uVar11 * 4) =
             *(undefined4 *)(lVar4 + uVar11 * 4);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
  }
  uVar15 = uVar15 + 1;
  if (uStack_48 <= uVar15) {
    return;
  }
  goto LAB_1400c3180;
LAB_1400c2aa4:
  uVar7 = uVar15;
  if (uVar13 == 3) {
    uVar6 = param_5[1];
    if ((longlong)uVar6 < 2) {
      if ((longlong)uVar15 < 0) {
        if (uStack_a0 == 0) {
          uVar7 = -uVar15;
          if (uStack_b0 == 0) {
            uVar7 = 0;
          }
        }
      }
      else if ((0 < (longlong)uVar15) && (uStack_b0 == 0)) {
        uVar7 = -uVar15;
        if (uStack_a0 == 0) {
          uVar7 = 0;
        }
      }
    }
    else if (((longlong)uVar15 < 0) || ((longlong)uVar6 <= (longlong)uVar15)) {
      if ((longlong)uVar15 < 0) goto LAB_1400c2da0;
      while (uStack_b0 == 0) {
        for (uVar7 = (uVar6 - 1) * 2 - uVar7; (longlong)uVar7 < 0; uVar7 = -uVar7) {
LAB_1400c2da0:
          if (uStack_a0 != 0) goto LAB_1400c2b40;
        }
        if ((longlong)uVar7 < (longlong)uVar6) break;
      }
    }
  }
  goto LAB_1400c2b40;
}

