
undefined8
FUN_140a90d20(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  byte *pbVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  int iVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  uint uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  ulonglong uVar59;
  ulonglong uVar60;
  uint uVar61;
  longlong lVar62;
  ulonglong uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  longlong lVar67;
  longlong lStack_70;
  ulonglong uVar58;
  ulonglong uVar68;
  ulonglong uVar69;
  
  lVar21 = 0;
  lVar45 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar48 = (ulonglong)(int)param_5;
      uVar20 = (ulonglong)param_3 & 0xf;
      uVar34 = param_7 & 0x40;
      pbVar6 = param_3 + uVar48;
      uVar52 = uVar20;
      if (uVar20 != 0) {
        uVar52 = 0x10 - uVar20;
      }
      lVar21 = -uVar48;
      uVar51 = 2;
      if ((uint)param_6 < 3) {
        uVar51 = (uint)param_6;
      }
      lVar2 = lVar21 + 4;
      uVar39 = (ulonglong)(1 < (int)(uint)param_6);
      uVar24 = param_7 & 0xf;
      lVar62 = (longlong)(int)(uint)param_6;
      uVar3 = lVar21 + 2;
      uVar35 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar53 = (ulonglong)(int)uVar51;
      iVar36 = -param_5;
      uVar42 = param_7 & 0x80;
      uVar26 = (ulonglong)pbVar6 & 0xf;
      uVar43 = (uint)param_6 - 2;
      uVar1 = iVar36 + 2;
      lVar67 = param_1 - uVar48;
      uVar54 = uVar1 >> 1;
      uVar58 = (ulonglong)uVar54;
      lVar7 = param_1 + lVar62;
      if ((int)uVar26 != 0) {
        uVar26 = (ulonglong)(0x10 - (int)uVar26);
      }
      uVar4 = lVar62 - 2;
      if (uVar20 != 0) {
        uVar20 = 0x10 - uVar20;
      }
      uVar22 = 0xffffffffffffffff - (lVar21 + -1);
      lVar21 = uVar52 + 0x10;
      lVar19 = lVar62 - uVar48;
      uVar61 = param_5 - (param_5 - (int)uVar52 & 0xf);
      uVar64 = param_5 - 1;
      iVar27 = ((int)(uint)param_6 < 2) - 1;
      iVar25 = (int)uVar26;
      lVar5 = uVar20 + 0x10;
      uVar65 = param_5 >> 1;
      uVar68 = (ulonglong)uVar65;
      auVar17 = vpunpcklbw_avx(ZEXT116(param_8),ZEXT116(param_8));
      iVar47 = uVar51 - (uVar51 - iVar25 & 0xf);
      auVar17 = vpunpcklwd_avx(auVar17,auVar17);
      uVar49 = (ulonglong)iVar47;
      auVar17 = vpunpckldq_avx(auVar17,auVar17);
      uVar63 = (ulonglong)(int)uVar61;
      iVar30 = (int)uVar3;
      uVar55 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar55 = uVar24;
      }
      uVar66 = uVar51 >> 1;
      uVar69 = (ulonglong)uVar66;
      uVar23 = (ulonglong)(int)((int)uVar22 - ((int)uVar22 - (int)uVar20 & 0xfU));
      auVar17 = vpunpcklqdq_avx(auVar17,auVar17);
      lStack_70 = 0;
      uVar50 = 0;
LAB_140a911a0:
      if ((uint)param_6 == 1) {
        uVar37 = uVar55;
        if (uVar24 != 6) goto LAB_140a91203;
        goto LAB_140a919ab;
      }
      do {
        uVar37 = uVar24;
        if (uVar24 == 6) {
LAB_140a919ab:
          uVar37 = 0;
          uVar31 = 0;
          if (uVar34 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar48) && (lVar21 <= (longlong)uVar48)) {
                uVar41 = 0;
                uVar40 = uVar52;
                if (uVar52 != 0) {
                  do {
                    param_3[uVar41] = param_8;
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar52);
                }
                do {
                  *(undefined1 (*) [16])(param_3 + uVar40) = auVar17;
                  uVar40 = uVar40 + 0x10;
                  uVar37 = uVar61;
                } while (uVar40 < uVar63);
              }
              uVar40 = (ulonglong)(int)uVar37;
              uVar31 = uVar37;
              if (uVar40 < uVar48) {
                do {
                  param_3[uVar40] = param_8;
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar48);
                uVar31 = (uint)uVar40;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar29 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70),
                lVar29 < (longlong)uVar48 && (-lVar29 < (longlong)uVar48)))) {
              uVar44 = 1;
              if (uVar65 != 0) {
                uVar40 = 0;
                do {
                  uVar41 = uVar40;
                  param_3[uVar41 * 2] = *(byte *)(lVar67 + lStack_70 + uVar41 * 2);
                  param_3[uVar41 * 2 + 1] = *(byte *)(lVar67 + lStack_70 + 1 + uVar41 * 2);
                  uVar40 = uVar41 + 1;
                } while (uVar40 < uVar68);
                uVar37 = (int)uVar40 * 2;
                uVar44 = (int)uVar41 + 2 + (int)uVar40;
              }
              uVar31 = uVar37;
              if (uVar44 - 1 < param_5) {
                param_3[(longlong)(int)uVar44 + -1] =
                     *(byte *)(lVar67 + (int)uVar44 + -1 + lStack_70);
                uVar31 = uVar44;
              }
            }
            else {
              if (((longlong)uVar48 < 0x10) || ((longlong)uVar48 < lVar21)) {
                uVar40 = 0;
              }
              else {
                uVar40 = 0;
                uVar41 = uVar52;
                if (uVar52 != 0) {
                  do {
                    param_3[uVar40] = *(byte *)(uVar40 + lVar67 + lStack_70);
                    uVar40 = uVar40 + 1;
                  } while (uVar40 < uVar52);
                }
                do {
                  puVar8 = (undefined8 *)(uVar41 + lVar67 + lStack_70);
                  uVar18 = puVar8[1];
                  *(undefined8 *)(param_3 + uVar41) = *puVar8;
                  *(undefined8 *)(param_3 + uVar41 + 8) = uVar18;
                  uVar41 = uVar41 + 0x10;
                  uVar40 = uVar63;
                } while (uVar41 < uVar63);
              }
              uVar31 = param_5;
              if (uVar40 < uVar48) {
                do {
                  param_3[uVar40] = *(byte *)(uVar40 + lVar67 + lStack_70);
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar48);
              }
            }
          }
          lVar29 = (longlong)(int)uVar31;
          if ((int)(uint)param_6 < 1) {
            if (uVar42 != 0) goto LAB_140a91fd8;
LAB_140a91ea8:
            uVar40 = uVar48;
            if ((int)uVar1 < 1) goto LAB_140a92200;
LAB_140a91eb6:
            if ((longlong)uVar3 < 0x10) {
LAB_140a949c0:
              iVar56 = 0;
            }
            else {
              pbVar33 = param_3 + lVar29;
              uVar40 = (ulonglong)pbVar33 & 0xf;
              if (uVar40 != 0) {
                uVar40 = 0x10 - uVar40;
              }
              if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a949c0;
              iVar56 = iVar30 - (iVar30 - (int)uVar40 & 0xfU);
              uVar41 = 0;
              if (uVar40 != 0) {
                do {
                  pbVar33[uVar41] = param_8;
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar40);
              }
              do {
                *(undefined1 (*) [16])(pbVar33 + uVar40) = auVar17;
                uVar40 = uVar40 + 0x10;
              } while (uVar40 < (ulonglong)(longlong)iVar56);
              uVar31 = (int)lVar29 + iVar56;
            }
            uVar40 = (ulonglong)iVar56;
            if (uVar40 < uVar3) {
              do {
                param_3[uVar40 + lVar29] = param_8;
                uVar40 = uVar40 + 1;
              } while (uVar40 < uVar3);
              uVar31 = (int)uVar40 + (int)lVar29;
            }
LAB_140a921d4:
            uVar40 = uVar48;
            if ((int)(uint)param_6 < 3) goto LAB_140a92200;
          }
          else {
            if (uVar51 < 7) {
LAB_140a91da1:
              iVar56 = 1;
              uVar37 = uVar31;
              if (uVar66 != 0) {
                uVar40 = 0;
                do {
                  uVar41 = uVar40;
                  param_3[uVar41 * 2 + lVar29] = *(byte *)(param_1 + lStack_70 + uVar41 * 2);
                  param_3[uVar41 * 2 + lVar29 + 1] = *(byte *)(param_1 + lStack_70 + 1 + uVar41 * 2)
                  ;
                  uVar40 = uVar41 + 1;
                } while (uVar40 < uVar69);
                uVar37 = uVar31 + (int)uVar40 * 2;
                iVar56 = (int)uVar41 + 2 + (int)uVar40;
              }
              if (iVar56 - 1U < uVar51) {
                param_3[(longlong)iVar56 + -1 + lVar29] =
                     *(byte *)(param_1 + iVar56 + -1 + lStack_70);
                uVar37 = uVar31 + iVar56;
              }
            }
            else {
              lVar32 = param_1 + lStack_70;
              pbVar33 = param_3 + lVar29;
              if (((longlong)pbVar33 - lVar32 < (longlong)(ulonglong)uVar51) &&
                 (-((longlong)pbVar33 - lVar32) < (longlong)(ulonglong)uVar51)) goto LAB_140a91da1;
              if (uVar51 < 0x10) {
LAB_140a949b8:
                uVar41 = 0;
              }
              else {
                uVar40 = (ulonglong)pbVar33 & 0xf;
                if ((int)uVar40 != 0) {
                  uVar40 = (ulonglong)(0x10 - (int)uVar40);
                }
                iVar56 = (int)uVar40;
                if (uVar51 < iVar56 + 0x10U) goto LAB_140a949b8;
                uVar41 = 0;
                if (iVar56 != 0) {
                  do {
                    pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar40);
                }
                uVar41 = (ulonglong)(int)(uVar51 - (uVar51 - iVar56 & 0xf));
                do {
                  uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                  *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                  *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                  uVar40 = uVar40 + 0x10;
                } while (uVar40 < uVar41);
              }
              for (; uVar41 < uVar53; uVar41 = uVar41 + 1) {
                pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
              }
              uVar37 = uVar31 + uVar51;
            }
            uVar31 = uVar37;
            lVar29 = (longlong)(int)uVar31;
            if ((int)(uint)param_6 < 3) {
              if (uVar42 == 0) goto LAB_140a91ea8;
LAB_140a91fd8:
              uVar40 = uVar48;
              if ((int)uVar1 < 1) goto LAB_140a92200;
LAB_140a91fe6:
              iVar56 = (int)lVar29;
              if ((int)uVar1 < 7) {
LAB_140a92141:
                iVar57 = 1;
                if (uVar54 != 0) {
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    param_3[uVar41 * 2 + lVar29] = *(byte *)(lVar7 + lStack_70 + uVar41 * 2);
                    param_3[uVar41 * 2 + lVar29 + 1] = *(byte *)(lVar7 + lStack_70 + 1 + uVar41 * 2)
                    ;
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar58);
                  uVar31 = iVar56 + (int)uVar40 * 2;
                  iVar57 = (int)uVar41 + 2 + (int)uVar40;
                }
                if (iVar57 - 1U < uVar1) {
                  param_3[(longlong)iVar57 + -1 + lVar29] =
                       *(byte *)(lVar7 + iVar57 + -1 + lStack_70);
                  uVar31 = iVar56 + iVar57;
                }
              }
              else {
                pbVar33 = param_3 + lVar29;
                lVar32 = lVar7 + lStack_70;
                if (((longlong)pbVar33 - lVar32 < (longlong)(2 - uVar48)) &&
                   (-((longlong)pbVar33 - lVar32) < (longlong)(2 - uVar48))) goto LAB_140a92141;
                if ((longlong)uVar3 < 0x10) {
LAB_140a949c8:
                  uVar41 = 0;
                }
                else {
                  uVar40 = (ulonglong)pbVar33 & 0xf;
                  if (uVar40 != 0) {
                    uVar40 = 0x10 - uVar40;
                  }
                  if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a949c8;
                  uVar59 = 0;
                  uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                  if (uVar40 != 0) {
                    do {
                      pbVar33[uVar59] = *(byte *)(uVar59 + lVar32);
                      uVar59 = uVar59 + 1;
                    } while (uVar59 < uVar40);
                  }
                  do {
                    uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                    *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                    *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                    uVar40 = uVar40 + 0x10;
                  } while (uVar40 < uVar41);
                }
                for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                  pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                }
                uVar31 = iVar56 + 2 + iVar36;
              }
              goto LAB_140a921d4;
            }
            uVar31 = uVar31 + 2;
            param_3[lVar29] = *(byte *)(lStack_70 + -2 + lVar7);
            param_3[lVar29 + 1] = *(byte *)(lStack_70 + -1 + lVar7);
            lVar29 = (longlong)(int)uVar31;
            if (uVar42 == 0) {
              if (0 < (int)uVar1) goto LAB_140a91eb6;
            }
            else if (0 < (int)uVar1) goto LAB_140a91fe6;
          }
          uVar40 = (int)uVar31 - lVar2;
        }
        else {
LAB_140a91203:
          if (uVar37 == 1) {
            uVar37 = 0;
            lVar29 = lVar45 * uVar50;
            bVar16 = *(byte *)(param_1 + lVar29);
            uVar31 = 0;
            if (uVar34 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar48 < 0x10) || ((longlong)uVar48 < lVar21)) {
                  uVar40 = 0;
                }
                else {
                  uVar40 = 0;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar40] = bVar16;
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar52);
                  }
                  auVar12 = vpunpcklbw_avx(ZEXT116(bVar16),ZEXT116(bVar16));
                  auVar12 = vpunpcklwd_avx(auVar12,auVar12);
                  auVar12 = vpunpckldq_avx(auVar12,auVar12);
                  auVar12 = vpunpcklqdq_avx(auVar12,auVar12);
                  uVar41 = uVar52;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar41) = auVar12;
                    uVar41 = uVar41 + 0x10;
                    uVar40 = uVar63;
                    uVar37 = uVar61;
                  } while (uVar41 < uVar63);
                }
                uVar31 = uVar37;
                if (uVar40 < uVar48) {
                  do {
                    param_3[uVar40] = bVar16;
                    uVar40 = uVar40 + 1;
                  } while (uVar40 < uVar48);
                  uVar31 = (uint)uVar40;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar32 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar29),
                  lVar32 < (longlong)uVar48 && (-lVar32 < (longlong)uVar48)))) {
                uVar44 = 1;
                if (uVar65 != 0) {
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    param_3[uVar41 * 2] = *(byte *)(lVar67 + lVar29 + uVar41 * 2);
                    param_3[uVar41 * 2 + 1] = *(byte *)(lVar67 + lVar29 + 1 + uVar41 * 2);
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar68);
                  uVar37 = (int)uVar40 * 2;
                  uVar44 = (int)uVar41 + 2 + (int)uVar40;
                }
                uVar31 = uVar37;
                if (uVar44 - 1 < param_5) {
                  param_3[(longlong)(int)uVar44 + -1] =
                       *(byte *)((longlong)(int)uVar44 + -1 + lVar29 + lVar67);
                  uVar31 = uVar44;
                }
              }
              else {
                if (((longlong)uVar48 < 0x10) || ((longlong)uVar48 < lVar21)) {
                  uVar40 = 0;
                }
                else {
                  uVar40 = 0;
                  uVar41 = uVar52;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar40] = *(byte *)(uVar40 + lVar29 + lVar67);
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar52);
                  }
                  do {
                    puVar8 = (undefined8 *)(uVar41 + lVar29 + lVar67);
                    uVar18 = puVar8[1];
                    *(undefined8 *)(param_3 + uVar41) = *puVar8;
                    *(undefined8 *)(param_3 + uVar41 + 8) = uVar18;
                    uVar41 = uVar41 + 0x10;
                    uVar40 = uVar63;
                  } while (uVar41 < uVar63);
                }
                uVar31 = param_5;
                if (uVar40 < uVar48) {
                  do {
                    param_3[uVar40] = *(byte *)(uVar40 + lVar67 + lVar29);
                    uVar40 = uVar40 + 1;
                  } while (uVar40 < uVar48);
                }
              }
            }
            lVar32 = (longlong)(int)uVar31;
            if (0 < (int)(uint)param_6) {
              if (uVar51 < 7) {
LAB_140a945fe:
                iVar56 = 1;
                uVar37 = uVar31;
                if (uVar66 != 0) {
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    param_3[uVar41 * 2 + lVar32] = *(byte *)(param_1 + lVar29 + uVar41 * 2);
                    param_3[uVar41 * 2 + lVar32 + 1] = *(byte *)(param_1 + lVar29 + 1 + uVar41 * 2);
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar69);
                  uVar37 = uVar31 + (int)uVar40 * 2;
                  iVar56 = (int)uVar41 + 2 + (int)uVar40;
                }
                if (iVar56 - 1U < uVar51) {
                  param_3[(longlong)iVar56 + -1 + lVar32] =
                       *(byte *)((longlong)iVar56 + -1 + param_1 + lVar29);
                  uVar37 = uVar31 + iVar56;
                }
              }
              else {
                pbVar33 = param_3 + lVar32;
                lVar46 = param_1 + lVar29;
                if (((longlong)pbVar33 - lVar46 < (longlong)(ulonglong)uVar51) &&
                   (-((longlong)pbVar33 - lVar46) < (longlong)(ulonglong)uVar51))
                goto LAB_140a945fe;
                if (uVar51 < 0x10) {
LAB_140a94993:
                  uVar41 = 0;
                }
                else {
                  uVar40 = (ulonglong)pbVar33 & 0xf;
                  if ((int)uVar40 != 0) {
                    uVar40 = (ulonglong)(0x10 - (int)uVar40);
                  }
                  iVar56 = (int)uVar40;
                  if (uVar51 < iVar56 + 0x10U) goto LAB_140a94993;
                  uVar41 = 0;
                  if (iVar56 != 0) {
                    do {
                      pbVar33[uVar41] = *(byte *)(uVar41 + lVar46);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar40);
                  }
                  uVar41 = (ulonglong)(int)(uVar51 - (uVar51 - iVar56 & 0xf));
                  do {
                    uVar18 = ((undefined8 *)(uVar40 + lVar46))[1];
                    *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar46);
                    *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                    uVar40 = uVar40 + 0x10;
                  } while (uVar40 < uVar41);
                }
                for (; uVar41 < uVar53; uVar41 = uVar41 + 1) {
                  pbVar33[uVar41] = *(byte *)(uVar41 + lVar46);
                }
                uVar37 = uVar31 + uVar51;
              }
              uVar31 = uVar37;
              lVar32 = (longlong)(int)uVar31;
              if (2 < (int)(uint)param_6) {
                uVar31 = uVar31 + 2;
                param_3[lVar32] = *(byte *)(lVar7 + -2 + lVar29);
                param_3[lVar32 + 1] = *(byte *)(lVar7 + -1 + lVar29);
                lVar32 = (longlong)(int)uVar31;
              }
            }
            bVar16 = *(byte *)(lVar7 + -1 + lVar29);
            iVar56 = (int)lVar32;
            if (uVar42 == 0) {
              if (0 < (int)uVar1) {
                if ((longlong)uVar3 < 0x10) {
LAB_140a9499b:
                  iVar57 = 0;
                }
                else {
                  pbVar33 = param_3 + lVar32;
                  uVar40 = (ulonglong)pbVar33 & 0xf;
                  if (uVar40 != 0) {
                    uVar40 = 0x10 - uVar40;
                  }
                  if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a9499b;
                  iVar57 = iVar30 - (iVar30 - (int)uVar40 & 0xfU);
                  uVar41 = 0;
                  if (uVar40 != 0) {
                    do {
                      pbVar33[uVar41] = bVar16;
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar40);
                  }
                  auVar12 = vpunpcklbw_avx(ZEXT116(bVar16),ZEXT116(bVar16));
                  auVar12 = vpunpcklwd_avx(auVar12,auVar12);
                  auVar12 = vpunpckldq_avx(auVar12,auVar12);
                  auVar12 = vpunpcklqdq_avx(auVar12,auVar12);
                  do {
                    *(undefined1 (*) [16])(pbVar33 + uVar40) = auVar12;
                    uVar40 = uVar40 + 0x10;
                  } while (uVar40 < (ulonglong)(longlong)iVar57);
                  uVar31 = iVar56 + iVar57;
                }
                uVar40 = (ulonglong)iVar57;
                if (uVar3 <= uVar40) goto LAB_140a94972;
                do {
                  param_3[uVar40 + lVar32] = bVar16;
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar3);
                lVar32 = (longlong)((int)uVar40 + iVar56);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a94975;
              if (6 < (int)uVar1) {
                lVar46 = lVar29 + lVar7;
                pbVar33 = param_3 + lVar32;
                if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar46) ||
                   ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar46))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a949a2:
                    uVar41 = 0;
                  }
                  else {
                    uVar40 = (ulonglong)pbVar33 & 0xf;
                    if (uVar40 != 0) {
                      uVar40 = 0x10 - uVar40;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a949a2;
                    uVar59 = 0;
                    uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                    if (uVar40 != 0) {
                      do {
                        pbVar33[uVar59] = *(byte *)(uVar59 + lVar46);
                        uVar59 = uVar59 + 1;
                      } while (uVar59 < uVar40);
                    }
                    do {
                      uVar18 = ((undefined8 *)(uVar40 + lVar46))[1];
                      *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar46);
                      *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                      uVar40 = uVar40 + 0x10;
                    } while (uVar40 < uVar41);
                  }
                  for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                    pbVar33[uVar41] = *(byte *)(uVar41 + lVar46);
                  }
                  lVar32 = (longlong)(iVar56 + 2 + iVar36);
                  goto LAB_140a94975;
                }
              }
              iVar57 = 1;
              if (uVar54 != 0) {
                uVar40 = 0;
                do {
                  uVar41 = uVar40;
                  param_3[uVar41 * 2 + lVar32] = *(byte *)(lVar29 + lVar7 + uVar41 * 2);
                  param_3[uVar41 * 2 + lVar32 + 1] = *(byte *)(lVar29 + lVar7 + 1 + uVar41 * 2);
                  uVar40 = uVar41 + 1;
                } while (uVar40 < uVar58);
                uVar31 = iVar56 + (int)uVar40 * 2;
                iVar57 = (int)uVar41 + 2 + (int)uVar40;
              }
              if (iVar57 - 1U < uVar1) {
                param_3[(longlong)iVar57 + -1 + lVar32] =
                     *(byte *)((longlong)iVar57 + -1 + lVar29 + lVar7);
                lVar32 = (longlong)(iVar57 + iVar56);
                goto LAB_140a94975;
              }
LAB_140a94972:
              lVar32 = (longlong)(int)uVar31;
            }
LAB_140a94975:
            uVar40 = lVar32 - lVar2;
            if ((int)(uint)param_6 < 3) {
              uVar40 = uVar48;
            }
          }
          else if (uVar37 == 2) {
            uVar41 = uVar48;
            if (0 < (int)(uint)param_6) {
              if (uVar51 < 7) {
LAB_140a9329f:
                iVar56 = 1;
                uVar37 = param_5;
                if (uVar66 != 0) {
                  lVar29 = lVar45 * uVar50 + param_1;
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    pbVar6[uVar41 * 2] = *(byte *)(lVar29 + uVar41 * 2);
                    pbVar6[uVar41 * 2 + 1] = *(byte *)(lVar29 + 1 + uVar41 * 2);
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar69);
                  uVar37 = param_5 + (int)uVar40 * 2;
                  iVar56 = (int)uVar41 + 2 + (int)uVar40;
                }
                if (iVar56 - 1U < uVar51) {
                  pbVar6[(longlong)iVar56 + -1] = *(byte *)(param_1 + iVar56 + -1 + lVar45 * uVar50)
                  ;
                  uVar37 = param_5 + iVar56;
                }
              }
              else {
                lVar29 = lVar45 * uVar50 + param_1;
                if (((longlong)pbVar6 - lVar29 < (longlong)(ulonglong)uVar51) &&
                   (-((longlong)pbVar6 - lVar29) < (longlong)(ulonglong)uVar51)) goto LAB_140a9329f;
                if ((uVar51 < 0x10) || (uVar51 < iVar25 + 0x10U)) {
                  iVar56 = 0;
                }
                else {
                  uVar41 = 0;
                  uVar40 = uVar26;
                  if (iVar25 != 0) {
                    do {
                      pbVar6[uVar41] = *(byte *)(uVar41 + lVar29);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar26);
                  }
                  do {
                    uVar18 = ((undefined8 *)(uVar40 + lVar29))[1];
                    *(undefined8 *)(pbVar6 + uVar40) = *(undefined8 *)(uVar40 + lVar29);
                    *(undefined8 *)(pbVar6 + uVar40 + 8) = uVar18;
                    uVar40 = uVar40 + 0x10;
                    iVar56 = iVar47;
                  } while (uVar40 < uVar49);
                }
                for (uVar40 = (ulonglong)iVar56; uVar37 = param_5 + uVar51, uVar40 < uVar53;
                    uVar40 = uVar40 + 1) {
                  pbVar6[uVar40] = *(byte *)(uVar40 + lVar29);
                }
              }
              uVar41 = (ulonglong)(int)uVar37;
              if (2 < (int)(uint)param_6) {
                lVar29 = lVar45 * uVar50;
                if (uVar34 == 0) {
                  lVar32 = lVar29 + lVar7;
                  if (-1 < (int)uVar64) {
                    if (((int)param_5 < 7) ||
                       ((pbVar33 = param_3 + ((uVar48 - 1) - (lVar29 + -1 + lVar7)),
                        (longlong)pbVar33 <= (longlong)uVar48 &&
                        ((byte *)-uVar48 == pbVar33 || -(longlong)pbVar33 < (longlong)uVar48)))) {
                      iVar56 = 1;
                      lVar46 = 0;
                      uVar40 = 0;
                      if (uVar65 != 0) {
                        do {
                          uVar59 = uVar40;
                          uVar40 = uVar59 + 1;
                          pbVar6[lVar46 + -1] = *(byte *)(lVar46 + -1 + lVar32);
                          pbVar6[lVar46 + -2] = *(byte *)(lVar46 + -2 + lVar32);
                          lVar46 = lVar46 + -2;
                        } while (uVar40 < uVar68);
                        iVar56 = (int)uVar59 + 2 + (int)uVar40;
                      }
                      if (iVar56 - 1U < param_5) {
                        pbVar6[-(longlong)iVar56] = *(byte *)(lVar32 - iVar56);
                      }
                    }
                    else {
                      if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = 0;
                        uVar59 = uVar20;
                        if (uVar20 != 0) {
                          do {
                            param_3[uVar40] = *(byte *)(uVar40 + (lVar32 - uVar48));
                            uVar40 = uVar40 + 1;
                          } while (uVar40 < uVar20);
                        }
                        do {
                          puVar8 = (undefined8 *)(uVar59 + (lVar32 - uVar48));
                          uVar18 = puVar8[1];
                          *(undefined8 *)(param_3 + uVar59) = *puVar8;
                          *(undefined8 *)(param_3 + uVar59 + 8) = uVar18;
                          uVar59 = uVar59 + 0x10;
                          uVar40 = uVar23;
                        } while (uVar59 < uVar23);
                      }
                      if (uVar40 < uVar22) {
                        do {
                          param_3[uVar40] = *(byte *)(uVar40 + (lVar32 - uVar48));
                          uVar40 = uVar40 + 1;
                        } while (uVar40 < uVar22);
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar64) {
                  if (6 < (int)param_5) {
                    pbVar33 = param_3 + ((uVar48 - 1) - (param_1 + -1 + lVar29));
                    if (((longlong)uVar48 < (longlong)pbVar33) ||
                       ((byte *)-uVar48 != pbVar33 && (longlong)uVar48 <= -(longlong)pbVar33)) {
                      if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                        uVar40 = 0;
                      }
                      else {
                        uVar40 = 0;
                        lVar32 = (param_1 + lVar29) - uVar48;
                        uVar59 = uVar20;
                        if (uVar20 != 0) {
                          do {
                            param_3[uVar40] = *(byte *)(uVar40 + lVar32);
                            uVar40 = uVar40 + 1;
                          } while (uVar40 < uVar20);
                        }
                        do {
                          puVar8 = (undefined8 *)(uVar59 + lVar32);
                          uVar18 = puVar8[1];
                          *(undefined8 *)(param_3 + uVar59) = *puVar8;
                          *(undefined8 *)(param_3 + uVar59 + 8) = uVar18;
                          uVar59 = uVar59 + 0x10;
                          uVar40 = uVar23;
                        } while (uVar59 < uVar23);
                      }
                      if (uVar40 < uVar22) {
                        do {
                          param_3[uVar40] = *(byte *)(uVar40 + ((param_1 + lVar29) - uVar48));
                          uVar40 = uVar40 + 1;
                        } while (uVar40 < uVar22);
                      }
                      goto LAB_140a93709;
                    }
                  }
                  iVar56 = 1;
                  lVar32 = 0;
                  if (uVar65 != 0) {
                    uVar40 = 0;
                    do {
                      uVar59 = uVar40;
                      uVar40 = uVar59 + 1;
                      pbVar6[lVar32 + -1] = *(byte *)(lVar32 + -1 + param_1 + lVar29);
                      pbVar6[lVar32 + -2] = *(byte *)(lVar32 + -2 + param_1 + lVar29);
                      lVar32 = lVar32 + -2;
                    } while (uVar40 < uVar68);
                    iVar56 = (int)uVar59 + 2 + (int)uVar40;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar6[-(longlong)iVar56] = *(byte *)((param_1 + lVar29) - (longlong)iVar56);
                  }
                }
LAB_140a93709:
                lVar32 = lVar29 + lVar7;
                param_3[uVar41] = *(byte *)(lVar32 + -2);
                param_3[uVar41 + 1] = *(byte *)(lVar32 + -1);
                iVar57 = uVar37 + 2;
                lVar46 = (longlong)iVar57;
                iVar56 = iVar57;
                if (uVar42 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar33 = param_3 + lVar46;
                      lVar32 = param_1 + lVar29;
                      if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar32) ||
                         ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar32))) {
                        if ((longlong)uVar3 < 0x10) {
LAB_140a94232:
                          uVar41 = 0;
                        }
                        else {
                          uVar40 = (ulonglong)pbVar33 & 0xf;
                          if (uVar40 != 0) {
                            uVar40 = 0x10 - uVar40;
                          }
                          if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a94232;
                          uVar59 = 0;
                          uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                          if (uVar40 != 0) {
                            do {
                              pbVar33[uVar59] = *(byte *)(uVar59 + lVar32);
                              uVar59 = uVar59 + 1;
                            } while (uVar59 < uVar40);
                          }
                          do {
                            uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                            *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                            *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                            uVar40 = uVar40 + 0x10;
                          } while (uVar40 < uVar41);
                        }
                        for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                          pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                        }
                        lVar46 = (longlong)(int)(iVar36 + 4 + uVar37);
                        goto LAB_140a93ab4;
                      }
                    }
                    iVar28 = 1;
                    if (uVar54 != 0) {
                      uVar40 = 0;
                      do {
                        uVar41 = uVar40;
                        param_3[uVar41 * 2 + lVar46] = *(byte *)(param_1 + lVar29 + uVar41 * 2);
                        param_3[uVar41 * 2 + lVar46 + 1] =
                             *(byte *)(param_1 + lVar29 + 1 + uVar41 * 2);
                        uVar40 = uVar41 + 1;
                      } while (uVar40 < uVar58);
                      iVar56 = (int)uVar40 * 2 + 2 + uVar37;
                      iVar28 = (int)uVar41 + 2 + (int)uVar40;
                    }
                    if (uVar1 <= iVar28 - 1U) goto LAB_140a93ab1;
                    param_3[(longlong)iVar28 + -1 + lVar46] =
                         *(byte *)((longlong)iVar28 + -1 + lVar29 + param_1);
                    lVar46 = (longlong)(iVar28 + iVar57);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a93ab4;
                  if (6 < (int)uVar1) {
                    pbVar33 = param_3 + lVar46;
                    if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar32) ||
                       ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar32))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a94239:
                        uVar41 = 0;
                      }
                      else {
                        uVar40 = (ulonglong)pbVar33 & 0xf;
                        if (uVar40 != 0) {
                          uVar40 = 0x10 - uVar40;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a94239;
                        uVar59 = 0;
                        uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                        if (uVar40 != 0) {
                          do {
                            pbVar33[uVar59] = *(byte *)(uVar59 + lVar32);
                            uVar59 = uVar59 + 1;
                          } while (uVar59 < uVar40);
                        }
                        do {
                          uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                          *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                          *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                          uVar40 = uVar40 + 0x10;
                        } while (uVar40 < uVar41);
                      }
                      for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                        pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                      }
                      lVar46 = (longlong)(int)(iVar36 + 4 + uVar37);
                      goto LAB_140a93ab4;
                    }
                  }
                  iVar28 = 1;
                  uVar40 = 0;
                  if (uVar54 != 0) {
                    do {
                      uVar41 = uVar40;
                      param_3[uVar41 * 2 + lVar46] = *(byte *)(lVar32 + uVar41 * 2);
                      param_3[uVar41 * 2 + lVar46 + 1] = *(byte *)(lVar32 + 1 + uVar41 * 2);
                      uVar40 = uVar41 + 1;
                    } while (uVar40 < uVar58);
                    iVar56 = (int)uVar40 * 2 + 2 + uVar37;
                    iVar28 = (int)uVar41 + 2 + (int)uVar40;
                  }
                  if (iVar28 - 1U < uVar1) {
                    param_3[(longlong)iVar28 + -1 + lVar46] =
                         *(byte *)((longlong)iVar28 + -1 + lVar32);
                    lVar46 = (longlong)(iVar28 + iVar57);
                    goto LAB_140a93ab4;
                  }
LAB_140a93ab1:
                  lVar46 = (longlong)iVar56;
                }
LAB_140a93ab4:
                uVar40 = lVar46 - lVar2;
                goto LAB_140a92200;
              }
            }
            if (uVar34 == 0) {
              if (-1 < (int)uVar64) {
                if (((int)param_5 < 7) ||
                   ((pbVar33 = param_3 + ((uVar48 - 1) - (longlong)(pbVar6 + lVar62 + -1)),
                    (longlong)pbVar33 <= (longlong)uVar48 &&
                    ((byte *)-uVar48 == pbVar33 || -(longlong)pbVar33 < (longlong)uVar48)))) {
                  iVar56 = 1;
                  lVar29 = 0;
                  uVar40 = 0;
                  if (uVar65 != 0) {
                    do {
                      uVar59 = uVar40;
                      uVar40 = uVar59 + 1;
                      pbVar6[lVar29 + -1] = pbVar6[lVar29 + -1 + lVar62];
                      pbVar6[lVar29 + -2] = pbVar6[lVar29 + -2 + lVar62];
                      lVar29 = lVar29 + -2;
                    } while (uVar40 < uVar68);
                    iVar56 = (int)uVar59 + 2 + (int)uVar40;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar6[-(longlong)iVar56] = pbVar6[lVar62 - iVar56];
                  }
                }
                else {
                  if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    uVar59 = uVar20;
                    if (uVar20 != 0) {
                      do {
                        param_3[uVar40] = pbVar6[uVar40 + lVar19];
                        uVar40 = uVar40 + 1;
                      } while (uVar40 < uVar20);
                    }
                    do {
                      uVar18 = *(undefined8 *)(pbVar6 + uVar59 + lVar19 + 8);
                      *(undefined8 *)(param_3 + uVar59) = *(undefined8 *)(pbVar6 + uVar59 + lVar19);
                      *(undefined8 *)(param_3 + uVar59 + 8) = uVar18;
                      uVar59 = uVar59 + 0x10;
                      uVar40 = uVar23;
                    } while (uVar59 < uVar23);
                  }
                  for (; uVar40 < uVar22; uVar40 = uVar40 + 1) {
                    param_3[uVar40] = pbVar6[uVar40 + lVar19];
                  }
                }
              }
            }
            else if (-1 < (int)uVar64) {
              if (6 < (int)param_5) {
                lVar29 = param_1 + lVar45 * uVar50;
                pbVar33 = param_3 + ((uVar48 - 1) - (param_1 + -1 + lVar45 * uVar50));
                if (((longlong)uVar48 < (longlong)pbVar33) ||
                   ((byte *)-uVar48 != pbVar33 && (longlong)uVar48 <= -(longlong)pbVar33)) {
                  if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    lVar32 = lVar29 - uVar48;
                    uVar59 = uVar20;
                    if (uVar20 != 0) {
                      do {
                        param_3[uVar40] = *(byte *)(uVar40 + lVar32);
                        uVar40 = uVar40 + 1;
                      } while (uVar40 < uVar20);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar59 + lVar32);
                      uVar18 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar59) = *puVar8;
                      *(undefined8 *)(param_3 + uVar59 + 8) = uVar18;
                      uVar59 = uVar59 + 0x10;
                      uVar40 = uVar23;
                    } while (uVar59 < uVar23);
                  }
                  if (uVar40 < uVar22) {
                    do {
                      param_3[uVar40] = *(byte *)(uVar40 + (lVar29 - uVar48));
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar22);
                  }
                  goto LAB_140a93e72;
                }
              }
              iVar56 = 1;
              lVar29 = 0;
              if (uVar65 != 0) {
                lVar32 = lVar45 * uVar50 + param_1;
                uVar40 = 0;
                do {
                  uVar59 = uVar40;
                  uVar40 = uVar59 + 1;
                  pbVar6[lVar29 + -1] = *(byte *)(lVar29 + -1 + lVar32);
                  pbVar6[lVar29 + -2] = *(byte *)(lVar29 + -2 + lVar32);
                  lVar29 = lVar29 + -2;
                } while (uVar40 < uVar68);
                iVar56 = (int)uVar59 + 2 + (int)uVar40;
              }
              if (iVar56 - 1U < param_5) {
                pbVar6[-(longlong)iVar56] = *(byte *)((param_1 - iVar56) + lVar45 * uVar50);
              }
            }
LAB_140a93e72:
            if (uVar42 == 0) {
              uVar40 = uVar48;
              if ((int)uVar1 < 1) goto LAB_140a92200;
              if (6 < (int)uVar1) {
                pbVar33 = param_3 + uVar41;
                pbVar11 = param_3 + (uVar41 - lVar62);
                if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - (longlong)pbVar11) ||
                   ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - (longlong)pbVar11))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a9424e:
                    uVar41 = 0;
                  }
                  else {
                    uVar40 = (ulonglong)pbVar33 & 0xf;
                    if (uVar40 != 0) {
                      uVar40 = 0x10 - uVar40;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a9424e;
                    uVar59 = 0;
                    uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                    if (uVar40 != 0) {
                      do {
                        pbVar33[uVar59] = pbVar11[uVar59];
                        uVar59 = uVar59 + 1;
                      } while (uVar59 < uVar40);
                    }
                    do {
                      uVar18 = *(undefined8 *)(pbVar11 + uVar40 + 8);
                      *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(pbVar11 + uVar40);
                      *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                      uVar40 = uVar40 + 0x10;
                    } while (uVar40 < uVar41);
                  }
                  for (; uVar40 = uVar48, uVar41 < uVar3; uVar41 = uVar41 + 1) {
                    pbVar33[uVar41] = pbVar11[uVar41];
                  }
                  goto LAB_140a92200;
                }
              }
              iVar56 = 1;
              if (uVar54 != 0) {
                uVar40 = 0;
                do {
                  uVar59 = uVar40;
                  param_3[uVar59 * 2 + uVar41] = param_3[uVar59 * 2 + (uVar41 - lVar62)];
                  param_3[uVar59 * 2 + uVar41 + 1] = param_3[uVar59 * 2 + (uVar41 - lVar62) + 1];
                  uVar40 = uVar59 + 1;
                } while (uVar40 < uVar58);
                iVar56 = (int)uVar59 + 2 + (int)uVar40;
              }
              uVar40 = uVar48;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + uVar41] =
                     param_3[(longlong)iVar56 + -1 + (uVar41 - lVar62)];
              }
            }
            else {
              uVar40 = uVar48;
              if ((int)uVar1 < 1) goto LAB_140a92200;
              if (6 < (int)uVar1) {
                pbVar33 = param_3 + uVar41;
                lVar29 = lVar45 * uVar50 + lVar7;
                if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar29) ||
                   ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar29))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a94255:
                    uVar41 = 0;
                  }
                  else {
                    uVar40 = (ulonglong)pbVar33 & 0xf;
                    if (uVar40 != 0) {
                      uVar40 = 0x10 - uVar40;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a94255;
                    uVar59 = 0;
                    uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                    if (uVar40 != 0) {
                      do {
                        pbVar33[uVar59] = *(byte *)(uVar59 + lVar29);
                        uVar59 = uVar59 + 1;
                      } while (uVar59 < uVar40);
                    }
                    do {
                      uVar18 = ((undefined8 *)(uVar40 + lVar29))[1];
                      *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar29);
                      *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                      uVar40 = uVar40 + 0x10;
                    } while (uVar40 < uVar41);
                  }
                  for (; uVar40 = uVar48, uVar41 < uVar3; uVar41 = uVar41 + 1) {
                    pbVar33[uVar41] = *(byte *)(uVar41 + lVar29);
                  }
                  goto LAB_140a92200;
                }
              }
              iVar56 = 1;
              if (uVar54 != 0) {
                lVar29 = lVar45 * uVar50 + lVar7;
                uVar40 = 0;
                do {
                  uVar59 = uVar40;
                  param_3[uVar59 * 2 + uVar41] = *(byte *)(lVar29 + uVar59 * 2);
                  param_3[uVar59 * 2 + uVar41 + 1] = *(byte *)(lVar29 + 1 + uVar59 * 2);
                  uVar40 = uVar59 + 1;
                } while (uVar40 < uVar58);
                iVar56 = (int)uVar59 + 2 + (int)uVar40;
              }
              uVar40 = uVar48;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + uVar41] =
                     *(byte *)(lVar7 + iVar56 + -1 + lVar45 * uVar50);
              }
            }
          }
          else if (uVar37 == 3) {
            uVar41 = uVar48;
            if (0 < (int)(uint)param_6) {
              if (uVar51 < 7) {
LAB_140a9261d:
                iVar56 = 1;
                uVar37 = param_5;
                if (uVar66 != 0) {
                  lVar29 = lVar45 * uVar50 + param_1;
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    pbVar6[uVar41 * 2] = *(byte *)(lVar29 + uVar41 * 2);
                    pbVar6[uVar41 * 2 + 1] = *(byte *)(lVar29 + 1 + uVar41 * 2);
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar69);
                  uVar37 = param_5 + (int)uVar40 * 2;
                  iVar56 = (int)uVar41 + 2 + (int)uVar40;
                }
                if (iVar56 - 1U < uVar51) {
                  pbVar6[(longlong)iVar56 + -1] = *(byte *)(param_1 + iVar56 + -1 + lVar45 * uVar50)
                  ;
                  uVar37 = param_5 + iVar56;
                }
              }
              else {
                lVar29 = lVar45 * uVar50 + param_1;
                if (((longlong)pbVar6 - lVar29 < (longlong)(ulonglong)uVar51) &&
                   (-((longlong)pbVar6 - lVar29) < (longlong)(ulonglong)uVar51)) goto LAB_140a9261d;
                if ((uVar51 < 0x10) || (uVar51 < iVar25 + 0x10U)) {
                  uVar40 = 0;
                }
                else {
                  uVar40 = 0;
                  uVar41 = uVar26;
                  if (iVar25 != 0) {
                    do {
                      pbVar6[uVar40] = *(byte *)(uVar40 + lVar29);
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar26);
                  }
                  do {
                    uVar18 = ((undefined8 *)(uVar41 + lVar29))[1];
                    *(undefined8 *)(pbVar6 + uVar41) = *(undefined8 *)(uVar41 + lVar29);
                    *(undefined8 *)(pbVar6 + uVar41 + 8) = uVar18;
                    uVar41 = uVar41 + 0x10;
                    uVar40 = uVar49;
                  } while (uVar41 < uVar49);
                }
                for (; uVar37 = param_5 + uVar51, uVar40 < uVar53; uVar40 = uVar40 + 1) {
                  pbVar6[uVar40] = *(byte *)(uVar40 + lVar29);
                }
              }
              uVar41 = (ulonglong)(int)uVar37;
              if (2 < (int)(uint)param_6) {
                if (uVar34 == 0) {
                  if (-1 < (int)uVar64) {
                    iVar56 = 1;
                    lVar29 = 0;
                    if (uVar65 != 0) {
                      lVar32 = lVar45 * uVar50 + param_1 + uVar39;
                      uVar40 = 0;
                      do {
                        uVar59 = uVar40;
                        pbVar6[lVar29 + -1] = *(byte *)(lVar32 + uVar59 * 2);
                        uVar40 = uVar59 + 1;
                        pbVar6[lVar29 + -2] = *(byte *)(lVar32 + 1 + uVar59 * 2);
                        lVar29 = lVar29 + -2;
                      } while (uVar40 < uVar68);
                      iVar56 = (int)uVar59 + 2 + (int)uVar40;
                    }
                    if (iVar56 - 1U < param_5) {
                      pbVar6[-(longlong)iVar56] =
                           *(byte *)((longlong)iVar56 + -1 + lVar45 * uVar50 + param_1 + uVar39);
                    }
                  }
                }
                else {
                  lVar29 = lVar45 * uVar50;
                  if (-1 < (int)uVar64) {
                    if (6 < (int)param_5) {
                      pbVar33 = param_3 + ((uVar48 - 1) - (param_1 + -1 + lVar29));
                      if (((longlong)uVar48 < (longlong)pbVar33) ||
                         ((byte *)-uVar48 != pbVar33 && (longlong)uVar48 <= -(longlong)pbVar33)) {
                        if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                          uVar40 = 0;
                        }
                        else {
                          uVar40 = 0;
                          lVar32 = (param_1 + lVar29) - uVar48;
                          uVar59 = uVar20;
                          if (uVar20 != 0) {
                            do {
                              param_3[uVar40] = *(byte *)(uVar40 + lVar32);
                              uVar40 = uVar40 + 1;
                            } while (uVar40 < uVar20);
                          }
                          do {
                            puVar8 = (undefined8 *)(uVar59 + lVar32);
                            uVar18 = puVar8[1];
                            *(undefined8 *)(param_3 + uVar59) = *puVar8;
                            *(undefined8 *)(param_3 + uVar59 + 8) = uVar18;
                            uVar59 = uVar59 + 0x10;
                            uVar40 = uVar23;
                          } while (uVar59 < uVar23);
                        }
                        if (uVar40 < uVar22) {
                          do {
                            param_3[uVar40] = *(byte *)(uVar40 + ((param_1 + lVar29) - uVar48));
                            uVar40 = uVar40 + 1;
                          } while (uVar40 < uVar22);
                        }
                        goto LAB_140a92970;
                      }
                    }
                    iVar56 = 1;
                    lVar32 = 0;
                    if (uVar65 != 0) {
                      uVar40 = 0;
                      do {
                        uVar59 = uVar40;
                        uVar40 = uVar59 + 1;
                        pbVar6[lVar32 + -1] = *(byte *)(lVar32 + -1 + param_1 + lVar29);
                        pbVar6[lVar32 + -2] = *(byte *)(lVar32 + -2 + param_1 + lVar29);
                        lVar32 = lVar32 + -2;
                      } while (uVar40 < uVar68);
                      iVar56 = (int)uVar59 + 2 + (int)uVar40;
                    }
                    if (iVar56 - 1U < param_5) {
                      pbVar6[-(longlong)iVar56] = *(byte *)((param_1 + lVar29) - (longlong)iVar56);
                    }
                  }
                }
LAB_140a92970:
                lVar46 = lVar45 * uVar50;
                lVar29 = lVar46 + lVar7;
                param_3[uVar41] = *(byte *)(lVar29 + -2);
                param_3[uVar41 + 1] = *(byte *)(lVar29 + -1);
                iVar57 = uVar37 + 2;
                lVar32 = (longlong)iVar57;
                iVar56 = iVar57;
                if (uVar42 == 0) {
                  if (0 < (int)uVar1) {
                    iVar28 = 1;
                    lVar29 = 0;
                    if (uVar54 != 0) {
                      lVar9 = lVar46 + (lVar7 - uVar39);
                      uVar40 = 0;
                      do {
                        uVar41 = uVar40;
                        param_3[uVar41 * 2 + lVar32] = *(byte *)(lVar29 + -1 + lVar9);
                        lVar10 = lVar29 + -2;
                        lVar29 = lVar29 + -2;
                        param_3[uVar41 * 2 + lVar32 + 1] = *(byte *)(lVar10 + lVar9);
                        uVar40 = uVar41 + 1;
                      } while (uVar40 < uVar58);
                      iVar56 = (int)uVar40 * 2 + 2 + uVar37;
                      iVar28 = (int)uVar41 + 2 + (int)uVar40;
                    }
                    if (uVar1 <= iVar28 - 1U) goto LAB_140a92c2f;
                    param_3[(longlong)iVar28 + -1 + lVar32] =
                         *(byte *)((lVar46 + (lVar7 - uVar39)) - (longlong)iVar28);
                    lVar32 = (longlong)(iVar28 + iVar57);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a92c32;
                  if (6 < (int)uVar1) {
                    pbVar33 = param_3 + lVar32;
                    if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar29) ||
                       ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar29))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a93151:
                        uVar41 = 0;
                      }
                      else {
                        uVar40 = (ulonglong)pbVar33 & 0xf;
                        if (uVar40 != 0) {
                          uVar40 = 0x10 - uVar40;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a93151;
                        uVar59 = 0;
                        uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                        if (uVar40 != 0) {
                          do {
                            pbVar33[uVar59] = *(byte *)(uVar59 + lVar29);
                            uVar59 = uVar59 + 1;
                          } while (uVar59 < uVar40);
                        }
                        do {
                          uVar18 = ((undefined8 *)(uVar40 + lVar29))[1];
                          *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar29);
                          *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                          uVar40 = uVar40 + 0x10;
                        } while (uVar40 < uVar41);
                      }
                      for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                        pbVar33[uVar41] = *(byte *)(uVar41 + lVar29);
                      }
                      lVar32 = (longlong)(int)(iVar36 + 4 + uVar37);
                      goto LAB_140a92c32;
                    }
                  }
                  iVar28 = 1;
                  uVar40 = 0;
                  if (uVar54 != 0) {
                    do {
                      uVar41 = uVar40;
                      param_3[uVar41 * 2 + lVar32] = *(byte *)(lVar29 + uVar41 * 2);
                      param_3[uVar41 * 2 + lVar32 + 1] = *(byte *)(lVar29 + 1 + uVar41 * 2);
                      uVar40 = uVar41 + 1;
                    } while (uVar40 < uVar58);
                    iVar56 = (int)uVar40 * 2 + 2 + uVar37;
                    iVar28 = (int)uVar41 + 2 + (int)uVar40;
                  }
                  if (iVar28 - 1U < uVar1) {
                    param_3[(longlong)iVar28 + -1 + lVar32] =
                         *(byte *)((longlong)iVar28 + -1 + lVar29);
                    lVar32 = (longlong)(iVar28 + iVar57);
                  }
                  else {
LAB_140a92c2f:
                    lVar32 = (longlong)iVar56;
                  }
                }
LAB_140a92c32:
                uVar40 = lVar32 - lVar2;
                goto LAB_140a92200;
              }
            }
            uVar40 = (ulonglong)uVar64;
            if (uVar34 == 0) {
              uVar37 = uVar64;
              if (uVar42 == 0) {
                while (-1 < (int)uVar37) {
                  uVar37 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar41 = (ulonglong)(int)uVar40;
                    uVar40 = uVar41;
                    do {
                      if ((int)uVar40 < 0) break;
                      lVar29 = (longlong)(int)uVar37;
                      uVar37 = uVar37 + 1;
                      uVar40 = (ulonglong)((int)uVar40 - 1);
                      param_3[uVar41 - lVar29] = param_3[lVar29 + uVar39 + 1 + uVar41];
                    } while (uVar37 < uVar35);
                  }
                  uVar37 = (uint)uVar40;
                }
                uVar41 = 0;
                uVar40 = uVar48;
                iVar56 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                iVar57 = iVar27;
                iVar28 = iVar27;
                if ((int)param_5 < 2) {
                  do {
                    iVar38 = iVar56 + iVar57;
                    pbVar6[uVar41 + lVar62] = param_3[iVar56];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar38) || (iVar38 < (int)param_5)) {
                      iVar56 = iVar57 + iVar28;
                      iVar57 = -iVar57;
                      iVar38 = iVar38 - iVar56;
                      iVar28 = -iVar28;
                    }
                    uVar41 = uVar41 + 1;
                    iVar56 = iVar38;
                  } while (uVar41 < uVar3);
                }
              }
              else {
                if (-1 < (int)uVar64) {
                  iVar56 = 1;
                  lVar29 = 0;
                  if (uVar65 != 0) {
                    lVar32 = lVar45 * uVar50 + param_1;
                    uVar40 = 0;
                    do {
                      uVar59 = uVar40;
                      pbVar6[lVar29 + -1] = *(byte *)(lVar32 + 1 + uVar59 * 2);
                      uVar40 = uVar59 + 1;
                      pbVar6[lVar29 + -2] = *(byte *)(lVar32 + 2 + uVar59 * 2);
                      lVar29 = lVar29 + -2;
                    } while (uVar40 < uVar68);
                    iVar56 = (int)uVar59 + 2 + (int)uVar40;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar6[-(longlong)iVar56] = *(byte *)(param_1 + iVar56 + lVar45 * uVar50);
                  }
                }
LAB_140a92ed1:
                uVar40 = uVar48;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar33 = param_3 + uVar41;
                    lVar29 = lVar45 * uVar50 + lVar7;
                    if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar29) ||
                       ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar29))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a93158:
                        uVar41 = 0;
                      }
                      else {
                        uVar40 = (ulonglong)pbVar33 & 0xf;
                        if (uVar40 != 0) {
                          uVar40 = 0x10 - uVar40;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a93158;
                        uVar59 = 0;
                        uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                        if (uVar40 != 0) {
                          do {
                            pbVar33[uVar59] = *(byte *)(uVar59 + lVar29);
                            uVar59 = uVar59 + 1;
                          } while (uVar59 < uVar40);
                        }
                        do {
                          uVar18 = ((undefined8 *)(uVar40 + lVar29))[1];
                          *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar29);
                          *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                          uVar40 = uVar40 + 0x10;
                        } while (uVar40 < uVar41);
                      }
                      for (; uVar40 = uVar48, uVar41 < uVar3; uVar41 = uVar41 + 1) {
                        pbVar33[uVar41] = *(byte *)(uVar41 + lVar29);
                      }
                      goto LAB_140a92200;
                    }
                  }
                  iVar56 = 1;
                  if (uVar54 != 0) {
                    lVar29 = lVar45 * uVar50 + lVar7;
                    uVar40 = 0;
                    do {
                      uVar59 = uVar40;
                      param_3[uVar59 * 2 + uVar41] = *(byte *)(lVar29 + uVar59 * 2);
                      param_3[uVar59 * 2 + uVar41 + 1] = *(byte *)(lVar29 + 1 + uVar59 * 2);
                      uVar40 = uVar59 + 1;
                    } while (uVar40 < uVar58);
                    iVar56 = (int)uVar59 + 2 + (int)uVar40;
                  }
                  uVar40 = uVar48;
                  if (iVar56 - 1U < uVar1) {
                    param_3[(longlong)iVar56 + -1 + uVar41] =
                         *(byte *)(lVar7 + iVar56 + -1 + lVar45 * uVar50);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar64) {
                do {
                  uVar37 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar56 = (int)uVar40;
                    do {
                      if ((int)uVar40 < 0) break;
                      lVar29 = (longlong)(int)uVar37;
                      uVar37 = uVar37 + 1;
                      uVar40 = (ulonglong)((int)uVar40 - 1);
                      param_3[iVar56 - lVar29] =
                           *(byte *)(((longlong)iVar56 + lVar45 * uVar50 + lVar67) - lVar29);
                    } while (uVar37 < uVar35);
                  }
                } while (-1 < (int)uVar40);
              }
              if (uVar42 != 0) goto LAB_140a92ed1;
              uVar40 = uVar48;
              if (0 < (int)uVar1) {
                iVar56 = 1;
                lVar29 = 0;
                if (uVar54 != 0) {
                  lVar32 = lVar45 * uVar50 + lVar7;
                  uVar40 = 0;
                  do {
                    uVar59 = uVar40;
                    param_3[uVar59 * 2 + uVar41] = *(byte *)(lVar29 + -2 + lVar32);
                    lVar46 = lVar29 + -3;
                    lVar29 = lVar29 + -2;
                    param_3[uVar59 * 2 + uVar41 + 1] = *(byte *)(lVar46 + lVar32);
                    uVar40 = uVar59 + 1;
                  } while (uVar40 < uVar58);
                  iVar56 = (int)uVar59 + 2 + (int)uVar40;
                }
                uVar40 = uVar48;
                if (iVar56 - 1U < uVar1) {
                  param_3[(longlong)iVar56 + -1 + uVar41] =
                       *(byte *)((lVar7 - iVar56) + -1 + lVar45 * uVar50);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar37 = 0;
            uVar31 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar32 = lVar45 * uVar50;
                lVar29 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar32);
                if (((longlong)uVar48 <= lVar29) || ((longlong)uVar48 <= -lVar29)) {
                  if (((longlong)uVar48 < 0x10) || ((longlong)uVar48 < lVar21)) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    uVar41 = uVar52;
                    if (uVar52 != 0) {
                      do {
                        param_3[uVar40] = *(byte *)(uVar40 + lVar32 + lVar67);
                        uVar40 = uVar40 + 1;
                      } while (uVar40 < uVar52);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar41 + lVar32 + lVar67);
                      uVar18 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar41) = *puVar8;
                      *(undefined8 *)(param_3 + uVar41 + 8) = uVar18;
                      uVar41 = uVar41 + 0x10;
                      uVar40 = uVar63;
                    } while (uVar41 < uVar63);
                  }
                  uVar31 = param_5;
                  if (uVar40 < uVar48) {
                    do {
                      param_3[uVar40] = *(byte *)(uVar40 + lVar32 + lVar67);
                      uVar40 = uVar40 + 1;
                    } while (uVar40 < uVar48);
                  }
                  goto LAB_140a913d4;
                }
              }
              uVar44 = 1;
              if (uVar65 != 0) {
                lVar29 = lVar45 * uVar50 + lVar67;
                uVar40 = 0;
                do {
                  uVar41 = uVar40;
                  param_3[uVar41 * 2] = *(byte *)(lVar29 + uVar41 * 2);
                  param_3[uVar41 * 2 + 1] = *(byte *)(lVar29 + 1 + uVar41 * 2);
                  uVar40 = uVar41 + 1;
                } while (uVar40 < uVar68);
                uVar37 = (int)uVar40 * 2;
                uVar44 = (int)uVar41 + 2 + (int)uVar40;
              }
              uVar31 = uVar37;
              if (uVar44 - 1 < param_5) {
                param_3[(longlong)(int)uVar44 + -1] =
                     *(byte *)(lVar67 + (int)uVar44 + -1 + lVar45 * uVar50);
                uVar31 = uVar44;
              }
            }
LAB_140a913d4:
            lVar29 = (longlong)(int)uVar31;
            if (0 < (int)(uint)param_6) {
              if (uVar51 < 7) {
LAB_140a914fe:
                iVar56 = 1;
                uVar37 = uVar31;
                if (uVar66 != 0) {
                  lVar32 = lVar45 * uVar50 + param_1;
                  uVar40 = 0;
                  do {
                    uVar41 = uVar40;
                    param_3[uVar41 * 2 + lVar29] = *(byte *)(lVar32 + uVar41 * 2);
                    param_3[uVar41 * 2 + lVar29 + 1] = *(byte *)(lVar32 + 1 + uVar41 * 2);
                    uVar40 = uVar41 + 1;
                  } while (uVar40 < uVar69);
                  uVar37 = uVar31 + (int)uVar40 * 2;
                  iVar56 = (int)uVar41 + 2 + (int)uVar40;
                }
                if (iVar56 - 1U < uVar51) {
                  param_3[(longlong)iVar56 + -1 + lVar29] =
                       *(byte *)(param_1 + iVar56 + -1 + lVar45 * uVar50);
                  uVar37 = uVar31 + iVar56;
                }
              }
              else {
                pbVar33 = param_3 + lVar29;
                lVar32 = lVar45 * uVar50 + param_1;
                if (((longlong)pbVar33 - lVar32 < (longlong)(ulonglong)uVar51) &&
                   (-((longlong)pbVar33 - lVar32) < (longlong)(ulonglong)uVar51))
                goto LAB_140a914fe;
                if (uVar51 < 0x10) {
LAB_140a924fa:
                  uVar41 = 0;
                }
                else {
                  uVar40 = (ulonglong)pbVar33 & 0xf;
                  if ((int)uVar40 != 0) {
                    uVar40 = (ulonglong)(0x10 - (int)uVar40);
                  }
                  iVar56 = (int)uVar40;
                  if (uVar51 < iVar56 + 0x10U) goto LAB_140a924fa;
                  uVar41 = 0;
                  if (iVar56 != 0) {
                    do {
                      pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar40);
                  }
                  uVar41 = (ulonglong)(int)(uVar51 - (uVar51 - iVar56 & 0xf));
                  do {
                    uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                    *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                    *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                    uVar40 = uVar40 + 0x10;
                  } while (uVar40 < uVar41);
                }
                for (; uVar41 < uVar53; uVar41 = uVar41 + 1) {
                  pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                }
                uVar37 = uVar31 + uVar51;
              }
              lVar29 = (longlong)(int)uVar37;
              if (2 < (int)(uint)param_6) {
                lVar32 = lVar45 * uVar50 + lVar7;
                param_3[lVar29] = *(byte *)(lVar32 + -2);
                param_3[lVar29 + 1] = *(byte *)(lVar32 + -1);
                iVar56 = uVar37 + 2;
                lVar29 = (longlong)iVar56;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar33 = param_3 + lVar29;
                    if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar32) ||
                       ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar32))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a92501:
                        uVar41 = 0;
                      }
                      else {
                        uVar40 = (ulonglong)pbVar33 & 0xf;
                        if (uVar40 != 0) {
                          uVar40 = 0x10 - uVar40;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a92501;
                        uVar59 = 0;
                        uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                        if (uVar40 != 0) {
                          do {
                            pbVar33[uVar59] = *(byte *)(uVar59 + lVar32);
                            uVar59 = uVar59 + 1;
                          } while (uVar59 < uVar40);
                        }
                        do {
                          uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                          *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                          *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                          uVar40 = uVar40 + 0x10;
                        } while (uVar40 < uVar41);
                      }
                      for (; uVar41 < uVar3; uVar41 = uVar41 + 1) {
                        pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                      }
                      lVar29 = (longlong)(int)(iVar36 + 4 + uVar37);
                      goto LAB_140a91792;
                    }
                  }
                  iVar28 = 1;
                  uVar40 = 0;
                  iVar57 = iVar56;
                  if (uVar54 != 0) {
                    do {
                      uVar41 = uVar40;
                      param_3[uVar41 * 2 + lVar29] = *(byte *)(lVar32 + uVar41 * 2);
                      param_3[uVar41 * 2 + lVar29 + 1] = *(byte *)(lVar32 + 1 + uVar41 * 2);
                      uVar40 = uVar41 + 1;
                    } while (uVar40 < uVar58);
                    iVar57 = (int)uVar40 * 2 + 2 + uVar37;
                    iVar28 = (int)uVar41 + 2 + (int)uVar40;
                  }
                  if (iVar28 - 1U < uVar1) {
                    param_3[(longlong)iVar28 + -1 + lVar29] =
                         *(byte *)((longlong)iVar28 + -1 + lVar32);
                    lVar29 = (longlong)(iVar28 + iVar56);
                  }
                  else {
                    lVar29 = (longlong)iVar57;
                  }
                }
LAB_140a91792:
                uVar40 = lVar29 - lVar2;
                goto LAB_140a92200;
              }
            }
            uVar40 = uVar48;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar33 = param_3 + lVar29;
                lVar32 = lVar45 * uVar50 + lVar7;
                if (((longlong)(2 - uVar48) <= (longlong)pbVar33 - lVar32) ||
                   ((longlong)(2 - uVar48) <= -((longlong)pbVar33 - lVar32))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a92508:
                    uVar41 = 0;
                  }
                  else {
                    uVar40 = (ulonglong)pbVar33 & 0xf;
                    if (uVar40 != 0) {
                      uVar40 = 0x10 - uVar40;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar40 + 0x10)) goto LAB_140a92508;
                    uVar59 = 0;
                    uVar41 = (ulonglong)(int)(iVar30 - (iVar30 - (int)uVar40 & 0xfU));
                    if (uVar40 != 0) {
                      do {
                        pbVar33[uVar59] = *(byte *)(uVar59 + lVar32);
                        uVar59 = uVar59 + 1;
                      } while (uVar59 < uVar40);
                    }
                    do {
                      uVar18 = ((undefined8 *)(uVar40 + lVar32))[1];
                      *(undefined8 *)(pbVar33 + uVar40) = *(undefined8 *)(uVar40 + lVar32);
                      *(undefined8 *)(pbVar33 + uVar40 + 8) = uVar18;
                      uVar40 = uVar40 + 0x10;
                    } while (uVar40 < uVar41);
                  }
                  for (; uVar40 = uVar48, uVar41 < uVar3; uVar41 = uVar41 + 1) {
                    pbVar33[uVar41] = *(byte *)(uVar41 + lVar32);
                  }
                  goto LAB_140a92200;
                }
              }
              iVar56 = 1;
              if (uVar54 != 0) {
                lVar32 = lVar45 * uVar50 + lVar7;
                uVar40 = 0;
                do {
                  uVar41 = uVar40;
                  param_3[uVar41 * 2 + lVar29] = *(byte *)(lVar32 + uVar41 * 2);
                  param_3[uVar41 * 2 + lVar29 + 1] = *(byte *)(lVar32 + 1 + uVar41 * 2);
                  uVar40 = uVar41 + 1;
                } while (uVar40 < uVar58);
                iVar56 = (int)uVar41 + 2 + (int)uVar40;
              }
              uVar40 = uVar48;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + lVar29] =
                     *(byte *)(lVar7 + iVar56 + -1 + lVar45 * uVar50);
              }
            }
          }
          else {
            uVar40 = 0;
          }
        }
LAB_140a92200:
        **(short **)(param_2 + uVar50 * 8) = (ushort)*param_3 - (ushort)param_3[2];
        if (0 < (int)uVar43) {
          if (6 < (int)uVar43) {
            lVar29 = param_1 + lVar45 * uVar50;
            uVar41 = *(longlong *)(param_2 + uVar50 * 8) + 2;
            if ((lVar62 <= (longlong)(uVar41 - lVar29)) ||
               (lVar62 * 2 + -4 <= (longlong)-(uVar41 - lVar29))) {
              if ((longlong)uVar4 < 0x10) {
LAB_140a949d0:
                uVar59 = 0;
              }
              else {
                uVar37 = (uint)uVar41 & 0xf;
                if ((uVar41 & 0xf) != 0) {
                  if ((uVar41 & 1) != 0) goto LAB_140a949d0;
                  uVar37 = 0x10 - uVar37 >> 1;
                }
                uVar41 = (ulonglong)uVar37;
                if ((longlong)uVar4 < (longlong)(uVar41 + 0x10)) goto LAB_140a949d0;
                uVar59 = (ulonglong)(int)((int)uVar4 - ((int)uVar4 - uVar37 & 0xf));
                uVar60 = 0;
                if (uVar37 != 0) {
                  do {
                    *(ushort *)(*(longlong *)(param_2 + uVar50 * 8) + 2 + uVar60 * 2) =
                         (ushort)*(byte *)(uVar60 + lVar29) - (ushort)*(byte *)(uVar60 + 2 + lVar29)
                    ;
                    uVar60 = uVar60 + 1;
                  } while (uVar60 < uVar41);
                }
                lVar32 = lVar45 * uVar50 + param_1;
                do {
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(ulonglong *)(uVar41 + lVar32);
                  auVar12 = vpmovzxbw_avx(auVar12);
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = *(ulonglong *)(uVar41 + 2 + lVar32);
                  auVar13 = vpmovzxbw_avx(auVar13);
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = *(ulonglong *)(uVar41 + 8 + lVar32);
                  auVar14 = vpmovzxbw_avx(auVar14);
                  auVar13 = vpsubw_avx(auVar12,auVar13);
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = *(ulonglong *)(uVar41 + 10 + lVar32);
                  auVar12 = vpmovzxbw_avx(auVar15);
                  *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar50 * 8) + 2 + uVar41 * 2) =
                       auVar13;
                  auVar12 = vpsubw_avx(auVar14,auVar12);
                  *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar50 * 8) + 0x12 + uVar41 * 2) =
                       auVar12;
                  uVar41 = uVar41 + 0x10;
                } while (uVar41 < uVar59);
              }
              for (; uVar59 < uVar4; uVar59 = uVar59 + 1) {
                *(ushort *)(*(longlong *)(param_2 + uVar50 * 8) + 2 + uVar59 * 2) =
                     (ushort)*(byte *)(uVar59 + lVar29) - (ushort)*(byte *)(uVar59 + 2 + lVar29);
              }
              goto LAB_140a92472;
            }
          }
          iVar56 = 1;
          if (uVar43 >> 1 != 0) {
            lVar29 = lVar45 * uVar50 + param_1;
            uVar41 = 0;
            do {
              uVar59 = uVar41;
              *(ushort *)(*(longlong *)(param_2 + uVar50 * 8) + 2 + uVar59 * 4) =
                   (ushort)*(byte *)(lVar29 + uVar59 * 2) -
                   (ushort)*(byte *)(lVar29 + 2 + uVar59 * 2);
              *(ushort *)(*(longlong *)(param_2 + uVar50 * 8) + 4 + uVar59 * 4) =
                   (ushort)*(byte *)(lVar29 + 1 + uVar59 * 2) -
                   (ushort)*(byte *)(lVar29 + 3 + uVar59 * 2);
              uVar41 = uVar59 + 1;
            } while (uVar41 < uVar43 >> 1);
            iVar56 = (int)uVar59 + 2 + (int)uVar41;
          }
          if (iVar56 - 1U < uVar43) {
            lVar32 = (longlong)iVar56;
            lVar29 = lVar45 * uVar50 + param_1;
            *(ushort *)(*(longlong *)(param_2 + uVar50 * 8) + lVar32 * 2) =
                 (ushort)*(byte *)(lVar32 + -1 + lVar29) - (ushort)*(byte *)(lVar32 + 1 + lVar29);
          }
        }
LAB_140a92472:
        if ((int)(uint)param_6 < 2) goto LAB_140a924b6;
        lVar29 = uVar50 * 8;
        uVar50 = uVar50 + 1;
        lStack_70 = lStack_70 + lVar45;
        *(ushort *)(*(longlong *)(param_2 + lVar29) + -2 + lVar62 * 2) =
             (ushort)param_3[uVar40] - (ushort)param_3[uVar40 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar50) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar21 = 1;
      break;
    case 2:
      lVar21 = 2;
      break;
    case 3:
      lVar21 = 3;
      break;
    case 4:
      lVar21 = 4;
    }
    (*(code *)(&PTR_FUN_14308f290)[lVar21])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar45 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a924b6:
  uVar50 = uVar50 + 1;
  lStack_70 = lStack_70 + lVar45;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar50) {
    return 0;
  }
  goto LAB_140a911a0;
}

