
undefined8
FUN_140a48d20(longlong param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined1 param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong lVar46;
  uint uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar51;
  int iVar52;
  int iVar53;
  longlong lVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  uint uVar59;
  uint uVar60;
  ulonglong uVar61;
  longlong lVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  longlong lVar67;
  undefined4 uVar68;
  undefined8 uVar69;
  undefined1 in_XMM1 [16];
  ulonglong uVar27;
  ulonglong uVar33;
  ulonglong uVar62;
  
  lVar15 = (longlong)param_4;
  if (0 < param_6._4_4_) {
    uVar16 = (ulonglong)(int)param_5;
    uVar36 = param_3 & 0xf;
    lVar54 = -uVar16;
    uVar24 = uVar36;
    if (uVar36 != 0) {
      uVar24 = 0x10 - uVar36;
    }
    lVar2 = lVar54 + 8;
    uVar18 = 4;
    if ((uint)param_6 < 5) {
      uVar18 = (uint)param_6;
    }
    iVar64 = -param_5;
    uVar25 = param_7 & 0xf;
    uVar3 = lVar54 + 4;
    lVar32 = param_1 - uVar16;
    uVar19 = (ulonglong)(int)uVar18;
    uVar21 = (ulonglong)(int)(uint)param_6;
    uVar61 = (ulonglong)(1 < (int)(uint)param_6);
    uVar26 = param_5 >> 1;
    uVar27 = (ulonglong)uVar26;
    uVar28 = param_7 & 0x80;
    uVar1 = iVar64 + 4;
    uVar29 = uVar1 >> 1;
    uVar33 = (ulonglong)uVar29;
    uVar38 = param_7 & 0x40;
    uVar6 = param_3 + uVar16;
    lVar34 = param_3 - uVar21;
    uVar59 = (uint)param_6 - (1 < (int)(uint)param_6);
    uVar44 = uVar6 & 0xf;
    lVar7 = param_1 + uVar21;
    uVar55 = 0xffffffffffffffff - (lVar54 + -1);
    uVar30 = (uint)param_6 - 4 >> 4;
    lVar54 = uVar21 + uVar6;
    if ((int)uVar44 != 0) {
      uVar44 = (ulonglong)(0x10 - (int)uVar44);
    }
    if (uVar36 != 0) {
      uVar36 = 0x10 - uVar36;
    }
    uVar60 = uVar18 >> 1;
    uVar62 = (ulonglong)uVar60;
    iVar22 = ((int)(uint)param_6 < 2) - 1;
    lVar63 = (param_1 - uVar61) + uVar21;
    uVar56 = (ulonglong)(int)((int)uVar55 - ((int)uVar55 - (int)uVar36 & 0xfU));
    uVar31 = param_5 - (param_5 - (int)uVar24 & 0xf);
    lVar67 = lVar54 - uVar16;
    uVar65 = param_5 - 1;
    iVar39 = (int)uVar44;
    uVar68 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
    uVar35 = (ulonglong)(int)uVar31;
    uVar69 = CONCAT44(uVar68,uVar68);
    uVar66 = 1;
    if ((param_7 & 0xc0) != 0) {
      uVar66 = uVar25;
    }
    iVar52 = uVar18 - (uVar18 - iVar39 & 0xf);
    uVar57 = (ulonglong)iVar52;
    lVar4 = uVar36 + 0x10;
    lVar5 = uVar24 + 0x10;
    iVar23 = (int)uVar3;
    uVar20 = 0;
    do {
      uVar37 = uVar16;
      if ((uint)param_6 == 1) {
        uVar47 = uVar66;
        if (uVar25 != 6) goto LAB_140a49109;
LAB_140a4cc0c:
        uVar47 = 0;
        uVar43 = 0;
        if (uVar38 == 0) {
          if (0 < (int)param_5) {
            if ((0xf < (longlong)uVar16) && (lVar5 <= (longlong)uVar16)) {
              uVar49 = 0;
              uVar48 = uVar24;
              if (uVar24 != 0) {
                do {
                  *(undefined1 *)(uVar49 + param_3) = param_8;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar24);
              }
              do {
                *(undefined8 *)(uVar48 + param_3) = uVar69;
                ((undefined8 *)(uVar48 + param_3))[1] = uVar69;
                uVar48 = uVar48 + 0x10;
                uVar47 = uVar31;
              } while (uVar48 < uVar35);
            }
            uVar48 = (ulonglong)(int)uVar47;
            uVar43 = uVar47;
            if (uVar48 < uVar16) {
              do {
                *(undefined1 *)(uVar48 + param_3) = param_8;
                uVar48 = uVar48 + 1;
              } while (uVar48 < uVar16);
              uVar43 = (uint)uVar48;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar45 = lVar15 * uVar20;
            lVar17 = param_3 - ((int)-param_5 + param_1 + lVar45);
            if (((longlong)uVar16 <= lVar17) || ((longlong)uVar16 <= -lVar17)) {
              if (((longlong)uVar16 < 0x10) || ((longlong)uVar16 < lVar5)) {
                uVar48 = 0;
              }
              else {
                uVar48 = 0;
                lVar17 = lVar45 + lVar32;
                if (uVar24 != 0) {
                  do {
                    *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(uVar48 + lVar17);
                    uVar48 = uVar48 + 1;
                  } while (uVar48 < uVar24);
                }
                uVar49 = uVar24;
                uVar48 = uVar35;
                if ((lVar17 + uVar24 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar17);
                    *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar35);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar17));
                    *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar35);
                }
              }
              uVar43 = param_5;
              if (uVar48 < uVar16) {
                do {
                  *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(uVar48 + lVar45 + lVar32);
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar16);
              }
              goto LAB_140a4cf19;
            }
          }
          uVar40 = 1;
          if (uVar26 != 0) {
            lVar17 = lVar15 * uVar20 + lVar32;
            uVar48 = 0;
            do {
              uVar49 = uVar48;
              *(undefined1 *)(param_3 + uVar49 * 2) = *(undefined1 *)(lVar17 + uVar49 * 2);
              *(undefined1 *)(param_3 + 1 + uVar49 * 2) = *(undefined1 *)(lVar17 + 1 + uVar49 * 2);
              uVar48 = uVar49 + 1;
            } while (uVar48 < uVar27);
            uVar47 = (int)uVar48 * 2;
            uVar40 = (int)uVar49 + 2 + (int)uVar48;
          }
          uVar43 = uVar47;
          if (uVar40 - 1 < param_5) {
            *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                 *(undefined1 *)(lVar32 + (int)uVar40 + -1 + lVar15 * uVar20);
            uVar43 = uVar40;
          }
        }
LAB_140a4cf19:
        lVar17 = (longlong)(int)uVar43;
        if ((int)(uint)param_6 < 1) {
          if (uVar28 == 0) {
joined_r0x000140a4d1d0:
            if (0 < (int)uVar1) {
LAB_140a4d1ff:
              if ((longlong)uVar3 < 0x10) {
LAB_140a4d503:
                iVar41 = 0;
              }
              else {
                uVar48 = param_3 + lVar17;
                uVar49 = uVar48 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a4d503;
                uVar58 = 0;
                iVar41 = iVar23 - (iVar23 - (int)uVar49 & 0xfU);
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar48) = param_8;
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar49);
                }
                do {
                  *(undefined8 *)(uVar49 + uVar48) = uVar69;
                  ((undefined8 *)(uVar49 + uVar48))[1] = uVar69;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < (ulonglong)(longlong)iVar41);
                uVar43 = (int)lVar17 + iVar41;
              }
              uVar48 = (ulonglong)iVar41;
              if (uVar48 < uVar3) {
                do {
                  *(undefined1 *)(uVar48 + param_3 + lVar17) = param_8;
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar3);
                uVar43 = (int)uVar48 + (int)lVar17;
              }
              goto LAB_140a4d4d3;
            }
          }
          else if (0 < (int)uVar1) goto LAB_140a4d2ff;
        }
        else {
          if (uVar18 < 7) {
LAB_140a4d0bf:
            iVar41 = 1;
            uVar47 = uVar43;
            if (uVar60 != 0) {
              lVar45 = lVar15 * uVar20 + param_1;
              uVar48 = 0;
              do {
                uVar49 = uVar48;
                *(undefined1 *)(param_3 + lVar17 + uVar49 * 2) =
                     *(undefined1 *)(lVar45 + uVar49 * 2);
                *(undefined1 *)(param_3 + lVar17 + 1 + uVar49 * 2) =
                     *(undefined1 *)(lVar45 + 1 + uVar49 * 2);
                uVar48 = uVar49 + 1;
              } while (uVar48 < uVar62);
              uVar47 = uVar43 + (int)uVar48 * 2;
              iVar41 = (int)uVar49 + 2 + (int)uVar48;
            }
            if (iVar41 - 1U < uVar18) {
              *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar17) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar15 * uVar20);
              uVar47 = uVar43 + iVar41;
            }
          }
          else {
            uVar48 = param_3 + lVar17;
            lVar45 = lVar15 * uVar20 + param_1;
            if (((longlong)(uVar48 - lVar45) < (longlong)(ulonglong)uVar18) &&
               ((longlong)-(uVar48 - lVar45) < (longlong)(ulonglong)uVar18)) goto LAB_140a4d0bf;
            if (uVar18 < 0x10) {
LAB_140a4d4fb:
              uVar58 = 0;
            }
            else {
              uVar49 = uVar48 & 0xf;
              if ((int)uVar49 != 0) {
                uVar49 = (ulonglong)(0x10 - (int)uVar49);
              }
              iVar41 = (int)uVar49;
              if (uVar18 < iVar41 + 0x10U) goto LAB_140a4d4fb;
              iVar14 = uVar18 - (uVar18 - iVar41 & 0xf);
              uVar58 = 0;
              if (iVar41 != 0) {
                do {
                  *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
                  uVar58 = uVar58 + 1;
                } while (uVar58 < uVar49);
              }
              if ((lVar45 + uVar49 & 0xf) == 0) {
                uVar58 = (ulonglong)iVar14;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                  *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar58);
              }
              else {
                uVar58 = (ulonglong)iVar14;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                  *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar58);
              }
            }
            for (; uVar58 < uVar19; uVar58 = uVar58 + 1) {
              *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
            }
            uVar47 = uVar43 + uVar18;
          }
          uVar43 = uVar47;
          lVar17 = (longlong)(int)uVar43;
          if ((int)(uint)param_6 < 5) {
            if (uVar28 == 0) goto joined_r0x000140a4d1d0;
            if ((int)uVar1 < 1) goto LAB_140a49a14;
LAB_140a4d2ff:
            iVar41 = (int)lVar17;
            if ((int)uVar1 < 7) {
LAB_140a4d442:
              iVar14 = 1;
              if (uVar29 != 0) {
                lVar45 = lVar15 * uVar20 + lVar7;
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  *(undefined1 *)(param_3 + lVar17 + uVar49 * 2) =
                       *(undefined1 *)(lVar45 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar17 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar45 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar33);
                uVar43 = iVar41 + (int)uVar48 * 2;
                iVar14 = (int)uVar49 + 2 + (int)uVar48;
              }
              if (iVar14 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar14 + -1 + param_3 + lVar17) =
                     *(undefined1 *)(lVar7 + iVar14 + -1 + lVar15 * uVar20);
                uVar43 = iVar41 + iVar14;
              }
            }
            else {
              uVar48 = param_3 + lVar17;
              lVar45 = lVar15 * uVar20 + lVar7;
              if (((longlong)(uVar48 - lVar45) < (longlong)(4 - uVar16)) &&
                 ((longlong)-(uVar48 - lVar45) < (longlong)(4 - uVar16))) goto LAB_140a4d442;
              if ((longlong)uVar3 < 0x10) {
LAB_140a4d50b:
                uVar58 = 0;
              }
              else {
                uVar49 = uVar48 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a4d50b;
                uVar50 = 0;
                uVar58 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + uVar48) = *(undefined1 *)(uVar50 + lVar45);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar49);
                }
                if ((lVar45 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
              }
              uVar43 = iVar41 + 4 + iVar64;
            }
LAB_140a4d4d3:
            if ((int)(uint)param_6 < 5) goto LAB_140a49a14;
            lVar17 = (longlong)(int)uVar43;
          }
          else {
            uVar43 = uVar43 + 4;
            lVar45 = lVar15 * uVar20;
            *(undefined1 *)(lVar17 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar45);
            *(undefined1 *)(lVar17 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar45);
            *(undefined1 *)(lVar17 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar45);
            *(undefined1 *)(lVar17 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar45);
            lVar17 = (longlong)(int)uVar43;
            if (uVar28 == 0) {
              if (0 < (int)uVar1) goto LAB_140a4d1ff;
            }
            else if (0 < (int)uVar1) goto LAB_140a4d2ff;
          }
          uVar37 = lVar17 - lVar2;
        }
        goto LAB_140a49a14;
      }
      uVar47 = uVar25;
      if (uVar25 == 6) goto LAB_140a4cc0c;
LAB_140a49109:
      if (uVar47 == 1) {
        uVar47 = 0;
        lVar17 = lVar15 * uVar20;
        uVar13 = *(undefined1 *)(param_1 + lVar17);
        uVar43 = 0;
        if (uVar38 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar16 < 0x10) || ((longlong)uVar16 < lVar5)) {
              uVar37 = 0;
            }
            else {
              uVar37 = 0;
              if (uVar24 != 0) {
                do {
                  *(undefined1 *)(uVar37 + param_3) = uVar13;
                  uVar37 = uVar37 + 1;
                } while (uVar37 < uVar24);
              }
              uVar68 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
              in_XMM1._0_8_ = CONCAT44(uVar68,uVar68);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              uVar48 = uVar24;
              do {
                *(undefined1 (*) [16])(uVar48 + param_3) = in_XMM1;
                uVar48 = uVar48 + 0x10;
                uVar37 = uVar35;
                uVar47 = uVar31;
              } while (uVar48 < uVar35);
            }
            uVar43 = uVar47;
            if (uVar37 < uVar16) {
              do {
                *(undefined1 *)(uVar37 + param_3) = uVar13;
                uVar37 = uVar37 + 1;
              } while (uVar37 < uVar16);
              uVar43 = (uint)uVar37;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar45 = param_3 - ((int)-param_5 + param_1 + lVar17), lVar45 < (longlong)uVar16 &&
              (-lVar45 < (longlong)uVar16)))) {
            uVar40 = 1;
            if (uVar26 != 0) {
              uVar37 = 0;
              do {
                uVar48 = uVar37;
                *(undefined1 *)(param_3 + uVar48 * 2) =
                     *(undefined1 *)(lVar32 + lVar17 + uVar48 * 2);
                *(undefined1 *)(param_3 + 1 + uVar48 * 2) =
                     *(undefined1 *)(lVar32 + lVar17 + 1 + uVar48 * 2);
                uVar37 = uVar48 + 1;
              } while (uVar37 < uVar27);
              uVar47 = (int)uVar37 * 2;
              uVar40 = (int)uVar48 + 2 + (int)uVar37;
            }
            uVar43 = uVar47;
            if (uVar40 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                   *(undefined1 *)(lVar32 + (int)uVar40 + -1 + lVar17);
              uVar43 = uVar40;
            }
          }
          else {
            if (((longlong)uVar16 < 0x10) || ((longlong)uVar16 < lVar5)) {
              uVar37 = 0;
            }
            else {
              uVar37 = 0;
              lVar45 = lVar17 + lVar32;
              if (uVar24 != 0) {
                do {
                  *(undefined1 *)(uVar37 + param_3) = *(undefined1 *)(uVar37 + lVar45);
                  uVar37 = uVar37 + 1;
                } while (uVar37 < uVar24);
              }
              uVar48 = uVar24;
              uVar37 = uVar35;
              if ((lVar45 + uVar24 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar45);
                  *(undefined1 (*) [16])(uVar48 + param_3) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar35);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar45));
                  *(undefined1 (*) [16])(uVar48 + param_3) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar35);
              }
            }
            uVar43 = param_5;
            if (uVar37 < uVar16) {
              do {
                *(undefined1 *)(uVar37 + param_3) = *(undefined1 *)(uVar37 + lVar32 + lVar17);
                uVar37 = uVar37 + 1;
              } while (uVar37 < uVar16);
            }
          }
        }
        lVar45 = (longlong)(int)uVar43;
        if (0 < (int)(uint)param_6) {
          if (uVar18 < 7) {
LAB_140a4c7ff:
            iVar41 = 1;
            uVar47 = uVar43;
            if (uVar60 != 0) {
              uVar37 = 0;
              do {
                uVar48 = uVar37;
                *(undefined1 *)(param_3 + lVar45 + uVar48 * 2) =
                     *(undefined1 *)(param_1 + lVar17 + uVar48 * 2);
                *(undefined1 *)(param_3 + lVar45 + 1 + uVar48 * 2) =
                     *(undefined1 *)(param_1 + lVar17 + 1 + uVar48 * 2);
                uVar37 = uVar48 + 1;
              } while (uVar37 < uVar62);
              uVar47 = uVar43 + (int)uVar37 * 2;
              iVar41 = (int)uVar48 + 2 + (int)uVar37;
            }
            if (iVar41 - 1U < uVar18) {
              *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar45) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar17);
              uVar47 = uVar43 + iVar41;
            }
          }
          else {
            uVar37 = param_3 + lVar45;
            lVar51 = param_1 + lVar17;
            if (((longlong)(uVar37 - lVar51) < (longlong)(ulonglong)uVar18) &&
               ((longlong)-(uVar37 - lVar51) < (longlong)(ulonglong)uVar18)) goto LAB_140a4c7ff;
            if (uVar18 < 0x10) {
LAB_140a4cbf5:
              uVar49 = 0;
            }
            else {
              uVar48 = uVar37 & 0xf;
              if ((int)uVar48 != 0) {
                uVar48 = (ulonglong)(0x10 - (int)uVar48);
              }
              iVar41 = (int)uVar48;
              if (uVar18 < iVar41 + 0x10U) goto LAB_140a4cbf5;
              iVar14 = uVar18 - (uVar18 - iVar41 & 0xf);
              uVar49 = 0;
              if (iVar41 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar48);
              }
              if ((lVar51 + uVar48 & 0xf) == 0) {
                uVar49 = (ulonglong)iVar14;
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                  *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar49);
              }
              else {
                uVar49 = (ulonglong)iVar14;
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                  *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar49);
              }
            }
            for (; uVar49 < uVar19; uVar49 = uVar49 + 1) {
              *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
            }
            uVar47 = uVar43 + uVar18;
          }
          uVar43 = uVar47;
          lVar45 = (longlong)(int)uVar43;
          if (4 < (int)(uint)param_6) {
            uVar43 = uVar43 + 4;
            *(undefined1 *)(lVar45 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar17);
            *(undefined1 *)(lVar45 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar17);
            *(undefined1 *)(lVar45 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar17);
            *(undefined1 *)(lVar45 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar17);
            lVar45 = (longlong)(int)uVar43;
          }
        }
        uVar13 = *(undefined1 *)(param_1 + uVar21 + -1 + lVar17);
        iVar41 = (int)lVar45;
        if (uVar28 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar3 < 0x10) {
LAB_140a4cbfc:
              iVar14 = 0;
            }
            else {
              uVar37 = param_3 + lVar45;
              uVar48 = uVar37 & 0xf;
              if (uVar48 != 0) {
                uVar48 = 0x10 - uVar48;
              }
              if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4cbfc;
              uVar49 = 0;
              iVar14 = iVar23 - (iVar23 - (int)uVar48 & 0xfU);
              if (uVar48 != 0) {
                do {
                  *(undefined1 *)(uVar49 + uVar37) = uVar13;
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar48);
              }
              uVar68 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
              in_XMM1._0_8_ = CONCAT44(uVar68,uVar68);
              in_XMM1._8_8_ = in_XMM1._0_8_;
              do {
                *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                uVar48 = uVar48 + 0x10;
              } while (uVar48 < (ulonglong)(longlong)iVar14);
              uVar43 = iVar41 + iVar14;
            }
            uVar37 = (ulonglong)iVar14;
            if (uVar3 <= uVar37) goto LAB_140a4cbca;
            do {
              *(undefined1 *)(uVar37 + param_3 + lVar45) = uVar13;
              uVar37 = uVar37 + 1;
            } while (uVar37 < uVar3);
            lVar45 = (longlong)((int)uVar37 + iVar41);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a4cbcd;
          if (6 < (int)uVar1) {
            lVar51 = lVar17 + lVar7;
            uVar37 = param_3 + lVar45;
            if (((longlong)(4 - uVar16) <= (longlong)(uVar37 - lVar51)) ||
               ((longlong)(4 - uVar16) <= (longlong)-(uVar37 - lVar51))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4cc04:
                uVar49 = 0;
              }
              else {
                uVar48 = uVar37 & 0xf;
                if (uVar48 != 0) {
                  uVar48 = 0x10 - uVar48;
                }
                if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4cc04;
                uVar58 = 0;
                uVar49 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                if (uVar48 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar37) = *(undefined1 *)(uVar58 + lVar51);
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar48);
                }
                if ((lVar51 + uVar48 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                    *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar49);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                    *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar49);
                }
              }
              for (; uVar49 < uVar3; uVar49 = uVar49 + 1) {
                *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
              }
              lVar45 = (longlong)(iVar41 + 4 + iVar64);
              goto LAB_140a4cbcd;
            }
          }
          iVar14 = 1;
          if (uVar29 != 0) {
            uVar37 = 0;
            do {
              uVar48 = uVar37;
              *(undefined1 *)(param_3 + lVar45 + uVar48 * 2) =
                   *(undefined1 *)(lVar17 + lVar7 + uVar48 * 2);
              *(undefined1 *)(param_3 + lVar45 + 1 + uVar48 * 2) =
                   *(undefined1 *)(lVar17 + lVar7 + 1 + uVar48 * 2);
              uVar37 = uVar48 + 1;
            } while (uVar37 < uVar33);
            uVar43 = iVar41 + (int)uVar37 * 2;
            iVar14 = (int)uVar48 + 2 + (int)uVar37;
          }
          if (iVar14 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar14 + -1 + param_3 + lVar45) =
                 *(undefined1 *)(lVar7 + iVar14 + -1 + lVar17);
            lVar45 = (longlong)(iVar14 + iVar41);
            goto LAB_140a4cbcd;
          }
LAB_140a4cbca:
          lVar45 = (longlong)(int)uVar43;
        }
LAB_140a4cbcd:
        uVar37 = lVar45 - lVar2;
        if ((int)(uint)param_6 < 5) {
          uVar37 = uVar16;
        }
      }
      else if (uVar47 == 2) {
        uVar48 = uVar16;
        if (0 < (int)(uint)param_6) {
          if (uVar18 < 7) {
LAB_140a4b0dd:
            iVar41 = 1;
            uVar47 = param_5;
            if (uVar60 != 0) {
              lVar17 = lVar15 * uVar20 + param_1;
              uVar48 = 0;
              do {
                uVar49 = uVar48;
                *(undefined1 *)(uVar6 + uVar49 * 2) = *(undefined1 *)(lVar17 + uVar49 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar49 * 2) = *(undefined1 *)(lVar17 + 1 + uVar49 * 2);
                uVar48 = uVar49 + 1;
              } while (uVar48 < uVar62);
              iVar41 = (int)uVar49 + 2 + (int)uVar48;
              uVar47 = param_5 + (int)uVar48 * 2;
            }
            if (iVar41 - 1U < uVar18) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar15 * uVar20);
              uVar47 = param_5 + iVar41;
            }
          }
          else {
            lVar17 = lVar15 * uVar20 + param_1;
            if (((longlong)(uVar6 - lVar17) < (longlong)(ulonglong)uVar18) &&
               ((longlong)-(uVar6 - lVar17) < (longlong)(ulonglong)uVar18)) goto LAB_140a4b0dd;
            if ((uVar18 < 0x10) || (uVar18 < iVar39 + 0x10U)) {
              iVar41 = 0;
            }
            else {
              uVar48 = 0;
              if (iVar39 != 0) {
                do {
                  *(undefined1 *)(uVar48 + uVar6) = *(undefined1 *)(uVar48 + lVar17);
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar44);
              }
              uVar48 = uVar44;
              iVar41 = iVar52;
              if ((lVar17 + uVar44 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar17);
                  *(undefined1 (*) [16])(uVar48 + uVar6) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar57);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar17));
                  *(undefined1 (*) [16])(uVar48 + uVar6) = in_XMM1;
                  uVar48 = uVar48 + 0x10;
                } while (uVar48 < uVar57);
              }
            }
            for (uVar48 = (ulonglong)iVar41; uVar47 = param_5 + uVar18, uVar48 < uVar19;
                uVar48 = uVar48 + 1) {
              *(undefined1 *)(uVar48 + uVar6) = *(undefined1 *)(uVar48 + lVar17);
            }
          }
          uVar48 = (ulonglong)(int)uVar47;
          if (4 < (int)(uint)param_6) {
            lVar17 = lVar15 * uVar20;
            if (uVar38 == 0) {
              if (-1 < (int)uVar65) {
                if (6 < (int)param_5) {
                  lVar45 = lVar17 + lVar7;
                  lVar51 = ((param_3 - 1) + uVar16) - (lVar45 + -1);
                  if (((longlong)uVar16 < lVar51) ||
                     (-uVar16 != lVar51 && (longlong)uVar16 <= -lVar51)) {
                    if (((longlong)uVar55 < 0x10) || ((longlong)uVar55 < lVar4)) {
                      uVar37 = 0;
                    }
                    else {
                      uVar37 = 0;
                      lVar51 = lVar45 - uVar16;
                      if (uVar36 != 0) {
                        do {
                          *(undefined1 *)(uVar37 + param_3) = *(undefined1 *)(uVar37 + lVar51);
                          uVar37 = uVar37 + 1;
                        } while (uVar37 < uVar36);
                      }
                      uVar49 = uVar36;
                      uVar37 = uVar56;
                      if ((lVar51 + uVar36 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar51);
                          *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar56);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar51));
                          *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar56);
                      }
                    }
                    if (uVar37 < uVar55) {
                      do {
                        *(undefined1 *)(uVar37 + param_3) =
                             *(undefined1 *)(uVar37 + (lVar45 - uVar16));
                        uVar37 = uVar37 + 1;
                      } while (uVar37 < uVar55);
                    }
                    goto LAB_140a4b606;
                  }
                }
                iVar41 = 1;
                lVar45 = 0;
                if (uVar26 != 0) {
                  uVar37 = 0;
                  do {
                    uVar49 = uVar37;
                    uVar37 = uVar49 + 1;
                    *(undefined1 *)(lVar45 + -1 + uVar6) =
                         *(undefined1 *)(lVar45 + -1 + lVar17 + lVar7);
                    *(undefined1 *)(lVar45 + -2 + uVar6) =
                         *(undefined1 *)(lVar45 + -2 + lVar17 + lVar7);
                    lVar45 = lVar45 + -2;
                  } while (uVar37 < uVar27);
                  iVar41 = (int)uVar49 + 2 + (int)uVar37;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)((lVar17 + lVar7) - (longlong)iVar41);
                }
              }
            }
            else if (-1 < (int)uVar65) {
              if (6 < (int)param_5) {
                lVar45 = ((param_3 - 1) + uVar16) - (param_1 + -1 + lVar17);
                if (((longlong)uVar16 < lVar45) ||
                   (-uVar16 != lVar45 && (longlong)uVar16 <= -lVar45)) {
                  if (((longlong)uVar55 < 0x10) || ((longlong)uVar55 < lVar4)) {
                    uVar37 = 0;
                  }
                  else {
                    uVar37 = 0;
                    lVar45 = (param_1 + lVar17) - uVar16;
                    if (uVar36 != 0) {
                      do {
                        *(undefined1 *)(uVar37 + param_3) = *(undefined1 *)(uVar37 + lVar45);
                        uVar37 = uVar37 + 1;
                      } while (uVar37 < uVar36);
                    }
                    uVar49 = uVar36;
                    uVar37 = uVar56;
                    if ((lVar45 + uVar36 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                        *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar56);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                        *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                        uVar49 = uVar49 + 0x10;
                      } while (uVar49 < uVar56);
                    }
                  }
                  if (uVar37 < uVar55) {
                    do {
                      *(undefined1 *)(uVar37 + param_3) =
                           *(undefined1 *)(uVar37 + ((param_1 + lVar17) - uVar16));
                      uVar37 = uVar37 + 1;
                    } while (uVar37 < uVar55);
                  }
                  goto LAB_140a4b606;
                }
              }
              iVar41 = 1;
              lVar45 = 0;
              if (uVar26 != 0) {
                uVar37 = 0;
                do {
                  uVar49 = uVar37;
                  uVar37 = uVar49 + 1;
                  *(undefined1 *)(lVar45 + -1 + uVar6) =
                       *(undefined1 *)(lVar45 + -1 + param_1 + lVar17);
                  *(undefined1 *)(lVar45 + -2 + uVar6) =
                       *(undefined1 *)(lVar45 + -2 + param_1 + lVar17);
                  lVar45 = lVar45 + -2;
                } while (uVar37 < uVar27);
                iVar41 = (int)uVar49 + 2 + (int)uVar37;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) =
                     *(undefined1 *)((param_1 + lVar17) - (longlong)iVar41);
              }
            }
LAB_140a4b606:
            *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar17);
            *(undefined1 *)(uVar48 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar17);
            iVar14 = uVar47 + 4;
            *(undefined1 *)(uVar48 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar17);
            *(undefined1 *)(uVar48 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar17);
            lVar45 = (longlong)iVar14;
            iVar41 = iVar14;
            if (uVar28 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  uVar37 = param_3 + lVar45;
                  lVar51 = param_1 + lVar17;
                  if (((longlong)(4 - uVar16) <= (longlong)(uVar37 - lVar51)) ||
                     ((longlong)(4 - uVar16) <= (longlong)-(uVar37 - lVar51))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a4c2ea:
                      uVar49 = 0;
                    }
                    else {
                      uVar48 = uVar37 & 0xf;
                      if (uVar48 != 0) {
                        uVar48 = 0x10 - uVar48;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4c2ea;
                      uVar58 = 0;
                      uVar49 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                      if (uVar48 != 0) {
                        do {
                          *(undefined1 *)(uVar58 + uVar37) = *(undefined1 *)(uVar58 + lVar51);
                          uVar58 = uVar58 + 1;
                        } while (uVar58 < uVar48);
                      }
                      if ((lVar51 + uVar48 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                          *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                          *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                    }
                    for (; uVar49 < uVar3; uVar49 = uVar49 + 1) {
                      *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
                    }
                    lVar45 = (longlong)(int)(iVar64 + 8 + uVar47);
                    goto LAB_140a4ba5a;
                  }
                }
                iVar42 = 1;
                if (uVar29 != 0) {
                  uVar37 = 0;
                  do {
                    uVar48 = uVar37;
                    *(undefined1 *)(param_3 + lVar45 + uVar48 * 2) =
                         *(undefined1 *)(param_1 + lVar17 + uVar48 * 2);
                    *(undefined1 *)(param_3 + lVar45 + 1 + uVar48 * 2) =
                         *(undefined1 *)(param_1 + lVar17 + 1 + uVar48 * 2);
                    uVar37 = uVar48 + 1;
                  } while (uVar37 < uVar33);
                  iVar41 = (int)uVar37 * 2 + 4 + uVar47;
                  iVar42 = (int)uVar48 + 2 + (int)uVar37;
                }
                if (uVar1 <= iVar42 - 1U) goto LAB_140a4ba57;
                *(undefined1 *)((longlong)iVar42 + -1 + param_3 + lVar45) =
                     *(undefined1 *)(param_1 + iVar42 + -1 + lVar17);
                lVar45 = (longlong)(iVar42 + iVar14);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a4ba5a;
              if (6 < (int)uVar1) {
                lVar51 = lVar17 + lVar7;
                uVar37 = param_3 + lVar45;
                if (((longlong)(4 - uVar16) <= (longlong)(uVar37 - lVar51)) ||
                   ((longlong)(4 - uVar16) <= (longlong)-(uVar37 - lVar51))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4c2f2:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = uVar37 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4c2f2;
                    uVar58 = 0;
                    uVar49 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        *(undefined1 *)(uVar58 + uVar37) = *(undefined1 *)(uVar58 + lVar51);
                        uVar58 = uVar58 + 1;
                      } while (uVar58 < uVar48);
                    }
                    if ((lVar51 + uVar48 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                        *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar49);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                        *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar49);
                    }
                  }
                  for (; uVar49 < uVar3; uVar49 = uVar49 + 1) {
                    *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
                  }
                  lVar45 = (longlong)(int)(iVar64 + 8 + uVar47);
                  goto LAB_140a4ba5a;
                }
              }
              iVar42 = 1;
              if (uVar29 != 0) {
                uVar37 = 0;
                do {
                  uVar48 = uVar37;
                  *(undefined1 *)(param_3 + lVar45 + uVar48 * 2) =
                       *(undefined1 *)(lVar17 + lVar7 + uVar48 * 2);
                  *(undefined1 *)(param_3 + lVar45 + 1 + uVar48 * 2) =
                       *(undefined1 *)(lVar17 + lVar7 + 1 + uVar48 * 2);
                  uVar37 = uVar48 + 1;
                } while (uVar37 < uVar33);
                iVar41 = (int)uVar37 * 2 + 4 + uVar47;
                iVar42 = (int)uVar48 + 2 + (int)uVar37;
              }
              if (iVar42 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar42 + -1 + param_3 + lVar45) =
                     *(undefined1 *)(lVar7 + iVar42 + -1 + lVar17);
                lVar45 = (longlong)(iVar42 + iVar14);
                goto LAB_140a4ba5a;
              }
LAB_140a4ba57:
              lVar45 = (longlong)iVar41;
            }
LAB_140a4ba5a:
            uVar37 = lVar45 - lVar2;
            goto LAB_140a49a14;
          }
        }
        if (uVar38 == 0) {
          if (-1 < (int)uVar65) {
            if (((int)param_5 < 7) ||
               ((lVar17 = ((param_3 - 1) + uVar16) - ((uVar6 - 1) + uVar21),
                lVar17 <= (longlong)uVar16 && (-uVar16 == lVar17 || -lVar17 < (longlong)uVar16)))) {
              iVar41 = 1;
              lVar17 = 0;
              uVar49 = 0;
              if (uVar26 != 0) {
                do {
                  uVar58 = uVar49;
                  uVar49 = uVar58 + 1;
                  *(undefined1 *)(lVar17 + -1 + uVar6) = *(undefined1 *)(lVar17 + -1 + lVar54);
                  *(undefined1 *)(lVar17 + -2 + uVar6) = *(undefined1 *)(lVar17 + -2 + lVar54);
                  lVar17 = lVar17 + -2;
                } while (uVar49 < uVar27);
                iVar41 = (int)uVar58 + 2 + (int)uVar49;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) = *(undefined1 *)(lVar54 - iVar41);
              }
            }
            else {
              if (((longlong)uVar55 < 0x10) || ((longlong)uVar55 < lVar4)) {
                uVar49 = 0;
              }
              else {
                uVar49 = 0;
                if (uVar36 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar67);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar36);
                }
                uVar58 = uVar36;
                uVar49 = uVar56;
                if ((lVar67 + uVar36 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar58 + lVar67);
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar56);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar58 + lVar67));
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar56);
                }
              }
              for (; uVar49 < uVar55; uVar49 = uVar49 + 1) {
                *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar67);
              }
            }
          }
        }
        else if (-1 < (int)uVar65) {
          if (6 < (int)param_5) {
            lVar17 = param_1 + lVar15 * uVar20;
            lVar45 = ((param_3 - 1) + uVar16) - (lVar17 + -1);
            if (((longlong)uVar16 < lVar45) || (-uVar16 != lVar45 && (longlong)uVar16 <= -lVar45)) {
              if (((longlong)uVar55 < 0x10) || ((longlong)uVar55 < lVar4)) {
                uVar49 = 0;
              }
              else {
                uVar49 = 0;
                lVar45 = lVar17 - uVar16;
                if (uVar36 != 0) {
                  do {
                    *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + lVar45);
                    uVar49 = uVar49 + 1;
                  } while (uVar49 < uVar36);
                }
                uVar58 = uVar36;
                uVar49 = uVar56;
                if ((lVar45 + uVar36 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar58 + lVar45);
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar56);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar58 + lVar45));
                    *(undefined1 (*) [16])(uVar58 + param_3) = in_XMM1;
                    uVar58 = uVar58 + 0x10;
                  } while (uVar58 < uVar56);
                }
              }
              if (uVar49 < uVar55) {
                do {
                  *(undefined1 *)(uVar49 + param_3) = *(undefined1 *)(uVar49 + (lVar17 - uVar16));
                  uVar49 = uVar49 + 1;
                } while (uVar49 < uVar55);
              }
              goto LAB_140a4bee9;
            }
          }
          iVar41 = 1;
          lVar17 = 0;
          if (uVar26 != 0) {
            lVar45 = lVar15 * uVar20 + param_1;
            uVar49 = 0;
            do {
              uVar58 = uVar49;
              uVar49 = uVar58 + 1;
              *(undefined1 *)(lVar17 + -1 + uVar6) = *(undefined1 *)(lVar17 + -1 + lVar45);
              *(undefined1 *)(lVar17 + -2 + uVar6) = *(undefined1 *)(lVar17 + -2 + lVar45);
              lVar17 = lVar17 + -2;
            } while (uVar49 < uVar27);
            iVar41 = (int)uVar58 + 2 + (int)uVar49;
          }
          if (iVar41 - 1U < param_5) {
            *(undefined1 *)(uVar6 - (longlong)iVar41) =
                 *(undefined1 *)((param_1 - iVar41) + lVar15 * uVar20);
          }
        }
LAB_140a4bee9:
        if (uVar28 == 0) {
          if ((int)uVar1 < 1) goto LAB_140a49a14;
          if (6 < (int)uVar1) {
            uVar49 = param_3 + uVar48;
            lVar17 = lVar34 + uVar48;
            if (((longlong)(4 - uVar16) <= (longlong)(uVar49 - lVar17)) ||
               ((longlong)(4 - uVar16) <= (longlong)-(uVar49 - lVar17))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4c309:
                uVar58 = 0;
              }
              else {
                uVar48 = uVar49 & 0xf;
                if (uVar48 != 0) {
                  uVar48 = 0x10 - uVar48;
                }
                if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4c309;
                uVar50 = 0;
                uVar58 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                if (uVar48 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + uVar49) = *(undefined1 *)(uVar50 + lVar17);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar48);
                }
                if ((lVar17 + uVar48 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar17);
                    *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar17));
                    *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar17);
              }
              goto LAB_140a49a14;
            }
          }
          iVar41 = 1;
          if (uVar29 != 0) {
            uVar49 = 0;
            do {
              uVar58 = uVar49;
              *(undefined1 *)(param_3 + uVar48 + uVar58 * 2) =
                   *(undefined1 *)(uVar48 + lVar34 + uVar58 * 2);
              *(undefined1 *)(param_3 + uVar48 + 1 + uVar58 * 2) =
                   *(undefined1 *)(uVar48 + lVar34 + 1 + uVar58 * 2);
              uVar49 = uVar58 + 1;
            } while (uVar49 < uVar33);
            iVar41 = (int)uVar58 + 2 + (int)uVar49;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + uVar48 + param_3) =
                 *(undefined1 *)((longlong)iVar41 + -1 + uVar48 + lVar34);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a49a14;
          if (6 < (int)uVar1) {
            uVar49 = param_3 + uVar48;
            lVar17 = lVar15 * uVar20 + lVar7;
            if (((longlong)(4 - uVar16) <= (longlong)(uVar49 - lVar17)) ||
               ((longlong)(4 - uVar16) <= (longlong)-(uVar49 - lVar17))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4c311:
                uVar58 = 0;
              }
              else {
                uVar48 = uVar49 & 0xf;
                if (uVar48 != 0) {
                  uVar48 = 0x10 - uVar48;
                }
                if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4c311;
                uVar50 = 0;
                uVar58 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                if (uVar48 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + uVar49) = *(undefined1 *)(uVar50 + lVar17);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar48);
                }
                if ((lVar17 + uVar48 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar17);
                    *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar17));
                    *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                    uVar48 = uVar48 + 0x10;
                  } while (uVar48 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar17);
              }
              goto LAB_140a49a14;
            }
          }
          iVar41 = 1;
          if (uVar29 != 0) {
            lVar17 = lVar15 * uVar20 + lVar7;
            uVar49 = 0;
            do {
              uVar58 = uVar49;
              *(undefined1 *)(param_3 + uVar48 + uVar58 * 2) = *(undefined1 *)(lVar17 + uVar58 * 2);
              *(undefined1 *)(param_3 + uVar48 + 1 + uVar58 * 2) =
                   *(undefined1 *)(lVar17 + 1 + uVar58 * 2);
              uVar49 = uVar58 + 1;
            } while (uVar49 < uVar33);
            iVar41 = (int)uVar58 + 2 + (int)uVar49;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + uVar48 + param_3) =
                 *(undefined1 *)(lVar7 + iVar41 + -1 + lVar15 * uVar20);
          }
        }
      }
      else {
        if (uVar47 != 3) {
          if ((param_7 & 0xf0) != 0xf0) {
            uVar37 = 0;
            goto LAB_140a49a14;
          }
          uVar47 = 0;
          uVar43 = 0;
          if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar45 = lVar15 * uVar20;
              lVar17 = param_3 - ((int)-param_5 + param_1 + lVar45);
              if (((longlong)uVar16 <= lVar17) || ((longlong)uVar16 <= -lVar17)) {
                if (((longlong)uVar16 < 0x10) || ((longlong)uVar16 < lVar5)) {
                  uVar48 = 0;
                }
                else {
                  uVar48 = 0;
                  lVar17 = lVar45 + lVar32;
                  if (uVar24 != 0) {
                    do {
                      *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(uVar48 + lVar17);
                      uVar48 = uVar48 + 1;
                    } while (uVar48 < uVar24);
                  }
                  uVar49 = uVar24;
                  uVar48 = uVar35;
                  if ((lVar17 + uVar24 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar17);
                      *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                      uVar49 = uVar49 + 0x10;
                    } while (uVar49 < uVar35);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar17));
                      *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                      uVar49 = uVar49 + 0x10;
                    } while (uVar49 < uVar35);
                  }
                }
                uVar43 = param_5;
                if (uVar48 < uVar16) {
                  do {
                    *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(uVar48 + lVar45 + lVar32);
                    uVar48 = uVar48 + 1;
                  } while (uVar48 < uVar16);
                }
                goto LAB_140a49358;
              }
            }
            uVar40 = 1;
            if (uVar26 != 0) {
              lVar17 = lVar15 * uVar20 + lVar32;
              uVar48 = 0;
              do {
                uVar49 = uVar48;
                *(undefined1 *)(param_3 + uVar49 * 2) = *(undefined1 *)(lVar17 + uVar49 * 2);
                *(undefined1 *)(param_3 + 1 + uVar49 * 2) = *(undefined1 *)(lVar17 + 1 + uVar49 * 2)
                ;
                uVar48 = uVar49 + 1;
              } while (uVar48 < uVar27);
              uVar47 = (int)uVar48 * 2;
              uVar40 = (int)uVar49 + 2 + (int)uVar48;
            }
            uVar43 = uVar47;
            if (uVar40 - 1 < param_5) {
              *(undefined1 *)((longlong)(int)uVar40 + -1 + param_3) =
                   *(undefined1 *)(lVar32 + (int)uVar40 + -1 + lVar15 * uVar20);
              uVar43 = uVar40;
            }
          }
LAB_140a49358:
          lVar17 = (longlong)(int)uVar43;
          if (0 < (int)(uint)param_6) {
            if (uVar18 < 7) {
LAB_140a494ff:
              iVar41 = 1;
              uVar47 = uVar43;
              if (uVar60 != 0) {
                lVar45 = lVar15 * uVar20 + param_1;
                uVar48 = 0;
                do {
                  uVar49 = uVar48;
                  *(undefined1 *)(param_3 + lVar17 + uVar49 * 2) =
                       *(undefined1 *)(lVar45 + uVar49 * 2);
                  *(undefined1 *)(param_3 + lVar17 + 1 + uVar49 * 2) =
                       *(undefined1 *)(lVar45 + 1 + uVar49 * 2);
                  uVar48 = uVar49 + 1;
                } while (uVar48 < uVar62);
                uVar47 = uVar43 + (int)uVar48 * 2;
                iVar41 = (int)uVar49 + 2 + (int)uVar48;
              }
              if (iVar41 - 1U < uVar18) {
                *(undefined1 *)((longlong)iVar41 + -1 + param_3 + lVar17) =
                     *(undefined1 *)(param_1 + iVar41 + -1 + lVar15 * uVar20);
                uVar47 = uVar43 + iVar41;
              }
            }
            else {
              uVar48 = param_3 + lVar17;
              lVar45 = lVar15 * uVar20 + param_1;
              if (((longlong)(uVar48 - lVar45) < (longlong)(ulonglong)uVar18) &&
                 ((longlong)-(uVar48 - lVar45) < (longlong)(ulonglong)uVar18)) goto LAB_140a494ff;
              if (uVar18 < 0x10) {
LAB_140a4a0c4:
                uVar58 = 0;
              }
              else {
                uVar49 = uVar48 & 0xf;
                if ((int)uVar49 != 0) {
                  uVar49 = (ulonglong)(0x10 - (int)uVar49);
                }
                iVar41 = (int)uVar49;
                if (uVar18 < iVar41 + 0x10U) goto LAB_140a4a0c4;
                iVar14 = uVar18 - (uVar18 - iVar41 & 0xf);
                uVar58 = 0;
                if (iVar41 != 0) {
                  do {
                    *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar49);
                }
                if ((lVar45 + uVar49 & 0xf) == 0) {
                  uVar58 = (ulonglong)iVar14;
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
                else {
                  uVar58 = (ulonglong)iVar14;
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
              }
              for (; uVar58 < uVar19; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
              }
              uVar47 = uVar43 + uVar18;
            }
            lVar17 = (longlong)(int)uVar47;
            if (4 < (int)(uint)param_6) {
              lVar45 = lVar15 * uVar20;
              *(undefined1 *)(lVar17 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar45);
              *(undefined1 *)(lVar17 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar45);
              iVar41 = uVar47 + 4;
              *(undefined1 *)(lVar17 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar45);
              *(undefined1 *)(lVar17 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar45);
              lVar17 = (longlong)iVar41;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar51 = lVar45 + lVar7;
                  uVar37 = param_3 + lVar17;
                  if (((longlong)(4 - uVar16) <= (longlong)(uVar37 - lVar51)) ||
                     ((longlong)(4 - uVar16) <= (longlong)-(uVar37 - lVar51))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a4a0cb:
                      uVar49 = 0;
                    }
                    else {
                      uVar48 = uVar37 & 0xf;
                      if (uVar48 != 0) {
                        uVar48 = 0x10 - uVar48;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4a0cb;
                      uVar58 = 0;
                      uVar49 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                      if (uVar48 != 0) {
                        do {
                          *(undefined1 *)(uVar58 + uVar37) = *(undefined1 *)(uVar58 + lVar51);
                          uVar58 = uVar58 + 1;
                        } while (uVar58 < uVar48);
                      }
                      if ((lVar51 + uVar48 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                          *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                          *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                          uVar48 = uVar48 + 0x10;
                        } while (uVar48 < uVar49);
                      }
                    }
                    for (; uVar49 < uVar3; uVar49 = uVar49 + 1) {
                      *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
                    }
                    lVar17 = (longlong)(int)(iVar64 + 8 + uVar47);
                    goto LAB_140a497f9;
                  }
                }
                iVar42 = 1;
                iVar14 = iVar41;
                if (uVar29 != 0) {
                  uVar37 = 0;
                  do {
                    uVar48 = uVar37;
                    *(undefined1 *)(param_3 + lVar17 + uVar48 * 2) =
                         *(undefined1 *)(lVar45 + lVar7 + uVar48 * 2);
                    *(undefined1 *)(param_3 + lVar17 + 1 + uVar48 * 2) =
                         *(undefined1 *)(lVar45 + lVar7 + 1 + uVar48 * 2);
                    uVar37 = uVar48 + 1;
                  } while (uVar37 < uVar33);
                  iVar14 = (int)uVar37 * 2 + 4 + uVar47;
                  iVar42 = (int)uVar48 + 2 + (int)uVar37;
                }
                if (iVar42 - 1U < uVar1) {
                  *(undefined1 *)((longlong)iVar42 + -1 + param_3 + lVar17) =
                       *(undefined1 *)(lVar7 + iVar42 + -1 + lVar45);
                  lVar17 = (longlong)(iVar42 + iVar41);
                }
                else {
                  lVar17 = (longlong)iVar14;
                }
              }
LAB_140a497f9:
              uVar37 = lVar17 - lVar2;
              goto LAB_140a49a14;
            }
          }
          if ((int)uVar1 < 1) goto LAB_140a49a14;
          if (6 < (int)uVar1) {
            uVar48 = param_3 + lVar17;
            lVar45 = lVar15 * uVar20 + lVar7;
            if (((longlong)(4 - uVar16) <= (longlong)(uVar48 - lVar45)) ||
               ((longlong)(4 - uVar16) <= (longlong)-(uVar48 - lVar45))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4a0d2:
                uVar58 = 0;
              }
              else {
                uVar49 = uVar48 & 0xf;
                if (uVar49 != 0) {
                  uVar49 = 0x10 - uVar49;
                }
                if ((longlong)uVar3 < (longlong)(uVar49 + 0x10)) goto LAB_140a4a0d2;
                uVar50 = 0;
                uVar58 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar49 & 0xfU));
                if (uVar49 != 0) {
                  do {
                    *(undefined1 *)(uVar50 + uVar48) = *(undefined1 *)(uVar50 + lVar45);
                    uVar50 = uVar50 + 1;
                  } while (uVar50 < uVar49);
                }
                if ((lVar45 + uVar49 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                    *(undefined1 (*) [16])(uVar49 + uVar48) = in_XMM1;
                    uVar49 = uVar49 + 0x10;
                  } while (uVar49 < uVar58);
                }
              }
              for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                *(undefined1 *)(uVar58 + uVar48) = *(undefined1 *)(uVar58 + lVar45);
              }
              goto LAB_140a49a14;
            }
          }
          iVar41 = 1;
          if (uVar29 != 0) {
            lVar45 = lVar15 * uVar20 + lVar7;
            uVar48 = 0;
            do {
              uVar49 = uVar48;
              *(undefined1 *)(param_3 + lVar17 + uVar49 * 2) = *(undefined1 *)(lVar45 + uVar49 * 2);
              *(undefined1 *)(param_3 + lVar17 + 1 + uVar49 * 2) =
                   *(undefined1 *)(lVar45 + 1 + uVar49 * 2);
              uVar48 = uVar49 + 1;
            } while (uVar48 < uVar33);
            iVar41 = (int)uVar49 + 2 + (int)uVar48;
          }
          if (iVar41 - 1U < uVar1) {
            *(undefined1 *)((longlong)iVar41 + -1 + lVar17 + param_3) =
                 *(undefined1 *)(lVar7 + iVar41 + -1 + lVar15 * uVar20);
          }
          goto LAB_140a49a14;
        }
        uVar48 = uVar16;
        if (0 < (int)(uint)param_6) {
          if (uVar18 < 7) {
LAB_140a4a25d:
            iVar41 = 1;
            uVar47 = param_5;
            if (uVar60 != 0) {
              lVar17 = lVar15 * uVar20 + param_1;
              uVar48 = 0;
              do {
                uVar49 = uVar48;
                *(undefined1 *)(uVar6 + uVar49 * 2) = *(undefined1 *)(lVar17 + uVar49 * 2);
                *(undefined1 *)(uVar6 + 1 + uVar49 * 2) = *(undefined1 *)(lVar17 + 1 + uVar49 * 2);
                uVar48 = uVar49 + 1;
              } while (uVar48 < uVar62);
              iVar41 = (int)uVar49 + 2 + (int)uVar48;
              uVar47 = param_5 + (int)uVar48 * 2;
            }
            if (iVar41 - 1U < uVar18) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar6) =
                   *(undefined1 *)(param_1 + iVar41 + -1 + lVar15 * uVar20);
              uVar47 = param_5 + iVar41;
            }
          }
          else {
            lVar17 = lVar15 * uVar20 + param_1;
            if (((longlong)(uVar6 - lVar17) < (longlong)(ulonglong)uVar18) &&
               ((longlong)-(uVar6 - lVar17) < (longlong)(ulonglong)uVar18)) goto LAB_140a4a25d;
            if ((uVar18 < 0x10) || (uVar18 < iVar39 + 0x10U)) {
              uVar48 = 0;
            }
            else {
              uVar48 = 0;
              if (iVar39 != 0) {
                do {
                  *(undefined1 *)(uVar48 + uVar6) = *(undefined1 *)(uVar48 + lVar17);
                  uVar48 = uVar48 + 1;
                } while (uVar48 < uVar44);
              }
              uVar49 = uVar44;
              uVar48 = uVar57;
              if ((lVar17 + uVar44 & 0xf) == 0) {
                do {
                  in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar17);
                  *(undefined1 (*) [16])(uVar49 + uVar6) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar57);
              }
              else {
                do {
                  in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar17));
                  *(undefined1 (*) [16])(uVar49 + uVar6) = in_XMM1;
                  uVar49 = uVar49 + 0x10;
                } while (uVar49 < uVar57);
              }
            }
            for (; uVar47 = param_5 + uVar18, uVar48 < uVar19; uVar48 = uVar48 + 1) {
              *(undefined1 *)(uVar48 + uVar6) = *(undefined1 *)(uVar48 + lVar17);
            }
          }
          uVar48 = (ulonglong)(int)uVar47;
          if (4 < (int)(uint)param_6) {
            if (uVar38 == 0) {
              if (-1 < (int)uVar65) {
                iVar41 = 1;
                lVar17 = 0;
                if (uVar26 != 0) {
                  lVar45 = param_1 + uVar61 + lVar15 * uVar20;
                  uVar37 = 0;
                  do {
                    uVar49 = uVar37;
                    *(undefined1 *)(lVar17 + -1 + uVar6) = *(undefined1 *)(lVar45 + uVar49 * 2);
                    uVar37 = uVar49 + 1;
                    *(undefined1 *)(lVar17 + -2 + uVar6) = *(undefined1 *)(lVar45 + 1 + uVar49 * 2);
                    lVar17 = lVar17 + -2;
                  } while (uVar37 < uVar27);
                  iVar41 = (int)uVar49 + 2 + (int)uVar37;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)(param_1 + uVar61 + (longlong)iVar41 + -1 + lVar15 * uVar20);
                }
              }
            }
            else {
              lVar17 = lVar15 * uVar20;
              if (-1 < (int)uVar65) {
                if (6 < (int)param_5) {
                  lVar45 = ((param_3 - 1) + uVar16) - (param_1 + -1 + lVar17);
                  if (((longlong)uVar16 < lVar45) ||
                     (-uVar16 != lVar45 && (longlong)uVar16 <= -lVar45)) {
                    if (((longlong)uVar55 < 0x10) || ((longlong)uVar55 < lVar4)) {
                      uVar37 = 0;
                    }
                    else {
                      uVar37 = 0;
                      lVar45 = (param_1 + lVar17) - uVar16;
                      if (uVar36 != 0) {
                        do {
                          *(undefined1 *)(uVar37 + param_3) = *(undefined1 *)(uVar37 + lVar45);
                          uVar37 = uVar37 + 1;
                        } while (uVar37 < uVar36);
                      }
                      uVar49 = uVar36;
                      uVar37 = uVar56;
                      if ((lVar45 + uVar36 & 0xf) == 0) {
                        do {
                          in_XMM1 = *(undefined1 (*) [16])(uVar49 + lVar45);
                          *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar56);
                      }
                      else {
                        do {
                          in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar49 + lVar45));
                          *(undefined1 (*) [16])(uVar49 + param_3) = in_XMM1;
                          uVar49 = uVar49 + 0x10;
                        } while (uVar49 < uVar56);
                      }
                    }
                    if (uVar37 < uVar55) {
                      do {
                        *(undefined1 *)(uVar37 + param_3) =
                             *(undefined1 *)(uVar37 + ((param_1 + lVar17) - uVar16));
                        uVar37 = uVar37 + 1;
                      } while (uVar37 < uVar55);
                    }
                    goto LAB_140a4a646;
                  }
                }
                iVar41 = 1;
                lVar45 = 0;
                if (uVar26 != 0) {
                  uVar37 = 0;
                  do {
                    uVar49 = uVar37;
                    uVar37 = uVar49 + 1;
                    *(undefined1 *)(lVar45 + -1 + uVar6) =
                         *(undefined1 *)(lVar45 + -1 + param_1 + lVar17);
                    *(undefined1 *)(lVar45 + -2 + uVar6) =
                         *(undefined1 *)(lVar45 + -2 + param_1 + lVar17);
                    lVar45 = lVar45 + -2;
                  } while (uVar37 < uVar27);
                  iVar41 = (int)uVar49 + 2 + (int)uVar37;
                }
                if (iVar41 - 1U < param_5) {
                  *(undefined1 *)(uVar6 - (longlong)iVar41) =
                       *(undefined1 *)((param_1 + lVar17) - (longlong)iVar41);
                }
              }
            }
LAB_140a4a646:
            lVar45 = lVar15 * uVar20;
            *(undefined1 *)(uVar48 + param_3) = *(undefined1 *)(lVar7 + -4 + lVar45);
            *(undefined1 *)(uVar48 + 1 + param_3) = *(undefined1 *)(lVar7 + -3 + lVar45);
            iVar14 = uVar47 + 4;
            *(undefined1 *)(uVar48 + 2 + param_3) = *(undefined1 *)(lVar7 + -2 + lVar45);
            *(undefined1 *)(uVar48 + 3 + param_3) = *(undefined1 *)(lVar7 + -1 + lVar45);
            lVar17 = (longlong)iVar14;
            iVar41 = iVar14;
            if (uVar28 == 0) {
              if (0 < (int)uVar1) {
                uVar37 = 0;
                iVar42 = 1;
                if (uVar29 != 0) {
                  lVar51 = lVar63 + lVar45;
                  uVar48 = uVar37;
                  do {
                    uVar49 = uVar48;
                    *(undefined1 *)(param_3 + lVar17 + uVar49 * 2) =
                         *(undefined1 *)((uVar37 - 1) + lVar51);
                    lVar46 = uVar37 - 2;
                    uVar37 = uVar37 - 2;
                    *(undefined1 *)(param_3 + lVar17 + 1 + uVar49 * 2) =
                         *(undefined1 *)(lVar46 + lVar51);
                    uVar48 = uVar49 + 1;
                  } while (uVar48 < uVar33);
                  iVar41 = (int)uVar48 * 2 + 4 + uVar47;
                  iVar42 = (int)uVar49 + 2 + (int)uVar48;
                }
                if (uVar1 <= iVar42 - 1U) goto LAB_140a4a964;
                *(undefined1 *)((longlong)iVar42 + -1 + param_3 + lVar17) =
                     *(undefined1 *)((lVar45 + lVar63) - (longlong)iVar42);
                lVar17 = (longlong)(iVar42 + iVar14);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a4a967;
              if (6 < (int)uVar1) {
                lVar51 = lVar45 + lVar7;
                uVar37 = param_3 + lVar17;
                if (((longlong)(4 - uVar16) <= (longlong)(uVar37 - lVar51)) ||
                   ((longlong)(4 - uVar16) <= (longlong)-(uVar37 - lVar51))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4af50:
                    uVar49 = 0;
                  }
                  else {
                    uVar48 = uVar37 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4af50;
                    uVar58 = 0;
                    uVar49 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        *(undefined1 *)(uVar58 + uVar37) = *(undefined1 *)(uVar58 + lVar51);
                        uVar58 = uVar58 + 1;
                      } while (uVar58 < uVar48);
                    }
                    if ((lVar51 + uVar48 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar51);
                        *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar49);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar51));
                        *(undefined1 (*) [16])(uVar48 + uVar37) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar49);
                    }
                  }
                  for (; uVar49 < uVar3; uVar49 = uVar49 + 1) {
                    *(undefined1 *)(uVar49 + uVar37) = *(undefined1 *)(uVar49 + lVar51);
                  }
                  lVar17 = (longlong)(int)(iVar64 + 8 + uVar47);
                  goto LAB_140a4a967;
                }
              }
              iVar42 = 1;
              if (uVar29 != 0) {
                uVar37 = 0;
                do {
                  uVar48 = uVar37;
                  *(undefined1 *)(param_3 + lVar17 + uVar48 * 2) =
                       *(undefined1 *)(lVar45 + lVar7 + uVar48 * 2);
                  *(undefined1 *)(param_3 + lVar17 + 1 + uVar48 * 2) =
                       *(undefined1 *)(lVar45 + lVar7 + 1 + uVar48 * 2);
                  uVar37 = uVar48 + 1;
                } while (uVar37 < uVar33);
                iVar41 = (int)uVar37 * 2 + 4 + uVar47;
                iVar42 = (int)uVar48 + 2 + (int)uVar37;
              }
              if (iVar42 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar42 + -1 + param_3 + lVar17) =
                     *(undefined1 *)(lVar7 + iVar42 + -1 + lVar45);
                lVar17 = (longlong)(iVar42 + iVar14);
              }
              else {
LAB_140a4a964:
                lVar17 = (longlong)iVar41;
              }
            }
LAB_140a4a967:
            uVar37 = lVar17 - lVar2;
            goto LAB_140a49a14;
          }
        }
        uVar49 = (ulonglong)uVar65;
        if (uVar38 == 0) {
          uVar47 = uVar65;
          if (uVar28 == 0) {
            while (-1 < (int)uVar47) {
              uVar47 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar49 = (ulonglong)(int)uVar49;
                lVar45 = uVar61 + 1 + uVar49;
                lVar17 = param_3 + uVar49;
                do {
                  if ((int)uVar49 < 0) break;
                  lVar51 = (longlong)(int)uVar47;
                  uVar47 = uVar47 + 1;
                  uVar49 = (ulonglong)((int)uVar49 - 1);
                  *(undefined1 *)(lVar17 - lVar51) = *(undefined1 *)(lVar51 + lVar45 + param_3);
                } while (uVar47 < uVar59);
              }
              uVar47 = (uint)uVar49;
            }
            uVar48 = 0;
            iVar41 = (((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1) + 2;
            iVar14 = iVar22;
            iVar42 = iVar22;
            if ((int)param_5 < 4) {
              do {
                iVar53 = iVar41 + iVar14;
                *(undefined1 *)(uVar48 + lVar54) = *(undefined1 *)((longlong)iVar41 + param_3);
                if (((int)(((uint)param_6 + 4) - uVar1) <= iVar53) || (iVar53 < (int)param_5)) {
                  iVar41 = iVar14 + iVar42;
                  iVar14 = -iVar14;
                  iVar53 = iVar53 - iVar41;
                  iVar42 = -iVar42;
                }
                uVar48 = uVar48 + 1;
                iVar41 = iVar53;
              } while (uVar48 < uVar3);
            }
          }
          else {
            if (-1 < (int)uVar65) {
              iVar41 = 1;
              lVar17 = 0;
              if (uVar26 != 0) {
                lVar45 = lVar15 * uVar20 + param_1;
                uVar49 = 0;
                do {
                  uVar58 = uVar49;
                  *(undefined1 *)(lVar17 + -1 + uVar6) = *(undefined1 *)(lVar45 + 1 + uVar58 * 2);
                  uVar49 = uVar58 + 1;
                  *(undefined1 *)(lVar17 + -2 + uVar6) = *(undefined1 *)(lVar45 + 2 + uVar58 * 2);
                  lVar17 = lVar17 + -2;
                } while (uVar49 < uVar27);
                iVar41 = (int)uVar58 + 2 + (int)uVar49;
              }
              if (iVar41 - 1U < param_5) {
                *(undefined1 *)(uVar6 - (longlong)iVar41) =
                     *(undefined1 *)(param_1 + iVar41 + lVar15 * uVar20);
              }
            }
LAB_140a4ac7c:
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                uVar49 = param_3 + uVar48;
                lVar17 = lVar15 * uVar20 + lVar7;
                if (((longlong)(4 - uVar16) <= (longlong)(uVar49 - lVar17)) ||
                   ((longlong)(4 - uVar16) <= (longlong)-(uVar49 - lVar17))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4af57:
                    uVar58 = 0;
                  }
                  else {
                    uVar48 = uVar49 & 0xf;
                    if (uVar48 != 0) {
                      uVar48 = 0x10 - uVar48;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar48 + 0x10)) goto LAB_140a4af57;
                    uVar50 = 0;
                    uVar58 = (ulonglong)(int)(iVar23 - (iVar23 - (int)uVar48 & 0xfU));
                    if (uVar48 != 0) {
                      do {
                        *(undefined1 *)(uVar50 + uVar49) = *(undefined1 *)(uVar50 + lVar17);
                        uVar50 = uVar50 + 1;
                      } while (uVar50 < uVar48);
                    }
                    if ((lVar17 + uVar48 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar48 + lVar17);
                        *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar58);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar48 + lVar17));
                        *(undefined1 (*) [16])(uVar48 + uVar49) = in_XMM1;
                        uVar48 = uVar48 + 0x10;
                      } while (uVar48 < uVar58);
                    }
                  }
                  for (; uVar58 < uVar3; uVar58 = uVar58 + 1) {
                    *(undefined1 *)(uVar58 + uVar49) = *(undefined1 *)(uVar58 + lVar17);
                  }
                  goto LAB_140a49a14;
                }
              }
              iVar41 = 1;
              if (uVar29 != 0) {
                lVar17 = lVar15 * uVar20 + lVar7;
                uVar49 = 0;
                do {
                  uVar58 = uVar49;
                  *(undefined1 *)(param_3 + uVar48 + uVar58 * 2) =
                       *(undefined1 *)(lVar17 + uVar58 * 2);
                  *(undefined1 *)(param_3 + uVar48 + 1 + uVar58 * 2) =
                       *(undefined1 *)(lVar17 + 1 + uVar58 * 2);
                  uVar49 = uVar58 + 1;
                } while (uVar49 < uVar33);
                iVar41 = (int)uVar58 + 2 + (int)uVar49;
              }
              if (iVar41 - 1U < uVar1) {
                *(undefined1 *)((longlong)iVar41 + -1 + uVar48 + param_3) =
                     *(undefined1 *)(lVar7 + iVar41 + -1 + lVar15 * uVar20);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar65) {
            do {
              uVar47 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar41 = (int)uVar49;
                do {
                  if ((int)uVar49 < 0) break;
                  lVar17 = (longlong)(int)uVar47;
                  uVar47 = uVar47 + 1;
                  uVar49 = (ulonglong)((int)uVar49 - 1);
                  *(undefined1 *)((param_3 + (longlong)iVar41) - lVar17) =
                       *(undefined1 *)(((longlong)iVar41 + lVar15 * uVar20 + lVar32) - lVar17);
                } while (uVar47 < uVar59);
              }
            } while (-1 < (int)uVar49);
          }
          if (uVar28 != 0) goto LAB_140a4ac7c;
          if (0 < (int)uVar1) {
            iVar41 = 1;
            lVar17 = 0;
            if (uVar29 != 0) {
              lVar45 = lVar15 * uVar20 + lVar7;
              uVar49 = 0;
              do {
                uVar58 = uVar49;
                *(undefined1 *)(param_3 + uVar48 + uVar58 * 2) =
                     *(undefined1 *)(lVar17 + -2 + lVar45);
                lVar51 = lVar17 + -3;
                lVar17 = lVar17 + -2;
                *(undefined1 *)(param_3 + uVar48 + 1 + uVar58 * 2) =
                     *(undefined1 *)(lVar51 + lVar45);
                uVar49 = uVar58 + 1;
              } while (uVar49 < uVar33);
              iVar41 = (int)uVar58 + 2 + (int)uVar49;
            }
            if (iVar41 - 1U < uVar1) {
              *(undefined1 *)((longlong)iVar41 + -1 + uVar48 + param_3) =
                   *(undefined1 *)((lVar7 - iVar41) + -1 + lVar15 * uVar20);
            }
          }
        }
      }
LAB_140a49a14:
      iVar41 = 0;
      uVar48 = 0;
      if (0 < (int)(uint)param_6) {
        do {
          if ((longlong)uVar16 <= (longlong)uVar48) break;
          bVar12 = *(byte *)(uVar48 + 2 + param_3);
          *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + uVar48 * 2) =
               (ushort)*(byte *)(uVar48 + param_3) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
               (ushort)*(byte *)(uVar48 + 4 + param_3) +
               ((ushort)*(byte *)(uVar48 + 1 + param_3) + (ushort)*(byte *)(uVar48 + 3 + param_3)) *
               4;
          uVar49 = uVar48 + 1;
          iVar41 = (int)uVar48 + 1;
          uVar48 = uVar49;
        } while (uVar49 < uVar21);
      }
      lVar17 = (longlong)iVar41;
      if (0 < (int)((uint)param_6 - 4)) {
        uVar48 = 0;
        iVar42 = 1;
        lVar51 = 0;
        lVar45 = 0;
        iVar14 = iVar41;
        if (uVar30 != 0) {
          lVar46 = lVar15 * uVar20 + param_1;
          do {
            bVar12 = *(byte *)(lVar45 + 2 + lVar46);
            uVar48 = uVar48 + 1;
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + lVar51) =
                 (ushort)*(byte *)(lVar45 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar45 + 4 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 1 + lVar46) + (ushort)*(byte *)(lVar45 + 3 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 3 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 2 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 1 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 5 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 2 + lVar46) + (ushort)*(byte *)(lVar45 + 4 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 4 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 4 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 2 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 6 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 3 + lVar46) + (ushort)*(byte *)(lVar45 + 5 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 5 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 6 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 3 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 7 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 4 + lVar46) + (ushort)*(byte *)(lVar45 + 6 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 6 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 8 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 4 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 8 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 5 + lVar46) + (ushort)*(byte *)(lVar45 + 7 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 7 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 10 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 5 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 9 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 6 + lVar46) + (ushort)*(byte *)(lVar45 + 8 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 8 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0xc + lVar51) =
                 (ushort)*(byte *)(lVar45 + 6 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 10 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 7 + lVar46) + (ushort)*(byte *)(lVar45 + 9 + lVar46)) *
                 4;
            bVar12 = *(byte *)(lVar45 + 9 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0xe + lVar51) =
                 (ushort)*(byte *)(lVar45 + 7 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 0xb + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 8 + lVar46) + (ushort)*(byte *)(lVar45 + 10 + lVar46))
                 * 4;
            bVar12 = *(byte *)(lVar45 + 10 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x10 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 8 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 0xc + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 9 + lVar46) + (ushort)*(byte *)(lVar45 + 0xb + lVar46))
                 * 4;
            bVar12 = *(byte *)(lVar45 + 0xb + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x12 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 9 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 0xd + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 10 + lVar46) + (ushort)*(byte *)(lVar45 + 0xc + lVar46)
                 ) * 4;
            bVar12 = *(byte *)(lVar45 + 0xc + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x14 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 10 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2
                 + (ushort)*(byte *)(lVar45 + 0xe + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 0xb + lVar46) +
                 (ushort)*(byte *)(lVar45 + 0xd + lVar46)) * 4;
            bVar12 = *(byte *)(lVar45 + 0xd + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x16 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 0xb + lVar46) +
                 ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar45 + 0xf + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 0xc + lVar46) +
                 (ushort)*(byte *)(lVar45 + 0xe + lVar46)) * 4;
            bVar12 = *(byte *)(lVar45 + 0xe + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x18 + lVar51) =
                 (ushort)*(byte *)(lVar45 + 0xc + lVar46) +
                 ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar45 + 0x10 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 0xd + lVar46) +
                 (ushort)*(byte *)(lVar45 + 0xf + lVar46)) * 4;
            bVar12 = *(byte *)(lVar45 + 0xf + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x1a + lVar51) =
                 (ushort)*(byte *)(lVar45 + 0xd + lVar46) +
                 ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar45 + 0x11 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 0xe + lVar46) +
                 (ushort)*(byte *)(lVar45 + 0x10 + lVar46)) * 4;
            bVar12 = *(byte *)(lVar45 + 0x10 + lVar46);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x1c + lVar51) =
                 (ushort)*(byte *)(lVar45 + 0xe + lVar46) +
                 ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar45 + 0x12 + lVar46) +
                 ((ushort)*(byte *)(lVar45 + 0xf + lVar46) +
                 (ushort)*(byte *)(lVar45 + 0x11 + lVar46)) * 4;
            bVar12 = *(byte *)(lVar45 + 0x11 + lVar46);
            lVar8 = lVar45 + 0x10;
            lVar9 = lVar45 + 0x12;
            lVar10 = lVar45 + 0xf;
            lVar11 = lVar45 + 0x13;
            lVar45 = lVar45 + 0x10;
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + 0x1e + lVar51) =
                 (ushort)*(byte *)(lVar10 + lVar46) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(lVar11 + lVar46) +
                 ((ushort)*(byte *)(lVar8 + lVar46) + (ushort)*(byte *)(lVar9 + lVar46)) * 4;
            lVar51 = lVar51 + 0x20;
          } while (uVar48 < uVar30);
          iVar42 = (int)uVar48 * 0x10;
          iVar14 = iVar41 + iVar42;
          iVar42 = iVar42 + 1;
        }
        uVar48 = (longlong)iVar42 - 1;
        if (uVar48 < uVar21 - 4) {
          lVar45 = lVar15 * uVar20 + param_1;
          do {
            bVar12 = *(byte *)(uVar48 + 2 + lVar45);
            *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + uVar48 * 2) =
                 (ushort)*(byte *)(uVar48 + lVar45) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
                 (ushort)*(byte *)(uVar48 + 4 + lVar45) +
                 ((ushort)*(byte *)(uVar48 + 1 + lVar45) + (ushort)*(byte *)(uVar48 + 3 + lVar45)) *
                 4;
            uVar48 = uVar48 + 1;
          } while (uVar48 < uVar21 - 4);
          lVar17 = (longlong)((int)uVar48 + iVar41);
        }
        else {
          lVar17 = (longlong)iVar14;
        }
      }
      uVar48 = 0;
      if (0 < (int)uVar1) {
        lVar45 = uVar37 + param_3;
        do {
          if ((longlong)(uVar21 - uVar16) <= (longlong)uVar48) break;
          bVar12 = *(byte *)(uVar48 + 2 + lVar45);
          *(ushort *)(*(longlong *)(param_2 + uVar20 * 8) + lVar17 * 2 + uVar48 * 2) =
               (ushort)*(byte *)(uVar48 + lVar45) + ((ushort)bVar12 + (ushort)bVar12 * 2) * 2 +
               (ushort)*(byte *)(uVar48 + 4 + lVar45) +
               ((ushort)*(byte *)(uVar48 + 1 + lVar45) + (ushort)*(byte *)(uVar48 + 3 + lVar45)) * 4
          ;
          uVar48 = uVar48 + 1;
        } while (uVar48 < uVar3);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < (ulonglong)(longlong)param_6._4_4_);
  }
  return 0;
}

