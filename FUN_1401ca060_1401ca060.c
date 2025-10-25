
/* WARNING: Removing unreachable block (ram,0x0001401cae13) */

void FUN_1401ca060(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1f8 [32];
  int iStack_1d8;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  uint uStack_180;
  longlong lStack_178;
  int iStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [64];
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_1f8;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar20 = param_7 & 0xf;
  uStack_160 = param_9;
  lVar14 = (longlong)param_6;
  lVar19 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_1d8 = param_10;
    (**(code **)(&UNK_1430880e0 + lVar14 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_48 ^ (ulonglong)auStack_1f8) == DAT_1436b4680) {
      return;
    }
    goto LAB_1401cb249;
  }
  lVar10 = (longlong)param_10;
  lVar11 = *param_5;
  puVar17 = &uStack_58;
  if (uVar20 == 6) {
    puVar17 = param_8;
  }
  if (lVar11 < lVar10 + -1) {
    lVar16 = 0;
    lVar10 = -lVar19;
    if (lVar10 < lVar19 + lVar11) {
      iStack_170 = param_10;
      uVar12 = param_7 & 0x40;
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,param_7) & 0xffffffff00000080;
      do {
        lVar15 = lVar10;
        if (((lVar10 < 0) || (lVar11 <= lVar10)) && (param_7 != 0xf0)) {
          if (uVar20 != 6) {
            if (uVar20 == 1) {
              if (lVar10 < 0) {
                lVar15 = 0;
                if (uVar12 != 0) {
                  lVar15 = lVar10;
                }
              }
              else if ((uint)uStack_1c8 == 0) {
                lVar15 = lVar11 + -1;
              }
            }
            else if (uVar20 == 3) {
              if (lVar11 < 2) {
                if (lVar10 < 0) {
                  if ((uVar12 == 0) && (lVar15 = -lVar10, (uint)uStack_1c8 == 0)) {
                    lVar15 = 0;
                  }
                }
                else if (((0 < lVar10) && ((uint)uStack_1c8 == 0)) &&
                        (lVar15 = -lVar10, uVar12 == 0)) {
                  lVar15 = 0;
                }
              }
              else if ((lVar10 < 0) || (lVar11 <= lVar10)) {
                if (lVar10 < 0) goto LAB_1401cb220;
                while ((uint)uStack_1c8 == 0) {
                  for (lVar15 = (lVar11 + -1) * 2 - lVar15; lVar15 < 0; lVar15 = -lVar15) {
LAB_1401cb220:
                    if (uVar12 != 0) goto LAB_1401cb0cb;
                  }
                  if (lVar15 < lVar11) break;
                }
              }
            }
            goto LAB_1401cb0cb;
          }
          uVar3 = uVar12;
          if (-1 < lVar10) {
            uVar3 = (uint)uStack_1c8;
          }
          if (uVar3 != 0) goto LAB_1401cb0cb;
          uVar22 = *(undefined4 *)puVar17;
          uVar23 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar24 = *(undefined4 *)(puVar17 + 1);
        }
        else {
LAB_1401cb0cb:
          uVar22 = *(undefined4 *)(param_1 + lVar15 * 0xc);
          uVar23 = *(undefined4 *)(param_1 + 4 + lVar15 * 0xc);
          uVar24 = *(undefined4 *)(param_1 + 8 + lVar15 * 0xc);
        }
        lVar10 = lVar10 + 1;
        *(undefined4 *)(lVar16 + param_11) = uVar22;
        *(undefined4 *)(lVar16 + 4 + param_11) = uVar23;
        *(undefined4 *)(lVar16 + 8 + param_11) = uVar24;
        lVar16 = lVar16 + 0xc;
        lStack_178 = param_4;
        lStack_168 = lVar14;
      } while (lVar10 < lVar19 + lVar11);
    }
    iStack_1d8 = param_10;
    (**(code **)(&UNK_1430880e0 + lVar14 * 8))(param_11 + lVar19 * 0xc,param_4,lVar11,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lStack_190 = lVar19 * 3;
      uVar9 = lVar10 * 3;
      lStack_1a0 = lVar19 * 0xc;
      uStack_198 = param_11 + lVar19 * 0xc;
      uVar4 = uVar9 - 3;
      if (uVar4 != 0 && SCARRY8(uVar9,-3) == (longlong)uVar4 < 0) {
        if (6 < (longlong)uVar4) {
          lVar16 = lVar10 * 0xc + -0xc;
          if ((lVar16 <= (longlong)(uStack_198 - param_1)) ||
             (lVar16 <= (longlong)-(uStack_198 - param_1))) {
            uVar5 = uStack_198 & 0xf;
            if (uVar5 == 0) {
LAB_1401ca1b8:
              if ((longlong)uVar4 < (longlong)(uVar5 + 4)) goto LAB_1401cb1a8;
              uVar7 = uVar4 - (uVar4 - uVar5 & 3);
              uVar8 = 0;
              if (uVar5 != 0) {
                do {
                  *(undefined4 *)(uStack_198 + uVar8 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                  lStack_178 = param_4;
                } while (uVar8 < uVar5);
              }
              uStack_1c8 = uVar7;
              if ((param_1 + uVar5 * 4 & 0xf) == 0) {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar5 * 4);
                  uVar22 = puVar1[1];
                  uVar23 = puVar1[2];
                  uVar24 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_198 + uVar5 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar22;
                  puVar2[2] = uVar23;
                  puVar2[3] = uVar24;
                  uVar5 = uVar5 + 4;
                } while (uVar5 < uVar7);
              }
              else {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar5 * 4);
                  uVar22 = puVar1[1];
                  uVar23 = puVar1[2];
                  uVar24 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_198 + uVar5 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar22;
                  puVar2[2] = uVar23;
                  puVar2[3] = uVar24;
                  uVar5 = uVar5 + 4;
                } while (uVar5 < uVar7);
              }
            }
            else {
              if ((uStack_198 & 3) == 0) {
                uVar5 = 0x10 - uVar5 >> 2;
                goto LAB_1401ca1b8;
              }
LAB_1401cb1a8:
              uStack_1c8 = 0;
              uVar7 = uStack_1c8;
            }
            for (; uVar7 < uVar4; uVar7 = uVar7 + 1) {
              *(undefined4 *)(uStack_198 + uVar7 * 4) = *(undefined4 *)(param_1 + uVar7 * 4);
            }
            goto LAB_1401ca31e;
          }
        }
        lVar16 = 1;
        uStack_1c8 = (longlong)(param_10 * 3) - 3;
        uVar4 = 0;
        if (uStack_1c8 >> 1 != 0) {
          do {
            uVar5 = uVar4;
            *(undefined4 *)(uStack_198 + uVar5 * 8) = *(undefined4 *)(param_1 + uVar5 * 8);
            *(undefined4 *)(uStack_198 + 4 + uVar5 * 8) = *(undefined4 *)(param_1 + 4 + uVar5 * 8);
            uVar4 = uVar5 + 1;
          } while (uVar4 < uStack_1c8 >> 1);
          lVar16 = uVar5 + 2 + uVar4;
        }
        if (lVar16 - 1U < uStack_1c8) {
          *(undefined4 *)(param_11 + (lStack_190 + -1 + lVar16) * 4) =
               *(undefined4 *)(param_1 + (lVar16 - 1U) * 4);
        }
      }
LAB_1401ca31e:
      uStack_1b0._4_4_ = (undefined4)(uVar9 >> 0x20);
      if (uVar20 == 1) {
        if (0 < lStack_190) {
          uStack_1c8 = lStack_190 + 2;
          lVar16 = (longlong)uStack_1c8 / 3;
          if ((lVar16 < 7) ||
             (((longlong)(param_11 - uStack_198) < 0xc &&
              ((longlong)-(param_11 - uStack_198) < lVar16 * 0xc)))) {
            uVar4 = 0;
            uStack_1c0 = 0;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,param_7) & 0xffffffff0000000f;
            iStack_170 = param_10;
            lVar15 = 0;
            lVar21 = 0;
            uVar9 = uVar4;
            do {
              uVar5 = 0;
              uVar22 = *(undefined4 *)(param_11 + lStack_1a0);
              lVar13 = lVar21 + 0x40;
              if (lVar16 <= lVar21 + 0x40) {
                lVar13 = lVar16;
              }
              uVar8 = lVar13 - lVar21;
              uVar7 = uVar5;
              if (7 < (longlong)uVar8) {
                uVar7 = uVar8 & 0xfffffffffffffff8;
                do {
                  lVar6 = (longlong)(int)uVar5;
                  uVar5 = uVar5 + 8;
                  auStack_158[lVar6] = uVar22;
                  auStack_158[lVar6 + 1] = uVar22;
                  auStack_158[lVar6 + 2] = uVar22;
                  auStack_158[lVar6 + 3] = uVar22;
                  auStack_158[lVar6 + 4] = uVar22;
                  auStack_158[lVar6 + 5] = uVar22;
                  auStack_158[lVar6 + 6] = uVar22;
                  auStack_158[lVar6 + 7] = uVar22;
                } while (uVar5 < uVar7);
              }
              uVar5 = 0;
              for (; uVar7 < uVar8; uVar7 = uVar7 + 1) {
                auStack_158[(int)uVar7] = uVar22;
              }
              lVar6 = param_11 + lVar15;
              uStack_1c8 = param_11;
              uVar7 = uVar5;
              do {
                iVar18 = (int)uVar7;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(uVar5 + lVar6) = auStack_158[iVar18];
                *(undefined4 *)(uVar5 + 4 + lVar6) = *(undefined4 *)(uStack_198 + 4);
                *(undefined4 *)(uVar5 + 8 + lVar6) = *(undefined4 *)(uStack_198 + 8);
                uVar5 = uVar5 + 0xc;
              } while (uVar7 < lVar13 + uVar9);
              uVar4 = uVar4 + 1;
              lVar21 = lVar21 + 0x40;
              lVar15 = lVar15 + 0x300;
              uVar9 = uVar9 - 0x40;
            } while (uVar4 < lVar16 + 0x3fU >> 6);
            uVar20 = (uint)uStack_1b0;
            uVar9 = uStack_1b0;
            lStack_1a8 = lVar19;
            lStack_178 = param_4;
            lStack_168 = lVar14;
          }
          else {
            uVar22 = *(undefined4 *)(param_11 + lStack_1a0);
            lStack_1a8 = 1;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar22);
            uVar23 = *(undefined4 *)(uStack_198 + 4);
            uVar24 = *(undefined4 *)(uStack_198 + 8);
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar24);
            lVar16 = 0;
            uVar9 = 0;
            if (uStack_1c8 / 6 != 0) {
              do {
                uVar4 = uVar9;
                uVar9 = uVar4 + 1;
                *(undefined4 *)(lVar16 + param_11) = uVar22;
                *(undefined4 *)(lVar16 + 4 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 8 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 0xc + param_11) = uVar22;
                *(undefined4 *)(lVar16 + 0x10 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 0x14 + param_11) = uVar24;
                lVar16 = lVar16 + 0x18;
              } while (uVar9 < uStack_1c8 / 6);
              lStack_1a8 = uVar4 + 2 + uVar9;
              lStack_178 = param_4;
            }
            uVar9 = uStack_1b0;
            if (lStack_1a8 - 1U < uStack_1c8 / 3) {
              lVar16 = lStack_1a8 * 3 + -3;
              *(undefined4 *)(param_11 + lVar16 * 4) = uVar22;
              *(undefined4 *)(param_11 + 4 + lVar16 * 4) = uVar23;
              *(undefined4 *)(param_11 + 8 + lVar16 * 4) = uVar24;
            }
          }
        }
      }
      else if (uVar20 == 3) {
        if (0 < lStack_190) {
          uVar4 = 0;
          uStack_1c0 = 1;
          uStack_1c8 = lStack_190 + 2;
          if (uStack_1c8 / 6 != 0) {
            lVar16 = param_11 + lVar10 * 0xc;
            lVar15 = 0;
            uVar5 = uVar4;
            do {
              uVar7 = uVar5;
              uVar5 = uVar7 + 1;
              *(undefined4 *)(lVar15 + param_11) = *(undefined4 *)((uVar4 - 0xc) + lVar16);
              *(undefined4 *)(lVar15 + 4 + param_11) = *(undefined4 *)((uVar4 - 8) + lVar16);
              *(undefined4 *)(lVar15 + 8 + param_11) = *(undefined4 *)((uVar4 - 4) + lVar16);
              *(undefined4 *)(lVar15 + 0xc + param_11) = *(undefined4 *)((uVar4 - 0x18) + lVar16);
              *(undefined4 *)(lVar15 + 0x10 + param_11) = *(undefined4 *)((uVar4 - 0x14) + lVar16);
              lVar21 = uVar4 - 0x10;
              uVar4 = uVar4 - 0x18;
              *(undefined4 *)(lVar15 + 0x14 + param_11) = *(undefined4 *)(lVar21 + lVar16);
              lVar15 = lVar15 + 0x18;
            } while (uVar5 < uStack_1c8 / 6);
            uStack_1c0 = uVar7 + 2 + uVar5;
            lStack_178 = param_4;
          }
          if (uStack_1c0 - 1 < uStack_1c8 / 3) {
            lVar16 = uStack_1c0 * 3 + -3;
            lVar15 = uVar9 - lVar16;
            *(undefined4 *)(param_11 + lVar16 * 4) = *(undefined4 *)((param_11 - 0xc) + lVar15 * 4);
            *(undefined4 *)(param_11 + 4 + lVar16 * 4) =
                 *(undefined4 *)((param_11 - 8) + lVar15 * 4);
            *(undefined4 *)(param_11 + 8 + lVar16 * 4) =
                 *(undefined4 *)((param_11 - 4) + lVar15 * 4);
          }
        }
      }
      else if ((uVar20 == 6) && (0 < lStack_190)) {
        uStack_1c8 = lStack_190 + 2;
        if (6 < (longlong)uStack_1c8 / 3) {
          lVar16 = ((longlong)uStack_1c8 / 3) * 0xc;
          lVar15 = (longlong)puVar17 + (4 - param_11);
          if (((lVar16 <= lVar15) || (7 < -lVar15)) &&
             ((3 < (longlong)(param_11 - (longlong)puVar17) ||
              (lVar16 <= (longlong)-(param_11 - (longlong)puVar17))))) {
            uVar22 = *(undefined4 *)puVar17;
            lStack_1a8 = 1;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar22);
            uVar23 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar24 = *(undefined4 *)(puVar17 + 1);
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar24);
            lVar16 = 0;
            uVar9 = 0;
            if (uStack_1c8 / 6 != 0) {
              do {
                uVar4 = uVar9;
                uVar9 = uVar4 + 1;
                *(undefined4 *)(lVar16 + param_11) = uVar22;
                *(undefined4 *)(lVar16 + 4 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 8 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 0xc + param_11) = uVar22;
                *(undefined4 *)(lVar16 + 0x10 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 0x14 + param_11) = uVar24;
                lVar16 = lVar16 + 0x18;
              } while (uVar9 < uStack_1c8 / 6);
              lStack_1a8 = uVar4 + 2 + uVar9;
              lStack_178 = param_4;
            }
            uVar9 = uStack_1b0;
            if (lStack_1a8 - 1U < uStack_1c8 / 3) {
              lVar16 = lStack_1a8 * 3 + -3;
              *(undefined4 *)(param_11 + lVar16 * 4) = uVar22;
              *(undefined4 *)(param_11 + 4 + lVar16 * 4) = uVar23;
              *(undefined4 *)(param_11 + 8 + lVar16 * 4) = uVar24;
            }
            goto LAB_1401ca99f;
          }
        }
        uStack_1c0 = 1;
        lVar16 = 0;
        uVar4 = 0;
        if (uStack_1c8 / 6 != 0) {
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
            *(undefined4 *)(lVar16 + param_11) = *(undefined4 *)puVar17;
            *(undefined4 *)(lVar16 + 4 + param_11) = *(undefined4 *)((longlong)puVar17 + 4);
            *(undefined4 *)(lVar16 + 8 + param_11) = *(undefined4 *)(puVar17 + 1);
            *(undefined4 *)(lVar16 + 0xc + param_11) = *(undefined4 *)puVar17;
            *(undefined4 *)(lVar16 + 0x10 + param_11) = *(undefined4 *)((longlong)puVar17 + 4);
            *(undefined4 *)(lVar16 + 0x14 + param_11) = *(undefined4 *)(puVar17 + 1);
            lVar16 = lVar16 + 0x18;
          } while (uVar4 < uStack_1c8 / 6);
          uStack_1c0 = uVar5 + 2 + uVar4;
        }
        if (uStack_1c0 - 1 < uStack_1c8 / 3) {
          lVar16 = uStack_1c0 * 3 + -3;
          *(undefined4 *)(param_11 + lVar16 * 4) = *(undefined4 *)puVar17;
          *(undefined4 *)(param_11 + 4 + lVar16 * 4) = *(undefined4 *)((longlong)puVar17 + 4);
          *(undefined4 *)(param_11 + 8 + lVar16 * 4) = *(undefined4 *)(puVar17 + 1);
        }
      }
LAB_1401ca99f:
      uStack_1b0 = uVar9;
      pcStack_1b8 = *(code **)(&UNK_1430880e0 + lVar14 * 8);
      iStack_1d8 = param_10;
      lStack_188 = param_1;
      uStack_180 = param_7;
      (*pcStack_1b8)(uStack_198,param_4,lVar19,param_9);
      lVar11 = lVar11 - lVar19;
      param_1 = lStack_188 + lStack_190 * 4;
      param_4 = param_4 + lStack_190 * 4;
      param_7 = uStack_180;
    }
    else {
      pcStack_1b8 = *(code **)(&UNK_1430880e0 + lVar14 * 8);
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar19 < lVar11) {
        lVar11 = lVar11 - lVar19;
        iStack_1d8 = param_10;
        lStack_188 = param_1;
        (*pcStack_1b8)(param_1,param_4,lVar11,uStack_160);
        param_1 = lStack_188 + lVar11 * 0xc;
        param_4 = param_4 + lVar11 * 0xc;
      }
      lVar14 = lVar10 * 3;
      if (lVar14 != 3 && SCARRY8(lVar14,-3) == lVar14 + -3 < 0) {
        lVar11 = 1;
        uVar9 = ((lVar14 + -1) / 3) * 3;
        uVar4 = uVar9 >> 1;
        if (uVar4 != 0) {
          lVar11 = lVar19 * -0xc + param_1;
          uVar5 = 0;
          do {
            uVar7 = uVar5;
            *(undefined4 *)(param_11 + uVar7 * 8) = *(undefined4 *)(lVar11 + uVar7 * 8);
            *(undefined4 *)(param_11 + 4 + uVar7 * 8) = *(undefined4 *)(lVar11 + 4 + uVar7 * 8);
            uVar5 = uVar7 + 1;
          } while (uVar5 < uVar4);
          lVar11 = uVar7 + 2 + uVar5;
        }
        if (lVar11 - 1U < uVar9) {
          *(undefined4 *)(param_11 + (lVar11 - 1U) * 4) =
               *(undefined4 *)(param_1 + (lVar19 * -3 + -1 + lVar11) * 4);
        }
      }
      lVar11 = lVar19 * 3;
      if (uVar20 == 1) {
        if (0 < lVar11) {
          uStack_1c0 = lVar11 + 2;
          if ((longlong)uStack_1c0 / 3 < 7) {
            lVar11 = 1;
            lVar16 = 0;
            if (uStack_1c0 / 6 != 0) {
              lVar11 = param_11 + lVar10 * 0xc;
              uVar9 = 0;
              do {
                uVar4 = uVar9;
                uVar9 = uVar4 + 1;
                *(undefined4 *)(lVar16 + -0xc + lVar11) = *(undefined4 *)(lVar11 + -0x18);
                *(undefined4 *)(lVar16 + -8 + lVar11) = *(undefined4 *)(lVar11 + -0x14);
                *(undefined4 *)(lVar16 + -4 + lVar11) = *(undefined4 *)(lVar11 + -0x10);
                *(undefined4 *)(lVar16 + lVar11) = *(undefined4 *)(lVar11 + -0x18);
                *(undefined4 *)(lVar16 + 4 + lVar11) = *(undefined4 *)(lVar11 + -0x14);
                *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(lVar11 + -0x10);
                lVar16 = lVar16 + 0x18;
              } while (uVar9 < uStack_1c0 / 6);
              lVar11 = uVar4 + 2 + uVar9;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar14 = lVar11 * 3 + -3 + lVar14;
              *(undefined4 *)((param_11 - 0xc) + lVar14 * 4) =
                   *(undefined4 *)((param_11 - 0x18) + lVar10 * 0xc);
              *(undefined4 *)((param_11 - 8) + lVar14 * 4) =
                   *(undefined4 *)((param_11 - 0x14) + lVar10 * 0xc);
              *(undefined4 *)((param_11 - 4) + lVar14 * 4) =
                   *(undefined4 *)((param_11 - 0x10) + lVar10 * 0xc);
            }
          }
          else {
            uStack_1c8 = param_11 + lVar10 * 0xc;
            lVar10 = 0;
            uVar22 = *(undefined4 *)(uStack_1c8 - 0x18);
            uVar23 = *(undefined4 *)(uStack_1c8 - 0x14);
            uVar24 = *(undefined4 *)(uStack_1c8 - 0x10);
            lVar11 = 1;
            uVar9 = 0;
            if (uStack_1c0 / 6 != 0) {
              do {
                uVar4 = uVar9;
                uVar9 = uVar4 + 1;
                *(undefined4 *)(lVar10 + -0xc + uStack_1c8) = uVar22;
                *(undefined4 *)(lVar10 + -8 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar10 + -4 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar10 + uStack_1c8) = uVar22;
                *(undefined4 *)(lVar10 + 4 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar10 + 8 + uStack_1c8) = uVar24;
                lVar10 = lVar10 + 0x18;
              } while (uVar9 < uStack_1c0 / 6);
              lVar11 = uVar4 + 2 + uVar9;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar14 = lVar14 + lVar11 * 3 + -3;
              *(undefined4 *)((param_11 - 0xc) + lVar14 * 4) = uVar22;
              *(undefined4 *)((param_11 - 8) + lVar14 * 4) = uVar23;
              *(undefined4 *)((param_11 - 4) + lVar14 * 4) = uVar24;
            }
          }
        }
      }
      else if (uVar20 == 3) {
        if (0 < lVar11) {
          lVar16 = 1;
          lVar15 = 0;
          lVar21 = 0;
          uVar9 = (lVar11 + 2U) / 6;
          if (uVar9 != 0) {
            lVar10 = param_11 + lVar10 * 0xc;
            uVar4 = 0;
            do {
              uVar5 = uVar4;
              uVar4 = uVar5 + 1;
              *(undefined4 *)(lVar15 + -0xc + lVar10) = *(undefined4 *)(lVar21 + -0x24 + lVar10);
              *(undefined4 *)(lVar15 + -8 + lVar10) = *(undefined4 *)(lVar21 + -0x20 + lVar10);
              *(undefined4 *)(lVar15 + -4 + lVar10) = *(undefined4 *)(lVar21 + -0x1c + lVar10);
              *(undefined4 *)(lVar15 + lVar10) = *(undefined4 *)(lVar21 + -0x30 + lVar10);
              *(undefined4 *)(lVar15 + 4 + lVar10) = *(undefined4 *)(lVar21 + -0x2c + lVar10);
              lVar16 = lVar21 + -0x28;
              lVar21 = lVar21 + -0x18;
              *(undefined4 *)(lVar15 + 8 + lVar10) = *(undefined4 *)(lVar16 + lVar10);
              lVar15 = lVar15 + 0x18;
            } while (uVar4 < uVar9);
            lVar16 = uVar5 + 2 + uVar4;
          }
          if (lVar16 - 1U < (lVar11 + 2U) / 3) {
            lVar10 = lVar16 * 3 + -3;
            lVar11 = lVar14 + lVar10;
            lVar14 = lVar14 - lVar10;
            *(undefined4 *)((param_11 - 0xc) + lVar11 * 4) =
                 *(undefined4 *)((param_11 - 0x24) + lVar14 * 4);
            *(undefined4 *)((param_11 - 8) + lVar11 * 4) =
                 *(undefined4 *)((param_11 - 0x20) + lVar14 * 4);
            *(undefined4 *)((param_11 - 4) + lVar11 * 4) =
                 *(undefined4 *)((param_11 - 0x1c) + lVar14 * 4);
          }
        }
      }
      else if ((uVar20 == 6) && (0 < lVar11)) {
        uStack_1c0 = lVar11 + 2;
        if (6 < (longlong)uStack_1c0 / 3) {
          uStack_1c8 = param_11 + lVar10 * 0xc;
          lVar11 = ((longlong)uStack_1c0 / 3) * 0xc;
          lVar16 = (longlong)puVar17 + (4 - (uStack_1c8 - 0xc));
          if (((lVar11 <= lVar16) || (7 < -lVar16)) &&
             ((lVar16 = (uStack_1c8 - 0xc) - (longlong)puVar17, 3 < lVar16 || (lVar11 <= -lVar16))))
          {
            uVar22 = *(undefined4 *)puVar17;
            lVar11 = 1;
            uVar23 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar24 = *(undefined4 *)(puVar17 + 1);
            lVar10 = 0;
            uVar9 = 0;
            if (uStack_1c0 / 6 != 0) {
              do {
                uVar4 = uVar9;
                uVar9 = uVar4 + 1;
                *(undefined4 *)(lVar10 + -0xc + uStack_1c8) = uVar22;
                *(undefined4 *)(lVar10 + -8 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar10 + -4 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar10 + uStack_1c8) = uVar22;
                *(undefined4 *)(lVar10 + 4 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar10 + 8 + uStack_1c8) = uVar24;
                lVar10 = lVar10 + 0x18;
              } while (uVar9 < uStack_1c0 / 6);
              lVar11 = uVar4 + 2 + uVar9;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar14 = lVar14 + lVar11 * 3 + -3;
              *(undefined4 *)((param_11 - 0xc) + lVar14 * 4) = uVar22;
              *(undefined4 *)((param_11 - 8) + lVar14 * 4) = uVar23;
              *(undefined4 *)((param_11 - 4) + lVar14 * 4) = uVar24;
            }
            goto LAB_1401caf9f;
          }
        }
        lVar11 = 1;
        lVar16 = 0;
        if (uStack_1c0 / 6 != 0) {
          lVar11 = param_11 + lVar10 * 0xc;
          uVar9 = 0;
          do {
            uVar4 = uVar9;
            uVar9 = uVar4 + 1;
            *(undefined4 *)(lVar16 + -0xc + lVar11) = *(undefined4 *)puVar17;
            *(undefined4 *)(lVar16 + -8 + lVar11) = *(undefined4 *)((longlong)puVar17 + 4);
            *(undefined4 *)(lVar16 + -4 + lVar11) = *(undefined4 *)(puVar17 + 1);
            *(undefined4 *)(lVar16 + lVar11) = *(undefined4 *)puVar17;
            *(undefined4 *)(lVar16 + 4 + lVar11) = *(undefined4 *)((longlong)puVar17 + 4);
            *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(puVar17 + 1);
            lVar16 = lVar16 + 0x18;
          } while (uVar9 < uStack_1c0 / 6);
          lVar11 = uVar4 + 2 + uVar9;
        }
        if (lVar11 - 1U < uStack_1c0 / 3) {
          lVar14 = lVar14 + lVar11 * 3 + -3;
          *(undefined4 *)((param_11 - 0xc) + lVar14 * 4) = *(undefined4 *)puVar17;
          *(undefined4 *)((param_11 - 8) + lVar14 * 4) = *(undefined4 *)((longlong)puVar17 + 4);
          *(undefined4 *)((param_11 - 4) + lVar14 * 4) = *(undefined4 *)(puVar17 + 1);
        }
      }
LAB_1401caf9f:
      iStack_1d8 = param_10;
      (*pcStack_1b8)(param_11 + lVar19 * 0xc,param_4,lVar19,uStack_160);
    }
    else {
      iStack_1d8 = param_10;
      (*pcStack_1b8)(param_1,param_4,lVar11,uStack_160);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_1f8) == DAT_1436b4680) {
    return;
  }
LAB_1401cb249:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

