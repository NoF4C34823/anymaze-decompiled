
undefined8
FUN_140ac2700(longlong param_1,longlong param_2,byte *param_3,undefined8 param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  short *psVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  byte bVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  longlong lVar50;
  ulonglong uVar52;
  ulonglong uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  uint uVar60;
  uint uVar61;
  longlong lVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  ulonglong uVar66;
  longlong lVar67;
  ulonglong uVar68;
  int iVar69;
  ulonglong uVar70;
  uint uVar71;
  int iVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  undefined1 auVar75 [32];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined8 uVar78;
  undefined1 auVar79 [16];
  longlong lStack_80;
  short *psStack_60;
  short *psStack_58;
  longlong lStack_50;
  ulonglong uVar45;
  ulonglong uVar51;
  
  uVar30 = (uint)param_6 + 7 & 0xfffffff8;
  lVar57 = (longlong)(int)param_4;
  if ((int)((uint)param_6 - param_5) < 0x100) {
    if ((int)((uint)param_6 - param_5) < 0x10) {
      if (0 < param_6._4_4_) {
        lVar24 = (longlong)(int)param_5;
        uVar36 = 2;
        if ((uint)param_6 < 3) {
          uVar36 = (uint)param_6;
        }
        uVar73 = (ulonglong)(1 < (int)(uint)param_6);
        iVar69 = -param_5;
        uVar15 = param_5 + uVar36;
        uVar60 = param_7 & 0xf;
        uVar16 = param_7 & 0x40;
        lVar50 = -lVar24 + 4;
        uVar66 = (ulonglong)(int)(uint)param_6;
        uVar61 = param_5 & 0xffffffe0;
        pbVar3 = param_3 + lVar24;
        uVar71 = (uint)param_6 - (1 < (int)(uint)param_6);
        uVar47 = param_5 >> 1;
        uVar51 = (ulonglong)uVar47;
        uVar1 = iVar69 + 2;
        lVar58 = param_1 - lVar24;
        uVar74 = (ulonglong)param_3 & 0x1f;
        uVar13 = uVar1 >> 1;
        uVar12 = (ulonglong)uVar13;
        uVar19 = (ulonglong)pbVar3 & 0x1f;
        lVar14 = uVar66 - lVar24;
        uVar54 = uVar1 & 0xffffffe0;
        uVar55 = (uint)param_6 - 2;
        uVar48 = uVar36 & 0xffffffe0;
        uVar40 = param_7 & 0x80;
        lVar4 = param_1 + uVar66;
        iVar31 = ((int)(uint)param_6 < 2) - 1;
        lVar62 = (longlong)(int)uVar1;
        iVar22 = (int)uVar74;
        uVar52 = uVar74;
        if (iVar22 != 0) {
          uVar52 = (ulonglong)(0x20U - iVar22);
        }
        if ((int)uVar19 != 0) {
          uVar19 = (ulonglong)(0x20 - (int)uVar19);
        }
        uVar41 = uVar36 >> 1;
        uVar45 = (ulonglong)uVar41;
        if (iVar22 != 0) {
          uVar74 = (ulonglong)(0x20U - iVar22);
        }
        uVar42 = param_5 - 1;
        iVar49 = (int)uVar52;
        iVar22 = iVar49 + 0x20;
        uVar32 = 1;
        if ((param_7 & 0xc0) != 0) {
          uVar32 = uVar60;
        }
        iVar17 = (int)uVar19;
        uVar43 = 0xffffffff - (iVar69 + -1);
        uVar25 = uVar36 - (uVar36 - iVar17 & 0x1f);
        lVar46 = (longlong)(int)uVar43;
        uVar56 = uVar43 & 0xffffffe0;
        uVar26 = uVar43 - (uVar43 - iVar49 & 0x1f);
        iVar72 = (int)uVar74;
        iVar37 = iVar72 + 0x20;
        uVar44 = param_5 - (param_5 - iVar72 & 0x1f);
        uVar78 = CONCAT17(param_8,CONCAT16(param_8,CONCAT15(param_8,CONCAT14(param_8,CONCAT13(
                                                  param_8,CONCAT12(param_8,CONCAT11(param_8,param_8)
                                                                  ))))));
        lStack_80 = 0;
        uVar70 = 0;
        uVar68 = uVar66;
LAB_140ac2be0:
        psStack_58 = *(short **)(param_2 + uVar70 * 8);
        psStack_60 = psStack_58 + (int)uVar30;
        iVar63 = (int)uVar68;
        if (iVar63 == 1) {
          uVar38 = uVar32;
          if (uVar60 != 6) goto LAB_140ac2c58;
          goto LAB_140ac3562;
        }
        do {
          uVar38 = uVar60;
          if (uVar60 == 6) {
LAB_140ac3562:
            uVar38 = 0;
            if (uVar16 == 0) {
              if (0 < (int)param_5) {
                if ((int)param_5 < 0x20) {
LAB_140ac723c:
                  uVar65 = 0;
                }
                else {
                  if ((int)param_5 < 0x871) {
                    uVar39 = 0;
                    uVar65 = uVar61;
                  }
                  else {
                    if ((int)param_5 < iVar37) goto LAB_140ac723c;
                    uVar35 = 0;
                    uVar39 = uVar74;
                    uVar65 = uVar44;
                    if (iVar72 != 0) {
                      do {
                        param_3[uVar35] = param_8;
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar74);
                    }
                  }
                  do {
                    pbVar21 = param_3 + uVar39;
                    *pbVar21 = param_8;
                    pbVar21[1] = param_8;
                    pbVar21[2] = param_8;
                    pbVar21[3] = param_8;
                    pbVar21[4] = param_8;
                    pbVar21[5] = param_8;
                    pbVar21[6] = param_8;
                    pbVar21[7] = param_8;
                    pbVar21[8] = param_8;
                    pbVar21[9] = param_8;
                    pbVar21[10] = param_8;
                    pbVar21[0xb] = param_8;
                    pbVar21[0xc] = param_8;
                    pbVar21[0xd] = param_8;
                    pbVar21[0xe] = param_8;
                    pbVar21[0xf] = param_8;
                    pbVar21[0x10] = param_8;
                    pbVar21[0x11] = param_8;
                    pbVar21[0x12] = param_8;
                    pbVar21[0x13] = param_8;
                    pbVar21[0x14] = param_8;
                    pbVar21[0x15] = param_8;
                    pbVar21[0x16] = param_8;
                    pbVar21[0x17] = param_8;
                    pbVar21[0x18] = param_8;
                    pbVar21[0x19] = param_8;
                    pbVar21[0x1a] = param_8;
                    pbVar21[0x1b] = param_8;
                    pbVar21[0x1c] = param_8;
                    pbVar21[0x1d] = param_8;
                    pbVar21[0x1e] = param_8;
                    pbVar21[0x1f] = param_8;
                    uVar39 = uVar39 + 0x20;
                  } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                }
                uVar38 = uVar65;
                if (uVar65 + 1 <= param_5) {
                  lVar20 = (longlong)(int)uVar65;
                  uVar39 = lVar24 - lVar20;
                  if ((longlong)uVar39 < 8) {
                    uVar27 = 0;
                  }
                  else {
                    uVar35 = 0;
                    uVar27 = (uint)uVar39 & 0xfffffff8;
                    do {
                      *(undefined8 *)(param_3 + uVar35 + lVar20) = uVar78;
                      uVar35 = uVar35 + 8;
                    } while (uVar35 < (ulonglong)(longlong)(int)uVar27);
                    uVar38 = uVar65 + uVar27;
                  }
                  uVar35 = (ulonglong)(int)uVar27;
                  if (uVar35 < uVar39) {
                    do {
                      param_3[uVar35 + lVar20] = param_8;
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar39);
                    uVar38 = (int)uVar35 + uVar65;
                  }
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar20 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_80),
                  lVar20 < lVar24 && (-lVar20 < lVar24)))) {
                uVar65 = 1;
                if (uVar47 != 0) {
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2] = *(byte *)(lVar58 + lStack_80 + uVar35 * 2);
                    param_3[uVar35 * 2 + 1] = *(byte *)(lVar58 + lStack_80 + 1 + uVar35 * 2);
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar51);
                  uVar38 = (int)uVar39 * 2;
                  uVar65 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (uVar65 - 1 < param_5) {
                  param_3[(longlong)(int)uVar65 + -1] =
                       *(byte *)(lVar58 + (int)uVar65 + -1 + lStack_80);
                  uVar38 = uVar65;
                }
              }
              else {
                if ((int)param_5 < 0x20) {
LAB_140ac725b:
                  uVar65 = 0;
                }
                else {
                  if ((int)param_5 < 0xa71) {
                    uVar39 = 0;
                    uVar65 = uVar61;
                  }
                  else {
                    if ((int)param_5 < iVar37) goto LAB_140ac725b;
                    uVar35 = 0;
                    uVar39 = uVar74;
                    uVar65 = uVar44;
                    if (iVar72 != 0) {
                      do {
                        param_3[uVar35] = *(byte *)(uVar35 + lVar58 + lStack_80);
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar74);
                    }
                  }
                  do {
                    *(undefined1 (*) [32])(param_3 + uVar39) =
                         *(undefined1 (*) [32])(uVar39 + lVar58 + lStack_80);
                    uVar39 = uVar39 + 0x20;
                  } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                }
                uVar38 = param_5;
                if (uVar65 + 1 <= param_5) {
                  lVar20 = (longlong)(int)uVar65;
                  uVar39 = lVar24 - lVar20;
                  if ((longlong)uVar39 < 8) {
                    uVar35 = 0;
                  }
                  else {
                    uVar53 = 0;
                    uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                    do {
                      *(undefined8 *)(param_3 + uVar53 + lVar20) =
                           *(undefined8 *)(lVar58 + lStack_80 + lVar20 + uVar53);
                      uVar53 = uVar53 + 8;
                    } while (uVar53 < uVar35);
                  }
                  if (uVar35 < uVar39) {
                    do {
                      param_3[uVar35 + lVar20] = *(byte *)(uVar35 + lVar58 + lStack_80 + lVar20);
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar39);
                  }
                }
              }
            }
            if (iVar63 < 1) {
              lVar20 = (longlong)(int)uVar38;
              if (uVar40 != 0) goto LAB_140ac3d62;
LAB_140ac3bec:
              lStack_50 = lVar24;
              if ((int)uVar1 < 1) goto LAB_140ac3fe0;
LAB_140ac3bfa:
              iVar64 = (int)lVar20;
              if ((int)uVar1 < 0x20) {
LAB_140ac72a0:
                uVar65 = 0;
              }
              else {
                pbVar21 = param_3 + lVar20;
                if ((int)uVar1 < 0x871) {
                  uVar39 = 0;
                  uVar65 = uVar54;
                }
                else {
                  uVar39 = (ulonglong)pbVar21 & 0x1f;
                  if ((int)uVar39 != 0) {
                    uVar39 = (ulonglong)(0x20 - (int)uVar39);
                  }
                  iVar34 = (int)uVar39;
                  if ((int)uVar1 < iVar34 + 0x20) goto LAB_140ac72a0;
                  uVar65 = uVar1 - (uVar1 - iVar34 & 0x1f);
                  uVar35 = 0;
                  if (iVar34 != 0) {
                    do {
                      pbVar21[uVar35] = param_8;
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar39);
                  }
                }
                do {
                  pbVar5 = pbVar21 + uVar39;
                  *pbVar5 = param_8;
                  pbVar5[1] = param_8;
                  pbVar5[2] = param_8;
                  pbVar5[3] = param_8;
                  pbVar5[4] = param_8;
                  pbVar5[5] = param_8;
                  pbVar5[6] = param_8;
                  pbVar5[7] = param_8;
                  pbVar5[8] = param_8;
                  pbVar5[9] = param_8;
                  pbVar5[10] = param_8;
                  pbVar5[0xb] = param_8;
                  pbVar5[0xc] = param_8;
                  pbVar5[0xd] = param_8;
                  pbVar5[0xe] = param_8;
                  pbVar5[0xf] = param_8;
                  pbVar5[0x10] = param_8;
                  pbVar5[0x11] = param_8;
                  pbVar5[0x12] = param_8;
                  pbVar5[0x13] = param_8;
                  pbVar5[0x14] = param_8;
                  pbVar5[0x15] = param_8;
                  pbVar5[0x16] = param_8;
                  pbVar5[0x17] = param_8;
                  pbVar5[0x18] = param_8;
                  pbVar5[0x19] = param_8;
                  pbVar5[0x1a] = param_8;
                  pbVar5[0x1b] = param_8;
                  pbVar5[0x1c] = param_8;
                  pbVar5[0x1d] = param_8;
                  pbVar5[0x1e] = param_8;
                  pbVar5[0x1f] = param_8;
                  uVar39 = uVar39 + 0x20;
                } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                uVar38 = iVar64 + uVar65;
              }
              if (uVar65 + 1 <= uVar1) {
                lVar29 = (longlong)(int)uVar65;
                uVar39 = lVar62 - lVar29;
                if ((longlong)uVar39 < 8) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = (uint)uVar39 & 0xfffffff8;
                  uVar35 = 0;
                  do {
                    *(undefined8 *)(param_3 + uVar35 + lVar29 + lVar20) = uVar78;
                    uVar35 = uVar35 + 8;
                  } while (uVar35 < (ulonglong)(longlong)(int)uVar27);
                  uVar38 = iVar64 + uVar65 + uVar27;
                }
                uVar35 = (ulonglong)(int)uVar27;
                if (uVar35 < uVar39) {
                  do {
                    param_3[uVar35 + lVar29 + lVar20] = param_8;
                    uVar35 = uVar35 + 1;
                  } while (uVar35 < uVar39);
                  uVar38 = (int)uVar35 + iVar64 + uVar65;
                }
              }
LAB_140ac3fb1:
              lStack_50 = lVar24;
              if (iVar63 < 3) goto LAB_140ac3fe0;
            }
            else {
              if (uVar36 < 7) {
LAB_140ac3aed:
                iVar64 = 1;
                uVar65 = uVar38;
                if (uVar41 != 0) {
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2 + (longlong)(int)uVar38] =
                         *(byte *)(param_1 + lStack_80 + uVar35 * 2);
                    param_3[uVar35 * 2 + (longlong)(int)uVar38 + 1] =
                         *(byte *)(param_1 + lStack_80 + 1 + uVar35 * 2);
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar45);
                  uVar65 = uVar38 + (int)uVar39 * 2;
                  iVar64 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (iVar64 - 1U < uVar36) {
                  param_3[(longlong)iVar64 + -1 + (longlong)(int)uVar38] =
                       *(byte *)(param_1 + iVar64 + -1 + lStack_80);
                  uVar65 = iVar64 + uVar38;
                }
              }
              else {
                pbVar21 = param_3 + (int)uVar38;
                lVar20 = param_1 + lStack_80;
                if (((longlong)pbVar21 - lVar20 < (longlong)(ulonglong)uVar36) &&
                   (-((longlong)pbVar21 - lVar20) < (longlong)(ulonglong)uVar36))
                goto LAB_140ac3aed;
                if (uVar36 < 0x20) {
LAB_140ac7284:
                  uVar65 = 0;
                }
                else {
                  if (uVar36 < 0xa71) {
                    uVar39 = 0;
                    uVar65 = uVar48;
                  }
                  else {
                    uVar39 = (ulonglong)pbVar21 & 0x1f;
                    if ((int)uVar39 != 0) {
                      uVar39 = (ulonglong)(0x20 - (int)uVar39);
                    }
                    iVar64 = (int)uVar39;
                    if (uVar36 < iVar64 + 0x20U) goto LAB_140ac7284;
                    uVar65 = uVar36 - (uVar36 - iVar64 & 0x1f);
                    uVar35 = 0;
                    if (iVar64 != 0) {
                      do {
                        pbVar21[uVar35] = *(byte *)(uVar35 + lVar20);
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar39);
                    }
                  }
                  do {
                    *(undefined1 (*) [32])(pbVar21 + uVar39) =
                         *(undefined1 (*) [32])(uVar39 + lVar20);
                    uVar39 = uVar39 + 0x20;
                  } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                }
                if (uVar65 + 1 <= uVar36) {
                  uVar27 = uVar36 - uVar65;
                  if (uVar27 < 8) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = uVar27 & 0xfffffff8;
                    uVar18 = 0;
                    lVar29 = 0;
                    do {
                      iVar64 = uVar65 + uVar18;
                      uVar18 = uVar18 + 8;
                      *(undefined8 *)(param_3 + lVar29 + (int)(uVar65 + uVar38)) =
                           *(undefined8 *)(iVar64 + lVar20);
                      lVar29 = lVar29 + 8;
                    } while (uVar18 < uVar33);
                  }
                  lVar29 = (longlong)(int)uVar33;
                  lVar59 = (longlong)(int)(uVar65 + uVar33);
                  if (uVar33 < uVar27) {
                    do {
                      uVar33 = uVar33 + 1;
                      param_3[lVar29 + (int)(uVar65 + uVar38)] = *(byte *)(lVar59 + lVar20);
                      lVar29 = lVar29 + 1;
                      lVar59 = lVar59 + 1;
                    } while (uVar33 < uVar27);
                  }
                }
                uVar65 = uVar38 + uVar36;
              }
              uVar38 = uVar65;
              lVar20 = (longlong)(int)uVar38;
              if (iVar63 < 3) {
                if (uVar40 == 0) goto LAB_140ac3bec;
LAB_140ac3d62:
                lStack_50 = lVar24;
                if ((int)uVar1 < 1) goto LAB_140ac3fe0;
LAB_140ac3d70:
                iVar64 = (int)lVar20;
                if (6 < (int)uVar1) {
                  pbVar21 = param_3 + lVar20;
                  lVar29 = lVar4 + lStack_80;
                  if ((2 - lVar24 <= (longlong)pbVar21 - lVar29) ||
                     (2 - lVar24 <= -((longlong)pbVar21 - lVar29))) {
                    if ((int)uVar1 < 0x20) {
LAB_140ac72be:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar39 = 0;
                        uVar38 = uVar54;
                      }
                      else {
                        uVar39 = (ulonglong)pbVar21 & 0x1f;
                        if ((int)uVar39 != 0) {
                          uVar39 = (ulonglong)(0x20 - (int)uVar39);
                        }
                        iVar34 = (int)uVar39;
                        if ((int)uVar1 < iVar34 + 0x20) goto LAB_140ac72be;
                        uVar38 = uVar1 - (uVar1 - iVar34 & 0x1f);
                        uVar35 = 0;
                        if (iVar34 != 0) {
                          do {
                            pbVar21[uVar35] = *(byte *)(uVar35 + lVar29);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar39);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(pbVar21 + uVar39) =
                             *(undefined1 (*) [32])(uVar39 + lVar29);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar38;
                      uVar39 = lVar62 - lVar20;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        uVar53 = 0;
                        do {
                          *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                               *(undefined8 *)(lVar29 + lVar20 + uVar53);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar29 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    uVar38 = iVar64 + 2 + iVar69;
                    goto LAB_140ac3fb1;
                  }
                }
                iVar34 = 1;
                if (uVar13 != 0) {
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar4 + lStack_80 + uVar35 * 2);
                    param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar4 + lStack_80 + 1 + uVar35 * 2)
                    ;
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar12);
                  uVar38 = iVar64 + (int)uVar39 * 2;
                  iVar34 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (iVar34 - 1U < uVar1) {
                  param_3[(longlong)iVar34 + -1 + lVar20] =
                       *(byte *)(lVar4 + iVar34 + -1 + lStack_80);
                  uVar38 = iVar64 + iVar34;
                }
                goto LAB_140ac3fb1;
              }
              uVar38 = uVar38 + 2;
              param_3[lVar20] = *(byte *)(lStack_80 + -2 + lVar4);
              param_3[lVar20 + 1] = *(byte *)(lStack_80 + -1 + lVar4);
              lVar20 = (longlong)(int)uVar38;
              if (uVar40 == 0) {
                if (0 < (int)uVar1) goto LAB_140ac3bfa;
              }
              else if (0 < (int)uVar1) goto LAB_140ac3d70;
            }
            lStack_50 = (int)uVar38 - lVar50;
          }
          else {
LAB_140ac2c58:
            if (uVar38 == 1) {
              uVar65 = 0;
              uVar38 = 0;
              lVar20 = lVar57 * uVar70;
              bVar9 = *(byte *)(param_1 + lVar20);
              uVar27 = 0;
              if (uVar16 == 0) {
                if (0 < (int)param_5) {
                  if (0x1f < (int)param_5) {
                    if ((int)param_5 < 0x871) {
                      uVar39 = 0;
                      uVar65 = uVar61;
                    }
                    else {
                      if ((int)param_5 < iVar37) goto LAB_140ac68d8;
                      uVar35 = 0;
                      uVar39 = uVar74;
                      uVar65 = uVar44;
                      if (iVar72 != 0) {
                        do {
                          param_3[uVar35] = bVar9;
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar74);
                      }
                    }
                    auVar77[1] = bVar9;
                    auVar77[0] = bVar9;
                    auVar77[2] = bVar9;
                    auVar77[3] = bVar9;
                    auVar77[4] = bVar9;
                    auVar77[5] = bVar9;
                    auVar77[6] = bVar9;
                    auVar77[7] = bVar9;
                    auVar77[8] = bVar9;
                    auVar77[9] = bVar9;
                    auVar77[10] = bVar9;
                    auVar77[0xb] = bVar9;
                    auVar77[0xc] = bVar9;
                    auVar77[0xd] = bVar9;
                    auVar77[0xe] = bVar9;
                    auVar77[0xf] = bVar9;
                    auVar77[0x10] = bVar9;
                    auVar77[0x11] = bVar9;
                    auVar77[0x12] = bVar9;
                    auVar77[0x13] = bVar9;
                    auVar77[0x14] = bVar9;
                    auVar77[0x15] = bVar9;
                    auVar77[0x16] = bVar9;
                    auVar77[0x17] = bVar9;
                    auVar77[0x18] = bVar9;
                    auVar77[0x19] = bVar9;
                    auVar77[0x1a] = bVar9;
                    auVar77[0x1b] = bVar9;
                    auVar77[0x1c] = bVar9;
                    auVar77[0x1d] = bVar9;
                    auVar77[0x1e] = bVar9;
                    auVar77[0x1f] = bVar9;
                    do {
                      *(undefined1 (*) [32])(param_3 + uVar39) = auVar77;
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                  }
LAB_140ac68d8:
                  uVar27 = uVar65;
                  if (uVar65 + 1 <= param_5) {
                    lVar29 = (longlong)(int)uVar65;
                    uVar39 = lVar24 - lVar29;
                    if ((longlong)uVar39 < 8) {
                      uVar38 = 0;
                    }
                    else {
                      uVar38 = (uint)uVar39 & 0xfffffff8;
                      uVar35 = 0;
                      do {
                        *(ulonglong *)(param_3 + uVar35 + lVar29) =
                             CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(
                                                  bVar9,CONCAT12(bVar9,CONCAT11(bVar9,bVar9)))))));
                        uVar35 = uVar35 + 8;
                      } while (uVar35 < (ulonglong)(longlong)(int)uVar38);
                      uVar27 = uVar65 + uVar38;
                    }
                    uVar35 = (ulonglong)(int)uVar38;
                    if (uVar35 < uVar39) {
                      do {
                        param_3[uVar35 + lVar29] = bVar9;
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar39);
                      uVar27 = (int)uVar35 + uVar65;
                    }
                  }
                }
              }
              else if (0 < (int)param_5) {
                if (((int)param_5 < 7) ||
                   ((lVar29 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar20),
                    lVar29 < lVar24 && (-lVar29 < lVar24)))) {
                  uVar65 = 1;
                  if (uVar47 != 0) {
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2] = *(byte *)(lVar58 + lVar20 + uVar35 * 2);
                      param_3[uVar35 * 2 + 1] = *(byte *)(lVar58 + lVar20 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar51);
                    uVar38 = (int)uVar39 * 2;
                    uVar65 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  uVar27 = uVar38;
                  if (uVar65 - 1 < param_5) {
                    param_3[(longlong)(int)uVar65 + -1] =
                         *(byte *)(lVar58 + (int)uVar65 + -1 + lVar20);
                    uVar27 = uVar65;
                  }
                }
                else {
                  if ((int)param_5 < 0x20) {
LAB_140ac71b9:
                    uVar38 = 0;
                  }
                  else {
                    if ((int)param_5 < 0xa71) {
                      uVar39 = 0;
                      uVar38 = uVar61;
                    }
                    else {
                      if ((int)param_5 < iVar37) goto LAB_140ac71b9;
                      uVar35 = 0;
                      uVar39 = uVar74;
                      uVar38 = uVar44;
                      if (iVar72 != 0) {
                        do {
                          param_3[uVar35] = *(byte *)(uVar35 + lVar20 + lVar58);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar74);
                      }
                    }
                    do {
                      *(undefined1 (*) [32])(param_3 + uVar39) =
                           *(undefined1 (*) [32])(uVar39 + lVar20 + lVar58);
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                  }
                  uVar27 = param_5;
                  if (uVar38 + 1 <= param_5) {
                    lVar29 = (longlong)(int)uVar38;
                    uVar39 = lVar24 - lVar29;
                    if ((longlong)uVar39 < 8) {
                      uVar35 = 0;
                    }
                    else {
                      uVar53 = 0;
                      uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                      do {
                        *(undefined8 *)(param_3 + uVar53 + lVar29) =
                             *(undefined8 *)(lVar58 + lVar20 + lVar29 + uVar53);
                        uVar53 = uVar53 + 8;
                      } while (uVar53 < uVar35);
                    }
                    if (uVar35 < uVar39) {
                      do {
                        param_3[uVar35 + lVar29] = *(byte *)(uVar35 + lVar58 + lVar20 + lVar29);
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar39);
                    }
                  }
                }
              }
              if (0 < iVar63) {
                if (uVar36 < 7) {
LAB_140ac6d24:
                  iVar64 = 1;
                  uVar38 = uVar27;
                  if (uVar41 != 0) {
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2 + (longlong)(int)uVar27] =
                           *(byte *)(param_1 + lVar20 + uVar35 * 2);
                      param_3[uVar35 * 2 + (longlong)(int)uVar27 + 1] =
                           *(byte *)(param_1 + lVar20 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar45);
                    uVar38 = uVar27 + (int)uVar39 * 2;
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  if (iVar64 - 1U < uVar36) {
                    uVar38 = iVar64 + uVar27;
                    param_3[(longlong)iVar64 + -1 + (longlong)(int)uVar27] =
                         *(byte *)(param_1 + iVar64 + -1 + lVar20);
                  }
                }
                else {
                  pbVar21 = param_3 + (int)uVar27;
                  lVar29 = param_1 + lVar20;
                  if (((longlong)pbVar21 - lVar29 < (longlong)(ulonglong)uVar36) &&
                     (-((longlong)pbVar21 - lVar29) < (longlong)(ulonglong)uVar36))
                  goto LAB_140ac6d24;
                  if (uVar36 < 0x20) {
LAB_140ac71e1:
                    uVar38 = 0;
                  }
                  else {
                    if (uVar36 < 0xa71) {
                      uVar39 = 0;
                      uVar38 = uVar48;
                    }
                    else {
                      uVar39 = (ulonglong)pbVar21 & 0x1f;
                      if ((int)uVar39 != 0) {
                        uVar39 = (ulonglong)(0x20 - (int)uVar39);
                      }
                      iVar64 = (int)uVar39;
                      if (uVar36 < iVar64 + 0x20U) goto LAB_140ac71e1;
                      uVar38 = uVar36 - (uVar36 - iVar64 & 0x1f);
                      uVar35 = 0;
                      if (iVar64 != 0) {
                        do {
                          pbVar21[uVar35] = *(byte *)(uVar35 + lVar29);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    do {
                      *(undefined1 (*) [32])(pbVar21 + uVar39) =
                           *(undefined1 (*) [32])(uVar39 + lVar29);
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                  }
                  if (uVar38 + 1 <= uVar36) {
                    uVar65 = uVar36 - uVar38;
                    if (uVar65 < 8) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = uVar65 & 0xfffffff8;
                      uVar18 = 0;
                      lVar59 = 0;
                      do {
                        iVar64 = uVar18 + uVar38;
                        uVar18 = uVar18 + 8;
                        *(undefined8 *)(param_3 + lVar59 + (int)(uVar38 + uVar27)) =
                             *(undefined8 *)(iVar64 + lVar29);
                        lVar59 = lVar59 + 8;
                      } while (uVar18 < uVar33);
                    }
                    lVar59 = (longlong)(int)uVar33;
                    lVar67 = (longlong)(int)(uVar38 + uVar33);
                    if (uVar33 < uVar65) {
                      do {
                        uVar33 = uVar33 + 1;
                        param_3[lVar59 + (int)(uVar38 + uVar27)] = *(byte *)(lVar67 + lVar29);
                        lVar59 = lVar59 + 1;
                        lVar67 = lVar67 + 1;
                      } while (uVar33 < uVar65);
                    }
                  }
                  uVar38 = uVar27 + uVar36;
                }
                uVar27 = uVar38;
                if (2 < iVar63) {
                  uVar27 = uVar38 + 2;
                  param_3[(int)uVar38] = *(byte *)(lVar4 + -2 + lVar20);
                  param_3[(longlong)(int)uVar38 + 1] = *(byte *)(lVar4 + -1 + lVar20);
                }
              }
              lVar29 = (longlong)(int)uVar27;
              bVar9 = *(byte *)(lVar4 + -1 + lVar20);
              uVar38 = uVar27;
              if (uVar40 == 0) {
                if (0 < (int)uVar1) {
                  if ((int)uVar1 < 0x20) {
LAB_140ac7200:
                    uVar65 = 0;
                  }
                  else {
                    pbVar21 = param_3 + lVar29;
                    if ((int)uVar1 < 0x871) {
                      uVar39 = 0;
                      uVar65 = uVar54;
                    }
                    else {
                      uVar39 = (ulonglong)pbVar21 & 0x1f;
                      if ((int)uVar39 != 0) {
                        uVar39 = (ulonglong)(0x20 - (int)uVar39);
                      }
                      iVar64 = (int)uVar39;
                      if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac7200;
                      uVar35 = 0;
                      uVar65 = uVar1 - (uVar1 - iVar64 & 0x1f);
                      if (iVar64 != 0) {
                        do {
                          pbVar21[uVar35] = bVar9;
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    auVar75[1] = bVar9;
                    auVar75[0] = bVar9;
                    auVar75[2] = bVar9;
                    auVar75[3] = bVar9;
                    auVar75[4] = bVar9;
                    auVar75[5] = bVar9;
                    auVar75[6] = bVar9;
                    auVar75[7] = bVar9;
                    auVar75[8] = bVar9;
                    auVar75[9] = bVar9;
                    auVar75[10] = bVar9;
                    auVar75[0xb] = bVar9;
                    auVar75[0xc] = bVar9;
                    auVar75[0xd] = bVar9;
                    auVar75[0xe] = bVar9;
                    auVar75[0xf] = bVar9;
                    auVar75[0x10] = bVar9;
                    auVar75[0x11] = bVar9;
                    auVar75[0x12] = bVar9;
                    auVar75[0x13] = bVar9;
                    auVar75[0x14] = bVar9;
                    auVar75[0x15] = bVar9;
                    auVar75[0x16] = bVar9;
                    auVar75[0x17] = bVar9;
                    auVar75[0x18] = bVar9;
                    auVar75[0x19] = bVar9;
                    auVar75[0x1a] = bVar9;
                    auVar75[0x1b] = bVar9;
                    auVar75[0x1c] = bVar9;
                    auVar75[0x1d] = bVar9;
                    auVar75[0x1e] = bVar9;
                    auVar75[0x1f] = bVar9;
                    do {
                      *(undefined1 (*) [32])(pbVar21 + uVar39) = auVar75;
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                    uVar38 = uVar27 + uVar65;
                  }
                  if (uVar65 + 1 <= uVar1) {
                    lVar20 = (longlong)(int)uVar65;
                    uVar39 = lVar62 - lVar20;
                    if ((longlong)uVar39 < 8) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = (uint)uVar39 & 0xfffffff8;
                      uVar35 = 0;
                      do {
                        *(ulonglong *)(param_3 + uVar35 + lVar20 + lVar29) =
                             CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(
                                                  bVar9,CONCAT12(bVar9,CONCAT11(bVar9,bVar9)))))));
                        uVar35 = uVar35 + 8;
                      } while (uVar35 < (ulonglong)(longlong)(int)uVar33);
                      uVar38 = uVar27 + uVar65 + uVar33;
                    }
                    uVar35 = (ulonglong)(int)uVar33;
                    if (uVar35 < uVar39) {
                      do {
                        param_3[uVar35 + lVar20 + lVar29] = bVar9;
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar39);
                      lVar29 = (longlong)(int)((int)uVar35 + uVar27 + uVar65);
                      goto LAB_140ac7130;
                    }
                  }
LAB_140ac712d:
                  lVar29 = (longlong)(int)uVar38;
                }
              }
              else if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  lVar59 = lVar20 + lVar4;
                  pbVar21 = param_3 + lVar29;
                  if ((2 - lVar24 <= (longlong)pbVar21 - lVar59) ||
                     (2 - lVar24 <= -((longlong)pbVar21 - lVar59))) {
                    if ((int)uVar1 < 0x20) {
LAB_140ac721f:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar39 = 0;
                        uVar38 = uVar54;
                      }
                      else {
                        uVar39 = (ulonglong)pbVar21 & 0x1f;
                        if ((int)uVar39 != 0) {
                          uVar39 = (ulonglong)(0x20 - (int)uVar39);
                        }
                        iVar64 = (int)uVar39;
                        if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac721f;
                        uVar35 = 0;
                        uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                        if (iVar64 != 0) {
                          do {
                            pbVar21[uVar35] = *(byte *)(uVar35 + lVar59);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar39);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(pbVar21 + uVar39) =
                             *(undefined1 (*) [32])(uVar39 + lVar59);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar38;
                      uVar39 = lVar62 - lVar20;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar53 = 0;
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                               *(undefined8 *)(lVar59 + lVar20 + uVar53);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar59 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    lVar29 = (longlong)(int)(uVar27 + 2 + iVar69);
                    goto LAB_140ac7130;
                  }
                }
                iVar64 = 1;
                if (uVar13 != 0) {
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2 + lVar29] = *(byte *)(lVar4 + lVar20 + uVar35 * 2);
                    param_3[uVar35 * 2 + lVar29 + 1] = *(byte *)(lVar4 + lVar20 + 1 + uVar35 * 2);
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar12);
                  uVar38 = uVar27 + (int)uVar39 * 2;
                  iVar64 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (uVar1 <= iVar64 - 1U) goto LAB_140ac712d;
                param_3[(longlong)iVar64 + -1 + lVar29] = *(byte *)(lVar4 + iVar64 + -1 + lVar20);
                lVar29 = (longlong)(int)(iVar64 + uVar27);
              }
LAB_140ac7130:
              lStack_50 = lVar29 - lVar50;
              if (iVar63 < 3) {
                lStack_50 = lVar24;
              }
            }
            else if (uVar38 == 2) {
              lVar20 = lVar24;
              if (0 < iVar63) {
                if (uVar36 < 7) {
LAB_140ac54e0:
                  iVar64 = 1;
                  uVar38 = param_5;
                  if (uVar41 != 0) {
                    lVar20 = lVar57 * uVar70 + param_1;
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      pbVar3[uVar35 * 2] = *(byte *)(lVar20 + uVar35 * 2);
                      pbVar3[uVar35 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar45);
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    uVar38 = param_5 + (int)uVar39 * 2;
                  }
                  if (iVar64 - 1U < uVar36) {
                    pbVar3[(longlong)iVar64 + -1] =
                         *(byte *)(param_1 + iVar64 + -1 + lVar57 * uVar70);
                    uVar38 = param_5 + iVar64;
                  }
                }
                else {
                  lVar20 = lVar57 * uVar70 + param_1;
                  if (((longlong)pbVar3 - lVar20 < (longlong)(ulonglong)uVar36) &&
                     (-((longlong)pbVar3 - lVar20) < (longlong)(ulonglong)uVar36))
                  goto LAB_140ac54e0;
                  if (uVar36 < 0x20) {
LAB_140ac66df:
                    uVar65 = 0;
                  }
                  else {
                    if (uVar36 < 0xa71) {
                      uVar39 = 0;
                      uVar65 = uVar48;
                    }
                    else {
                      if (uVar36 < iVar17 + 0x20U) goto LAB_140ac66df;
                      uVar35 = 0;
                      uVar39 = uVar19;
                      uVar65 = uVar25;
                      if (iVar17 != 0) {
                        do {
                          pbVar3[uVar35] = *(byte *)(uVar35 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar19);
                      }
                    }
                    do {
                      *(undefined1 (*) [32])(pbVar3 + uVar39) =
                           *(undefined1 (*) [32])(uVar39 + lVar20);
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                  }
                  uVar38 = uVar15;
                  if (uVar65 + 1 <= uVar36) {
                    uVar27 = uVar36 - uVar65;
                    if (uVar27 < 8) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = uVar27 & 0xfffffff8;
                      uVar18 = 0;
                      lVar29 = 0;
                      do {
                        iVar64 = uVar18 + uVar65;
                        uVar18 = uVar18 + 8;
                        *(undefined8 *)(param_3 + lVar29 + (int)(param_5 + uVar65)) =
                             *(undefined8 *)(iVar64 + lVar20);
                        lVar29 = lVar29 + 8;
                      } while (uVar18 < uVar33);
                    }
                    lVar29 = (longlong)(int)uVar33;
                    lVar59 = (longlong)(int)(uVar65 + uVar33);
                    if (uVar33 < uVar27) {
                      do {
                        uVar33 = uVar33 + 1;
                        param_3[lVar29 + (int)(uVar65 + param_5)] = *(byte *)(lVar59 + lVar20);
                        lVar29 = lVar29 + 1;
                        lVar59 = lVar59 + 1;
                      } while (uVar33 < uVar27);
                    }
                  }
                }
                lVar20 = (longlong)(int)uVar38;
                if (2 < iVar63) {
                  lVar29 = lVar57 * uVar70;
                  if (uVar16 == 0) {
                    if (-1 < (int)uVar42) {
                      if (6 < (int)param_5) {
                        lVar59 = lVar29 + -1 + lVar4;
                        pbVar21 = param_3 + ((lVar24 + -1) - lVar59);
                        lVar59 = lVar59 + 1;
                        if ((lVar24 < (longlong)pbVar21) ||
                           ((byte *)-lVar24 != pbVar21 && lVar24 <= -(longlong)pbVar21)) {
                          if ((int)uVar43 < 0x20) {
LAB_140ac66fb:
                            uVar65 = 0;
                          }
                          else {
                            if ((int)uVar43 < 0xa71) {
                              uVar39 = 0;
                              lVar67 = lVar59 - lVar24;
                              uVar65 = uVar56;
                            }
                            else {
                              if ((int)uVar43 < iVar22) goto LAB_140ac66fb;
                              uVar35 = 0;
                              lVar67 = lVar59 - lVar24;
                              uVar39 = uVar52;
                              uVar65 = uVar26;
                              if (iVar49 != 0) {
                                do {
                                  param_3[uVar35] = *(byte *)(uVar35 + lVar67);
                                  uVar35 = uVar35 + 1;
                                } while (uVar35 < uVar52);
                              }
                            }
                            do {
                              *(undefined1 (*) [32])(param_3 + uVar39) =
                                   *(undefined1 (*) [32])(uVar39 + lVar67);
                              uVar39 = uVar39 + 0x20;
                            } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                          }
                          if (uVar65 + 1 <= uVar43) {
                            lVar67 = (longlong)(int)uVar65;
                            uVar39 = lVar46 - lVar67;
                            if ((longlong)uVar39 < 8) {
                              uVar35 = 0;
                            }
                            else {
                              uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                              uVar53 = 0;
                              do {
                                *(undefined8 *)(param_3 + uVar53 + lVar67) =
                                     *(undefined8 *)((lVar59 - lVar24) + lVar67 + uVar53);
                                uVar53 = uVar53 + 8;
                              } while (uVar53 < uVar35);
                            }
                            if (uVar35 < uVar39) {
                              do {
                                param_3[uVar35 + lVar67] =
                                     *(byte *)(uVar35 + (lVar59 - lVar24) + lVar67);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          goto LAB_140ac5a35;
                        }
                      }
                      iVar64 = 1;
                      lVar59 = 0;
                      if (uVar47 != 0) {
                        uVar39 = 0;
                        do {
                          uVar35 = uVar39;
                          uVar39 = uVar35 + 1;
                          pbVar3[lVar59 + -1] = *(byte *)(lVar59 + -1 + lVar4 + lVar29);
                          pbVar3[lVar59 + -2] = *(byte *)(lVar59 + -2 + lVar4 + lVar29);
                          lVar59 = lVar59 + -2;
                        } while (uVar39 < uVar51);
                        iVar64 = (int)uVar35 + 2 + (int)uVar39;
                      }
                      if (iVar64 - 1U < param_5) {
                        pbVar3[-(longlong)iVar64] = *(byte *)((lVar29 + lVar4) - (longlong)iVar64);
                      }
                    }
                  }
                  else if (-1 < (int)uVar42) {
                    if (6 < (int)param_5) {
                      pbVar21 = param_3 + ((lVar24 + -1) - (param_1 + -1 + lVar29));
                      lVar59 = param_1 + lVar29;
                      if ((lVar24 < (longlong)pbVar21) ||
                         ((byte *)-lVar24 != pbVar21 && lVar24 <= -(longlong)pbVar21)) {
                        if ((int)uVar43 < 0x20) {
LAB_140ac6723:
                          uVar65 = 0;
                        }
                        else {
                          if ((int)uVar43 < 0xa71) {
                            uVar39 = 0;
                            lVar67 = lVar59 - lVar24;
                            uVar65 = uVar56;
                          }
                          else {
                            if ((int)uVar43 < iVar22) goto LAB_140ac6723;
                            uVar35 = 0;
                            lVar67 = lVar59 - lVar24;
                            uVar39 = uVar52;
                            uVar65 = uVar26;
                            if (iVar49 != 0) {
                              do {
                                param_3[uVar35] = *(byte *)(uVar35 + lVar67);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar52);
                            }
                          }
                          do {
                            *(undefined1 (*) [32])(param_3 + uVar39) =
                                 *(undefined1 (*) [32])(uVar39 + lVar67);
                            uVar39 = uVar39 + 0x20;
                          } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                        }
                        if (uVar65 + 1 <= uVar43) {
                          lVar67 = (longlong)(int)uVar65;
                          uVar39 = lVar46 - lVar67;
                          if ((longlong)uVar39 < 8) {
                            uVar35 = 0;
                          }
                          else {
                            uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                            uVar53 = 0;
                            do {
                              *(undefined8 *)(param_3 + uVar53 + lVar67) =
                                   *(undefined8 *)((lVar59 - lVar24) + lVar67 + uVar53);
                              uVar53 = uVar53 + 8;
                            } while (uVar53 < uVar35);
                          }
                          if (uVar35 < uVar39) {
                            do {
                              param_3[uVar35 + lVar67] =
                                   *(byte *)(uVar35 + (lVar59 - lVar24) + lVar67);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        goto LAB_140ac5a35;
                      }
                    }
                    iVar64 = 1;
                    lVar59 = 0;
                    if (uVar47 != 0) {
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        uVar39 = uVar35 + 1;
                        pbVar3[lVar59 + -1] = *(byte *)(lVar59 + -1 + param_1 + lVar29);
                        pbVar3[lVar59 + -2] = *(byte *)(lVar59 + -2 + param_1 + lVar29);
                        lVar59 = lVar59 + -2;
                      } while (uVar39 < uVar51);
                      iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (iVar64 - 1U < param_5) {
                      pbVar3[-(longlong)iVar64] = *(byte *)((param_1 + lVar29) - (longlong)iVar64);
                    }
                  }
LAB_140ac5a35:
                  param_3[lVar20] = *(byte *)(lVar4 + -2 + lVar29);
                  param_3[lVar20 + 1] = *(byte *)(lVar4 + -1 + lVar29);
                  iVar34 = uVar38 + 2;
                  lVar20 = (longlong)iVar34;
                  iVar64 = iVar34;
                  if (uVar40 == 0) {
                    if (0 < (int)uVar1) {
                      if (6 < (int)uVar1) {
                        pbVar21 = param_3 + lVar20;
                        lVar59 = param_1 + lVar29;
                        if ((2 - lVar24 <= (longlong)pbVar21 - lVar59) ||
                           (2 - lVar24 <= -((longlong)pbVar21 - lVar59))) {
                          if ((int)uVar1 < 0x20) {
LAB_140ac674c:
                            uVar65 = 0;
                          }
                          else {
                            if ((int)uVar1 < 0xa71) {
                              uVar39 = 0;
                              uVar65 = uVar54;
                            }
                            else {
                              uVar39 = (ulonglong)pbVar21 & 0x1f;
                              if ((int)uVar39 != 0) {
                                uVar39 = (ulonglong)(0x20 - (int)uVar39);
                              }
                              iVar64 = (int)uVar39;
                              if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac674c;
                              uVar35 = 0;
                              uVar65 = uVar1 - (uVar1 - iVar64 & 0x1f);
                              if (iVar64 != 0) {
                                do {
                                  pbVar21[uVar35] = *(byte *)(uVar35 + lVar59);
                                  uVar35 = uVar35 + 1;
                                } while (uVar35 < uVar39);
                              }
                            }
                            do {
                              *(undefined1 (*) [32])(pbVar21 + uVar39) =
                                   *(undefined1 (*) [32])(uVar39 + lVar59);
                              uVar39 = uVar39 + 0x20;
                            } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                          }
                          if (uVar65 + 1 <= uVar1) {
                            lVar20 = (longlong)(int)uVar65;
                            uVar39 = lVar62 - lVar20;
                            if ((longlong)uVar39 < 8) {
                              uVar35 = 0;
                            }
                            else {
                              uVar53 = 0;
                              uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                              do {
                                *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                     *(undefined8 *)(lVar59 + lVar20 + uVar53);
                                uVar53 = uVar53 + 8;
                              } while (uVar53 < uVar35);
                            }
                            if (uVar35 < uVar39) {
                              do {
                                pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar59 + lVar20);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          lVar20 = (longlong)(int)(iVar69 + 4 + uVar38);
                          goto LAB_140ac5e35;
                        }
                      }
                      iVar28 = 1;
                      if (uVar13 != 0) {
                        uVar39 = 0;
                        do {
                          uVar35 = uVar39;
                          param_3[uVar35 * 2 + lVar20] = *(byte *)(param_1 + lVar29 + uVar35 * 2);
                          param_3[uVar35 * 2 + lVar20 + 1] =
                               *(byte *)(param_1 + lVar29 + 1 + uVar35 * 2);
                          uVar39 = uVar35 + 1;
                        } while (uVar39 < uVar12);
                        iVar64 = (int)uVar39 * 2 + 2 + uVar38;
                        iVar28 = (int)uVar35 + 2 + (int)uVar39;
                      }
                      if (iVar28 - 1U < uVar1) {
                        param_3[(longlong)iVar28 + -1 + lVar20] =
                             *(byte *)(param_1 + iVar28 + -1 + lVar29);
                        lVar20 = (longlong)(iVar28 + iVar34);
                      }
                      else {
LAB_140ac5e32:
                        lVar20 = (longlong)iVar64;
                      }
                    }
                  }
                  else if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar21 = param_3 + lVar20;
                      lVar59 = lVar4 + lVar29;
                      if ((2 - lVar24 <= (longlong)pbVar21 - lVar59) ||
                         (2 - lVar24 <= -((longlong)pbVar21 - lVar59))) {
                        if ((int)uVar1 < 0x20) {
LAB_140ac676a:
                          uVar65 = 0;
                        }
                        else {
                          if ((int)uVar1 < 0xa71) {
                            uVar39 = 0;
                            uVar65 = uVar54;
                          }
                          else {
                            uVar39 = (ulonglong)pbVar21 & 0x1f;
                            if ((int)uVar39 != 0) {
                              uVar39 = (ulonglong)(0x20 - (int)uVar39);
                            }
                            iVar64 = (int)uVar39;
                            if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac676a;
                            uVar35 = 0;
                            uVar65 = uVar1 - (uVar1 - iVar64 & 0x1f);
                            if (iVar64 != 0) {
                              do {
                                pbVar21[uVar35] = *(byte *)(uVar35 + lVar59);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          do {
                            *(undefined1 (*) [32])(pbVar21 + uVar39) =
                                 *(undefined1 (*) [32])(uVar39 + lVar59);
                            uVar39 = uVar39 + 0x20;
                          } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                        }
                        if (uVar65 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar65;
                          uVar39 = lVar62 - lVar20;
                          if ((longlong)uVar39 < 8) {
                            uVar35 = 0;
                          }
                          else {
                            uVar53 = 0;
                            uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                            do {
                              *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                   *(undefined8 *)(lVar59 + lVar20 + uVar53);
                              uVar53 = uVar53 + 8;
                            } while (uVar53 < uVar35);
                          }
                          if (uVar35 < uVar39) {
                            do {
                              pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar59 + lVar20);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        lVar20 = (longlong)(int)(iVar69 + 4 + uVar38);
                        goto LAB_140ac5e35;
                      }
                    }
                    iVar28 = 1;
                    if (uVar13 != 0) {
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + lVar4 + uVar35 * 2);
                        param_3[uVar35 * 2 + lVar20 + 1] =
                             *(byte *)(lVar29 + lVar4 + 1 + uVar35 * 2);
                        uVar39 = uVar35 + 1;
                      } while (uVar39 < uVar12);
                      iVar64 = (int)uVar39 * 2 + 2 + uVar38;
                      iVar28 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (uVar1 <= iVar28 - 1U) goto LAB_140ac5e32;
                    param_3[(longlong)iVar28 + -1 + lVar20] =
                         *(byte *)(lVar4 + iVar28 + -1 + lVar29);
                    lVar20 = (longlong)(iVar28 + iVar34);
                  }
LAB_140ac5e35:
                  lStack_50 = lVar20 - lVar50;
                  goto LAB_140ac3fe0;
                }
              }
              if (uVar16 == 0) {
                if (-1 < (int)uVar42) {
                  if (((int)param_5 < 7) ||
                     ((pbVar21 = param_3 + ((lVar24 + -1) - (longlong)(pbVar3 + (uVar66 - 1))),
                      (longlong)pbVar21 <= lVar24 &&
                      ((byte *)-lVar24 == pbVar21 || -(longlong)pbVar21 < lVar24)))) {
                    iVar64 = 1;
                    lVar29 = 0;
                    uVar39 = 0;
                    if (uVar47 != 0) {
                      do {
                        uVar35 = uVar39;
                        uVar39 = uVar35 + 1;
                        pbVar3[lVar29 + -1] = pbVar3[lVar29 + -1 + uVar66];
                        pbVar3[lVar29 + -2] = pbVar3[lVar29 + -2 + uVar66];
                        lVar29 = lVar29 + -2;
                      } while (uVar39 < uVar51);
                      iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (iVar64 - 1U < param_5) {
                      pbVar3[-(longlong)iVar64] = pbVar3[uVar66 - (longlong)iVar64];
                    }
                  }
                  else {
                    if ((int)uVar43 < 0x20) {
LAB_140ac6786:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar43 < 0xa71) {
                        uVar39 = 0;
                        uVar38 = uVar56;
                      }
                      else {
                        if ((int)uVar43 < iVar22) goto LAB_140ac6786;
                        uVar35 = 0;
                        uVar39 = uVar52;
                        uVar38 = uVar26;
                        if (iVar49 != 0) {
                          do {
                            param_3[uVar35] = pbVar3[uVar35 + lVar14];
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar52);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(param_3 + uVar39) =
                             *(undefined1 (*) [32])(pbVar3 + uVar39 + lVar14);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar43) {
                      lVar29 = (longlong)(int)uVar38;
                      uVar39 = lVar46 - lVar29;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar53 = 0;
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        do {
                          *(undefined8 *)(param_3 + uVar53 + lVar29) =
                               *(undefined8 *)(pbVar3 + uVar53 + lVar29 + lVar14);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          param_3[uVar35 + lVar29] = pbVar3[uVar35 + lVar29 + lVar14];
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                  }
                }
              }
              else if (-1 < (int)uVar42) {
                if (6 < (int)param_5) {
                  lVar29 = param_1 + lVar57 * uVar70;
                  pbVar21 = param_3 + ((lVar24 + -1) - (lVar29 + -1));
                  if ((lVar24 < (longlong)pbVar21) ||
                     ((byte *)-lVar24 != pbVar21 && lVar24 <= -(longlong)pbVar21)) {
                    if ((int)uVar43 < 0x20) {
LAB_140ac67a3:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar43 < 0xa71) {
                        uVar39 = 0;
                        lVar59 = lVar29 - lVar24;
                        uVar38 = uVar56;
                      }
                      else {
                        if ((int)uVar43 < iVar22) goto LAB_140ac67a3;
                        uVar35 = 0;
                        lVar59 = lVar29 - lVar24;
                        uVar39 = uVar52;
                        uVar38 = uVar26;
                        if (iVar49 != 0) {
                          do {
                            param_3[uVar35] = *(byte *)(uVar35 + lVar59);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar52);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(param_3 + uVar39) =
                             *(undefined1 (*) [32])(uVar39 + lVar59);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar43) {
                      lVar59 = (longlong)(int)uVar38;
                      uVar39 = lVar46 - lVar59;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        uVar53 = 0;
                        do {
                          *(undefined8 *)(param_3 + uVar53 + lVar59) =
                               *(undefined8 *)((lVar29 - lVar24) + lVar59 + uVar53);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          param_3[uVar35 + lVar59] = *(byte *)(uVar35 + (lVar29 - lVar24) + lVar59);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    goto LAB_140ac62bf;
                  }
                }
                iVar64 = 1;
                lVar29 = 0;
                if (uVar47 != 0) {
                  lVar59 = lVar57 * uVar70 + param_1;
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    uVar39 = uVar35 + 1;
                    pbVar3[lVar29 + -1] = *(byte *)(lVar29 + -1 + lVar59);
                    pbVar3[lVar29 + -2] = *(byte *)(lVar29 + -2 + lVar59);
                    lVar29 = lVar29 + -2;
                  } while (uVar39 < uVar51);
                  iVar64 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (iVar64 - 1U < param_5) {
                  pbVar3[-(longlong)iVar64] = *(byte *)((param_1 - iVar64) + lVar57 * uVar70);
                }
              }
LAB_140ac62bf:
              if (uVar40 == 0) {
                lStack_50 = lVar24;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar21 = param_3 + (lVar20 - uVar66);
                    pbVar5 = param_3 + lVar20;
                    if ((2 - lVar24 <= (longlong)pbVar5 - (longlong)pbVar21) ||
                       (2 - lVar24 <= -((longlong)pbVar5 - (longlong)pbVar21))) {
                      if ((int)uVar1 < 0x20) {
LAB_140ac67cc:
                        uVar38 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar39 = 0;
                          uVar38 = uVar54;
                        }
                        else {
                          uVar39 = (ulonglong)pbVar5 & 0x1f;
                          if ((int)uVar39 != 0) {
                            uVar39 = (ulonglong)(0x20 - (int)uVar39);
                          }
                          iVar64 = (int)uVar39;
                          if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac67cc;
                          uVar35 = 0;
                          uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                          if (iVar64 != 0) {
                            do {
                              pbVar5[uVar35] = pbVar21[uVar35];
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        do {
                          *(undefined1 (*) [32])(pbVar5 + uVar39) =
                               *(undefined1 (*) [32])(pbVar21 + uVar39);
                          uVar39 = uVar39 + 0x20;
                        } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                      }
                      if (uVar38 + 1 <= uVar1) {
                        lVar20 = (longlong)(int)uVar38;
                        uVar39 = lVar62 - lVar20;
                        if ((longlong)uVar39 < 8) {
                          uVar35 = 0;
                        }
                        else {
                          uVar53 = 0;
                          uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar5 + uVar53 + lVar20) =
                                 *(undefined8 *)(pbVar21 + uVar53 + lVar20);
                            uVar53 = uVar53 + 8;
                          } while (uVar53 < uVar35);
                        }
                        for (; uVar35 < uVar39; uVar35 = uVar35 + 1) {
                          pbVar5[uVar35 + lVar20] = pbVar21[uVar35 + lVar20];
                        }
                      }
                      goto LAB_140ac3fe0;
                    }
                  }
                  iVar64 = 1;
                  if (uVar13 != 0) {
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2 + lVar20] = param_3[uVar35 * 2 + (lVar20 - uVar66)];
                      param_3[uVar35 * 2 + lVar20 + 1] = param_3[uVar35 * 2 + (lVar20 - uVar66) + 1]
                      ;
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar12);
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  if (iVar64 - 1U < uVar1) {
                    param_3[(longlong)iVar64 + -1 + lVar20] =
                         param_3[(longlong)iVar64 + -1 + (lVar20 - uVar66)];
                  }
                }
              }
              else {
                lStack_50 = lVar24;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar21 = param_3 + lVar20;
                    lVar29 = lVar57 * uVar70 + lVar4;
                    if ((2 - lVar24 <= (longlong)pbVar21 - lVar29) ||
                       (2 - lVar24 <= -((longlong)pbVar21 - lVar29))) {
                      if ((int)uVar1 < 0x20) {
LAB_140ac67eb:
                        uVar38 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar39 = 0;
                          uVar38 = uVar54;
                        }
                        else {
                          uVar39 = (ulonglong)pbVar21 & 0x1f;
                          if ((int)uVar39 != 0) {
                            uVar39 = (ulonglong)(0x20 - (int)uVar39);
                          }
                          iVar64 = (int)uVar39;
                          if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac67eb;
                          uVar35 = 0;
                          uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                          if (iVar64 != 0) {
                            do {
                              pbVar21[uVar35] = *(byte *)(uVar35 + lVar29);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        do {
                          *(undefined1 (*) [32])(pbVar21 + uVar39) =
                               *(undefined1 (*) [32])(uVar39 + lVar29);
                          uVar39 = uVar39 + 0x20;
                        } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                      }
                      if (uVar38 + 1 <= uVar1) {
                        lVar20 = (longlong)(int)uVar38;
                        uVar39 = lVar62 - lVar20;
                        if ((longlong)uVar39 < 8) {
                          uVar35 = 0;
                        }
                        else {
                          uVar53 = 0;
                          uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                 *(undefined8 *)(lVar29 + lVar20 + uVar53);
                            uVar53 = uVar53 + 8;
                          } while (uVar53 < uVar35);
                        }
                        if (uVar35 < uVar39) {
                          do {
                            pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar29 + lVar20);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar39);
                        }
                      }
                      goto LAB_140ac3fe0;
                    }
                  }
                  iVar64 = 1;
                  if (uVar13 != 0) {
                    lVar29 = lVar57 * uVar70 + lVar4;
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + uVar35 * 2);
                      param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar29 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar12);
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  if (iVar64 - 1U < uVar1) {
                    param_3[(longlong)iVar64 + -1 + lVar20] =
                         *(byte *)(lVar4 + iVar64 + -1 + lVar57 * uVar70);
                  }
                }
              }
            }
            else if (uVar38 == 3) {
              lVar20 = lVar24;
              if (0 < iVar63) {
                if (uVar36 < 7) {
LAB_140ac46c0:
                  iVar64 = 1;
                  uVar38 = param_5;
                  if (uVar41 != 0) {
                    lVar20 = lVar57 * uVar70 + param_1;
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      pbVar3[uVar35 * 2] = *(byte *)(lVar20 + uVar35 * 2);
                      pbVar3[uVar35 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar45);
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    uVar38 = param_5 + (int)uVar39 * 2;
                  }
                  if (iVar64 - 1U < uVar36) {
                    pbVar3[(longlong)iVar64 + -1] =
                         *(byte *)(param_1 + iVar64 + -1 + lVar57 * uVar70);
                    uVar38 = param_5 + iVar64;
                  }
                }
                else {
                  lVar20 = lVar57 * uVar70 + param_1;
                  if (((longlong)pbVar3 - lVar20 < (longlong)(ulonglong)uVar36) &&
                     (-((longlong)pbVar3 - lVar20) < (longlong)(ulonglong)uVar36))
                  goto LAB_140ac46c0;
                  if (uVar36 < 0x20) {
LAB_140ac52c3:
                    uVar65 = 0;
                  }
                  else {
                    if (uVar36 < 0xa71) {
                      uVar39 = 0;
                      uVar65 = uVar48;
                    }
                    else {
                      if (uVar36 < iVar17 + 0x20U) goto LAB_140ac52c3;
                      uVar35 = 0;
                      uVar39 = uVar19;
                      uVar65 = uVar25;
                      if (iVar17 != 0) {
                        do {
                          pbVar3[uVar35] = *(byte *)(uVar35 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar19);
                      }
                    }
                    do {
                      *(undefined1 (*) [32])(pbVar3 + uVar39) =
                           *(undefined1 (*) [32])(uVar39 + lVar20);
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                  }
                  uVar38 = uVar15;
                  if (uVar65 + 1 <= uVar36) {
                    uVar27 = uVar36 - uVar65;
                    if (uVar27 < 8) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = uVar27 & 0xfffffff8;
                      uVar18 = 0;
                      lVar29 = 0;
                      do {
                        iVar64 = uVar18 + uVar65;
                        uVar18 = uVar18 + 8;
                        *(undefined8 *)(param_3 + lVar29 + (int)(param_5 + uVar65)) =
                             *(undefined8 *)(iVar64 + lVar20);
                        lVar29 = lVar29 + 8;
                      } while (uVar18 < uVar33);
                    }
                    lVar29 = (longlong)(int)uVar33;
                    lVar59 = (longlong)(int)(uVar65 + uVar33);
                    if (uVar33 < uVar27) {
                      do {
                        uVar33 = uVar33 + 1;
                        param_3[lVar29 + (int)(uVar65 + param_5)] = *(byte *)(lVar59 + lVar20);
                        lVar29 = lVar29 + 1;
                        lVar59 = lVar59 + 1;
                      } while (uVar33 < uVar27);
                    }
                  }
                }
                lVar20 = (longlong)(int)uVar38;
                if (2 < iVar63) {
                  if (uVar16 == 0) {
                    if (-1 < (int)uVar42) {
                      iVar64 = 1;
                      lVar29 = 0;
                      if (uVar47 != 0) {
                        lVar59 = param_1 + uVar73 + lVar57 * uVar70;
                        uVar39 = 0;
                        do {
                          uVar35 = uVar39;
                          pbVar3[lVar29 + -1] = *(byte *)(lVar59 + uVar35 * 2);
                          uVar39 = uVar35 + 1;
                          pbVar3[lVar29 + -2] = *(byte *)(lVar59 + 1 + uVar35 * 2);
                          lVar29 = lVar29 + -2;
                        } while (uVar39 < uVar51);
                        iVar64 = (int)uVar35 + 2 + (int)uVar39;
                      }
                      if (iVar64 - 1U < param_5) {
                        pbVar3[-(longlong)iVar64] =
                             *(byte *)(param_1 + uVar73 + (longlong)iVar64 + -1 + lVar57 * uVar70);
                      }
                    }
                  }
                  else {
                    lVar29 = lVar57 * uVar70;
                    if (-1 < (int)uVar42) {
                      if (6 < (int)param_5) {
                        pbVar21 = param_3 + ((lVar24 + -1) - (param_1 + -1 + lVar29));
                        lVar59 = param_1 + lVar29;
                        if ((lVar24 < (longlong)pbVar21) ||
                           ((byte *)-lVar24 != pbVar21 && lVar24 <= -(longlong)pbVar21)) {
                          if ((int)uVar43 < 0x20) {
LAB_140ac52df:
                            uVar65 = 0;
                          }
                          else {
                            if ((int)uVar43 < 0xa71) {
                              uVar39 = 0;
                              lVar29 = lVar59 - lVar24;
                              uVar65 = uVar56;
                            }
                            else {
                              if ((int)uVar43 < iVar22) goto LAB_140ac52df;
                              uVar35 = 0;
                              lVar29 = lVar59 - lVar24;
                              uVar39 = uVar52;
                              uVar65 = uVar26;
                              if (iVar49 != 0) {
                                do {
                                  param_3[uVar35] = *(byte *)(uVar35 + lVar29);
                                  uVar35 = uVar35 + 1;
                                } while (uVar35 < uVar52);
                              }
                            }
                            do {
                              *(undefined1 (*) [32])(param_3 + uVar39) =
                                   *(undefined1 (*) [32])(uVar39 + lVar29);
                              uVar39 = uVar39 + 0x20;
                            } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                          }
                          if (uVar65 + 1 <= uVar43) {
                            lVar29 = (longlong)(int)uVar65;
                            uVar39 = lVar46 - lVar29;
                            if ((longlong)uVar39 < 8) {
                              uVar35 = 0;
                            }
                            else {
                              uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                              uVar53 = 0;
                              do {
                                *(undefined8 *)(param_3 + uVar53 + lVar29) =
                                     *(undefined8 *)((lVar59 - lVar24) + lVar29 + uVar53);
                                uVar53 = uVar53 + 8;
                              } while (uVar53 < uVar35);
                            }
                            if (uVar35 < uVar39) {
                              do {
                                param_3[uVar35 + lVar29] =
                                     *(byte *)(uVar35 + (lVar59 - lVar24) + lVar29);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          goto LAB_140ac4a95;
                        }
                      }
                      iVar64 = 1;
                      lVar59 = 0;
                      if (uVar47 != 0) {
                        uVar39 = 0;
                        do {
                          uVar35 = uVar39;
                          uVar39 = uVar35 + 1;
                          pbVar3[lVar59 + -1] = *(byte *)(lVar59 + -1 + param_1 + lVar29);
                          pbVar3[lVar59 + -2] = *(byte *)(lVar59 + -2 + param_1 + lVar29);
                          lVar59 = lVar59 + -2;
                        } while (uVar39 < uVar51);
                        iVar64 = (int)uVar35 + 2 + (int)uVar39;
                      }
                      if (iVar64 - 1U < param_5) {
                        pbVar3[-(longlong)iVar64] = *(byte *)((param_1 + lVar29) - (longlong)iVar64)
                        ;
                      }
                    }
                  }
LAB_140ac4a95:
                  lVar29 = lVar57 * uVar70;
                  param_3[lVar20] = *(byte *)(lVar4 + -2 + lVar29);
                  param_3[lVar20 + 1] = *(byte *)(lVar4 + -1 + lVar29);
                  iVar34 = uVar38 + 2;
                  lVar20 = (longlong)iVar34;
                  iVar64 = iVar34;
                  if (uVar40 == 0) {
                    if (0 < (int)uVar1) {
                      iVar28 = 1;
                      lVar59 = 0;
                      if (uVar13 != 0) {
                        lVar67 = lVar29 + (lVar4 - uVar73);
                        uVar39 = 0;
                        do {
                          uVar35 = uVar39;
                          param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar59 + -1 + lVar67);
                          lVar6 = lVar59 + -2;
                          lVar59 = lVar59 + -2;
                          param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar6 + lVar67);
                          uVar39 = uVar35 + 1;
                        } while (uVar39 < uVar12);
                        iVar64 = (int)uVar39 * 2 + 2 + uVar38;
                        iVar28 = (int)uVar35 + 2 + (int)uVar39;
                      }
                      if (iVar28 - 1U < uVar1) {
                        param_3[(longlong)iVar28 + -1 + lVar20] =
                             *(byte *)((lVar29 + (lVar4 - uVar73)) - (longlong)iVar28);
                        lVar20 = (longlong)(iVar28 + iVar34);
                      }
                      else {
LAB_140ac4d53:
                        lVar20 = (longlong)iVar64;
                      }
                    }
                  }
                  else if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar21 = param_3 + lVar20;
                      lVar59 = lVar4 + lVar29;
                      if ((2 - lVar24 <= (longlong)pbVar21 - lVar59) ||
                         (2 - lVar24 <= -((longlong)pbVar21 - lVar59))) {
                        if ((int)uVar1 < 0x20) {
LAB_140ac530a:
                          uVar65 = 0;
                        }
                        else {
                          if ((int)uVar1 < 0xa71) {
                            uVar39 = 0;
                            uVar65 = uVar54;
                          }
                          else {
                            uVar39 = (ulonglong)pbVar21 & 0x1f;
                            if ((int)uVar39 != 0) {
                              uVar39 = (ulonglong)(0x20 - (int)uVar39);
                            }
                            iVar64 = (int)uVar39;
                            if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac530a;
                            uVar35 = 0;
                            uVar65 = uVar1 - (uVar1 - iVar64 & 0x1f);
                            if (iVar64 != 0) {
                              do {
                                pbVar21[uVar35] = *(byte *)(uVar35 + lVar59);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          do {
                            *(undefined1 (*) [32])(pbVar21 + uVar39) =
                                 *(undefined1 (*) [32])(uVar39 + lVar59);
                            uVar39 = uVar39 + 0x20;
                          } while (uVar39 < (ulonglong)(longlong)(int)uVar65);
                        }
                        if (uVar65 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar65;
                          uVar39 = lVar62 - lVar20;
                          if ((longlong)uVar39 < 8) {
                            uVar35 = 0;
                          }
                          else {
                            uVar53 = 0;
                            uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                            do {
                              *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                   *(undefined8 *)(lVar59 + lVar20 + uVar53);
                              uVar53 = uVar53 + 8;
                            } while (uVar53 < uVar35);
                          }
                          if (uVar35 < uVar39) {
                            do {
                              pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar59 + lVar20);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        lVar20 = (longlong)(int)(iVar69 + 4 + uVar38);
                        goto LAB_140ac4d56;
                      }
                    }
                    iVar28 = 1;
                    if (uVar13 != 0) {
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + lVar4 + uVar35 * 2);
                        param_3[uVar35 * 2 + lVar20 + 1] =
                             *(byte *)(lVar29 + lVar4 + 1 + uVar35 * 2);
                        uVar39 = uVar35 + 1;
                      } while (uVar39 < uVar12);
                      iVar64 = (int)uVar39 * 2 + 2 + uVar38;
                      iVar28 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (uVar1 <= iVar28 - 1U) goto LAB_140ac4d53;
                    param_3[(longlong)iVar28 + -1 + lVar20] =
                         *(byte *)(lVar4 + iVar28 + -1 + lVar29);
                    lVar20 = (longlong)(iVar28 + iVar34);
                  }
LAB_140ac4d56:
                  lStack_50 = lVar20 - lVar50;
                  goto LAB_140ac3fe0;
                }
              }
              uVar39 = (ulonglong)uVar42;
              if (uVar16 == 0) {
                uVar38 = uVar42;
                if (uVar40 == 0) {
                  while (-1 < (int)uVar38) {
                    uVar38 = 0;
                    if ((int)(uint)(1 < iVar63) < iVar63) {
                      uVar35 = (ulonglong)(int)uVar39;
                      uVar39 = uVar35;
                      do {
                        if ((int)uVar39 < 0) break;
                        lVar20 = (longlong)(int)uVar38;
                        uVar38 = uVar38 + 1;
                        uVar39 = (ulonglong)((int)uVar39 - 1);
                        param_3[uVar35 - lVar20] = param_3[lVar20 + uVar73 + 1 + uVar35];
                      } while (uVar38 < uVar71);
                    }
                    uVar38 = (uint)uVar39;
                  }
                  uVar39 = 0;
                  iVar64 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                  iVar34 = iVar31;
                  lStack_50 = lVar24;
                  iVar28 = iVar31;
                  if ((int)param_5 < 2) {
                    do {
                      iVar23 = iVar64 + iVar34;
                      pbVar3[uVar39 + uVar66] = param_3[iVar64];
                      if (((int)(((uint)param_6 + 2) - uVar1) <= iVar23) || (iVar23 < (int)param_5))
                      {
                        iVar64 = iVar34 + iVar28;
                        iVar34 = -iVar34;
                        iVar23 = iVar23 - iVar64;
                        iVar28 = -iVar28;
                      }
                      uVar39 = uVar39 + 1;
                      iVar64 = iVar23;
                    } while (uVar39 < -lVar24 + 2U);
                  }
                }
                else {
                  if (-1 < (int)uVar42) {
                    iVar64 = 1;
                    lVar29 = 0;
                    if (uVar47 != 0) {
                      lVar59 = lVar57 * uVar70 + param_1;
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        pbVar3[lVar29 + -1] = *(byte *)(lVar59 + 1 + uVar35 * 2);
                        uVar39 = uVar35 + 1;
                        pbVar3[lVar29 + -2] = *(byte *)(lVar59 + 2 + uVar35 * 2);
                        lVar29 = lVar29 + -2;
                      } while (uVar39 < uVar51);
                      iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (iVar64 - 1U < param_5) {
                      pbVar3[-(longlong)iVar64] = *(byte *)(param_1 + iVar64 + lVar57 * uVar70);
                    }
                  }
LAB_140ac4ff1:
                  lStack_50 = lVar24;
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar21 = param_3 + lVar20;
                      lVar29 = lVar57 * uVar70 + lVar4;
                      if ((2 - lVar24 <= (longlong)pbVar21 - lVar29) ||
                         (2 - lVar24 <= -((longlong)pbVar21 - lVar29))) {
                        if ((int)uVar1 < 0x20) {
LAB_140ac5329:
                          uVar38 = 0;
                        }
                        else {
                          if ((int)uVar1 < 0xa71) {
                            uVar39 = 0;
                            uVar38 = uVar54;
                          }
                          else {
                            uVar39 = (ulonglong)pbVar21 & 0x1f;
                            if ((int)uVar39 != 0) {
                              uVar39 = (ulonglong)(0x20 - (int)uVar39);
                            }
                            iVar64 = (int)uVar39;
                            if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac5329;
                            uVar35 = 0;
                            uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                            if (iVar64 != 0) {
                              do {
                                pbVar21[uVar35] = *(byte *)(uVar35 + lVar29);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          do {
                            *(undefined1 (*) [32])(pbVar21 + uVar39) =
                                 *(undefined1 (*) [32])(uVar39 + lVar29);
                            uVar39 = uVar39 + 0x20;
                          } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                        }
                        if (uVar38 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar38;
                          uVar39 = lVar62 - lVar20;
                          if ((longlong)uVar39 < 8) {
                            uVar35 = 0;
                          }
                          else {
                            uVar53 = 0;
                            uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                            do {
                              *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                   *(undefined8 *)(lVar29 + lVar20 + uVar53);
                              uVar53 = uVar53 + 8;
                            } while (uVar53 < uVar35);
                          }
                          if (uVar35 < uVar39) {
                            do {
                              pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar29 + lVar20);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        goto LAB_140ac3fe0;
                      }
                    }
                    iVar64 = 1;
                    if (uVar13 != 0) {
                      lVar29 = lVar57 * uVar70 + lVar4;
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + uVar35 * 2);
                        param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar29 + 1 + uVar35 * 2);
                        uVar39 = uVar35 + 1;
                      } while (uVar39 < uVar12);
                      iVar64 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (iVar64 - 1U < uVar1) {
                      param_3[(longlong)iVar64 + -1 + lVar20] =
                           *(byte *)(lVar4 + iVar64 + -1 + lVar57 * uVar70);
                    }
                  }
                }
              }
              else {
                if (-1 < (int)uVar42) {
                  do {
                    uVar38 = 0;
                    if ((int)(uint)(1 < iVar63) < iVar63) {
                      iVar64 = (int)uVar39;
                      do {
                        if ((int)uVar39 < 0) break;
                        lVar29 = (longlong)(int)uVar38;
                        uVar38 = uVar38 + 1;
                        uVar39 = (ulonglong)((int)uVar39 - 1);
                        param_3[iVar64 - lVar29] =
                             *(byte *)(((longlong)iVar64 + lVar57 * uVar70 + lVar58) - lVar29);
                      } while (uVar38 < uVar71);
                    }
                  } while (-1 < (int)uVar39);
                }
                if (uVar40 != 0) goto LAB_140ac4ff1;
                lStack_50 = lVar24;
                if (0 < (int)uVar1) {
                  iVar64 = 1;
                  lVar29 = 0;
                  if (uVar13 != 0) {
                    lVar59 = lVar57 * uVar70 + lVar4;
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + -2 + lVar59);
                      lVar67 = lVar29 + -3;
                      lVar29 = lVar29 + -2;
                      param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar67 + lVar59);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar12);
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  if (iVar64 - 1U < uVar1) {
                    param_3[(longlong)iVar64 + -1 + lVar20] =
                         *(byte *)((lVar4 - iVar64) + -1 + lVar57 * uVar70);
                  }
                }
              }
            }
            else if ((param_7 & 0xf0) == 0xf0) {
              uVar38 = 0;
              uVar65 = 0;
              if (0 < (int)param_5) {
                if (6 < (int)param_5) {
                  lVar20 = lVar57 * uVar70;
                  lVar29 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar20);
                  if ((lVar24 <= lVar29) || (lVar24 <= -lVar29)) {
                    if ((int)param_5 < 0x20) {
LAB_140ac449f:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)param_5 < 0xa71) {
                        uVar39 = 0;
                        uVar38 = uVar61;
                      }
                      else {
                        if ((int)param_5 < iVar37) goto LAB_140ac449f;
                        uVar35 = 0;
                        uVar39 = uVar74;
                        uVar38 = uVar44;
                        if (iVar72 != 0) {
                          do {
                            param_3[uVar35] = *(byte *)(uVar35 + lVar20 + lVar58);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar74);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(param_3 + uVar39) =
                             *(undefined1 (*) [32])(uVar39 + lVar20 + lVar58);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    uVar65 = param_5;
                    if (uVar38 + 1 <= param_5) {
                      lVar29 = (longlong)(int)uVar38;
                      uVar39 = lVar24 - lVar29;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar53 = 0;
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        do {
                          *(undefined8 *)(param_3 + uVar53 + lVar29) =
                               *(undefined8 *)(lVar58 + lVar20 + lVar29 + uVar53);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          param_3[uVar35 + lVar29] = *(byte *)(uVar35 + lVar20 + lVar58 + lVar29);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    goto LAB_140ac2eb4;
                  }
                }
                uVar27 = 1;
                if (uVar47 != 0) {
                  lVar20 = lVar57 * uVar70 + lVar58;
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2] = *(byte *)(lVar20 + uVar35 * 2);
                    param_3[uVar35 * 2 + 1] = *(byte *)(lVar20 + 1 + uVar35 * 2);
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar51);
                  uVar38 = (int)uVar39 * 2;
                  uVar27 = (int)uVar35 + 2 + (int)uVar39;
                }
                uVar65 = uVar38;
                if (uVar27 - 1 < param_5) {
                  param_3[(longlong)(int)uVar27 + -1] =
                       *(byte *)(lVar58 + (int)uVar27 + -1 + lVar57 * uVar70);
                  uVar65 = uVar27;
                }
              }
LAB_140ac2eb4:
              if (0 < iVar63) {
                if (uVar36 < 7) {
LAB_140ac3062:
                  iVar64 = 1;
                  uVar38 = uVar65;
                  if (uVar41 != 0) {
                    lVar20 = lVar57 * uVar70 + param_1;
                    uVar39 = 0;
                    do {
                      uVar35 = uVar39;
                      param_3[uVar35 * 2 + (longlong)(int)uVar65] = *(byte *)(lVar20 + uVar35 * 2);
                      param_3[uVar35 * 2 + (longlong)(int)uVar65 + 1] =
                           *(byte *)(lVar20 + 1 + uVar35 * 2);
                      uVar39 = uVar35 + 1;
                    } while (uVar39 < uVar45);
                    uVar38 = uVar65 + (int)uVar39 * 2;
                    iVar64 = (int)uVar35 + 2 + (int)uVar39;
                  }
                  if (iVar64 - 1U < uVar36) {
                    param_3[(longlong)iVar64 + -1 + (longlong)(int)uVar65] =
                         *(byte *)(param_1 + iVar64 + -1 + lVar57 * uVar70);
                    uVar38 = iVar64 + uVar65;
                  }
                }
                else {
                  pbVar21 = param_3 + (int)uVar65;
                  lVar20 = lVar57 * uVar70 + param_1;
                  if (((longlong)pbVar21 - lVar20 < (longlong)(ulonglong)uVar36) &&
                     (-((longlong)pbVar21 - lVar20) < (longlong)(ulonglong)uVar36))
                  goto LAB_140ac3062;
                  if (uVar36 < 0x20) {
LAB_140ac44c6:
                    uVar38 = 0;
                  }
                  else {
                    if (uVar36 < 0xa71) {
                      uVar39 = 0;
                      uVar38 = uVar48;
                    }
                    else {
                      uVar39 = (ulonglong)pbVar21 & 0x1f;
                      if ((int)uVar39 != 0) {
                        uVar39 = (ulonglong)(0x20 - (int)uVar39);
                      }
                      iVar64 = (int)uVar39;
                      if (uVar36 < iVar64 + 0x20U) goto LAB_140ac44c6;
                      uVar38 = uVar36 - (uVar36 - iVar64 & 0x1f);
                      uVar35 = 0;
                      if (iVar64 != 0) {
                        do {
                          pbVar21[uVar35] = *(byte *)(uVar35 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    do {
                      *(undefined1 (*) [32])(pbVar21 + uVar39) =
                           *(undefined1 (*) [32])(uVar39 + lVar20);
                      uVar39 = uVar39 + 0x20;
                    } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                  }
                  if (uVar38 + 1 <= uVar36) {
                    uVar27 = uVar36 - uVar38;
                    if (uVar27 < 8) {
                      uVar33 = 0;
                    }
                    else {
                      uVar33 = uVar27 & 0xfffffff8;
                      uVar18 = 0;
                      lVar29 = 0;
                      do {
                        iVar64 = uVar18 + uVar38;
                        uVar18 = uVar18 + 8;
                        *(undefined8 *)(param_3 + lVar29 + (int)(uVar38 + uVar65)) =
                             *(undefined8 *)(iVar64 + lVar20);
                        lVar29 = lVar29 + 8;
                      } while (uVar18 < uVar33);
                    }
                    lVar29 = (longlong)(int)uVar33;
                    lVar59 = (longlong)(int)(uVar38 + uVar33);
                    if (uVar33 < uVar27) {
                      do {
                        uVar33 = uVar33 + 1;
                        param_3[lVar29 + (int)(uVar38 + uVar65)] = *(byte *)(lVar59 + lVar20);
                        lVar29 = lVar29 + 1;
                        lVar59 = lVar59 + 1;
                      } while (uVar33 < uVar27);
                    }
                  }
                  uVar38 = uVar65 + uVar36;
                }
                uVar65 = uVar38;
                if (2 < iVar63) {
                  lVar29 = lVar57 * uVar70;
                  param_3[(int)uVar65] = *(byte *)(lVar4 + -2 + lVar29);
                  param_3[(longlong)(int)uVar65 + 1] = *(byte *)(lVar4 + -1 + lVar29);
                  iVar64 = uVar65 + 2;
                  lVar20 = (longlong)iVar64;
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar21 = param_3 + lVar20;
                      lVar59 = lVar4 + lVar29;
                      if ((2 - lVar24 <= (longlong)pbVar21 - lVar59) ||
                         (2 - lVar24 <= -((longlong)pbVar21 - lVar59))) {
                        if ((int)uVar1 < 0x20) {
LAB_140ac44e3:
                          uVar38 = 0;
                        }
                        else {
                          if ((int)uVar1 < 0xa71) {
                            uVar39 = 0;
                            uVar38 = uVar54;
                          }
                          else {
                            uVar39 = (ulonglong)pbVar21 & 0x1f;
                            if ((int)uVar39 != 0) {
                              uVar39 = (ulonglong)(0x20 - (int)uVar39);
                            }
                            iVar64 = (int)uVar39;
                            if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac44e3;
                            uVar35 = 0;
                            uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                            if (iVar64 != 0) {
                              do {
                                pbVar21[uVar35] = *(byte *)(uVar35 + lVar59);
                                uVar35 = uVar35 + 1;
                              } while (uVar35 < uVar39);
                            }
                          }
                          do {
                            *(undefined1 (*) [32])(pbVar21 + uVar39) =
                                 *(undefined1 (*) [32])(uVar39 + lVar59);
                            uVar39 = uVar39 + 0x20;
                          } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                        }
                        if (uVar38 + 1 <= uVar1) {
                          lVar20 = (longlong)(int)uVar38;
                          uVar39 = lVar62 - lVar20;
                          if ((longlong)uVar39 < 8) {
                            uVar35 = 0;
                          }
                          else {
                            uVar53 = 0;
                            uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                            do {
                              *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                                   *(undefined8 *)(lVar59 + lVar20 + uVar53);
                              uVar53 = uVar53 + 8;
                            } while (uVar53 < uVar35);
                          }
                          if (uVar35 < uVar39) {
                            do {
                              pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar59 + lVar20);
                              uVar35 = uVar35 + 1;
                            } while (uVar35 < uVar39);
                          }
                        }
                        lVar20 = (longlong)(int)(iVar69 + 4 + uVar65);
                        goto LAB_140ac3334;
                      }
                    }
                    iVar28 = 1;
                    iVar34 = iVar64;
                    if (uVar13 != 0) {
                      uVar39 = 0;
                      do {
                        uVar35 = uVar39;
                        param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + lVar4 + uVar35 * 2);
                        param_3[uVar35 * 2 + lVar20 + 1] =
                             *(byte *)(lVar29 + lVar4 + 1 + uVar35 * 2);
                        uVar39 = uVar35 + 1;
                      } while (uVar39 < uVar12);
                      iVar34 = (int)uVar39 * 2 + 2 + uVar65;
                      iVar28 = (int)uVar35 + 2 + (int)uVar39;
                    }
                    if (iVar28 - 1U < uVar1) {
                      param_3[(longlong)iVar28 + -1 + lVar20] =
                           *(byte *)(lVar4 + iVar28 + -1 + lVar29);
                      lVar20 = (longlong)(iVar28 + iVar64);
                    }
                    else {
                      lVar20 = (longlong)iVar34;
                    }
                  }
LAB_140ac3334:
                  lStack_50 = lVar20 - lVar50;
                  goto LAB_140ac3fe0;
                }
              }
              lVar20 = (longlong)(int)uVar65;
              lStack_50 = lVar24;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar21 = param_3 + lVar20;
                  lVar29 = lVar57 * uVar70 + lVar4;
                  if ((2 - lVar24 <= (longlong)pbVar21 - lVar29) ||
                     (2 - lVar24 <= -((longlong)pbVar21 - lVar29))) {
                    if ((int)uVar1 < 0x20) {
LAB_140ac4500:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar39 = 0;
                        uVar38 = uVar54;
                      }
                      else {
                        uVar39 = (ulonglong)pbVar21 & 0x1f;
                        if ((int)uVar39 != 0) {
                          uVar39 = (ulonglong)(0x20 - (int)uVar39);
                        }
                        iVar64 = (int)uVar39;
                        if ((int)uVar1 < iVar64 + 0x20) goto LAB_140ac4500;
                        uVar35 = 0;
                        uVar38 = uVar1 - (uVar1 - iVar64 & 0x1f);
                        if (iVar64 != 0) {
                          do {
                            pbVar21[uVar35] = *(byte *)(uVar35 + lVar29);
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < uVar39);
                        }
                      }
                      do {
                        *(undefined1 (*) [32])(pbVar21 + uVar39) =
                             *(undefined1 (*) [32])(uVar39 + lVar29);
                        uVar39 = uVar39 + 0x20;
                      } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar1) {
                      lVar20 = (longlong)(int)uVar38;
                      uVar39 = lVar62 - lVar20;
                      if ((longlong)uVar39 < 8) {
                        uVar35 = 0;
                      }
                      else {
                        uVar53 = 0;
                        uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar21 + uVar53 + lVar20) =
                               *(undefined8 *)(lVar29 + lVar20 + uVar53);
                          uVar53 = uVar53 + 8;
                        } while (uVar53 < uVar35);
                      }
                      if (uVar35 < uVar39) {
                        do {
                          pbVar21[uVar35 + lVar20] = *(byte *)(uVar35 + lVar29 + lVar20);
                          uVar35 = uVar35 + 1;
                        } while (uVar35 < uVar39);
                      }
                    }
                    goto LAB_140ac3fe0;
                  }
                }
                iVar64 = 1;
                if (uVar13 != 0) {
                  lVar29 = lVar57 * uVar70 + lVar4;
                  uVar39 = 0;
                  do {
                    uVar35 = uVar39;
                    param_3[uVar35 * 2 + lVar20] = *(byte *)(lVar29 + uVar35 * 2);
                    param_3[uVar35 * 2 + lVar20 + 1] = *(byte *)(lVar29 + 1 + uVar35 * 2);
                    uVar39 = uVar35 + 1;
                  } while (uVar39 < uVar12);
                  iVar64 = (int)uVar35 + 2 + (int)uVar39;
                }
                if (iVar64 - 1U < uVar1) {
                  param_3[(longlong)iVar64 + -1 + lVar20] =
                       *(byte *)(lVar4 + iVar64 + -1 + lVar57 * uVar70);
                }
              }
            }
            else {
              lStack_50 = 0;
            }
          }
LAB_140ac3fe0:
          *psStack_58 = (ushort)*param_3 + (ushort)param_3[2];
          psStack_58[(int)uVar30] = (ushort)param_3[1] << 3;
          if (0 < (int)uVar55) {
            lVar59 = lVar57 * uVar70;
            lVar20 = param_1 + lVar59;
            lVar29 = uVar66 * 2 + -4;
            lVar67 = (longlong)(psStack_58 + 1) - lVar20;
            if (((longlong)uVar66 <= lVar67) || (lVar29 <= -lVar67)) {
              psVar2 = psStack_58 + (longlong)(int)uVar30 + 1;
              if ((((longlong)uVar66 <= (longlong)psVar2 - lVar20) ||
                  (lVar29 <= -((longlong)psVar2 - lVar20))) &&
                 ((lVar67 = (longlong)psVar2 - (longlong)(psStack_58 + 1), lVar29 <= lVar67 ||
                  (lVar29 <= -lVar67)))) {
                if ((int)uVar55 < 0x20) {
LAB_140ac72dc:
                  uVar38 = 0;
                }
                else {
                  if ((int)uVar55 < 0x1139) {
                    uVar39 = 0;
                    uVar38 = uVar55 & 0xffffffe0;
                  }
                  else {
                    uVar65 = (uint)psVar2 & 0x1f;
                    if (((ulonglong)psVar2 & 0x1f) != 0) {
                      if (((ulonglong)psVar2 & 1) != 0) goto LAB_140ac72dc;
                      uVar65 = 0x20 - uVar65 >> 1;
                    }
                    uVar39 = (ulonglong)uVar65;
                    if ((int)uVar55 < (int)(uVar65 + 0x20)) goto LAB_140ac72dc;
                    uVar35 = 0;
                    uVar38 = uVar55 - (uVar55 - uVar65 & 0x1f);
                    if (uVar65 != 0) {
                      do {
                        bVar9 = *(byte *)(uVar35 + 1 + lVar20);
                        psStack_58[uVar35 + 1] =
                             (ushort)*(byte *)(uVar35 + lVar20) +
                             (ushort)*(byte *)(uVar35 + 2 + lVar20);
                        psStack_58[(longlong)(int)uVar30 + uVar35 + 1] = (ushort)bVar9 << 3;
                        uVar35 = uVar35 + 1;
                      } while (uVar35 < uVar39);
                    }
                  }
                  lVar29 = param_1 + lVar59;
                  do {
                    auVar77 = *(undefined1 (*) [32])(uVar39 + 2 + lVar29);
                    auVar75 = *(undefined1 (*) [32])(uVar39 + lVar29);
                    auVar7 = *(undefined1 (*) [32])(uVar39 + 1 + lVar29);
                    auVar10 = vpmovzxbw_avx2(auVar75._0_16_);
                    auVar11 = vpmovzxbw_avx2(auVar77._0_16_);
                    auVar10 = vpaddw_avx2(auVar10,auVar11);
                    *(undefined1 (*) [32])(psStack_58 + uVar39 + 1) = auVar10;
                    auVar75 = vpmovzxbw_avx2(auVar75._16_16_);
                    auVar77 = vpmovzxbw_avx2(auVar77._16_16_);
                    auVar77 = vpaddw_avx2(auVar75,auVar77);
                    *(undefined1 (*) [32])(psStack_58 + uVar39 + 0x11) = auVar77;
                    auVar77 = vpmovzxbw_avx2(auVar7._0_16_);
                    auVar75 = vpsllw_avx2(auVar77,3);
                    auVar77 = vpmovzxbw_avx2(auVar7._16_16_);
                    auVar77 = vpsllw_avx2(auVar77,3);
                    *(undefined1 (*) [32])(psStack_58 + (longlong)(int)uVar30 + uVar39 + 1) =
                         auVar75;
                    *(undefined1 (*) [32])(psStack_58 + (longlong)(int)uVar30 + uVar39 + 0x11) =
                         auVar77;
                    uVar39 = uVar39 + 0x20;
                  } while (uVar39 < (ulonglong)(longlong)(int)uVar38);
                }
                if (uVar38 + 1 <= uVar55) {
                  lVar29 = (longlong)(int)uVar38;
                  uVar39 = (int)uVar55 - lVar29;
                  if ((longlong)uVar39 < 8) {
                    uVar35 = 0;
                  }
                  else {
                    uVar53 = 0;
                    uVar35 = (ulonglong)(int)((uint)uVar39 & 0xfffffff8);
                    do {
                      lVar67 = (longlong)(int)uVar38 + lVar59 + param_1;
                      auVar8._8_8_ = 0;
                      auVar8._0_8_ = *(ulonglong *)(uVar53 + lVar67);
                      auVar8 = vpmovzxbw_avx(auVar8);
                      auVar79._8_8_ = 0;
                      auVar79._0_8_ = *(ulonglong *)(uVar53 + 2 + lVar67);
                      auVar79 = vpmovzxbw_avx(auVar79);
                      auVar76._8_8_ = 0;
                      auVar76._0_8_ = *(ulonglong *)(uVar53 + 1 + lVar67);
                      auVar76 = vpmovzxbw_avx(auVar76);
                      auVar8 = vpaddw_avx(auVar8,auVar79);
                      auVar79 = vpsllw_avx(auVar76,3);
                      *(undefined1 (*) [16])(psStack_58 + lVar29 + uVar53 + 1) = auVar8;
                      *(undefined1 (*) [16])
                       (psStack_58 + (longlong)(int)uVar30 + lVar29 + uVar53 + 1) = auVar79;
                      uVar53 = uVar53 + 8;
                    } while (uVar53 < uVar35);
                  }
                  if (uVar35 < uVar39) {
                    lVar20 = lVar20 + lVar29;
                    do {
                      bVar9 = *(byte *)(uVar35 + 1 + lVar20);
                      psStack_58[lVar29 + uVar35 + 1] =
                           (ushort)*(byte *)(uVar35 + lVar20) +
                           (ushort)*(byte *)(uVar35 + 2 + lVar20);
                      psStack_58[(longlong)(int)uVar30 + lVar29 + uVar35 + 1] = (ushort)bVar9 << 3;
                      uVar35 = uVar35 + 1;
                    } while (uVar35 < uVar39);
                  }
                }
                goto LAB_140ac43d1;
              }
            }
            iVar64 = 1;
            uVar39 = 0;
            if (uVar55 >> 1 != 0) {
              do {
                uVar35 = uVar39;
                psStack_58[uVar35 * 2 + 1] =
                     (ushort)*(byte *)(lVar20 + uVar35 * 2) +
                     (ushort)*(byte *)(lVar20 + 2 + uVar35 * 2);
                psStack_58[(longlong)(int)uVar30 + uVar35 * 2 + 1] =
                     (ushort)*(byte *)(lVar20 + 1 + uVar35 * 2) << 3;
                psStack_58[uVar35 * 2 + 2] =
                     (ushort)*(byte *)(lVar20 + 1 + uVar35 * 2) +
                     (ushort)*(byte *)(lVar20 + 3 + uVar35 * 2);
                psStack_58[(longlong)(int)uVar30 + uVar35 * 2 + 2] =
                     (ushort)*(byte *)(lVar20 + 2 + uVar35 * 2) << 3;
                uVar39 = uVar35 + 1;
              } while (uVar39 < uVar55 >> 1);
              iVar64 = (int)uVar35 + 2 + (int)uVar39;
            }
            if (iVar64 - 1U < uVar55) {
              lVar29 = (longlong)iVar64;
              lVar20 = param_1 + lVar29;
              psStack_58[lVar29] =
                   (ushort)*(byte *)(lVar20 + -1 + lVar59) + (ushort)*(byte *)(lVar20 + 1 + lVar59);
              psStack_58[(int)uVar30 + lVar29] = (ushort)*(byte *)(lVar20 + lVar59) << 3;
            }
          }
LAB_140ac43d1:
          if (iVar63 < 2) goto LAB_140ac443a;
          uVar70 = uVar70 + 1;
          lStack_80 = lStack_80 + lVar57;
          psStack_58[uVar66 - 1] = (ushort)param_3[lStack_50] + (ushort)param_3[lStack_50 + 2];
          psStack_60[uVar66 - 1] = (ushort)param_3[lStack_50 + 1] << 3;
          if ((ulonglong)(longlong)param_6._4_4_ <= uVar70) {
            return 0;
          }
          psStack_58 = *(short **)(param_2 + uVar70 * 8);
          psStack_60 = psStack_58 + (int)uVar30;
        } while( true );
      }
    }
    else {
      lVar24 = 0;
      switch(param_7 & 0xf) {
      case 1:
        lVar24 = 1;
        break;
      case 2:
        lVar24 = 2;
        break;
      case 3:
        lVar24 = 3;
        break;
      case 4:
        lVar24 = 4;
      }
      (*(code *)(&PTR_FUN_14308f668)[lVar24])
                (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
                 (longlong)param_6._4_4_,lVar57 - (int)(uint)param_6,(longlong)(int)(uVar30 * 2),
                 param_8,param_7);
    }
  }
  else {
    FUN_140d402e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return 0;
LAB_140ac443a:
  uVar70 = uVar70 + 1;
  lStack_80 = lStack_80 + lVar57;
  uVar68 = uVar68 & 0xffffffff;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar70) {
    return 0;
  }
  goto LAB_140ac2be0;
}

