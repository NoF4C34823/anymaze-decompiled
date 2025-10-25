
/* WARNING: Removing unreachable block (ram,0x0001400508d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004fbc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1f8 [32];
  int iStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  uint uStack_190;
  longlong lStack_188;
  int iStack_180;
  longlong lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined4 auStack_158 [64];
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1436b4680 ^ (ulonglong)auStack_1f8;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_168 = param_9;
  uVar19 = param_7 & 0xf;
  lVar18 = (longlong)param_6;
  uVar21 = (ulonglong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_1d8 = param_10;
    (**(code **)(&UNK_1430868a0 + lVar18 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_48 ^ (ulonglong)auStack_1f8) == _DAT_1436b4680) {
      return;
    }
    goto LAB_140050cca;
  }
  lVar11 = *param_5;
  puStack_170 = &uStack_58;
  if (uVar19 == 6) {
    puStack_170 = param_8;
  }
  lVar12 = (longlong)param_10;
  if (lVar11 < lVar12 + -1) {
    lVar16 = -uVar21;
    lVar12 = 0;
    if (lVar16 < (longlong)(uVar21 + lVar11)) {
      uVar14 = param_7 & 0x80;
      iStack_180 = param_10;
      uVar7 = param_7 & 0x40;
      do {
        lVar5 = lVar16;
        if (((lVar16 < 0) || (lVar11 <= lVar16)) && (param_7 != 0xf0)) {
          if (uVar19 != 6) {
            if (uVar19 == 1) {
              if (lVar16 < 0) {
                lVar5 = 0;
                if (uVar7 != 0) {
                  lVar5 = lVar16;
                }
              }
              else if (uVar14 == 0) {
                lVar5 = lVar11 + -1;
              }
            }
            else if (uVar19 == 3) {
              if (lVar11 < 2) {
                if (lVar16 < 0) {
                  if ((uVar7 == 0) && (lVar5 = -lVar16, uVar14 == 0)) {
                    lVar5 = 0;
                  }
                }
                else if (((0 < lVar16) && (uVar14 == 0)) && (lVar5 = -lVar16, uVar7 == 0)) {
                  lVar5 = 0;
                }
              }
              else if ((lVar16 < 0) || (lVar11 <= lVar16)) {
                if (lVar16 < 0) goto LAB_140050ca0;
                while (uVar14 == 0) {
                  for (lVar5 = (lVar11 + -1) * 2 - lVar5; lVar5 < 0; lVar5 = -lVar5) {
LAB_140050ca0:
                    if (uVar7 != 0) goto LAB_140050b6c;
                  }
                  if (lVar5 < lVar11) break;
                }
              }
            }
            goto LAB_140050b6c;
          }
          uVar3 = uVar7;
          if (-1 < lVar16) {
            uVar3 = uVar14;
          }
          if (uVar3 != 0) goto LAB_140050b6c;
          uVar23 = *(undefined4 *)puStack_170;
          uVar24 = *(undefined4 *)((longlong)puStack_170 + 4);
          uVar25 = *(undefined4 *)(puStack_170 + 1);
        }
        else {
LAB_140050b6c:
          uVar23 = *(undefined4 *)(param_1 + lVar5 * 0xc);
          uVar24 = *(undefined4 *)(param_1 + 4 + lVar5 * 0xc);
          uVar25 = *(undefined4 *)(param_1 + 8 + lVar5 * 0xc);
        }
        lVar16 = lVar16 + 1;
        *(undefined4 *)(lVar12 + param_11) = uVar23;
        *(undefined4 *)(lVar12 + 4 + param_11) = uVar24;
        *(undefined4 *)(lVar12 + 8 + param_11) = uVar25;
        lVar12 = lVar12 + 0xc;
        lStack_188 = param_4;
        lStack_178 = lVar18;
      } while (lVar16 < (longlong)(uVar21 + lVar11));
    }
    iStack_1d8 = param_10;
    (**(code **)(&UNK_1430868a0 + lVar18 * 8))(param_11 + uVar21 * 0xc,param_4,lVar11,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lStack_198 = uVar21 * 3;
      uVar10 = lVar12 * 3;
      uVar15 = uVar10 - 3;
      lStack_1a8 = uVar21 * 0xc;
      uStack_1a0 = param_11 + uVar21 * 0xc;
      if (uVar15 != 0 && SCARRY8(uVar10,-3) == (longlong)uVar15 < 0) {
        if (6 < (longlong)uVar15) {
          lVar16 = lVar12 * 0xc + -0xc;
          if ((lVar16 <= (longlong)(uStack_1a0 - param_1)) ||
             (lVar16 <= (longlong)-(uStack_1a0 - param_1))) {
            uVar6 = uStack_1a0 & 0xf;
            if (uVar6 == 0) {
LAB_14004fd23:
              if ((longlong)uVar15 < (longlong)(uVar6 + 4)) goto LAB_140050c3c;
              uVar8 = 0;
              uVar4 = uVar15 - (uVar15 - uVar6 & 3);
              if (uVar6 != 0) {
                do {
                  *(undefined4 *)(uStack_1a0 + uVar8 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
                  uVar8 = uVar8 + 1;
                  lStack_188 = param_4;
                } while (uVar8 < uVar6);
              }
              if ((param_1 + uVar6 * 4 & 0xf) == 0) {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar6 * 4);
                  uVar23 = puVar1[1];
                  uVar24 = puVar1[2];
                  uVar25 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_1a0 + uVar6 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar23;
                  puVar2[2] = uVar24;
                  puVar2[3] = uVar25;
                  uVar6 = uVar6 + 4;
                } while (uVar6 < uVar4);
              }
              else {
                do {
                  puVar1 = (undefined4 *)(param_1 + uVar6 * 4);
                  uVar23 = puVar1[1];
                  uVar24 = puVar1[2];
                  uVar25 = puVar1[3];
                  puVar2 = (undefined4 *)(uStack_1a0 + uVar6 * 4);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar23;
                  puVar2[2] = uVar24;
                  puVar2[3] = uVar25;
                  uVar6 = uVar6 + 4;
                } while (uVar6 < uVar4);
              }
            }
            else {
              if ((uStack_1a0 & 3) == 0) {
                uVar6 = 0x10 - uVar6 >> 2;
                goto LAB_14004fd23;
              }
LAB_140050c3c:
              uVar4 = 0;
            }
            for (; uVar4 < uVar15; uVar4 = uVar4 + 1) {
              *(undefined4 *)(uStack_1a0 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar4 * 4);
            }
            goto LAB_14004fe59;
          }
        }
        lVar16 = 1;
        uVar4 = (longlong)(param_10 * 3) - 3;
        uVar6 = uVar4 >> 1;
        uVar15 = 0;
        if (uVar6 != 0) {
          do {
            uVar8 = uVar15;
            *(undefined4 *)(uStack_1a0 + uVar8 * 8) = *(undefined4 *)(param_1 + uVar8 * 8);
            *(undefined4 *)(uStack_1a0 + 4 + uVar8 * 8) = *(undefined4 *)(param_1 + 4 + uVar8 * 8);
            uVar15 = uVar8 + 1;
          } while (uVar15 < uVar6);
          lVar16 = uVar8 + 2 + uVar15;
        }
        if (lVar16 - 1U < uVar4) {
          *(undefined4 *)(param_11 + (lStack_198 + -1 + lVar16) * 4) =
               *(undefined4 *)(param_1 + (lVar16 - 1U) * 4);
        }
      }
LAB_14004fe59:
      uStack_1c0._4_4_ = (undefined4)(uVar10 >> 0x20);
      if (uVar19 == 1) {
        if (0 < lStack_198) {
          uStack_1c8 = lStack_198 + 2;
          lVar16 = (longlong)uStack_1c8 / 3;
          if ((lVar16 < 7) ||
             (((longlong)(param_11 - uStack_1a0) < 0xc &&
              ((longlong)-(param_11 - uStack_1a0) < lVar16 * 0xc)))) {
            uVar10 = 0;
            lVar17 = 0;
            lVar9 = 0;
            uStack_1c8._4_4_ = (undefined4)(uStack_1c8 >> 0x20);
            uStack_1c8 = CONCAT44(uStack_1c8._4_4_,param_7) & 0xffffffff0000000f;
            iStack_180 = param_10;
            lVar5 = lVar9;
            do {
              uVar15 = 0;
              uVar23 = *(undefined4 *)(param_11 + lStack_1a8);
              lVar22 = lVar17 + 0x40;
              if (lVar16 <= lVar17 + 0x40) {
                lVar22 = lVar16;
              }
              uVar4 = lVar22 - lVar17;
              uVar6 = uVar15;
              if (7 < (longlong)uVar4) {
                uVar6 = uVar4 & 0xfffffffffffffff8;
                do {
                  lVar13 = (longlong)(int)uVar15;
                  uVar15 = uVar15 + 8;
                  auStack_158[lVar13] = uVar23;
                  auStack_158[lVar13 + 1] = uVar23;
                  auStack_158[lVar13 + 2] = uVar23;
                  auStack_158[lVar13 + 3] = uVar23;
                  auStack_158[lVar13 + 4] = uVar23;
                  auStack_158[lVar13 + 5] = uVar23;
                  auStack_158[lVar13 + 6] = uVar23;
                  auStack_158[lVar13 + 7] = uVar23;
                } while (uVar15 < uVar6);
              }
              uVar15 = 0;
              for (; uVar6 < uVar4; uVar6 = uVar6 + 1) {
                auStack_158[(int)uVar6] = uVar23;
              }
              lVar13 = param_11 + lVar9;
              uVar6 = uVar15;
              do {
                iVar20 = (int)uVar6;
                uVar6 = uVar6 + 1;
                *(undefined4 *)(uVar15 + lVar13) = auStack_158[iVar20];
                *(undefined4 *)(uVar15 + 4 + lVar13) = *(undefined4 *)(uStack_1a0 + 4);
                *(undefined4 *)(uVar15 + 8 + lVar13) = *(undefined4 *)(uStack_1a0 + 8);
                uVar15 = uVar15 + 0xc;
              } while (uVar6 < (ulonglong)(lVar22 + lVar5));
              uVar10 = uVar10 + 1;
              lVar17 = lVar17 + 0x40;
              lVar9 = lVar9 + 0x300;
              lVar5 = lVar5 + -0x40;
            } while (uVar10 < lVar16 + 0x3fU >> 6);
            uVar19 = (uint)uStack_1c8;
            uVar10 = uVar21;
            lStack_1b0 = param_11;
            lStack_188 = param_4;
            lStack_178 = lVar18;
          }
          else {
            lVar16 = 1;
            uVar23 = *(undefined4 *)(param_11 + lStack_1a8);
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar23);
            uVar24 = *(undefined4 *)(uStack_1a0 + 4);
            uVar25 = *(undefined4 *)(uStack_1a0 + 8);
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,uVar25);
            lVar5 = 0;
            uVar10 = 0;
            if (uStack_1c8 / 6 != 0) {
              do {
                uVar15 = uVar10;
                uVar10 = uVar15 + 1;
                *(undefined4 *)(lVar5 + param_11) = uVar23;
                *(undefined4 *)(lVar5 + 4 + param_11) = uVar24;
                *(undefined4 *)(lVar5 + 8 + param_11) = uVar25;
                *(undefined4 *)(lVar5 + 0xc + param_11) = uVar23;
                *(undefined4 *)(lVar5 + 0x10 + param_11) = uVar24;
                *(undefined4 *)(lVar5 + 0x14 + param_11) = uVar25;
                lVar5 = lVar5 + 0x18;
              } while (uVar10 < uStack_1c8 / 6);
              lVar16 = uVar15 + 2 + uVar10;
              lStack_188 = param_4;
            }
            uVar10 = uStack_1c0;
            if (lVar16 - 1U < uStack_1c8 / 3) {
              lVar16 = lVar16 * 3 + -3;
              *(undefined4 *)(param_11 + lVar16 * 4) = uVar23;
              *(undefined4 *)(param_11 + 4 + lVar16 * 4) = uVar24;
              *(undefined4 *)(param_11 + 8 + lVar16 * 4) = uVar25;
            }
          }
        }
      }
      else if (uVar19 == 3) {
        if (0 < lStack_198) {
          lVar16 = 1;
          uStack_1c8 = lStack_198 + 2;
          lVar9 = 0;
          lVar5 = 0;
          if (uStack_1c8 / 6 != 0) {
            lVar16 = param_11 + lVar12 * 0xc;
            uVar15 = 0;
            do {
              uVar6 = uVar15;
              uVar15 = uVar6 + 1;
              *(undefined4 *)(lVar9 + param_11) = *(undefined4 *)(lVar5 + -0xc + lVar16);
              *(undefined4 *)(lVar9 + 4 + param_11) = *(undefined4 *)(lVar5 + -8 + lVar16);
              *(undefined4 *)(lVar9 + 8 + param_11) = *(undefined4 *)(lVar5 + -4 + lVar16);
              *(undefined4 *)(lVar9 + 0xc + param_11) = *(undefined4 *)(lVar5 + -0x18 + lVar16);
              *(undefined4 *)(lVar9 + 0x10 + param_11) = *(undefined4 *)(lVar5 + -0x14 + lVar16);
              lVar17 = lVar5 + -0x10;
              lVar5 = lVar5 + -0x18;
              *(undefined4 *)(lVar9 + 0x14 + param_11) = *(undefined4 *)(lVar17 + lVar16);
              lVar9 = lVar9 + 0x18;
            } while (uVar15 < uStack_1c8 / 6);
            lVar16 = uVar6 + 2 + uVar15;
            lStack_188 = param_4;
          }
          if (lVar16 - 1U < uStack_1c8 / 3) {
            lVar16 = lVar16 * 3 + -3;
            lVar5 = uVar10 - lVar16;
            *(undefined4 *)(param_11 + lVar16 * 4) = *(undefined4 *)(param_11 + -0xc + lVar5 * 4);
            *(undefined4 *)(param_11 + 4 + lVar16 * 4) = *(undefined4 *)(param_11 + -8 + lVar5 * 4);
            *(undefined4 *)(param_11 + 8 + lVar16 * 4) = *(undefined4 *)(param_11 + -4 + lVar5 * 4);
          }
        }
      }
      else if ((uVar19 == 6) && (0 < lStack_198)) {
        uStack_1c8 = lStack_198 + 2;
        if (6 < (longlong)uStack_1c8 / 3) {
          lVar16 = ((longlong)uStack_1c8 / 3) * 0xc;
          lVar5 = (longlong)puStack_170 + (4 - param_11);
          if (((lVar16 <= lVar5) || (7 < -lVar5)) &&
             ((3 < param_11 - (longlong)puStack_170 ||
              (lVar16 <= -(param_11 - (longlong)puStack_170))))) {
            lVar16 = 1;
            uVar23 = *(undefined4 *)puStack_170;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar23);
            uVar24 = *(undefined4 *)((longlong)puStack_170 + 4);
            uVar25 = *(undefined4 *)(puStack_170 + 1);
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,uVar25);
            lVar5 = 0;
            uVar10 = 0;
            if (uStack_1c8 / 6 != 0) {
              do {
                uVar15 = uVar10;
                uVar10 = uVar15 + 1;
                *(undefined4 *)(lVar5 + param_11) = uVar23;
                *(undefined4 *)(lVar5 + 4 + param_11) = uVar24;
                *(undefined4 *)(lVar5 + 8 + param_11) = uVar25;
                *(undefined4 *)(lVar5 + 0xc + param_11) = uVar23;
                *(undefined4 *)(lVar5 + 0x10 + param_11) = uVar24;
                *(undefined4 *)(lVar5 + 0x14 + param_11) = uVar25;
                lVar5 = lVar5 + 0x18;
              } while (uVar10 < uStack_1c8 / 6);
              lVar16 = uVar15 + 2 + uVar10;
              lStack_188 = param_4;
            }
            uVar10 = uStack_1c0;
            if (lVar16 - 1U < uStack_1c8 / 3) {
              lVar16 = lVar16 * 3 + -3;
              *(undefined4 *)(param_11 + lVar16 * 4) = uVar23;
              *(undefined4 *)(param_11 + 4 + lVar16 * 4) = uVar24;
              *(undefined4 *)(param_11 + 8 + lVar16 * 4) = uVar25;
            }
            goto LAB_140050474;
          }
        }
        lVar16 = 1;
        lVar5 = 0;
        uVar15 = 0;
        if (uStack_1c8 / 6 != 0) {
          do {
            uVar6 = uVar15;
            uVar15 = uVar6 + 1;
            *(undefined4 *)(lVar5 + param_11) = *(undefined4 *)puStack_170;
            *(undefined4 *)(lVar5 + 4 + param_11) = *(undefined4 *)((longlong)puStack_170 + 4);
            *(undefined4 *)(lVar5 + 8 + param_11) = *(undefined4 *)(puStack_170 + 1);
            *(undefined4 *)(lVar5 + 0xc + param_11) = *(undefined4 *)puStack_170;
            *(undefined4 *)(lVar5 + 0x10 + param_11) = *(undefined4 *)((longlong)puStack_170 + 4);
            *(undefined4 *)(lVar5 + 0x14 + param_11) = *(undefined4 *)(puStack_170 + 1);
            lVar5 = lVar5 + 0x18;
          } while (uVar15 < uStack_1c8 / 6);
          lVar16 = uVar6 + 2 + uVar15;
        }
        if (lVar16 - 1U < uStack_1c8 / 3) {
          lVar16 = lVar16 * 3 + -3;
          *(undefined4 *)(param_11 + lVar16 * 4) = *(undefined4 *)puStack_170;
          *(undefined4 *)(param_11 + 4 + lVar16 * 4) = *(undefined4 *)((longlong)puStack_170 + 4);
          *(undefined4 *)(param_11 + 8 + lVar16 * 4) = *(undefined4 *)(puStack_170 + 1);
        }
      }
LAB_140050474:
      uStack_1c0 = uVar10;
      pcStack_1b8 = *(code **)(&UNK_1430868a0 + lVar18 * 8);
      iStack_1d8 = param_10;
      uStack_190 = param_7;
      (*pcStack_1b8)(uStack_1a0,param_4,uVar21,param_9);
      lVar11 = lVar11 - uVar21;
      param_1 = param_1 + lStack_198 * 4;
      param_4 = param_4 + lStack_198 * 4;
      param_7 = uStack_190;
    }
    else {
      pcStack_1b8 = *(code **)(&UNK_1430868a0 + lVar18 * 8);
    }
    if ((param_7 & 0x80) == 0) {
      if ((longlong)uVar21 < lVar11) {
        lVar11 = lVar11 - uVar21;
        iStack_1d8 = param_10;
        (*pcStack_1b8)(param_1,param_4,lVar11,uStack_168);
        param_1 = param_1 + lVar11 * 0xc;
        param_4 = param_4 + lVar11 * 0xc;
      }
      lVar18 = lVar12 * 3;
      if (lVar18 != 3 && SCARRY8(lVar18,-3) == lVar18 + -3 < 0) {
        lVar11 = 1;
        uVar10 = ((lVar18 + -1) / 3) * 3;
        uVar15 = uVar10 >> 1;
        if (uVar15 != 0) {
          lVar11 = uVar21 * -0xc + param_1;
          uVar6 = 0;
          do {
            uVar4 = uVar6;
            *(undefined4 *)(param_11 + uVar4 * 8) = *(undefined4 *)(lVar11 + uVar4 * 8);
            *(undefined4 *)(param_11 + 4 + uVar4 * 8) = *(undefined4 *)(lVar11 + 4 + uVar4 * 8);
            uVar6 = uVar4 + 1;
          } while (uVar6 < uVar15);
          lVar11 = uVar4 + 2 + uVar6;
        }
        if (lVar11 - 1U < uVar10) {
          *(undefined4 *)(param_11 + (lVar11 - 1U) * 4) =
               *(undefined4 *)(param_1 + (uVar21 * -3 + -1 + lVar11) * 4);
        }
      }
      lVar11 = uVar21 * 3;
      if (uVar19 == 1) {
        if (0 < lVar11) {
          uStack_1c0 = lVar11 + 2;
          if ((longlong)uStack_1c0 / 3 < 7) {
            lVar11 = 1;
            lVar16 = 0;
            if (uStack_1c0 / 6 != 0) {
              lVar11 = param_11 + lVar12 * 0xc;
              uVar10 = 0;
              do {
                uVar15 = uVar10;
                uVar10 = uVar15 + 1;
                *(undefined4 *)(lVar16 + -0xc + lVar11) = *(undefined4 *)(lVar11 + -0x18);
                *(undefined4 *)(lVar16 + -8 + lVar11) = *(undefined4 *)(lVar11 + -0x14);
                *(undefined4 *)(lVar16 + -4 + lVar11) = *(undefined4 *)(lVar11 + -0x10);
                *(undefined4 *)(lVar16 + lVar11) = *(undefined4 *)(lVar11 + -0x18);
                *(undefined4 *)(lVar16 + 4 + lVar11) = *(undefined4 *)(lVar11 + -0x14);
                *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(lVar11 + -0x10);
                lVar16 = lVar16 + 0x18;
              } while (uVar10 < uStack_1c0 / 6);
              lVar11 = uVar15 + 2 + uVar10;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar18 = lVar11 * 3 + -3 + lVar18;
              *(undefined4 *)(param_11 + -0xc + lVar18 * 4) =
                   *(undefined4 *)(param_11 + -0x18 + lVar12 * 0xc);
              *(undefined4 *)(param_11 + -8 + lVar18 * 4) =
                   *(undefined4 *)(param_11 + -0x14 + lVar12 * 0xc);
              *(undefined4 *)(param_11 + -4 + lVar18 * 4) =
                   *(undefined4 *)(param_11 + -0x10 + lVar12 * 0xc);
            }
          }
          else {
            uStack_1c8 = param_11 + lVar12 * 0xc;
            lVar12 = 0;
            uVar23 = *(undefined4 *)(uStack_1c8 - 0x18);
            uVar24 = *(undefined4 *)(uStack_1c8 - 0x14);
            uVar25 = *(undefined4 *)(uStack_1c8 - 0x10);
            lVar11 = 1;
            uVar10 = 0;
            if (uStack_1c0 / 6 != 0) {
              do {
                uVar15 = uVar10;
                uVar10 = uVar15 + 1;
                *(undefined4 *)(lVar12 + -0xc + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar12 + -8 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar12 + -4 + uStack_1c8) = uVar25;
                *(undefined4 *)(lVar12 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar12 + 4 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar12 + 8 + uStack_1c8) = uVar25;
                lVar12 = lVar12 + 0x18;
              } while (uVar10 < uStack_1c0 / 6);
              lVar11 = uVar15 + 2 + uVar10;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar18 = lVar18 + lVar11 * 3 + -3;
              *(undefined4 *)(param_11 + -0xc + lVar18 * 4) = uVar23;
              *(undefined4 *)(param_11 + -8 + lVar18 * 4) = uVar24;
              *(undefined4 *)(param_11 + -4 + lVar18 * 4) = uVar25;
            }
          }
        }
      }
      else if (uVar19 == 3) {
        if (0 < lVar11) {
          uVar10 = (lVar11 + 2U) / 6;
          lVar5 = 0;
          lVar16 = 1;
          lVar9 = 0;
          if (uVar10 != 0) {
            lVar12 = param_11 + lVar12 * 0xc;
            uVar15 = 0;
            do {
              uVar6 = uVar15;
              uVar15 = uVar6 + 1;
              *(undefined4 *)(lVar5 + -0xc + lVar12) = *(undefined4 *)(lVar9 + -0x24 + lVar12);
              *(undefined4 *)(lVar5 + -8 + lVar12) = *(undefined4 *)(lVar9 + -0x20 + lVar12);
              *(undefined4 *)(lVar5 + -4 + lVar12) = *(undefined4 *)(lVar9 + -0x1c + lVar12);
              *(undefined4 *)(lVar5 + lVar12) = *(undefined4 *)(lVar9 + -0x30 + lVar12);
              *(undefined4 *)(lVar5 + 4 + lVar12) = *(undefined4 *)(lVar9 + -0x2c + lVar12);
              lVar16 = lVar9 + -0x28;
              lVar9 = lVar9 + -0x18;
              *(undefined4 *)(lVar5 + 8 + lVar12) = *(undefined4 *)(lVar16 + lVar12);
              lVar5 = lVar5 + 0x18;
            } while (uVar15 < uVar10);
            lVar16 = uVar6 + 2 + uVar15;
          }
          if (lVar16 - 1U < (lVar11 + 2U) / 3) {
            lVar12 = lVar16 * 3 + -3;
            lVar11 = lVar18 + lVar12;
            lVar18 = lVar18 - lVar12;
            *(undefined4 *)(param_11 + -0xc + lVar11 * 4) =
                 *(undefined4 *)(param_11 + -0x24 + lVar18 * 4);
            *(undefined4 *)(param_11 + -8 + lVar11 * 4) =
                 *(undefined4 *)(param_11 + -0x20 + lVar18 * 4);
            *(undefined4 *)(param_11 + -4 + lVar11 * 4) =
                 *(undefined4 *)(param_11 + -0x1c + lVar18 * 4);
          }
        }
      }
      else if ((uVar19 == 6) && (0 < lVar11)) {
        uStack_1c0 = lVar11 + 2;
        if (6 < (longlong)uStack_1c0 / 3) {
          uStack_1c8 = param_11 + lVar12 * 0xc;
          lVar11 = ((longlong)uStack_1c0 / 3) * 0xc;
          lVar16 = (longlong)puStack_170 + (4 - (uStack_1c8 - 0xc));
          if (((lVar11 <= lVar16) || (7 < -lVar16)) &&
             ((lVar16 = (uStack_1c8 - 0xc) - (longlong)puStack_170, 3 < lVar16 ||
              (lVar11 <= -lVar16)))) {
            lVar12 = 0;
            uVar23 = *(undefined4 *)puStack_170;
            uVar24 = *(undefined4 *)((longlong)puStack_170 + 4);
            uVar25 = *(undefined4 *)(puStack_170 + 1);
            lVar11 = 1;
            uVar10 = 0;
            if (uStack_1c0 / 6 != 0) {
              do {
                uVar15 = uVar10;
                uVar10 = uVar15 + 1;
                *(undefined4 *)(lVar12 + -0xc + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar12 + -8 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar12 + -4 + uStack_1c8) = uVar25;
                *(undefined4 *)(lVar12 + uStack_1c8) = uVar23;
                *(undefined4 *)(lVar12 + 4 + uStack_1c8) = uVar24;
                *(undefined4 *)(lVar12 + 8 + uStack_1c8) = uVar25;
                lVar12 = lVar12 + 0x18;
              } while (uVar10 < uStack_1c0 / 6);
              lVar11 = uVar15 + 2 + uVar10;
            }
            if (lVar11 - 1U < uStack_1c0 / 3) {
              lVar18 = lVar18 + lVar11 * 3 + -3;
              *(undefined4 *)(param_11 + -0xc + lVar18 * 4) = uVar23;
              *(undefined4 *)(param_11 + -8 + lVar18 * 4) = uVar24;
              *(undefined4 *)(param_11 + -4 + lVar18 * 4) = uVar25;
            }
            goto LAB_140050a58;
          }
        }
        lVar11 = 1;
        lVar16 = 0;
        if (uStack_1c0 / 6 != 0) {
          lVar11 = param_11 + lVar12 * 0xc;
          uVar10 = 0;
          do {
            uVar15 = uVar10;
            uVar10 = uVar15 + 1;
            *(undefined4 *)(lVar16 + -0xc + lVar11) = *(undefined4 *)puStack_170;
            *(undefined4 *)(lVar16 + -8 + lVar11) = *(undefined4 *)((longlong)puStack_170 + 4);
            *(undefined4 *)(lVar16 + -4 + lVar11) = *(undefined4 *)(puStack_170 + 1);
            *(undefined4 *)(lVar16 + lVar11) = *(undefined4 *)puStack_170;
            *(undefined4 *)(lVar16 + 4 + lVar11) = *(undefined4 *)((longlong)puStack_170 + 4);
            *(undefined4 *)(lVar16 + 8 + lVar11) = *(undefined4 *)(puStack_170 + 1);
            lVar16 = lVar16 + 0x18;
          } while (uVar10 < uStack_1c0 / 6);
          lVar11 = uVar15 + 2 + uVar10;
        }
        if (lVar11 - 1U < uStack_1c0 / 3) {
          lVar18 = lVar18 + lVar11 * 3 + -3;
          *(undefined4 *)(param_11 + -0xc + lVar18 * 4) = *(undefined4 *)puStack_170;
          *(undefined4 *)(param_11 + -8 + lVar18 * 4) = *(undefined4 *)((longlong)puStack_170 + 4);
          *(undefined4 *)(param_11 + -4 + lVar18 * 4) = *(undefined4 *)(puStack_170 + 1);
        }
      }
LAB_140050a58:
      iStack_1d8 = param_10;
      (*pcStack_1b8)(param_11 + uVar21 * 0xc,param_4,uVar21,uStack_168);
    }
    else {
      iStack_1d8 = param_10;
      (*pcStack_1b8)(param_1,param_4,lVar11,uStack_168);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_1f8) == _DAT_1436b4680) {
    return;
  }
LAB_140050cca:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

