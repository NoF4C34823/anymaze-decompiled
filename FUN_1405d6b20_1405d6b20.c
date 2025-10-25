
/* WARNING: Removing unreachable block (ram,0x0001405d78a0) */

void FUN_1405d6b20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ushort uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ushort *puVar27;
  ushort uVar28;
  longlong lVar29;
  ushort uVar30;
  undefined8 uVar31;
  undefined1 in_XMM0 [16];
  undefined1 auStack_178 [32];
  int iStack_158;
  ulonglong uStack_148;
  ushort *puStack_140;
  code *pcStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  uint uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  int iStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 auStack_d8 [16];
  undefined4 uStack_58;
  undefined2 uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_178;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_54 = 0;
  lStack_e8 = (longlong)param_6;
  uStack_f0 = param_9;
  uVar24 = param_7 & 0xf;
  lVar29 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_158 = param_10;
    (**(code **)(&DAT_14308b2a0 + lStack_e8 * 8))(param_1,param_4,*param_5,param_9);
    if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
      return;
    }
    goto LAB_1405d7cac;
  }
  uVar19 = (ulonglong)param_10;
  lVar16 = *param_5;
  puVar27 = (ushort *)&uStack_58;
  if (uVar24 == 6) {
    puVar27 = param_8;
  }
  if (lVar16 < (longlong)(uVar19 - 1)) {
    lVar21 = -lVar29;
    lVar14 = 0;
    if (lVar21 < lVar29 + lVar16) {
      uVar9 = param_7 & 0x80;
      iStack_f8 = param_10;
      uVar18 = param_7 & 0x40;
      do {
        lVar11 = lVar21;
        if (((lVar21 < 0) || (lVar16 <= lVar21)) && (param_7 != 0xf0)) {
          if (uVar24 != 6) {
            if (uVar24 == 1) {
              if (lVar21 < 0) {
                lVar11 = 0;
                if (uVar18 != 0) {
                  lVar11 = lVar21;
                }
              }
              else if (uVar9 == 0) {
                lVar11 = lVar16 + -1;
              }
            }
            else if (uVar24 == 3) {
              if (lVar16 < 2) {
                if (lVar21 < 0) {
                  if (uVar18 == 0) {
                    lVar11 = -lVar21;
                    if (uVar9 == 0) {
                      lVar11 = 0;
                    }
                  }
                }
                else if (((0 < lVar21) && (uVar9 == 0)) && (lVar11 = -lVar21, uVar18 == 0)) {
                  lVar11 = 0;
                }
              }
              else if ((lVar21 < 0) || (lVar16 <= lVar21)) {
                if (lVar21 < 0) goto LAB_1405d7c80;
                while (uVar9 == 0) {
                  for (lVar11 = (lVar16 + -1) * 2 - lVar11; lVar11 < 0; lVar11 = -lVar11) {
LAB_1405d7c80:
                    if (uVar18 != 0) goto LAB_1405d7b4e;
                  }
                  if (lVar11 < lVar16) break;
                }
              }
            }
            goto LAB_1405d7b4e;
          }
          uVar7 = uVar18;
          if (-1 < lVar21) {
            uVar7 = uVar9;
          }
          if (uVar7 != 0) goto LAB_1405d7b4e;
          uVar23 = *puVar27;
          uVar28 = puVar27[1];
          uVar30 = puVar27[2];
        }
        else {
LAB_1405d7b4e:
          uVar23 = *(ushort *)(param_1 + lVar11 * 6);
          uVar28 = *(ushort *)(param_1 + 2 + lVar11 * 6);
          uVar30 = *(ushort *)(param_1 + 4 + lVar11 * 6);
        }
        lVar21 = lVar21 + 1;
        *(ushort *)(lVar14 + param_11) = uVar23;
        *(ushort *)(lVar14 + 2 + param_11) = uVar28;
        *(ushort *)(lVar14 + 4 + param_11) = uVar30;
        lVar14 = lVar14 + 6;
        lStack_108 = param_4;
        lStack_100 = lVar29;
      } while (lVar21 < lVar29 + lVar16);
    }
    iStack_158 = param_10;
    (**(code **)(&DAT_14308b2a0 + lStack_e8 * 8))(param_11 + lVar29 * 6,param_4,lVar16,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar21 = uVar19 * 3;
      lStack_118 = lVar29 * 3;
      lVar14 = lVar29 * 6;
      uStack_120 = param_11 + lVar29 * 6;
      uVar15 = lVar21 - 3;
      if (uVar15 != 0 && SCARRY8(lVar21,-3) == (longlong)uVar15 < 0) {
        if (6 < (longlong)uVar15) {
          lVar11 = uVar19 * 6 + -6;
          if ((lVar11 <= (longlong)(uStack_120 - param_1)) ||
             (lVar11 <= (longlong)-(uStack_120 - param_1))) {
            if ((longlong)uVar15 < 8) {
LAB_1405d7c20:
              uVar10 = 0;
            }
            else {
              uVar13 = uStack_120 & 0xf;
              if (uVar13 != 0) {
                if ((uStack_120 & 1) != 0) goto LAB_1405d7c20;
                uVar13 = 0x10 - uVar13 >> 1;
              }
              if ((longlong)uVar15 < (longlong)(uVar13 + 8)) goto LAB_1405d7c20;
              uVar20 = 0;
              uVar10 = uVar15 - (uVar15 - uVar13 & 7);
              if (uVar13 != 0) {
                do {
                  *(undefined2 *)(uStack_120 + uVar20 * 2) = *(undefined2 *)(param_1 + uVar20 * 2);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar13);
              }
              if ((param_1 + uVar13 * 2 & 0xf) == 0) {
                do {
                  puVar1 = (undefined8 *)(param_1 + uVar13 * 2);
                  uVar31 = puVar1[1];
                  puVar2 = (undefined8 *)(uStack_120 + uVar13 * 2);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar31;
                  uVar13 = uVar13 + 8;
                } while (uVar13 < uVar10);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar13 * 2));
                  *(undefined1 (*) [16])(uStack_120 + uVar13 * 2) = in_XMM0;
                  uVar13 = uVar13 + 8;
                } while (uVar13 < uVar10);
              }
            }
            for (; uVar10 < uVar15; uVar10 = uVar10 + 1) {
              *(undefined2 *)(uStack_120 + uVar10 * 2) = *(undefined2 *)(param_1 + uVar10 * 2);
            }
            goto LAB_1405d6de2;
          }
        }
        lVar11 = 1;
        uVar10 = (longlong)(param_10 * 3) - 3;
        uVar13 = uVar10 >> 1;
        uVar15 = 0;
        if (uVar13 != 0) {
          do {
            uVar20 = uVar15;
            *(undefined2 *)(uStack_120 + uVar20 * 4) = *(undefined2 *)(param_1 + uVar20 * 4);
            *(undefined2 *)(uStack_120 + 2 + uVar20 * 4) = *(undefined2 *)(param_1 + 2 + uVar20 * 4)
            ;
            uVar15 = uVar20 + 1;
          } while (uVar15 < uVar13);
          lVar11 = uVar20 + 2 + uVar15;
        }
        if (lVar11 - 1U < uVar10) {
          *(undefined2 *)(param_11 + (lStack_118 + -1 + lVar11) * 2) =
               *(undefined2 *)(param_1 + (lVar11 - 1U) * 2);
        }
      }
LAB_1405d6de2:
      puVar8 = puStack_140;
      lVar11 = lStack_130;
      lStack_128 = lVar14;
      if (uVar24 == 1) {
        if (0 < lStack_118) {
          uStack_148 = lStack_118 + 2;
          lVar21 = (longlong)uStack_148 / 3;
          if ((lVar21 < 7) ||
             (((longlong)(param_11 - uStack_120) < 6 &&
              ((longlong)-(param_11 - uStack_120) < lVar21 * 6)))) {
            uVar15 = 0;
            lVar22 = 0;
            lVar12 = 0;
            uVar13 = 0;
            iStack_f8 = param_10;
            lVar17 = lVar12;
            do {
              uVar4 = *(undefined2 *)(lVar14 + param_11);
              lVar11 = lVar22 + 0x40;
              if (lVar21 <= lVar22 + 0x40) {
                lVar11 = lVar21;
              }
              uVar20 = lVar11 - lVar22;
              uVar10 = uVar13;
              if (7 < (longlong)uVar20) {
                uVar10 = uVar20 & 0xfffffffffffffff8;
                uVar31 = CONCAT44(CONCAT22(uVar4,uVar4),CONCAT22(uVar4,uVar4));
                uVar26 = uVar13;
                do {
                  iVar25 = (int)uVar26;
                  uVar26 = uVar26 + 8;
                  lVar3 = (longlong)iVar25 * 2;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3) = uVar31;
                  *(undefined8 *)((longlong)auStack_d8 + lVar3 + 8) = uVar31;
                } while (uVar26 < uVar10);
              }
              for (; uVar10 < uVar20; uVar10 = uVar10 + 1) {
                *(undefined2 *)((longlong)auStack_d8 + (longlong)(int)uVar10 * 2) = uVar4;
              }
              lStack_128 = param_11;
              lVar3 = param_11 + lVar12;
              uVar10 = uVar13;
              uVar20 = uVar13;
              do {
                iVar25 = (int)uVar20;
                uVar20 = uVar20 + 1;
                *(undefined2 *)(uVar10 + lVar3) =
                     *(undefined2 *)((longlong)auStack_d8 + (longlong)iVar25 * 2);
                *(undefined2 *)(uVar10 + 2 + lVar3) = *(undefined2 *)(uStack_120 + 2);
                *(undefined2 *)(uVar10 + 4 + lVar3) = *(undefined2 *)(uStack_120 + 4);
                uVar10 = uVar10 + 6;
              } while (uVar20 < (ulonglong)(lVar11 + lVar17));
              uVar15 = uVar15 + 1;
              lVar22 = lVar22 + 0x40;
              lVar12 = lVar12 + 0x180;
              lVar17 = lVar17 + -0x40;
              uStack_148 = uVar19;
              puVar8 = puVar27;
              lVar11 = param_1;
              lStack_100 = lVar29;
            } while (uVar15 < lVar21 + 0x3fU >> 6);
          }
          else {
            lVar21 = 1;
            uVar23 = *(ushort *)(lVar14 + param_11);
            puStack_140 = (ushort *)CONCAT44(puStack_140._4_4_,(uint)uVar23);
            uVar4 = *(undefined2 *)(uStack_120 + 2);
            uVar28 = *(ushort *)(uStack_120 + 4);
            lStack_130 = CONCAT44(lStack_130._4_4_,(uint)uVar28);
            lVar14 = 0;
            uVar15 = 0;
            if (uStack_148 / 6 != 0) {
              do {
                uVar13 = uVar15;
                uVar15 = uVar13 + 1;
                *(ushort *)(lVar14 + param_11) = uVar23;
                *(undefined2 *)(lVar14 + 2 + param_11) = uVar4;
                *(ushort *)(lVar14 + 4 + param_11) = uVar28;
                *(ushort *)(lVar14 + 6 + param_11) = uVar23;
                *(undefined2 *)(lVar14 + 8 + param_11) = uVar4;
                *(ushort *)(lVar14 + 10 + param_11) = uVar28;
                lVar14 = lVar14 + 0xc;
              } while (uVar15 < uStack_148 / 6);
              lVar21 = uVar13 + 2 + uVar15;
            }
            puVar8 = puStack_140;
            lVar11 = lStack_130;
            if (lVar21 - 1U < uStack_148 / 3) {
              lVar21 = lVar21 * 3 + -3;
              *(ushort *)(param_11 + lVar21 * 2) = uVar23;
              *(undefined2 *)(param_11 + 2 + lVar21 * 2) = uVar4;
              *(ushort *)(param_11 + 4 + lVar21 * 2) = uVar28;
            }
          }
        }
      }
      else if (uVar24 == 3) {
        if (0 < lStack_118) {
          lVar14 = 1;
          uStack_148 = lStack_118 + 2;
          lVar11 = 0;
          if (uStack_148 / 6 != 0) {
            lVar14 = param_11 + uVar19 * 6;
            lVar17 = lVar11;
            uVar15 = 0;
            do {
              uVar13 = uVar15;
              uVar15 = uVar13 + 1;
              *(undefined2 *)(lVar11 + param_11) = *(undefined2 *)(lVar17 + -6 + lVar14);
              *(undefined2 *)(lVar11 + 2 + param_11) = *(undefined2 *)(lVar17 + -4 + lVar14);
              *(undefined2 *)(lVar11 + 4 + param_11) = *(undefined2 *)(lVar17 + -2 + lVar14);
              *(undefined2 *)(lVar11 + 6 + param_11) = *(undefined2 *)(lVar17 + -0xc + lVar14);
              *(undefined2 *)(lVar11 + 8 + param_11) = *(undefined2 *)(lVar17 + -10 + lVar14);
              lVar12 = lVar17 + -8;
              lVar17 = lVar17 + -0xc;
              *(undefined2 *)(lVar11 + 10 + param_11) = *(undefined2 *)(lVar12 + lVar14);
              lVar11 = lVar11 + 0xc;
            } while (uVar15 < uStack_148 / 6);
            lVar14 = uVar13 + 2 + uVar15;
            lStack_130 = param_1;
          }
          lVar11 = lStack_130;
          if (lVar14 - 1U < uStack_148 / 3) {
            lVar14 = lVar14 * 3 + -3;
            lVar21 = lVar21 - lVar14;
            *(undefined2 *)(param_11 + lVar14 * 2) = *(undefined2 *)(param_11 + -6 + lVar21 * 2);
            *(undefined2 *)(param_11 + 2 + lVar14 * 2) = *(undefined2 *)(param_11 + -4 + lVar21 * 2)
            ;
            *(undefined2 *)(param_11 + 4 + lVar14 * 2) = *(undefined2 *)(param_11 + -2 + lVar21 * 2)
            ;
          }
        }
      }
      else if ((uVar24 == 6) && (0 < lStack_118)) {
        uStack_148 = lStack_118 + 2;
        if (6 < (longlong)uStack_148 / 3) {
          lVar21 = ((longlong)uStack_148 / 3) * 6;
          lVar14 = (longlong)puVar27 + (2 - param_11);
          if (((lVar21 <= lVar14) || (3 < -lVar14)) &&
             ((1 < param_11 - (longlong)puVar27 || (lVar21 <= -(param_11 - (longlong)puVar27))))) {
            uVar23 = puVar27[1];
            lVar21 = 1;
            uVar28 = puVar27[2];
            lStack_130 = CONCAT44(lStack_130._4_4_,(uint)uVar28);
            uVar30 = *puVar27;
            puStack_140 = (ushort *)CONCAT44(puStack_140._4_4_,(uint)uVar30);
            lVar14 = 0;
            uVar15 = 0;
            if (uStack_148 / 6 != 0) {
              do {
                uVar13 = uVar15;
                uVar15 = uVar13 + 1;
                *(ushort *)(lVar14 + param_11) = uVar30;
                *(ushort *)(lVar14 + 2 + param_11) = uVar23;
                *(ushort *)(lVar14 + 4 + param_11) = uVar28;
                *(ushort *)(lVar14 + 6 + param_11) = uVar30;
                *(ushort *)(lVar14 + 8 + param_11) = uVar23;
                *(ushort *)(lVar14 + 10 + param_11) = uVar28;
                lVar14 = lVar14 + 0xc;
              } while (uVar15 < uStack_148 / 6);
              lVar21 = uVar13 + 2 + uVar15;
            }
            puVar8 = puStack_140;
            lVar11 = lStack_130;
            if (lVar21 - 1U < uStack_148 / 3) {
              lVar21 = lVar21 * 3 + -3;
              *(ushort *)(param_11 + lVar21 * 2) = uVar30;
              *(ushort *)(param_11 + 2 + lVar21 * 2) = uVar23;
              *(ushort *)(param_11 + 4 + lVar21 * 2) = uVar28;
            }
            goto LAB_1405d741d;
          }
        }
        lVar21 = 1;
        uVar15 = 0;
        if (uStack_148 / 6 != 0) {
          do {
            uVar13 = uVar15;
            *(ushort *)(param_11 + uVar13 * 0xc) = *puVar27;
            uVar15 = uVar13 + 1;
            *(ushort *)(param_11 + 2 + uVar13 * 0xc) = puVar27[1];
            *(ushort *)(param_11 + 4 + uVar13 * 0xc) = puVar27[2];
            *(ushort *)(param_11 + 6 + uVar13 * 0xc) = *puVar27;
            *(ushort *)(param_11 + 8 + uVar13 * 0xc) = puVar27[1];
            *(ushort *)(param_11 + 10 + uVar13 * 0xc) = puVar27[2];
          } while (uVar15 < uStack_148 / 6);
          lVar21 = uVar13 + 2 + uVar15;
        }
        if (lVar21 - 1U < uStack_148 / 3) {
          lVar21 = lVar21 * 3 + -3;
          *(ushort *)(param_11 + lVar21 * 2) = *puVar27;
          *(ushort *)(param_11 + 2 + lVar21 * 2) = puVar27[1];
          *(ushort *)(param_11 + 4 + lVar21 * 2) = puVar27[2];
        }
      }
LAB_1405d741d:
      lStack_130 = lVar11;
      puStack_140 = puVar8;
      pcStack_138 = *(code **)(&DAT_14308b2a0 + lStack_e8 * 8);
      iStack_158 = param_10;
      uStack_110 = param_7;
      lStack_108 = param_4;
      (*pcStack_138)(uStack_120,param_4,lVar29);
      lVar16 = lVar16 - lVar29;
      param_1 = param_1 + lStack_118 * 2;
      param_4 = lStack_108 + lStack_118 * 4;
      param_7 = uStack_110;
    }
    else {
      pcStack_138 = *(code **)(&DAT_14308b2a0 + lStack_e8 * 8);
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar29 < lVar16) {
        lVar16 = lVar16 - lVar29;
        iStack_158 = param_10;
        lStack_108 = param_4;
        (*pcStack_138)(param_1,param_4,lVar16);
        param_1 = param_1 + lVar16 * 6;
        param_4 = lStack_108 + lVar16 * 0xc;
      }
      lVar16 = uVar19 * 3;
      if (lVar16 != 3 && SCARRY8(lVar16,-3) == lVar16 + -3 < 0) {
        lVar21 = 1;
        uVar15 = ((lVar16 + -1) / 3) * 3;
        uVar13 = uVar15 >> 1;
        if (uVar13 != 0) {
          lVar21 = lVar29 * -6 + param_1;
          uVar10 = 0;
          do {
            uVar20 = uVar10;
            *(undefined2 *)(param_11 + uVar20 * 4) = *(undefined2 *)(lVar21 + uVar20 * 4);
            *(undefined2 *)(param_11 + 2 + uVar20 * 4) = *(undefined2 *)(lVar21 + 2 + uVar20 * 4);
            uVar10 = uVar20 + 1;
          } while (uVar10 < uVar13);
          lVar21 = uVar20 + 2 + uVar10;
        }
        if (lVar21 - 1U < uVar15) {
          *(undefined2 *)(param_11 + (lVar21 - 1U) * 2) =
               *(undefined2 *)(param_1 + (lVar29 * -3 + -1 + lVar21) * 2);
        }
      }
      lVar21 = lVar29 * 3;
      if (uVar24 == 1) {
        if (0 < lVar21) {
          puStack_140 = (ushort *)(lVar21 + 2);
          if ((longlong)puStack_140 / 3 < 7) {
            lVar21 = 1;
            if ((ulonglong)puStack_140 / 6 != 0) {
              lVar21 = param_11 + uVar19 * 6;
              uVar15 = 0;
              do {
                uVar13 = uVar15;
                *(undefined2 *)(lVar21 + -6 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -0xc);
                uVar15 = uVar13 + 1;
                *(undefined2 *)(lVar21 + -4 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -10);
                *(undefined2 *)(lVar21 + -2 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -8);
                *(undefined2 *)(lVar21 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -0xc);
                *(undefined2 *)(lVar21 + 2 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -10);
                *(undefined2 *)(lVar21 + 4 + uVar13 * 0xc) = *(undefined2 *)(lVar21 + -8);
              } while (uVar15 < (ulonglong)puStack_140 / 6);
              lVar21 = uVar13 + 2 + uVar15;
            }
            if (lVar21 - 1U < (ulonglong)puStack_140 / 3) {
              lVar16 = lVar21 * 3 + -3 + lVar16;
              *(undefined2 *)(param_11 + -6 + lVar16 * 2) =
                   *(undefined2 *)(param_11 + -0xc + uVar19 * 6);
              *(undefined2 *)(param_11 + -4 + lVar16 * 2) =
                   *(undefined2 *)(param_11 + -10 + uVar19 * 6);
              *(undefined2 *)(param_11 + -2 + lVar16 * 2) =
                   *(undefined2 *)(param_11 + -8 + uVar19 * 6);
            }
          }
          else {
            uStack_148 = param_11 + uVar19 * 6;
            lVar14 = 0;
            uVar4 = *(undefined2 *)(uStack_148 - 0xc);
            uVar5 = *(undefined2 *)(uStack_148 - 10);
            uVar6 = *(undefined2 *)(uStack_148 - 8);
            lVar21 = 1;
            uVar19 = 0;
            if ((ulonglong)puStack_140 / 6 != 0) {
              do {
                uVar15 = uVar19;
                uVar19 = uVar15 + 1;
                *(undefined2 *)(lVar14 + -6 + uStack_148) = uVar4;
                *(undefined2 *)(lVar14 + -4 + uStack_148) = uVar5;
                *(undefined2 *)(lVar14 + -2 + uStack_148) = uVar6;
                *(undefined2 *)(lVar14 + uStack_148) = uVar4;
                *(undefined2 *)(lVar14 + 2 + uStack_148) = uVar5;
                *(undefined2 *)(lVar14 + 4 + uStack_148) = uVar6;
                lVar14 = lVar14 + 0xc;
              } while (uVar19 < (ulonglong)puStack_140 / 6);
              lVar21 = uVar15 + 2 + uVar19;
            }
            if (lVar21 - 1U < (ulonglong)puStack_140 / 3) {
              lVar16 = lVar16 + lVar21 * 3 + -3;
              *(undefined2 *)(param_11 + -6 + lVar16 * 2) = uVar4;
              *(undefined2 *)(param_11 + -4 + lVar16 * 2) = uVar5;
              *(undefined2 *)(param_11 + -2 + lVar16 * 2) = uVar6;
            }
          }
        }
      }
      else if (uVar24 == 3) {
        if (0 < lVar21) {
          uVar15 = (lVar21 + 2U) / 6;
          lVar11 = 0;
          lVar14 = 1;
          lVar17 = 0;
          if (uVar15 != 0) {
            lVar14 = param_11 + uVar19 * 6;
            uVar19 = 0;
            do {
              uVar13 = uVar19;
              uVar19 = uVar13 + 1;
              *(undefined2 *)(lVar11 + -6 + lVar14) = *(undefined2 *)(lVar17 + -0x12 + lVar14);
              *(undefined2 *)(lVar11 + -4 + lVar14) = *(undefined2 *)(lVar17 + -0x10 + lVar14);
              *(undefined2 *)(lVar11 + -2 + lVar14) = *(undefined2 *)(lVar17 + -0xe + lVar14);
              *(undefined2 *)(lVar11 + lVar14) = *(undefined2 *)(lVar17 + -0x18 + lVar14);
              *(undefined2 *)(lVar11 + 2 + lVar14) = *(undefined2 *)(lVar17 + -0x16 + lVar14);
              lVar12 = lVar17 + -0x14;
              lVar17 = lVar17 + -0xc;
              *(undefined2 *)(lVar11 + 4 + lVar14) = *(undefined2 *)(lVar12 + lVar14);
              lVar11 = lVar11 + 0xc;
            } while (uVar19 < uVar15);
            lVar14 = uVar13 + 2 + uVar19;
          }
          if (lVar14 - 1U < (lVar21 + 2U) / 3) {
            lVar14 = lVar14 * 3 + -3;
            lVar21 = lVar16 + lVar14;
            lVar16 = lVar16 - lVar14;
            *(undefined2 *)(param_11 + -6 + lVar21 * 2) =
                 *(undefined2 *)(param_11 + -0x12 + lVar16 * 2);
            *(undefined2 *)(param_11 + -4 + lVar21 * 2) =
                 *(undefined2 *)(param_11 + -0x10 + lVar16 * 2);
            *(undefined2 *)(param_11 + -2 + lVar21 * 2) =
                 *(undefined2 *)(param_11 + -0xe + lVar16 * 2);
          }
        }
      }
      else if ((uVar24 == 6) && (0 < lVar21)) {
        puStack_140 = (ushort *)(lVar21 + 2);
        if (6 < (longlong)puStack_140 / 3) {
          uStack_148 = param_11 + uVar19 * 6;
          lVar21 = ((longlong)puStack_140 / 3) * 6;
          lVar14 = (longlong)puVar27 + (2 - (uStack_148 - 6));
          if (((lVar21 <= lVar14) || (3 < -lVar14)) &&
             ((lVar14 = (uStack_148 - 6) - (longlong)puVar27, 1 < lVar14 || (lVar21 <= -lVar14)))) {
            uVar23 = *puVar27;
            uVar28 = puVar27[1];
            lVar21 = 1;
            uVar30 = puVar27[2];
            lVar14 = 0;
            uVar19 = 0;
            if ((ulonglong)puStack_140 / 6 != 0) {
              do {
                uVar15 = uVar19;
                uVar19 = uVar15 + 1;
                *(ushort *)(lVar14 + -6 + uStack_148) = uVar23;
                *(ushort *)(lVar14 + -4 + uStack_148) = uVar28;
                *(ushort *)(lVar14 + -2 + uStack_148) = uVar30;
                *(ushort *)(lVar14 + uStack_148) = uVar23;
                *(ushort *)(lVar14 + 2 + uStack_148) = uVar28;
                *(ushort *)(lVar14 + 4 + uStack_148) = uVar30;
                lVar14 = lVar14 + 0xc;
              } while (uVar19 < (ulonglong)puStack_140 / 6);
              lVar21 = uVar15 + 2 + uVar19;
            }
            if (lVar21 - 1U < (ulonglong)puStack_140 / 3) {
              lVar16 = lVar16 + lVar21 * 3 + -3;
              *(ushort *)(param_11 + -6 + lVar16 * 2) = uVar23;
              *(ushort *)(param_11 + -4 + lVar16 * 2) = uVar28;
              *(ushort *)(param_11 + -2 + lVar16 * 2) = uVar30;
            }
            goto LAB_1405d7a2c;
          }
        }
        lVar21 = 1;
        if ((ulonglong)puStack_140 / 6 != 0) {
          lVar21 = param_11 + uVar19 * 6;
          uVar19 = 0;
          do {
            uVar15 = uVar19;
            *(ushort *)(lVar21 + -6 + uVar15 * 0xc) = *puVar27;
            uVar19 = uVar15 + 1;
            *(ushort *)(lVar21 + -4 + uVar15 * 0xc) = puVar27[1];
            *(ushort *)(lVar21 + -2 + uVar15 * 0xc) = puVar27[2];
            *(ushort *)(lVar21 + uVar15 * 0xc) = *puVar27;
            *(ushort *)(lVar21 + 2 + uVar15 * 0xc) = puVar27[1];
            *(ushort *)(lVar21 + 4 + uVar15 * 0xc) = puVar27[2];
          } while (uVar19 < (ulonglong)puStack_140 / 6);
          lVar21 = uVar15 + 2 + uVar19;
        }
        if (lVar21 - 1U < (ulonglong)puStack_140 / 3) {
          lVar16 = lVar16 + lVar21 * 3 + -3;
          *(ushort *)(param_11 + -6 + lVar16 * 2) = *puVar27;
          *(ushort *)(param_11 + -4 + lVar16 * 2) = puVar27[1];
          *(ushort *)(param_11 + -2 + lVar16 * 2) = puVar27[2];
        }
      }
LAB_1405d7a2c:
      iStack_158 = param_10;
      (*pcStack_138)(param_11 + lVar29 * 6,param_4,lVar29,uStack_f0);
    }
    else {
      iStack_158 = param_10;
      (*pcStack_138)(param_1,param_4,lVar16,uStack_f0);
    }
  }
  if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
    return;
  }
LAB_1405d7cac:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

