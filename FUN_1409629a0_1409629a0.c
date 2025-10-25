
void FUN_1409629a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,undefined4 *param_8,undefined8 param_9
                  ,int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  longlong lStack_d8;
  undefined4 *puStack_c8;
  uint uStack_c0;
  uint uStack_90;
  
  lVar8 = 0;
  uVar15 = 0;
  iVar12 = param_10 >> 1;
  uVar10 = param_7 & 0x10;
  lStack_d8 = 0;
  uStack_c0 = param_7;
  if (0 < iVar12) {
    uVar17 = (ulonglong)iVar12;
    lVar16 = param_4 * uVar17 + param_3;
    if ((param_7 & 0xf0) == 0xf0) {
      lStack_d8 = 0;
      puStack_c8 = param_8;
      lVar9 = lVar16;
      goto LAB_140962e4f;
    }
    uVar15 = 0;
LAB_140962aa6:
    uStack_90 = param_7 & 0xf;
    puStack_c8 = param_8;
    if (((longlong)param_5[1] <= (longlong)uVar15) && (uStack_c0 != 0xf0)) {
      if (uStack_90 != 6) goto joined_r0x000140962ad6;
      if ((param_7 & 0x20) == 0) goto LAB_140962bec;
    }
LAB_140962b80:
    do {
      FUN_140963660(param_1,param_2);
      while( true ) {
        while( true ) {
          uStack_90 = param_7 & 0xf;
          iVar14 = (int)uVar15;
          uVar15 = uVar15 + 1;
          lStack_d8 = lStack_d8 + param_4;
          lVar8 = (longlong)iVar14 + 1;
          if (uVar17 <= uVar15) {
            if (uVar10 != 0) {
              lVar8 = 0;
              lVar16 = -uVar17;
              do {
                FUN_140963660(param_1,param_2,lVar16,param_3);
                lVar8 = lVar8 + 1;
                lVar16 = lVar16 + 1;
                param_3 = param_3 + param_4;
              } while (lVar8 < (longlong)uVar17);
              return;
            }
            if (uStack_90 == 6) {
              uVar4 = *puStack_c8;
              uVar11 = 0;
              uVar15 = *param_5;
              goto LAB_140963340;
            }
            if (uStack_90 != 1) goto LAB_140962ec9;
            uVar15 = *param_5;
            uVar11 = 0;
            goto LAB_1409631e0;
          }
          lVar9 = lVar16 + lStack_d8;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_140962e4f:
          (*(code *)(&PTR_FUN_14308da20)[param_6])(param_2 * uVar15 + param_1,lVar9);
        }
        param_8 = puStack_c8;
        if (-1 < (longlong)uVar15) goto LAB_140962aa6;
        if (uStack_c0 == 0xf0) break;
        if (uStack_90 != 6) goto joined_r0x000140962ad6;
        if (uVar10 != 0) break;
LAB_140962bec:
        uVar11 = *param_5;
        uVar4 = *puStack_c8;
        if (0 < (longlong)uVar11) {
          if ((longlong)uVar11 < 0x10) {
LAB_14096358f:
            uVar19 = 0;
          }
          else {
            uVar18 = param_4 * lVar8 + lVar16;
            if ((longlong)uVar11 < 0x1d) {
              uVar20 = 0;
              uVar19 = uVar11 & 0xfffffffffffffff0;
            }
            else {
              uVar20 = uVar18 & 0x1f;
              if (uVar20 != 0) {
                if ((uVar18 & 3) != 0) goto LAB_14096358f;
                uVar20 = 0x20 - uVar20 >> 2;
              }
              if ((longlong)uVar11 < (longlong)(uVar20 + 0x10)) goto LAB_14096358f;
              uVar13 = 0;
              uVar19 = uVar11 - (uVar11 - uVar20 & 0xf);
              if (uVar20 != 0) {
                do {
                  *(undefined4 *)(uVar18 + uVar13 * 4) = uVar4;
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar20);
              }
            }
            auVar22._4_4_ = uVar4;
            auVar22._0_4_ = uVar4;
            auVar22._8_4_ = uVar4;
            auVar22._12_4_ = uVar4;
            auVar22._16_4_ = uVar4;
            auVar22._20_4_ = uVar4;
            auVar22._24_4_ = uVar4;
            auVar22._28_4_ = uVar4;
            do {
              *(undefined1 (*) [32])(uVar18 + uVar20 * 4) = auVar22;
              *(undefined1 (*) [32])(uVar18 + 0x20 + uVar20 * 4) = auVar22;
              uVar20 = uVar20 + 0x10;
            } while (uVar20 < uVar19);
          }
          if (uVar19 + 1 <= uVar11) {
            uVar11 = uVar11 - uVar19;
            if ((longlong)uVar11 < 4) {
              uVar18 = 0;
            }
            else {
              auVar21._4_4_ = uVar4;
              auVar21._0_4_ = uVar4;
              auVar21._8_4_ = uVar4;
              auVar21._12_4_ = uVar4;
              uVar18 = uVar11 & 0xfffffffffffffffc;
              uVar20 = 0;
              do {
                *(undefined1 (*) [16])(param_4 * lVar8 + lVar16 + uVar19 * 4 + uVar20 * 4) = auVar21
                ;
                uVar20 = uVar20 + 4;
              } while (uVar20 < uVar18);
            }
            if (uVar18 < uVar11) {
              do {
                *(undefined4 *)(lVar8 * param_4 + lVar16 + uVar19 * 4 + uVar18 * 4) = uVar4;
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar11);
            }
          }
        }
      }
    } while( true );
  }
  if (uVar10 != 0) {
    return;
  }
  if ((param_7 & 0xf) == 6) {
    return;
  }
  if ((param_7 & 0xf) == 1) {
    return;
  }
LAB_140962ec9:
  if ((param_7 & 0xf) != 3) {
    return;
  }
  lVar8 = (longlong)iVar12;
  if ((uStack_c0 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308da20)[param_6])(param_1 + param_2 * lVar8,param_3,*param_5,param_9);
  }
  else {
    if (((lVar8 < 0) || ((longlong)param_5[1] <= lVar8)) && (uStack_c0 != 0xf0)) {
      uVar15 = param_5[1];
      if ((longlong)uVar15 < 2) {
        if (lVar8 < 0) {
          lVar8 = -lVar8;
          if ((uStack_c0 & 0x20) == 0) {
            lVar8 = 0;
          }
        }
        else if ((0 < lVar8) && ((uStack_c0 & 0x20) == 0)) {
          lVar8 = 0;
        }
      }
      else {
        while( true ) {
          for (; lVar8 < 0; lVar8 = -lVar8) {
          }
          if ((lVar8 < (longlong)uVar15) || ((uStack_c0 & 0x20) != 0)) break;
          lVar8 = (uVar15 - 1) * 2 - lVar8;
        }
      }
    }
    FUN_140963660(param_1,param_2,lVar8,param_3);
  }
  lVar8 = 1;
  uVar15 = 0;
  if (iVar12 < 2) {
    return;
  }
  uVar17 = *param_5;
  lVar16 = ((longlong)param_10 + -1) * param_4 + param_3;
  do {
    if (0 < (longlong)uVar17) {
      if ((longlong)uVar17 < 8) {
LAB_140963124:
        uVar18 = 0;
      }
      else {
        lVar9 = param_4 * lVar8;
        uVar11 = param_3 + lVar9;
        if ((longlong)uVar17 < 0xbd) {
          lVar9 = lVar16 - lVar9;
          uVar19 = 0;
          uVar18 = uVar17 & 0xfffffffffffffff8;
        }
        else {
          uVar19 = uVar11 & 0x1f;
          if (uVar19 != 0) {
            if ((uVar11 & 3) != 0) goto LAB_140963124;
            uVar19 = 0x20 - uVar19 >> 2;
          }
          if ((longlong)uVar17 < (longlong)(uVar19 + 8)) goto LAB_140963124;
          lVar9 = lVar16 - lVar9;
          uVar20 = 0;
          uVar18 = uVar17 - (uVar17 - uVar19 & 7);
          if (uVar19 != 0) {
            do {
              *(undefined4 *)(uVar11 + uVar20 * 4) = *(undefined4 *)(lVar9 + uVar20 * 4);
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar19);
          }
        }
        do {
          puVar1 = (undefined8 *)(lVar9 + uVar19 * 4);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(uVar11 + uVar19 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          uVar19 = uVar19 + 8;
        } while (uVar19 < uVar18);
      }
      if (uVar18 < uVar17) {
        do {
          *(undefined4 *)(param_3 + lVar8 * param_4 + uVar18 * 4) =
               *(undefined4 *)((lVar16 - lVar8 * param_4) + uVar18 * 4);
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar17);
      }
    }
    lVar8 = uVar15 + 2;
    uVar15 = uVar15 + 1;
    if ((ulonglong)(longlong)(iVar12 + -1) <= uVar15) {
      return;
    }
  } while( true );
LAB_140963340:
  if (0 < (longlong)uVar15) {
    if ((longlong)uVar15 < 0x10) {
LAB_1409634b4:
      uVar19 = 0;
    }
    else {
      uVar18 = param_4 * uVar11 + param_3;
      if ((longlong)uVar15 < 0x1d) {
        uVar20 = 0;
        uVar19 = uVar15 & 0xfffffffffffffff0;
      }
      else {
        uVar20 = uVar18 & 0x1f;
        if (uVar20 != 0) {
          if ((uVar18 & 3) != 0) goto LAB_1409634b4;
          uVar20 = 0x20 - uVar20 >> 2;
        }
        if ((longlong)uVar15 < (longlong)(uVar20 + 0x10)) goto LAB_1409634b4;
        uVar13 = 0;
        uVar19 = uVar15 - (uVar15 - uVar20 & 0xf);
        if (uVar20 != 0) {
          do {
            *(undefined4 *)(uVar18 + uVar13 * 4) = uVar4;
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar20);
        }
      }
      do {
        puVar3 = (undefined4 *)(uVar18 + uVar20 * 4);
        *puVar3 = uVar4;
        puVar3[1] = uVar4;
        puVar3[2] = uVar4;
        puVar3[3] = uVar4;
        puVar3[4] = uVar4;
        puVar3[5] = uVar4;
        puVar3[6] = uVar4;
        puVar3[7] = uVar4;
        puVar3 = (undefined4 *)(uVar18 + 0x20 + uVar20 * 4);
        *puVar3 = uVar4;
        puVar3[1] = uVar4;
        puVar3[2] = uVar4;
        puVar3[3] = uVar4;
        puVar3[4] = uVar4;
        puVar3[5] = uVar4;
        puVar3[6] = uVar4;
        puVar3[7] = uVar4;
        uVar20 = uVar20 + 0x10;
      } while (uVar20 < uVar19);
    }
    if (uVar19 + 1 <= uVar15) {
      uVar18 = uVar15 - uVar19;
      if ((longlong)uVar18 < 4) {
        uVar20 = 0;
      }
      else {
        uVar20 = uVar18 & 0xfffffffffffffffc;
        uVar13 = 0;
        do {
          puVar3 = (undefined4 *)(param_4 * uVar11 + param_3 + uVar19 * 4 + uVar13 * 4);
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          puVar3[2] = uVar4;
          puVar3[3] = uVar4;
          uVar13 = uVar13 + 4;
        } while (uVar13 < uVar20);
      }
      if (uVar20 < uVar18) {
        do {
          *(undefined4 *)(param_4 * uVar11 + param_3 + uVar19 * 4 + uVar20 * 4) = uVar4;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar18);
      }
    }
  }
  uVar11 = uVar11 + 1;
  if (uVar17 <= uVar11) {
    return;
  }
  goto LAB_140963340;
LAB_1409631e0:
  if (0 < (longlong)uVar15) {
    if ((longlong)uVar15 < 8) {
LAB_1409632f1:
      uVar19 = 0;
    }
    else {
      uVar18 = param_4 * uVar11 + param_3;
      if ((longlong)uVar15 < 0xbd) {
        uVar20 = 0;
        uVar19 = uVar15 & 0xfffffffffffffff8;
      }
      else {
        uVar20 = uVar18 & 0x1f;
        if (uVar20 != 0) {
          if ((uVar18 & 3) != 0) goto LAB_1409632f1;
          uVar20 = 0x20 - uVar20 >> 2;
        }
        if ((longlong)uVar15 < (longlong)(uVar20 + 8)) goto LAB_1409632f1;
        uVar13 = 0;
        uVar19 = uVar15 - (uVar15 - uVar20 & 7);
        if (uVar20 != 0) {
          do {
            *(undefined4 *)(uVar18 + uVar13 * 4) = *(undefined4 *)(lVar16 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar20);
        }
      }
      do {
        *(undefined1 (*) [32])(uVar18 + uVar20 * 4) = *(undefined1 (*) [32])(lVar16 + uVar20 * 4);
        uVar20 = uVar20 + 8;
      } while (uVar20 < uVar19);
    }
    if (uVar19 < uVar15) {
      do {
        *(undefined4 *)(param_4 * uVar11 + param_3 + uVar19 * 4) =
             *(undefined4 *)(lVar16 + uVar19 * 4);
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar15);
    }
  }
  uVar11 = uVar11 + 1;
  if (uVar17 <= uVar11) {
    return;
  }
  goto LAB_1409631e0;
joined_r0x000140962ad6:
  if (((((param_7 & 0xf) != 1) && (uStack_90 = param_7 & 0xf, uStack_90 == 3)) &&
      (uVar11 = param_5[1], 1 < (longlong)uVar11)) &&
     (((longlong)uVar15 < 0 || ((longlong)uVar11 <= (longlong)uVar15)))) {
    uVar18 = uVar15;
    if ((longlong)uVar15 < 0) goto LAB_140962de0;
    while ((param_7 & 0x20) == 0) {
      for (uVar18 = (uVar11 - 1) * 2 - uVar18; (longlong)uVar18 < 0; uVar18 = -uVar18) {
LAB_140962de0:
        if (uVar10 != 0) goto LAB_140962b80;
      }
      if ((longlong)uVar18 < (longlong)uVar11) break;
    }
  }
  goto LAB_140962b80;
}

