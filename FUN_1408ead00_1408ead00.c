
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ead00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,undefined2 *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auVar5 [32];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 uVar26;
  longlong lVar27;
  undefined1 uVar28;
  longlong lVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  ulonglong uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_80;
  code *pcStack_68;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  
  param_1 = param_1 + param_2 * param_3;
  uStack_40 = 0;
  uStack_3e = 0;
  lVar10 = (longlong)param_6;
  uVar21 = param_7 & 0xf;
  lVar29 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
    (*(code *)(&PTR_FUN_14308d140)[lVar10])(param_1,param_4,*param_5,param_9,param_10);
    return;
  }
  lVar27 = (longlong)param_10;
  lVar19 = *param_5;
  puVar17 = &uStack_40;
  if (uVar21 == 6) {
    puVar17 = param_8;
  }
  if (lVar19 < lVar27 + -1) {
    lVar18 = -lVar29;
    lVar27 = 0;
    if (lVar18 < lVar29 + lVar19) {
      uVar12 = param_7 & 0x80;
      uStack_a8._0_4_ = param_7 & 0x40;
      do {
        lVar20 = lVar18;
        if (((lVar18 < 0) || (lVar19 <= lVar18)) && (param_7 != 0xf0)) {
          if (uVar21 != 6) {
            if (uVar21 == 1) {
              if (lVar18 < 0) {
                lVar20 = 0;
                if ((uint)uStack_a8 != 0) {
                  lVar20 = lVar18;
                }
              }
              else if (uVar12 == 0) {
                lVar20 = lVar19 + -1;
              }
            }
            else if (uVar21 == 3) {
              if (lVar19 < 2) {
                if (lVar18 < 0) {
                  if ((uint)uStack_a8 == 0) {
                    lVar20 = -lVar18;
                    if (uVar12 == 0) {
                      lVar20 = 0;
                    }
                  }
                }
                else if (((0 < lVar18) && (uVar12 == 0)) && (lVar20 = -lVar18, (uint)uStack_a8 == 0)
                        ) {
                  lVar20 = 0;
                }
              }
              else if ((lVar18 < 0) || (lVar19 <= lVar18)) {
                if (lVar18 < 0) goto LAB_1408ec564;
                while (uVar12 == 0) {
                  for (lVar20 = (lVar19 + -1) * 2 - lVar20; lVar20 < 0; lVar20 = -lVar20) {
LAB_1408ec564:
                    if ((uint)uStack_a8 != 0) goto LAB_1408ec411;
                  }
                  if (lVar20 < lVar19) break;
                }
              }
            }
            goto LAB_1408ec411;
          }
          uVar9 = (uint)uStack_a8;
          if (-1 < lVar18) {
            uVar9 = uVar12;
          }
          if (uVar9 != 0) goto LAB_1408ec411;
          uVar26 = *(undefined1 *)puVar17;
          uVar28 = *(undefined1 *)((longlong)puVar17 + 1);
          uVar30 = *(undefined1 *)(puVar17 + 1);
        }
        else {
LAB_1408ec411:
          lVar20 = lVar20 * 3;
          uVar26 = *(undefined1 *)(lVar20 + param_1);
          uVar28 = *(undefined1 *)(lVar20 + 1 + param_1);
          uVar30 = *(undefined1 *)(lVar20 + 2 + param_1);
        }
        lVar18 = lVar18 + 1;
        *(undefined1 *)(lVar27 + param_11) = uVar26;
        *(undefined1 *)(lVar27 + 1 + param_11) = uVar28;
        *(undefined1 *)(lVar27 + 2 + param_11) = uVar30;
        lVar27 = lVar27 + 3;
      } while (lVar18 < lVar29 + lVar19);
    }
    (*(code *)(&PTR_FUN_14308d140)[lVar10])(param_11 + lVar29 * 3,param_4,lVar19,param_9,param_10);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar18 = lVar27 * 3;
    lVar20 = lVar29 * 3;
    uVar11 = param_11 + lVar20;
    uVar14 = lVar18 - 3;
    if (uVar14 != 0 && SCARRY8(lVar18,-3) == (longlong)uVar14 < 0) {
      if (6 < (longlong)uVar14) {
        if ((lVar18 + -3 <= (longlong)(uVar11 - param_1)) ||
           (lVar18 + -3 <= (longlong)-(uVar11 - param_1))) {
          if ((longlong)uVar14 < 0x20) {
LAB_1408ec4c6:
            uVar22 = 0;
          }
          else {
            if ((longlong)uVar14 < 0xa91) {
              uStack_a8 = 0;
              uVar22 = uVar14 & 0xffffffffffffffe0;
            }
            else {
              uStack_a8 = uVar11 & 0x1f;
              if (uStack_a8 != 0) {
                uStack_a8 = 0x20 - uStack_a8;
              }
              if ((longlong)uVar14 < (longlong)(uStack_a8 + 0x20)) goto LAB_1408ec4c6;
              uVar22 = uVar14 - (uVar14 - uStack_a8 & 0x1f);
              uVar24 = 0;
              if (uStack_a8 != 0) {
                do {
                  *(undefined1 *)(uVar24 + uVar11) = *(undefined1 *)(uVar24 + param_1);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uStack_a8);
              }
            }
            do {
              puVar1 = (undefined8 *)(uStack_a8 + param_1);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined8 *)(uStack_a8 + uVar11);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              uStack_a8 = uStack_a8 + 0x20;
            } while (uStack_a8 < uVar22);
          }
          if (uVar22 + 1 <= uVar14) {
            uVar14 = uVar14 - uVar22;
            if ((longlong)uVar14 < 8) {
              uStack_98 = 0;
            }
            else {
              uStack_98 = uVar14 & 0xfffffffffffffff8;
              uVar24 = 0;
              do {
                *(undefined8 *)(uVar24 + uVar22 + uVar11) =
                     *(undefined8 *)(uVar22 + param_1 + uVar24);
                uVar24 = uVar24 + 8;
              } while (uVar24 < uStack_98);
            }
            if (uStack_98 < uVar14) {
              do {
                *(undefined1 *)(uStack_98 + uVar22 + uVar11) =
                     *(undefined1 *)(uStack_98 + uVar22 + param_1);
                uStack_98 = uStack_98 + 1;
              } while (uStack_98 < uVar14);
            }
          }
          goto LAB_1408eb011;
        }
      }
      lVar16 = 1;
      uVar22 = (longlong)(param_10 * 3) - 3;
      uVar24 = uVar22 >> 1;
      uVar14 = 0;
      if (uVar24 != 0) {
        do {
          uVar13 = uVar14;
          *(undefined1 *)(uVar11 + uVar13 * 2) = *(undefined1 *)(param_1 + uVar13 * 2);
          *(undefined1 *)(uVar11 + 1 + uVar13 * 2) = *(undefined1 *)(param_1 + 1 + uVar13 * 2);
          uVar14 = uVar13 + 1;
        } while (uVar14 < uVar24);
        lVar16 = uVar13 + 2 + uVar14;
      }
      uVar14 = lVar16 - 1;
      if (uVar14 < uVar22) {
        *(undefined1 *)(uVar11 + uVar14) = *(undefined1 *)(param_1 + uVar14);
      }
    }
LAB_1408eb011:
    if (uVar21 == 1) {
      if (0 < lVar20) {
        lStack_a0 = 1;
        uVar22 = (lVar20 + 2U) / 6;
        uVar14 = 0;
        if (uVar22 != 0) {
          do {
            uVar24 = uVar14;
            *(undefined1 *)(param_11 + uVar24 * 6) = *(undefined1 *)(lVar20 + param_11);
            uVar14 = uVar24 + 1;
            *(undefined1 *)(param_11 + 1 + uVar24 * 6) = *(undefined1 *)(uVar11 + 1);
            *(undefined1 *)(param_11 + 2 + uVar24 * 6) = *(undefined1 *)(uVar11 + 2);
            *(undefined1 *)(param_11 + 3 + uVar24 * 6) = *(undefined1 *)(lVar20 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar24 * 6) = *(undefined1 *)(uVar11 + 1);
            *(undefined1 *)(param_11 + 5 + uVar24 * 6) = *(undefined1 *)(uVar11 + 2);
          } while (uVar14 < uVar22);
          lStack_a0 = uVar24 + 2 + uVar14;
        }
        if (lStack_a0 - 1U < (lVar20 + 2U) / 3) {
          lStack_a0 = lStack_a0 * 3;
          *(undefined1 *)(lStack_a0 + -3 + param_11) = *(undefined1 *)(lVar20 + param_11);
          uVar26 = *(undefined1 *)(uVar11 + 2);
          *(undefined1 *)(lStack_a0 + -2 + param_11) = *(undefined1 *)(uVar11 + 1);
          *(undefined1 *)(lStack_a0 + -1 + param_11) = uVar26;
        }
      }
    }
    else if (uVar21 == 3) {
      if (0 < lVar20) {
        lStack_a0 = 1;
        lVar16 = 0;
        uVar14 = (lVar20 + 2U) / 6;
        if (uVar14 != 0) {
          lVar15 = lVar18 + param_11;
          uVar22 = 0;
          lVar25 = lVar16;
          do {
            uVar24 = uVar22;
            uVar22 = uVar24 + 1;
            *(undefined1 *)(lVar25 + param_11) = *(undefined1 *)(lVar16 + -3 + lVar15);
            *(undefined1 *)(lVar25 + 1 + param_11) = *(undefined1 *)(lVar16 + -2 + lVar15);
            *(undefined1 *)(lVar25 + 2 + param_11) = *(undefined1 *)(lVar16 + -1 + lVar15);
            *(undefined1 *)(lVar25 + 3 + param_11) = *(undefined1 *)(lVar16 + -6 + lVar15);
            *(undefined1 *)(lVar25 + 4 + param_11) = *(undefined1 *)(lVar16 + -5 + lVar15);
            lVar3 = lVar16 + -4;
            lVar16 = lVar16 + -6;
            *(undefined1 *)(lVar25 + 5 + param_11) = *(undefined1 *)(lVar3 + lVar15);
            lVar25 = lVar25 + 6;
          } while (uVar22 < uVar14);
          lStack_a0 = uVar24 + 2 + uVar22;
        }
        if (lStack_a0 - 1U < (lVar20 + 2U) / 3) {
          lVar18 = lVar18 + param_11;
          lStack_a0 = lStack_a0 * 3;
          lVar16 = -(lStack_a0 + -3);
          *(undefined1 *)(lStack_a0 + -3 + param_11) = *(undefined1 *)(lVar16 + -3 + lVar18);
          *(undefined1 *)(lStack_a0 + -2 + param_11) = *(undefined1 *)(lVar16 + -2 + lVar18);
          *(undefined1 *)(lStack_a0 + -1 + param_11) = *(undefined1 *)(lVar16 + -1 + lVar18);
        }
      }
    }
    else if ((uVar21 == 6) && (0 < lVar20)) {
      lStack_a0 = 1;
      uVar22 = (lVar20 + 2U) / 6;
      uVar14 = 0;
      if (uVar22 != 0) {
        do {
          uVar24 = uVar14;
          *(undefined1 *)(param_11 + uVar24 * 6) = *(undefined1 *)puVar17;
          uVar14 = uVar24 + 1;
          *(undefined1 *)(param_11 + 1 + uVar24 * 6) = *(undefined1 *)((longlong)puVar17 + 1);
          *(undefined1 *)(param_11 + 2 + uVar24 * 6) = *(undefined1 *)(puVar17 + 1);
          *(undefined1 *)(param_11 + 3 + uVar24 * 6) = *(undefined1 *)puVar17;
          *(undefined1 *)(param_11 + 4 + uVar24 * 6) = *(undefined1 *)((longlong)puVar17 + 1);
          *(undefined1 *)(param_11 + 5 + uVar24 * 6) = *(undefined1 *)(puVar17 + 1);
        } while (uVar14 < uVar22);
        lStack_a0 = uVar24 + 2 + uVar14;
      }
      if (lStack_a0 - 1U < (lVar20 + 2U) / 3) {
        lStack_a0 = lStack_a0 * 3;
        *(undefined1 *)(lStack_a0 + -3 + param_11) = *(undefined1 *)puVar17;
        *(undefined1 *)(lStack_a0 + -2 + param_11) = *(undefined1 *)((longlong)puVar17 + 1);
        *(undefined1 *)(lStack_a0 + -1 + param_11) = *(undefined1 *)(puVar17 + 1);
      }
    }
    pcStack_68 = (code *)(&PTR_FUN_14308d140)[lVar10];
    (*pcStack_68)(uVar11,param_4,lVar29,param_9,param_10);
    lVar19 = lVar19 - lVar29;
    param_1 = param_1 + lVar20;
    param_4 = param_4 + lVar29 * 0xc;
  }
  else {
    pcStack_68 = (code *)(&PTR_FUN_14308d140)[lVar10];
  }
  if ((param_7 & 0x80) != 0) {
    (*pcStack_68)(param_1,param_4,lVar19,param_9,param_10);
    return;
  }
  if (lVar29 < lVar19) {
    lVar19 = lVar19 - lVar29;
    (*pcStack_68)(param_1,param_4,lVar19,param_9,param_10);
    param_4 = param_4 + lVar19 * 0xc;
    param_1 = param_1 + lVar19 * 3;
  }
  lVar27 = lVar27 * 3;
  if (lVar27 != 3 && SCARRY8(lVar27,-3) == lVar27 + -3 < 0) {
    uVar11 = lVar27 - 1;
    uVar14 = (longlong)uVar11 / 3;
    lVar18 = lVar29 * -3;
    lVar19 = param_11 - (param_1 + lVar18);
    lVar10 = uVar14 * 3;
    if ((lVar10 <= lVar19) || (lVar10 + -2 <= -lVar19)) {
      lVar19 = (param_11 + 1) - (param_1 + lVar18);
      if (((lVar10 <= lVar19) || (lVar10 + -1 <= -lVar19)) &&
         ((lVar19 = (param_11 + 1) - param_11, lVar10 + -2 <= lVar19 || (lVar10 + -1 <= -lVar19))))
      {
        lVar10 = 1;
        uVar22 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar22 != 0) {
          uVar24 = 0;
          do {
            uVar13 = uVar24;
            uVar24 = uVar13 + 1;
            *(undefined1 *)(param_11 + uVar13 * 6) = *(undefined1 *)(lVar18 + param_1 + uVar13 * 6);
            *(undefined1 *)(param_11 + 3 + uVar13 * 6) =
                 *(undefined1 *)(lVar18 + param_1 + 3 + uVar13 * 6);
          } while (uVar24 < uVar22);
          lVar10 = uVar13 + 2 + uVar24;
        }
        if (lVar10 - 1U < uVar11 / 3) {
          lVar10 = lVar10 * 3 + -3;
          *(undefined1 *)(lVar10 + param_11) = *(undefined1 *)(lVar10 + lVar18 + param_1);
        }
        auVar32 = _DAT_14308d350;
        if ((longlong)uVar14 < 0x20) {
          uVar11 = 0;
        }
        else {
          uVar22 = 0;
          puVar23 = (ushort *)(lVar18 + 1 + param_1);
          lVar10 = 0;
          uVar11 = uVar14 & 0xffffffffffffffe0;
          do {
            uVar22 = uVar22 + 0x20;
            auVar31 = vpinsrw_avx(ZEXT216(*puVar23),(uint)*(ushort *)((longlong)puVar23 + 3),1);
            auVar31 = vpinsrw_avx(auVar31,(uint)puVar23[3],2);
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)((longlong)puVar23 + 9),3);
            auVar31 = vpinsrw_avx(auVar31,(uint)puVar23[6],4);
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)((longlong)puVar23 + 0xf),5);
            auVar31 = vpinsrw_avx(auVar31,(uint)puVar23[9],6);
            auVar33 = vpinsrw_avx(ZEXT216(puVar23[0xc]),(uint)*(ushort *)((longlong)puVar23 + 0x1b),
                                  1);
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)((longlong)puVar23 + 0x15),7);
            auVar35 = vpinsrw_avx(auVar33,(uint)puVar23[0xf],2);
            auVar33 = vpand_avx(auVar32,auVar31);
            auVar42 = vpsrlw_avx(auVar31,8);
            auVar31 = vpinsrw_avx(auVar35,(uint)*(ushort *)((longlong)puVar23 + 0x21),3);
            auVar31 = vpinsrw_avx(auVar31,(uint)puVar23[0x12],4);
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)((longlong)puVar23 + 0x27),5);
            auVar31 = vpinsrw_avx(auVar31,(uint)puVar23[0x15],6);
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)((longlong)puVar23 + 0x2d),7);
            auVar39 = vpsrlw_avx(auVar31,8);
            auVar35 = vpand_avx(auVar32,auVar31);
            auVar31 = vpackuswb_avx(auVar42,auVar39);
            auVar39 = vpinsrw_avx(ZEXT216(puVar23[0x18]),(uint)*(ushort *)((longlong)puVar23 + 0x33)
                                  ,1);
            auVar33 = vpackuswb_avx(auVar33,auVar35);
            auVar35 = vpinsrw_avx(auVar39,(uint)puVar23[0x1b],2);
            auVar35 = vpinsrw_avx(auVar35,(uint)*(ushort *)((longlong)puVar23 + 0x39),3);
            auVar35 = vpinsrw_avx(auVar35,(uint)puVar23[0x1e],4);
            auVar35 = vpinsrw_avx(auVar35,(uint)*(ushort *)((longlong)puVar23 + 0x3f),5);
            auVar35 = vpinsrw_avx(auVar35,(uint)puVar23[0x21],6);
            auVar39 = vpinsrw_avx(auVar35,(uint)*(ushort *)((longlong)puVar23 + 0x45),7);
            auVar35 = vpand_avx(auVar32,auVar39);
            auVar42 = vpsrlw_avx(auVar39,8);
            auVar39 = vpinsrw_avx(ZEXT216(puVar23[0x24]),(uint)*(ushort *)((longlong)puVar23 + 0x4b)
                                  ,1);
            auVar39 = vpinsrw_avx(auVar39,(uint)puVar23[0x27],2);
            auVar39 = vpinsrw_avx(auVar39,(uint)*(ushort *)((longlong)puVar23 + 0x51),3);
            auVar39 = vpinsrw_avx(auVar39,(uint)puVar23[0x2a],4);
            auVar39 = vpinsrw_avx(auVar39,(uint)*(ushort *)((longlong)puVar23 + 0x57),5);
            auVar39 = vpinsrw_avx(auVar39,(uint)puVar23[0x2d],6);
            auVar39 = vpinsrw_avx(auVar39,(uint)*(ushort *)((longlong)puVar23 + 0x5d),7);
            puVar23 = puVar23 + 0x30;
            *(char *)(lVar10 + 2 + param_11) = auVar31[0];
            *(char *)(lVar10 + 5 + param_11) = auVar31[1];
            *(char *)(lVar10 + 8 + param_11) = auVar31[2];
            *(char *)(lVar10 + 0xb + param_11) = auVar31[3];
            *(char *)(lVar10 + 0xe + param_11) = auVar31[4];
            *(char *)(lVar10 + 0x11 + param_11) = auVar31[5];
            *(char *)(lVar10 + 0x14 + param_11) = auVar31[6];
            *(char *)(lVar10 + 0x17 + param_11) = auVar31[7];
            *(char *)(lVar10 + 0x1a + param_11) = auVar31[0];
            *(char *)(lVar10 + 0x1d + param_11) = auVar31[1];
            *(char *)(lVar10 + 0x20 + param_11) = auVar31[2];
            *(char *)(lVar10 + 0x23 + param_11) = auVar31[3];
            *(char *)(lVar10 + 0x26 + param_11) = auVar31[4];
            *(char *)(lVar10 + 0x29 + param_11) = auVar31[5];
            *(char *)(lVar10 + 0x2c + param_11) = auVar31[6];
            *(char *)(lVar10 + 0x2f + param_11) = auVar31[7];
            auVar31 = vpand_avx(auVar32,auVar39);
            auVar39 = vpsrlw_avx(auVar39,8);
            auVar31 = vpackuswb_avx(auVar35,auVar31);
            auVar35 = vpackuswb_avx(auVar42,auVar39);
            *(char *)(lVar10 + 0x32 + param_11) = auVar35[0];
            *(char *)(lVar10 + 0x35 + param_11) = auVar35[1];
            *(char *)(lVar10 + 0x38 + param_11) = auVar35[2];
            *(char *)(lVar10 + 0x3b + param_11) = auVar35[3];
            *(char *)(lVar10 + 0x3e + param_11) = auVar35[4];
            *(char *)(lVar10 + 0x41 + param_11) = auVar35[5];
            *(char *)(lVar10 + 0x44 + param_11) = auVar35[6];
            *(char *)(lVar10 + 0x47 + param_11) = auVar35[7];
            *(char *)(lVar10 + 0x4a + param_11) = auVar35[0];
            *(char *)(lVar10 + 0x4d + param_11) = auVar35[1];
            *(char *)(lVar10 + 0x50 + param_11) = auVar35[2];
            *(char *)(lVar10 + 0x53 + param_11) = auVar35[3];
            *(char *)(lVar10 + 0x56 + param_11) = auVar35[4];
            *(char *)(lVar10 + 0x59 + param_11) = auVar35[5];
            *(char *)(lVar10 + 0x5c + param_11) = auVar35[6];
            *(char *)(lVar10 + 0x5f + param_11) = auVar35[7];
            *(char *)(lVar10 + 1 + param_11) = auVar33[0];
            *(char *)(lVar10 + 4 + param_11) = auVar33[1];
            *(char *)(lVar10 + 7 + param_11) = auVar33[2];
            *(char *)(lVar10 + 10 + param_11) = auVar33[3];
            *(char *)(lVar10 + 0xd + param_11) = auVar33[4];
            *(char *)(lVar10 + 0x10 + param_11) = auVar33[5];
            *(char *)(lVar10 + 0x13 + param_11) = auVar33[6];
            *(char *)(lVar10 + 0x16 + param_11) = auVar33[7];
            *(char *)(lVar10 + 0x19 + param_11) = auVar33[0];
            *(char *)(lVar10 + 0x1c + param_11) = auVar33[1];
            *(char *)(lVar10 + 0x1f + param_11) = auVar33[2];
            *(char *)(lVar10 + 0x22 + param_11) = auVar33[3];
            *(char *)(lVar10 + 0x25 + param_11) = auVar33[4];
            *(char *)(lVar10 + 0x28 + param_11) = auVar33[5];
            *(char *)(lVar10 + 0x2b + param_11) = auVar33[6];
            *(char *)(lVar10 + 0x2e + param_11) = auVar33[7];
            *(char *)(lVar10 + 0x31 + param_11) = auVar31[0];
            *(char *)(lVar10 + 0x34 + param_11) = auVar31[1];
            *(char *)(lVar10 + 0x37 + param_11) = auVar31[2];
            *(char *)(lVar10 + 0x3a + param_11) = auVar31[3];
            *(char *)(lVar10 + 0x3d + param_11) = auVar31[4];
            *(char *)(lVar10 + 0x40 + param_11) = auVar31[5];
            *(char *)(lVar10 + 0x43 + param_11) = auVar31[6];
            *(char *)(lVar10 + 0x46 + param_11) = auVar31[7];
            *(char *)(lVar10 + 0x49 + param_11) = auVar31[0];
            *(char *)(lVar10 + 0x4c + param_11) = auVar31[1];
            *(char *)(lVar10 + 0x4f + param_11) = auVar31[2];
            *(char *)(lVar10 + 0x52 + param_11) = auVar31[3];
            *(char *)(lVar10 + 0x55 + param_11) = auVar31[4];
            *(char *)(lVar10 + 0x58 + param_11) = auVar31[5];
            *(char *)(lVar10 + 0x5b + param_11) = auVar31[6];
            *(char *)(lVar10 + 0x5e + param_11) = auVar31[7];
            lVar10 = lVar10 + 0x60;
          } while (uVar22 < uVar11);
        }
        lVar10 = uVar11 * 3;
        if (uVar11 < uVar14) {
          do {
            uVar11 = uVar11 + 1;
            *(undefined1 *)(lVar10 + 1 + param_11) = *(undefined1 *)(lVar10 + 1 + lVar18 + param_1);
            *(undefined1 *)(lVar10 + 2 + param_11) = *(undefined1 *)(lVar10 + 2 + lVar18 + param_1);
            lVar10 = lVar10 + 3;
          } while (uVar11 < uVar14);
        }
        goto LAB_1408eb9f9;
      }
    }
    lVar10 = 1;
    uVar14 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar14 != 0) {
      lVar10 = lVar18 + param_1;
      uVar22 = 0;
      do {
        uVar24 = uVar22;
        uVar22 = uVar24 + 1;
        *(undefined1 *)(param_11 + uVar24 * 6) = *(undefined1 *)(lVar10 + uVar24 * 6);
        *(undefined1 *)(param_11 + 1 + uVar24 * 6) = *(undefined1 *)(lVar10 + 1 + uVar24 * 6);
        *(undefined1 *)(param_11 + 2 + uVar24 * 6) = *(undefined1 *)(lVar10 + 2 + uVar24 * 6);
        *(undefined1 *)(param_11 + 3 + uVar24 * 6) = *(undefined1 *)(lVar10 + 3 + uVar24 * 6);
        *(undefined1 *)(param_11 + 4 + uVar24 * 6) = *(undefined1 *)(lVar10 + 4 + uVar24 * 6);
        *(undefined1 *)(param_11 + 5 + uVar24 * 6) = *(undefined1 *)(lVar10 + 5 + uVar24 * 6);
      } while (uVar22 < uVar14);
      lVar10 = uVar24 + 2 + uVar22;
    }
    if (lVar10 - 1U < uVar11 / 3) {
      lVar18 = lVar18 + param_1;
      lVar10 = lVar10 * 3;
      lVar19 = lVar10 + -3;
      *(undefined1 *)(lVar19 + param_11) = *(undefined1 *)(lVar18 + lVar19);
      *(undefined1 *)(lVar10 + -2 + param_11) = *(undefined1 *)(lVar18 + 1 + lVar19);
      *(undefined1 *)(lVar10 + -1 + param_11) = *(undefined1 *)(lVar18 + 2 + lVar19);
    }
  }
LAB_1408eb9f9:
  lVar10 = lVar29 * 3;
  if (uVar21 == 1) {
    if (0 < lVar10) {
      uVar11 = lVar10 + 2;
      uVar14 = (longlong)uVar11 / 3;
      if ((longlong)uVar14 < 7) {
        lVar19 = 1;
        if (uVar11 / 6 != 0) {
          lVar19 = param_11 + lVar27;
          uVar14 = 0;
          do {
            uVar22 = uVar14;
            *(undefined1 *)(lVar19 + -3 + uVar22 * 6) = *(undefined1 *)(lVar19 + -6);
            uVar14 = uVar22 + 1;
            *(undefined1 *)(lVar19 + -2 + uVar22 * 6) = *(undefined1 *)(lVar19 + -5);
            *(undefined1 *)(lVar19 + -1 + uVar22 * 6) = *(undefined1 *)(lVar19 + -4);
            *(undefined1 *)(lVar19 + uVar22 * 6) = *(undefined1 *)(lVar19 + -6);
            *(undefined1 *)(lVar19 + 1 + uVar22 * 6) = *(undefined1 *)(lVar19 + -5);
            *(undefined1 *)(lVar19 + 2 + uVar22 * 6) = *(undefined1 *)(lVar19 + -4);
          } while (uVar14 < uVar11 / 6);
          lVar19 = uVar22 + 2 + uVar14;
        }
        if (lVar19 - 1U < uVar11 / 3) {
          lVar27 = lVar27 + param_11;
          lVar19 = lVar19 * 3;
          *(undefined1 *)(lVar19 + -6 + lVar27) = *(undefined1 *)(lVar27 + -6);
          *(undefined1 *)(lVar19 + -5 + lVar27) = *(undefined1 *)(lVar27 + -5);
          *(undefined1 *)(lVar19 + -4 + lVar27) = *(undefined1 *)(lVar27 + -4);
        }
      }
      else {
        lVar27 = lVar27 + param_11;
        uVar26 = *(undefined1 *)(lVar27 + -6);
        uVar28 = *(undefined1 *)(lVar27 + -5);
        bVar4 = *(byte *)(lVar27 + -4);
        if ((longlong)uVar14 < 0x20) {
          uVar11 = 0;
        }
        else {
          auVar41[1] = uVar26;
          auVar41[0] = uVar26;
          auVar41[2] = uVar26;
          auVar41[3] = uVar26;
          auVar41[4] = uVar26;
          auVar41[5] = uVar26;
          auVar41[6] = uVar26;
          auVar41[7] = uVar26;
          auVar41[8] = uVar26;
          auVar41[9] = uVar26;
          auVar41[10] = uVar26;
          auVar41[0xb] = uVar26;
          auVar41[0xc] = uVar26;
          auVar41[0xd] = uVar26;
          auVar41[0xe] = uVar26;
          auVar41[0xf] = uVar26;
          auVar41[0x10] = uVar26;
          auVar41[0x11] = uVar26;
          auVar41[0x12] = uVar26;
          auVar41[0x13] = uVar26;
          auVar41[0x14] = uVar26;
          auVar41[0x15] = uVar26;
          auVar41[0x16] = uVar26;
          auVar41[0x17] = uVar26;
          auVar41[0x18] = uVar26;
          auVar41[0x19] = uVar26;
          auVar41[0x1a] = uVar26;
          auVar41[0x1b] = uVar26;
          auVar41[0x1c] = uVar26;
          auVar41[0x1d] = uVar26;
          auVar41[0x1e] = uVar26;
          auVar41[0x1f] = uVar26;
          auVar46[1] = uVar28;
          auVar46[0] = uVar28;
          auVar46[2] = uVar28;
          auVar46[3] = uVar28;
          auVar46[4] = uVar28;
          auVar46[5] = uVar28;
          auVar46[6] = uVar28;
          auVar46[7] = uVar28;
          auVar46[8] = uVar28;
          auVar46[9] = uVar28;
          auVar46[10] = uVar28;
          auVar46[0xb] = uVar28;
          auVar46[0xc] = uVar28;
          auVar46[0xd] = uVar28;
          auVar46[0xe] = uVar28;
          auVar46[0xf] = uVar28;
          auVar46[0x10] = uVar28;
          auVar46[0x11] = uVar28;
          auVar46[0x12] = uVar28;
          auVar46[0x13] = uVar28;
          auVar46[0x14] = uVar28;
          auVar46[0x15] = uVar28;
          auVar46[0x16] = uVar28;
          auVar46[0x17] = uVar28;
          auVar46[0x18] = uVar28;
          auVar46[0x19] = uVar28;
          auVar46[0x1a] = uVar28;
          auVar46[0x1b] = uVar28;
          auVar46[0x1c] = uVar28;
          auVar46[0x1d] = uVar28;
          auVar46[0x1e] = uVar28;
          auVar46[0x1f] = uVar28;
          auVar5 = vpshufb_avx2(auVar41,_DAT_14308d220);
          uVar22 = 0;
          auVar41 = vpshufb_avx2(auVar41,_DAT_14308d2e0);
          auVar34 = vpshufb_avx2(auVar46,_DAT_14308d240);
          auVar37 = vpshufb_avx2(auVar46,_DAT_14308d300);
          auVar41 = vpor_avx2(auVar41,auVar37);
          auVar37[1] = bVar4;
          auVar37[0] = bVar4;
          auVar37[2] = bVar4;
          auVar37[3] = bVar4;
          auVar37[4] = bVar4;
          auVar37[5] = bVar4;
          auVar37[6] = bVar4;
          auVar37[7] = bVar4;
          auVar37[8] = bVar4;
          auVar37[9] = bVar4;
          auVar37[10] = bVar4;
          auVar37[0xb] = bVar4;
          auVar37[0xc] = bVar4;
          auVar37[0xd] = bVar4;
          auVar37[0xe] = bVar4;
          auVar37[0xf] = bVar4;
          auVar37[0x10] = bVar4;
          auVar37[0x11] = bVar4;
          auVar37[0x12] = bVar4;
          auVar37[0x13] = bVar4;
          auVar37[0x14] = bVar4;
          auVar37[0x15] = bVar4;
          auVar37[0x16] = bVar4;
          auVar37[0x17] = bVar4;
          auVar37[0x18] = bVar4;
          auVar37[0x19] = bVar4;
          auVar37[0x1a] = bVar4;
          auVar37[0x1b] = bVar4;
          auVar37[0x1c] = bVar4;
          auVar37[0x1d] = bVar4;
          auVar37[0x1e] = bVar4;
          auVar37[0x1f] = bVar4;
          uVar11 = uVar14 & 0xffffffffffffffe0;
          auVar46 = vpshufb_avx2(auVar37,_DAT_14308d260);
          lVar19 = 0;
          auVar37 = vpshufb_avx2(auVar37,_DAT_14308d320);
          auVar37 = vpor_avx2(auVar41,auVar37);
          auVar41 = vpblendvb_avx2(auVar5,auVar34,_DAT_14308d280);
          auVar5 = vpblendvb_avx2(auVar34,auVar5,_DAT_14308d280);
          auVar41 = vpblendvb_avx2(auVar41,auVar46,_DAT_14308d2a0);
          auVar5 = vpblendvb_avx2(auVar5,auVar46,_DAT_14308d2c0);
          auVar34._0_16_ = ZEXT116(0) * auVar37._0_16_ + ZEXT116(1) * auVar5._0_16_;
          auVar34._16_16_ = ZEXT116(0) * auVar5._16_16_ + ZEXT116(1) * auVar37._0_16_;
          auVar5 = vperm2i128_avx2(auVar37,auVar5,0x31);
          do {
            uVar22 = uVar22 + 0x20;
            *(undefined1 (*) [32])(lVar19 + -3 + lVar27) = auVar34;
            *(undefined1 (*) [32])(lVar19 + 0x1d + lVar27) = auVar41;
            *(undefined1 (*) [32])(lVar19 + 0x3d + lVar27) = auVar5;
            lVar19 = lVar19 + 0x60;
          } while (uVar22 < uVar11);
        }
        if (uVar11 + 1 <= uVar14) {
          uVar14 = uVar14 - uVar11;
          if ((longlong)uVar14 < 8) {
            uStack_80 = 0;
          }
          else {
            auVar32[1] = uVar26;
            auVar32[0] = uVar26;
            auVar32[2] = uVar26;
            auVar32[3] = uVar26;
            auVar32[4] = uVar26;
            auVar32[5] = uVar26;
            auVar32[6] = uVar26;
            auVar32[7] = uVar26;
            auVar32[8] = uVar26;
            auVar32[9] = uVar26;
            auVar32[10] = uVar26;
            auVar32[0xb] = uVar26;
            auVar32[0xc] = uVar26;
            auVar32[0xd] = uVar26;
            auVar32[0xe] = uVar26;
            auVar32[0xf] = uVar26;
            auVar31[1] = uVar28;
            auVar31[0] = uVar28;
            auVar31[2] = uVar28;
            auVar31[3] = uVar28;
            auVar31[4] = uVar28;
            auVar31[5] = uVar28;
            auVar31[6] = uVar28;
            auVar31[7] = uVar28;
            auVar31[8] = uVar28;
            auVar31[9] = uVar28;
            auVar31[10] = uVar28;
            auVar31[0xb] = uVar28;
            auVar31[0xc] = uVar28;
            auVar31[0xd] = uVar28;
            auVar31[0xe] = uVar28;
            auVar31[0xf] = uVar28;
            uStack_80 = uVar14 & 0xfffffffffffffff8;
            auVar32 = vpunpcklbw_avx(auVar32,auVar31);
            auVar42 = vpsrldq_avx(auVar32,3);
            auVar31 = vpsrldq_avx(auVar42,2);
            auVar43._0_3_ = CONCAT12(bVar4,CONCAT11(bVar4,bVar4));
            auVar43[3] = bVar4;
            auVar43[4] = bVar4;
            auVar43[5] = bVar4;
            auVar43[6] = bVar4;
            auVar43[7] = bVar4;
            auVar43[8] = bVar4;
            auVar43[9] = bVar4;
            auVar43[10] = bVar4;
            auVar43[0xb] = bVar4;
            auVar43[0xc] = bVar4;
            auVar43[0xd] = bVar4;
            auVar43[0xe] = bVar4;
            auVar43[0xf] = bVar4;
            lVar18 = uVar11 * 3 + lVar27;
            auVar33 = vpsrlq_avx(auVar43,0x20);
            auVar44 = vpsrldq_avx(auVar31,3);
            auVar39 = vpsrldq_avx(auVar44,2);
            auVar35 = vpsrldq_avx(auVar39,3);
            uVar22 = 0;
            uVar21 = auVar33._0_4_;
            lVar19 = 0;
            do {
              uVar22 = uVar22 + 8;
              *(uint *)(lVar19 + -3 + lVar18) =
                   (auVar43._0_3_ & 0xff) << 0x10 |
                   (auVar32._0_4_ & 0xff0000) << 8 | auVar32._0_4_ & 0xffff;
              *(uint *)(lVar19 + 1 + lVar18) =
                   auVar43._0_3_ & 0xff00 | (auVar42._0_4_ & 0xffff00) << 8 | auVar42._0_4_ & 0xff;
              *(uint *)(lVar19 + 5 + lVar18) =
                   (uint)bVar4 | (uint)bVar4 << 0x18 | auVar31._0_4_ & 0xffff00;
              *(uint *)(lVar19 + 9 + lVar18) =
                   (uVar21 & 0xff) << 0x10 |
                   (auVar44._0_4_ & 0xffff0000) << 8 | auVar44._0_4_ & 0xffff;
              *(uint *)(lVar19 + 0xd + lVar18) =
                   uVar21 & 0xff00 | auVar39._0_4_ >> 8 & 0xff | auVar39._0_4_ & 0xffff0000;
              *(uint *)(lVar19 + 0x11 + lVar18) =
                   uVar21 >> 0x10 & 0xff | uVar21 & 0xff000000 | auVar35._0_4_ & 0xffff00;
              lVar19 = lVar19 + 0x18;
            } while (uVar22 < uStack_80);
          }
          lVar19 = uStack_80 * 3;
          if (uStack_80 < uVar14) {
            lVar27 = lVar27 + uVar11 * 3;
            do {
              uStack_80 = uStack_80 + 1;
              *(undefined1 *)(lVar19 + -3 + lVar27) = uVar26;
              *(undefined1 *)(lVar19 + -2 + lVar27) = uVar28;
              *(byte *)(lVar19 + -1 + lVar27) = bVar4;
              lVar19 = lVar19 + 3;
            } while (uStack_80 < uVar14);
          }
        }
      }
    }
  }
  else if (uVar21 == 3) {
    if (0 < lVar10) {
      lVar19 = 1;
      lVar18 = 0;
      lVar20 = 0;
      uVar11 = (lVar10 + 2U) / 6;
      if (uVar11 != 0) {
        lVar19 = param_11 + lVar27;
        uVar14 = 0;
        do {
          uVar22 = uVar14;
          uVar14 = uVar22 + 1;
          uVar26 = *(undefined1 *)(lVar20 + -8 + lVar19);
          *(undefined1 *)(lVar18 + -3 + lVar19) = *(undefined1 *)(lVar20 + -9 + lVar19);
          *(undefined1 *)(lVar18 + -2 + lVar19) = uVar26;
          uVar26 = *(undefined1 *)(lVar20 + -0xc + lVar19);
          *(undefined1 *)(lVar18 + -1 + lVar19) = *(undefined1 *)(lVar20 + -7 + lVar19);
          *(undefined1 *)(lVar18 + lVar19) = uVar26;
          lVar16 = lVar20 + -0xb;
          uVar26 = *(undefined1 *)(lVar20 + -10 + lVar19);
          lVar20 = lVar20 + -6;
          *(undefined1 *)(lVar18 + 1 + lVar19) = *(undefined1 *)(lVar16 + lVar19);
          *(undefined1 *)(lVar18 + 2 + lVar19) = uVar26;
          lVar18 = lVar18 + 6;
        } while (uVar14 < uVar11);
        lVar19 = uVar22 + 2 + uVar14;
      }
      if (lVar19 - 1U < (lVar10 + 2U) / 3) {
        lVar27 = lVar27 + param_11;
        lVar19 = lVar19 * 3;
        lVar18 = -(lVar19 + -3);
        uVar26 = *(undefined1 *)(lVar18 + -8 + lVar27);
        uVar28 = *(undefined1 *)(lVar18 + -7 + lVar27);
        *(undefined1 *)(lVar19 + -6 + lVar27) = *(undefined1 *)(lVar18 + -9 + lVar27);
        *(undefined1 *)(lVar19 + -5 + lVar27) = uVar26;
        *(undefined1 *)(lVar19 + -4 + lVar27) = uVar28;
      }
    }
  }
  else if ((uVar21 == 6) && (0 < lVar10)) {
    uVar11 = lVar10 + 2;
    uVar14 = (longlong)uVar11 / 3;
    if (6 < (longlong)uVar14) {
      lVar19 = param_11 + lVar27;
      lVar18 = (lVar19 + -3) - (longlong)puVar17;
      if ((2 < lVar18) || ((longlong)(uVar14 * 3) <= -lVar18)) {
        uVar26 = *(undefined1 *)puVar17;
        uVar28 = *(undefined1 *)((longlong)puVar17 + 1);
        bVar4 = *(byte *)(puVar17 + 1);
        if ((longlong)uVar14 < 0x20) {
          uVar11 = 0;
        }
        else {
          auVar45[1] = uVar28;
          auVar45[0] = uVar28;
          auVar45[2] = uVar28;
          auVar45[3] = uVar28;
          auVar45[4] = uVar28;
          auVar45[5] = uVar28;
          auVar45[6] = uVar28;
          auVar45[7] = uVar28;
          auVar45[8] = uVar28;
          auVar45[9] = uVar28;
          auVar45[10] = uVar28;
          auVar45[0xb] = uVar28;
          auVar45[0xc] = uVar28;
          auVar45[0xd] = uVar28;
          auVar45[0xe] = uVar28;
          auVar45[0xf] = uVar28;
          auVar45[0x10] = uVar28;
          auVar45[0x11] = uVar28;
          auVar45[0x12] = uVar28;
          auVar45[0x13] = uVar28;
          auVar45[0x14] = uVar28;
          auVar45[0x15] = uVar28;
          auVar45[0x16] = uVar28;
          auVar45[0x17] = uVar28;
          auVar45[0x18] = uVar28;
          auVar45[0x19] = uVar28;
          auVar45[0x1a] = uVar28;
          auVar45[0x1b] = uVar28;
          auVar45[0x1c] = uVar28;
          auVar45[0x1d] = uVar28;
          auVar45[0x1e] = uVar28;
          auVar45[0x1f] = uVar28;
          auVar38[1] = uVar26;
          auVar38[0] = uVar26;
          auVar38[2] = uVar26;
          auVar38[3] = uVar26;
          auVar38[4] = uVar26;
          auVar38[5] = uVar26;
          auVar38[6] = uVar26;
          auVar38[7] = uVar26;
          auVar38[8] = uVar26;
          auVar38[9] = uVar26;
          auVar38[10] = uVar26;
          auVar38[0xb] = uVar26;
          auVar38[0xc] = uVar26;
          auVar38[0xd] = uVar26;
          auVar38[0xe] = uVar26;
          auVar38[0xf] = uVar26;
          auVar38[0x10] = uVar26;
          auVar38[0x11] = uVar26;
          auVar38[0x12] = uVar26;
          auVar38[0x13] = uVar26;
          auVar38[0x14] = uVar26;
          auVar38[0x15] = uVar26;
          auVar38[0x16] = uVar26;
          auVar38[0x17] = uVar26;
          auVar38[0x18] = uVar26;
          auVar38[0x19] = uVar26;
          auVar38[0x1a] = uVar26;
          auVar38[0x1b] = uVar26;
          auVar38[0x1c] = uVar26;
          auVar38[0x1d] = uVar26;
          auVar38[0x1e] = uVar26;
          auVar38[0x1f] = uVar26;
          uVar22 = 0;
          auVar5 = vpshufb_avx2(auVar45,_DAT_14308d240);
          uVar11 = uVar14 & 0xffffffffffffffe0;
          auVar41 = vpshufb_avx2(auVar38,_DAT_14308d2e0);
          auVar37 = vpshufb_avx2(auVar45,_DAT_14308d300);
          auVar34 = vpshufb_avx2(auVar38,_DAT_14308d220);
          auVar41 = vpor_avx2(auVar41,auVar37);
          auVar40[1] = bVar4;
          auVar40[0] = bVar4;
          auVar40[2] = bVar4;
          auVar40[3] = bVar4;
          auVar40[4] = bVar4;
          auVar40[5] = bVar4;
          auVar40[6] = bVar4;
          auVar40[7] = bVar4;
          auVar40[8] = bVar4;
          auVar40[9] = bVar4;
          auVar40[10] = bVar4;
          auVar40[0xb] = bVar4;
          auVar40[0xc] = bVar4;
          auVar40[0xd] = bVar4;
          auVar40[0xe] = bVar4;
          auVar40[0xf] = bVar4;
          auVar40[0x10] = bVar4;
          auVar40[0x11] = bVar4;
          auVar40[0x12] = bVar4;
          auVar40[0x13] = bVar4;
          auVar40[0x14] = bVar4;
          auVar40[0x15] = bVar4;
          auVar40[0x16] = bVar4;
          auVar40[0x17] = bVar4;
          auVar40[0x18] = bVar4;
          auVar40[0x19] = bVar4;
          auVar40[0x1a] = bVar4;
          auVar40[0x1b] = bVar4;
          auVar40[0x1c] = bVar4;
          auVar40[0x1d] = bVar4;
          auVar40[0x1e] = bVar4;
          auVar40[0x1f] = bVar4;
          lVar27 = 0;
          auVar46 = vpshufb_avx2(auVar40,_DAT_14308d260);
          auVar37 = vpshufb_avx2(auVar40,_DAT_14308d320);
          auVar37 = vpor_avx2(auVar41,auVar37);
          auVar41 = vpblendvb_avx2(auVar34,auVar5,_DAT_14308d280);
          auVar5 = vpblendvb_avx2(auVar5,auVar34,_DAT_14308d280);
          auVar41 = vpblendvb_avx2(auVar41,auVar46,_DAT_14308d2a0);
          auVar5 = vpblendvb_avx2(auVar5,auVar46,_DAT_14308d2c0);
          auVar36._0_16_ = ZEXT116(0) * auVar37._0_16_ + ZEXT116(1) * auVar5._0_16_;
          auVar36._16_16_ = ZEXT116(0) * auVar5._16_16_ + ZEXT116(1) * auVar37._0_16_;
          auVar5 = vperm2i128_avx2(auVar37,auVar5,0x31);
          do {
            uVar22 = uVar22 + 0x20;
            *(undefined1 (*) [32])(lVar27 + -3 + lVar19) = auVar36;
            *(undefined1 (*) [32])(lVar27 + 0x1d + lVar19) = auVar41;
            *(undefined1 (*) [32])(lVar27 + 0x3d + lVar19) = auVar5;
            lVar27 = lVar27 + 0x60;
          } while (uVar22 < uVar11);
        }
        if (uVar11 + 1 <= uVar14) {
          uVar14 = uVar14 - uVar11;
          if ((longlong)uVar14 < 8) {
            uStack_80 = 0;
          }
          else {
            auVar33[1] = uVar26;
            auVar33[0] = uVar26;
            auVar33[2] = uVar26;
            auVar33[3] = uVar26;
            auVar33[4] = uVar26;
            auVar33[5] = uVar26;
            auVar33[6] = uVar26;
            auVar33[7] = uVar26;
            auVar33[8] = uVar26;
            auVar33[9] = uVar26;
            auVar33[10] = uVar26;
            auVar33[0xb] = uVar26;
            auVar33[0xc] = uVar26;
            auVar33[0xd] = uVar26;
            auVar33[0xe] = uVar26;
            auVar33[0xf] = uVar26;
            uStack_80 = uVar14 & 0xfffffffffffffff8;
            auVar35[1] = uVar28;
            auVar35[0] = uVar28;
            auVar35[2] = uVar28;
            auVar35[3] = uVar28;
            auVar35[4] = uVar28;
            auVar35[5] = uVar28;
            auVar35[6] = uVar28;
            auVar35[7] = uVar28;
            auVar35[8] = uVar28;
            auVar35[9] = uVar28;
            auVar35[10] = uVar28;
            auVar35[0xb] = uVar28;
            auVar35[0xc] = uVar28;
            auVar35[0xd] = uVar28;
            auVar35[0xe] = uVar28;
            auVar35[0xf] = uVar28;
            auVar32 = vpunpcklbw_avx(auVar33,auVar35);
            auVar42 = vpsrldq_avx(auVar32,3);
            auVar44._0_3_ = CONCAT12(bVar4,CONCAT11(bVar4,bVar4));
            auVar44[3] = bVar4;
            auVar44[4] = bVar4;
            auVar44[5] = bVar4;
            auVar44[6] = bVar4;
            auVar44[7] = bVar4;
            auVar44[8] = bVar4;
            auVar44[9] = bVar4;
            auVar44[10] = bVar4;
            auVar44[0xb] = bVar4;
            auVar44[0xc] = bVar4;
            auVar44[0xd] = bVar4;
            auVar44[0xe] = bVar4;
            auVar44[0xf] = bVar4;
            lVar18 = uVar11 * 3 + lVar19;
            auVar33 = vpsrlq_avx(auVar44,0x20);
            auVar31 = vpsrldq_avx(auVar42,2);
            auVar43 = vpsrldq_avx(auVar31,3);
            auVar39 = vpsrldq_avx(auVar43,2);
            auVar35 = vpsrldq_avx(auVar39,3);
            uVar22 = 0;
            uVar21 = auVar33._0_4_;
            lVar27 = 0;
            do {
              uVar22 = uVar22 + 8;
              *(uint *)(lVar27 + -3 + lVar18) =
                   (auVar44._0_3_ & 0xff) << 0x10 |
                   (auVar32._0_4_ & 0xff0000) << 8 | auVar32._0_4_ & 0xffff;
              *(uint *)(lVar27 + 1 + lVar18) =
                   auVar44._0_3_ & 0xff00 | (auVar42._0_4_ & 0xffff00) << 8 | auVar42._0_4_ & 0xff;
              *(uint *)(lVar27 + 5 + lVar18) =
                   (uint)bVar4 | (uint)bVar4 << 0x18 | auVar31._0_4_ & 0xffff00;
              *(uint *)(lVar27 + 9 + lVar18) =
                   (uVar21 & 0xff) << 0x10 |
                   (auVar43._0_4_ & 0xffff0000) << 8 | auVar43._0_4_ & 0xffff;
              *(uint *)(lVar27 + 0xd + lVar18) =
                   uVar21 & 0xff00 | auVar39._0_4_ >> 8 & 0xff | auVar39._0_4_ & 0xffff0000;
              *(uint *)(lVar27 + 0x11 + lVar18) =
                   uVar21 >> 0x10 & 0xff | uVar21 & 0xff000000 | auVar35._0_4_ & 0xffff00;
              lVar27 = lVar27 + 0x18;
            } while (uVar22 < uStack_80);
          }
          lVar27 = uStack_80 * 3;
          if (uStack_80 < uVar14) {
            lVar19 = lVar19 + uVar11 * 3;
            do {
              uStack_80 = uStack_80 + 1;
              *(undefined1 *)(lVar27 + -3 + lVar19) = uVar26;
              *(undefined1 *)(lVar27 + -2 + lVar19) = uVar28;
              *(byte *)(lVar27 + -1 + lVar19) = bVar4;
              lVar27 = lVar27 + 3;
            } while (uStack_80 < uVar14);
          }
        }
        goto LAB_1408ec2f7;
      }
    }
    lVar19 = 1;
    if (uVar11 / 6 != 0) {
      lVar19 = param_11 + lVar27;
      uVar14 = 0;
      do {
        uVar22 = uVar14;
        *(undefined1 *)(lVar19 + -3 + uVar22 * 6) = *(undefined1 *)puVar17;
        uVar14 = uVar22 + 1;
        *(undefined1 *)(lVar19 + -2 + uVar22 * 6) = *(undefined1 *)((longlong)puVar17 + 1);
        *(undefined1 *)(lVar19 + -1 + uVar22 * 6) = *(undefined1 *)(puVar17 + 1);
        *(undefined1 *)(lVar19 + uVar22 * 6) = *(undefined1 *)puVar17;
        *(undefined1 *)(lVar19 + 1 + uVar22 * 6) = *(undefined1 *)((longlong)puVar17 + 1);
        *(undefined1 *)(lVar19 + 2 + uVar22 * 6) = *(undefined1 *)(puVar17 + 1);
      } while (uVar14 < uVar11 / 6);
      lVar19 = uVar22 + 2 + uVar14;
    }
    if (lVar19 - 1U < uVar11 / 3) {
      lVar27 = lVar27 + param_11;
      lVar19 = lVar19 * 3;
      *(undefined1 *)(lVar19 + -6 + lVar27) = *(undefined1 *)puVar17;
      *(undefined1 *)(lVar19 + -5 + lVar27) = *(undefined1 *)((longlong)puVar17 + 1);
      *(undefined1 *)(lVar19 + -4 + lVar27) = *(undefined1 *)(puVar17 + 1);
    }
  }
LAB_1408ec2f7:
  (*pcStack_68)(param_11 + lVar10,param_4,lVar29,param_9,param_10);
  return;
}

