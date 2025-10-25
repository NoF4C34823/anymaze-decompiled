
/* WARNING: Removing unreachable block (ram,0x00014095c455) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14095b160(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined8 *param_8,undefined8 param_9,
                  int param_10,undefined1 (*param_11) [32])

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 (*pauVar19) [32];
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined4 uVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined4 uVar32;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auStack_228 [32];
  int iStack_208;
  undefined4 auStack_1e0 [8];
  undefined1 auStack_1c0 [232];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined1 *puStack_b8;
  longlong lStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  int iStack_98;
  longlong lStack_90;
  undefined8 *puStack_78;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  param_1 = param_1 + param_2 * param_3;
  uStack_40 = DAT_1436b4680 ^ (ulonglong)auStack_228;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar20 = (longlong)param_6;
  uVar11 = param_7 & 0xf;
  lVar13 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_208 = param_10;
    (*(code *)(&PTR_FUN_14308da40)[lVar20])(param_1,param_4,*param_5,param_9);
    if ((uStack_40 ^ (ulonglong)auStack_228) == DAT_1436b4680) {
      return;
    }
    goto LAB_14095ca4b;
  }
  lVar22 = *param_5;
  puStack_78 = &uStack_50;
  if (uVar11 == 6) {
    puStack_78 = param_8;
  }
  puVar10 = (undefined1 *)(longlong)param_10;
  if (lVar22 < (longlong)((longlong)puVar10 - 1U)) {
    lVar17 = -lVar13;
    lVar15 = 0;
    if (lVar17 < lVar13 + lVar22) {
      uVar3 = param_7 & 0x80;
      uVar16 = param_7 & 0x40;
      iStack_98 = param_10;
      do {
        lVar12 = lVar17;
        if (((lVar17 < 0) || (lVar22 <= lVar17)) && (param_7 != 0xf0)) {
          if (uVar11 != 6) {
            if (uVar11 == 1) {
              if (lVar17 < 0) {
                lVar12 = 0;
                if (uVar16 != 0) {
                  lVar12 = lVar17;
                }
              }
              else if (uVar3 == 0) {
                lVar12 = lVar22 + -1;
              }
            }
            else if (uVar11 == 3) {
              if (lVar22 < 2) {
                if (lVar17 < 0) {
                  if ((uVar16 == 0) && (lVar12 = -lVar17, uVar3 == 0)) {
                    lVar12 = 0;
                  }
                }
                else if (((0 < lVar17) && (uVar3 == 0)) && (lVar12 = -lVar17, uVar16 == 0)) {
                  lVar12 = 0;
                }
              }
              else if ((lVar17 < 0) || (lVar22 <= lVar17)) {
                if (lVar17 < 0) goto LAB_14095ca20;
                while (uVar3 == 0) {
                  for (lVar12 = (lVar22 + -1) * 2 - lVar12; lVar12 < 0; lVar12 = -lVar12) {
LAB_14095ca20:
                    if (uVar16 != 0) goto LAB_14095c86c;
                  }
                  if (lVar12 < lVar22) break;
                }
              }
            }
            goto LAB_14095c86c;
          }
          uVar2 = uVar16;
          if (-1 < lVar17) {
            uVar2 = uVar3;
          }
          if (uVar2 != 0) goto LAB_14095c86c;
          uVar23 = *(undefined4 *)puStack_78;
          uVar28 = *(undefined4 *)((longlong)puStack_78 + 4);
          uVar32 = *(undefined4 *)(puStack_78 + 1);
        }
        else {
LAB_14095c86c:
          uVar23 = *(undefined4 *)(param_1 + lVar12 * 0xc);
          uVar28 = *(undefined4 *)(param_1 + 4 + lVar12 * 0xc);
          uVar32 = *(undefined4 *)(param_1 + 8 + lVar12 * 0xc);
        }
        lVar17 = lVar17 + 1;
        *(undefined4 *)(*param_11 + lVar15) = uVar23;
        *(undefined4 *)(*param_11 + lVar15 + 4) = uVar28;
        *(undefined4 *)(*param_11 + lVar15 + 8) = uVar32;
        lVar15 = lVar15 + 0xc;
        lStack_a0 = param_4;
        lStack_90 = lVar13;
      } while (lVar17 < lVar13 + lVar22);
    }
    iStack_208 = param_10;
    (*(code *)(&PTR_FUN_14308da40)[lVar20])(*param_11 + lVar13 * 0xc,param_4,lVar22,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar17 = (longlong)puVar10 * 3;
      lStack_b0 = lVar13 * 3;
      pauVar1 = (undefined1 (*) [32])(lVar13 * 0xc);
      puStack_b8 = *param_11 + lVar13 * 0xc;
      uVar9 = lVar17 - 3;
      if (uVar9 != 0 && SCARRY8(lVar17,-3) == (longlong)uVar9 < 0) {
        if (6 < (longlong)uVar9) {
          lVar15 = (longlong)puVar10 * 0xc + -0xc;
          if ((lVar15 <= (longlong)puStack_b8 - param_1) ||
             (lVar15 <= -((longlong)puStack_b8 - param_1))) {
            if ((longlong)uVar9 < 8) {
LAB_14095c957:
              uVar4 = 0;
            }
            else {
              if ((longlong)uVar9 < 0xbd) {
                uVar5 = 0;
                uVar4 = uVar9 & 0xfffffffffffffff8;
              }
              else {
                uVar5 = (ulonglong)puStack_b8 & 0x1f;
                if (uVar5 != 0) {
                  if (((ulonglong)puStack_b8 & 3) != 0) goto LAB_14095c957;
                  uVar5 = 0x20 - uVar5 >> 2;
                }
                if ((longlong)uVar9 < (longlong)(uVar5 + 8)) goto LAB_14095c957;
                uVar14 = 0;
                uVar4 = uVar9 - (uVar9 - uVar5 & 7);
                if (uVar5 != 0) {
                  do {
                    *(undefined4 *)(puStack_b8 + uVar14 * 4) = *(undefined4 *)(param_1 + uVar14 * 4)
                    ;
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < uVar5);
                }
              }
              do {
                *(undefined1 (*) [32])(puStack_b8 + uVar5 * 4) =
                     *(undefined1 (*) [32])(param_1 + uVar5 * 4);
                uVar5 = uVar5 + 8;
              } while (uVar5 < uVar4);
            }
            for (; uVar4 < uVar9; uVar4 = uVar4 + 1) {
              *(undefined4 *)(puStack_b8 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar4 * 4);
            }
            goto LAB_14095b444;
          }
        }
        lVar15 = 1;
        uVar5 = (longlong)(param_10 * 3) - 3;
        uVar4 = uVar5 >> 1;
        uVar9 = 0;
        if (uVar4 != 0) {
          do {
            uVar14 = uVar9;
            *(undefined4 *)(puStack_b8 + uVar14 * 8) = *(undefined4 *)(param_1 + uVar14 * 8);
            *(undefined4 *)(puStack_b8 + (uVar14 * 2 + 1) * 4) =
                 *(undefined4 *)(param_1 + 4 + uVar14 * 8);
            uVar9 = uVar14 + 1;
          } while (uVar9 < uVar4);
          lVar15 = uVar14 + 2 + uVar9;
        }
        if (lVar15 - 1U < uVar5) {
          *(undefined4 *)(param_11[-1] + lVar13 * 0xc + lVar15 * 4 + 0x1c) =
               *(undefined4 *)(param_1 + (lVar15 - 1U) * 4);
        }
      }
LAB_14095b444:
      uStack_c8._4_4_ = (undefined4)((ulonglong)pauVar1 >> 0x20);
      uStack_c8 = pauVar1;
      if (uVar11 == 1) {
        if (0 < lStack_b0) {
          uVar9 = (lStack_b0 + 2) / 3;
          if (((longlong)uVar9 < 7) ||
             (((longlong)param_11 - (longlong)puStack_b8 < 0xc &&
              (-((longlong)param_11 - (longlong)puStack_b8) < (longlong)(uVar9 * 0xc))))) {
            uVar4 = 0;
            lVar12 = 0;
            lVar15 = 0;
            uStack_d0 = (code *)(CONCAT44(uStack_d0._4_4_,param_7) & 0xffffffff0000000f);
            lStack_90 = lVar13;
            uStack_d8 = puVar10;
            iStack_98 = param_10;
            uStack_a8 = param_7;
            lStack_c0 = param_1;
            lStack_a0 = param_4;
            lVar17 = lVar15;
            do {
              uVar14 = 0;
              uVar23 = *(undefined4 *)(*pauVar1 + (longlong)*param_11);
              uVar5 = lVar12 + 0x40U;
              if ((longlong)uVar9 <= (longlong)(lVar12 + 0x40U)) {
                uVar5 = uVar9;
              }
              uVar21 = uVar5 - lVar12;
              uVar7 = uVar14;
              if (0xf < (longlong)uVar21) {
                auVar25._4_4_ = uVar23;
                auVar25._0_4_ = uVar23;
                auVar25._8_4_ = uVar23;
                auVar25._12_4_ = uVar23;
                auVar25._16_4_ = uVar23;
                auVar25._20_4_ = uVar23;
                auVar25._24_4_ = uVar23;
                auVar25._28_4_ = uVar23;
                uVar7 = uVar21 & 0xfffffffffffffff0;
                do {
                  iVar18 = (int)uVar14;
                  uVar14 = uVar14 + 0x10;
                  *(undefined1 (*) [32])(auStack_1e0 + iVar18) = auVar25;
                  *(undefined1 (*) [32])(auStack_1c0 + (longlong)iVar18 * 4) = auVar25;
                } while (uVar14 < uVar7);
              }
              uVar14 = 0;
              puVar10 = uStack_d8;
              param_1 = lStack_c0;
              param_7 = uStack_a8;
              param_4 = lStack_a0;
              param_10 = iStack_98;
              lVar13 = lStack_90;
              for (; uStack_d8 = puVar10, lStack_c0 = param_1, uStack_a8 = param_7,
                  lStack_a0 = param_4, iStack_98 = param_10, lStack_90 = lVar13, uVar7 < uVar21;
                  uVar7 = uVar7 + 1) {
                auStack_1e0[(int)uVar7] = uVar23;
                puVar10 = uStack_d8;
                param_1 = lStack_c0;
                param_7 = uStack_a8;
                param_4 = lStack_a0;
                param_10 = iStack_98;
                lVar13 = lStack_90;
              }
              uStack_c8 = param_11;
              uVar7 = uVar14;
              do {
                iVar18 = (int)uVar7;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(*param_11 + uVar14 + lVar15) = auStack_1e0[iVar18];
                *(undefined4 *)(*param_11 + uVar14 + 4 + lVar15) = *(undefined4 *)(puStack_b8 + 4);
                *(undefined4 *)(*param_11 + uVar14 + 8 + lVar15) = *(undefined4 *)(puStack_b8 + 8);
                uVar14 = uVar14 + 0xc;
              } while (uVar7 < uVar5 + lVar17);
              uVar4 = uVar4 + 1;
              lVar12 = lVar12 + 0x40;
              lVar15 = lVar15 + 0x300;
              lVar17 = lVar17 + -0x40;
            } while (uVar4 < uVar9 + 0x3f >> 6);
            uVar11 = (uint)uStack_d0;
            pauVar1 = uStack_c8;
          }
          else {
            uVar23 = *(undefined4 *)(*pauVar1 + (longlong)*param_11);
            uVar28 = *(undefined4 *)(puStack_b8 + 4);
            uVar32 = *(undefined4 *)(puStack_b8 + 8);
            if ((longlong)uVar9 < 0x10) {
              uVar4 = 0;
            }
            else {
              uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar32);
              uVar4 = uVar9 & 0xfffffffffffffff0;
              uVar5 = 0;
              pauVar19 = param_11;
              do {
                uVar5 = uVar5 + 0x10;
                *(undefined4 *)*pauVar19 = uVar23;
                *(undefined4 *)(*pauVar19 + 0xc) = uVar23;
                *(undefined4 *)(*pauVar19 + 0x18) = uVar23;
                *(undefined4 *)(pauVar19[1] + 4) = uVar23;
                *(undefined4 *)(pauVar19[1] + 0x10) = uVar23;
                *(undefined4 *)(pauVar19[1] + 0x1c) = uVar23;
                *(undefined4 *)(pauVar19[2] + 8) = uVar23;
                *(undefined4 *)(pauVar19[2] + 0x14) = uVar23;
                *(undefined4 *)pauVar19[3] = uVar23;
                *(undefined4 *)(pauVar19[3] + 0xc) = uVar23;
                *(undefined4 *)(pauVar19[3] + 0x18) = uVar23;
                *(undefined4 *)(pauVar19[4] + 4) = uVar23;
                *(undefined4 *)(pauVar19[4] + 0x10) = uVar23;
                *(undefined4 *)(pauVar19[4] + 0x1c) = uVar23;
                *(undefined4 *)(pauVar19[5] + 8) = uVar23;
                *(undefined4 *)(pauVar19[5] + 0x14) = uVar23;
                *(undefined4 *)(*pauVar19 + 4) = uVar28;
                *(undefined4 *)(*pauVar19 + 0x10) = uVar28;
                *(undefined4 *)(*pauVar19 + 0x1c) = uVar28;
                *(undefined4 *)(pauVar19[1] + 8) = uVar28;
                *(undefined4 *)(pauVar19[1] + 0x14) = uVar28;
                *(undefined4 *)pauVar19[2] = uVar28;
                *(undefined4 *)(pauVar19[2] + 0xc) = uVar28;
                *(undefined4 *)(pauVar19[2] + 0x18) = uVar28;
                *(undefined4 *)(pauVar19[3] + 4) = uVar28;
                *(undefined4 *)(pauVar19[3] + 0x10) = uVar28;
                *(undefined4 *)(pauVar19[3] + 0x1c) = uVar28;
                *(undefined4 *)(pauVar19[4] + 8) = uVar28;
                *(undefined4 *)(pauVar19[4] + 0x14) = uVar28;
                *(undefined4 *)pauVar19[5] = uVar28;
                *(undefined4 *)(pauVar19[5] + 0xc) = uVar28;
                *(undefined4 *)(pauVar19[5] + 0x18) = uVar28;
                *(undefined4 *)(*pauVar19 + 8) = uVar32;
                *(undefined4 *)(*pauVar19 + 0x14) = uVar32;
                *(undefined4 *)pauVar19[1] = uVar32;
                *(undefined4 *)(pauVar19[1] + 0xc) = uVar32;
                *(undefined4 *)(pauVar19[1] + 0x18) = uVar32;
                *(undefined4 *)(pauVar19[2] + 4) = uVar32;
                *(undefined4 *)(pauVar19[2] + 0x10) = uVar32;
                *(undefined4 *)(pauVar19[2] + 0x1c) = uVar32;
                *(undefined4 *)(pauVar19[3] + 8) = uVar32;
                *(undefined4 *)(pauVar19[3] + 0x14) = uVar32;
                *(undefined4 *)pauVar19[4] = uVar32;
                *(undefined4 *)(pauVar19[4] + 0xc) = uVar32;
                *(undefined4 *)(pauVar19[4] + 0x18) = uVar32;
                *(undefined4 *)(pauVar19[5] + 4) = uVar32;
                *(undefined4 *)(pauVar19[5] + 0x10) = uVar32;
                *(undefined4 *)(pauVar19[5] + 0x1c) = uVar32;
                pauVar19 = pauVar19 + 6;
                lStack_c0 = param_1;
              } while (uVar5 < uVar4);
            }
            if (uVar4 + 1 <= uVar9) {
              uVar9 = uVar9 - uVar4;
              if ((longlong)uVar9 < 2) {
                uVar5 = 0;
              }
              else {
                uVar7 = 0;
                uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar23);
                uStack_c8 = (undefined1 (*) [32])CONCAT44(uStack_c8._4_4_,uVar28);
                uVar5 = uVar9 & 0xfffffffffffffffe;
                iStack_98 = param_10;
                uVar14 = uVar7;
                do {
                  uVar7 = uVar7 + 2;
                  *(undefined4 *)(*param_11 + uVar14 + 8 + uVar4 * 0xc) = uVar32;
                  *(undefined4 *)(*param_11 + uVar14 + 0x14 + uVar4 * 0xc) = uVar32;
                  *(undefined4 *)(*param_11 + uVar14 + 4 + uVar4 * 0xc) = uVar28;
                  *(undefined4 *)(*param_11 + uVar14 + 0x10 + uVar4 * 0xc) = uVar28;
                  *(undefined4 *)(*param_11 + uVar14 + uVar4 * 0xc) = uVar23;
                  *(undefined4 *)(*param_11 + uVar14 + 0xc + uVar4 * 0xc) = uVar23;
                  uVar14 = uVar14 + 0x18;
                  lStack_c0 = param_1;
                } while (uVar7 < uVar5);
              }
              lVar17 = uVar5 * 0xc;
              for (; pauVar1 = uStack_c8, uVar5 < uVar9; uVar5 = uVar5 + 1) {
                *(undefined4 *)(*param_11 + lVar17 + uVar4 * 0xc) = uVar23;
                *(undefined4 *)(*param_11 + lVar17 + 4 + uVar4 * 0xc) = uVar28;
                *(undefined4 *)(*param_11 + lVar17 + 8 + uVar4 * 0xc) = uVar32;
                lVar17 = lVar17 + 0xc;
              }
            }
          }
        }
      }
      else if (uVar11 == 3) {
        if (0 < lStack_b0) {
          lVar15 = 1;
          uStack_d8 = (undefined1 *)(lStack_b0 + 2);
          lVar6 = 0;
          uVar9 = 0;
          lVar12 = lVar6;
          if ((ulonglong)uStack_d8 / 6 != 0) {
            do {
              uVar4 = uVar9;
              uVar9 = uVar4 + 1;
              *(undefined4 *)(*param_11 + lVar6) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 0x14);
              *(undefined4 *)(*param_11 + lVar6 + 4) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 0x18);
              *(undefined4 *)(*param_11 + lVar6 + 8) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 0x1c);
              *(undefined4 *)(*param_11 + lVar6 + 0xc) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 8);
              *(undefined4 *)(*param_11 + lVar6 + 0x10) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 0xc);
              *(undefined4 *)(*param_11 + lVar6 + 0x14) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 0x10);
              lVar6 = lVar6 + 0x18;
              lVar12 = lVar12 + -0x18;
            } while (uVar9 < (ulonglong)uStack_d8 / 6);
            lVar15 = uVar4 + 2 + uVar9;
            lStack_c0 = param_1;
          }
          if (lVar15 - 1U < (ulonglong)uStack_d8 / 3) {
            lVar17 = lVar17 - (lVar15 * 3 + -3);
            *(undefined4 *)(param_11[-1] + lVar15 * 0xc + 0x14) =
                 *(undefined4 *)((longlong)param_11 + lVar17 * 4 + -0xc);
            *(undefined4 *)(param_11[-1] + lVar15 * 0xc + 0x18) =
                 *(undefined4 *)((longlong)param_11 + lVar17 * 4 + -8);
            *(undefined4 *)(param_11[-1] + lVar15 * 0xc + 0x1c) =
                 *(undefined4 *)((longlong)param_11 + lVar17 * 4 + -4);
          }
        }
      }
      else if ((uVar11 == 6) && (0 < lStack_b0)) {
        uStack_d8 = (undefined1 *)(lStack_b0 + 2);
        uVar9 = (longlong)uStack_d8 / 3;
        if (6 < (longlong)uVar9) {
          lVar17 = (longlong)puStack_78 + (4 - (longlong)param_11);
          if ((((longlong)(uVar9 * 0xc) <= lVar17) || (7 < -lVar17)) &&
             ((3 < (longlong)param_11 - (longlong)puStack_78 ||
              ((longlong)(uVar9 * 0xc) <= -((longlong)param_11 - (longlong)puStack_78))))) {
            uVar23 = *(undefined4 *)puStack_78;
            uVar28 = *(undefined4 *)((longlong)puStack_78 + 4);
            uVar32 = *(undefined4 *)(puStack_78 + 1);
            if ((longlong)uVar9 < 0x10) {
              uVar4 = 0;
            }
            else {
              uStack_d8._4_4_ = (undefined4)((ulonglong)uStack_d8 >> 0x20);
              uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar32);
              uVar4 = uVar9 & 0xfffffffffffffff0;
              uVar5 = 0;
              auVar24._4_4_ = uVar23;
              auVar24._0_4_ = uVar23;
              auVar24._8_4_ = uVar23;
              auVar24._12_4_ = uVar23;
              auVar24._16_4_ = uVar23;
              auVar24._20_4_ = uVar23;
              auVar24._24_4_ = uVar23;
              auVar24._28_4_ = uVar23;
              auVar33._4_4_ = uVar28;
              auVar33._0_4_ = uVar28;
              auVar33._8_4_ = uVar28;
              auVar33._12_4_ = uVar28;
              auVar33._16_4_ = uVar28;
              auVar33._20_4_ = uVar28;
              auVar33._24_4_ = uVar28;
              auVar33._28_4_ = uVar28;
              auVar29._4_4_ = uVar32;
              auVar29._0_4_ = uVar32;
              auVar29._8_4_ = uVar32;
              auVar29._12_4_ = uVar32;
              auVar29._16_4_ = uVar32;
              auVar29._20_4_ = uVar32;
              auVar29._24_4_ = uVar32;
              auVar29._28_4_ = uVar32;
              auVar27 = vpermd_avx2(_DAT_14308d900,auVar24);
              auVar24 = vpermd_avx2(_DAT_14308d920,auVar33);
              auVar29 = vpermd_avx2(_DAT_14308d940,auVar29);
              auVar25 = vpblendd_avx2(auVar27,auVar24,0x92);
              auVar24 = vpblendd_avx2(auVar24,auVar29,0x92);
              auVar27 = vpblendd_avx2(auVar29,auVar27,0x92);
              auVar29 = vpblendd_avx2(auVar25,auVar27,0x24);
              auVar25 = vpblendd_avx2(auVar24,auVar25,0x24);
              auVar24 = vpblendd_avx2(auVar27,auVar24,0x24);
              pauVar19 = param_11;
              do {
                uVar5 = uVar5 + 0x10;
                *(undefined4 *)pauVar19[3] = uVar23;
                *(undefined4 *)(pauVar19[3] + 0xc) = uVar23;
                *(undefined4 *)(pauVar19[3] + 0x18) = uVar23;
                *(undefined4 *)(pauVar19[4] + 4) = uVar23;
                *(undefined4 *)(pauVar19[4] + 0x10) = uVar23;
                *(undefined4 *)(pauVar19[4] + 0x1c) = uVar23;
                *(undefined4 *)(pauVar19[5] + 8) = uVar23;
                *(undefined4 *)(pauVar19[5] + 0x14) = uVar23;
                *(undefined4 *)(pauVar19[3] + 4) = uVar28;
                *(undefined4 *)(pauVar19[3] + 0x10) = uVar28;
                *(undefined4 *)(pauVar19[3] + 0x1c) = uVar28;
                *(undefined4 *)(pauVar19[4] + 8) = uVar28;
                *(undefined4 *)(pauVar19[4] + 0x14) = uVar28;
                *(undefined4 *)pauVar19[5] = uVar28;
                *(undefined4 *)(pauVar19[5] + 0xc) = uVar28;
                *(undefined4 *)(pauVar19[5] + 0x18) = uVar28;
                *pauVar19 = auVar29;
                pauVar19[1] = auVar24;
                pauVar19[2] = auVar25;
                *(undefined4 *)(pauVar19[3] + 8) = uVar32;
                *(undefined4 *)(pauVar19[3] + 0x14) = uVar32;
                *(undefined4 *)pauVar19[4] = uVar32;
                *(undefined4 *)(pauVar19[4] + 0xc) = uVar32;
                *(undefined4 *)(pauVar19[4] + 0x18) = uVar32;
                *(undefined4 *)(pauVar19[5] + 4) = uVar32;
                *(undefined4 *)(pauVar19[5] + 0x10) = uVar32;
                *(undefined4 *)(pauVar19[5] + 0x1c) = uVar32;
                pauVar19 = pauVar19 + 6;
                lStack_c0 = param_1;
              } while (uVar5 < uVar4);
            }
            if (uVar4 + 1 <= uVar9) {
              uVar9 = uVar9 - uVar4;
              if ((longlong)uVar9 < 2) {
                uVar5 = 0;
              }
              else {
                uVar7 = 0;
                uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar23);
                uStack_c8 = (undefined1 (*) [32])CONCAT44(uStack_c8._4_4_,uVar28);
                uVar5 = uVar9 & 0xfffffffffffffffe;
                iStack_98 = param_10;
                uVar14 = uVar7;
                do {
                  uVar7 = uVar7 + 2;
                  *(undefined4 *)(*param_11 + uVar14 + 8 + uVar4 * 0xc) = uVar32;
                  *(undefined4 *)(*param_11 + uVar14 + 0x14 + uVar4 * 0xc) = uVar32;
                  *(undefined4 *)(*param_11 + uVar14 + 4 + uVar4 * 0xc) = uVar28;
                  *(undefined4 *)(*param_11 + uVar14 + 0x10 + uVar4 * 0xc) = uVar28;
                  *(undefined4 *)(*param_11 + uVar14 + uVar4 * 0xc) = uVar23;
                  *(undefined4 *)(*param_11 + uVar14 + 0xc + uVar4 * 0xc) = uVar23;
                  uVar14 = uVar14 + 0x18;
                  lStack_c0 = param_1;
                } while (uVar7 < uVar5);
              }
              lVar17 = uVar5 * 0xc;
              for (; pauVar1 = uStack_c8, uVar5 < uVar9; uVar5 = uVar5 + 1) {
                *(undefined4 *)(*param_11 + lVar17 + uVar4 * 0xc) = uVar23;
                *(undefined4 *)(*param_11 + lVar17 + 4 + uVar4 * 0xc) = uVar28;
                *(undefined4 *)(*param_11 + lVar17 + 8 + uVar4 * 0xc) = uVar32;
                lVar17 = lVar17 + 0xc;
              }
            }
            goto LAB_14095be63;
          }
        }
        lVar17 = 1;
        lVar15 = 0;
        uVar9 = 0;
        if ((ulonglong)uStack_d8 / 6 != 0) {
          do {
            uVar4 = uVar9;
            uVar9 = uVar4 + 1;
            *(undefined4 *)(*param_11 + lVar15) = *(undefined4 *)puStack_78;
            *(undefined4 *)(*param_11 + lVar15 + 4) = *(undefined4 *)((longlong)puStack_78 + 4);
            *(undefined4 *)(*param_11 + lVar15 + 8) = *(undefined4 *)(puStack_78 + 1);
            *(undefined4 *)(*param_11 + lVar15 + 0xc) = *(undefined4 *)puStack_78;
            *(undefined4 *)(*param_11 + lVar15 + 0x10) = *(undefined4 *)((longlong)puStack_78 + 4);
            *(undefined4 *)(*param_11 + lVar15 + 0x14) = *(undefined4 *)(puStack_78 + 1);
            lVar15 = lVar15 + 0x18;
          } while (uVar9 < (ulonglong)uStack_d8 / 6);
          lVar17 = uVar4 + 2 + uVar9;
        }
        if (lVar17 - 1U < (ulonglong)uStack_d8 / 3) {
          *(undefined4 *)(param_11[-1] + lVar17 * 0xc + 0x14) = *(undefined4 *)puStack_78;
          *(undefined4 *)(param_11[-1] + lVar17 * 0xc + 0x18) =
               *(undefined4 *)((longlong)puStack_78 + 4);
          *(undefined4 *)(param_11[-1] + lVar17 * 0xc + 0x1c) = *(undefined4 *)(puStack_78 + 1);
        }
      }
LAB_14095be63:
      uStack_c8 = pauVar1;
      uStack_d0 = (code *)(&PTR_FUN_14308da40)[lVar20];
      iStack_208 = param_10;
      uStack_a8 = param_7;
      lStack_a0 = param_4;
      (*uStack_d0)(puStack_b8,param_4,lVar13,param_9);
      lVar22 = lVar22 - lVar13;
      param_1 = param_1 + lStack_b0 * 4;
      param_4 = lStack_a0 + lStack_b0 * 4;
      param_7 = uStack_a8;
    }
    else {
      uStack_d0 = (code *)(&PTR_FUN_14308da40)[lVar20];
    }
    iStack_208 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar13 < lVar22) {
        lVar22 = lVar22 - lVar13;
        lStack_a0 = param_4;
        (*uStack_d0)(param_1,param_4,lVar22,param_9);
        param_1 = param_1 + lVar22 * 0xc;
        param_4 = lStack_a0 + lVar22 * 0xc;
      }
      lVar20 = (longlong)puVar10 * 3;
      if (lVar20 != 3 && SCARRY8(lVar20,-3) == lVar20 + -3 < 0) {
        lVar22 = 1;
        uVar9 = ((lVar20 + -1) / 3) * 3;
        uVar4 = uVar9 >> 1;
        if (uVar4 != 0) {
          lVar22 = lVar13 * -0xc + param_1;
          uVar5 = 0;
          do {
            uVar14 = uVar5;
            *(undefined4 *)(*param_11 + uVar14 * 8) = *(undefined4 *)(lVar22 + uVar14 * 8);
            *(undefined4 *)(*param_11 + uVar14 * 8 + 4) = *(undefined4 *)(lVar22 + 4 + uVar14 * 8);
            uVar5 = uVar14 + 1;
          } while (uVar5 < uVar4);
          lVar22 = uVar14 + 2 + uVar5;
        }
        if (lVar22 - 1U < uVar9) {
          *(undefined4 *)(param_11[-1] + lVar22 * 4 + 0x1c) =
               *(undefined4 *)(param_1 + (lVar13 * -3 + -1 + lVar22) * 4);
        }
      }
      lVar22 = lVar13 * 3;
      if (uVar11 == 1) {
        if (0 < lVar22) {
          uVar9 = lVar22 + 2;
          uVar4 = (longlong)uVar9 / 3;
          if ((longlong)uVar4 < 7) {
            lVar20 = 1;
            lVar22 = 0;
            uVar4 = 0;
            if (uVar9 / 6 != 0) {
              do {
                uVar5 = uVar4;
                uVar4 = uVar5 + 1;
                *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x14) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 8);
                *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x18) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0xc);
                *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x1c) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0x10);
                *(undefined4 *)(*param_11 + lVar22 + (longlong)puVar10 * 0xc) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 8);
                *(undefined4 *)(*param_11 + lVar22 + 4 + (longlong)puVar10 * 0xc) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0xc);
                *(undefined4 *)(*param_11 + lVar22 + 8 + (longlong)puVar10 * 0xc) =
                     *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0x10);
                lVar22 = lVar22 + 0x18;
              } while (uVar4 < uVar9 / 6);
              lVar20 = uVar5 + 2 + uVar4;
            }
            if (lVar20 - 1U < uVar9 / 3) {
              *(undefined4 *)(param_11[-1] + lVar20 * 0xc + (longlong)puVar10 * 0xc + 8) =
                   *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 8);
              *(undefined4 *)(param_11[-1] + lVar20 * 0xc + (longlong)puVar10 * 0xc + 0xc) =
                   *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0xc);
              *(undefined4 *)(param_11[-1] + lVar20 * 0xc + (longlong)puVar10 * 0xc + 0x10) =
                   *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + 0x10);
            }
          }
          else {
            puVar10 = *param_11 + (longlong)puVar10 * 0xc;
            uVar23 = *(undefined4 *)(puVar10 + -0x18);
            uVar28 = *(undefined4 *)(puVar10 + -0x14);
            uVar32 = *(undefined4 *)(puVar10 + -0x10);
            if ((longlong)uVar4 < 0x10) {
              uVar9 = 0;
            }
            else {
              auVar27._4_4_ = uVar23;
              auVar27._0_4_ = uVar23;
              auVar27._8_4_ = uVar23;
              auVar27._12_4_ = uVar23;
              auVar27._16_4_ = uVar23;
              auVar27._20_4_ = uVar23;
              auVar27._24_4_ = uVar23;
              auVar27._28_4_ = uVar23;
              auVar35._4_4_ = uVar28;
              auVar35._0_4_ = uVar28;
              auVar35._8_4_ = uVar28;
              auVar35._12_4_ = uVar28;
              auVar35._16_4_ = uVar28;
              auVar35._20_4_ = uVar28;
              auVar35._24_4_ = uVar28;
              auVar35._28_4_ = uVar28;
              auVar31._4_4_ = uVar32;
              auVar31._0_4_ = uVar32;
              auVar31._8_4_ = uVar32;
              auVar31._12_4_ = uVar32;
              auVar31._16_4_ = uVar32;
              auVar31._20_4_ = uVar32;
              auVar31._24_4_ = uVar32;
              auVar31._28_4_ = uVar32;
              auVar27 = vpermd_avx2(_DAT_14308d900,auVar27);
              uVar9 = uVar4 & 0xfffffffffffffff0;
              uVar5 = 0;
              auVar24 = vpermd_avx2(_DAT_14308d920,auVar35);
              auVar29 = vpermd_avx2(_DAT_14308d940,auVar31);
              auVar25 = vpblendd_avx2(auVar27,auVar24,0x92);
              auVar24 = vpblendd_avx2(auVar24,auVar29,0x92);
              auVar27 = vpblendd_avx2(auVar29,auVar27,0x92);
              auVar29 = vpblendd_avx2(auVar25,auVar27,0x24);
              auVar25 = vpblendd_avx2(auVar24,auVar25,0x24);
              auVar24 = vpblendd_avx2(auVar27,auVar24,0x24);
              puVar8 = puVar10;
              do {
                uVar5 = uVar5 + 0x10;
                *(undefined4 *)(puVar8 + 0x54) = uVar23;
                *(undefined4 *)(puVar8 + 0x60) = uVar23;
                *(undefined4 *)(puVar8 + 0x6c) = uVar23;
                *(undefined4 *)(puVar8 + 0x78) = uVar23;
                *(undefined4 *)(puVar8 + 0x84) = uVar23;
                *(undefined4 *)(puVar8 + 0x90) = uVar23;
                *(undefined4 *)(puVar8 + 0x9c) = uVar23;
                *(undefined4 *)(puVar8 + 0xa8) = uVar23;
                *(undefined4 *)(puVar8 + 0x58) = uVar28;
                *(undefined4 *)(puVar8 + 100) = uVar28;
                *(undefined4 *)(puVar8 + 0x70) = uVar28;
                *(undefined4 *)(puVar8 + 0x7c) = uVar28;
                *(undefined4 *)(puVar8 + 0x88) = uVar28;
                *(undefined4 *)(puVar8 + 0x94) = uVar28;
                *(undefined4 *)(puVar8 + 0xa0) = uVar28;
                *(undefined4 *)(puVar8 + 0xac) = uVar28;
                *(undefined1 (*) [32])(puVar8 + -0xc) = auVar29;
                *(undefined1 (*) [32])(puVar8 + 0x14) = auVar24;
                *(undefined1 (*) [32])(puVar8 + 0x34) = auVar25;
                *(undefined4 *)(puVar8 + 0x5c) = uVar32;
                *(undefined4 *)(puVar8 + 0x68) = uVar32;
                *(undefined4 *)(puVar8 + 0x74) = uVar32;
                *(undefined4 *)(puVar8 + 0x80) = uVar32;
                *(undefined4 *)(puVar8 + 0x8c) = uVar32;
                *(undefined4 *)(puVar8 + 0x98) = uVar32;
                *(undefined4 *)(puVar8 + 0xa4) = uVar32;
                *(undefined4 *)(puVar8 + 0xb0) = uVar32;
                puVar8 = puVar8 + 0xc0;
              } while (uVar5 < uVar9);
            }
            if (uVar9 + 1 <= uVar4) {
              uVar4 = uVar4 - uVar9;
              if ((longlong)uVar4 < 2) {
                uVar5 = 0;
              }
              else {
                uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar28);
                uVar14 = 0;
                uVar5 = uVar4 & 0xfffffffffffffffe;
                lVar20 = 0;
                do {
                  uVar14 = uVar14 + 2;
                  *(undefined4 *)(puVar10 + lVar20 + -4 + uVar9 * 0xc) = uVar32;
                  *(undefined4 *)(puVar10 + lVar20 + 8 + uVar9 * 0xc) = uVar32;
                  *(undefined4 *)(puVar10 + lVar20 + -8 + uVar9 * 0xc) = uVar28;
                  *(undefined4 *)(puVar10 + lVar20 + 4 + uVar9 * 0xc) = uVar28;
                  *(undefined4 *)(puVar10 + lVar20 + -0xc + uVar9 * 0xc) = uVar23;
                  *(undefined4 *)(puVar10 + lVar20 + uVar9 * 0xc) = uVar23;
                  lVar20 = lVar20 + 0x18;
                  lStack_a0 = param_4;
                } while (uVar14 < uVar5);
              }
              lVar20 = uVar5 * 0xc;
              for (; uVar5 < uVar4; uVar5 = uVar5 + 1) {
                *(undefined4 *)(puVar10 + lVar20 + -0xc + uVar9 * 0xc) = uVar23;
                *(undefined4 *)(puVar10 + lVar20 + -8 + uVar9 * 0xc) = uVar28;
                *(undefined4 *)(puVar10 + lVar20 + -4 + uVar9 * 0xc) = uVar32;
                lVar20 = lVar20 + 0xc;
              }
            }
          }
        }
      }
      else if (uVar11 == 3) {
        if (0 < lVar22) {
          lVar17 = 1;
          lVar15 = 0;
          lVar12 = 0;
          uVar4 = (lVar22 + 2U) / 6;
          uVar9 = 0;
          if (uVar4 != 0) {
            do {
              uVar5 = uVar9;
              uVar9 = uVar5 + 1;
              *(undefined4 *)(param_11[-1] + lVar15 + (longlong)puVar10 * 0xc + 0x14) =
                   *(undefined4 *)(param_11[-2] + lVar12 + (longlong)puVar10 * 0xc + 0x1c);
              *(undefined4 *)(param_11[-1] + lVar15 + (longlong)puVar10 * 0xc + 0x18) =
                   *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar12);
              *(undefined4 *)(param_11[-1] + lVar15 + (longlong)puVar10 * 0xc + 0x1c) =
                   *(undefined4 *)(param_11[-1] + lVar12 + (longlong)puVar10 * 0xc + 4);
              *(undefined4 *)(*param_11 + lVar15 + (longlong)puVar10 * 0xc) =
                   *(undefined4 *)(param_11[-2] + lVar12 + (longlong)puVar10 * 0xc + 0x10);
              *(undefined4 *)(*param_11 + lVar15 + 4 + (longlong)puVar10 * 0xc) =
                   *(undefined4 *)(param_11[-2] + lVar12 + (longlong)puVar10 * 0xc + 0x14);
              lVar17 = lVar12 + (longlong)puVar10 * 0xc;
              lVar12 = lVar12 + -0x18;
              *(undefined4 *)(*param_11 + lVar15 + 8 + (longlong)puVar10 * 0xc) =
                   *(undefined4 *)(param_11[-2] + lVar17 + 0x18);
              lVar15 = lVar15 + 0x18;
            } while (uVar9 < uVar4);
            lVar17 = uVar5 + 2 + uVar9;
          }
          if (lVar17 - 1U < (lVar22 + 2U) / 3) {
            lVar20 = lVar20 - (lVar17 * 3 + -3);
            *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar17 * 0xc + 8) =
                 *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -0x24);
            *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar17 * 0xc + 0xc) =
                 *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -0x20);
            *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar17 * 0xc + 0x10) =
                 *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -0x1c);
          }
        }
      }
      else if ((uVar11 == 6) && (0 < lVar22)) {
        uVar9 = lVar22 + 2;
        uVar4 = (longlong)uVar9 / 3;
        if (6 < (longlong)uVar4) {
          uStack_d8 = *param_11 + (longlong)puVar10 * 0xc;
          lVar20 = (longlong)puStack_78 + (4 - ((longlong)uStack_d8 - 0xcU));
          if ((((longlong)(uVar4 * 0xc) <= lVar20) || (7 < -lVar20)) &&
             ((lVar20 = ((longlong)uStack_d8 - 0xcU) - (longlong)puStack_78, 3 < lVar20 ||
              ((longlong)(uVar4 * 0xc) <= -lVar20)))) {
            uVar23 = *(undefined4 *)puStack_78;
            uVar28 = *(undefined4 *)((longlong)puStack_78 + 4);
            uVar32 = *(undefined4 *)(puStack_78 + 1);
            if ((longlong)uVar4 < 0x10) {
              uVar9 = 0;
            }
            else {
              auVar26._4_4_ = uVar23;
              auVar26._0_4_ = uVar23;
              auVar26._8_4_ = uVar23;
              auVar26._12_4_ = uVar23;
              auVar26._16_4_ = uVar23;
              auVar26._20_4_ = uVar23;
              auVar26._24_4_ = uVar23;
              auVar26._28_4_ = uVar23;
              auVar34._4_4_ = uVar28;
              auVar34._0_4_ = uVar28;
              auVar34._8_4_ = uVar28;
              auVar34._12_4_ = uVar28;
              auVar34._16_4_ = uVar28;
              auVar34._20_4_ = uVar28;
              auVar34._24_4_ = uVar28;
              auVar34._28_4_ = uVar28;
              auVar30._4_4_ = uVar32;
              auVar30._0_4_ = uVar32;
              auVar30._8_4_ = uVar32;
              auVar30._12_4_ = uVar32;
              auVar30._16_4_ = uVar32;
              auVar30._20_4_ = uVar32;
              auVar30._24_4_ = uVar32;
              auVar30._28_4_ = uVar32;
              auVar27 = vpermd_avx2(_DAT_14308d900,auVar26);
              uVar9 = uVar4 & 0xfffffffffffffff0;
              uVar5 = 0;
              auVar24 = vpermd_avx2(_DAT_14308d920,auVar34);
              auVar29 = vpermd_avx2(_DAT_14308d940,auVar30);
              auVar25 = vpblendd_avx2(auVar27,auVar24,0x92);
              auVar24 = vpblendd_avx2(auVar24,auVar29,0x92);
              auVar27 = vpblendd_avx2(auVar29,auVar27,0x92);
              auVar29 = vpblendd_avx2(auVar25,auVar27,0x24);
              auVar25 = vpblendd_avx2(auVar24,auVar25,0x24);
              auVar24 = vpblendd_avx2(auVar27,auVar24,0x24);
              puVar10 = uStack_d8;
              do {
                uVar5 = uVar5 + 0x10;
                *(undefined4 *)(puVar10 + 0x54) = uVar23;
                *(undefined4 *)(puVar10 + 0x60) = uVar23;
                *(undefined4 *)(puVar10 + 0x6c) = uVar23;
                *(undefined4 *)(puVar10 + 0x78) = uVar23;
                *(undefined4 *)(puVar10 + 0x84) = uVar23;
                *(undefined4 *)(puVar10 + 0x90) = uVar23;
                *(undefined4 *)(puVar10 + 0x9c) = uVar23;
                *(undefined4 *)(puVar10 + 0xa8) = uVar23;
                *(undefined4 *)(puVar10 + 0x58) = uVar28;
                *(undefined4 *)(puVar10 + 100) = uVar28;
                *(undefined4 *)(puVar10 + 0x70) = uVar28;
                *(undefined4 *)(puVar10 + 0x7c) = uVar28;
                *(undefined4 *)(puVar10 + 0x88) = uVar28;
                *(undefined4 *)(puVar10 + 0x94) = uVar28;
                *(undefined4 *)(puVar10 + 0xa0) = uVar28;
                *(undefined4 *)(puVar10 + 0xac) = uVar28;
                *(undefined1 (*) [32])(puVar10 + -0xc) = auVar29;
                *(undefined1 (*) [32])(puVar10 + 0x14) = auVar24;
                *(undefined1 (*) [32])(puVar10 + 0x34) = auVar25;
                *(undefined4 *)(puVar10 + 0x5c) = uVar32;
                *(undefined4 *)(puVar10 + 0x68) = uVar32;
                *(undefined4 *)(puVar10 + 0x74) = uVar32;
                *(undefined4 *)(puVar10 + 0x80) = uVar32;
                *(undefined4 *)(puVar10 + 0x8c) = uVar32;
                *(undefined4 *)(puVar10 + 0x98) = uVar32;
                *(undefined4 *)(puVar10 + 0xa4) = uVar32;
                *(undefined4 *)(puVar10 + 0xb0) = uVar32;
                puVar10 = puVar10 + 0xc0;
              } while (uVar5 < uVar9);
            }
            if (uVar9 + 1 <= uVar4) {
              uVar4 = uVar4 - uVar9;
              if ((longlong)uVar4 < 2) {
                uVar5 = 0;
              }
              else {
                uVar14 = 0;
                uVar5 = uVar4 & 0xfffffffffffffffe;
                lVar20 = 0;
                do {
                  uVar14 = uVar14 + 2;
                  *(undefined4 *)(uStack_d8 + lVar20 + -4 + uVar9 * 0xc) = uVar32;
                  *(undefined4 *)(uStack_d8 + lVar20 + 8 + uVar9 * 0xc) = uVar32;
                  *(undefined4 *)(uStack_d8 + lVar20 + -8 + uVar9 * 0xc) = uVar28;
                  *(undefined4 *)(uStack_d8 + lVar20 + 4 + uVar9 * 0xc) = uVar28;
                  *(undefined4 *)(uStack_d8 + lVar20 + -0xc + uVar9 * 0xc) = uVar23;
                  *(undefined4 *)(uStack_d8 + lVar20 + uVar9 * 0xc) = uVar23;
                  lVar20 = lVar20 + 0x18;
                } while (uVar14 < uVar5);
              }
              lVar20 = uVar5 * 0xc;
              for (; uVar5 < uVar4; uVar5 = uVar5 + 1) {
                *(undefined4 *)(uStack_d8 + lVar20 + -0xc + uVar9 * 0xc) = uVar23;
                *(undefined4 *)(uStack_d8 + lVar20 + -8 + uVar9 * 0xc) = uVar28;
                *(undefined4 *)(uStack_d8 + lVar20 + -4 + uVar9 * 0xc) = uVar32;
                lVar20 = lVar20 + 0xc;
              }
            }
            goto LAB_14095c738;
          }
        }
        lVar20 = 1;
        lVar22 = 0;
        uVar4 = 0;
        if (uVar9 / 6 != 0) {
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
            *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x14) =
                 *(undefined4 *)puStack_78;
            *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x18) =
                 *(undefined4 *)((longlong)puStack_78 + 4);
            *(undefined4 *)(param_11[-1] + lVar22 + (longlong)puVar10 * 0xc + 0x1c) =
                 *(undefined4 *)(puStack_78 + 1);
            *(undefined4 *)(*param_11 + lVar22 + (longlong)puVar10 * 0xc) =
                 *(undefined4 *)puStack_78;
            *(undefined4 *)(*param_11 + lVar22 + 4 + (longlong)puVar10 * 0xc) =
                 *(undefined4 *)((longlong)puStack_78 + 4);
            *(undefined4 *)(*param_11 + lVar22 + 8 + (longlong)puVar10 * 0xc) =
                 *(undefined4 *)(puStack_78 + 1);
            lVar22 = lVar22 + 0x18;
          } while (uVar4 < uVar9 / 6);
          lVar20 = uVar5 + 2 + uVar4;
        }
        if (lVar20 - 1U < uVar9 / 3) {
          *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar20 * 0xc + 8) =
               *(undefined4 *)puStack_78;
          *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar20 * 0xc + 0xc) =
               *(undefined4 *)((longlong)puStack_78 + 4);
          *(undefined4 *)(param_11[-1] + (longlong)puVar10 * 0xc + lVar20 * 0xc + 0x10) =
               *(undefined4 *)(puStack_78 + 1);
        }
      }
LAB_14095c738:
      iStack_208 = param_10;
      (*uStack_d0)(*param_11 + lVar13 * 0xc,param_4,lVar13,param_9);
    }
    else {
      (*uStack_d0)(param_1,param_4,lVar22,param_9);
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_228) == DAT_1436b4680) {
    return;
  }
LAB_14095ca4b:
  uStack_40 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

