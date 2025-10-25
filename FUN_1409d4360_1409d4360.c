
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d4360(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined2 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 uVar21;
  longlong lVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  longlong lVar25;
  ushort uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  longlong lStack_98;
  code *pcStack_60;
  undefined2 uStack_48;
  undefined1 uStack_46;
  
  auVar39 = _DAT_14308e2c0;
  uStack_48 = 0;
  param_1 = param_1 + param_2 * param_3;
  uStack_46 = 0;
  lVar6 = (longlong)param_6;
  uVar13 = param_7 & 0xf;
  lVar25 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_LAB_14308e520)[lVar6])(param_1,param_4,*param_5,param_9,param_10);
    return;
  }
  lVar22 = (longlong)param_10;
  lVar15 = *param_5;
  puVar12 = &uStack_48;
  if (uVar13 == 6) {
    puVar12 = param_8;
  }
  if (lVar15 < lVar22 + -1) {
    lVar20 = -lVar25;
    lVar22 = 0;
    if (lVar20 < lVar25 + lVar15) {
      uVar7 = param_7 & 0x80;
      lStack_98._0_4_ = param_7 & 0x40;
      do {
        lVar14 = lVar20;
        if (((lVar20 < 0) || (lVar15 <= lVar20)) && (param_7 != 0xf0)) {
          if (uVar13 != 6) {
            if (uVar13 == 1) {
              if (lVar20 < 0) {
                lVar14 = 0;
                if ((uint)lStack_98 != 0) {
                  lVar14 = lVar20;
                }
              }
              else if (uVar7 == 0) {
                lVar14 = lVar15 + -1;
              }
            }
            else if (uVar13 == 3) {
              if (lVar15 < 2) {
                if (lVar20 < 0) {
                  if ((uint)lStack_98 == 0) {
                    lVar14 = -lVar20;
                    if (uVar7 == 0) {
                      lVar14 = 0;
                    }
                  }
                }
                else if (((0 < lVar20) && (uVar7 == 0)) && (lVar14 = -lVar20, (uint)lStack_98 == 0))
                {
                  lVar14 = 0;
                }
              }
              else if ((lVar20 < 0) || (lVar15 <= lVar20)) {
                if (lVar20 < 0) goto LAB_1409d6229;
                while (uVar7 == 0) {
                  for (lVar14 = (lVar15 + -1) * 2 - lVar14; lVar14 < 0; lVar14 = -lVar14) {
LAB_1409d6229:
                    if ((uint)lStack_98 != 0) goto LAB_1409d6111;
                  }
                  if (lVar14 < lVar15) break;
                }
              }
            }
            goto LAB_1409d6111;
          }
          uVar5 = (uint)lStack_98;
          if (-1 < lVar20) {
            uVar5 = uVar7;
          }
          if (uVar5 != 0) goto LAB_1409d6111;
          uVar21 = *(undefined1 *)puVar12;
          uVar23 = *(undefined1 *)((longlong)puVar12 + 1);
          uVar24 = *(undefined1 *)(puVar12 + 1);
        }
        else {
LAB_1409d6111:
          lVar14 = lVar14 * 3;
          uVar21 = *(undefined1 *)(lVar14 + param_1);
          uVar23 = *(undefined1 *)(lVar14 + 1 + param_1);
          uVar24 = *(undefined1 *)(lVar14 + 2 + param_1);
        }
        lVar20 = lVar20 + 1;
        *(undefined1 *)(lVar22 + param_11) = uVar21;
        *(undefined1 *)(lVar22 + 1 + param_11) = uVar23;
        *(undefined1 *)(lVar22 + 2 + param_11) = uVar24;
        lVar22 = lVar22 + 3;
      } while (lVar20 < lVar25 + lVar15);
    }
    (*(code *)(&PTR_LAB_14308e520)[lVar6])(param_11 + lVar25 * 3,param_4,lVar15,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar20 = lVar22 * 3;
    uVar17 = lVar20 - 3;
    lVar14 = lVar25 * 3;
    uVar16 = param_11 + lVar14;
    if (uVar17 != 0 && SCARRY8(lVar20,-3) == (longlong)uVar17 < 0) {
      if (6 < (longlong)uVar17) {
        if ((lVar20 + -3 <= (longlong)(uVar16 - param_1)) ||
           (lVar20 + -3 <= (longlong)-(uVar16 - param_1))) {
          if ((longlong)uVar17 < 0x40) {
            uVar9 = 0;
          }
          else {
            if ((longlong)uVar17 < 0x116) {
              uVar10 = 0;
              uVar9 = uVar17 & 0xffffffffffffffc0;
            }
            else {
              uVar9 = uVar16 & 0x3f;
              uVar10 = uVar9;
              if ((uVar9 != 0) &&
                 (uVar10 = 0x40 - uVar9, (longlong)uVar17 < (longlong)(0x40 - uVar9))) {
                uVar10 = uVar17;
              }
              uVar9 = uVar17 - (uVar17 - uVar10 & 0x3f);
              if (uVar10 != 0) {
                uVar19 = 0;
                auVar36 = vmovdqu32_avx512f(_DAT_14308e300);
                auVar37 = vmovdqu32_avx512f(_DAT_14308e340);
                auVar38 = vpbroadcastq_avx512f();
                do {
                  uVar2 = vpcmpgtq_avx512f(auVar38,auVar36);
                  uVar3 = vpcmpgtq_avx512f(auVar38,auVar37);
                  bVar4 = (byte)uVar3;
                  auVar36 = vpaddq_avx512f(auVar36,auVar39);
                  auVar37 = vpaddq_avx512f(auVar37,auVar39);
                  uVar26 = CONCAT11(bVar4,(byte)uVar2);
                  auVar27 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar19 + param_1));
                  auVar28[1] = ((byte)(uVar26 >> 1) & 1) * auVar27[1];
                  auVar28[0] = ((byte)uVar2 & 1) * auVar27[0];
                  auVar28[2] = ((byte)(uVar26 >> 2) & 1) * auVar27[2];
                  auVar28[3] = ((byte)(uVar26 >> 3) & 1) * auVar27[3];
                  auVar28[4] = ((byte)(uVar26 >> 4) & 1) * auVar27[4];
                  auVar28[5] = ((byte)(uVar26 >> 5) & 1) * auVar27[5];
                  auVar28[6] = ((byte)(uVar26 >> 6) & 1) * auVar27[6];
                  auVar28[7] = ((byte)(uVar26 >> 7) & 1) * auVar27[7];
                  auVar28[8] = (bVar4 & 1) * auVar27[8];
                  auVar28[9] = (bVar4 >> 1 & 1) * auVar27[9];
                  auVar28[10] = (bVar4 >> 2 & 1) * auVar27[10];
                  auVar28[0xb] = (bVar4 >> 3 & 1) * auVar27[0xb];
                  auVar28[0xc] = (bVar4 >> 4 & 1) * auVar27[0xc];
                  auVar28[0xd] = (bVar4 >> 5 & 1) * auVar27[0xd];
                  auVar28[0xe] = (bVar4 >> 6 & 1) * auVar27[0xe];
                  auVar28[0xf] = -((char)bVar4 >> 7) * auVar27[0xf];
                  auVar27 = vmovdqu8_avx512vl(auVar28);
                  *(undefined1 (*) [16])(uVar19 + uVar16) = auVar27;
                  uVar19 = uVar19 + 0x10;
                } while (uVar19 < uVar10);
                if (uVar17 == uVar10) goto LAB_1409d4659;
              }
            }
            if ((longlong)(uVar10 + 0x40) <= (longlong)uVar9) {
              do {
                auVar39 = vmovdqu32_avx512f(*(undefined1 (*) [64])(uVar10 + param_1));
                *(undefined1 (*) [64])(uVar10 + uVar16) = auVar39;
                uVar10 = uVar10 + 0x40;
              } while (uVar10 < uVar9);
            }
          }
          auVar39 = _DAT_14308e2c0;
          if (uVar9 + 1 <= uVar17) {
            uVar10 = 0;
            auVar36 = vmovdqu32_avx512f(_DAT_14308e300);
            auVar37 = vmovdqu32_avx512f(_DAT_14308e340);
            auVar38 = vpbroadcastq_avx512f();
            do {
              uVar2 = vpcmpgtq_avx512f(auVar38,auVar36);
              uVar3 = vpcmpgtq_avx512f(auVar38,auVar37);
              bVar4 = (byte)uVar3;
              auVar36 = vpaddq_avx512f(auVar36,auVar39);
              auVar37 = vpaddq_avx512f(auVar37,auVar39);
              uVar26 = CONCAT11(bVar4,(byte)uVar2);
              auVar27 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(uVar10 + uVar9 + param_1));
              auVar29[1] = ((byte)(uVar26 >> 1) & 1) * auVar27[1];
              auVar29[0] = ((byte)uVar2 & 1) * auVar27[0];
              auVar29[2] = ((byte)(uVar26 >> 2) & 1) * auVar27[2];
              auVar29[3] = ((byte)(uVar26 >> 3) & 1) * auVar27[3];
              auVar29[4] = ((byte)(uVar26 >> 4) & 1) * auVar27[4];
              auVar29[5] = ((byte)(uVar26 >> 5) & 1) * auVar27[5];
              auVar29[6] = ((byte)(uVar26 >> 6) & 1) * auVar27[6];
              auVar29[7] = ((byte)(uVar26 >> 7) & 1) * auVar27[7];
              auVar29[8] = (bVar4 & 1) * auVar27[8];
              auVar29[9] = (bVar4 >> 1 & 1) * auVar27[9];
              auVar29[10] = (bVar4 >> 2 & 1) * auVar27[10];
              auVar29[0xb] = (bVar4 >> 3 & 1) * auVar27[0xb];
              auVar29[0xc] = (bVar4 >> 4 & 1) * auVar27[0xc];
              auVar29[0xd] = (bVar4 >> 5 & 1) * auVar27[0xd];
              auVar29[0xe] = (bVar4 >> 6 & 1) * auVar27[0xe];
              auVar29[0xf] = -((char)bVar4 >> 7) * auVar27[0xf];
              auVar27 = vmovdqu8_avx512vl(auVar29);
              *(undefined1 (*) [16])(uVar10 + uVar9 + uVar16) = auVar27;
              uVar10 = uVar10 + 0x10;
            } while (uVar10 < uVar17 - uVar9);
          }
          goto LAB_1409d4659;
        }
      }
      lVar18 = 1;
      uVar10 = (longlong)(param_10 * 3) - 3;
      uVar9 = uVar10 >> 1;
      uVar17 = 0;
      if (uVar9 != 0) {
        do {
          uVar19 = uVar17;
          *(undefined1 *)(uVar16 + uVar19 * 2) = *(undefined1 *)(param_1 + uVar19 * 2);
          *(undefined1 *)(uVar16 + 1 + uVar19 * 2) = *(undefined1 *)(param_1 + 1 + uVar19 * 2);
          uVar17 = uVar19 + 1;
        } while (uVar17 < uVar9);
        lVar18 = uVar19 + 2 + uVar17;
      }
      uVar17 = lVar18 - 1;
      if (uVar17 < uVar10) {
        *(undefined1 *)(uVar16 + uVar17) = *(undefined1 *)(param_1 + uVar17);
      }
    }
LAB_1409d4659:
    if (uVar13 == 1) {
      if (0 < lVar14) {
        lStack_98 = 1;
        uVar9 = (lVar14 + 2U) / 6;
        uVar17 = 0;
        if (uVar9 != 0) {
          do {
            uVar10 = uVar17;
            *(undefined1 *)(param_11 + uVar10 * 6) = *(undefined1 *)(lVar14 + param_11);
            uVar17 = uVar10 + 1;
            *(undefined1 *)(param_11 + 1 + uVar10 * 6) = *(undefined1 *)(uVar16 + 1);
            *(undefined1 *)(param_11 + 2 + uVar10 * 6) = *(undefined1 *)(uVar16 + 2);
            *(undefined1 *)(param_11 + 3 + uVar10 * 6) = *(undefined1 *)(lVar14 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar10 * 6) = *(undefined1 *)(uVar16 + 1);
            *(undefined1 *)(param_11 + 5 + uVar10 * 6) = *(undefined1 *)(uVar16 + 2);
          } while (uVar17 < uVar9);
          lStack_98 = uVar10 + 2 + uVar17;
        }
        if (lStack_98 - 1U < (lVar14 + 2U) / 3) {
          lStack_98 = lStack_98 * 3;
          *(undefined1 *)(lStack_98 + -3 + param_11) = *(undefined1 *)(lVar14 + param_11);
          uVar21 = *(undefined1 *)(uVar16 + 2);
          *(undefined1 *)(lStack_98 + -2 + param_11) = *(undefined1 *)(uVar16 + 1);
          *(undefined1 *)(lStack_98 + -1 + param_11) = uVar21;
        }
      }
    }
    else if (uVar13 == 3) {
      if (0 < lVar14) {
        lVar18 = 1;
        lVar8 = 0;
        uVar17 = (lVar14 + 2U) / 6;
        if (uVar17 != 0) {
          lVar11 = lVar20 + param_11;
          uVar9 = 0;
          lVar18 = lVar8;
          do {
            uVar10 = uVar9;
            uVar9 = uVar10 + 1;
            *(undefined1 *)(lVar8 + param_11) = *(undefined1 *)(lVar18 + -3 + lVar11);
            *(undefined1 *)(lVar8 + 1 + param_11) = *(undefined1 *)(lVar18 + -2 + lVar11);
            *(undefined1 *)(lVar8 + 2 + param_11) = *(undefined1 *)(lVar18 + -1 + lVar11);
            *(undefined1 *)(lVar8 + 3 + param_11) = *(undefined1 *)(lVar18 + -6 + lVar11);
            *(undefined1 *)(lVar8 + 4 + param_11) = *(undefined1 *)(lVar18 + -5 + lVar11);
            lVar1 = lVar18 + -4;
            lVar18 = lVar18 + -6;
            *(undefined1 *)(lVar8 + 5 + param_11) = *(undefined1 *)(lVar1 + lVar11);
            lVar8 = lVar8 + 6;
          } while (uVar9 < uVar17);
          lVar18 = uVar10 + 2 + uVar9;
        }
        if (lVar18 - 1U < (lVar14 + 2U) / 3) {
          lVar18 = lVar18 * 3;
          lVar20 = lVar20 + param_11;
          lVar8 = -(lVar18 + -3);
          *(undefined1 *)(lVar18 + -3 + param_11) = *(undefined1 *)(lVar8 + -3 + lVar20);
          *(undefined1 *)(lVar18 + -2 + param_11) = *(undefined1 *)(lVar8 + -2 + lVar20);
          *(undefined1 *)(lVar18 + -1 + param_11) = *(undefined1 *)(lVar8 + -1 + lVar20);
        }
      }
    }
    else if ((uVar13 == 6) && (0 < lVar14)) {
      lStack_98 = 1;
      uVar9 = (lVar14 + 2U) / 6;
      uVar17 = 0;
      if (uVar9 != 0) {
        do {
          uVar10 = uVar17;
          *(undefined1 *)(param_11 + uVar10 * 6) = *(undefined1 *)puVar12;
          uVar17 = uVar10 + 1;
          *(undefined1 *)(param_11 + 1 + uVar10 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
          *(undefined1 *)(param_11 + 2 + uVar10 * 6) = *(undefined1 *)(puVar12 + 1);
          *(undefined1 *)(param_11 + 3 + uVar10 * 6) = *(undefined1 *)puVar12;
          *(undefined1 *)(param_11 + 4 + uVar10 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
          *(undefined1 *)(param_11 + 5 + uVar10 * 6) = *(undefined1 *)(puVar12 + 1);
        } while (uVar17 < uVar9);
        lStack_98 = uVar10 + 2 + uVar17;
      }
      if (lStack_98 - 1U < (lVar14 + 2U) / 3) {
        lStack_98 = lStack_98 * 3;
        *(undefined1 *)(lStack_98 + -3 + param_11) = *(undefined1 *)puVar12;
        *(undefined1 *)(lStack_98 + -2 + param_11) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lStack_98 + -1 + param_11) = *(undefined1 *)(puVar12 + 1);
      }
    }
    pcStack_60 = (code *)(&PTR_LAB_14308e520)[lVar6];
    (*pcStack_60)(uVar16,param_4,lVar25,param_9,param_10);
    lVar15 = lVar15 - lVar25;
    param_1 = param_1 + lVar14;
    param_4 = param_4 + lVar25 * 0xc;
  }
  else {
    pcStack_60 = (code *)(&PTR_LAB_14308e520)[lVar6];
  }
  if ((param_7 & 0x80) != 0) {
    (*pcStack_60)(param_1,param_4,lVar15,param_9,param_10);
    return;
  }
  if (lVar25 < lVar15) {
    lVar15 = lVar15 - lVar25;
    (*pcStack_60)(param_1,param_4,lVar15,param_9,param_10);
    param_4 = param_4 + lVar15 * 0xc;
    param_1 = param_1 + lVar15 * 3;
  }
  lVar22 = lVar22 * 3;
  if (lVar22 != 3 && SCARRY8(lVar22,-3) == lVar22 + -3 < 0) {
    uVar16 = lVar22 - 1;
    lVar20 = lVar25 * -3;
    lVar15 = param_11 - (param_1 + lVar20);
    lVar6 = ((longlong)uVar16 / 3) * 3;
    if ((lVar6 <= lVar15) || (lVar6 + -2 <= -lVar15)) {
      lVar15 = (param_11 + 1) - (param_1 + lVar20);
      if (((lVar6 <= lVar15) || (lVar6 + -1 <= -lVar15)) &&
         ((lVar15 = (param_11 + 1) - param_11, lVar6 + -2 <= lVar15 || (lVar6 + -1 <= -lVar15)))) {
        lVar6 = 1;
        uVar17 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar17 != 0) {
          uVar9 = 0;
          do {
            uVar10 = uVar9;
            uVar9 = uVar10 + 1;
            *(undefined1 *)(param_11 + uVar10 * 6) = *(undefined1 *)(lVar20 + param_1 + uVar10 * 6);
            *(undefined1 *)(param_11 + 3 + uVar10 * 6) =
                 *(undefined1 *)(lVar20 + param_1 + 3 + uVar10 * 6);
          } while (uVar9 < uVar17);
          lVar6 = uVar10 + 2 + uVar9;
        }
        if (lVar6 - 1U < uVar16 / 3) {
          lVar6 = lVar6 * 3 + -3;
          *(undefined1 *)(lVar6 + param_11) = *(undefined1 *)(lVar6 + lVar20 + param_1);
        }
        lVar6 = 1;
        if (uVar17 != 0) {
          lVar6 = lVar20 + param_1;
          uVar9 = 0;
          do {
            uVar10 = uVar9;
            uVar9 = uVar10 + 1;
            *(undefined1 *)(param_11 + 1 + uVar10 * 6) = *(undefined1 *)(lVar6 + 1 + uVar10 * 6);
            *(undefined1 *)(param_11 + 2 + uVar10 * 6) = *(undefined1 *)(lVar6 + 2 + uVar10 * 6);
            *(undefined1 *)(param_11 + 4 + uVar10 * 6) = *(undefined1 *)(lVar6 + 4 + uVar10 * 6);
            *(undefined1 *)(param_11 + 5 + uVar10 * 6) = *(undefined1 *)(lVar6 + 5 + uVar10 * 6);
          } while (uVar9 < uVar17);
          lVar6 = uVar10 + 2 + uVar9;
        }
        if (lVar6 - 1U < uVar16 / 3) {
          lVar6 = lVar6 * 3;
          uVar21 = *(undefined1 *)(lVar20 + param_1 + 2 + lVar6 + -3);
          *(undefined1 *)(lVar6 + -2 + param_11) =
               *(undefined1 *)(lVar20 + param_1 + 1 + lVar6 + -3);
          *(undefined1 *)(lVar6 + -1 + param_11) = uVar21;
        }
        goto LAB_1409d4cd9;
      }
    }
    lVar6 = 1;
    uVar17 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar17 != 0) {
      lVar6 = lVar20 + param_1;
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        uVar9 = uVar10 + 1;
        *(undefined1 *)(param_11 + uVar10 * 6) = *(undefined1 *)(lVar6 + uVar10 * 6);
        *(undefined1 *)(param_11 + 1 + uVar10 * 6) = *(undefined1 *)(lVar6 + 1 + uVar10 * 6);
        *(undefined1 *)(param_11 + 2 + uVar10 * 6) = *(undefined1 *)(lVar6 + 2 + uVar10 * 6);
        *(undefined1 *)(param_11 + 3 + uVar10 * 6) = *(undefined1 *)(lVar6 + 3 + uVar10 * 6);
        *(undefined1 *)(param_11 + 4 + uVar10 * 6) = *(undefined1 *)(lVar6 + 4 + uVar10 * 6);
        *(undefined1 *)(param_11 + 5 + uVar10 * 6) = *(undefined1 *)(lVar6 + 5 + uVar10 * 6);
      } while (uVar9 < uVar17);
      lVar6 = uVar10 + 2 + uVar9;
    }
    if (lVar6 - 1U < uVar16 / 3) {
      lVar20 = lVar20 + param_1;
      lVar6 = lVar6 * 3;
      lVar15 = lVar6 + -3;
      *(undefined1 *)(lVar15 + param_11) = *(undefined1 *)(lVar20 + lVar15);
      *(undefined1 *)(lVar6 + -2 + param_11) = *(undefined1 *)(lVar20 + 1 + lVar15);
      *(undefined1 *)(lVar6 + -1 + param_11) = *(undefined1 *)(lVar20 + 2 + lVar15);
    }
  }
LAB_1409d4cd9:
  lVar6 = lVar25 * 3;
  if (uVar13 == 1) {
    if (0 < lVar6) {
      uVar16 = lVar6 + 2;
      uVar17 = (longlong)uVar16 / 3;
      if ((longlong)uVar17 < 7) {
        lVar15 = 1;
        if (uVar16 / 6 != 0) {
          lVar15 = param_11 + lVar22;
          uVar17 = 0;
          do {
            uVar9 = uVar17;
            *(undefined1 *)(lVar15 + -3 + uVar9 * 6) = *(undefined1 *)(lVar15 + -6);
            uVar17 = uVar9 + 1;
            *(undefined1 *)(lVar15 + -2 + uVar9 * 6) = *(undefined1 *)(lVar15 + -5);
            *(undefined1 *)(lVar15 + -1 + uVar9 * 6) = *(undefined1 *)(lVar15 + -4);
            *(undefined1 *)(lVar15 + uVar9 * 6) = *(undefined1 *)(lVar15 + -6);
            *(undefined1 *)(lVar15 + 1 + uVar9 * 6) = *(undefined1 *)(lVar15 + -5);
            *(undefined1 *)(lVar15 + 2 + uVar9 * 6) = *(undefined1 *)(lVar15 + -4);
          } while (uVar17 < uVar16 / 6);
          lVar15 = uVar9 + 2 + uVar17;
        }
        if (lVar15 - 1U < uVar16 / 3) {
          lVar22 = lVar22 + param_11;
          lVar15 = lVar15 * 3;
          *(undefined1 *)(lVar15 + -6 + lVar22) = *(undefined1 *)(lVar22 + -6);
          *(undefined1 *)(lVar15 + -5 + lVar22) = *(undefined1 *)(lVar22 + -5);
          *(undefined1 *)(lVar15 + -4 + lVar22) = *(undefined1 *)(lVar22 + -4);
        }
      }
      else {
        lVar22 = lVar22 + param_11;
        uVar21 = *(undefined1 *)(lVar22 + -6);
        uVar23 = *(undefined1 *)(lVar22 + -5);
        uVar24 = *(undefined1 *)(lVar22 + -4);
        if ((longlong)uVar17 < 0x40) {
          uVar16 = 0;
        }
        else {
          auVar39 = vpbroadcastb_avx512bw();
          auVar36 = vpbroadcastb_avx512bw();
          auVar37 = vpbroadcastb_avx512bw();
          uVar9 = 0;
          uVar16 = uVar17 & 0xffffffffffffffc0;
          lVar15 = 0;
          auVar27 = vextracti32x4_avx512f(auVar37,1);
          auVar28 = vextracti32x4_avx512f(auVar37,2);
          auVar29 = vextracti32x4_avx512f(auVar37,3);
          auVar30 = vextracti32x4_avx512f(auVar36,1);
          auVar31 = vextracti32x4_avx512f(auVar36,2);
          auVar32 = vextracti32x4_avx512f(auVar36,3);
          auVar33 = vextracti32x4_avx512f(auVar39,1);
          auVar34 = vextracti32x4_avx512f(auVar39,2);
          auVar35 = vextracti32x4_avx512f(auVar39,3);
          do {
            uVar9 = uVar9 + 0x40;
            *(char *)(lVar15 + -0x10 + lVar22) = auVar37[0];
            *(char *)(lVar15 + 0x20 + lVar22) = auVar37[1];
            *(char *)(lVar15 + 0x50 + lVar22) = auVar37[2];
            *(char *)(lVar15 + 0x80 + lVar22) = auVar37[3];
            *(char *)(lVar15 + 0xb0 + lVar22) = auVar37[4];
            *(char *)(lVar15 + 0xe0 + lVar22) = auVar37[5];
            *(char *)(lVar15 + 0x110 + lVar22) = auVar37[6];
            *(char *)(lVar15 + 0x140 + lVar22) = auVar37[7];
            *(char *)(lVar15 + 0x170 + lVar22) = auVar37[8];
            *(char *)(lVar15 + 0x1a0 + lVar22) = auVar37[9];
            *(char *)(lVar15 + 0x1d0 + lVar22) = auVar37[10];
            *(char *)(lVar15 + 0x200 + lVar22) = auVar37[0xb];
            *(char *)(lVar15 + 0x230 + lVar22) = auVar37[0xc];
            *(char *)(lVar15 + 0x260 + lVar22) = auVar37[0xd];
            *(char *)(lVar15 + 0x290 + lVar22) = auVar37[0xe];
            *(char *)(lVar15 + 0x2c0 + lVar22) = auVar37[0xf];
            *(char *)(lVar15 + 0x2f0 + lVar22) = auVar27[0];
            *(char *)(lVar15 + 800 + lVar22) = auVar27[1];
            *(char *)(lVar15 + 0x350 + lVar22) = auVar27[2];
            *(char *)(lVar15 + 0x380 + lVar22) = auVar27[3];
            *(char *)(lVar15 + 0x3b0 + lVar22) = auVar27[4];
            *(char *)(lVar15 + 0x3e0 + lVar22) = auVar27[5];
            *(char *)(lVar15 + 0x410 + lVar22) = auVar27[6];
            *(char *)(lVar15 + 0x440 + lVar22) = auVar27[7];
            *(char *)(lVar15 + 0x470 + lVar22) = auVar27[8];
            *(char *)(lVar15 + 0x4a0 + lVar22) = auVar27[9];
            *(char *)(lVar15 + 0x4d0 + lVar22) = auVar27[10];
            *(char *)(lVar15 + 0x500 + lVar22) = auVar27[0xb];
            *(char *)(lVar15 + 0x530 + lVar22) = auVar27[0xc];
            *(char *)(lVar15 + 0x560 + lVar22) = auVar27[0xd];
            *(char *)(lVar15 + 0x590 + lVar22) = auVar27[0xe];
            *(char *)(lVar15 + 0x5c0 + lVar22) = auVar27[0xf];
            *(char *)(lVar15 + 0x5f0 + lVar22) = auVar28[0];
            *(char *)(lVar15 + 0x620 + lVar22) = auVar28[1];
            *(char *)(lVar15 + 0x650 + lVar22) = auVar28[2];
            *(char *)(lVar15 + 0x680 + lVar22) = auVar28[3];
            *(char *)(lVar15 + 0x6b0 + lVar22) = auVar28[4];
            *(char *)(lVar15 + 0x6e0 + lVar22) = auVar28[5];
            *(char *)(lVar15 + 0x710 + lVar22) = auVar28[6];
            *(char *)(lVar15 + 0x740 + lVar22) = auVar28[7];
            *(char *)(lVar15 + 0x770 + lVar22) = auVar28[8];
            *(char *)(lVar15 + 0x7a0 + lVar22) = auVar28[9];
            *(char *)(lVar15 + 2000 + lVar22) = auVar28[10];
            *(char *)(lVar15 + 0x80 + lVar22) = auVar28[0xb];
            *(char *)(lVar15 + 0x83 + lVar22) = auVar28[0xc];
            *(char *)(lVar15 + 0x86 + lVar22) = auVar28[0xd];
            *(char *)(lVar15 + 0x89 + lVar22) = auVar28[0xe];
            *(char *)(lVar15 + 0x8c + lVar22) = auVar28[0xf];
            *(char *)(lVar15 + 0x8f + lVar22) = auVar29[0];
            *(char *)(lVar15 + 0x92 + lVar22) = auVar29[1];
            *(char *)(lVar15 + 0x95 + lVar22) = auVar29[2];
            *(char *)(lVar15 + 0x98 + lVar22) = auVar29[3];
            *(char *)(lVar15 + 0x9b + lVar22) = auVar29[4];
            *(char *)(lVar15 + 0x9e + lVar22) = auVar29[5];
            *(char *)(lVar15 + 0xa1 + lVar22) = auVar29[6];
            *(char *)(lVar15 + 0xa4 + lVar22) = auVar29[7];
            *(char *)(lVar15 + 0xa7 + lVar22) = auVar29[8];
            *(char *)(lVar15 + 0xaa + lVar22) = auVar29[9];
            *(char *)(lVar15 + 0xad + lVar22) = auVar29[10];
            *(char *)(lVar15 + 0xb0 + lVar22) = auVar29[0xb];
            *(char *)(lVar15 + 0xb3 + lVar22) = auVar29[0xc];
            *(char *)(lVar15 + 0xb6 + lVar22) = auVar29[0xd];
            *(char *)(lVar15 + 0xb9 + lVar22) = auVar29[0xe];
            *(char *)(lVar15 + 0xbc + lVar22) = auVar29[0xf];
            *(char *)(lVar15 + -0x20 + lVar22) = auVar36[0];
            *(char *)(lVar15 + 0x10 + lVar22) = auVar36[1];
            *(char *)(lVar15 + 0x40 + lVar22) = auVar36[2];
            *(char *)(lVar15 + 0x70 + lVar22) = auVar36[3];
            *(char *)(lVar15 + 0xa0 + lVar22) = auVar36[4];
            *(char *)(lVar15 + 0xd0 + lVar22) = auVar36[5];
            *(char *)(lVar15 + 0x100 + lVar22) = auVar36[6];
            *(char *)(lVar15 + 0x130 + lVar22) = auVar36[7];
            *(char *)(lVar15 + 0x160 + lVar22) = auVar36[8];
            *(char *)(lVar15 + 400 + lVar22) = auVar36[9];
            *(char *)(lVar15 + 0x1c0 + lVar22) = auVar36[10];
            *(char *)(lVar15 + 0x1f0 + lVar22) = auVar36[0xb];
            *(char *)(lVar15 + 0x220 + lVar22) = auVar36[0xc];
            *(char *)(lVar15 + 0x250 + lVar22) = auVar36[0xd];
            *(char *)(lVar15 + 0x280 + lVar22) = auVar36[0xe];
            *(char *)(lVar15 + 0x2b0 + lVar22) = auVar36[0xf];
            *(char *)(lVar15 + 0x2e0 + lVar22) = auVar30[0];
            *(char *)(lVar15 + 0x310 + lVar22) = auVar30[1];
            *(char *)(lVar15 + 0x340 + lVar22) = auVar30[2];
            *(char *)(lVar15 + 0x370 + lVar22) = auVar30[3];
            *(char *)(lVar15 + 0x3a0 + lVar22) = auVar30[4];
            *(char *)(lVar15 + 0x3d0 + lVar22) = auVar30[5];
            *(char *)(lVar15 + 0x400 + lVar22) = auVar30[6];
            *(char *)(lVar15 + 0x430 + lVar22) = auVar30[7];
            *(char *)(lVar15 + 0x460 + lVar22) = auVar30[8];
            *(char *)(lVar15 + 0x490 + lVar22) = auVar30[9];
            *(char *)(lVar15 + 0x4c0 + lVar22) = auVar30[10];
            *(char *)(lVar15 + 0x4f0 + lVar22) = auVar30[0xb];
            *(char *)(lVar15 + 0x520 + lVar22) = auVar30[0xc];
            *(char *)(lVar15 + 0x550 + lVar22) = auVar30[0xd];
            *(char *)(lVar15 + 0x580 + lVar22) = auVar30[0xe];
            *(char *)(lVar15 + 0x5b0 + lVar22) = auVar30[0xf];
            *(char *)(lVar15 + 0x5e + lVar22) = auVar31[0];
            *(char *)(lVar15 + 0x61 + lVar22) = auVar31[1];
            *(char *)(lVar15 + 100 + lVar22) = auVar31[2];
            *(char *)(lVar15 + 0x67 + lVar22) = auVar31[3];
            *(char *)(lVar15 + 0x6a + lVar22) = auVar31[4];
            *(char *)(lVar15 + 0x6d + lVar22) = auVar31[5];
            *(char *)(lVar15 + 0x70 + lVar22) = auVar31[6];
            *(char *)(lVar15 + 0x73 + lVar22) = auVar31[7];
            *(char *)(lVar15 + 0x76 + lVar22) = auVar31[0];
            *(char *)(lVar15 + 0x79 + lVar22) = auVar31[1];
            *(char *)(lVar15 + 0x7c + lVar22) = auVar31[2];
            *(char *)(lVar15 + 0x7f + lVar22) = auVar31[3];
            *(char *)(lVar15 + 0x82 + lVar22) = auVar31[4];
            *(char *)(lVar15 + 0x85 + lVar22) = auVar31[5];
            *(char *)(lVar15 + 0x88 + lVar22) = auVar31[6];
            *(char *)(lVar15 + 0x8b + lVar22) = auVar31[7];
            *(char *)(lVar15 + 0x8e + lVar22) = auVar32[0];
            *(char *)(lVar15 + 0x91 + lVar22) = auVar32[1];
            *(char *)(lVar15 + 0x94 + lVar22) = auVar32[2];
            *(char *)(lVar15 + 0x97 + lVar22) = auVar32[3];
            *(char *)(lVar15 + 0x9a + lVar22) = auVar32[4];
            *(char *)(lVar15 + 0x9d + lVar22) = auVar32[5];
            *(char *)(lVar15 + 0xa0 + lVar22) = auVar32[6];
            *(char *)(lVar15 + 0xa3 + lVar22) = auVar32[7];
            *(char *)(lVar15 + 0xa6 + lVar22) = auVar32[0];
            *(char *)(lVar15 + 0xa9 + lVar22) = auVar32[1];
            *(char *)(lVar15 + 0xac + lVar22) = auVar32[2];
            *(char *)(lVar15 + 0xaf + lVar22) = auVar32[3];
            *(char *)(lVar15 + 0xb2 + lVar22) = auVar32[4];
            *(char *)(lVar15 + 0xb5 + lVar22) = auVar32[5];
            *(char *)(lVar15 + 0xb8 + lVar22) = auVar32[6];
            *(char *)(lVar15 + 0xbb + lVar22) = auVar32[7];
            *(char *)(lVar15 + -3 + lVar22) = auVar39[0];
            *(char *)(lVar15 + lVar22) = auVar39[1];
            *(char *)(lVar15 + 3 + lVar22) = auVar39[2];
            *(char *)(lVar15 + 6 + lVar22) = auVar39[3];
            *(char *)(lVar15 + 9 + lVar22) = auVar39[4];
            *(char *)(lVar15 + 0xc + lVar22) = auVar39[5];
            *(char *)(lVar15 + 0xf + lVar22) = auVar39[6];
            *(char *)(lVar15 + 0x12 + lVar22) = auVar39[7];
            *(char *)(lVar15 + 0x15 + lVar22) = auVar39[0];
            *(char *)(lVar15 + 0x18 + lVar22) = auVar39[1];
            *(char *)(lVar15 + 0x1b + lVar22) = auVar39[2];
            *(char *)(lVar15 + 0x1e + lVar22) = auVar39[3];
            *(char *)(lVar15 + 0x21 + lVar22) = auVar39[4];
            *(char *)(lVar15 + 0x24 + lVar22) = auVar39[5];
            *(char *)(lVar15 + 0x27 + lVar22) = auVar39[6];
            *(char *)(lVar15 + 0x2a + lVar22) = auVar39[7];
            *(char *)(lVar15 + 0x2d + lVar22) = auVar33[0];
            *(char *)(lVar15 + 0x30 + lVar22) = auVar33[1];
            *(char *)(lVar15 + 0x33 + lVar22) = auVar33[2];
            *(char *)(lVar15 + 0x36 + lVar22) = auVar33[3];
            *(char *)(lVar15 + 0x39 + lVar22) = auVar33[4];
            *(char *)(lVar15 + 0x3c + lVar22) = auVar33[5];
            *(char *)(lVar15 + 0x3f + lVar22) = auVar33[6];
            *(char *)(lVar15 + 0x42 + lVar22) = auVar33[7];
            *(char *)(lVar15 + 0x45 + lVar22) = auVar33[0];
            *(char *)(lVar15 + 0x48 + lVar22) = auVar33[1];
            *(char *)(lVar15 + 0x4b + lVar22) = auVar33[2];
            *(char *)(lVar15 + 0x4e + lVar22) = auVar33[3];
            *(char *)(lVar15 + 0x51 + lVar22) = auVar33[4];
            *(char *)(lVar15 + 0x54 + lVar22) = auVar33[5];
            *(char *)(lVar15 + 0x57 + lVar22) = auVar33[6];
            *(char *)(lVar15 + 0x5a + lVar22) = auVar33[7];
            *(char *)(lVar15 + 0x5d + lVar22) = auVar34[0];
            *(char *)(lVar15 + 0x60 + lVar22) = auVar34[1];
            *(char *)(lVar15 + 99 + lVar22) = auVar34[2];
            *(char *)(lVar15 + 0x66 + lVar22) = auVar34[3];
            *(char *)(lVar15 + 0x69 + lVar22) = auVar34[4];
            *(char *)(lVar15 + 0x6c + lVar22) = auVar34[5];
            *(char *)(lVar15 + 0x6f + lVar22) = auVar34[6];
            *(char *)(lVar15 + 0x72 + lVar22) = auVar34[7];
            *(char *)(lVar15 + 0x75 + lVar22) = auVar34[0];
            *(char *)(lVar15 + 0x78 + lVar22) = auVar34[1];
            *(char *)(lVar15 + 0x7b + lVar22) = auVar34[2];
            *(char *)(lVar15 + 0x7e + lVar22) = auVar34[3];
            *(char *)(lVar15 + 0x81 + lVar22) = auVar34[4];
            *(char *)(lVar15 + 0x84 + lVar22) = auVar34[5];
            *(char *)(lVar15 + 0x87 + lVar22) = auVar34[6];
            *(char *)(lVar15 + 0x8a + lVar22) = auVar34[7];
            *(char *)(lVar15 + 0x8d + lVar22) = auVar35[0];
            *(char *)(lVar15 + 0x90 + lVar22) = auVar35[1];
            *(char *)(lVar15 + 0x93 + lVar22) = auVar35[2];
            *(char *)(lVar15 + 0x96 + lVar22) = auVar35[3];
            *(char *)(lVar15 + 0x99 + lVar22) = auVar35[4];
            *(char *)(lVar15 + 0x9c + lVar22) = auVar35[5];
            *(char *)(lVar15 + 0x9f + lVar22) = auVar35[6];
            *(char *)(lVar15 + 0xa2 + lVar22) = auVar35[7];
            *(char *)(lVar15 + 0xa5 + lVar22) = auVar35[0];
            *(char *)(lVar15 + 0xa8 + lVar22) = auVar35[1];
            *(char *)(lVar15 + 0xab + lVar22) = auVar35[2];
            *(char *)(lVar15 + 0xae + lVar22) = auVar35[3];
            *(char *)(lVar15 + 0xb1 + lVar22) = auVar35[4];
            *(char *)(lVar15 + 0xb4 + lVar22) = auVar35[5];
            *(char *)(lVar15 + 0xb7 + lVar22) = auVar35[6];
            *(char *)(lVar15 + 0xba + lVar22) = auVar35[7];
            lVar15 = lVar15 + 0xc0;
          } while (uVar9 < uVar16);
        }
        uVar9 = 0;
        if (uVar16 + 1 <= uVar17) {
          lVar22 = lVar22 + uVar16 * 3;
          uVar10 = uVar9;
          do {
            uVar9 = uVar9 + 1;
            *(undefined1 *)((uVar10 - 3) + lVar22) = uVar21;
            *(undefined1 *)((uVar10 - 2) + lVar22) = uVar23;
            *(undefined1 *)((uVar10 - 1) + lVar22) = uVar24;
            uVar10 = uVar10 + 3;
          } while (uVar9 < uVar17 - uVar16);
        }
      }
    }
  }
  else if (uVar13 == 3) {
    if (0 < lVar6) {
      lVar15 = 1;
      lVar20 = 0;
      lVar14 = 0;
      uVar16 = (lVar6 + 2U) / 6;
      if (uVar16 != 0) {
        lVar15 = param_11 + lVar22;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
          uVar21 = *(undefined1 *)(lVar14 + -8 + lVar15);
          *(undefined1 *)(lVar20 + -3 + lVar15) = *(undefined1 *)(lVar14 + -9 + lVar15);
          *(undefined1 *)(lVar20 + -2 + lVar15) = uVar21;
          uVar21 = *(undefined1 *)(lVar14 + -0xc + lVar15);
          *(undefined1 *)(lVar20 + -1 + lVar15) = *(undefined1 *)(lVar14 + -7 + lVar15);
          *(undefined1 *)(lVar20 + lVar15) = uVar21;
          lVar18 = lVar14 + -0xb;
          uVar21 = *(undefined1 *)(lVar14 + -10 + lVar15);
          lVar14 = lVar14 + -6;
          *(undefined1 *)(lVar20 + 1 + lVar15) = *(undefined1 *)(lVar18 + lVar15);
          *(undefined1 *)(lVar20 + 2 + lVar15) = uVar21;
          lVar20 = lVar20 + 6;
        } while (uVar17 < uVar16);
        lVar15 = uVar9 + 2 + uVar17;
      }
      if (lVar15 - 1U < (lVar6 + 2U) / 3) {
        lVar22 = lVar22 + param_11;
        lVar15 = lVar15 * 3;
        lVar20 = -(lVar15 + -3);
        uVar21 = *(undefined1 *)(lVar20 + -8 + lVar22);
        uVar23 = *(undefined1 *)(lVar20 + -7 + lVar22);
        *(undefined1 *)(lVar15 + -6 + lVar22) = *(undefined1 *)(lVar20 + -9 + lVar22);
        *(undefined1 *)(lVar15 + -5 + lVar22) = uVar21;
        *(undefined1 *)(lVar15 + -4 + lVar22) = uVar23;
      }
    }
  }
  else if ((uVar13 == 6) && (0 < lVar6)) {
    uVar16 = lVar6 + 2;
    uVar17 = (longlong)uVar16 / 3;
    if (6 < (longlong)uVar17) {
      lVar20 = (param_11 + -3 + lVar22) - (longlong)puVar12;
      lVar15 = param_11 + lVar22;
      if ((2 < lVar20) || ((longlong)(uVar17 * 3) <= -lVar20)) {
        uVar21 = *(undefined1 *)puVar12;
        uVar23 = *(undefined1 *)((longlong)puVar12 + 1);
        uVar24 = *(undefined1 *)(puVar12 + 1);
        if ((longlong)uVar17 < 0x40) {
          uVar16 = 0;
        }
        else {
          auVar39 = vpbroadcastb_avx512bw();
          auVar36 = vpbroadcastb_avx512bw();
          auVar37 = vpbroadcastb_avx512bw();
          uVar9 = 0;
          uVar16 = uVar17 & 0xffffffffffffffc0;
          lVar22 = 0;
          auVar27 = vextracti32x4_avx512f(auVar37,1);
          auVar28 = vextracti32x4_avx512f(auVar37,2);
          auVar29 = vextracti32x4_avx512f(auVar37,3);
          auVar30 = vextracti32x4_avx512f(auVar36,1);
          auVar31 = vextracti32x4_avx512f(auVar36,2);
          auVar32 = vextracti32x4_avx512f(auVar36,3);
          auVar33 = vextracti32x4_avx512f(auVar39,1);
          auVar34 = vextracti32x4_avx512f(auVar39,2);
          auVar35 = vextracti32x4_avx512f(auVar39,3);
          do {
            uVar9 = uVar9 + 0x40;
            *(char *)(lVar22 + -0x10 + lVar15) = auVar37[0];
            *(char *)(lVar22 + 0x20 + lVar15) = auVar37[1];
            *(char *)(lVar22 + 0x50 + lVar15) = auVar37[2];
            *(char *)(lVar22 + 0x80 + lVar15) = auVar37[3];
            *(char *)(lVar22 + 0xb0 + lVar15) = auVar37[4];
            *(char *)(lVar22 + 0xe0 + lVar15) = auVar37[5];
            *(char *)(lVar22 + 0x110 + lVar15) = auVar37[6];
            *(char *)(lVar22 + 0x140 + lVar15) = auVar37[7];
            *(char *)(lVar22 + 0x170 + lVar15) = auVar37[8];
            *(char *)(lVar22 + 0x1a0 + lVar15) = auVar37[9];
            *(char *)(lVar22 + 0x1d0 + lVar15) = auVar37[10];
            *(char *)(lVar22 + 0x200 + lVar15) = auVar37[0xb];
            *(char *)(lVar22 + 0x230 + lVar15) = auVar37[0xc];
            *(char *)(lVar22 + 0x260 + lVar15) = auVar37[0xd];
            *(char *)(lVar22 + 0x290 + lVar15) = auVar37[0xe];
            *(char *)(lVar22 + 0x2c0 + lVar15) = auVar37[0xf];
            *(char *)(lVar22 + 0x2f0 + lVar15) = auVar27[0];
            *(char *)(lVar22 + 800 + lVar15) = auVar27[1];
            *(char *)(lVar22 + 0x350 + lVar15) = auVar27[2];
            *(char *)(lVar22 + 0x380 + lVar15) = auVar27[3];
            *(char *)(lVar22 + 0x3b0 + lVar15) = auVar27[4];
            *(char *)(lVar22 + 0x3e0 + lVar15) = auVar27[5];
            *(char *)(lVar22 + 0x410 + lVar15) = auVar27[6];
            *(char *)(lVar22 + 0x440 + lVar15) = auVar27[7];
            *(char *)(lVar22 + 0x470 + lVar15) = auVar27[8];
            *(char *)(lVar22 + 0x4a0 + lVar15) = auVar27[9];
            *(char *)(lVar22 + 0x4d0 + lVar15) = auVar27[10];
            *(char *)(lVar22 + 0x500 + lVar15) = auVar27[0xb];
            *(char *)(lVar22 + 0x530 + lVar15) = auVar27[0xc];
            *(char *)(lVar22 + 0x560 + lVar15) = auVar27[0xd];
            *(char *)(lVar22 + 0x590 + lVar15) = auVar27[0xe];
            *(char *)(lVar22 + 0x5c0 + lVar15) = auVar27[0xf];
            *(char *)(lVar22 + 0x5f0 + lVar15) = auVar28[0];
            *(char *)(lVar22 + 0x620 + lVar15) = auVar28[1];
            *(char *)(lVar22 + 0x650 + lVar15) = auVar28[2];
            *(char *)(lVar22 + 0x680 + lVar15) = auVar28[3];
            *(char *)(lVar22 + 0x6b0 + lVar15) = auVar28[4];
            *(char *)(lVar22 + 0x6e0 + lVar15) = auVar28[5];
            *(char *)(lVar22 + 0x710 + lVar15) = auVar28[6];
            *(char *)(lVar22 + 0x740 + lVar15) = auVar28[7];
            *(char *)(lVar22 + 0x770 + lVar15) = auVar28[8];
            *(char *)(lVar22 + 0x7a0 + lVar15) = auVar28[9];
            *(char *)(lVar22 + 2000 + lVar15) = auVar28[10];
            *(char *)(lVar22 + 0x80 + lVar15) = auVar28[0xb];
            *(char *)(lVar22 + 0x83 + lVar15) = auVar28[0xc];
            *(char *)(lVar22 + 0x86 + lVar15) = auVar28[0xd];
            *(char *)(lVar22 + 0x89 + lVar15) = auVar28[0xe];
            *(char *)(lVar22 + 0x8c + lVar15) = auVar28[0xf];
            *(char *)(lVar22 + 0x8f + lVar15) = auVar29[0];
            *(char *)(lVar22 + 0x92 + lVar15) = auVar29[1];
            *(char *)(lVar22 + 0x95 + lVar15) = auVar29[2];
            *(char *)(lVar22 + 0x98 + lVar15) = auVar29[3];
            *(char *)(lVar22 + 0x9b + lVar15) = auVar29[4];
            *(char *)(lVar22 + 0x9e + lVar15) = auVar29[5];
            *(char *)(lVar22 + 0xa1 + lVar15) = auVar29[6];
            *(char *)(lVar22 + 0xa4 + lVar15) = auVar29[7];
            *(char *)(lVar22 + 0xa7 + lVar15) = auVar29[8];
            *(char *)(lVar22 + 0xaa + lVar15) = auVar29[9];
            *(char *)(lVar22 + 0xad + lVar15) = auVar29[10];
            *(char *)(lVar22 + 0xb0 + lVar15) = auVar29[0xb];
            *(char *)(lVar22 + 0xb3 + lVar15) = auVar29[0xc];
            *(char *)(lVar22 + 0xb6 + lVar15) = auVar29[0xd];
            *(char *)(lVar22 + 0xb9 + lVar15) = auVar29[0xe];
            *(char *)(lVar22 + 0xbc + lVar15) = auVar29[0xf];
            *(char *)(lVar22 + -0x20 + lVar15) = auVar36[0];
            *(char *)(lVar22 + 0x10 + lVar15) = auVar36[1];
            *(char *)(lVar22 + 0x40 + lVar15) = auVar36[2];
            *(char *)(lVar22 + 0x70 + lVar15) = auVar36[3];
            *(char *)(lVar22 + 0xa0 + lVar15) = auVar36[4];
            *(char *)(lVar22 + 0xd0 + lVar15) = auVar36[5];
            *(char *)(lVar22 + 0x100 + lVar15) = auVar36[6];
            *(char *)(lVar22 + 0x130 + lVar15) = auVar36[7];
            *(char *)(lVar22 + 0x160 + lVar15) = auVar36[8];
            *(char *)(lVar22 + 400 + lVar15) = auVar36[9];
            *(char *)(lVar22 + 0x1c0 + lVar15) = auVar36[10];
            *(char *)(lVar22 + 0x1f0 + lVar15) = auVar36[0xb];
            *(char *)(lVar22 + 0x220 + lVar15) = auVar36[0xc];
            *(char *)(lVar22 + 0x250 + lVar15) = auVar36[0xd];
            *(char *)(lVar22 + 0x280 + lVar15) = auVar36[0xe];
            *(char *)(lVar22 + 0x2b0 + lVar15) = auVar36[0xf];
            *(char *)(lVar22 + 0x2e0 + lVar15) = auVar30[0];
            *(char *)(lVar22 + 0x310 + lVar15) = auVar30[1];
            *(char *)(lVar22 + 0x340 + lVar15) = auVar30[2];
            *(char *)(lVar22 + 0x370 + lVar15) = auVar30[3];
            *(char *)(lVar22 + 0x3a0 + lVar15) = auVar30[4];
            *(char *)(lVar22 + 0x3d0 + lVar15) = auVar30[5];
            *(char *)(lVar22 + 0x400 + lVar15) = auVar30[6];
            *(char *)(lVar22 + 0x430 + lVar15) = auVar30[7];
            *(char *)(lVar22 + 0x460 + lVar15) = auVar30[8];
            *(char *)(lVar22 + 0x490 + lVar15) = auVar30[9];
            *(char *)(lVar22 + 0x4c0 + lVar15) = auVar30[10];
            *(char *)(lVar22 + 0x4f0 + lVar15) = auVar30[0xb];
            *(char *)(lVar22 + 0x520 + lVar15) = auVar30[0xc];
            *(char *)(lVar22 + 0x550 + lVar15) = auVar30[0xd];
            *(char *)(lVar22 + 0x580 + lVar15) = auVar30[0xe];
            *(char *)(lVar22 + 0x5b0 + lVar15) = auVar30[0xf];
            *(char *)(lVar22 + 0x5e + lVar15) = auVar31[0];
            *(char *)(lVar22 + 0x61 + lVar15) = auVar31[1];
            *(char *)(lVar22 + 100 + lVar15) = auVar31[2];
            *(char *)(lVar22 + 0x67 + lVar15) = auVar31[3];
            *(char *)(lVar22 + 0x6a + lVar15) = auVar31[4];
            *(char *)(lVar22 + 0x6d + lVar15) = auVar31[5];
            *(char *)(lVar22 + 0x70 + lVar15) = auVar31[6];
            *(char *)(lVar22 + 0x73 + lVar15) = auVar31[7];
            *(char *)(lVar22 + 0x76 + lVar15) = auVar31[0];
            *(char *)(lVar22 + 0x79 + lVar15) = auVar31[1];
            *(char *)(lVar22 + 0x7c + lVar15) = auVar31[2];
            *(char *)(lVar22 + 0x7f + lVar15) = auVar31[3];
            *(char *)(lVar22 + 0x82 + lVar15) = auVar31[4];
            *(char *)(lVar22 + 0x85 + lVar15) = auVar31[5];
            *(char *)(lVar22 + 0x88 + lVar15) = auVar31[6];
            *(char *)(lVar22 + 0x8b + lVar15) = auVar31[7];
            *(char *)(lVar22 + 0x8e + lVar15) = auVar32[0];
            *(char *)(lVar22 + 0x91 + lVar15) = auVar32[1];
            *(char *)(lVar22 + 0x94 + lVar15) = auVar32[2];
            *(char *)(lVar22 + 0x97 + lVar15) = auVar32[3];
            *(char *)(lVar22 + 0x9a + lVar15) = auVar32[4];
            *(char *)(lVar22 + 0x9d + lVar15) = auVar32[5];
            *(char *)(lVar22 + 0xa0 + lVar15) = auVar32[6];
            *(char *)(lVar22 + 0xa3 + lVar15) = auVar32[7];
            *(char *)(lVar22 + 0xa6 + lVar15) = auVar32[0];
            *(char *)(lVar22 + 0xa9 + lVar15) = auVar32[1];
            *(char *)(lVar22 + 0xac + lVar15) = auVar32[2];
            *(char *)(lVar22 + 0xaf + lVar15) = auVar32[3];
            *(char *)(lVar22 + 0xb2 + lVar15) = auVar32[4];
            *(char *)(lVar22 + 0xb5 + lVar15) = auVar32[5];
            *(char *)(lVar22 + 0xb8 + lVar15) = auVar32[6];
            *(char *)(lVar22 + 0xbb + lVar15) = auVar32[7];
            *(char *)(lVar22 + -3 + lVar15) = auVar39[0];
            *(char *)(lVar22 + lVar15) = auVar39[1];
            *(char *)(lVar22 + 3 + lVar15) = auVar39[2];
            *(char *)(lVar22 + 6 + lVar15) = auVar39[3];
            *(char *)(lVar22 + 9 + lVar15) = auVar39[4];
            *(char *)(lVar22 + 0xc + lVar15) = auVar39[5];
            *(char *)(lVar22 + 0xf + lVar15) = auVar39[6];
            *(char *)(lVar22 + 0x12 + lVar15) = auVar39[7];
            *(char *)(lVar22 + 0x15 + lVar15) = auVar39[0];
            *(char *)(lVar22 + 0x18 + lVar15) = auVar39[1];
            *(char *)(lVar22 + 0x1b + lVar15) = auVar39[2];
            *(char *)(lVar22 + 0x1e + lVar15) = auVar39[3];
            *(char *)(lVar22 + 0x21 + lVar15) = auVar39[4];
            *(char *)(lVar22 + 0x24 + lVar15) = auVar39[5];
            *(char *)(lVar22 + 0x27 + lVar15) = auVar39[6];
            *(char *)(lVar22 + 0x2a + lVar15) = auVar39[7];
            *(char *)(lVar22 + 0x2d + lVar15) = auVar33[0];
            *(char *)(lVar22 + 0x30 + lVar15) = auVar33[1];
            *(char *)(lVar22 + 0x33 + lVar15) = auVar33[2];
            *(char *)(lVar22 + 0x36 + lVar15) = auVar33[3];
            *(char *)(lVar22 + 0x39 + lVar15) = auVar33[4];
            *(char *)(lVar22 + 0x3c + lVar15) = auVar33[5];
            *(char *)(lVar22 + 0x3f + lVar15) = auVar33[6];
            *(char *)(lVar22 + 0x42 + lVar15) = auVar33[7];
            *(char *)(lVar22 + 0x45 + lVar15) = auVar33[0];
            *(char *)(lVar22 + 0x48 + lVar15) = auVar33[1];
            *(char *)(lVar22 + 0x4b + lVar15) = auVar33[2];
            *(char *)(lVar22 + 0x4e + lVar15) = auVar33[3];
            *(char *)(lVar22 + 0x51 + lVar15) = auVar33[4];
            *(char *)(lVar22 + 0x54 + lVar15) = auVar33[5];
            *(char *)(lVar22 + 0x57 + lVar15) = auVar33[6];
            *(char *)(lVar22 + 0x5a + lVar15) = auVar33[7];
            *(char *)(lVar22 + 0x5d + lVar15) = auVar34[0];
            *(char *)(lVar22 + 0x60 + lVar15) = auVar34[1];
            *(char *)(lVar22 + 99 + lVar15) = auVar34[2];
            *(char *)(lVar22 + 0x66 + lVar15) = auVar34[3];
            *(char *)(lVar22 + 0x69 + lVar15) = auVar34[4];
            *(char *)(lVar22 + 0x6c + lVar15) = auVar34[5];
            *(char *)(lVar22 + 0x6f + lVar15) = auVar34[6];
            *(char *)(lVar22 + 0x72 + lVar15) = auVar34[7];
            *(char *)(lVar22 + 0x75 + lVar15) = auVar34[0];
            *(char *)(lVar22 + 0x78 + lVar15) = auVar34[1];
            *(char *)(lVar22 + 0x7b + lVar15) = auVar34[2];
            *(char *)(lVar22 + 0x7e + lVar15) = auVar34[3];
            *(char *)(lVar22 + 0x81 + lVar15) = auVar34[4];
            *(char *)(lVar22 + 0x84 + lVar15) = auVar34[5];
            *(char *)(lVar22 + 0x87 + lVar15) = auVar34[6];
            *(char *)(lVar22 + 0x8a + lVar15) = auVar34[7];
            *(char *)(lVar22 + 0x8d + lVar15) = auVar35[0];
            *(char *)(lVar22 + 0x90 + lVar15) = auVar35[1];
            *(char *)(lVar22 + 0x93 + lVar15) = auVar35[2];
            *(char *)(lVar22 + 0x96 + lVar15) = auVar35[3];
            *(char *)(lVar22 + 0x99 + lVar15) = auVar35[4];
            *(char *)(lVar22 + 0x9c + lVar15) = auVar35[5];
            *(char *)(lVar22 + 0x9f + lVar15) = auVar35[6];
            *(char *)(lVar22 + 0xa2 + lVar15) = auVar35[7];
            *(char *)(lVar22 + 0xa5 + lVar15) = auVar35[0];
            *(char *)(lVar22 + 0xa8 + lVar15) = auVar35[1];
            *(char *)(lVar22 + 0xab + lVar15) = auVar35[2];
            *(char *)(lVar22 + 0xae + lVar15) = auVar35[3];
            *(char *)(lVar22 + 0xb1 + lVar15) = auVar35[4];
            *(char *)(lVar22 + 0xb4 + lVar15) = auVar35[5];
            *(char *)(lVar22 + 0xb7 + lVar15) = auVar35[6];
            *(char *)(lVar22 + 0xba + lVar15) = auVar35[7];
            lVar22 = lVar22 + 0xc0;
          } while (uVar9 < uVar16);
        }
        uVar9 = 0;
        if (uVar16 + 1 <= uVar17) {
          lVar15 = lVar15 + uVar16 * 3;
          uVar10 = uVar9;
          do {
            uVar9 = uVar9 + 1;
            *(undefined1 *)((uVar10 - 3) + lVar15) = uVar21;
            *(undefined1 *)((uVar10 - 2) + lVar15) = uVar23;
            *(undefined1 *)((uVar10 - 1) + lVar15) = uVar24;
            uVar10 = uVar10 + 3;
          } while (uVar9 < uVar17 - uVar16);
        }
        goto LAB_1409d5fda;
      }
    }
    lVar15 = 1;
    if (uVar16 / 6 != 0) {
      lVar15 = param_11 + lVar22;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        *(undefined1 *)(lVar15 + -3 + uVar9 * 6) = *(undefined1 *)puVar12;
        uVar17 = uVar9 + 1;
        *(undefined1 *)(lVar15 + -2 + uVar9 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lVar15 + -1 + uVar9 * 6) = *(undefined1 *)(puVar12 + 1);
        *(undefined1 *)(lVar15 + uVar9 * 6) = *(undefined1 *)puVar12;
        *(undefined1 *)(lVar15 + 1 + uVar9 * 6) = *(undefined1 *)((longlong)puVar12 + 1);
        *(undefined1 *)(lVar15 + 2 + uVar9 * 6) = *(undefined1 *)(puVar12 + 1);
      } while (uVar17 < uVar16 / 6);
      lVar15 = uVar9 + 2 + uVar17;
    }
    if (lVar15 - 1U < uVar16 / 3) {
      lVar22 = lVar22 + param_11;
      lVar15 = lVar15 * 3;
      *(undefined1 *)(lVar15 + -6 + lVar22) = *(undefined1 *)puVar12;
      *(undefined1 *)(lVar15 + -5 + lVar22) = *(undefined1 *)((longlong)puVar12 + 1);
      *(undefined1 *)(lVar15 + -4 + lVar22) = *(undefined1 *)(puVar12 + 1);
    }
  }
LAB_1409d5fda:
  (*pcStack_60)(param_11 + lVar6,param_4,lVar25,param_9,param_10);
  return;
}

