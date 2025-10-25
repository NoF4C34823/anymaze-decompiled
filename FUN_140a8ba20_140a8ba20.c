
undefined8
FUN_140a8ba20(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  int iVar47;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  int iVar52;
  ulonglong uVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  longlong lVar57;
  ulonglong uVar58;
  byte *pbVar59;
  uint uVar60;
  uint uVar61;
  longlong lVar62;
  undefined4 uVar65;
  undefined1 in_XMM0 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 in_XMM2 [16];
  undefined1 auVar68 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar69 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  longlong lStack_78;
  short *psStack_58;
  short *psStack_50;
  ulonglong uVar48;
  ulonglong uVar63;
  ulonglong uVar64;
  
  lVar57 = (longlong)param_4;
  uVar23 = (uint)param_6 + 7 & 0xfffffff8;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar25 = param_7 & 0xf;
      uVar24 = (ulonglong)param_3 & 0xf;
      uVar33 = (ulonglong)(int)param_5;
      uVar39 = uVar24;
      if (uVar24 != 0) {
        uVar39 = 0x10 - uVar24;
      }
      lVar18 = -uVar33;
      uVar2 = lVar18 + 2;
      uVar37 = 2;
      if ((uint)param_6 < 3) {
        uVar37 = (uint)param_6;
      }
      lVar3 = lVar18 + 4;
      uVar29 = (ulonglong)(1 < (int)(uint)param_6);
      lVar51 = (longlong)(int)(uint)param_6;
      pbVar8 = param_3 + uVar33;
      uVar26 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar40 = (ulonglong)(int)uVar37;
      iVar27 = -param_5;
      uVar35 = param_7 & 0x80;
      uVar65 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar1 = iVar27 + 2;
      uVar67 = CONCAT44(uVar65,uVar65);
      uVar13 = param_7 & 0x40;
      uVar43 = uVar1 >> 1;
      uVar48 = (ulonglong)uVar43;
      uVar36 = (uint)param_6 - 2;
      lVar62 = param_1 - uVar33;
      uVar19 = 0xffffffffffffffff - (lVar18 + -1);
      lVar18 = param_1 + lVar51;
      uVar14 = (uint)pbVar8 & 0xf;
      iVar54 = ((int)(uint)param_6 < 2) - 1;
      if (((ulonglong)pbVar8 & 0xf) != 0) {
        uVar14 = 0x10 - uVar14;
      }
      uVar4 = lVar51 - 2;
      uVar15 = (ulonglong)uVar14;
      if (uVar24 != 0) {
        uVar24 = 0x10 - uVar24;
      }
      uVar28 = param_5 - 1;
      iVar52 = (int)uVar2;
      lVar5 = uVar39 + 0x10;
      uVar55 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar55 = uVar25;
      }
      lVar12 = lVar51 - uVar33;
      uVar44 = param_5 - (param_5 - (int)uVar39 & 0xf);
      iVar30 = uVar37 - (uVar37 - uVar14 & 0xf);
      uVar60 = param_5 >> 1;
      uVar63 = (ulonglong)uVar60;
      uVar20 = (ulonglong)(int)((int)uVar19 - ((int)uVar19 - (int)uVar24 & 0xfU));
      uVar34 = (ulonglong)iVar30;
      uVar49 = (ulonglong)(int)uVar44;
      lVar6 = uVar24 + 0x10;
      uVar61 = uVar37 >> 1;
      uVar64 = (ulonglong)uVar61;
      lStack_78 = 0;
      uVar17 = 0;
LAB_140a8bee0:
      psStack_50 = *(short **)(param_2 + uVar17 * 8);
      psStack_58 = psStack_50 + (int)uVar23;
      if ((uint)param_6 == 1) {
        uVar38 = uVar55;
        if (uVar25 != 6) goto LAB_140a8bf61;
        goto LAB_140a8c79d;
      }
      do {
        uVar38 = uVar25;
        if (uVar25 == 6) {
LAB_140a8c79d:
          uVar38 = 0;
          uVar32 = 0;
          if (uVar13 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar33) && (lVar5 <= (longlong)uVar33)) {
                uVar42 = 0;
                uVar41 = uVar39;
                if (uVar39 != 0) {
                  do {
                    param_3[uVar42] = param_8;
                    uVar42 = uVar42 + 1;
                  } while (uVar42 < uVar39);
                }
                do {
                  *(undefined8 *)(param_3 + uVar41) = uVar67;
                  *(undefined8 *)(param_3 + uVar41 + 8) = uVar67;
                  uVar41 = uVar41 + 0x10;
                  uVar38 = uVar44;
                } while (uVar41 < uVar49);
              }
              uVar41 = (ulonglong)(int)uVar38;
              uVar32 = uVar38;
              if (uVar41 < uVar33) {
                do {
                  param_3[uVar41] = param_8;
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar33);
                uVar32 = (uint)uVar41;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar16 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_78),
                lVar16 < (longlong)uVar33 && (-lVar16 < (longlong)uVar33)))) {
              uVar45 = 1;
              if (uVar60 != 0) {
                uVar41 = 0;
                do {
                  uVar42 = uVar41;
                  param_3[uVar42 * 2] = *(byte *)(lVar62 + lStack_78 + uVar42 * 2);
                  param_3[uVar42 * 2 + 1] = *(byte *)(lVar62 + lStack_78 + 1 + uVar42 * 2);
                  uVar41 = uVar42 + 1;
                } while (uVar41 < uVar63);
                uVar38 = (int)uVar41 * 2;
                uVar45 = (int)uVar42 + 2 + (int)uVar41;
              }
              uVar32 = uVar38;
              if (uVar45 - 1 < param_5) {
                param_3[(longlong)(int)uVar45 + -1] =
                     *(byte *)(lVar62 + (int)uVar45 + -1 + lStack_78);
                uVar32 = uVar45;
              }
            }
            else {
              if (((longlong)uVar33 < 0x10) || ((longlong)uVar33 < lVar5)) {
                uVar41 = 0;
              }
              else {
                uVar41 = 0;
                lVar16 = lVar62 + lStack_78;
                if (uVar39 != 0) {
                  do {
                    param_3[uVar41] = *(byte *)(uVar41 + lVar16);
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar39);
                }
                uVar42 = uVar39;
                uVar41 = uVar49;
                if ((lVar16 + uVar39 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar42 + lVar16);
                    *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                    uVar42 = uVar42 + 0x10;
                  } while (uVar42 < uVar49);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar42 + lVar16));
                    *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                    uVar42 = uVar42 + 0x10;
                  } while (uVar42 < uVar49);
                }
              }
              uVar32 = param_5;
              if (uVar41 < uVar33) {
                do {
                  param_3[uVar41] = *(byte *)(uVar41 + lVar62 + lStack_78);
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar33);
              }
            }
          }
          lVar16 = (longlong)(int)uVar32;
          if ((int)(uint)param_6 < 1) {
            if (uVar35 != 0) goto LAB_140a8ce39;
LAB_140a8cd11:
            uVar41 = uVar33;
            if ((int)uVar1 < 1) goto LAB_140a8d0a0;
LAB_140a8cd1f:
            if ((longlong)uVar2 < 0x10) {
LAB_140a8fe0e:
              iVar56 = 0;
            }
            else {
              pbVar59 = param_3 + lVar16;
              uVar41 = (ulonglong)pbVar59 & 0xf;
              if (uVar41 != 0) {
                uVar41 = 0x10 - uVar41;
              }
              if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8fe0e;
              iVar56 = iVar52 - (iVar52 - (int)uVar41 & 0xfU);
              uVar42 = 0;
              if (uVar41 != 0) {
                do {
                  pbVar59[uVar42] = param_8;
                  uVar42 = uVar42 + 1;
                } while (uVar42 < uVar41);
              }
              do {
                *(undefined8 *)(pbVar59 + uVar41) = uVar67;
                *(undefined8 *)(pbVar59 + uVar41 + 8) = uVar67;
                uVar41 = uVar41 + 0x10;
              } while (uVar41 < (ulonglong)(longlong)iVar56);
              uVar32 = (int)lVar16 + iVar56;
            }
            uVar41 = (ulonglong)iVar56;
            if (uVar41 < uVar2) {
              do {
                param_3[uVar41 + lVar16] = param_8;
                uVar41 = uVar41 + 1;
              } while (uVar41 < uVar2);
              uVar32 = (int)uVar41 + (int)lVar16;
            }
LAB_140a8d075:
            uVar41 = uVar33;
            if ((int)(uint)param_6 < 3) goto LAB_140a8d0a0;
          }
          else {
            if (uVar37 < 7) {
LAB_140a8cc00:
              iVar56 = 1;
              uVar38 = uVar32;
              if (uVar61 != 0) {
                uVar41 = 0;
                do {
                  uVar42 = uVar41;
                  param_3[uVar42 * 2 + lVar16] = *(byte *)(param_1 + lStack_78 + uVar42 * 2);
                  param_3[uVar42 * 2 + lVar16 + 1] = *(byte *)(param_1 + lStack_78 + 1 + uVar42 * 2)
                  ;
                  uVar41 = uVar42 + 1;
                } while (uVar41 < uVar64);
                uVar38 = uVar32 + (int)uVar41 * 2;
                iVar56 = (int)uVar42 + 2 + (int)uVar41;
              }
              if (iVar56 - 1U < uVar37) {
                param_3[(longlong)iVar56 + -1 + lVar16] =
                     *(byte *)(param_1 + iVar56 + -1 + lStack_78);
                uVar38 = uVar32 + iVar56;
              }
            }
            else {
              pbVar59 = param_3 + lVar16;
              lVar50 = param_1 + lStack_78;
              if (((longlong)pbVar59 - lVar50 < (longlong)(ulonglong)uVar37) &&
                 (-((longlong)pbVar59 - lVar50) < (longlong)(ulonglong)uVar37)) goto LAB_140a8cc00;
              if (uVar37 < 0x10) {
LAB_140a8fe07:
                uVar42 = 0;
              }
              else {
                uVar41 = (ulonglong)pbVar59 & 0xf;
                if ((int)uVar41 != 0) {
                  uVar41 = (ulonglong)(0x10 - (int)uVar41);
                }
                iVar56 = (int)uVar41;
                if (uVar37 < iVar56 + 0x10U) goto LAB_140a8fe07;
                iVar31 = uVar37 - (uVar37 - iVar56 & 0xf);
                uVar42 = 0;
                if (iVar56 != 0) {
                  do {
                    pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
                    uVar42 = uVar42 + 1;
                  } while (uVar42 < uVar41);
                }
                if ((lVar50 + uVar41 & 0xf) == 0) {
                  uVar42 = (ulonglong)iVar31;
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar50);
                    *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                    uVar41 = uVar41 + 0x10;
                  } while (uVar41 < uVar42);
                }
                else {
                  uVar42 = (ulonglong)iVar31;
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar50));
                    *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                    uVar41 = uVar41 + 0x10;
                  } while (uVar41 < uVar42);
                }
              }
              for (; uVar42 < uVar40; uVar42 = uVar42 + 1) {
                pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
              }
              uVar38 = uVar32 + uVar37;
            }
            uVar32 = uVar38;
            lVar16 = (longlong)(int)uVar32;
            if ((int)(uint)param_6 < 3) {
              if (uVar35 == 0) goto LAB_140a8cd11;
LAB_140a8ce39:
              uVar41 = uVar33;
              if ((int)uVar1 < 1) goto LAB_140a8d0a0;
LAB_140a8ce47:
              iVar56 = (int)lVar16;
              if ((int)uVar1 < 7) {
LAB_140a8cfe2:
                iVar31 = 1;
                if (uVar43 != 0) {
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    param_3[uVar42 * 2 + lVar16] = *(byte *)(lVar18 + lStack_78 + uVar42 * 2);
                    param_3[uVar42 * 2 + lVar16 + 1] =
                         *(byte *)(lVar18 + lStack_78 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar48);
                  uVar32 = iVar56 + (int)uVar41 * 2;
                  iVar31 = (int)uVar42 + 2 + (int)uVar41;
                }
                if (iVar31 - 1U < uVar1) {
                  uVar32 = iVar56 + iVar31;
                  param_3[(longlong)iVar31 + -1 + lVar16] =
                       *(byte *)(lVar18 + iVar31 + -1 + lStack_78);
                }
              }
              else {
                pbVar59 = param_3 + lVar16;
                lVar50 = lVar18 + lStack_78;
                if (((longlong)pbVar59 - lVar50 < (longlong)(2 - uVar33)) &&
                   (-((longlong)pbVar59 - lVar50) < (longlong)(2 - uVar33))) goto LAB_140a8cfe2;
                if ((longlong)uVar2 < 0x10) {
LAB_140a8fe16:
                  uVar42 = 0;
                }
                else {
                  uVar41 = (ulonglong)pbVar59 & 0xf;
                  if (uVar41 != 0) {
                    uVar41 = 0x10 - uVar41;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8fe16;
                  uVar53 = 0;
                  uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                  if (uVar41 != 0) {
                    do {
                      pbVar59[uVar53] = *(byte *)(uVar53 + lVar50);
                      uVar53 = uVar53 + 1;
                    } while (uVar53 < uVar41);
                  }
                  if ((lVar50 + uVar41 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar50);
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar50));
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                }
                for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                  pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
                }
                uVar32 = iVar56 + 2 + iVar27;
              }
              goto LAB_140a8d075;
            }
            uVar32 = uVar32 + 2;
            param_3[lVar16] = *(byte *)(lStack_78 + -2 + lVar18);
            param_3[lVar16 + 1] = *(byte *)(lStack_78 + -1 + lVar18);
            lVar16 = (longlong)(int)uVar32;
            if (uVar35 == 0) {
              if (0 < (int)uVar1) goto LAB_140a8cd1f;
            }
            else if (0 < (int)uVar1) goto LAB_140a8ce47;
          }
          uVar41 = (int)uVar32 - lVar3;
        }
        else {
LAB_140a8bf61:
          if (uVar38 == 1) {
            lVar16 = lVar57 * uVar17;
            bVar11 = *(byte *)(param_1 + lVar16);
            uVar38 = 0;
            uVar32 = 0;
            if (uVar13 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar33 < 0x10) || ((longlong)uVar33 < lVar5)) {
                  uVar41 = 0;
                }
                else {
                  uVar41 = 0;
                  if (uVar39 != 0) {
                    do {
                      param_3[uVar41] = bVar11;
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar39);
                  }
                  uVar65 = CONCAT22(CONCAT11(bVar11,bVar11),CONCAT11(bVar11,bVar11));
                  in_XMM0._0_8_ = CONCAT44(uVar65,uVar65);
                  in_XMM0._8_8_ = in_XMM0._0_8_;
                  uVar42 = uVar39;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                    uVar42 = uVar42 + 0x10;
                    uVar41 = uVar49;
                    uVar38 = uVar44;
                  } while (uVar42 < uVar49);
                }
                uVar32 = uVar38;
                if (uVar41 < uVar33) {
                  do {
                    param_3[uVar41] = bVar11;
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar33);
                  uVar32 = (uint)uVar41;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar50 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar16),
                  lVar50 < (longlong)uVar33 && (-lVar50 < (longlong)uVar33)))) {
                uVar45 = 1;
                if (uVar60 != 0) {
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    param_3[uVar42 * 2] = *(byte *)(lVar62 + lVar16 + uVar42 * 2);
                    param_3[uVar42 * 2 + 1] = *(byte *)(lVar62 + lVar16 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar63);
                  uVar38 = (int)uVar41 * 2;
                  uVar45 = (int)uVar42 + 2 + (int)uVar41;
                }
                uVar32 = uVar38;
                if (uVar45 - 1 < param_5) {
                  param_3[(longlong)(int)uVar45 + -1] =
                       *(byte *)(lVar62 + (int)uVar45 + -1 + lVar16);
                  uVar32 = uVar45;
                }
              }
              else {
                if (((longlong)uVar33 < 0x10) || ((longlong)uVar33 < lVar5)) {
                  uVar41 = 0;
                }
                else {
                  uVar41 = 0;
                  lVar50 = lVar62 + lVar16;
                  if (uVar39 != 0) {
                    do {
                      param_3[uVar41] = *(byte *)(uVar41 + lVar50);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar39);
                  }
                  uVar42 = uVar39;
                  uVar41 = uVar49;
                  if ((lVar50 + uVar39 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar42 + lVar50);
                      *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                      uVar42 = uVar42 + 0x10;
                    } while (uVar42 < uVar49);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar42 + lVar50));
                      *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                      uVar42 = uVar42 + 0x10;
                    } while (uVar42 < uVar49);
                  }
                }
                uVar32 = param_5;
                if (uVar41 < uVar33) {
                  do {
                    param_3[uVar41] = *(byte *)(uVar41 + lVar62 + lVar16);
                    uVar41 = uVar41 + 1;
                  } while (uVar41 < uVar33);
                }
              }
            }
            lVar50 = (longlong)(int)uVar32;
            if (0 < (int)(uint)param_6) {
              if (uVar37 < 7) {
LAB_140a8f9e1:
                iVar56 = 1;
                uVar38 = uVar32;
                if (uVar61 != 0) {
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    param_3[uVar42 * 2 + lVar50] = *(byte *)(param_1 + lVar16 + uVar42 * 2);
                    param_3[uVar42 * 2 + lVar50 + 1] = *(byte *)(param_1 + lVar16 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar64);
                  uVar38 = uVar32 + (int)uVar41 * 2;
                  iVar56 = (int)uVar42 + 2 + (int)uVar41;
                }
                if (iVar56 - 1U < uVar37) {
                  param_3[(longlong)iVar56 + -1 + lVar50] =
                       *(byte *)(param_1 + iVar56 + -1 + lVar16);
                  uVar38 = uVar32 + iVar56;
                }
              }
              else {
                pbVar59 = param_3 + lVar50;
                lVar21 = param_1 + lVar16;
                if (((longlong)pbVar59 - lVar21 < (longlong)(ulonglong)uVar37) &&
                   (-((longlong)pbVar59 - lVar21) < (longlong)(ulonglong)uVar37))
                goto LAB_140a8f9e1;
                if (uVar37 < 0x10) {
LAB_140a8fde3:
                  uVar42 = 0;
                }
                else {
                  uVar41 = (ulonglong)pbVar59 & 0xf;
                  if ((int)uVar41 != 0) {
                    uVar41 = (ulonglong)(0x10 - (int)uVar41);
                  }
                  iVar56 = (int)uVar41;
                  if (uVar37 < iVar56 + 0x10U) goto LAB_140a8fde3;
                  iVar31 = uVar37 - (uVar37 - iVar56 & 0xf);
                  uVar42 = 0;
                  if (iVar56 != 0) {
                    do {
                      pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < uVar41);
                  }
                  if ((lVar21 + uVar41 & 0xf) == 0) {
                    uVar42 = (ulonglong)iVar31;
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                  else {
                    uVar42 = (ulonglong)iVar31;
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                }
                for (; uVar42 < uVar40; uVar42 = uVar42 + 1) {
                  pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                }
                uVar38 = uVar32 + uVar37;
              }
              uVar32 = uVar38;
              lVar50 = (longlong)(int)uVar32;
              if (2 < (int)(uint)param_6) {
                uVar32 = uVar32 + 2;
                param_3[lVar50] = *(byte *)(lVar18 + -2 + lVar16);
                param_3[lVar50 + 1] = *(byte *)(lVar18 + -1 + lVar16);
                lVar50 = (longlong)(int)uVar32;
              }
            }
            bVar11 = *(byte *)(lVar18 + -1 + lVar16);
            iVar56 = (int)lVar50;
            if (uVar35 == 0) {
              if (0 < (int)uVar1) {
                if ((longlong)uVar2 < 0x10) {
LAB_140a8fdeb:
                  iVar31 = 0;
                }
                else {
                  pbVar59 = param_3 + lVar50;
                  uVar41 = (ulonglong)pbVar59 & 0xf;
                  if (uVar41 != 0) {
                    uVar41 = 0x10 - uVar41;
                  }
                  if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8fdeb;
                  iVar31 = iVar52 - (iVar52 - (int)uVar41 & 0xfU);
                  uVar42 = 0;
                  if (uVar41 != 0) {
                    do {
                      pbVar59[uVar42] = bVar11;
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < uVar41);
                  }
                  uVar65 = CONCAT22(CONCAT11(bVar11,bVar11),CONCAT11(bVar11,bVar11));
                  in_XMM0._0_8_ = CONCAT44(uVar65,uVar65);
                  in_XMM0._8_8_ = in_XMM0._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                    uVar41 = uVar41 + 0x10;
                  } while (uVar41 < (ulonglong)(longlong)iVar31);
                  uVar32 = iVar56 + iVar31;
                }
                uVar41 = (ulonglong)iVar31;
                if (uVar2 <= uVar41) goto LAB_140a8fd8e;
                do {
                  param_3[uVar41 + lVar50] = bVar11;
                  uVar41 = uVar41 + 1;
                } while (uVar41 < uVar2);
                lVar50 = (longlong)((int)uVar41 + iVar56);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a8fd91;
              if (6 < (int)uVar1) {
                pbVar59 = param_3 + lVar50;
                lVar21 = lVar16 + lVar18;
                if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar21) ||
                   ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar21))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a8fdf2:
                    uVar42 = 0;
                  }
                  else {
                    uVar41 = (ulonglong)pbVar59 & 0xf;
                    if (uVar41 != 0) {
                      uVar41 = 0x10 - uVar41;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8fdf2;
                    uVar53 = 0;
                    uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                    if (uVar41 != 0) {
                      do {
                        pbVar59[uVar53] = *(byte *)(uVar53 + lVar21);
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar41);
                    }
                    if ((lVar21 + uVar41 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                  }
                  for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                    pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                  }
                  lVar50 = (longlong)(iVar56 + 2 + iVar27);
                  goto LAB_140a8fd91;
                }
              }
              iVar31 = 1;
              if (uVar43 != 0) {
                uVar41 = 0;
                do {
                  uVar42 = uVar41;
                  param_3[uVar42 * 2 + lVar50] = *(byte *)(lVar16 + lVar18 + uVar42 * 2);
                  param_3[uVar42 * 2 + lVar50 + 1] = *(byte *)(lVar16 + lVar18 + 1 + uVar42 * 2);
                  uVar41 = uVar42 + 1;
                } while (uVar41 < uVar48);
                uVar32 = iVar56 + (int)uVar41 * 2;
                iVar31 = (int)uVar42 + 2 + (int)uVar41;
              }
              if (iVar31 - 1U < uVar1) {
                param_3[(longlong)iVar31 + -1 + lVar50] = *(byte *)(lVar18 + iVar31 + -1 + lVar16);
                lVar50 = (longlong)(iVar31 + iVar56);
                goto LAB_140a8fd91;
              }
LAB_140a8fd8e:
              lVar50 = (longlong)(int)uVar32;
            }
LAB_140a8fd91:
            uVar41 = lVar50 - lVar3;
            if ((int)(uint)param_6 < 3) {
              uVar41 = uVar33;
            }
          }
          else if (uVar38 == 2) {
            uVar42 = uVar33;
            if (0 < (int)(uint)param_6) {
              if (uVar37 < 7) {
LAB_140a8e47e:
                iVar56 = 1;
                uVar38 = param_5;
                if (uVar61 != 0) {
                  lVar16 = lVar57 * uVar17 + param_1;
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    pbVar8[uVar42 * 2] = *(byte *)(lVar16 + uVar42 * 2);
                    pbVar8[uVar42 * 2 + 1] = *(byte *)(lVar16 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar64);
                  uVar38 = param_5 + (int)uVar41 * 2;
                  iVar56 = (int)uVar42 + 2 + (int)uVar41;
                }
                if (iVar56 - 1U < uVar37) {
                  pbVar8[(longlong)iVar56 + -1] = *(byte *)(param_1 + iVar56 + -1 + lVar57 * uVar17)
                  ;
                  uVar38 = param_5 + iVar56;
                }
              }
              else {
                lVar16 = lVar57 * uVar17 + param_1;
                if (((longlong)pbVar8 - lVar16 < (longlong)(ulonglong)uVar37) &&
                   (-((longlong)pbVar8 - lVar16) < (longlong)(ulonglong)uVar37)) goto LAB_140a8e47e;
                if ((uVar37 < 0x10) || (uVar37 < uVar14 + 0x10)) {
                  iVar56 = 0;
                }
                else {
                  uVar41 = 0;
                  if (uVar14 != 0) {
                    do {
                      pbVar8[uVar41] = *(byte *)(uVar41 + lVar16);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar15);
                  }
                  uVar41 = uVar15;
                  iVar56 = iVar30;
                  if ((lVar16 + uVar15 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar16);
                      *(undefined1 (*) [16])(pbVar8 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar34);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar16));
                      *(undefined1 (*) [16])(pbVar8 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar34);
                  }
                }
                for (uVar41 = (ulonglong)iVar56; uVar38 = param_5 + uVar37, uVar41 < uVar40;
                    uVar41 = uVar41 + 1) {
                  pbVar8[uVar41] = *(byte *)(uVar41 + lVar16);
                }
              }
              uVar42 = (ulonglong)(int)uVar38;
              if (2 < (int)(uint)param_6) {
                lVar16 = lVar57 * uVar17;
                if (uVar13 == 0) {
                  if (-1 < (int)uVar28) {
                    if (6 < (int)param_5) {
                      pbVar59 = param_3 + ((uVar33 - 1) - (lVar16 + -1 + lVar18));
                      if (((longlong)uVar33 < (longlong)pbVar59) ||
                         ((byte *)-uVar33 != pbVar59 && (longlong)uVar33 <= -(longlong)pbVar59)) {
                        if (((longlong)uVar19 < 0x10) || ((longlong)uVar19 < lVar6)) {
                          uVar41 = 0;
                        }
                        else {
                          uVar41 = 0;
                          lVar50 = (lVar16 + lVar18) - uVar33;
                          if (uVar24 != 0) {
                            do {
                              param_3[uVar41] = *(byte *)(uVar41 + lVar50);
                              uVar41 = uVar41 + 1;
                            } while (uVar41 < uVar24);
                          }
                          uVar53 = uVar24;
                          uVar41 = uVar20;
                          if ((lVar50 + uVar24 & 0xf) == 0) {
                            do {
                              in_XMM0 = *(undefined1 (*) [16])(uVar53 + lVar50);
                              *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                              uVar53 = uVar53 + 0x10;
                            } while (uVar53 < uVar20);
                          }
                          else {
                            do {
                              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar53 + lVar50));
                              *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                              uVar53 = uVar53 + 0x10;
                            } while (uVar53 < uVar20);
                          }
                        }
                        if (uVar41 < uVar19) {
                          do {
                            param_3[uVar41] = *(byte *)(uVar41 + ((lVar16 + lVar18) - uVar33));
                            uVar41 = uVar41 + 1;
                          } while (uVar41 < uVar19);
                        }
                        goto LAB_140a8e93c;
                      }
                    }
                    iVar56 = 1;
                    lVar50 = 0;
                    if (uVar60 != 0) {
                      uVar41 = 0;
                      do {
                        uVar53 = uVar41;
                        uVar41 = uVar53 + 1;
                        pbVar8[lVar50 + -1] = *(byte *)(lVar50 + -1 + lVar16 + lVar18);
                        pbVar8[lVar50 + -2] = *(byte *)(lVar50 + -2 + lVar16 + lVar18);
                        lVar50 = lVar50 + -2;
                      } while (uVar41 < uVar63);
                      iVar56 = (int)uVar53 + 2 + (int)uVar41;
                    }
                    if (iVar56 - 1U < param_5) {
                      pbVar8[-(longlong)iVar56] = *(byte *)((lVar16 + lVar18) - (longlong)iVar56);
                    }
                  }
                }
                else if (-1 < (int)uVar28) {
                  if (6 < (int)param_5) {
                    lVar50 = param_1 + lVar16;
                    pbVar59 = param_3 + ((uVar33 - 1) - (lVar50 + -1));
                    if (((longlong)uVar33 < (longlong)pbVar59) ||
                       ((byte *)-uVar33 != pbVar59 && (longlong)uVar33 <= -(longlong)pbVar59)) {
                      if (((longlong)uVar19 < 0x10) || ((longlong)uVar19 < lVar6)) {
                        uVar41 = 0;
                      }
                      else {
                        uVar41 = 0;
                        lVar21 = lVar50 - uVar33;
                        if (uVar24 != 0) {
                          do {
                            param_3[uVar41] = *(byte *)(uVar41 + lVar21);
                            uVar41 = uVar41 + 1;
                          } while (uVar41 < uVar24);
                        }
                        uVar53 = uVar24;
                        uVar41 = uVar20;
                        if ((lVar21 + uVar24 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar53 + lVar21);
                            *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                            uVar53 = uVar53 + 0x10;
                          } while (uVar53 < uVar20);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar53 + lVar21));
                            *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                            uVar53 = uVar53 + 0x10;
                          } while (uVar53 < uVar20);
                        }
                      }
                      if (uVar41 < uVar19) {
                        do {
                          param_3[uVar41] = *(byte *)(uVar41 + (lVar50 - uVar33));
                          uVar41 = uVar41 + 1;
                        } while (uVar41 < uVar19);
                      }
                      goto LAB_140a8e93c;
                    }
                  }
                  iVar56 = 1;
                  lVar50 = 0;
                  if (uVar60 != 0) {
                    uVar41 = 0;
                    do {
                      uVar53 = uVar41;
                      uVar41 = uVar53 + 1;
                      pbVar8[lVar50 + -1] = *(byte *)(lVar50 + -1 + param_1 + lVar16);
                      pbVar8[lVar50 + -2] = *(byte *)(lVar50 + -2 + param_1 + lVar16);
                      lVar50 = lVar50 + -2;
                    } while (uVar41 < uVar63);
                    iVar56 = (int)uVar53 + 2 + (int)uVar41;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar8[-(longlong)iVar56] = *(byte *)((param_1 + lVar16) - (longlong)iVar56);
                  }
                }
LAB_140a8e93c:
                param_3[uVar42] = *(byte *)(lVar18 + -2 + lVar16);
                iVar31 = uVar38 + 2;
                param_3[uVar42 + 1] = *(byte *)(lVar18 + -1 + lVar16);
                lVar50 = (longlong)iVar31;
                iVar56 = iVar31;
                if (uVar35 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar59 = param_3 + lVar50;
                      lVar21 = param_1 + lVar16;
                      if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar21) ||
                         ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar21))) {
                        if ((longlong)uVar2 < 0x10) {
LAB_140a8f58d:
                          uVar42 = 0;
                        }
                        else {
                          uVar41 = (ulonglong)pbVar59 & 0xf;
                          if (uVar41 != 0) {
                            uVar41 = 0x10 - uVar41;
                          }
                          if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8f58d;
                          uVar53 = 0;
                          uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                          if (uVar41 != 0) {
                            do {
                              pbVar59[uVar53] = *(byte *)(uVar53 + lVar21);
                              uVar53 = uVar53 + 1;
                            } while (uVar53 < uVar41);
                          }
                          if ((lVar21 + uVar41 & 0xf) == 0) {
                            do {
                              in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                              *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                              uVar41 = uVar41 + 0x10;
                            } while (uVar41 < uVar42);
                          }
                          else {
                            do {
                              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                              *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                              uVar41 = uVar41 + 0x10;
                            } while (uVar41 < uVar42);
                          }
                        }
                        for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                          pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                        }
                        lVar50 = (longlong)(int)(iVar27 + 4 + uVar38);
                        goto LAB_140a8ed56;
                      }
                    }
                    iVar46 = 1;
                    if (uVar43 != 0) {
                      uVar41 = 0;
                      do {
                        uVar42 = uVar41;
                        param_3[uVar42 * 2 + lVar50] = *(byte *)(param_1 + lVar16 + uVar42 * 2);
                        param_3[uVar42 * 2 + lVar50 + 1] =
                             *(byte *)(param_1 + lVar16 + 1 + uVar42 * 2);
                        uVar41 = uVar42 + 1;
                      } while (uVar41 < uVar48);
                      iVar56 = (int)uVar41 * 2 + 2 + uVar38;
                      iVar46 = (int)uVar42 + 2 + (int)uVar41;
                    }
                    if (uVar1 <= iVar46 - 1U) goto LAB_140a8ed53;
                    param_3[(longlong)iVar46 + -1 + lVar50] =
                         *(byte *)(param_1 + iVar46 + -1 + lVar16);
                    lVar50 = (longlong)(iVar46 + iVar31);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a8ed56;
                  if (6 < (int)uVar1) {
                    pbVar59 = param_3 + lVar50;
                    lVar21 = lVar16 + lVar18;
                    if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar21) ||
                       ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar21))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a8f594:
                        uVar42 = 0;
                      }
                      else {
                        uVar41 = (ulonglong)pbVar59 & 0xf;
                        if (uVar41 != 0) {
                          uVar41 = 0x10 - uVar41;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8f594;
                        uVar53 = 0;
                        uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                        if (uVar41 != 0) {
                          do {
                            pbVar59[uVar53] = *(byte *)(uVar53 + lVar21);
                            uVar53 = uVar53 + 1;
                          } while (uVar53 < uVar41);
                        }
                        if ((lVar21 + uVar41 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                      }
                      for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                        pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                      }
                      lVar50 = (longlong)(int)(iVar27 + 4 + uVar38);
                      goto LAB_140a8ed56;
                    }
                  }
                  iVar46 = 1;
                  if (uVar43 != 0) {
                    uVar41 = 0;
                    do {
                      uVar42 = uVar41;
                      param_3[uVar42 * 2 + lVar50] = *(byte *)(lVar16 + lVar18 + uVar42 * 2);
                      param_3[uVar42 * 2 + lVar50 + 1] = *(byte *)(lVar16 + lVar18 + 1 + uVar42 * 2)
                      ;
                      uVar41 = uVar42 + 1;
                    } while (uVar41 < uVar48);
                    iVar56 = (int)uVar41 * 2 + 2 + uVar38;
                    iVar46 = (int)uVar42 + 2 + (int)uVar41;
                  }
                  if (iVar46 - 1U < uVar1) {
                    param_3[(longlong)iVar46 + -1 + lVar50] =
                         *(byte *)(lVar18 + iVar46 + -1 + lVar16);
                    lVar50 = (longlong)(iVar46 + iVar31);
                    goto LAB_140a8ed56;
                  }
LAB_140a8ed53:
                  lVar50 = (longlong)iVar56;
                }
LAB_140a8ed56:
                uVar41 = lVar50 - lVar3;
                goto LAB_140a8d0a0;
              }
            }
            if (uVar13 == 0) {
              if (-1 < (int)uVar28) {
                if (((int)param_5 < 7) ||
                   ((pbVar59 = param_3 + ((uVar33 - 1) - (longlong)(pbVar8 + lVar51 + -1)),
                    (longlong)pbVar59 <= (longlong)uVar33 &&
                    ((byte *)-uVar33 == pbVar59 || -(longlong)pbVar59 < (longlong)uVar33)))) {
                  iVar56 = 1;
                  lVar16 = 0;
                  uVar41 = 0;
                  if (uVar60 != 0) {
                    do {
                      uVar53 = uVar41;
                      uVar41 = uVar53 + 1;
                      pbVar8[lVar16 + -1] = pbVar8[lVar16 + -1 + lVar51];
                      pbVar8[lVar16 + -2] = pbVar8[lVar16 + -2 + lVar51];
                      lVar16 = lVar16 + -2;
                    } while (uVar41 < uVar63);
                    iVar56 = (int)uVar53 + 2 + (int)uVar41;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar8[-(longlong)iVar56] = pbVar8[lVar51 - iVar56];
                  }
                }
                else {
                  if (((longlong)uVar19 < 0x10) || ((longlong)uVar19 < lVar6)) {
                    uVar41 = 0;
                  }
                  else {
                    uVar41 = 0;
                    if (uVar24 != 0) {
                      do {
                        param_3[uVar41] = pbVar8[uVar41 + lVar12];
                        uVar41 = uVar41 + 1;
                      } while (uVar41 < uVar24);
                    }
                    uVar53 = uVar24;
                    uVar41 = uVar20;
                    if (((ulonglong)(pbVar8 + uVar24 + lVar12) & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(pbVar8 + uVar53 + lVar12);
                        *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                        uVar53 = uVar53 + 0x10;
                      } while (uVar53 < uVar20);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar8 + uVar53 + lVar12));
                        *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                        uVar53 = uVar53 + 0x10;
                      } while (uVar53 < uVar20);
                    }
                  }
                  for (; uVar41 < uVar19; uVar41 = uVar41 + 1) {
                    param_3[uVar41] = pbVar8[uVar41 + lVar12];
                  }
                }
              }
            }
            else if (-1 < (int)uVar28) {
              if (6 < (int)param_5) {
                lVar16 = param_1 + lVar57 * uVar17;
                pbVar59 = param_3 + ((uVar33 - 1) - (lVar16 + -1));
                if (((longlong)uVar33 < (longlong)pbVar59) ||
                   ((byte *)-uVar33 != pbVar59 && (longlong)uVar33 <= -(longlong)pbVar59)) {
                  if (((longlong)uVar19 < 0x10) || ((longlong)uVar19 < lVar6)) {
                    uVar41 = 0;
                  }
                  else {
                    uVar41 = 0;
                    lVar50 = lVar16 - uVar33;
                    if (uVar24 != 0) {
                      do {
                        param_3[uVar41] = *(byte *)(uVar41 + lVar50);
                        uVar41 = uVar41 + 1;
                      } while (uVar41 < uVar24);
                    }
                    uVar53 = uVar24;
                    uVar41 = uVar20;
                    if ((lVar50 + uVar24 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar53 + lVar50);
                        *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                        uVar53 = uVar53 + 0x10;
                      } while (uVar53 < uVar20);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar53 + lVar50));
                        *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                        uVar53 = uVar53 + 0x10;
                      } while (uVar53 < uVar20);
                    }
                  }
                  if (uVar41 < uVar19) {
                    do {
                      param_3[uVar41] = *(byte *)(uVar41 + (lVar16 - uVar33));
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar19);
                  }
                  goto LAB_140a8f1ba;
                }
              }
              iVar56 = 1;
              lVar16 = 0;
              if (uVar60 != 0) {
                lVar50 = lVar57 * uVar17 + param_1;
                uVar41 = 0;
                do {
                  uVar53 = uVar41;
                  uVar41 = uVar53 + 1;
                  pbVar8[lVar16 + -1] = *(byte *)(lVar16 + -1 + lVar50);
                  pbVar8[lVar16 + -2] = *(byte *)(lVar16 + -2 + lVar50);
                  lVar16 = lVar16 + -2;
                } while (uVar41 < uVar63);
                iVar56 = (int)uVar53 + 2 + (int)uVar41;
              }
              if (iVar56 - 1U < param_5) {
                pbVar8[-(longlong)iVar56] = *(byte *)((param_1 - iVar56) + lVar57 * uVar17);
              }
            }
LAB_140a8f1ba:
            if (uVar35 == 0) {
              uVar41 = uVar33;
              if ((int)uVar1 < 1) goto LAB_140a8d0a0;
              if (6 < (int)uVar1) {
                pbVar59 = param_3 + uVar42;
                pbVar9 = param_3 + (uVar42 - lVar51);
                if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - (longlong)pbVar9) ||
                   ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - (longlong)pbVar9))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a8f5aa:
                    uVar42 = 0;
                  }
                  else {
                    uVar41 = (ulonglong)pbVar59 & 0xf;
                    if (uVar41 != 0) {
                      uVar41 = 0x10 - uVar41;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8f5aa;
                    uVar53 = 0;
                    uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                    if (uVar41 != 0) {
                      do {
                        pbVar59[uVar53] = pbVar9[uVar53];
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar41);
                    }
                    if (((ulonglong)(pbVar9 + uVar41) & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(pbVar9 + uVar41);
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar9 + uVar41));
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                  }
                  for (; uVar41 = uVar33, uVar42 < uVar2; uVar42 = uVar42 + 1) {
                    pbVar59[uVar42] = pbVar9[uVar42];
                  }
                  goto LAB_140a8d0a0;
                }
              }
              iVar56 = 1;
              if (uVar43 != 0) {
                uVar41 = 0;
                do {
                  uVar53 = uVar41;
                  param_3[uVar53 * 2 + uVar42] = param_3[uVar53 * 2 + (uVar42 - lVar51)];
                  param_3[uVar53 * 2 + uVar42 + 1] = param_3[uVar53 * 2 + (uVar42 - lVar51) + 1];
                  uVar41 = uVar53 + 1;
                } while (uVar41 < uVar48);
                iVar56 = (int)uVar53 + 2 + (int)uVar41;
              }
              uVar41 = uVar33;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + uVar42] =
                     param_3[(longlong)iVar56 + -1 + (uVar42 - lVar51)];
              }
            }
            else {
              uVar41 = uVar33;
              if ((int)uVar1 < 1) goto LAB_140a8d0a0;
              if (6 < (int)uVar1) {
                pbVar59 = param_3 + uVar42;
                lVar16 = lVar57 * uVar17 + lVar18;
                if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar16) ||
                   ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar16))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a8f5b1:
                    uVar42 = 0;
                  }
                  else {
                    uVar41 = (ulonglong)pbVar59 & 0xf;
                    if (uVar41 != 0) {
                      uVar41 = 0x10 - uVar41;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8f5b1;
                    uVar53 = 0;
                    uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                    if (uVar41 != 0) {
                      do {
                        pbVar59[uVar53] = *(byte *)(uVar53 + lVar16);
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar41);
                    }
                    if ((lVar16 + uVar41 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar16);
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar16));
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                  }
                  for (; uVar41 = uVar33, uVar42 < uVar2; uVar42 = uVar42 + 1) {
                    pbVar59[uVar42] = *(byte *)(uVar42 + lVar16);
                  }
                  goto LAB_140a8d0a0;
                }
              }
              iVar56 = 1;
              if (uVar43 != 0) {
                lVar16 = lVar57 * uVar17 + lVar18;
                uVar41 = 0;
                do {
                  uVar53 = uVar41;
                  param_3[uVar53 * 2 + uVar42] = *(byte *)(lVar16 + uVar53 * 2);
                  param_3[uVar53 * 2 + uVar42 + 1] = *(byte *)(lVar16 + 1 + uVar53 * 2);
                  uVar41 = uVar53 + 1;
                } while (uVar41 < uVar48);
                iVar56 = (int)uVar53 + 2 + (int)uVar41;
              }
              uVar41 = uVar33;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + uVar42] =
                     *(byte *)(lVar18 + iVar56 + -1 + lVar57 * uVar17);
              }
            }
          }
          else if (uVar38 == 3) {
            uVar42 = uVar33;
            if (0 < (int)(uint)param_6) {
              if (uVar37 < 7) {
LAB_140a8d71e:
                iVar56 = 1;
                uVar38 = param_5;
                if (uVar61 != 0) {
                  lVar16 = lVar57 * uVar17 + param_1;
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    pbVar8[uVar42 * 2] = *(byte *)(lVar16 + uVar42 * 2);
                    pbVar8[uVar42 * 2 + 1] = *(byte *)(lVar16 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar64);
                  uVar38 = param_5 + (int)uVar41 * 2;
                  iVar56 = (int)uVar42 + 2 + (int)uVar41;
                }
                if (iVar56 - 1U < uVar37) {
                  pbVar8[(longlong)iVar56 + -1] = *(byte *)(param_1 + iVar56 + -1 + lVar57 * uVar17)
                  ;
                  uVar38 = param_5 + iVar56;
                }
              }
              else {
                lVar16 = lVar57 * uVar17 + param_1;
                if (((longlong)pbVar8 - lVar16 < (longlong)(ulonglong)uVar37) &&
                   (-((longlong)pbVar8 - lVar16) < (longlong)(ulonglong)uVar37)) goto LAB_140a8d71e;
                if ((uVar37 < 0x10) || (uVar37 < uVar14 + 0x10)) {
                  uVar41 = 0;
                }
                else {
                  uVar41 = 0;
                  if (uVar14 != 0) {
                    do {
                      pbVar8[uVar41] = *(byte *)(uVar41 + lVar16);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar15);
                  }
                  uVar42 = uVar15;
                  uVar41 = uVar34;
                  if ((lVar16 + uVar15 & 0xf) == 0) {
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar42 + lVar16);
                      *(undefined1 (*) [16])(pbVar8 + uVar42) = in_XMM0;
                      uVar42 = uVar42 + 0x10;
                    } while (uVar42 < uVar34);
                  }
                  else {
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar42 + lVar16));
                      *(undefined1 (*) [16])(pbVar8 + uVar42) = in_XMM0;
                      uVar42 = uVar42 + 0x10;
                    } while (uVar42 < uVar34);
                  }
                }
                for (; uVar38 = param_5 + uVar37, uVar41 < uVar40; uVar41 = uVar41 + 1) {
                  pbVar8[uVar41] = *(byte *)(uVar41 + lVar16);
                }
              }
              uVar42 = (ulonglong)(int)uVar38;
              if (2 < (int)(uint)param_6) {
                if (uVar13 == 0) {
                  if (-1 < (int)uVar28) {
                    iVar56 = 1;
                    lVar16 = 0;
                    if (uVar60 != 0) {
                      lVar50 = lVar57 * uVar17 + param_1 + uVar29;
                      uVar41 = 0;
                      do {
                        uVar53 = uVar41;
                        pbVar8[lVar16 + -1] = *(byte *)(lVar50 + uVar53 * 2);
                        uVar41 = uVar53 + 1;
                        pbVar8[lVar16 + -2] = *(byte *)(lVar50 + 1 + uVar53 * 2);
                        lVar16 = lVar16 + -2;
                      } while (uVar41 < uVar63);
                      iVar56 = (int)uVar53 + 2 + (int)uVar41;
                    }
                    if (iVar56 - 1U < param_5) {
                      pbVar8[-(longlong)iVar56] =
                           *(byte *)(param_1 + uVar29 + (longlong)iVar56 + -1 + lVar57 * uVar17);
                    }
                  }
                }
                else {
                  lVar16 = lVar57 * uVar17;
                  if (-1 < (int)uVar28) {
                    if (6 < (int)param_5) {
                      pbVar59 = param_3 + ((uVar33 - 1) - (param_1 + -1 + lVar16));
                      if (((longlong)uVar33 < (longlong)pbVar59) ||
                         ((byte *)-uVar33 != pbVar59 && (longlong)uVar33 <= -(longlong)pbVar59)) {
                        if (((longlong)uVar19 < 0x10) || ((longlong)uVar19 < lVar6)) {
                          uVar41 = 0;
                        }
                        else {
                          uVar41 = 0;
                          lVar50 = (param_1 + lVar16) - uVar33;
                          if (uVar24 != 0) {
                            do {
                              param_3[uVar41] = *(byte *)(uVar41 + lVar50);
                              uVar41 = uVar41 + 1;
                            } while (uVar41 < uVar24);
                          }
                          uVar53 = uVar24;
                          uVar41 = uVar20;
                          if ((lVar50 + uVar24 & 0xf) == 0) {
                            do {
                              in_XMM0 = *(undefined1 (*) [16])(uVar53 + lVar50);
                              *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                              uVar53 = uVar53 + 0x10;
                            } while (uVar53 < uVar20);
                          }
                          else {
                            do {
                              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar53 + lVar50));
                              *(undefined1 (*) [16])(param_3 + uVar53) = in_XMM0;
                              uVar53 = uVar53 + 0x10;
                            } while (uVar53 < uVar20);
                          }
                        }
                        if (uVar41 < uVar19) {
                          do {
                            param_3[uVar41] = *(byte *)(uVar41 + ((param_1 + lVar16) - uVar33));
                            uVar41 = uVar41 + 1;
                          } while (uVar41 < uVar19);
                        }
                        goto LAB_140a8dab9;
                      }
                    }
                    iVar56 = 1;
                    lVar50 = 0;
                    if (uVar60 != 0) {
                      uVar41 = 0;
                      do {
                        uVar53 = uVar41;
                        uVar41 = uVar53 + 1;
                        pbVar8[lVar50 + -1] = *(byte *)(lVar50 + -1 + param_1 + lVar16);
                        pbVar8[lVar50 + -2] = *(byte *)(lVar50 + -2 + param_1 + lVar16);
                        lVar50 = lVar50 + -2;
                      } while (uVar41 < uVar63);
                      iVar56 = (int)uVar53 + 2 + (int)uVar41;
                    }
                    if (iVar56 - 1U < param_5) {
                      pbVar8[-(longlong)iVar56] = *(byte *)((param_1 + lVar16) - (longlong)iVar56);
                    }
                  }
                }
LAB_140a8dab9:
                lVar16 = lVar57 * uVar17;
                param_3[uVar42] = *(byte *)(lVar18 + -2 + lVar16);
                param_3[uVar42 + 1] = *(byte *)(lVar18 + -1 + lVar16);
                iVar31 = uVar38 + 2;
                lVar50 = (longlong)iVar31;
                iVar56 = iVar31;
                if (uVar35 == 0) {
                  if (0 < (int)uVar1) {
                    iVar46 = 1;
                    lVar21 = 0;
                    if (uVar43 != 0) {
                      lVar22 = (lVar18 - uVar29) + lVar16;
                      uVar41 = 0;
                      do {
                        uVar42 = uVar41;
                        param_3[uVar42 * 2 + lVar50] = *(byte *)(lVar21 + -1 + lVar22);
                        lVar10 = lVar21 + -2;
                        lVar21 = lVar21 + -2;
                        param_3[uVar42 * 2 + lVar50 + 1] = *(byte *)(lVar10 + lVar22);
                        uVar41 = uVar42 + 1;
                      } while (uVar41 < uVar48);
                      iVar56 = (int)uVar41 * 2 + 2 + uVar38;
                      iVar46 = (int)uVar42 + 2 + (int)uVar41;
                    }
                    if (uVar1 <= iVar46 - 1U) goto LAB_140a8dd91;
                    param_3[(longlong)iVar46 + -1 + lVar50] =
                         *(byte *)((lVar16 + (lVar18 - uVar29)) - (longlong)iVar46);
                    lVar50 = (longlong)(iVar46 + iVar31);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a8dd94;
                  if (6 < (int)uVar1) {
                    pbVar59 = param_3 + lVar50;
                    lVar21 = lVar16 + lVar18;
                    if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar21) ||
                       ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar21))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a8e2ed:
                        uVar42 = 0;
                      }
                      else {
                        uVar41 = (ulonglong)pbVar59 & 0xf;
                        if (uVar41 != 0) {
                          uVar41 = 0x10 - uVar41;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8e2ed;
                        uVar53 = 0;
                        uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                        if (uVar41 != 0) {
                          do {
                            pbVar59[uVar53] = *(byte *)(uVar53 + lVar21);
                            uVar53 = uVar53 + 1;
                          } while (uVar53 < uVar41);
                        }
                        if ((lVar21 + uVar41 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                      }
                      for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                        pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                      }
                      lVar50 = (longlong)(int)(iVar27 + 4 + uVar38);
                      goto LAB_140a8dd94;
                    }
                  }
                  iVar46 = 1;
                  if (uVar43 != 0) {
                    uVar41 = 0;
                    do {
                      uVar42 = uVar41;
                      param_3[uVar42 * 2 + lVar50] = *(byte *)(lVar16 + lVar18 + uVar42 * 2);
                      param_3[uVar42 * 2 + lVar50 + 1] = *(byte *)(lVar16 + lVar18 + 1 + uVar42 * 2)
                      ;
                      uVar41 = uVar42 + 1;
                    } while (uVar41 < uVar48);
                    iVar56 = (int)uVar41 * 2 + 2 + uVar38;
                    iVar46 = (int)uVar42 + 2 + (int)uVar41;
                  }
                  if (iVar46 - 1U < uVar1) {
                    param_3[(longlong)iVar46 + -1 + lVar50] =
                         *(byte *)(lVar18 + iVar46 + -1 + lVar16);
                    lVar50 = (longlong)(iVar46 + iVar31);
                  }
                  else {
LAB_140a8dd91:
                    lVar50 = (longlong)iVar56;
                  }
                }
LAB_140a8dd94:
                uVar41 = lVar50 - lVar3;
                goto LAB_140a8d0a0;
              }
            }
            uVar41 = (ulonglong)uVar28;
            if (uVar13 == 0) {
              uVar38 = uVar28;
              if (uVar35 == 0) {
                while (-1 < (int)uVar38) {
                  uVar38 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar42 = (ulonglong)(int)uVar41;
                    uVar41 = uVar42;
                    do {
                      if ((int)uVar41 < 0) break;
                      lVar16 = (longlong)(int)uVar38;
                      uVar38 = uVar38 + 1;
                      uVar41 = (ulonglong)((int)uVar41 - 1);
                      param_3[uVar42 - lVar16] = param_3[lVar16 + uVar29 + 1 + uVar42];
                    } while (uVar38 < uVar26);
                  }
                  uVar38 = (uint)uVar41;
                }
                uVar42 = 0;
                uVar41 = uVar33;
                iVar56 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                iVar31 = iVar54;
                iVar46 = iVar54;
                if ((int)param_5 < 2) {
                  do {
                    iVar47 = iVar56 + iVar46;
                    pbVar8[uVar42 + lVar51] = param_3[iVar56];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar47) || (iVar47 < (int)param_5)) {
                      iVar56 = iVar46 + iVar31;
                      iVar46 = -iVar46;
                      iVar31 = -iVar31;
                      iVar47 = iVar47 - iVar56;
                    }
                    uVar42 = uVar42 + 1;
                    iVar56 = iVar47;
                  } while (uVar42 < uVar2);
                }
              }
              else {
                if (-1 < (int)uVar28) {
                  iVar56 = 1;
                  lVar16 = 0;
                  if (uVar60 != 0) {
                    lVar50 = lVar57 * uVar17 + param_1;
                    uVar41 = 0;
                    do {
                      uVar53 = uVar41;
                      pbVar8[lVar16 + -1] = *(byte *)(lVar50 + 1 + uVar53 * 2);
                      uVar41 = uVar53 + 1;
                      pbVar8[lVar16 + -2] = *(byte *)(lVar50 + 2 + uVar53 * 2);
                      lVar16 = lVar16 + -2;
                    } while (uVar41 < uVar63);
                    iVar56 = (int)uVar53 + 2 + (int)uVar41;
                  }
                  if (iVar56 - 1U < param_5) {
                    pbVar8[-(longlong)iVar56] = *(byte *)(param_1 + iVar56 + lVar57 * uVar17);
                  }
                }
LAB_140a8e052:
                uVar41 = uVar33;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar59 = param_3 + uVar42;
                    lVar16 = lVar57 * uVar17 + lVar18;
                    if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar16) ||
                       ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar16))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a8e2f4:
                        uVar42 = 0;
                      }
                      else {
                        uVar41 = (ulonglong)pbVar59 & 0xf;
                        if (uVar41 != 0) {
                          uVar41 = 0x10 - uVar41;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8e2f4;
                        uVar53 = 0;
                        uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                        if (uVar41 != 0) {
                          do {
                            pbVar59[uVar53] = *(byte *)(uVar53 + lVar16);
                            uVar53 = uVar53 + 1;
                          } while (uVar53 < uVar41);
                        }
                        if ((lVar16 + uVar41 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar16);
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar16));
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                      }
                      for (; uVar41 = uVar33, uVar42 < uVar2; uVar42 = uVar42 + 1) {
                        pbVar59[uVar42] = *(byte *)(uVar42 + lVar16);
                      }
                      goto LAB_140a8d0a0;
                    }
                  }
                  iVar56 = 1;
                  if (uVar43 != 0) {
                    lVar16 = lVar57 * uVar17 + lVar18;
                    uVar41 = 0;
                    do {
                      uVar53 = uVar41;
                      param_3[uVar53 * 2 + uVar42] = *(byte *)(lVar16 + uVar53 * 2);
                      param_3[uVar53 * 2 + uVar42 + 1] = *(byte *)(lVar16 + 1 + uVar53 * 2);
                      uVar41 = uVar53 + 1;
                    } while (uVar41 < uVar48);
                    iVar56 = (int)uVar53 + 2 + (int)uVar41;
                  }
                  uVar41 = uVar33;
                  if (iVar56 - 1U < uVar1) {
                    param_3[(longlong)iVar56 + -1 + uVar42] =
                         *(byte *)(lVar18 + iVar56 + -1 + lVar57 * uVar17);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar28) {
                do {
                  uVar38 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar56 = (int)uVar41;
                    do {
                      if ((int)uVar41 < 0) break;
                      lVar16 = (longlong)(int)uVar38;
                      uVar38 = uVar38 + 1;
                      uVar41 = (ulonglong)((int)uVar41 - 1);
                      param_3[iVar56 - lVar16] =
                           *(byte *)(((longlong)iVar56 + lVar57 * uVar17 + lVar62) - lVar16);
                    } while (uVar38 < uVar26);
                  }
                } while (-1 < (int)uVar41);
              }
              if (uVar35 != 0) goto LAB_140a8e052;
              uVar41 = uVar33;
              if (0 < (int)uVar1) {
                iVar56 = 1;
                lVar16 = 0;
                if (uVar43 != 0) {
                  lVar50 = lVar57 * uVar17 + lVar18;
                  uVar41 = 0;
                  do {
                    uVar53 = uVar41;
                    param_3[uVar53 * 2 + uVar42] = *(byte *)(lVar16 + -2 + lVar50);
                    lVar21 = lVar16 + -3;
                    lVar16 = lVar16 + -2;
                    param_3[uVar53 * 2 + uVar42 + 1] = *(byte *)(lVar21 + lVar50);
                    uVar41 = uVar53 + 1;
                  } while (uVar41 < uVar48);
                  iVar56 = (int)uVar53 + 2 + (int)uVar41;
                }
                uVar41 = uVar33;
                if (iVar56 - 1U < uVar1) {
                  param_3[(longlong)iVar56 + -1 + uVar42] =
                       *(byte *)((lVar18 - iVar56) + -1 + lVar57 * uVar17);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar38 = 0;
            uVar32 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar50 = lVar57 * uVar17;
                lVar16 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar50);
                if (((longlong)uVar33 <= lVar16) || ((longlong)uVar33 <= -lVar16)) {
                  if (((longlong)uVar33 < 0x10) || ((longlong)uVar33 < lVar5)) {
                    uVar41 = 0;
                  }
                  else {
                    uVar41 = 0;
                    lVar16 = lVar62 + lVar50;
                    if (uVar39 != 0) {
                      do {
                        param_3[uVar41] = *(byte *)(uVar41 + lVar16);
                        uVar41 = uVar41 + 1;
                      } while (uVar41 < uVar39);
                    }
                    uVar42 = uVar39;
                    uVar41 = uVar49;
                    if ((lVar16 + uVar39 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar42 + lVar16);
                        *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                        uVar42 = uVar42 + 0x10;
                      } while (uVar42 < uVar49);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar42 + lVar16));
                        *(undefined1 (*) [16])(param_3 + uVar42) = in_XMM0;
                        uVar42 = uVar42 + 0x10;
                      } while (uVar42 < uVar49);
                    }
                  }
                  uVar32 = param_5;
                  if (uVar41 < uVar33) {
                    do {
                      param_3[uVar41] = *(byte *)(uVar41 + lVar50 + lVar62);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar33);
                  }
                  goto LAB_140a8c174;
                }
              }
              uVar45 = 1;
              if (uVar60 != 0) {
                lVar16 = lVar57 * uVar17 + lVar62;
                uVar41 = 0;
                do {
                  uVar42 = uVar41;
                  param_3[uVar42 * 2] = *(byte *)(lVar16 + uVar42 * 2);
                  param_3[uVar42 * 2 + 1] = *(byte *)(lVar16 + 1 + uVar42 * 2);
                  uVar41 = uVar42 + 1;
                } while (uVar41 < uVar63);
                uVar38 = (int)uVar41 * 2;
                uVar45 = (int)uVar42 + 2 + (int)uVar41;
              }
              uVar32 = uVar38;
              if (uVar45 - 1 < param_5) {
                param_3[(longlong)(int)uVar45 + -1] =
                     *(byte *)(lVar62 + (int)uVar45 + -1 + lVar57 * uVar17);
                uVar32 = uVar45;
              }
            }
LAB_140a8c174:
            lVar16 = (longlong)(int)uVar32;
            if (0 < (int)(uint)param_6) {
              if (uVar37 < 7) {
LAB_140a8c2e0:
                iVar56 = 1;
                uVar38 = uVar32;
                if (uVar61 != 0) {
                  lVar50 = lVar57 * uVar17 + param_1;
                  uVar41 = 0;
                  do {
                    uVar42 = uVar41;
                    param_3[uVar42 * 2 + lVar16] = *(byte *)(lVar50 + uVar42 * 2);
                    param_3[uVar42 * 2 + lVar16 + 1] = *(byte *)(lVar50 + 1 + uVar42 * 2);
                    uVar41 = uVar42 + 1;
                  } while (uVar41 < uVar64);
                  uVar38 = uVar32 + (int)uVar41 * 2;
                  iVar56 = (int)uVar42 + 2 + (int)uVar41;
                }
                if (iVar56 - 1U < uVar37) {
                  uVar38 = uVar32 + iVar56;
                  param_3[(longlong)iVar56 + -1 + lVar16] =
                       *(byte *)(param_1 + iVar56 + -1 + lVar57 * uVar17);
                }
              }
              else {
                pbVar59 = param_3 + lVar16;
                lVar50 = lVar57 * uVar17 + param_1;
                if (((longlong)pbVar59 - lVar50 < (longlong)(ulonglong)uVar37) &&
                   (-((longlong)pbVar59 - lVar50) < (longlong)(ulonglong)uVar37))
                goto LAB_140a8c2e0;
                if (uVar37 < 0x10) {
LAB_140a8d597:
                  uVar42 = 0;
                }
                else {
                  uVar41 = (ulonglong)pbVar59 & 0xf;
                  if ((int)uVar41 != 0) {
                    uVar41 = (ulonglong)(0x10 - (int)uVar41);
                  }
                  iVar56 = (int)uVar41;
                  if (uVar37 < iVar56 + 0x10U) goto LAB_140a8d597;
                  iVar31 = uVar37 - (uVar37 - iVar56 & 0xf);
                  uVar42 = 0;
                  if (iVar56 != 0) {
                    do {
                      pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
                      uVar42 = uVar42 + 1;
                    } while (uVar42 < uVar41);
                  }
                  if ((lVar50 + uVar41 & 0xf) == 0) {
                    uVar42 = (ulonglong)iVar31;
                    do {
                      in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar50);
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                  else {
                    uVar42 = (ulonglong)iVar31;
                    do {
                      in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar50));
                      *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                      uVar41 = uVar41 + 0x10;
                    } while (uVar41 < uVar42);
                  }
                }
                for (; uVar42 < uVar40; uVar42 = uVar42 + 1) {
                  pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
                }
                uVar38 = uVar32 + uVar37;
              }
              lVar16 = (longlong)(int)uVar38;
              if (2 < (int)(uint)param_6) {
                lVar50 = lVar57 * uVar17;
                iVar56 = uVar38 + 2;
                param_3[lVar16] = *(byte *)(lVar18 + -2 + lVar50);
                param_3[lVar16 + 1] = *(byte *)(lVar18 + -1 + lVar50);
                lVar16 = (longlong)iVar56;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar59 = param_3 + lVar16;
                    lVar21 = lVar50 + lVar18;
                    if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar21) ||
                       ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar21))) {
                      if ((longlong)uVar2 < 0x10) {
LAB_140a8d59e:
                        uVar42 = 0;
                      }
                      else {
                        uVar41 = (ulonglong)pbVar59 & 0xf;
                        if (uVar41 != 0) {
                          uVar41 = 0x10 - uVar41;
                        }
                        if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8d59e;
                        uVar53 = 0;
                        uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                        if (uVar41 != 0) {
                          do {
                            pbVar59[uVar53] = *(byte *)(uVar53 + lVar21);
                            uVar53 = uVar53 + 1;
                          } while (uVar53 < uVar41);
                        }
                        if ((lVar21 + uVar41 & 0xf) == 0) {
                          do {
                            in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar21);
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                        else {
                          do {
                            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar21));
                            *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                            uVar41 = uVar41 + 0x10;
                          } while (uVar41 < uVar42);
                        }
                      }
                      for (; uVar42 < uVar2; uVar42 = uVar42 + 1) {
                        pbVar59[uVar42] = *(byte *)(uVar42 + lVar21);
                      }
                      lVar16 = (longlong)(int)(iVar27 + 4 + uVar38);
                      goto LAB_140a8c597;
                    }
                  }
                  iVar46 = 1;
                  iVar31 = iVar56;
                  if (uVar43 != 0) {
                    uVar41 = 0;
                    do {
                      uVar42 = uVar41;
                      param_3[uVar42 * 2 + lVar16] = *(byte *)(lVar50 + lVar18 + uVar42 * 2);
                      param_3[uVar42 * 2 + lVar16 + 1] = *(byte *)(lVar50 + lVar18 + 1 + uVar42 * 2)
                      ;
                      uVar41 = uVar42 + 1;
                    } while (uVar41 < uVar48);
                    iVar31 = (int)uVar41 * 2 + 2 + uVar38;
                    iVar46 = (int)uVar42 + 2 + (int)uVar41;
                  }
                  if (iVar46 - 1U < uVar1) {
                    param_3[(longlong)iVar46 + -1 + lVar16] =
                         *(byte *)(lVar18 + iVar46 + -1 + lVar50);
                    lVar16 = (longlong)(iVar46 + iVar56);
                  }
                  else {
                    lVar16 = (longlong)iVar31;
                  }
                }
LAB_140a8c597:
                uVar41 = lVar16 - lVar3;
                goto LAB_140a8d0a0;
              }
            }
            uVar41 = uVar33;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar59 = param_3 + lVar16;
                lVar50 = lVar57 * uVar17 + lVar18;
                if (((longlong)(2 - uVar33) <= (longlong)pbVar59 - lVar50) ||
                   ((longlong)(2 - uVar33) <= -((longlong)pbVar59 - lVar50))) {
                  if ((longlong)uVar2 < 0x10) {
LAB_140a8d5a5:
                    uVar42 = 0;
                  }
                  else {
                    uVar41 = (ulonglong)pbVar59 & 0xf;
                    if (uVar41 != 0) {
                      uVar41 = 0x10 - uVar41;
                    }
                    if ((longlong)uVar2 < (longlong)(uVar41 + 0x10)) goto LAB_140a8d5a5;
                    uVar53 = 0;
                    uVar42 = (ulonglong)(int)(iVar52 - (iVar52 - (int)uVar41 & 0xfU));
                    if (uVar41 != 0) {
                      do {
                        pbVar59[uVar53] = *(byte *)(uVar53 + lVar50);
                        uVar53 = uVar53 + 1;
                      } while (uVar53 < uVar41);
                    }
                    if ((lVar50 + uVar41 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar41 + lVar50);
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar41 + lVar50));
                        *(undefined1 (*) [16])(pbVar59 + uVar41) = in_XMM0;
                        uVar41 = uVar41 + 0x10;
                      } while (uVar41 < uVar42);
                    }
                  }
                  for (; uVar41 = uVar33, uVar42 < uVar2; uVar42 = uVar42 + 1) {
                    pbVar59[uVar42] = *(byte *)(uVar42 + lVar50);
                  }
                  goto LAB_140a8d0a0;
                }
              }
              iVar56 = 1;
              if (uVar43 != 0) {
                lVar50 = lVar57 * uVar17 + lVar18;
                uVar41 = 0;
                do {
                  uVar42 = uVar41;
                  param_3[uVar42 * 2 + lVar16] = *(byte *)(lVar50 + uVar42 * 2);
                  param_3[uVar42 * 2 + lVar16 + 1] = *(byte *)(lVar50 + 1 + uVar42 * 2);
                  uVar41 = uVar42 + 1;
                } while (uVar41 < uVar48);
                iVar56 = (int)uVar42 + 2 + (int)uVar41;
              }
              uVar41 = uVar33;
              if (iVar56 - 1U < uVar1) {
                param_3[(longlong)iVar56 + -1 + lVar16] =
                     *(byte *)(lVar18 + iVar56 + -1 + lVar57 * uVar17);
              }
            }
          }
          else {
            uVar41 = 0;
          }
        }
LAB_140a8d0a0:
        *psStack_50 = (ushort)*param_3 + (ushort)param_3[2];
        psStack_50[(int)uVar23] = (ushort)param_3[1] << 3;
        if (0 < (int)uVar36) {
          lVar21 = lVar57 * uVar17;
          lVar50 = lVar51 * 2 + -4;
          lVar16 = param_1 + lVar21;
          lVar22 = (longlong)(psStack_50 + 1) - lVar16;
          if ((lVar51 <= lVar22) || (lVar50 <= -lVar22)) {
            psVar7 = psStack_50 + (longlong)(int)uVar23 + 1;
            if (((lVar51 <= (longlong)psVar7 - lVar16) || (lVar50 <= -((longlong)psVar7 - lVar16)))
               && ((lVar22 = (longlong)psVar7 - (longlong)(psStack_50 + 1), lVar50 <= lVar22 ||
                   (lVar50 <= -lVar22)))) {
              if ((longlong)uVar4 < 0x10) {
LAB_140a8fe1e:
                uVar53 = 0;
              }
              else {
                uVar42 = (ulonglong)psVar7 & 0xf;
                if ((int)uVar42 != 0) {
                  if (((ulonglong)psVar7 & 1) != 0) goto LAB_140a8fe1e;
                  uVar42 = (ulonglong)(0x10U - (int)uVar42 >> 1);
                }
                if ((longlong)uVar4 < (longlong)(uVar42 + 0x10)) goto LAB_140a8fe1e;
                uVar53 = (ulonglong)(int)((int)uVar4 - ((int)uVar4 - (int)uVar42 & 0xfU));
                uVar58 = 0;
                if ((int)uVar42 != 0) {
                  do {
                    bVar11 = *(byte *)(uVar58 + 1 + lVar16);
                    psStack_50[uVar58 + 1] =
                         (ushort)*(byte *)(uVar58 + lVar16) + (ushort)*(byte *)(uVar58 + 2 + lVar16)
                    ;
                    psStack_50[(longlong)(int)uVar23 + uVar58 + 1] = (ushort)bVar11 << 3;
                    uVar58 = uVar58 + 1;
                  } while (uVar58 < uVar42);
                }
                if (((ulonglong)(psStack_50 + uVar42 + 1) & 0xf) == 0) {
                  do {
                    lVar50 = param_1 + lVar21;
                    auVar66 = *(undefined1 (*) [16])(uVar42 + 1 + lVar50);
                    auVar69 = pmovzxbw(in_XMM3,*(undefined8 *)(uVar42 + lVar50));
                    auVar68 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar42 + 2 + lVar50));
                    in_XMM3._0_2_ = auVar69._0_2_ + auVar68._0_2_;
                    in_XMM3._2_2_ = auVar69._2_2_ + auVar68._2_2_;
                    in_XMM3._4_2_ = auVar69._4_2_ + auVar68._4_2_;
                    in_XMM3._6_2_ = auVar69._6_2_ + auVar68._6_2_;
                    in_XMM3._8_2_ = auVar69._8_2_ + auVar68._8_2_;
                    in_XMM3._10_2_ = auVar69._10_2_ + auVar68._10_2_;
                    in_XMM3._12_2_ = auVar69._12_2_ + auVar68._12_2_;
                    in_XMM3._14_2_ = auVar69._14_2_ + auVar68._14_2_;
                    auVar68 = pmovzxbw(auVar68,auVar66);
                    auVar66 = auVar66 >> 0x40;
                    auVar69 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar42 + 8 + lVar50));
                    auVar66 = pmovzxbw(auVar66,auVar66);
                    in_XMM4 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar42 + 10 + lVar50));
                    in_XMM2 = psllw(auVar68,3);
                    in_XMM0 = psllw(auVar66,3);
                    *(undefined1 (*) [16])(psStack_50 + uVar42 + 1) = in_XMM3;
                    in_XMM5._0_2_ = auVar69._0_2_ + in_XMM4._0_2_;
                    in_XMM5._2_2_ = auVar69._2_2_ + in_XMM4._2_2_;
                    in_XMM5._4_2_ = auVar69._4_2_ + in_XMM4._4_2_;
                    in_XMM5._6_2_ = auVar69._6_2_ + in_XMM4._6_2_;
                    in_XMM5._8_2_ = auVar69._8_2_ + in_XMM4._8_2_;
                    in_XMM5._10_2_ = auVar69._10_2_ + in_XMM4._10_2_;
                    in_XMM5._12_2_ = auVar69._12_2_ + in_XMM4._12_2_;
                    in_XMM5._14_2_ = auVar69._14_2_ + in_XMM4._14_2_;
                    *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar23 + uVar42 + 1) =
                         in_XMM2;
                    *(undefined1 (*) [16])(psStack_50 + uVar42 + 9) = in_XMM5;
                    *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar23 + uVar42 + 9) =
                         in_XMM0;
                    uVar42 = uVar42 + 0x10;
                  } while (uVar42 < uVar53);
                }
                else {
                  do {
                    lVar50 = param_1 + lVar21;
                    auVar66 = *(undefined1 (*) [16])(uVar42 + 1 + lVar50);
                    auVar69 = pmovzxbw(in_XMM3,*(undefined8 *)(uVar42 + lVar50));
                    auVar68 = pmovzxbw(in_XMM2,*(undefined8 *)(uVar42 + 2 + lVar50));
                    in_XMM3._0_2_ = auVar69._0_2_ + auVar68._0_2_;
                    in_XMM3._2_2_ = auVar69._2_2_ + auVar68._2_2_;
                    in_XMM3._4_2_ = auVar69._4_2_ + auVar68._4_2_;
                    in_XMM3._6_2_ = auVar69._6_2_ + auVar68._6_2_;
                    in_XMM3._8_2_ = auVar69._8_2_ + auVar68._8_2_;
                    in_XMM3._10_2_ = auVar69._10_2_ + auVar68._10_2_;
                    in_XMM3._12_2_ = auVar69._12_2_ + auVar68._12_2_;
                    in_XMM3._14_2_ = auVar69._14_2_ + auVar68._14_2_;
                    auVar68 = pmovzxbw(auVar68,auVar66);
                    auVar66 = auVar66 >> 0x40;
                    auVar69 = pmovzxbw(in_XMM5,*(undefined8 *)(uVar42 + 8 + lVar50));
                    auVar66 = pmovzxbw(auVar66,auVar66);
                    in_XMM4 = pmovzxbw(in_XMM4,*(undefined8 *)(uVar42 + 10 + lVar50));
                    in_XMM2 = psllw(auVar68,3);
                    in_XMM0 = psllw(auVar66,3);
                    *(undefined1 (*) [16])(psStack_50 + uVar42 + 1) = in_XMM3;
                    in_XMM5._0_2_ = auVar69._0_2_ + in_XMM4._0_2_;
                    in_XMM5._2_2_ = auVar69._2_2_ + in_XMM4._2_2_;
                    in_XMM5._4_2_ = auVar69._4_2_ + in_XMM4._4_2_;
                    in_XMM5._6_2_ = auVar69._6_2_ + in_XMM4._6_2_;
                    in_XMM5._8_2_ = auVar69._8_2_ + in_XMM4._8_2_;
                    in_XMM5._10_2_ = auVar69._10_2_ + in_XMM4._10_2_;
                    in_XMM5._12_2_ = auVar69._12_2_ + in_XMM4._12_2_;
                    in_XMM5._14_2_ = auVar69._14_2_ + in_XMM4._14_2_;
                    *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar23 + uVar42 + 1) =
                         in_XMM2;
                    *(undefined1 (*) [16])(psStack_50 + uVar42 + 9) = in_XMM5;
                    *(undefined1 (*) [16])(psStack_50 + (longlong)(int)uVar23 + uVar42 + 9) =
                         in_XMM0;
                    uVar42 = uVar42 + 0x10;
                  } while (uVar42 < uVar53);
                }
              }
              for (; uVar53 < uVar4; uVar53 = uVar53 + 1) {
                bVar11 = *(byte *)(uVar53 + 1 + lVar16);
                psStack_50[uVar53 + 1] =
                     (ushort)*(byte *)(uVar53 + lVar16) + (ushort)*(byte *)(uVar53 + 2 + lVar16);
                psStack_50[(longlong)(int)uVar23 + uVar53 + 1] = (ushort)bVar11 << 3;
              }
              goto LAB_140a8d4e3;
            }
          }
          iVar56 = 1;
          uVar42 = 0;
          if (uVar36 >> 1 != 0) {
            do {
              uVar53 = uVar42;
              psStack_50[uVar53 * 2 + 1] =
                   (ushort)*(byte *)(lVar16 + uVar53 * 2) +
                   (ushort)*(byte *)(lVar16 + 2 + uVar53 * 2);
              psStack_50[(longlong)(int)uVar23 + uVar53 * 2 + 1] =
                   (ushort)*(byte *)(lVar16 + 1 + uVar53 * 2) << 3;
              psStack_50[uVar53 * 2 + 2] =
                   (ushort)*(byte *)(lVar16 + 1 + uVar53 * 2) +
                   (ushort)*(byte *)(lVar16 + 3 + uVar53 * 2);
              psStack_50[(longlong)(int)uVar23 + uVar53 * 2 + 2] =
                   (ushort)*(byte *)(lVar16 + 2 + uVar53 * 2) << 3;
              uVar42 = uVar53 + 1;
            } while (uVar42 < uVar36 >> 1);
            iVar56 = (int)uVar53 + 2 + (int)uVar42;
          }
          if (iVar56 - 1U < uVar36) {
            lVar50 = (longlong)iVar56;
            lVar16 = param_1 + lVar50;
            psStack_50[lVar50] =
                 (ushort)*(byte *)(lVar16 + -1 + lVar21) + (ushort)*(byte *)(lVar16 + 1 + lVar21);
            psStack_50[(int)uVar23 + lVar50] = (ushort)*(byte *)(lVar16 + lVar21) << 3;
          }
        }
LAB_140a8d4e3:
        if ((int)(uint)param_6 < 2) goto LAB_140a8d542;
        uVar17 = uVar17 + 1;
        lStack_78 = lStack_78 + lVar57;
        psStack_50[lVar51 + -1] = (ushort)param_3[uVar41] + (ushort)param_3[uVar41 + 2];
        psStack_58[lVar51 + -1] = (ushort)param_3[uVar41 + 1] << 3;
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar17) {
          return 0;
        }
        psStack_50 = *(short **)(param_2 + uVar17 * 8);
        psStack_58 = psStack_50 + (int)uVar23;
      } while( true );
    }
  }
  else {
    lVar18 = 0;
    switch(param_7 & 0xf) {
    case 1:
      lVar18 = 1;
      break;
    case 2:
      lVar18 = 2;
      break;
    case 3:
      lVar18 = 3;
      break;
    case 4:
      lVar18 = 4;
    }
    (*(code *)(&PTR_FUN_14308f1b8)[lVar18])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar57 - (int)(uint)param_6,(longlong)(int)(uVar23 * 2),
               param_8,param_7);
  }
  return 0;
LAB_140a8d542:
  uVar17 = uVar17 + 1;
  lStack_78 = lStack_78 + lVar57;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar17) {
    return 0;
  }
  goto LAB_140a8bee0;
}

