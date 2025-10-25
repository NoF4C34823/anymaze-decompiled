
/* WARNING: Removing unreachable block (ram,0x0001401cd09e) */

void FUN_1401cc2c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  ushort *puVar16;
  ushort uVar17;
  longlong lVar18;
  ushort uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined1 in_XMM0 [16];
  undefined1 auStack_178 [32];
  int iStack_158;
  undefined8 uStack_148;
  ulonglong uStack_140;
  code *pcStack_138;
  uint uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  uint uStack_108;
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
  uVar26 = param_7 & 0xf;
  uStack_e0 = param_9;
  lVar20 = (longlong)param_6;
  lVar24 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_158 = param_10;
    (**(code **)(&DAT_143088060 + lVar20 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
      return;
    }
    goto LAB_1401cd4ed;
  }
  uVar28 = (ulonglong)param_10;
  lVar14 = *param_5;
  puVar16 = (ushort *)&uStack_58;
  if (uVar26 == 6) {
    puVar16 = param_8;
  }
  if (lVar14 < (longlong)(uVar28 - 1)) {
    lVar27 = 0;
    lVar18 = -lVar24;
    if (lVar18 < lVar24 + lVar14) {
      uStack_148 = CONCAT44(uStack_148._4_4_,param_7) & 0xffffffff00000080;
      uVar8 = param_7 & 0x40;
      iStack_e8 = param_10;
      do {
        lVar21 = lVar18;
        if (((lVar18 < 0) || (lVar14 <= lVar18)) && (param_7 != 0xf0)) {
          if (uVar26 != 6) {
            if (uVar26 == 1) {
              if (lVar18 < 0) {
                lVar21 = 0;
                if (uVar8 != 0) {
                  lVar21 = lVar18;
                }
              }
              else if ((uint)uStack_148 == 0) {
                lVar21 = lVar14 + -1;
              }
            }
            else if (uVar26 == 3) {
              if (lVar14 < 2) {
                if (lVar18 < 0) {
                  if (uVar8 == 0) {
                    lVar21 = -lVar18;
                    if ((uint)uStack_148 == 0) {
                      lVar21 = 0;
                    }
                  }
                }
                else if (((0 < lVar18) && ((uint)uStack_148 == 0)) && (lVar21 = -lVar18, uVar8 == 0)
                        ) {
                  lVar21 = 0;
                }
              }
              else if ((lVar18 < 0) || (lVar14 <= lVar18)) {
                if (lVar18 < 0) goto LAB_1401cd4c0;
                while ((uint)uStack_148 == 0) {
                  for (lVar21 = (lVar14 + -1) * 2 - lVar21; lVar21 < 0; lVar21 = -lVar21) {
LAB_1401cd4c0:
                    if (uVar8 != 0) goto LAB_1401cd36f;
                  }
                  if (lVar21 < lVar14) break;
                }
              }
            }
            goto LAB_1401cd36f;
          }
          uVar7 = uVar8;
          if (-1 < lVar18) {
            uVar7 = (uint)uStack_148;
          }
          if (uVar7 != 0) goto LAB_1401cd36f;
          uVar15 = *puVar16;
          uVar19 = puVar16[1];
          uVar17 = puVar16[2];
        }
        else {
LAB_1401cd36f:
          uVar15 = *(ushort *)(param_1 + lVar21 * 6);
          uVar19 = *(ushort *)(param_1 + 2 + lVar21 * 6);
          uVar17 = *(ushort *)(param_1 + 4 + lVar21 * 6);
        }
        lVar18 = lVar18 + 1;
        *(ushort *)(lVar27 + param_11) = uVar15;
        *(ushort *)(lVar27 + 2 + param_11) = uVar19;
        *(ushort *)(lVar27 + 4 + param_11) = uVar17;
        lVar27 = lVar27 + 6;
        lStack_100 = param_4;
        lStack_f8 = lVar20;
        lStack_f0 = lVar24;
      } while (lVar18 < lVar24 + lVar14);
    }
    iStack_158 = param_10;
    (**(code **)(&DAT_143088060 + lVar20 * 8))(param_11 + lVar24 * 6,param_4,lVar14,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lStack_118 = lVar24 * 3;
      lVar18 = uVar28 * 3;
      lStack_128 = lVar24 * 6;
      uStack_120 = param_11 + lVar24 * 6;
      uVar9 = lVar18 - 3;
      if (uVar9 != 0 && SCARRY8(lVar18,-3) == (longlong)uVar9 < 0) {
        if (6 < (longlong)uVar9) {
          lVar27 = uVar28 * 6 + -6;
          if ((lVar27 <= (longlong)(uStack_120 - param_1)) ||
             (lVar27 <= (longlong)-(uStack_120 - param_1))) {
            if ((longlong)uVar9 < 8) {
LAB_1401cd446:
              uStack_148 = 0;
              uVar11 = uStack_148;
            }
            else {
              uVar13 = uStack_120 & 0xf;
              if (uVar13 != 0) {
                if ((uStack_120 & 1) != 0) goto LAB_1401cd446;
                uVar13 = 0x10 - uVar13 >> 1;
              }
              if ((longlong)uVar9 < (longlong)(uVar13 + 8)) goto LAB_1401cd446;
              uVar11 = uVar9 - (uVar9 - uVar13 & 7);
              uVar12 = 0;
              if (uVar13 != 0) {
                do {
                  *(undefined2 *)(uStack_120 + uVar12 * 2) = *(undefined2 *)(param_1 + uVar12 * 2);
                  uVar12 = uVar12 + 1;
                  lStack_f8 = lVar20;
                } while (uVar12 < uVar13);
              }
              uStack_148 = uVar11;
              if ((param_1 + uVar13 * 2 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(param_1 + uVar13 * 2);
                  uVar29 = puVar1[1];
                  puVar2 = (undefined8 *)(uStack_120 + uVar13 * 2);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar29;
                  uVar13 = uVar13 + 8;
                  lStack_100 = param_4;
                } while (uVar13 < uVar11);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar13 * 2));
                  *(undefined1 (*) [16])(uStack_120 + uVar13 * 2) = in_XMM0;
                  uVar13 = uVar13 + 8;
                  lStack_100 = param_4;
                } while (uVar13 < uVar11);
              }
            }
            for (; uVar11 < uVar9; uVar11 = uVar11 + 1) {
              *(undefined2 *)(uStack_120 + uVar11 * 2) = *(undefined2 *)(param_1 + uVar11 * 2);
              lStack_100 = param_4;
            }
            goto LAB_1401cc5c5;
          }
        }
        lVar27 = 1;
        uStack_148 = (longlong)(param_10 * 3) - 3;
        uVar9 = 0;
        if (uStack_148 >> 1 != 0) {
          do {
            uVar13 = uVar9;
            *(undefined2 *)(uStack_120 + uVar13 * 4) = *(undefined2 *)(param_1 + uVar13 * 4);
            *(undefined2 *)(uStack_120 + 2 + uVar13 * 4) = *(undefined2 *)(param_1 + 2 + uVar13 * 4)
            ;
            uVar9 = uVar13 + 1;
          } while (uVar9 < uStack_148 >> 1);
          lVar27 = uVar13 + 2 + uVar9;
          lStack_100 = param_4;
        }
        if (lVar27 - 1U < uStack_148) {
          *(undefined2 *)(param_11 + (lStack_118 + -1 + lVar27) * 2) =
               *(undefined2 *)(param_1 + (lVar27 - 1U) * 2);
        }
      }
LAB_1401cc5c5:
      uVar9 = uStack_140;
      if (uVar26 == 1) {
        if (0 < lStack_118) {
          uStack_148 = lStack_118 + 2;
          lVar18 = (longlong)uStack_148 / 3;
          if ((lVar18 < 7) ||
             (((longlong)(param_11 - uStack_120) < 6 &&
              ((longlong)-(param_11 - uStack_120) < lVar18 * 6)))) {
            lVar10 = 0;
            uVar9 = 0;
            uVar13 = 0;
            iStack_e8 = param_10;
            lVar27 = 0;
            lVar21 = lVar10;
            do {
              uVar4 = *(undefined2 *)(lStack_128 + param_11);
              lVar22 = lVar10 + 0x40;
              if (lVar18 <= lVar10 + 0x40) {
                lVar22 = lVar18;
              }
              uVar12 = lVar22 - lVar10;
              uVar11 = uVar13;
              if (7 < (longlong)uVar12) {
                uVar11 = uVar12 & 0xfffffffffffffff8;
                uVar29 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
                uVar25 = uVar13;
                do {
                  iVar23 = (int)uVar25;
                  uVar25 = uVar25 + 8;
                  lVar3 = (longlong)iVar23 * 2;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3) = uVar29;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3 + 8) = uVar29;
                } while (uVar25 < uVar11);
              }
              for (; uVar11 < uVar12; uVar11 = uVar11 + 1) {
                *(undefined2 *)((longlong)auStack_d8 + (longlong)(int)uVar11 * 2) = uVar4;
              }
              lVar3 = param_11 + lVar27;
              uStack_148 = param_11;
              uVar11 = uVar13;
              uVar12 = uVar13;
              do {
                iVar23 = (int)uVar12;
                uVar12 = uVar12 + 1;
                *(undefined2 *)(uVar11 + lVar3) =
                     *(undefined2 *)((longlong)auStack_d8 + (longlong)iVar23 * 2);
                *(undefined2 *)(uVar11 + 2 + lVar3) = *(undefined2 *)(uStack_120 + 2);
                *(undefined2 *)(uVar11 + 4 + lVar3) = *(undefined2 *)(uStack_120 + 4);
                uVar11 = uVar11 + 6;
              } while (uVar12 < (ulonglong)(lVar22 + lVar21));
              uVar9 = uVar9 + 1;
              lVar10 = lVar10 + 0x40;
              lVar27 = lVar27 + 0x180;
              lVar21 = lVar21 + -0x40;
            } while (uVar9 < lVar18 + 0x3fU >> 6);
            uStack_130 = 1;
            uVar9 = uVar28;
            lStack_100 = param_4;
            lStack_f8 = lVar20;
            lStack_f0 = lVar24;
          }
          else {
            lVar18 = 1;
            uVar15 = *(ushort *)(lStack_128 + param_11);
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uVar15);
            uVar4 = *(undefined2 *)(uStack_120 + 2);
            uVar19 = *(ushort *)(uStack_120 + 4);
            uStack_130 = (uint)uVar19;
            lVar27 = 0;
            uVar9 = 0;
            if (uStack_148 / 6 != 0) {
              do {
                uVar13 = uVar9;
                uVar9 = uVar13 + 1;
                *(ushort *)(lVar27 + param_11) = uVar15;
                *(undefined2 *)(lVar27 + 2 + param_11) = uVar4;
                *(ushort *)(lVar27 + 4 + param_11) = uVar19;
                *(ushort *)(lVar27 + 6 + param_11) = uVar15;
                *(undefined2 *)(lVar27 + 8 + param_11) = uVar4;
                *(ushort *)(lVar27 + 10 + param_11) = uVar19;
                lVar27 = lVar27 + 0xc;
              } while (uVar9 < uStack_148 / 6);
              lVar18 = uVar13 + 2 + uVar9;
              lStack_100 = param_4;
            }
            uVar9 = uStack_140;
            if (lVar18 - 1U < uStack_148 / 3) {
              lVar18 = lVar18 * 3 + -3;
              *(ushort *)(param_11 + lVar18 * 2) = uVar15;
              *(undefined2 *)(param_11 + 2 + lVar18 * 2) = uVar4;
              *(ushort *)(param_11 + 4 + lVar18 * 2) = uVar19;
            }
          }
        }
      }
      else if (uVar26 == 3) {
        if (0 < lStack_118) {
          uVar9 = 0;
          uStack_140 = 1;
          uStack_148 = lStack_118 + 2;
          if (uStack_148 / 6 != 0) {
            lVar27 = param_11 + uVar28 * 6;
            lVar21 = 0;
            uVar13 = uVar9;
            do {
              uVar11 = uVar13;
              uVar13 = uVar11 + 1;
              *(undefined2 *)(lVar21 + param_11) = *(undefined2 *)((uVar9 - 6) + lVar27);
              *(undefined2 *)(lVar21 + 2 + param_11) = *(undefined2 *)((uVar9 - 4) + lVar27);
              *(undefined2 *)(lVar21 + 4 + param_11) = *(undefined2 *)((uVar9 - 2) + lVar27);
              *(undefined2 *)(lVar21 + 6 + param_11) = *(undefined2 *)((uVar9 - 0xc) + lVar27);
              *(undefined2 *)(lVar21 + 8 + param_11) = *(undefined2 *)((uVar9 - 10) + lVar27);
              lVar10 = uVar9 - 8;
              uVar9 = uVar9 - 0xc;
              *(undefined2 *)(lVar21 + 10 + param_11) = *(undefined2 *)(lVar10 + lVar27);
              lVar21 = lVar21 + 0xc;
            } while (uVar13 < uStack_148 / 6);
            uStack_140 = uVar11 + 2 + uVar13;
            lStack_100 = param_4;
            lStack_f8 = lVar20;
          }
          uVar9 = uStack_140;
          if (uStack_140 - 1 < uStack_148 / 3) {
            lVar27 = uStack_140 * 3 + -3;
            lVar18 = lVar18 - lVar27;
            *(undefined2 *)(param_11 + lVar27 * 2) = *(undefined2 *)((param_11 - 6) + lVar18 * 2);
            *(undefined2 *)(param_11 + 2 + lVar27 * 2) =
                 *(undefined2 *)((param_11 - 4) + lVar18 * 2);
            *(undefined2 *)(param_11 + 4 + lVar27 * 2) =
                 *(undefined2 *)((param_11 - 2) + lVar18 * 2);
          }
        }
      }
      else if ((uVar26 == 6) && (0 < lStack_118)) {
        uStack_148 = lStack_118 + 2;
        if (6 < (longlong)uStack_148 / 3) {
          lVar18 = ((longlong)uStack_148 / 3) * 6;
          lVar27 = (longlong)puVar16 + (2 - param_11);
          if (((lVar18 <= lVar27) || (3 < -lVar27)) &&
             ((1 < (longlong)(param_11 - (longlong)puVar16) ||
              (lVar18 <= (longlong)-(param_11 - (longlong)puVar16))))) {
            uVar15 = *puVar16;
            lVar18 = 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uVar15);
            uVar19 = puVar16[1];
            uVar17 = puVar16[2];
            uStack_130 = (uint)uVar17;
            lVar27 = 0;
            uVar9 = 0;
            if (uStack_148 / 6 != 0) {
              do {
                uVar13 = uVar9;
                uVar9 = uVar13 + 1;
                *(ushort *)(lVar27 + param_11) = uVar15;
                *(ushort *)(lVar27 + 2 + param_11) = uVar19;
                *(ushort *)(lVar27 + 4 + param_11) = uVar17;
                *(ushort *)(lVar27 + 6 + param_11) = uVar15;
                *(ushort *)(lVar27 + 8 + param_11) = uVar19;
                *(ushort *)(lVar27 + 10 + param_11) = uVar17;
                lVar27 = lVar27 + 0xc;
              } while (uVar9 < uStack_148 / 6);
              lVar18 = uVar13 + 2 + uVar9;
              lStack_100 = param_4;
            }
            uVar9 = uStack_140;
            if (lVar18 - 1U < uStack_148 / 3) {
              lVar18 = lVar18 * 3 + -3;
              *(ushort *)(param_11 + lVar18 * 2) = uVar15;
              *(ushort *)(param_11 + 2 + lVar18 * 2) = uVar19;
              *(ushort *)(param_11 + 4 + lVar18 * 2) = uVar17;
            }
            goto LAB_1401ccc2b;
          }
        }
        lVar18 = 1;
        uVar13 = 0;
        if (uStack_148 / 6 != 0) {
          do {
            uVar11 = uVar13;
            uVar13 = uVar11 + 1;
            *(ushort *)(param_11 + uVar11 * 0xc) = *puVar16;
            *(ushort *)(param_11 + 2 + uVar11 * 0xc) = puVar16[1];
            *(ushort *)(param_11 + 4 + uVar11 * 0xc) = puVar16[2];
            *(ushort *)(param_11 + 6 + uVar11 * 0xc) = *puVar16;
            *(ushort *)(param_11 + 8 + uVar11 * 0xc) = puVar16[1];
            *(ushort *)(param_11 + 10 + uVar11 * 0xc) = puVar16[2];
          } while (uVar13 < uStack_148 / 6);
          lVar18 = uVar11 + 2 + uVar13;
        }
        if (lVar18 - 1U < uStack_148 / 3) {
          lVar18 = lVar18 * 3 + -3;
          *(ushort *)(param_11 + lVar18 * 2) = *puVar16;
          *(ushort *)(param_11 + 2 + lVar18 * 2) = puVar16[1];
          *(ushort *)(param_11 + 4 + lVar18 * 2) = puVar16[2];
        }
      }
LAB_1401ccc2b:
      uStack_140 = uVar9;
      pcStack_138 = *(code **)(&DAT_143088060 + lVar20 * 8);
      iStack_158 = param_10;
      lStack_110 = param_1;
      uStack_108 = param_7;
      (*pcStack_138)(uStack_120,param_4,lVar24,param_9);
      lVar14 = lVar14 - lVar24;
      param_1 = lStack_110 + lStack_118 * 2;
      param_4 = param_4 + lStack_118 * 4;
      param_7 = uStack_108;
    }
    else {
      pcStack_138 = *(code **)(&DAT_143088060 + lVar20 * 8);
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar24 < lVar14) {
        lVar14 = lVar14 - lVar24;
        iStack_158 = param_10;
        lStack_110 = param_1;
        (*pcStack_138)(param_1,param_4,lVar14,uStack_e0);
        param_1 = lStack_110 + lVar14 * 6;
        param_4 = param_4 + lVar14 * 0xc;
      }
      lVar20 = uVar28 * 3;
      if (lVar20 != 3 && SCARRY8(lVar20,-3) == lVar20 + -3 < 0) {
        lVar14 = 1;
        uVar9 = ((lVar20 + -1) / 3) * 3;
        uVar13 = uVar9 >> 1;
        if (uVar13 != 0) {
          lVar14 = lVar24 * -6 + param_1;
          uVar11 = 0;
          do {
            uVar12 = uVar11;
            *(undefined2 *)(param_11 + uVar12 * 4) = *(undefined2 *)(lVar14 + uVar12 * 4);
            *(undefined2 *)(param_11 + 2 + uVar12 * 4) = *(undefined2 *)(lVar14 + 2 + uVar12 * 4);
            uVar11 = uVar12 + 1;
          } while (uVar11 < uVar13);
          lVar14 = uVar12 + 2 + uVar11;
        }
        if (lVar14 - 1U < uVar9) {
          *(undefined2 *)(param_11 + (lVar14 - 1U) * 2) =
               *(undefined2 *)(param_1 + (lVar24 * -3 + -1 + lVar14) * 2);
        }
      }
      lVar14 = lVar24 * 3;
      if (uVar26 == 1) {
        if (0 < lVar14) {
          uStack_140 = lVar14 + 2;
          if ((longlong)uStack_140 / 3 < 7) {
            lVar14 = 1;
            if (uStack_140 / 6 != 0) {
              lVar14 = param_11 + uVar28 * 6;
              uVar9 = 0;
              do {
                uVar13 = uVar9;
                uVar9 = uVar13 + 1;
                *(undefined2 *)(lVar14 + -6 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -0xc);
                *(undefined2 *)(lVar14 + -4 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -10);
                *(undefined2 *)(lVar14 + -2 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -8);
                *(undefined2 *)(lVar14 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -0xc);
                *(undefined2 *)(lVar14 + 2 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -10);
                *(undefined2 *)(lVar14 + 4 + uVar13 * 0xc) = *(undefined2 *)(lVar14 + -8);
              } while (uVar9 < uStack_140 / 6);
              lVar14 = uVar13 + 2 + uVar9;
            }
            if (lVar14 - 1U < uStack_140 / 3) {
              lVar20 = lVar14 * 3 + -3 + lVar20;
              *(undefined2 *)((param_11 - 6) + lVar20 * 2) =
                   *(undefined2 *)((param_11 - 0xc) + uVar28 * 6);
              *(undefined2 *)((param_11 - 4) + lVar20 * 2) =
                   *(undefined2 *)((param_11 - 10) + uVar28 * 6);
              *(undefined2 *)((param_11 - 2) + lVar20 * 2) =
                   *(undefined2 *)((param_11 - 8) + uVar28 * 6);
            }
          }
          else {
            uStack_148 = param_11 + uVar28 * 6;
            lVar18 = 0;
            uVar4 = *(undefined2 *)(uStack_148 - 0xc);
            uVar5 = *(undefined2 *)(uStack_148 - 10);
            uVar6 = *(undefined2 *)(uStack_148 - 8);
            lVar14 = 1;
            uVar28 = 0;
            if (uStack_140 / 6 != 0) {
              do {
                uVar9 = uVar28;
                uVar28 = uVar9 + 1;
                *(undefined2 *)(lVar18 + -6 + uStack_148) = uVar4;
                *(undefined2 *)(lVar18 + -4 + uStack_148) = uVar5;
                *(undefined2 *)(lVar18 + -2 + uStack_148) = uVar6;
                *(undefined2 *)(lVar18 + uStack_148) = uVar4;
                *(undefined2 *)(lVar18 + 2 + uStack_148) = uVar5;
                *(undefined2 *)(lVar18 + 4 + uStack_148) = uVar6;
                lVar18 = lVar18 + 0xc;
              } while (uVar28 < uStack_140 / 6);
              lVar14 = uVar9 + 2 + uVar28;
            }
            if (lVar14 - 1U < uStack_140 / 3) {
              lVar20 = lVar20 + lVar14 * 3 + -3;
              *(undefined2 *)((param_11 - 6) + lVar20 * 2) = uVar4;
              *(undefined2 *)((param_11 - 4) + lVar20 * 2) = uVar5;
              *(undefined2 *)((param_11 - 2) + lVar20 * 2) = uVar6;
            }
          }
        }
      }
      else if (uVar26 == 3) {
        if (0 < lVar14) {
          lVar18 = 1;
          lVar27 = 0;
          lVar21 = 0;
          uVar9 = (lVar14 + 2U) / 6;
          if (uVar9 != 0) {
            lVar18 = param_11 + uVar28 * 6;
            uVar28 = 0;
            do {
              uVar13 = uVar28;
              uVar28 = uVar13 + 1;
              *(undefined2 *)(lVar27 + -6 + lVar18) = *(undefined2 *)(lVar21 + -0x12 + lVar18);
              *(undefined2 *)(lVar27 + -4 + lVar18) = *(undefined2 *)(lVar21 + -0x10 + lVar18);
              *(undefined2 *)(lVar27 + -2 + lVar18) = *(undefined2 *)(lVar21 + -0xe + lVar18);
              *(undefined2 *)(lVar27 + lVar18) = *(undefined2 *)(lVar21 + -0x18 + lVar18);
              *(undefined2 *)(lVar27 + 2 + lVar18) = *(undefined2 *)(lVar21 + -0x16 + lVar18);
              lVar10 = lVar21 + -0x14;
              lVar21 = lVar21 + -0xc;
              *(undefined2 *)(lVar27 + 4 + lVar18) = *(undefined2 *)(lVar10 + lVar18);
              lVar27 = lVar27 + 0xc;
            } while (uVar28 < uVar9);
            lVar18 = uVar13 + 2 + uVar28;
          }
          if (lVar18 - 1U < (lVar14 + 2U) / 3) {
            lVar18 = lVar18 * 3 + -3;
            lVar14 = lVar20 + lVar18;
            lVar20 = lVar20 - lVar18;
            *(undefined2 *)((param_11 - 6) + lVar14 * 2) =
                 *(undefined2 *)((param_11 - 0x12) + lVar20 * 2);
            *(undefined2 *)((param_11 - 4) + lVar14 * 2) =
                 *(undefined2 *)((param_11 - 0x10) + lVar20 * 2);
            *(undefined2 *)((param_11 - 2) + lVar14 * 2) =
                 *(undefined2 *)((param_11 - 0xe) + lVar20 * 2);
          }
        }
      }
      else if ((uVar26 == 6) && (0 < lVar14)) {
        uStack_140 = lVar14 + 2;
        if (6 < (longlong)uStack_140 / 3) {
          uStack_148 = param_11 + uVar28 * 6;
          lVar14 = ((longlong)uStack_140 / 3) * 6;
          lVar18 = (longlong)puVar16 + (2 - (uStack_148 - 6));
          if (((lVar14 <= lVar18) || (3 < -lVar18)) &&
             ((lVar18 = (uStack_148 - 6) - (longlong)puVar16, 1 < lVar18 || (lVar14 <= -lVar18)))) {
            lVar14 = 1;
            uVar15 = *puVar16;
            uVar19 = puVar16[1];
            lVar18 = 0;
            uVar17 = puVar16[2];
            uVar28 = 0;
            if (uStack_140 / 6 != 0) {
              do {
                uVar9 = uVar28;
                uVar28 = uVar9 + 1;
                *(ushort *)(lVar18 + -6 + uStack_148) = uVar15;
                *(ushort *)(lVar18 + -4 + uStack_148) = uVar19;
                *(ushort *)(lVar18 + -2 + uStack_148) = uVar17;
                *(ushort *)(lVar18 + uStack_148) = uVar15;
                *(ushort *)(lVar18 + 2 + uStack_148) = uVar19;
                *(ushort *)(lVar18 + 4 + uStack_148) = uVar17;
                lVar18 = lVar18 + 0xc;
              } while (uVar28 < uStack_140 / 6);
              lVar14 = uVar9 + 2 + uVar28;
            }
            if (lVar14 - 1U < uStack_140 / 3) {
              lVar20 = lVar20 + lVar14 * 3 + -3;
              *(ushort *)((param_11 - 6) + lVar20 * 2) = uVar15;
              *(ushort *)((param_11 - 4) + lVar20 * 2) = uVar19;
              *(ushort *)((param_11 - 2) + lVar20 * 2) = uVar17;
            }
            goto LAB_1401cd232;
          }
        }
        lVar14 = 1;
        if (uStack_140 / 6 != 0) {
          lVar14 = param_11 + uVar28 * 6;
          uVar28 = 0;
          do {
            uVar9 = uVar28;
            uVar28 = uVar9 + 1;
            *(ushort *)(lVar14 + -6 + uVar9 * 0xc) = *puVar16;
            *(ushort *)(lVar14 + -4 + uVar9 * 0xc) = puVar16[1];
            *(ushort *)(lVar14 + -2 + uVar9 * 0xc) = puVar16[2];
            *(ushort *)(lVar14 + uVar9 * 0xc) = *puVar16;
            *(ushort *)(lVar14 + 2 + uVar9 * 0xc) = puVar16[1];
            *(ushort *)(lVar14 + 4 + uVar9 * 0xc) = puVar16[2];
          } while (uVar28 < uStack_140 / 6);
          lVar14 = uVar9 + 2 + uVar28;
        }
        if (lVar14 - 1U < uStack_140 / 3) {
          lVar20 = lVar20 + lVar14 * 3 + -3;
          *(ushort *)((param_11 - 6) + lVar20 * 2) = *puVar16;
          *(ushort *)((param_11 - 4) + lVar20 * 2) = puVar16[1];
          *(ushort *)((param_11 - 2) + lVar20 * 2) = puVar16[2];
        }
      }
LAB_1401cd232:
      iStack_158 = param_10;
      (*pcStack_138)(param_11 + lVar24 * 6,param_4,lVar24,uStack_e0);
    }
    else {
      iStack_158 = param_10;
      (*pcStack_138)(param_1,param_4,lVar14,uStack_e0);
    }
  }
  if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
    return;
  }
LAB_1401cd4ed:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

