
/* WARNING: Removing unreachable block (ram,0x00014088f471) */

void FUN_14088e340(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,short *param_8,undefined8 param_9,
                  int param_10,ulonglong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  short sVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  short *psVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  short sVar25;
  longlong lVar26;
  short sVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_178 [32];
  int iStack_158;
  code *pcStack_148;
  short *psStack_140;
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
  short asStack_d8 [64];
  undefined4 uStack_58;
  undefined2 uStack_54;
  ulonglong uStack_50;
  
  uStack_50 = DAT_1436b4680 ^ (ulonglong)auStack_178;
  param_1 = param_1 + param_2 * param_3;
  uStack_58 = 0;
  uStack_54 = 0;
  lStack_e0 = (longlong)param_6;
  uStack_e8 = param_9;
  uVar23 = param_7 & 0xf;
  lVar26 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308cc60)[lStack_e0])(param_1,param_4,*param_5,param_9);
    if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
      return;
    }
    goto LAB_14088f9ee;
  }
  lVar16 = (longlong)param_10;
  lVar15 = *param_5;
  psVar17 = (short *)&uStack_58;
  if (uVar23 == 6) {
    psVar17 = param_8;
  }
  if (lVar15 < lVar16 + -1) {
    lVar16 = -lVar26;
    lVar20 = 0;
    if (lVar16 < lVar26 + lVar15) {
      uVar7 = param_7 & 0x80;
      iStack_f0 = param_10;
      uVar19 = param_7 & 0x40;
      do {
        lVar11 = lVar16;
        if (((lVar16 < 0) || (lVar15 <= lVar16)) && (param_7 != 0xf0)) {
          if (uVar23 != 6) {
            if (uVar23 == 1) {
              if (lVar16 < 0) {
                lVar11 = 0;
                if (uVar19 != 0) {
                  lVar11 = lVar16;
                }
              }
              else if (uVar7 == 0) {
                lVar11 = lVar15 + -1;
              }
            }
            else if (uVar23 == 3) {
              if (lVar15 < 2) {
                if (lVar16 < 0) {
                  if (uVar19 == 0) {
                    lVar11 = -lVar16;
                    if (uVar7 == 0) {
                      lVar11 = 0;
                    }
                  }
                }
                else if (((0 < lVar16) && (uVar7 == 0)) && (lVar11 = -lVar16, uVar19 == 0)) {
                  lVar11 = 0;
                }
              }
              else if ((lVar16 < 0) || (lVar15 <= lVar16)) {
                if (lVar16 < 0) goto LAB_14088f9c0;
                while (uVar7 == 0) {
                  for (lVar11 = (lVar15 + -1) * 2 - lVar11; lVar11 < 0; lVar11 = -lVar11) {
LAB_14088f9c0:
                    if (uVar19 != 0) goto LAB_14088f86f;
                  }
                  if (lVar11 < lVar15) break;
                }
              }
            }
            goto LAB_14088f86f;
          }
          uVar6 = uVar19;
          if (-1 < lVar16) {
            uVar6 = uVar7;
          }
          if (uVar6 != 0) goto LAB_14088f86f;
          sVar13 = *psVar17;
          sVar25 = psVar17[1];
          sVar27 = psVar17[2];
        }
        else {
LAB_14088f86f:
          sVar13 = *(short *)(param_1 + lVar11 * 6);
          sVar25 = *(short *)(param_1 + 2 + lVar11 * 6);
          sVar27 = *(short *)(param_1 + 4 + lVar11 * 6);
        }
        lVar16 = lVar16 + 1;
        *(short *)(lVar20 + param_11) = sVar13;
        *(short *)(lVar20 + 2 + param_11) = sVar25;
        *(short *)(lVar20 + 4 + param_11) = sVar27;
        lVar20 = lVar20 + 6;
        lStack_100 = param_4;
        lStack_f8 = lVar26;
      } while (lVar16 < lVar26 + lVar15);
    }
    iStack_158 = param_10;
    (*(code *)(&PTR_FUN_14308cc60)[lStack_e0])(param_11 + lVar26 * 6,param_4,lVar15,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar20 = lVar16 * 3;
      lStack_118 = lVar26 * 3;
      lStack_128 = lVar26 * 6;
      uStack_120 = param_11 + lVar26 * 6;
      uVar12 = lVar20 - 3;
      if (uVar12 != 0 && SCARRY8(lVar20,-3) == (longlong)uVar12 < 0) {
        if (6 < (longlong)uVar12) {
          lVar11 = lVar16 * 6 + -6;
          if ((lVar11 <= (longlong)(uStack_120 - param_1)) ||
             (lVar11 <= (longlong)-(uStack_120 - param_1))) {
            if ((longlong)uVar12 < 8) {
LAB_14088f942:
              uVar8 = 0;
            }
            else {
              uVar10 = uStack_120 & 0xf;
              if (uVar10 != 0) {
                if ((uStack_120 & 1) != 0) goto LAB_14088f942;
                uVar10 = 0x10 - uVar10 >> 1;
              }
              if ((longlong)uVar12 < (longlong)(uVar10 + 8)) goto LAB_14088f942;
              uVar18 = 0;
              uVar8 = uVar12 - (uVar12 - uVar10 & 7);
              if (uVar10 != 0) {
                do {
                  *(undefined2 *)(uStack_120 + uVar18 * 2) = *(undefined2 *)(param_1 + uVar18 * 2);
                  uVar18 = uVar18 + 1;
                  lStack_100 = param_4;
                } while (uVar18 < uVar10);
              }
              do {
                puVar1 = (undefined8 *)(param_1 + uVar10 * 2);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)(uStack_120 + uVar10 * 2);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                uVar10 = uVar10 + 8;
              } while (uVar10 < uVar8);
            }
            for (; uVar8 < uVar12; uVar8 = uVar8 + 1) {
              *(undefined2 *)(uStack_120 + uVar8 * 2) = *(undefined2 *)(param_1 + uVar8 * 2);
            }
            goto LAB_14088e5e3;
          }
        }
        lVar11 = 1;
        uVar8 = (longlong)(param_10 * 3) - 3;
        uVar10 = uVar8 >> 1;
        uVar12 = 0;
        if (uVar10 != 0) {
          do {
            uVar18 = uVar12;
            *(undefined2 *)(uStack_120 + uVar18 * 4) = *(undefined2 *)(param_1 + uVar18 * 4);
            *(undefined2 *)(uStack_120 + 2 + uVar18 * 4) = *(undefined2 *)(param_1 + 2 + uVar18 * 4)
            ;
            uVar12 = uVar18 + 1;
          } while (uVar12 < uVar10);
          lVar11 = uVar18 + 2 + uVar12;
          lStack_100 = param_4;
        }
        if (lVar11 - 1U < uVar8) {
          *(undefined2 *)(param_11 + (lStack_118 + -1 + lVar11) * 2) =
               *(undefined2 *)(param_1 + (lVar11 - 1U) * 2);
        }
      }
LAB_14088e5e3:
      if (uVar23 == 1) {
        if (0 < lStack_118) {
          uVar12 = (lStack_118 + 2) / 3;
          if (((longlong)uVar12 < 7) ||
             (((longlong)(param_11 - uStack_120) < 6 &&
              ((longlong)-(param_11 - uStack_120) < (longlong)(uVar12 * 6))))) {
            uVar8 = 0;
            lVar9 = 0;
            uVar10 = 0;
            lVar11 = 0;
            iStack_f0 = param_10;
            lVar20 = lVar11;
            do {
              sVar13 = *(short *)(lStack_128 + param_11);
              uVar18 = lVar9 + 0x40U;
              if ((longlong)uVar12 <= (longlong)(lVar9 + 0x40U)) {
                uVar18 = uVar12;
              }
              uVar24 = uVar18 - lVar9;
              uVar28 = uVar10;
              if (7 < (longlong)uVar24) {
                auVar29 = ZEXT416((uint)(int)sVar13);
                auVar29 = vpunpcklwd_avx(auVar29,auVar29);
                uVar28 = uVar24 & 0xfffffffffffffff8;
                auVar29 = vpunpckldq_avx(auVar29,auVar29);
                auVar29 = vpunpcklqdq_avx(auVar29,auVar29);
                uVar22 = uVar10;
                do {
                  iVar21 = (int)uVar22;
                  uVar22 = uVar22 + 8;
                  *(undefined1 (*) [16])(asStack_d8 + iVar21) = auVar29;
                } while (uVar22 < uVar28);
              }
              for (; uVar28 < uVar24; uVar28 = uVar28 + 1) {
                asStack_d8[(int)uVar28] = sVar13;
              }
              uStack_130 = param_11;
              lVar14 = param_11 + lVar11;
              uVar28 = uVar10;
              uVar24 = uVar10;
              do {
                iVar21 = (int)uVar24;
                uVar24 = uVar24 + 1;
                *(short *)(uVar28 + lVar14) = asStack_d8[iVar21];
                *(undefined2 *)(uVar28 + 2 + lVar14) = *(undefined2 *)(uStack_120 + 2);
                *(undefined2 *)(uVar28 + 4 + lVar14) = *(undefined2 *)(uStack_120 + 4);
                uVar28 = uVar28 + 6;
              } while (uVar24 < uVar18 + lVar20);
              uVar8 = uVar8 + 1;
              lVar9 = lVar9 + 0x40;
              lVar11 = lVar11 + 0x180;
              lVar20 = lVar20 + -0x40;
            } while (uVar8 < uVar12 + 0x3f >> 6);
            uStack_138 = 1;
            psStack_140 = psVar17;
            lStack_100 = param_4;
            lStack_f8 = lVar26;
          }
          else {
            sVar13 = *(short *)(lStack_128 + param_11);
            sVar25 = *(short *)(uStack_120 + 2);
            sVar27 = *(short *)(uStack_120 + 4);
            if ((longlong)uVar12 < 0x10) {
              uVar10 = 0;
            }
            else {
              auVar29 = ZEXT416((uint)(int)sVar13);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              uVar8 = 0;
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar4 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar29 = ZEXT416((uint)(int)sVar25);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              auVar30 = ZEXT416((uint)(int)sVar27);
              auVar30 = vpunpcklwd_avx(auVar30,auVar30);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar30 = vpunpckldq_avx(auVar30,auVar30);
              uVar10 = uVar12 & 0xfffffffffffffff0;
              auVar29 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar30 = vpunpcklqdq_avx(auVar30,auVar30);
              do {
                uVar8 = uVar8 + 0x10;
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
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                lStack_100 = param_4;
              } while (uVar8 < uVar10);
            }
            lVar20 = uVar10 * 6;
            for (; uStack_130 = uVar12, uVar10 < uVar12; uVar10 = uVar10 + 1) {
              *(short *)(lVar20 + param_11) = sVar13;
              *(short *)(lVar20 + 2 + param_11) = sVar25;
              *(short *)(lVar20 + 4 + param_11) = sVar27;
              lVar20 = lVar20 + 6;
              lStack_100 = param_4;
            }
          }
        }
      }
      else if (uVar23 == 3) {
        if (0 < lStack_118) {
          lVar11 = 1;
          lVar9 = 0;
          uVar12 = (lStack_118 + 2U) / 6;
          if (uVar12 != 0) {
            lVar11 = param_11 + lVar16 * 6;
            lVar14 = lVar9;
            uVar10 = 0;
            do {
              uVar8 = uVar10;
              uVar10 = uVar8 + 1;
              *(undefined2 *)(lVar9 + param_11) = *(undefined2 *)(lVar14 + -6 + lVar11);
              *(undefined2 *)(lVar9 + 2 + param_11) = *(undefined2 *)(lVar14 + -4 + lVar11);
              *(undefined2 *)(lVar9 + 4 + param_11) = *(undefined2 *)(lVar14 + -2 + lVar11);
              *(undefined2 *)(lVar9 + 6 + param_11) = *(undefined2 *)(lVar14 + -0xc + lVar11);
              *(undefined2 *)(lVar9 + 8 + param_11) = *(undefined2 *)(lVar14 + -10 + lVar11);
              lVar3 = lVar14 + -8;
              lVar14 = lVar14 + -0xc;
              *(undefined2 *)(lVar9 + 10 + param_11) = *(undefined2 *)(lVar3 + lVar11);
              lVar9 = lVar9 + 0xc;
            } while (uVar10 < uVar12);
            lVar11 = uVar8 + 2 + uVar10;
            lStack_100 = param_4;
          }
          if (lVar11 - 1U < (lStack_118 + 2U) / 3) {
            lVar11 = lVar11 * 3 + -3;
            lVar20 = lVar20 - lVar11;
            *(undefined2 *)(param_11 + lVar11 * 2) = *(undefined2 *)((param_11 - 6) + lVar20 * 2);
            *(undefined2 *)(param_11 + 2 + lVar11 * 2) =
                 *(undefined2 *)((param_11 - 4) + lVar20 * 2);
            *(undefined2 *)(param_11 + 4 + lVar11 * 2) =
                 *(undefined2 *)((param_11 - 2) + lVar20 * 2);
          }
        }
      }
      else if ((uVar23 == 6) && (0 < lStack_118)) {
        psStack_140 = (short *)(lStack_118 + 2);
        uVar12 = (longlong)psStack_140 / 3;
        if (6 < (longlong)uVar12) {
          lVar20 = (longlong)psVar17 + (2 - param_11);
          if ((((longlong)(uVar12 * 6) <= lVar20) || (3 < -lVar20)) &&
             ((1 < (longlong)(param_11 - (longlong)psVar17) ||
              ((longlong)(uVar12 * 6) <= (longlong)-(param_11 - (longlong)psVar17))))) {
            sVar13 = *psVar17;
            sVar25 = psVar17[1];
            sVar27 = psVar17[2];
            if ((longlong)uVar12 < 0x10) {
              uVar10 = 0;
            }
            else {
              auVar29 = ZEXT416((uint)(int)sVar13);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              uVar8 = 0;
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar4 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar29 = ZEXT416((uint)(int)sVar25);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              auVar30 = ZEXT416((uint)(int)sVar27);
              auVar30 = vpunpcklwd_avx(auVar30,auVar30);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar30 = vpunpckldq_avx(auVar30,auVar30);
              uVar10 = uVar12 & 0xfffffffffffffff0;
              auVar29 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar30 = vpunpcklqdq_avx(auVar30,auVar30);
              do {
                uVar8 = uVar8 + 0x10;
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                lStack_100 = param_4;
              } while (uVar8 < uVar10);
            }
            lVar20 = uVar10 * 6;
            for (; uVar10 < uVar12; uVar10 = uVar10 + 1) {
              *(short *)(lVar20 + param_11) = sVar13;
              *(short *)(lVar20 + 2 + param_11) = sVar25;
              *(short *)(lVar20 + 4 + param_11) = sVar27;
              lVar20 = lVar20 + 6;
              lStack_100 = param_4;
            }
            goto LAB_14088eea1;
          }
        }
        lVar20 = 1;
        uVar12 = 0;
        if ((ulonglong)psStack_140 / 6 != 0) {
          do {
            uVar10 = uVar12;
            *(short *)(param_11 + uVar10 * 0xc) = *psVar17;
            uVar12 = uVar10 + 1;
            *(short *)(param_11 + 2 + uVar10 * 0xc) = psVar17[1];
            *(short *)(param_11 + 4 + uVar10 * 0xc) = psVar17[2];
            *(short *)(param_11 + 6 + uVar10 * 0xc) = *psVar17;
            *(short *)(param_11 + 8 + uVar10 * 0xc) = psVar17[1];
            *(short *)(param_11 + 10 + uVar10 * 0xc) = psVar17[2];
          } while (uVar12 < (ulonglong)psStack_140 / 6);
          lVar20 = uVar10 + 2 + uVar12;
        }
        if (lVar20 - 1U < (ulonglong)psStack_140 / 3) {
          lVar20 = lVar20 * 3 + -3;
          *(short *)(param_11 + lVar20 * 2) = *psVar17;
          *(short *)(param_11 + 2 + lVar20 * 2) = psVar17[1];
          *(short *)(param_11 + 4 + lVar20 * 2) = psVar17[2];
        }
      }
LAB_14088eea1:
      pcStack_148 = (code *)(&PTR_FUN_14308cc60)[lStack_e0];
      iStack_158 = param_10;
      uStack_110 = param_7;
      lStack_108 = param_1;
      (*pcStack_148)(uStack_120,param_4,lVar26,param_9);
      lVar15 = lVar15 - lVar26;
      param_1 = lStack_108 + lStack_118 * 2;
      param_4 = param_4 + lStack_118 * 4;
      param_7 = uStack_110;
    }
    else {
      pcStack_148 = (code *)(&PTR_FUN_14308cc60)[lStack_e0];
    }
    if ((param_7 & 0x80) == 0) {
      if (lVar26 < lVar15) {
        lVar15 = lVar15 - lVar26;
        iStack_158 = param_10;
        lStack_108 = param_1;
        (*pcStack_148)(param_1,param_4,lVar15,uStack_e8);
        param_1 = lStack_108 + lVar15 * 6;
        param_4 = param_4 + lVar15 * 0xc;
      }
      lVar15 = lVar16 * 3;
      if (lVar15 != 3 && SCARRY8(lVar15,-3) == lVar15 + -3 < 0) {
        lVar20 = 1;
        uVar12 = ((lVar15 + -1) / 3) * 3;
        uVar10 = uVar12 >> 1;
        if (uVar10 != 0) {
          lVar20 = lVar26 * -6 + param_1;
          uVar8 = 0;
          do {
            uVar18 = uVar8;
            *(undefined2 *)(param_11 + uVar18 * 4) = *(undefined2 *)(lVar20 + uVar18 * 4);
            *(undefined2 *)(param_11 + 2 + uVar18 * 4) = *(undefined2 *)(lVar20 + 2 + uVar18 * 4);
            uVar8 = uVar18 + 1;
          } while (uVar8 < uVar10);
          lVar20 = uVar18 + 2 + uVar8;
        }
        if (lVar20 - 1U < uVar12) {
          *(undefined2 *)(param_11 + (lVar20 - 1U) * 2) =
               *(undefined2 *)(param_1 + (lVar26 * -3 + -1 + lVar20) * 2);
        }
      }
      lVar20 = lVar26 * 3;
      if (uVar23 == 1) {
        if (0 < lVar20) {
          uVar12 = lVar20 + 2;
          uVar10 = (longlong)uVar12 / 3;
          if ((longlong)uVar10 < 7) {
            lVar20 = 1;
            if (uVar12 / 6 != 0) {
              lVar20 = param_11 + lVar16 * 6;
              uVar10 = 0;
              do {
                uVar8 = uVar10;
                *(undefined2 *)(lVar20 + -6 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -0xc);
                uVar10 = uVar8 + 1;
                *(undefined2 *)(lVar20 + -4 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -10);
                *(undefined2 *)(lVar20 + -2 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -8);
                *(undefined2 *)(lVar20 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -0xc);
                *(undefined2 *)(lVar20 + 2 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -10);
                *(undefined2 *)(lVar20 + 4 + uVar8 * 0xc) = *(undefined2 *)(lVar20 + -8);
              } while (uVar10 < uVar12 / 6);
              lVar20 = uVar8 + 2 + uVar10;
            }
            if (lVar20 - 1U < uVar12 / 3) {
              lVar15 = lVar20 * 3 + -3 + lVar15;
              *(undefined2 *)((param_11 - 6) + lVar15 * 2) =
                   *(undefined2 *)((param_11 - 0xc) + lVar16 * 6);
              *(undefined2 *)((param_11 - 4) + lVar15 * 2) =
                   *(undefined2 *)((param_11 - 10) + lVar16 * 6);
              *(undefined2 *)((param_11 - 2) + lVar15 * 2) =
                   *(undefined2 *)((param_11 - 8) + lVar16 * 6);
            }
          }
          else {
            lVar15 = param_11 + lVar16 * 6;
            sVar13 = *(short *)(lVar15 + -0xc);
            sVar25 = *(short *)(lVar15 + -10);
            sVar27 = *(short *)(lVar15 + -8);
            if ((longlong)uVar10 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar29 = ZEXT416((uint)(int)sVar13);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              uVar12 = uVar10 & 0xfffffffffffffff0;
              auVar4 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar29 = ZEXT416((uint)(int)sVar25);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              uVar8 = 0;
              auVar30 = ZEXT416((uint)(int)sVar27);
              auVar30 = vpunpcklwd_avx(auVar30,auVar30);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar30 = vpunpckldq_avx(auVar30,auVar30);
              auVar29 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar30 = vpunpcklqdq_avx(auVar30,auVar30);
              do {
                uVar8 = uVar8 + 0x10;
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
              } while (uVar8 < uVar12);
            }
            lVar16 = uVar12 * 6;
            for (; uVar12 < uVar10; uVar12 = uVar12 + 1) {
              *(short *)(lVar16 + -6 + lVar15) = sVar13;
              *(short *)(lVar16 + -4 + lVar15) = sVar25;
              *(short *)(lVar16 + -2 + lVar15) = sVar27;
              lVar16 = lVar16 + 6;
            }
          }
        }
      }
      else if (uVar23 == 3) {
        if (0 < lVar20) {
          lVar9 = 0;
          lVar11 = 1;
          lVar14 = 0;
          uVar12 = (lVar20 + 2U) / 6;
          if (uVar12 != 0) {
            lVar16 = param_11 + lVar16 * 6;
            uVar10 = 0;
            do {
              uVar8 = uVar10;
              uVar10 = uVar8 + 1;
              *(undefined2 *)(lVar9 + -6 + lVar16) = *(undefined2 *)(lVar14 + -0x12 + lVar16);
              *(undefined2 *)(lVar9 + -4 + lVar16) = *(undefined2 *)(lVar14 + -0x10 + lVar16);
              *(undefined2 *)(lVar9 + -2 + lVar16) = *(undefined2 *)(lVar14 + -0xe + lVar16);
              *(undefined2 *)(lVar9 + lVar16) = *(undefined2 *)(lVar14 + -0x18 + lVar16);
              *(undefined2 *)(lVar9 + 2 + lVar16) = *(undefined2 *)(lVar14 + -0x16 + lVar16);
              lVar11 = lVar14 + -0x14;
              lVar14 = lVar14 + -0xc;
              *(undefined2 *)(lVar9 + 4 + lVar16) = *(undefined2 *)(lVar11 + lVar16);
              lVar9 = lVar9 + 0xc;
            } while (uVar10 < uVar12);
            lVar11 = uVar8 + 2 + uVar10;
          }
          if (lVar11 - 1U < (lVar20 + 2U) / 3) {
            lVar20 = lVar11 * 3 + -3;
            lVar16 = lVar15 + lVar20;
            lVar15 = lVar15 - lVar20;
            *(undefined2 *)((param_11 - 6) + lVar16 * 2) =
                 *(undefined2 *)((param_11 - 0x12) + lVar15 * 2);
            *(undefined2 *)((param_11 - 4) + lVar16 * 2) =
                 *(undefined2 *)((param_11 - 0x10) + lVar15 * 2);
            *(undefined2 *)((param_11 - 2) + lVar16 * 2) =
                 *(undefined2 *)((param_11 - 0xe) + lVar15 * 2);
          }
        }
      }
      else if ((uVar23 == 6) && (0 < lVar20)) {
        uVar12 = lVar20 + 2;
        uVar10 = (longlong)uVar12 / 3;
        if (6 < (longlong)uVar10) {
          lVar20 = param_11 + lVar16 * 6;
          lVar11 = (longlong)psVar17 + (2 - (lVar20 + -6));
          if ((((longlong)(uVar10 * 6) <= lVar11) || (3 < -lVar11)) &&
             ((lVar11 = (lVar20 + -6) - (longlong)psVar17, 1 < lVar11 ||
              ((longlong)(uVar10 * 6) <= -lVar11)))) {
            sVar13 = *psVar17;
            sVar25 = psVar17[1];
            sVar27 = psVar17[2];
            if ((longlong)uVar10 < 0x10) {
              uVar12 = 0;
            }
            else {
              auVar29 = ZEXT416((uint)(int)sVar13);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              uVar12 = uVar10 & 0xfffffffffffffff0;
              auVar4 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar29 = ZEXT416((uint)(int)sVar25);
              auVar29 = vpunpcklwd_avx(auVar29,auVar29);
              uVar8 = 0;
              auVar30 = ZEXT416((uint)(int)sVar27);
              auVar30 = vpunpcklwd_avx(auVar30,auVar30);
              auVar29 = vpunpckldq_avx(auVar29,auVar29);
              auVar30 = vpunpckldq_avx(auVar30,auVar30);
              auVar29 = vpunpcklqdq_avx(auVar29,auVar29);
              auVar30 = vpunpcklqdq_avx(auVar30,auVar30);
              do {
                uVar8 = uVar8 + 0x10;
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar29,0);
                vpextrw_avx(auVar29,1);
                vpextrw_avx(auVar29,2);
                vpextrw_avx(auVar29,3);
                vpextrw_avx(auVar29,4);
                vpextrw_avx(auVar29,5);
                vpextrw_avx(auVar29,6);
                vpextrw_avx(auVar29,7);
                vpextrw_avx(auVar4,0);
                vpextrw_avx(auVar4,1);
                vpextrw_avx(auVar4,2);
                vpextrw_avx(auVar4,3);
                vpextrw_avx(auVar4,4);
                vpextrw_avx(auVar4,5);
                vpextrw_avx(auVar4,6);
                vpextrw_avx(auVar4,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
                vpextrw_avx(auVar30,0);
                vpextrw_avx(auVar30,1);
                vpextrw_avx(auVar30,2);
                vpextrw_avx(auVar30,3);
                vpextrw_avx(auVar30,4);
                vpextrw_avx(auVar30,5);
                vpextrw_avx(auVar30,6);
                vpextrw_avx(auVar30,7);
              } while (uVar8 < uVar12);
            }
            lVar15 = uVar12 * 6;
            for (; uVar12 < uVar10; uVar12 = uVar12 + 1) {
              *(short *)(lVar15 + -6 + lVar20) = sVar13;
              *(short *)(lVar15 + -4 + lVar20) = sVar25;
              *(short *)(lVar15 + -2 + lVar20) = sVar27;
              lVar15 = lVar15 + 6;
            }
            goto LAB_14088f750;
          }
        }
        lVar20 = 1;
        if (uVar12 / 6 != 0) {
          lVar16 = param_11 + lVar16 * 6;
          uVar10 = 0;
          do {
            uVar8 = uVar10;
            *(short *)(lVar16 + -6 + uVar8 * 0xc) = *psVar17;
            uVar10 = uVar8 + 1;
            *(short *)(lVar16 + -4 + uVar8 * 0xc) = psVar17[1];
            *(short *)(lVar16 + -2 + uVar8 * 0xc) = psVar17[2];
            *(short *)(lVar16 + uVar8 * 0xc) = *psVar17;
            *(short *)(lVar16 + 2 + uVar8 * 0xc) = psVar17[1];
            *(short *)(lVar16 + 4 + uVar8 * 0xc) = psVar17[2];
          } while (uVar10 < uVar12 / 6);
          lVar20 = uVar8 + 2 + uVar10;
        }
        if (lVar20 - 1U < uVar12 / 3) {
          lVar15 = lVar15 + lVar20 * 3 + -3;
          *(short *)((param_11 - 6) + lVar15 * 2) = *psVar17;
          *(short *)((param_11 - 4) + lVar15 * 2) = psVar17[1];
          *(short *)((param_11 - 2) + lVar15 * 2) = psVar17[2];
        }
      }
LAB_14088f750:
      iStack_158 = param_10;
      (*pcStack_148)(param_11 + lVar26 * 6,param_4,lVar26,uStack_e8);
    }
    else {
      iStack_158 = param_10;
      (*pcStack_148)(param_1,param_4,lVar15,uStack_e8);
    }
  }
  if ((uStack_50 ^ (ulonglong)auStack_178) == DAT_1436b4680) {
    return;
  }
LAB_14088f9ee:
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

