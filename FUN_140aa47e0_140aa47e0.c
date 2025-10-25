
undefined8
FUN_140aa47e0(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar41;
  longlong lVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  byte *pbVar51;
  uint uVar52;
  uint uVar53;
  int iVar54;
  ulonglong uVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  int iVar62;
  int iVar63;
  longlong lVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  longlong lStack_78;
  short *psStack_58;
  short *psStack_50;
  ulonglong uVar40;
  ulonglong uVar68;
  ulonglong uVar69;
  
  lVar39 = (longlong)param_4;
  uVar25 = (uint)param_6 + 7 & 0xfffffff8;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar46 = (ulonglong)(int)param_5;
      uVar34 = (ulonglong)param_3 & 0xf;
      lVar28 = param_1 - uVar46;
      lVar22 = -uVar46;
      uVar29 = uVar34;
      if (uVar34 != 0) {
        uVar29 = 0x10 - uVar34;
      }
      uVar1 = lVar22 + 2;
      uVar52 = 2;
      if ((uint)param_6 < 3) {
        uVar52 = (uint)param_6;
      }
      lVar64 = (longlong)(int)(uint)param_6;
      lVar2 = lVar22 + 4;
      uVar60 = (ulonglong)(1 < (int)(uint)param_6);
      pbVar7 = param_3 + uVar46;
      uVar55 = (ulonglong)(int)uVar52;
      uVar56 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar30 = param_7 & 0xf;
      iVar57 = -param_5;
      uVar35 = param_7 & 0x80;
      uVar10 = iVar57 + 2;
      uVar36 = (uint)param_6 - 2;
      uVar38 = uVar10 >> 1;
      uVar40 = (ulonglong)uVar38;
      uVar32 = (ulonglong)pbVar7 & 0xf;
      uVar65 = param_7 & 0x40;
      uVar23 = 0xffffffffffffffff - (lVar22 + -1);
      uVar3 = lVar64 - 2;
      lVar22 = param_1 + lVar64;
      uVar37 = param_5 - 1;
      iVar26 = ((int)(uint)param_6 < 2) - 1;
      if ((int)uVar32 != 0) {
        uVar32 = (ulonglong)(0x10 - (int)uVar32);
      }
      if (uVar34 != 0) {
        uVar34 = 0x10 - uVar34;
      }
      lVar4 = uVar29 + 0x10;
      auVar15 = vpunpcklbw_avx(ZEXT116(param_8),ZEXT116(param_8));
      auVar15 = vpunpcklwd_avx(auVar15,auVar15);
      auVar15 = vpunpckldq_avx(auVar15,auVar15);
      lVar5 = uVar34 + 0x10;
      iVar18 = (int)uVar1;
      uVar27 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar27 = uVar30;
      }
      lVar17 = lVar64 - uVar46;
      uVar58 = param_5 - (param_5 - (int)uVar29 & 0xf);
      iVar31 = (int)uVar32;
      uVar66 = param_5 >> 1;
      uVar68 = (ulonglong)uVar66;
      iVar43 = uVar52 - (uVar52 - iVar31 & 0xf);
      uVar67 = uVar52 >> 1;
      uVar69 = (ulonglong)uVar67;
      uVar47 = (ulonglong)iVar43;
      uVar61 = (ulonglong)(int)uVar58;
      uVar24 = (ulonglong)(int)((int)uVar23 - ((int)uVar23 - (int)uVar34 & 0xfU));
      auVar15 = vpunpcklqdq_avx(auVar15,auVar15);
      lStack_78 = 0;
      uVar21 = 0;
LAB_140aa4c80:
      psStack_50 = *(short **)(param_2 + uVar21 * 8);
      psStack_58 = psStack_50 + (int)uVar25;
      if ((uint)param_6 == 1) {
        uVar53 = uVar27;
        if (uVar30 != 6) goto LAB_140aa4cff;
        goto LAB_140aa549c;
      }
      do {
        uVar53 = uVar30;
        if (uVar30 == 6) {
LAB_140aa549c:
          uVar53 = 0;
          uVar45 = 0;
          if (uVar65 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar46) && (lVar4 <= (longlong)uVar46)) {
                uVar49 = 0;
                uVar48 = uVar29;
                if (uVar29 != 0) {
                  do {
                    param_3[uVar49] = param_8;
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar29);
                }
                do {
                  *(undefined1 (*) [16])(param_3 + uVar48) = auVar15;
                  uVar48 = uVar48 + 0x10;
                  uVar53 = uVar58;
                } while (uVar48 < uVar61);
              }
              uVar48 = (ulonglong)(int)uVar53;
              uVar45 = uVar53;
              if (uVar48 < uVar46) {
                do {
                  param_3[uVar48] = param_8;
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar46);
                uVar45 = (uint)uVar48;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar33 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_78),
                lVar33 < (longlong)uVar46 && (-lVar33 < (longlong)uVar46)))) {
              uVar44 = 1;
              if (uVar66 != 0) {
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  param_3[uVar49 * 2] = *(byte *)(lVar28 + lStack_78 + uVar49 * 2);
                  param_3[uVar49 * 2 + 1] = *(byte *)(lVar28 + lStack_78 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar68);
                uVar53 = (int)uVar48 * 2;
                uVar44 = (int)uVar49 + 2 + (int)uVar48;
              }
              uVar45 = uVar53;
              if (uVar44 - 1 < param_5) {
                param_3[(longlong)(int)uVar44 + -1] =
                     *(byte *)(lVar28 + (int)uVar44 + -1 + lStack_78);
                uVar45 = uVar44;
              }
            }
            else {
              if (((longlong)uVar46 < 0x10) || ((longlong)uVar46 < lVar4)) {
                uVar48 = 0;
              }
              else {
                uVar48 = 0;
                uVar49 = uVar29;
                if (uVar29 != 0) {
                  do {
                    param_3[uVar48] = *(byte *)(uVar48 + lVar28 + lStack_78);
                    uVar48 = uVar48 + 1;
                  } while (uVar48 < uVar29);
                }
                do {
                  puVar8 = (undefined8 *)(uVar49 + lVar28 + lStack_78);
                  uVar16 = puVar8[1];
                  *(undefined8 *)(param_3 + uVar49) = *puVar8;
                  *(undefined8 *)(param_3 + uVar49 + 8) = uVar16;
                  uVar49 = uVar49 + 0x10;
                  uVar48 = uVar61;
                } while (uVar49 < uVar61);
              }
              uVar45 = param_5;
              if (uVar48 < uVar46) {
                do {
                  param_3[uVar48] = *(byte *)(uVar48 + lVar28 + lStack_78);
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar46);
              }
            }
          }
          lVar33 = (longlong)(int)uVar45;
          if ((int)(uint)param_6 < 1) {
            if (uVar35 != 0) goto LAB_140aa5a56;
LAB_140aa5948:
            uVar48 = uVar46;
            if ((int)uVar10 < 1) goto LAB_140aa5c80;
LAB_140aa5956:
            if ((longlong)uVar1 < 0x10) {
LAB_140aa8670:
              iVar62 = 0;
            }
            else {
              pbVar51 = param_3 + lVar33;
              uVar48 = (ulonglong)pbVar51 & 0xf;
              if (uVar48 != 0) {
                uVar48 = 0x10 - uVar48;
              }
              if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa8670;
              iVar62 = iVar18 - (iVar18 - (int)uVar48 & 0xfU);
              uVar49 = 0;
              if (uVar48 != 0) {
                do {
                  pbVar51[uVar49] = param_8;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar48);
              }
              do {
                *(undefined1 (*) [16])(pbVar51 + uVar48) = auVar15;
                uVar48 = uVar48 + 0x10;
              } while (uVar48 < (ulonglong)(longlong)iVar62);
              uVar45 = (int)lVar33 + iVar62;
            }
            uVar48 = (ulonglong)iVar62;
            if (uVar48 < uVar1) {
              do {
                param_3[uVar48 + lVar33] = param_8;
                uVar48 = uVar48 + 1;
              } while (uVar48 < uVar1);
              uVar45 = (int)uVar48 + (int)lVar33;
            }
LAB_140aa5c4e:
            uVar48 = uVar46;
            if ((int)(uint)param_6 < 3) goto LAB_140aa5c80;
          }
          else {
            if (uVar52 < 7) {
LAB_140aa583d:
              iVar62 = 1;
              uVar53 = uVar45;
              if (uVar67 != 0) {
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  param_3[uVar49 * 2 + lVar33] = *(byte *)(param_1 + lStack_78 + uVar49 * 2);
                  param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(param_1 + lStack_78 + 1 + uVar49 * 2)
                  ;
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar69);
                uVar53 = uVar45 + (int)uVar48 * 2;
                iVar62 = (int)uVar49 + 2 + (int)uVar48;
              }
              if (iVar62 - 1U < uVar52) {
                param_3[(longlong)iVar62 + -1 + lVar33] =
                     *(byte *)(param_1 + iVar62 + -1 + lStack_78);
                uVar53 = uVar45 + iVar62;
              }
            }
            else {
              pbVar51 = param_3 + lVar33;
              lVar41 = param_1 + lStack_78;
              if (((longlong)pbVar51 - lVar41 < (longlong)(ulonglong)uVar52) &&
                 (-((longlong)pbVar51 - lVar41) < (longlong)(ulonglong)uVar52)) goto LAB_140aa583d;
              if (uVar52 < 0x10) {
LAB_140aa8669:
                uVar49 = 0;
              }
              else {
                uVar48 = (ulonglong)pbVar51 & 0xf;
                if ((int)uVar48 != 0) {
                  uVar48 = (ulonglong)(0x10 - (int)uVar48);
                }
                iVar62 = (int)uVar48;
                if (uVar52 < iVar62 + 0x10U) goto LAB_140aa8669;
                uVar49 = 0;
                if (iVar62 != 0) {
                  do {
                    pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar48);
                }
                uVar49 = (ulonglong)(int)(uVar52 - (uVar52 - iVar62 & 0xf));
                do {
                  uVar16 = ((undefined8 *)(uVar48 + lVar41))[1];
                  *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar41);
                  *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar49);
              }
              for (; uVar49 < uVar55; uVar49 = uVar49 + 1) {
                pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
              }
              uVar53 = uVar45 + uVar52;
            }
            uVar45 = uVar53;
            lVar33 = (longlong)(int)uVar45;
            if ((int)(uint)param_6 < 3) {
              if (uVar35 == 0) goto LAB_140aa5948;
LAB_140aa5a56:
              uVar48 = uVar46;
              if ((int)uVar10 < 1) goto LAB_140aa5c80;
LAB_140aa5a64:
              iVar62 = (int)lVar33;
              if ((int)uVar10 < 7) {
LAB_140aa5bbf:
                iVar63 = 1;
                if (uVar38 != 0) {
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar22 + lStack_78 + uVar49 * 2);
                    param_3[uVar49 * 2 + lVar33 + 1] =
                         *(byte *)(lVar22 + lStack_78 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar40);
                  uVar45 = iVar62 + (int)uVar48 * 2;
                  iVar63 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (iVar63 - 1U < uVar10) {
                  param_3[(longlong)iVar63 + -1 + lVar33] =
                       *(byte *)(lVar22 + iVar63 + -1 + lStack_78);
                  uVar45 = iVar62 + iVar63;
                }
              }
              else {
                pbVar51 = param_3 + lVar33;
                lVar41 = lVar22 + lStack_78;
                if (((longlong)pbVar51 - lVar41 < (longlong)(2 - uVar46)) &&
                   (-((longlong)pbVar51 - lVar41) < (longlong)(2 - uVar46))) goto LAB_140aa5bbf;
                if ((longlong)uVar1 < 0x10) {
LAB_140aa8678:
                  uVar49 = 0;
                }
                else {
                  uVar48 = (ulonglong)pbVar51 & 0xf;
                  if (uVar48 != 0) {
                    uVar48 = 0x10 - uVar48;
                  }
                  if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa8678;
                  uVar50 = 0;
                  uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                  if (uVar48 != 0) {
                    do {
                      pbVar51[uVar50] = *(byte *)(uVar50 + lVar41);
                      uVar50 = uVar50 + 1;
                    } while (uVar50 < uVar48);
                  }
                  do {
                    uVar16 = ((undefined8 *)(uVar48 + lVar41))[1];
                    *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar41);
                    *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar49);
                }
                for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                  pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
                }
                uVar45 = iVar62 + 2 + iVar57;
              }
              goto LAB_140aa5c4e;
            }
            uVar45 = uVar45 + 2;
            param_3[lVar33] = *(byte *)(lStack_78 + -2 + lVar22);
            param_3[lVar33 + 1] = *(byte *)(lStack_78 + -1 + lVar22);
            lVar33 = (longlong)(int)uVar45;
            if (uVar35 == 0) {
              if (0 < (int)uVar10) goto LAB_140aa5956;
            }
            else if (0 < (int)uVar10) goto LAB_140aa5a64;
          }
          uVar48 = (int)uVar45 - lVar2;
        }
        else {
LAB_140aa4cff:
          if (uVar53 == 1) {
            uVar53 = 0;
            lVar33 = lVar39 * uVar21;
            bVar14 = *(byte *)(param_1 + lVar33);
            uVar45 = 0;
            if (uVar65 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar46 < 0x10) || ((longlong)uVar46 < lVar4)) {
                  uVar48 = 0;
                }
                else {
                  uVar48 = 0;
                  if (uVar29 != 0) {
                    do {
                      param_3[uVar48] = bVar14;
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar29);
                  }
                  auVar70 = vpunpcklbw_avx(ZEXT116(bVar14),ZEXT116(bVar14));
                  auVar70 = vpunpcklwd_avx(auVar70,auVar70);
                  auVar70 = vpunpckldq_avx(auVar70,auVar70);
                  auVar70 = vpunpcklqdq_avx(auVar70,auVar70);
                  uVar49 = uVar29;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar49) = auVar70;
                    uVar49 = uVar49 + 0x10;
                    uVar48 = uVar61;
                    uVar53 = uVar58;
                  } while (uVar49 < uVar61);
                }
                uVar45 = uVar53;
                if (uVar48 < uVar46) {
                  do {
                    param_3[uVar48] = bVar14;
                    uVar48 = uVar48 + 1;
                  } while (uVar48 < uVar46);
                  uVar45 = (uint)uVar48;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar41 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar33),
                  lVar41 < (longlong)uVar46 && (-lVar41 < (longlong)uVar46)))) {
                uVar44 = 1;
                if (uVar66 != 0) {
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    param_3[uVar49 * 2] = *(byte *)(lVar28 + lVar33 + uVar49 * 2);
                    param_3[uVar49 * 2 + 1] = *(byte *)(lVar28 + lVar33 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar68);
                  uVar53 = (int)uVar48 * 2;
                  uVar44 = (int)uVar49 + 2 + (int)uVar48;
                }
                uVar45 = uVar53;
                if (uVar44 - 1 < param_5) {
                  param_3[(longlong)(int)uVar44 + -1] =
                       *(byte *)(lVar28 + (int)uVar44 + -1 + lVar33);
                  uVar45 = uVar44;
                }
              }
              else {
                if (((longlong)uVar46 < 0x10) || ((longlong)uVar46 < lVar4)) {
                  uVar48 = 0;
                }
                else {
                  uVar48 = 0;
                  uVar49 = uVar29;
                  if (uVar29 != 0) {
                    do {
                      param_3[uVar48] = *(byte *)(uVar48 + lVar33 + lVar28);
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar29);
                  }
                  do {
                    puVar8 = (undefined8 *)(uVar49 + lVar33 + lVar28);
                    uVar16 = puVar8[1];
                    *(undefined8 *)(param_3 + uVar49) = *puVar8;
                    *(undefined8 *)(param_3 + uVar49 + 8) = uVar16;
                    uVar49 = uVar49 + 0x10;
                    uVar48 = uVar61;
                  } while (uVar49 < uVar61);
                }
                uVar45 = param_5;
                if (uVar48 < uVar46) {
                  do {
                    param_3[uVar48] = *(byte *)(uVar48 + lVar28 + lVar33);
                    uVar48 = uVar48 + 1;
                  } while (uVar48 < uVar46);
                }
              }
            }
            lVar41 = (longlong)(int)uVar45;
            if (0 < (int)(uint)param_6) {
              if (uVar52 < 7) {
LAB_140aa825f:
                iVar62 = 1;
                uVar53 = uVar45;
                if (uVar67 != 0) {
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    param_3[uVar49 * 2 + lVar41] = *(byte *)(param_1 + lVar33 + uVar49 * 2);
                    param_3[uVar49 * 2 + lVar41 + 1] = *(byte *)(param_1 + lVar33 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar69);
                  uVar53 = uVar45 + (int)uVar48 * 2;
                  iVar62 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (iVar62 - 1U < uVar52) {
                  param_3[(longlong)iVar62 + -1 + lVar41] =
                       *(byte *)(param_1 + iVar62 + -1 + lVar33);
                  uVar53 = uVar45 + iVar62;
                }
              }
              else {
                pbVar51 = param_3 + lVar41;
                lVar19 = param_1 + lVar33;
                if (((longlong)pbVar51 - lVar19 < (longlong)(ulonglong)uVar52) &&
                   (-((longlong)pbVar51 - lVar19) < (longlong)(ulonglong)uVar52))
                goto LAB_140aa825f;
                if (uVar52 < 0x10) {
LAB_140aa8643:
                  uVar49 = 0;
                }
                else {
                  uVar48 = (ulonglong)pbVar51 & 0xf;
                  if ((int)uVar48 != 0) {
                    uVar48 = (ulonglong)(0x10 - (int)uVar48);
                  }
                  iVar62 = (int)uVar48;
                  if (uVar52 < iVar62 + 0x10U) goto LAB_140aa8643;
                  uVar49 = 0;
                  if (iVar62 != 0) {
                    do {
                      pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar48);
                  }
                  uVar49 = (ulonglong)(int)(uVar52 - (uVar52 - iVar62 & 0xf));
                  do {
                    uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                    *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                    *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar49);
                }
                for (; uVar49 < uVar55; uVar49 = uVar49 + 1) {
                  pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                }
                uVar53 = uVar45 + uVar52;
              }
              uVar45 = uVar53;
              lVar41 = (longlong)(int)uVar45;
              if (2 < (int)(uint)param_6) {
                uVar45 = uVar45 + 2;
                param_3[lVar41] = *(byte *)(lVar22 + -2 + lVar33);
                param_3[lVar41 + 1] = *(byte *)(lVar22 + -1 + lVar33);
                lVar41 = (longlong)(int)uVar45;
              }
            }
            bVar14 = *(byte *)(lVar22 + -1 + lVar33);
            iVar62 = (int)lVar41;
            if (uVar35 == 0) {
              if (0 < (int)uVar10) {
                if ((longlong)uVar1 < 0x10) {
LAB_140aa864b:
                  iVar63 = 0;
                }
                else {
                  pbVar51 = param_3 + lVar41;
                  uVar48 = (ulonglong)pbVar51 & 0xf;
                  if (uVar48 != 0) {
                    uVar48 = 0x10 - uVar48;
                  }
                  if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa864b;
                  iVar63 = iVar18 - (iVar18 - (int)uVar48 & 0xfU);
                  uVar49 = 0;
                  if (uVar48 != 0) {
                    do {
                      pbVar51[uVar49] = bVar14;
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar48);
                  }
                  auVar70 = vpunpcklbw_avx(ZEXT116(bVar14),ZEXT116(bVar14));
                  auVar70 = vpunpcklwd_avx(auVar70,auVar70);
                  auVar70 = vpunpckldq_avx(auVar70,auVar70);
                  auVar70 = vpunpcklqdq_avx(auVar70,auVar70);
                  do {
                    *(undefined1 (*) [16])(pbVar51 + uVar48) = auVar70;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < (ulonglong)(longlong)iVar63);
                  uVar45 = iVar62 + iVar63;
                }
                uVar48 = (ulonglong)iVar63;
                if (uVar1 <= uVar48) goto LAB_140aa85ee;
                do {
                  param_3[uVar48 + lVar41] = bVar14;
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar1);
                lVar41 = (longlong)((int)uVar48 + iVar62);
              }
            }
            else {
              if ((int)uVar10 < 1) goto LAB_140aa85f1;
              if (6 < (int)uVar10) {
                pbVar51 = param_3 + lVar41;
                lVar19 = lVar33 + lVar22;
                if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar19) ||
                   ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar19))) {
                  if ((longlong)uVar1 < 0x10) {
LAB_140aa8653:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = (ulonglong)pbVar51 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa8653;
                    uVar50 = 0;
                    uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        pbVar51[uVar50] = *(byte *)(uVar50 + lVar19);
                        uVar50 = uVar50 + 1;
                      } while (uVar50 < uVar48);
                    }
                    do {
                      uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                      *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                      *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                      uVar48 = uVar48 + 0x10;
                    } while (uVar48 < uVar49);
                  }
                  for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                    pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                  }
                  lVar41 = (longlong)(iVar62 + 2 + iVar57);
                  goto LAB_140aa85f1;
                }
              }
              iVar63 = 1;
              if (uVar38 != 0) {
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  param_3[uVar49 * 2 + lVar41] = *(byte *)(lVar33 + lVar22 + uVar49 * 2);
                  param_3[uVar49 * 2 + lVar41 + 1] = *(byte *)(lVar33 + lVar22 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar40);
                uVar45 = iVar62 + (int)uVar48 * 2;
                iVar63 = (int)uVar49 + 2 + (int)uVar48;
              }
              if (iVar63 - 1U < uVar10) {
                param_3[(longlong)iVar63 + -1 + lVar41] = *(byte *)(lVar22 + iVar63 + -1 + lVar33);
                lVar41 = (longlong)(iVar63 + iVar62);
                goto LAB_140aa85f1;
              }
LAB_140aa85ee:
              lVar41 = (longlong)(int)uVar45;
            }
LAB_140aa85f1:
            uVar48 = lVar41 - lVar2;
            if ((int)(uint)param_6 < 3) {
              uVar48 = uVar46;
            }
          }
          else if (uVar53 == 2) {
            uVar49 = uVar46;
            if (0 < (int)(uint)param_6) {
              if (uVar52 < 7) {
LAB_140aa6e7d:
                iVar62 = 1;
                uVar53 = param_5;
                if (uVar67 != 0) {
                  lVar33 = lVar39 * uVar21 + param_1;
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    pbVar7[uVar49 * 2] = *(byte *)(lVar33 + uVar49 * 2);
                    pbVar7[uVar49 * 2 + 1] = *(byte *)(lVar33 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar69);
                  uVar53 = param_5 + (int)uVar48 * 2;
                  iVar62 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (iVar62 - 1U < uVar52) {
                  pbVar7[(longlong)iVar62 + -1] = *(byte *)(param_1 + iVar62 + -1 + lVar39 * uVar21)
                  ;
                  uVar53 = param_5 + iVar62;
                }
              }
              else {
                lVar33 = lVar39 * uVar21 + param_1;
                if (((longlong)pbVar7 - lVar33 < (longlong)(ulonglong)uVar52) &&
                   (-((longlong)pbVar7 - lVar33) < (longlong)(ulonglong)uVar52)) goto LAB_140aa6e7d;
                if ((uVar52 < 0x10) || (uVar52 < iVar31 + 0x10U)) {
                  iVar62 = 0;
                }
                else {
                  uVar49 = 0;
                  uVar48 = uVar32;
                  if (iVar31 != 0) {
                    do {
                      pbVar7[uVar49] = *(byte *)(uVar49 + lVar33);
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar32);
                  }
                  do {
                    uVar16 = ((undefined8 *)(uVar48 + lVar33))[1];
                    *(undefined8 *)(pbVar7 + uVar48) = *(undefined8 *)(uVar48 + lVar33);
                    *(undefined8 *)(pbVar7 + uVar48 + 8) = uVar16;
                    uVar48 = uVar48 + 0x10;
                    iVar62 = iVar43;
                  } while (uVar48 < uVar47);
                }
                for (uVar48 = (ulonglong)iVar62; uVar53 = param_5 + uVar52, uVar48 < uVar55;
                    uVar48 = uVar48 + 1) {
                  pbVar7[uVar48] = *(byte *)(uVar48 + lVar33);
                }
              }
              uVar49 = (ulonglong)(int)uVar53;
              if (2 < (int)(uint)param_6) {
                lVar33 = lVar39 * uVar21;
                if (uVar65 == 0) {
                  if (-1 < (int)uVar37) {
                    if (6 < (int)param_5) {
                      pbVar51 = param_3 + ((uVar46 - 1) - (lVar33 + -1 + lVar22));
                      if (((longlong)uVar46 < (longlong)pbVar51) ||
                         ((byte *)-uVar46 != pbVar51 && (longlong)uVar46 <= -(longlong)pbVar51)) {
                        if (((longlong)uVar23 < 0x10) || ((longlong)uVar23 < lVar5)) {
                          uVar48 = 0;
                        }
                        else {
                          uVar48 = 0;
                          lVar41 = (lVar33 + lVar22) - uVar46;
                          uVar50 = uVar34;
                          if (uVar34 != 0) {
                            do {
                              param_3[uVar48] = *(byte *)(uVar48 + lVar41);
                              uVar48 = uVar48 + 1;
                            } while (uVar48 < uVar34);
                          }
                          do {
                            puVar8 = (undefined8 *)(uVar50 + lVar41);
                            uVar16 = puVar8[1];
                            *(undefined8 *)(param_3 + uVar50) = *puVar8;
                            *(undefined8 *)(param_3 + uVar50 + 8) = uVar16;
                            uVar50 = uVar50 + 0x10;
                            uVar48 = uVar24;
                          } while (uVar50 < uVar24);
                        }
                        if (uVar48 < uVar23) {
                          do {
                            param_3[uVar48] = *(byte *)(uVar48 + ((lVar33 + lVar22) - uVar46));
                            uVar48 = uVar48 + 1;
                          } while (uVar48 < uVar23);
                        }
                        goto LAB_140aa72f9;
                      }
                    }
                    iVar62 = 1;
                    lVar41 = 0;
                    if (uVar66 != 0) {
                      uVar48 = 0;
                      do {
                        uVar50 = uVar48;
                        uVar48 = uVar50 + 1;
                        pbVar7[lVar41 + -1] = *(byte *)(lVar41 + -1 + lVar33 + lVar22);
                        pbVar7[lVar41 + -2] = *(byte *)(lVar41 + -2 + lVar33 + lVar22);
                        lVar41 = lVar41 + -2;
                      } while (uVar48 < uVar68);
                      iVar62 = (int)uVar50 + 2 + (int)uVar48;
                    }
                    if (iVar62 - 1U < param_5) {
                      pbVar7[-(longlong)iVar62] = *(byte *)((lVar33 + lVar22) - (longlong)iVar62);
                    }
                  }
                }
                else if (-1 < (int)uVar37) {
                  if (6 < (int)param_5) {
                    pbVar51 = param_3 + ((uVar46 - 1) - (param_1 + -1 + lVar33));
                    if (((longlong)uVar46 < (longlong)pbVar51) ||
                       ((byte *)-uVar46 != pbVar51 && (longlong)uVar46 <= -(longlong)pbVar51)) {
                      if (((longlong)uVar23 < 0x10) || ((longlong)uVar23 < lVar5)) {
                        uVar48 = 0;
                      }
                      else {
                        uVar48 = 0;
                        lVar41 = (param_1 + lVar33) - uVar46;
                        uVar50 = uVar34;
                        if (uVar34 != 0) {
                          do {
                            param_3[uVar48] = *(byte *)(uVar48 + lVar41);
                            uVar48 = uVar48 + 1;
                          } while (uVar48 < uVar34);
                        }
                        do {
                          puVar8 = (undefined8 *)(uVar50 + lVar41);
                          uVar16 = puVar8[1];
                          *(undefined8 *)(param_3 + uVar50) = *puVar8;
                          *(undefined8 *)(param_3 + uVar50 + 8) = uVar16;
                          uVar50 = uVar50 + 0x10;
                          uVar48 = uVar24;
                        } while (uVar50 < uVar24);
                      }
                      if (uVar48 < uVar23) {
                        do {
                          param_3[uVar48] = *(byte *)(uVar48 + ((param_1 + lVar33) - uVar46));
                          uVar48 = uVar48 + 1;
                        } while (uVar48 < uVar23);
                      }
                      goto LAB_140aa72f9;
                    }
                  }
                  iVar62 = 1;
                  lVar41 = 0;
                  if (uVar66 != 0) {
                    uVar48 = 0;
                    do {
                      uVar50 = uVar48;
                      uVar48 = uVar50 + 1;
                      pbVar7[lVar41 + -1] = *(byte *)(lVar41 + -1 + param_1 + lVar33);
                      pbVar7[lVar41 + -2] = *(byte *)(lVar41 + -2 + param_1 + lVar33);
                      lVar41 = lVar41 + -2;
                    } while (uVar48 < uVar68);
                    iVar62 = (int)uVar50 + 2 + (int)uVar48;
                  }
                  if (iVar62 - 1U < param_5) {
                    pbVar7[-(longlong)iVar62] = *(byte *)((param_1 + lVar33) - (longlong)iVar62);
                  }
                }
LAB_140aa72f9:
                param_3[uVar49] = *(byte *)(lVar22 + -2 + lVar33);
                param_3[uVar49 + 1] = *(byte *)(lVar22 + -1 + lVar33);
                iVar63 = uVar53 + 2;
                lVar41 = (longlong)iVar63;
                iVar62 = iVar63;
                if (uVar35 == 0) {
                  if (0 < (int)uVar10) {
                    if (6 < (int)uVar10) {
                      pbVar51 = param_3 + lVar41;
                      lVar19 = param_1 + lVar33;
                      if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar19) ||
                         ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar19))) {
                        if ((longlong)uVar1 < 0x10) {
LAB_140aa7e6d:
                          uVar49 = 0;
                        }
                        else {
                          uVar48 = (ulonglong)pbVar51 & 0xf;
                          if (uVar48 != 0) {
                            uVar48 = 0x10 - uVar48;
                          }
                          if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa7e6d;
                          uVar50 = 0;
                          uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                          if (uVar48 != 0) {
                            do {
                              pbVar51[uVar50] = *(byte *)(uVar50 + lVar19);
                              uVar50 = uVar50 + 1;
                            } while (uVar50 < uVar48);
                          }
                          do {
                            uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                            *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                            *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                            uVar48 = uVar48 + 0x10;
                          } while (uVar48 < uVar49);
                        }
                        for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                          pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                        }
                        lVar41 = (longlong)(int)(iVar57 + 4 + uVar53);
                        goto LAB_140aa76d7;
                      }
                    }
                    iVar59 = 1;
                    if (uVar38 != 0) {
                      uVar48 = 0;
                      do {
                        uVar49 = uVar48;
                        param_3[uVar49 * 2 + lVar41] = *(byte *)(param_1 + lVar33 + uVar49 * 2);
                        param_3[uVar49 * 2 + lVar41 + 1] =
                             *(byte *)(param_1 + lVar33 + 1 + uVar49 * 2);
                        uVar48 = uVar49 + 1;
                      } while (uVar48 < uVar40);
                      iVar62 = (int)uVar48 * 2 + 2 + uVar53;
                      iVar59 = (int)uVar49 + 2 + (int)uVar48;
                    }
                    if (uVar10 <= iVar59 - 1U) goto LAB_140aa76d4;
                    param_3[(longlong)iVar59 + -1 + lVar41] =
                         *(byte *)(param_1 + iVar59 + -1 + lVar33);
                    lVar41 = (longlong)(iVar59 + iVar63);
                  }
                }
                else {
                  if ((int)uVar10 < 1) goto LAB_140aa76d7;
                  if (6 < (int)uVar10) {
                    pbVar51 = param_3 + lVar41;
                    lVar19 = lVar33 + lVar22;
                    if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar19) ||
                       ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar19))) {
                      if ((longlong)uVar1 < 0x10) {
LAB_140aa7e74:
                        uVar49 = 0;
                      }
                      else {
                        uVar48 = (ulonglong)pbVar51 & 0xf;
                        if (uVar48 != 0) {
                          uVar48 = 0x10 - uVar48;
                        }
                        if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa7e74;
                        uVar50 = 0;
                        uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                        if (uVar48 != 0) {
                          do {
                            pbVar51[uVar50] = *(byte *)(uVar50 + lVar19);
                            uVar50 = uVar50 + 1;
                          } while (uVar50 < uVar48);
                        }
                        do {
                          uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                          *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                          *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                        pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                      }
                      lVar41 = (longlong)(int)(iVar57 + 4 + uVar53);
                      goto LAB_140aa76d7;
                    }
                  }
                  iVar59 = 1;
                  if (uVar38 != 0) {
                    uVar48 = 0;
                    do {
                      uVar49 = uVar48;
                      param_3[uVar49 * 2 + lVar41] = *(byte *)(lVar33 + lVar22 + uVar49 * 2);
                      param_3[uVar49 * 2 + lVar41 + 1] = *(byte *)(lVar33 + lVar22 + 1 + uVar49 * 2)
                      ;
                      uVar48 = uVar49 + 1;
                    } while (uVar48 < uVar40);
                    iVar62 = (int)uVar48 * 2 + 2 + uVar53;
                    iVar59 = (int)uVar49 + 2 + (int)uVar48;
                  }
                  if (iVar59 - 1U < uVar10) {
                    param_3[(longlong)iVar59 + -1 + lVar41] =
                         *(byte *)(lVar22 + iVar59 + -1 + lVar33);
                    lVar41 = (longlong)(iVar59 + iVar63);
                    goto LAB_140aa76d7;
                  }
LAB_140aa76d4:
                  lVar41 = (longlong)iVar62;
                }
LAB_140aa76d7:
                uVar48 = lVar41 - lVar2;
                goto LAB_140aa5c80;
              }
            }
            if (uVar65 == 0) {
              if (-1 < (int)uVar37) {
                if (((int)param_5 < 7) ||
                   ((pbVar51 = param_3 + ((uVar46 - 1) - (longlong)(pbVar7 + lVar64 + -1)),
                    (longlong)pbVar51 <= (longlong)uVar46 &&
                    ((byte *)-uVar46 == pbVar51 || -(longlong)pbVar51 < (longlong)uVar46)))) {
                  iVar62 = 1;
                  lVar33 = 0;
                  uVar48 = 0;
                  if (uVar66 != 0) {
                    do {
                      uVar50 = uVar48;
                      uVar48 = uVar50 + 1;
                      pbVar7[lVar33 + -1] = pbVar7[lVar33 + -1 + lVar64];
                      pbVar7[lVar33 + -2] = pbVar7[lVar33 + -2 + lVar64];
                      lVar33 = lVar33 + -2;
                    } while (uVar48 < uVar68);
                    iVar62 = (int)uVar50 + 2 + (int)uVar48;
                  }
                  if (iVar62 - 1U < param_5) {
                    pbVar7[-(longlong)iVar62] = pbVar7[lVar64 - iVar62];
                  }
                }
                else {
                  if (((longlong)uVar23 < 0x10) || ((longlong)uVar23 < lVar5)) {
                    uVar48 = 0;
                  }
                  else {
                    uVar48 = 0;
                    uVar50 = uVar34;
                    if (uVar34 != 0) {
                      do {
                        param_3[uVar48] = pbVar7[uVar48 + lVar17];
                        uVar48 = uVar48 + 1;
                      } while (uVar48 < uVar34);
                    }
                    do {
                      uVar16 = *(undefined8 *)(pbVar7 + uVar50 + lVar17 + 8);
                      *(undefined8 *)(param_3 + uVar50) = *(undefined8 *)(pbVar7 + uVar50 + lVar17);
                      *(undefined8 *)(param_3 + uVar50 + 8) = uVar16;
                      uVar50 = uVar50 + 0x10;
                      uVar48 = uVar24;
                    } while (uVar50 < uVar24);
                  }
                  for (; uVar48 < uVar23; uVar48 = uVar48 + 1) {
                    param_3[uVar48] = pbVar7[uVar48 + lVar17];
                  }
                }
              }
            }
            else if (-1 < (int)uVar37) {
              if (6 < (int)param_5) {
                lVar33 = param_1 + lVar39 * uVar21;
                pbVar51 = param_3 + ((uVar46 - 1) - (param_1 + -1 + lVar39 * uVar21));
                if (((longlong)uVar46 < (longlong)pbVar51) ||
                   ((byte *)-uVar46 != pbVar51 && (longlong)uVar46 <= -(longlong)pbVar51)) {
                  if (((longlong)uVar23 < 0x10) || ((longlong)uVar23 < lVar5)) {
                    uVar48 = 0;
                  }
                  else {
                    uVar48 = 0;
                    lVar41 = lVar33 - uVar46;
                    uVar50 = uVar34;
                    if (uVar34 != 0) {
                      do {
                        param_3[uVar48] = *(byte *)(uVar48 + lVar41);
                        uVar48 = uVar48 + 1;
                      } while (uVar48 < uVar34);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar50 + lVar41);
                      uVar16 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar50) = *puVar8;
                      *(undefined8 *)(param_3 + uVar50 + 8) = uVar16;
                      uVar50 = uVar50 + 0x10;
                      uVar48 = uVar24;
                    } while (uVar50 < uVar24);
                  }
                  if (uVar48 < uVar23) {
                    do {
                      param_3[uVar48] = *(byte *)(uVar48 + (lVar33 - uVar46));
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar23);
                  }
                  goto LAB_140aa7aba;
                }
              }
              iVar62 = 1;
              lVar33 = 0;
              if (uVar66 != 0) {
                lVar41 = lVar39 * uVar21 + param_1;
                uVar48 = 0;
                do {
                  uVar50 = uVar48;
                  uVar48 = uVar50 + 1;
                  pbVar7[lVar33 + -1] = *(byte *)(lVar33 + -1 + lVar41);
                  pbVar7[lVar33 + -2] = *(byte *)(lVar33 + -2 + lVar41);
                  lVar33 = lVar33 + -2;
                } while (uVar48 < uVar68);
                iVar62 = (int)uVar50 + 2 + (int)uVar48;
              }
              if (iVar62 - 1U < param_5) {
                pbVar7[-(longlong)iVar62] = *(byte *)((param_1 - iVar62) + lVar39 * uVar21);
              }
            }
LAB_140aa7aba:
            if (uVar35 == 0) {
              uVar48 = uVar46;
              if ((int)uVar10 < 1) goto LAB_140aa5c80;
              if (6 < (int)uVar10) {
                pbVar51 = param_3 + uVar49;
                pbVar9 = param_3 + (uVar49 - lVar64);
                if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - (longlong)pbVar9) ||
                   ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - (longlong)pbVar9))) {
                  if ((longlong)uVar1 < 0x10) {
LAB_140aa7e8c:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = (ulonglong)pbVar51 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa7e8c;
                    uVar50 = 0;
                    uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        pbVar51[uVar50] = pbVar9[uVar50];
                        uVar50 = uVar50 + 1;
                      } while (uVar50 < uVar48);
                    }
                    do {
                      uVar16 = *(undefined8 *)(pbVar9 + uVar48 + 8);
                      *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(pbVar9 + uVar48);
                      *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                      uVar48 = uVar48 + 0x10;
                    } while (uVar48 < uVar49);
                  }
                  for (; uVar48 = uVar46, uVar49 < uVar1; uVar49 = uVar49 + 1) {
                    pbVar51[uVar49] = pbVar9[uVar49];
                  }
                  goto LAB_140aa5c80;
                }
              }
              iVar62 = 1;
              if (uVar38 != 0) {
                uVar48 = 0;
                do {
                  uVar50 = uVar48;
                  param_3[uVar50 * 2 + uVar49] = param_3[uVar50 * 2 + (uVar49 - lVar64)];
                  param_3[uVar50 * 2 + uVar49 + 1] = param_3[uVar50 * 2 + (uVar49 - lVar64) + 1];
                  uVar48 = uVar50 + 1;
                } while (uVar48 < uVar40);
                iVar62 = (int)uVar50 + 2 + (int)uVar48;
              }
              uVar48 = uVar46;
              if (iVar62 - 1U < uVar10) {
                param_3[(longlong)iVar62 + -1 + uVar49] =
                     param_3[(longlong)iVar62 + -1 + (uVar49 - lVar64)];
              }
            }
            else {
              uVar48 = uVar46;
              if ((int)uVar10 < 1) goto LAB_140aa5c80;
              if (6 < (int)uVar10) {
                pbVar51 = param_3 + uVar49;
                lVar33 = lVar39 * uVar21 + lVar22;
                if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar33) ||
                   ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar33))) {
                  if ((longlong)uVar1 < 0x10) {
LAB_140aa7e94:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = (ulonglong)pbVar51 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa7e94;
                    uVar50 = 0;
                    uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        pbVar51[uVar50] = *(byte *)(uVar50 + lVar33);
                        uVar50 = uVar50 + 1;
                      } while (uVar50 < uVar48);
                    }
                    do {
                      uVar16 = ((undefined8 *)(uVar48 + lVar33))[1];
                      *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar33);
                      *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                      uVar48 = uVar48 + 0x10;
                    } while (uVar48 < uVar49);
                  }
                  for (; uVar48 = uVar46, uVar49 < uVar1; uVar49 = uVar49 + 1) {
                    pbVar51[uVar49] = *(byte *)(uVar49 + lVar33);
                  }
                  goto LAB_140aa5c80;
                }
              }
              iVar62 = 1;
              if (uVar38 != 0) {
                lVar33 = lVar39 * uVar21 + lVar22;
                uVar48 = 0;
                do {
                  uVar50 = uVar48;
                  param_3[uVar50 * 2 + uVar49] = *(byte *)(lVar33 + uVar50 * 2);
                  param_3[uVar50 * 2 + uVar49 + 1] = *(byte *)(lVar33 + 1 + uVar50 * 2);
                  uVar48 = uVar50 + 1;
                } while (uVar48 < uVar40);
                iVar62 = (int)uVar50 + 2 + (int)uVar48;
              }
              uVar48 = uVar46;
              if (iVar62 - 1U < uVar10) {
                param_3[(longlong)iVar62 + -1 + uVar49] =
                     *(byte *)(lVar22 + iVar62 + -1 + lVar39 * uVar21);
              }
            }
          }
          else if (uVar53 == 3) {
            uVar49 = uVar46;
            if (0 < (int)(uint)param_6) {
              if (uVar52 < 7) {
LAB_140aa619d:
                iVar62 = 1;
                uVar53 = param_5;
                if (uVar67 != 0) {
                  lVar33 = lVar39 * uVar21 + param_1;
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    pbVar7[uVar49 * 2] = *(byte *)(lVar33 + uVar49 * 2);
                    pbVar7[uVar49 * 2 + 1] = *(byte *)(lVar33 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar69);
                  uVar53 = param_5 + (int)uVar48 * 2;
                  iVar62 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (iVar62 - 1U < uVar52) {
                  pbVar7[(longlong)iVar62 + -1] = *(byte *)(param_1 + iVar62 + -1 + lVar39 * uVar21)
                  ;
                  uVar53 = param_5 + iVar62;
                }
              }
              else {
                lVar33 = lVar39 * uVar21 + param_1;
                if (((longlong)pbVar7 - lVar33 < (longlong)(ulonglong)uVar52) &&
                   (-((longlong)pbVar7 - lVar33) < (longlong)(ulonglong)uVar52)) goto LAB_140aa619d;
                if ((uVar52 < 0x10) || (uVar52 < iVar31 + 0x10U)) {
                  uVar48 = 0;
                }
                else {
                  uVar48 = 0;
                  uVar49 = uVar32;
                  if (iVar31 != 0) {
                    do {
                      pbVar7[uVar48] = *(byte *)(uVar48 + lVar33);
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar32);
                  }
                  do {
                    uVar16 = ((undefined8 *)(uVar49 + lVar33))[1];
                    *(undefined8 *)(pbVar7 + uVar49) = *(undefined8 *)(uVar49 + lVar33);
                    *(undefined8 *)(pbVar7 + uVar49 + 8) = uVar16;
                    uVar49 = uVar49 + 0x10;
                    uVar48 = uVar47;
                  } while (uVar49 < uVar47);
                }
                for (; uVar53 = param_5 + uVar52, uVar48 < uVar55; uVar48 = uVar48 + 1) {
                  pbVar7[uVar48] = *(byte *)(uVar48 + lVar33);
                }
              }
              uVar49 = (ulonglong)(int)uVar53;
              if (2 < (int)(uint)param_6) {
                if (uVar65 == 0) {
                  if (-1 < (int)uVar37) {
                    iVar62 = 1;
                    lVar33 = 0;
                    if (uVar66 != 0) {
                      lVar41 = lVar39 * uVar21 + param_1 + uVar60;
                      uVar48 = 0;
                      do {
                        uVar50 = uVar48;
                        pbVar7[lVar33 + -1] = *(byte *)(lVar41 + uVar50 * 2);
                        uVar48 = uVar50 + 1;
                        pbVar7[lVar33 + -2] = *(byte *)(lVar41 + 1 + uVar50 * 2);
                        lVar33 = lVar33 + -2;
                      } while (uVar48 < uVar68);
                      iVar62 = (int)uVar50 + 2 + (int)uVar48;
                    }
                    if (iVar62 - 1U < param_5) {
                      pbVar7[-(longlong)iVar62] =
                           *(byte *)(param_1 + uVar60 + (longlong)iVar62 + -1 + lVar39 * uVar21);
                    }
                  }
                }
                else {
                  lVar33 = lVar39 * uVar21;
                  if (-1 < (int)uVar37) {
                    if (6 < (int)param_5) {
                      pbVar51 = param_3 + ((uVar46 - 1) - (param_1 + -1 + lVar33));
                      if (((longlong)uVar46 < (longlong)pbVar51) ||
                         ((byte *)-uVar46 != pbVar51 && (longlong)uVar46 <= -(longlong)pbVar51)) {
                        if (((longlong)uVar23 < 0x10) || ((longlong)uVar23 < lVar5)) {
                          uVar48 = 0;
                        }
                        else {
                          uVar48 = 0;
                          lVar41 = (param_1 + lVar33) - uVar46;
                          uVar50 = uVar34;
                          if (uVar34 != 0) {
                            do {
                              param_3[uVar48] = *(byte *)(uVar48 + lVar41);
                              uVar48 = uVar48 + 1;
                            } while (uVar48 < uVar34);
                          }
                          do {
                            puVar8 = (undefined8 *)(uVar50 + lVar41);
                            uVar16 = puVar8[1];
                            *(undefined8 *)(param_3 + uVar50) = *puVar8;
                            *(undefined8 *)(param_3 + uVar50 + 8) = uVar16;
                            uVar50 = uVar50 + 0x10;
                            uVar48 = uVar24;
                          } while (uVar50 < uVar24);
                        }
                        if (uVar48 < uVar23) {
                          do {
                            param_3[uVar48] = *(byte *)(uVar48 + ((param_1 + lVar33) - uVar46));
                            uVar48 = uVar48 + 1;
                          } while (uVar48 < uVar23);
                        }
                        goto LAB_140aa6518;
                      }
                    }
                    iVar62 = 1;
                    lVar41 = 0;
                    if (uVar66 != 0) {
                      uVar48 = 0;
                      do {
                        uVar50 = uVar48;
                        uVar48 = uVar50 + 1;
                        pbVar7[lVar41 + -1] = *(byte *)(lVar41 + -1 + param_1 + lVar33);
                        pbVar7[lVar41 + -2] = *(byte *)(lVar41 + -2 + param_1 + lVar33);
                        lVar41 = lVar41 + -2;
                      } while (uVar48 < uVar68);
                      iVar62 = (int)uVar50 + 2 + (int)uVar48;
                    }
                    if (iVar62 - 1U < param_5) {
                      pbVar7[-(longlong)iVar62] = *(byte *)((param_1 + lVar33) - (longlong)iVar62);
                    }
                  }
                }
LAB_140aa6518:
                lVar41 = lVar39 * uVar21;
                param_3[uVar49] = *(byte *)(lVar22 + -2 + lVar41);
                param_3[uVar49 + 1] = *(byte *)(lVar22 + -1 + lVar41);
                iVar63 = uVar53 + 2;
                lVar33 = (longlong)iVar63;
                iVar62 = iVar63;
                if (uVar35 == 0) {
                  if (0 < (int)uVar10) {
                    iVar59 = 1;
                    lVar19 = 0;
                    if (uVar38 != 0) {
                      lVar42 = (lVar22 - uVar60) + lVar41;
                      uVar48 = 0;
                      do {
                        uVar49 = uVar48;
                        param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar19 + -1 + lVar42);
                        lVar11 = lVar19 + -2;
                        lVar19 = lVar19 + -2;
                        param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(lVar11 + lVar42);
                        uVar48 = uVar49 + 1;
                      } while (uVar48 < uVar40);
                      iVar62 = (int)uVar48 * 2 + 2 + uVar53;
                      iVar59 = (int)uVar49 + 2 + (int)uVar48;
                    }
                    if (uVar10 <= iVar59 - 1U) goto LAB_140aa67d3;
                    param_3[(longlong)iVar59 + -1 + lVar33] =
                         *(byte *)((lVar41 + (lVar22 - uVar60)) - (longlong)iVar59);
                    lVar33 = (longlong)(iVar59 + iVar63);
                  }
                }
                else {
                  if ((int)uVar10 < 1) goto LAB_140aa67d6;
                  if (6 < (int)uVar10) {
                    pbVar51 = param_3 + lVar33;
                    lVar19 = lVar41 + lVar22;
                    if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar19) ||
                       ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar19))) {
                      if ((longlong)uVar1 < 0x10) {
LAB_140aa6d2e:
                        uVar49 = 0;
                      }
                      else {
                        uVar48 = (ulonglong)pbVar51 & 0xf;
                        if (uVar48 != 0) {
                          uVar48 = 0x10 - uVar48;
                        }
                        if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa6d2e;
                        uVar50 = 0;
                        uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                        if (uVar48 != 0) {
                          do {
                            pbVar51[uVar50] = *(byte *)(uVar50 + lVar19);
                            uVar50 = uVar50 + 1;
                          } while (uVar50 < uVar48);
                        }
                        do {
                          uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                          *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                          *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                        pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                      }
                      lVar33 = (longlong)(int)(iVar57 + 4 + uVar53);
                      goto LAB_140aa67d6;
                    }
                  }
                  iVar59 = 1;
                  if (uVar38 != 0) {
                    uVar48 = 0;
                    do {
                      uVar49 = uVar48;
                      param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar41 + lVar22 + uVar49 * 2);
                      param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(lVar41 + lVar22 + 1 + uVar49 * 2)
                      ;
                      uVar48 = uVar49 + 1;
                    } while (uVar48 < uVar40);
                    iVar62 = (int)uVar48 * 2 + 2 + uVar53;
                    iVar59 = (int)uVar49 + 2 + (int)uVar48;
                  }
                  if (iVar59 - 1U < uVar10) {
                    param_3[(longlong)iVar59 + -1 + lVar33] =
                         *(byte *)(lVar22 + iVar59 + -1 + lVar41);
                    lVar33 = (longlong)(iVar59 + iVar63);
                  }
                  else {
LAB_140aa67d3:
                    lVar33 = (longlong)iVar62;
                  }
                }
LAB_140aa67d6:
                uVar48 = lVar33 - lVar2;
                goto LAB_140aa5c80;
              }
            }
            uVar48 = (ulonglong)uVar37;
            if (uVar65 == 0) {
              uVar53 = uVar37;
              if (uVar35 == 0) {
                while (-1 < (int)uVar53) {
                  uVar53 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar49 = (ulonglong)(int)uVar48;
                    uVar48 = uVar49;
                    do {
                      if ((int)uVar48 < 0) break;
                      lVar33 = (longlong)(int)uVar53;
                      uVar53 = uVar53 + 1;
                      uVar48 = (ulonglong)((int)uVar48 - 1);
                      param_3[uVar49 - lVar33] = param_3[lVar33 + uVar60 + 1 + uVar49];
                    } while (uVar53 < uVar56);
                  }
                  uVar53 = (uint)uVar48;
                }
                uVar49 = 0;
                uVar48 = uVar46;
                iVar62 = iVar26;
                iVar63 = iVar26;
                iVar59 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar10;
                if ((int)param_5 < 2) {
                  do {
                    iVar54 = iVar59 + iVar62;
                    pbVar7[uVar49 + lVar64] = param_3[iVar59];
                    if (((int)(((uint)param_6 + 2) - uVar10) <= iVar54) || (iVar54 < (int)param_5))
                    {
                      iVar59 = iVar62 + iVar63;
                      iVar62 = -iVar62;
                      iVar54 = iVar54 - iVar59;
                      iVar63 = -iVar63;
                    }
                    uVar49 = uVar49 + 1;
                    iVar59 = iVar54;
                  } while (uVar49 < uVar1);
                }
              }
              else {
                if (-1 < (int)uVar37) {
                  iVar62 = 1;
                  lVar33 = 0;
                  if (uVar66 != 0) {
                    lVar41 = lVar39 * uVar21 + param_1;
                    uVar48 = 0;
                    do {
                      uVar50 = uVar48;
                      pbVar7[lVar33 + -1] = *(byte *)(lVar41 + 1 + uVar50 * 2);
                      uVar48 = uVar50 + 1;
                      pbVar7[lVar33 + -2] = *(byte *)(lVar41 + 2 + uVar50 * 2);
                      lVar33 = lVar33 + -2;
                    } while (uVar48 < uVar68);
                    iVar62 = (int)uVar50 + 2 + (int)uVar48;
                  }
                  if (iVar62 - 1U < param_5) {
                    pbVar7[-(longlong)iVar62] = *(byte *)(param_1 + iVar62 + lVar39 * uVar21);
                  }
                }
LAB_140aa6a93:
                uVar48 = uVar46;
                if (0 < (int)uVar10) {
                  if (6 < (int)uVar10) {
                    pbVar51 = param_3 + uVar49;
                    lVar33 = lVar39 * uVar21 + lVar22;
                    if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar33) ||
                       ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar33))) {
                      if ((longlong)uVar1 < 0x10) {
LAB_140aa6d35:
                        uVar49 = 0;
                      }
                      else {
                        uVar48 = (ulonglong)pbVar51 & 0xf;
                        if (uVar48 != 0) {
                          uVar48 = 0x10 - uVar48;
                        }
                        if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa6d35;
                        uVar50 = 0;
                        uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                        if (uVar48 != 0) {
                          do {
                            pbVar51[uVar50] = *(byte *)(uVar50 + lVar33);
                            uVar50 = uVar50 + 1;
                          } while (uVar50 < uVar48);
                        }
                        do {
                          uVar16 = ((undefined8 *)(uVar48 + lVar33))[1];
                          *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar33);
                          *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      for (; uVar48 = uVar46, uVar49 < uVar1; uVar49 = uVar49 + 1) {
                        pbVar51[uVar49] = *(byte *)(uVar49 + lVar33);
                      }
                      goto LAB_140aa5c80;
                    }
                  }
                  iVar62 = 1;
                  if (uVar38 != 0) {
                    lVar33 = lVar39 * uVar21 + lVar22;
                    uVar48 = 0;
                    do {
                      uVar50 = uVar48;
                      param_3[uVar50 * 2 + uVar49] = *(byte *)(lVar33 + uVar50 * 2);
                      param_3[uVar50 * 2 + uVar49 + 1] = *(byte *)(lVar33 + 1 + uVar50 * 2);
                      uVar48 = uVar50 + 1;
                    } while (uVar48 < uVar40);
                    iVar62 = (int)uVar50 + 2 + (int)uVar48;
                  }
                  uVar48 = uVar46;
                  if (iVar62 - 1U < uVar10) {
                    param_3[(longlong)iVar62 + -1 + uVar49] =
                         *(byte *)(lVar22 + iVar62 + -1 + lVar39 * uVar21);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar37) {
                do {
                  uVar53 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar62 = (int)uVar48;
                    do {
                      if ((int)uVar48 < 0) break;
                      lVar33 = (longlong)(int)uVar53;
                      uVar53 = uVar53 + 1;
                      uVar48 = (ulonglong)((int)uVar48 - 1);
                      param_3[iVar62 - lVar33] =
                           *(byte *)(((longlong)iVar62 + lVar39 * uVar21 + lVar28) - lVar33);
                    } while (uVar53 < uVar56);
                  }
                } while (-1 < (int)uVar48);
              }
              if (uVar35 != 0) goto LAB_140aa6a93;
              uVar48 = uVar46;
              if (0 < (int)uVar10) {
                iVar62 = 1;
                lVar33 = 0;
                if (uVar38 != 0) {
                  lVar41 = lVar39 * uVar21 + lVar22;
                  uVar48 = 0;
                  do {
                    uVar50 = uVar48;
                    param_3[uVar50 * 2 + uVar49] = *(byte *)(lVar33 + -2 + lVar41);
                    lVar19 = lVar33 + -3;
                    lVar33 = lVar33 + -2;
                    param_3[uVar50 * 2 + uVar49 + 1] = *(byte *)(lVar19 + lVar41);
                    uVar48 = uVar50 + 1;
                  } while (uVar48 < uVar40);
                  iVar62 = (int)uVar50 + 2 + (int)uVar48;
                }
                uVar48 = uVar46;
                if (iVar62 - 1U < uVar10) {
                  param_3[(longlong)iVar62 + -1 + uVar49] =
                       *(byte *)((lVar22 - iVar62) + -1 + lVar39 * uVar21);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar53 = 0;
            uVar45 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar41 = lVar39 * uVar21;
                lVar33 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar41);
                if (((longlong)uVar46 <= lVar33) || ((longlong)uVar46 <= -lVar33)) {
                  if (((longlong)uVar46 < 0x10) || ((longlong)uVar46 < lVar4)) {
                    uVar48 = 0;
                  }
                  else {
                    uVar48 = 0;
                    uVar49 = uVar29;
                    if (uVar29 != 0) {
                      do {
                        param_3[uVar48] = *(byte *)(uVar48 + lVar41 + lVar28);
                        uVar48 = uVar48 + 1;
                      } while (uVar48 < uVar29);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar49 + lVar41 + lVar28);
                      uVar16 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar49) = *puVar8;
                      *(undefined8 *)(param_3 + uVar49 + 8) = uVar16;
                      uVar49 = uVar49 + 0x10;
                      uVar48 = uVar61;
                    } while (uVar49 < uVar61);
                  }
                  uVar45 = param_5;
                  if (uVar48 < uVar46) {
                    do {
                      param_3[uVar48] = *(byte *)(uVar48 + lVar41 + lVar28);
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar46);
                  }
                  goto LAB_140aa4ed3;
                }
              }
              uVar44 = 1;
              if (uVar66 != 0) {
                lVar33 = lVar39 * uVar21 + lVar28;
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  param_3[uVar49 * 2] = *(byte *)(lVar33 + uVar49 * 2);
                  param_3[uVar49 * 2 + 1] = *(byte *)(lVar33 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar68);
                uVar53 = (int)uVar48 * 2;
                uVar44 = (int)uVar49 + 2 + (int)uVar48;
              }
              uVar45 = uVar53;
              if (uVar44 - 1 < param_5) {
                param_3[(longlong)(int)uVar44 + -1] =
                     *(byte *)(lVar28 + (int)uVar44 + -1 + lVar39 * uVar21);
                uVar45 = uVar44;
              }
            }
LAB_140aa4ed3:
            lVar33 = (longlong)(int)uVar45;
            if (0 < (int)(uint)param_6) {
              if (uVar52 < 7) {
LAB_140aa501f:
                iVar62 = 1;
                uVar53 = uVar45;
                if (uVar67 != 0) {
                  lVar41 = lVar39 * uVar21 + param_1;
                  uVar48 = 0;
                  do {
                    uVar49 = uVar48;
                    param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar41 + uVar49 * 2);
                    param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(lVar41 + 1 + uVar49 * 2);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar69);
                  uVar53 = uVar45 + (int)uVar48 * 2;
                  iVar62 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (iVar62 - 1U < uVar52) {
                  param_3[(longlong)iVar62 + -1 + lVar33] =
                       *(byte *)(param_1 + iVar62 + -1 + lVar39 * uVar21);
                  uVar53 = uVar45 + iVar62;
                }
              }
              else {
                pbVar51 = param_3 + lVar33;
                lVar41 = lVar39 * uVar21 + param_1;
                if (((longlong)pbVar51 - lVar41 < (longlong)(ulonglong)uVar52) &&
                   (-((longlong)pbVar51 - lVar41) < (longlong)(ulonglong)uVar52))
                goto LAB_140aa501f;
                if (uVar52 < 0x10) {
LAB_140aa606d:
                  uVar49 = 0;
                }
                else {
                  uVar48 = (ulonglong)pbVar51 & 0xf;
                  if ((int)uVar48 != 0) {
                    uVar48 = (ulonglong)(0x10 - (int)uVar48);
                  }
                  iVar62 = (int)uVar48;
                  if (uVar52 < iVar62 + 0x10U) goto LAB_140aa606d;
                  uVar49 = 0;
                  if (iVar62 != 0) {
                    do {
                      pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar48);
                  }
                  uVar49 = (ulonglong)(int)(uVar52 - (uVar52 - iVar62 & 0xf));
                  do {
                    uVar16 = ((undefined8 *)(uVar48 + lVar41))[1];
                    *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar41);
                    *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar49);
                }
                for (; uVar49 < uVar55; uVar49 = uVar49 + 1) {
                  pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
                }
                uVar53 = uVar45 + uVar52;
              }
              lVar33 = (longlong)(int)uVar53;
              if (2 < (int)(uint)param_6) {
                iVar62 = uVar53 + 2;
                lVar41 = lVar39 * uVar21;
                param_3[lVar33] = *(byte *)(lVar22 + -2 + lVar41);
                param_3[lVar33 + 1] = *(byte *)(lVar22 + -1 + lVar41);
                lVar33 = (longlong)iVar62;
                if (0 < (int)uVar10) {
                  if (6 < (int)uVar10) {
                    pbVar51 = param_3 + lVar33;
                    lVar19 = lVar41 + lVar22;
                    if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar19) ||
                       ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar19))) {
                      if ((longlong)uVar1 < 0x10) {
LAB_140aa6075:
                        uVar49 = 0;
                      }
                      else {
                        uVar48 = (ulonglong)pbVar51 & 0xf;
                        if (uVar48 != 0) {
                          uVar48 = 0x10 - uVar48;
                        }
                        if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa6075;
                        uVar50 = 0;
                        uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                        if (uVar48 != 0) {
                          do {
                            pbVar51[uVar50] = *(byte *)(uVar50 + lVar19);
                            uVar50 = uVar50 + 1;
                          } while (uVar50 < uVar48);
                        }
                        do {
                          uVar16 = ((undefined8 *)(uVar48 + lVar19))[1];
                          *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar19);
                          *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      for (; uVar49 < uVar1; uVar49 = uVar49 + 1) {
                        pbVar51[uVar49] = *(byte *)(uVar49 + lVar19);
                      }
                      lVar33 = (longlong)(int)(iVar57 + 4 + uVar53);
                      goto LAB_140aa52b8;
                    }
                  }
                  iVar59 = 1;
                  iVar63 = iVar62;
                  if (uVar38 != 0) {
                    uVar48 = 0;
                    do {
                      uVar49 = uVar48;
                      param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar41 + lVar22 + uVar49 * 2);
                      param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(lVar41 + lVar22 + 1 + uVar49 * 2)
                      ;
                      uVar48 = uVar49 + 1;
                    } while (uVar48 < uVar40);
                    iVar63 = (int)uVar48 * 2 + 2 + uVar53;
                    iVar59 = (int)uVar49 + 2 + (int)uVar48;
                  }
                  if (iVar59 - 1U < uVar10) {
                    param_3[(longlong)iVar59 + -1 + lVar33] =
                         *(byte *)(lVar22 + iVar59 + -1 + lVar41);
                    lVar33 = (longlong)(iVar59 + iVar62);
                  }
                  else {
                    lVar33 = (longlong)iVar63;
                  }
                }
LAB_140aa52b8:
                uVar48 = lVar33 - lVar2;
                goto LAB_140aa5c80;
              }
            }
            uVar48 = uVar46;
            if (0 < (int)uVar10) {
              if (6 < (int)uVar10) {
                pbVar51 = param_3 + lVar33;
                lVar41 = lVar39 * uVar21 + lVar22;
                if (((longlong)(2 - uVar46) <= (longlong)pbVar51 - lVar41) ||
                   ((longlong)(2 - uVar46) <= -((longlong)pbVar51 - lVar41))) {
                  if ((longlong)uVar1 < 0x10) {
LAB_140aa607c:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = (ulonglong)pbVar51 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar1 < (longlong)(uVar48 + 0x10)) goto LAB_140aa607c;
                    uVar50 = 0;
                    uVar49 = (ulonglong)(int)(iVar18 - (iVar18 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        pbVar51[uVar50] = *(byte *)(uVar50 + lVar41);
                        uVar50 = uVar50 + 1;
                      } while (uVar50 < uVar48);
                    }
                    do {
                      uVar16 = ((undefined8 *)(uVar48 + lVar41))[1];
                      *(undefined8 *)(pbVar51 + uVar48) = *(undefined8 *)(uVar48 + lVar41);
                      *(undefined8 *)(pbVar51 + uVar48 + 8) = uVar16;
                      uVar48 = uVar48 + 0x10;
                    } while (uVar48 < uVar49);
                  }
                  for (; uVar48 = uVar46, uVar49 < uVar1; uVar49 = uVar49 + 1) {
                    pbVar51[uVar49] = *(byte *)(uVar49 + lVar41);
                  }
                  goto LAB_140aa5c80;
                }
              }
              iVar62 = 1;
              if (uVar38 != 0) {
                lVar41 = lVar39 * uVar21 + lVar22;
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  param_3[uVar49 * 2 + lVar33] = *(byte *)(lVar41 + uVar49 * 2);
                  param_3[uVar49 * 2 + lVar33 + 1] = *(byte *)(lVar41 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar40);
                iVar62 = (int)uVar49 + 2 + (int)uVar48;
              }
              uVar48 = uVar46;
              if (iVar62 - 1U < uVar10) {
                param_3[(longlong)iVar62 + -1 + lVar33] =
                     *(byte *)(lVar22 + iVar62 + -1 + lVar39 * uVar21);
              }
            }
          }
          else {
            uVar48 = 0;
          }
        }
LAB_140aa5c80:
        *psStack_50 = (ushort)*param_3 + (ushort)param_3[2];
        psStack_50[(int)uVar25] = (ushort)param_3[1] << 3;
        if (0 < (int)uVar36) {
          lVar42 = lVar39 * uVar21;
          lVar33 = param_1 + lVar42;
          lVar19 = (longlong)(psStack_50 + 1) - lVar33;
          lVar41 = lVar64 * 2 + -4;
          if ((lVar64 <= lVar19) || (lVar41 <= -lVar19)) {
            psVar6 = psStack_50 + (longlong)(int)uVar25 + 1;
            if (((lVar64 <= (longlong)psVar6 - lVar33) || (lVar41 <= -((longlong)psVar6 - lVar33)))
               && ((lVar19 = (longlong)psVar6 - (longlong)(psStack_50 + 1), lVar41 <= lVar19 ||
                   (lVar41 <= -lVar19)))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140aa867f:
                uVar50 = 0;
              }
              else {
                uVar53 = (uint)psVar6 & 0xf;
                if (((ulonglong)psVar6 & 0xf) != 0) {
                  if (((ulonglong)psVar6 & 1) != 0) goto LAB_140aa867f;
                  uVar53 = 0x10 - uVar53 >> 1;
                }
                uVar49 = (ulonglong)uVar53;
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140aa867f;
                uVar50 = (ulonglong)(int)((int)uVar3 - ((int)uVar3 - uVar53 & 0xf));
                uVar20 = 0;
                if (uVar53 != 0) {
                  do {
                    bVar14 = *(byte *)(uVar20 + 1 + lVar33);
                    psStack_50[uVar20 + 1] =
                         (ushort)*(byte *)(uVar20 + lVar33) + (ushort)*(byte *)(uVar20 + 2 + lVar33)
                    ;
                    psStack_50[(longlong)(int)uVar25 + uVar20 + 1] = (ushort)bVar14 << 3;
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uVar49);
                }
                lVar42 = lVar42 + param_1;
                do {
                  auVar70 = *(undefined1 (*) [16])(uVar49 + 1 + lVar42);
                  auVar72._8_8_ = 0;
                  auVar72._0_8_ = *(ulonglong *)(uVar49 + 8 + lVar42);
                  auVar72 = vpmovzxbw_avx(auVar72);
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(ulonglong *)(uVar49 + 10 + lVar42);
                  auVar12 = vpmovzxbw_avx(auVar12);
                  auVar72 = vpaddw_avx(auVar72,auVar12);
                  auVar12 = vpmovzxbw_avx(auVar70);
                  auVar71 = vpsrldq_avx(auVar70,8);
                  auVar70._8_8_ = 0;
                  auVar70._0_8_ = *(ulonglong *)(uVar49 + lVar42);
                  auVar70 = vpmovzxbw_avx(auVar70);
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = *(ulonglong *)(uVar49 + 2 + lVar42);
                  auVar13 = vpmovzxbw_avx(auVar13);
                  auVar71 = vpmovzxbw_avx(auVar71);
                  auVar70 = vpaddw_avx(auVar70,auVar13);
                  *(undefined1 (*) [16])(psStack_50 + uVar49 + 9) = auVar72;
                  *(undefined1 (*) [16])(psStack_50 + uVar49 + 1) = auVar70;
                  auVar72 = vpsllw_avx(auVar12,3);
                  auVar70 = vpsllw_avx(auVar71,3);
                  *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar25 + uVar49 + 1) = auVar72;
                  *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar25 + uVar49 + 9) = auVar70;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar50);
              }
              for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                bVar14 = *(byte *)(uVar50 + 1 + lVar33);
                psStack_50[uVar50 + 1] =
                     (ushort)*(byte *)(uVar50 + lVar33) + (ushort)*(byte *)(uVar50 + 2 + lVar33);
                psStack_50[(longlong)(int)uVar25 + uVar50 + 1] = (ushort)bVar14 << 3;
              }
              goto LAB_140aa5fbe;
            }
          }
          iVar62 = 1;
          uVar49 = 0;
          if (uVar36 >> 1 != 0) {
            do {
              uVar50 = uVar49;
              psStack_50[uVar50 * 2 + 1] =
                   (ushort)*(byte *)(lVar33 + uVar50 * 2) +
                   (ushort)*(byte *)(lVar33 + 2 + uVar50 * 2);
              psStack_50[(longlong)(int)uVar25 + uVar50 * 2 + 1] =
                   (ushort)*(byte *)(lVar33 + 1 + uVar50 * 2) << 3;
              psStack_50[uVar50 * 2 + 2] =
                   (ushort)*(byte *)(lVar33 + 1 + uVar50 * 2) +
                   (ushort)*(byte *)(lVar33 + 3 + uVar50 * 2);
              psStack_50[(longlong)(int)uVar25 + uVar50 * 2 + 2] =
                   (ushort)*(byte *)(lVar33 + 2 + uVar50 * 2) << 3;
              uVar49 = uVar50 + 1;
            } while (uVar49 < uVar36 >> 1);
            iVar62 = (int)uVar50 + 2 + (int)uVar49;
          }
          if (iVar62 - 1U < uVar36) {
            lVar33 = (longlong)iVar62;
            lVar41 = param_1 + lVar33;
            psStack_50[lVar33] =
                 (ushort)*(byte *)(lVar41 + -1 + lVar42) + (ushort)*(byte *)(lVar41 + 1 + lVar42);
            psStack_50[(int)uVar25 + lVar33] = (ushort)*(byte *)(lVar41 + lVar42) << 3;
          }
        }
LAB_140aa5fbe:
        if ((int)(uint)param_6 < 2) goto LAB_140aa601b;
        uVar21 = uVar21 + 1;
        psStack_50[lVar64 + -1] = (ushort)param_3[uVar48] + (ushort)param_3[uVar48 + 2];
        lStack_78 = lStack_78 + lVar39;
        psStack_58[lVar64 + -1] = (ushort)param_3[uVar48 + 1] << 3;
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar21) {
          return 0;
        }
        psStack_50 = *(short **)(param_2 + uVar21 * 8);
        psStack_58 = psStack_50 + (int)uVar25;
      } while( true );
    }
  }
  else {
    lVar22 = 0;
    switch(param_7 & 0xf) {
    case 1:
      lVar22 = 1;
      break;
    case 2:
      lVar22 = 2;
      break;
    case 3:
      lVar22 = 3;
      break;
    case 4:
      lVar22 = 4;
    }
    (*(code *)(&PTR_FUN_14308f3c8)[lVar22])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar39 - (int)(uint)param_6,(longlong)(int)(uVar25 * 2),
               param_8,param_7);
  }
  return 0;
LAB_140aa601b:
  uVar21 = uVar21 + 1;
  lStack_78 = lStack_78 + lVar39;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar21) {
    return 0;
  }
  goto LAB_140aa4c80;
}

