
undefined8
FUN_140a44ae0(longlong param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar22;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  longlong lVar48;
  ulonglong uVar49;
  uint uVar50;
  int iVar51;
  ulonglong uVar52;
  int iVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  int iVar57;
  longlong lVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  uint uVar62;
  undefined4 uVar63;
  undefined8 uVar64;
  undefined1 in_XMM1 [16];
  int iStack_290;
  ulonglong uVar21;
  ulonglong uVar23;
  
  lVar42 = (longlong)param_4;
  if (0 < param_6._4_4_) {
    uVar54 = (ulonglong)(int)param_5;
    uVar47 = param_3 & 0xf;
    lVar58 = -uVar54;
    uVar29 = uVar47;
    if (uVar47 != 0) {
      uVar29 = 0x10 - uVar47;
    }
    lVar2 = lVar58 + 8;
    uVar11 = 4;
    if ((uint)param_6 < 5) {
      uVar11 = (uint)param_6;
    }
    uVar39 = param_7 & 0xf;
    uVar43 = (ulonglong)(1 < (int)(uint)param_6);
    uVar3 = lVar58 + 4;
    uVar32 = (ulonglong)(int)(uint)param_6;
    uVar40 = (uint)param_6 - (1 < (int)(uint)param_6);
    uVar50 = param_7 & 0x40;
    iVar41 = -param_5;
    lVar38 = param_1 - uVar54;
    uVar17 = param_5 >> 1;
    uVar21 = (ulonglong)uVar17;
    uVar1 = iVar41 + 4;
    uVar14 = (ulonglong)(int)uVar11;
    uVar6 = param_3 + uVar54;
    uVar52 = uVar6 & 0xf;
    uVar10 = uVar1 >> 1;
    uVar9 = (ulonglong)uVar10;
    lVar22 = param_3 - uVar32;
    uVar18 = uVar11 >> 1;
    uVar23 = (ulonglong)uVar18;
    uVar59 = 0xffffffffffffffff - (lVar58 + -1);
    uVar19 = param_5 - 1;
    lVar58 = param_1 + uVar32;
    uVar44 = (uint)param_6 - 4;
    if ((int)uVar52 != 0) {
      uVar52 = (ulonglong)(0x10 - (int)uVar52);
    }
    if (uVar47 != 0) {
      uVar47 = 0x10 - uVar47;
    }
    uVar26 = param_7 & 0x80;
    lVar7 = uVar32 + uVar6;
    uVar63 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
    uVar64 = CONCAT44(uVar63,uVar63);
    uVar62 = 1;
    if ((param_7 & 0xc0) != 0) {
      uVar62 = uVar39;
    }
    lVar45 = (param_1 - uVar43) + uVar32;
    iVar34 = ((int)(uint)param_6 < 2) - 1;
    lVar30 = lVar7 - uVar54;
    uVar60 = (ulonglong)(int)((int)uVar59 - ((int)uVar59 - (int)uVar47 & 0xfU));
    iVar51 = (int)uVar52;
    uVar35 = param_5 - (param_5 - (int)uVar29 & 0xf);
    iVar57 = uVar11 - (uVar11 - iVar51 & 0xf);
    uVar36 = (ulonglong)(int)uVar35;
    uVar61 = (ulonglong)iVar57;
    lVar4 = uVar47 + 0x10;
    lVar5 = uVar29 + 0x10;
    iVar37 = (int)uVar3;
    uVar33 = 0;
    do {
      uVar16 = uVar54;
      if ((uint)param_6 == 1) {
        uVar20 = uVar62;
        if (uVar39 != 6) goto LAB_140a44eb6;
LAB_140a483e9:
        uVar20 = 0;
        uVar28 = 0;
        if (uVar50 == 0) {
          if (0 < (int)param_5) {
            if ((0xf < (longlong)uVar54) && (lVar5 <= (longlong)uVar54)) {
              uVar25 = 0;
              uVar24 = uVar29;
              if (uVar29 != 0) {
                do {
                  *(undefined1 *)(uVar25 + param_3) = param_8;
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar29);
              }
              do {
                *(undefined8 *)(uVar24 + param_3) = uVar64;
                ((undefined8 *)(uVar24 + param_3))[1] = uVar64;
                uVar24 = uVar24 + 0x10;
                uVar20 = uVar35;
              } while (uVar24 < uVar36);
            }
            uVar24 = (ulonglong)(int)uVar20;
            uVar28 = uVar20;
            if (uVar24 < uVar54) {
              do {
                *(undefined1 *)(uVar24 + param_3) = param_8;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar54);
              uVar28 = (uint)uVar24;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar15 = lVar42 * uVar33;
            lVar48 = param_3 - ((int)-param_5 + param_1 + lVar15);
            if (((longlong)uVar54 <= lVar48) || ((longlong)uVar54 <= -lVar48)) {
              if (((longlong)uVar54 < 0x10) || ((longlong)uVar54 < lVar5)) {
                uVar24 = 0;
              }
              else {
                uVar24 = 0;
                lVar48 = lVar15 + lVar38;
                if (uVar29 != 0) {
                  do {
                    *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(uVar24 + lVar48);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar29);
                }
                uVar25 = uVar29;
                uVar24 = uVar36;
                if ((lVar48 + uVar29 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar48);
                    *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar36);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar48));
                    *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar36);
                }
              }
              uVar28 = param_5;
              if (uVar24 < uVar54) {
                do {
                  *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(uVar24 + lVar15 + lVar38);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar54);
              }
              goto LAB_140a486d3;
            }
          }
          uVar46 = 1;
          if (uVar17 != 0) {
            lVar15 = lVar42 * uVar33 + lVar38;
            uVar24 = 0;
            do {
              uVar25 = uVar24;
              *(undefined1 *)(param_3 + uVar25 * 2) = *(undefined1 *)(lVar15 + uVar25 * 2);
              *(undefined1 *)(param_3 + 1 + uVar25 * 2) = *(undefined1 *)(lVar15 + 1 + uVar25 * 2);
              uVar24 = uVar25 + 1;
            } while (uVar24 < uVar21);
            uVar20 = (int)uVar24 * 2;
            uVar46 = (int)uVar25 + 2 + (int)uVar24;
          }
          uVar28 = uVar20;
          if (uVar46 - 1 < param_5) {
            *(undefined1 *)((longlong)(int)uVar46 + -1 + param_3) =
                 *(undefined1 *)(lVar38 + (int)uVar46 + -1 + lVar42 * uVar33);
            uVar28 = uVar46;
          }
        }
LAB_140a486d3:
        lVar15 = (longlong)(int)uVar28;
        if ((int)(uint)param_6 < 1) {
          if (uVar26 == 0) {
joined_r0x000140a48966:
            if (0 < (int)uVar1) {
LAB_140a48997:
              if ((longlong)uVar3 < 0x10) {
LAB_140a48cbe:
                iVar27 = 0;
              }
              else {
                uVar24 = param_3 + lVar15;
                uVar25 = uVar24 & 0xf;
                if (uVar25 != 0) {
                  uVar25 = 0x10 - uVar25;
                }
                if ((longlong)uVar3 < (longlong)(uVar25 + 0x10)) goto LAB_140a48cbe;
                uVar55 = 0;
                iVar27 = iVar37 - (iVar37 - (int)uVar25 & 0xfU);
                if (uVar25 != 0) {
                  do {
                    *(undefined1 *)(uVar55 + uVar24) = param_8;
                    uVar55 = uVar55 + 1;
                  } while (uVar55 < uVar25);
                }
                do {
                  *(undefined8 *)(uVar25 + uVar24) = uVar64;
                  ((undefined8 *)(uVar25 + uVar24))[1] = uVar64;
                  uVar25 = uVar25 + 0x10;
                } while (uVar25 < (ulonglong)(longlong)iVar27);
                uVar28 = (int)lVar15 + iVar27;
              }
              uVar24 = (ulonglong)iVar27;
              if (uVar24 < uVar3) {
                do {
                  *(undefined1 *)(uVar24 + param_3 + lVar15) = param_8;
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar3);
                uVar28 = (int)uVar24 + (int)lVar15;
              }
              goto LAB_140a48c90;
            }
          }
          else if (0 < (int)uVar1) goto LAB_140a48a7e;
        }
        else {
          if (uVar11 < 7) {
LAB_140a4885e:
            iVar27 = 1;
            uVar20 = uVar28;
            if (uVar18 != 0) {
              lVar48 = lVar42 * uVar33 + param_1;
              uVar24 = 0;
              do {
                uVar25 = uVar24;
                *(undefined1 *)(param_3 + lVar15 + uVar25 * 2) =
                     *(undefined1 *)(lVar48 + uVar25 * 2);
                *(undefined1 *)(param_3 + lVar15 + 1 + uVar25 * 2) =
                     *(undefined1 *)(lVar48 + 1 + uVar25 * 2);
                uVar24 = uVar25 + 1;
              } while (uVar24 < uVar23);
              uVar20 = uVar28 + (int)uVar24 * 2;
              iVar27 = (int)uVar25 + 2 + (int)uVar24;
            }
            if (iVar27 - 1U < uVar11) {
              *(undefined1 *)((longlong)iVar27 + -1 + param_3 + lVar15) =
                   *(undefined1 *)(param_1 + iVar27 + -1 + lVar42 * uVar33);
              uVar20 = uVar28 + iVar27;
            }
          }
          else {
            uVar24 = param_3 + lVar15;
            lVar48 = lVar42 * uVar33 + param_1;
            if (((longlong)(uVar24 - lVar48) < (longlong)(ulonglong)uVar11) &&
               ((longlong)-(uVar24 - lVar48) < (longlong)(ulonglong)uVar11)) goto LAB_140a4885e;
            if (uVar11 < 0x10) {
LAB_140a48cb7:
              uVar55 = 0;
            }
            else {
              uVar25 = uVar24 & 0xf;
              if ((int)uVar25 != 0) {
                uVar25 = (ulonglong)(0x10 - (int)uVar25);
              }
              iVar27 = (int)uVar25;
              if (uVar11 < iVar27 + 0x10U) goto LAB_140a48cb7;
              iVar12 = uVar11 - (uVar11 - iVar27 & 0xf);
              uVar55 = 0;
              if (iVar27 != 0) {
                do {
                  *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
                  uVar55 = uVar55 + 1;
                } while (uVar55 < uVar25);
              }
              if ((lVar48 + uVar25 & 0xf) == 0) {
                uVar55 = (ulonglong)iVar12;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar48);
                  *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                  uVar25 = uVar25 + 0x10;
                } while (uVar25 < uVar55);
              }
              else {
                uVar55 = (ulonglong)iVar12;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar48));
                  *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                  uVar25 = uVar25 + 0x10;
                } while (uVar25 < uVar55);
              }
            }
            for (; uVar55 < uVar14; uVar55 = uVar55 + 1) {
              *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
            }
            uVar20 = uVar28 + uVar11;
          }
          uVar28 = uVar20;
          lVar15 = (longlong)(int)uVar28;
          if ((int)(uint)param_6 < 5) {
            if (uVar26 == 0) goto joined_r0x000140a48966;
            if ((int)uVar1 < 1) goto LAB_140a45793;
LAB_140a48a7e:
            iVar27 = (int)lVar15;
            if ((int)uVar1 < 7) {
LAB_140a48c00:
              iVar12 = 1;
              if (uVar10 != 0) {
                lVar48 = lVar42 * uVar33 + lVar58;
                uVar24 = 0;
                do {
                  uVar25 = uVar24;
                  *(undefined1 *)(param_3 + lVar15 + uVar25 * 2) =
                       *(undefined1 *)(lVar48 + uVar25 * 2);
                  *(undefined1 *)(param_3 + lVar15 + 1 + uVar25 * 2) =
                       *(undefined1 *)(lVar48 + 1 + uVar25 * 2);
                  uVar24 = uVar25 + 1;
                } while (uVar24 < uVar9);
                uVar28 = iVar27 + (int)uVar24 * 2;
                iVar12 = (int)uVar25 + 2 + (int)uVar24;
              }
              if (iVar12 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar12 + -1 + param_3 + lVar15) =
                     *(undefined1 *)(lVar58 + iVar12 + -1 + lVar42 * uVar33);
                uVar28 = iVar27 + iVar12;
              }
            }
            else {
              uVar24 = param_3 + lVar15;
              lVar48 = lVar42 * uVar33 + lVar58;
              if (((longlong)(uVar24 - lVar48) < (longlong)(4 - uVar54)) &&
                 ((longlong)-(uVar24 - lVar48) < (longlong)(4 - uVar54))) goto LAB_140a48c00;
              if ((longlong)uVar3 < 0x10) {
LAB_140a48cc5:
                uVar55 = 0;
              }
              else {
                uVar25 = uVar24 & 0xf;
                if (uVar25 != 0) {
                  uVar25 = 0x10 - uVar25;
                }
                if ((longlong)uVar3 < (longlong)(uVar25 + 0x10)) goto LAB_140a48cc5;
                uVar49 = 0;
                uVar55 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar25 & 0xfU));
                if (uVar25 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + uVar24) = *(undefined1 *)(uVar49 + lVar48);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar25);
                }
                if ((lVar48 + uVar25 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar48);
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar48));
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
              }
              for (; uVar55 < uVar3; uVar55 = uVar55 + 1) {
                *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
              }
              uVar28 = iVar27 + 4 + iVar41;
            }
LAB_140a48c90:
            if ((int)(uint)param_6 < 5) goto LAB_140a45793;
            lVar15 = (longlong)(int)uVar28;
          }
          else {
            uVar28 = uVar28 + 4;
            lVar48 = lVar42 * uVar33;
            *(undefined1 *)(lVar15 + param_3) = *(undefined1 *)(lVar58 + -4 + lVar48);
            *(undefined1 *)(lVar15 + 1 + param_3) = *(undefined1 *)(lVar58 + -3 + lVar48);
            *(undefined1 *)(lVar15 + 2 + param_3) = *(undefined1 *)(lVar58 + -2 + lVar48);
            *(undefined1 *)(lVar15 + 3 + param_3) = *(undefined1 *)(lVar58 + -1 + lVar48);
            lVar15 = (longlong)(int)uVar28;
            if (uVar26 == 0) {
              if (0 < (int)uVar1) goto LAB_140a48997;
            }
            else if (0 < (int)uVar1) goto LAB_140a48a7e;
          }
          uVar16 = lVar15 - lVar2;
        }
        goto LAB_140a45793;
      }
      uVar20 = uVar39;
      if (uVar39 == 6) goto LAB_140a483e9;
LAB_140a44eb6:
      if (uVar20 == 1) {
        uVar20 = 0;
        lVar15 = lVar42 * uVar33;
        uVar8 = *(undefined1 *)(param_1 + lVar15);
        uVar28 = 0;
        if (uVar50 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar54 < 0x10) || ((longlong)uVar54 < lVar5)) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              if (uVar29 != 0) {
                do {
                  *(undefined1 *)(uVar16 + param_3) = uVar8;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar29);
              }
              uVar63 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar8,uVar8));
              in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              uVar24 = uVar29;
              do {
                *(undefined1 (*) [16])(uVar24 + param_3) = in_XMM1;
                uVar24 = uVar24 + 0x10;
                uVar16 = uVar36;
                uVar20 = uVar35;
              } while (uVar24 < uVar36);
            }
            uVar28 = uVar20;
            if (uVar16 < uVar54) {
              do {
                *(undefined1 *)(uVar16 + param_3) = uVar8;
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar54);
              uVar28 = (uint)uVar16;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar48 = param_3 - ((int)-param_5 + param_1 + lVar15), lVar48 < (longlong)uVar54 &&
              (-lVar48 < (longlong)uVar54)))) {
            uVar46 = 1;
            if (uVar17 != 0) {
              uVar16 = 0;
              do {
                uVar24 = uVar16;
                *(undefined1 *)(param_3 + uVar24 * 2) =
                     *(undefined1 *)(lVar38 + lVar15 + uVar24 * 2);
                *(undefined1 *)(param_3 + 1 + uVar24 * 2) =
                     *(undefined1 *)(lVar38 + lVar15 + 1 + uVar24 * 2);
                uVar16 = uVar24 + 1;
              } while (uVar16 < uVar21);
              uVar20 = (int)uVar16 * 2;
              uVar46 = (int)uVar24 + 2 + (int)uVar16;
            }
            uVar28 = uVar20;
            if (uVar46 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar46 + -1 + param_3) =
                   *(undefined1 *)(lVar38 + (int)uVar46 + -1 + lVar15);
              uVar28 = uVar46;
            }
          }
          else {
            if (((longlong)uVar54 < 0x10) || ((longlong)uVar54 < lVar5)) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              lVar48 = lVar15 + lVar38;
              if (uVar29 != 0) {
                do {
                  *(undefined1 *)(uVar16 + param_3) = *(undefined1 *)(uVar16 + lVar48);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar29);
              }
              uVar24 = uVar29;
              uVar16 = uVar36;
              if ((lVar48 + uVar29 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar48);
                  *(undefined1 (*) [16])(uVar24 + param_3) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar36);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar48));
                  *(undefined1 (*) [16])(uVar24 + param_3) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar36);
              }
            }
            uVar28 = param_5;
            if (uVar16 < uVar54) {
              do {
                *(undefined1 *)(uVar16 + param_3) = *(undefined1 *)(uVar16 + lVar38 + lVar15);
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar54);
            }
          }
        }
        lVar48 = (longlong)(int)uVar28;
        if (0 < (int)(uint)param_6) {
          if (uVar11 < 7) {
LAB_140a47fbe:
            iVar27 = 1;
            uVar20 = uVar28;
            if (uVar18 != 0) {
              uVar16 = 0;
              do {
                uVar24 = uVar16;
                *(undefined1 *)(param_3 + lVar48 + uVar24 * 2) =
                     *(undefined1 *)(param_1 + lVar15 + uVar24 * 2);
                *(undefined1 *)(param_3 + lVar48 + 1 + uVar24 * 2) =
                     *(undefined1 *)(param_1 + lVar15 + 1 + uVar24 * 2);
                uVar16 = uVar24 + 1;
              } while (uVar16 < uVar23);
              uVar20 = uVar28 + (int)uVar16 * 2;
              iVar27 = (int)uVar24 + 2 + (int)uVar16;
            }
            if (iVar27 - 1U < uVar11) {
              *(undefined1 *)((longlong)iVar27 + -1 + param_3 + lVar48) =
                   *(undefined1 *)(param_1 + iVar27 + -1 + lVar15);
              uVar20 = uVar28 + iVar27;
            }
          }
          else {
            lVar31 = param_1 + lVar15;
            uVar16 = param_3 + lVar48;
            if (((longlong)(uVar16 - lVar31) < (longlong)(ulonglong)uVar11) &&
               ((longlong)-(uVar16 - lVar31) < (longlong)(ulonglong)uVar11)) goto LAB_140a47fbe;
            if (uVar11 < 0x10) {
LAB_140a483d3:
              uVar25 = 0;
            }
            else {
              uVar24 = uVar16 & 0xf;
              if ((int)uVar24 != 0) {
                uVar24 = (ulonglong)(0x10 - (int)uVar24);
              }
              iVar27 = (int)uVar24;
              if (uVar11 < iVar27 + 0x10U) goto LAB_140a483d3;
              iVar12 = uVar11 - (uVar11 - iVar27 & 0xf);
              uVar25 = 0;
              if (iVar27 != 0) {
                do {
                  *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar24);
              }
              if ((lVar31 + uVar24 & 0xf) == 0) {
                uVar25 = (ulonglong)iVar12;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                  *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar25);
              }
              else {
                uVar25 = (ulonglong)iVar12;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                  *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar25);
              }
            }
            for (; uVar25 < uVar14; uVar25 = uVar25 + 1) {
              *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
            }
            uVar20 = uVar28 + uVar11;
          }
          uVar28 = uVar20;
          lVar48 = (longlong)(int)uVar28;
          if (4 < (int)(uint)param_6) {
            uVar28 = uVar28 + 4;
            *(undefined1 *)(lVar48 + param_3) = *(undefined1 *)(lVar58 + -4 + lVar15);
            *(undefined1 *)(lVar48 + 1 + param_3) = *(undefined1 *)(lVar58 + -3 + lVar15);
            *(undefined1 *)(lVar48 + 2 + param_3) = *(undefined1 *)(lVar58 + -2 + lVar15);
            *(undefined1 *)(lVar48 + 3 + param_3) = *(undefined1 *)(lVar58 + -1 + lVar15);
            lVar48 = (longlong)(int)uVar28;
          }
        }
        uVar8 = *(undefined1 *)(uVar32 + param_1 + -1 + lVar15);
        iVar27 = (int)lVar48;
        if (uVar26 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar3 < 0x10) {
LAB_140a483da:
              iVar12 = 0;
            }
            else {
              uVar16 = param_3 + lVar48;
              uVar24 = uVar16 & 0xf;
              if (uVar24 != 0) {
                uVar24 = 0x10 - uVar24;
              }
              if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a483da;
              uVar25 = 0;
              iVar12 = iVar37 - (iVar37 - (int)uVar24 & 0xfU);
              if (uVar24 != 0) {
                do {
                  *(undefined1 *)(uVar25 + uVar16) = uVar8;
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar24);
              }
              uVar63 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar8,uVar8));
              in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              do {
                *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                uVar24 = uVar24 + 0x10;
              } while (uVar24 < (ulonglong)(longlong)iVar12);
              uVar28 = iVar27 + iVar12;
            }
            uVar16 = (ulonglong)iVar12;
            if (uVar3 <= uVar16) goto LAB_140a483a9;
            do {
              *(undefined1 *)(uVar16 + param_3 + lVar48) = uVar8;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar3);
            lVar48 = (longlong)((int)uVar16 + iVar27);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a483ac;
          if (6 < (int)uVar1) {
            lVar31 = lVar15 + lVar58;
            uVar16 = param_3 + lVar48;
            if (((longlong)(4 - uVar54) <= (longlong)(uVar16 - lVar31)) ||
               ((longlong)(4 - uVar54) <= (longlong)-(uVar16 - lVar31))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a483e2:
                uVar25 = 0;
              }
              else {
                uVar24 = uVar16 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a483e2;
                uVar55 = 0;
                uVar25 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                if (uVar24 != 0) {
                  do {
                    *(undefined1 *)(uVar55 + uVar16) = *(undefined1 *)(uVar55 + lVar31);
                    uVar55 = uVar55 + 1;
                  } while (uVar55 < uVar24);
                }
                if ((lVar31 + uVar24 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                    *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar25);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                    *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar25);
                }
              }
              for (; uVar25 < uVar3; uVar25 = uVar25 + 1) {
                *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
              }
              lVar48 = (longlong)(iVar27 + 4 + iVar41);
              goto LAB_140a483ac;
            }
          }
          iVar12 = 1;
          if (uVar10 != 0) {
            uVar16 = 0;
            do {
              uVar24 = uVar16;
              *(undefined1 *)(param_3 + lVar48 + uVar24 * 2) =
                   *(undefined1 *)(lVar15 + lVar58 + uVar24 * 2);
              *(undefined1 *)(param_3 + lVar48 + 1 + uVar24 * 2) =
                   *(undefined1 *)(lVar15 + lVar58 + 1 + uVar24 * 2);
              uVar16 = uVar24 + 1;
            } while (uVar16 < uVar9);
            uVar28 = iVar27 + (int)uVar16 * 2;
            iVar12 = (int)uVar24 + 2 + (int)uVar16;
          }
          if (iVar12 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar12 + -1 + param_3 + lVar48) =
                 *(undefined1 *)(lVar58 + iVar12 + -1 + lVar15);
            lVar48 = (longlong)(iVar12 + iVar27);
            goto LAB_140a483ac;
          }
LAB_140a483a9:
          lVar48 = (longlong)(int)uVar28;
        }
LAB_140a483ac:
        uVar16 = lVar48 - lVar2;
        if ((int)(uint)param_6 < 5) {
          uVar16 = uVar54;
        }
      }
      else if (uVar20 == 2) {
        uVar24 = uVar54;
        if (0 < (int)(uint)param_6) {
          if (uVar11 < 7) {
LAB_140a468db:
            iVar27 = 1;
            uVar20 = param_5;
            if (uVar18 != 0) {
              lVar15 = lVar42 * uVar33 + param_1;
              uVar24 = 0;
              do {
                uVar25 = uVar24;
                *(undefined1 *)(uVar6 + uVar25 * 2) = *(undefined1 *)(lVar15 + uVar25 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar25 * 2) = *(undefined1 *)(lVar15 + 1 + uVar25 * 2);
                uVar24 = uVar25 + 1;
              } while (uVar24 < uVar23);
              iVar27 = (int)uVar25 + 2 + (int)uVar24;
              uVar20 = param_5 + (int)uVar24 * 2;
            }
            if (iVar27 - 1U < uVar11) {
              *(undefined1 *)((longlong)iVar27 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar27 + -1 + lVar42 * uVar33);
              uVar20 = param_5 + iVar27;
            }
          }
          else {
            lVar15 = lVar42 * uVar33 + param_1;
            if (((longlong)(uVar6 - lVar15) < (longlong)(ulonglong)uVar11) &&
               ((longlong)-(uVar6 - lVar15) < (longlong)(ulonglong)uVar11)) goto LAB_140a468db;
            if ((uVar11 < 0x10) || (uVar11 < iVar51 + 0x10U)) {
              iVar27 = 0;
            }
            else {
              uVar24 = 0;
              if (iVar51 != 0) {
                do {
                  *(undefined1 *)(uVar24 + uVar6) = *(undefined1 *)(uVar24 + lVar15);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar52);
              }
              uVar24 = uVar52;
              iVar27 = iVar57;
              if ((lVar15 + uVar52 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar15);
                  *(undefined1 (*) [16])(uVar24 + uVar6) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar61);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar15));
                  *(undefined1 (*) [16])(uVar24 + uVar6) = in_XMM1;
                  uVar24 = uVar24 + 0x10;
                } while (uVar24 < uVar61);
              }
            }
            for (uVar24 = (ulonglong)iVar27; uVar20 = param_5 + uVar11, uVar24 < uVar14;
                uVar24 = uVar24 + 1) {
              *(undefined1 *)(uVar24 + uVar6) = *(undefined1 *)(uVar24 + lVar15);
            }
          }
          uVar24 = (ulonglong)(int)uVar20;
          if (4 < (int)(uint)param_6) {
            lVar15 = lVar42 * uVar33;
            if (uVar50 == 0) {
              if (-1 < (int)uVar19) {
                if (6 < (int)param_5) {
                  lVar48 = lVar15 + lVar58;
                  lVar31 = ((param_3 - 1) + uVar54) - (lVar48 + -1);
                  if (((longlong)uVar54 < lVar31) ||
                     (-uVar54 != lVar31 && (longlong)uVar54 <= -lVar31)) {
                    if (((longlong)uVar59 < 0x10) || ((longlong)uVar59 < lVar4)) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = 0;
                      lVar31 = lVar48 - uVar54;
                      if (uVar47 != 0) {
                        do {
                          *(undefined1 *)(uVar16 + param_3) = *(undefined1 *)(uVar16 + lVar31);
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < uVar47);
                      }
                      uVar25 = uVar47;
                      uVar16 = uVar60;
                      if ((lVar31 + uVar47 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar31);
                          *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                          uVar25 = uVar25 + 0x10;
                        } while (uVar25 < uVar60);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar31));
                          *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                          uVar25 = uVar25 + 0x10;
                        } while (uVar25 < uVar60);
                      }
                    }
                    if (uVar16 < uVar59) {
                      do {
                        *(undefined1 *)(uVar16 + param_3) =
                             *(undefined1 *)(uVar16 + (lVar48 - uVar54));
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar59);
                    }
                    goto LAB_140a46dfe;
                  }
                }
                iVar27 = 1;
                lVar48 = 0;
                if (uVar17 != 0) {
                  uVar16 = 0;
                  do {
                    uVar25 = uVar16;
                    uVar16 = uVar25 + 1;
                    *(undefined1 *)(lVar48 + -1 + uVar6) =
                         *(undefined1 *)(lVar48 + -1 + lVar15 + lVar58);
                    *(undefined1 *)(lVar48 + -2 + uVar6) =
                         *(undefined1 *)(lVar48 + -2 + lVar15 + lVar58);
                    lVar48 = lVar48 + -2;
                  } while (uVar16 < uVar21);
                  iVar27 = (int)uVar25 + 2 + (int)uVar16;
                }
                if (iVar27 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar27) =
                       *(undefined1 *)((lVar15 + lVar58) - (longlong)iVar27);
                }
              }
            }
            else if (-1 < (int)uVar19) {
              if (6 < (int)param_5) {
                lVar48 = param_1 + lVar15;
                lVar31 = ((param_3 - 1) + uVar54) - (lVar48 + -1);
                if (((longlong)uVar54 < lVar31) ||
                   (-uVar54 != lVar31 && (longlong)uVar54 <= -lVar31)) {
                  if (((longlong)uVar59 < 0x10) || ((longlong)uVar59 < lVar4)) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0;
                    lVar31 = lVar48 - uVar54;
                    if (uVar47 != 0) {
                      do {
                        *(undefined1 *)(uVar16 + param_3) = *(undefined1 *)(uVar16 + lVar31);
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar47);
                    }
                    uVar25 = uVar47;
                    uVar16 = uVar60;
                    if ((lVar31 + uVar47 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar31);
                        *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                        uVar25 = uVar25 + 0x10;
                      } while (uVar25 < uVar60);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar31));
                        *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                        uVar25 = uVar25 + 0x10;
                      } while (uVar25 < uVar60);
                    }
                  }
                  if (uVar16 < uVar59) {
                    do {
                      *(undefined1 *)(uVar16 + param_3) =
                           *(undefined1 *)(uVar16 + (lVar48 - uVar54));
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < uVar59);
                  }
                  goto LAB_140a46dfe;
                }
              }
              iVar27 = 1;
              lVar48 = 0;
              if (uVar17 != 0) {
                uVar16 = 0;
                do {
                  uVar25 = uVar16;
                  uVar16 = uVar25 + 1;
                  *(undefined1 *)(lVar48 + -1 + uVar6) =
                       *(undefined1 *)(lVar48 + -1 + param_1 + lVar15);
                  *(undefined1 *)(lVar48 + -2 + uVar6) =
                       *(undefined1 *)(lVar48 + -2 + param_1 + lVar15);
                  lVar48 = lVar48 + -2;
                } while (uVar16 < uVar21);
                iVar27 = (int)uVar25 + 2 + (int)uVar16;
              }
              if (iVar27 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar27) =
                     *(undefined1 *)((param_1 + lVar15) - (longlong)iVar27);
              }
            }
LAB_140a46dfe:
            *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(lVar58 + -4 + lVar15);
            *(undefined1 *)(uVar24 + 1 + param_3) = *(undefined1 *)(lVar58 + -3 + lVar15);
            iVar12 = uVar20 + 4;
            *(undefined1 *)(uVar24 + 2 + param_3) = *(undefined1 *)(lVar58 + -2 + lVar15);
            *(undefined1 *)(uVar24 + 3 + param_3) = *(undefined1 *)(lVar58 + -1 + lVar15);
            lVar48 = (longlong)iVar12;
            iVar27 = iVar12;
            if (uVar26 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar31 = param_1 + lVar15;
                  uVar16 = param_3 + lVar48;
                  if (((longlong)(4 - uVar54) <= (longlong)(uVar16 - lVar31)) ||
                     ((longlong)(4 - uVar54) <= (longlong)-(uVar16 - lVar31))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a47ac7:
                      uVar25 = 0;
                    }
                    else {
                      uVar24 = uVar16 & 0xf;
                      if (uVar24 != 0) {
                        uVar24 = 0x10 - uVar24;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a47ac7;
                      uVar55 = 0;
                      uVar25 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                      if (uVar24 != 0) {
                        do {
                          *(undefined1 *)(uVar55 + uVar16) = *(undefined1 *)(uVar55 + lVar31);
                          uVar55 = uVar55 + 1;
                        } while (uVar55 < uVar24);
                      }
                      if ((lVar31 + uVar24 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                          *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                          uVar24 = uVar24 + 0x10;
                        } while (uVar24 < uVar25);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                          *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                          uVar24 = uVar24 + 0x10;
                        } while (uVar24 < uVar25);
                      }
                    }
                    for (; uVar25 < uVar3; uVar25 = uVar25 + 1) {
                      *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
                    }
                    lVar48 = (longlong)(int)(iVar41 + 8 + uVar20);
                    goto LAB_140a47261;
                  }
                }
                iVar13 = 1;
                if (uVar10 != 0) {
                  uVar16 = 0;
                  do {
                    uVar24 = uVar16;
                    *(undefined1 *)(param_3 + lVar48 + uVar24 * 2) =
                         *(undefined1 *)(param_1 + lVar15 + uVar24 * 2);
                    *(undefined1 *)(param_3 + lVar48 + 1 + uVar24 * 2) =
                         *(undefined1 *)(param_1 + lVar15 + 1 + uVar24 * 2);
                    uVar16 = uVar24 + 1;
                  } while (uVar16 < uVar9);
                  iVar27 = (int)uVar16 * 2 + 4 + uVar20;
                  iVar13 = (int)uVar24 + 2 + (int)uVar16;
                }
                if (uVar1 <= iVar13 - 1U) goto LAB_140a4725e;
                *(undefined1 *)((longlong)iVar13 + -1 + param_3 + lVar48) =
                     *(undefined1 *)(param_1 + iVar13 + -1 + lVar15);
                lVar48 = (longlong)(iVar13 + iVar12);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a47261;
              if (6 < (int)uVar1) {
                lVar31 = lVar15 + lVar58;
                uVar16 = param_3 + lVar48;
                if (((longlong)(4 - uVar54) <= (longlong)(uVar16 - lVar31)) ||
                   ((longlong)(4 - uVar54) <= (longlong)-(uVar16 - lVar31))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a47ace:
                    uVar25 = 0;
                  }
                  else {
                    uVar24 = uVar16 & 0xf;
                    if (uVar24 != 0) {
                      uVar24 = 0x10 - uVar24;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a47ace;
                    uVar55 = 0;
                    uVar25 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                    if (uVar24 != 0) {
                      do {
                        *(undefined1 *)(uVar55 + uVar16) = *(undefined1 *)(uVar55 + lVar31);
                        uVar55 = uVar55 + 1;
                      } while (uVar55 < uVar24);
                    }
                    if ((lVar31 + uVar24 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                        *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar25);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                        *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar25);
                    }
                  }
                  for (; uVar25 < uVar3; uVar25 = uVar25 + 1) {
                    *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
                  }
                  lVar48 = (longlong)(int)(iVar41 + 8 + uVar20);
                  goto LAB_140a47261;
                }
              }
              iStack_290 = 1;
              if (uVar10 != 0) {
                uVar16 = 0;
                do {
                  uVar24 = uVar16;
                  *(undefined1 *)(param_3 + lVar48 + uVar24 * 2) =
                       *(undefined1 *)(lVar15 + lVar58 + uVar24 * 2);
                  *(undefined1 *)(param_3 + lVar48 + 1 + uVar24 * 2) =
                       *(undefined1 *)(lVar15 + lVar58 + 1 + uVar24 * 2);
                  uVar16 = uVar24 + 1;
                } while (uVar16 < uVar9);
                iVar27 = (int)uVar16 * 2 + 4 + uVar20;
                iStack_290 = (int)uVar24 + 2 + (int)uVar16;
              }
              if (iStack_290 - 1U < uVar1) {
                *(undefined1 *)((longlong)iStack_290 + -1 + param_3 + lVar48) =
                     *(undefined1 *)(lVar58 + iStack_290 + -1 + lVar15);
                lVar48 = (longlong)(iStack_290 + iVar12);
                goto LAB_140a47261;
              }
LAB_140a4725e:
              lVar48 = (longlong)iVar27;
            }
LAB_140a47261:
            uVar16 = lVar48 - lVar2;
            goto LAB_140a45793;
          }
        }
        if (uVar50 == 0) {
          if (-1 < (int)uVar19) {
            if (((int)param_5 < 7) ||
               ((lVar15 = ((param_3 - 1) + uVar54) - ((uVar6 - 1) + uVar32),
                lVar15 <= (longlong)uVar54 && (-uVar54 == lVar15 || -lVar15 < (longlong)uVar54)))) {
              iVar27 = 1;
              lVar15 = 0;
              uVar25 = 0;
              if (uVar17 != 0) {
                do {
                  uVar55 = uVar25;
                  uVar25 = uVar55 + 1;
                  *(undefined1 *)(lVar15 + -1 + uVar6) = *(undefined1 *)(lVar15 + -1 + lVar7);
                  *(undefined1 *)(lVar15 + -2 + uVar6) = *(undefined1 *)(lVar15 + -2 + lVar7);
                  lVar15 = lVar15 + -2;
                } while (uVar25 < uVar21);
                iVar27 = (int)uVar55 + 2 + (int)uVar25;
              }
              if (iVar27 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar27) = *(undefined1 *)(lVar7 - iVar27);
              }
            }
            else {
              if (((longlong)uVar59 < 0x10) || ((longlong)uVar59 < lVar4)) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0;
                if (uVar47 != 0) {
                  do {
                    *(undefined1 *)(uVar25 + param_3) = *(undefined1 *)(uVar25 + lVar30);
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < uVar47);
                }
                uVar55 = uVar47;
                uVar25 = uVar60;
                if ((lVar30 + uVar47 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar55 + lVar30);
                    *(undefined1 (*) [16])(uVar55 + param_3) = in_XMM1;
                    uVar55 = uVar55 + 0x10;
                  } while (uVar55 < uVar60);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar55 + lVar30));
                    *(undefined1 (*) [16])(uVar55 + param_3) = in_XMM1;
                    uVar55 = uVar55 + 0x10;
                  } while (uVar55 < uVar60);
                }
              }
              for (; uVar25 < uVar59; uVar25 = uVar25 + 1) {
                *(undefined1 *)(uVar25 + param_3) = *(undefined1 *)(uVar25 + lVar30);
              }
            }
          }
        }
        else if (-1 < (int)uVar19) {
          if (6 < (int)param_5) {
            lVar15 = param_1 + lVar42 * uVar33;
            lVar48 = ((param_3 - 1) + uVar54) - (lVar15 + -1);
            if (((longlong)uVar54 < lVar48) || (-uVar54 != lVar48 && (longlong)uVar54 <= -lVar48)) {
              if (((longlong)uVar59 < 0x10) || ((longlong)uVar59 < lVar4)) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0;
                lVar48 = lVar15 - uVar54;
                if (uVar47 != 0) {
                  do {
                    *(undefined1 *)(uVar25 + param_3) = *(undefined1 *)(uVar25 + lVar48);
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < uVar47);
                }
                uVar55 = uVar47;
                uVar25 = uVar60;
                if ((lVar48 + uVar47 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar55 + lVar48);
                    *(undefined1 (*) [16])(uVar55 + param_3) = in_XMM1;
                    uVar55 = uVar55 + 0x10;
                  } while (uVar55 < uVar60);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar55 + lVar48));
                    *(undefined1 (*) [16])(uVar55 + param_3) = in_XMM1;
                    uVar55 = uVar55 + 0x10;
                  } while (uVar55 < uVar60);
                }
              }
              if (uVar25 < uVar59) {
                do {
                  *(undefined1 *)(uVar25 + param_3) = *(undefined1 *)(uVar25 + (lVar15 - uVar54));
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar59);
              }
              goto LAB_140a476df;
            }
          }
          iVar27 = 1;
          lVar15 = 0;
          if (uVar17 != 0) {
            lVar48 = lVar42 * uVar33 + param_1;
            uVar25 = 0;
            do {
              uVar55 = uVar25;
              uVar25 = uVar55 + 1;
              *(undefined1 *)(lVar15 + -1 + uVar6) = *(undefined1 *)(lVar15 + -1 + lVar48);
              *(undefined1 *)(lVar15 + -2 + uVar6) = *(undefined1 *)(lVar15 + -2 + lVar48);
              lVar15 = lVar15 + -2;
            } while (uVar25 < uVar21);
            iVar27 = (int)uVar55 + 2 + (int)uVar25;
          }
          if (iVar27 - 1U < param_5) {
            *(undefined1 *)(uVar6 - (longlong)iVar27) =
                 *(undefined1 *)((param_1 - iVar27) + lVar42 * uVar33);
          }
        }
LAB_140a476df:
        if (uVar26 == 0) {
          if ((int)uVar1 < 1) goto LAB_140a45793;
          if (6 < (int)uVar1) {
            uVar25 = param_3 + uVar24;
            lVar15 = lVar22 + uVar24;
            if (((longlong)(4 - uVar54) <= (longlong)(uVar25 - lVar15)) ||
               ((longlong)(4 - uVar54) <= (longlong)-(uVar25 - lVar15))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a47ae3:
                uVar55 = 0;
              }
              else {
                uVar24 = uVar25 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a47ae3;
                uVar49 = 0;
                uVar55 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                if (uVar24 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + uVar25) = *(undefined1 *)(uVar49 + lVar15);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar24);
                }
                if ((lVar15 + uVar24 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar15);
                    *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar55);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar15));
                    *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar55);
                }
              }
              for (; uVar55 < uVar3; uVar55 = uVar55 + 1) {
                *(undefined1 *)(uVar55 + uVar25) = *(undefined1 *)(uVar55 + lVar15);
              }
              goto LAB_140a45793;
            }
          }
          iVar27 = 1;
          if (uVar10 != 0) {
            uVar25 = 0;
            do {
              uVar55 = uVar25;
              *(undefined1 *)(param_3 + uVar24 + uVar55 * 2) =
                   *(undefined1 *)(uVar24 + lVar22 + uVar55 * 2);
              *(undefined1 *)(param_3 + uVar24 + 1 + uVar55 * 2) =
                   *(undefined1 *)(uVar24 + lVar22 + 1 + uVar55 * 2);
              uVar25 = uVar55 + 1;
            } while (uVar25 < uVar9);
            iVar27 = (int)uVar55 + 2 + (int)uVar25;
          }
          if (iVar27 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar27 + -1 + uVar24 + param_3) =
                 *(undefined1 *)((longlong)iVar27 + -1 + uVar24 + lVar22);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a45793;
          if (6 < (int)uVar1) {
            uVar25 = param_3 + uVar24;
            lVar15 = lVar42 * uVar33 + lVar58;
            if (((longlong)(4 - uVar54) <= (longlong)(uVar25 - lVar15)) ||
               ((longlong)(4 - uVar54) <= (longlong)-(uVar25 - lVar15))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a47aea:
                uVar55 = 0;
              }
              else {
                uVar24 = uVar25 & 0xf;
                if (uVar24 != 0) {
                  uVar24 = 0x10 - uVar24;
                }
                if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a47aea;
                uVar49 = 0;
                uVar55 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                if (uVar24 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + uVar25) = *(undefined1 *)(uVar49 + lVar15);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar24);
                }
                if ((lVar15 + uVar24 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar15);
                    *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar55);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar15));
                    *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                    uVar24 = uVar24 + 0x10;
                  } while (uVar24 < uVar55);
                }
              }
              for (; uVar55 < uVar3; uVar55 = uVar55 + 1) {
                *(undefined1 *)(uVar55 + uVar25) = *(undefined1 *)(uVar55 + lVar15);
              }
              goto LAB_140a45793;
            }
          }
          iVar27 = 1;
          if (uVar10 != 0) {
            lVar15 = lVar42 * uVar33 + lVar58;
            uVar25 = 0;
            do {
              uVar55 = uVar25;
              *(undefined1 *)(param_3 + uVar24 + uVar55 * 2) = *(undefined1 *)(lVar15 + uVar55 * 2);
              *(undefined1 *)(param_3 + uVar24 + 1 + uVar55 * 2) =
                   *(undefined1 *)(lVar15 + 1 + uVar55 * 2);
              uVar25 = uVar55 + 1;
            } while (uVar25 < uVar9);
            iVar27 = (int)uVar55 + 2 + (int)uVar25;
          }
          if (iVar27 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar27 + -1 + uVar24 + param_3) =
                 *(undefined1 *)(lVar58 + iVar27 + -1 + lVar42 * uVar33);
          }
        }
      }
      else {
        if (uVar20 != 3) {
          if ((param_7 & 0xf0) != 0xf0) {
            uVar16 = 0;
            goto LAB_140a45793;
          }
          uVar20 = 0;
          uVar28 = 0;
          if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar48 = lVar42 * uVar33;
              lVar15 = param_3 - ((int)-param_5 + param_1 + lVar48);
              if (((longlong)uVar54 <= lVar15) || ((longlong)uVar54 <= -lVar15)) {
                if (((longlong)uVar54 < 0x10) || ((longlong)uVar54 < lVar5)) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  lVar15 = lVar48 + lVar38;
                  if (uVar29 != 0) {
                    do {
                      *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(uVar24 + lVar15);
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar29);
                  }
                  uVar25 = uVar29;
                  uVar24 = uVar36;
                  if ((lVar15 + uVar29 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar15);
                      *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                      uVar25 = uVar25 + 0x10;
                    } while (uVar25 < uVar36);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar15));
                      *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                      uVar25 = uVar25 + 0x10;
                    } while (uVar25 < uVar36);
                  }
                }
                uVar28 = param_5;
                if (uVar24 < uVar54) {
                  do {
                    *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(uVar24 + lVar48 + lVar38);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar54);
                }
                goto LAB_140a450f6;
              }
            }
            uVar46 = 1;
            if (uVar17 != 0) {
              lVar15 = lVar42 * uVar33 + lVar38;
              uVar24 = 0;
              do {
                uVar25 = uVar24;
                *(undefined1 *)(param_3 + uVar25 * 2) = *(undefined1 *)(lVar15 + uVar25 * 2);
                *(undefined1 *)(param_3 + 1 + uVar25 * 2) = *(undefined1 *)(lVar15 + 1 + uVar25 * 2)
                ;
                uVar24 = uVar25 + 1;
              } while (uVar24 < uVar21);
              uVar20 = (int)uVar24 * 2;
              uVar46 = (int)uVar25 + 2 + (int)uVar24;
            }
            uVar28 = uVar20;
            if (uVar46 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar46 + -1 + param_3) =
                   *(undefined1 *)(lVar38 + (int)uVar46 + -1 + lVar42 * uVar33);
              uVar28 = uVar46;
            }
          }
LAB_140a450f6:
          lVar15 = (longlong)(int)uVar28;
          if (0 < (int)(uint)param_6) {
            if (uVar11 < 7) {
LAB_140a4529e:
              iVar27 = 1;
              uVar20 = uVar28;
              if (uVar18 != 0) {
                lVar48 = lVar42 * uVar33 + param_1;
                uVar24 = 0;
                do {
                  uVar25 = uVar24;
                  *(undefined1 *)(param_3 + lVar15 + uVar25 * 2) =
                       *(undefined1 *)(lVar48 + uVar25 * 2);
                  *(undefined1 *)(param_3 + lVar15 + 1 + uVar25 * 2) =
                       *(undefined1 *)(lVar48 + 1 + uVar25 * 2);
                  uVar24 = uVar25 + 1;
                } while (uVar24 < uVar23);
                uVar20 = uVar28 + (int)uVar24 * 2;
                iVar27 = (int)uVar25 + 2 + (int)uVar24;
              }
              if (iVar27 - 1U < uVar11) {
                *(undefined1 *)((longlong)iVar27 + -1 + param_3 + lVar15) =
                     *(undefined1 *)(param_1 + iVar27 + -1 + lVar42 * uVar33);
                uVar20 = uVar28 + iVar27;
              }
            }
            else {
              uVar24 = param_3 + lVar15;
              lVar48 = lVar42 * uVar33 + param_1;
              if (((longlong)(uVar24 - lVar48) < (longlong)(ulonglong)uVar11) &&
                 ((longlong)-(uVar24 - lVar48) < (longlong)(ulonglong)uVar11)) goto LAB_140a4529e;
              if (uVar11 < 0x10) {
LAB_140a45985:
                uVar55 = 0;
              }
              else {
                uVar25 = uVar24 & 0xf;
                if ((int)uVar25 != 0) {
                  uVar25 = (ulonglong)(0x10 - (int)uVar25);
                }
                iVar27 = (int)uVar25;
                if (uVar11 < iVar27 + 0x10U) goto LAB_140a45985;
                iVar12 = uVar11 - (uVar11 - iVar27 & 0xf);
                uVar55 = 0;
                if (iVar27 != 0) {
                  do {
                    *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
                    uVar55 = uVar55 + 1;
                  } while (uVar55 < uVar25);
                }
                if ((lVar48 + uVar25 & 0xf) == 0) {
                  uVar55 = (ulonglong)iVar12;
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar48);
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
                else {
                  uVar55 = (ulonglong)iVar12;
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar48));
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
              }
              for (; uVar55 < uVar14; uVar55 = uVar55 + 1) {
                *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
              }
              uVar20 = uVar28 + uVar11;
            }
            lVar15 = (longlong)(int)uVar20;
            if (4 < (int)(uint)param_6) {
              lVar48 = lVar42 * uVar33;
              *(undefined1 *)(lVar15 + param_3) = *(undefined1 *)(lVar58 + -4 + lVar48);
              iVar27 = uVar20 + 4;
              *(undefined1 *)(lVar15 + 1 + param_3) = *(undefined1 *)(lVar58 + -3 + lVar48);
              *(undefined1 *)(lVar15 + 2 + param_3) = *(undefined1 *)(lVar58 + -2 + lVar48);
              *(undefined1 *)(lVar15 + 3 + param_3) = *(undefined1 *)(lVar58 + -1 + lVar48);
              lVar15 = (longlong)iVar27;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar31 = lVar48 + lVar58;
                  uVar16 = param_3 + lVar15;
                  if (((longlong)(4 - uVar54) <= (longlong)(uVar16 - lVar31)) ||
                     ((longlong)(4 - uVar54) <= (longlong)-(uVar16 - lVar31))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a4598c:
                      uVar25 = 0;
                    }
                    else {
                      uVar24 = uVar16 & 0xf;
                      if (uVar24 != 0) {
                        uVar24 = 0x10 - uVar24;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a4598c;
                      uVar55 = 0;
                      uVar25 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                      if (uVar24 != 0) {
                        do {
                          *(undefined1 *)(uVar55 + uVar16) = *(undefined1 *)(uVar55 + lVar31);
                          uVar55 = uVar55 + 1;
                        } while (uVar55 < uVar24);
                      }
                      if ((lVar31 + uVar24 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                          *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                          uVar24 = uVar24 + 0x10;
                        } while (uVar24 < uVar25);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                          *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                          uVar24 = uVar24 + 0x10;
                        } while (uVar24 < uVar25);
                      }
                    }
                    for (; uVar25 < uVar3; uVar25 = uVar25 + 1) {
                      *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
                    }
                    lVar15 = (longlong)(int)(iVar41 + 8 + uVar20);
                    goto LAB_140a45597;
                  }
                }
                iVar13 = 1;
                iVar12 = iVar27;
                if (uVar10 != 0) {
                  uVar16 = 0;
                  do {
                    uVar24 = uVar16;
                    *(undefined1 *)(param_3 + lVar15 + uVar24 * 2) =
                         *(undefined1 *)(lVar48 + lVar58 + uVar24 * 2);
                    *(undefined1 *)(param_3 + lVar15 + 1 + uVar24 * 2) =
                         *(undefined1 *)(lVar48 + lVar58 + 1 + uVar24 * 2);
                    uVar16 = uVar24 + 1;
                  } while (uVar16 < uVar9);
                  iVar12 = (int)uVar16 * 2 + 4 + uVar20;
                  iVar13 = (int)uVar24 + 2 + (int)uVar16;
                }
                if (iVar13 - 1U < uVar1) {
                  *(undefined1 *)((longlong)iVar13 + -1 + param_3 + lVar15) =
                       *(undefined1 *)(lVar58 + iVar13 + -1 + lVar48);
                  lVar15 = (longlong)(iVar13 + iVar27);
                }
                else {
                  lVar15 = (longlong)iVar12;
                }
              }
LAB_140a45597:
              uVar16 = lVar15 - lVar2;
              goto LAB_140a45793;
            }
          }
          if ((int)uVar1 < 1) goto LAB_140a45793;
          if (6 < (int)uVar1) {
            uVar24 = param_3 + lVar15;
            lVar48 = lVar42 * uVar33 + lVar58;
            if (((longlong)(4 - uVar54) <= (longlong)(uVar24 - lVar48)) ||
               ((longlong)(4 - uVar54) <= (longlong)-(uVar24 - lVar48))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a45993:
                uVar55 = 0;
              }
              else {
                uVar25 = uVar24 & 0xf;
                if (uVar25 != 0) {
                  uVar25 = 0x10 - uVar25;
                }
                if ((longlong)uVar3 < (longlong)(uVar25 + 0x10)) goto LAB_140a45993;
                uVar49 = 0;
                uVar55 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar25 & 0xfU));
                if (uVar25 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + uVar24) = *(undefined1 *)(uVar49 + lVar48);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar25);
                }
                if ((lVar48 + uVar25 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar48);
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar48));
                    *(undefined1 (*) [16])(uVar25 + uVar24) = in_XMM1;
                    uVar25 = uVar25 + 0x10;
                  } while (uVar25 < uVar55);
                }
              }
              for (; uVar55 < uVar3; uVar55 = uVar55 + 1) {
                *(undefined1 *)(uVar55 + uVar24) = *(undefined1 *)(uVar55 + lVar48);
              }
              goto LAB_140a45793;
            }
          }
          iVar27 = 1;
          if (uVar10 != 0) {
            lVar48 = lVar42 * uVar33 + lVar58;
            uVar24 = 0;
            do {
              uVar25 = uVar24;
              *(undefined1 *)(param_3 + lVar15 + uVar25 * 2) = *(undefined1 *)(lVar48 + uVar25 * 2);
              *(undefined1 *)(param_3 + lVar15 + 1 + uVar25 * 2) =
                   *(undefined1 *)(lVar48 + 1 + uVar25 * 2);
              uVar24 = uVar25 + 1;
            } while (uVar24 < uVar9);
            iVar27 = (int)uVar25 + 2 + (int)uVar24;
          }
          if (iVar27 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar27 + -1 + lVar15 + param_3) =
                 *(undefined1 *)(lVar58 + iVar27 + -1 + lVar42 * uVar33);
          }
          goto LAB_140a45793;
        }
        uVar24 = uVar54;
        if (0 < (int)(uint)param_6) {
          if (uVar11 < 7) {
LAB_140a45b1c:
            iVar27 = 1;
            uVar20 = param_5;
            if (uVar18 != 0) {
              lVar15 = lVar42 * uVar33 + param_1;
              uVar24 = 0;
              do {
                uVar25 = uVar24;
                *(undefined1 *)(uVar6 + uVar25 * 2) = *(undefined1 *)(lVar15 + uVar25 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar25 * 2) = *(undefined1 *)(lVar15 + 1 + uVar25 * 2);
                uVar24 = uVar25 + 1;
              } while (uVar24 < uVar23);
              iVar27 = (int)uVar25 + 2 + (int)uVar24;
              uVar20 = param_5 + (int)uVar24 * 2;
            }
            if (iVar27 - 1U < uVar11) {
              *(undefined1 *)((longlong)iVar27 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar27 + -1 + lVar42 * uVar33);
              uVar20 = param_5 + iVar27;
            }
          }
          else {
            lVar15 = lVar42 * uVar33 + param_1;
            if (((longlong)(uVar6 - lVar15) < (longlong)(ulonglong)uVar11) &&
               ((longlong)-(uVar6 - lVar15) < (longlong)(ulonglong)uVar11)) goto LAB_140a45b1c;
            if ((uVar11 < 0x10) || (uVar11 < iVar51 + 0x10U)) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              if (iVar51 != 0) {
                do {
                  *(undefined1 *)(uVar24 + uVar6) = *(undefined1 *)(uVar24 + lVar15);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar52);
              }
              uVar25 = uVar52;
              uVar24 = uVar61;
              if ((lVar15 + uVar52 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar15);
                  *(undefined1 (*) [16])(uVar25 + uVar6) = in_XMM1;
                  uVar25 = uVar25 + 0x10;
                } while (uVar25 < uVar61);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar15));
                  *(undefined1 (*) [16])(uVar25 + uVar6) = in_XMM1;
                  uVar25 = uVar25 + 0x10;
                } while (uVar25 < uVar61);
              }
            }
            for (; uVar20 = param_5 + uVar11, uVar24 < uVar14; uVar24 = uVar24 + 1) {
              *(undefined1 *)(uVar24 + uVar6) = *(undefined1 *)(uVar24 + lVar15);
            }
          }
          uVar24 = (ulonglong)(int)uVar20;
          if (4 < (int)(uint)param_6) {
            if (uVar50 == 0) {
              if (-1 < (int)uVar19) {
                iVar27 = 1;
                lVar15 = 0;
                if (uVar17 != 0) {
                  lVar48 = param_1 + uVar43 + lVar42 * uVar33;
                  uVar16 = 0;
                  do {
                    uVar25 = uVar16;
                    *(undefined1 *)(lVar15 + -1 + uVar6) = *(undefined1 *)(lVar48 + uVar25 * 2);
                    uVar16 = uVar25 + 1;
                    *(undefined1 *)(lVar15 + -2 + uVar6) = *(undefined1 *)(lVar48 + 1 + uVar25 * 2);
                    lVar15 = lVar15 + -2;
                  } while (uVar16 < uVar21);
                  iVar27 = (int)uVar25 + 2 + (int)uVar16;
                }
                if (iVar27 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar27) =
                       *(undefined1 *)(param_1 + uVar43 + (longlong)iVar27 + -1 + lVar42 * uVar33);
                }
              }
            }
            else {
              lVar15 = lVar42 * uVar33;
              if (-1 < (int)uVar19) {
                if (6 < (int)param_5) {
                  lVar48 = param_1 + lVar15;
                  lVar31 = ((param_3 - 1) + uVar54) - (lVar48 + -1);
                  if (((longlong)uVar54 < lVar31) ||
                     (-uVar54 != lVar31 && (longlong)uVar54 <= -lVar31)) {
                    if (((longlong)uVar59 < 0x10) || ((longlong)uVar59 < lVar4)) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = 0;
                      lVar15 = lVar48 - uVar54;
                      if (uVar47 != 0) {
                        do {
                          *(undefined1 *)(uVar16 + param_3) = *(undefined1 *)(uVar16 + lVar15);
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < uVar47);
                      }
                      uVar25 = uVar47;
                      uVar16 = uVar60;
                      if ((lVar15 + uVar47 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar25 + lVar15);
                          *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                          uVar25 = uVar25 + 0x10;
                        } while (uVar25 < uVar60);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar25 + lVar15));
                          *(undefined1 (*) [16])(uVar25 + param_3) = in_XMM1;
                          uVar25 = uVar25 + 0x10;
                        } while (uVar25 < uVar60);
                      }
                    }
                    if (uVar16 < uVar59) {
                      do {
                        *(undefined1 *)(uVar16 + param_3) =
                             *(undefined1 *)(uVar16 + (lVar48 - uVar54));
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar59);
                    }
                    goto LAB_140a45ede;
                  }
                }
                iVar27 = 1;
                lVar48 = 0;
                if (uVar17 != 0) {
                  uVar16 = 0;
                  do {
                    uVar25 = uVar16;
                    uVar16 = uVar25 + 1;
                    *(undefined1 *)(lVar48 + -1 + uVar6) =
                         *(undefined1 *)(lVar48 + -1 + param_1 + lVar15);
                    *(undefined1 *)(lVar48 + -2 + uVar6) =
                         *(undefined1 *)(lVar48 + -2 + param_1 + lVar15);
                    lVar48 = lVar48 + -2;
                  } while (uVar16 < uVar21);
                  iVar27 = (int)uVar25 + 2 + (int)uVar16;
                }
                if (iVar27 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar27) =
                       *(undefined1 *)((param_1 + lVar15) - (longlong)iVar27);
                }
              }
            }
LAB_140a45ede:
            lVar15 = lVar42 * uVar33;
            *(undefined1 *)(uVar24 + param_3) = *(undefined1 *)(lVar58 + -4 + lVar15);
            *(undefined1 *)(uVar24 + 1 + param_3) = *(undefined1 *)(lVar58 + -3 + lVar15);
            iVar27 = uVar20 + 4;
            *(undefined1 *)(uVar24 + 2 + param_3) = *(undefined1 *)(lVar58 + -2 + lVar15);
            *(undefined1 *)(uVar24 + 3 + param_3) = *(undefined1 *)(lVar58 + -1 + lVar15);
            lVar48 = (longlong)iVar27;
            iVar12 = iVar27;
            if (uVar26 == 0) {
              if (0 < (int)uVar1) {
                uVar16 = 0;
                iVar13 = 1;
                if (uVar10 != 0) {
                  lVar31 = lVar45 + lVar15;
                  uVar24 = uVar16;
                  do {
                    uVar25 = uVar24;
                    *(undefined1 *)(param_3 + lVar48 + uVar25 * 2) =
                         *(undefined1 *)((uVar16 - 1) + lVar31);
                    lVar56 = uVar16 - 2;
                    uVar16 = uVar16 - 2;
                    *(undefined1 *)(param_3 + lVar48 + 1 + uVar25 * 2) =
                         *(undefined1 *)(lVar56 + lVar31);
                    uVar24 = uVar25 + 1;
                  } while (uVar24 < uVar9);
                  iVar12 = (int)uVar24 * 2 + 4 + uVar20;
                  iVar13 = (int)uVar25 + 2 + (int)uVar24;
                }
                if (uVar1 <= iVar13 - 1U) goto LAB_140a461de;
                *(undefined1 *)((longlong)iVar13 + -1 + param_3 + lVar48) =
                     *(undefined1 *)((lVar15 + lVar45) - (longlong)iVar13);
                lVar48 = (longlong)(iVar13 + iVar27);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a461e1;
              if (6 < (int)uVar1) {
                lVar31 = lVar15 + lVar58;
                uVar16 = param_3 + lVar48;
                if (((longlong)(4 - uVar54) <= (longlong)(uVar16 - lVar31)) ||
                   ((longlong)(4 - uVar54) <= (longlong)-(uVar16 - lVar31))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4674f:
                    uVar25 = 0;
                  }
                  else {
                    uVar24 = uVar16 & 0xf;
                    if (uVar24 != 0) {
                      uVar24 = 0x10 - uVar24;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a4674f;
                    uVar55 = 0;
                    uVar25 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                    if (uVar24 != 0) {
                      do {
                        *(undefined1 *)(uVar55 + uVar16) = *(undefined1 *)(uVar55 + lVar31);
                        uVar55 = uVar55 + 1;
                      } while (uVar55 < uVar24);
                    }
                    if ((lVar31 + uVar24 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar31);
                        *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar25);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar31));
                        *(undefined1 (*) [16])(uVar24 + uVar16) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar25);
                    }
                  }
                  for (; uVar25 < uVar3; uVar25 = uVar25 + 1) {
                    *(undefined1 *)(uVar25 + uVar16) = *(undefined1 *)(uVar25 + lVar31);
                  }
                  lVar48 = (longlong)(int)(iVar41 + 8 + uVar20);
                  goto LAB_140a461e1;
                }
              }
              iVar13 = 1;
              if (uVar10 != 0) {
                uVar16 = 0;
                do {
                  uVar24 = uVar16;
                  *(undefined1 *)(param_3 + lVar48 + uVar24 * 2) =
                       *(undefined1 *)(lVar15 + lVar58 + uVar24 * 2);
                  *(undefined1 *)(param_3 + lVar48 + 1 + uVar24 * 2) =
                       *(undefined1 *)(lVar15 + lVar58 + 1 + uVar24 * 2);
                  uVar16 = uVar24 + 1;
                } while (uVar16 < uVar9);
                iVar12 = (int)uVar16 * 2 + 4 + uVar20;
                iVar13 = (int)uVar24 + 2 + (int)uVar16;
              }
              if (iVar13 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar13 + -1 + param_3 + lVar48) =
                     *(undefined1 *)(lVar58 + iVar13 + -1 + lVar15);
                lVar48 = (longlong)(iVar13 + iVar27);
              }
              else {
LAB_140a461de:
                lVar48 = (longlong)iVar12;
              }
            }
LAB_140a461e1:
            uVar16 = lVar48 - lVar2;
            goto LAB_140a45793;
          }
        }
        uVar25 = (ulonglong)uVar19;
        if (uVar50 == 0) {
          uVar20 = uVar19;
          if (uVar26 == 0) {
            while (-1 < (int)uVar20) {
              uVar20 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar25 = (ulonglong)(int)uVar25;
                lVar48 = uVar43 + 1 + uVar25;
                lVar15 = param_3 + uVar25;
                do {
                  if ((int)uVar25 < 0) break;
                  lVar31 = (longlong)(int)uVar20;
                  uVar20 = uVar20 + 1;
                  uVar25 = (ulonglong)((int)uVar25 - 1);
                  *(undefined1 *)(lVar15 - lVar31) = *(undefined1 *)(lVar31 + lVar48 + param_3);
                } while (uVar20 < uVar40);
              }
              uVar20 = (uint)uVar25;
            }
            uVar24 = 0;
            iVar27 = (((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1) + 2;
            iVar12 = iVar34;
            iVar13 = iVar34;
            if ((int)param_5 < 4) {
              do {
                iVar53 = iVar27 + iVar12;
                *(undefined1 *)(uVar24 + lVar7) = *(undefined1 *)((longlong)iVar27 + param_3);
                if (((int)(((uint)param_6 + 4) - uVar1) <= iVar53) || (iVar53 < (int)param_5)) {
                  iVar27 = iVar12 + iVar13;
                  iVar12 = -iVar12;
                  iVar53 = iVar53 - iVar27;
                  iVar13 = -iVar13;
                }
                uVar24 = uVar24 + 1;
                iVar27 = iVar53;
              } while (uVar24 < uVar3);
            }
          }
          else {
            if (-1 < (int)uVar19) {
              iVar27 = 1;
              lVar15 = 0;
              if (uVar17 != 0) {
                lVar48 = lVar42 * uVar33 + param_1;
                uVar25 = 0;
                do {
                  uVar55 = uVar25;
                  *(undefined1 *)(lVar15 + -1 + uVar6) = *(undefined1 *)(lVar48 + 1 + uVar55 * 2);
                  uVar25 = uVar55 + 1;
                  *(undefined1 *)(lVar15 + -2 + uVar6) = *(undefined1 *)(lVar48 + 2 + uVar55 * 2);
                  lVar15 = lVar15 + -2;
                } while (uVar25 < uVar21);
                iVar27 = (int)uVar55 + 2 + (int)uVar25;
              }
              if (iVar27 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar27) =
                     *(undefined1 *)(param_1 + iVar27 + lVar42 * uVar33);
              }
            }
LAB_140a46497:
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                uVar25 = param_3 + uVar24;
                lVar15 = lVar42 * uVar33 + lVar58;
                if (((longlong)(4 - uVar54) <= (longlong)(uVar25 - lVar15)) ||
                   ((longlong)(4 - uVar54) <= (longlong)-(uVar25 - lVar15))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a46756:
                    uVar55 = 0;
                  }
                  else {
                    uVar24 = uVar25 & 0xf;
                    if (uVar24 != 0) {
                      uVar24 = 0x10 - uVar24;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar24 + 0x10)) goto LAB_140a46756;
                    uVar49 = 0;
                    uVar55 = (ulonglong)(int)(iVar37 - (iVar37 - (int)uVar24 & 0xfU));
                    if (uVar24 != 0) {
                      do {
                        *(undefined1 *)(uVar49 + uVar25) = *(undefined1 *)(uVar49 + lVar15);
                        uVar49 = uVar49 + 1;
                      } while (uVar49 < uVar24);
                    }
                    if ((lVar15 + uVar24 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar24 + lVar15);
                        *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar55);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar24 + lVar15));
                        *(undefined1 (*) [16])(uVar24 + uVar25) = in_XMM1;
                        uVar24 = uVar24 + 0x10;
                      } while (uVar24 < uVar55);
                    }
                  }
                  for (; uVar55 < uVar3; uVar55 = uVar55 + 1) {
                    *(undefined1 *)(uVar55 + uVar25) = *(undefined1 *)(uVar55 + lVar15);
                  }
                  goto LAB_140a45793;
                }
              }
              iVar27 = 1;
              if (uVar10 != 0) {
                lVar15 = lVar42 * uVar33 + lVar58;
                uVar25 = 0;
                do {
                  uVar55 = uVar25;
                  *(undefined1 *)(param_3 + uVar24 + uVar55 * 2) =
                       *(undefined1 *)(lVar15 + uVar55 * 2);
                  *(undefined1 *)(param_3 + uVar24 + 1 + uVar55 * 2) =
                       *(undefined1 *)(lVar15 + 1 + uVar55 * 2);
                  uVar25 = uVar55 + 1;
                } while (uVar25 < uVar9);
                iVar27 = (int)uVar55 + 2 + (int)uVar25;
              }
              if (iVar27 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar27 + -1 + uVar24 + param_3) =
                     *(undefined1 *)(lVar58 + iVar27 + -1 + lVar42 * uVar33);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar19) {
            do {
              uVar20 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar27 = (int)uVar25;
                do {
                  if ((int)uVar25 < 0) break;
                  lVar15 = (longlong)(int)uVar20;
                  uVar20 = uVar20 + 1;
                  uVar25 = (ulonglong)((int)uVar25 - 1);
                  *(undefined1 *)((param_3 + (longlong)iVar27) - lVar15) =
                       *(undefined1 *)(((longlong)iVar27 + lVar42 * uVar33 + lVar38) - lVar15);
                } while (uVar20 < uVar40);
              }
            } while (-1 < (int)uVar25);
          }
          if (uVar26 != 0) goto LAB_140a46497;
          if (0 < (int)uVar1) {
            iVar27 = 1;
            lVar15 = 0;
            if (uVar10 != 0) {
              lVar48 = lVar42 * uVar33 + lVar58;
              uVar25 = 0;
              do {
                uVar55 = uVar25;
                *(undefined1 *)(param_3 + uVar24 + uVar55 * 2) =
                     *(undefined1 *)(lVar15 + -2 + lVar48);
                lVar31 = lVar15 + -3;
                lVar15 = lVar15 + -2;
                *(undefined1 *)(param_3 + uVar24 + 1 + uVar55 * 2) =
                     *(undefined1 *)(lVar31 + lVar48);
                uVar25 = uVar55 + 1;
              } while (uVar25 < uVar9);
              iVar27 = (int)uVar55 + 2 + (int)uVar25;
            }
            if (iVar27 - 1U < uVar1) {
              *(undefined1 *)((longlong)iVar27 + -1 + uVar24 + param_3) =
                   *(undefined1 *)((lVar58 - iVar27) + -1 + lVar42 * uVar33);
            }
          }
        }
      }
LAB_140a45793:
      iVar27 = 0;
      uVar24 = 0;
      if (0 < (int)(uint)param_6) {
        do {
          if ((longlong)uVar54 <= (longlong)uVar24) break;
          *(ushort *)(*(longlong *)(param_2 + uVar33 * 8) + uVar24 * 2) =
               (ushort)*(byte *)(uVar24 + param_3) + (ushort)*(byte *)(uVar24 + 2 + param_3) * -2 +
               (ushort)*(byte *)(uVar24 + 4 + param_3);
          uVar25 = uVar24 + 1;
          iVar27 = (int)uVar24 + 1;
          uVar24 = uVar25;
        } while (uVar25 < uVar32);
      }
      lVar15 = (longlong)iVar27;
      if (0 < (int)uVar44) {
        iVar13 = 1;
        iVar12 = iVar27;
        if (uVar44 >> 1 != 0) {
          lVar48 = lVar42 * uVar33 + param_1;
          uVar24 = 0;
          do {
            uVar25 = uVar24;
            *(ushort *)(*(longlong *)(param_2 + uVar33 * 8) + lVar15 * 2 + uVar25 * 4) =
                 (ushort)*(byte *)(lVar48 + uVar25 * 2) +
                 (ushort)*(byte *)(lVar48 + 2 + uVar25 * 2) * -2 +
                 (ushort)*(byte *)(lVar48 + 4 + uVar25 * 2);
            *(ushort *)(*(longlong *)(param_2 + uVar33 * 8) + lVar15 * 2 + 2 + uVar25 * 4) =
                 (ushort)*(byte *)(lVar48 + 1 + uVar25 * 2) +
                 (ushort)*(byte *)(lVar48 + 3 + uVar25 * 2) * -2 +
                 (ushort)*(byte *)(lVar48 + 5 + uVar25 * 2);
            uVar24 = uVar25 + 1;
          } while (uVar24 < uVar44 >> 1);
          iVar12 = iVar27 + (int)uVar24 * 2;
          iVar13 = (int)uVar25 + 2 + (int)uVar24;
        }
        if (iVar13 - 1U < uVar44) {
          lVar31 = lVar42 * uVar33;
          lVar48 = param_1 + iVar13;
          lVar56 = iVar13 + lVar15;
          lVar15 = (longlong)(iVar13 + iVar27);
          *(ushort *)(*(longlong *)(param_2 + uVar33 * 8) + -2 + lVar56 * 2) =
               (ushort)*(byte *)(lVar48 + -1 + lVar31) + (ushort)*(byte *)(lVar48 + 1 + lVar31) * -2
               + (ushort)*(byte *)(lVar48 + 3 + lVar31);
        }
        else {
          lVar15 = (longlong)iVar12;
        }
      }
      uVar24 = 0;
      if (0 < (int)uVar1) {
        lVar48 = uVar16 + param_3;
        do {
          if ((longlong)(uVar32 - uVar54) <= (longlong)uVar24) break;
          *(ushort *)(*(longlong *)(param_2 + uVar33 * 8) + lVar15 * 2 + uVar24 * 2) =
               (ushort)*(byte *)(uVar24 + lVar48) + (ushort)*(byte *)(uVar24 + 2 + lVar48) * -2 +
               (ushort)*(byte *)(uVar24 + 4 + lVar48);
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar3);
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

