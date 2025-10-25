
undefined8
FUN_140a844a0(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  uint uVar45;
  ulonglong uVar46;
  ulonglong uVar48;
  uint uVar49;
  longlong lVar50;
  longlong lVar51;
  ulonglong uVar52;
  longlong lVar53;
  uint uVar54;
  ulonglong uVar55;
  byte *pbVar56;
  uint uVar57;
  uint uVar58;
  longlong lVar59;
  undefined4 uVar62;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar63 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar64 [16];
  undefined8 uVar65;
  undefined1 in_XMM5 [16];
  undefined1 auVar66 [16];
  longlong lStack_70;
  ulonglong uVar47;
  ulonglong uVar60;
  ulonglong uVar61;
  
  lVar50 = (longlong)param_4;
  lVar31 = 0;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar21 = param_7 & 0xf;
      uVar32 = (ulonglong)param_3 & 0xf;
      uVar42 = (ulonglong)(int)param_5;
      uVar24 = param_7 & 0x40;
      lVar17 = -uVar42;
      lVar31 = lVar17 + 4;
      uVar46 = uVar32;
      if (uVar32 != 0) {
        uVar46 = 0x10 - uVar32;
      }
      uVar40 = 2;
      if ((uint)param_6 < 3) {
        uVar40 = (uint)param_6;
      }
      uVar2 = lVar17 + 2;
      uVar29 = (ulonglong)(1 < (int)(uint)param_6);
      lVar51 = (longlong)(int)(uint)param_6;
      pbVar4 = param_3 + uVar42;
      uVar25 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar41 = (ulonglong)(int)uVar40;
      iVar26 = -param_5;
      uVar1 = iVar26 + 2;
      uVar62 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar65 = CONCAT44(uVar62,uVar62);
      uVar49 = param_7 & 0x80;
      uVar44 = uVar1 >> 1;
      uVar47 = (ulonglong)uVar44;
      uVar22 = (uint)pbVar4 & 0xf;
      lVar59 = param_1 - uVar42;
      lVar5 = param_1 + lVar51;
      uVar18 = 0xffffffffffffffff - (lVar17 + -1);
      iVar35 = ((int)(uint)param_6 < 2) - 1;
      if (((ulonglong)pbVar4 & 0xf) != 0) {
        uVar22 = 0x10 - uVar22;
      }
      if (uVar32 != 0) {
        uVar32 = 0x10 - uVar32;
      }
      uVar23 = (ulonglong)uVar22;
      uVar3 = lVar51 - 2;
      iVar12 = (int)uVar2;
      uVar13 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar13 = uVar21;
      }
      lVar11 = lVar51 - uVar42;
      uVar57 = param_5 >> 1;
      uVar60 = (ulonglong)uVar57;
      uVar54 = param_5 - 1;
      uVar45 = param_5 - (param_5 - (int)uVar46 & 0xf);
      uVar19 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar32 & 0xfU));
      uVar48 = (ulonglong)(int)uVar45;
      uVar58 = uVar40 >> 1;
      uVar61 = (ulonglong)uVar58;
      lVar17 = uVar32 + 0x10;
      lVar8 = uVar46 + 0x10;
      iVar16 = uVar40 - (uVar40 - uVar22 & 0xf);
      uVar20 = (ulonglong)iVar16;
      uVar43 = 0;
      lStack_70 = 0;
LAB_140a84920:
      if ((uint)param_6 == 1) {
        uVar30 = uVar13;
        if (uVar21 != 6) goto LAB_140a8497d;
        goto LAB_140a851f4;
      }
      do {
        uVar30 = uVar21;
        if (uVar21 == 6) {
LAB_140a851f4:
          uVar30 = 0;
          uVar28 = 0;
          if (uVar24 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar42) && (lVar8 <= (longlong)uVar42)) {
                uVar34 = 0;
                uVar33 = uVar46;
                if (uVar46 != 0) {
                  do {
                    param_3[uVar34] = param_8;
                    uVar34 = uVar34 + 1;
                  } while (uVar34 < uVar46);
                }
                do {
                  *(undefined8 *)(param_3 + uVar33) = uVar65;
                  *(undefined8 *)(param_3 + uVar33 + 8) = uVar65;
                  uVar33 = uVar33 + 0x10;
                  uVar30 = uVar45;
                } while (uVar33 < uVar48);
              }
              uVar33 = (ulonglong)(int)uVar30;
              uVar28 = uVar30;
              if (uVar33 < uVar42) {
                do {
                  param_3[uVar33] = param_8;
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar42);
                uVar28 = (uint)uVar33;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar15 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70),
                lVar15 < (longlong)uVar42 && (-lVar15 < (longlong)uVar42)))) {
              uVar36 = 1;
              if (uVar57 != 0) {
                uVar33 = 0;
                do {
                  uVar34 = uVar33;
                  param_3[uVar34 * 2] = *(byte *)(lVar59 + lStack_70 + uVar34 * 2);
                  param_3[uVar34 * 2 + 1] = *(byte *)(lVar59 + lStack_70 + 1 + uVar34 * 2);
                  uVar33 = uVar34 + 1;
                } while (uVar33 < uVar60);
                uVar30 = (int)uVar33 * 2;
                uVar36 = (int)uVar34 + 2 + (int)uVar33;
              }
              uVar28 = uVar30;
              if (uVar36 - 1 < param_5) {
                param_3[(longlong)(int)uVar36 + -1] =
                     *(byte *)(lVar59 + (int)uVar36 + -1 + lStack_70);
                uVar28 = uVar36;
              }
            }
            else {
              if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar8)) {
                uVar33 = 0;
              }
              else {
                uVar33 = 0;
                lVar15 = lVar59 + lStack_70;
                if (uVar46 != 0) {
                  do {
                    param_3[uVar33] = *(byte *)(uVar33 + lVar15);
                    uVar33 = uVar33 + 1;
                  } while (uVar33 < uVar46);
                }
                uVar34 = uVar46;
                uVar33 = uVar48;
                if ((lVar15 + uVar46 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar34 + lVar15);
                    *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                    uVar34 = uVar34 + 0x10;
                  } while (uVar34 < uVar48);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar34 + lVar15));
                    *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                    uVar34 = uVar34 + 0x10;
                  } while (uVar34 < uVar48);
                }
              }
              uVar28 = param_5;
              if (uVar33 < uVar42) {
                do {
                  param_3[uVar33] = *(byte *)(uVar33 + lVar59 + lStack_70);
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar42);
              }
            }
          }
          lVar15 = (longlong)(int)uVar28;
          if ((int)(uint)param_6 < 1) {
            if (uVar49 != 0) goto LAB_140a858f8;
LAB_140a8579b:
            uVar33 = uVar42;
            if ((int)uVar1 < 1) goto LAB_140a85b40;
LAB_140a857a9:
            if ((longlong)uVar2 < 0x10) {
LAB_140a885ff:
              iVar37 = 0;
            }
            else {
              pbVar56 = param_3 + lVar15;
              uVar33 = (ulonglong)pbVar56 & 0xf;
              if (uVar33 != 0) {
                uVar33 = 0x10 - uVar33;
              }
              if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a885ff;
              iVar37 = iVar12 - (iVar12 - (int)uVar33 & 0xfU);
              uVar34 = 0;
              if (uVar33 != 0) {
                do {
                  pbVar56[uVar34] = param_8;
                  uVar34 = uVar34 + 1;
                } while (uVar34 < uVar33);
              }
              do {
                *(undefined8 *)(pbVar56 + uVar33) = uVar65;
                *(undefined8 *)(pbVar56 + uVar33 + 8) = uVar65;
                uVar33 = uVar33 + 0x10;
              } while (uVar33 < (ulonglong)(longlong)iVar37);
              uVar28 = (int)lVar15 + iVar37;
            }
            uVar33 = (ulonglong)iVar37;
            if (uVar33 < uVar2) {
              do {
                param_3[uVar33 + lVar15] = param_8;
                uVar33 = uVar33 + 1;
              } while (uVar33 < uVar2);
              uVar28 = (int)uVar33 + (int)lVar15;
            }
LAB_140a85b1d:
            uVar33 = uVar42;
            if ((int)(uint)param_6 < 3) goto LAB_140a85b40;
          }
          else {
            if (uVar40 < 7) {
LAB_140a85668:
              iVar37 = 1;
              uVar30 = uVar28;
              if (uVar58 != 0) {
                uVar33 = 0;
                do {
                  uVar34 = uVar33;
                  param_3[uVar34 * 2 + lVar15] = *(byte *)(param_1 + lStack_70 + uVar34 * 2);
                  param_3[uVar34 * 2 + lVar15 + 1] = *(byte *)(param_1 + lStack_70 + 1 + uVar34 * 2)
                  ;
                  uVar33 = uVar34 + 1;
                } while (uVar33 < uVar61);
                uVar30 = uVar28 + (int)uVar33 * 2;
                iVar37 = (int)uVar34 + 2 + (int)uVar33;
              }
              if (iVar37 - 1U < uVar40) {
                param_3[(longlong)iVar37 + -1 + lVar15] =
                     *(byte *)(param_1 + iVar37 + -1 + lStack_70);
                uVar30 = uVar28 + iVar37;
              }
            }
            else {
              pbVar56 = param_3 + lVar15;
              lVar39 = param_1 + lStack_70;
              if (((longlong)pbVar56 - lVar39 < (longlong)(ulonglong)uVar40) &&
                 (-((longlong)pbVar56 - lVar39) < (longlong)(ulonglong)uVar40)) goto LAB_140a85668;
              if (uVar40 < 0x10) {
LAB_140a885f8:
                uVar34 = 0;
              }
              else {
                uVar33 = (ulonglong)pbVar56 & 0xf;
                if ((int)uVar33 != 0) {
                  uVar33 = (ulonglong)(0x10 - (int)uVar33);
                }
                iVar37 = (int)uVar33;
                if (uVar40 < iVar37 + 0x10U) goto LAB_140a885f8;
                iVar27 = uVar40 - (uVar40 - iVar37 & 0xf);
                uVar34 = 0;
                if (iVar37 != 0) {
                  do {
                    pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                    uVar34 = uVar34 + 1;
                  } while (uVar34 < uVar33);
                }
                if ((lVar39 + uVar33 & 0xf) == 0) {
                  uVar34 = (ulonglong)iVar27;
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                    *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                    uVar33 = uVar33 + 0x10;
                  } while (uVar33 < uVar34);
                }
                else {
                  uVar34 = (ulonglong)iVar27;
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                    *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                    uVar33 = uVar33 + 0x10;
                  } while (uVar33 < uVar34);
                }
              }
              for (; uVar34 < uVar41; uVar34 = uVar34 + 1) {
                pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
              }
              uVar30 = uVar28 + uVar40;
            }
            uVar28 = uVar30;
            lVar15 = (longlong)(int)uVar28;
            if ((int)(uint)param_6 < 3) {
              if (uVar49 == 0) goto LAB_140a8579b;
LAB_140a858f8:
              uVar33 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a85b40;
LAB_140a85906:
              iVar37 = (int)lVar15;
              if ((int)uVar1 < 7) {
LAB_140a85a8a:
                iVar27 = 1;
                if (uVar44 != 0) {
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    param_3[uVar34 * 2 + lVar15] = *(byte *)(lVar5 + lStack_70 + uVar34 * 2);
                    param_3[uVar34 * 2 + lVar15 + 1] = *(byte *)(lVar5 + lStack_70 + 1 + uVar34 * 2)
                    ;
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar47);
                  uVar28 = iVar37 + (int)uVar33 * 2;
                  iVar27 = (int)uVar34 + 2 + (int)uVar33;
                }
                if (iVar27 - 1U < uVar1) {
                  uVar28 = iVar37 + iVar27;
                  param_3[(longlong)iVar27 + -1 + lVar15] =
                       *(byte *)(lVar5 + iVar27 + -1 + lStack_70);
                }
              }
              else {
                lVar39 = lVar5 + lStack_70;
                pbVar56 = param_3 + lVar15;
                if (((longlong)pbVar56 - lVar39 < (longlong)(2 - uVar42)) &&
                   (-((longlong)pbVar56 - lVar39) < (longlong)(2 - uVar42))) goto LAB_140a85a8a;
                if ((longlong)uVar2 < 0x10) {
LAB_140a88607:
                  uVar34 = 0;
                }
                else {
                  uVar33 = (ulonglong)pbVar56 & 0xf;
                  if (uVar33 != 0) {
                    uVar33 = 0x10 - uVar33;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a88607;
                  uVar52 = 0;
                  uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                  if (uVar33 != 0) {
                    do {
                      pbVar56[uVar52] = *(byte *)(uVar52 + lVar39);
                      uVar52 = uVar52 + 1;
                    } while (uVar52 < uVar33);
                  }
                  if ((lVar39 + uVar33 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                }
                for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                  pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                }
                uVar28 = iVar37 + 2 + iVar26;
              }
              goto LAB_140a85b1d;
            }
            uVar28 = uVar28 + 2;
            param_3[lVar15] = *(byte *)(lStack_70 + -2 + lVar5);
            param_3[lVar15 + 1] = *(byte *)(lStack_70 + -1 + lVar5);
            lVar15 = (longlong)(int)uVar28;
            if (uVar49 == 0) {
              if (0 < (int)uVar1) goto LAB_140a857a9;
            }
            else if (0 < (int)uVar1) goto LAB_140a85906;
          }
          uVar33 = (int)uVar28 - lVar31;
        }
        else {
LAB_140a8497d:
          if (uVar30 == 1) {
            lVar15 = lVar50 * uVar43;
            bVar10 = *(byte *)(param_1 + lVar15);
            uVar30 = 0;
            uVar28 = 0;
            if (uVar24 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar8)) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 0;
                  if (uVar46 != 0) {
                    do {
                      param_3[uVar33] = bVar10;
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar46);
                  }
                  uVar62 = CONCAT22(CONCAT11(bVar10,bVar10),CONCAT11(bVar10,bVar10));
                  in_XMM0._0_8_ = CONCAT44(uVar62,uVar62);
                  in_XMM0._8_8_ = in_XMM0._0_8_;
                  uVar34 = uVar46;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                    uVar34 = uVar34 + 0x10;
                    uVar33 = uVar48;
                    uVar30 = uVar45;
                  } while (uVar34 < uVar48);
                }
                uVar28 = uVar30;
                if (uVar33 < uVar42) {
                  do {
                    param_3[uVar33] = bVar10;
                    uVar33 = uVar33 + 1;
                  } while (uVar33 < uVar42);
                  uVar28 = (uint)uVar33;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar39 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar15),
                  lVar39 < (longlong)uVar42 && (-lVar39 < (longlong)uVar42)))) {
                uVar36 = 1;
                if (uVar57 != 0) {
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    param_3[uVar34 * 2] = *(byte *)(lVar59 + lVar15 + uVar34 * 2);
                    param_3[uVar34 * 2 + 1] = *(byte *)(lVar59 + lVar15 + 1 + uVar34 * 2);
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar60);
                  uVar30 = (int)uVar33 * 2;
                  uVar36 = (int)uVar34 + 2 + (int)uVar33;
                }
                uVar28 = uVar30;
                if (uVar36 - 1 < param_5) {
                  param_3[(longlong)(int)uVar36 + -1] =
                       *(byte *)((longlong)(int)uVar36 + -1 + lVar15 + lVar59);
                  uVar28 = uVar36;
                }
              }
              else {
                if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar8)) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 0;
                  lVar39 = lVar59 + lVar15;
                  if (uVar46 != 0) {
                    do {
                      param_3[uVar33] = *(byte *)(uVar33 + lVar39);
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar46);
                  }
                  uVar34 = uVar46;
                  uVar33 = uVar48;
                  if ((lVar39 + uVar46 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar34 + lVar39);
                      *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                      uVar34 = uVar34 + 0x10;
                    } while (uVar34 < uVar48);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar34 + lVar39));
                      *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                      uVar34 = uVar34 + 0x10;
                    } while (uVar34 < uVar48);
                  }
                }
                uVar28 = param_5;
                if (uVar33 < uVar42) {
                  do {
                    param_3[uVar33] = *(byte *)(uVar33 + lVar59 + lVar15);
                    uVar33 = uVar33 + 1;
                  } while (uVar33 < uVar42);
                }
              }
            }
            lVar39 = (longlong)(int)uVar28;
            if (0 < (int)(uint)param_6) {
              if (uVar40 < 7) {
LAB_140a881df:
                iVar37 = 1;
                uVar30 = uVar28;
                if (uVar58 != 0) {
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    param_3[uVar34 * 2 + lVar39] = *(byte *)(param_1 + lVar15 + uVar34 * 2);
                    param_3[uVar34 * 2 + lVar39 + 1] = *(byte *)(param_1 + lVar15 + 1 + uVar34 * 2);
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar61);
                  uVar30 = uVar28 + (int)uVar33 * 2;
                  iVar37 = (int)uVar34 + 2 + (int)uVar33;
                }
                if (iVar37 - 1U < uVar40) {
                  param_3[(longlong)iVar37 + -1 + lVar39] =
                       *(byte *)((longlong)iVar37 + -1 + param_1 + lVar15);
                  uVar30 = uVar28 + iVar37;
                }
              }
              else {
                pbVar56 = param_3 + lVar39;
                lVar53 = param_1 + lVar15;
                if (((longlong)pbVar56 - lVar53 < (longlong)(ulonglong)uVar40) &&
                   (-((longlong)pbVar56 - lVar53) < (longlong)(ulonglong)uVar40))
                goto LAB_140a881df;
                if (uVar40 < 0x10) {
LAB_140a885d3:
                  uVar34 = 0;
                }
                else {
                  uVar33 = (ulonglong)pbVar56 & 0xf;
                  if ((int)uVar33 != 0) {
                    uVar33 = (ulonglong)(0x10 - (int)uVar33);
                  }
                  iVar37 = (int)uVar33;
                  if (uVar40 < iVar37 + 0x10U) goto LAB_140a885d3;
                  iVar27 = uVar40 - (uVar40 - iVar37 & 0xf);
                  uVar34 = 0;
                  if (iVar37 != 0) {
                    do {
                      pbVar56[uVar34] = *(byte *)(uVar34 + lVar53);
                      uVar34 = uVar34 + 1;
                    } while (uVar34 < uVar33);
                  }
                  if ((lVar53 + uVar33 & 0xf) == 0) {
                    uVar34 = (ulonglong)iVar27;
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar53);
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                  else {
                    uVar34 = (ulonglong)iVar27;
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar53));
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                }
                for (; uVar34 < uVar41; uVar34 = uVar34 + 1) {
                  pbVar56[uVar34] = *(byte *)(uVar34 + lVar53);
                }
                uVar30 = uVar28 + uVar40;
              }
              uVar28 = uVar30;
              lVar39 = (longlong)(int)uVar28;
              if (2 < (int)(uint)param_6) {
                uVar28 = uVar28 + 2;
                param_3[lVar39] = *(byte *)(lVar5 + -2 + lVar15);
                param_3[lVar39 + 1] = *(byte *)(lVar5 + -1 + lVar15);
                lVar39 = (longlong)(int)uVar28;
              }
            }
            bVar10 = *(byte *)(lVar5 + -1 + lVar15);
            iVar37 = (int)lVar39;
            if (uVar49 == 0) {
              if (0 < (int)uVar1) {
                if ((longlong)uVar2 < 0x10) {
LAB_140a885db:
                  iVar27 = 0;
                }
                else {
                  pbVar56 = param_3 + lVar39;
                  uVar33 = (ulonglong)pbVar56 & 0xf;
                  if (uVar33 != 0) {
                    uVar33 = 0x10 - uVar33;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a885db;
                  iVar27 = iVar12 - (iVar12 - (int)uVar33 & 0xfU);
                  uVar34 = 0;
                  if (uVar33 != 0) {
                    do {
                      pbVar56[uVar34] = bVar10;
                      uVar34 = uVar34 + 1;
                    } while (uVar34 < uVar33);
                  }
                  uVar62 = CONCAT22(CONCAT11(bVar10,bVar10),CONCAT11(bVar10,bVar10));
                  in_XMM0._0_8_ = CONCAT44(uVar62,uVar62);
                  in_XMM0._8_8_ = in_XMM0._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                    uVar33 = uVar33 + 0x10;
                  } while (uVar33 < (ulonglong)(longlong)iVar27);
                  uVar28 = iVar37 + iVar27;
                }
                uVar33 = (ulonglong)iVar27;
                if (uVar2 <= uVar33) goto LAB_140a885b2;
                do {
                  param_3[uVar33 + lVar39] = bVar10;
                  uVar33 = uVar33 + 1;
                } while (uVar33 < uVar2);
                lVar39 = (longlong)((int)uVar33 + iVar37);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a885b5;
              if (6 < (int)uVar1) {
                lVar53 = lVar15 + lVar5;
                pbVar56 = param_3 + lVar39;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar53) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar53))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a885e2:
                    uVar34 = 0;
                  }
                  else {
                    uVar33 = (ulonglong)pbVar56 & 0xf;
                    if (uVar33 != 0) {
                      uVar33 = 0x10 - uVar33;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a885e2;
                    uVar52 = 0;
                    uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                    if (uVar33 != 0) {
                      do {
                        pbVar56[uVar52] = *(byte *)(uVar52 + lVar53);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar33);
                    }
                    if ((lVar53 + uVar33 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar53);
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar53));
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                  }
                  for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                    pbVar56[uVar34] = *(byte *)(uVar34 + lVar53);
                  }
                  lVar39 = (longlong)(iVar37 + 2 + iVar26);
                  goto LAB_140a885b5;
                }
              }
              iVar27 = 1;
              if (uVar44 != 0) {
                uVar33 = 0;
                do {
                  uVar34 = uVar33;
                  param_3[uVar34 * 2 + lVar39] = *(byte *)(lVar15 + lVar5 + uVar34 * 2);
                  param_3[uVar34 * 2 + lVar39 + 1] = *(byte *)(lVar15 + lVar5 + 1 + uVar34 * 2);
                  uVar33 = uVar34 + 1;
                } while (uVar33 < uVar47);
                uVar28 = iVar37 + (int)uVar33 * 2;
                iVar27 = (int)uVar34 + 2 + (int)uVar33;
              }
              if (iVar27 - 1U < uVar1) {
                param_3[(longlong)iVar27 + -1 + lVar39] =
                     *(byte *)((longlong)iVar27 + -1 + lVar15 + lVar5);
                lVar39 = (longlong)(iVar27 + iVar37);
                goto LAB_140a885b5;
              }
LAB_140a885b2:
              lVar39 = (longlong)(int)uVar28;
            }
LAB_140a885b5:
            uVar33 = lVar39 - lVar31;
            if ((int)(uint)param_6 < 3) {
              uVar33 = uVar42;
            }
          }
          else if (uVar30 == 2) {
            uVar34 = uVar42;
            if (0 < (int)(uint)param_6) {
              if (uVar40 < 7) {
LAB_140a86cde:
                iVar37 = 1;
                uVar30 = param_5;
                if (uVar58 != 0) {
                  lVar15 = lVar50 * uVar43 + param_1;
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    pbVar4[uVar34 * 2] = *(byte *)(lVar15 + uVar34 * 2);
                    pbVar4[uVar34 * 2 + 1] = *(byte *)(lVar15 + 1 + uVar34 * 2);
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar61);
                  uVar30 = param_5 + (int)uVar33 * 2;
                  iVar37 = (int)uVar34 + 2 + (int)uVar33;
                }
                if (iVar37 - 1U < uVar40) {
                  pbVar4[(longlong)iVar37 + -1] = *(byte *)(param_1 + iVar37 + -1 + lVar50 * uVar43)
                  ;
                  uVar30 = param_5 + iVar37;
                }
              }
              else {
                lVar15 = lVar50 * uVar43 + param_1;
                if (((longlong)pbVar4 - lVar15 < (longlong)(ulonglong)uVar40) &&
                   (-((longlong)pbVar4 - lVar15) < (longlong)(ulonglong)uVar40)) goto LAB_140a86cde;
                if ((uVar40 < 0x10) || (uVar40 < uVar22 + 0x10)) {
                  iVar37 = 0;
                }
                else {
                  uVar33 = 0;
                  if (uVar22 != 0) {
                    do {
                      pbVar4[uVar33] = *(byte *)(uVar33 + lVar15);
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar23);
                  }
                  uVar33 = uVar23;
                  iVar37 = iVar16;
                  if ((lVar15 + uVar23 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar15);
                      *(undefined1 (*) [16])(pbVar4 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar20);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar15));
                      *(undefined1 (*) [16])(pbVar4 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar20);
                  }
                }
                for (uVar33 = (ulonglong)iVar37; uVar30 = param_5 + uVar40, uVar33 < uVar41;
                    uVar33 = uVar33 + 1) {
                  pbVar4[uVar33] = *(byte *)(uVar33 + lVar15);
                }
              }
              uVar34 = (ulonglong)(int)uVar30;
              if (2 < (int)(uint)param_6) {
                lVar15 = lVar50 * uVar43;
                if (uVar24 == 0) {
                  lVar39 = lVar15 + lVar5;
                  if (-1 < (int)uVar54) {
                    if (((int)param_5 < 7) ||
                       ((pbVar56 = param_3 + ((uVar42 - 1) - (lVar15 + -1 + lVar5)),
                        (longlong)pbVar56 <= (longlong)uVar42 &&
                        ((byte *)-uVar42 == pbVar56 || -(longlong)pbVar56 < (longlong)uVar42)))) {
                      iVar37 = 1;
                      lVar53 = 0;
                      uVar33 = 0;
                      if (uVar57 != 0) {
                        do {
                          uVar52 = uVar33;
                          uVar33 = uVar52 + 1;
                          pbVar4[lVar53 + -1] = *(byte *)(lVar53 + -1 + lVar39);
                          pbVar4[lVar53 + -2] = *(byte *)(lVar53 + -2 + lVar39);
                          lVar53 = lVar53 + -2;
                        } while (uVar33 < uVar60);
                        iVar37 = (int)uVar52 + 2 + (int)uVar33;
                      }
                      if (iVar37 - 1U < param_5) {
                        pbVar4[-(longlong)iVar37] = *(byte *)(lVar39 - iVar37);
                      }
                    }
                    else {
                      if (((longlong)uVar18 < 0x10) || ((longlong)uVar18 < lVar17)) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = 0;
                        lVar53 = lVar39 - uVar42;
                        if (uVar32 != 0) {
                          do {
                            param_3[uVar33] = *(byte *)(uVar33 + lVar53);
                            uVar33 = uVar33 + 1;
                          } while (uVar33 < uVar32);
                        }
                        uVar52 = uVar32;
                        uVar33 = uVar19;
                        if ((lVar53 + uVar32 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar52 + lVar53);
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar19);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar52 + lVar53));
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar19);
                        }
                      }
                      if (uVar33 < uVar18) {
                        do {
                          param_3[uVar33] = *(byte *)(uVar33 + (lVar39 - uVar42));
                          uVar33 = uVar33 + 1;
                        } while (uVar33 < uVar18);
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar54) {
                  if (6 < (int)param_5) {
                    lVar39 = param_1 + lVar15;
                    pbVar56 = param_3 + ((uVar42 - 1) - (lVar39 + -1));
                    if (((longlong)uVar42 < (longlong)pbVar56) ||
                       ((byte *)-uVar42 != pbVar56 && (longlong)uVar42 <= -(longlong)pbVar56)) {
                      if (((longlong)uVar18 < 0x10) || ((longlong)uVar18 < lVar17)) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = 0;
                        lVar53 = lVar39 - uVar42;
                        if (uVar32 != 0) {
                          do {
                            param_3[uVar33] = *(byte *)(uVar33 + lVar53);
                            uVar33 = uVar33 + 1;
                          } while (uVar33 < uVar32);
                        }
                        uVar52 = uVar32;
                        uVar33 = uVar19;
                        if ((lVar53 + uVar32 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar52 + lVar53);
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar19);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar52 + lVar53));
                            *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                            uVar52 = uVar52 + 0x10;
                          } while (uVar52 < uVar19);
                        }
                      }
                      if (uVar33 < uVar18) {
                        do {
                          param_3[uVar33] = *(byte *)(uVar33 + (lVar39 - uVar42));
                          uVar33 = uVar33 + 1;
                        } while (uVar33 < uVar18);
                      }
                      goto LAB_140a871b3;
                    }
                  }
                  iVar37 = 1;
                  lVar39 = 0;
                  if (uVar57 != 0) {
                    uVar33 = 0;
                    do {
                      uVar52 = uVar33;
                      uVar33 = uVar52 + 1;
                      pbVar4[lVar39 + -1] = *(byte *)(lVar39 + -1 + param_1 + lVar15);
                      pbVar4[lVar39 + -2] = *(byte *)(lVar39 + -2 + param_1 + lVar15);
                      lVar39 = lVar39 + -2;
                    } while (uVar33 < uVar60);
                    iVar37 = (int)uVar52 + 2 + (int)uVar33;
                  }
                  if (iVar37 - 1U < param_5) {
                    pbVar4[-(longlong)iVar37] = *(byte *)((param_1 + lVar15) - (longlong)iVar37);
                  }
                }
LAB_140a871b3:
                lVar39 = lVar15 + lVar5;
                param_3[uVar34] = *(byte *)(lVar39 + -2);
                param_3[uVar34 + 1] = *(byte *)(lVar39 + -1);
                iVar27 = uVar30 + 2;
                lVar53 = (longlong)iVar27;
                iVar37 = iVar27;
                if (uVar49 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar56 = param_3 + lVar53;
                      lVar39 = param_1 + lVar15;
                      if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar39) ||
                         ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar39))) {
                        if ((longlong)uVar2 < 0x10) {
LAB_140a87d93:
                          uVar34 = 0;
                        }
                        else {
                          uVar33 = (ulonglong)pbVar56 & 0xf;
                          if (uVar33 != 0) {
                            uVar33 = 0x10 - uVar33;
                          }
                          if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a87d93;
                          uVar52 = 0;
                          uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                          if (uVar33 != 0) {
                            do {
                              pbVar56[uVar52] = *(byte *)(uVar52 + lVar39);
                              uVar52 = uVar52 + 1;
                            } while (uVar52 < uVar33);
                          }
                          if ((lVar39 + uVar33 & 0xf) == 0) {
                            do {
                              in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                              *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                              uVar33 = uVar33 + 0x10;
                            } while (uVar33 < uVar34);
                          }
                          else {
                            do {
                              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                              *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                              uVar33 = uVar33 + 0x10;
                            } while (uVar33 < uVar34);
                          }
                        }
                        for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                          pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                        }
                        lVar53 = (longlong)(int)(iVar26 + 4 + uVar30);
                        goto LAB_140a87593;
                      }
                    }
                    iVar14 = 1;
                    if (uVar44 != 0) {
                      uVar33 = 0;
                      do {
                        uVar34 = uVar33;
                        param_3[uVar34 * 2 + lVar53] = *(byte *)(param_1 + lVar15 + uVar34 * 2);
                        param_3[uVar34 * 2 + lVar53 + 1] =
                             *(byte *)(param_1 + lVar15 + 1 + uVar34 * 2);
                        uVar33 = uVar34 + 1;
                      } while (uVar33 < uVar47);
                      iVar37 = (int)uVar33 * 2 + 2 + uVar30;
                      iVar14 = (int)uVar34 + 2 + (int)uVar33;
                    }
                    if (uVar1 <= iVar14 - 1U) goto LAB_140a87590;
                    param_3[(longlong)iVar14 + -1 + lVar53] =
                         *(byte *)((longlong)iVar14 + -1 + lVar15 + param_1);
                    lVar53 = (longlong)(iVar14 + iVar27);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a87593;
                  if (6 < (int)uVar1) {
                    pbVar56 = param_3 + lVar53;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar39) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar39))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a87d9a:
                        uVar34 = 0;
                      }
                      else {
                        uVar33 = (ulonglong)pbVar56 & 0xf;
                        if (uVar33 != 0) {
                          uVar33 = 0x10 - uVar33;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a87d9a;
                        uVar52 = 0;
                        uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                        if (uVar33 != 0) {
                          do {
                            pbVar56[uVar52] = *(byte *)(uVar52 + lVar39);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar33);
                        }
                        if ((lVar39 + uVar33 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                      }
                      for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                        pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                      }
                      lVar53 = (longlong)(int)(iVar26 + 4 + uVar30);
                      goto LAB_140a87593;
                    }
                  }
                  iVar14 = 1;
                  uVar33 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar34 = uVar33;
                      param_3[uVar34 * 2 + lVar53] = *(byte *)(lVar39 + uVar34 * 2);
                      param_3[uVar34 * 2 + lVar53 + 1] = *(byte *)(lVar39 + 1 + uVar34 * 2);
                      uVar33 = uVar34 + 1;
                    } while (uVar33 < uVar47);
                    iVar37 = (int)uVar33 * 2 + 2 + uVar30;
                    iVar14 = (int)uVar34 + 2 + (int)uVar33;
                  }
                  if (iVar14 - 1U < uVar1) {
                    param_3[(longlong)iVar14 + -1 + lVar53] =
                         *(byte *)((longlong)iVar14 + -1 + lVar39);
                    lVar53 = (longlong)(iVar14 + iVar27);
                    goto LAB_140a87593;
                  }
LAB_140a87590:
                  lVar53 = (longlong)iVar37;
                }
LAB_140a87593:
                uVar33 = lVar53 - lVar31;
                goto LAB_140a85b40;
              }
            }
            if (uVar24 == 0) {
              if (-1 < (int)uVar54) {
                if (((int)param_5 < 7) ||
                   ((pbVar56 = param_3 + ((uVar42 - 1) - (longlong)(pbVar4 + lVar51 + -1)),
                    (longlong)pbVar56 <= (longlong)uVar42 &&
                    ((byte *)-uVar42 == pbVar56 || -(longlong)pbVar56 < (longlong)uVar42)))) {
                  iVar37 = 1;
                  lVar15 = 0;
                  uVar33 = 0;
                  if (uVar57 != 0) {
                    do {
                      uVar52 = uVar33;
                      uVar33 = uVar52 + 1;
                      pbVar4[lVar15 + -1] = pbVar4[lVar15 + -1 + lVar51];
                      pbVar4[lVar15 + -2] = pbVar4[lVar15 + -2 + lVar51];
                      lVar15 = lVar15 + -2;
                    } while (uVar33 < uVar60);
                    iVar37 = (int)uVar52 + 2 + (int)uVar33;
                  }
                  if (iVar37 - 1U < param_5) {
                    pbVar4[-(longlong)iVar37] = pbVar4[lVar51 - iVar37];
                  }
                }
                else {
                  if (((longlong)uVar18 < 0x10) || ((longlong)uVar18 < lVar17)) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = 0;
                    if (uVar32 != 0) {
                      do {
                        param_3[uVar33] = pbVar4[uVar33 + lVar11];
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < uVar32);
                    }
                    uVar52 = uVar32;
                    uVar33 = uVar19;
                    if (((ulonglong)(pbVar4 + uVar32 + lVar11) & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(pbVar4 + uVar52 + lVar11);
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar19);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar4 + uVar52 + lVar11));
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar19);
                    }
                  }
                  for (; uVar33 < uVar18; uVar33 = uVar33 + 1) {
                    param_3[uVar33] = pbVar4[uVar33 + lVar11];
                  }
                }
              }
            }
            else if (-1 < (int)uVar54) {
              if (6 < (int)param_5) {
                lVar15 = param_1 + lVar50 * uVar43;
                pbVar56 = param_3 + ((uVar42 - 1) - (lVar15 + -1));
                if (((longlong)uVar42 < (longlong)pbVar56) ||
                   ((byte *)-uVar42 != pbVar56 && (longlong)uVar42 <= -(longlong)pbVar56)) {
                  if (((longlong)uVar18 < 0x10) || ((longlong)uVar18 < lVar17)) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = 0;
                    lVar39 = lVar15 - uVar42;
                    if (uVar32 != 0) {
                      do {
                        param_3[uVar33] = *(byte *)(uVar33 + lVar39);
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < uVar32);
                    }
                    uVar52 = uVar32;
                    uVar33 = uVar19;
                    if ((lVar39 + uVar32 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar52 + lVar39);
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar19);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar52 + lVar39));
                        *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                        uVar52 = uVar52 + 0x10;
                      } while (uVar52 < uVar19);
                    }
                  }
                  if (uVar33 < uVar18) {
                    do {
                      param_3[uVar33] = *(byte *)(uVar33 + (lVar15 - uVar42));
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar18);
                  }
                  goto LAB_140a879b8;
                }
              }
              iVar37 = 1;
              lVar15 = 0;
              if (uVar57 != 0) {
                lVar39 = lVar50 * uVar43 + param_1;
                uVar33 = 0;
                do {
                  uVar52 = uVar33;
                  uVar33 = uVar52 + 1;
                  pbVar4[lVar15 + -1] = *(byte *)(lVar15 + -1 + lVar39);
                  pbVar4[lVar15 + -2] = *(byte *)(lVar15 + -2 + lVar39);
                  lVar15 = lVar15 + -2;
                } while (uVar33 < uVar60);
                iVar37 = (int)uVar52 + 2 + (int)uVar33;
              }
              if (iVar37 - 1U < param_5) {
                pbVar4[-(longlong)iVar37] = *(byte *)((param_1 - iVar37) + lVar50 * uVar43);
              }
            }
LAB_140a879b8:
            if (uVar49 == 0) {
              uVar33 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a85b40;
              if (6 < (int)uVar1) {
                pbVar56 = param_3 + uVar34;
                pbVar7 = param_3 + (uVar34 - lVar51);
                if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - (longlong)pbVar7) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - (longlong)pbVar7))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a87daf:
                    uVar34 = 0;
                  }
                  else {
                    uVar33 = (ulonglong)pbVar56 & 0xf;
                    if (uVar33 != 0) {
                      uVar33 = 0x10 - uVar33;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a87daf;
                    uVar52 = 0;
                    uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                    if (uVar33 != 0) {
                      do {
                        pbVar56[uVar52] = pbVar7[uVar52];
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar33);
                    }
                    if (((ulonglong)(pbVar7 + uVar33) & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(pbVar7 + uVar33);
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar7 + uVar33));
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                  }
                  for (; uVar33 = uVar42, uVar34 < uVar2; uVar34 = uVar34 + 1) {
                    pbVar56[uVar34] = pbVar7[uVar34];
                  }
                  goto LAB_140a85b40;
                }
              }
              iVar37 = 1;
              if (uVar44 != 0) {
                uVar33 = 0;
                do {
                  uVar52 = uVar33;
                  param_3[uVar52 * 2 + uVar34] = param_3[uVar52 * 2 + (uVar34 - lVar51)];
                  param_3[uVar52 * 2 + uVar34 + 1] = param_3[uVar52 * 2 + (uVar34 - lVar51) + 1];
                  uVar33 = uVar52 + 1;
                } while (uVar33 < uVar47);
                iVar37 = (int)uVar52 + 2 + (int)uVar33;
              }
              uVar33 = uVar42;
              if (iVar37 - 1U < uVar1) {
                param_3[(longlong)iVar37 + -1 + uVar34] =
                     param_3[(longlong)iVar37 + -1 + (uVar34 - lVar51)];
              }
            }
            else {
              uVar33 = uVar42;
              if ((int)uVar1 < 1) goto LAB_140a85b40;
              if (6 < (int)uVar1) {
                pbVar56 = param_3 + uVar34;
                lVar15 = lVar50 * uVar43 + lVar5;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar15) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar15))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a87db6:
                    uVar34 = 0;
                  }
                  else {
                    uVar33 = (ulonglong)pbVar56 & 0xf;
                    if (uVar33 != 0) {
                      uVar33 = 0x10 - uVar33;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a87db6;
                    uVar52 = 0;
                    uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                    if (uVar33 != 0) {
                      do {
                        pbVar56[uVar52] = *(byte *)(uVar52 + lVar15);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar33);
                    }
                    if ((lVar15 + uVar33 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar15);
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar15));
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                  }
                  for (; uVar33 = uVar42, uVar34 < uVar2; uVar34 = uVar34 + 1) {
                    pbVar56[uVar34] = *(byte *)(uVar34 + lVar15);
                  }
                  goto LAB_140a85b40;
                }
              }
              iVar37 = 1;
              if (uVar44 != 0) {
                lVar15 = lVar50 * uVar43 + lVar5;
                uVar33 = 0;
                do {
                  uVar52 = uVar33;
                  param_3[uVar52 * 2 + uVar34] = *(byte *)(lVar15 + uVar52 * 2);
                  param_3[uVar52 * 2 + uVar34 + 1] = *(byte *)(lVar15 + 1 + uVar52 * 2);
                  uVar33 = uVar52 + 1;
                } while (uVar33 < uVar47);
                iVar37 = (int)uVar52 + 2 + (int)uVar33;
              }
              uVar33 = uVar42;
              if (iVar37 - 1U < uVar1) {
                param_3[(longlong)iVar37 + -1 + uVar34] =
                     *(byte *)(lVar5 + iVar37 + -1 + lVar50 * uVar43);
              }
            }
          }
          else if (uVar30 == 3) {
            uVar34 = uVar42;
            if (0 < (int)(uint)param_6) {
              if (uVar40 < 7) {
LAB_140a85f7d:
                iVar37 = 1;
                uVar30 = param_5;
                if (uVar58 != 0) {
                  lVar15 = lVar50 * uVar43 + param_1;
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    pbVar4[uVar34 * 2] = *(byte *)(lVar15 + uVar34 * 2);
                    pbVar4[uVar34 * 2 + 1] = *(byte *)(lVar15 + 1 + uVar34 * 2);
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar61);
                  uVar30 = param_5 + (int)uVar33 * 2;
                  iVar37 = (int)uVar34 + 2 + (int)uVar33;
                }
                if (iVar37 - 1U < uVar40) {
                  pbVar4[(longlong)iVar37 + -1] = *(byte *)(param_1 + iVar37 + -1 + lVar50 * uVar43)
                  ;
                  uVar30 = param_5 + iVar37;
                }
              }
              else {
                lVar15 = lVar50 * uVar43 + param_1;
                if (((longlong)pbVar4 - lVar15 < (longlong)(ulonglong)uVar40) &&
                   (-((longlong)pbVar4 - lVar15) < (longlong)(ulonglong)uVar40)) goto LAB_140a85f7d;
                if ((uVar40 < 0x10) || (uVar40 < uVar22 + 0x10)) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = 0;
                  if (uVar22 != 0) {
                    do {
                      pbVar4[uVar33] = *(byte *)(uVar33 + lVar15);
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar23);
                  }
                  uVar34 = uVar23;
                  uVar33 = uVar20;
                  if ((lVar15 + uVar23 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar34 + lVar15);
                      *(undefined1 (*) [16])(pbVar4 + uVar34) = in_XMM0;
                      uVar34 = uVar34 + 0x10;
                    } while (uVar34 < uVar20);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar34 + lVar15));
                      *(undefined1 (*) [16])(pbVar4 + uVar34) = in_XMM0;
                      uVar34 = uVar34 + 0x10;
                    } while (uVar34 < uVar20);
                  }
                }
                for (; uVar30 = param_5 + uVar40, uVar33 < uVar41; uVar33 = uVar33 + 1) {
                  pbVar4[uVar33] = *(byte *)(uVar33 + lVar15);
                }
              }
              uVar34 = (ulonglong)(int)uVar30;
              if (2 < (int)(uint)param_6) {
                if (uVar24 == 0) {
                  if (-1 < (int)uVar54) {
                    iVar37 = 1;
                    lVar15 = 0;
                    if (uVar57 != 0) {
                      lVar39 = lVar50 * uVar43 + param_1 + uVar29;
                      uVar33 = 0;
                      do {
                        uVar52 = uVar33;
                        pbVar4[lVar15 + -1] = *(byte *)(lVar39 + uVar52 * 2);
                        uVar33 = uVar52 + 1;
                        pbVar4[lVar15 + -2] = *(byte *)(lVar39 + 1 + uVar52 * 2);
                        lVar15 = lVar15 + -2;
                      } while (uVar33 < uVar60);
                      iVar37 = (int)uVar52 + 2 + (int)uVar33;
                    }
                    if (iVar37 - 1U < param_5) {
                      pbVar4[-(longlong)iVar37] =
                           *(byte *)((longlong)iVar37 + -1 + lVar50 * uVar43 + param_1 + uVar29);
                    }
                  }
                }
                else {
                  lVar15 = lVar50 * uVar43;
                  if (-1 < (int)uVar54) {
                    if (6 < (int)param_5) {
                      lVar39 = param_1 + lVar15;
                      pbVar56 = param_3 + ((uVar42 - 1) - (lVar39 + -1));
                      if (((longlong)uVar42 < (longlong)pbVar56) ||
                         ((byte *)-uVar42 != pbVar56 && (longlong)uVar42 <= -(longlong)pbVar56)) {
                        if (((longlong)uVar18 < 0x10) || ((longlong)uVar18 < lVar17)) {
                          uVar33 = 0;
                        }
                        else {
                          uVar33 = 0;
                          lVar15 = lVar39 - uVar42;
                          if (uVar32 != 0) {
                            do {
                              param_3[uVar33] = *(byte *)(uVar33 + lVar15);
                              uVar33 = uVar33 + 1;
                            } while (uVar33 < uVar32);
                          }
                          uVar52 = uVar32;
                          uVar33 = uVar19;
                          if ((lVar15 + uVar32 & 0xf) == 0) {
                            do {
                              in_XMM0 = *(undefined1 (*) [16])(uVar52 + lVar15);
                              *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                              uVar52 = uVar52 + 0x10;
                            } while (uVar52 < uVar19);
                          }
                          else {
                            do {
                              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar52 + lVar15));
                              *(undefined1 (*) [16])(param_3 + uVar52) = in_XMM0;
                              uVar52 = uVar52 + 0x10;
                            } while (uVar52 < uVar19);
                          }
                        }
                        if (uVar33 < uVar18) {
                          do {
                            param_3[uVar33] = *(byte *)(uVar33 + (lVar39 - uVar42));
                            uVar33 = uVar33 + 1;
                          } while (uVar33 < uVar18);
                        }
                        goto LAB_140a86319;
                      }
                    }
                    iVar37 = 1;
                    lVar39 = 0;
                    if (uVar57 != 0) {
                      uVar33 = 0;
                      do {
                        uVar52 = uVar33;
                        uVar33 = uVar52 + 1;
                        pbVar4[lVar39 + -1] = *(byte *)(lVar39 + -1 + param_1 + lVar15);
                        pbVar4[lVar39 + -2] = *(byte *)(lVar39 + -2 + param_1 + lVar15);
                        lVar39 = lVar39 + -2;
                      } while (uVar33 < uVar60);
                      iVar37 = (int)uVar52 + 2 + (int)uVar33;
                    }
                    if (iVar37 - 1U < param_5) {
                      pbVar4[-(longlong)iVar37] = *(byte *)((param_1 + lVar15) - (longlong)iVar37);
                    }
                  }
                }
LAB_140a86319:
                lVar39 = lVar50 * uVar43;
                lVar15 = lVar39 + lVar5;
                param_3[uVar34] = *(byte *)(lVar15 + -2);
                param_3[uVar34 + 1] = *(byte *)(lVar15 + -1);
                iVar27 = uVar30 + 2;
                lVar53 = (longlong)iVar27;
                iVar37 = iVar27;
                if (uVar49 == 0) {
                  if (0 < (int)uVar1) {
                    iVar14 = 1;
                    lVar15 = 0;
                    if (uVar44 != 0) {
                      lVar6 = lVar39 + (lVar5 - uVar29);
                      uVar33 = 0;
                      do {
                        uVar34 = uVar33;
                        param_3[uVar34 * 2 + lVar53] = *(byte *)(lVar15 + -1 + lVar6);
                        lVar9 = lVar15 + -2;
                        lVar15 = lVar15 + -2;
                        param_3[uVar34 * 2 + lVar53 + 1] = *(byte *)(lVar9 + lVar6);
                        uVar33 = uVar34 + 1;
                      } while (uVar33 < uVar47);
                      iVar37 = (int)uVar33 * 2 + 2 + uVar30;
                      iVar14 = (int)uVar34 + 2 + (int)uVar33;
                    }
                    if (uVar1 <= iVar14 - 1U) goto LAB_140a865ee;
                    param_3[(longlong)iVar14 + -1 + lVar53] =
                         *(byte *)((lVar39 + (lVar5 - uVar29)) - (longlong)iVar14);
                    lVar53 = (longlong)(iVar14 + iVar27);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a865f1;
                  if (6 < (int)uVar1) {
                    pbVar56 = param_3 + lVar53;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar15) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar15))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a86b51:
                        uVar34 = 0;
                      }
                      else {
                        uVar33 = (ulonglong)pbVar56 & 0xf;
                        if (uVar33 != 0) {
                          uVar33 = 0x10 - uVar33;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a86b51;
                        uVar52 = 0;
                        uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                        if (uVar33 != 0) {
                          do {
                            pbVar56[uVar52] = *(byte *)(uVar52 + lVar15);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar33);
                        }
                        if ((lVar15 + uVar33 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar15);
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar15));
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                      }
                      for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                        pbVar56[uVar34] = *(byte *)(uVar34 + lVar15);
                      }
                      lVar53 = (longlong)(int)(iVar26 + 4 + uVar30);
                      goto LAB_140a865f1;
                    }
                  }
                  iVar14 = 1;
                  uVar33 = 0;
                  if (uVar44 != 0) {
                    do {
                      uVar34 = uVar33;
                      param_3[uVar34 * 2 + lVar53] = *(byte *)(lVar15 + uVar34 * 2);
                      param_3[uVar34 * 2 + lVar53 + 1] = *(byte *)(lVar15 + 1 + uVar34 * 2);
                      uVar33 = uVar34 + 1;
                    } while (uVar33 < uVar47);
                    iVar37 = (int)uVar33 * 2 + 2 + uVar30;
                    iVar14 = (int)uVar34 + 2 + (int)uVar33;
                  }
                  if (iVar14 - 1U < uVar1) {
                    param_3[(longlong)iVar14 + -1 + lVar53] =
                         *(byte *)((longlong)iVar14 + -1 + lVar15);
                    lVar53 = (longlong)(iVar14 + iVar27);
                  }
                  else {
LAB_140a865ee:
                    lVar53 = (longlong)iVar37;
                  }
                }
LAB_140a865f1:
                uVar33 = lVar53 - lVar31;
                goto LAB_140a85b40;
              }
            }
            uVar33 = (ulonglong)uVar54;
            if (uVar24 == 0) {
              uVar30 = uVar54;
              if (uVar49 == 0) {
                while (-1 < (int)uVar30) {
                  uVar30 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar34 = (ulonglong)(int)uVar33;
                    uVar33 = uVar34;
                    do {
                      if ((int)uVar33 < 0) break;
                      lVar15 = (longlong)(int)uVar30;
                      uVar30 = uVar30 + 1;
                      uVar33 = (ulonglong)((int)uVar33 - 1);
                      param_3[uVar34 - lVar15] = param_3[lVar15 + uVar29 + 1 + uVar34];
                    } while (uVar30 < uVar25);
                  }
                  uVar30 = (uint)uVar33;
                }
                uVar34 = 0;
                uVar33 = uVar42;
                iVar37 = iVar35;
                iVar27 = iVar35;
                iVar14 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                if ((int)param_5 < 2) {
                  do {
                    iVar38 = iVar14 + iVar37;
                    pbVar4[uVar34 + lVar51] = param_3[iVar14];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar38) || (iVar38 < (int)param_5)) {
                      iVar14 = iVar37 + iVar27;
                      iVar37 = -iVar37;
                      iVar27 = -iVar27;
                      iVar38 = iVar38 - iVar14;
                    }
                    uVar34 = uVar34 + 1;
                    iVar14 = iVar38;
                  } while (uVar34 < uVar2);
                }
              }
              else {
                if (-1 < (int)uVar54) {
                  iVar37 = 1;
                  lVar15 = 0;
                  if (uVar57 != 0) {
                    lVar39 = lVar50 * uVar43 + param_1;
                    uVar33 = 0;
                    do {
                      uVar52 = uVar33;
                      pbVar4[lVar15 + -1] = *(byte *)(lVar39 + 1 + uVar52 * 2);
                      uVar33 = uVar52 + 1;
                      pbVar4[lVar15 + -2] = *(byte *)(lVar39 + 2 + uVar52 * 2);
                      lVar15 = lVar15 + -2;
                    } while (uVar33 < uVar60);
                    iVar37 = (int)uVar52 + 2 + (int)uVar33;
                  }
                  if (iVar37 - 1U < param_5) {
                    pbVar4[-(longlong)iVar37] = *(byte *)(param_1 + iVar37 + lVar50 * uVar43);
                  }
                }
LAB_140a86892:
                uVar33 = uVar42;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar56 = param_3 + uVar34;
                    lVar15 = lVar50 * uVar43 + lVar5;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar15) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar15))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a86b58:
                        uVar34 = 0;
                      }
                      else {
                        uVar33 = (ulonglong)pbVar56 & 0xf;
                        if (uVar33 != 0) {
                          uVar33 = 0x10 - uVar33;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a86b58;
                        uVar52 = 0;
                        uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                        if (uVar33 != 0) {
                          do {
                            pbVar56[uVar52] = *(byte *)(uVar52 + lVar15);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar33);
                        }
                        if ((lVar15 + uVar33 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar15);
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar15));
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                      }
                      for (; uVar33 = uVar42, uVar34 < uVar2; uVar34 = uVar34 + 1) {
                        pbVar56[uVar34] = *(byte *)(uVar34 + lVar15);
                      }
                      goto LAB_140a85b40;
                    }
                  }
                  iVar37 = 1;
                  if (uVar44 != 0) {
                    lVar15 = lVar50 * uVar43 + lVar5;
                    uVar33 = 0;
                    do {
                      uVar52 = uVar33;
                      param_3[uVar52 * 2 + uVar34] = *(byte *)(lVar15 + uVar52 * 2);
                      param_3[uVar52 * 2 + uVar34 + 1] = *(byte *)(lVar15 + 1 + uVar52 * 2);
                      uVar33 = uVar52 + 1;
                    } while (uVar33 < uVar47);
                    iVar37 = (int)uVar52 + 2 + (int)uVar33;
                  }
                  uVar33 = uVar42;
                  if (iVar37 - 1U < uVar1) {
                    param_3[(longlong)iVar37 + -1 + uVar34] =
                         *(byte *)(lVar5 + iVar37 + -1 + lVar50 * uVar43);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar54) {
                do {
                  uVar30 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar37 = (int)uVar33;
                    do {
                      if ((int)uVar33 < 0) break;
                      lVar15 = (longlong)(int)uVar30;
                      uVar30 = uVar30 + 1;
                      uVar33 = (ulonglong)((int)uVar33 - 1);
                      param_3[iVar37 - lVar15] =
                           *(byte *)(((longlong)iVar37 + lVar50 * uVar43 + lVar59) - lVar15);
                    } while (uVar30 < uVar25);
                  }
                } while (-1 < (int)uVar33);
              }
              if (uVar49 != 0) goto LAB_140a86892;
              uVar33 = uVar42;
              if (0 < (int)uVar1) {
                iVar37 = 1;
                lVar15 = 0;
                if (uVar44 != 0) {
                  lVar39 = lVar50 * uVar43 + lVar5;
                  uVar33 = 0;
                  do {
                    uVar52 = uVar33;
                    param_3[uVar52 * 2 + uVar34] = *(byte *)(lVar15 + -2 + lVar39);
                    lVar53 = lVar15 + -3;
                    lVar15 = lVar15 + -2;
                    param_3[uVar52 * 2 + uVar34 + 1] = *(byte *)(lVar53 + lVar39);
                    uVar33 = uVar52 + 1;
                  } while (uVar33 < uVar47);
                  iVar37 = (int)uVar52 + 2 + (int)uVar33;
                }
                uVar33 = uVar42;
                if (iVar37 - 1U < uVar1) {
                  param_3[(longlong)iVar37 + -1 + uVar34] =
                       *(byte *)((lVar5 - iVar37) + -1 + lVar50 * uVar43);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar30 = 0;
            uVar28 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar39 = lVar50 * uVar43;
                lVar15 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar39);
                if (((longlong)uVar42 <= lVar15) || ((longlong)uVar42 <= -lVar15)) {
                  if (((longlong)uVar42 < 0x10) || ((longlong)uVar42 < lVar8)) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = 0;
                    lVar15 = lVar59 + lVar39;
                    if (uVar46 != 0) {
                      do {
                        param_3[uVar33] = *(byte *)(uVar33 + lVar15);
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < uVar46);
                    }
                    uVar34 = uVar46;
                    uVar33 = uVar48;
                    if ((lVar15 + uVar46 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar34 + lVar15);
                        *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                        uVar34 = uVar34 + 0x10;
                      } while (uVar34 < uVar48);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar34 + lVar15));
                        *(undefined1 (*) [16])(param_3 + uVar34) = in_XMM0;
                        uVar34 = uVar34 + 0x10;
                      } while (uVar34 < uVar48);
                    }
                  }
                  uVar28 = param_5;
                  if (uVar33 < uVar42) {
                    do {
                      param_3[uVar33] = *(byte *)(uVar33 + lVar39 + lVar59);
                      uVar33 = uVar33 + 1;
                    } while (uVar33 < uVar42);
                  }
                  goto LAB_140a84b93;
                }
              }
              uVar36 = 1;
              if (uVar57 != 0) {
                lVar15 = lVar50 * uVar43 + lVar59;
                uVar33 = 0;
                do {
                  uVar34 = uVar33;
                  param_3[uVar34 * 2] = *(byte *)(lVar15 + uVar34 * 2);
                  param_3[uVar34 * 2 + 1] = *(byte *)(lVar15 + 1 + uVar34 * 2);
                  uVar33 = uVar34 + 1;
                } while (uVar33 < uVar60);
                uVar30 = (int)uVar33 * 2;
                uVar36 = (int)uVar34 + 2 + (int)uVar33;
              }
              uVar28 = uVar30;
              if (uVar36 - 1 < param_5) {
                param_3[(longlong)(int)uVar36 + -1] =
                     *(byte *)(lVar59 + (int)uVar36 + -1 + lVar50 * uVar43);
                uVar28 = uVar36;
              }
            }
LAB_140a84b93:
            lVar15 = (longlong)(int)uVar28;
            if (0 < (int)(uint)param_6) {
              if (uVar40 < 7) {
LAB_140a84cff:
                iVar37 = 1;
                uVar30 = uVar28;
                if (uVar58 != 0) {
                  lVar39 = lVar50 * uVar43 + param_1;
                  uVar33 = 0;
                  do {
                    uVar34 = uVar33;
                    param_3[uVar34 * 2 + lVar15] = *(byte *)(lVar39 + uVar34 * 2);
                    param_3[uVar34 * 2 + lVar15 + 1] = *(byte *)(lVar39 + 1 + uVar34 * 2);
                    uVar33 = uVar34 + 1;
                  } while (uVar33 < uVar61);
                  uVar30 = uVar28 + (int)uVar33 * 2;
                  iVar37 = (int)uVar34 + 2 + (int)uVar33;
                }
                if (iVar37 - 1U < uVar40) {
                  uVar30 = uVar28 + iVar37;
                  param_3[(longlong)iVar37 + -1 + lVar15] =
                       *(byte *)(param_1 + iVar37 + -1 + lVar50 * uVar43);
                }
              }
              else {
                pbVar56 = param_3 + lVar15;
                lVar39 = lVar50 * uVar43 + param_1;
                if (((longlong)pbVar56 - lVar39 < (longlong)(ulonglong)uVar40) &&
                   (-((longlong)pbVar56 - lVar39) < (longlong)(ulonglong)uVar40))
                goto LAB_140a84cff;
                if (uVar40 < 0x10) {
LAB_140a85df4:
                  uVar34 = 0;
                }
                else {
                  uVar33 = (ulonglong)pbVar56 & 0xf;
                  if ((int)uVar33 != 0) {
                    uVar33 = (ulonglong)(0x10 - (int)uVar33);
                  }
                  iVar37 = (int)uVar33;
                  if (uVar40 < iVar37 + 0x10U) goto LAB_140a85df4;
                  iVar27 = uVar40 - (uVar40 - iVar37 & 0xf);
                  uVar34 = 0;
                  if (iVar37 != 0) {
                    do {
                      pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                      uVar34 = uVar34 + 1;
                    } while (uVar34 < uVar33);
                  }
                  if ((lVar39 + uVar33 & 0xf) == 0) {
                    uVar34 = (ulonglong)iVar27;
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                  else {
                    uVar34 = (ulonglong)iVar27;
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                      *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                      uVar33 = uVar33 + 0x10;
                    } while (uVar33 < uVar34);
                  }
                }
                for (; uVar34 < uVar41; uVar34 = uVar34 + 1) {
                  pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                }
                uVar30 = uVar28 + uVar40;
              }
              lVar15 = (longlong)(int)uVar30;
              if (2 < (int)(uint)param_6) {
                lVar39 = lVar50 * uVar43 + lVar5;
                param_3[lVar15] = *(byte *)(lVar39 + -2);
                iVar37 = uVar30 + 2;
                param_3[lVar15 + 1] = *(byte *)(lVar39 + -1);
                lVar15 = (longlong)iVar37;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar56 = param_3 + lVar15;
                    if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar39) ||
                       ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar39))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a85dfb:
                        uVar34 = 0;
                      }
                      else {
                        uVar33 = (ulonglong)pbVar56 & 0xf;
                        if (uVar33 != 0) {
                          uVar33 = 0x10 - uVar33;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a85dfb;
                        uVar52 = 0;
                        uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                        if (uVar33 != 0) {
                          do {
                            pbVar56[uVar52] = *(byte *)(uVar52 + lVar39);
                            uVar52 = uVar52 + 1;
                          } while (uVar52 < uVar33);
                        }
                        if ((lVar39 + uVar33 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                            *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                            uVar33 = uVar33 + 0x10;
                          } while (uVar33 < uVar34);
                        }
                      }
                      for (; uVar34 < uVar2; uVar34 = uVar34 + 1) {
                        pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                      }
                      lVar15 = (longlong)(int)(iVar26 + 4 + uVar30);
                      goto LAB_140a84fb1;
                    }
                  }
                  iVar14 = 1;
                  uVar33 = 0;
                  iVar27 = iVar37;
                  if (uVar44 != 0) {
                    do {
                      uVar34 = uVar33;
                      param_3[uVar34 * 2 + lVar15] = *(byte *)(lVar39 + uVar34 * 2);
                      param_3[uVar34 * 2 + lVar15 + 1] = *(byte *)(lVar39 + 1 + uVar34 * 2);
                      uVar33 = uVar34 + 1;
                    } while (uVar33 < uVar47);
                    iVar27 = (int)uVar33 * 2 + 2 + uVar30;
                    iVar14 = (int)uVar34 + 2 + (int)uVar33;
                  }
                  if (iVar14 - 1U < uVar1) {
                    param_3[(longlong)iVar14 + -1 + lVar15] =
                         *(byte *)((longlong)iVar14 + -1 + lVar39);
                    lVar15 = (longlong)(iVar14 + iVar37);
                  }
                  else {
                    lVar15 = (longlong)iVar27;
                  }
                }
LAB_140a84fb1:
                uVar33 = lVar15 - lVar31;
                goto LAB_140a85b40;
              }
            }
            uVar33 = uVar42;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar56 = param_3 + lVar15;
                lVar39 = lVar50 * uVar43 + lVar5;
                if (((longlong)(2 - uVar42) <= (longlong)pbVar56 - lVar39) ||
                   ((longlong)(2 - uVar42) <= -((longlong)pbVar56 - lVar39))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a85e02:
                    uVar34 = 0;
                  }
                  else {
                    uVar33 = (ulonglong)pbVar56 & 0xf;
                    if (uVar33 != 0) {
                      uVar33 = 0x10 - uVar33;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar33 + 0x10)) goto LAB_140a85e02;
                    uVar52 = 0;
                    uVar34 = (ulonglong)(int)(iVar12 - (iVar12 - (int)uVar33 & 0xfU));
                    if (uVar33 != 0) {
                      do {
                        pbVar56[uVar52] = *(byte *)(uVar52 + lVar39);
                        uVar52 = uVar52 + 1;
                      } while (uVar52 < uVar33);
                    }
                    if ((lVar39 + uVar33 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar33 + lVar39);
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar33 + lVar39));
                        *(undefined1 (*) [16])(pbVar56 + uVar33) = in_XMM0;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < uVar34);
                    }
                  }
                  for (; uVar33 = uVar42, uVar34 < uVar2; uVar34 = uVar34 + 1) {
                    pbVar56[uVar34] = *(byte *)(uVar34 + lVar39);
                  }
                  goto LAB_140a85b40;
                }
              }
              iVar37 = 1;
              if (uVar44 != 0) {
                lVar39 = lVar50 * uVar43 + lVar5;
                uVar33 = 0;
                do {
                  uVar34 = uVar33;
                  param_3[uVar34 * 2 + lVar15] = *(byte *)(lVar39 + uVar34 * 2);
                  param_3[uVar34 * 2 + lVar15 + 1] = *(byte *)(lVar39 + 1 + uVar34 * 2);
                  uVar33 = uVar34 + 1;
                } while (uVar33 < uVar47);
                iVar37 = (int)uVar34 + 2 + (int)uVar33;
              }
              uVar33 = uVar42;
              if (iVar37 - 1U < uVar1) {
                param_3[(longlong)iVar37 + -1 + lVar15] =
                     *(byte *)(lVar5 + iVar37 + -1 + lVar50 * uVar43);
              }
            }
          }
          else {
            uVar33 = 0;
          }
        }
LAB_140a85b40:
        **(short **)(param_2 + uVar43 * 8) =
             (ushort)*param_3 + (ushort)param_3[1] + (ushort)param_3[2];
        if (0 < (int)((uint)param_6 - 2)) {
          uVar34 = *(longlong *)(param_2 + uVar43 * 8) + 2;
          lVar15 = param_1 + lVar50 * uVar43;
          if (((longlong)(uVar34 - lVar15) < lVar51) &&
             ((longlong)-(uVar34 - lVar15) < lVar51 * 2 + -4)) {
            uVar34 = 0;
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar43 * 8) + 2 + uVar34 * 2) =
                   (ushort)*(byte *)(uVar34 + lVar15) + (ushort)*(byte *)(uVar34 + 1 + lVar15) +
                   (ushort)*(byte *)(uVar34 + 2 + lVar15);
              uVar34 = uVar34 + 1;
            } while (uVar34 < uVar3);
          }
          else {
            if ((longlong)uVar3 < 0x10) {
LAB_140a8860f:
              uVar34 = 0;
            }
            else {
              uVar52 = uVar34 & 0xf;
              if ((int)uVar52 != 0) {
                if ((uVar34 & 1) != 0) goto LAB_140a8860f;
                uVar52 = (ulonglong)(0x10U - (int)uVar52 >> 1);
              }
              if ((longlong)uVar3 < (longlong)(uVar52 + 0x10)) goto LAB_140a8860f;
              uVar34 = (ulonglong)(int)((int)uVar3 - ((int)uVar3 - (int)uVar52 & 0xfU));
              uVar55 = 0;
              if ((int)uVar52 != 0) {
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar43 * 8) + 2 + uVar55 * 2) =
                       (ushort)*(byte *)(uVar55 + lVar15) + (ushort)*(byte *)(uVar55 + 1 + lVar15) +
                       (ushort)*(byte *)(uVar55 + 2 + lVar15);
                  uVar55 = uVar55 + 1;
                } while (uVar55 < uVar52);
              }
              lVar39 = lVar50 * uVar43 + param_1;
              do {
                auVar63 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar52 + lVar39));
                auVar66 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar52 + 1 + lVar39));
                in_XMM0 = pmovzxbw(in_XMM0,*(undefined8 *)(uVar52 + 2 + lVar39));
                auVar64 = pmovzxbw(in_XMM3,*(undefined8 *)(uVar52 + 8 + lVar39));
                in_XMM2._0_2_ = auVar63._0_2_ + auVar66._0_2_ + in_XMM0._0_2_;
                in_XMM2._2_2_ = auVar63._2_2_ + auVar66._2_2_ + in_XMM0._2_2_;
                in_XMM2._4_2_ = auVar63._4_2_ + auVar66._4_2_ + in_XMM0._4_2_;
                in_XMM2._6_2_ = auVar63._6_2_ + auVar66._6_2_ + in_XMM0._6_2_;
                in_XMM2._8_2_ = auVar63._8_2_ + auVar66._8_2_ + in_XMM0._8_2_;
                in_XMM2._10_2_ = auVar63._10_2_ + auVar66._10_2_ + in_XMM0._10_2_;
                in_XMM2._12_2_ = auVar63._12_2_ + auVar66._12_2_ + in_XMM0._12_2_;
                in_XMM2._14_2_ = auVar63._14_2_ + auVar66._14_2_ + in_XMM0._14_2_;
                in_XMM1 = pmovzxbw(in_XMM1,*(undefined8 *)(uVar52 + 9 + lVar39));
                in_XMM5 = pmovzxbw(auVar66,*(undefined8 *)(uVar52 + 10 + lVar39));
                *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar43 * 8) + 2 + uVar52 * 2) =
                     in_XMM2;
                in_XMM3._0_2_ = auVar64._0_2_ + in_XMM1._0_2_ + in_XMM5._0_2_;
                in_XMM3._2_2_ = auVar64._2_2_ + in_XMM1._2_2_ + in_XMM5._2_2_;
                in_XMM3._4_2_ = auVar64._4_2_ + in_XMM1._4_2_ + in_XMM5._4_2_;
                in_XMM3._6_2_ = auVar64._6_2_ + in_XMM1._6_2_ + in_XMM5._6_2_;
                in_XMM3._8_2_ = auVar64._8_2_ + in_XMM1._8_2_ + in_XMM5._8_2_;
                in_XMM3._10_2_ = auVar64._10_2_ + in_XMM1._10_2_ + in_XMM5._10_2_;
                in_XMM3._12_2_ = auVar64._12_2_ + in_XMM1._12_2_ + in_XMM5._12_2_;
                in_XMM3._14_2_ = auVar64._14_2_ + in_XMM1._14_2_ + in_XMM5._14_2_;
                *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar43 * 8) + 0x12 + uVar52 * 2) =
                     in_XMM3;
                uVar52 = uVar52 + 0x10;
              } while (uVar52 < uVar34);
            }
            for (; uVar34 < uVar3; uVar34 = uVar34 + 1) {
              *(ushort *)(*(longlong *)(param_2 + uVar43 * 8) + 2 + uVar34 * 2) =
                   (ushort)*(byte *)(uVar34 + lVar15) + (ushort)*(byte *)(uVar34 + 1 + lVar15) +
                   (ushort)*(byte *)(uVar34 + 2 + lVar15);
            }
          }
        }
        if ((int)(uint)param_6 < 2) goto LAB_140a85db0;
        lVar15 = uVar43 * 8;
        uVar43 = uVar43 + 1;
        lStack_70 = lStack_70 + lVar50;
        *(ushort *)(*(longlong *)(param_2 + lVar15) + -2 + lVar51 * 2) =
             (ushort)param_3[uVar33] + (ushort)param_3[uVar33 + 1] + (ushort)param_3[uVar33 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar43) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar31 = 1;
      break;
    case 2:
      lVar31 = 2;
      break;
    case 3:
      lVar31 = 3;
      break;
    case 4:
      lVar31 = 4;
    }
    (*(code *)(&PTR_FUN_14308f158)[lVar31])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar50 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a85db0:
  uVar43 = uVar43 + 1;
  lStack_70 = lStack_70 + lVar50;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar43) {
    return 0;
  }
  goto LAB_140a84920;
}

