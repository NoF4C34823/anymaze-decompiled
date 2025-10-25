
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14083d9a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,uint param_7,byte *param_8,undefined8 param_9,
                  int param_10,longlong param_11)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort *puVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  uint uVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  longlong lVar26;
  byte bVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lStack_88;
  code *UNRECOVERED_JUMPTABLE_00;
  byte abStack_48 [8];
  
  param_1 = param_1 + param_2 * param_3;
  lVar30 = (longlong)param_6;
  abStack_48[0] = 0;
  abStack_48[1] = 0;
  abStack_48[2] = 0;
  uVar19 = param_7 & 0xf;
  lVar29 = (longlong)(param_10 >> 1);
  if ((param_7 & 0xf0) == 0xf0) {
                    /* WARNING: Could not recover jumptable at 0x00014083eb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c8a0)[lVar30])(param_1,param_4,*param_5,param_9);
    return;
  }
  lVar28 = (longlong)param_10;
  lVar16 = *param_5;
  pbVar18 = abStack_48;
  if (uVar19 == 6) {
    pbVar18 = param_8;
  }
  if (lVar16 < lVar28 + -1) {
    lVar17 = -lVar29;
    lVar28 = 0;
    if (lVar17 < lVar29 + lVar16) {
      lStack_88._0_4_ = param_7 & 0x80;
      uVar23 = param_7 & 0x40;
      do {
        lVar14 = lVar17;
        if (((lVar17 < 0) || (lVar16 <= lVar17)) && (param_7 != 0xf0)) {
          if (uVar19 != 6) {
            if (uVar19 == 1) {
              if (lVar17 < 0) {
                lVar14 = 0;
                if (uVar23 != 0) {
                  lVar14 = lVar17;
                }
              }
              else if ((uint)lStack_88 == 0) {
                lVar14 = lVar16 + -1;
              }
            }
            else if (uVar19 == 3) {
              if (lVar16 < 2) {
                if (lVar17 < 0) {
                  if (uVar23 == 0) {
                    lVar14 = -lVar17;
                    if ((uint)lStack_88 == 0) {
                      lVar14 = 0;
                    }
                  }
                }
                else if (((0 < lVar17) && ((uint)lStack_88 == 0)) && (lVar14 = -lVar17, uVar23 == 0)
                        ) {
                  lVar14 = 0;
                }
              }
              else if ((lVar17 < 0) || (lVar16 <= lVar17)) {
                if (lVar17 < 0) goto LAB_14083eb20;
                while ((uint)lStack_88 == 0) {
                  for (lVar14 = (lVar16 + -1) * 2 - lVar14; lVar14 < 0; lVar14 = -lVar14) {
LAB_14083eb20:
                    if (uVar23 != 0) goto LAB_14083e9f0;
                  }
                  if (lVar14 < lVar16) break;
                }
              }
            }
            goto LAB_14083e9f0;
          }
          uVar9 = uVar23;
          if (-1 < lVar17) {
            uVar9 = (uint)lStack_88;
          }
          if (uVar9 != 0) goto LAB_14083e9f0;
          bVar25 = *pbVar18;
          bVar27 = pbVar18[1];
          bVar20 = pbVar18[2];
        }
        else {
LAB_14083e9f0:
          lVar14 = lVar14 * 3;
          bVar25 = *(byte *)(lVar14 + param_1);
          bVar27 = *(byte *)(lVar14 + 1 + param_1);
          bVar20 = *(byte *)(lVar14 + 2 + param_1);
        }
        lVar17 = lVar17 + 1;
        *(byte *)(lVar28 + param_11) = bVar25;
        *(byte *)(lVar28 + 1 + param_11) = bVar27;
        *(byte *)(lVar28 + 2 + param_11) = bVar20;
        lVar28 = lVar28 + 3;
      } while (lVar17 < lVar29 + lVar16);
    }
                    /* WARNING: Could not recover jumptable at 0x00014083ea8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_14308c8a0)[lVar30])(param_11 + lVar29 * 3,param_4,lVar16,param_9);
    return;
  }
  if ((param_7 & 0x40) == 0) {
    lVar17 = lVar29 * 3;
    uVar12 = param_11 + lVar17;
    lVar14 = lVar28 * 3;
    uVar13 = lVar14 - 3;
    if (uVar13 != 0 && SCARRY8(lVar14,-3) == (longlong)uVar13 < 0) {
      if (6 < (longlong)uVar13) {
        if ((lVar14 + -3 <= (longlong)(uVar12 - param_1)) ||
           (lVar14 + -3 <= (longlong)-(uVar12 - param_1))) {
          if ((longlong)uVar13 < 0x10) {
LAB_14083ea92:
            uVar24 = 0;
          }
          else {
            uVar10 = uVar12 & 0xf;
            if (uVar10 != 0) {
              uVar10 = 0x10 - uVar10;
            }
            if ((longlong)uVar13 < (longlong)(uVar10 + 0x10)) goto LAB_14083ea92;
            uVar21 = 0;
            uVar24 = uVar13 - (uVar13 - uVar10 & 0xf);
            if (uVar10 != 0) {
              do {
                *(undefined1 *)(uVar21 + uVar12) = *(undefined1 *)(uVar21 + param_1);
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar10);
            }
            do {
              uVar8 = ((undefined8 *)(uVar10 + param_1))[1];
              *(undefined8 *)(uVar10 + uVar12) = *(undefined8 *)(uVar10 + param_1);
              ((undefined8 *)(uVar10 + uVar12))[1] = uVar8;
              uVar10 = uVar10 + 0x10;
            } while (uVar10 < uVar24);
          }
          for (; uVar24 < uVar13; uVar24 = uVar24 + 1) {
            *(undefined1 *)(uVar24 + uVar12) = *(undefined1 *)(uVar24 + param_1);
          }
          goto LAB_14083dbaf;
        }
      }
      lVar11 = 1;
      uVar10 = (longlong)(param_10 * 3) - 3;
      uVar24 = uVar10 >> 1;
      uVar13 = 0;
      if (uVar24 != 0) {
        do {
          uVar21 = uVar13;
          *(undefined1 *)(uVar12 + uVar21 * 2) = *(undefined1 *)(param_1 + uVar21 * 2);
          *(undefined1 *)(uVar12 + 1 + uVar21 * 2) = *(undefined1 *)(param_1 + 1 + uVar21 * 2);
          uVar13 = uVar21 + 1;
        } while (uVar13 < uVar24);
        lVar11 = uVar21 + 2 + uVar13;
      }
      uVar13 = lVar11 - 1;
      if (uVar13 < uVar10) {
        *(undefined1 *)(uVar12 + uVar13) = *(undefined1 *)(param_1 + uVar13);
      }
    }
LAB_14083dbaf:
    if (uVar19 == 1) {
      if (0 < lVar17) {
        lVar14 = 1;
        uVar13 = (lVar17 + 2U) / 6;
        if (uVar13 != 0) {
          uVar10 = 0;
          do {
            uVar24 = uVar10;
            *(undefined1 *)(param_11 + uVar24 * 6) = *(undefined1 *)(lVar17 + param_11);
            uVar10 = uVar24 + 1;
            *(undefined1 *)(param_11 + 1 + uVar24 * 6) = *(undefined1 *)(uVar12 + 1);
            *(undefined1 *)(param_11 + 2 + uVar24 * 6) = *(undefined1 *)(uVar12 + 2);
            *(undefined1 *)(param_11 + 3 + uVar24 * 6) = *(undefined1 *)(lVar17 + param_11);
            *(undefined1 *)(param_11 + 4 + uVar24 * 6) = *(undefined1 *)(uVar12 + 1);
            *(undefined1 *)(param_11 + 5 + uVar24 * 6) = *(undefined1 *)(uVar12 + 2);
          } while (uVar10 < uVar13);
          lVar14 = uVar24 + 2 + uVar10;
        }
        if (lVar14 - 1U < (lVar17 + 2U) / 3) {
          lVar14 = lVar14 * 3;
          *(undefined1 *)(lVar14 + -3 + param_11) = *(undefined1 *)(lVar17 + param_11);
          *(undefined1 *)(lVar14 + -2 + param_11) = *(undefined1 *)(uVar12 + 1);
          *(undefined1 *)(lVar14 + -1 + param_11) = *(undefined1 *)(uVar12 + 2);
        }
      }
    }
    else if (uVar19 == 3) {
      if (0 < lVar17) {
        lStack_88 = 1;
        lVar11 = 0;
        uVar13 = (lVar17 + 2U) / 6;
        if (uVar13 != 0) {
          lVar22 = lVar14 + param_11;
          uVar10 = 0;
          lVar26 = lVar11;
          do {
            uVar24 = uVar10;
            uVar10 = uVar24 + 1;
            *(undefined1 *)(lVar11 + param_11) = *(undefined1 *)(lVar26 + -3 + lVar22);
            *(undefined1 *)(lVar11 + 1 + param_11) = *(undefined1 *)(lVar26 + -2 + lVar22);
            *(undefined1 *)(lVar11 + 2 + param_11) = *(undefined1 *)(lVar26 + -1 + lVar22);
            *(undefined1 *)(lVar11 + 3 + param_11) = *(undefined1 *)(lVar26 + -6 + lVar22);
            *(undefined1 *)(lVar11 + 4 + param_11) = *(undefined1 *)(lVar26 + -5 + lVar22);
            lVar1 = lVar26 + -4;
            lVar26 = lVar26 + -6;
            *(undefined1 *)(lVar11 + 5 + param_11) = *(undefined1 *)(lVar1 + lVar22);
            lVar11 = lVar11 + 6;
          } while (uVar10 < uVar13);
          lStack_88 = uVar24 + 2 + uVar10;
        }
        if (lStack_88 - 1U < (lVar17 + 2U) / 3) {
          lVar14 = lVar14 + param_11;
          lStack_88 = lStack_88 * 3;
          lVar11 = -(lStack_88 + -3);
          *(undefined1 *)(lStack_88 + -3 + param_11) = *(undefined1 *)(lVar11 + -3 + lVar14);
          *(undefined1 *)(lStack_88 + -2 + param_11) = *(undefined1 *)(lVar11 + -2 + lVar14);
          *(undefined1 *)(lStack_88 + -1 + param_11) = *(undefined1 *)(lVar11 + -1 + lVar14);
        }
      }
    }
    else if ((uVar19 == 6) && (0 < lVar17)) {
      lVar14 = 1;
      uVar13 = (lVar17 + 2U) / 6;
      if (uVar13 != 0) {
        uVar10 = 0;
        do {
          uVar24 = uVar10;
          *(byte *)(param_11 + uVar24 * 6) = *pbVar18;
          uVar10 = uVar24 + 1;
          *(byte *)(param_11 + 1 + uVar24 * 6) = pbVar18[1];
          *(byte *)(param_11 + 2 + uVar24 * 6) = pbVar18[2];
          *(byte *)(param_11 + 3 + uVar24 * 6) = *pbVar18;
          *(byte *)(param_11 + 4 + uVar24 * 6) = pbVar18[1];
          *(byte *)(param_11 + 5 + uVar24 * 6) = pbVar18[2];
        } while (uVar10 < uVar13);
        lVar14 = uVar24 + 2 + uVar10;
      }
      if (lVar14 - 1U < (lVar17 + 2U) / 3) {
        lVar14 = lVar14 * 3;
        *(byte *)(lVar14 + -3 + param_11) = *pbVar18;
        *(byte *)(lVar14 + -2 + param_11) = pbVar18[1];
        *(byte *)(lVar14 + -1 + param_11) = pbVar18[2];
      }
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c8a0)[lVar30];
    (*UNRECOVERED_JUMPTABLE_00)(uVar12,param_4,lVar29,param_9,param_10);
    lVar16 = lVar16 - lVar29;
    param_1 = param_1 + lVar17;
    param_4 = param_4 + lVar29 * 0xc;
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_FUN_14308c8a0)[lVar30];
  }
  if ((param_7 & 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014083eada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar16,param_9);
    return;
  }
  if (lVar29 < lVar16) {
    lVar16 = lVar16 - lVar29;
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_4,lVar16,param_9,param_10);
    param_1 = param_1 + lVar16 * 3;
    param_4 = param_4 + lVar16 * 0xc;
  }
  lVar28 = lVar28 * 3;
  if (lVar28 != 3 && SCARRY8(lVar28,-3) == lVar28 + -3 < 0) {
    uVar12 = lVar28 - 1;
    uVar13 = (longlong)uVar12 / 3;
    lVar17 = lVar29 * -3;
    lVar16 = param_11 - (param_1 + lVar17);
    lVar30 = uVar13 * 3;
    if ((lVar30 <= lVar16) || (lVar30 + -2 <= -lVar16)) {
      lVar16 = (param_11 + 1) - (param_1 + lVar17);
      if (((lVar30 <= lVar16) || (lVar30 + -1 <= -lVar16)) &&
         ((lVar16 = (param_11 + 1) - param_11, lVar30 + -2 <= lVar16 || (lVar30 + -1 <= -lVar16))))
      {
        lVar30 = 1;
        uVar10 = ((longlong)(param_10 * 3) - 1U) / 6;
        if (uVar10 != 0) {
          uVar24 = 0;
          do {
            uVar21 = uVar24;
            uVar24 = uVar21 + 1;
            *(undefined1 *)(param_11 + uVar21 * 6) = *(undefined1 *)(lVar17 + param_1 + uVar21 * 6);
            *(undefined1 *)(param_11 + 3 + uVar21 * 6) =
                 *(undefined1 *)(lVar17 + param_1 + 3 + uVar21 * 6);
          } while (uVar24 < uVar10);
          lVar30 = uVar21 + 2 + uVar24;
        }
        if (lVar30 - 1U < uVar12 / 3) {
          lVar30 = lVar30 * 3 + -3;
          *(undefined1 *)(lVar30 + param_11) = *(undefined1 *)(lVar30 + lVar17 + param_1);
        }
        auVar6 = _DAT_14308c990;
        if ((longlong)uVar13 < 0x10) {
          uVar12 = 0;
        }
        else {
          uVar10 = 0;
          puVar15 = (ushort *)(lVar17 + 1 + param_1);
          lVar30 = 0;
          uVar12 = uVar13 & 0xfffffffffffffff0;
          do {
            uVar10 = uVar10 + 0x10;
            auVar4 = vpinsrw_avx(ZEXT216(*puVar15),(uint)*(ushort *)((longlong)puVar15 + 3),1);
            auVar4 = vpinsrw_avx(auVar4,(uint)puVar15[3],2);
            auVar4 = vpinsrw_avx(auVar4,(uint)*(ushort *)((longlong)puVar15 + 9),3);
            auVar4 = vpinsrw_avx(auVar4,(uint)puVar15[6],4);
            auVar4 = vpinsrw_avx(auVar4,(uint)*(ushort *)((longlong)puVar15 + 0xf),5);
            auVar4 = vpinsrw_avx(auVar4,(uint)puVar15[9],6);
            auVar32 = vpinsrw_avx(auVar4,(uint)*(ushort *)((longlong)puVar15 + 0x15),7);
            auVar5 = vpinsrw_avx(ZEXT216(puVar15[0xc]),(uint)*(ushort *)((longlong)puVar15 + 0x1b),1
                                );
            auVar4 = vpand_avx(auVar6,auVar32);
            auVar31 = vpsrlw_avx(auVar32,8);
            auVar32 = vpinsrw_avx(auVar5,(uint)puVar15[0xf],2);
            auVar32 = vpinsrw_avx(auVar32,(uint)*(ushort *)((longlong)puVar15 + 0x21),3);
            auVar32 = vpinsrw_avx(auVar32,(uint)puVar15[0x12],4);
            auVar32 = vpinsrw_avx(auVar32,(uint)*(ushort *)((longlong)puVar15 + 0x27),5);
            auVar32 = vpinsrw_avx(auVar32,(uint)puVar15[0x15],6);
            auVar5 = vpinsrw_avx(auVar32,(uint)*(ushort *)((longlong)puVar15 + 0x2d),7);
            puVar15 = puVar15 + 0x18;
            auVar32 = vpand_avx(auVar6,auVar5);
            auVar4 = vpackuswb_avx(auVar4,auVar32);
            auVar32 = vpsrlw_avx(auVar5,8);
            auVar32 = vpackuswb_avx(auVar31,auVar32);
            *(char *)(lVar30 + 2 + param_11) = auVar32[0];
            *(char *)(lVar30 + 5 + param_11) = auVar32[1];
            *(char *)(lVar30 + 8 + param_11) = auVar32[2];
            *(char *)(lVar30 + 0xb + param_11) = auVar32[3];
            *(char *)(lVar30 + 0xe + param_11) = auVar32[4];
            *(char *)(lVar30 + 0x11 + param_11) = auVar32[5];
            *(char *)(lVar30 + 0x14 + param_11) = auVar32[6];
            *(char *)(lVar30 + 0x17 + param_11) = auVar32[7];
            *(char *)(lVar30 + 0x1a + param_11) = auVar32[0];
            *(char *)(lVar30 + 0x1d + param_11) = auVar32[1];
            *(char *)(lVar30 + 0x20 + param_11) = auVar32[2];
            *(char *)(lVar30 + 0x23 + param_11) = auVar32[3];
            *(char *)(lVar30 + 0x26 + param_11) = auVar32[4];
            *(char *)(lVar30 + 0x29 + param_11) = auVar32[5];
            *(char *)(lVar30 + 0x2c + param_11) = auVar32[6];
            *(char *)(lVar30 + 0x2f + param_11) = auVar32[7];
            *(char *)(lVar30 + 1 + param_11) = auVar4[0];
            *(char *)(lVar30 + 4 + param_11) = auVar4[1];
            *(char *)(lVar30 + 7 + param_11) = auVar4[2];
            *(char *)(lVar30 + 10 + param_11) = auVar4[3];
            *(char *)(lVar30 + 0xd + param_11) = auVar4[4];
            *(char *)(lVar30 + 0x10 + param_11) = auVar4[5];
            *(char *)(lVar30 + 0x13 + param_11) = auVar4[6];
            *(char *)(lVar30 + 0x16 + param_11) = auVar4[7];
            *(char *)(lVar30 + 0x19 + param_11) = auVar4[0];
            *(char *)(lVar30 + 0x1c + param_11) = auVar4[1];
            *(char *)(lVar30 + 0x1f + param_11) = auVar4[2];
            *(char *)(lVar30 + 0x22 + param_11) = auVar4[3];
            *(char *)(lVar30 + 0x25 + param_11) = auVar4[4];
            *(char *)(lVar30 + 0x28 + param_11) = auVar4[5];
            *(char *)(lVar30 + 0x2b + param_11) = auVar4[6];
            *(char *)(lVar30 + 0x2e + param_11) = auVar4[7];
            lVar30 = lVar30 + 0x30;
          } while (uVar10 < uVar12);
        }
        lVar30 = uVar12 * 3;
        if (uVar12 < uVar13) {
          do {
            uVar12 = uVar12 + 1;
            uVar2 = *(undefined1 *)(lVar30 + 2 + lVar17 + param_1);
            *(undefined1 *)(lVar30 + 1 + param_11) = *(undefined1 *)(lVar30 + 1 + lVar17 + param_1);
            *(undefined1 *)(lVar30 + 2 + param_11) = uVar2;
            lVar30 = lVar30 + 3;
          } while (uVar12 < uVar13);
        }
        goto LAB_14083e374;
      }
    }
    lVar30 = 1;
    uVar13 = ((longlong)(param_10 * 3) - 1U) / 6;
    if (uVar13 != 0) {
      lVar30 = lVar17 + param_1;
      uVar10 = 0;
      do {
        uVar24 = uVar10;
        uVar10 = uVar24 + 1;
        *(undefined1 *)(param_11 + uVar24 * 6) = *(undefined1 *)(lVar30 + uVar24 * 6);
        *(undefined1 *)(param_11 + 1 + uVar24 * 6) = *(undefined1 *)(lVar30 + 1 + uVar24 * 6);
        *(undefined1 *)(param_11 + 2 + uVar24 * 6) = *(undefined1 *)(lVar30 + 2 + uVar24 * 6);
        *(undefined1 *)(param_11 + 3 + uVar24 * 6) = *(undefined1 *)(lVar30 + 3 + uVar24 * 6);
        *(undefined1 *)(param_11 + 4 + uVar24 * 6) = *(undefined1 *)(lVar30 + 4 + uVar24 * 6);
        *(undefined1 *)(param_11 + 5 + uVar24 * 6) = *(undefined1 *)(lVar30 + 5 + uVar24 * 6);
      } while (uVar10 < uVar13);
      lVar30 = uVar24 + 2 + uVar10;
    }
    if (lVar30 - 1U < uVar12 / 3) {
      lVar17 = lVar17 + param_1;
      lVar30 = lVar30 * 3;
      lVar16 = lVar30 + -3;
      *(undefined1 *)(lVar16 + param_11) = *(undefined1 *)(lVar17 + lVar16);
      *(undefined1 *)(lVar30 + -2 + param_11) = *(undefined1 *)(lVar17 + 1 + lVar16);
      *(undefined1 *)(lVar30 + -1 + param_11) = *(undefined1 *)(lVar17 + 2 + lVar16);
    }
  }
LAB_14083e374:
  lVar30 = lVar29 * 3;
  if (uVar19 == 1) {
    if (0 < lVar30) {
      uVar12 = lVar30 + 2;
      uVar13 = (longlong)uVar12 / 3;
      if ((longlong)uVar13 < 7) {
        lVar16 = 1;
        if (uVar12 / 6 != 0) {
          lVar16 = param_11 + lVar28;
          uVar13 = 0;
          do {
            uVar10 = uVar13;
            *(undefined1 *)(lVar16 + -3 + uVar10 * 6) = *(undefined1 *)(lVar16 + -6);
            uVar13 = uVar10 + 1;
            *(undefined1 *)(lVar16 + -2 + uVar10 * 6) = *(undefined1 *)(lVar16 + -5);
            *(undefined1 *)(lVar16 + -1 + uVar10 * 6) = *(undefined1 *)(lVar16 + -4);
            *(undefined1 *)(lVar16 + uVar10 * 6) = *(undefined1 *)(lVar16 + -6);
            *(undefined1 *)(lVar16 + 1 + uVar10 * 6) = *(undefined1 *)(lVar16 + -5);
            *(undefined1 *)(lVar16 + 2 + uVar10 * 6) = *(undefined1 *)(lVar16 + -4);
          } while (uVar13 < uVar12 / 6);
          lVar16 = uVar10 + 2 + uVar13;
        }
        if (lVar16 - 1U < uVar12 / 3) {
          lVar28 = lVar28 + param_11;
          lVar16 = lVar16 * 3;
          *(undefined1 *)(lVar16 + -6 + lVar28) = *(undefined1 *)(lVar28 + -6);
          *(undefined1 *)(lVar16 + -5 + lVar28) = *(undefined1 *)(lVar28 + -5);
          *(undefined1 *)(lVar16 + -4 + lVar28) = *(undefined1 *)(lVar28 + -4);
        }
      }
      else {
        lVar28 = lVar28 + param_11;
        bVar25 = *(byte *)(lVar28 + -6);
        bVar27 = *(byte *)(lVar28 + -5);
        bVar20 = *(byte *)(lVar28 + -4);
        if ((longlong)uVar13 < 0x10) {
          uVar12 = 0;
        }
        else {
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar25),ZEXT116(bVar25));
          uVar10 = 0;
          auVar6 = vpunpcklwd_avx(auVar6,auVar6);
          auVar6 = vpunpckldq_avx(auVar6,auVar6);
          uVar12 = uVar13 & 0xfffffffffffffff0;
          auVar31 = vpunpcklqdq_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar27),ZEXT116(bVar27));
          lVar16 = 0;
          auVar4 = vpunpcklwd_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar20),ZEXT116(bVar20));
          auVar4 = vpunpckldq_avx(auVar4,auVar4);
          auVar6 = vpunpcklwd_avx(auVar6,auVar6);
          auVar5 = vpunpcklqdq_avx(auVar4,auVar4);
          auVar6 = vpunpckldq_avx(auVar6,auVar6);
          auVar7 = vpunpcklqdq_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(auVar31,auVar7);
          auVar6 = vpshufb_avx(auVar6,_DAT_14308c9a0);
          auVar4 = vpshufb_avx(auVar5,_DAT_14308c9b0);
          auVar6 = vpor_avx(auVar6,auVar4);
          auVar4 = vpshufb_avx(auVar31,_DAT_14308c9c0);
          auVar32 = vpshufb_avx(auVar5,_DAT_14308c9d0);
          auVar5 = vpshufb_avx(auVar5,_DAT_14308ca00);
          auVar31 = vpunpckhbw_avx(auVar31,auVar7);
          auVar4 = vpor_avx(auVar4,auVar32);
          auVar32 = vpshufb_avx(auVar7,_DAT_14308c9e0);
          auVar31 = vpshufb_avx(auVar31,_DAT_14308c9f0);
          auVar4 = vpor_avx(auVar4,auVar32);
          auVar32 = vpor_avx(auVar31,auVar5);
          do {
            uVar10 = uVar10 + 0x10;
            *(undefined1 (*) [16])(lVar16 + -3 + lVar28) = auVar6;
            *(undefined1 (*) [16])(lVar16 + 0xd + lVar28) = auVar4;
            *(undefined1 (*) [16])(lVar16 + 0x1d + lVar28) = auVar32;
            lVar16 = lVar16 + 0x30;
          } while (uVar10 < uVar12);
        }
        lVar16 = uVar12 * 3;
        for (; uVar12 < uVar13; uVar12 = uVar12 + 1) {
          *(byte *)(lVar16 + -3 + lVar28) = bVar25;
          *(byte *)(lVar16 + -2 + lVar28) = bVar27;
          *(byte *)(lVar16 + -1 + lVar28) = bVar20;
          lVar16 = lVar16 + 3;
        }
      }
    }
  }
  else if (uVar19 == 3) {
    if (0 < lVar30) {
      lVar14 = 0;
      lVar16 = 1;
      lVar17 = 0;
      uVar12 = (lVar30 + 2U) / 6;
      if (uVar12 != 0) {
        lVar16 = param_11 + lVar28;
        uVar13 = 0;
        do {
          uVar10 = uVar13;
          uVar13 = uVar10 + 1;
          uVar2 = *(undefined1 *)(lVar17 + -8 + lVar16);
          *(undefined1 *)(lVar14 + -3 + lVar16) = *(undefined1 *)(lVar17 + -9 + lVar16);
          *(undefined1 *)(lVar14 + -2 + lVar16) = uVar2;
          uVar2 = *(undefined1 *)(lVar17 + -0xc + lVar16);
          *(undefined1 *)(lVar14 + -1 + lVar16) = *(undefined1 *)(lVar17 + -7 + lVar16);
          *(undefined1 *)(lVar14 + lVar16) = uVar2;
          lVar11 = lVar17 + -0xb;
          uVar2 = *(undefined1 *)(lVar17 + -10 + lVar16);
          lVar17 = lVar17 + -6;
          *(undefined1 *)(lVar14 + 1 + lVar16) = *(undefined1 *)(lVar11 + lVar16);
          *(undefined1 *)(lVar14 + 2 + lVar16) = uVar2;
          lVar14 = lVar14 + 6;
        } while (uVar13 < uVar12);
        lVar16 = uVar10 + 2 + uVar13;
      }
      if (lVar16 - 1U < (lVar30 + 2U) / 3) {
        lVar28 = lVar28 + param_11;
        lVar16 = lVar16 * 3;
        lVar17 = -(lVar16 + -3);
        uVar2 = *(undefined1 *)(lVar17 + -8 + lVar28);
        uVar3 = *(undefined1 *)(lVar17 + -7 + lVar28);
        *(undefined1 *)(lVar16 + -6 + lVar28) = *(undefined1 *)(lVar17 + -9 + lVar28);
        *(undefined1 *)(lVar16 + -5 + lVar28) = uVar2;
        *(undefined1 *)(lVar16 + -4 + lVar28) = uVar3;
      }
    }
  }
  else if ((uVar19 == 6) && (0 < lVar30)) {
    uVar12 = lVar30 + 2;
    uVar13 = (longlong)uVar12 / 3;
    if (6 < (longlong)uVar13) {
      lVar16 = param_11 + lVar28;
      lVar17 = (lVar16 + -3) - (longlong)pbVar18;
      if ((2 < lVar17) || ((longlong)(uVar13 * 3) <= -lVar17)) {
        bVar25 = *pbVar18;
        bVar27 = pbVar18[1];
        bVar20 = pbVar18[2];
        if ((longlong)uVar13 < 0x10) {
          uVar12 = 0;
        }
        else {
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar25),ZEXT116(bVar25));
          uVar10 = 0;
          auVar6 = vpunpcklwd_avx(auVar6,auVar6);
          auVar6 = vpunpckldq_avx(auVar6,auVar6);
          uVar12 = uVar13 & 0xfffffffffffffff0;
          auVar31 = vpunpcklqdq_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar27),ZEXT116(bVar27));
          lVar28 = 0;
          auVar4 = vpunpcklwd_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(ZEXT116(bVar20),ZEXT116(bVar20));
          auVar4 = vpunpckldq_avx(auVar4,auVar4);
          auVar6 = vpunpcklwd_avx(auVar6,auVar6);
          auVar5 = vpunpcklqdq_avx(auVar4,auVar4);
          auVar6 = vpunpckldq_avx(auVar6,auVar6);
          auVar7 = vpunpcklqdq_avx(auVar6,auVar6);
          auVar6 = vpunpcklbw_avx(auVar31,auVar7);
          auVar6 = vpshufb_avx(auVar6,_DAT_14308c9a0);
          auVar4 = vpshufb_avx(auVar5,_DAT_14308c9b0);
          auVar6 = vpor_avx(auVar6,auVar4);
          auVar4 = vpshufb_avx(auVar31,_DAT_14308c9c0);
          auVar32 = vpshufb_avx(auVar5,_DAT_14308c9d0);
          auVar5 = vpshufb_avx(auVar5,_DAT_14308ca00);
          auVar31 = vpunpckhbw_avx(auVar31,auVar7);
          auVar4 = vpor_avx(auVar4,auVar32);
          auVar32 = vpshufb_avx(auVar7,_DAT_14308c9e0);
          auVar31 = vpshufb_avx(auVar31,_DAT_14308c9f0);
          auVar4 = vpor_avx(auVar4,auVar32);
          auVar32 = vpor_avx(auVar31,auVar5);
          do {
            uVar10 = uVar10 + 0x10;
            *(undefined1 (*) [16])(lVar28 + -3 + lVar16) = auVar6;
            *(undefined1 (*) [16])(lVar28 + 0xd + lVar16) = auVar4;
            *(undefined1 (*) [16])(lVar28 + 0x1d + lVar16) = auVar32;
            lVar28 = lVar28 + 0x30;
          } while (uVar10 < uVar12);
        }
        lVar28 = uVar12 * 3;
        for (; uVar12 < uVar13; uVar12 = uVar12 + 1) {
          *(byte *)(lVar28 + -3 + lVar16) = bVar25;
          *(byte *)(lVar28 + -2 + lVar16) = bVar27;
          *(byte *)(lVar28 + -1 + lVar16) = bVar20;
          lVar28 = lVar28 + 3;
        }
        goto LAB_14083e8b4;
      }
    }
    lVar16 = 1;
    if (uVar12 / 6 != 0) {
      lVar16 = param_11 + lVar28;
      uVar13 = 0;
      do {
        uVar10 = uVar13;
        *(byte *)(lVar16 + -3 + uVar10 * 6) = *pbVar18;
        uVar13 = uVar10 + 1;
        *(byte *)(lVar16 + -2 + uVar10 * 6) = pbVar18[1];
        *(byte *)(lVar16 + -1 + uVar10 * 6) = pbVar18[2];
        *(byte *)(lVar16 + uVar10 * 6) = *pbVar18;
        *(byte *)(lVar16 + 1 + uVar10 * 6) = pbVar18[1];
        *(byte *)(lVar16 + 2 + uVar10 * 6) = pbVar18[2];
      } while (uVar13 < uVar12 / 6);
      lVar16 = uVar10 + 2 + uVar13;
    }
    if (lVar16 - 1U < uVar12 / 3) {
      lVar28 = lVar28 + param_11;
      lVar16 = lVar16 * 3;
      *(byte *)(lVar16 + -6 + lVar28) = *pbVar18;
      *(byte *)(lVar16 + -5 + lVar28) = pbVar18[1];
      *(byte *)(lVar16 + -4 + lVar28) = pbVar18[2];
    }
  }
LAB_14083e8b4:
                    /* WARNING: Could not recover jumptable at 0x00014083e8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_11 + lVar30,param_4,lVar29,param_9);
  return;
}

