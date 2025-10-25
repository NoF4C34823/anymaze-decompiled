
/* WARNING: Removing unreachable block (ram,0x00014090bede) */

void FUN_14090a9e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,short *param_11)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  uint uVar14;
  longlong lVar15;
  short sVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  short sVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  short sVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auStack_198 [32];
  int iStack_178;
  undefined8 uStack_168;
  code *pcStack_160;
  int iStack_158;
  longlong lStack_150;
  short asStack_140 [76];
  short *psStack_a8;
  short *psStack_a0;
  longlong lStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  int iStack_78;
  short *psStack_70;
  undefined4 uStack_48;
  undefined2 uStack_44;
  ulonglong uStack_40;
  
  param_1 = param_1 + param_2 * param_3;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_198;
  uStack_48 = 0;
  uStack_44 = 0;
  lVar20 = (longlong)param_6;
  uVar23 = param_7 & 0xf;
  lVar27 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_178 = param_10;
    (*(code *)(&PTR_FUN_14308d480)[lVar20])(param_1,param_4,*param_5,param_9);
    if ((uStack_40 ^ (ulonglong)auStack_198) == DAT_1436b4680) {
      return;
    }
    goto LAB_14090c53b;
  }
  psVar13 = (short *)*param_5;
  psStack_70 = (short *)&uStack_48;
  if (uVar23 == 6) {
    psStack_70 = param_8;
  }
  lVar15 = (longlong)param_10;
  if ((longlong)psVar13 < lVar15 + -1) {
    lVar19 = -lVar27;
    lVar15 = 0;
    if (lVar19 < lVar27 + (longlong)psVar13) {
      uVar14 = param_7 & 0x80;
      iStack_78 = param_10;
      uStack_168 = (short *)(CONCAT44(uStack_168._4_4_,param_7) & 0xffffffff00000040);
      do {
        lVar18 = lVar19;
        if (((lVar19 < 0) || ((longlong)psVar13 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar23 != 6) {
            if (uVar23 == 1) {
              if (lVar19 < 0) {
                lVar18 = 0;
                if ((uint)uStack_168 != 0) {
                  lVar18 = lVar19;
                }
              }
              else if (uVar14 == 0) {
                lVar18 = (longlong)psVar13 - 1U;
              }
            }
            else if (uVar23 == 3) {
              if ((longlong)psVar13 < 2) {
                if (lVar19 < 0) {
                  if ((uint)uStack_168 == 0) {
                    lVar18 = -lVar19;
                    if (uVar14 == 0) {
                      lVar18 = 0;
                    }
                  }
                }
                else if (((0 < lVar19) && (uVar14 == 0)) &&
                        (lVar18 = -lVar19, (uint)uStack_168 == 0)) {
                  lVar18 = 0;
                }
              }
              else if ((lVar19 < 0) || ((longlong)psVar13 <= lVar19)) {
                if (lVar19 < 0) goto LAB_14090c4e1;
                while (uVar14 == 0) {
                  for (lVar18 = ((longlong)psVar13 - 1U) * 2 - lVar18; lVar18 < 0; lVar18 = -lVar18)
                  {
LAB_14090c4e1:
                    if ((uint)uStack_168 != 0) goto LAB_14090c371;
                  }
                  if (lVar18 < (longlong)psVar13) break;
                }
              }
            }
            goto LAB_14090c371;
          }
          uVar6 = (uint)uStack_168;
          if (-1 < lVar19) {
            uVar6 = uVar14;
          }
          if (uVar6 != 0) goto LAB_14090c371;
          sVar21 = *psStack_70;
          sVar26 = psStack_70[1];
          sVar16 = psStack_70[2];
        }
        else {
LAB_14090c371:
          sVar21 = *(short *)(param_1 + lVar18 * 6);
          sVar26 = *(short *)(param_1 + 2 + lVar18 * 6);
          sVar16 = *(short *)(param_1 + 4 + lVar18 * 6);
        }
        lVar19 = lVar19 + 1;
        *(short *)(lVar15 + (longlong)param_11) = sVar21;
        *(short *)(lVar15 + 2 + (longlong)param_11) = sVar26;
        *(short *)(lVar15 + 4 + (longlong)param_11) = sVar16;
        lVar15 = lVar15 + 6;
        lStack_88 = param_4;
        lStack_80 = lVar27;
      } while (lVar19 < lVar27 + (longlong)psVar13);
    }
    iStack_178 = param_10;
    (*(code *)(&PTR_FUN_14308d480)[lVar20])(param_11 + lVar27 * 3,param_4,psVar13,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar19 = lVar15 * 3;
      lStack_98 = lVar27 * 3;
      psVar8 = (short *)(lVar27 * 6);
      psStack_a0 = param_11 + lVar27 * 3;
      uVar12 = lVar19 - 3;
      if (uVar12 != 0 && SCARRY8(lVar19,-3) == (longlong)uVar12 < 0) {
        if (6 < (longlong)uVar12) {
          lVar18 = lVar15 * 6 + -6;
          if ((lVar18 <= (longlong)psStack_a0 - param_1) ||
             (lVar18 <= -((longlong)psStack_a0 - param_1))) {
            if ((longlong)uVar12 < 0x10) {
LAB_14090c455:
              uVar7 = 0;
            }
            else {
              if ((longlong)uVar12 < 0x2b9) {
                uVar9 = 0;
                uVar7 = uVar12 & 0xfffffffffffffff0;
              }
              else {
                uVar9 = (ulonglong)psStack_a0 & 0x1f;
                if (uVar9 != 0) {
                  if (((ulonglong)psStack_a0 & 1) != 0) goto LAB_14090c455;
                  uVar9 = 0x20 - uVar9 >> 1;
                }
                if ((longlong)uVar12 < (longlong)(uVar9 + 0x10)) goto LAB_14090c455;
                uVar17 = 0;
                uVar7 = uVar12 - (uVar12 - uVar9 & 0xf);
                if (uVar9 != 0) {
                  do {
                    psStack_a0[uVar17] = *(short *)(param_1 + uVar17 * 2);
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar9);
                }
              }
              do {
                puVar2 = (undefined8 *)(param_1 + uVar9 * 2);
                uVar3 = puVar2[1];
                uVar4 = puVar2[2];
                uVar5 = puVar2[3];
                psVar1 = psStack_a0 + uVar9;
                *(undefined8 *)psVar1 = *puVar2;
                *(undefined8 *)(psVar1 + 4) = uVar3;
                *(undefined8 *)(psVar1 + 8) = uVar4;
                *(undefined8 *)(psVar1 + 0xc) = uVar5;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar7);
            }
            if (uVar7 + 1 <= uVar12) {
              uVar12 = uVar12 - uVar7;
              if ((longlong)uVar12 < 4) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar12 & 0xfffffffffffffffc;
                uStack_168 = psStack_a0 + uVar7;
                uVar17 = 0;
                do {
                  *(undefined8 *)(uStack_168 + uVar17) =
                       *(undefined8 *)(param_1 + uVar7 * 2 + uVar17 * 2);
                  uVar17 = uVar17 + 4;
                  lStack_150 = param_1;
                } while (uVar17 < uVar9);
              }
              if (uVar9 < uVar12) {
                do {
                  psStack_a0[uVar7 + uVar9] = *(short *)(param_1 + uVar7 * 2 + uVar9 * 2);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar12);
              }
            }
            goto LAB_14090ad89;
          }
        }
        lVar18 = 1;
        uVar9 = (longlong)(param_10 * 3) - 3;
        uVar7 = uVar9 >> 1;
        uVar12 = 0;
        if (uVar7 != 0) {
          do {
            uVar17 = uVar12;
            psStack_a0[uVar17 * 2] = *(short *)(param_1 + uVar17 * 4);
            psStack_a0[uVar17 * 2 + 1] = *(short *)(param_1 + 2 + uVar17 * 4);
            uVar12 = uVar17 + 1;
          } while (uVar12 < uVar7);
          lVar18 = uVar17 + 2 + uVar12;
        }
        if (lVar18 - 1U < uVar9) {
          param_11[lStack_98 + -1 + lVar18] = *(short *)(param_1 + (lVar18 - 1U) * 2);
        }
      }
LAB_14090ad89:
      psStack_a8 = psVar8;
      if (uVar23 == 1) {
        if (0 < lStack_98) {
          uVar12 = (lStack_98 + 2) / 3;
          if (((longlong)uVar12 < 7) ||
             (((longlong)param_11 - (longlong)psStack_a0 < 6 &&
              (-((longlong)param_11 - (longlong)psStack_a0) < (longlong)(uVar12 * 6))))) {
            uVar7 = 0;
            lVar11 = 0;
            lVar18 = 0;
            lStack_80 = lVar27;
            iStack_78 = param_10;
            uStack_90 = param_7;
            uVar9 = 0;
            lStack_88 = param_4;
            lVar19 = lVar18;
            do {
              sVar21 = *(short *)((longlong)psVar8 + (longlong)param_11);
              uVar17 = lVar11 + 0x40U;
              if ((longlong)uVar12 <= (longlong)(lVar11 + 0x40U)) {
                uVar17 = uVar12;
              }
              uVar25 = uVar17 - lVar11;
              uVar28 = uVar9;
              param_7 = uStack_90;
              param_4 = lStack_88;
              lVar27 = lStack_80;
              param_10 = iStack_78;
              if (0xf < (longlong)uVar25) {
                uVar28 = uVar25 & 0xfffffffffffffff0;
                uVar22 = uVar9;
                psStack_a8 = param_11;
                do {
                  lVar27 = (longlong)(int)uVar22;
                  uVar22 = uVar22 + 0x10;
                  asStack_140[lVar27] = sVar21;
                  asStack_140[lVar27 + 1] = sVar21;
                  asStack_140[lVar27 + 2] = sVar21;
                  asStack_140[lVar27 + 3] = sVar21;
                  asStack_140[lVar27 + 4] = sVar21;
                  asStack_140[lVar27 + 5] = sVar21;
                  asStack_140[lVar27 + 6] = sVar21;
                  asStack_140[lVar27 + 7] = sVar21;
                  asStack_140[lVar27 + 8] = sVar21;
                  asStack_140[lVar27 + 9] = sVar21;
                  asStack_140[lVar27 + 10] = sVar21;
                  asStack_140[lVar27 + 0xb] = sVar21;
                  asStack_140[lVar27 + 0xc] = sVar21;
                  asStack_140[lVar27 + 0xd] = sVar21;
                  asStack_140[lVar27 + 0xe] = sVar21;
                  asStack_140[lVar27 + 0xf] = sVar21;
                  param_7 = uStack_90;
                  param_4 = lStack_88;
                  lVar27 = lStack_80;
                  param_10 = iStack_78;
                  param_11 = psStack_a8;
                } while (uVar22 < uVar28);
              }
              for (; uStack_90 = param_7, lStack_88 = param_4, lStack_80 = lVar27,
                  iStack_78 = param_10, uVar28 < uVar25; uVar28 = uVar28 + 1) {
                asStack_140[(int)uVar28] = sVar21;
                param_7 = uStack_90;
                param_4 = lStack_88;
                lVar27 = lStack_80;
                param_10 = iStack_78;
              }
              psStack_a8 = param_11;
              uVar28 = uVar9;
              uVar25 = uVar9;
              do {
                iVar24 = (int)uVar25;
                uVar25 = uVar25 + 1;
                *(short *)((longlong)param_11 + uVar28 + lVar18) = asStack_140[iVar24];
                *(short *)((longlong)param_11 + uVar28 + 2 + lVar18) = psStack_a0[1];
                *(short *)((longlong)param_11 + uVar28 + 4 + lVar18) = psStack_a0[2];
                uVar28 = uVar28 + 6;
              } while (uVar25 < uVar17 + lVar19);
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + 0x40;
              lVar18 = lVar18 + 0x180;
              lVar19 = lVar19 + -0x40;
            } while (uVar7 < uVar12 + 0x3f >> 6);
            iStack_158 = 1;
            uStack_168 = psVar13;
            lStack_150 = param_1;
          }
          else {
            sVar21 = *(short *)((longlong)psVar8 + (longlong)param_11);
            uStack_168 = (short *)CONCAT44(uStack_168._4_4_,(int)sVar21);
            sVar26 = psStack_a0[1];
            iStack_158 = (int)sVar26;
            sVar16 = psStack_a0[2];
            if ((longlong)uVar12 < 0x20) {
              uVar7 = 0;
            }
            else {
              uVar9 = 0;
              uVar7 = uVar12 & 0xffffffffffffffe0;
              psVar8 = param_11;
              do {
                uVar9 = uVar9 + 0x20;
                *psVar8 = sVar21;
                psVar8[3] = sVar21;
                psVar8[6] = sVar21;
                psVar8[9] = sVar21;
                psVar8[0xc] = sVar21;
                psVar8[0xf] = sVar21;
                psVar8[0x12] = sVar21;
                psVar8[0x15] = sVar21;
                psVar8[0x18] = sVar21;
                psVar8[0x1b] = sVar21;
                psVar8[0x1e] = sVar21;
                psVar8[0x21] = sVar21;
                psVar8[0x24] = sVar21;
                psVar8[0x27] = sVar21;
                psVar8[0x2a] = sVar21;
                psVar8[0x2d] = sVar21;
                psVar8[0x30] = sVar21;
                psVar8[0x33] = sVar21;
                psVar8[0x36] = sVar21;
                psVar8[0x39] = sVar21;
                psVar8[0x3c] = sVar21;
                psVar8[0x3f] = sVar21;
                psVar8[0x42] = sVar21;
                psVar8[0x45] = sVar21;
                psVar8[0x48] = sVar21;
                psVar8[0x4b] = sVar21;
                psVar8[0x4e] = sVar21;
                psVar8[0x51] = sVar21;
                psVar8[0x54] = sVar21;
                psVar8[0x57] = sVar21;
                psVar8[0x5a] = sVar21;
                psVar8[0x5d] = sVar21;
                psVar8[1] = sVar26;
                psVar8[4] = sVar26;
                psVar8[7] = sVar26;
                psVar8[10] = sVar26;
                psVar8[0xd] = sVar26;
                psVar8[0x10] = sVar26;
                psVar8[0x13] = sVar26;
                psVar8[0x16] = sVar26;
                psVar8[0x19] = sVar26;
                psVar8[0x1c] = sVar26;
                psVar8[0x1f] = sVar26;
                psVar8[0x22] = sVar26;
                psVar8[0x25] = sVar26;
                psVar8[0x28] = sVar26;
                psVar8[0x2b] = sVar26;
                psVar8[0x2e] = sVar26;
                psVar8[0x31] = sVar26;
                psVar8[0x34] = sVar26;
                psVar8[0x37] = sVar26;
                psVar8[0x3a] = sVar26;
                psVar8[0x3d] = sVar26;
                psVar8[0x40] = sVar26;
                psVar8[0x43] = sVar26;
                psVar8[0x46] = sVar26;
                psVar8[0x49] = sVar26;
                psVar8[0x4c] = sVar26;
                psVar8[0x4f] = sVar26;
                psVar8[0x52] = sVar26;
                psVar8[0x55] = sVar26;
                psVar8[0x58] = sVar26;
                psVar8[0x5b] = sVar26;
                psVar8[0x5e] = sVar26;
                psVar8[2] = sVar16;
                psVar8[5] = sVar16;
                psVar8[8] = sVar16;
                psVar8[0xb] = sVar16;
                psVar8[0xe] = sVar16;
                psVar8[0x11] = sVar16;
                psVar8[0x14] = sVar16;
                psVar8[0x17] = sVar16;
                psVar8[0x1a] = sVar16;
                psVar8[0x1d] = sVar16;
                psVar8[0x20] = sVar16;
                psVar8[0x23] = sVar16;
                psVar8[0x26] = sVar16;
                psVar8[0x29] = sVar16;
                psVar8[0x2c] = sVar16;
                psVar8[0x2f] = sVar16;
                psVar8[0x32] = sVar16;
                psVar8[0x35] = sVar16;
                psVar8[0x38] = sVar16;
                psVar8[0x3b] = sVar16;
                psVar8[0x3e] = sVar16;
                psVar8[0x41] = sVar16;
                psVar8[0x44] = sVar16;
                psVar8[0x47] = sVar16;
                psVar8[0x4a] = sVar16;
                psVar8[0x4d] = sVar16;
                psVar8[0x50] = sVar16;
                psVar8[0x53] = sVar16;
                psVar8[0x56] = sVar16;
                psVar8[0x59] = sVar16;
                psVar8[0x5c] = sVar16;
                psVar8[0x5f] = sVar16;
                psVar8 = psVar8 + 0x60;
                lStack_150 = param_1;
              } while (uVar9 < uVar7);
            }
            uVar9 = 0;
            if (uVar7 + 1 <= uVar12) {
              uVar17 = uVar9;
              do {
                uVar17 = uVar17 + 1;
                *(short *)((longlong)param_11 + uVar9 + uVar7 * 6) = sVar21;
                *(short *)((longlong)param_11 + uVar9 + 2 + uVar7 * 6) = sVar26;
                *(short *)((longlong)param_11 + uVar9 + 4 + uVar7 * 6) = sVar16;
                uVar9 = uVar9 + 6;
                lStack_150 = param_1;
              } while (uVar17 < uVar12 - uVar7);
            }
          }
        }
      }
      else if (uVar23 == 3) {
        if (0 < lStack_98) {
          lVar18 = 1;
          uStack_168 = (short *)(lStack_98 + 2);
          lVar10 = 0;
          uVar12 = 0;
          lVar11 = lVar10;
          if ((ulonglong)uStack_168 / 6 != 0) {
            do {
              uVar7 = uVar12;
              uVar12 = uVar7 + 1;
              *(undefined2 *)(lVar10 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -6 + lVar15 * 6);
              *(undefined2 *)(lVar10 + 2 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -4 + lVar15 * 6);
              *(undefined2 *)(lVar10 + 4 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -2 + lVar15 * 6);
              *(undefined2 *)(lVar10 + 6 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -0xc + lVar15 * 6);
              *(undefined2 *)(lVar10 + 8 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -10 + lVar15 * 6);
              *(undefined2 *)(lVar10 + 10 + (longlong)param_11) =
                   *(undefined2 *)((longlong)param_11 + lVar11 + -8 + lVar15 * 6);
              lVar10 = lVar10 + 0xc;
              lVar11 = lVar11 + -0xc;
            } while (uVar12 < (ulonglong)uStack_168 / 6);
            lVar18 = uVar7 + 2 + uVar12;
            lStack_150 = param_1;
          }
          if (lVar18 - 1U < (ulonglong)uStack_168 / 3) {
            lVar18 = lVar18 * 3;
            lVar19 = lVar19 - (lVar18 + -3);
            param_11[lVar18 + -3] = param_11[lVar19 + -3];
            param_11[lVar18 + -2] = param_11[lVar19 + -2];
            param_11[lVar18 + -1] = param_11[lVar19 + -1];
          }
        }
      }
      else if ((uVar23 == 6) && (0 < lStack_98)) {
        uStack_168 = (short *)(lStack_98 + 2);
        uVar12 = (longlong)uStack_168 / 3;
        if (6 < (longlong)uVar12) {
          lVar19 = (longlong)psStack_70 + (2 - (longlong)param_11);
          if ((((longlong)(uVar12 * 6) <= lVar19) || (3 < -lVar19)) &&
             ((1 < (longlong)param_11 - (longlong)psStack_70 ||
              ((longlong)(uVar12 * 6) <= -((longlong)param_11 - (longlong)psStack_70))))) {
            sVar21 = *psStack_70;
            iStack_158 = (int)sVar21;
            sVar26 = psStack_70[1];
            sVar16 = psStack_70[2];
            uStack_168._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
            uStack_168 = (short *)CONCAT44(uStack_168._4_4_,(int)sVar16);
            if ((longlong)uVar12 < 0x20) {
              uVar7 = 0;
            }
            else {
              uVar9 = 0;
              uVar7 = uVar12 & 0xffffffffffffffe0;
              psVar8 = param_11;
              do {
                uVar9 = uVar9 + 0x20;
                psVar8[0x30] = sVar21;
                psVar8[0x33] = sVar21;
                psVar8[0x36] = sVar21;
                psVar8[0x39] = sVar21;
                psVar8[0x3c] = sVar21;
                psVar8[0x3f] = sVar21;
                psVar8[0x42] = sVar21;
                psVar8[0x45] = sVar21;
                psVar8[0x48] = sVar21;
                psVar8[0x4b] = sVar21;
                psVar8[0x4e] = sVar21;
                psVar8[0x51] = sVar21;
                psVar8[0x54] = sVar21;
                psVar8[0x57] = sVar21;
                psVar8[0x5a] = sVar21;
                psVar8[0x5d] = sVar21;
                psVar8[0x31] = sVar26;
                psVar8[0x34] = sVar26;
                psVar8[0x37] = sVar26;
                psVar8[0x3a] = sVar26;
                psVar8[0x3d] = sVar26;
                psVar8[0x40] = sVar26;
                psVar8[0x43] = sVar26;
                psVar8[0x46] = sVar26;
                psVar8[0x49] = sVar26;
                psVar8[0x4c] = sVar26;
                psVar8[0x4f] = sVar26;
                psVar8[0x52] = sVar26;
                psVar8[0x55] = sVar26;
                psVar8[0x58] = sVar26;
                psVar8[0x5b] = sVar26;
                psVar8[0x5e] = sVar26;
                psVar8[1] = sVar26;
                psVar8[4] = sVar26;
                psVar8[7] = sVar26;
                psVar8[10] = sVar26;
                psVar8[0xd] = sVar26;
                psVar8[0x10] = sVar26;
                psVar8[0x13] = sVar26;
                psVar8[0x16] = sVar26;
                psVar8[0x19] = sVar26;
                psVar8[0x1c] = sVar26;
                psVar8[0x1f] = sVar26;
                psVar8[0x22] = sVar26;
                psVar8[0x25] = sVar26;
                psVar8[0x28] = sVar26;
                psVar8[0x2b] = sVar26;
                psVar8[0x2e] = sVar26;
                *psVar8 = sVar21;
                psVar8[3] = sVar21;
                psVar8[6] = sVar21;
                psVar8[9] = sVar21;
                psVar8[0xc] = sVar21;
                psVar8[0xf] = sVar21;
                psVar8[0x12] = sVar21;
                psVar8[0x15] = sVar21;
                psVar8[0x18] = sVar21;
                psVar8[0x1b] = sVar21;
                psVar8[0x1e] = sVar21;
                psVar8[0x21] = sVar21;
                psVar8[0x24] = sVar21;
                psVar8[0x27] = sVar21;
                psVar8[0x2a] = sVar21;
                psVar8[0x2d] = sVar21;
                psVar8[2] = sVar16;
                psVar8[5] = sVar16;
                psVar8[8] = sVar16;
                psVar8[0xb] = sVar16;
                psVar8[0xe] = sVar16;
                psVar8[0x11] = sVar16;
                psVar8[0x14] = sVar16;
                psVar8[0x17] = sVar16;
                psVar8[0x1a] = sVar16;
                psVar8[0x1d] = sVar16;
                psVar8[0x20] = sVar16;
                psVar8[0x23] = sVar16;
                psVar8[0x26] = sVar16;
                psVar8[0x29] = sVar16;
                psVar8[0x2c] = sVar16;
                psVar8[0x2f] = sVar16;
                psVar8[0x32] = sVar16;
                psVar8[0x35] = sVar16;
                psVar8[0x38] = sVar16;
                psVar8[0x3b] = sVar16;
                psVar8[0x3e] = sVar16;
                psVar8[0x41] = sVar16;
                psVar8[0x44] = sVar16;
                psVar8[0x47] = sVar16;
                psVar8[0x4a] = sVar16;
                psVar8[0x4d] = sVar16;
                psVar8[0x50] = sVar16;
                psVar8[0x53] = sVar16;
                psVar8[0x56] = sVar16;
                psVar8[0x59] = sVar16;
                psVar8[0x5c] = sVar16;
                psVar8[0x5f] = sVar16;
                psVar8 = psVar8 + 0x60;
                lStack_150 = param_1;
              } while (uVar9 < uVar7);
            }
            uVar9 = 0;
            if (uVar7 + 1 <= uVar12) {
              uVar17 = uVar9;
              do {
                uVar17 = uVar17 + 1;
                *(short *)((longlong)param_11 + uVar9 + uVar7 * 6) = sVar21;
                *(short *)((longlong)param_11 + uVar9 + 2 + uVar7 * 6) = sVar26;
                *(short *)((longlong)param_11 + uVar9 + 4 + uVar7 * 6) = sVar16;
                uVar9 = uVar9 + 6;
                lStack_150 = param_1;
              } while (uVar17 < uVar12 - uVar7);
            }
            goto LAB_14090b846;
          }
        }
        lVar19 = 1;
        uVar12 = 0;
        if ((ulonglong)uStack_168 / 6 != 0) {
          do {
            uVar7 = uVar12;
            param_11[uVar7 * 6] = *psStack_70;
            uVar12 = uVar7 + 1;
            param_11[uVar7 * 6 + 1] = psStack_70[1];
            param_11[uVar7 * 6 + 2] = psStack_70[2];
            param_11[uVar7 * 6 + 3] = *psStack_70;
            param_11[uVar7 * 6 + 4] = psStack_70[1];
            param_11[uVar7 * 6 + 5] = psStack_70[2];
          } while (uVar12 < (ulonglong)uStack_168 / 6);
          lVar19 = uVar7 + 2 + uVar12;
        }
        if (lVar19 - 1U < (ulonglong)uStack_168 / 3) {
          lVar19 = lVar19 * 3;
          param_11[lVar19 + -3] = *psStack_70;
          param_11[lVar19 + -2] = psStack_70[1];
          param_11[lVar19 + -1] = psStack_70[2];
        }
      }
LAB_14090b846:
      pcStack_160 = (code *)(&PTR_FUN_14308d480)[lVar20];
      iStack_178 = param_10;
      uStack_90 = param_7;
      lStack_88 = param_4;
      (*pcStack_160)(psStack_a0,param_4,lVar27);
      psVar13 = (short *)((longlong)psVar13 - lVar27);
      param_1 = param_1 + lStack_98 * 2;
      param_4 = lStack_88 + lStack_98 * 4;
      param_7 = uStack_90;
    }
    else {
      pcStack_160 = (code *)(&PTR_FUN_14308d480)[lVar20];
    }
    iStack_178 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar27 < (longlong)psVar13) {
        lVar20 = (longlong)psVar13 - lVar27;
        lStack_88 = param_4;
        (*pcStack_160)(param_1,param_4,lVar20);
        param_1 = param_1 + lVar20 * 6;
        param_4 = lStack_88 + lVar20 * 0xc;
      }
      lVar20 = lVar15 * 3;
      if (lVar20 != 3 && SCARRY8(lVar20,-3) == lVar20 + -3 < 0) {
        lVar19 = 1;
        uVar12 = ((lVar20 + -1) / 3) * 3;
        uVar7 = uVar12 >> 1;
        if (uVar7 != 0) {
          lVar19 = lVar27 * -6 + param_1;
          uVar9 = 0;
          do {
            uVar17 = uVar9;
            param_11[uVar17 * 2] = *(short *)(lVar19 + uVar17 * 4);
            param_11[uVar17 * 2 + 1] = *(short *)(lVar19 + 2 + uVar17 * 4);
            uVar9 = uVar17 + 1;
          } while (uVar9 < uVar7);
          lVar19 = uVar17 + 2 + uVar9;
        }
        if (lVar19 - 1U < uVar12) {
          param_11[lVar19 - 1U] = *(short *)(param_1 + (lVar27 * -3 + -1 + lVar19) * 2);
        }
      }
      lVar19 = lVar27 * 3;
      if (uVar23 == 1) {
        if (0 < lVar19) {
          uVar12 = lVar19 + 2;
          uVar7 = (longlong)uVar12 / 3;
          if ((longlong)uVar7 < 7) {
            lVar19 = 1;
            uVar7 = 0;
            if (uVar12 / 6 != 0) {
              do {
                uVar9 = uVar7;
                param_11[lVar15 * 3 + uVar9 * 6 + -3] = param_11[lVar15 * 3 + -6];
                uVar7 = uVar9 + 1;
                param_11[lVar15 * 3 + uVar9 * 6 + -2] = param_11[lVar15 * 3 + -5];
                param_11[lVar15 * 3 + uVar9 * 6 + -1] = param_11[lVar15 * 3 + -4];
                param_11[lVar15 * 3 + uVar9 * 6] = param_11[lVar15 * 3 + -6];
                param_11[lVar15 * 3 + uVar9 * 6 + 1] = param_11[lVar15 * 3 + -5];
                param_11[lVar15 * 3 + uVar9 * 6 + 2] = param_11[lVar15 * 3 + -4];
              } while (uVar7 < uVar12 / 6);
              lVar19 = uVar9 + 2 + uVar7;
            }
            if (lVar19 - 1U < uVar12 / 3) {
              lVar20 = lVar19 * 3 + -3 + lVar20;
              param_11[lVar20 + -3] = param_11[lVar15 * 3 + -6];
              param_11[lVar20 + -2] = param_11[lVar15 * 3 + -5];
              param_11[lVar20 + -1] = param_11[lVar15 * 3 + -4];
            }
          }
          else {
            psVar13 = param_11 + lVar15 * 3;
            sVar21 = psVar13[-5];
            sVar26 = psVar13[-6];
            sVar16 = psVar13[-4];
            uStack_168 = (short *)CONCAT44(uStack_168._4_4_,(int)sVar21);
            if ((longlong)uVar7 < 0x20) {
              uVar12 = 0;
            }
            else {
              uVar9 = 0;
              uVar12 = uVar7 & 0xffffffffffffffe0;
              psVar8 = psVar13;
              do {
                uVar9 = uVar9 + 0x20;
                psVar8[0x2d] = sVar26;
                psVar8[0x30] = sVar26;
                psVar8[0x33] = sVar26;
                psVar8[0x36] = sVar26;
                psVar8[0x39] = sVar26;
                psVar8[0x3c] = sVar26;
                psVar8[0x3f] = sVar26;
                psVar8[0x42] = sVar26;
                psVar8[0x45] = sVar26;
                psVar8[0x48] = sVar26;
                psVar8[0x4b] = sVar26;
                psVar8[0x4e] = sVar26;
                psVar8[0x51] = sVar26;
                psVar8[0x54] = sVar26;
                psVar8[0x57] = sVar26;
                psVar8[0x5a] = sVar26;
                psVar8[0x2e] = sVar21;
                psVar8[0x31] = sVar21;
                psVar8[0x34] = sVar21;
                psVar8[0x37] = sVar21;
                psVar8[0x3a] = sVar21;
                psVar8[0x3d] = sVar21;
                psVar8[0x40] = sVar21;
                psVar8[0x43] = sVar21;
                psVar8[0x46] = sVar21;
                psVar8[0x49] = sVar21;
                psVar8[0x4c] = sVar21;
                psVar8[0x4f] = sVar21;
                psVar8[0x52] = sVar21;
                psVar8[0x55] = sVar21;
                psVar8[0x58] = sVar21;
                psVar8[0x5b] = sVar21;
                psVar8[-2] = sVar21;
                psVar8[1] = sVar21;
                psVar8[4] = sVar21;
                psVar8[7] = sVar21;
                psVar8[10] = sVar21;
                psVar8[0xd] = sVar21;
                psVar8[0x10] = sVar21;
                psVar8[0x13] = sVar21;
                psVar8[0x16] = sVar21;
                psVar8[0x19] = sVar21;
                psVar8[0x1c] = sVar21;
                psVar8[0x1f] = sVar21;
                psVar8[0x22] = sVar21;
                psVar8[0x25] = sVar21;
                psVar8[0x28] = sVar21;
                psVar8[0x2b] = sVar21;
                psVar8[-3] = sVar26;
                *psVar8 = sVar26;
                psVar8[3] = sVar26;
                psVar8[6] = sVar26;
                psVar8[9] = sVar26;
                psVar8[0xc] = sVar26;
                psVar8[0xf] = sVar26;
                psVar8[0x12] = sVar26;
                psVar8[0x15] = sVar26;
                psVar8[0x18] = sVar26;
                psVar8[0x1b] = sVar26;
                psVar8[0x1e] = sVar26;
                psVar8[0x21] = sVar26;
                psVar8[0x24] = sVar26;
                psVar8[0x27] = sVar26;
                psVar8[0x2a] = sVar26;
                psVar8[-1] = sVar16;
                psVar8[2] = sVar16;
                psVar8[5] = sVar16;
                psVar8[8] = sVar16;
                psVar8[0xb] = sVar16;
                psVar8[0xe] = sVar16;
                psVar8[0x11] = sVar16;
                psVar8[0x14] = sVar16;
                psVar8[0x17] = sVar16;
                psVar8[0x1a] = sVar16;
                psVar8[0x1d] = sVar16;
                psVar8[0x20] = sVar16;
                psVar8[0x23] = sVar16;
                psVar8[0x26] = sVar16;
                psVar8[0x29] = sVar16;
                psVar8[0x2c] = sVar16;
                psVar8[0x2f] = sVar16;
                psVar8[0x32] = sVar16;
                psVar8[0x35] = sVar16;
                psVar8[0x38] = sVar16;
                psVar8[0x3b] = sVar16;
                psVar8[0x3e] = sVar16;
                psVar8[0x41] = sVar16;
                psVar8[0x44] = sVar16;
                psVar8[0x47] = sVar16;
                psVar8[0x4a] = sVar16;
                psVar8[0x4d] = sVar16;
                psVar8[0x50] = sVar16;
                psVar8[0x53] = sVar16;
                psVar8[0x56] = sVar16;
                psVar8[0x59] = sVar16;
                psVar8[0x5c] = sVar16;
                psVar8 = psVar8 + 0x60;
              } while (uVar9 < uVar12);
            }
            uVar9 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar7) {
              do {
                uVar9 = uVar9 + 1;
                *(short *)((longlong)psVar13 + lVar20 + -6 + uVar12 * 6) = sVar26;
                *(short *)((longlong)psVar13 + lVar20 + -4 + uVar12 * 6) = sVar21;
                *(short *)((longlong)psVar13 + lVar20 + -2 + uVar12 * 6) = sVar16;
                lVar20 = lVar20 + 6;
              } while (uVar9 < uVar7 - uVar12);
            }
          }
        }
      }
      else if (uVar23 == 3) {
        if (0 < lVar19) {
          lVar18 = 1;
          lVar11 = 0;
          lVar10 = 0;
          uVar7 = (lVar19 + 2U) / 6;
          uVar12 = 0;
          if (uVar7 != 0) {
            do {
              uVar9 = uVar12;
              uVar12 = uVar9 + 1;
              *(undefined2 *)((longlong)param_11 + lVar11 + -6 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar10 + -0x12 + lVar15 * 6);
              *(undefined2 *)((longlong)param_11 + lVar11 + -4 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar10 + -0x10 + lVar15 * 6);
              *(undefined2 *)((longlong)param_11 + lVar11 + -2 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar10 + -0xe + lVar15 * 6);
              *(undefined2 *)((longlong)param_11 + lVar11 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar10 + -0x18 + lVar15 * 6);
              *(undefined2 *)((longlong)param_11 + lVar11 + 2 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar10 + -0x16 + lVar15 * 6);
              lVar18 = lVar10 + -0x14;
              lVar10 = lVar10 + -0xc;
              *(undefined2 *)((longlong)param_11 + lVar11 + 4 + lVar15 * 6) =
                   *(undefined2 *)((longlong)param_11 + lVar18 + lVar15 * 6);
              lVar11 = lVar11 + 0xc;
            } while (uVar12 < uVar7);
            lVar18 = uVar9 + 2 + uVar12;
          }
          if (lVar18 - 1U < (lVar19 + 2U) / 3) {
            lVar19 = lVar18 * 3 + -3;
            lVar15 = lVar20 + lVar19;
            lVar20 = lVar20 - lVar19;
            param_11[lVar15 + -3] = param_11[lVar20 + -9];
            param_11[lVar15 + -2] = param_11[lVar20 + -8];
            param_11[lVar15 + -1] = param_11[lVar20 + -7];
          }
        }
      }
      else if ((uVar23 == 6) && (0 < lVar19)) {
        uVar12 = lVar19 + 2;
        uVar7 = (longlong)uVar12 / 3;
        if (6 < (longlong)uVar7) {
          uStack_168 = param_11 + lVar15 * 3;
          lVar19 = (longlong)psStack_70 + (2 - (longlong)(uStack_168 + -3));
          if ((((longlong)(uVar7 * 6) <= lVar19) || (3 < -lVar19)) &&
             ((lVar19 = (longlong)(uStack_168 + -3) - (longlong)psStack_70, 1 < lVar19 ||
              ((longlong)(uVar7 * 6) <= -lVar19)))) {
            sVar21 = *psStack_70;
            sVar26 = psStack_70[1];
            sVar16 = psStack_70[2];
            if ((longlong)uVar7 < 0x20) {
              uVar12 = 0;
            }
            else {
              uVar9 = 0;
              uVar12 = uVar7 & 0xffffffffffffffe0;
              psVar13 = uStack_168;
              do {
                uVar9 = uVar9 + 0x20;
                psVar13[0x2d] = sVar21;
                psVar13[0x30] = sVar21;
                psVar13[0x33] = sVar21;
                psVar13[0x36] = sVar21;
                psVar13[0x39] = sVar21;
                psVar13[0x3c] = sVar21;
                psVar13[0x3f] = sVar21;
                psVar13[0x42] = sVar21;
                psVar13[0x45] = sVar21;
                psVar13[0x48] = sVar21;
                psVar13[0x4b] = sVar21;
                psVar13[0x4e] = sVar21;
                psVar13[0x51] = sVar21;
                psVar13[0x54] = sVar21;
                psVar13[0x57] = sVar21;
                psVar13[0x5a] = sVar21;
                psVar13[0x2e] = sVar26;
                psVar13[0x31] = sVar26;
                psVar13[0x34] = sVar26;
                psVar13[0x37] = sVar26;
                psVar13[0x3a] = sVar26;
                psVar13[0x3d] = sVar26;
                psVar13[0x40] = sVar26;
                psVar13[0x43] = sVar26;
                psVar13[0x46] = sVar26;
                psVar13[0x49] = sVar26;
                psVar13[0x4c] = sVar26;
                psVar13[0x4f] = sVar26;
                psVar13[0x52] = sVar26;
                psVar13[0x55] = sVar26;
                psVar13[0x58] = sVar26;
                psVar13[0x5b] = sVar26;
                psVar13[-2] = sVar26;
                psVar13[1] = sVar26;
                psVar13[4] = sVar26;
                psVar13[7] = sVar26;
                psVar13[10] = sVar26;
                psVar13[0xd] = sVar26;
                psVar13[0x10] = sVar26;
                psVar13[0x13] = sVar26;
                psVar13[0x16] = sVar26;
                psVar13[0x19] = sVar26;
                psVar13[0x1c] = sVar26;
                psVar13[0x1f] = sVar26;
                psVar13[0x22] = sVar26;
                psVar13[0x25] = sVar26;
                psVar13[0x28] = sVar26;
                psVar13[0x2b] = sVar26;
                psVar13[-3] = sVar21;
                *psVar13 = sVar21;
                psVar13[3] = sVar21;
                psVar13[6] = sVar21;
                psVar13[9] = sVar21;
                psVar13[0xc] = sVar21;
                psVar13[0xf] = sVar21;
                psVar13[0x12] = sVar21;
                psVar13[0x15] = sVar21;
                psVar13[0x18] = sVar21;
                psVar13[0x1b] = sVar21;
                psVar13[0x1e] = sVar21;
                psVar13[0x21] = sVar21;
                psVar13[0x24] = sVar21;
                psVar13[0x27] = sVar21;
                psVar13[0x2a] = sVar21;
                psVar13[-1] = sVar16;
                psVar13[2] = sVar16;
                psVar13[5] = sVar16;
                psVar13[8] = sVar16;
                psVar13[0xb] = sVar16;
                psVar13[0xe] = sVar16;
                psVar13[0x11] = sVar16;
                psVar13[0x14] = sVar16;
                psVar13[0x17] = sVar16;
                psVar13[0x1a] = sVar16;
                psVar13[0x1d] = sVar16;
                psVar13[0x20] = sVar16;
                psVar13[0x23] = sVar16;
                psVar13[0x26] = sVar16;
                psVar13[0x29] = sVar16;
                psVar13[0x2c] = sVar16;
                psVar13[0x2f] = sVar16;
                psVar13[0x32] = sVar16;
                psVar13[0x35] = sVar16;
                psVar13[0x38] = sVar16;
                psVar13[0x3b] = sVar16;
                psVar13[0x3e] = sVar16;
                psVar13[0x41] = sVar16;
                psVar13[0x44] = sVar16;
                psVar13[0x47] = sVar16;
                psVar13[0x4a] = sVar16;
                psVar13[0x4d] = sVar16;
                psVar13[0x50] = sVar16;
                psVar13[0x53] = sVar16;
                psVar13[0x56] = sVar16;
                psVar13[0x59] = sVar16;
                psVar13[0x5c] = sVar16;
                psVar13 = psVar13 + 0x60;
              } while (uVar9 < uVar12);
            }
            uVar9 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar7) {
              do {
                uVar9 = uVar9 + 1;
                *(short *)((longlong)uStack_168 + lVar20 + -6 + uVar12 * 6) = sVar21;
                *(short *)((longlong)uStack_168 + lVar20 + -4 + uVar12 * 6) = sVar26;
                *(short *)((longlong)uStack_168 + lVar20 + -2 + uVar12 * 6) = sVar16;
                lVar20 = lVar20 + 6;
              } while (uVar9 < uVar7 - uVar12);
            }
            goto LAB_14090c246;
          }
        }
        lVar19 = 1;
        uVar7 = 0;
        if (uVar12 / 6 != 0) {
          do {
            uVar9 = uVar7;
            param_11[lVar15 * 3 + uVar9 * 6 + -3] = *psStack_70;
            uVar7 = uVar9 + 1;
            param_11[lVar15 * 3 + uVar9 * 6 + -2] = psStack_70[1];
            param_11[lVar15 * 3 + uVar9 * 6 + -1] = psStack_70[2];
            param_11[lVar15 * 3 + uVar9 * 6] = *psStack_70;
            param_11[lVar15 * 3 + uVar9 * 6 + 1] = psStack_70[1];
            param_11[lVar15 * 3 + uVar9 * 6 + 2] = psStack_70[2];
          } while (uVar7 < uVar12 / 6);
          lVar19 = uVar9 + 2 + uVar7;
        }
        if (lVar19 - 1U < uVar12 / 3) {
          lVar20 = lVar20 + lVar19 * 3 + -3;
          param_11[lVar20 + -3] = *psStack_70;
          param_11[lVar20 + -2] = psStack_70[1];
          param_11[lVar20 + -1] = psStack_70[2];
        }
      }
LAB_14090c246:
      iStack_178 = param_10;
      (*pcStack_160)(param_11 + lVar27 * 3,param_4,lVar27,param_9);
    }
    else {
      (*pcStack_160)(param_1,param_4,psVar13,param_9);
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_198) == DAT_1436b4680) {
    return;
  }
LAB_14090c53b:
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

