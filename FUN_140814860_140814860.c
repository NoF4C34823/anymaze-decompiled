
/* WARNING: Removing unreachable block (ram,0x000140815c75) */

void FUN_140814860(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,uint *param_8,undefined8 param_9,
                  int param_10,undefined8 *param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  uint uVar35;
  undefined4 uVar36;
  uint uVar37;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auStack_268 [32];
  int iStack_248;
  uint auStack_220 [8];
  undefined1 auStack_200 [232];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  int iStack_d8;
  longlong lStack_d0;
  uint *puStack_88;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  param_1 = param_1 + param_2 * param_3;
  uStack_48 = DAT_1436b4680 ^ (ulonglong)auStack_268;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar25 = (longlong)param_6;
  uVar27 = param_7 & 0xf;
  lVar29 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    iStack_248 = param_10;
    (*(code *)(&PTR_FUN_14308c7c0)[lVar25])(param_1,param_4,*param_5,param_9);
    if ((uStack_48 ^ (ulonglong)auStack_268) == DAT_1436b4680) {
      return;
    }
    goto LAB_1408162eb;
  }
  lVar20 = *param_5;
  puStack_88 = (uint *)&uStack_58;
  if (uVar27 == 6) {
    puStack_88 = param_8;
  }
  uVar19 = (ulonglong)param_10;
  if (lVar20 < (longlong)(uVar19 - 1)) {
    lVar23 = -lVar29;
    lVar16 = 0;
    if (lVar23 < lVar29 + lVar20) {
      uVar11 = param_7 & 0x80;
      iStack_d8 = param_10;
      uVar22 = param_7 & 0x40;
      do {
        lVar28 = lVar23;
        if (((lVar23 < 0) || (lVar20 <= lVar23)) && (param_7 != 0xf0)) {
          if (uVar27 != 6) {
            if (uVar27 == 1) {
              if (lVar23 < 0) {
                lVar28 = 0;
                if (uVar22 != 0) {
                  lVar28 = lVar23;
                }
              }
              else if (uVar11 == 0) {
                lVar28 = lVar20 + -1;
              }
            }
            else if (uVar27 == 3) {
              if (lVar20 < 2) {
                if (lVar23 < 0) {
                  if ((uVar22 == 0) && (lVar28 = -lVar23, uVar11 == 0)) {
                    lVar28 = 0;
                  }
                }
                else if (((0 < lVar23) && (uVar11 == 0)) && (lVar28 = -lVar23, uVar22 == 0)) {
                  lVar28 = 0;
                }
              }
              else if ((lVar23 < 0) || (lVar20 <= lVar23)) {
                if (lVar23 < 0) goto LAB_1408162c0;
                while (uVar11 == 0) {
                  for (lVar28 = (lVar20 + -1) * 2 - lVar28; lVar28 < 0; lVar28 = -lVar28) {
LAB_1408162c0:
                    if (uVar22 != 0) goto LAB_14081610c;
                  }
                  if (lVar28 < lVar20) break;
                }
              }
            }
            goto LAB_14081610c;
          }
          uVar30 = uVar22;
          if (-1 < lVar23) {
            uVar30 = uVar11;
          }
          if (uVar30 != 0) goto LAB_14081610c;
          uVar30 = *puStack_88;
          uVar35 = puStack_88[1];
          uVar37 = puStack_88[2];
        }
        else {
LAB_14081610c:
          uVar30 = *(uint *)(param_1 + lVar28 * 0xc);
          uVar35 = *(uint *)(param_1 + 4 + lVar28 * 0xc);
          uVar37 = *(uint *)(param_1 + 8 + lVar28 * 0xc);
        }
        lVar23 = lVar23 + 1;
        *(uint *)(lVar16 + (longlong)param_11) = uVar30;
        *(uint *)(lVar16 + 4 + (longlong)param_11) = uVar35;
        *(uint *)(lVar16 + 8 + (longlong)param_11) = uVar37;
        lVar16 = lVar16 + 0xc;
        lStack_e0 = param_4;
        lStack_d0 = lVar29;
      } while (lVar23 < lVar29 + lVar20);
    }
    iStack_248 = param_10;
    (*(code *)(&PTR_FUN_14308c7c0)[lVar25])
              ((longlong)param_11 + lVar29 * 0xc,param_4,lVar20,param_9);
  }
  else {
    if ((param_7 & 0x40) == 0) {
      lVar23 = uVar19 * 3;
      lStack_f0 = lVar29 * 3;
      puVar1 = (undefined8 *)(lVar29 * 0xc);
      uStack_f8 = (longlong)param_11 + lVar29 * 0xc;
      uVar18 = lVar23 - 3;
      if (uVar18 != 0 && SCARRY8(lVar23,-3) == (longlong)uVar18 < 0) {
        if (6 < (longlong)uVar18) {
          lVar16 = uVar19 * 0xc + -0xc;
          if ((lVar16 <= (longlong)(uStack_f8 - param_1)) ||
             (lVar16 <= (longlong)-(uStack_f8 - param_1))) {
            if ((longlong)uVar18 < 8) {
LAB_140816213:
              uVar12 = 0;
            }
            else {
              uVar15 = uStack_f8 & 0x1f;
              if (uVar15 != 0) {
                if ((uStack_f8 & 3) != 0) goto LAB_140816213;
                uVar15 = 0x20 - uVar15 >> 2;
              }
              if ((longlong)uVar18 < (longlong)(uVar15 + 8)) goto LAB_140816213;
              uVar21 = 0;
              uVar12 = uVar18 - (uVar18 - uVar15 & 7);
              if (uVar15 != 0) {
                do {
                  *(undefined4 *)(uStack_f8 + uVar21 * 4) = *(undefined4 *)(param_1 + uVar21 * 4);
                  uVar21 = uVar21 + 1;
                  lStack_e0 = param_4;
                } while (uVar21 < uVar15);
              }
              do {
                puVar14 = (undefined8 *)(param_1 + uVar15 * 4);
                uVar3 = puVar14[1];
                puVar2 = (undefined8 *)(param_1 + 0x10 + uVar15 * 4);
                uVar9 = *puVar2;
                uVar10 = puVar2[1];
                puVar2 = (undefined8 *)(uStack_f8 + uVar15 * 4);
                *puVar2 = *puVar14;
                puVar2[1] = uVar3;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                uVar15 = uVar15 + 8;
              } while (uVar15 < uVar12);
            }
            for (; uVar12 < uVar18; uVar12 = uVar12 + 1) {
              *(undefined4 *)(uStack_f8 + uVar12 * 4) = *(undefined4 *)(param_1 + uVar12 * 4);
            }
            goto LAB_140814b63;
          }
        }
        lVar16 = 1;
        uVar12 = (longlong)(param_10 * 3) - 3;
        uVar15 = uVar12 >> 1;
        uVar18 = 0;
        if (uVar15 != 0) {
          do {
            uVar21 = uVar18;
            *(undefined4 *)(uStack_f8 + uVar21 * 8) = *(undefined4 *)(param_1 + uVar21 * 8);
            *(undefined4 *)(uStack_f8 + 4 + uVar21 * 8) = *(undefined4 *)(param_1 + 4 + uVar21 * 8);
            uVar18 = uVar21 + 1;
          } while (uVar18 < uVar15);
          lVar16 = uVar21 + 2 + uVar18;
          lStack_e0 = param_4;
        }
        if (lVar16 - 1U < uVar12) {
          *(undefined4 *)((longlong)param_11 + (lStack_f0 + -1 + lVar16) * 4) =
               *(undefined4 *)(param_1 + (lVar16 - 1U) * 4);
        }
      }
LAB_140814b63:
      uStack_108._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
      uStack_108 = puVar1;
      if (uVar27 == 1) {
        if (0 < lStack_f0) {
          uVar18 = (lStack_f0 + 2) / 3;
          if (((longlong)uVar18 < 7) ||
             (((longlong)((longlong)param_11 - uStack_f8) < 0xc &&
              ((longlong)-((longlong)param_11 - uStack_f8) < (longlong)(uVar18 * 0xc))))) {
            uVar15 = 0;
            lVar28 = 0;
            lVar16 = 0;
            lStack_e8 = param_1;
            lStack_e0 = param_4;
            uStack_118 = uVar19;
            uStack_110 = (code *)(CONCAT44(uStack_110._4_4_,param_7) & 0xffffffff0000000f);
            lStack_d0 = lVar29;
            iStack_d8 = param_10;
            uStack_100 = param_7;
            lVar23 = lVar16;
            do {
              uVar19 = 0;
              uVar27 = *(uint *)((longlong)param_11 + (longlong)puVar1);
              uVar12 = lVar28 + 0x40U;
              if ((longlong)uVar18 <= (longlong)(lVar28 + 0x40U)) {
                uVar12 = uVar18;
              }
              uVar17 = uVar12 - lVar28;
              uVar21 = uVar19;
              if (0xf < (longlong)uVar17) {
                auVar5 = vshufps_avx(ZEXT416(uVar27),ZEXT416(uVar27),0);
                uVar21 = uVar17 & 0xfffffffffffffff0;
                auVar32._16_16_ = auVar5;
                auVar32._0_16_ = auVar5;
                do {
                  iVar24 = (int)uVar19;
                  uVar19 = uVar19 + 0x10;
                  *(undefined1 (*) [32])(auStack_220 + iVar24) = auVar32;
                  *(undefined1 (*) [32])(auStack_200 + (longlong)iVar24 * 4) = auVar32;
                } while (uVar19 < uVar21);
              }
              uVar26 = 0;
              uVar19 = uStack_118;
              param_7 = uStack_100;
              param_1 = lStack_e8;
              param_4 = lStack_e0;
              param_10 = iStack_d8;
              lVar29 = lStack_d0;
              for (; uStack_118 = uVar19, uStack_100 = param_7, lStack_e8 = param_1,
                  lStack_e0 = param_4, iStack_d8 = param_10, lStack_d0 = lVar29, uVar21 < uVar17;
                  uVar21 = uVar21 + 1) {
                auStack_220[(int)uVar21] = uVar27;
                uVar19 = uStack_118;
                param_7 = uStack_100;
                param_1 = lStack_e8;
                param_4 = lStack_e0;
                param_10 = iStack_d8;
                lVar29 = lStack_d0;
              }
              uStack_108 = param_11;
              uVar21 = uVar26;
              do {
                iVar24 = (int)uVar21;
                uVar21 = uVar21 + 1;
                *(uint *)((longlong)param_11 + uVar26 + lVar16) = auStack_220[iVar24];
                *(undefined4 *)((longlong)param_11 + uVar26 + 4 + lVar16) =
                     *(undefined4 *)(uStack_f8 + 4);
                *(undefined4 *)((longlong)param_11 + uVar26 + 8 + lVar16) =
                     *(undefined4 *)(uStack_f8 + 8);
                uVar26 = uVar26 + 0xc;
              } while (uVar21 < uVar12 + lVar23);
              uVar15 = uVar15 + 1;
              lVar28 = lVar28 + 0x40;
              lVar16 = lVar16 + 0x300;
              lVar23 = lVar23 + -0x40;
            } while (uVar15 < uVar18 + 0x3f >> 6);
            uVar27 = (uint)uStack_110;
            puVar1 = uStack_108;
          }
          else {
            uVar11 = *(uint *)((longlong)param_11 + (longlong)puVar1);
            uVar22 = *(uint *)(uStack_f8 + 4);
            uVar30 = *(uint *)(uStack_f8 + 8);
            if ((longlong)uVar18 < 0x10) {
              uVar15 = 0;
            }
            else {
              uVar12 = 0;
              auVar5 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
              uVar15 = uVar18 & 0xfffffffffffffff0;
              auVar6 = vshufps_avx(ZEXT416(uVar22),ZEXT416(uVar22),0);
              auVar7 = vshufps_avx(ZEXT416(uVar30),ZEXT416(uVar30),0);
              puVar14 = param_11;
              do {
                uVar12 = uVar12 + 0x10;
                uVar36 = auVar5._0_4_;
                *(undefined4 *)puVar14 = uVar36;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 3) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
                *(undefined4 *)(puVar14 + 6) = uVar36;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 9) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0x54) = uVar4;
                *(undefined4 *)(puVar14 + 0xc) = uVar36;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 0xf) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0x84) = uVar4;
                *(undefined4 *)(puVar14 + 0x12) = uVar36;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 0x15) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0xb4) = uVar4;
                uVar36 = auVar6._0_4_;
                *(undefined4 *)((longlong)puVar14 + 4) = uVar36;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 2) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 5) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x34) = uVar36;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 8) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 0xb) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 100) = uVar36;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 0xe) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 0x11) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x94) = uVar36;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 0x17) = uVar4;
                uVar36 = auVar7._0_4_;
                *(undefined4 *)(puVar14 + 1) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 4) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
                *(undefined4 *)(puVar14 + 7) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x44) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 10) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar4;
                *(undefined4 *)(puVar14 + 0xd) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x74) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 0x10) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
                *(undefined4 *)(puVar14 + 0x13) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 0x16) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0xbc) = uVar4;
                puVar14 = puVar14 + 0x18;
              } while (uVar12 < uVar15);
            }
            if (uVar15 + 1 <= uVar18) {
              uVar18 = uVar18 - uVar15;
              if ((longlong)uVar18 < 2) {
                uVar12 = 0;
              }
              else {
                uVar17 = 0;
                uStack_118 = CONCAT44(uStack_118._4_4_,uVar11);
                uStack_108 = (undefined8 *)CONCAT44(uStack_108._4_4_,uVar22);
                uVar12 = uVar18 & 0xfffffffffffffffe;
                iStack_d8 = param_10;
                uVar21 = uVar17;
                do {
                  uVar17 = uVar17 + 2;
                  *(uint *)((longlong)param_11 + uVar21 + 8 + uVar15 * 0xc) = uVar30;
                  *(uint *)((longlong)param_11 + uVar21 + 0x14 + uVar15 * 0xc) = uVar30;
                  *(uint *)((longlong)param_11 + uVar21 + 4 + uVar15 * 0xc) = uVar22;
                  *(uint *)((longlong)param_11 + uVar21 + 0x10 + uVar15 * 0xc) = uVar22;
                  *(uint *)((longlong)param_11 + uVar21 + uVar15 * 0xc) = uVar11;
                  *(uint *)((longlong)param_11 + uVar21 + 0xc + uVar15 * 0xc) = uVar11;
                  uVar21 = uVar21 + 0x18;
                  lStack_e0 = param_4;
                } while (uVar17 < uVar12);
              }
              lVar23 = uVar12 * 0xc;
              for (; puVar1 = uStack_108, uVar12 < uVar18; uVar12 = uVar12 + 1) {
                *(uint *)((longlong)param_11 + lVar23 + uVar15 * 0xc) = uVar11;
                *(uint *)((longlong)param_11 + lVar23 + 4 + uVar15 * 0xc) = uVar22;
                *(uint *)((longlong)param_11 + lVar23 + 8 + uVar15 * 0xc) = uVar30;
                lVar23 = lVar23 + 0xc;
              }
            }
          }
        }
      }
      else if (uVar27 == 3) {
        if (0 < lStack_f0) {
          lVar16 = 1;
          uStack_118 = lStack_f0 + 2;
          lVar13 = 0;
          lVar28 = lVar13;
          uVar18 = 0;
          if (uStack_118 / 6 != 0) {
            do {
              uVar15 = uVar18;
              uVar18 = uVar15 + 1;
              *(undefined4 *)(lVar13 + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0xc + uVar19 * 0xc);
              *(undefined4 *)(lVar13 + 4 + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -8 + uVar19 * 0xc);
              *(undefined4 *)(lVar13 + 8 + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -4 + uVar19 * 0xc);
              *(undefined4 *)(lVar13 + 0xc + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x18 + uVar19 * 0xc);
              *(undefined4 *)(lVar13 + 0x10 + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x14 + uVar19 * 0xc);
              *(undefined4 *)(lVar13 + 0x14 + (longlong)param_11) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x10 + uVar19 * 0xc);
              lVar13 = lVar13 + 0x18;
              lVar28 = lVar28 + -0x18;
            } while (uVar18 < uStack_118 / 6);
            lVar16 = uVar15 + 2 + uVar18;
            lStack_e0 = param_4;
          }
          if (lVar16 - 1U < uStack_118 / 3) {
            lVar16 = lVar16 * 3 + -3;
            lVar23 = lVar23 - lVar16;
            *(undefined4 *)((longlong)param_11 + lVar16 * 4) =
                 *(undefined4 *)((longlong)param_11 + lVar23 * 4 + -0xc);
            *(undefined4 *)((longlong)param_11 + lVar16 * 4 + 4) =
                 *(undefined4 *)((longlong)param_11 + lVar23 * 4 + -8);
            *(undefined4 *)((longlong)param_11 + lVar16 * 4 + 8) =
                 *(undefined4 *)((longlong)param_11 + lVar23 * 4 + -4);
          }
        }
      }
      else if ((uVar27 == 6) && (0 < lStack_f0)) {
        uStack_118 = lStack_f0 + 2;
        uVar18 = (longlong)uStack_118 / 3;
        if (6 < (longlong)uVar18) {
          lVar23 = (longlong)puStack_88 + (4 - (longlong)param_11);
          if ((((longlong)(uVar18 * 0xc) <= lVar23) || (7 < -lVar23)) &&
             ((3 < (longlong)param_11 - (longlong)puStack_88 ||
              ((longlong)(uVar18 * 0xc) <= -((longlong)param_11 - (longlong)puStack_88))))) {
            uVar11 = *puStack_88;
            uVar22 = puStack_88[1];
            uVar30 = puStack_88[2];
            if ((longlong)uVar18 < 0x10) {
              uVar15 = 0;
            }
            else {
              auVar5 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
              auVar6 = vshufps_avx(ZEXT416(uVar22),ZEXT416(uVar22),0);
              uVar15 = uVar18 & 0xfffffffffffffff0;
              auVar7 = vshufps_avx(ZEXT416(uVar30),ZEXT416(uVar30),0);
              uVar12 = 0;
              auVar31._16_16_ = auVar5;
              auVar31._0_16_ = auVar5;
              auVar38._16_16_ = auVar6;
              auVar38._0_16_ = auVar6;
              auVar8 = vunpcklps_avx(auVar31,auVar38);
              auVar32 = vunpckhps_avx(auVar31,auVar38);
              puVar14 = param_11;
              do {
                uVar12 = uVar12 + 0x10;
                *(int *)(puVar14 + 0xc) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 0xf) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0x84) = uVar4;
                *(int *)(puVar14 + 0x12) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)(puVar14 + 0x15) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)((longlong)puVar14 + 0xb4) = uVar4;
                *(int *)((longlong)puVar14 + 100) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 0xe) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 0x11) = uVar4;
                *(int *)((longlong)puVar14 + 0x94) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)(puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)(puVar14 + 0x17) = uVar4;
                uVar3 = vmovlpd_avx(auVar8._0_16_);
                *puVar14 = uVar3;
                uVar3 = vmovhpd_avx(auVar8._0_16_);
                *(undefined8 *)((longlong)puVar14 + 0xc) = uVar3;
                uVar3 = vmovlpd_avx(auVar32._0_16_);
                puVar14[3] = uVar3;
                uVar3 = vmovhpd_avx(auVar32._0_16_);
                *(undefined8 *)((longlong)puVar14 + 0x24) = uVar3;
                uVar3 = vmovlpd_avx(auVar8._16_16_);
                puVar14[6] = uVar3;
                uVar3 = vmovhpd_avx(auVar8._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x3c) = uVar3;
                uVar3 = vmovlpd_avx(auVar32._16_16_);
                puVar14[9] = uVar3;
                uVar3 = vmovhpd_avx(auVar32._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x54) = uVar3;
                uVar36 = auVar7._0_4_;
                *(undefined4 *)(puVar14 + 1) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 4) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
                *(undefined4 *)(puVar14 + 7) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x44) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 10) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar4;
                *(undefined4 *)(puVar14 + 0xd) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0x74) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 0x10) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
                *(undefined4 *)(puVar14 + 0x13) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)(puVar14 + 0x16) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)((longlong)puVar14 + 0xbc) = uVar4;
                puVar14 = puVar14 + 0x18;
              } while (uVar12 < uVar15);
            }
            if (uVar15 + 1 <= uVar18) {
              uVar18 = uVar18 - uVar15;
              if ((longlong)uVar18 < 2) {
                uVar12 = 0;
              }
              else {
                uVar17 = 0;
                uStack_118._4_4_ = (undefined4)(uStack_118 >> 0x20);
                uStack_118 = CONCAT44(uStack_118._4_4_,uVar11);
                uStack_108 = (undefined8 *)CONCAT44(uStack_108._4_4_,uVar22);
                uVar12 = uVar18 & 0xfffffffffffffffe;
                iStack_d8 = param_10;
                uVar21 = uVar17;
                do {
                  uVar17 = uVar17 + 2;
                  *(uint *)((longlong)param_11 + uVar21 + 8 + uVar15 * 0xc) = uVar30;
                  *(uint *)((longlong)param_11 + uVar21 + 0x14 + uVar15 * 0xc) = uVar30;
                  *(uint *)((longlong)param_11 + uVar21 + 4 + uVar15 * 0xc) = uVar22;
                  *(uint *)((longlong)param_11 + uVar21 + 0x10 + uVar15 * 0xc) = uVar22;
                  *(uint *)((longlong)param_11 + uVar21 + uVar15 * 0xc) = uVar11;
                  *(uint *)((longlong)param_11 + uVar21 + 0xc + uVar15 * 0xc) = uVar11;
                  uVar21 = uVar21 + 0x18;
                  lStack_e0 = param_4;
                } while (uVar17 < uVar12);
              }
              lVar23 = uVar12 * 0xc;
              for (; puVar1 = uStack_108, uVar12 < uVar18; uVar12 = uVar12 + 1) {
                *(uint *)((longlong)param_11 + lVar23 + uVar15 * 0xc) = uVar11;
                *(uint *)((longlong)param_11 + lVar23 + 4 + uVar15 * 0xc) = uVar22;
                *(uint *)((longlong)param_11 + lVar23 + 8 + uVar15 * 0xc) = uVar30;
                lVar23 = lVar23 + 0xc;
              }
            }
            goto LAB_140815604;
          }
        }
        lVar23 = 1;
        lVar16 = 0;
        uVar18 = 0;
        if (uStack_118 / 6 != 0) {
          do {
            uVar15 = uVar18;
            uVar18 = uVar15 + 1;
            *(uint *)(lVar16 + (longlong)param_11) = *puStack_88;
            *(uint *)(lVar16 + 4 + (longlong)param_11) = puStack_88[1];
            *(uint *)(lVar16 + 8 + (longlong)param_11) = puStack_88[2];
            *(uint *)(lVar16 + 0xc + (longlong)param_11) = *puStack_88;
            *(uint *)(lVar16 + 0x10 + (longlong)param_11) = puStack_88[1];
            *(uint *)(lVar16 + 0x14 + (longlong)param_11) = puStack_88[2];
            lVar16 = lVar16 + 0x18;
          } while (uVar18 < uStack_118 / 6);
          lVar23 = uVar15 + 2 + uVar18;
        }
        if (lVar23 - 1U < uStack_118 / 3) {
          lVar23 = lVar23 * 3 + -3;
          *(uint *)((longlong)param_11 + lVar23 * 4) = *puStack_88;
          *(uint *)((longlong)param_11 + lVar23 * 4 + 4) = puStack_88[1];
          *(uint *)((longlong)param_11 + lVar23 * 4 + 8) = puStack_88[2];
        }
      }
LAB_140815604:
      uStack_108 = puVar1;
      uStack_110 = (code *)(&PTR_FUN_14308c7c0)[lVar25];
      iStack_248 = param_10;
      uStack_100 = param_7;
      lStack_e8 = param_1;
      (*uStack_110)(uStack_f8,param_4);
      lVar20 = lVar20 - lVar29;
      param_1 = lStack_e8 + lStack_f0 * 4;
      param_4 = param_4 + lStack_f0 * 4;
      param_7 = uStack_100;
    }
    else {
      uStack_110 = (code *)(&PTR_FUN_14308c7c0)[lVar25];
    }
    iStack_248 = param_10;
    if ((param_7 & 0x80) == 0) {
      if (lVar29 < lVar20) {
        lStack_e8 = param_1;
        (*uStack_110)(param_1,param_4);
        param_1 = lStack_e8 + (lVar20 - lVar29) * 0xc;
        param_4 = param_4 + (lVar20 - lVar29) * 0xc;
      }
      lVar25 = uVar19 * 3;
      if (lVar25 != 3 && SCARRY8(lVar25,-3) == lVar25 + -3 < 0) {
        lVar20 = 1;
        uVar18 = ((lVar25 + -1) / 3) * 3;
        uVar15 = uVar18 >> 1;
        if (uVar15 != 0) {
          lVar20 = lVar29 * -0xc + param_1;
          uVar12 = 0;
          do {
            uVar21 = uVar12;
            *(undefined4 *)(param_11 + uVar21) = *(undefined4 *)(lVar20 + uVar21 * 8);
            *(undefined4 *)((longlong)param_11 + uVar21 * 8 + 4) =
                 *(undefined4 *)(lVar20 + 4 + uVar21 * 8);
            uVar12 = uVar21 + 1;
          } while (uVar12 < uVar15);
          lVar20 = uVar21 + 2 + uVar12;
        }
        if (lVar20 - 1U < uVar18) {
          *(undefined4 *)((longlong)param_11 + (lVar20 - 1U) * 4) =
               *(undefined4 *)(param_1 + (lVar29 * -3 + -1 + lVar20) * 4);
        }
      }
      lVar20 = lVar29 * 3;
      if (uVar27 == 1) {
        if (0 < lVar20) {
          uVar18 = lVar20 + 2;
          uVar15 = (longlong)uVar18 / 3;
          if ((longlong)uVar15 < 7) {
            lVar20 = 1;
            lVar23 = 0;
            uVar15 = 0;
            if (uVar18 / 6 != 0) {
              do {
                uVar12 = uVar15;
                uVar15 = uVar12 + 1;
                *(undefined4 *)((longlong)param_11 + lVar23 + -0xc + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x18);
                *(undefined4 *)((longlong)param_11 + lVar23 + -8 + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x14);
                *(undefined4 *)((longlong)param_11 + lVar23 + -4 + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x10);
                *(undefined4 *)((longlong)param_11 + lVar23 + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x18);
                *(undefined4 *)((longlong)param_11 + lVar23 + 4 + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x14);
                *(undefined4 *)((longlong)param_11 + lVar23 + 8 + uVar19 * 0xc) =
                     *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x10);
                lVar23 = lVar23 + 0x18;
              } while (uVar15 < uVar18 / 6);
              lVar20 = uVar12 + 2 + uVar15;
            }
            if (lVar20 - 1U < uVar18 / 3) {
              lVar25 = lVar20 * 3 + -3 + lVar25;
              *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -0xc) =
                   *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x18);
              *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -8) =
                   *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x14);
              *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -4) =
                   *(undefined4 *)((longlong)param_11 + uVar19 * 0xc + -0x10);
            }
          }
          else {
            puVar1 = (undefined8 *)((longlong)param_11 + uVar19 * 0xc);
            uVar27 = *(uint *)(puVar1 + -3);
            uVar11 = *(uint *)((longlong)puVar1 + -0x14);
            uVar22 = *(uint *)(puVar1 + -2);
            if ((longlong)uVar15 < 0x10) {
              uVar19 = 0;
            }
            else {
              auVar5 = vshufps_avx(ZEXT416(uVar27),ZEXT416(uVar27),0);
              auVar6 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
              uVar19 = uVar15 & 0xfffffffffffffff0;
              auVar7 = vshufps_avx(ZEXT416(uVar22),ZEXT416(uVar22),0);
              uVar18 = 0;
              auVar34._16_16_ = auVar5;
              auVar34._0_16_ = auVar5;
              auVar40._16_16_ = auVar6;
              auVar40._0_16_ = auVar6;
              auVar8 = vunpcklps_avx(auVar34,auVar40);
              auVar32 = vunpckhps_avx(auVar34,auVar40);
              puVar14 = puVar1;
              do {
                uVar18 = uVar18 + 0x10;
                *(int *)((longlong)puVar14 + 0x54) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)(puVar14 + 0xc) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)(puVar14 + 0xf) = uVar4;
                *(int *)((longlong)puVar14 + 0x84) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)(puVar14 + 0x12) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)(puVar14 + 0x15) = uVar4;
                *(int *)(puVar14 + 0xb) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar14 + 100) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar14 + 0xe) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar4;
                *(int *)(puVar14 + 0x11) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar14 + 0x94) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
                uVar3 = vmovlpd_avx(auVar8._0_16_);
                *(undefined8 *)((longlong)puVar14 + -0xc) = uVar3;
                uVar3 = vmovhpd_avx(auVar8._0_16_);
                *puVar14 = uVar3;
                uVar3 = vmovlpd_avx(auVar32._0_16_);
                *(undefined8 *)((longlong)puVar14 + 0xc) = uVar3;
                uVar3 = vmovhpd_avx(auVar32._0_16_);
                puVar14[3] = uVar3;
                uVar3 = vmovlpd_avx(auVar8._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x24) = uVar3;
                uVar3 = vmovhpd_avx(auVar8._16_16_);
                puVar14[6] = uVar3;
                uVar3 = vmovlpd_avx(auVar32._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x3c) = uVar3;
                uVar3 = vmovhpd_avx(auVar32._16_16_);
                puVar14[9] = uVar3;
                uVar36 = auVar7._0_4_;
                *(undefined4 *)((longlong)puVar14 + -4) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 1) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 4) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 7) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x44) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 10) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 0xd) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x74) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 0x10) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 0x13) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 0x16) = uVar4;
                puVar14 = puVar14 + 0x18;
              } while (uVar18 < uVar19);
            }
            if (uVar19 + 1 <= uVar15) {
              uVar15 = uVar15 - uVar19;
              if ((longlong)uVar15 < 2) {
                uVar18 = 0;
              }
              else {
                uStack_118 = CONCAT44(uStack_118._4_4_,uVar27);
                uVar12 = 0;
                uVar18 = uVar15 & 0xfffffffffffffffe;
                lVar25 = 0;
                do {
                  uVar12 = uVar12 + 2;
                  *(uint *)((longlong)puVar1 + lVar25 + -4 + uVar19 * 0xc) = uVar22;
                  *(uint *)((longlong)puVar1 + lVar25 + 8 + uVar19 * 0xc) = uVar22;
                  *(uint *)((longlong)puVar1 + lVar25 + -8 + uVar19 * 0xc) = uVar11;
                  *(uint *)((longlong)puVar1 + lVar25 + 4 + uVar19 * 0xc) = uVar11;
                  *(uint *)((longlong)puVar1 + lVar25 + -0xc + uVar19 * 0xc) = uVar27;
                  *(uint *)((longlong)puVar1 + lVar25 + uVar19 * 0xc) = uVar27;
                  lVar25 = lVar25 + 0x18;
                  lStack_e0 = param_4;
                } while (uVar12 < uVar18);
              }
              lVar25 = uVar18 * 0xc;
              for (; uVar18 < uVar15; uVar18 = uVar18 + 1) {
                *(uint *)((longlong)puVar1 + lVar25 + -0xc + uVar19 * 0xc) = uVar27;
                *(uint *)((longlong)puVar1 + lVar25 + -8 + uVar19 * 0xc) = uVar11;
                *(uint *)((longlong)puVar1 + lVar25 + -4 + uVar19 * 0xc) = uVar22;
                lVar25 = lVar25 + 0xc;
              }
            }
          }
        }
      }
      else if (uVar27 == 3) {
        if (0 < lVar20) {
          lVar16 = 0;
          lVar23 = 1;
          lVar28 = 0;
          uVar15 = (lVar20 + 2U) / 6;
          uVar18 = 0;
          if (uVar15 != 0) {
            do {
              uVar12 = uVar18;
              uVar18 = uVar12 + 1;
              *(undefined4 *)((longlong)param_11 + lVar16 + -0xc + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x24 + uVar19 * 0xc);
              *(undefined4 *)((longlong)param_11 + lVar16 + -8 + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x20 + uVar19 * 0xc);
              *(undefined4 *)((longlong)param_11 + lVar16 + -4 + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x1c + uVar19 * 0xc);
              *(undefined4 *)((longlong)param_11 + lVar16 + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x30 + uVar19 * 0xc);
              *(undefined4 *)((longlong)param_11 + lVar16 + 4 + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar28 + -0x2c + uVar19 * 0xc);
              lVar23 = lVar28 + -0x28;
              lVar28 = lVar28 + -0x18;
              *(undefined4 *)((longlong)param_11 + lVar16 + 8 + uVar19 * 0xc) =
                   *(undefined4 *)((longlong)param_11 + lVar23 + uVar19 * 0xc);
              lVar16 = lVar16 + 0x18;
            } while (uVar18 < uVar15);
            lVar23 = uVar12 + 2 + uVar18;
          }
          if (lVar23 - 1U < (lVar20 + 2U) / 3) {
            lVar23 = lVar23 * 3 + -3;
            lVar20 = lVar25 + lVar23;
            lVar25 = lVar25 - lVar23;
            *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -0xc) =
                 *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -0x24);
            *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -8) =
                 *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -0x20);
            *(undefined4 *)((longlong)param_11 + lVar20 * 4 + -4) =
                 *(undefined4 *)((longlong)param_11 + lVar25 * 4 + -0x1c);
          }
        }
      }
      else if ((uVar27 == 6) && (0 < lVar20)) {
        uVar18 = lVar20 + 2;
        uVar15 = (longlong)uVar18 / 3;
        if (6 < (longlong)uVar15) {
          puVar1 = (undefined8 *)((longlong)param_11 + uVar19 * 0xc);
          lVar20 = (longlong)puStack_88 + (4 - ((longlong)puVar1 + -0xc));
          if ((((longlong)(uVar15 * 0xc) <= lVar20) || (7 < -lVar20)) &&
             ((lVar20 = ((longlong)puVar1 + -0xc) - (longlong)puStack_88, 3 < lVar20 ||
              ((longlong)(uVar15 * 0xc) <= -lVar20)))) {
            uVar27 = *puStack_88;
            uVar11 = puStack_88[1];
            uVar22 = puStack_88[2];
            if ((longlong)uVar15 < 0x10) {
              uVar19 = 0;
            }
            else {
              auVar5 = vshufps_avx(ZEXT416(uVar27),ZEXT416(uVar27),0);
              auVar6 = vshufps_avx(ZEXT416(uVar11),ZEXT416(uVar11),0);
              uVar19 = uVar15 & 0xfffffffffffffff0;
              auVar7 = vshufps_avx(ZEXT416(uVar22),ZEXT416(uVar22),0);
              uVar18 = 0;
              auVar33._16_16_ = auVar5;
              auVar33._0_16_ = auVar5;
              auVar39._16_16_ = auVar6;
              auVar39._0_16_ = auVar6;
              auVar8 = vunpcklps_avx(auVar33,auVar39);
              auVar32 = vunpckhps_avx(auVar33,auVar39);
              puVar14 = puVar1;
              do {
                uVar18 = uVar18 + 0x10;
                *(int *)((longlong)puVar14 + 0x54) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)(puVar14 + 0xc) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)(puVar14 + 0xf) = uVar4;
                *(int *)((longlong)puVar14 + 0x84) = auVar5._0_4_;
                uVar4 = vextractps_avx(auVar5,1);
                *(undefined4 *)(puVar14 + 0x12) = uVar4;
                uVar4 = vextractps_avx(auVar5,2);
                *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
                uVar4 = vextractps_avx(auVar5,3);
                *(undefined4 *)(puVar14 + 0x15) = uVar4;
                *(int *)(puVar14 + 0xb) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar14 + 100) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar14 + 0xe) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar4;
                *(int *)(puVar14 + 0x11) = auVar6._0_4_;
                uVar4 = vextractps_avx(auVar6,1);
                *(undefined4 *)((longlong)puVar14 + 0x94) = uVar4;
                uVar4 = vextractps_avx(auVar6,2);
                *(undefined4 *)(puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar6,3);
                *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
                uVar3 = vmovlpd_avx(auVar8._0_16_);
                *(undefined8 *)((longlong)puVar14 + -0xc) = uVar3;
                uVar3 = vmovhpd_avx(auVar8._0_16_);
                *puVar14 = uVar3;
                uVar3 = vmovlpd_avx(auVar32._0_16_);
                *(undefined8 *)((longlong)puVar14 + 0xc) = uVar3;
                uVar3 = vmovhpd_avx(auVar32._0_16_);
                puVar14[3] = uVar3;
                uVar3 = vmovlpd_avx(auVar8._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x24) = uVar3;
                uVar3 = vmovhpd_avx(auVar8._16_16_);
                puVar14[6] = uVar3;
                uVar3 = vmovlpd_avx(auVar32._16_16_);
                *(undefined8 *)((longlong)puVar14 + 0x3c) = uVar3;
                uVar3 = vmovhpd_avx(auVar32._16_16_);
                puVar14[9] = uVar3;
                uVar36 = auVar7._0_4_;
                *(undefined4 *)((longlong)puVar14 + -4) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 1) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x14) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 4) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 7) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x44) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 10) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 0xd) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0x74) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 0x10) = uVar4;
                *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar36;
                uVar4 = vextractps_avx(auVar7,1);
                *(undefined4 *)(puVar14 + 0x13) = uVar4;
                uVar4 = vextractps_avx(auVar7,2);
                *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
                uVar4 = vextractps_avx(auVar7,3);
                *(undefined4 *)(puVar14 + 0x16) = uVar4;
                puVar14 = puVar14 + 0x18;
              } while (uVar18 < uVar19);
            }
            if (uVar19 + 1 <= uVar15) {
              uVar15 = uVar15 - uVar19;
              if ((longlong)uVar15 < 2) {
                uVar18 = 0;
              }
              else {
                uVar21 = 0;
                uVar18 = uVar15 & 0xfffffffffffffffe;
                uVar12 = uVar21;
                do {
                  uVar12 = uVar12 + 2;
                  *(uint *)((longlong)puVar1 + (uVar21 - 4) + uVar19 * 0xc) = uVar22;
                  *(uint *)((longlong)puVar1 + uVar21 + 8 + uVar19 * 0xc) = uVar22;
                  *(uint *)((longlong)puVar1 + (uVar21 - 8) + uVar19 * 0xc) = uVar11;
                  *(uint *)((longlong)puVar1 + uVar21 + 4 + uVar19 * 0xc) = uVar11;
                  *(uint *)((longlong)puVar1 + (uVar21 - 0xc) + uVar19 * 0xc) = uVar27;
                  *(uint *)((longlong)puVar1 + uVar21 + uVar19 * 0xc) = uVar27;
                  uVar21 = uVar21 + 0x18;
                  lStack_e0 = param_4;
                } while (uVar12 < uVar18);
              }
              lVar25 = uVar18 * 0xc;
              for (; uVar18 < uVar15; uVar18 = uVar18 + 1) {
                *(uint *)((longlong)puVar1 + lVar25 + -0xc + uVar19 * 0xc) = uVar27;
                *(uint *)((longlong)puVar1 + lVar25 + -8 + uVar19 * 0xc) = uVar11;
                *(uint *)((longlong)puVar1 + lVar25 + -4 + uVar19 * 0xc) = uVar22;
                lVar25 = lVar25 + 0xc;
              }
            }
            goto LAB_140815fdb;
          }
        }
        lVar20 = 1;
        lVar23 = 0;
        uVar15 = 0;
        if (uVar18 / 6 != 0) {
          do {
            uVar12 = uVar15;
            uVar15 = uVar12 + 1;
            *(uint *)((longlong)param_11 + lVar23 + -0xc + uVar19 * 0xc) = *puStack_88;
            *(uint *)((longlong)param_11 + lVar23 + -8 + uVar19 * 0xc) = puStack_88[1];
            *(uint *)((longlong)param_11 + lVar23 + -4 + uVar19 * 0xc) = puStack_88[2];
            *(uint *)((longlong)param_11 + lVar23 + uVar19 * 0xc) = *puStack_88;
            *(uint *)((longlong)param_11 + lVar23 + 4 + uVar19 * 0xc) = puStack_88[1];
            *(uint *)((longlong)param_11 + lVar23 + 8 + uVar19 * 0xc) = puStack_88[2];
            lVar23 = lVar23 + 0x18;
          } while (uVar15 < uVar18 / 6);
          lVar20 = uVar12 + 2 + uVar15;
        }
        if (lVar20 - 1U < uVar18 / 3) {
          lVar25 = lVar25 + lVar20 * 3 + -3;
          *(uint *)((longlong)param_11 + lVar25 * 4 + -0xc) = *puStack_88;
          *(uint *)((longlong)param_11 + lVar25 * 4 + -8) = puStack_88[1];
          *(uint *)((longlong)param_11 + lVar25 * 4 + -4) = puStack_88[2];
        }
      }
LAB_140815fdb:
      iStack_248 = param_10;
      (*uStack_110)((longlong)param_11 + lVar29 * 0xc,param_4,lVar29,param_9);
    }
    else {
      (*uStack_110)(param_1,param_4,lVar20,param_9);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_268) == DAT_1436b4680) {
    return;
  }
LAB_1408162eb:
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_142bb1d40();
}

