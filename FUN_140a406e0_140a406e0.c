
undefined8
FUN_140a406e0(longlong param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  ulonglong uVar45;
  longlong lVar47;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  longlong lVar57;
  ulonglong uVar58;
  uint uVar59;
  uint uVar60;
  longlong lVar61;
  int iVar62;
  undefined4 uVar63;
  undefined8 uVar64;
  undefined1 in_XMM1 [16];
  ulonglong uVar16;
  ulonglong uVar46;
  ulonglong uVar48;
  
  lVar11 = (longlong)param_4;
  if (0 < param_6._4_4_) {
    uVar24 = param_7 & 0x40;
    uVar26 = param_7 & 0xf;
    uVar25 = param_3 & 0xf;
    uVar30 = (ulonglong)(int)param_5;
    lVar35 = -uVar30;
    uVar4 = param_3 + uVar30;
    uVar15 = uVar25;
    if (uVar25 != 0) {
      uVar15 = 0x10 - uVar25;
    }
    lVar2 = lVar35 + 8;
    uVar9 = 4;
    if ((uint)param_6 < 5) {
      uVar9 = (uint)param_6;
    }
    uVar12 = (ulonglong)(int)uVar9;
    uVar45 = (ulonglong)(1 < (int)(uint)param_6);
    uVar18 = (ulonglong)(int)(uint)param_6;
    iVar54 = -param_5;
    uVar3 = lVar35 + 4;
    lVar23 = param_1 - uVar30;
    uVar40 = (uint)param_6 - (1 < (int)(uint)param_6);
    uVar41 = param_7 & 0x80;
    uVar28 = uVar4 & 0xf;
    uVar1 = iVar54 + 4;
    uVar55 = (uint)param_6 - 4;
    uVar42 = uVar1 >> 1;
    uVar46 = (ulonglong)uVar42;
    lVar47 = param_3 - uVar18;
    uVar36 = 0xffffffffffffffff - (lVar35 + -1);
    uVar43 = uVar9 >> 1;
    uVar48 = (ulonglong)uVar43;
    if ((int)uVar28 != 0) {
      uVar28 = (ulonglong)(0x10 - (int)uVar28);
    }
    if (uVar25 != 0) {
      uVar25 = 0x10 - uVar25;
    }
    lVar57 = (param_1 - uVar45) + uVar18;
    iVar19 = ((int)(uint)param_6 < 2) - 1;
    uVar14 = param_5 >> 1;
    uVar16 = (ulonglong)uVar14;
    lVar5 = uVar18 + uVar4;
    uVar37 = (ulonglong)(int)((int)uVar36 - ((int)uVar36 - (int)uVar25 & 0xfU));
    lVar17 = lVar5 - uVar30;
    iVar27 = (int)uVar28;
    uVar20 = param_5 - (param_5 - (int)uVar15 & 0xf);
    iVar31 = uVar9 - (uVar9 - iVar27 & 0xf);
    uVar63 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
    uVar21 = (ulonglong)(int)uVar20;
    lVar6 = param_1 + uVar18;
    uVar59 = param_5 - 1;
    uVar64 = CONCAT44(uVar63,uVar63);
    uVar38 = (ulonglong)iVar31;
    lVar35 = uVar25 + 0x10;
    uVar60 = 1;
    if ((param_7 & 0xc0) != 0) {
      uVar60 = uVar26;
    }
    lVar7 = uVar15 + 0x10;
    iVar62 = (int)uVar3;
    uVar22 = 0;
    do {
      uVar53 = uVar30;
      if ((uint)param_6 == 1) {
        uVar44 = uVar60;
        if (uVar26 != 6) goto LAB_140a40abd;
LAB_140a44111:
        uVar44 = 0;
        uVar34 = 0;
        if (uVar24 == 0) {
          if (0 < (int)param_5) {
            if ((0xf < (longlong)uVar30) && (lVar7 <= (longlong)uVar30)) {
              uVar50 = 0;
              uVar49 = uVar15;
              if (uVar15 != 0) {
                do {
                  *(undefined1 *)(uVar50 + param_3) = param_8;
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar15);
              }
              do {
                *(undefined8 *)(uVar49 + param_3) = uVar64;
                ((undefined8 *)(uVar49 + param_3))[1] = uVar64;
                uVar49 = uVar49 + 0x10;
                uVar44 = uVar20;
              } while (uVar49 < uVar21);
            }
            uVar49 = (ulonglong)(int)uVar44;
            uVar34 = uVar44;
            if (uVar49 < uVar30) {
              do {
                *(undefined1 *)(uVar49 + param_3) = param_8;
                uVar49 = uVar49 + 1;
              } while (uVar49 < uVar30);
              uVar34 = (uint)uVar49;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar39 = lVar11 * uVar22;
            lVar13 = param_3 - ((int)-param_5 + param_1 + lVar39);
            if (((longlong)uVar30 <= lVar13) || ((longlong)uVar30 <= -lVar13)) {
              if (((longlong)uVar30 < 0x10) || ((longlong)uVar30 < lVar7)) {
                uVar49 = 0;
              }
              else {
                uVar49 = 0;
                lVar13 = lVar39 + lVar23;
                if (uVar15 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar13);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar15);
                }
                uVar50 = uVar15;
                uVar49 = uVar21;
                if ((lVar13 + uVar15 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar13);
                    *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar21);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar13));
                    *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar21);
                }
              }
              uVar34 = param_5;
              if (uVar49 < uVar30) {
                do {
                  *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar39 + lVar23);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar30);
              }
              goto LAB_140a44414;
            }
          }
          uVar32 = 1;
          if (uVar14 != 0) {
            lVar13 = lVar11 * uVar22 + lVar23;
            uVar49 = 0;
            do {
              uVar50 = uVar49;
              *(undefined1 *)(param_3 + uVar50 * 2) = *(undefined1 *)(lVar13 + uVar50 * 2);
              *(undefined1 *)(param_3 + 1 + uVar50 * 2) = *(undefined1 *)(lVar13 + 1 + uVar50 * 2);
              uVar49 = uVar50 + 1;
            } while (uVar49 < uVar16);
            uVar44 = (int)uVar49 * 2;
            uVar32 = (int)uVar50 + 2 + (int)uVar49;
          }
          uVar34 = uVar44;
          if (uVar32 - 1 < param_5) {
            *(undefined1 *)((longlong)(int)uVar32 + -1 + param_3) =
                 *(undefined1 *)(lVar23 + (int)uVar32 + -1 + lVar11 * uVar22);
            uVar34 = uVar32;
          }
        }
LAB_140a44414:
        lVar13 = (longlong)(int)uVar34;
        if ((int)(uint)param_6 < 1) {
          if (uVar41 == 0) {
joined_r0x000140a446cf:
            if (0 < (int)uVar1) {
LAB_140a4470a:
              if ((longlong)uVar3 < 0x10) {
LAB_140a44a82:
                iVar33 = 0;
              }
              else {
                uVar49 = param_3 + lVar13;
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar3 < (longlong)(uVar50 + 0x10)) goto LAB_140a44a82;
                uVar58 = 0;
                iVar33 = iVar62 - (iVar62 - (int)uVar50 & 0xfU);
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar49) = param_8;
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar50);
                }
                do {
                  *(undefined8 *)(uVar50 + uVar49) = uVar64;
                  ((undefined8 *)(uVar50 + uVar49))[1] = uVar64;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < (ulonglong)(longlong)iVar33);
                uVar34 = (int)lVar13 + iVar33;
              }
              uVar49 = (ulonglong)iVar33;
              if (uVar49 < uVar3) {
                do {
                  *(undefined1 *)(uVar49 + param_3 + lVar13) = param_8;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar3);
                uVar34 = (int)uVar49 + (int)lVar13;
              }
              goto LAB_140a44a53;
            }
          }
          else if (0 < (int)uVar1) goto LAB_140a44845;
        }
        else {
          if (uVar9 < 7) {
LAB_140a445bf:
            iVar33 = 1;
            uVar44 = uVar34;
            if (uVar43 != 0) {
              lVar39 = lVar11 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(param_3 + lVar13 + uVar50 * 2) =
                     *(undefined1 *)(lVar39 + uVar50 * 2);
                *(undefined1 *)(param_3 + lVar13 + 1 + uVar50 * 2) =
                     *(undefined1 *)(lVar39 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar48);
              uVar44 = uVar34 + (int)uVar49 * 2;
              iVar33 = (int)uVar50 + 2 + (int)uVar49;
            }
            if (iVar33 - 1U < uVar9) {
              *(undefined1 *)((longlong)iVar33 + -1 + param_3 + lVar13) =
                   *(undefined1 *)(param_1 + iVar33 + -1 + lVar11 * uVar22);
              uVar44 = uVar34 + iVar33;
            }
          }
          else {
            uVar49 = param_3 + lVar13;
            lVar39 = lVar11 * uVar22 + param_1;
            if (((longlong)(uVar49 - lVar39) < (longlong)(ulonglong)uVar9) &&
               ((longlong)-(uVar49 - lVar39) < (longlong)(ulonglong)uVar9)) goto LAB_140a445bf;
            if (uVar9 < 0x10) {
LAB_140a44a7a:
              uVar58 = 0;
            }
            else {
              uVar50 = uVar49 & 0xf;
              if ((int)uVar50 != 0) {
                uVar50 = (ulonglong)(0x10 - (int)uVar50);
              }
              iVar33 = (int)uVar50;
              if (uVar9 < iVar33 + 0x10U) goto LAB_140a44a7a;
              iVar10 = uVar9 - (uVar9 - iVar33 & 0xf);
              uVar58 = 0;
              if (iVar33 != 0) {
                do {
                  *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
                  uVar58 = uVar58 + 1;
                } while (uVar58 < uVar50);
              }
              if ((lVar39 + uVar50 & 0xf) == 0) {
                uVar58 = (ulonglong)iVar10;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar39);
                  *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar58);
              }
              else {
                uVar58 = (ulonglong)iVar10;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar39));
                  *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar58);
              }
            }
            for (; uVar58 < uVar12; uVar58 = uVar58 + 1) {
              *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
            }
            uVar44 = uVar34 + uVar9;
          }
          uVar34 = uVar44;
          lVar13 = (longlong)(int)uVar34;
          if ((int)(uint)param_6 < 5) {
            if (uVar41 == 0) goto joined_r0x000140a446cf;
            if ((int)uVar1 < 1) goto LAB_140a41394;
LAB_140a44845:
            iVar33 = (int)lVar13;
            if ((int)uVar1 < 7) {
LAB_140a449c2:
              iVar10 = 1;
              if (uVar42 != 0) {
                lVar39 = lVar11 * uVar22 + lVar6;
                uVar49 = 0;
                do {
                  uVar50 = uVar49;
                  *(undefined1 *)(param_3 + lVar13 + uVar50 * 2) =
                       *(undefined1 *)(lVar39 + uVar50 * 2);
                  *(undefined1 *)(param_3 + lVar13 + 1 + uVar50 * 2) =
                       *(undefined1 *)(lVar39 + 1 + uVar50 * 2);
                  uVar49 = uVar50 + 1;
                } while (uVar49 < uVar46);
                uVar34 = iVar33 + (int)uVar49 * 2;
                iVar10 = (int)uVar50 + 2 + (int)uVar49;
              }
              if (iVar10 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar10 + -1 + param_3 + lVar13) =
                     *(undefined1 *)(lVar6 + iVar10 + -1 + lVar11 * uVar22);
                uVar34 = iVar33 + iVar10;
              }
            }
            else {
              uVar49 = param_3 + lVar13;
              lVar39 = lVar11 * uVar22 + lVar6;
              if (((longlong)(uVar49 - lVar39) < (longlong)(4 - uVar30)) &&
                 ((longlong)-(uVar49 - lVar39) < (longlong)(4 - uVar30))) goto LAB_140a449c2;
              if ((longlong)uVar3 < 0x10) {
LAB_140a44a8a:
                uVar58 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar3 < (longlong)(uVar50 + 0x10)) goto LAB_140a44a8a;
                uVar51 = 0;
                uVar58 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar50 & 0xfU));
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar49) = *(undefined1 *)(uVar51 + lVar39);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar50);
                }
                if ((lVar39 + uVar50 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar39);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar39));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
              }
              uVar34 = iVar33 + 4 + iVar54;
            }
LAB_140a44a53:
            if ((int)(uint)param_6 < 5) goto LAB_140a41394;
            lVar13 = (longlong)(int)uVar34;
          }
          else {
            uVar34 = uVar34 + 4;
            lVar39 = lVar11 * uVar22;
            *(undefined1 *)(lVar13 + param_3) = *(undefined1 *)(lVar6 + -4 + lVar39);
            *(undefined1 *)(lVar13 + 1 + param_3) = *(undefined1 *)(lVar6 + -3 + lVar39);
            *(undefined1 *)(lVar13 + 2 + param_3) = *(undefined1 *)(lVar6 + -2 + lVar39);
            *(undefined1 *)(lVar13 + 3 + param_3) = *(undefined1 *)(lVar6 + -1 + lVar39);
            lVar13 = (longlong)(int)uVar34;
            if (uVar41 == 0) {
              if (0 < (int)uVar1) goto LAB_140a4470a;
            }
            else if (0 < (int)uVar1) goto LAB_140a44845;
          }
          uVar53 = lVar13 - lVar2;
        }
        goto LAB_140a41394;
      }
      uVar44 = uVar26;
      if (uVar26 == 6) goto LAB_140a44111;
LAB_140a40abd:
      if (uVar44 == 1) {
        uVar44 = 0;
        lVar13 = lVar11 * uVar22;
        uVar8 = *(undefined1 *)(param_1 + lVar13);
        uVar34 = 0;
        if (uVar24 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar30 < 0x10) || ((longlong)uVar30 < lVar7)) {
              uVar53 = 0;
            }
            else {
              uVar53 = 0;
              if (uVar15 != 0) {
                do {
                  *(undefined1 *)(uVar53 + param_3) = uVar8;
                  uVar53 = uVar53 + 1;
                } while (uVar53 < uVar15);
              }
              uVar63 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar8,uVar8));
              in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              uVar49 = uVar15;
              do {
                *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                uVar49 = uVar49 + 0x10;
                uVar53 = uVar21;
                uVar44 = uVar20;
              } while (uVar49 < uVar21);
            }
            uVar34 = uVar44;
            if (uVar53 < uVar30) {
              do {
                *(undefined1 *)(uVar53 + param_3) = uVar8;
                uVar53 = uVar53 + 1;
              } while (uVar53 < uVar30);
              uVar34 = (uint)uVar53;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar39 = param_3 - ((int)-param_5 + param_1 + lVar13), lVar39 < (longlong)uVar30 &&
              (-lVar39 < (longlong)uVar30)))) {
            uVar32 = 1;
            if (uVar14 != 0) {
              uVar53 = 0;
              do {
                uVar49 = uVar53;
                *(undefined1 *)(param_3 + uVar49 * 2) =
                     *(undefined1 *)(lVar23 + lVar13 + uVar49 * 2);
                *(undefined1 *)(param_3 + 1 + uVar49 * 2) =
                     *(undefined1 *)(lVar23 + lVar13 + 1 + uVar49 * 2);
                uVar53 = uVar49 + 1;
              } while (uVar53 < uVar16);
              uVar44 = (int)uVar53 * 2;
              uVar32 = (int)uVar49 + 2 + (int)uVar53;
            }
            uVar34 = uVar44;
            if (uVar32 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar32 + -1 + param_3) =
                   *(undefined1 *)(lVar23 + (int)uVar32 + -1 + lVar13);
              uVar34 = uVar32;
            }
          }
          else {
            if (((longlong)uVar30 < 0x10) || ((longlong)uVar30 < lVar7)) {
              uVar53 = 0;
            }
            else {
              uVar53 = 0;
              lVar39 = lVar13 + lVar23;
              if (uVar15 != 0) {
                do {
                  *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar39);
                  uVar53 = uVar53 + 1;
                } while (uVar53 < uVar15);
              }
              uVar49 = uVar15;
              uVar53 = uVar21;
              if ((lVar39 + uVar15 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar39);
                  *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar21);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar39));
                  *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar21);
              }
            }
            uVar34 = param_5;
            if (uVar53 < uVar30) {
              do {
                *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar23 + lVar13);
                uVar53 = uVar53 + 1;
              } while (uVar53 < uVar30);
            }
          }
        }
        lVar39 = (longlong)(int)uVar34;
        if (0 < (int)(uint)param_6) {
          if (uVar9 < 7) {
LAB_140a43c9f:
            iVar33 = 1;
            uVar44 = uVar34;
            if (uVar43 != 0) {
              uVar53 = 0;
              do {
                uVar49 = uVar53;
                *(undefined1 *)(param_3 + lVar39 + uVar49 * 2) =
                     *(undefined1 *)(param_1 + lVar13 + uVar49 * 2);
                *(undefined1 *)(param_3 + lVar39 + 1 + uVar49 * 2) =
                     *(undefined1 *)(param_1 + lVar13 + 1 + uVar49 * 2);
                uVar53 = uVar49 + 1;
              } while (uVar53 < uVar48);
              uVar44 = uVar34 + (int)uVar53 * 2;
              iVar33 = (int)uVar49 + 2 + (int)uVar53;
            }
            if (iVar33 - 1U < uVar9) {
              *(undefined1 *)((longlong)iVar33 + -1 + param_3 + lVar39) =
                   *(undefined1 *)(param_1 + iVar33 + -1 + lVar13);
              uVar44 = uVar34 + iVar33;
            }
          }
          else {
            lVar52 = param_1 + lVar13;
            uVar53 = param_3 + lVar39;
            if (((longlong)(uVar53 - lVar52) < (longlong)(ulonglong)uVar9) &&
               ((longlong)-(uVar53 - lVar52) < (longlong)(ulonglong)uVar9)) goto LAB_140a43c9f;
            if (uVar9 < 0x10) {
LAB_140a440fa:
              uVar50 = 0;
            }
            else {
              uVar49 = uVar53 & 0xf;
              if ((int)uVar49 != 0) {
                uVar49 = (ulonglong)(0x10 - (int)uVar49);
              }
              iVar33 = (int)uVar49;
              if (uVar9 < iVar33 + 0x10U) goto LAB_140a440fa;
              iVar10 = uVar9 - (uVar9 - iVar33 & 0xf);
              uVar50 = 0;
              if (iVar33 != 0) {
                do {
                  *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar49);
              }
              if ((lVar52 + uVar49 & 0xf) == 0) {
                uVar50 = (ulonglong)iVar10;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                  *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar50);
              }
              else {
                uVar50 = (ulonglong)iVar10;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                  *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar50);
              }
            }
            for (; uVar50 < uVar12; uVar50 = uVar50 + 1) {
              *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
            }
            uVar44 = uVar34 + uVar9;
          }
          uVar34 = uVar44;
          lVar39 = (longlong)(int)uVar34;
          if (4 < (int)(uint)param_6) {
            uVar34 = uVar34 + 4;
            *(undefined1 *)(lVar39 + param_3) = *(undefined1 *)(lVar6 + -4 + lVar13);
            *(undefined1 *)(lVar39 + 1 + param_3) = *(undefined1 *)(lVar6 + -3 + lVar13);
            *(undefined1 *)(lVar39 + 2 + param_3) = *(undefined1 *)(lVar6 + -2 + lVar13);
            *(undefined1 *)(lVar39 + 3 + param_3) = *(undefined1 *)(lVar6 + -1 + lVar13);
            lVar39 = (longlong)(int)uVar34;
          }
        }
        uVar8 = *(undefined1 *)(param_1 + uVar18 + -1 + lVar13);
        iVar33 = (int)lVar39;
        if (uVar41 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar3 < 0x10) {
LAB_140a44101:
              iVar10 = 0;
            }
            else {
              uVar53 = param_3 + lVar39;
              uVar49 = uVar53 & 0xf;
              if (uVar49 != 0) {
                uVar49 = 0x10 - uVar49;
              }
              if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a44101;
              uVar50 = 0;
              iVar10 = iVar62 - (iVar62 - (int)uVar49 & 0xfU);
              if (uVar49 != 0) {
                do {
                  *(undefined1 *)(uVar50 + uVar53) = uVar8;
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar49);
              }
              uVar63 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar8,uVar8));
              in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              do {
                *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                uVar49 = uVar49 + 0x10;
              } while (uVar49 < (ulonglong)(longlong)iVar10);
              uVar34 = iVar33 + iVar10;
            }
            uVar53 = (ulonglong)iVar10;
            if (uVar3 <= uVar53) goto LAB_140a440cf;
            do {
              *(undefined1 *)(uVar53 + param_3 + lVar39) = uVar8;
              uVar53 = uVar53 + 1;
            } while (uVar53 < uVar3);
            lVar39 = (longlong)((int)uVar53 + iVar33);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a440d2;
          if (6 < (int)uVar1) {
            lVar52 = lVar13 + lVar6;
            uVar53 = param_3 + lVar39;
            if (((longlong)(4 - uVar30) <= (longlong)(uVar53 - lVar52)) ||
               ((longlong)(4 - uVar30) <= (longlong)-(uVar53 - lVar52))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a44109:
                uVar50 = 0;
              }
              else {
                uVar49 = uVar53 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a44109;
                uVar58 = 0;
                uVar50 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar53) = *(undefined1 *)(uVar58 + lVar52);
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar49);
                }
                if ((lVar52 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                    *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar50);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                    *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar50);
                }
              }
              for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
              }
              lVar39 = (longlong)(iVar33 + 4 + iVar54);
              goto LAB_140a440d2;
            }
          }
          iVar10 = 1;
          if (uVar42 != 0) {
            uVar53 = 0;
            do {
              uVar49 = uVar53;
              *(undefined1 *)(param_3 + lVar39 + uVar49 * 2) =
                   *(undefined1 *)(lVar13 + lVar6 + uVar49 * 2);
              *(undefined1 *)(param_3 + lVar39 + 1 + uVar49 * 2) =
                   *(undefined1 *)(lVar13 + lVar6 + 1 + uVar49 * 2);
              uVar53 = uVar49 + 1;
            } while (uVar53 < uVar46);
            uVar34 = iVar33 + (int)uVar53 * 2;
            iVar10 = (int)uVar49 + 2 + (int)uVar53;
          }
          if (iVar10 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar10 + -1 + param_3 + lVar39) =
                 *(undefined1 *)(lVar6 + iVar10 + -1 + lVar13);
            lVar39 = (longlong)(iVar10 + iVar33);
            goto LAB_140a440d2;
          }
LAB_140a440cf:
          lVar39 = (longlong)(int)uVar34;
        }
LAB_140a440d2:
        uVar53 = lVar39 - lVar2;
        if ((int)(uint)param_6 < 5) {
          uVar53 = uVar30;
        }
      }
      else if (uVar44 == 2) {
        uVar49 = uVar30;
        if (0 < (int)(uint)param_6) {
          if (uVar9 < 7) {
LAB_140a4255d:
            iVar33 = 1;
            uVar44 = param_5;
            if (uVar43 != 0) {
              lVar13 = lVar11 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(uVar4 + uVar50 * 2) = *(undefined1 *)(lVar13 + uVar50 * 2);
                *(undefined1 *)(uVar4 + 1 + uVar50 * 2) = *(undefined1 *)(lVar13 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar48);
              iVar33 = (int)uVar50 + 2 + (int)uVar49;
              uVar44 = param_5 + (int)uVar49 * 2;
            }
            if (iVar33 - 1U < uVar9) {
              *(undefined1 *)((longlong)iVar33 + -1 + uVar4) =
                   *(undefined1 *)(param_1 + iVar33 + -1 + lVar11 * uVar22);
              uVar44 = param_5 + iVar33;
            }
          }
          else {
            lVar13 = lVar11 * uVar22 + param_1;
            if (((longlong)(uVar4 - lVar13) < (longlong)(ulonglong)uVar9) &&
               ((longlong)-(uVar4 - lVar13) < (longlong)(ulonglong)uVar9)) goto LAB_140a4255d;
            if ((uVar9 < 0x10) || (uVar9 < iVar27 + 0x10U)) {
              iVar33 = 0;
            }
            else {
              uVar49 = 0;
              if (iVar27 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar4) = *(undefined1 *)(uVar49 + lVar13);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar28);
              }
              uVar49 = uVar28;
              iVar33 = iVar31;
              if ((lVar13 + uVar28 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar13);
                  *(undefined1 (*) [16])(uVar49 + uVar4) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar38);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar13));
                  *(undefined1 (*) [16])(uVar49 + uVar4) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar38);
              }
            }
            for (uVar49 = (ulonglong)iVar33; uVar44 = param_5 + uVar9, uVar49 < uVar12;
                uVar49 = uVar49 + 1) {
              *(undefined1 *)(uVar49 + uVar4) = *(undefined1 *)(uVar49 + lVar13);
            }
          }
          uVar49 = (ulonglong)(int)uVar44;
          if (4 < (int)(uint)param_6) {
            lVar13 = lVar11 * uVar22;
            if (uVar24 == 0) {
              if (-1 < (int)uVar59) {
                if (6 < (int)param_5) {
                  lVar39 = lVar13 + lVar6;
                  lVar52 = ((param_3 - 1) + uVar30) - (lVar39 + -1);
                  if (((longlong)uVar30 < lVar52) ||
                     (-uVar30 != lVar52 && (longlong)uVar30 <= -lVar52)) {
                    if (((longlong)uVar36 < 0x10) || ((longlong)uVar36 < lVar35)) {
                      uVar53 = 0;
                    }
                    else {
                      uVar53 = 0;
                      lVar52 = lVar39 - uVar30;
                      if (uVar25 != 0) {
                        do {
                          *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar52);
                          uVar53 = uVar53 + 1;
                        } while (uVar53 < uVar25);
                      }
                      uVar50 = uVar25;
                      uVar53 = uVar37;
                      if ((lVar52 + uVar25 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar52);
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar37);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar52));
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar37);
                      }
                    }
                    if (uVar53 < uVar36) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) =
                             *(undefined1 *)(uVar53 + (lVar39 - uVar30));
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar36);
                    }
                    goto LAB_140a42a7d;
                  }
                }
                iVar33 = 1;
                lVar39 = 0;
                if (uVar14 != 0) {
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar39 + -1 + uVar4) =
                         *(undefined1 *)(lVar39 + -1 + lVar13 + lVar6);
                    *(undefined1 *)(lVar39 + -2 + uVar4) =
                         *(undefined1 *)(lVar39 + -2 + lVar13 + lVar6);
                    lVar39 = lVar39 + -2;
                  } while (uVar53 < uVar16);
                  iVar33 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar33 - 1U < param_5) {
                  *(undefined1 *)(uVar4 - (longlong)iVar33) =
                       *(undefined1 *)((lVar13 + lVar6) - (longlong)iVar33);
                }
              }
            }
            else if (-1 < (int)uVar59) {
              if (6 < (int)param_5) {
                lVar39 = param_1 + lVar13;
                lVar52 = ((param_3 - 1) + uVar30) - (lVar39 + -1);
                if (((longlong)uVar30 < lVar52) ||
                   (-uVar30 != lVar52 && (longlong)uVar30 <= -lVar52)) {
                  if (((longlong)uVar36 < 0x10) || ((longlong)uVar36 < lVar35)) {
                    uVar53 = 0;
                  }
                  else {
                    uVar53 = 0;
                    lVar52 = lVar39 - uVar30;
                    if (uVar25 != 0) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar52);
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar25);
                    }
                    uVar50 = uVar25;
                    uVar53 = uVar37;
                    if ((lVar52 + uVar25 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar52);
                        *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                        uVar50 = uVar50 + 0x10;
                      } while (uVar50 < uVar37);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar52));
                        *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                        uVar50 = uVar50 + 0x10;
                      } while (uVar50 < uVar37);
                    }
                  }
                  if (uVar53 < uVar36) {
                    do {
                      *(undefined1 *)(uVar53 + param_3) =
                           *(undefined1 *)(uVar53 + (lVar39 - uVar30));
                      uVar53 = uVar53 + 1;
                    } while (uVar53 < uVar36);
                  }
                  goto LAB_140a42a7d;
                }
              }
              iVar33 = 1;
              lVar39 = 0;
              if (uVar14 != 0) {
                uVar53 = 0;
                do {
                  uVar50 = uVar53;
                  uVar53 = uVar50 + 1;
                  *(undefined1 *)(lVar39 + -1 + uVar4) =
                       *(undefined1 *)(lVar39 + -1 + param_1 + lVar13);
                  *(undefined1 *)(lVar39 + -2 + uVar4) =
                       *(undefined1 *)(lVar39 + -2 + param_1 + lVar13);
                  lVar39 = lVar39 + -2;
                } while (uVar53 < uVar16);
                iVar33 = (int)uVar50 + 2 + (int)uVar53;
              }
              if (iVar33 - 1U < param_5) {
                *(undefined1 *)(uVar4 - (longlong)iVar33) =
                     *(undefined1 *)((param_1 + lVar13) - (longlong)iVar33);
              }
            }
LAB_140a42a7d:
            *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(lVar6 + -4 + lVar13);
            *(undefined1 *)(uVar49 + 1 + param_3) = *(undefined1 *)(lVar6 + -3 + lVar13);
            iVar10 = uVar44 + 4;
            *(undefined1 *)(uVar49 + 2 + param_3) = *(undefined1 *)(lVar6 + -2 + lVar13);
            *(undefined1 *)(uVar49 + 3 + param_3) = *(undefined1 *)(lVar6 + -1 + lVar13);
            lVar39 = (longlong)iVar10;
            iVar33 = iVar10;
            if (uVar41 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar52 = param_1 + lVar13;
                  uVar53 = param_3 + lVar39;
                  if (((longlong)(4 - uVar30) <= (longlong)(uVar53 - lVar52)) ||
                     ((longlong)(4 - uVar30) <= (longlong)-(uVar53 - lVar52))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a437aa:
                      uVar50 = 0;
                    }
                    else {
                      uVar49 = uVar53 & 0xf;
                      if (uVar49 != 0) {
                        uVar49 = 0x10 - uVar49;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a437aa;
                      uVar58 = 0;
                      uVar50 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                      if (uVar49 != 0) {
                        do {
                          *(undefined1 *)(uVar58 + uVar53) = *(undefined1 *)(uVar58 + lVar52);
                          uVar58 = uVar58 + 1;
                        } while (uVar58 < uVar49);
                      }
                      if ((lVar52 + uVar49 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                          *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar50);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                          *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar50);
                      }
                    }
                    for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                      *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                    }
                    lVar39 = (longlong)(int)(iVar54 + 8 + uVar44);
                    goto LAB_140a42eff;
                  }
                }
                iVar29 = 1;
                if (uVar42 != 0) {
                  uVar53 = 0;
                  do {
                    uVar49 = uVar53;
                    *(undefined1 *)(param_3 + lVar39 + uVar49 * 2) =
                         *(undefined1 *)(param_1 + lVar13 + uVar49 * 2);
                    *(undefined1 *)(param_3 + lVar39 + 1 + uVar49 * 2) =
                         *(undefined1 *)(param_1 + lVar13 + 1 + uVar49 * 2);
                    uVar53 = uVar49 + 1;
                  } while (uVar53 < uVar46);
                  iVar33 = (int)uVar53 * 2 + 4 + uVar44;
                  iVar29 = (int)uVar49 + 2 + (int)uVar53;
                }
                if (uVar1 <= iVar29 - 1U) goto LAB_140a42efc;
                *(undefined1 *)((longlong)iVar29 + -1 + param_3 + lVar39) =
                     *(undefined1 *)(param_1 + iVar29 + -1 + lVar13);
                lVar39 = (longlong)(iVar29 + iVar10);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a42eff;
              if (6 < (int)uVar1) {
                lVar52 = lVar13 + lVar6;
                uVar53 = param_3 + lVar39;
                if (((longlong)(4 - uVar30) <= (longlong)(uVar53 - lVar52)) ||
                   ((longlong)(4 - uVar30) <= (longlong)-(uVar53 - lVar52))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a437b2:
                    uVar50 = 0;
                  }
                  else {
                    uVar49 = uVar53 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a437b2;
                    uVar58 = 0;
                    uVar50 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar58 + uVar53) = *(undefined1 *)(uVar58 + lVar52);
                        uVar58 = uVar58 + 1;
                      } while (uVar58 < uVar49);
                    }
                    if ((lVar52 + uVar49 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                        *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar50);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                        *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar50);
                    }
                  }
                  for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                    *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  }
                  lVar39 = (longlong)(int)(iVar54 + 8 + uVar44);
                  goto LAB_140a42eff;
                }
              }
              iVar29 = 1;
              if (uVar42 != 0) {
                uVar53 = 0;
                do {
                  uVar49 = uVar53;
                  *(undefined1 *)(param_3 + lVar39 + uVar49 * 2) =
                       *(undefined1 *)(lVar13 + lVar6 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar39 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar13 + lVar6 + 1 + uVar49 * 2);
                  uVar53 = uVar49 + 1;
                } while (uVar53 < uVar46);
                iVar33 = (int)uVar53 * 2 + 4 + uVar44;
                iVar29 = (int)uVar49 + 2 + (int)uVar53;
              }
              if (iVar29 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar29 + -1 + param_3 + lVar39) =
                     *(undefined1 *)(lVar6 + iVar29 + -1 + lVar13);
                lVar39 = (longlong)(iVar29 + iVar10);
                goto LAB_140a42eff;
              }
LAB_140a42efc:
              lVar39 = (longlong)iVar33;
            }
LAB_140a42eff:
            uVar53 = lVar39 - lVar2;
            goto LAB_140a41394;
          }
        }
        if (uVar24 == 0) {
          if (-1 < (int)uVar59) {
            if (((int)param_5 < 7) ||
               ((lVar13 = ((param_3 - 1) + uVar30) - ((uVar4 - 1) + uVar18),
                lVar13 <= (longlong)uVar30 && (-uVar30 == lVar13 || -lVar13 < (longlong)uVar30)))) {
              iVar33 = 1;
              lVar13 = 0;
              uVar50 = 0;
              if (uVar14 != 0) {
                do {
                  uVar58 = uVar50;
                  uVar50 = uVar58 + 1;
                  *(undefined1 *)(lVar13 + -1 + uVar4) = *(undefined1 *)(lVar13 + -1 + lVar5);
                  *(undefined1 *)(lVar13 + -2 + uVar4) = *(undefined1 *)(lVar13 + -2 + lVar5);
                  lVar13 = lVar13 + -2;
                } while (uVar50 < uVar16);
                iVar33 = (int)uVar58 + 2 + (int)uVar50;
              }
              if (iVar33 - 1U < param_5) {
                *(undefined1 *)(uVar4 - (longlong)iVar33) = *(undefined1 *)(lVar5 - iVar33);
              }
            }
            else {
              if (((longlong)uVar36 < 0x10) || ((longlong)uVar36 < lVar35)) {
                uVar50 = 0;
              }
              else {
                uVar50 = 0;
                if (uVar25 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar17);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar25);
                }
                uVar58 = uVar25;
                uVar50 = uVar37;
                if ((lVar17 + uVar25 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar58 + lVar17);
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar37);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar58 + lVar17));
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar37);
                }
              }
              for (; uVar50 < uVar36; uVar50 = uVar50 + 1) {
                *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar17);
              }
            }
          }
        }
        else if (-1 < (int)uVar59) {
          if (6 < (int)param_5) {
            lVar13 = param_1 + lVar11 * uVar22;
            lVar39 = ((param_3 - 1) + uVar30) - (lVar13 + -1);
            if (((longlong)uVar30 < lVar39) || (-uVar30 != lVar39 && (longlong)uVar30 <= -lVar39)) {
              if (((longlong)uVar36 < 0x10) || ((longlong)uVar36 < lVar35)) {
                uVar50 = 0;
              }
              else {
                uVar50 = 0;
                lVar39 = lVar13 - uVar30;
                if (uVar25 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar39);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar25);
                }
                uVar58 = uVar25;
                uVar50 = uVar37;
                if ((lVar39 + uVar25 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar58 + lVar39);
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar37);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar58 + lVar39));
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar37);
                }
              }
              if (uVar50 < uVar36) {
                do {
                  *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + (lVar13 - uVar30));
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar36);
              }
              goto LAB_140a4337e;
            }
          }
          iVar33 = 1;
          lVar13 = 0;
          if (uVar14 != 0) {
            lVar39 = lVar11 * uVar22 + param_1;
            uVar50 = 0;
            do {
              uVar58 = uVar50;
              uVar50 = uVar58 + 1;
              *(undefined1 *)(lVar13 + -1 + uVar4) = *(undefined1 *)(lVar13 + -1 + lVar39);
              *(undefined1 *)(lVar13 + -2 + uVar4) = *(undefined1 *)(lVar13 + -2 + lVar39);
              lVar13 = lVar13 + -2;
            } while (uVar50 < uVar16);
            iVar33 = (int)uVar58 + 2 + (int)uVar50;
          }
          if (iVar33 - 1U < param_5) {
            *(undefined1 *)(uVar4 - (longlong)iVar33) =
                 *(undefined1 *)((param_1 - iVar33) + lVar11 * uVar22);
          }
        }
LAB_140a4337e:
        if (uVar41 == 0) {
          if ((int)uVar1 < 1) goto LAB_140a41394;
          if (6 < (int)uVar1) {
            uVar50 = param_3 + uVar49;
            lVar13 = lVar47 + uVar49;
            if (((longlong)(4 - uVar30) <= (longlong)(uVar50 - lVar13)) ||
               ((longlong)(4 - uVar30) <= (longlong)-(uVar50 - lVar13))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a437c9:
                uVar58 = 0;
              }
              else {
                uVar49 = uVar50 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a437c9;
                uVar51 = 0;
                uVar58 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar13);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar49);
                }
                if ((lVar13 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar13);
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar13));
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar50) = *(undefined1 *)(uVar58 + lVar13);
              }
              goto LAB_140a41394;
            }
          }
          iVar33 = 1;
          if (uVar42 != 0) {
            uVar50 = 0;
            do {
              uVar58 = uVar50;
              *(undefined1 *)(param_3 + uVar49 + uVar58 * 2) =
                   *(undefined1 *)(uVar49 + lVar47 + uVar58 * 2);
              *(undefined1 *)(param_3 + uVar49 + 1 + uVar58 * 2) =
                   *(undefined1 *)(uVar49 + lVar47 + 1 + uVar58 * 2);
              uVar50 = uVar58 + 1;
            } while (uVar50 < uVar46);
            iVar33 = (int)uVar58 + 2 + (int)uVar50;
          }
          if (iVar33 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar33 + -1 + uVar49 + param_3) =
                 *(undefined1 *)((longlong)iVar33 + -1 + uVar49 + lVar47);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a41394;
          if (6 < (int)uVar1) {
            uVar50 = param_3 + uVar49;
            lVar13 = lVar11 * uVar22 + lVar6;
            if (((longlong)(4 - uVar30) <= (longlong)(uVar50 - lVar13)) ||
               ((longlong)(4 - uVar30) <= (longlong)-(uVar50 - lVar13))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a437d1:
                uVar58 = 0;
              }
              else {
                uVar49 = uVar50 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a437d1;
                uVar51 = 0;
                uVar58 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar13);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar49);
                }
                if ((lVar13 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar13);
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar13));
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar50) = *(undefined1 *)(uVar58 + lVar13);
              }
              goto LAB_140a41394;
            }
          }
          iVar33 = 1;
          if (uVar42 != 0) {
            lVar13 = lVar11 * uVar22 + lVar6;
            uVar50 = 0;
            do {
              uVar58 = uVar50;
              *(undefined1 *)(param_3 + uVar49 + uVar58 * 2) = *(undefined1 *)(lVar13 + uVar58 * 2);
              *(undefined1 *)(param_3 + uVar49 + 1 + uVar58 * 2) =
                   *(undefined1 *)(lVar13 + 1 + uVar58 * 2);
              uVar50 = uVar58 + 1;
            } while (uVar50 < uVar46);
            iVar33 = (int)uVar58 + 2 + (int)uVar50;
          }
          if (iVar33 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar33 + -1 + uVar49 + param_3) =
                 *(undefined1 *)(lVar6 + iVar33 + -1 + lVar11 * uVar22);
          }
        }
      }
      else {
        if (uVar44 != 3) {
          if ((param_7 & 0xf0) != 0xf0) {
            uVar53 = 0;
            goto LAB_140a41394;
          }
          uVar44 = 0;
          uVar34 = 0;
          if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar39 = lVar11 * uVar22;
              lVar13 = param_3 - ((int)-param_5 + param_1 + lVar39);
              if (((longlong)uVar30 <= lVar13) || ((longlong)uVar30 <= -lVar13)) {
                if (((longlong)uVar30 < 0x10) || ((longlong)uVar30 < lVar7)) {
                  uVar49 = 0;
                }
                else {
                  uVar49 = 0;
                  lVar13 = lVar39 + lVar23;
                  if (uVar15 != 0) {
                    do {
                      *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar13);
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar15);
                  }
                  uVar50 = uVar15;
                  uVar49 = uVar21;
                  if ((lVar13 + uVar15 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar13);
                      *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                      uVar50 = uVar50 + 0x10;
                    } while (uVar50 < uVar21);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar13));
                      *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                      uVar50 = uVar50 + 0x10;
                    } while (uVar50 < uVar21);
                  }
                }
                uVar34 = param_5;
                if (uVar49 < uVar30) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar39 + lVar23);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar30);
                }
                goto LAB_140a40cf3;
              }
            }
            uVar32 = 1;
            if (uVar14 != 0) {
              lVar13 = lVar11 * uVar22 + lVar23;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(param_3 + uVar50 * 2) = *(undefined1 *)(lVar13 + uVar50 * 2);
                *(undefined1 *)(param_3 + 1 + uVar50 * 2) = *(undefined1 *)(lVar13 + 1 + uVar50 * 2)
                ;
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar16);
              uVar44 = (int)uVar49 * 2;
              uVar32 = (int)uVar50 + 2 + (int)uVar49;
            }
            uVar34 = uVar44;
            if (uVar32 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar32 + -1 + param_3) =
                   *(undefined1 *)(lVar23 + (int)uVar32 + -1 + lVar11 * uVar22);
              uVar34 = uVar32;
            }
          }
LAB_140a40cf3:
          lVar13 = (longlong)(int)uVar34;
          if (0 < (int)(uint)param_6) {
            if (uVar9 < 7) {
LAB_140a40e7f:
              iVar33 = 1;
              uVar44 = uVar34;
              if (uVar43 != 0) {
                lVar39 = lVar11 * uVar22 + param_1;
                uVar49 = 0;
                do {
                  uVar50 = uVar49;
                  *(undefined1 *)(param_3 + lVar13 + uVar50 * 2) =
                       *(undefined1 *)(lVar39 + uVar50 * 2);
                  *(undefined1 *)(param_3 + lVar13 + 1 + uVar50 * 2) =
                       *(undefined1 *)(lVar39 + 1 + uVar50 * 2);
                  uVar49 = uVar50 + 1;
                } while (uVar49 < uVar48);
                uVar44 = uVar34 + (int)uVar49 * 2;
                iVar33 = (int)uVar50 + 2 + (int)uVar49;
              }
              if (iVar33 - 1U < uVar9) {
                *(undefined1 *)((longlong)iVar33 + -1 + param_3 + lVar13) =
                     *(undefined1 *)(param_1 + iVar33 + -1 + lVar11 * uVar22);
                uVar44 = uVar34 + iVar33;
              }
            }
            else {
              uVar49 = param_3 + lVar13;
              lVar39 = lVar11 * uVar22 + param_1;
              if (((longlong)(uVar49 - lVar39) < (longlong)(ulonglong)uVar9) &&
                 ((longlong)-(uVar49 - lVar39) < (longlong)(ulonglong)uVar9)) goto LAB_140a40e7f;
              if (uVar9 < 0x10) {
LAB_140a415d0:
                uVar58 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if ((int)uVar50 != 0) {
                  uVar50 = (ulonglong)(0x10 - (int)uVar50);
                }
                iVar33 = (int)uVar50;
                if (uVar9 < iVar33 + 0x10U) goto LAB_140a415d0;
                iVar10 = uVar9 - (uVar9 - iVar33 & 0xf);
                uVar58 = 0;
                if (iVar33 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar50);
                }
                if ((lVar39 + uVar50 & 0xf) == 0) {
                  uVar58 = (ulonglong)iVar10;
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar39);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
                else {
                  uVar58 = (ulonglong)iVar10;
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar39));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
              }
              for (; uVar58 < uVar12; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
              }
              uVar44 = uVar34 + uVar9;
            }
            lVar13 = (longlong)(int)uVar44;
            if (4 < (int)(uint)param_6) {
              lVar39 = lVar11 * uVar22;
              *(undefined1 *)(lVar13 + param_3) = *(undefined1 *)(lVar6 + -4 + lVar39);
              *(undefined1 *)(lVar13 + 1 + param_3) = *(undefined1 *)(lVar6 + -3 + lVar39);
              iVar33 = uVar44 + 4;
              *(undefined1 *)(lVar13 + 2 + param_3) = *(undefined1 *)(lVar6 + -2 + lVar39);
              *(undefined1 *)(lVar13 + 3 + param_3) = *(undefined1 *)(lVar6 + -1 + lVar39);
              lVar13 = (longlong)iVar33;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar52 = lVar39 + lVar6;
                  uVar53 = param_3 + lVar13;
                  if (((longlong)(4 - uVar30) <= (longlong)(uVar53 - lVar52)) ||
                     ((longlong)(4 - uVar30) <= (longlong)-(uVar53 - lVar52))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a415d7:
                      uVar50 = 0;
                    }
                    else {
                      uVar49 = uVar53 & 0xf;
                      if (uVar49 != 0) {
                        uVar49 = 0x10 - uVar49;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a415d7;
                      uVar58 = 0;
                      uVar50 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                      if (uVar49 != 0) {
                        do {
                          *(undefined1 *)(uVar58 + uVar53) = *(undefined1 *)(uVar58 + lVar52);
                          uVar58 = uVar58 + 1;
                        } while (uVar58 < uVar49);
                      }
                      if ((lVar52 + uVar49 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                          *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar50);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                          *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar50);
                      }
                    }
                    for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                      *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                    }
                    lVar13 = (longlong)(int)(iVar54 + 8 + uVar44);
                    goto LAB_140a4117e;
                  }
                }
                iVar29 = 1;
                iVar10 = iVar33;
                if (uVar42 != 0) {
                  uVar53 = 0;
                  do {
                    uVar49 = uVar53;
                    *(undefined1 *)(param_3 + lVar13 + uVar49 * 2) =
                         *(undefined1 *)(lVar39 + lVar6 + uVar49 * 2);
                    *(undefined1 *)(param_3 + lVar13 + 1 + uVar49 * 2) =
                         *(undefined1 *)(lVar39 + lVar6 + 1 + uVar49 * 2);
                    uVar53 = uVar49 + 1;
                  } while (uVar53 < uVar46);
                  iVar10 = (int)uVar53 * 2 + 4 + uVar44;
                  iVar29 = (int)uVar49 + 2 + (int)uVar53;
                }
                if (iVar29 - 1U < uVar1) {
                  *(undefined1 *)((longlong)iVar29 + -1 + param_3 + lVar13) =
                       *(undefined1 *)(lVar6 + iVar29 + -1 + lVar39);
                  lVar13 = (longlong)(iVar29 + iVar33);
                }
                else {
                  lVar13 = (longlong)iVar10;
                }
              }
LAB_140a4117e:
              uVar53 = lVar13 - lVar2;
              goto LAB_140a41394;
            }
          }
          if ((int)uVar1 < 1) goto LAB_140a41394;
          if (6 < (int)uVar1) {
            uVar49 = param_3 + lVar13;
            lVar39 = lVar11 * uVar22 + lVar6;
            if (((longlong)(4 - uVar30) <= (longlong)(uVar49 - lVar39)) ||
               ((longlong)(4 - uVar30) <= (longlong)-(uVar49 - lVar39))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a415de:
                uVar58 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar3 < (longlong)(uVar50 + 0x10)) goto LAB_140a415de;
                uVar51 = 0;
                uVar58 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar50 & 0xfU));
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar49) = *(undefined1 *)(uVar51 + lVar39);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar50);
                }
                if ((lVar39 + uVar50 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar39);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar39));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar39);
              }
              goto LAB_140a41394;
            }
          }
          iVar33 = 1;
          if (uVar42 != 0) {
            lVar39 = lVar11 * uVar22 + lVar6;
            uVar49 = 0;
            do {
              uVar50 = uVar49;
              *(undefined1 *)(param_3 + lVar13 + uVar50 * 2) = *(undefined1 *)(lVar39 + uVar50 * 2);
              *(undefined1 *)(param_3 + lVar13 + 1 + uVar50 * 2) =
                   *(undefined1 *)(lVar39 + 1 + uVar50 * 2);
              uVar49 = uVar50 + 1;
            } while (uVar49 < uVar46);
            iVar33 = (int)uVar50 + 2 + (int)uVar49;
          }
          if (iVar33 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar33 + -1 + lVar13 + param_3) =
                 *(undefined1 *)(lVar6 + iVar33 + -1 + lVar11 * uVar22);
          }
          goto LAB_140a41394;
        }
        uVar49 = uVar30;
        if (0 < (int)(uint)param_6) {
          if (uVar9 < 7) {
LAB_140a4175d:
            iVar33 = 1;
            uVar44 = param_5;
            if (uVar43 != 0) {
              lVar13 = lVar11 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(uVar4 + uVar50 * 2) = *(undefined1 *)(lVar13 + uVar50 * 2);
                *(undefined1 *)(uVar4 + 1 + uVar50 * 2) = *(undefined1 *)(lVar13 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar48);
              iVar33 = (int)uVar50 + 2 + (int)uVar49;
              uVar44 = param_5 + (int)uVar49 * 2;
            }
            if (iVar33 - 1U < uVar9) {
              *(undefined1 *)((longlong)iVar33 + -1 + uVar4) =
                   *(undefined1 *)(param_1 + iVar33 + -1 + lVar11 * uVar22);
              uVar44 = param_5 + iVar33;
            }
          }
          else {
            lVar13 = lVar11 * uVar22 + param_1;
            if (((longlong)(uVar4 - lVar13) < (longlong)(ulonglong)uVar9) &&
               ((longlong)-(uVar4 - lVar13) < (longlong)(ulonglong)uVar9)) goto LAB_140a4175d;
            if ((uVar9 < 0x10) || (uVar9 < iVar27 + 0x10U)) {
              uVar49 = 0;
            }
            else {
              uVar49 = 0;
              if (iVar27 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar4) = *(undefined1 *)(uVar49 + lVar13);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar28);
              }
              uVar50 = uVar28;
              uVar49 = uVar38;
              if ((lVar13 + uVar28 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar13);
                  *(undefined1 (*) [16])(uVar50 + uVar4) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar38);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar13));
                  *(undefined1 (*) [16])(uVar50 + uVar4) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar38);
              }
            }
            for (; uVar44 = param_5 + uVar9, uVar49 < uVar12; uVar49 = uVar49 + 1) {
              *(undefined1 *)(uVar49 + uVar4) = *(undefined1 *)(uVar49 + lVar13);
            }
          }
          uVar49 = (ulonglong)(int)uVar44;
          if (4 < (int)(uint)param_6) {
            if (uVar24 == 0) {
              if (-1 < (int)uVar59) {
                iVar33 = 1;
                lVar13 = 0;
                if (uVar14 != 0) {
                  lVar39 = param_1 + uVar45 + lVar11 * uVar22;
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    *(undefined1 *)(lVar13 + -1 + uVar4) = *(undefined1 *)(lVar39 + uVar50 * 2);
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar13 + -2 + uVar4) = *(undefined1 *)(lVar39 + 1 + uVar50 * 2);
                    lVar13 = lVar13 + -2;
                  } while (uVar53 < uVar16);
                  iVar33 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar33 - 1U < param_5) {
                  *(undefined1 *)(uVar4 - (longlong)iVar33) =
                       *(undefined1 *)(param_1 + uVar45 + (longlong)iVar33 + -1 + lVar11 * uVar22);
                }
              }
            }
            else {
              lVar13 = lVar11 * uVar22;
              if (-1 < (int)uVar59) {
                if (6 < (int)param_5) {
                  lVar39 = param_1 + lVar13;
                  lVar52 = ((param_3 - 1) + uVar30) - (lVar39 + -1);
                  if (((longlong)uVar30 < lVar52) ||
                     (-uVar30 != lVar52 && (longlong)uVar30 <= -lVar52)) {
                    if (((longlong)uVar36 < 0x10) || ((longlong)uVar36 < lVar35)) {
                      uVar53 = 0;
                    }
                    else {
                      uVar53 = 0;
                      lVar13 = lVar39 - uVar30;
                      if (uVar25 != 0) {
                        do {
                          *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar13);
                          uVar53 = uVar53 + 1;
                        } while (uVar53 < uVar25);
                      }
                      uVar50 = uVar25;
                      uVar53 = uVar37;
                      if ((lVar13 + uVar25 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar13);
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar37);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar13));
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar37);
                      }
                    }
                    if (uVar53 < uVar36) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) =
                             *(undefined1 *)(uVar53 + (lVar39 - uVar30));
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar36);
                    }
                    goto LAB_140a41afd;
                  }
                }
                iVar33 = 1;
                lVar39 = 0;
                if (uVar14 != 0) {
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar39 + -1 + uVar4) =
                         *(undefined1 *)(lVar39 + -1 + param_1 + lVar13);
                    *(undefined1 *)(lVar39 + -2 + uVar4) =
                         *(undefined1 *)(lVar39 + -2 + param_1 + lVar13);
                    lVar39 = lVar39 + -2;
                  } while (uVar53 < uVar16);
                  iVar33 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar33 - 1U < param_5) {
                  *(undefined1 *)(uVar4 - (longlong)iVar33) =
                       *(undefined1 *)((param_1 + lVar13) - (longlong)iVar33);
                }
              }
            }
LAB_140a41afd:
            lVar39 = lVar11 * uVar22;
            *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(lVar6 + -4 + lVar39);
            *(undefined1 *)(uVar49 + 1 + param_3) = *(undefined1 *)(lVar6 + -3 + lVar39);
            iVar10 = uVar44 + 4;
            *(undefined1 *)(uVar49 + 2 + param_3) = *(undefined1 *)(lVar6 + -2 + lVar39);
            *(undefined1 *)(uVar49 + 3 + param_3) = *(undefined1 *)(lVar6 + -1 + lVar39);
            lVar13 = (longlong)iVar10;
            iVar33 = iVar10;
            if (uVar41 == 0) {
              if (0 < (int)uVar1) {
                uVar53 = 0;
                iVar29 = 1;
                if (uVar42 != 0) {
                  lVar52 = lVar57 + lVar39;
                  uVar49 = uVar53;
                  do {
                    uVar50 = uVar49;
                    *(undefined1 *)(param_3 + lVar13 + uVar50 * 2) =
                         *(undefined1 *)((uVar53 - 1) + lVar52);
                    lVar61 = uVar53 - 2;
                    uVar53 = uVar53 - 2;
                    *(undefined1 *)(param_3 + lVar13 + 1 + uVar50 * 2) =
                         *(undefined1 *)(lVar61 + lVar52);
                    uVar49 = uVar50 + 1;
                  } while (uVar49 < uVar46);
                  iVar33 = (int)uVar49 * 2 + 4 + uVar44;
                  iVar29 = (int)uVar50 + 2 + (int)uVar49;
                }
                if (uVar1 <= iVar29 - 1U) goto LAB_140a41e29;
                *(undefined1 *)((longlong)iVar29 + -1 + param_3 + lVar13) =
                     *(undefined1 *)((lVar39 + lVar57) - (longlong)iVar29);
                lVar13 = (longlong)(iVar29 + iVar10);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a41e2c;
              if (6 < (int)uVar1) {
                lVar52 = lVar39 + lVar6;
                uVar53 = param_3 + lVar13;
                if (((longlong)(4 - uVar30) <= (longlong)(uVar53 - lVar52)) ||
                   ((longlong)(4 - uVar30) <= (longlong)-(uVar53 - lVar52))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a423d0:
                    uVar50 = 0;
                  }
                  else {
                    uVar49 = uVar53 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a423d0;
                    uVar58 = 0;
                    uVar50 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar58 + uVar53) = *(undefined1 *)(uVar58 + lVar52);
                        uVar58 = uVar58 + 1;
                      } while (uVar58 < uVar49);
                    }
                    if ((lVar52 + uVar49 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                        *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar50);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                        *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar50);
                    }
                  }
                  for (; uVar50 < uVar3; uVar50 = uVar50 + 1) {
                    *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  }
                  lVar13 = (longlong)(int)(iVar54 + 8 + uVar44);
                  goto LAB_140a41e2c;
                }
              }
              iVar29 = 1;
              if (uVar42 != 0) {
                uVar53 = 0;
                do {
                  uVar49 = uVar53;
                  *(undefined1 *)(param_3 + lVar13 + uVar49 * 2) =
                       *(undefined1 *)(lVar39 + lVar6 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar13 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar39 + lVar6 + 1 + uVar49 * 2);
                  uVar53 = uVar49 + 1;
                } while (uVar53 < uVar46);
                iVar33 = (int)uVar53 * 2 + 4 + uVar44;
                iVar29 = (int)uVar49 + 2 + (int)uVar53;
              }
              if (iVar29 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar29 + -1 + param_3 + lVar13) =
                     *(undefined1 *)(lVar6 + iVar29 + -1 + lVar39);
                lVar13 = (longlong)(iVar29 + iVar10);
              }
              else {
LAB_140a41e29:
                lVar13 = (longlong)iVar33;
              }
            }
LAB_140a41e2c:
            uVar53 = lVar13 - lVar2;
            goto LAB_140a41394;
          }
        }
        uVar50 = (ulonglong)uVar59;
        if (uVar24 == 0) {
          uVar44 = uVar59;
          if (uVar41 == 0) {
            while (-1 < (int)uVar44) {
              uVar44 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar50 = (ulonglong)(int)uVar50;
                lVar39 = uVar45 + 1 + uVar50;
                lVar13 = param_3 + uVar50;
                do {
                  if ((int)uVar50 < 0) break;
                  lVar52 = (longlong)(int)uVar44;
                  uVar44 = uVar44 + 1;
                  uVar50 = (ulonglong)((int)uVar50 - 1);
                  *(undefined1 *)(lVar13 - lVar52) = *(undefined1 *)(lVar52 + lVar39 + param_3);
                } while (uVar44 < uVar40);
              }
              uVar44 = (uint)uVar50;
            }
            uVar49 = 0;
            iVar33 = (((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1) + 2;
            iVar10 = iVar19;
            iVar29 = iVar19;
            if ((int)param_5 < 4) {
              do {
                iVar56 = iVar33 + iVar10;
                *(undefined1 *)(uVar49 + lVar5) = *(undefined1 *)((longlong)iVar33 + param_3);
                if (((int)(((uint)param_6 + 4) - uVar1) <= iVar56) || (iVar56 < (int)param_5)) {
                  iVar33 = iVar10 + iVar29;
                  iVar10 = -iVar10;
                  iVar56 = iVar56 - iVar33;
                  iVar29 = -iVar29;
                }
                uVar49 = uVar49 + 1;
                iVar33 = iVar56;
              } while (uVar49 < uVar3);
            }
          }
          else {
            if (-1 < (int)uVar59) {
              iVar33 = 1;
              lVar13 = 0;
              if (uVar14 != 0) {
                lVar39 = lVar11 * uVar22 + param_1;
                uVar50 = 0;
                do {
                  uVar58 = uVar50;
                  *(undefined1 *)(lVar13 + -1 + uVar4) = *(undefined1 *)(lVar39 + 1 + uVar58 * 2);
                  uVar50 = uVar58 + 1;
                  *(undefined1 *)(lVar13 + -2 + uVar4) = *(undefined1 *)(lVar39 + 2 + uVar58 * 2);
                  lVar13 = lVar13 + -2;
                } while (uVar50 < uVar16);
                iVar33 = (int)uVar58 + 2 + (int)uVar50;
              }
              if (iVar33 - 1U < param_5) {
                *(undefined1 *)(uVar4 - (longlong)iVar33) =
                     *(undefined1 *)(param_1 + iVar33 + lVar11 * uVar22);
              }
            }
LAB_140a4211b:
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                uVar50 = param_3 + uVar49;
                lVar13 = lVar11 * uVar22 + lVar6;
                if (((longlong)(4 - uVar30) <= (longlong)(uVar50 - lVar13)) ||
                   ((longlong)(4 - uVar30) <= (longlong)-(uVar50 - lVar13))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a423d7:
                    uVar58 = 0;
                  }
                  else {
                    uVar49 = uVar50 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a423d7;
                    uVar51 = 0;
                    uVar58 = (ulonglong)(int)(iVar62 - (iVar62 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar13);
                        uVar51 = uVar51 + 1;
                      } while (uVar51 < uVar49);
                    }
                    if ((lVar13 + uVar49 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar13);
                        *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar58);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar13));
                        *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar58);
                    }
                  }
                  for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                    *(undefined1 *)(uVar58 + uVar50) = *(undefined1 *)(uVar58 + lVar13);
                  }
                  goto LAB_140a41394;
                }
              }
              iVar33 = 1;
              if (uVar42 != 0) {
                lVar13 = lVar11 * uVar22 + lVar6;
                uVar50 = 0;
                do {
                  uVar58 = uVar50;
                  *(undefined1 *)(param_3 + uVar49 + uVar58 * 2) =
                       *(undefined1 *)(lVar13 + uVar58 * 2);
                  *(undefined1 *)(param_3 + uVar49 + 1 + uVar58 * 2) =
                       *(undefined1 *)(lVar13 + 1 + uVar58 * 2);
                  uVar50 = uVar58 + 1;
                } while (uVar50 < uVar46);
                iVar33 = (int)uVar58 + 2 + (int)uVar50;
              }
              if (iVar33 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar33 + -1 + uVar49 + param_3) =
                     *(undefined1 *)(lVar6 + iVar33 + -1 + lVar11 * uVar22);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar59) {
            do {
              uVar44 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar33 = (int)uVar50;
                do {
                  if ((int)uVar50 < 0) break;
                  lVar13 = (longlong)(int)uVar44;
                  uVar44 = uVar44 + 1;
                  uVar50 = (ulonglong)((int)uVar50 - 1);
                  *(undefined1 *)((param_3 + (longlong)iVar33) - lVar13) =
                       *(undefined1 *)(((longlong)iVar33 + lVar11 * uVar22 + lVar23) - lVar13);
                } while (uVar44 < uVar40);
              }
            } while (-1 < (int)uVar50);
          }
          if (uVar41 != 0) goto LAB_140a4211b;
          if (0 < (int)uVar1) {
            iVar33 = 1;
            lVar13 = 0;
            if (uVar42 != 0) {
              lVar39 = lVar11 * uVar22 + lVar6;
              uVar50 = 0;
              do {
                uVar58 = uVar50;
                *(undefined1 *)(param_3 + uVar49 + uVar58 * 2) =
                     *(undefined1 *)(lVar13 + -2 + lVar39);
                lVar52 = lVar13 + -3;
                lVar13 = lVar13 + -2;
                *(undefined1 *)(param_3 + uVar49 + 1 + uVar58 * 2) =
                     *(undefined1 *)(lVar52 + lVar39);
                uVar50 = uVar58 + 1;
              } while (uVar50 < uVar46);
              iVar33 = (int)uVar58 + 2 + (int)uVar50;
            }
            if (iVar33 - 1U < uVar1) {
              *(undefined1 *)((longlong)iVar33 + -1 + uVar49 + param_3) =
                   *(undefined1 *)((lVar6 - iVar33) + -1 + lVar11 * uVar22);
            }
          }
        }
      }
LAB_140a41394:
      iVar33 = 0;
      uVar49 = 0;
      if (0 < (int)(uint)param_6) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + uVar49 * 2) =
               ((ushort)*(byte *)(uVar49 + param_3) - (ushort)*(byte *)(uVar49 + 4 + param_3)) +
               ((ushort)*(byte *)(uVar49 + 1 + param_3) - (ushort)*(byte *)(uVar49 + 3 + param_3)) *
               2;
          uVar50 = uVar49 + 1;
          iVar33 = (int)uVar49 + 1;
          if (uVar18 <= uVar50) break;
          uVar49 = uVar50;
        } while ((longlong)uVar50 < 2);
      }
      lVar13 = (longlong)iVar33;
      if (0 < (int)uVar55) {
        iVar29 = 1;
        iVar10 = iVar33;
        if (uVar55 >> 1 != 0) {
          lVar39 = lVar11 * uVar22 + param_1;
          uVar49 = 0;
          do {
            uVar50 = uVar49;
            *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar13 * 2 + uVar50 * 4) =
                 ((ushort)*(byte *)(lVar39 + uVar50 * 2) -
                 (ushort)*(byte *)(lVar39 + 4 + uVar50 * 2)) +
                 ((ushort)*(byte *)(lVar39 + 1 + uVar50 * 2) -
                 (ushort)*(byte *)(lVar39 + 3 + uVar50 * 2)) * 2;
            *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar13 * 2 + 2 + uVar50 * 4) =
                 ((ushort)*(byte *)(lVar39 + 1 + uVar50 * 2) -
                 (ushort)*(byte *)(lVar39 + 5 + uVar50 * 2)) +
                 ((ushort)*(byte *)(lVar39 + 2 + uVar50 * 2) -
                 (ushort)*(byte *)(lVar39 + 4 + uVar50 * 2)) * 2;
            uVar49 = uVar50 + 1;
          } while (uVar49 < uVar55 >> 1);
          iVar10 = iVar33 + (int)uVar49 * 2;
          iVar29 = (int)uVar50 + 2 + (int)uVar49;
        }
        if (iVar29 - 1U < uVar55) {
          lVar61 = lVar11 * uVar22;
          lVar39 = param_1 + iVar29;
          lVar52 = iVar29 + lVar13;
          lVar13 = (longlong)(iVar29 + iVar33);
          *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + -2 + lVar52 * 2) =
               ((ushort)*(byte *)(lVar39 + -1 + lVar61) - (ushort)*(byte *)(lVar39 + 3 + lVar61)) +
               ((ushort)*(byte *)(lVar39 + lVar61) - (ushort)*(byte *)(lVar39 + 2 + lVar61)) * 2;
        }
        else {
          lVar13 = (longlong)iVar10;
        }
      }
      lVar39 = uVar53 + param_3;
      uVar53 = 0;
      do {
        if ((longlong)(uVar18 - 2) <= (longlong)uVar53) break;
        *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar13 * 2 + uVar53 * 2) =
             ((ushort)*(byte *)(uVar53 + lVar39) - (ushort)*(byte *)(uVar53 + 4 + lVar39)) +
             ((ushort)*(byte *)(uVar53 + 1 + lVar39) - (ushort)*(byte *)(uVar53 + 3 + lVar39)) * 2;
        uVar53 = uVar53 + 1;
      } while (uVar53 < 2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

