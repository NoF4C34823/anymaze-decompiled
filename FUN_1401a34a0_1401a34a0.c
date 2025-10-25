
void FUN_1401a34a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1e8 [32];
  int iStack_1c8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  code *pcStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  int iStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [64];
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_1e8;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_160 = param_9;
  uVar19 = param_7 & 0xf;
  lVar17 = (longlong)param_6;
  lVar14 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_1c8 = param_10;
    (**(code **)(&UNK_143087f20 + lVar17 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_48 ^ (ulonglong)auStack_1e8) == DAT_1436b4680) {
      return;
    }
    goto LAB_1401a47aa;
  }
  lVar12 = (longlong)param_10;
  puVar21 = &uStack_58;
  if (uVar19 == 6) {
    puVar21 = param_8;
  }
  lVar13 = *param_5;
  if (*param_5 < lVar12 + -1) {
    lVar12 = -lVar14;
    lVar16 = 0;
    if (lVar12 < lVar14 + lVar13) {
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,param_7) & 0xffffffff00000080;
      uVar7 = param_7 & 0x40;
      iStack_170 = param_10;
      do {
        lVar11 = lVar12;
        if (((lVar12 < 0) || (lVar13 <= lVar12)) && (param_7 != 0xf0)) {
          if (uVar19 != 6) {
            if (uVar19 == 1) {
              if (lVar12 < 0) {
                lVar11 = 0;
                if (uVar7 != 0) {
                  lVar11 = lVar12;
                }
              }
              else if ((uint)uStack_1b8 == 0) {
                lVar11 = lVar13 + -1;
              }
            }
            else if (uVar19 == 3) {
              if (lVar13 < 2) {
                if (lVar12 < 0) {
                  if ((uVar7 == 0) && (lVar11 = -lVar12, (uint)uStack_1b8 == 0)) {
                    lVar11 = 0;
                  }
                }
                else if (((0 < lVar12) && ((uint)uStack_1b8 == 0)) && (lVar11 = -lVar12, uVar7 == 0)
                        ) {
                  lVar11 = 0;
                }
              }
              else if ((lVar12 < 0) || (lVar13 <= lVar12)) {
                if (lVar12 < 0) goto LAB_1401a4780;
                while ((uint)uStack_1b8 == 0) {
                  for (lVar11 = (lVar13 + -1) * 2 - lVar11; lVar11 < 0; lVar11 = -lVar11) {
LAB_1401a4780:
                    if (uVar7 != 0) goto LAB_1401a460c;
                  }
                  if (lVar11 < lVar13) break;
                }
              }
            }
            goto LAB_1401a460c;
          }
          uVar3 = uVar7;
          if (-1 < lVar12) {
            uVar3 = (uint)uStack_1b8;
          }
          if (uVar3 != 0) goto LAB_1401a460c;
          uVar23 = *(undefined4 *)puVar21;
          uVar24 = *(undefined4 *)((longlong)puVar21 + 4);
          uVar25 = *(undefined4 *)(puVar21 + 1);
        }
        else {
LAB_1401a460c:
          lVar11 = lVar11 * 0xc;
          uVar23 = *(undefined4 *)(lVar11 + param_1);
          uVar24 = *(undefined4 *)(lVar11 + 4 + param_1);
          uVar25 = *(undefined4 *)(lVar11 + 8 + param_1);
        }
        lVar12 = lVar12 + 1;
        *(undefined4 *)(lVar16 + param_11) = uVar23;
        *(undefined4 *)(lVar16 + 4 + param_11) = uVar24;
        *(undefined4 *)(lVar16 + 8 + param_11) = uVar25;
        lVar16 = lVar16 + 0xc;
        lStack_190 = lVar14;
        lStack_178 = param_4;
        lStack_168 = lVar17;
      } while (lVar12 < lVar14 + lVar13);
    }
    iStack_1c8 = param_10;
    (**(code **)(&UNK_143087f20 + lVar17 * 8))(param_11 + lVar14 * 0xc,param_4,lVar13,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lStack_190 = lVar12 * 3;
      lStack_180 = lVar14 * 0xc;
      uStack_188 = param_11 + lStack_180;
      uVar8 = lStack_190 - 3;
      if (uVar8 != 0 && SCARRY8(lStack_190,-3) == (longlong)uVar8 < 0) {
        if (6 < (longlong)uVar8) {
          lVar16 = lVar12 * 0xc + -0xc;
          if ((lVar16 <= (longlong)(uStack_188 - param_1)) ||
             (lVar16 <= (longlong)-(uStack_188 - param_1))) {
            uVar10 = uStack_188 & 0xf;
            if (uVar10 == 0) {
LAB_1401a360a:
              if ((longlong)uVar8 < (longlong)(uVar10 + 4)) goto LAB_1401a4702;
              uVar4 = uVar8 - (uVar8 - uVar10 & 3);
              uVar18 = 0;
              if (uVar10 != 0) {
                do {
                  *(undefined4 *)(uStack_188 + uVar18 * 4) = *(undefined4 *)(param_1 + uVar18 * 4);
                  uVar18 = uVar18 + 1;
                } while (uVar18 < uVar10);
              }
              uStack_1b8 = uVar4;
              if ((uVar10 * 4 + param_1 & 0xf) == 0) {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar10 * 4);
                  uVar23 = puVar1[1];
                  uVar24 = puVar1[2];
                  uVar25 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_188 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar23;
                  puVar2[2] = uVar24;
                  puVar2[3] = uVar25;
                  uVar10 = uVar10 + 4;
                } while (uVar10 < uVar4);
              }
              else {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar10 * 4);
                  uVar23 = puVar1[1];
                  uVar24 = puVar1[2];
                  uVar25 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_188 + uVar10 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar23;
                  puVar2[2] = uVar24;
                  puVar2[3] = uVar25;
                  uVar10 = uVar10 + 4;
                } while (uVar10 < uVar4);
              }
            }
            else {
              if ((uStack_188 & 3) == 0) {
                uVar10 = 0x10 - uVar10 >> 2;
                goto LAB_1401a360a;
              }
LAB_1401a4702:
              uStack_1b8 = 0;
              uVar4 = uStack_1b8;
            }
            for (; uVar4 < uVar8; uVar4 = uVar4 + 1) {
              *(undefined4 *)(uStack_188 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar4 * 4);
            }
            goto LAB_1401a3788;
          }
        }
        puStack_1b0 = (undefined8 *)0x0;
        lVar16 = 1;
        uStack_1b8 = (longlong)(param_10 * 3) - 3;
        if ((undefined8 *)(uStack_1b8 >> 1) != (undefined8 *)0x0) {
          puStack_1b0 = (undefined8 *)0x0;
          do {
            *(undefined4 *)(uStack_188 + (longlong)puStack_1b0 * 8) =
                 *(undefined4 *)(param_1 + (longlong)puStack_1b0 * 8);
            *(undefined4 *)(uStack_188 + 4 + (longlong)puStack_1b0 * 8) =
                 *(undefined4 *)(param_1 + 4 + (longlong)puStack_1b0 * 8);
            puStack_1b0 = (undefined8 *)((longlong)puStack_1b0 + 1);
          } while (puStack_1b0 < (undefined8 *)(uStack_1b8 >> 1));
          lVar16 = (longlong)puStack_1b0 * 2 + 1;
        }
        uVar8 = lVar16 - 1;
        if (uVar8 < uStack_1b8) {
          *(undefined4 *)(param_11 + (lVar14 * 3 + uVar8) * 4) =
               *(undefined4 *)(param_1 + uVar8 * 4);
        }
      }
LAB_1401a3788:
      puVar9 = puStack_1b0;
      if (uVar19 == 1) {
        lStack_198 = lVar14 * 3;
        if (lStack_198 != 0 && SCARRY8(lVar14 * 2,lVar14) == lStack_198 < 0) {
          uStack_1b8 = lVar14 * 3 + 2;
          lVar16 = (longlong)uStack_1b8 / 3;
          if ((lVar16 < 7) ||
             (((longlong)(param_11 - uStack_188) < 0xc &&
              ((longlong)-(param_11 - uStack_188) < lVar16 * 0xc)))) {
            uVar8 = 0;
            lVar6 = 0;
            iStack_170 = param_10;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,param_7);
            lVar11 = 0;
            lVar5 = lVar6;
            do {
              uVar10 = 0;
              uVar23 = *(undefined4 *)(lStack_180 + param_11);
              lVar22 = lVar6 + 0x40;
              if (lVar16 <= lVar6 + 0x40) {
                lVar22 = lVar16;
              }
              uVar4 = lVar22 - lVar6;
              uVar18 = uVar10;
              if (7 < (longlong)uVar4) {
                uVar24 = *(undefined4 *)(lStack_180 + param_11);
                uVar18 = uVar4 & 0xfffffffffffffff8;
                do {
                  lVar15 = (longlong)(int)uVar10;
                  uVar10 = uVar10 + 8;
                  auStack_158[lVar15] = uVar24;
                  auStack_158[lVar15 + 1] = uVar24;
                  auStack_158[lVar15 + 2] = uVar24;
                  auStack_158[lVar15 + 3] = uVar24;
                  auStack_158[lVar15 + 4] = uVar24;
                  auStack_158[lVar15 + 5] = uVar24;
                  auStack_158[lVar15 + 6] = uVar24;
                  auStack_158[lVar15 + 7] = uVar24;
                } while (uVar10 < uVar18);
              }
              uVar10 = 0;
              for (; uVar18 < uVar4; uVar18 = uVar18 + 1) {
                auStack_158[(int)uVar18] = uVar23;
              }
              lVar15 = param_11 + lVar11;
              uStack_1b8 = param_11;
              uVar18 = uVar10;
              do {
                iVar20 = (int)uVar18;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(uVar10 + lVar15) = auStack_158[iVar20];
                *(undefined4 *)(uVar10 + 4 + lVar15) = *(undefined4 *)(uStack_188 + 4);
                *(undefined4 *)(uVar10 + 8 + lVar15) = *(undefined4 *)(uStack_188 + 8);
                uVar10 = uVar10 + 0xc;
              } while (uVar18 < (ulonglong)(lVar22 + lVar5));
              uVar8 = uVar8 + 1;
              lVar6 = lVar6 + 0x40;
              lVar11 = lVar11 + 0x300;
              lVar5 = lVar5 + -0x40;
              puVar9 = puVar21;
              lStack_198 = param_1;
              lStack_190 = lVar14;
              lStack_168 = lVar17;
            } while (uVar8 < lVar16 + 0x3fU >> 6);
          }
          else {
            uVar8 = 0;
            uVar23 = *(undefined4 *)(lStack_180 + param_11);
            puStack_1b0 = (undefined8 *)CONCAT44(puStack_1b0._4_4_,uVar23);
            uVar24 = *(undefined4 *)(uStack_188 + 4);
            uVar25 = *(undefined4 *)(uStack_188 + 8);
            lVar11 = 1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar25);
            uVar10 = (lStack_198 + 2U) / 6;
            lVar16 = 0;
            if (uVar10 != 0) {
              do {
                uVar8 = uVar8 + 1;
                *(undefined4 *)(lVar16 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 4 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 8 + param_11) = uVar25;
                *(undefined4 *)(lVar16 + 0xc + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 0x10 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 0x14 + param_11) = uVar25;
                lVar16 = lVar16 + 0x18;
              } while (uVar8 < uVar10);
              lVar11 = uVar8 * 2 + 1;
              lStack_198 = param_1;
            }
            puVar9 = puStack_1b0;
            if (lVar11 - 1U < uStack_1b8 / 3) {
              lVar16 = (lVar11 - 1U) * 0xc;
              *(undefined4 *)(lVar16 + param_11) = uVar23;
              *(undefined4 *)(lVar16 + 4 + param_11) = uVar24;
              *(undefined4 *)(lVar16 + 8 + param_11) = uVar25;
            }
          }
        }
      }
      else if (uVar19 == 3) {
        uStack_1b8 = lVar14 * 3;
        if (uStack_1b8 != 0 && SCARRY8(lVar14 * 2,lVar14) == (longlong)uStack_1b8 < 0) {
          uStack_1b8 = uStack_1b8 + 2;
          lStack_198 = 1;
          uStack_1a0 = 0;
          puStack_1b0 = (undefined8 *)0x0;
          lVar16 = 1;
          if (uStack_1b8 / 6 != 0) {
            lVar5 = lVar12 * 0xc + param_11;
            lVar16 = 0;
            lVar11 = 0;
            uStack_1a0 = 0;
            do {
              uStack_1a0 = uStack_1a0 + 1;
              *(undefined4 *)(lVar11 + param_11) = *(undefined4 *)(lVar16 + -0xc + lVar5);
              *(undefined4 *)(lVar11 + 4 + param_11) = *(undefined4 *)(lVar16 + -8 + lVar5);
              *(undefined4 *)(lVar11 + 8 + param_11) = *(undefined4 *)(lVar16 + -4 + lVar5);
              *(undefined4 *)(lVar11 + 0xc + param_11) = *(undefined4 *)(lVar16 + -0x18 + lVar5);
              *(undefined4 *)(lVar11 + 0x10 + param_11) = *(undefined4 *)(lVar16 + -0x14 + lVar5);
              lVar6 = lVar16 + -0x10;
              lVar16 = lVar16 + -0x18;
              *(undefined4 *)(lVar11 + 0x14 + param_11) = *(undefined4 *)(lVar6 + lVar5);
              lVar11 = lVar11 + 0x18;
            } while (uStack_1a0 < uStack_1b8 / 6);
            lVar16 = uStack_1a0 * 2 + 1;
            lStack_198 = param_1;
          }
          uVar8 = lVar16 - 1;
          puVar9 = puStack_1b0;
          if (uVar8 < uStack_1b8 / 3) {
            lVar11 = lStack_190 + uVar8 * -3;
            lVar16 = uVar8 * 0xc;
            *(undefined4 *)(lVar16 + param_11) = *(undefined4 *)((param_11 - 0xc) + lVar11 * 4);
            *(undefined4 *)(lVar16 + 4 + param_11) = *(undefined4 *)((param_11 - 8) + lVar11 * 4);
            *(undefined4 *)(lVar16 + 8 + param_11) = *(undefined4 *)((param_11 - 4) + lVar11 * 4);
          }
        }
      }
      else if ((uVar19 == 6) &&
              (lStack_198 = lVar14 * 3,
              lStack_198 != 0 && SCARRY8(lVar14 * 2,lVar14) == lStack_198 < 0)) {
        uStack_1b8 = lVar14 * 3 + 2;
        if (6 < (longlong)uStack_1b8 / 3) {
          lVar11 = ((longlong)uStack_1b8 / 3) * 0xc;
          lVar16 = (longlong)puVar21 + (4 - param_11);
          if (((lVar11 <= lVar16) || (7 < -lVar16)) &&
             ((3 < (longlong)(param_11 - (longlong)puVar21) ||
              (lVar11 <= (longlong)-(param_11 - (longlong)puVar21))))) {
            uVar23 = *(undefined4 *)puVar21;
            puStack_1b0 = (undefined8 *)CONCAT44(puStack_1b0._4_4_,uVar23);
            uVar8 = 0;
            uVar24 = *(undefined4 *)((longlong)puVar21 + 4);
            lVar11 = 1;
            uVar25 = *(undefined4 *)(puVar21 + 1);
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar25);
            uVar10 = (lStack_198 + 2U) / 6;
            lVar16 = 0;
            if (uVar10 != 0) {
              do {
                uVar8 = uVar8 + 1;
                *(undefined4 *)(lVar16 + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 4 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 8 + param_11) = uVar25;
                *(undefined4 *)(lVar16 + 0xc + param_11) = uVar23;
                *(undefined4 *)(lVar16 + 0x10 + param_11) = uVar24;
                *(undefined4 *)(lVar16 + 0x14 + param_11) = uVar25;
                lVar16 = lVar16 + 0x18;
              } while (uVar8 < uVar10);
              lVar11 = uVar8 * 2 + 1;
              lStack_198 = param_1;
            }
            puVar9 = puStack_1b0;
            if (lVar11 - 1U < uStack_1b8 / 3) {
              lVar16 = (lVar11 - 1U) * 0xc;
              *(undefined4 *)(lVar16 + param_11) = uVar23;
              *(undefined4 *)(lVar16 + 4 + param_11) = uVar24;
              *(undefined4 *)(lVar16 + 8 + param_11) = uVar25;
            }
            goto LAB_1401a3e17;
          }
        }
        uVar8 = 0;
        uVar10 = (lStack_198 + 2U) / 6;
        lVar16 = 0;
        puStack_1b0 = (undefined8 *)0x1;
        if (uVar10 != 0) {
          do {
            uVar8 = uVar8 + 1;
            *(undefined4 *)(lVar16 + param_11) = *(undefined4 *)puVar21;
            *(undefined4 *)(lVar16 + 4 + param_11) = *(undefined4 *)((longlong)puVar21 + 4);
            *(undefined4 *)(lVar16 + 8 + param_11) = *(undefined4 *)(puVar21 + 1);
            *(undefined4 *)(lVar16 + 0xc + param_11) = *(undefined4 *)puVar21;
            *(undefined4 *)(lVar16 + 0x10 + param_11) = *(undefined4 *)((longlong)puVar21 + 4);
            *(undefined4 *)(lVar16 + 0x14 + param_11) = *(undefined4 *)(puVar21 + 1);
            lVar16 = lVar16 + 0x18;
          } while (uVar8 < uVar10);
          puStack_1b0 = (undefined8 *)(uVar8 * 2 + 1);
        }
        puVar9 = (undefined8 *)((longlong)puStack_1b0 + -1);
        if (puVar9 < (undefined8 *)(uStack_1b8 / 3)) {
          lVar16 = (longlong)puVar9 * 0xc;
          *(undefined4 *)(lVar16 + param_11) = *(undefined4 *)puVar21;
          *(undefined4 *)(lVar16 + 4 + param_11) = *(undefined4 *)((longlong)puVar21 + 4);
          *(undefined4 *)(lVar16 + 8 + param_11) = *(undefined4 *)(puVar21 + 1);
        }
      }
LAB_1401a3e17:
      puStack_1b0 = puVar9;
      pcStack_1a8 = *(code **)(&UNK_143087f20 + lVar17 * 8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,param_7);
      iStack_1c8 = param_10;
      lStack_178 = param_4;
      (*pcStack_1a8)(uStack_188,param_4,lVar14);
      lVar13 = lVar13 - lVar14;
      param_1 = param_1 + lStack_180;
      param_4 = lStack_178 + lStack_180;
      param_7 = (uint)uStack_1a0;
    }
    else {
      pcStack_1a8 = *(code **)(&UNK_143087f20 + lVar17 * 8);
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar14 < lVar13) {
        iStack_1c8 = param_10;
        lStack_178 = param_4;
        (*pcStack_1a8)(param_1,param_4,lVar13 - lVar14);
        param_4 = (lVar13 - lVar14) * 0xc;
        param_1 = param_1 + param_4;
        param_4 = lStack_178 + param_4;
      }
      lVar17 = lVar12 * 3;
      if (lVar17 != 3 && SCARRY8(lVar17,-3) == lVar17 + -3 < 0) {
        lVar13 = 1;
        uVar8 = 0;
        uVar10 = ((lVar17 + -1) / 3) * 3;
        uVar18 = uVar10 >> 1;
        if (uVar18 != 0) {
          lVar13 = lVar14 * -0xc + param_1;
          do {
            *(undefined4 *)(param_11 + uVar8 * 8) = *(undefined4 *)(lVar13 + uVar8 * 8);
            *(undefined4 *)(param_11 + 4 + uVar8 * 8) = *(undefined4 *)(lVar13 + 4 + uVar8 * 8);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar18);
          lVar13 = uVar8 * 2 + 1;
        }
        uVar8 = lVar13 - 1;
        if (uVar8 < uVar10) {
          *(undefined4 *)(param_11 + uVar8 * 4) =
               *(undefined4 *)(param_1 + (lVar14 * -3 + uVar8) * 4);
        }
      }
      if (uVar19 == 1) {
        lVar13 = lVar14 * 3;
        if (lVar13 != 0 && SCARRY8(lVar14 * 2,lVar14) == lVar13 < 0) {
          puStack_1b0 = (undefined8 *)(lVar14 * 3 + 2);
          if ((longlong)puStack_1b0 / 3 < 7) {
            uVar10 = 0;
            uVar8 = (lVar13 + 2U) / 6;
            lVar16 = 1;
            lVar13 = 0;
            if (uVar8 != 0) {
              lVar16 = lVar12 * 0xc + param_11;
              do {
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar13 + -0xc + lVar16) = *(undefined4 *)(lVar16 + -0x18);
                *(undefined4 *)(lVar13 + -8 + lVar16) = *(undefined4 *)(lVar16 + -0x14);
                *(undefined4 *)(lVar13 + -4 + lVar16) = *(undefined4 *)(lVar16 + -0x10);
                *(undefined4 *)(lVar13 + lVar16) = *(undefined4 *)(lVar16 + -0x18);
                *(undefined4 *)(lVar13 + 4 + lVar16) = *(undefined4 *)(lVar16 + -0x14);
                *(undefined4 *)(lVar13 + 8 + lVar16) = *(undefined4 *)(lVar16 + -0x10);
                lVar13 = lVar13 + 0x18;
              } while (uVar10 < uVar8);
              lVar16 = uVar10 * 2 + 1;
            }
            if (lVar16 - 1U < (ulonglong)puStack_1b0 / 3) {
              lVar12 = lVar12 * 0xc;
              lVar17 = lVar17 + (lVar16 - 1U) * 3;
              *(undefined4 *)((param_11 - 0xc) + lVar17 * 4) =
                   *(undefined4 *)((param_11 - 0x18) + lVar12);
              *(undefined4 *)((param_11 - 8) + lVar17 * 4) =
                   *(undefined4 *)((param_11 - 0x14) + lVar12);
              *(undefined4 *)((param_11 - 4) + lVar17 * 4) =
                   *(undefined4 *)((param_11 - 0x10) + lVar12);
            }
          }
          else {
            uStack_1b8 = lVar12 * 0xc + param_11;
            uVar10 = 0;
            lVar16 = 1;
            uVar8 = (lVar13 + 2U) / 6;
            lVar12 = 0;
            uVar23 = *(undefined4 *)(uStack_1b8 - 0x18);
            uVar24 = *(undefined4 *)(uStack_1b8 - 0x14);
            uVar25 = *(undefined4 *)(uStack_1b8 - 0x10);
            if (uVar8 != 0) {
              do {
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar12 + -0xc + uStack_1b8) = uVar23;
                *(undefined4 *)(lVar12 + -8 + uStack_1b8) = uVar24;
                *(undefined4 *)(lVar12 + -4 + uStack_1b8) = uVar25;
                *(undefined4 *)(lVar12 + uStack_1b8) = uVar23;
                *(undefined4 *)(lVar12 + 4 + uStack_1b8) = uVar24;
                *(undefined4 *)(lVar12 + 8 + uStack_1b8) = uVar25;
                lVar12 = lVar12 + 0x18;
              } while (uVar10 < uVar8);
              lVar16 = uVar10 * 2 + 1;
            }
            if (lVar16 - 1U < (ulonglong)puStack_1b0 / 3) {
              lVar17 = lVar17 + (lVar16 - 1U) * 3;
              *(undefined4 *)((param_11 - 0xc) + lVar17 * 4) = uVar23;
              *(undefined4 *)((param_11 - 8) + lVar17 * 4) = uVar24;
              *(undefined4 *)((param_11 - 4) + lVar17 * 4) = uVar25;
            }
          }
        }
      }
      else if (uVar19 == 3) {
        lVar13 = lVar14 * 3;
        if (lVar13 != 0 && SCARRY8(lVar14 * 2,lVar14) == lVar13 < 0) {
          uVar10 = 0;
          uVar8 = (lVar13 + 2U) / 6;
          lVar11 = 0;
          lVar5 = 1;
          lVar16 = 0;
          if (uVar8 != 0) {
            lVar12 = lVar12 * 0xc + param_11;
            do {
              uVar10 = uVar10 + 1;
              *(undefined4 *)(lVar11 + -0xc + lVar12) = *(undefined4 *)(lVar16 + -0x24 + lVar12);
              *(undefined4 *)(lVar11 + -8 + lVar12) = *(undefined4 *)(lVar16 + -0x20 + lVar12);
              *(undefined4 *)(lVar11 + -4 + lVar12) = *(undefined4 *)(lVar16 + -0x1c + lVar12);
              *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)(lVar16 + -0x30 + lVar12);
              *(undefined4 *)(lVar11 + 4 + lVar12) = *(undefined4 *)(lVar16 + -0x2c + lVar12);
              lVar5 = lVar16 + -0x28;
              lVar16 = lVar16 + -0x18;
              *(undefined4 *)(lVar11 + 8 + lVar12) = *(undefined4 *)(lVar5 + lVar12);
              lVar11 = lVar11 + 0x18;
            } while (uVar10 < uVar8);
            lVar5 = uVar10 * 2 + 1;
          }
          uVar8 = lVar5 - 1;
          if (uVar8 < (lVar13 + 2U) / 3) {
            lVar12 = lVar17 + uVar8 * 3;
            lVar17 = lVar17 + uVar8 * -3;
            *(undefined4 *)((param_11 - 0xc) + lVar12 * 4) =
                 *(undefined4 *)((param_11 - 0x24) + lVar17 * 4);
            *(undefined4 *)((param_11 - 8) + lVar12 * 4) =
                 *(undefined4 *)((param_11 - 0x20) + lVar17 * 4);
            *(undefined4 *)((param_11 - 4) + lVar12 * 4) =
                 *(undefined4 *)((param_11 - 0x1c) + lVar17 * 4);
          }
        }
      }
      else if ((uVar19 == 6) &&
              (lVar13 = lVar14 * 3, lVar13 != 0 && SCARRY8(lVar14 * 2,lVar14) == lVar13 < 0)) {
        puStack_1b0 = (undefined8 *)(lVar14 * 3 + 2);
        if (6 < (longlong)puStack_1b0 / 3) {
          lVar11 = ((longlong)puStack_1b0 / 3) * 0xc;
          uStack_1b8 = param_11 + lVar12 * 0xc;
          lVar16 = lVar12 * 0xc + -0xc + param_11;
          lVar5 = (longlong)puVar21 + (4 - lVar16);
          if (((lVar11 <= lVar5) || (7 < -lVar5)) &&
             ((lVar16 = lVar16 - (longlong)puVar21, 3 < lVar16 || (lVar11 <= -lVar16)))) {
            lVar16 = 1;
            uVar8 = (lVar13 + 2U) / 6;
            uVar23 = *(undefined4 *)puVar21;
            lVar12 = 0;
            uVar24 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar25 = *(undefined4 *)(puVar21 + 1);
            uVar10 = 0;
            if (uVar8 != 0) {
              do {
                uVar10 = uVar10 + 1;
                *(undefined4 *)(lVar12 + -0xc + uStack_1b8) = uVar23;
                *(undefined4 *)(lVar12 + -8 + uStack_1b8) = uVar24;
                *(undefined4 *)(lVar12 + -4 + uStack_1b8) = uVar25;
                *(undefined4 *)(lVar12 + uStack_1b8) = uVar23;
                *(undefined4 *)(lVar12 + 4 + uStack_1b8) = uVar24;
                *(undefined4 *)(lVar12 + 8 + uStack_1b8) = uVar25;
                lVar12 = lVar12 + 0x18;
              } while (uVar10 < uVar8);
              lVar16 = uVar10 * 2 + 1;
            }
            if (lVar16 - 1U < (ulonglong)puStack_1b0 / 3) {
              lVar17 = lVar17 + (lVar16 - 1U) * 3;
              *(undefined4 *)((param_11 - 0xc) + lVar17 * 4) = uVar23;
              *(undefined4 *)((param_11 - 8) + lVar17 * 4) = uVar24;
              *(undefined4 *)((param_11 - 4) + lVar17 * 4) = uVar25;
            }
            goto LAB_1401a44c9;
          }
        }
        uVar10 = 0;
        uVar8 = (lVar13 + 2U) / 6;
        lVar16 = 1;
        lVar13 = 0;
        if (uVar8 != 0) {
          lVar12 = lVar12 * 0xc + param_11;
          do {
            uVar10 = uVar10 + 1;
            *(undefined4 *)(lVar13 + -0xc + lVar12) = *(undefined4 *)puVar21;
            *(undefined4 *)(lVar13 + -8 + lVar12) = *(undefined4 *)((longlong)puVar21 + 4);
            *(undefined4 *)(lVar13 + -4 + lVar12) = *(undefined4 *)(puVar21 + 1);
            *(undefined4 *)(lVar13 + lVar12) = *(undefined4 *)puVar21;
            *(undefined4 *)(lVar13 + 4 + lVar12) = *(undefined4 *)((longlong)puVar21 + 4);
            *(undefined4 *)(lVar13 + 8 + lVar12) = *(undefined4 *)(puVar21 + 1);
            lVar13 = lVar13 + 0x18;
          } while (uVar10 < uVar8);
          lVar16 = uVar10 * 2 + 1;
        }
        if (lVar16 - 1U < (ulonglong)puStack_1b0 / 3) {
          lVar17 = lVar17 + (lVar16 - 1U) * 3;
          *(undefined4 *)((param_11 - 0xc) + lVar17 * 4) = *(undefined4 *)puVar21;
          *(undefined4 *)((param_11 - 8) + lVar17 * 4) = *(undefined4 *)((longlong)puVar21 + 4);
          *(undefined4 *)((param_11 - 4) + lVar17 * 4) = *(undefined4 *)(puVar21 + 1);
        }
      }
LAB_1401a44c9:
      iStack_1c8 = param_10;
      (*pcStack_1a8)(param_11 + lVar14 * 0xc,param_4,lVar14,uStack_160);
    }
    else {
      iStack_1c8 = param_10;
      (*pcStack_1a8)(param_1,param_4,lVar13,uStack_160);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_1e8) == DAT_1436b4680) {
    return;
  }
LAB_1401a47aa:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

