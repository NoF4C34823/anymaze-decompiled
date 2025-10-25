
void FUN_140715960(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ushort *puVar24;
  ulonglong uVar25;
  ushort uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined1 in_XMM0 [16];
  undefined1 auStack_178 [32];
  int iStack_158;
  undefined8 uStack_148;
  ulonglong uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  int iStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [16];
  undefined4 uStack_58;
  undefined2 uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_178;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_e0 = param_9;
  uVar21 = param_7 & 0xf;
  lVar9 = (longlong)param_6;
  lVar27 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308be00)[lVar9])(param_1,param_4,*param_5,param_9);
    if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
      return;
    }
    goto LAB_140716d4c;
  }
  uVar15 = (ulonglong)param_10;
  puVar24 = (ushort *)&uStack_58;
  if (uVar21 == 6) {
    puVar24 = param_8;
  }
  lVar13 = *param_5;
  if (*param_5 < (longlong)(uVar15 - 1)) {
    lVar17 = -lVar27;
    lVar11 = 0;
    if (lVar17 < lVar27 + lVar13) {
      uVar10 = param_7 & 0x80;
      uStack_148 = CONCAT44(uStack_148._4_4_,param_7) & 0xffffffff00000040;
      iStack_e8 = param_10;
      do {
        lVar22 = lVar17;
        if (((lVar17 < 0) || (lVar13 <= lVar17)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar17 < 0) {
                lVar22 = 0;
                if ((uint)uStack_148 != 0) {
                  lVar22 = lVar17;
                }
              }
              else if (uVar10 == 0) {
                lVar22 = lVar13 + -1;
              }
            }
            else if (uVar21 == 3) {
              if (lVar13 < 2) {
                if (lVar17 < 0) {
                  if ((uint)uStack_148 == 0) {
                    lVar22 = -lVar17;
                    if (uVar10 == 0) {
                      lVar22 = 0;
                    }
                  }
                }
                else if (((0 < lVar17) && (uVar10 == 0)) &&
                        (lVar22 = -lVar17, (uint)uStack_148 == 0)) {
                  lVar22 = 0;
                }
              }
              else if ((lVar17 < 0) || (lVar13 <= lVar17)) {
                if (lVar17 < 0) goto LAB_140716d20;
                while (uVar10 == 0) {
                  for (lVar22 = (lVar13 + -1) * 2 - lVar22; lVar22 < 0; lVar22 = -lVar22) {
LAB_140716d20:
                    if ((uint)uStack_148 != 0) goto LAB_140716bce;
                  }
                  if (lVar22 < lVar13) break;
                }
              }
            }
            goto LAB_140716bce;
          }
          uVar7 = (uint)uStack_148;
          if (-1 < lVar17) {
            uVar7 = uVar10;
          }
          if (uVar7 != 0) goto LAB_140716bce;
          uVar14 = *puVar24;
          uVar26 = puVar24[1];
          uVar16 = puVar24[2];
        }
        else {
LAB_140716bce:
          uVar14 = *(ushort *)(param_1 + lVar22 * 6);
          uVar26 = *(ushort *)(param_1 + 2 + lVar22 * 6);
          uVar16 = *(ushort *)(param_1 + 4 + lVar22 * 6);
        }
        lVar17 = lVar17 + 1;
        *(ushort *)(lVar11 + param_11) = uVar14;
        *(ushort *)(lVar11 + 2 + param_11) = uVar26;
        *(ushort *)(lVar11 + 4 + param_11) = uVar16;
        lVar11 = lVar11 + 6;
        lStack_100 = param_4;
        lStack_f8 = lVar9;
        lStack_f0 = lVar27;
      } while (lVar17 < lVar27 + lVar13);
    }
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308be00)[lVar9])(param_11 + lVar27 * 6,param_4,lVar13,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar17 = uVar15 * 3;
      lStack_118 = lVar27 * 6;
      uStack_120 = param_11 + lStack_118;
      uVar8 = lVar17 - 3;
      if (uVar8 != 0 && SCARRY8(lVar17,-3) == (longlong)uVar8 < 0) {
        if (6 < (longlong)uVar8) {
          lVar11 = uVar15 * 6 + -6;
          if ((lVar11 <= (longlong)(uStack_120 - param_1)) ||
             (lVar11 <= (longlong)-(uStack_120 - param_1))) {
            if ((longlong)uVar8 < 8) {
LAB_140716caf:
              uStack_148 = 0;
              uVar12 = uStack_148;
            }
            else {
              uVar18 = uStack_120 & 0xf;
              if (uVar18 != 0) {
                if ((uStack_120 & 1) != 0) goto LAB_140716caf;
                uVar18 = 0x10 - uVar18 >> 1;
              }
              if ((longlong)uVar8 < (longlong)(uVar18 + 8)) goto LAB_140716caf;
              uVar12 = uVar8 - (uVar8 - uVar18 & 7);
              uVar28 = 0;
              if (uVar18 != 0) {
                do {
                  *(undefined2 *)(uStack_120 + uVar28 * 2) = *(undefined2 *)(param_1 + uVar28 * 2);
                  uVar28 = uVar28 + 1;
                  lStack_f8 = lVar9;
                } while (uVar28 < uVar18);
              }
              uStack_148 = uVar12;
              if ((uVar18 * 2 + param_1 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(param_1 + uVar18 * 2);
                  uVar29 = puVar1[1];
                  puVar2 = (undefined8 *)(uStack_120 + uVar18 * 2);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar29;
                  uVar18 = uVar18 + 8;
                  lStack_100 = param_4;
                } while (uVar18 < uVar12);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar18 * 2));
                  *(undefined1 (*) [16])(uStack_120 + uVar18 * 2) = in_XMM0;
                  uVar18 = uVar18 + 8;
                  lStack_100 = param_4;
                } while (uVar18 < uVar12);
              }
            }
            for (; uVar12 < uVar8; uVar12 = uVar12 + 1) {
              *(undefined2 *)(uStack_120 + uVar12 * 2) = *(undefined2 *)(param_1 + uVar12 * 2);
              lStack_100 = param_4;
            }
            goto LAB_140715c6e;
          }
        }
        lVar11 = 1;
        uVar8 = 0;
        uStack_148 = (longlong)(param_10 * 3) - 3;
        if (uStack_148 >> 1 != 0) {
          do {
            *(undefined2 *)(uStack_120 + uVar8 * 4) = *(undefined2 *)(param_1 + uVar8 * 4);
            *(undefined2 *)(uStack_120 + 2 + uVar8 * 4) = *(undefined2 *)(param_1 + 2 + uVar8 * 4);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uStack_148 >> 1);
          lVar11 = uVar8 * 2 + 1;
          lStack_100 = param_4;
        }
        uVar8 = lVar11 - 1;
        if (uVar8 < uStack_148) {
          *(undefined2 *)(param_11 + (lVar27 * 3 + uVar8) * 2) =
               *(undefined2 *)(param_1 + uVar8 * 2);
        }
      }
LAB_140715c6e:
      uVar8 = uStack_140;
      if (uVar21 == 1) {
        lVar17 = lVar27 * 3;
        if (lVar17 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar17 < 0) {
          uStack_148 = lVar27 * 3 + 2;
          lVar11 = (longlong)uStack_148 / 3;
          if ((lVar11 < 7) ||
             (((longlong)(param_11 - uStack_120) < 6 &&
              ((longlong)-(param_11 - uStack_120) < lVar11 * 6)))) {
            uVar18 = 0;
            lVar19 = 0;
            uStack_130 = CONCAT44(uStack_130._4_4_,param_7) & 0xffffffff0000000f;
            uStack_128 = CONCAT44(uStack_128._4_4_,param_7);
            uVar8 = 0;
            iStack_e8 = param_10;
            lVar17 = 0;
            lVar22 = lVar19;
            do {
              uVar4 = *(undefined2 *)(lStack_118 + param_11);
              lVar20 = lVar19 + 0x40;
              if (lVar11 <= lVar19 + 0x40) {
                lVar20 = lVar11;
              }
              uVar28 = lVar20 - lVar19;
              uVar12 = uVar8;
              if (7 < (longlong)uVar28) {
                uVar12 = uVar28 & 0xfffffffffffffff8;
                uVar29 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
                uVar25 = uVar8;
                do {
                  iVar23 = (int)uVar25;
                  uVar25 = uVar25 + 8;
                  lVar3 = (longlong)iVar23 * 2;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3) = uVar29;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3 + 8) = uVar29;
                } while (uVar25 < uVar12);
              }
              for (; uVar12 < uVar28; uVar12 = uVar12 + 1) {
                *(undefined2 *)((longlong)auStack_d8 + (longlong)(int)uVar12 * 2) = uVar4;
              }
              lVar3 = param_11 + lVar17;
              uStack_148 = param_11;
              uVar12 = uVar8;
              uVar28 = uVar8;
              do {
                iVar23 = (int)uVar28;
                uVar28 = uVar28 + 1;
                *(undefined2 *)(uVar12 + lVar3) =
                     *(undefined2 *)((longlong)auStack_d8 + (longlong)iVar23 * 2);
                *(undefined2 *)(uVar12 + 2 + lVar3) = *(undefined2 *)(uStack_120 + 2);
                *(undefined2 *)(uVar12 + 4 + lVar3) = *(undefined2 *)(uStack_120 + 4);
                uVar12 = uVar12 + 6;
              } while (uVar28 < (ulonglong)(lVar20 + lVar22));
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 0x40;
              lVar17 = lVar17 + 0x180;
              lVar22 = lVar22 + -0x40;
            } while (uVar18 < lVar11 + 0x3fU >> 6);
            uVar21 = (uint)uStack_130;
            uVar8 = uVar15;
            lStack_100 = param_4;
            lStack_f8 = lVar9;
            lStack_f0 = lVar27;
          }
          else {
            uStack_128 = 1;
            uVar14 = *(ushort *)(lStack_118 + param_11);
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uVar14);
            uVar26 = *(ushort *)(uStack_120 + 4);
            uVar4 = *(undefined2 *)(uStack_120 + 2);
            uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uVar26);
            uVar8 = (lVar17 + 2U) / 6;
            uVar18 = 0;
            lVar17 = 0;
            if (uVar8 != 0) {
              do {
                uVar18 = uVar18 + 1;
                *(ushort *)(lVar17 + param_11) = uVar14;
                *(undefined2 *)(lVar17 + 2 + param_11) = uVar4;
                *(ushort *)(lVar17 + 4 + param_11) = uVar26;
                *(ushort *)(lVar17 + 6 + param_11) = uVar14;
                *(undefined2 *)(lVar17 + 8 + param_11) = uVar4;
                *(ushort *)(lVar17 + 10 + param_11) = uVar26;
                lVar17 = lVar17 + 0xc;
              } while (uVar18 < uVar8);
              uStack_128 = uVar18 * 2 + 1;
              lStack_100 = param_4;
            }
            uVar8 = uStack_140;
            if (uStack_128 - 1 < uStack_148 / 3) {
              lVar17 = uStack_128 * 3 + -3;
              *(ushort *)(param_11 + lVar17 * 2) = uVar14;
              *(undefined2 *)(param_11 + 2 + lVar17 * 2) = uVar4;
              *(ushort *)(param_11 + 4 + lVar17 * 2) = uVar26;
            }
          }
        }
      }
      else if (uVar21 == 3) {
        lVar11 = lVar27 * 3;
        if (lVar11 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar11 < 0) {
          uVar18 = lVar11 + 2;
          uStack_130 = 0;
          uStack_148 = 1;
          uStack_128 = uVar18;
          if (uVar18 / 6 != 0) {
            uStack_128._4_4_ = (undefined4)(uVar18 >> 0x20);
            uStack_128 = CONCAT44(uStack_128._4_4_,param_7);
            lVar19 = uVar15 * 6 + param_11;
            lVar11 = 0;
            lVar22 = 0;
            uVar8 = 0;
            do {
              uVar8 = uVar8 + 1;
              *(undefined2 *)(lVar22 + param_11) = *(undefined2 *)(lVar11 + -6 + lVar19);
              *(undefined2 *)(lVar22 + 2 + param_11) = *(undefined2 *)(lVar11 + -4 + lVar19);
              *(undefined2 *)(lVar22 + 4 + param_11) = *(undefined2 *)(lVar11 + -2 + lVar19);
              *(undefined2 *)(lVar22 + 6 + param_11) = *(undefined2 *)(lVar11 + -0xc + lVar19);
              *(undefined2 *)(lVar22 + 8 + param_11) = *(undefined2 *)(lVar11 + -10 + lVar19);
              lVar20 = lVar11 + -8;
              lVar11 = lVar11 + -0xc;
              *(undefined2 *)(lVar22 + 10 + param_11) = *(undefined2 *)(lVar20 + lVar19);
              lVar22 = lVar22 + 0xc;
            } while (uVar8 < uVar18 / 6);
            uStack_148 = uVar8 * 2 + 1;
            lStack_100 = param_4;
            lStack_f8 = lVar9;
          }
          uVar8 = uStack_148 - 1;
          if (uVar8 < uVar18 / 3) {
            lVar17 = lVar17 + uVar8 * -3;
            lVar11 = uStack_148 * 3 + -3;
            *(undefined2 *)(param_11 + lVar11 * 2) = *(undefined2 *)((param_11 - 6) + lVar17 * 2);
            *(undefined2 *)(param_11 + 2 + lVar11 * 2) =
                 *(undefined2 *)((param_11 - 4) + lVar17 * 2);
            *(undefined2 *)(param_11 + 4 + lVar11 * 2) =
                 *(undefined2 *)((param_11 - 2) + lVar17 * 2);
          }
        }
      }
      else if ((uVar21 == 6) &&
              (lVar17 = lVar27 * 3, lVar17 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar17 < 0)) {
        uStack_148 = lVar27 * 3 + 2;
        if (6 < (longlong)uStack_148 / 3) {
          lVar22 = ((longlong)uStack_148 / 3) * 6;
          lVar11 = (longlong)puVar24 + (2 - param_11);
          if (((lVar22 <= lVar11) || (3 < -lVar11)) &&
             ((1 < (longlong)(param_11 - (longlong)puVar24) ||
              (lVar22 <= (longlong)-(param_11 - (longlong)puVar24))))) {
            uVar14 = puVar24[1];
            uVar26 = *puVar24;
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uVar26);
            uVar16 = puVar24[2];
            uVar8 = (lVar17 + 2U) / 6;
            uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uVar16);
            uVar18 = 0;
            uStack_128 = 1;
            lVar17 = 0;
            if (uVar8 != 0) {
              do {
                uVar18 = uVar18 + 1;
                *(ushort *)(lVar17 + param_11) = uVar26;
                *(ushort *)(lVar17 + 2 + param_11) = uVar14;
                *(ushort *)(lVar17 + 4 + param_11) = uVar16;
                *(ushort *)(lVar17 + 6 + param_11) = uVar26;
                *(ushort *)(lVar17 + 8 + param_11) = uVar14;
                *(ushort *)(lVar17 + 10 + param_11) = uVar16;
                lVar17 = lVar17 + 0xc;
              } while (uVar18 < uVar8);
              uStack_128 = uVar18 * 2 + 1;
              lStack_100 = param_4;
            }
            uVar8 = uStack_140;
            if (uStack_128 - 1 < uStack_148 / 3) {
              lVar17 = uStack_128 * 3 + -3;
              *(ushort *)(param_11 + lVar17 * 2) = uVar26;
              *(ushort *)(param_11 + 2 + lVar17 * 2) = uVar14;
              *(ushort *)(param_11 + 4 + lVar17 * 2) = uVar16;
            }
            goto LAB_1407163bb;
          }
        }
        uVar8 = 0;
        uVar18 = (lVar17 + 2U) / 6;
        uStack_140 = 1;
        if (uVar18 != 0) {
          do {
            uVar12 = uVar8 + 1;
            lVar17 = uVar8 * 0xc;
            *(ushort *)(param_11 + lVar17) = *puVar24;
            *(ushort *)(param_11 + 2 + lVar17) = puVar24[1];
            *(ushort *)(param_11 + 4 + lVar17) = puVar24[2];
            *(ushort *)(param_11 + 6 + lVar17) = *puVar24;
            *(ushort *)(param_11 + 8 + lVar17) = puVar24[1];
            *(ushort *)(param_11 + 10 + lVar17) = puVar24[2];
            uVar8 = uVar12;
          } while (uVar12 < uVar18);
          uStack_140 = uVar12 * 2 + 1;
        }
        uVar8 = uStack_140;
        if (uStack_140 - 1 < uStack_148 / 3) {
          lVar17 = uStack_140 * 3 + -3;
          *(ushort *)(param_11 + lVar17 * 2) = *puVar24;
          *(ushort *)(param_11 + 2 + lVar17 * 2) = puVar24[1];
          *(ushort *)(param_11 + 4 + lVar17 * 2) = puVar24[2];
        }
      }
LAB_1407163bb:
      uStack_140 = uVar8;
      lStack_108 = lVar27 * 2;
      pcStack_138 = (code *)(&PTR_FUN_14308be00)[lVar9];
      uStack_128 = CONCAT44(uStack_128._4_4_,param_7);
      iStack_158 = param_10;
      lStack_110 = param_1;
      (*pcStack_138)(uStack_120,param_4,lVar27,param_9);
      lVar13 = lVar13 - lVar27;
      param_4 = param_4 + lStack_108 * 6;
      param_1 = lStack_110 + lStack_118;
      param_7 = (uint)uStack_128;
    }
    else {
      pcStack_138 = (code *)(&PTR_FUN_14308be00)[lVar9];
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar27 < lVar13) {
        lVar13 = lVar13 - lVar27;
        iStack_158 = param_10;
        lStack_110 = param_1;
        (*pcStack_138)(param_1,param_4,lVar13,uStack_e0);
        param_1 = lStack_110 + lVar13 * 6;
        param_4 = param_4 + lVar13 * 0xc;
      }
      lVar9 = uVar15 * 3;
      if (lVar9 != 3 && SCARRY8(lVar9,-3) == lVar9 + -3 < 0) {
        lVar13 = 1;
        uVar8 = 0;
        uVar18 = ((lVar9 + -1) / 3) * 3;
        uVar12 = uVar18 >> 1;
        if (uVar12 != 0) {
          lVar13 = lVar27 * -6 + param_1;
          do {
            *(undefined2 *)(param_11 + uVar8 * 4) = *(undefined2 *)(lVar13 + uVar8 * 4);
            *(undefined2 *)(param_11 + 2 + uVar8 * 4) = *(undefined2 *)(lVar13 + 2 + uVar8 * 4);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar12);
          lVar13 = uVar8 * 2 + 1;
        }
        uVar8 = lVar13 - 1;
        if (uVar8 < uVar18) {
          *(undefined2 *)(param_11 + uVar8 * 2) =
               *(undefined2 *)(param_1 + (lVar27 * -3 + uVar8) * 2);
        }
      }
      if (uVar21 == 1) {
        lVar13 = lVar27 * 3;
        if (lVar13 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar13 < 0) {
          uStack_140 = lVar27 * 3 + 2;
          if ((longlong)uStack_140 / 3 < 7) {
            lVar17 = 1;
            uVar8 = (lVar13 + 2U) / 6;
            if (uVar8 != 0) {
              lVar13 = uVar15 * 6 + param_11;
              uVar18 = 0;
              do {
                uVar12 = uVar18 + 1;
                lVar17 = uVar18 * 0xc;
                *(undefined2 *)(lVar13 + -6 + lVar17) = *(undefined2 *)(lVar13 + -0xc);
                *(undefined2 *)(lVar13 + -4 + lVar17) = *(undefined2 *)(lVar13 + -10);
                *(undefined2 *)(lVar13 + -2 + lVar17) = *(undefined2 *)(lVar13 + -8);
                *(undefined2 *)(lVar13 + lVar17) = *(undefined2 *)(lVar13 + -0xc);
                *(undefined2 *)(lVar13 + 2 + lVar17) = *(undefined2 *)(lVar13 + -10);
                *(undefined2 *)(lVar13 + 4 + lVar17) = *(undefined2 *)(lVar13 + -8);
                uVar18 = uVar12;
              } while (uVar12 < uVar8);
              lVar17 = uVar12 * 2 + 1;
            }
            if (lVar17 - 1U < uStack_140 / 3) {
              lVar9 = lVar9 + (lVar17 - 1U) * 3;
              *(undefined2 *)((param_11 - 6) + lVar9 * 2) =
                   *(undefined2 *)((param_11 - 0xc) + uVar15 * 6);
              *(undefined2 *)((param_11 - 4) + lVar9 * 2) =
                   *(undefined2 *)((param_11 - 10) + uVar15 * 6);
              *(undefined2 *)((param_11 - 2) + lVar9 * 2) =
                   *(undefined2 *)((param_11 - 8) + uVar15 * 6);
            }
          }
          else {
            uStack_148 = uVar15 * 6 + param_11;
            lVar17 = 1;
            uVar15 = (lVar13 + 2U) / 6;
            lVar13 = 0;
            uVar4 = *(undefined2 *)(uStack_148 - 0xc);
            uVar5 = *(undefined2 *)(uStack_148 - 10);
            uVar6 = *(undefined2 *)(uStack_148 - 8);
            uVar8 = 0;
            if (uVar15 != 0) {
              do {
                uVar8 = uVar8 + 1;
                *(undefined2 *)(lVar13 + -6 + uStack_148) = uVar4;
                *(undefined2 *)(lVar13 + -4 + uStack_148) = uVar5;
                *(undefined2 *)(lVar13 + -2 + uStack_148) = uVar6;
                *(undefined2 *)(lVar13 + uStack_148) = uVar4;
                *(undefined2 *)(lVar13 + 2 + uStack_148) = uVar5;
                *(undefined2 *)(lVar13 + 4 + uStack_148) = uVar6;
                lVar13 = lVar13 + 0xc;
              } while (uVar8 < uVar15);
              lVar17 = uVar8 * 2 + 1;
            }
            if (lVar17 - 1U < uStack_140 / 3) {
              lVar9 = lVar9 + (lVar17 - 1U) * 3;
              *(undefined2 *)((param_11 - 6) + lVar9 * 2) = uVar4;
              *(undefined2 *)((param_11 - 4) + lVar9 * 2) = uVar5;
              *(undefined2 *)((param_11 - 2) + lVar9 * 2) = uVar6;
            }
          }
        }
      }
      else if (uVar21 == 3) {
        lVar13 = lVar27 * 3;
        if (lVar13 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar13 < 0) {
          uVar18 = 0;
          uVar8 = (lVar13 + 2U) / 6;
          lVar11 = 0;
          lVar22 = 1;
          lVar17 = 0;
          if (uVar8 != 0) {
            lVar22 = uVar15 * 6 + param_11;
            do {
              uVar18 = uVar18 + 1;
              *(undefined2 *)(lVar11 + -6 + lVar22) = *(undefined2 *)(lVar17 + -0x12 + lVar22);
              *(undefined2 *)(lVar11 + -4 + lVar22) = *(undefined2 *)(lVar17 + -0x10 + lVar22);
              *(undefined2 *)(lVar11 + -2 + lVar22) = *(undefined2 *)(lVar17 + -0xe + lVar22);
              *(undefined2 *)(lVar11 + lVar22) = *(undefined2 *)(lVar17 + -0x18 + lVar22);
              *(undefined2 *)(lVar11 + 2 + lVar22) = *(undefined2 *)(lVar17 + -0x16 + lVar22);
              lVar19 = lVar17 + -0x14;
              lVar17 = lVar17 + -0xc;
              *(undefined2 *)(lVar11 + 4 + lVar22) = *(undefined2 *)(lVar19 + lVar22);
              lVar11 = lVar11 + 0xc;
            } while (uVar18 < uVar8);
            lVar22 = uVar18 * 2 + 1;
          }
          uVar15 = lVar22 - 1;
          if (uVar15 < (lVar13 + 2U) / 3) {
            lVar13 = lVar9 + uVar15 * 3;
            lVar9 = lVar9 + uVar15 * -3;
            *(undefined2 *)((param_11 - 6) + lVar13 * 2) =
                 *(undefined2 *)((param_11 - 0x12) + lVar9 * 2);
            *(undefined2 *)((param_11 - 4) + lVar13 * 2) =
                 *(undefined2 *)((param_11 - 0x10) + lVar9 * 2);
            *(undefined2 *)((param_11 - 2) + lVar13 * 2) =
                 *(undefined2 *)((param_11 - 0xe) + lVar9 * 2);
          }
        }
      }
      else if ((uVar21 == 6) &&
              (lVar13 = lVar27 * 3, lVar13 != 0 && SCARRY8(lVar27 * 2,lVar27) == lVar13 < 0)) {
        uStack_140 = lVar27 * 3 + 2;
        if (6 < (longlong)uStack_140 / 3) {
          lVar11 = ((longlong)uStack_140 / 3) * 6;
          uStack_148 = param_11 + uVar15 * 6;
          lVar17 = uVar15 * 6 + -6 + param_11;
          lVar22 = (longlong)puVar24 + (2 - lVar17);
          if (((lVar11 <= lVar22) || (3 < -lVar22)) &&
             ((lVar17 = lVar17 - (longlong)puVar24, 1 < lVar17 || (lVar11 <= -lVar17)))) {
            uVar8 = 0;
            uVar14 = *puVar24;
            uVar26 = puVar24[1];
            lVar17 = 1;
            uVar16 = puVar24[2];
            uVar15 = (lVar13 + 2U) / 6;
            lVar13 = 0;
            if (uVar15 != 0) {
              do {
                uVar8 = uVar8 + 1;
                *(ushort *)(lVar13 + -6 + uStack_148) = uVar14;
                *(ushort *)(lVar13 + -4 + uStack_148) = uVar26;
                *(ushort *)(lVar13 + -2 + uStack_148) = uVar16;
                *(ushort *)(lVar13 + uStack_148) = uVar14;
                *(ushort *)(lVar13 + 2 + uStack_148) = uVar26;
                *(ushort *)(lVar13 + 4 + uStack_148) = uVar16;
                lVar13 = lVar13 + 0xc;
              } while (uVar8 < uVar15);
              lVar17 = uVar8 * 2 + 1;
            }
            if (lVar17 - 1U < uStack_140 / 3) {
              lVar9 = lVar9 + (lVar17 - 1U) * 3;
              *(ushort *)((param_11 - 6) + lVar9 * 2) = uVar14;
              *(ushort *)((param_11 - 4) + lVar9 * 2) = uVar26;
              *(ushort *)((param_11 - 2) + lVar9 * 2) = uVar16;
            }
            goto LAB_140716a9a;
          }
        }
        lVar17 = 1;
        uVar8 = (lVar13 + 2U) / 6;
        if (uVar8 != 0) {
          lVar13 = uVar15 * 6 + param_11;
          uVar15 = 0;
          do {
            uVar18 = uVar15 + 1;
            lVar17 = uVar15 * 0xc;
            *(ushort *)(lVar13 + -6 + lVar17) = *puVar24;
            *(ushort *)(lVar13 + -4 + lVar17) = puVar24[1];
            *(ushort *)(lVar13 + -2 + lVar17) = puVar24[2];
            *(ushort *)(lVar13 + lVar17) = *puVar24;
            *(ushort *)(lVar13 + 2 + lVar17) = puVar24[1];
            *(ushort *)(lVar13 + 4 + lVar17) = puVar24[2];
            uVar15 = uVar18;
          } while (uVar18 < uVar8);
          lVar17 = uVar18 * 2 + 1;
        }
        if (lVar17 - 1U < uStack_140 / 3) {
          lVar9 = lVar9 + (lVar17 - 1U) * 3;
          *(ushort *)((param_11 - 6) + lVar9 * 2) = *puVar24;
          *(ushort *)((param_11 - 4) + lVar9 * 2) = puVar24[1];
          *(ushort *)((param_11 - 2) + lVar9 * 2) = puVar24[2];
        }
      }
LAB_140716a9a:
      iStack_158 = param_10;
      (*pcStack_138)(param_11 + lVar27 * 6,param_4,lVar27,uStack_e0);
    }
    else {
      iStack_158 = param_10;
      (*pcStack_138)(param_1,param_4,lVar13,uStack_e0);
    }
  }
  if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
    return;
  }
LAB_140716d4c:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

