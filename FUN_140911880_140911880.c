
void FUN_140911880(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  longlong lStack_d8;
  byte *pbStack_c8;
  uint uStack_c0;
  uint uStack_90;
  
  lVar7 = 0;
  uVar14 = 0;
  iVar11 = param_10 >> 1;
  uVar9 = param_7 & 0x10;
  lStack_d8 = 0;
  uStack_c0 = param_7;
  if (0 < iVar11) {
    uVar16 = (ulonglong)iVar11;
    lVar15 = param_4 * uVar16 + param_3;
    if ((param_7 & 0xf0) == 0xf0) {
      lStack_d8 = 0;
      pbStack_c8 = param_8;
      lVar8 = lVar15;
      goto LAB_140911d4f;
    }
    uVar14 = 0;
LAB_140911986:
    uStack_90 = param_7 & 0xf;
    pbStack_c8 = param_8;
    if (((longlong)param_5[1] <= (longlong)uVar14) && (uStack_c0 != 0xf0)) {
      if (uStack_90 != 6) goto joined_r0x0001409119b6;
      if ((param_7 & 0x20) == 0) goto LAB_140911acc;
    }
LAB_140911a60:
    do {
      FUN_140912560(param_1,param_2);
      while( true ) {
        while( true ) {
          uStack_90 = param_7 & 0xf;
          iVar13 = (int)uVar14;
          uVar14 = uVar14 + 1;
          lStack_d8 = lStack_d8 + param_4;
          lVar7 = (longlong)iVar13 + 1;
          if (uVar16 <= uVar14) {
            if (uVar9 != 0) {
              lVar7 = 0;
              lVar15 = -uVar16;
              do {
                FUN_140912560(param_1,param_2,lVar15,param_3);
                lVar7 = lVar7 + 1;
                lVar15 = lVar15 + 1;
                param_3 = param_3 + param_4;
              } while (lVar7 < (longlong)uVar16);
              return;
            }
            goto LAB_140911db7;
          }
          lVar8 = lVar15 + lStack_d8;
          if ((param_7 & 0xf0) != 0xf0) break;
LAB_140911d4f:
          (*(code *)(&PTR_FUN_14308d3e0)[param_6])(param_2 * uVar14 + param_1,lVar8);
        }
        param_8 = pbStack_c8;
        if (-1 < (longlong)uVar14) goto LAB_140911986;
        if (uStack_c0 == 0xf0) break;
        if (uStack_90 != 6) goto joined_r0x0001409119b6;
        if (uVar9 != 0) break;
LAB_140911acc:
        uVar10 = *param_5;
        fVar20 = (float)*pbStack_c8;
        if (0 < (longlong)uVar10) {
          if ((longlong)uVar10 < 0x10) {
LAB_1409124ac:
            uVar18 = 0;
          }
          else {
            uVar17 = param_4 * lVar7 + lVar15;
            if ((longlong)uVar10 < 0x1d) {
              uVar19 = 0;
              uVar18 = uVar10 & 0xfffffffffffffff0;
            }
            else {
              uVar19 = uVar17 & 0x1f;
              if (uVar19 != 0) {
                if ((uVar17 & 3) != 0) goto LAB_1409124ac;
                uVar19 = 0x20 - uVar19 >> 2;
              }
              if ((longlong)uVar10 < (longlong)(uVar19 + 0x10)) goto LAB_1409124ac;
              uVar12 = 0;
              uVar18 = uVar10 - (uVar10 - uVar19 & 0xf);
              if (uVar19 != 0) {
                do {
                  *(float *)(uVar17 + uVar12 * 4) = fVar20;
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar19);
              }
            }
            auVar22._4_4_ = fVar20;
            auVar22._0_4_ = fVar20;
            auVar22._8_4_ = fVar20;
            auVar22._12_4_ = fVar20;
            auVar22._16_4_ = fVar20;
            auVar22._20_4_ = fVar20;
            auVar22._24_4_ = fVar20;
            auVar22._28_4_ = fVar20;
            do {
              *(undefined1 (*) [32])(uVar17 + uVar19 * 4) = auVar22;
              *(undefined1 (*) [32])(uVar17 + 0x20 + uVar19 * 4) = auVar22;
              uVar19 = uVar19 + 0x10;
            } while (uVar19 < uVar18);
          }
          if (uVar18 + 1 <= uVar10) {
            uVar10 = uVar10 - uVar18;
            if ((longlong)uVar10 < 4) {
              uVar17 = 0;
            }
            else {
              auVar21._4_4_ = fVar20;
              auVar21._0_4_ = fVar20;
              auVar21._8_4_ = fVar20;
              auVar21._12_4_ = fVar20;
              uVar17 = uVar10 & 0xfffffffffffffffc;
              uVar19 = 0;
              do {
                *(undefined1 (*) [16])(param_4 * lVar7 + lVar15 + uVar18 * 4 + uVar19 * 4) = auVar21
                ;
                uVar19 = uVar19 + 4;
              } while (uVar19 < uVar17);
            }
            if (uVar17 < uVar10) {
              do {
                *(float *)(lVar7 * param_4 + lVar15 + uVar18 * 4 + uVar17 * 4) = fVar20;
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar10);
            }
          }
        }
      }
    } while( true );
  }
  pbStack_c8 = param_8;
  if (uVar9 != 0) {
    return;
  }
LAB_140911db7:
  param_7 = param_7 & 0xf;
  if (param_7 == 6) {
    uVar14 = 0;
    fVar20 = (float)*pbStack_c8;
    if (0 < iVar11) {
      uVar16 = *param_5;
      do {
        if (0 < (longlong)uVar16) {
          if ((longlong)uVar16 < 0x10) {
LAB_1409123d4:
            uVar17 = 0;
          }
          else {
            uVar10 = param_4 * uVar14 + param_3;
            if ((longlong)uVar16 < 0x1d) {
              uVar18 = 0;
              uVar17 = uVar16 & 0xfffffffffffffff0;
            }
            else {
              uVar18 = uVar10 & 0x1f;
              if (uVar18 != 0) {
                if ((uVar10 & 3) != 0) goto LAB_1409123d4;
                uVar18 = 0x20 - uVar18 >> 2;
              }
              if ((longlong)uVar16 < (longlong)(uVar18 + 0x10)) goto LAB_1409123d4;
              uVar19 = 0;
              uVar17 = uVar16 - (uVar16 - uVar18 & 0xf);
              if (uVar18 != 0) {
                do {
                  *(float *)(uVar10 + uVar19 * 4) = fVar20;
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar18);
              }
            }
            do {
              pfVar3 = (float *)(uVar10 + uVar18 * 4);
              *pfVar3 = fVar20;
              pfVar3[1] = fVar20;
              pfVar3[2] = fVar20;
              pfVar3[3] = fVar20;
              pfVar3[4] = fVar20;
              pfVar3[5] = fVar20;
              pfVar3[6] = fVar20;
              pfVar3[7] = fVar20;
              pfVar3 = (float *)(uVar10 + 0x20 + uVar18 * 4);
              *pfVar3 = fVar20;
              pfVar3[1] = fVar20;
              pfVar3[2] = fVar20;
              pfVar3[3] = fVar20;
              pfVar3[4] = fVar20;
              pfVar3[5] = fVar20;
              pfVar3[6] = fVar20;
              pfVar3[7] = fVar20;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < uVar17);
          }
          if (uVar17 + 1 <= uVar16) {
            uVar10 = uVar16 - uVar17;
            if ((longlong)uVar10 < 4) {
              uVar18 = 0;
            }
            else {
              uVar18 = uVar10 & 0xfffffffffffffffc;
              uVar19 = 0;
              do {
                pfVar3 = (float *)(param_4 * uVar14 + param_3 + uVar17 * 4 + uVar19 * 4);
                *pfVar3 = fVar20;
                pfVar3[1] = fVar20;
                pfVar3[2] = fVar20;
                pfVar3[3] = fVar20;
                uVar19 = uVar19 + 4;
              } while (uVar19 < uVar18);
            }
            if (uVar18 < uVar10) {
              do {
                *(float *)(param_4 * uVar14 + param_3 + uVar17 * 4 + uVar18 * 4) = fVar20;
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar10);
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulonglong)(longlong)iVar11);
    }
    return;
  }
  if (param_7 == 1) {
    uVar14 = 0;
    if (0 < iVar11) {
      uVar16 = *param_5;
      lVar7 = param_4 * iVar11 + param_3;
      do {
        if (0 < (longlong)uVar16) {
          if ((longlong)uVar16 < 8) {
LAB_140912211:
            uVar17 = 0;
          }
          else {
            uVar10 = param_4 * uVar14 + param_3;
            if ((longlong)uVar16 < 0xbd) {
              uVar18 = 0;
              uVar17 = uVar16 & 0xfffffffffffffff8;
            }
            else {
              uVar18 = uVar10 & 0x1f;
              if (uVar18 != 0) {
                if ((uVar10 & 3) != 0) goto LAB_140912211;
                uVar18 = 0x20 - uVar18 >> 2;
              }
              if ((longlong)uVar16 < (longlong)(uVar18 + 8)) goto LAB_140912211;
              uVar19 = 0;
              uVar17 = uVar16 - (uVar16 - uVar18 & 7);
              if (uVar18 != 0) {
                do {
                  *(undefined4 *)(uVar10 + uVar19 * 4) = *(undefined4 *)(lVar7 + uVar19 * 4);
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar18);
              }
            }
            do {
              *(undefined1 (*) [32])(uVar10 + uVar18 * 4) =
                   *(undefined1 (*) [32])(lVar7 + uVar18 * 4);
              uVar18 = uVar18 + 8;
            } while (uVar18 < uVar17);
          }
          if (uVar17 < uVar16) {
            do {
              *(undefined4 *)(param_4 * uVar14 + param_3 + uVar17 * 4) =
                   *(undefined4 *)(lVar7 + uVar17 * 4);
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar16);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulonglong)(longlong)iVar11);
    }
  }
  else if (param_7 == 3) {
    lVar7 = (longlong)iVar11;
    if ((uStack_c0 & 0xf0) == 0xf0) {
      (*(code *)(&PTR_FUN_14308d3e0)[param_6])(param_1 + param_2 * lVar7,param_3,*param_5,param_9);
    }
    else {
      if (((lVar7 < 0) || ((longlong)param_5[1] <= lVar7)) && (uStack_c0 != 0xf0)) {
        uVar14 = param_5[1];
        if ((longlong)uVar14 < 2) {
          if (lVar7 < 0) {
            lVar7 = -lVar7;
            if ((uStack_c0 & 0x20) == 0) {
              lVar7 = 0;
            }
          }
          else if ((0 < lVar7) && ((uStack_c0 & 0x20) == 0)) {
            lVar7 = 0;
          }
        }
        else {
          while( true ) {
            for (; lVar7 < 0; lVar7 = -lVar7) {
            }
            if ((lVar7 < (longlong)uVar14) || ((uStack_c0 & 0x20) != 0)) break;
            lVar7 = (uVar14 - 1) * 2 - lVar7;
          }
        }
      }
      FUN_140912560(param_1,param_2,lVar7,param_3);
    }
    lVar7 = 1;
    uVar14 = 0;
    if (1 < iVar11) {
      uVar16 = *param_5;
      lVar15 = ((longlong)param_10 + -1) * param_4 + param_3;
      do {
        if (0 < (longlong)uVar16) {
          if ((longlong)uVar16 < 8) {
LAB_140912024:
            uVar17 = 0;
          }
          else {
            lVar8 = param_4 * lVar7;
            uVar10 = param_3 + lVar8;
            if ((longlong)uVar16 < 0xbd) {
              lVar8 = lVar15 - lVar8;
              uVar18 = 0;
              uVar17 = uVar16 & 0xfffffffffffffff8;
            }
            else {
              uVar18 = uVar10 & 0x1f;
              if (uVar18 != 0) {
                if ((uVar10 & 3) != 0) goto LAB_140912024;
                uVar18 = 0x20 - uVar18 >> 2;
              }
              if ((longlong)uVar16 < (longlong)(uVar18 + 8)) goto LAB_140912024;
              lVar8 = lVar15 - lVar8;
              uVar19 = 0;
              uVar17 = uVar16 - (uVar16 - uVar18 & 7);
              if (uVar18 != 0) {
                do {
                  *(undefined4 *)(uVar10 + uVar19 * 4) = *(undefined4 *)(lVar8 + uVar19 * 4);
                  uVar19 = uVar19 + 1;
                } while (uVar19 < uVar18);
              }
            }
            do {
              puVar1 = (undefined8 *)(lVar8 + uVar18 * 4);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              puVar2 = (undefined8 *)(uVar10 + uVar18 * 4);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              uVar18 = uVar18 + 8;
            } while (uVar18 < uVar17);
          }
          if (uVar17 < uVar16) {
            do {
              *(undefined4 *)(param_3 + lVar7 * param_4 + uVar17 * 4) =
                   *(undefined4 *)((lVar15 - lVar7 * param_4) + uVar17 * 4);
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar16);
          }
        }
        lVar7 = uVar14 + 2;
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulonglong)(longlong)(iVar11 + -1));
    }
  }
  return;
joined_r0x0001409119b6:
  if (((((param_7 & 0xf) != 1) && (uStack_90 = param_7 & 0xf, uStack_90 == 3)) &&
      (uVar10 = param_5[1], 1 < (longlong)uVar10)) &&
     (((longlong)uVar14 < 0 || ((longlong)uVar10 <= (longlong)uVar14)))) {
    uVar17 = uVar14;
    if ((longlong)uVar14 < 0) goto LAB_140911ce0;
    while ((param_7 & 0x20) == 0) {
      for (uVar17 = (uVar10 - 1) * 2 - uVar17; (longlong)uVar17 < 0; uVar17 = -uVar17) {
LAB_140911ce0:
        if (uVar9 != 0) goto LAB_140911a60;
      }
      if ((longlong)uVar17 < (longlong)uVar10) break;
    }
  }
  goto LAB_140911a60;
}

