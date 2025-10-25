
undefined8
FUN_140a76560(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  int iVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar53;
  uint uVar54;
  ulonglong uVar55;
  longlong lVar56;
  uint uVar57;
  uint uVar58;
  longlong lVar59;
  byte *pbVar62;
  undefined4 uVar63;
  undefined8 uVar64;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar65 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar66 [16];
  longlong lStack_70;
  ulonglong uVar50;
  ulonglong uVar60;
  ulonglong uVar61;
  
  lVar37 = (longlong)param_4;
  lVar29 = 0;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar18 = param_7 & 0xf;
      uVar30 = (ulonglong)param_3 & 0xf;
      uVar42 = (ulonglong)(int)param_5;
      uVar38 = uVar30;
      if (uVar30 != 0) {
        uVar38 = 0x10 - uVar30;
      }
      pbVar6 = param_3 + uVar42;
      uVar36 = 2;
      if ((uint)param_6 < 3) {
        uVar36 = (uint)param_6;
      }
      uVar20 = param_7 & 0x40;
      lVar14 = -uVar42;
      lVar29 = lVar14 + 4;
      lVar53 = (longlong)(int)(uint)param_6;
      uVar39 = (ulonglong)(int)uVar36;
      uVar24 = (ulonglong)(1 < (int)(uint)param_6);
      uVar63 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar2 = lVar14 + 2;
      uVar64 = CONCAT44(uVar63,uVar63);
      uVar21 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar11 = param_7 & 0x80;
      uVar32 = (uint)pbVar6 & 0xf;
      iVar22 = -param_5;
      uVar1 = iVar22 + 2;
      lVar59 = param_1 - uVar42;
      uVar46 = uVar1 >> 1;
      uVar50 = (ulonglong)uVar46;
      uVar15 = 0xffffffffffffffff - (lVar14 + -1);
      uVar12 = (uint)param_6 - 2;
      lVar14 = param_1 + lVar53;
      iVar19 = ((int)(uint)param_6 < 2) - 1;
      if (((ulonglong)pbVar6 & 0xf) != 0) {
        uVar32 = 0x10 - uVar32;
      }
      if (uVar30 != 0) {
        uVar30 = 0x10 - uVar30;
      }
      uVar33 = (ulonglong)uVar32;
      uVar3 = lVar53 - 2;
      iVar26 = (int)uVar2;
      lVar4 = uVar38 + 0x10;
      uVar34 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar34 = uVar18;
      }
      lVar5 = uVar30 + 0x10;
      uVar16 = (ulonglong)(int)((int)uVar15 - ((int)uVar15 - (int)uVar30 & 0xfU));
      lVar10 = lVar53 - uVar42;
      uVar54 = param_5 - 1;
      uVar47 = param_5 - (param_5 - (int)uVar38 & 0xf);
      uVar57 = param_5 >> 1;
      uVar60 = (ulonglong)uVar57;
      iVar13 = uVar36 - (uVar36 - uVar32 & 0xf);
      uVar51 = (ulonglong)(int)uVar47;
      uVar17 = (ulonglong)iVar13;
      uVar58 = uVar36 >> 1;
      uVar61 = (ulonglong)uVar58;
      lStack_70 = 0;
      uVar31 = 0;
LAB_140a76a00:
      if ((uint)param_6 == 1) {
        uVar40 = uVar34;
        if (uVar18 != 6) goto LAB_140a76a5b;
        goto LAB_140a772cb;
      }
      do {
        uVar40 = uVar18;
        if (uVar18 == 6) {
LAB_140a772cb:
          uVar40 = 0;
          uVar28 = 0;
          if (uVar20 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar42) && (lVar4 <= (longlong)uVar42)) {
                uVar44 = 0;
                uVar43 = uVar38;
                if (uVar38 != 0) {
                  do {
                    param_3[uVar44] = param_8;
                    uVar44 = uVar44 + 1;
                  } while (uVar44 < uVar38);
                }
                do {
                  *(undefined8 *)(param_3 + uVar43) = uVar64;
                  *(undefined8 *)(param_3 + uVar43 + 8) = uVar64;
                  uVar43 = uVar43 + 0x10;
                  uVar40 = uVar47;
                } while (uVar43 < uVar51);
              }
              uVar43 = (ulonglong)(int)uVar40;
              uVar28 = uVar40;
              if (uVar43 < uVar42) {
                do {
                  param_3[uVar43] = param_8;
                  uVar43 = uVar43 + 1;
                } while (uVar43 < uVar42);
                uVar28 = (uint)uVar43;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar25 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70),
                lVar25 < (longlong)uVar42 && (-lVar25 < (longlong)uVar42)))) {
              uVar48 = 1;
              if (uVar57 != 0) {
                uVar43 = 0;
                do {
                  uVar44 = uVar43;
                  param_3[uVar44 * 2] = *(byte *)(lVar59 + lStack_70 + uVar44 * 2);
                  param_3[uVar44 * 2 + 1] = *(byte *)(lVar59 + lStack_70 + 1 + uVar44 * 2);
                  uVar43 = uVar44 + 1;
                } while (uVar43 < uVar60);
                uVar40 = (int)uVar43 * 2;
                uVar48 = (int)uVar44 + 2 + (int)uVar43;
              }
              uVar28 = uVar40;
              if (uVar48 - 1 < param_5) {
                param_3[(longlong)(int)uVar48 + -1] =
                     *(byte *)(lVar59 + (int)uVar48 + -1 + lStack_70);
                uVar28 = uVar48;
              }
            }
            else {
              if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar4)) {
                uVar43 = 0;
              }
              else {
                uVar43 = 0;
                lVar25 = lVar59 + lStack_70;
                if (uVar38 != 0) {
                  do {
                    param_3[uVar43] = *(byte *)(uVar43 + lVar25);
                    uVar43 = uVar43 + 1;
                  } while (uVar43 < uVar38);
                }
                uVar44 = uVar38;
                uVar43 = uVar51;
                if ((lVar25 + uVar38 & 0xf) == 0) {
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar44 + lVar25);
                    *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                    uVar44 = uVar44 + 0x10;
                  } while (uVar44 < uVar51);
                }
                else {
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar44 + lVar25));
                    *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                    uVar44 = uVar44 + 0x10;
                  } while (uVar44 < uVar51);
                }
              }
              uVar28 = param_5;
              if (uVar43 < uVar42) {
                do {
                  param_3[uVar43] = *(byte *)(uVar43 + lVar59 + lStack_70);
                  uVar43 = uVar43 + 1;
                } while (uVar43 < uVar42);
              }
            }
          }
          lVar25 = (longlong)(int)uVar28;
          if ((int)(uint)param_6 < 1) {
            if (uVar11 != 0) goto LAB_140a77979;
LAB_140a77851:
            uVar43 = uVar42;
            if ((int)uVar1 < 1) goto LAB_140a77bc0;
LAB_140a7785f:
            if ((longlong)uVar2 < 0x10) {
LAB_140a7a7a3:
              iVar49 = 0;
            }
            else {
              pbVar62 = param_3 + lVar25;
              uVar43 = (ulonglong)pbVar62 & 0xf;
              if (uVar43 != 0) {
                uVar43 = 0x10 - uVar43;
              }
              if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a7a7a3;
              iVar49 = iVar26 - (iVar26 - (int)uVar43 & 0xfU);
              uVar44 = 0;
              if (uVar43 != 0) {
                do {
                  pbVar62[uVar44] = param_8;
                  uVar44 = uVar44 + 1;
                } while (uVar44 < uVar43);
              }
              do {
                *(undefined8 *)(pbVar62 + uVar43) = uVar64;
                *(undefined8 *)(pbVar62 + uVar43 + 8) = uVar64;
                uVar43 = uVar43 + 0x10;
              } while (uVar43 < (ulonglong)(longlong)iVar49);
              uVar28 = (int)lVar25 + iVar49;
            }
            uVar43 = (ulonglong)iVar49;
            if (uVar43 < uVar2) {
              do {
                param_3[uVar43 + lVar25] = param_8;
                uVar43 = uVar43 + 1;
              } while (uVar43 < uVar2);
              uVar28 = (int)uVar43 + (int)lVar25;
            }
LAB_140a77b95:
            uVar43 = uVar42;
            if ((int)(uint)param_6 < 3) goto LAB_140a77bc0;
          }
          else {
            if (uVar36 < 7) {
LAB_140a77740:
              iVar49 = 1;
              uVar40 = uVar28;
              if (uVar58 != 0) {
                uVar43 = 0;
                do {
                  uVar44 = uVar43;
                  param_3[uVar44 * 2 + lVar25] = *(byte *)(param_1 + lStack_70 + uVar44 * 2);
                  param_3[uVar44 * 2 + lVar25 + 1] = *(byte *)(param_1 + lStack_70 + 1 + uVar44 * 2)
                  ;
                  uVar43 = uVar44 + 1;
                } while (uVar43 < uVar61);
                uVar40 = uVar28 + (int)uVar43 * 2;
                iVar49 = (int)uVar44 + 2 + (int)uVar43;
              }
              if (iVar49 - 1U < uVar36) {
                param_3[(longlong)iVar49 + -1 + lVar25] =
                     *(byte *)(param_1 + iVar49 + -1 + lStack_70);
                uVar40 = uVar28 + iVar49;
              }
            }
            else {
              pbVar62 = param_3 + lVar25;
              lVar35 = param_1 + lStack_70;
              if (((longlong)pbVar62 - lVar35 < (longlong)(ulonglong)uVar36) &&
                 (-((longlong)pbVar62 - lVar35) < (longlong)(ulonglong)uVar36)) goto LAB_140a77740;
              if (uVar36 < 0x10) {
LAB_140a7a79b:
                uVar44 = 0;
              }
              else {
                uVar43 = (ulonglong)pbVar62 & 0xf;
                if ((int)uVar43 != 0) {
                  uVar43 = (ulonglong)(0x10 - (int)uVar43);
                }
                iVar49 = (int)uVar43;
                if (uVar36 < iVar49 + 0x10U) goto LAB_140a7a79b;
                iVar27 = uVar36 - (uVar36 - iVar49 & 0xf);
                uVar44 = 0;
                if (iVar49 != 0) {
                  do {
                    pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                    uVar44 = uVar44 + 1;
                  } while (uVar44 < uVar43);
                }
                if ((lVar35 + uVar43 & 0xf) == 0) {
                  uVar44 = (ulonglong)iVar27;
                  do {
                    in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                    *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                    uVar43 = uVar43 + 0x10;
                  } while (uVar43 < uVar44);
                }
                else {
                  uVar44 = (ulonglong)iVar27;
                  do {
                    in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                    *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                    uVar43 = uVar43 + 0x10;
                  } while (uVar43 < uVar44);
                }
              }
              for (; uVar44 < uVar39; uVar44 = uVar44 + 1) {
                pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
              }
              uVar40 = uVar28 + uVar36;
            }
            uVar28 = uVar40;
            lVar25 = (longlong)(int)uVar28;
            if ((int)(uint)param_6 < 3) {
              if (uVar11 == 0) goto LAB_140a77851;
LAB_140a77979:
              uVar43 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a77bc0;
LAB_140a77987:
              iVar49 = (int)lVar25;
              if ((int)uVar1 < 7) {
LAB_140a77b02:
                iVar27 = 1;
                if (uVar46 != 0) {
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    param_3[uVar44 * 2 + lVar25] = *(byte *)(lVar14 + lStack_70 + uVar44 * 2);
                    param_3[uVar44 * 2 + lVar25 + 1] =
                         *(byte *)(lVar14 + lStack_70 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar50);
                  uVar28 = iVar49 + (int)uVar43 * 2;
                  iVar27 = (int)uVar44 + 2 + (int)uVar43;
                }
                if (iVar27 - 1U < uVar1) {
                  uVar28 = iVar49 + iVar27;
                  param_3[(longlong)iVar27 + -1 + lVar25] =
                       *(byte *)(lVar14 + iVar27 + -1 + lStack_70);
                }
              }
              else {
                lVar35 = lVar14 + lStack_70;
                pbVar62 = param_3 + lVar25;
                if (((longlong)pbVar62 - lVar35 < (longlong)(2 - uVar42)) &&
                   (-((longlong)pbVar62 - lVar35) < (longlong)(2 - uVar42))) goto LAB_140a77b02;
                if ((longlong)uVar2 < 0x10) {
LAB_140a7a7ab:
                  uVar44 = 0;
                }
                else {
                  uVar43 = (ulonglong)pbVar62 & 0xf;
                  if (uVar43 != 0) {
                    uVar43 = 0x10 - uVar43;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a7a7ab;
                  uVar52 = 0;
                  uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                  if (uVar43 != 0) {
                    do {
                      pbVar62[uVar52] = *(byte *)(uVar52 + lVar35);
                      uVar52 = uVar52 + 1;
                    } while (uVar52 < uVar43);
                  }
                  if ((lVar35 + uVar43 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                }
                for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                  pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                }
                uVar28 = iVar49 + 2 + iVar22;
              }
              goto LAB_140a77b95;
            }
            uVar28 = uVar28 + 2;
            param_3[lVar25] = *(byte *)(lStack_70 + -2 + lVar14);
            param_3[lVar25 + 1] = *(byte *)(lStack_70 + -1 + lVar14);
            lVar25 = (longlong)(int)uVar28;
            if (uVar11 == 0) {
              if (0 < (int)uVar1) goto LAB_140a7785f;
            }
            else if (0 < (int)uVar1) goto LAB_140a77987;
          }
          uVar43 = (int)uVar28 - lVar29;
        }
        else {
LAB_140a76a5b:
          if (uVar40 == 1) {
            lVar25 = lVar37 * uVar31;
            bVar9 = *(byte *)(param_1 + lVar25);
            uVar40 = 0;
            uVar28 = 0;
            if (uVar20 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar4)) {
                  uVar43 = 0;
                }
                else {
                  uVar43 = 0;
                  if (uVar38 != 0) {
                    do {
                      param_3[uVar43] = bVar9;
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar38);
                  }
                  uVar63 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
                  in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
                  in_XMM1._8_8_ = in_XMM1._0_8_;
                  uVar44 = uVar38;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                    uVar44 = uVar44 + 0x10;
                    uVar43 = uVar51;
                    uVar40 = uVar47;
                  } while (uVar44 < uVar51);
                }
                uVar28 = uVar40;
                if (uVar43 < uVar42) {
                  do {
                    param_3[uVar43] = bVar9;
                    uVar43 = uVar43 + 1;
                  } while (uVar43 < uVar42);
                  uVar28 = (uint)uVar43;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar35 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar25),
                  lVar35 < (longlong)uVar42 && (-lVar35 < (longlong)uVar42)))) {
                uVar48 = 1;
                if (uVar57 != 0) {
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    param_3[uVar44 * 2] = *(byte *)(lVar59 + lVar25 + uVar44 * 2);
                    param_3[uVar44 * 2 + 1] = *(byte *)(lVar59 + lVar25 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar60);
                  uVar40 = (int)uVar43 * 2;
                  uVar48 = (int)uVar44 + 2 + (int)uVar43;
                }
                uVar28 = uVar40;
                if (uVar48 - 1 < param_5) {
                  param_3[(longlong)(int)uVar48 + -1] =
                       *(byte *)((longlong)(int)uVar48 + -1 + lVar25 + lVar59);
                  uVar28 = uVar48;
                }
              }
              else {
                if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar4)) {
                  uVar43 = 0;
                }
                else {
                  uVar43 = 0;
                  lVar35 = lVar59 + lVar25;
                  if (uVar38 != 0) {
                    do {
                      param_3[uVar43] = *(byte *)(uVar43 + lVar35);
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar38);
                  }
                  uVar44 = uVar38;
                  uVar43 = uVar51;
                  if ((lVar35 + uVar38 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar44 + lVar35);
                      *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                      uVar44 = uVar44 + 0x10;
                    } while (uVar44 < uVar51);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar44 + lVar35));
                      *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                      uVar44 = uVar44 + 0x10;
                    } while (uVar44 < uVar51);
                  }
                }
                uVar28 = param_5;
                if (uVar43 < uVar42) {
                  do {
                    param_3[uVar43] = *(byte *)(uVar43 + lVar59 + lVar25);
                    uVar43 = uVar43 + 1;
                  } while (uVar43 < uVar42);
                }
              }
            }
            lVar35 = (longlong)(int)uVar28;
            if (0 < (int)(uint)param_6) {
              if (uVar36 < 7) {
LAB_140a7a381:
                iVar49 = 1;
                uVar40 = uVar28;
                if (uVar58 != 0) {
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    param_3[uVar44 * 2 + lVar35] = *(byte *)(param_1 + lVar25 + uVar44 * 2);
                    param_3[uVar44 * 2 + lVar35 + 1] = *(byte *)(param_1 + lVar25 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar61);
                  uVar40 = uVar28 + (int)uVar43 * 2;
                  iVar49 = (int)uVar44 + 2 + (int)uVar43;
                }
                if (iVar49 - 1U < uVar36) {
                  param_3[(longlong)iVar49 + -1 + lVar35] =
                       *(byte *)((longlong)iVar49 + -1 + param_1 + lVar25);
                  uVar40 = uVar28 + iVar49;
                }
              }
              else {
                pbVar62 = param_3 + lVar35;
                lVar56 = param_1 + lVar25;
                if (((longlong)pbVar62 - lVar56 < (longlong)(ulonglong)uVar36) &&
                   (-((longlong)pbVar62 - lVar56) < (longlong)(ulonglong)uVar36))
                goto LAB_140a7a381;
                if (uVar36 < 0x10) {
LAB_140a7a776:
                  uVar44 = 0;
                }
                else {
                  uVar43 = (ulonglong)pbVar62 & 0xf;
                  if ((int)uVar43 != 0) {
                    uVar43 = (ulonglong)(0x10 - (int)uVar43);
                  }
                  iVar49 = (int)uVar43;
                  if (uVar36 < iVar49 + 0x10U) goto LAB_140a7a776;
                  iVar27 = uVar36 - (uVar36 - iVar49 & 0xf);
                  uVar44 = 0;
                  if (iVar49 != 0) {
                    do {
                      pbVar62[uVar44] = *(byte *)(uVar44 + lVar56);
                      uVar44 = uVar44 + 1;
                    } while (uVar44 < uVar43);
                  }
                  if ((lVar56 + uVar43 & 0xf) == 0) {
                    uVar44 = (ulonglong)iVar27;
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar56);
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                  else {
                    uVar44 = (ulonglong)iVar27;
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar56));
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                }
                for (; uVar44 < uVar39; uVar44 = uVar44 + 1) {
                  pbVar62[uVar44] = *(byte *)(uVar44 + lVar56);
                }
                uVar40 = uVar28 + uVar36;
              }
              uVar28 = uVar40;
              lVar35 = (longlong)(int)uVar28;
              if (2 < (int)(uint)param_6) {
                uVar28 = uVar28 + 2;
                param_3[lVar35] = *(byte *)(lVar14 + -2 + lVar25);
                param_3[lVar35 + 1] = *(byte *)(lVar14 + -1 + lVar25);
                lVar35 = (longlong)(int)uVar28;
              }
            }
            bVar9 = *(byte *)(lVar14 + -1 + lVar25);
            iVar49 = (int)lVar35;
            if (uVar11 == 0) {
              if (0 < (int)uVar1) {
                if ((longlong)uVar2 < 0x10) {
LAB_140a7a77e:
                  iVar27 = 0;
                }
                else {
                  pbVar62 = param_3 + lVar35;
                  uVar43 = (ulonglong)pbVar62 & 0xf;
                  if (uVar43 != 0) {
                    uVar43 = 0x10 - uVar43;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a7a77e;
                  iVar27 = iVar26 - (iVar26 - (int)uVar43 & 0xfU);
                  uVar44 = 0;
                  if (uVar43 != 0) {
                    do {
                      pbVar62[uVar44] = bVar9;
                      uVar44 = uVar44 + 1;
                    } while (uVar44 < uVar43);
                  }
                  uVar63 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
                  in_XMM1._0_8_ = CONCAT44(uVar63,uVar63);
                  in_XMM1._8_8_ = in_XMM1._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                    uVar43 = uVar43 + 0x10;
                  } while (uVar43 < (ulonglong)(longlong)iVar27);
                  uVar28 = iVar49 + iVar27;
                }
                uVar43 = (ulonglong)iVar27;
                if (uVar2 <= uVar43) goto LAB_140a7a753;
                do {
                  param_3[uVar43 + lVar35] = bVar9;
                  uVar43 = uVar43 + 1;
                } while (uVar43 < uVar2);
                lVar35 = (longlong)((int)uVar43 + iVar49);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a7a756;
              if (6 < (int)uVar1) {
                lVar56 = lVar25 + lVar14;
                pbVar62 = param_3 + lVar35;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar56) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar56))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a7a785:
                    uVar44 = 0;
                  }
                  else {
                    uVar43 = (ulonglong)pbVar62 & 0xf;
                    if (uVar43 != 0) {
                      uVar43 = 0x10 - uVar43;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a7a785;
                    uVar52 = 0;
                    uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                    if (uVar43 != 0) {
                      do {
                        pbVar62[uVar52] = *(byte *)(uVar52 + lVar56);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar43);
                    }
                    if ((lVar56 + uVar43 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar56);
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar56));
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                  }
                  for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                    pbVar62[uVar44] = *(byte *)(uVar44 + lVar56);
                  }
                  lVar35 = (longlong)(iVar49 + 2 + iVar22);
                  goto LAB_140a7a756;
                }
              }
              iVar27 = 1;
              if (uVar46 != 0) {
                uVar43 = 0;
                do {
                  uVar44 = uVar43;
                  param_3[uVar44 * 2 + lVar35] = *(byte *)(lVar25 + lVar14 + uVar44 * 2);
                  param_3[uVar44 * 2 + lVar35 + 1] = *(byte *)(lVar25 + lVar14 + 1 + uVar44 * 2);
                  uVar43 = uVar44 + 1;
                } while (uVar43 < uVar50);
                uVar28 = iVar49 + (int)uVar43 * 2;
                iVar27 = (int)uVar44 + 2 + (int)uVar43;
              }
              if (iVar27 - 1U < uVar1) {
                param_3[(longlong)iVar27 + -1 + lVar35] =
                     *(byte *)((longlong)iVar27 + -1 + lVar25 + lVar14);
                lVar35 = (longlong)(iVar27 + iVar49);
                goto LAB_140a7a756;
              }
LAB_140a7a753:
              lVar35 = (longlong)(int)uVar28;
            }
LAB_140a7a756:
            uVar43 = lVar35 - lVar29;
            if ((int)(uint)param_6 < 3) {
              uVar43 = uVar42;
            }
          }
          else if (uVar40 == 2) {
            uVar44 = uVar42;
            if (0 < (int)(uint)param_6) {
              if (uVar36 < 7) {
LAB_140a78de0:
                iVar49 = 1;
                uVar40 = param_5;
                if (uVar58 != 0) {
                  lVar25 = lVar37 * uVar31 + param_1;
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    pbVar6[uVar44 * 2] = *(byte *)(lVar25 + uVar44 * 2);
                    pbVar6[uVar44 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar61);
                  uVar40 = param_5 + (int)uVar43 * 2;
                  iVar49 = (int)uVar44 + 2 + (int)uVar43;
                }
                if (iVar49 - 1U < uVar36) {
                  pbVar6[(longlong)iVar49 + -1] = *(byte *)(param_1 + iVar49 + -1 + lVar37 * uVar31)
                  ;
                  uVar40 = param_5 + iVar49;
                }
              }
              else {
                lVar25 = lVar37 * uVar31 + param_1;
                if (((longlong)pbVar6 - lVar25 < (longlong)(ulonglong)uVar36) &&
                   (-((longlong)pbVar6 - lVar25) < (longlong)(ulonglong)uVar36)) goto LAB_140a78de0;
                if ((uVar36 < 0x10) || (uVar36 < uVar32 + 0x10)) {
                  iVar49 = 0;
                }
                else {
                  uVar43 = 0;
                  if (uVar32 != 0) {
                    do {
                      pbVar6[uVar43] = *(byte *)(uVar43 + lVar25);
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar33);
                  }
                  uVar43 = uVar33;
                  iVar49 = iVar13;
                  if ((lVar25 + uVar33 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar25);
                      *(undefined1 (*) [16])(pbVar6 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar17);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar25));
                      *(undefined1 (*) [16])(pbVar6 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar17);
                  }
                }
                for (uVar43 = (ulonglong)iVar49; uVar40 = param_5 + uVar36, uVar43 < uVar39;
                    uVar43 = uVar43 + 1) {
                  pbVar6[uVar43] = *(byte *)(uVar43 + lVar25);
                }
              }
              uVar44 = (ulonglong)(int)uVar40;
              if (2 < (int)(uint)param_6) {
                lVar25 = lVar37 * uVar31;
                if (uVar20 == 0) {
                  lVar35 = lVar25 + lVar14;
                  if (-1 < (int)uVar54) {
                    if (((int)param_5 < 7) ||
                       ((pbVar62 = param_3 + ((uVar42 - 1) - (lVar25 + -1 + lVar14)),
                        (longlong)pbVar62 <= (longlong)uVar42 &&
                        ((byte *)-uVar42 == pbVar62 || -(longlong)pbVar62 < (longlong)uVar42)))) {
                      iVar49 = 1;
                      lVar56 = 0;
                      uVar43 = 0;
                      if (uVar57 != 0) {
                        do {
                          uVar52 = uVar43;
                          uVar43 = uVar52 + 1;
                          pbVar6[lVar56 + -1] = *(byte *)(lVar56 + -1 + lVar35);
                          pbVar6[lVar56 + -2] = *(byte *)(lVar56 + -2 + lVar35);
                          lVar56 = lVar56 + -2;
                        } while (uVar43 < uVar60);
                        iVar49 = (int)uVar52 + 2 + (int)uVar43;
                      }
                      if (iVar49 - 1U < param_5) {
                        pbVar6[-(longlong)iVar49] = *(byte *)(lVar35 - iVar49);
                      }
                    }
                    else {
                      if (((longlong)uVar15 < 0x10) || ((longlong)uVar15 < lVar5)) {
                        uVar43 = 0;
                      }
                      else {
                        uVar43 = 0;
                        lVar56 = lVar35 - uVar42;
                        if (uVar30 != 0) {
                          do {
                            param_3[uVar43] = *(byte *)(uVar43 + lVar56);
                            uVar43 = uVar43 + 1;
                          } while (uVar43 < uVar30);
                        }
                        uVar52 = uVar30;
                        uVar43 = uVar16;
                        if ((uVar30 + lVar56 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar52 + lVar56);
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar16);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar52 + lVar56));
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar16);
                        }
                      }
                      if (uVar43 < uVar15) {
                        do {
                          param_3[uVar43] = *(byte *)(uVar43 + (lVar35 - uVar42));
                          uVar43 = uVar43 + 1;
                        } while (uVar43 < uVar15);
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar54) {
                  if (6 < (int)param_5) {
                    lVar35 = param_1 + lVar25;
                    pbVar62 = param_3 + ((uVar42 - 1) - (lVar35 + -1));
                    if (((longlong)uVar42 < (longlong)pbVar62) ||
                       ((byte *)-uVar42 != pbVar62 && (longlong)uVar42 <= -(longlong)pbVar62)) {
                      if (((longlong)uVar15 < 0x10) || ((longlong)uVar15 < lVar5)) {
                        uVar43 = 0;
                      }
                      else {
                        uVar43 = 0;
                        lVar56 = lVar35 - uVar42;
                        if (uVar30 != 0) {
                          do {
                            param_3[uVar43] = *(byte *)(uVar43 + lVar56);
                            uVar43 = uVar43 + 1;
                          } while (uVar43 < uVar30);
                        }
                        uVar52 = uVar30;
                        uVar43 = uVar16;
                        if ((lVar56 + uVar30 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar52 + lVar56);
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar16);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar52 + lVar56));
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar16);
                        }
                      }
                      if (uVar43 < uVar15) {
                        do {
                          param_3[uVar43] = *(byte *)(uVar43 + (lVar35 - uVar42));
                          uVar43 = uVar43 + 1;
                        } while (uVar43 < uVar15);
                      }
                      goto LAB_140a792f2;
                    }
                  }
                  iVar49 = 1;
                  lVar35 = 0;
                  if (uVar57 != 0) {
                    uVar43 = 0;
                    do {
                      uVar52 = uVar43;
                      uVar43 = uVar52 + 1;
                      pbVar6[lVar35 + -1] = *(byte *)(lVar35 + -1 + param_1 + lVar25);
                      pbVar6[lVar35 + -2] = *(byte *)(lVar35 + -2 + param_1 + lVar25);
                      lVar35 = lVar35 + -2;
                    } while (uVar43 < uVar60);
                    iVar49 = (int)uVar52 + 2 + (int)uVar43;
                  }
                  if (iVar49 - 1U < param_5) {
                    pbVar6[-(longlong)iVar49] = *(byte *)((param_1 + lVar25) - (longlong)iVar49);
                  }
                }
LAB_140a792f2:
                lVar35 = lVar25 + lVar14;
                param_3[uVar44] = *(byte *)(lVar35 + -2);
                param_3[uVar44 + 1] = *(byte *)(lVar35 + -1);
                iVar27 = uVar40 + 2;
                lVar56 = (longlong)iVar27;
                iVar49 = iVar27;
                if (uVar11 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar62 = param_3 + lVar56;
                      lVar35 = param_1 + lVar25;
                      if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar35) ||
                         ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar35))) {
                        if ((longlong)uVar2 < 0x10) {
LAB_140a79f30:
                          uVar44 = 0;
                        }
                        else {
                          uVar43 = (ulonglong)pbVar62 & 0xf;
                          if (uVar43 != 0) {
                            uVar43 = 0x10 - uVar43;
                          }
                          if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a79f30;
                          uVar52 = 0;
                          uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                          if (uVar43 != 0) {
                            do {
                              pbVar62[uVar52] = *(byte *)(uVar52 + lVar35);
                              uVar52 = uVar52 + 1;
                            } while (uVar52 < uVar43);
                          }
                          if ((lVar35 + uVar43 & 0xf) == 0) {
                            do {
                              in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                              *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                              uVar43 = uVar43 + 0x10;
                            } while (uVar43 < uVar44);
                          }
                          else {
                            do {
                              in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                              *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                              uVar43 = uVar43 + 0x10;
                            } while (uVar43 < uVar44);
                          }
                        }
                        for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                          pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                        }
                        lVar56 = (longlong)(int)(iVar22 + 4 + uVar40);
                        goto LAB_140a796d5;
                      }
                    }
                    iVar23 = 1;
                    if (uVar46 != 0) {
                      uVar43 = 0;
                      do {
                        uVar44 = uVar43;
                        param_3[uVar44 * 2 + lVar56] = *(byte *)(param_1 + lVar25 + uVar44 * 2);
                        param_3[uVar44 * 2 + lVar56 + 1] =
                             *(byte *)(param_1 + lVar25 + 1 + uVar44 * 2);
                        uVar43 = uVar44 + 1;
                      } while (uVar43 < uVar50);
                      iVar49 = (int)uVar43 * 2 + 2 + uVar40;
                      iVar23 = (int)uVar44 + 2 + (int)uVar43;
                    }
                    if (uVar1 <= iVar23 - 1U) goto LAB_140a796d2;
                    param_3[(longlong)iVar23 + -1 + lVar56] =
                         *(byte *)((longlong)iVar23 + -1 + lVar25 + param_1);
                    lVar56 = (longlong)(iVar23 + iVar27);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a796d5;
                  if (6 < (int)uVar1) {
                    pbVar62 = param_3 + lVar56;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar35) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar35))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a79f37:
                        uVar44 = 0;
                      }
                      else {
                        uVar43 = (ulonglong)pbVar62 & 0xf;
                        if (uVar43 != 0) {
                          uVar43 = 0x10 - uVar43;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a79f37;
                        uVar52 = 0;
                        uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                        if (uVar43 != 0) {
                          do {
                            pbVar62[uVar52] = *(byte *)(uVar52 + lVar35);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar43);
                        }
                        if ((lVar35 + uVar43 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                      }
                      for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                        pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                      }
                      lVar56 = (longlong)(int)(iVar22 + 4 + uVar40);
                      goto LAB_140a796d5;
                    }
                  }
                  iVar23 = 1;
                  uVar43 = 0;
                  if (uVar46 != 0) {
                    do {
                      uVar44 = uVar43;
                      param_3[uVar44 * 2 + lVar56] = *(byte *)(lVar35 + uVar44 * 2);
                      param_3[uVar44 * 2 + lVar56 + 1] = *(byte *)(lVar35 + 1 + uVar44 * 2);
                      uVar43 = uVar44 + 1;
                    } while (uVar43 < uVar50);
                    iVar49 = (int)uVar43 * 2 + 2 + uVar40;
                    iVar23 = (int)uVar44 + 2 + (int)uVar43;
                  }
                  if (iVar23 - 1U < uVar1) {
                    param_3[(longlong)iVar23 + -1 + lVar56] =
                         *(byte *)((longlong)iVar23 + -1 + lVar35);
                    lVar56 = (longlong)(iVar23 + iVar27);
                    goto LAB_140a796d5;
                  }
LAB_140a796d2:
                  lVar56 = (longlong)iVar49;
                }
LAB_140a796d5:
                uVar43 = lVar56 - lVar29;
                goto LAB_140a77bc0;
              }
            }
            if (uVar20 == 0) {
              if (-1 < (int)uVar54) {
                if (((int)param_5 < 7) ||
                   ((pbVar62 = param_3 + ((uVar42 - 1) - (longlong)(pbVar6 + lVar53 + -1)),
                    (longlong)pbVar62 <= (longlong)uVar42 &&
                    ((byte *)-uVar42 == pbVar62 || -(longlong)pbVar62 < (longlong)uVar42)))) {
                  iVar49 = 1;
                  lVar25 = 0;
                  uVar43 = 0;
                  if (uVar57 != 0) {
                    do {
                      uVar52 = uVar43;
                      uVar43 = uVar52 + 1;
                      pbVar6[lVar25 + -1] = pbVar6[lVar25 + -1 + lVar53];
                      pbVar6[lVar25 + -2] = pbVar6[lVar25 + -2 + lVar53];
                      lVar25 = lVar25 + -2;
                    } while (uVar43 < uVar60);
                    iVar49 = (int)uVar52 + 2 + (int)uVar43;
                  }
                  if (iVar49 - 1U < param_5) {
                    pbVar6[-(longlong)iVar49] = pbVar6[lVar53 - iVar49];
                  }
                }
                else {
                  if (((longlong)uVar15 < 0x10) || ((longlong)uVar15 < lVar5)) {
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = 0;
                    if (uVar30 != 0) {
                      do {
                        param_3[uVar43] = pbVar6[uVar43 + lVar10];
                        uVar43 = uVar43 + 1;
                      } while (uVar43 < uVar30);
                    }
                    uVar52 = uVar30;
                    uVar43 = uVar16;
                    if (((ulonglong)(pbVar6 + uVar30 + lVar10) & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(pbVar6 + uVar52 + lVar10);
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar16);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(pbVar6 + uVar52 + lVar10));
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar16);
                    }
                  }
                  for (; uVar43 < uVar15; uVar43 = uVar43 + 1) {
                    param_3[uVar43] = pbVar6[uVar43 + lVar10];
                  }
                }
              }
            }
            else if (-1 < (int)uVar54) {
              if (6 < (int)param_5) {
                lVar25 = param_1 + lVar37 * uVar31;
                pbVar62 = param_3 + ((uVar42 - 1) - (param_1 + -1 + lVar37 * uVar31));
                if (((longlong)uVar42 < (longlong)pbVar62) ||
                   ((byte *)-uVar42 != pbVar62 && (longlong)uVar42 <= -(longlong)pbVar62)) {
                  if (((longlong)uVar15 < 0x10) || ((longlong)uVar15 < lVar5)) {
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = 0;
                    lVar35 = lVar25 - uVar42;
                    if (uVar30 != 0) {
                      do {
                        param_3[uVar43] = *(byte *)(uVar43 + lVar35);
                        uVar43 = uVar43 + 1;
                      } while (uVar43 < uVar30);
                    }
                    uVar52 = uVar30;
                    uVar43 = uVar16;
                    if ((lVar35 + uVar30 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar52 + lVar35);
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar16);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar52 + lVar35));
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar16);
                    }
                  }
                  if (uVar43 < uVar15) {
                    do {
                      param_3[uVar43] = *(byte *)(uVar43 + (lVar25 - uVar42));
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar15);
                  }
                  goto LAB_140a79b35;
                }
              }
              iVar49 = 1;
              lVar25 = 0;
              if (uVar57 != 0) {
                lVar35 = lVar37 * uVar31 + param_1;
                uVar43 = 0;
                do {
                  uVar52 = uVar43;
                  uVar43 = uVar52 + 1;
                  pbVar6[lVar25 + -1] = *(byte *)(lVar25 + -1 + lVar35);
                  pbVar6[lVar25 + -2] = *(byte *)(lVar25 + -2 + lVar35);
                  lVar25 = lVar25 + -2;
                } while (uVar43 < uVar60);
                iVar49 = (int)uVar52 + 2 + (int)uVar43;
              }
              if (iVar49 - 1U < param_5) {
                pbVar6[-(longlong)iVar49] = *(byte *)((param_1 - iVar49) + lVar37 * uVar31);
              }
            }
LAB_140a79b35:
            if (uVar11 == 0) {
              uVar43 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a77bc0;
              if (6 < (int)uVar1) {
                pbVar62 = param_3 + uVar44;
                pbVar8 = param_3 + (uVar44 - lVar53);
                if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - (longlong)pbVar8) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - (longlong)pbVar8))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a79f4d:
                    uVar44 = 0;
                  }
                  else {
                    uVar43 = (ulonglong)pbVar62 & 0xf;
                    if (uVar43 != 0) {
                      uVar43 = 0x10 - uVar43;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a79f4d;
                    uVar52 = 0;
                    uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                    if (uVar43 != 0) {
                      do {
                        pbVar62[uVar52] = pbVar8[uVar52];
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar43);
                    }
                    if (((ulonglong)(pbVar8 + uVar43) & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(pbVar8 + uVar43);
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(pbVar8 + uVar43));
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                  }
                  for (; uVar43 = uVar42, uVar44 < uVar2; uVar44 = uVar44 + 1) {
                    pbVar62[uVar44] = pbVar8[uVar44];
                  }
                  goto LAB_140a77bc0;
                }
              }
              iVar49 = 1;
              if (uVar46 != 0) {
                uVar43 = 0;
                do {
                  uVar52 = uVar43;
                  param_3[uVar52 * 2 + uVar44] = param_3[uVar52 * 2 + (uVar44 - lVar53)];
                  param_3[uVar52 * 2 + uVar44 + 1] = param_3[uVar52 * 2 + (uVar44 - lVar53) + 1];
                  uVar43 = uVar52 + 1;
                } while (uVar43 < uVar50);
                iVar49 = (int)uVar52 + 2 + (int)uVar43;
              }
              uVar43 = uVar42;
              if (iVar49 - 1U < uVar1) {
                param_3[(longlong)iVar49 + -1 + uVar44] =
                     param_3[(longlong)iVar49 + -1 + (uVar44 - lVar53)];
              }
            }
            else {
              uVar43 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a77bc0;
              if (6 < (int)uVar1) {
                pbVar62 = param_3 + uVar44;
                lVar25 = lVar37 * uVar31 + lVar14;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar25) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar25))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a79f54:
                    uVar44 = 0;
                  }
                  else {
                    uVar43 = (ulonglong)pbVar62 & 0xf;
                    if (uVar43 != 0) {
                      uVar43 = 0x10 - uVar43;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a79f54;
                    uVar52 = 0;
                    uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                    if (uVar43 != 0) {
                      do {
                        pbVar62[uVar52] = *(byte *)(uVar52 + lVar25);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar43);
                    }
                    if ((lVar25 + uVar43 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar25);
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar25));
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                  }
                  for (; uVar43 = uVar42, uVar44 < uVar2; uVar44 = uVar44 + 1) {
                    pbVar62[uVar44] = *(byte *)(uVar44 + lVar25);
                  }
                  goto LAB_140a77bc0;
                }
              }
              iVar49 = 1;
              if (uVar46 != 0) {
                lVar25 = lVar37 * uVar31 + lVar14;
                uVar43 = 0;
                do {
                  uVar52 = uVar43;
                  param_3[uVar52 * 2 + uVar44] = *(byte *)(lVar25 + uVar52 * 2);
                  param_3[uVar52 * 2 + uVar44 + 1] = *(byte *)(lVar25 + 1 + uVar52 * 2);
                  uVar43 = uVar52 + 1;
                } while (uVar43 < uVar50);
                iVar49 = (int)uVar52 + 2 + (int)uVar43;
              }
              uVar43 = uVar42;
              if (iVar49 - 1U < uVar1) {
                param_3[(longlong)iVar49 + -1 + uVar44] =
                     *(byte *)(lVar14 + iVar49 + -1 + lVar37 * uVar31);
              }
            }
          }
          else if (uVar40 == 3) {
            uVar44 = uVar42;
            if (0 < (int)(uint)param_6) {
              if (uVar36 < 7) {
LAB_140a7809e:
                iVar49 = 1;
                uVar40 = param_5;
                if (uVar58 != 0) {
                  lVar25 = lVar37 * uVar31 + param_1;
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    pbVar6[uVar44 * 2] = *(byte *)(lVar25 + uVar44 * 2);
                    pbVar6[uVar44 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar61);
                  uVar40 = param_5 + (int)uVar43 * 2;
                  iVar49 = (int)uVar44 + 2 + (int)uVar43;
                }
                if (iVar49 - 1U < uVar36) {
                  pbVar6[(longlong)iVar49 + -1] = *(byte *)(param_1 + iVar49 + -1 + lVar37 * uVar31)
                  ;
                  uVar40 = param_5 + iVar49;
                }
              }
              else {
                lVar25 = lVar37 * uVar31 + param_1;
                if (((longlong)pbVar6 - lVar25 < (longlong)(ulonglong)uVar36) &&
                   (-((longlong)pbVar6 - lVar25) < (longlong)(ulonglong)uVar36)) goto LAB_140a7809e;
                if ((uVar36 < 0x10) || (uVar36 < uVar32 + 0x10)) {
                  uVar43 = 0;
                }
                else {
                  uVar43 = 0;
                  if (uVar32 != 0) {
                    do {
                      pbVar6[uVar43] = *(byte *)(uVar43 + lVar25);
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar33);
                  }
                  uVar44 = uVar33;
                  uVar43 = uVar17;
                  if ((lVar25 + uVar33 & 0xf) == 0) {
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar44 + lVar25);
                      *(undefined1 (*) [16])(pbVar6 + uVar44) = in_XMM1;
                      uVar44 = uVar44 + 0x10;
                    } while (uVar44 < uVar17);
                  }
                  else {
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar44 + lVar25));
                      *(undefined1 (*) [16])(pbVar6 + uVar44) = in_XMM1;
                      uVar44 = uVar44 + 0x10;
                    } while (uVar44 < uVar17);
                  }
                }
                for (; uVar40 = param_5 + uVar36, uVar43 < uVar39; uVar43 = uVar43 + 1) {
                  pbVar6[uVar43] = *(byte *)(uVar43 + lVar25);
                }
              }
              uVar44 = (ulonglong)(int)uVar40;
              if (2 < (int)(uint)param_6) {
                if (uVar20 == 0) {
                  if (-1 < (int)uVar54) {
                    iVar49 = 1;
                    lVar25 = 0;
                    if (uVar57 != 0) {
                      lVar35 = lVar37 * uVar31 + param_1 + uVar24;
                      uVar43 = 0;
                      do {
                        uVar52 = uVar43;
                        pbVar6[lVar25 + -1] = *(byte *)(lVar35 + uVar52 * 2);
                        uVar43 = uVar52 + 1;
                        pbVar6[lVar25 + -2] = *(byte *)(lVar35 + 1 + uVar52 * 2);
                        lVar25 = lVar25 + -2;
                      } while (uVar43 < uVar60);
                      iVar49 = (int)uVar52 + 2 + (int)uVar43;
                    }
                    if (iVar49 - 1U < param_5) {
                      pbVar6[-(longlong)iVar49] =
                           *(byte *)((longlong)iVar49 + -1 + lVar37 * uVar31 + param_1 + uVar24);
                    }
                  }
                }
                else {
                  lVar25 = lVar37 * uVar31;
                  if (-1 < (int)uVar54) {
                    if (6 < (int)param_5) {
                      lVar35 = param_1 + lVar25;
                      pbVar62 = param_3 + ((uVar42 - 1) - (lVar35 + -1));
                      if (((longlong)uVar42 < (longlong)pbVar62) ||
                         ((byte *)-uVar42 != pbVar62 && (longlong)uVar42 <= -(longlong)pbVar62)) {
                        if (((longlong)uVar15 < 0x10) || ((longlong)uVar15 < lVar5)) {
                          uVar43 = 0;
                        }
                        else {
                          uVar43 = 0;
                          lVar25 = lVar35 - uVar42;
                          if (uVar30 != 0) {
                            do {
                              param_3[uVar43] = *(byte *)(uVar43 + lVar25);
                              uVar43 = uVar43 + 1;
                            } while (uVar43 < uVar30);
                          }
                          uVar52 = uVar30;
                          uVar43 = uVar16;
                          if ((lVar25 + uVar30 & 0xf) == 0) {
                            do {
                              in_XMM1 = *(undefined1 (*) [16])(uVar52 + lVar25);
                              *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                              uVar52 = uVar52 + 0x10;
                            } while (uVar52 < uVar16);
                          }
                          else {
                            do {
                              in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar52 + lVar25));
                              *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM1;
                              uVar52 = uVar52 + 0x10;
                            } while (uVar52 < uVar16);
                          }
                        }
                        if (uVar43 < uVar15) {
                          do {
                            param_3[uVar43] = *(byte *)(uVar43 + (lVar35 - uVar42));
                            uVar43 = uVar43 + 1;
                          } while (uVar43 < uVar15);
                        }
                        goto LAB_140a7841a;
                      }
                    }
                    iVar49 = 1;
                    lVar35 = 0;
                    if (uVar57 != 0) {
                      uVar43 = 0;
                      do {
                        uVar52 = uVar43;
                        uVar43 = uVar52 + 1;
                        pbVar6[lVar35 + -1] = *(byte *)(lVar35 + -1 + param_1 + lVar25);
                        pbVar6[lVar35 + -2] = *(byte *)(lVar35 + -2 + param_1 + lVar25);
                        lVar35 = lVar35 + -2;
                      } while (uVar43 < uVar60);
                      iVar49 = (int)uVar52 + 2 + (int)uVar43;
                    }
                    if (iVar49 - 1U < param_5) {
                      pbVar6[-(longlong)iVar49] = *(byte *)((param_1 + lVar25) - (longlong)iVar49);
                    }
                  }
                }
LAB_140a7841a:
                lVar56 = lVar37 * uVar31;
                lVar25 = lVar56 + lVar14;
                param_3[uVar44] = *(byte *)(lVar25 + -2);
                param_3[uVar44 + 1] = *(byte *)(lVar25 + -1);
                iVar27 = uVar40 + 2;
                lVar35 = (longlong)iVar27;
                iVar49 = iVar27;
                if (uVar11 == 0) {
                  if (0 < (int)uVar1) {
                    iVar23 = 1;
                    lVar25 = 0;
                    if (uVar46 != 0) {
                      lVar45 = (lVar14 - uVar24) + lVar56;
                      uVar43 = 0;
                      do {
                        uVar44 = uVar43;
                        param_3[uVar44 * 2 + lVar35] = *(byte *)(lVar25 + -1 + lVar45);
                        lVar7 = lVar25 + -2;
                        lVar25 = lVar25 + -2;
                        param_3[uVar44 * 2 + lVar35 + 1] = *(byte *)(lVar7 + lVar45);
                        uVar43 = uVar44 + 1;
                      } while (uVar43 < uVar50);
                      iVar49 = (int)uVar43 * 2 + 2 + uVar40;
                      iVar23 = (int)uVar44 + 2 + (int)uVar43;
                    }
                    if (uVar1 <= iVar23 - 1U) goto LAB_140a786f1;
                    param_3[(longlong)iVar23 + -1 + lVar35] =
                         *(byte *)((lVar56 + (lVar14 - uVar24)) - (longlong)iVar23);
                    lVar35 = (longlong)(iVar23 + iVar27);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a786f4;
                  if (6 < (int)uVar1) {
                    pbVar62 = param_3 + lVar35;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar25) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar25))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a78c4e:
                        uVar44 = 0;
                      }
                      else {
                        uVar43 = (ulonglong)pbVar62 & 0xf;
                        if (uVar43 != 0) {
                          uVar43 = 0x10 - uVar43;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a78c4e;
                        uVar52 = 0;
                        uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                        if (uVar43 != 0) {
                          do {
                            pbVar62[uVar52] = *(byte *)(uVar52 + lVar25);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar43);
                        }
                        if ((lVar25 + uVar43 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar25);
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar25));
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                      }
                      for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                        pbVar62[uVar44] = *(byte *)(uVar44 + lVar25);
                      }
                      lVar35 = (longlong)(int)(iVar22 + 4 + uVar40);
                      goto LAB_140a786f4;
                    }
                  }
                  iVar23 = 1;
                  uVar43 = 0;
                  if (uVar46 != 0) {
                    do {
                      uVar44 = uVar43;
                      param_3[uVar44 * 2 + lVar35] = *(byte *)(lVar25 + uVar44 * 2);
                      param_3[uVar44 * 2 + lVar35 + 1] = *(byte *)(lVar25 + 1 + uVar44 * 2);
                      uVar43 = uVar44 + 1;
                    } while (uVar43 < uVar50);
                    iVar49 = (int)uVar43 * 2 + 2 + uVar40;
                    iVar23 = (int)uVar44 + 2 + (int)uVar43;
                  }
                  if (iVar23 - 1U < uVar1) {
                    param_3[(longlong)iVar23 + -1 + lVar35] =
                         *(byte *)((longlong)iVar23 + -1 + lVar25);
                    lVar35 = (longlong)(iVar23 + iVar27);
                  }
                  else {
LAB_140a786f1:
                    lVar35 = (longlong)iVar49;
                  }
                }
LAB_140a786f4:
                uVar43 = lVar35 - lVar29;
                goto LAB_140a77bc0;
              }
            }
            uVar43 = (ulonglong)uVar54;
            if (uVar20 == 0) {
              uVar40 = uVar54;
              if (uVar11 == 0) {
                while (-1 < (int)uVar40) {
                  uVar40 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar44 = (ulonglong)(int)uVar43;
                    uVar43 = uVar44;
                    do {
                      if ((int)uVar43 < 0) break;
                      lVar25 = (longlong)(int)uVar40;
                      uVar40 = uVar40 + 1;
                      uVar43 = (ulonglong)((int)uVar43 - 1);
                      param_3[uVar44 - lVar25] = param_3[lVar25 + uVar24 + 1 + uVar44];
                    } while (uVar40 < uVar21);
                  }
                  uVar40 = (uint)uVar43;
                }
                uVar44 = 0;
                uVar43 = uVar42;
                iVar49 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                iVar27 = iVar19;
                iVar23 = iVar19;
                if ((int)param_5 < 2) {
                  do {
                    iVar41 = iVar49 + iVar27;
                    pbVar6[uVar44 + lVar53] = param_3[iVar49];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar41) || (iVar41 < (int)param_5)) {
                      iVar49 = iVar27 + iVar23;
                      iVar27 = -iVar27;
                      iVar23 = -iVar23;
                      iVar41 = iVar41 - iVar49;
                    }
                    uVar44 = uVar44 + 1;
                    iVar49 = iVar41;
                  } while (uVar44 < uVar2);
                }
              }
              else {
                if (-1 < (int)uVar54) {
                  iVar49 = 1;
                  lVar25 = 0;
                  if (uVar57 != 0) {
                    lVar35 = lVar37 * uVar31 + param_1;
                    uVar43 = 0;
                    do {
                      uVar52 = uVar43;
                      pbVar6[lVar25 + -1] = *(byte *)(lVar35 + 1 + uVar52 * 2);
                      uVar43 = uVar52 + 1;
                      pbVar6[lVar25 + -2] = *(byte *)(lVar35 + 2 + uVar52 * 2);
                      lVar25 = lVar25 + -2;
                    } while (uVar43 < uVar60);
                    iVar49 = (int)uVar52 + 2 + (int)uVar43;
                  }
                  if (iVar49 - 1U < param_5) {
                    pbVar6[-(longlong)iVar49] = *(byte *)(param_1 + iVar49 + lVar37 * uVar31);
                  }
                }
LAB_140a789b3:
                uVar43 = uVar42;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar62 = param_3 + uVar44;
                    lVar25 = lVar37 * uVar31 + lVar14;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar25) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar25))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a78c55:
                        uVar44 = 0;
                      }
                      else {
                        uVar43 = (ulonglong)pbVar62 & 0xf;
                        if (uVar43 != 0) {
                          uVar43 = 0x10 - uVar43;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a78c55;
                        uVar52 = 0;
                        uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                        if (uVar43 != 0) {
                          do {
                            pbVar62[uVar52] = *(byte *)(uVar52 + lVar25);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar43);
                        }
                        if ((lVar25 + uVar43 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar25);
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar25));
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                      }
                      for (; uVar43 = uVar42, uVar44 < uVar2; uVar44 = uVar44 + 1) {
                        pbVar62[uVar44] = *(byte *)(uVar44 + lVar25);
                      }
                      goto LAB_140a77bc0;
                    }
                  }
                  iVar49 = 1;
                  if (uVar46 != 0) {
                    lVar25 = lVar37 * uVar31 + lVar14;
                    uVar43 = 0;
                    do {
                      uVar52 = uVar43;
                      param_3[uVar52 * 2 + uVar44] = *(byte *)(lVar25 + uVar52 * 2);
                      param_3[uVar52 * 2 + uVar44 + 1] = *(byte *)(lVar25 + 1 + uVar52 * 2);
                      uVar43 = uVar52 + 1;
                    } while (uVar43 < uVar50);
                    iVar49 = (int)uVar52 + 2 + (int)uVar43;
                  }
                  uVar43 = uVar42;
                  if (iVar49 - 1U < uVar1) {
                    param_3[(longlong)iVar49 + -1 + uVar44] =
                         *(byte *)(lVar14 + iVar49 + -1 + lVar37 * uVar31);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar54) {
                do {
                  uVar40 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar49 = (int)uVar43;
                    do {
                      if ((int)uVar43 < 0) break;
                      lVar25 = (longlong)(int)uVar40;
                      uVar40 = uVar40 + 1;
                      uVar43 = (ulonglong)((int)uVar43 - 1);
                      param_3[iVar49 - lVar25] =
                           *(byte *)(((longlong)iVar49 + lVar37 * uVar31 + lVar59) - lVar25);
                    } while (uVar40 < uVar21);
                  }
                } while (-1 < (int)uVar43);
              }
              if (uVar11 != 0) goto LAB_140a789b3;
              uVar43 = uVar42;
              if (0 < (int)uVar1) {
                iVar49 = 1;
                lVar25 = 0;
                if (uVar46 != 0) {
                  lVar35 = lVar37 * uVar31 + lVar14;
                  uVar43 = 0;
                  do {
                    uVar52 = uVar43;
                    param_3[uVar52 * 2 + uVar44] = *(byte *)(lVar25 + -2 + lVar35);
                    lVar56 = lVar25 + -3;
                    lVar25 = lVar25 + -2;
                    param_3[uVar52 * 2 + uVar44 + 1] = *(byte *)(lVar56 + lVar35);
                    uVar43 = uVar52 + 1;
                  } while (uVar43 < uVar50);
                  iVar49 = (int)uVar52 + 2 + (int)uVar43;
                }
                uVar43 = uVar42;
                if (iVar49 - 1U < uVar1) {
                  param_3[(longlong)iVar49 + -1 + uVar44] =
                       *(byte *)((lVar14 - iVar49) + -1 + lVar37 * uVar31);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar40 = 0;
            uVar28 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar35 = lVar37 * uVar31;
                lVar25 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar35);
                if (((longlong)uVar42 <= lVar25) || ((longlong)uVar42 <= -lVar25)) {
                  if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar4)) {
                    uVar43 = 0;
                  }
                  else {
                    uVar43 = 0;
                    lVar25 = lVar59 + lVar35;
                    if (uVar38 != 0) {
                      do {
                        param_3[uVar43] = *(byte *)(uVar43 + lVar25);
                        uVar43 = uVar43 + 1;
                      } while (uVar43 < uVar38);
                    }
                    uVar44 = uVar38;
                    uVar43 = uVar51;
                    if ((lVar25 + uVar38 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar44 + lVar25);
                        *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                        uVar44 = uVar44 + 0x10;
                      } while (uVar44 < uVar51);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar44 + lVar25));
                        *(undefined1 (*) [16])(param_3 + uVar44) = in_XMM1;
                        uVar44 = uVar44 + 0x10;
                      } while (uVar44 < uVar51);
                    }
                  }
                  uVar28 = param_5;
                  if (uVar43 < uVar42) {
                    do {
                      param_3[uVar43] = *(byte *)(uVar43 + lVar35 + lVar59);
                      uVar43 = uVar43 + 1;
                    } while (uVar43 < uVar42);
                  }
                  goto LAB_140a76c72;
                }
              }
              uVar48 = 1;
              if (uVar57 != 0) {
                lVar25 = lVar37 * uVar31 + lVar59;
                uVar43 = 0;
                do {
                  uVar44 = uVar43;
                  param_3[uVar44 * 2] = *(byte *)(lVar25 + uVar44 * 2);
                  param_3[uVar44 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar44 * 2);
                  uVar43 = uVar44 + 1;
                } while (uVar43 < uVar60);
                uVar40 = (int)uVar43 * 2;
                uVar48 = (int)uVar44 + 2 + (int)uVar43;
              }
              uVar28 = uVar40;
              if (uVar48 - 1 < param_5) {
                param_3[(longlong)(int)uVar48 + -1] =
                     *(byte *)(lVar59 + (int)uVar48 + -1 + lVar37 * uVar31);
                uVar28 = uVar48;
              }
            }
LAB_140a76c72:
            lVar25 = (longlong)(int)uVar28;
            if (0 < (int)(uint)param_6) {
              if (uVar36 < 7) {
LAB_140a76de0:
                iVar49 = 1;
                uVar40 = uVar28;
                if (uVar58 != 0) {
                  lVar35 = lVar37 * uVar31 + param_1;
                  uVar43 = 0;
                  do {
                    uVar44 = uVar43;
                    param_3[uVar44 * 2 + lVar25] = *(byte *)(lVar35 + uVar44 * 2);
                    param_3[uVar44 * 2 + lVar25 + 1] = *(byte *)(lVar35 + 1 + uVar44 * 2);
                    uVar43 = uVar44 + 1;
                  } while (uVar43 < uVar61);
                  uVar40 = uVar28 + (int)uVar43 * 2;
                  iVar49 = (int)uVar44 + 2 + (int)uVar43;
                }
                if (iVar49 - 1U < uVar36) {
                  uVar40 = uVar28 + iVar49;
                  param_3[(longlong)iVar49 + -1 + lVar25] =
                       *(byte *)(param_1 + iVar49 + -1 + lVar37 * uVar31);
                }
              }
              else {
                pbVar62 = param_3 + lVar25;
                lVar35 = lVar37 * uVar31 + param_1;
                if (((longlong)pbVar62 - lVar35 < (longlong)(ulonglong)uVar36) &&
                   (-((longlong)pbVar62 - lVar35) < (longlong)(ulonglong)uVar36))
                goto LAB_140a76de0;
                if (uVar36 < 0x10) {
LAB_140a77f10:
                  uVar44 = 0;
                }
                else {
                  uVar43 = (ulonglong)pbVar62 & 0xf;
                  if ((int)uVar43 != 0) {
                    uVar43 = (ulonglong)(0x10 - (int)uVar43);
                  }
                  iVar49 = (int)uVar43;
                  if (uVar36 < iVar49 + 0x10U) goto LAB_140a77f10;
                  iVar27 = uVar36 - (uVar36 - iVar49 & 0xf);
                  uVar44 = 0;
                  if (iVar49 != 0) {
                    do {
                      pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                      uVar44 = uVar44 + 1;
                    } while (uVar44 < uVar43);
                  }
                  if ((lVar35 + uVar43 & 0xf) == 0) {
                    uVar44 = (ulonglong)iVar27;
                    do {
                      in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                  else {
                    uVar44 = (ulonglong)iVar27;
                    do {
                      in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                      *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                      uVar43 = uVar43 + 0x10;
                    } while (uVar43 < uVar44);
                  }
                }
                for (; uVar44 < uVar39; uVar44 = uVar44 + 1) {
                  pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                }
                uVar40 = uVar28 + uVar36;
              }
              lVar25 = (longlong)(int)uVar40;
              if (2 < (int)(uint)param_6) {
                lVar35 = lVar37 * uVar31 + lVar14;
                param_3[lVar25] = *(byte *)(lVar35 + -2);
                iVar49 = uVar40 + 2;
                param_3[lVar25 + 1] = *(byte *)(lVar35 + -1);
                lVar25 = (longlong)iVar49;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar62 = param_3 + lVar25;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar35) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar35))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a77f17:
                        uVar44 = 0;
                      }
                      else {
                        uVar43 = (ulonglong)pbVar62 & 0xf;
                        if (uVar43 != 0) {
                          uVar43 = 0x10 - uVar43;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a77f17;
                        uVar52 = 0;
                        uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                        if (uVar43 != 0) {
                          do {
                            pbVar62[uVar52] = *(byte *)(uVar52 + lVar35);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar43);
                        }
                        if ((lVar35 + uVar43 & 0xf) == 0) {
                          do {
                            in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                        else {
                          do {
                            in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                            *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                            uVar43 = uVar43 + 0x10;
                          } while (uVar43 < uVar44);
                        }
                      }
                      for (; uVar44 < uVar2; uVar44 = uVar44 + 1) {
                        pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                      }
                      lVar25 = (longlong)(int)(iVar22 + 4 + uVar40);
                      goto LAB_140a77095;
                    }
                  }
                  iVar23 = 1;
                  uVar43 = 0;
                  iVar27 = iVar49;
                  if (uVar46 != 0) {
                    do {
                      uVar44 = uVar43;
                      param_3[uVar44 * 2 + lVar25] = *(byte *)(lVar35 + uVar44 * 2);
                      param_3[uVar44 * 2 + lVar25 + 1] = *(byte *)(lVar35 + 1 + uVar44 * 2);
                      uVar43 = uVar44 + 1;
                    } while (uVar43 < uVar50);
                    iVar27 = (int)uVar43 * 2 + 2 + uVar40;
                    iVar23 = (int)uVar44 + 2 + (int)uVar43;
                  }
                  if (iVar23 - 1U < uVar1) {
                    param_3[(longlong)iVar23 + -1 + lVar25] =
                         *(byte *)((longlong)iVar23 + -1 + lVar35);
                    lVar25 = (longlong)(iVar23 + iVar49);
                  }
                  else {
                    lVar25 = (longlong)iVar27;
                  }
                }
LAB_140a77095:
                uVar43 = lVar25 - lVar29;
                goto LAB_140a77bc0;
              }
            }
            uVar43 = uVar42;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar62 = param_3 + lVar25;
                lVar35 = lVar37 * uVar31 + lVar14;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar62 - lVar35) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar62 - lVar35))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a77f1e:
                    uVar44 = 0;
                  }
                  else {
                    uVar43 = (ulonglong)pbVar62 & 0xf;
                    if (uVar43 != 0) {
                      uVar43 = 0x10 - uVar43;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar43 + 0x10)) goto LAB_140a77f1e;
                    uVar52 = 0;
                    uVar44 = (ulonglong)(int)(iVar26 - (iVar26 - (int)uVar43 & 0xfU));
                    if (uVar43 != 0) {
                      do {
                        pbVar62[uVar52] = *(byte *)(uVar52 + lVar35);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar43);
                    }
                    if ((lVar35 + uVar43 & 0xf) == 0) {
                      do {
                        in_XMM1 = *(undefined1 (*) [16])(uVar43 + lVar35);
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                    else {
                      do {
                        in_XMM1 = lddqu(in_XMM1,*(undefined1 (*) [16])(uVar43 + lVar35));
                        *(undefined1 (*) [16])(pbVar62 + uVar43) = in_XMM1;
                        uVar43 = uVar43 + 0x10;
                      } while (uVar43 < uVar44);
                    }
                  }
                  for (; uVar43 = uVar42, uVar44 < uVar2; uVar44 = uVar44 + 1) {
                    pbVar62[uVar44] = *(byte *)(uVar44 + lVar35);
                  }
                  goto LAB_140a77bc0;
                }
              }
              iVar49 = 1;
              if (uVar46 != 0) {
                lVar35 = lVar37 * uVar31 + lVar14;
                uVar43 = 0;
                do {
                  uVar44 = uVar43;
                  param_3[uVar44 * 2 + lVar25] = *(byte *)(lVar35 + uVar44 * 2);
                  param_3[uVar44 * 2 + lVar25 + 1] = *(byte *)(lVar35 + 1 + uVar44 * 2);
                  uVar43 = uVar44 + 1;
                } while (uVar43 < uVar50);
                iVar49 = (int)uVar44 + 2 + (int)uVar43;
              }
              uVar43 = uVar42;
              if (iVar49 - 1U < uVar1) {
                param_3[(longlong)iVar49 + -1 + lVar25] =
                     *(byte *)(lVar14 + iVar49 + -1 + lVar37 * uVar31);
              }
            }
          }
          else {
            uVar43 = 0;
          }
        }
LAB_140a77bc0:
        **(short **)(param_2 + uVar31 * 8) = (ushort)*param_3 - (ushort)param_3[2];
        if (0 < (int)uVar12) {
          if (6 < (int)uVar12) {
            lVar35 = lVar37 * uVar31;
            uVar44 = *(longlong *)(param_2 + uVar31 * 8) + 2;
            lVar25 = param_1 + lVar35;
            if ((lVar53 <= (longlong)(uVar44 - lVar25)) ||
               (lVar53 * 2 + -4 <= (longlong)-(uVar44 - lVar25))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a7a7b3:
                uVar44 = 0;
              }
              else {
                uVar52 = uVar44 & 0xf;
                if ((int)uVar52 != 0) {
                  if ((uVar44 & 1) != 0) goto LAB_140a7a7b3;
                  uVar52 = (ulonglong)(0x10U - (int)uVar52 >> 1);
                }
                if ((longlong)uVar3 < (longlong)(uVar52 + 0x10)) goto LAB_140a7a7b3;
                uVar44 = (ulonglong)(int)((int)uVar3 - ((int)uVar3 - (int)uVar52 & 0xfU));
                uVar55 = 0;
                if ((int)uVar52 != 0) {
                  do {
                    *(ushort *)(*(longlong *)(param_2 + uVar31 * 8) + 2 + uVar55 * 2) =
                         (ushort)*(byte *)(uVar55 + lVar25) - (ushort)*(byte *)(uVar55 + 2 + lVar25)
                    ;
                    uVar55 = uVar55 + 1;
                  } while (uVar55 < uVar52);
                }
                if ((lVar25 + uVar52 & 0xf) == 0) {
                  do {
                    lVar56 = param_1 + lVar35;
                    auVar65 = pmovzxbw(in_XMM3,*(undefined8 *)(uVar52 + lVar56));
                    in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(uVar52 + 2 + lVar56));
                    auVar66 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar52 + 8 + lVar56));
                    in_XMM3._0_2_ = auVar65._0_2_ - in_XMM1._0_2_;
                    in_XMM3._2_2_ = auVar65._2_2_ - in_XMM1._2_2_;
                    in_XMM3._4_2_ = auVar65._4_2_ - in_XMM1._4_2_;
                    in_XMM3._6_2_ = auVar65._6_2_ - in_XMM1._6_2_;
                    in_XMM3._8_2_ = auVar65._8_2_ - in_XMM1._8_2_;
                    in_XMM3._10_2_ = auVar65._10_2_ - in_XMM1._10_2_;
                    in_XMM3._12_2_ = auVar65._12_2_ - in_XMM1._12_2_;
                    in_XMM3._14_2_ = auVar65._14_2_ - in_XMM1._14_2_;
                    in_XMM2 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar52 + 10 + lVar56));
                    in_XMM4._0_2_ = auVar66._0_2_ - in_XMM2._0_2_;
                    in_XMM4._2_2_ = auVar66._2_2_ - in_XMM2._2_2_;
                    in_XMM4._4_2_ = auVar66._4_2_ - in_XMM2._4_2_;
                    in_XMM4._6_2_ = auVar66._6_2_ - in_XMM2._6_2_;
                    in_XMM4._8_2_ = auVar66._8_2_ - in_XMM2._8_2_;
                    in_XMM4._10_2_ = auVar66._10_2_ - in_XMM2._10_2_;
                    in_XMM4._12_2_ = auVar66._12_2_ - in_XMM2._12_2_;
                    in_XMM4._14_2_ = auVar66._14_2_ - in_XMM2._14_2_;
                    *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar31 * 8) + 2 + uVar52 * 2) =
                         in_XMM3;
                    *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar31 * 8) + 0x12 + uVar52 * 2)
                         = in_XMM4;
                    uVar52 = uVar52 + 0x10;
                  } while (uVar52 < uVar44);
                }
                else {
                  do {
                    lVar56 = param_1 + lVar35;
                    auVar65 = pmovzxbw(in_XMM3,*(undefined8 *)(uVar52 + lVar56));
                    in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(uVar52 + 2 + lVar56));
                    auVar66 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar52 + 8 + lVar56));
                    in_XMM3._0_2_ = auVar65._0_2_ - in_XMM1._0_2_;
                    in_XMM3._2_2_ = auVar65._2_2_ - in_XMM1._2_2_;
                    in_XMM3._4_2_ = auVar65._4_2_ - in_XMM1._4_2_;
                    in_XMM3._6_2_ = auVar65._6_2_ - in_XMM1._6_2_;
                    in_XMM3._8_2_ = auVar65._8_2_ - in_XMM1._8_2_;
                    in_XMM3._10_2_ = auVar65._10_2_ - in_XMM1._10_2_;
                    in_XMM3._12_2_ = auVar65._12_2_ - in_XMM1._12_2_;
                    in_XMM3._14_2_ = auVar65._14_2_ - in_XMM1._14_2_;
                    in_XMM2 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar52 + 10 + lVar56));
                    in_XMM4._0_2_ = auVar66._0_2_ - in_XMM2._0_2_;
                    in_XMM4._2_2_ = auVar66._2_2_ - in_XMM2._2_2_;
                    in_XMM4._4_2_ = auVar66._4_2_ - in_XMM2._4_2_;
                    in_XMM4._6_2_ = auVar66._6_2_ - in_XMM2._6_2_;
                    in_XMM4._8_2_ = auVar66._8_2_ - in_XMM2._8_2_;
                    in_XMM4._10_2_ = auVar66._10_2_ - in_XMM2._10_2_;
                    in_XMM4._12_2_ = auVar66._12_2_ - in_XMM2._12_2_;
                    in_XMM4._14_2_ = auVar66._14_2_ - in_XMM2._14_2_;
                    *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar31 * 8) + 2 + uVar52 * 2) =
                         in_XMM3;
                    *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar31 * 8) + 0x12 + uVar52 * 2)
                         = in_XMM4;
                    uVar52 = uVar52 + 0x10;
                  } while (uVar52 < uVar44);
                }
              }
              for (; uVar44 < uVar3; uVar44 = uVar44 + 1) {
                *(ushort *)(*(longlong *)(param_2 + uVar31 * 8) + 2 + uVar44 * 2) =
                     (ushort)*(byte *)(uVar44 + lVar25) - (ushort)*(byte *)(uVar44 + 2 + lVar25);
              }
              goto LAB_140a77e93;
            }
          }
          iVar49 = 1;
          if (uVar12 >> 1 != 0) {
            lVar25 = lVar37 * uVar31 + param_1;
            uVar44 = 0;
            do {
              uVar52 = uVar44;
              *(ushort *)(*(longlong *)(param_2 + uVar31 * 8) + 2 + uVar52 * 4) =
                   (ushort)*(byte *)(lVar25 + uVar52 * 2) -
                   (ushort)*(byte *)(lVar25 + 2 + uVar52 * 2);
              *(ushort *)(*(longlong *)(param_2 + uVar31 * 8) + 4 + uVar52 * 4) =
                   (ushort)*(byte *)(lVar25 + 1 + uVar52 * 2) -
                   (ushort)*(byte *)(lVar25 + 3 + uVar52 * 2);
              uVar44 = uVar52 + 1;
            } while (uVar44 < uVar12 >> 1);
            iVar49 = (int)uVar52 + 2 + (int)uVar44;
          }
          if (iVar49 - 1U < uVar12) {
            lVar35 = (longlong)iVar49;
            lVar25 = lVar37 * uVar31 + param_1;
            *(ushort *)(*(longlong *)(param_2 + uVar31 * 8) + lVar35 * 2) =
                 (ushort)*(byte *)(lVar35 + -1 + lVar25) - (ushort)*(byte *)(lVar35 + 1 + lVar25);
          }
        }
LAB_140a77e93:
        if ((int)(uint)param_6 < 2) goto LAB_140a77ed3;
        lStack_70 = lStack_70 + lVar37;
        lVar25 = uVar31 * 8;
        uVar31 = uVar31 + 1;
        *(ushort *)(*(longlong *)(param_2 + lVar25) + -2 + lVar53 * 2) =
             (ushort)param_3[uVar43] - (ushort)param_3[uVar43 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar31) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar29 = 1;
      break;
    case 2:
      lVar29 = 2;
      break;
    case 3:
      lVar29 = 3;
      break;
    case 4:
      lVar29 = 4;
    }
    (*(code *)(&PTR_FUN_14308f080)[lVar29])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar37 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a77ed3:
  uVar31 = uVar31 + 1;
  lStack_70 = lStack_70 + lVar37;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar31) {
    return 0;
  }
  goto LAB_140a76a00;
}

