
/* WARNING: Removing unreachable block (ram,0x0001408e05de) */

void FUN_1408df0e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,ushort *param_11)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort *puVar13;
  uint uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ushort uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auStack_198 [32];
  int iStack_178;
  undefined8 uStack_168;
  code *pcStack_160;
  uint uStack_158;
  longlong lStack_150;
  ushort auStack_140 [76];
  ushort *puStack_a8;
  ushort *puStack_a0;
  longlong lStack_98;
  uint uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  int iStack_78;
  ushort *puStack_70;
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
    (*(code *)(&PTR_FUN_14308d180)[lVar20])(param_1,param_4,*param_5,param_9);
    if ((uStack_40 ^ (ulonglong)auStack_198) == DAT_1436b4680) {
      return;
    }
    goto LAB_1408e0c3b;
  }
  puVar13 = (ushort *)*param_5;
  puStack_70 = (ushort *)&uStack_48;
  if (uVar23 == 6) {
    puStack_70 = param_8;
  }
  lVar15 = (longlong)param_10;
  if ((longlong)puVar13 < lVar15 + -1) {
    lVar19 = -lVar27;
    lVar15 = 0;
    if (lVar19 < lVar27 + (longlong)puVar13) {
      uVar14 = param_7 & 0x80;
      iStack_78 = param_10;
      uStack_168 = (ushort *)(CONCAT44(uStack_168._4_4_,param_7) & 0xffffffff00000040);
      do {
        lVar18 = lVar19;
        if (((lVar19 < 0) || ((longlong)puVar13 <= lVar19)) && (param_7 != 0xf0)) {
          if (uVar23 != 6) {
            if (uVar23 == 1) {
              if (lVar19 < 0) {
                lVar18 = 0;
                if ((uint)uStack_168 != 0) {
                  lVar18 = lVar19;
                }
              }
              else if (uVar14 == 0) {
                lVar18 = (longlong)puVar13 - 1U;
              }
            }
            else if (uVar23 == 3) {
              if ((longlong)puVar13 < 2) {
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
              else if ((lVar19 < 0) || ((longlong)puVar13 <= lVar19)) {
                if (lVar19 < 0) goto LAB_1408e0be1;
                while (uVar14 == 0) {
                  for (lVar18 = ((longlong)puVar13 - 1U) * 2 - lVar18; lVar18 < 0; lVar18 = -lVar18)
                  {
LAB_1408e0be1:
                    if ((uint)uStack_168 != 0) goto LAB_1408e0a71;
                  }
                  if (lVar18 < (longlong)puVar13) break;
                }
              }
            }
            goto LAB_1408e0a71;
          }
          uVar6 = (uint)uStack_168;
          if (-1 < lVar19) {
            uVar6 = uVar14;
          }
          if (uVar6 != 0) goto LAB_1408e0a71;
          uVar21 = *puStack_70;
          uVar26 = puStack_70[1];
          uVar16 = puStack_70[2];
        }
        else {
LAB_1408e0a71:
          uVar21 = *(ushort *)(param_1 + lVar18 * 6);
          uVar26 = *(ushort *)(param_1 + 2 + lVar18 * 6);
          uVar16 = *(ushort *)(param_1 + 4 + lVar18 * 6);
        }
        lVar19 = lVar19 + 1;
        *(ushort *)(lVar15 + (longlong)param_11) = uVar21;
        *(ushort *)(lVar15 + 2 + (longlong)param_11) = uVar26;
        *(ushort *)(lVar15 + 4 + (longlong)param_11) = uVar16;
        lVar15 = lVar15 + 6;
        lStack_88 = param_4;
        lStack_80 = lVar27;
      } while (lVar19 < lVar27 + (longlong)puVar13);
    }
    iStack_178 = param_10;
    (*(code *)(&PTR_FUN_14308d180)[lVar20])(param_11 + lVar27 * 3,param_4,puVar13,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar19 = lVar15 * 3;
      lStack_98 = lVar27 * 3;
      puVar8 = (ushort *)(lVar27 * 6);
      puStack_a0 = param_11 + lVar27 * 3;
      uVar12 = lVar19 - 3;
      if (uVar12 != 0 && SCARRY8(lVar19,-3) == (longlong)uVar12 < 0) {
        if (6 < (longlong)uVar12) {
          lVar18 = lVar15 * 6 + -6;
          if ((lVar18 <= (longlong)puStack_a0 - param_1) ||
             (lVar18 <= -((longlong)puStack_a0 - param_1))) {
            if ((longlong)uVar12 < 0x10) {
LAB_1408e0b55:
              uVar7 = 0;
            }
            else {
              if ((longlong)uVar12 < 0x2b9) {
                uVar9 = 0;
                uVar7 = uVar12 & 0xfffffffffffffff0;
              }
              else {
                uVar9 = (ulonglong)puStack_a0 & 0x1f;
                if (uVar9 != 0) {
                  if (((ulonglong)puStack_a0 & 1) != 0) goto LAB_1408e0b55;
                  uVar9 = 0x20 - uVar9 >> 1;
                }
                if ((longlong)uVar12 < (longlong)(uVar9 + 0x10)) goto LAB_1408e0b55;
                uVar17 = 0;
                uVar7 = uVar12 - (uVar12 - uVar9 & 0xf);
                if (uVar9 != 0) {
                  do {
                    puStack_a0[uVar17] = *(ushort *)(param_1 + uVar17 * 2);
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar9);
                }
              }
              do {
                puVar2 = (undefined8 *)(param_1 + uVar9 * 2);
                uVar3 = puVar2[1];
                uVar4 = puVar2[2];
                uVar5 = puVar2[3];
                puVar1 = puStack_a0 + uVar9;
                *(undefined8 *)puVar1 = *puVar2;
                *(undefined8 *)(puVar1 + 4) = uVar3;
                *(undefined8 *)(puVar1 + 8) = uVar4;
                *(undefined8 *)(puVar1 + 0xc) = uVar5;
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
                uStack_168 = puStack_a0 + uVar7;
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
                  puStack_a0[uVar7 + uVar9] = *(ushort *)(param_1 + uVar7 * 2 + uVar9 * 2);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar12);
              }
            }
            goto LAB_1408df489;
          }
        }
        lVar18 = 1;
        uVar9 = (longlong)(param_10 * 3) - 3;
        uVar7 = uVar9 >> 1;
        uVar12 = 0;
        if (uVar7 != 0) {
          do {
            uVar17 = uVar12;
            puStack_a0[uVar17 * 2] = *(ushort *)(param_1 + uVar17 * 4);
            puStack_a0[uVar17 * 2 + 1] = *(ushort *)(param_1 + 2 + uVar17 * 4);
            uVar12 = uVar17 + 1;
          } while (uVar12 < uVar7);
          lVar18 = uVar17 + 2 + uVar12;
        }
        if (lVar18 - 1U < uVar9) {
          param_11[lStack_98 + -1 + lVar18] = *(ushort *)(param_1 + (lVar18 - 1U) * 2);
        }
      }
LAB_1408df489:
      puStack_a8 = puVar8;
      if (uVar23 == 1) {
        if (0 < lStack_98) {
          uVar12 = (lStack_98 + 2) / 3;
          if (((longlong)uVar12 < 7) ||
             (((longlong)param_11 - (longlong)puStack_a0 < 6 &&
              (-((longlong)param_11 - (longlong)puStack_a0) < (longlong)(uVar12 * 6))))) {
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
              uVar21 = *(ushort *)((longlong)puVar8 + (longlong)param_11);
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
                puStack_a8 = param_11;
                do {
                  lVar27 = (longlong)(int)uVar22;
                  uVar22 = uVar22 + 0x10;
                  auStack_140[lVar27] = uVar21;
                  auStack_140[lVar27 + 1] = uVar21;
                  auStack_140[lVar27 + 2] = uVar21;
                  auStack_140[lVar27 + 3] = uVar21;
                  auStack_140[lVar27 + 4] = uVar21;
                  auStack_140[lVar27 + 5] = uVar21;
                  auStack_140[lVar27 + 6] = uVar21;
                  auStack_140[lVar27 + 7] = uVar21;
                  auStack_140[lVar27 + 8] = uVar21;
                  auStack_140[lVar27 + 9] = uVar21;
                  auStack_140[lVar27 + 10] = uVar21;
                  auStack_140[lVar27 + 0xb] = uVar21;
                  auStack_140[lVar27 + 0xc] = uVar21;
                  auStack_140[lVar27 + 0xd] = uVar21;
                  auStack_140[lVar27 + 0xe] = uVar21;
                  auStack_140[lVar27 + 0xf] = uVar21;
                  param_7 = uStack_90;
                  param_4 = lStack_88;
                  lVar27 = lStack_80;
                  param_10 = iStack_78;
                  param_11 = puStack_a8;
                } while (uVar22 < uVar28);
              }
              for (; uStack_90 = param_7, lStack_88 = param_4, lStack_80 = lVar27,
                  iStack_78 = param_10, uVar28 < uVar25; uVar28 = uVar28 + 1) {
                auStack_140[(int)uVar28] = uVar21;
                param_7 = uStack_90;
                param_4 = lStack_88;
                lVar27 = lStack_80;
                param_10 = iStack_78;
              }
              puStack_a8 = param_11;
              uVar28 = uVar9;
              uVar25 = uVar9;
              do {
                iVar24 = (int)uVar25;
                uVar25 = uVar25 + 1;
                *(ushort *)((longlong)param_11 + uVar28 + lVar18) = auStack_140[iVar24];
                *(ushort *)((longlong)param_11 + uVar28 + 2 + lVar18) = puStack_a0[1];
                *(ushort *)((longlong)param_11 + uVar28 + 4 + lVar18) = puStack_a0[2];
                uVar28 = uVar28 + 6;
              } while (uVar25 < uVar17 + lVar19);
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + 0x40;
              lVar18 = lVar18 + 0x180;
              lVar19 = lVar19 + -0x40;
            } while (uVar7 < uVar12 + 0x3f >> 6);
            uStack_158 = 1;
            uStack_168 = puVar13;
            lStack_150 = param_1;
          }
          else {
            uVar21 = *(ushort *)((longlong)puVar8 + (longlong)param_11);
            uStack_168 = (ushort *)CONCAT44(uStack_168._4_4_,(uint)uVar21);
            uVar26 = puStack_a0[1];
            uStack_158 = (uint)uVar26;
            uVar16 = puStack_a0[2];
            if ((longlong)uVar12 < 0x20) {
              uVar7 = 0;
            }
            else {
              uVar9 = 0;
              uVar7 = uVar12 & 0xffffffffffffffe0;
              puVar8 = param_11;
              do {
                uVar9 = uVar9 + 0x20;
                *puVar8 = uVar21;
                puVar8[3] = uVar21;
                puVar8[6] = uVar21;
                puVar8[9] = uVar21;
                puVar8[0xc] = uVar21;
                puVar8[0xf] = uVar21;
                puVar8[0x12] = uVar21;
                puVar8[0x15] = uVar21;
                puVar8[0x18] = uVar21;
                puVar8[0x1b] = uVar21;
                puVar8[0x1e] = uVar21;
                puVar8[0x21] = uVar21;
                puVar8[0x24] = uVar21;
                puVar8[0x27] = uVar21;
                puVar8[0x2a] = uVar21;
                puVar8[0x2d] = uVar21;
                puVar8[0x30] = uVar21;
                puVar8[0x33] = uVar21;
                puVar8[0x36] = uVar21;
                puVar8[0x39] = uVar21;
                puVar8[0x3c] = uVar21;
                puVar8[0x3f] = uVar21;
                puVar8[0x42] = uVar21;
                puVar8[0x45] = uVar21;
                puVar8[0x48] = uVar21;
                puVar8[0x4b] = uVar21;
                puVar8[0x4e] = uVar21;
                puVar8[0x51] = uVar21;
                puVar8[0x54] = uVar21;
                puVar8[0x57] = uVar21;
                puVar8[0x5a] = uVar21;
                puVar8[0x5d] = uVar21;
                puVar8[1] = uVar26;
                puVar8[4] = uVar26;
                puVar8[7] = uVar26;
                puVar8[10] = uVar26;
                puVar8[0xd] = uVar26;
                puVar8[0x10] = uVar26;
                puVar8[0x13] = uVar26;
                puVar8[0x16] = uVar26;
                puVar8[0x19] = uVar26;
                puVar8[0x1c] = uVar26;
                puVar8[0x1f] = uVar26;
                puVar8[0x22] = uVar26;
                puVar8[0x25] = uVar26;
                puVar8[0x28] = uVar26;
                puVar8[0x2b] = uVar26;
                puVar8[0x2e] = uVar26;
                puVar8[0x31] = uVar26;
                puVar8[0x34] = uVar26;
                puVar8[0x37] = uVar26;
                puVar8[0x3a] = uVar26;
                puVar8[0x3d] = uVar26;
                puVar8[0x40] = uVar26;
                puVar8[0x43] = uVar26;
                puVar8[0x46] = uVar26;
                puVar8[0x49] = uVar26;
                puVar8[0x4c] = uVar26;
                puVar8[0x4f] = uVar26;
                puVar8[0x52] = uVar26;
                puVar8[0x55] = uVar26;
                puVar8[0x58] = uVar26;
                puVar8[0x5b] = uVar26;
                puVar8[0x5e] = uVar26;
                puVar8[2] = uVar16;
                puVar8[5] = uVar16;
                puVar8[8] = uVar16;
                puVar8[0xb] = uVar16;
                puVar8[0xe] = uVar16;
                puVar8[0x11] = uVar16;
                puVar8[0x14] = uVar16;
                puVar8[0x17] = uVar16;
                puVar8[0x1a] = uVar16;
                puVar8[0x1d] = uVar16;
                puVar8[0x20] = uVar16;
                puVar8[0x23] = uVar16;
                puVar8[0x26] = uVar16;
                puVar8[0x29] = uVar16;
                puVar8[0x2c] = uVar16;
                puVar8[0x2f] = uVar16;
                puVar8[0x32] = uVar16;
                puVar8[0x35] = uVar16;
                puVar8[0x38] = uVar16;
                puVar8[0x3b] = uVar16;
                puVar8[0x3e] = uVar16;
                puVar8[0x41] = uVar16;
                puVar8[0x44] = uVar16;
                puVar8[0x47] = uVar16;
                puVar8[0x4a] = uVar16;
                puVar8[0x4d] = uVar16;
                puVar8[0x50] = uVar16;
                puVar8[0x53] = uVar16;
                puVar8[0x56] = uVar16;
                puVar8[0x59] = uVar16;
                puVar8[0x5c] = uVar16;
                puVar8[0x5f] = uVar16;
                puVar8 = puVar8 + 0x60;
                lStack_150 = param_1;
              } while (uVar9 < uVar7);
            }
            uVar9 = 0;
            if (uVar7 + 1 <= uVar12) {
              uVar17 = uVar9;
              do {
                uVar17 = uVar17 + 1;
                *(ushort *)((longlong)param_11 + uVar9 + uVar7 * 6) = uVar21;
                *(ushort *)((longlong)param_11 + uVar9 + 2 + uVar7 * 6) = uVar26;
                *(ushort *)((longlong)param_11 + uVar9 + 4 + uVar7 * 6) = uVar16;
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
          uStack_168 = (ushort *)(lStack_98 + 2);
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
        uStack_168 = (ushort *)(lStack_98 + 2);
        uVar12 = (longlong)uStack_168 / 3;
        if (6 < (longlong)uVar12) {
          lVar19 = (longlong)puStack_70 + (2 - (longlong)param_11);
          if ((((longlong)(uVar12 * 6) <= lVar19) || (3 < -lVar19)) &&
             ((1 < (longlong)param_11 - (longlong)puStack_70 ||
              ((longlong)(uVar12 * 6) <= -((longlong)param_11 - (longlong)puStack_70))))) {
            uVar21 = *puStack_70;
            uStack_158 = (uint)uVar21;
            uVar26 = puStack_70[1];
            uVar16 = puStack_70[2];
            uStack_168._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
            uStack_168 = (ushort *)CONCAT44(uStack_168._4_4_,(uint)uVar16);
            if ((longlong)uVar12 < 0x20) {
              uVar7 = 0;
            }
            else {
              uVar9 = 0;
              uVar7 = uVar12 & 0xffffffffffffffe0;
              puVar8 = param_11;
              do {
                uVar9 = uVar9 + 0x20;
                puVar8[0x30] = uVar21;
                puVar8[0x33] = uVar21;
                puVar8[0x36] = uVar21;
                puVar8[0x39] = uVar21;
                puVar8[0x3c] = uVar21;
                puVar8[0x3f] = uVar21;
                puVar8[0x42] = uVar21;
                puVar8[0x45] = uVar21;
                puVar8[0x48] = uVar21;
                puVar8[0x4b] = uVar21;
                puVar8[0x4e] = uVar21;
                puVar8[0x51] = uVar21;
                puVar8[0x54] = uVar21;
                puVar8[0x57] = uVar21;
                puVar8[0x5a] = uVar21;
                puVar8[0x5d] = uVar21;
                puVar8[0x31] = uVar26;
                puVar8[0x34] = uVar26;
                puVar8[0x37] = uVar26;
                puVar8[0x3a] = uVar26;
                puVar8[0x3d] = uVar26;
                puVar8[0x40] = uVar26;
                puVar8[0x43] = uVar26;
                puVar8[0x46] = uVar26;
                puVar8[0x49] = uVar26;
                puVar8[0x4c] = uVar26;
                puVar8[0x4f] = uVar26;
                puVar8[0x52] = uVar26;
                puVar8[0x55] = uVar26;
                puVar8[0x58] = uVar26;
                puVar8[0x5b] = uVar26;
                puVar8[0x5e] = uVar26;
                puVar8[1] = uVar26;
                puVar8[4] = uVar26;
                puVar8[7] = uVar26;
                puVar8[10] = uVar26;
                puVar8[0xd] = uVar26;
                puVar8[0x10] = uVar26;
                puVar8[0x13] = uVar26;
                puVar8[0x16] = uVar26;
                puVar8[0x19] = uVar26;
                puVar8[0x1c] = uVar26;
                puVar8[0x1f] = uVar26;
                puVar8[0x22] = uVar26;
                puVar8[0x25] = uVar26;
                puVar8[0x28] = uVar26;
                puVar8[0x2b] = uVar26;
                puVar8[0x2e] = uVar26;
                *puVar8 = uVar21;
                puVar8[3] = uVar21;
                puVar8[6] = uVar21;
                puVar8[9] = uVar21;
                puVar8[0xc] = uVar21;
                puVar8[0xf] = uVar21;
                puVar8[0x12] = uVar21;
                puVar8[0x15] = uVar21;
                puVar8[0x18] = uVar21;
                puVar8[0x1b] = uVar21;
                puVar8[0x1e] = uVar21;
                puVar8[0x21] = uVar21;
                puVar8[0x24] = uVar21;
                puVar8[0x27] = uVar21;
                puVar8[0x2a] = uVar21;
                puVar8[0x2d] = uVar21;
                puVar8[2] = uVar16;
                puVar8[5] = uVar16;
                puVar8[8] = uVar16;
                puVar8[0xb] = uVar16;
                puVar8[0xe] = uVar16;
                puVar8[0x11] = uVar16;
                puVar8[0x14] = uVar16;
                puVar8[0x17] = uVar16;
                puVar8[0x1a] = uVar16;
                puVar8[0x1d] = uVar16;
                puVar8[0x20] = uVar16;
                puVar8[0x23] = uVar16;
                puVar8[0x26] = uVar16;
                puVar8[0x29] = uVar16;
                puVar8[0x2c] = uVar16;
                puVar8[0x2f] = uVar16;
                puVar8[0x32] = uVar16;
                puVar8[0x35] = uVar16;
                puVar8[0x38] = uVar16;
                puVar8[0x3b] = uVar16;
                puVar8[0x3e] = uVar16;
                puVar8[0x41] = uVar16;
                puVar8[0x44] = uVar16;
                puVar8[0x47] = uVar16;
                puVar8[0x4a] = uVar16;
                puVar8[0x4d] = uVar16;
                puVar8[0x50] = uVar16;
                puVar8[0x53] = uVar16;
                puVar8[0x56] = uVar16;
                puVar8[0x59] = uVar16;
                puVar8[0x5c] = uVar16;
                puVar8[0x5f] = uVar16;
                puVar8 = puVar8 + 0x60;
                lStack_150 = param_1;
              } while (uVar9 < uVar7);
            }
            uVar9 = 0;
            if (uVar7 + 1 <= uVar12) {
              uVar17 = uVar9;
              do {
                uVar17 = uVar17 + 1;
                *(ushort *)((longlong)param_11 + uVar9 + uVar7 * 6) = uVar21;
                *(ushort *)((longlong)param_11 + uVar9 + 2 + uVar7 * 6) = uVar26;
                *(ushort *)((longlong)param_11 + uVar9 + 4 + uVar7 * 6) = uVar16;
                uVar9 = uVar9 + 6;
                lStack_150 = param_1;
              } while (uVar17 < uVar12 - uVar7);
            }
            goto LAB_1408dff46;
          }
        }
        lVar19 = 1;
        uVar12 = 0;
        if ((ulonglong)uStack_168 / 6 != 0) {
          do {
            uVar7 = uVar12;
            param_11[uVar7 * 6] = *puStack_70;
            uVar12 = uVar7 + 1;
            param_11[uVar7 * 6 + 1] = puStack_70[1];
            param_11[uVar7 * 6 + 2] = puStack_70[2];
            param_11[uVar7 * 6 + 3] = *puStack_70;
            param_11[uVar7 * 6 + 4] = puStack_70[1];
            param_11[uVar7 * 6 + 5] = puStack_70[2];
          } while (uVar12 < (ulonglong)uStack_168 / 6);
          lVar19 = uVar7 + 2 + uVar12;
        }
        if (lVar19 - 1U < (ulonglong)uStack_168 / 3) {
          lVar19 = lVar19 * 3;
          param_11[lVar19 + -3] = *puStack_70;
          param_11[lVar19 + -2] = puStack_70[1];
          param_11[lVar19 + -1] = puStack_70[2];
        }
      }
LAB_1408dff46:
      pcStack_160 = (code *)(&PTR_FUN_14308d180)[lVar20];
      iStack_178 = param_10;
      uStack_90 = param_7;
      lStack_88 = param_4;
      (*pcStack_160)(puStack_a0,param_4,lVar27);
      puVar13 = (ushort *)((longlong)puVar13 - lVar27);
      param_1 = param_1 + lStack_98 * 2;
      param_4 = lStack_88 + lStack_98 * 4;
      param_7 = uStack_90;
    }
    else {
      pcStack_160 = (code *)(&PTR_FUN_14308d180)[lVar20];
    }
    iStack_178 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar27 < (longlong)puVar13) {
        lVar20 = (longlong)puVar13 - lVar27;
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
            param_11[uVar17 * 2] = *(ushort *)(lVar19 + uVar17 * 4);
            param_11[uVar17 * 2 + 1] = *(ushort *)(lVar19 + 2 + uVar17 * 4);
            uVar9 = uVar17 + 1;
          } while (uVar9 < uVar7);
          lVar19 = uVar17 + 2 + uVar9;
        }
        if (lVar19 - 1U < uVar12) {
          param_11[lVar19 - 1U] = *(ushort *)(param_1 + (lVar27 * -3 + -1 + lVar19) * 2);
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
            puVar13 = param_11 + lVar15 * 3;
            uVar21 = puVar13[-5];
            uVar26 = puVar13[-6];
            uVar16 = puVar13[-4];
            uStack_168 = (ushort *)CONCAT44(uStack_168._4_4_,(uint)uVar21);
            if ((longlong)uVar7 < 0x20) {
              uVar12 = 0;
            }
            else {
              uVar9 = 0;
              uVar12 = uVar7 & 0xffffffffffffffe0;
              puVar8 = puVar13;
              do {
                uVar9 = uVar9 + 0x20;
                puVar8[0x2d] = uVar26;
                puVar8[0x30] = uVar26;
                puVar8[0x33] = uVar26;
                puVar8[0x36] = uVar26;
                puVar8[0x39] = uVar26;
                puVar8[0x3c] = uVar26;
                puVar8[0x3f] = uVar26;
                puVar8[0x42] = uVar26;
                puVar8[0x45] = uVar26;
                puVar8[0x48] = uVar26;
                puVar8[0x4b] = uVar26;
                puVar8[0x4e] = uVar26;
                puVar8[0x51] = uVar26;
                puVar8[0x54] = uVar26;
                puVar8[0x57] = uVar26;
                puVar8[0x5a] = uVar26;
                puVar8[0x2e] = uVar21;
                puVar8[0x31] = uVar21;
                puVar8[0x34] = uVar21;
                puVar8[0x37] = uVar21;
                puVar8[0x3a] = uVar21;
                puVar8[0x3d] = uVar21;
                puVar8[0x40] = uVar21;
                puVar8[0x43] = uVar21;
                puVar8[0x46] = uVar21;
                puVar8[0x49] = uVar21;
                puVar8[0x4c] = uVar21;
                puVar8[0x4f] = uVar21;
                puVar8[0x52] = uVar21;
                puVar8[0x55] = uVar21;
                puVar8[0x58] = uVar21;
                puVar8[0x5b] = uVar21;
                puVar8[-2] = uVar21;
                puVar8[1] = uVar21;
                puVar8[4] = uVar21;
                puVar8[7] = uVar21;
                puVar8[10] = uVar21;
                puVar8[0xd] = uVar21;
                puVar8[0x10] = uVar21;
                puVar8[0x13] = uVar21;
                puVar8[0x16] = uVar21;
                puVar8[0x19] = uVar21;
                puVar8[0x1c] = uVar21;
                puVar8[0x1f] = uVar21;
                puVar8[0x22] = uVar21;
                puVar8[0x25] = uVar21;
                puVar8[0x28] = uVar21;
                puVar8[0x2b] = uVar21;
                puVar8[-3] = uVar26;
                *puVar8 = uVar26;
                puVar8[3] = uVar26;
                puVar8[6] = uVar26;
                puVar8[9] = uVar26;
                puVar8[0xc] = uVar26;
                puVar8[0xf] = uVar26;
                puVar8[0x12] = uVar26;
                puVar8[0x15] = uVar26;
                puVar8[0x18] = uVar26;
                puVar8[0x1b] = uVar26;
                puVar8[0x1e] = uVar26;
                puVar8[0x21] = uVar26;
                puVar8[0x24] = uVar26;
                puVar8[0x27] = uVar26;
                puVar8[0x2a] = uVar26;
                puVar8[-1] = uVar16;
                puVar8[2] = uVar16;
                puVar8[5] = uVar16;
                puVar8[8] = uVar16;
                puVar8[0xb] = uVar16;
                puVar8[0xe] = uVar16;
                puVar8[0x11] = uVar16;
                puVar8[0x14] = uVar16;
                puVar8[0x17] = uVar16;
                puVar8[0x1a] = uVar16;
                puVar8[0x1d] = uVar16;
                puVar8[0x20] = uVar16;
                puVar8[0x23] = uVar16;
                puVar8[0x26] = uVar16;
                puVar8[0x29] = uVar16;
                puVar8[0x2c] = uVar16;
                puVar8[0x2f] = uVar16;
                puVar8[0x32] = uVar16;
                puVar8[0x35] = uVar16;
                puVar8[0x38] = uVar16;
                puVar8[0x3b] = uVar16;
                puVar8[0x3e] = uVar16;
                puVar8[0x41] = uVar16;
                puVar8[0x44] = uVar16;
                puVar8[0x47] = uVar16;
                puVar8[0x4a] = uVar16;
                puVar8[0x4d] = uVar16;
                puVar8[0x50] = uVar16;
                puVar8[0x53] = uVar16;
                puVar8[0x56] = uVar16;
                puVar8[0x59] = uVar16;
                puVar8[0x5c] = uVar16;
                puVar8 = puVar8 + 0x60;
              } while (uVar9 < uVar12);
            }
            uVar9 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar7) {
              do {
                uVar9 = uVar9 + 1;
                *(ushort *)((longlong)puVar13 + lVar20 + -6 + uVar12 * 6) = uVar26;
                *(ushort *)((longlong)puVar13 + lVar20 + -4 + uVar12 * 6) = uVar21;
                *(ushort *)((longlong)puVar13 + lVar20 + -2 + uVar12 * 6) = uVar16;
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
          lVar19 = (longlong)puStack_70 + (2 - (longlong)(uStack_168 + -3));
          if ((((longlong)(uVar7 * 6) <= lVar19) || (3 < -lVar19)) &&
             ((lVar19 = (longlong)(uStack_168 + -3) - (longlong)puStack_70, 1 < lVar19 ||
              ((longlong)(uVar7 * 6) <= -lVar19)))) {
            uVar21 = *puStack_70;
            uVar26 = puStack_70[1];
            uVar16 = puStack_70[2];
            if ((longlong)uVar7 < 0x20) {
              uVar12 = 0;
            }
            else {
              uVar9 = 0;
              uVar12 = uVar7 & 0xffffffffffffffe0;
              puVar13 = uStack_168;
              do {
                uVar9 = uVar9 + 0x20;
                puVar13[0x2d] = uVar21;
                puVar13[0x30] = uVar21;
                puVar13[0x33] = uVar21;
                puVar13[0x36] = uVar21;
                puVar13[0x39] = uVar21;
                puVar13[0x3c] = uVar21;
                puVar13[0x3f] = uVar21;
                puVar13[0x42] = uVar21;
                puVar13[0x45] = uVar21;
                puVar13[0x48] = uVar21;
                puVar13[0x4b] = uVar21;
                puVar13[0x4e] = uVar21;
                puVar13[0x51] = uVar21;
                puVar13[0x54] = uVar21;
                puVar13[0x57] = uVar21;
                puVar13[0x5a] = uVar21;
                puVar13[0x2e] = uVar26;
                puVar13[0x31] = uVar26;
                puVar13[0x34] = uVar26;
                puVar13[0x37] = uVar26;
                puVar13[0x3a] = uVar26;
                puVar13[0x3d] = uVar26;
                puVar13[0x40] = uVar26;
                puVar13[0x43] = uVar26;
                puVar13[0x46] = uVar26;
                puVar13[0x49] = uVar26;
                puVar13[0x4c] = uVar26;
                puVar13[0x4f] = uVar26;
                puVar13[0x52] = uVar26;
                puVar13[0x55] = uVar26;
                puVar13[0x58] = uVar26;
                puVar13[0x5b] = uVar26;
                puVar13[-2] = uVar26;
                puVar13[1] = uVar26;
                puVar13[4] = uVar26;
                puVar13[7] = uVar26;
                puVar13[10] = uVar26;
                puVar13[0xd] = uVar26;
                puVar13[0x10] = uVar26;
                puVar13[0x13] = uVar26;
                puVar13[0x16] = uVar26;
                puVar13[0x19] = uVar26;
                puVar13[0x1c] = uVar26;
                puVar13[0x1f] = uVar26;
                puVar13[0x22] = uVar26;
                puVar13[0x25] = uVar26;
                puVar13[0x28] = uVar26;
                puVar13[0x2b] = uVar26;
                puVar13[-3] = uVar21;
                *puVar13 = uVar21;
                puVar13[3] = uVar21;
                puVar13[6] = uVar21;
                puVar13[9] = uVar21;
                puVar13[0xc] = uVar21;
                puVar13[0xf] = uVar21;
                puVar13[0x12] = uVar21;
                puVar13[0x15] = uVar21;
                puVar13[0x18] = uVar21;
                puVar13[0x1b] = uVar21;
                puVar13[0x1e] = uVar21;
                puVar13[0x21] = uVar21;
                puVar13[0x24] = uVar21;
                puVar13[0x27] = uVar21;
                puVar13[0x2a] = uVar21;
                puVar13[-1] = uVar16;
                puVar13[2] = uVar16;
                puVar13[5] = uVar16;
                puVar13[8] = uVar16;
                puVar13[0xb] = uVar16;
                puVar13[0xe] = uVar16;
                puVar13[0x11] = uVar16;
                puVar13[0x14] = uVar16;
                puVar13[0x17] = uVar16;
                puVar13[0x1a] = uVar16;
                puVar13[0x1d] = uVar16;
                puVar13[0x20] = uVar16;
                puVar13[0x23] = uVar16;
                puVar13[0x26] = uVar16;
                puVar13[0x29] = uVar16;
                puVar13[0x2c] = uVar16;
                puVar13[0x2f] = uVar16;
                puVar13[0x32] = uVar16;
                puVar13[0x35] = uVar16;
                puVar13[0x38] = uVar16;
                puVar13[0x3b] = uVar16;
                puVar13[0x3e] = uVar16;
                puVar13[0x41] = uVar16;
                puVar13[0x44] = uVar16;
                puVar13[0x47] = uVar16;
                puVar13[0x4a] = uVar16;
                puVar13[0x4d] = uVar16;
                puVar13[0x50] = uVar16;
                puVar13[0x53] = uVar16;
                puVar13[0x56] = uVar16;
                puVar13[0x59] = uVar16;
                puVar13[0x5c] = uVar16;
                puVar13 = puVar13 + 0x60;
              } while (uVar9 < uVar12);
            }
            uVar9 = 0;
            lVar20 = 0;
            if (uVar12 + 1 <= uVar7) {
              do {
                uVar9 = uVar9 + 1;
                *(ushort *)((longlong)uStack_168 + lVar20 + -6 + uVar12 * 6) = uVar21;
                *(ushort *)((longlong)uStack_168 + lVar20 + -4 + uVar12 * 6) = uVar26;
                *(ushort *)((longlong)uStack_168 + lVar20 + -2 + uVar12 * 6) = uVar16;
                lVar20 = lVar20 + 6;
              } while (uVar9 < uVar7 - uVar12);
            }
            goto LAB_1408e0946;
          }
        }
        lVar19 = 1;
        uVar7 = 0;
        if (uVar12 / 6 != 0) {
          do {
            uVar9 = uVar7;
            param_11[lVar15 * 3 + uVar9 * 6 + -3] = *puStack_70;
            uVar7 = uVar9 + 1;
            param_11[lVar15 * 3 + uVar9 * 6 + -2] = puStack_70[1];
            param_11[lVar15 * 3 + uVar9 * 6 + -1] = puStack_70[2];
            param_11[lVar15 * 3 + uVar9 * 6] = *puStack_70;
            param_11[lVar15 * 3 + uVar9 * 6 + 1] = puStack_70[1];
            param_11[lVar15 * 3 + uVar9 * 6 + 2] = puStack_70[2];
          } while (uVar7 < uVar12 / 6);
          lVar19 = uVar9 + 2 + uVar7;
        }
        if (lVar19 - 1U < uVar12 / 3) {
          lVar20 = lVar20 + lVar19 * 3 + -3;
          param_11[lVar20 + -3] = *puStack_70;
          param_11[lVar20 + -2] = puStack_70[1];
          param_11[lVar20 + -1] = puStack_70[2];
        }
      }
LAB_1408e0946:
      iStack_178 = param_10;
      (*pcStack_160)(param_11 + lVar27 * 3,param_4,lVar27,param_9);
    }
    else {
      (*pcStack_160)(param_1,param_4,puVar13,param_9);
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_198) == DAT_1436b4680) {
    return;
  }
LAB_1408e0c3b:
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

