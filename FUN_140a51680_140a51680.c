
undefined8
FUN_140a51680(longlong param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  int iVar36;
  ulonglong uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong lVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  uint uVar54;
  int iVar55;
  longlong lVar56;
  ulonglong uVar57;
  int iVar58;
  longlong lVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined4 uVar63;
  undefined8 uVar64;
  undefined1 in_XMM1 [16];
  int iStack_2a8;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  
  lVar32 = (longlong)param_4;
  if (0 < param_6._4_4_) {
    uVar21 = (ulonglong)(int)param_5;
    uVar37 = param_3 & 0xf;
    lVar12 = param_1 - uVar21;
    uVar6 = param_3 + uVar21;
    uVar18 = uVar37;
    if (uVar37 != 0) {
      uVar18 = 0x10 - uVar37;
    }
    uVar17 = 4;
    if ((uint)param_6 < 5) {
      uVar17 = (uint)param_6;
    }
    lVar33 = -uVar21;
    uVar13 = (ulonglong)(1 < (int)(uint)param_6);
    uVar20 = (ulonglong)(int)(uint)param_6;
    uVar2 = lVar33 + 4;
    lVar3 = lVar33 + 8;
    uVar19 = (ulonglong)(int)uVar17;
    uVar29 = param_7 & 0xf;
    uVar9 = (uint)param_6 - (1 < (int)(uint)param_6);
    iVar10 = -param_5;
    uVar23 = param_5 >> 1;
    uVar26 = (ulonglong)uVar23;
    uVar34 = 0xffffffffffffffff - (lVar33 + -1);
    uVar1 = iVar10 + 4;
    uVar24 = uVar1 >> 1;
    uVar27 = (ulonglong)uVar24;
    uVar31 = uVar6 & 0xf;
    uVar60 = param_7 & 0x40;
    uVar25 = uVar17 >> 1;
    uVar28 = (ulonglong)uVar25;
    lVar14 = param_3 - uVar20;
    lVar33 = uVar20 + uVar6;
    lVar7 = param_1 + uVar20;
    uVar54 = (uint)param_6 - 4;
    if ((int)uVar31 != 0) {
      uVar31 = (ulonglong)(0x10 - (int)uVar31);
    }
    iVar45 = ((int)(uint)param_6 < 2) - 1;
    if (uVar37 != 0) {
      uVar37 = 0x10 - uVar37;
    }
    lVar56 = (param_1 - uVar13) + uVar20;
    uVar38 = 1;
    if ((param_7 & 0xc0) != 0) {
      uVar38 = uVar29;
    }
    lVar15 = lVar33 - uVar21;
    iVar30 = (int)uVar31;
    uVar46 = param_5 - (param_5 - (int)uVar18 & 0xf);
    uVar63 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
    iVar39 = uVar17 - (uVar17 - iVar30 & 0xf);
    uVar64 = CONCAT44(uVar63,uVar63);
    uVar61 = param_7 & 0x80;
    uVar43 = (ulonglong)iVar39;
    lVar4 = uVar37 + 0x10;
    uVar48 = (ulonglong)(int)uVar46;
    uVar35 = (ulonglong)(int)((int)uVar34 - ((int)uVar34 - (int)uVar37 & 0xfU));
    lVar5 = uVar18 + 0x10;
    uVar62 = param_5 - 1;
    iVar58 = (int)uVar2;
    uVar22 = 0;
    do {
      uVar53 = uVar21;
      if ((uint)param_6 == 1) {
        uVar47 = uVar38;
        if (uVar29 != 6) goto LAB_140a51a5e;
LAB_140a550b1:
        uVar47 = 0;
        uVar42 = 0;
        if (uVar60 == 0) {
          if (0 < (int)param_5) {
            if ((0xf < (longlong)uVar21) && (lVar5 <= (longlong)uVar21)) {
              uVar50 = 0;
              uVar49 = uVar18;
              if (uVar18 != 0) {
                do {
                  *(undefined1 *)(uVar50 + param_3) = param_8;
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar18);
              }
              do {
                *(undefined8 *)(uVar49 + param_3) = uVar64;
                ((undefined8 *)(uVar49 + param_3))[1] = uVar64;
                uVar49 = uVar49 + 0x10;
                uVar47 = uVar46;
              } while (uVar49 < uVar48);
            }
            uVar49 = (ulonglong)(int)uVar47;
            uVar42 = uVar47;
            if (uVar49 < uVar21) {
              do {
                *(undefined1 *)(uVar49 + param_3) = param_8;
                uVar49 = uVar49 + 1;
              } while (uVar49 < uVar21);
              uVar42 = (uint)uVar49;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar44 = lVar32 * uVar22;
            lVar16 = param_3 - ((int)-param_5 + param_1 + lVar44);
            if (((longlong)uVar21 <= lVar16) || ((longlong)uVar21 <= -lVar16)) {
              if (((longlong)uVar21 < 0x10) || ((longlong)uVar21 < lVar5)) {
                uVar49 = 0;
              }
              else {
                uVar49 = 0;
                lVar16 = lVar44 + lVar12;
                if (uVar18 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar16);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar18);
                }
                uVar50 = uVar18;
                uVar49 = uVar48;
                if ((lVar16 + uVar18 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar16);
                    *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar48);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar16));
                    *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar48);
                }
              }
              uVar42 = param_5;
              if (uVar49 < uVar21) {
                do {
                  *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar44 + lVar12);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar21);
              }
              goto LAB_140a553b4;
            }
          }
          uVar40 = 1;
          if (uVar23 != 0) {
            lVar16 = lVar32 * uVar22 + lVar12;
            uVar49 = 0;
            do {
              uVar50 = uVar49;
              *(undefined1 *)(param_3 + uVar50 * 2) = *(undefined1 *)(lVar16 + uVar50 * 2);
              *(undefined1 *)(param_3 + 1 + uVar50 * 2) = *(undefined1 *)(lVar16 + 1 + uVar50 * 2);
              uVar49 = uVar50 + 1;
            } while (uVar49 < uVar26);
            uVar47 = (int)uVar49 * 2;
            uVar40 = (int)uVar50 + 2 + (int)uVar49;
          }
          uVar42 = uVar47;
          if (uVar40 - 1 < param_5) {
            *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                 *(undefined1 *)(lVar12 + (int)uVar40 + -1 + lVar32 * uVar22);
            uVar42 = uVar40;
          }
        }
LAB_140a553b4:
        lVar16 = (longlong)(int)uVar42;
        if ((int)(uint)param_6 < 1) {
          if (uVar61 == 0) {
joined_r0x000140a5566f:
            if (0 < (int)uVar1) {
LAB_140a556aa:
              if ((longlong)uVar2 < 0x10) {
LAB_140a55a22:
                iVar41 = 0;
              }
              else {
                uVar49 = param_3 + lVar16;
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar2 < (longlong)(uVar50 + 0x10)) goto LAB_140a55a22;
                uVar57 = 0;
                iVar41 = iVar58 - (iVar58 - (int)uVar50 & 0xfU);
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar57 + uVar49) = param_8;
                    uVar57 = uVar57 + 1;
                  } while (uVar57 < uVar50);
                }
                do {
                  *(undefined8 *)(uVar50 + uVar49) = uVar64;
                  ((undefined8 *)(uVar50 + uVar49))[1] = uVar64;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < (ulonglong)(longlong)iVar41);
                uVar42 = (int)lVar16 + iVar41;
              }
              uVar49 = (ulonglong)iVar41;
              if (uVar49 < uVar2) {
                do {
                  *(undefined1 *)(uVar49 + param_3 + lVar16) = param_8;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar2);
                uVar42 = (int)uVar49 + (int)lVar16;
              }
              goto LAB_140a559f3;
            }
          }
          else if (0 < (int)uVar1) goto LAB_140a557e5;
        }
        else {
          if (uVar17 < 7) {
LAB_140a5555f:
            iVar41 = 1;
            uVar47 = uVar42;
            if (uVar25 != 0) {
              lVar44 = lVar32 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(param_3 + lVar16 + uVar50 * 2) =
                     *(undefined1 *)(lVar44 + uVar50 * 2);
                *(undefined1 *)(param_3 + lVar16 + 1 + uVar50 * 2) =
                     *(undefined1 *)(lVar44 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar28);
              uVar47 = uVar42 + (int)uVar49 * 2;
              iVar41 = (int)uVar50 + 2 + (int)uVar49;
            }
            if (iVar41 - 1U < uVar17) {
              *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar16) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar32 * uVar22);
              uVar47 = uVar42 + iVar41;
            }
          }
          else {
            uVar49 = param_3 + lVar16;
            lVar44 = lVar32 * uVar22 + param_1;
            if (((longlong)(uVar49 - lVar44) < (longlong)(ulonglong)uVar17) &&
               ((longlong)-(uVar49 - lVar44) < (longlong)(ulonglong)uVar17)) goto LAB_140a5555f;
            if (uVar17 < 0x10) {
LAB_140a55a1a:
              uVar57 = 0;
            }
            else {
              uVar50 = uVar49 & 0xf;
              if ((int)uVar50 != 0) {
                uVar50 = (ulonglong)(0x10 - (int)uVar50);
              }
              iVar41 = (int)uVar50;
              if (uVar17 < iVar41 + 0x10U) goto LAB_140a55a1a;
              iVar11 = uVar17 - (uVar17 - iVar41 & 0xf);
              uVar57 = 0;
              if (iVar41 != 0) {
                do {
                  *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
                  uVar57 = uVar57 + 1;
                } while (uVar57 < uVar50);
              }
              if ((lVar44 + uVar50 & 0xf) == 0) {
                uVar57 = (ulonglong)iVar11;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar44);
                  *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar57);
              }
              else {
                uVar57 = (ulonglong)iVar11;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar44));
                  *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar57);
              }
            }
            for (; uVar57 < uVar19; uVar57 = uVar57 + 1) {
              *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
            }
            uVar47 = uVar42 + uVar17;
          }
          uVar42 = uVar47;
          lVar16 = (longlong)(int)uVar42;
          if ((int)(uint)param_6 < 5) {
            if (uVar61 == 0) goto joined_r0x000140a5566f;
            if ((int)uVar1 < 1) goto LAB_140a52334;
LAB_140a557e5:
            iVar41 = (int)lVar16;
            if ((int)uVar1 < 7) {
LAB_140a55962:
              iVar11 = 1;
              if (uVar24 != 0) {
                lVar44 = lVar32 * uVar22 + lVar7;
                uVar49 = 0;
                do {
                  uVar50 = uVar49;
                  *(undefined1 *)(param_3 + lVar16 + uVar50 * 2) =
                       *(undefined1 *)(lVar44 + uVar50 * 2);
                  *(undefined1 *)(param_3 + lVar16 + 1 + uVar50 * 2) =
                       *(undefined1 *)(lVar44 + 1 + uVar50 * 2);
                  uVar49 = uVar50 + 1;
                } while (uVar49 < uVar27);
                uVar42 = iVar41 + (int)uVar49 * 2;
                iVar11 = (int)uVar50 + 2 + (int)uVar49;
              }
              if (iVar11 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar11 + -1 + param_3 + lVar16) =
                     *(undefined1 *)(lVar7 + iVar11 + -1 + lVar32 * uVar22);
                uVar42 = iVar41 + iVar11;
              }
            }
            else {
              uVar49 = param_3 + lVar16;
              lVar44 = lVar32 * uVar22 + lVar7;
              if (((longlong)(uVar49 - lVar44) < (longlong)(4 - uVar21)) &&
                 ((longlong)-(uVar49 - lVar44) < (longlong)(4 - uVar21))) goto LAB_140a55962;
              if ((longlong)uVar2 < 0x10) {
LAB_140a55a2a:
                uVar57 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar2 < (longlong)(uVar50 + 0x10)) goto LAB_140a55a2a;
                uVar51 = 0;
                uVar57 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar50 & 0xfU));
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar49) = *(undefined1 *)(uVar51 + lVar44);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar50);
                }
                if ((lVar44 + uVar50 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar44);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar44));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
              }
              for (; uVar57 < uVar2; uVar57 = uVar57 + 1) {
                *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
              }
              uVar42 = iVar41 + 4 + iVar10;
            }
LAB_140a559f3:
            if ((int)(uint)param_6 < 5) goto LAB_140a52334;
            lVar16 = (longlong)(int)uVar42;
          }
          else {
            uVar42 = uVar42 + 4;
            lVar44 = lVar32 * uVar22;
            *(undefined1 *)(lVar16 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar44);
            *(undefined1 *)(lVar16 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar44);
            *(undefined1 *)(lVar16 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar44);
            *(undefined1 *)(lVar16 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar44);
            lVar16 = (longlong)(int)uVar42;
            if (uVar61 == 0) {
              if (0 < (int)uVar1) goto LAB_140a556aa;
            }
            else if (0 < (int)uVar1) goto LAB_140a557e5;
          }
          uVar53 = lVar16 - lVar3;
        }
        goto LAB_140a52334;
      }
      uVar47 = uVar29;
      if (uVar29 == 6) goto LAB_140a550b1;
LAB_140a51a5e:
      if (uVar47 == 1) {
        uVar47 = 0;
        lVar16 = lVar32 * uVar22;
        uVar8 = *(undefined1 *)(param_1 + lVar16);
        uVar42 = 0;
        if (uVar60 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar21 < 0x10) || ((longlong)uVar21 < lVar5)) {
              uVar53 = 0;
            }
            else {
              uVar53 = 0;
              if (uVar18 != 0) {
                do {
                  *(undefined1 *)(uVar53 + param_3) = uVar8;
                  uVar53 = uVar53 + 1;
                } while (uVar53 < uVar18);
              }
              uVar63 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar8,uVar8));
              in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              uVar49 = uVar18;
              do {
                *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                uVar49 = uVar49 + 0x10;
                uVar53 = uVar48;
                uVar47 = uVar46;
              } while (uVar49 < uVar48);
            }
            uVar42 = uVar47;
            if (uVar53 < uVar21) {
              do {
                *(undefined1 *)(uVar53 + param_3) = uVar8;
                uVar53 = uVar53 + 1;
              } while (uVar53 < uVar21);
              uVar42 = (uint)uVar53;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar44 = param_3 - ((int)-param_5 + param_1 + lVar16), lVar44 < (longlong)uVar21 &&
              (-lVar44 < (longlong)uVar21)))) {
            uVar40 = 1;
            if (uVar23 != 0) {
              uVar53 = 0;
              do {
                uVar49 = uVar53;
                *(undefined1 *)(param_3 + uVar49 * 2) =
                     *(undefined1 *)(lVar12 + lVar16 + uVar49 * 2);
                *(undefined1 *)(param_3 + 1 + uVar49 * 2) =
                     *(undefined1 *)(lVar12 + lVar16 + 1 + uVar49 * 2);
                uVar53 = uVar49 + 1;
              } while (uVar53 < uVar26);
              uVar47 = (int)uVar53 * 2;
              uVar40 = (int)uVar49 + 2 + (int)uVar53;
            }
            uVar42 = uVar47;
            if (uVar40 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                   *(undefined1 *)(lVar12 + (int)uVar40 + -1 + lVar16);
              uVar42 = uVar40;
            }
          }
          else {
            if (((longlong)uVar21 < 0x10) || ((longlong)uVar21 < lVar5)) {
              uVar53 = 0;
            }
            else {
              uVar53 = 0;
              lVar44 = lVar16 + lVar12;
              if (uVar18 != 0) {
                do {
                  *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar44);
                  uVar53 = uVar53 + 1;
                } while (uVar53 < uVar18);
              }
              uVar49 = uVar18;
              uVar53 = uVar48;
              if ((lVar44 + uVar18 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar44);
                  *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar48);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar44));
                  *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar48);
              }
            }
            uVar42 = param_5;
            if (uVar53 < uVar21) {
              do {
                *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar12 + lVar16);
                uVar53 = uVar53 + 1;
              } while (uVar53 < uVar21);
            }
          }
        }
        lVar44 = (longlong)(int)uVar42;
        if (0 < (int)(uint)param_6) {
          if (uVar17 < 7) {
LAB_140a54c3f:
            iVar41 = 1;
            uVar47 = uVar42;
            if (uVar25 != 0) {
              uVar53 = 0;
              do {
                uVar49 = uVar53;
                *(undefined1 *)(param_3 + lVar44 + uVar49 * 2) =
                     *(undefined1 *)(param_1 + lVar16 + uVar49 * 2);
                *(undefined1 *)(param_3 + lVar44 + 1 + uVar49 * 2) =
                     *(undefined1 *)(param_1 + lVar16 + 1 + uVar49 * 2);
                uVar53 = uVar49 + 1;
              } while (uVar53 < uVar28);
              uVar47 = uVar42 + (int)uVar53 * 2;
              iVar41 = (int)uVar49 + 2 + (int)uVar53;
            }
            if (iVar41 - 1U < uVar17) {
              *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar44) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar16);
              uVar47 = uVar42 + iVar41;
            }
          }
          else {
            lVar52 = param_1 + lVar16;
            uVar53 = param_3 + lVar44;
            if (((longlong)(uVar53 - lVar52) < (longlong)(ulonglong)uVar17) &&
               ((longlong)-(uVar53 - lVar52) < (longlong)(ulonglong)uVar17)) goto LAB_140a54c3f;
            if (uVar17 < 0x10) {
LAB_140a5509a:
              uVar50 = 0;
            }
            else {
              uVar49 = uVar53 & 0xf;
              if ((int)uVar49 != 0) {
                uVar49 = (ulonglong)(0x10 - (int)uVar49);
              }
              iVar41 = (int)uVar49;
              if (uVar17 < iVar41 + 0x10U) goto LAB_140a5509a;
              iVar11 = uVar17 - (uVar17 - iVar41 & 0xf);
              uVar50 = 0;
              if (iVar41 != 0) {
                do {
                  *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar49);
              }
              if ((lVar52 + uVar49 & 0xf) == 0) {
                uVar50 = (ulonglong)iVar11;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar52);
                  *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar50);
              }
              else {
                uVar50 = (ulonglong)iVar11;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar52));
                  *(undefined1 (*) [16])(uVar49 + uVar53) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar50);
              }
            }
            for (; uVar50 < uVar19; uVar50 = uVar50 + 1) {
              *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
            }
            uVar47 = uVar42 + uVar17;
          }
          uVar42 = uVar47;
          lVar44 = (longlong)(int)uVar42;
          if (4 < (int)(uint)param_6) {
            uVar42 = uVar42 + 4;
            *(undefined1 *)(lVar44 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar16);
            *(undefined1 *)(lVar44 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar16);
            *(undefined1 *)(lVar44 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar16);
            *(undefined1 *)(lVar44 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar16);
            lVar44 = (longlong)(int)uVar42;
          }
        }
        uVar8 = *(undefined1 *)(uVar20 + param_1 + -1 + lVar16);
        iVar41 = (int)lVar44;
        if (uVar61 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar2 < 0x10) {
LAB_140a550a1:
              iVar11 = 0;
            }
            else {
              uVar53 = param_3 + lVar44;
              uVar49 = uVar53 & 0xf;
              if (uVar49 != 0) {
                uVar49 = 0x10 - uVar49;
              }
              if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a550a1;
              uVar50 = 0;
              iVar11 = iVar58 - (iVar58 - (int)uVar49 & 0xfU);
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
              } while (uVar49 < (ulonglong)(longlong)iVar11);
              uVar42 = iVar41 + iVar11;
            }
            uVar53 = (ulonglong)iVar11;
            if (uVar2 <= uVar53) goto LAB_140a5506f;
            do {
              *(undefined1 *)(uVar53 + param_3 + lVar44) = uVar8;
              uVar53 = uVar53 + 1;
            } while (uVar53 < uVar2);
            lVar44 = (longlong)((int)uVar53 + iVar41);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a55072;
          if (6 < (int)uVar1) {
            lVar52 = lVar16 + lVar7;
            uVar53 = param_3 + lVar44;
            if (((longlong)(4 - uVar21) <= (longlong)(uVar53 - lVar52)) ||
               ((longlong)(4 - uVar21) <= (longlong)-(uVar53 - lVar52))) {
              if ((longlong)uVar2 < 0x10) {
LAB_140a550a9:
                uVar50 = 0;
              }
              else {
                uVar49 = uVar53 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a550a9;
                uVar57 = 0;
                uVar50 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar57 + uVar53) = *(undefined1 *)(uVar57 + lVar52);
                    uVar57 = uVar57 + 1;
                  } while (uVar57 < uVar49);
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
              for (; uVar50 < uVar2; uVar50 = uVar50 + 1) {
                *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
              }
              lVar44 = (longlong)(iVar41 + 4 + iVar10);
              goto LAB_140a55072;
            }
          }
          iVar11 = 1;
          if (uVar24 != 0) {
            uVar53 = 0;
            do {
              uVar49 = uVar53;
              *(undefined1 *)(param_3 + lVar44 + uVar49 * 2) =
                   *(undefined1 *)(lVar16 + lVar7 + uVar49 * 2);
              *(undefined1 *)(param_3 + lVar44 + 1 + uVar49 * 2) =
                   *(undefined1 *)(lVar16 + lVar7 + 1 + uVar49 * 2);
              uVar53 = uVar49 + 1;
            } while (uVar53 < uVar27);
            uVar42 = iVar41 + (int)uVar53 * 2;
            iVar11 = (int)uVar49 + 2 + (int)uVar53;
          }
          if (iVar11 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar11 + -1 + param_3 + lVar44) =
                 *(undefined1 *)(lVar7 + iVar11 + -1 + lVar16);
            lVar44 = (longlong)(iVar11 + iVar41);
            goto LAB_140a55072;
          }
LAB_140a5506f:
          lVar44 = (longlong)(int)uVar42;
        }
LAB_140a55072:
        uVar53 = lVar44 - lVar3;
        if ((int)(uint)param_6 < 5) {
          uVar53 = uVar21;
        }
      }
      else if (uVar47 == 2) {
        uVar49 = uVar21;
        if (0 < (int)(uint)param_6) {
          if (uVar17 < 7) {
LAB_140a534fd:
            iVar41 = 1;
            uVar47 = param_5;
            if (uVar25 != 0) {
              lVar16 = lVar32 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(uVar6 + uVar50 * 2) = *(undefined1 *)(lVar16 + uVar50 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar50 * 2) = *(undefined1 *)(lVar16 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar28);
              iVar41 = (int)uVar50 + 2 + (int)uVar49;
              uVar47 = param_5 + (int)uVar49 * 2;
            }
            if (iVar41 - 1U < uVar17) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar32 * uVar22);
              uVar47 = param_5 + iVar41;
            }
          }
          else {
            lVar16 = lVar32 * uVar22 + param_1;
            if (((longlong)(uVar6 - lVar16) < (longlong)(ulonglong)uVar17) &&
               ((longlong)-(uVar6 - lVar16) < (longlong)(ulonglong)uVar17)) goto LAB_140a534fd;
            if ((uVar17 < 0x10) || (uVar17 < iVar30 + 0x10U)) {
              iVar41 = 0;
            }
            else {
              uVar49 = 0;
              if (iVar30 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar6) = *(undefined1 *)(uVar49 + lVar16);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar31);
              }
              uVar49 = uVar31;
              iVar41 = iVar39;
              if ((lVar16 + uVar31 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar16);
                  *(undefined1 (*) [16])(uVar49 + uVar6) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar43);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar16));
                  *(undefined1 (*) [16])(uVar49 + uVar6) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar43);
              }
            }
            for (uVar49 = (ulonglong)iVar41; uVar47 = param_5 + uVar17, uVar49 < uVar19;
                uVar49 = uVar49 + 1) {
              *(undefined1 *)(uVar49 + uVar6) = *(undefined1 *)(uVar49 + lVar16);
            }
          }
          uVar49 = (ulonglong)(int)uVar47;
          if (4 < (int)(uint)param_6) {
            lVar16 = lVar32 * uVar22;
            if (uVar60 == 0) {
              if (-1 < (int)uVar62) {
                if (6 < (int)param_5) {
                  lVar44 = lVar16 + lVar7;
                  lVar52 = ((param_3 - 1) + uVar21) - (lVar44 + -1);
                  if (((longlong)uVar21 < lVar52) ||
                     (-uVar21 != lVar52 && (longlong)uVar21 <= -lVar52)) {
                    if (((longlong)uVar34 < 0x10) || ((longlong)uVar34 < lVar4)) {
                      uVar53 = 0;
                    }
                    else {
                      uVar53 = 0;
                      lVar52 = lVar44 - uVar21;
                      if (uVar37 != 0) {
                        do {
                          *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar52);
                          uVar53 = uVar53 + 1;
                        } while (uVar53 < uVar37);
                      }
                      uVar50 = uVar37;
                      uVar53 = uVar35;
                      if ((lVar52 + uVar37 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar52);
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar35);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar52));
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar35);
                      }
                    }
                    if (uVar53 < uVar34) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) =
                             *(undefined1 *)(uVar53 + (lVar44 - uVar21));
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar34);
                    }
                    goto LAB_140a53a1d;
                  }
                }
                iVar41 = 1;
                lVar44 = 0;
                if (uVar23 != 0) {
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar44 + -1 + uVar6) =
                         *(undefined1 *)(lVar44 + -1 + lVar16 + lVar7);
                    *(undefined1 *)(lVar44 + -2 + uVar6) =
                         *(undefined1 *)(lVar44 + -2 + lVar16 + lVar7);
                    lVar44 = lVar44 + -2;
                  } while (uVar53 < uVar26);
                  iVar41 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)((lVar16 + lVar7) - (longlong)iVar41);
                }
              }
            }
            else if (-1 < (int)uVar62) {
              if (6 < (int)param_5) {
                lVar44 = param_1 + lVar16;
                lVar52 = ((param_3 - 1) + uVar21) - (lVar44 + -1);
                if (((longlong)uVar21 < lVar52) ||
                   (-uVar21 != lVar52 && (longlong)uVar21 <= -lVar52)) {
                  if (((longlong)uVar34 < 0x10) || ((longlong)uVar34 < lVar4)) {
                    uVar53 = 0;
                  }
                  else {
                    uVar53 = 0;
                    lVar52 = lVar44 - uVar21;
                    if (uVar37 != 0) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar52);
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar37);
                    }
                    uVar50 = uVar37;
                    uVar53 = uVar35;
                    if ((lVar52 + uVar37 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar52);
                        *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                        uVar50 = uVar50 + 0x10;
                      } while (uVar50 < uVar35);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar52));
                        *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                        uVar50 = uVar50 + 0x10;
                      } while (uVar50 < uVar35);
                    }
                  }
                  if (uVar53 < uVar34) {
                    do {
                      *(undefined1 *)(uVar53 + param_3) =
                           *(undefined1 *)(uVar53 + (lVar44 - uVar21));
                      uVar53 = uVar53 + 1;
                    } while (uVar53 < uVar34);
                  }
                  goto LAB_140a53a1d;
                }
              }
              iVar41 = 1;
              lVar44 = 0;
              if (uVar23 != 0) {
                uVar53 = 0;
                do {
                  uVar50 = uVar53;
                  uVar53 = uVar50 + 1;
                  *(undefined1 *)(lVar44 + -1 + uVar6) =
                       *(undefined1 *)(lVar44 + -1 + param_1 + lVar16);
                  *(undefined1 *)(lVar44 + -2 + uVar6) =
                       *(undefined1 *)(lVar44 + -2 + param_1 + lVar16);
                  lVar44 = lVar44 + -2;
                } while (uVar53 < uVar26);
                iVar41 = (int)uVar50 + 2 + (int)uVar53;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) =
                     *(undefined1 *)((param_1 + lVar16) - (longlong)iVar41);
              }
            }
LAB_140a53a1d:
            *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar16);
            *(undefined1 *)(uVar49 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar16);
            iVar11 = uVar47 + 4;
            *(undefined1 *)(uVar49 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar16);
            *(undefined1 *)(uVar49 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar16);
            lVar44 = (longlong)iVar11;
            iVar41 = iVar11;
            if (uVar61 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar52 = param_1 + lVar16;
                  uVar53 = param_3 + lVar44;
                  if (((longlong)(4 - uVar21) <= (longlong)(uVar53 - lVar52)) ||
                     ((longlong)(4 - uVar21) <= (longlong)-(uVar53 - lVar52))) {
                    if ((longlong)uVar2 < 0x10) {
LAB_140a5474a:
                      uVar50 = 0;
                    }
                    else {
                      uVar49 = uVar53 & 0xf;
                      if (uVar49 != 0) {
                        uVar49 = 0x10 - uVar49;
                      }
                      if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a5474a;
                      uVar57 = 0;
                      uVar50 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                      if (uVar49 != 0) {
                        do {
                          *(undefined1 *)(uVar57 + uVar53) = *(undefined1 *)(uVar57 + lVar52);
                          uVar57 = uVar57 + 1;
                        } while (uVar57 < uVar49);
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
                    for (; uVar50 < uVar2; uVar50 = uVar50 + 1) {
                      *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                    }
                    lVar44 = (longlong)(int)(iVar10 + 8 + uVar47);
                    goto LAB_140a53e9f;
                  }
                }
                iVar36 = 1;
                if (uVar24 != 0) {
                  uVar53 = 0;
                  do {
                    uVar49 = uVar53;
                    *(undefined1 *)(param_3 + lVar44 + uVar49 * 2) =
                         *(undefined1 *)(param_1 + lVar16 + uVar49 * 2);
                    *(undefined1 *)(param_3 + lVar44 + 1 + uVar49 * 2) =
                         *(undefined1 *)(param_1 + lVar16 + 1 + uVar49 * 2);
                    uVar53 = uVar49 + 1;
                  } while (uVar53 < uVar27);
                  iVar41 = (int)uVar53 * 2 + 4 + uVar47;
                  iVar36 = (int)uVar49 + 2 + (int)uVar53;
                }
                if (uVar1 <= iVar36 - 1U) goto LAB_140a53e9c;
                *(undefined1 *)((longlong)iVar36 + -1 + param_3 + lVar44) =
                     *(undefined1 *)(param_1 + iVar36 + -1 + lVar16);
                lVar44 = (longlong)(iVar36 + iVar11);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a53e9f;
              if (6 < (int)uVar1) {
                lVar52 = lVar16 + lVar7;
                uVar53 = param_3 + lVar44;
                if (((longlong)(4 - uVar21) <= (longlong)(uVar53 - lVar52)) ||
                   ((longlong)(4 - uVar21) <= (longlong)-(uVar53 - lVar52))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a54752:
                    uVar50 = 0;
                  }
                  else {
                    uVar49 = uVar53 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a54752;
                    uVar57 = 0;
                    uVar50 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar57 + uVar53) = *(undefined1 *)(uVar57 + lVar52);
                        uVar57 = uVar57 + 1;
                      } while (uVar57 < uVar49);
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
                  for (; uVar50 < uVar2; uVar50 = uVar50 + 1) {
                    *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  }
                  lVar44 = (longlong)(int)(iVar10 + 8 + uVar47);
                  goto LAB_140a53e9f;
                }
              }
              iVar36 = 1;
              if (uVar24 != 0) {
                uVar53 = 0;
                do {
                  uVar49 = uVar53;
                  *(undefined1 *)(param_3 + lVar44 + uVar49 * 2) =
                       *(undefined1 *)(lVar16 + lVar7 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar44 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar16 + lVar7 + 1 + uVar49 * 2);
                  uVar53 = uVar49 + 1;
                } while (uVar53 < uVar27);
                iVar41 = (int)uVar53 * 2 + 4 + uVar47;
                iVar36 = (int)uVar49 + 2 + (int)uVar53;
              }
              if (iVar36 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar36 + -1 + param_3 + lVar44) =
                     *(undefined1 *)(lVar7 + iVar36 + -1 + lVar16);
                lVar44 = (longlong)(iVar36 + iVar11);
                goto LAB_140a53e9f;
              }
LAB_140a53e9c:
              lVar44 = (longlong)iVar41;
            }
LAB_140a53e9f:
            uVar53 = lVar44 - lVar3;
            goto LAB_140a52334;
          }
        }
        if (uVar60 == 0) {
          if (-1 < (int)uVar62) {
            if (((int)param_5 < 7) ||
               ((lVar16 = ((param_3 - 1) + uVar21) - ((uVar6 - 1) + uVar20),
                lVar16 <= (longlong)uVar21 && (-uVar21 == lVar16 || -lVar16 < (longlong)uVar21)))) {
              iVar41 = 1;
              lVar16 = 0;
              uVar50 = 0;
              if (uVar23 != 0) {
                do {
                  uVar57 = uVar50;
                  uVar50 = uVar57 + 1;
                  *(undefined1 *)(lVar16 + -1 + uVar6) = *(undefined1 *)(lVar16 + -1 + lVar33);
                  *(undefined1 *)(lVar16 + -2 + uVar6) = *(undefined1 *)(lVar16 + -2 + lVar33);
                  lVar16 = lVar16 + -2;
                } while (uVar50 < uVar26);
                iVar41 = (int)uVar57 + 2 + (int)uVar50;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) = *(undefined1 *)(lVar33 - iVar41);
              }
            }
            else {
              if (((longlong)uVar34 < 0x10) || ((longlong)uVar34 < lVar4)) {
                uVar50 = 0;
              }
              else {
                uVar50 = 0;
                if (uVar37 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar15);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar37);
                }
                uVar57 = uVar37;
                uVar50 = uVar35;
                if ((lVar15 + uVar37 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar57 + lVar15);
                    *(undefined1 (*) [16])(uVar57 + param_3) = in_XMM1;
                    uVar57 = uVar57 + 0x10;
                  } while (uVar57 < uVar35);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar57 + lVar15));
                    *(undefined1 (*) [16])(uVar57 + param_3) = in_XMM1;
                    uVar57 = uVar57 + 0x10;
                  } while (uVar57 < uVar35);
                }
              }
              for (; uVar50 < uVar34; uVar50 = uVar50 + 1) {
                *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar15);
              }
            }
          }
        }
        else if (-1 < (int)uVar62) {
          if (6 < (int)param_5) {
            lVar16 = param_1 + lVar32 * uVar22;
            lVar44 = ((param_3 - 1) + uVar21) - (lVar16 + -1);
            if (((longlong)uVar21 < lVar44) || (-uVar21 != lVar44 && (longlong)uVar21 <= -lVar44)) {
              if (((longlong)uVar34 < 0x10) || ((longlong)uVar34 < lVar4)) {
                uVar50 = 0;
              }
              else {
                uVar50 = 0;
                lVar44 = lVar16 - uVar21;
                if (uVar37 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + lVar44);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar37);
                }
                uVar57 = uVar37;
                uVar50 = uVar35;
                if ((lVar44 + uVar37 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar57 + lVar44);
                    *(undefined1 (*) [16])(uVar57 + param_3) = in_XMM1;
                    uVar57 = uVar57 + 0x10;
                  } while (uVar57 < uVar35);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar57 + lVar44));
                    *(undefined1 (*) [16])(uVar57 + param_3) = in_XMM1;
                    uVar57 = uVar57 + 0x10;
                  } while (uVar57 < uVar35);
                }
              }
              if (uVar50 < uVar34) {
                do {
                  *(undefined1 *)(uVar50 + param_3) = *(undefined1 *)(uVar50 + (lVar16 - uVar21));
                  uVar50 = uVar50 + 1;
                } while (uVar50 < uVar34);
              }
              goto LAB_140a5431e;
            }
          }
          iVar41 = 1;
          lVar16 = 0;
          if (uVar23 != 0) {
            lVar44 = lVar32 * uVar22 + param_1;
            uVar50 = 0;
            do {
              uVar57 = uVar50;
              uVar50 = uVar57 + 1;
              *(undefined1 *)(lVar16 + -1 + uVar6) = *(undefined1 *)(lVar16 + -1 + lVar44);
              *(undefined1 *)(lVar16 + -2 + uVar6) = *(undefined1 *)(lVar16 + -2 + lVar44);
              lVar16 = lVar16 + -2;
            } while (uVar50 < uVar26);
            iVar41 = (int)uVar57 + 2 + (int)uVar50;
          }
          if (iVar41 - 1U < param_5) {
            *(undefined1 *)(uVar6 - (longlong)iVar41) =
                 *(undefined1 *)((param_1 - iVar41) + lVar32 * uVar22);
          }
        }
LAB_140a5431e:
        if (uVar61 == 0) {
          if ((int)uVar1 < 1) goto LAB_140a52334;
          if (6 < (int)uVar1) {
            uVar50 = param_3 + uVar49;
            lVar16 = lVar14 + uVar49;
            if (((longlong)(4 - uVar21) <= (longlong)(uVar50 - lVar16)) ||
               ((longlong)(4 - uVar21) <= (longlong)-(uVar50 - lVar16))) {
              if ((longlong)uVar2 < 0x10) {
LAB_140a54769:
                uVar57 = 0;
              }
              else {
                uVar49 = uVar50 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a54769;
                uVar51 = 0;
                uVar57 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar16);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar49);
                }
                if ((lVar16 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar16);
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar57);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar16));
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar57);
                }
              }
              for (; uVar57 < uVar2; uVar57 = uVar57 + 1) {
                *(undefined1 *)(uVar57 + uVar50) = *(undefined1 *)(uVar57 + lVar16);
              }
              goto LAB_140a52334;
            }
          }
          iVar41 = 1;
          if (uVar24 != 0) {
            uVar50 = 0;
            do {
              uVar57 = uVar50;
              *(undefined1 *)(param_3 + uVar49 + uVar57 * 2) =
                   *(undefined1 *)(uVar49 + lVar14 + uVar57 * 2);
              *(undefined1 *)(param_3 + uVar49 + 1 + uVar57 * 2) =
                   *(undefined1 *)(uVar49 + lVar14 + 1 + uVar57 * 2);
              uVar50 = uVar57 + 1;
            } while (uVar50 < uVar27);
            iVar41 = (int)uVar57 + 2 + (int)uVar50;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + uVar49 + param_3) =
                 *(undefined1 *)((longlong)iVar41 + -1 + uVar49 + lVar14);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a52334;
          if (6 < (int)uVar1) {
            uVar50 = param_3 + uVar49;
            lVar16 = lVar32 * uVar22 + lVar7;
            if (((longlong)(4 - uVar21) <= (longlong)(uVar50 - lVar16)) ||
               ((longlong)(4 - uVar21) <= (longlong)-(uVar50 - lVar16))) {
              if ((longlong)uVar2 < 0x10) {
LAB_140a54771:
                uVar57 = 0;
              }
              else {
                uVar49 = uVar50 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a54771;
                uVar51 = 0;
                uVar57 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar16);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar49);
                }
                if ((lVar16 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar16);
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar57);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar16));
                    *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar57);
                }
              }
              for (; uVar57 < uVar2; uVar57 = uVar57 + 1) {
                *(undefined1 *)(uVar57 + uVar50) = *(undefined1 *)(uVar57 + lVar16);
              }
              goto LAB_140a52334;
            }
          }
          iVar41 = 1;
          if (uVar24 != 0) {
            lVar16 = lVar32 * uVar22 + lVar7;
            uVar50 = 0;
            do {
              uVar57 = uVar50;
              *(undefined1 *)(param_3 + uVar49 + uVar57 * 2) = *(undefined1 *)(lVar16 + uVar57 * 2);
              *(undefined1 *)(param_3 + uVar49 + 1 + uVar57 * 2) =
                   *(undefined1 *)(lVar16 + 1 + uVar57 * 2);
              uVar50 = uVar57 + 1;
            } while (uVar50 < uVar27);
            iVar41 = (int)uVar57 + 2 + (int)uVar50;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + uVar49 + param_3) =
                 *(undefined1 *)(lVar7 + iVar41 + -1 + lVar32 * uVar22);
          }
        }
      }
      else {
        if (uVar47 != 3) {
          if ((param_7 & 0xf0) != 0xf0) {
            uVar53 = 0;
            goto LAB_140a52334;
          }
          uVar47 = 0;
          uVar42 = 0;
          if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar44 = lVar32 * uVar22;
              lVar16 = param_3 - ((int)-param_5 + param_1 + lVar44);
              if (((longlong)uVar21 <= lVar16) || ((longlong)uVar21 <= -lVar16)) {
                if (((longlong)uVar21 < 0x10) || ((longlong)uVar21 < lVar5)) {
                  uVar49 = 0;
                }
                else {
                  uVar49 = 0;
                  lVar16 = lVar44 + lVar12;
                  if (uVar18 != 0) {
                    do {
                      *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar16);
                      uVar49 = uVar49 + 1;
                    } while (uVar49 < uVar18);
                  }
                  uVar50 = uVar18;
                  uVar49 = uVar48;
                  if ((lVar16 + uVar18 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar16);
                      *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                      uVar50 = uVar50 + 0x10;
                    } while (uVar50 < uVar48);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar16));
                      *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                      uVar50 = uVar50 + 0x10;
                    } while (uVar50 < uVar48);
                  }
                }
                uVar42 = param_5;
                if (uVar49 < uVar21) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar44 + lVar12);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar21);
                }
                goto LAB_140a51c93;
              }
            }
            uVar40 = 1;
            if (uVar23 != 0) {
              lVar16 = lVar32 * uVar22 + lVar12;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(param_3 + uVar50 * 2) = *(undefined1 *)(lVar16 + uVar50 * 2);
                *(undefined1 *)(param_3 + 1 + uVar50 * 2) = *(undefined1 *)(lVar16 + 1 + uVar50 * 2)
                ;
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar26);
              uVar47 = (int)uVar49 * 2;
              uVar40 = (int)uVar50 + 2 + (int)uVar49;
            }
            uVar42 = uVar47;
            if (uVar40 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                   *(undefined1 *)(lVar12 + (int)uVar40 + -1 + lVar32 * uVar22);
              uVar42 = uVar40;
            }
          }
LAB_140a51c93:
          lVar16 = (longlong)(int)uVar42;
          if (0 < (int)(uint)param_6) {
            if (uVar17 < 7) {
LAB_140a51e1f:
              iVar41 = 1;
              uVar47 = uVar42;
              if (uVar25 != 0) {
                lVar44 = lVar32 * uVar22 + param_1;
                uVar49 = 0;
                do {
                  uVar50 = uVar49;
                  *(undefined1 *)(param_3 + lVar16 + uVar50 * 2) =
                       *(undefined1 *)(lVar44 + uVar50 * 2);
                  *(undefined1 *)(param_3 + lVar16 + 1 + uVar50 * 2) =
                       *(undefined1 *)(lVar44 + 1 + uVar50 * 2);
                  uVar49 = uVar50 + 1;
                } while (uVar49 < uVar28);
                uVar47 = uVar42 + (int)uVar49 * 2;
                iVar41 = (int)uVar50 + 2 + (int)uVar49;
              }
              if (iVar41 - 1U < uVar17) {
                *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar16) =
                     *(undefined1 *)(param_1 + iVar41 + -1 + lVar32 * uVar22);
                uVar47 = uVar42 + iVar41;
              }
            }
            else {
              uVar49 = param_3 + lVar16;
              lVar44 = lVar32 * uVar22 + param_1;
              if (((longlong)(uVar49 - lVar44) < (longlong)(ulonglong)uVar17) &&
                 ((longlong)-(uVar49 - lVar44) < (longlong)(ulonglong)uVar17)) goto LAB_140a51e1f;
              if (uVar17 < 0x10) {
LAB_140a52576:
                uVar57 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if ((int)uVar50 != 0) {
                  uVar50 = (ulonglong)(0x10 - (int)uVar50);
                }
                iVar41 = (int)uVar50;
                if (uVar17 < iVar41 + 0x10U) goto LAB_140a52576;
                iVar11 = uVar17 - (uVar17 - iVar41 & 0xf);
                uVar57 = 0;
                if (iVar41 != 0) {
                  do {
                    *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
                    uVar57 = uVar57 + 1;
                  } while (uVar57 < uVar50);
                }
                if ((lVar44 + uVar50 & 0xf) == 0) {
                  uVar57 = (ulonglong)iVar11;
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar44);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
                else {
                  uVar57 = (ulonglong)iVar11;
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar44));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
              }
              for (; uVar57 < uVar19; uVar57 = uVar57 + 1) {
                *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
              }
              uVar47 = uVar42 + uVar17;
            }
            lVar16 = (longlong)(int)uVar47;
            if (4 < (int)(uint)param_6) {
              lVar44 = lVar32 * uVar22;
              *(undefined1 *)(lVar16 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar44);
              *(undefined1 *)(lVar16 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar44);
              iVar41 = uVar47 + 4;
              *(undefined1 *)(lVar16 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar44);
              *(undefined1 *)(lVar16 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar44);
              lVar16 = (longlong)iVar41;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar52 = lVar44 + lVar7;
                  uVar53 = param_3 + lVar16;
                  if (((longlong)(4 - uVar21) <= (longlong)(uVar53 - lVar52)) ||
                     ((longlong)(4 - uVar21) <= (longlong)-(uVar53 - lVar52))) {
                    if ((longlong)uVar2 < 0x10) {
LAB_140a5257d:
                      uVar50 = 0;
                    }
                    else {
                      uVar49 = uVar53 & 0xf;
                      if (uVar49 != 0) {
                        uVar49 = 0x10 - uVar49;
                      }
                      if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a5257d;
                      uVar57 = 0;
                      uVar50 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                      if (uVar49 != 0) {
                        do {
                          *(undefined1 *)(uVar57 + uVar53) = *(undefined1 *)(uVar57 + lVar52);
                          uVar57 = uVar57 + 1;
                        } while (uVar57 < uVar49);
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
                    for (; uVar50 < uVar2; uVar50 = uVar50 + 1) {
                      *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                    }
                    lVar16 = (longlong)(int)(iVar10 + 8 + uVar47);
                    goto LAB_140a5211e;
                  }
                }
                iVar36 = 1;
                iVar11 = iVar41;
                if (uVar24 != 0) {
                  uVar53 = 0;
                  do {
                    uVar49 = uVar53;
                    *(undefined1 *)(param_3 + lVar16 + uVar49 * 2) =
                         *(undefined1 *)(lVar44 + lVar7 + uVar49 * 2);
                    *(undefined1 *)(param_3 + lVar16 + 1 + uVar49 * 2) =
                         *(undefined1 *)(lVar44 + lVar7 + 1 + uVar49 * 2);
                    uVar53 = uVar49 + 1;
                  } while (uVar53 < uVar27);
                  iVar11 = (int)uVar53 * 2 + 4 + uVar47;
                  iVar36 = (int)uVar49 + 2 + (int)uVar53;
                }
                if (iVar36 - 1U < uVar1) {
                  *(undefined1 *)((longlong)iVar36 + -1 + param_3 + lVar16) =
                       *(undefined1 *)(lVar7 + iVar36 + -1 + lVar44);
                  lVar16 = (longlong)(iVar36 + iVar41);
                }
                else {
                  lVar16 = (longlong)iVar11;
                }
              }
LAB_140a5211e:
              uVar53 = lVar16 - lVar3;
              goto LAB_140a52334;
            }
          }
          if ((int)uVar1 < 1) goto LAB_140a52334;
          if (6 < (int)uVar1) {
            uVar49 = param_3 + lVar16;
            lVar44 = lVar32 * uVar22 + lVar7;
            if (((longlong)(4 - uVar21) <= (longlong)(uVar49 - lVar44)) ||
               ((longlong)(4 - uVar21) <= (longlong)-(uVar49 - lVar44))) {
              if ((longlong)uVar2 < 0x10) {
LAB_140a52584:
                uVar57 = 0;
              }
              else {
                uVar50 = uVar49 & 0xf;
                if (uVar50 != 0) {
                  uVar50 = 0x10 - uVar50;
                }
                if ((longlong)uVar2 < (longlong)(uVar50 + 0x10)) goto LAB_140a52584;
                uVar51 = 0;
                uVar57 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar50 & 0xfU));
                if (uVar50 != 0) {
                  do {
                    *(undefined1 *)(uVar51 + uVar49) = *(undefined1 *)(uVar51 + lVar44);
                    uVar51 = uVar51 + 1;
                  } while (uVar51 < uVar50);
                }
                if ((lVar44 + uVar50 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar44);
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar44));
                    *(undefined1 (*) [16])(uVar50 + uVar49) = in_XMM1;
                    uVar50 = uVar50 + 0x10;
                  } while (uVar50 < uVar57);
                }
              }
              for (; uVar57 < uVar2; uVar57 = uVar57 + 1) {
                *(undefined1 *)(uVar57 + uVar49) = *(undefined1 *)(uVar57 + lVar44);
              }
              goto LAB_140a52334;
            }
          }
          iVar41 = 1;
          if (uVar24 != 0) {
            lVar44 = lVar32 * uVar22 + lVar7;
            uVar49 = 0;
            do {
              uVar50 = uVar49;
              *(undefined1 *)(param_3 + lVar16 + uVar50 * 2) = *(undefined1 *)(lVar44 + uVar50 * 2);
              *(undefined1 *)(param_3 + lVar16 + 1 + uVar50 * 2) =
                   *(undefined1 *)(lVar44 + 1 + uVar50 * 2);
              uVar49 = uVar50 + 1;
            } while (uVar49 < uVar27);
            iVar41 = (int)uVar50 + 2 + (int)uVar49;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + lVar16 + param_3) =
                 *(undefined1 *)(lVar7 + iVar41 + -1 + lVar32 * uVar22);
          }
          goto LAB_140a52334;
        }
        uVar49 = uVar21;
        if (0 < (int)(uint)param_6) {
          if (uVar17 < 7) {
LAB_140a526fd:
            iVar41 = 1;
            uVar47 = param_5;
            if (uVar25 != 0) {
              lVar16 = lVar32 * uVar22 + param_1;
              uVar49 = 0;
              do {
                uVar50 = uVar49;
                *(undefined1 *)(uVar6 + uVar50 * 2) = *(undefined1 *)(lVar16 + uVar50 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar50 * 2) = *(undefined1 *)(lVar16 + 1 + uVar50 * 2);
                uVar49 = uVar50 + 1;
              } while (uVar49 < uVar28);
              iVar41 = (int)uVar50 + 2 + (int)uVar49;
              uVar47 = param_5 + (int)uVar49 * 2;
            }
            if (iVar41 - 1U < uVar17) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar32 * uVar22);
              uVar47 = param_5 + iVar41;
            }
          }
          else {
            lVar16 = lVar32 * uVar22 + param_1;
            if (((longlong)(uVar6 - lVar16) < (longlong)(ulonglong)uVar17) &&
               ((longlong)-(uVar6 - lVar16) < (longlong)(ulonglong)uVar17)) goto LAB_140a526fd;
            if ((uVar17 < 0x10) || (uVar17 < iVar30 + 0x10U)) {
              uVar49 = 0;
            }
            else {
              uVar49 = 0;
              if (iVar30 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar6) = *(undefined1 *)(uVar49 + lVar16);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar31);
              }
              uVar50 = uVar31;
              uVar49 = uVar43;
              if ((lVar16 + uVar31 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar16);
                  *(undefined1 (*) [16])(uVar50 + uVar6) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar43);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar16));
                  *(undefined1 (*) [16])(uVar50 + uVar6) = in_XMM1;
                  uVar50 = uVar50 + 0x10;
                } while (uVar50 < uVar43);
              }
            }
            for (; uVar47 = param_5 + uVar17, uVar49 < uVar19; uVar49 = uVar49 + 1) {
              *(undefined1 *)(uVar49 + uVar6) = *(undefined1 *)(uVar49 + lVar16);
            }
          }
          uVar49 = (ulonglong)(int)uVar47;
          if (4 < (int)(uint)param_6) {
            if (uVar60 == 0) {
              if (-1 < (int)uVar62) {
                iVar41 = 1;
                lVar16 = 0;
                if (uVar23 != 0) {
                  lVar44 = param_1 + uVar13 + lVar32 * uVar22;
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    *(undefined1 *)(lVar16 + -1 + uVar6) = *(undefined1 *)(lVar44 + uVar50 * 2);
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar16 + -2 + uVar6) = *(undefined1 *)(lVar44 + 1 + uVar50 * 2);
                    lVar16 = lVar16 + -2;
                  } while (uVar53 < uVar26);
                  iVar41 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)(param_1 + uVar13 + (longlong)iVar41 + -1 + lVar32 * uVar22);
                }
              }
            }
            else {
              lVar16 = lVar32 * uVar22;
              if (-1 < (int)uVar62) {
                if (6 < (int)param_5) {
                  lVar44 = param_1 + lVar16;
                  lVar52 = ((param_3 - 1) + uVar21) - (lVar44 + -1);
                  if (((longlong)uVar21 < lVar52) ||
                     (-uVar21 != lVar52 && (longlong)uVar21 <= -lVar52)) {
                    if (((longlong)uVar34 < 0x10) || ((longlong)uVar34 < lVar4)) {
                      uVar53 = 0;
                    }
                    else {
                      uVar53 = 0;
                      lVar16 = lVar44 - uVar21;
                      if (uVar37 != 0) {
                        do {
                          *(undefined1 *)(uVar53 + param_3) = *(undefined1 *)(uVar53 + lVar16);
                          uVar53 = uVar53 + 1;
                        } while (uVar53 < uVar37);
                      }
                      uVar50 = uVar37;
                      uVar53 = uVar35;
                      if ((lVar16 + uVar37 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar50 + lVar16);
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar35);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar50 + lVar16));
                          *(undefined1 (*) [16])(uVar50 + param_3) = in_XMM1;
                          uVar50 = uVar50 + 0x10;
                        } while (uVar50 < uVar35);
                      }
                    }
                    if (uVar53 < uVar34) {
                      do {
                        *(undefined1 *)(uVar53 + param_3) =
                             *(undefined1 *)(uVar53 + (lVar44 - uVar21));
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar34);
                    }
                    goto LAB_140a52a9d;
                  }
                }
                iVar41 = 1;
                lVar44 = 0;
                if (uVar23 != 0) {
                  uVar53 = 0;
                  do {
                    uVar50 = uVar53;
                    uVar53 = uVar50 + 1;
                    *(undefined1 *)(lVar44 + -1 + uVar6) =
                         *(undefined1 *)(lVar44 + -1 + param_1 + lVar16);
                    *(undefined1 *)(lVar44 + -2 + uVar6) =
                         *(undefined1 *)(lVar44 + -2 + param_1 + lVar16);
                    lVar44 = lVar44 + -2;
                  } while (uVar53 < uVar26);
                  iVar41 = (int)uVar50 + 2 + (int)uVar53;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)((param_1 + lVar16) - (longlong)iVar41);
                }
              }
            }
LAB_140a52a9d:
            lVar44 = lVar32 * uVar22;
            *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar44);
            *(undefined1 *)(uVar49 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar44);
            iVar11 = uVar47 + 4;
            *(undefined1 *)(uVar49 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar44);
            *(undefined1 *)(uVar49 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar44);
            lVar16 = (longlong)iVar11;
            iVar41 = iVar11;
            if (uVar61 == 0) {
              if (0 < (int)uVar1) {
                uVar53 = 0;
                iVar36 = 1;
                if (uVar24 != 0) {
                  lVar52 = lVar56 + lVar44;
                  uVar49 = uVar53;
                  do {
                    uVar50 = uVar49;
                    *(undefined1 *)(param_3 + lVar16 + uVar50 * 2) =
                         *(undefined1 *)((uVar53 - 1) + lVar52);
                    lVar59 = uVar53 - 2;
                    uVar53 = uVar53 - 2;
                    *(undefined1 *)(param_3 + lVar16 + 1 + uVar50 * 2) =
                         *(undefined1 *)(lVar59 + lVar52);
                    uVar49 = uVar50 + 1;
                  } while (uVar49 < uVar27);
                  iVar41 = (int)uVar49 * 2 + 4 + uVar47;
                  iVar36 = (int)uVar50 + 2 + (int)uVar49;
                }
                if (uVar1 <= iVar36 - 1U) goto LAB_140a52dc9;
                *(undefined1 *)((longlong)iVar36 + -1 + param_3 + lVar16) =
                     *(undefined1 *)((lVar44 + lVar56) - (longlong)iVar36);
                lVar16 = (longlong)(iVar36 + iVar11);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a52dcc;
              if (6 < (int)uVar1) {
                lVar52 = lVar44 + lVar7;
                uVar53 = param_3 + lVar16;
                if (((longlong)(4 - uVar21) <= (longlong)(uVar53 - lVar52)) ||
                   ((longlong)(4 - uVar21) <= (longlong)-(uVar53 - lVar52))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a53370:
                    uVar50 = 0;
                  }
                  else {
                    uVar49 = uVar53 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a53370;
                    uVar57 = 0;
                    uVar50 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar57 + uVar53) = *(undefined1 *)(uVar57 + lVar52);
                        uVar57 = uVar57 + 1;
                      } while (uVar57 < uVar49);
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
                  for (; uVar50 < uVar2; uVar50 = uVar50 + 1) {
                    *(undefined1 *)(uVar50 + uVar53) = *(undefined1 *)(uVar50 + lVar52);
                  }
                  lVar16 = (longlong)(int)(iVar10 + 8 + uVar47);
                  goto LAB_140a52dcc;
                }
              }
              iStack_2a8 = 1;
              if (uVar24 != 0) {
                uVar53 = 0;
                do {
                  uVar49 = uVar53;
                  *(undefined1 *)(param_3 + lVar16 + uVar49 * 2) =
                       *(undefined1 *)(lVar44 + lVar7 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar16 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar44 + lVar7 + 1 + uVar49 * 2);
                  uVar53 = uVar49 + 1;
                } while (uVar53 < uVar27);
                iVar41 = (int)uVar53 * 2 + 4 + uVar47;
                iStack_2a8 = (int)uVar49 + 2 + (int)uVar53;
              }
              if (iStack_2a8 - 1U < uVar1) {
                *(undefined1 *)((longlong)iStack_2a8 + -1 + param_3 + lVar16) =
                     *(undefined1 *)(lVar7 + iStack_2a8 + -1 + lVar44);
                lVar16 = (longlong)(iStack_2a8 + iVar11);
              }
              else {
LAB_140a52dc9:
                lVar16 = (longlong)iVar41;
              }
            }
LAB_140a52dcc:
            uVar53 = lVar16 - lVar3;
            goto LAB_140a52334;
          }
        }
        uVar50 = (ulonglong)uVar62;
        if (uVar60 == 0) {
          uVar47 = uVar62;
          if (uVar61 == 0) {
            while (-1 < (int)uVar47) {
              uVar47 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar50 = (ulonglong)(int)uVar50;
                lVar44 = uVar13 + 1 + uVar50;
                lVar16 = param_3 + uVar50;
                do {
                  if ((int)uVar50 < 0) break;
                  lVar52 = (longlong)(int)uVar47;
                  uVar47 = uVar47 + 1;
                  uVar50 = (ulonglong)((int)uVar50 - 1);
                  *(undefined1 *)(lVar16 - lVar52) = *(undefined1 *)(lVar52 + lVar44 + param_3);
                } while (uVar47 < uVar9);
              }
              uVar47 = (uint)uVar50;
            }
            uVar49 = 0;
            iVar41 = (((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1) + 2;
            iVar11 = iVar45;
            iVar36 = iVar45;
            if ((int)param_5 < 4) {
              do {
                iVar55 = iVar41 + iVar11;
                *(undefined1 *)(uVar49 + lVar33) = *(undefined1 *)((longlong)iVar41 + param_3);
                if (((int)(((uint)param_6 + 4) - uVar1) <= iVar55) || (iVar55 < (int)param_5)) {
                  iVar41 = iVar11 + iVar36;
                  iVar11 = -iVar11;
                  iVar55 = iVar55 - iVar41;
                  iVar36 = -iVar36;
                }
                uVar49 = uVar49 + 1;
                iVar41 = iVar55;
              } while (uVar49 < uVar2);
            }
          }
          else {
            if (-1 < (int)uVar62) {
              iVar41 = 1;
              lVar16 = 0;
              if (uVar23 != 0) {
                lVar44 = lVar32 * uVar22 + param_1;
                uVar50 = 0;
                do {
                  uVar57 = uVar50;
                  *(undefined1 *)(lVar16 + -1 + uVar6) = *(undefined1 *)(lVar44 + 1 + uVar57 * 2);
                  uVar50 = uVar57 + 1;
                  *(undefined1 *)(lVar16 + -2 + uVar6) = *(undefined1 *)(lVar44 + 2 + uVar57 * 2);
                  lVar16 = lVar16 + -2;
                } while (uVar50 < uVar26);
                iVar41 = (int)uVar57 + 2 + (int)uVar50;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) =
                     *(undefined1 *)(param_1 + iVar41 + lVar32 * uVar22);
              }
            }
LAB_140a530bb:
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                uVar50 = param_3 + uVar49;
                lVar16 = lVar32 * uVar22 + lVar7;
                if (((longlong)(4 - uVar21) <= (longlong)(uVar50 - lVar16)) ||
                   ((longlong)(4 - uVar21) <= (longlong)-(uVar50 - lVar16))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a53377:
                    uVar57 = 0;
                  }
                  else {
                    uVar49 = uVar50 & 0xf;
                    if (uVar49 != 0) {
                      uVar49 = 0x10 - uVar49;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar49 + 0x10)) goto LAB_140a53377;
                    uVar51 = 0;
                    uVar57 = (ulonglong)(int)(iVar58 - (iVar58 - (int)uVar49 & 0xfU));
                    if (uVar49 != 0) {
                      do {
                        *(undefined1 *)(uVar51 + uVar50) = *(undefined1 *)(uVar51 + lVar16);
                        uVar51 = uVar51 + 1;
                      } while (uVar51 < uVar49);
                    }
                    if ((lVar16 + uVar49 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar16);
                        *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar57);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar16));
                        *(undefined1 (*) [16])(uVar49 + uVar50) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar57);
                    }
                  }
                  for (; uVar57 < uVar2; uVar57 = uVar57 + 1) {
                    *(undefined1 *)(uVar57 + uVar50) = *(undefined1 *)(uVar57 + lVar16);
                  }
                  goto LAB_140a52334;
                }
              }
              iVar41 = 1;
              if (uVar24 != 0) {
                lVar16 = lVar32 * uVar22 + lVar7;
                uVar50 = 0;
                do {
                  uVar57 = uVar50;
                  *(undefined1 *)(param_3 + uVar49 + uVar57 * 2) =
                       *(undefined1 *)(lVar16 + uVar57 * 2);
                  *(undefined1 *)(param_3 + uVar49 + 1 + uVar57 * 2) =
                       *(undefined1 *)(lVar16 + 1 + uVar57 * 2);
                  uVar50 = uVar57 + 1;
                } while (uVar50 < uVar27);
                iVar41 = (int)uVar57 + 2 + (int)uVar50;
              }
              if (iVar41 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar41 + -1 + uVar49 + param_3) =
                     *(undefined1 *)(lVar7 + iVar41 + -1 + lVar32 * uVar22);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar62) {
            do {
              uVar47 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar41 = (int)uVar50;
                do {
                  if ((int)uVar50 < 0) break;
                  lVar16 = (longlong)(int)uVar47;
                  uVar47 = uVar47 + 1;
                  uVar50 = (ulonglong)((int)uVar50 - 1);
                  *(undefined1 *)((param_3 + (longlong)iVar41) - lVar16) =
                       *(undefined1 *)(((longlong)iVar41 + lVar32 * uVar22 + lVar12) - lVar16);
                } while (uVar47 < uVar9);
              }
            } while (-1 < (int)uVar50);
          }
          if (uVar61 != 0) goto LAB_140a530bb;
          if (0 < (int)uVar1) {
            iVar41 = 1;
            lVar16 = 0;
            if (uVar24 != 0) {
              lVar44 = lVar32 * uVar22 + lVar7;
              uVar50 = 0;
              do {
                uVar57 = uVar50;
                *(undefined1 *)(param_3 + uVar49 + uVar57 * 2) =
                     *(undefined1 *)(lVar16 + -2 + lVar44);
                lVar52 = lVar16 + -3;
                lVar16 = lVar16 + -2;
                *(undefined1 *)(param_3 + uVar49 + 1 + uVar57 * 2) =
                     *(undefined1 *)(lVar52 + lVar44);
                uVar50 = uVar57 + 1;
              } while (uVar50 < uVar27);
              iVar41 = (int)uVar57 + 2 + (int)uVar50;
            }
            if (iVar41 - 1U < uVar1) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar49 + param_3) =
                   *(undefined1 *)((lVar7 - iVar41) + -1 + lVar32 * uVar22);
            }
          }
        }
      }
LAB_140a52334:
      iVar41 = 0;
      uVar49 = 0;
      if (0 < (int)(uint)param_6) {
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + uVar49 * 2) =
               (ushort)*(byte *)(uVar49 + param_3) + (ushort)*(byte *)(uVar49 + 1 + param_3) +
               (ushort)*(byte *)(uVar49 + 2 + param_3) +
               (ushort)*(byte *)(uVar49 + 3 + param_3) + (ushort)*(byte *)(uVar49 + 4 + param_3);
          uVar50 = uVar49 + 1;
          iVar41 = (int)uVar49 + 1;
          if (uVar20 <= uVar50) break;
          uVar49 = uVar50;
        } while ((longlong)uVar50 < 2);
      }
      lVar16 = (longlong)iVar41;
      if (0 < (int)uVar54) {
        iVar36 = 1;
        iVar11 = iVar41;
        if (uVar54 >> 1 != 0) {
          lVar44 = lVar32 * uVar22 + param_1;
          uVar49 = 0;
          do {
            uVar50 = uVar49;
            *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar16 * 2 + uVar50 * 4) =
                 (ushort)*(byte *)(lVar44 + uVar50 * 2) + (ushort)*(byte *)(lVar44 + 1 + uVar50 * 2)
                 + (ushort)*(byte *)(lVar44 + 2 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 3 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 4 + uVar50 * 2);
            *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar16 * 2 + 2 + uVar50 * 4) =
                 (ushort)*(byte *)(lVar44 + 1 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 2 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 3 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 4 + uVar50 * 2) +
                 (ushort)*(byte *)(lVar44 + 5 + uVar50 * 2);
            uVar49 = uVar50 + 1;
          } while (uVar49 < uVar54 >> 1);
          iVar11 = iVar41 + (int)uVar49 * 2;
          iVar36 = (int)uVar50 + 2 + (int)uVar49;
        }
        if (iVar36 - 1U < uVar54) {
          lVar59 = lVar32 * uVar22;
          lVar44 = param_1 + iVar36;
          lVar52 = iVar36 + lVar16;
          lVar16 = (longlong)(iVar36 + iVar41);
          *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + -2 + lVar52 * 2) =
               (ushort)*(byte *)(lVar44 + -1 + lVar59) + (ushort)*(byte *)(lVar44 + lVar59) +
               (ushort)*(byte *)(lVar44 + 1 + lVar59) +
               (ushort)*(byte *)(lVar44 + 2 + lVar59) + (ushort)*(byte *)(lVar44 + 3 + lVar59);
        }
        else {
          lVar16 = (longlong)iVar11;
        }
      }
      lVar44 = uVar53 + param_3;
      uVar53 = 0;
      do {
        if ((longlong)(uVar20 - 2) <= (longlong)uVar53) break;
        *(ushort *)(*(longlong *)(param_2 + uVar22 * 8) + lVar16 * 2 + uVar53 * 2) =
             (ushort)*(byte *)(uVar53 + lVar44) + (ushort)*(byte *)(uVar53 + 1 + lVar44) +
             (ushort)*(byte *)(uVar53 + 2 + lVar44) +
             (ushort)*(byte *)(uVar53 + 3 + lVar44) + (ushort)*(byte *)(uVar53 + 4 + lVar44);
        uVar53 = uVar53 + 1;
      } while (uVar53 < 2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

