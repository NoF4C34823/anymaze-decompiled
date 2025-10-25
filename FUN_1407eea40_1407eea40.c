
/* WARNING: Removing unreachable block (ram,0x0001407efb71) */

void FUN_1407eea40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,ushort *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ushort uVar27;
  longlong lVar28;
  ushort uVar29;
  ulonglong uVar30;
  undefined1 auStack_178 [32];
  int iStack_158;
  code *pcStack_148;
  ushort *puStack_140;
  undefined4 uStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  uint uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  int iStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  ushort auStack_d8 [64];
  undefined4 uStack_58;
  undefined2 uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_178;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_54 = 0;
  lStack_e0 = (longlong)param_6;
  uStack_e8 = param_9;
  uVar25 = param_7 & 0xf;
  lVar28 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308c5a0)[lStack_e0])(param_1,param_4,*param_5,param_9);
    if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
      return;
    }
    goto LAB_1407f00ee;
  }
  lVar18 = (longlong)param_10;
  lVar17 = *param_5;
  puVar19 = (ushort *)&uStack_58;
  if (uVar25 == 6) {
    puVar19 = param_8;
  }
  if (lVar17 < lVar18 + -1) {
    lVar18 = -lVar28;
    lVar22 = 0;
    if (lVar18 < lVar28 + lVar17) {
      uVar9 = param_7 & 0x80;
      iStack_f0 = param_10;
      uVar21 = param_7 & 0x40;
      do {
        lVar13 = lVar18;
        if (((lVar18 < 0) || (lVar17 <= lVar18)) && (param_7 != 0xf0)) {
          if (uVar25 != 6) {
            if (uVar25 == 1) {
              if (lVar18 < 0) {
                lVar13 = 0;
                if (uVar21 != 0) {
                  lVar13 = lVar18;
                }
              }
              else if (uVar9 == 0) {
                lVar13 = lVar17 + -1;
              }
            }
            else if (uVar25 == 3) {
              if (lVar17 < 2) {
                if (lVar18 < 0) {
                  if (uVar21 == 0) {
                    lVar13 = -lVar18;
                    if (uVar9 == 0) {
                      lVar13 = 0;
                    }
                  }
                }
                else if (((0 < lVar18) && (uVar9 == 0)) && (lVar13 = -lVar18, uVar21 == 0)) {
                  lVar13 = 0;
                }
              }
              else if ((lVar18 < 0) || (lVar17 <= lVar18)) {
                if (lVar18 < 0) goto LAB_1407f00c0;
                while (uVar9 == 0) {
                  for (lVar13 = (lVar17 + -1) * 2 - lVar13; lVar13 < 0; lVar13 = -lVar13) {
LAB_1407f00c0:
                    if (uVar21 != 0) goto LAB_1407eff6f;
                  }
                  if (lVar13 < lVar17) break;
                }
              }
            }
            goto LAB_1407eff6f;
          }
          uVar8 = uVar21;
          if (-1 < lVar18) {
            uVar8 = uVar9;
          }
          if (uVar8 != 0) goto LAB_1407eff6f;
          uVar15 = *puVar19;
          uVar27 = puVar19[1];
          uVar29 = puVar19[2];
        }
        else {
LAB_1407eff6f:
          uVar15 = *(ushort *)(param_1 + lVar13 * 6);
          uVar27 = *(ushort *)(param_1 + 2 + lVar13 * 6);
          uVar29 = *(ushort *)(param_1 + 4 + lVar13 * 6);
        }
        lVar18 = lVar18 + 1;
        *(ushort *)(lVar22 + param_11) = uVar15;
        *(ushort *)(lVar22 + 2 + param_11) = uVar27;
        *(ushort *)(lVar22 + 4 + param_11) = uVar29;
        lVar22 = lVar22 + 6;
        lStack_100 = param_4;
        lStack_f8 = lVar28;
      } while (lVar18 < lVar28 + lVar17);
    }
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308c5a0)[lStack_e0])(param_11 + lVar28 * 6,param_4,lVar17,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar22 = lVar18 * 3;
      lStack_118 = lVar28 * 3;
      lStack_128 = lVar28 * 6;
      uStack_120 = param_11 + lVar28 * 6;
      uVar14 = lVar22 - 3;
      if (uVar14 != 0 && SCARRY8(lVar22,-3) == (longlong)uVar14 < 0) {
        if (6 < (longlong)uVar14) {
          lVar13 = lVar18 * 6 + -6;
          if ((lVar13 <= (longlong)(uStack_120 - param_1)) ||
             (lVar13 <= (longlong)-(uStack_120 - param_1))) {
            if ((longlong)uVar14 < 8) {
LAB_1407f0042:
              uVar10 = 0;
            }
            else {
              uVar12 = uStack_120 & 0xf;
              if (uVar12 != 0) {
                if ((uStack_120 & 1) != 0) goto LAB_1407f0042;
                uVar12 = 0x10 - uVar12 >> 1;
              }
              if ((longlong)uVar14 < (longlong)(uVar12 + 8)) goto LAB_1407f0042;
              uVar20 = 0;
              uVar10 = uVar14 - (uVar14 - uVar12 & 7);
              if (uVar12 != 0) {
                do {
                  *(undefined2 *)(uStack_120 + uVar20 * 2) = *(undefined2 *)(param_1 + uVar20 * 2);
                  uVar20 = uVar20 + 1;
                  lStack_100 = param_4;
                } while (uVar20 < uVar12);
              }
              do {
                puVar1 = (undefined8 *)(param_1 + uVar12 * 2);
                uVar7 = puVar1[1];
                puVar2 = (undefined8 *)(uStack_120 + uVar12 * 2);
                *puVar2 = *puVar1;
                puVar2[1] = uVar7;
                uVar12 = uVar12 + 8;
              } while (uVar12 < uVar10);
            }
            for (; uVar10 < uVar14; uVar10 = uVar10 + 1) {
              *(undefined2 *)(uStack_120 + uVar10 * 2) = *(undefined2 *)(param_1 + uVar10 * 2);
            }
            goto LAB_1407eece3;
          }
        }
        lVar13 = 1;
        uVar10 = (longlong)(param_10 * 3) - 3;
        uVar12 = uVar10 >> 1;
        uVar14 = 0;
        if (uVar12 != 0) {
          do {
            uVar20 = uVar14;
            *(undefined2 *)(uStack_120 + uVar20 * 4) = *(undefined2 *)(param_1 + uVar20 * 4);
            *(undefined2 *)(uStack_120 + 2 + uVar20 * 4) = *(undefined2 *)(param_1 + 2 + uVar20 * 4)
            ;
            uVar14 = uVar20 + 1;
          } while (uVar14 < uVar12);
          lVar13 = uVar20 + 2 + uVar14;
          lStack_100 = param_4;
        }
        if (lVar13 - 1U < uVar10) {
          *(undefined2 *)(param_11 + (lStack_118 + -1 + lVar13) * 2) =
               *(undefined2 *)(param_1 + (lVar13 - 1U) * 2);
        }
      }
LAB_1407eece3:
      if (uVar25 == 1) {
        if (0 < lStack_118) {
          uVar14 = (lStack_118 + 2) / 3;
          if (((longlong)uVar14 < 7) ||
             (((longlong)(param_11 - uStack_120) < 6 &&
              ((longlong)-(param_11 - uStack_120) < (longlong)(uVar14 * 6))))) {
            uVar10 = 0;
            lVar11 = 0;
            uVar12 = 0;
            lVar13 = 0;
            iStack_f0 = param_10;
            lVar22 = lVar13;
            do {
              uVar15 = *(ushort *)(lStack_128 + param_11);
              uVar20 = lVar11 + 0x40U;
              if ((longlong)uVar14 <= (longlong)(lVar11 + 0x40U)) {
                uVar20 = uVar14;
              }
              uVar26 = uVar20 - lVar11;
              uVar30 = uVar12;
              if (7 < (longlong)uVar26) {
                auVar4 = vpunpcklwd_avx(ZEXT216(uVar15),ZEXT216(uVar15));
                uVar30 = uVar26 & 0xfffffffffffffff8;
                auVar4 = vpunpckldq_avx(auVar4,auVar4);
                auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
                uVar24 = uVar12;
                do {
                  iVar23 = (int)uVar24;
                  uVar24 = uVar24 + 8;
                  *(undefined1 (*) [16])(auStack_d8 + iVar23) = auVar4;
                } while (uVar24 < uVar30);
              }
              for (; uVar30 < uVar26; uVar30 = uVar30 + 1) {
                auStack_d8[(int)uVar30] = uVar15;
              }
              uStack_130 = param_11;
              lVar16 = param_11 + lVar13;
              uVar30 = uVar12;
              uVar26 = uVar12;
              do {
                iVar23 = (int)uVar26;
                uVar26 = uVar26 + 1;
                *(ushort *)(uVar30 + lVar16) = auStack_d8[iVar23];
                *(undefined2 *)(uVar30 + 2 + lVar16) = *(undefined2 *)(uStack_120 + 2);
                *(undefined2 *)(uVar30 + 4 + lVar16) = *(undefined2 *)(uStack_120 + 4);
                uVar30 = uVar30 + 6;
              } while (uVar26 < uVar20 + lVar22);
              uVar10 = uVar10 + 1;
              lVar11 = lVar11 + 0x40;
              lVar13 = lVar13 + 0x180;
              lVar22 = lVar22 + -0x40;
            } while (uVar10 < uVar14 + 0x3f >> 6);
            uStack_138 = 1;
            puStack_140 = puVar19;
            lStack_100 = param_4;
            lStack_f8 = lVar28;
          }
          else {
            uVar15 = *(ushort *)(lStack_128 + param_11);
            uVar27 = *(ushort *)(uStack_120 + 2);
            uVar29 = *(ushort *)(uStack_120 + 4);
            if ((longlong)uVar14 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar15),ZEXT216(uVar15));
              uVar10 = 0;
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar6 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar27),ZEXT216(uVar27));
              auVar5 = vpunpcklwd_avx(ZEXT216(uVar29),ZEXT216(uVar29));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar5 = vpunpckldq_avx(auVar5,auVar5);
              uVar12 = uVar14 & 0xfffffffffffffff0;
              auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
              do {
                uVar10 = uVar10 + 0x10;
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                lStack_100 = param_4;
              } while (uVar10 < uVar12);
            }
            lVar22 = uVar12 * 6;
            for (; uStack_130 = uVar14, uVar12 < uVar14; uVar12 = uVar12 + 1) {
              *(ushort *)(lVar22 + param_11) = uVar15;
              *(ushort *)(lVar22 + 2 + param_11) = uVar27;
              *(ushort *)(lVar22 + 4 + param_11) = uVar29;
              lVar22 = lVar22 + 6;
              lStack_100 = param_4;
            }
          }
        }
      }
      else if (uVar25 == 3) {
        if (0 < lStack_118) {
          lVar13 = 1;
          lVar11 = 0;
          uVar14 = (lStack_118 + 2U) / 6;
          if (uVar14 != 0) {
            lVar13 = param_11 + lVar18 * 6;
            lVar16 = lVar11;
            uVar12 = 0;
            do {
              uVar10 = uVar12;
              uVar12 = uVar10 + 1;
              *(undefined2 *)(lVar11 + param_11) = *(undefined2 *)(lVar16 + -6 + lVar13);
              *(undefined2 *)(lVar11 + 2 + param_11) = *(undefined2 *)(lVar16 + -4 + lVar13);
              *(undefined2 *)(lVar11 + 4 + param_11) = *(undefined2 *)(lVar16 + -2 + lVar13);
              *(undefined2 *)(lVar11 + 6 + param_11) = *(undefined2 *)(lVar16 + -0xc + lVar13);
              *(undefined2 *)(lVar11 + 8 + param_11) = *(undefined2 *)(lVar16 + -10 + lVar13);
              lVar3 = lVar16 + -8;
              lVar16 = lVar16 + -0xc;
              *(undefined2 *)(lVar11 + 10 + param_11) = *(undefined2 *)(lVar3 + lVar13);
              lVar11 = lVar11 + 0xc;
            } while (uVar12 < uVar14);
            lVar13 = uVar10 + 2 + uVar12;
            lStack_100 = param_4;
          }
          if (lVar13 - 1U < (lStack_118 + 2U) / 3) {
            lVar13 = lVar13 * 3 + -3;
            lVar22 = lVar22 - lVar13;
            *(undefined2 *)(param_11 + lVar13 * 2) = *(undefined2 *)((param_11 - 6) + lVar22 * 2);
            *(undefined2 *)(param_11 + 2 + lVar13 * 2) =
                 *(undefined2 *)((param_11 - 4) + lVar22 * 2);
            *(undefined2 *)(param_11 + 4 + lVar13 * 2) =
                 *(undefined2 *)((param_11 - 2) + lVar22 * 2);
          }
        }
      }
      else if ((uVar25 == 6) && (0 < lStack_118)) {
        puStack_140 = (ushort *)(lStack_118 + 2);
        uVar14 = (longlong)puStack_140 / 3;
        if (6 < (longlong)uVar14) {
          lVar22 = (longlong)puVar19 + (2 - param_11);
          if ((((longlong)(uVar14 * 6) <= lVar22) || (3 < -lVar22)) &&
             ((1 < (longlong)(param_11 - (longlong)puVar19) ||
              ((longlong)(uVar14 * 6) <= (longlong)-(param_11 - (longlong)puVar19))))) {
            uVar15 = *puVar19;
            uVar27 = puVar19[1];
            uVar29 = puVar19[2];
            if ((longlong)uVar14 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar15),ZEXT216(uVar15));
              uVar10 = 0;
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar6 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar27),ZEXT216(uVar27));
              auVar5 = vpunpcklwd_avx(ZEXT216(uVar29),ZEXT216(uVar29));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar5 = vpunpckldq_avx(auVar5,auVar5);
              uVar12 = uVar14 & 0xfffffffffffffff0;
              auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
              do {
                uVar10 = uVar10 + 0x10;
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                lStack_100 = param_4;
              } while (uVar10 < uVar12);
            }
            lVar22 = uVar12 * 6;
            for (; uVar12 < uVar14; uVar12 = uVar12 + 1) {
              *(ushort *)(lVar22 + param_11) = uVar15;
              *(ushort *)(lVar22 + 2 + param_11) = uVar27;
              *(ushort *)(lVar22 + 4 + param_11) = uVar29;
              lVar22 = lVar22 + 6;
              lStack_100 = param_4;
            }
            goto LAB_1407ef5a1;
          }
        }
        lVar22 = 1;
        uVar14 = 0;
        if ((ulonglong)puStack_140 / 6 != 0) {
          do {
            uVar12 = uVar14;
            *(ushort *)(param_11 + uVar12 * 0xc) = *puVar19;
            uVar14 = uVar12 + 1;
            *(ushort *)(param_11 + 2 + uVar12 * 0xc) = puVar19[1];
            *(ushort *)(param_11 + 4 + uVar12 * 0xc) = puVar19[2];
            *(ushort *)(param_11 + 6 + uVar12 * 0xc) = *puVar19;
            *(ushort *)(param_11 + 8 + uVar12 * 0xc) = puVar19[1];
            *(ushort *)(param_11 + 10 + uVar12 * 0xc) = puVar19[2];
          } while (uVar14 < (ulonglong)puStack_140 / 6);
          lVar22 = uVar12 + 2 + uVar14;
        }
        if (lVar22 - 1U < (ulonglong)puStack_140 / 3) {
          lVar22 = lVar22 * 3 + -3;
          *(ushort *)(param_11 + lVar22 * 2) = *puVar19;
          *(ushort *)(param_11 + 2 + lVar22 * 2) = puVar19[1];
          *(ushort *)(param_11 + 4 + lVar22 * 2) = puVar19[2];
        }
      }
LAB_1407ef5a1:
      pcStack_148 = (code *)(&PTR_FUN_14308c5a0)[lStack_e0];
      iStack_158 = param_10;
      uStack_110 = param_7;
      lStack_108 = param_1;
      (*pcStack_148)(uStack_120,param_4,lVar28,param_9);
      lVar17 = lVar17 - lVar28;
      param_1 = lStack_108 + lStack_118 * 2;
      param_4 = param_4 + lStack_118 * 4;
      param_7 = uStack_110;
    }
    else {
      pcStack_148 = (code *)(&PTR_FUN_14308c5a0)[lStack_e0];
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar28 < lVar17) {
        lVar17 = lVar17 - lVar28;
        iStack_158 = param_10;
        lStack_108 = param_1;
        (*pcStack_148)(param_1,param_4,lVar17,uStack_e8);
        param_1 = lStack_108 + lVar17 * 6;
        param_4 = param_4 + lVar17 * 0xc;
      }
      lVar17 = lVar18 * 3;
      if (lVar17 != 3 && SCARRY8(lVar17,-3) == lVar17 + -3 < 0) {
        lVar22 = 1;
        uVar14 = ((lVar17 + -1) / 3) * 3;
        uVar12 = uVar14 >> 1;
        if (uVar12 != 0) {
          lVar22 = lVar28 * -6 + param_1;
          uVar10 = 0;
          do {
            uVar20 = uVar10;
            *(undefined2 *)(param_11 + uVar20 * 4) = *(undefined2 *)(lVar22 + uVar20 * 4);
            *(undefined2 *)(param_11 + 2 + uVar20 * 4) = *(undefined2 *)(lVar22 + 2 + uVar20 * 4);
            uVar10 = uVar20 + 1;
          } while (uVar10 < uVar12);
          lVar22 = uVar20 + 2 + uVar10;
        }
        if (lVar22 - 1U < uVar14) {
          *(undefined2 *)(param_11 + (lVar22 - 1U) * 2) =
               *(undefined2 *)(param_1 + (lVar28 * -3 + -1 + lVar22) * 2);
        }
      }
      lVar22 = lVar28 * 3;
      if (uVar25 == 1) {
        if (0 < lVar22) {
          uVar14 = lVar22 + 2;
          uVar12 = (longlong)uVar14 / 3;
          if ((longlong)uVar12 < 7) {
            lVar22 = 1;
            if (uVar14 / 6 != 0) {
              lVar22 = param_11 + lVar18 * 6;
              uVar12 = 0;
              do {
                uVar10 = uVar12;
                *(undefined2 *)(lVar22 + -6 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -0xc);
                uVar12 = uVar10 + 1;
                *(undefined2 *)(lVar22 + -4 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -10);
                *(undefined2 *)(lVar22 + -2 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -8);
                *(undefined2 *)(lVar22 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -0xc);
                *(undefined2 *)(lVar22 + 2 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -10);
                *(undefined2 *)(lVar22 + 4 + uVar10 * 0xc) = *(undefined2 *)(lVar22 + -8);
              } while (uVar12 < uVar14 / 6);
              lVar22 = uVar10 + 2 + uVar12;
            }
            if (lVar22 - 1U < uVar14 / 3) {
              lVar17 = lVar22 * 3 + -3 + lVar17;
              *(undefined2 *)((param_11 - 6) + lVar17 * 2) =
                   *(undefined2 *)((param_11 - 0xc) + lVar18 * 6);
              *(undefined2 *)((param_11 - 4) + lVar17 * 2) =
                   *(undefined2 *)((param_11 - 10) + lVar18 * 6);
              *(undefined2 *)((param_11 - 2) + lVar17 * 2) =
                   *(undefined2 *)((param_11 - 8) + lVar18 * 6);
            }
          }
          else {
            lVar17 = param_11 + lVar18 * 6;
            uVar15 = *(ushort *)(lVar17 + -0xc);
            uVar27 = *(ushort *)(lVar17 + -10);
            uVar29 = *(ushort *)(lVar17 + -8);
            if ((longlong)uVar12 < 0x10) {
              uVar14 = 0;
            }
            else {
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar15),ZEXT216(uVar15));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              uVar14 = uVar12 & 0xfffffffffffffff0;
              auVar6 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar27),ZEXT216(uVar27));
              uVar10 = 0;
              auVar5 = vpunpcklwd_avx(ZEXT216(uVar29),ZEXT216(uVar29));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar5 = vpunpckldq_avx(auVar5,auVar5);
              auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
              do {
                uVar10 = uVar10 + 0x10;
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
              } while (uVar10 < uVar14);
            }
            lVar18 = uVar14 * 6;
            for (; uVar14 < uVar12; uVar14 = uVar14 + 1) {
              *(ushort *)(lVar18 + -6 + lVar17) = uVar15;
              *(ushort *)(lVar18 + -4 + lVar17) = uVar27;
              *(ushort *)(lVar18 + -2 + lVar17) = uVar29;
              lVar18 = lVar18 + 6;
            }
          }
        }
      }
      else if (uVar25 == 3) {
        if (0 < lVar22) {
          lVar11 = 0;
          lVar13 = 1;
          lVar16 = 0;
          uVar14 = (lVar22 + 2U) / 6;
          if (uVar14 != 0) {
            lVar18 = param_11 + lVar18 * 6;
            uVar12 = 0;
            do {
              uVar10 = uVar12;
              uVar12 = uVar10 + 1;
              *(undefined2 *)(lVar11 + -6 + lVar18) = *(undefined2 *)(lVar16 + -0x12 + lVar18);
              *(undefined2 *)(lVar11 + -4 + lVar18) = *(undefined2 *)(lVar16 + -0x10 + lVar18);
              *(undefined2 *)(lVar11 + -2 + lVar18) = *(undefined2 *)(lVar16 + -0xe + lVar18);
              *(undefined2 *)(lVar11 + lVar18) = *(undefined2 *)(lVar16 + -0x18 + lVar18);
              *(undefined2 *)(lVar11 + 2 + lVar18) = *(undefined2 *)(lVar16 + -0x16 + lVar18);
              lVar13 = lVar16 + -0x14;
              lVar16 = lVar16 + -0xc;
              *(undefined2 *)(lVar11 + 4 + lVar18) = *(undefined2 *)(lVar13 + lVar18);
              lVar11 = lVar11 + 0xc;
            } while (uVar12 < uVar14);
            lVar13 = uVar10 + 2 + uVar12;
          }
          if (lVar13 - 1U < (lVar22 + 2U) / 3) {
            lVar22 = lVar13 * 3 + -3;
            lVar18 = lVar17 + lVar22;
            lVar17 = lVar17 - lVar22;
            *(undefined2 *)((param_11 - 6) + lVar18 * 2) =
                 *(undefined2 *)((param_11 - 0x12) + lVar17 * 2);
            *(undefined2 *)((param_11 - 4) + lVar18 * 2) =
                 *(undefined2 *)((param_11 - 0x10) + lVar17 * 2);
            *(undefined2 *)((param_11 - 2) + lVar18 * 2) =
                 *(undefined2 *)((param_11 - 0xe) + lVar17 * 2);
          }
        }
      }
      else if ((uVar25 == 6) && (0 < lVar22)) {
        uVar14 = lVar22 + 2;
        uVar12 = (longlong)uVar14 / 3;
        if (6 < (longlong)uVar12) {
          lVar22 = param_11 + lVar18 * 6;
          lVar13 = (longlong)puVar19 + (2 - (lVar22 + -6));
          if ((((longlong)(uVar12 * 6) <= lVar13) || (3 < -lVar13)) &&
             ((lVar13 = (lVar22 + -6) - (longlong)puVar19, 1 < lVar13 ||
              ((longlong)(uVar12 * 6) <= -lVar13)))) {
            uVar15 = *puVar19;
            uVar27 = puVar19[1];
            uVar29 = puVar19[2];
            if ((longlong)uVar12 < 0x10) {
              uVar14 = 0;
            }
            else {
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar15),ZEXT216(uVar15));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              uVar14 = uVar12 & 0xfffffffffffffff0;
              auVar6 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar4 = vpunpcklwd_avx(ZEXT216(uVar27),ZEXT216(uVar27));
              uVar10 = 0;
              auVar5 = vpunpcklwd_avx(ZEXT216(uVar29),ZEXT216(uVar29));
              auVar4 = vpunpckldq_avx(auVar4,auVar4);
              auVar5 = vpunpckldq_avx(auVar5,auVar5);
              auVar4 = vpunpcklqdq_avx(auVar4,auVar4);
              auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
              do {
                uVar10 = uVar10 + 0x10;
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar6,0);
                vpextrw_avx(auVar6,1);
                vpextrw_avx(auVar6,2);
                vpextrw_avx(auVar6,3);
                vpextrw_avx(auVar6,4);
                vpextrw_avx(auVar6,5);
                vpextrw_avx(auVar6,6);
                vpextrw_avx(auVar6,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
                vpextrw_avx(auVar5,0);
                vpextrw_avx(auVar5,1);
                vpextrw_avx(auVar5,2);
                vpextrw_avx(auVar5,3);
                vpextrw_avx(auVar5,4);
                vpextrw_avx(auVar5,5);
                vpextrw_avx(auVar5,6);
                vpextrw_avx(auVar5,7);
              } while (uVar10 < uVar14);
            }
            lVar17 = uVar14 * 6;
            for (; uVar14 < uVar12; uVar14 = uVar14 + 1) {
              *(ushort *)(lVar17 + -6 + lVar22) = uVar15;
              *(ushort *)(lVar17 + -4 + lVar22) = uVar27;
              *(ushort *)(lVar17 + -2 + lVar22) = uVar29;
              lVar17 = lVar17 + 6;
            }
            goto LAB_1407efe50;
          }
        }
        lVar22 = 1;
        if (uVar14 / 6 != 0) {
          lVar18 = param_11 + lVar18 * 6;
          uVar12 = 0;
          do {
            uVar10 = uVar12;
            *(ushort *)(lVar18 + -6 + uVar10 * 0xc) = *puVar19;
            uVar12 = uVar10 + 1;
            *(ushort *)(lVar18 + -4 + uVar10 * 0xc) = puVar19[1];
            *(ushort *)(lVar18 + -2 + uVar10 * 0xc) = puVar19[2];
            *(ushort *)(lVar18 + uVar10 * 0xc) = *puVar19;
            *(ushort *)(lVar18 + 2 + uVar10 * 0xc) = puVar19[1];
            *(ushort *)(lVar18 + 4 + uVar10 * 0xc) = puVar19[2];
          } while (uVar12 < uVar14 / 6);
          lVar22 = uVar10 + 2 + uVar12;
        }
        if (lVar22 - 1U < uVar14 / 3) {
          lVar17 = lVar17 + lVar22 * 3 + -3;
          *(ushort *)((param_11 - 6) + lVar17 * 2) = *puVar19;
          *(ushort *)((param_11 - 4) + lVar17 * 2) = puVar19[1];
          *(ushort *)((param_11 - 2) + lVar17 * 2) = puVar19[2];
        }
      }
LAB_1407efe50:
      iStack_158 = param_10;
      (*pcStack_148)(param_11 + lVar28 * 6,param_4,lVar28,uStack_e8);
    }
    else {
      iStack_158 = param_10;
      (*pcStack_148)(param_1,param_4,lVar17,uStack_e8);
    }
  }
  if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
    return;
  }
LAB_1407f00ee:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

