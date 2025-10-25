
undefined8
FUN_140ab9e00(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  byte *pbVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  longlong lVar46;
  ulonglong uVar47;
  uint uVar48;
  uint uVar49;
  longlong lVar50;
  ulonglong uVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  uint uVar57;
  int iVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  longlong lVar61;
  longlong lVar62;
  uint uVar63;
  uint uVar64;
  longlong lVar65;
  longlong lVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  int iVar71;
  int iVar72;
  ulonglong uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined8 uVar80;
  longlong lStack_70;
  ulonglong uVar66;
  ulonglong uVar73;
  ulonglong uVar79;
  
  lVar46 = 0;
  lVar50 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      lVar46 = (longlong)(int)param_5;
      uVar48 = 2;
      if ((uint)param_6 < 3) {
        uVar48 = (uint)param_6;
      }
      uVar29 = param_7 & 0xf;
      lVar37 = (longlong)(int)(uint)param_6;
      uVar52 = param_5 + uVar48;
      uVar59 = (ulonglong)(1 < (int)(uint)param_6);
      lVar32 = param_1 - lVar46;
      iVar30 = -param_5;
      lVar65 = -lVar46 + 4;
      uVar63 = param_5 >> 1;
      uVar66 = (ulonglong)uVar63;
      pbVar2 = param_3 + lVar46;
      uVar1 = iVar30 + 2;
      uVar68 = param_5 & 0xffffffe0;
      uVar75 = param_7 & 0x40;
      uVar69 = uVar1 & 0xffffffe0;
      uVar57 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar55 = (ulonglong)pbVar2 & 0x1f;
      uVar60 = (ulonglong)param_3 & 0x1f;
      uVar76 = uVar1 >> 1;
      uVar79 = (ulonglong)uVar76;
      uVar70 = uVar48 >> 1;
      uVar73 = (ulonglong)uVar70;
      lVar3 = param_1 + lVar37;
      lVar67 = (longlong)(int)uVar1;
      uVar77 = param_7 & 0x80;
      iVar20 = ((int)(uint)param_6 < 2) - 1;
      lVar19 = lVar37 - lVar46;
      uVar38 = uVar48 & 0xffffffe0;
      uVar78 = (uint)param_6 - 2;
      iVar22 = (int)uVar60;
      uVar39 = param_5 - 1;
      uVar74 = uVar60;
      if (iVar22 != 0) {
        uVar74 = (ulonglong)(0x20U - iVar22);
      }
      uVar40 = 0xffffffff - (iVar30 + -1);
      lVar42 = (longlong)(int)uVar40;
      iVar71 = (int)uVar74;
      if ((int)uVar55 != 0) {
        uVar55 = (ulonglong)(0x20 - (int)uVar55);
      }
      if (iVar22 != 0) {
        uVar60 = (ulonglong)(0x20U - iVar22);
      }
      uVar64 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar64 = uVar29;
      }
      iVar53 = (int)uVar55;
      uVar27 = uVar40 - (uVar40 - iVar71 & 0x1f);
      iVar58 = (int)uVar60;
      uVar34 = uVar48 - (uVar48 - iVar53 & 0x1f);
      uVar21 = uVar40 & 0xffffffe0;
      iVar35 = iVar58 + 0x20;
      uVar41 = param_5 - (param_5 - iVar58 & 0x1f);
      iVar22 = iVar71 + 0x20;
      uVar80 = CONCAT17(param_8,CONCAT16(param_8,CONCAT15(param_8,CONCAT14(param_8,CONCAT13(param_8,
                                                  CONCAT12(param_8,CONCAT11(param_8,param_8)))))));
      lStack_70 = 0;
      uVar36 = 0;
LAB_140aba280:
      if ((uint)param_6 == 1) {
        uVar49 = uVar64;
        if (uVar29 != 6) goto LAB_140aba2c9;
        goto LAB_140ababdc;
      }
      do {
        uVar49 = uVar29;
        if (uVar29 == 6) {
LAB_140ababdc:
          uVar49 = 0;
          uVar45 = 0;
          if (uVar75 == 0) {
            if (0 < (int)param_5) {
              if ((int)param_5 < 0x20) {
LAB_140abe6b6:
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0x871) {
                  uVar51 = 0;
                  uVar49 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar35) goto LAB_140abe6b6;
                  uVar47 = 0;
                  uVar51 = uVar60;
                  uVar49 = uVar41;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = param_8;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar60);
                  }
                }
                do {
                  pbVar26 = param_3 + uVar51;
                  *pbVar26 = param_8;
                  pbVar26[1] = param_8;
                  pbVar26[2] = param_8;
                  pbVar26[3] = param_8;
                  pbVar26[4] = param_8;
                  pbVar26[5] = param_8;
                  pbVar26[6] = param_8;
                  pbVar26[7] = param_8;
                  pbVar26[8] = param_8;
                  pbVar26[9] = param_8;
                  pbVar26[10] = param_8;
                  pbVar26[0xb] = param_8;
                  pbVar26[0xc] = param_8;
                  pbVar26[0xd] = param_8;
                  pbVar26[0xe] = param_8;
                  pbVar26[0xf] = param_8;
                  pbVar26[0x10] = param_8;
                  pbVar26[0x11] = param_8;
                  pbVar26[0x12] = param_8;
                  pbVar26[0x13] = param_8;
                  pbVar26[0x14] = param_8;
                  pbVar26[0x15] = param_8;
                  pbVar26[0x16] = param_8;
                  pbVar26[0x17] = param_8;
                  pbVar26[0x18] = param_8;
                  pbVar26[0x19] = param_8;
                  pbVar26[0x1a] = param_8;
                  pbVar26[0x1b] = param_8;
                  pbVar26[0x1c] = param_8;
                  pbVar26[0x1d] = param_8;
                  pbVar26[0x1e] = param_8;
                  pbVar26[0x1f] = param_8;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              uVar45 = uVar49;
              if (uVar49 + 1 <= param_5) {
                lVar25 = (longlong)(int)uVar49;
                uVar51 = lVar46 - lVar25;
                if ((longlong)uVar51 < 8) {
                  uVar31 = 0;
                }
                else {
                  uVar47 = 0;
                  uVar31 = (uint)uVar51 & 0xfffffff8;
                  do {
                    *(undefined8 *)(param_3 + uVar47 + lVar25) = uVar80;
                    uVar47 = uVar47 + 8;
                  } while (uVar47 < (ulonglong)(longlong)(int)uVar31);
                  uVar45 = uVar49 + uVar31;
                }
                uVar47 = (ulonglong)(int)uVar31;
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar25] = param_8;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                  uVar45 = (int)uVar47 + uVar49;
                }
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar25 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70), lVar25 < lVar46
                && (-lVar25 < lVar46)))) {
              uVar31 = 1;
              if (uVar63 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2] = *(byte *)(lVar32 + lStack_70 + uVar47 * 2);
                  param_3[uVar47 * 2 + 1] = *(byte *)(lVar32 + lStack_70 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar66);
                uVar49 = (int)uVar51 * 2;
                uVar31 = (int)uVar47 + 2 + (int)uVar51;
              }
              uVar45 = uVar49;
              if (uVar31 - 1 < param_5) {
                param_3[(longlong)(int)uVar31 + -1] =
                     *(byte *)(lVar32 + (int)uVar31 + -1 + lStack_70);
                uVar45 = uVar31;
              }
            }
            else {
              if ((int)param_5 < 0x20) {
LAB_140abe6d5:
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar35) goto LAB_140abe6d5;
                  uVar47 = 0;
                  uVar51 = uVar60;
                  uVar49 = uVar41;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = *(byte *)(uVar47 + lVar32 + lStack_70);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar60);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar32 + lStack_70);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar26 = param_3 + uVar51;
                  *(undefined8 *)pbVar26 = *puVar4;
                  *(undefined8 *)(pbVar26 + 8) = uVar16;
                  *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              uVar45 = param_5;
              if (uVar49 + 1 <= param_5) {
                lVar25 = (longlong)(int)uVar49;
                uVar51 = lVar46 - lVar25;
                if ((longlong)uVar51 < 8) {
                  uVar47 = 0;
                }
                else {
                  uVar56 = 0;
                  uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                  do {
                    *(undefined8 *)(param_3 + uVar56 + lVar25) =
                         *(undefined8 *)(lVar32 + lStack_70 + lVar25 + uVar56);
                    uVar56 = uVar56 + 8;
                  } while (uVar56 < uVar47);
                }
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar25] = *(byte *)(uVar47 + lVar32 + lStack_70 + lVar25);
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
            }
          }
          if ((int)(uint)param_6 < 1) {
            lVar25 = (longlong)(int)uVar45;
            if (uVar77 != 0) goto LAB_140abb3c2;
LAB_140abb249:
            lVar33 = lVar46;
            if ((int)uVar1 < 1) goto LAB_140abb640;
LAB_140abb257:
            iVar72 = (int)lVar25;
            if ((int)uVar1 < 0x20) {
LAB_140abe71e:
              uVar49 = 0;
            }
            else {
              pbVar26 = param_3 + lVar25;
              if ((int)uVar1 < 0x871) {
                uVar51 = 0;
                uVar49 = uVar69;
              }
              else {
                uVar51 = (ulonglong)pbVar26 & 0x1f;
                if ((int)uVar51 != 0) {
                  uVar51 = (ulonglong)(0x20 - (int)uVar51);
                }
                iVar24 = (int)uVar51;
                if ((int)uVar1 < iVar24 + 0x20) goto LAB_140abe71e;
                uVar49 = uVar1 - (uVar1 - iVar24 & 0x1f);
                uVar47 = 0;
                if (iVar24 != 0) {
                  do {
                    pbVar26[uVar47] = param_8;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
              do {
                pbVar5 = pbVar26 + uVar51;
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
                uVar51 = uVar51 + 0x20;
              } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              uVar45 = iVar72 + uVar49;
            }
            if (uVar49 + 1 <= uVar1) {
              lVar33 = (longlong)(int)uVar49;
              uVar51 = lVar67 - lVar33;
              if ((longlong)uVar51 < 8) {
                uVar31 = 0;
              }
              else {
                uVar31 = (uint)uVar51 & 0xfffffff8;
                uVar47 = 0;
                do {
                  *(undefined8 *)(param_3 + uVar47 + lVar33 + lVar25) = uVar80;
                  uVar47 = uVar47 + 8;
                } while (uVar47 < (ulonglong)(longlong)(int)uVar31);
                uVar45 = iVar72 + uVar49 + uVar31;
              }
              uVar47 = (ulonglong)(int)uVar31;
              if (uVar47 < uVar51) {
                do {
                  param_3[uVar47 + lVar33 + lVar25] = param_8;
                  uVar47 = uVar47 + 1;
                } while (uVar47 < uVar51);
                uVar45 = (int)uVar47 + iVar72 + uVar49;
              }
            }
LAB_140abb614:
            lVar33 = lVar46;
            if ((int)(uint)param_6 < 3) goto LAB_140abb640;
          }
          else {
            if (uVar48 < 7) {
LAB_140abb146:
              iVar72 = 1;
              uVar49 = uVar45;
              if (uVar70 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + (longlong)(int)uVar45] =
                       *(byte *)(param_1 + lStack_70 + uVar47 * 2);
                  param_3[uVar47 * 2 + (longlong)(int)uVar45 + 1] =
                       *(byte *)(param_1 + lStack_70 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                uVar49 = uVar45 + (int)uVar51 * 2;
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar48) {
                param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar45] =
                     *(byte *)(param_1 + iVar72 + -1 + lStack_70);
                uVar49 = iVar72 + uVar45;
              }
            }
            else {
              pbVar26 = param_3 + (int)uVar45;
              lVar25 = param_1 + lStack_70;
              if (((longlong)pbVar26 - lVar25 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar26 - lVar25) < (longlong)(ulonglong)uVar48)) goto LAB_140abb146;
              if (uVar48 < 0x20) {
LAB_140abe6fe:
                uVar49 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar38;
                }
                else {
                  uVar51 = (ulonglong)pbVar26 & 0x1f;
                  if ((int)uVar51 != 0) {
                    uVar51 = (ulonglong)(0x20 - (int)uVar51);
                  }
                  iVar72 = (int)uVar51;
                  if (uVar48 < iVar72 + 0x20U) goto LAB_140abe6fe;
                  uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                  uVar47 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar26[uVar47] = *(byte *)(uVar47 + lVar25);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar25);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar5 = pbVar26 + uVar51;
                  *(undefined8 *)pbVar5 = *puVar4;
                  *(undefined8 *)(pbVar5 + 8) = uVar16;
                  *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              if (uVar49 + 1 <= uVar48) {
                uVar31 = uVar48 - uVar49;
                if (uVar31 < 8) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = uVar31 & 0xfffffff8;
                  uVar23 = 0;
                  lVar33 = 0;
                  do {
                    iVar72 = uVar49 + uVar23;
                    uVar23 = uVar23 + 8;
                    *(undefined8 *)(param_3 + lVar33 + (int)(uVar49 + uVar45)) =
                         *(undefined8 *)(iVar72 + lVar25);
                    lVar33 = lVar33 + 8;
                  } while (uVar23 < uVar44);
                }
                lVar33 = (longlong)(int)uVar44;
                lVar61 = (longlong)(int)(uVar49 + uVar44);
                if (uVar44 < uVar31) {
                  do {
                    uVar44 = uVar44 + 1;
                    param_3[lVar33 + (int)(uVar49 + uVar45)] = *(byte *)(lVar61 + lVar25);
                    lVar33 = lVar33 + 1;
                    lVar61 = lVar61 + 1;
                  } while (uVar44 < uVar31);
                }
              }
              uVar49 = uVar45 + uVar48;
            }
            uVar45 = uVar49;
            lVar25 = (longlong)(int)uVar45;
            if ((int)(uint)param_6 < 3) {
              if (uVar77 == 0) goto LAB_140abb249;
LAB_140abb3c2:
              lVar33 = lVar46;
              if ((int)uVar1 < 1) goto LAB_140abb640;
LAB_140abb3d0:
              iVar72 = (int)lVar25;
              if (6 < (int)uVar1) {
                lVar33 = lVar3 + lStack_70;
                pbVar26 = param_3 + lVar25;
                if ((2 - lVar46 <= (longlong)pbVar26 - lVar33) ||
                   (2 - lVar46 <= -((longlong)pbVar26 - lVar33))) {
                  if ((int)uVar1 < 0x20) {
LAB_140abe73d:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar69;
                    }
                    else {
                      uVar51 = (ulonglong)pbVar26 & 0x1f;
                      if ((int)uVar51 != 0) {
                        uVar51 = (ulonglong)(0x20 - (int)uVar51);
                      }
                      iVar24 = (int)uVar51;
                      if ((int)uVar1 < iVar24 + 0x20) goto LAB_140abe73d;
                      uVar49 = uVar1 - (uVar1 - iVar24 & 0x1f);
                      uVar47 = 0;
                      if (iVar24 != 0) {
                        do {
                          pbVar26[uVar47] = *(byte *)(uVar47 + lVar33);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar33);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar5 = pbVar26 + uVar51;
                      *(undefined8 *)pbVar5 = *puVar4;
                      *(undefined8 *)(pbVar5 + 8) = uVar16;
                      *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar1) {
                    lVar25 = (longlong)(int)uVar49;
                    uVar51 = lVar67 - lVar25;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                             *(undefined8 *)(lVar33 + lVar25 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar33 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  uVar45 = iVar72 + 2 + iVar30;
                  goto LAB_140abb614;
                }
              }
              iVar24 = 1;
              if (uVar76 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar3 + lStack_70 + uVar47 * 2);
                  param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar3 + lStack_70 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                uVar45 = iVar72 + (int)uVar51 * 2;
                iVar24 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar24 - 1U < uVar1) {
                uVar45 = iVar72 + iVar24;
                param_3[(longlong)iVar24 + -1 + lVar25] = *(byte *)(lVar3 + iVar24 + -1 + lStack_70)
                ;
              }
              goto LAB_140abb614;
            }
            uVar45 = uVar45 + 2;
            param_3[lVar25] = *(byte *)(lStack_70 + -2 + lVar3);
            param_3[lVar25 + 1] = *(byte *)(lStack_70 + -1 + lVar3);
            lVar25 = (longlong)(int)uVar45;
            if (uVar77 == 0) {
              if (0 < (int)uVar1) goto LAB_140abb257;
            }
            else if (0 < (int)uVar1) goto LAB_140abb3d0;
          }
          lVar33 = (int)uVar45 - lVar65;
        }
        else {
LAB_140aba2c9:
          if (uVar49 == 1) {
            uVar49 = 0;
            lVar25 = lVar50 * uVar36;
            bVar13 = *(byte *)(param_1 + lVar25);
            uVar45 = 0;
            if (uVar75 == 0) {
              if (0 < (int)param_5) {
                if ((int)param_5 < 0x20) {
LAB_140abe60f:
                  uVar49 = 0;
                }
                else {
                  if ((int)param_5 < 0x871) {
                    uVar51 = 0;
                    uVar49 = uVar68;
                  }
                  else {
                    if ((int)param_5 < iVar35) goto LAB_140abe60f;
                    uVar47 = 0;
                    uVar51 = uVar60;
                    uVar49 = uVar41;
                    if (iVar58 != 0) {
                      do {
                        param_3[uVar47] = bVar13;
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar60);
                    }
                  }
                  do {
                    pbVar26 = param_3 + uVar51;
                    *pbVar26 = bVar13;
                    pbVar26[1] = bVar13;
                    pbVar26[2] = bVar13;
                    pbVar26[3] = bVar13;
                    pbVar26[4] = bVar13;
                    pbVar26[5] = bVar13;
                    pbVar26[6] = bVar13;
                    pbVar26[7] = bVar13;
                    pbVar26[8] = bVar13;
                    pbVar26[9] = bVar13;
                    pbVar26[10] = bVar13;
                    pbVar26[0xb] = bVar13;
                    pbVar26[0xc] = bVar13;
                    pbVar26[0xd] = bVar13;
                    pbVar26[0xe] = bVar13;
                    pbVar26[0xf] = bVar13;
                    pbVar26[0x10] = bVar13;
                    pbVar26[0x11] = bVar13;
                    pbVar26[0x12] = bVar13;
                    pbVar26[0x13] = bVar13;
                    pbVar26[0x14] = bVar13;
                    pbVar26[0x15] = bVar13;
                    pbVar26[0x16] = bVar13;
                    pbVar26[0x17] = bVar13;
                    pbVar26[0x18] = bVar13;
                    pbVar26[0x19] = bVar13;
                    pbVar26[0x1a] = bVar13;
                    pbVar26[0x1b] = bVar13;
                    pbVar26[0x1c] = bVar13;
                    pbVar26[0x1d] = bVar13;
                    pbVar26[0x1e] = bVar13;
                    pbVar26[0x1f] = bVar13;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                uVar45 = uVar49;
                if (uVar49 + 1 <= param_5) {
                  lVar33 = (longlong)(int)uVar49;
                  uVar51 = lVar46 - lVar33;
                  if ((longlong)uVar51 < 8) {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = (uint)uVar51 & 0xfffffff8;
                    uVar47 = 0;
                    do {
                      *(ulonglong *)(param_3 + uVar47 + lVar33) =
                           CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(
                                                  bVar13,CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))
                                                  ));
                      uVar47 = uVar47 + 8;
                    } while (uVar47 < (ulonglong)(longlong)(int)uVar31);
                    uVar45 = uVar49 + uVar31;
                  }
                  uVar47 = (ulonglong)(int)uVar31;
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar33] = bVar13;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                    uVar45 = (int)uVar47 + uVar49;
                  }
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar33 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar25), lVar33 < lVar46
                  && (-lVar33 < lVar46)))) {
                uVar31 = 1;
                if (uVar63 != 0) {
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2] = *(byte *)(lVar32 + lVar25 + uVar47 * 2);
                    param_3[uVar47 * 2 + 1] = *(byte *)(lVar32 + lVar25 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar66);
                  uVar49 = (int)uVar51 * 2;
                  uVar31 = (int)uVar47 + 2 + (int)uVar51;
                }
                uVar45 = uVar49;
                if (uVar31 - 1 < param_5) {
                  param_3[(longlong)(int)uVar31 + -1] =
                       *(byte *)((longlong)(int)uVar31 + -1 + lVar25 + lVar32);
                  uVar45 = uVar31;
                }
              }
              else {
                if ((int)param_5 < 0x20) {
LAB_140abe62e:
                  uVar49 = 0;
                }
                else {
                  if ((int)param_5 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar68;
                  }
                  else {
                    if ((int)param_5 < iVar35) goto LAB_140abe62e;
                    uVar47 = 0;
                    uVar51 = uVar60;
                    uVar49 = uVar41;
                    if (iVar58 != 0) {
                      do {
                        param_3[uVar47] = *(byte *)(uVar47 + lVar25 + lVar32);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar60);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar25 + lVar32);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar26 = param_3 + uVar51;
                    *(undefined8 *)pbVar26 = *puVar4;
                    *(undefined8 *)(pbVar26 + 8) = uVar16;
                    *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                uVar45 = param_5;
                if (uVar49 + 1 <= param_5) {
                  lVar33 = (longlong)(int)uVar49;
                  uVar51 = lVar46 - lVar33;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(param_3 + uVar56 + lVar33) =
                           *(undefined8 *)(lVar32 + lVar25 + lVar33 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar33] = *(byte *)(uVar47 + lVar32 + lVar25 + lVar33);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
              }
            }
            if (0 < (int)(uint)param_6) {
              if (uVar48 < 7) {
LAB_140abe205:
                iVar72 = 1;
                uVar49 = uVar45;
                if (uVar70 != 0) {
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + (longlong)(int)uVar45] =
                         *(byte *)(param_1 + lVar25 + uVar47 * 2);
                    param_3[uVar47 * 2 + (longlong)(int)uVar45 + 1] =
                         *(byte *)(param_1 + lVar25 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar73);
                  uVar49 = uVar45 + (int)uVar51 * 2;
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < uVar48) {
                  uVar49 = iVar72 + uVar45;
                  param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar45] =
                       *(byte *)((longlong)iVar72 + -1 + param_1 + lVar25);
                }
              }
              else {
                pbVar26 = param_3 + (int)uVar45;
                lVar33 = param_1 + lVar25;
                if (((longlong)pbVar26 - lVar33 < (longlong)(ulonglong)uVar48) &&
                   (-((longlong)pbVar26 - lVar33) < (longlong)(ulonglong)uVar48))
                goto LAB_140abe205;
                if (uVar48 < 0x20) {
LAB_140abe658:
                  uVar49 = 0;
                }
                else {
                  if (uVar48 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar38;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar26 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if (uVar48 < iVar72 + 0x20U) goto LAB_140abe658;
                    uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                    uVar47 = 0;
                    if (iVar72 != 0) {
                      do {
                        pbVar26[uVar47] = *(byte *)(uVar47 + lVar33);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar33);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar5 = pbVar26 + uVar51;
                    *(undefined8 *)pbVar5 = *puVar4;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar48) {
                  uVar31 = uVar48 - uVar49;
                  if (uVar31 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar31 & 0xfffffff8;
                    uVar23 = 0;
                    lVar61 = 0;
                    do {
                      iVar72 = uVar23 + uVar49;
                      uVar23 = uVar23 + 8;
                      *(undefined8 *)(param_3 + lVar61 + (int)(uVar49 + uVar45)) =
                           *(undefined8 *)(iVar72 + lVar33);
                      lVar61 = lVar61 + 8;
                    } while (uVar23 < uVar44);
                  }
                  lVar61 = (longlong)(int)uVar44;
                  lVar62 = (longlong)(int)(uVar49 + uVar44);
                  if (uVar44 < uVar31) {
                    do {
                      uVar44 = uVar44 + 1;
                      param_3[lVar61 + (int)(uVar49 + uVar45)] = *(byte *)(lVar62 + lVar33);
                      lVar61 = lVar61 + 1;
                      lVar62 = lVar62 + 1;
                    } while (uVar44 < uVar31);
                  }
                }
                uVar49 = uVar45 + uVar48;
              }
              uVar45 = uVar49;
              if (2 < (int)(uint)param_6) {
                uVar45 = uVar49 + 2;
                param_3[(int)uVar49] = *(byte *)(lVar3 + -2 + lVar25);
                param_3[(longlong)(int)uVar49 + 1] = *(byte *)(lVar3 + -1 + lVar25);
              }
            }
            lVar33 = (longlong)(int)uVar45;
            bVar13 = *(byte *)(lVar3 + -1 + lVar25);
            uVar49 = uVar45;
            if (uVar77 == 0) {
              if (0 < (int)uVar1) {
                if ((int)uVar1 < 0x20) {
LAB_140abe677:
                  uVar31 = 0;
                }
                else {
                  pbVar26 = param_3 + lVar33;
                  if ((int)uVar1 < 0x871) {
                    uVar51 = 0;
                    uVar31 = uVar69;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar26 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abe677;
                    uVar47 = 0;
                    uVar31 = uVar1 - (uVar1 - iVar72 & 0x1f);
                    if (iVar72 != 0) {
                      do {
                        pbVar26[uVar47] = bVar13;
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    pbVar5 = pbVar26 + uVar51;
                    *pbVar5 = bVar13;
                    pbVar5[1] = bVar13;
                    pbVar5[2] = bVar13;
                    pbVar5[3] = bVar13;
                    pbVar5[4] = bVar13;
                    pbVar5[5] = bVar13;
                    pbVar5[6] = bVar13;
                    pbVar5[7] = bVar13;
                    pbVar5[8] = bVar13;
                    pbVar5[9] = bVar13;
                    pbVar5[10] = bVar13;
                    pbVar5[0xb] = bVar13;
                    pbVar5[0xc] = bVar13;
                    pbVar5[0xd] = bVar13;
                    pbVar5[0xe] = bVar13;
                    pbVar5[0xf] = bVar13;
                    pbVar5[0x10] = bVar13;
                    pbVar5[0x11] = bVar13;
                    pbVar5[0x12] = bVar13;
                    pbVar5[0x13] = bVar13;
                    pbVar5[0x14] = bVar13;
                    pbVar5[0x15] = bVar13;
                    pbVar5[0x16] = bVar13;
                    pbVar5[0x17] = bVar13;
                    pbVar5[0x18] = bVar13;
                    pbVar5[0x19] = bVar13;
                    pbVar5[0x1a] = bVar13;
                    pbVar5[0x1b] = bVar13;
                    pbVar5[0x1c] = bVar13;
                    pbVar5[0x1d] = bVar13;
                    pbVar5[0x1e] = bVar13;
                    pbVar5[0x1f] = bVar13;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar31);
                  uVar49 = uVar45 + uVar31;
                }
                if (uVar31 + 1 <= uVar1) {
                  lVar25 = (longlong)(int)uVar31;
                  uVar51 = lVar67 - lVar25;
                  if ((longlong)uVar51 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = (uint)uVar51 & 0xfffffff8;
                    uVar47 = 0;
                    do {
                      *(ulonglong *)(param_3 + uVar47 + lVar25 + lVar33) =
                           CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(
                                                  bVar13,CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))
                                                  ));
                      uVar47 = uVar47 + 8;
                    } while (uVar47 < (ulonglong)(longlong)(int)uVar44);
                    uVar49 = uVar45 + uVar31 + uVar44;
                  }
                  uVar47 = (ulonglong)(int)uVar44;
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar25 + lVar33] = bVar13;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                    lVar33 = (longlong)(int)((int)uVar47 + uVar45 + uVar31);
                    goto LAB_140abe5ef;
                  }
                }
LAB_140abe5ec:
                lVar33 = (longlong)(int)uVar49;
              }
            }
            else if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar26 = param_3 + lVar33;
                lVar61 = lVar25 + lVar3;
                if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                   (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                  if ((int)uVar1 < 0x20) {
LAB_140abe697:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar69;
                    }
                    else {
                      uVar51 = (ulonglong)pbVar26 & 0x1f;
                      if ((int)uVar51 != 0) {
                        uVar51 = (ulonglong)(0x20 - (int)uVar51);
                      }
                      iVar72 = (int)uVar51;
                      if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abe697;
                      uVar47 = 0;
                      uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                      if (iVar72 != 0) {
                        do {
                          pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar61);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar5 = pbVar26 + uVar51;
                      *(undefined8 *)pbVar5 = *puVar4;
                      *(undefined8 *)(pbVar5 + 8) = uVar16;
                      *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar1) {
                    lVar25 = (longlong)(int)uVar49;
                    uVar51 = lVar67 - lVar25;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                             *(undefined8 *)(lVar61 + lVar25 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  lVar33 = (longlong)(int)(uVar45 + 2 + iVar30);
                  goto LAB_140abe5ef;
                }
              }
              iVar72 = 1;
              if (uVar76 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar33] = *(byte *)(lVar25 + lVar3 + uVar47 * 2);
                  param_3[uVar47 * 2 + lVar33 + 1] = *(byte *)(lVar25 + lVar3 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                uVar49 = uVar45 + (int)uVar51 * 2;
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (uVar1 <= iVar72 - 1U) goto LAB_140abe5ec;
              param_3[(longlong)iVar72 + -1 + lVar33] =
                   *(byte *)((longlong)iVar72 + -1 + lVar25 + lVar3);
              lVar33 = (longlong)(int)(iVar72 + uVar45);
            }
LAB_140abe5ef:
            lVar33 = lVar33 - lVar65;
            if ((int)(uint)param_6 < 3) {
              lVar33 = lVar46;
            }
          }
          else if (uVar49 == 2) {
            lVar25 = lVar46;
            if (0 < (int)(uint)param_6) {
              if (uVar48 < 7) {
LAB_140abc9a1:
                iVar72 = 1;
                uVar49 = param_5;
                if (uVar70 != 0) {
                  lVar25 = lVar50 * uVar36 + param_1;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    pbVar2[uVar47 * 2] = *(byte *)(lVar25 + uVar47 * 2);
                    pbVar2[uVar47 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar73);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  uVar49 = param_5 + (int)uVar51 * 2;
                }
                if (iVar72 - 1U < uVar48) {
                  pbVar2[(longlong)iVar72 + -1] = *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar36)
                  ;
                  uVar49 = param_5 + iVar72;
                }
              }
              else {
                lVar25 = lVar50 * uVar36 + param_1;
                if (((longlong)pbVar2 - lVar25 < (longlong)(ulonglong)uVar48) &&
                   (-((longlong)pbVar2 - lVar25) < (longlong)(ulonglong)uVar48)) goto LAB_140abc9a1;
                if (uVar48 < 0x20) {
LAB_140abdbbe:
                  uVar45 = 0;
                }
                else {
                  if (uVar48 < 0xa71) {
                    uVar51 = 0;
                    uVar45 = uVar38;
                  }
                  else {
                    if (uVar48 < iVar53 + 0x20U) goto LAB_140abdbbe;
                    uVar47 = 0;
                    uVar51 = uVar55;
                    uVar45 = uVar34;
                    if (iVar53 != 0) {
                      do {
                        pbVar2[uVar47] = *(byte *)(uVar47 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar55);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar25);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar26 = pbVar2 + uVar51;
                    *(undefined8 *)pbVar26 = *puVar4;
                    *(undefined8 *)(pbVar26 + 8) = uVar16;
                    *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                }
                uVar49 = uVar52;
                if (uVar45 + 1 <= uVar48) {
                  uVar31 = uVar48 - uVar45;
                  if (uVar31 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar31 & 0xfffffff8;
                    uVar23 = 0;
                    lVar33 = 0;
                    do {
                      iVar72 = uVar23 + uVar45;
                      uVar23 = uVar23 + 8;
                      *(undefined8 *)(param_3 + lVar33 + (int)(param_5 + uVar45)) =
                           *(undefined8 *)(iVar72 + lVar25);
                      lVar33 = lVar33 + 8;
                    } while (uVar23 < uVar44);
                  }
                  lVar33 = (longlong)(int)uVar44;
                  lVar61 = (longlong)(int)(uVar45 + uVar44);
                  if (uVar44 < uVar31) {
                    do {
                      uVar44 = uVar44 + 1;
                      param_3[lVar33 + (int)(uVar45 + param_5)] = *(byte *)(lVar61 + lVar25);
                      lVar33 = lVar33 + 1;
                      lVar61 = lVar61 + 1;
                    } while (uVar44 < uVar31);
                  }
                }
              }
              lVar25 = (longlong)(int)uVar49;
              if (2 < (int)(uint)param_6) {
                lVar33 = lVar50 * uVar36;
                if (uVar75 == 0) {
                  lVar61 = lVar33 + lVar3;
                  if (-1 < (int)uVar39) {
                    if (((int)param_5 < 7) ||
                       ((pbVar26 = param_3 + ((lVar46 + -1) - (lVar33 + -1 + lVar3)),
                        (longlong)pbVar26 <= lVar46 &&
                        ((byte *)-lVar46 == pbVar26 || -(longlong)pbVar26 < lVar46)))) {
                      iVar72 = 1;
                      lVar62 = 0;
                      uVar51 = 0;
                      if (uVar63 != 0) {
                        do {
                          uVar47 = uVar51;
                          uVar51 = uVar47 + 1;
                          pbVar2[lVar62 + -1] = *(byte *)(lVar62 + -1 + lVar61);
                          pbVar2[lVar62 + -2] = *(byte *)(lVar62 + -2 + lVar61);
                          lVar62 = lVar62 + -2;
                        } while (uVar51 < uVar66);
                        iVar72 = (int)uVar47 + 2 + (int)uVar51;
                      }
                      if (iVar72 - 1U < param_5) {
                        pbVar2[-(longlong)iVar72] = *(byte *)(lVar61 - iVar72);
                      }
                    }
                    else {
                      if ((int)uVar40 < 0x20) {
LAB_140abdbdd:
                        uVar45 = 0;
                      }
                      else {
                        if ((int)uVar40 < 0xa71) {
                          uVar51 = 0;
                          lVar62 = lVar61 - lVar46;
                          uVar45 = uVar21;
                        }
                        else {
                          if ((int)uVar40 < iVar22) goto LAB_140abdbdd;
                          uVar47 = 0;
                          lVar62 = lVar61 - lVar46;
                          uVar51 = uVar74;
                          uVar45 = uVar27;
                          if (iVar71 != 0) {
                            do {
                              param_3[uVar47] = *(byte *)(uVar47 + lVar62);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar74);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar62);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar26 = param_3 + uVar51;
                          *(undefined8 *)pbVar26 = *puVar4;
                          *(undefined8 *)(pbVar26 + 8) = uVar16;
                          *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                      }
                      if (uVar45 + 1 <= uVar40) {
                        lVar62 = (longlong)(int)uVar45;
                        uVar51 = lVar42 - lVar62;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          uVar56 = 0;
                          do {
                            *(undefined8 *)(param_3 + uVar56 + lVar62) =
                                 *(undefined8 *)((lVar61 - lVar46) + lVar62 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            param_3[uVar47 + lVar62] =
                                 *(byte *)(uVar47 + (lVar61 - lVar46) + lVar62);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar39) {
                  if (6 < (int)param_5) {
                    pbVar26 = param_3 + ((lVar46 + -1) - (param_1 + -1 + lVar33));
                    lVar61 = param_1 + lVar33;
                    if ((lVar46 < (longlong)pbVar26) ||
                       ((byte *)-lVar46 != pbVar26 && lVar46 <= -(longlong)pbVar26)) {
                      if ((int)uVar40 < 0x20) {
LAB_140abdc05:
                        uVar45 = 0;
                      }
                      else {
                        if ((int)uVar40 < 0xa71) {
                          uVar51 = 0;
                          lVar62 = lVar61 - lVar46;
                          uVar45 = uVar21;
                        }
                        else {
                          if ((int)uVar40 < iVar22) goto LAB_140abdc05;
                          uVar47 = 0;
                          lVar62 = lVar61 - lVar46;
                          uVar51 = uVar74;
                          uVar45 = uVar27;
                          if (iVar71 != 0) {
                            do {
                              param_3[uVar47] = *(byte *)(uVar47 + lVar62);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar74);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar62);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar26 = param_3 + uVar51;
                          *(undefined8 *)pbVar26 = *puVar4;
                          *(undefined8 *)(pbVar26 + 8) = uVar16;
                          *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                      }
                      if (uVar45 + 1 <= uVar40) {
                        lVar62 = (longlong)(int)uVar45;
                        uVar51 = lVar42 - lVar62;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          uVar56 = 0;
                          do {
                            *(undefined8 *)(param_3 + uVar56 + lVar62) =
                                 *(undefined8 *)((lVar61 - lVar46) + lVar62 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            param_3[uVar47 + lVar62] =
                                 *(byte *)(uVar47 + (lVar61 - lVar46) + lVar62);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      goto LAB_140abceee;
                    }
                  }
                  iVar72 = 1;
                  lVar61 = 0;
                  if (uVar63 != 0) {
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      uVar51 = uVar47 + 1;
                      pbVar2[lVar61 + -1] = *(byte *)(lVar61 + -1 + param_1 + lVar33);
                      pbVar2[lVar61 + -2] = *(byte *)(lVar61 + -2 + param_1 + lVar33);
                      lVar61 = lVar61 + -2;
                    } while (uVar51 < uVar66);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar72 - 1U < param_5) {
                    pbVar2[-(longlong)iVar72] = *(byte *)((param_1 + lVar33) - (longlong)iVar72);
                  }
                }
LAB_140abceee:
                lVar61 = lVar33 + lVar3;
                param_3[lVar25] = *(byte *)(lVar61 + -2);
                param_3[lVar25 + 1] = *(byte *)(lVar61 + -1);
                iVar24 = uVar49 + 2;
                lVar25 = (longlong)iVar24;
                iVar72 = iVar24;
                if (uVar77 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      pbVar26 = param_3 + lVar25;
                      lVar61 = param_1 + lVar33;
                      if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                         (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                        if ((int)uVar1 < 0x20) {
LAB_140abdc2d:
                          uVar45 = 0;
                        }
                        else {
                          if ((int)uVar1 < 0xa71) {
                            uVar51 = 0;
                            uVar45 = uVar69;
                          }
                          else {
                            uVar51 = (ulonglong)pbVar26 & 0x1f;
                            if ((int)uVar51 != 0) {
                              uVar51 = (ulonglong)(0x20 - (int)uVar51);
                            }
                            iVar72 = (int)uVar51;
                            if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abdc2d;
                            uVar47 = 0;
                            uVar45 = uVar1 - (uVar1 - iVar72 & 0x1f);
                            if (iVar72 != 0) {
                              do {
                                pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                                uVar47 = uVar47 + 1;
                              } while (uVar47 < uVar51);
                            }
                          }
                          do {
                            puVar4 = (undefined8 *)(uVar51 + lVar61);
                            uVar16 = puVar4[1];
                            uVar17 = puVar4[2];
                            uVar18 = puVar4[3];
                            pbVar5 = pbVar26 + uVar51;
                            *(undefined8 *)pbVar5 = *puVar4;
                            *(undefined8 *)(pbVar5 + 8) = uVar16;
                            *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                            *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                            uVar51 = uVar51 + 0x20;
                          } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                        }
                        if (uVar45 + 1 <= uVar1) {
                          lVar25 = (longlong)(int)uVar45;
                          uVar51 = lVar67 - lVar25;
                          if ((longlong)uVar51 < 8) {
                            uVar47 = 0;
                          }
                          else {
                            uVar56 = 0;
                            uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                            do {
                              *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                                   *(undefined8 *)(lVar61 + lVar25 + uVar56);
                              uVar56 = uVar56 + 8;
                            } while (uVar56 < uVar47);
                          }
                          if (uVar47 < uVar51) {
                            do {
                              pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        lVar25 = (longlong)(int)(iVar30 + 4 + uVar49);
                        goto LAB_140abd2cc;
                      }
                    }
                    iVar54 = 1;
                    if (uVar76 != 0) {
                      uVar51 = 0;
                      do {
                        uVar47 = uVar51;
                        param_3[uVar47 * 2 + lVar25] = *(byte *)(param_1 + lVar33 + uVar47 * 2);
                        param_3[uVar47 * 2 + lVar25 + 1] =
                             *(byte *)(param_1 + lVar33 + 1 + uVar47 * 2);
                        uVar51 = uVar47 + 1;
                      } while (uVar51 < uVar79);
                      iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                      iVar54 = (int)uVar47 + 2 + (int)uVar51;
                    }
                    if (iVar54 - 1U < uVar1) {
                      param_3[(longlong)iVar54 + -1 + lVar25] =
                           *(byte *)((longlong)iVar54 + -1 + lVar33 + param_1);
                      lVar25 = (longlong)(iVar54 + iVar24);
                    }
                    else {
LAB_140abd2c9:
                      lVar25 = (longlong)iVar72;
                    }
                  }
                }
                else if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar26 = param_3 + lVar25;
                    if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                       (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                      if ((int)uVar1 < 0x20) {
LAB_140abdc4a:
                        uVar45 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar51 = 0;
                          uVar45 = uVar69;
                        }
                        else {
                          uVar51 = (ulonglong)pbVar26 & 0x1f;
                          if ((int)uVar51 != 0) {
                            uVar51 = (ulonglong)(0x20 - (int)uVar51);
                          }
                          iVar72 = (int)uVar51;
                          if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abdc4a;
                          uVar47 = 0;
                          uVar45 = uVar1 - (uVar1 - iVar72 & 0x1f);
                          if (iVar72 != 0) {
                            do {
                              pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar61);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar5 = pbVar26 + uVar51;
                          *(undefined8 *)pbVar5 = *puVar4;
                          *(undefined8 *)(pbVar5 + 8) = uVar16;
                          *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                      }
                      if (uVar45 + 1 <= uVar1) {
                        lVar25 = (longlong)(int)uVar45;
                        uVar51 = lVar67 - lVar25;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar56 = 0;
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                                 *(undefined8 *)(lVar61 + lVar25 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      lVar25 = (longlong)(int)(iVar30 + 4 + uVar49);
                      goto LAB_140abd2cc;
                    }
                  }
                  iVar54 = 1;
                  uVar51 = 0;
                  if (uVar76 != 0) {
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar61 + uVar47 * 2);
                      param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar61 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                    iVar54 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (uVar1 <= iVar54 - 1U) goto LAB_140abd2c9;
                  param_3[(longlong)iVar54 + -1 + lVar25] =
                       *(byte *)((longlong)iVar54 + -1 + lVar61);
                  lVar25 = (longlong)(iVar54 + iVar24);
                }
LAB_140abd2cc:
                lVar33 = lVar25 - lVar65;
                goto LAB_140abb640;
              }
            }
            if (uVar75 == 0) {
              if (-1 < (int)uVar39) {
                if (((int)param_5 < 7) ||
                   ((pbVar26 = param_3 + ((lVar46 + -1) - (longlong)(pbVar2 + lVar37 + -1)),
                    (longlong)pbVar26 <= lVar46 &&
                    ((byte *)-lVar46 == pbVar26 || -(longlong)pbVar26 < lVar46)))) {
                  iVar72 = 1;
                  lVar33 = 0;
                  uVar51 = 0;
                  if (uVar63 != 0) {
                    do {
                      uVar47 = uVar51;
                      uVar51 = uVar47 + 1;
                      pbVar2[lVar33 + -1] = pbVar2[lVar33 + -1 + lVar37];
                      pbVar2[lVar33 + -2] = pbVar2[lVar33 + -2 + lVar37];
                      lVar33 = lVar33 + -2;
                    } while (uVar51 < uVar66);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar72 - 1U < param_5) {
                    pbVar2[-(longlong)iVar72] = pbVar2[lVar37 - iVar72];
                  }
                }
                else {
                  if ((int)uVar40 < 0x20) {
LAB_140abdc68:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar40 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar21;
                    }
                    else {
                      if ((int)uVar40 < iVar22) goto LAB_140abdc68;
                      uVar47 = 0;
                      uVar51 = uVar74;
                      uVar49 = uVar27;
                      if (iVar71 != 0) {
                        do {
                          param_3[uVar47] = pbVar2[uVar47 + lVar19];
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar74);
                      }
                    }
                    do {
                      pbVar26 = pbVar2 + uVar51 + lVar19;
                      uVar16 = *(undefined8 *)(pbVar26 + 8);
                      uVar17 = *(undefined8 *)(pbVar26 + 0x10);
                      uVar18 = *(undefined8 *)(pbVar26 + 0x18);
                      pbVar5 = param_3 + uVar51;
                      *(undefined8 *)pbVar5 = *(undefined8 *)pbVar26;
                      *(undefined8 *)(pbVar5 + 8) = uVar16;
                      *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar40) {
                    lVar33 = (longlong)(int)uVar49;
                    uVar51 = lVar42 - lVar33;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(param_3 + uVar56 + lVar33) =
                             *(undefined8 *)(pbVar2 + uVar56 + lVar33 + lVar19);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        param_3[uVar47 + lVar33] = pbVar2[uVar47 + lVar33 + lVar19];
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                }
              }
            }
            else if (-1 < (int)uVar39) {
              if (6 < (int)param_5) {
                lVar33 = param_1 + lVar50 * uVar36;
                pbVar26 = param_3 + ((lVar46 + -1) - (lVar33 + -1));
                if ((lVar46 < (longlong)pbVar26) ||
                   ((byte *)-lVar46 != pbVar26 && lVar46 <= -(longlong)pbVar26)) {
                  if ((int)uVar40 < 0x20) {
LAB_140abdc87:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar40 < 0xa71) {
                      uVar51 = 0;
                      lVar61 = lVar33 - lVar46;
                      uVar49 = uVar21;
                    }
                    else {
                      if ((int)uVar40 < iVar22) goto LAB_140abdc87;
                      uVar47 = 0;
                      lVar61 = lVar33 - lVar46;
                      uVar51 = uVar74;
                      uVar49 = uVar27;
                      if (iVar71 != 0) {
                        do {
                          param_3[uVar47] = *(byte *)(uVar47 + lVar61);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar74);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar61);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar26 = param_3 + uVar51;
                      *(undefined8 *)pbVar26 = *puVar4;
                      *(undefined8 *)(pbVar26 + 8) = uVar16;
                      *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar40) {
                    lVar61 = (longlong)(int)uVar49;
                    uVar51 = lVar42 - lVar61;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      uVar56 = 0;
                      do {
                        *(undefined8 *)(param_3 + uVar56 + lVar61) =
                             *(undefined8 *)((lVar33 - lVar46) + lVar61 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        param_3[uVar47 + lVar61] = *(byte *)(uVar47 + (lVar33 - lVar46) + lVar61);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  goto LAB_140abd77e;
                }
              }
              iVar72 = 1;
              lVar33 = 0;
              if (uVar63 != 0) {
                lVar61 = lVar50 * uVar36 + param_1;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  uVar51 = uVar47 + 1;
                  pbVar2[lVar33 + -1] = *(byte *)(lVar33 + -1 + lVar61);
                  pbVar2[lVar33 + -2] = *(byte *)(lVar33 + -2 + lVar61);
                  lVar33 = lVar33 + -2;
                } while (uVar51 < uVar66);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < param_5) {
                pbVar2[-(longlong)iVar72] = *(byte *)((param_1 - iVar72) + lVar50 * uVar36);
              }
            }
LAB_140abd77e:
            if (uVar77 == 0) {
              lVar33 = lVar46;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar26 = param_3 + lVar25;
                  pbVar5 = param_3 + (lVar25 - lVar37);
                  if ((2 - lVar46 <= (longlong)pbVar26 - (longlong)pbVar5) ||
                     (2 - lVar46 <= -((longlong)pbVar26 - (longlong)pbVar5))) {
                    if ((int)uVar1 < 0x20) {
LAB_140abdcb0:
                      uVar49 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar49 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar26 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abdcb0;
                        uVar47 = 0;
                        uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar26[uVar47] = pbVar5[uVar47];
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        pbVar6 = pbVar5 + uVar51;
                        uVar16 = *(undefined8 *)(pbVar6 + 8);
                        uVar17 = *(undefined8 *)(pbVar6 + 0x10);
                        uVar18 = *(undefined8 *)(pbVar6 + 0x18);
                        pbVar7 = pbVar26 + uVar51;
                        *(undefined8 *)pbVar7 = *(undefined8 *)pbVar6;
                        *(undefined8 *)(pbVar7 + 8) = uVar16;
                        *(undefined8 *)(pbVar7 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar7 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                    }
                    if (uVar49 + 1 <= uVar1) {
                      lVar25 = (longlong)(int)uVar49;
                      uVar51 = lVar67 - lVar25;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                               *(undefined8 *)(pbVar5 + uVar56 + lVar25);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      for (; uVar47 < uVar51; uVar47 = uVar47 + 1) {
                        pbVar26[uVar47 + lVar25] = pbVar5[uVar47 + lVar25];
                      }
                    }
                    goto LAB_140abb640;
                  }
                }
                iVar72 = 1;
                if (uVar76 != 0) {
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar25] = param_3[uVar47 * 2 + (lVar25 - lVar37)];
                    param_3[uVar47 * 2 + lVar25 + 1] = param_3[uVar47 * 2 + (lVar25 - lVar37) + 1];
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < uVar1) {
                  param_3[(longlong)iVar72 + -1 + lVar25] =
                       param_3[(longlong)iVar72 + -1 + (lVar25 - lVar37)];
                }
              }
            }
            else {
              lVar33 = lVar46;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar26 = param_3 + lVar25;
                  lVar61 = lVar50 * uVar36 + lVar3;
                  if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                     (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                    if ((int)uVar1 < 0x20) {
LAB_140abdcd0:
                      uVar49 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar49 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar26 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abdcd0;
                        uVar47 = 0;
                        uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        puVar4 = (undefined8 *)(uVar51 + lVar61);
                        uVar16 = puVar4[1];
                        uVar17 = puVar4[2];
                        uVar18 = puVar4[3];
                        pbVar5 = pbVar26 + uVar51;
                        *(undefined8 *)pbVar5 = *puVar4;
                        *(undefined8 *)(pbVar5 + 8) = uVar16;
                        *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                    }
                    if (uVar49 + 1 <= uVar1) {
                      lVar25 = (longlong)(int)uVar49;
                      uVar51 = lVar67 - lVar25;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                               *(undefined8 *)(lVar61 + lVar25 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    goto LAB_140abb640;
                  }
                }
                iVar72 = 1;
                if (uVar76 != 0) {
                  lVar33 = lVar50 * uVar36 + lVar3;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + uVar47 * 2);
                    param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar33 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                lVar33 = lVar46;
                if (iVar72 - 1U < uVar1) {
                  param_3[(longlong)iVar72 + -1 + lVar25] =
                       *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar36);
                }
              }
            }
          }
          else if (uVar49 == 3) {
            lVar25 = lVar46;
            if (0 < (int)(uint)param_6) {
              if (uVar48 < 7) {
LAB_140abbba0:
                iVar72 = 1;
                uVar49 = param_5;
                if (uVar70 != 0) {
                  lVar25 = lVar50 * uVar36 + param_1;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    pbVar2[uVar47 * 2] = *(byte *)(lVar25 + uVar47 * 2);
                    pbVar2[uVar47 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar73);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  uVar49 = param_5 + (int)uVar51 * 2;
                }
                if (iVar72 - 1U < uVar48) {
                  pbVar2[(longlong)iVar72 + -1] = *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar36)
                  ;
                  uVar49 = param_5 + iVar72;
                }
              }
              else {
                lVar25 = lVar50 * uVar36 + param_1;
                if (((longlong)pbVar2 - lVar25 < (longlong)(ulonglong)uVar48) &&
                   (-((longlong)pbVar2 - lVar25) < (longlong)(ulonglong)uVar48)) goto LAB_140abbba0;
                if (uVar48 < 0x20) {
LAB_140abc782:
                  uVar45 = 0;
                }
                else {
                  if (uVar48 < 0xa71) {
                    uVar51 = 0;
                    uVar45 = uVar38;
                  }
                  else {
                    if (uVar48 < iVar53 + 0x20U) goto LAB_140abc782;
                    uVar47 = 0;
                    uVar51 = uVar55;
                    uVar45 = uVar34;
                    if (iVar53 != 0) {
                      do {
                        pbVar2[uVar47] = *(byte *)(uVar47 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar55);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar25);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar26 = pbVar2 + uVar51;
                    *(undefined8 *)pbVar26 = *puVar4;
                    *(undefined8 *)(pbVar26 + 8) = uVar16;
                    *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                }
                uVar49 = uVar52;
                if (uVar45 + 1 <= uVar48) {
                  uVar31 = uVar48 - uVar45;
                  if (uVar31 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar31 & 0xfffffff8;
                    uVar23 = 0;
                    lVar33 = 0;
                    do {
                      iVar72 = uVar23 + uVar45;
                      uVar23 = uVar23 + 8;
                      *(undefined8 *)(param_3 + lVar33 + (int)(param_5 + uVar45)) =
                           *(undefined8 *)(iVar72 + lVar25);
                      lVar33 = lVar33 + 8;
                    } while (uVar23 < uVar44);
                  }
                  lVar33 = (longlong)(int)uVar44;
                  lVar61 = (longlong)(int)(uVar45 + uVar44);
                  if (uVar44 < uVar31) {
                    do {
                      uVar44 = uVar44 + 1;
                      param_3[lVar33 + (int)(uVar45 + param_5)] = *(byte *)(lVar61 + lVar25);
                      lVar33 = lVar33 + 1;
                      lVar61 = lVar61 + 1;
                    } while (uVar44 < uVar31);
                  }
                }
              }
              lVar25 = (longlong)(int)uVar49;
              if (2 < (int)(uint)param_6) {
                if (uVar75 == 0) {
                  if (-1 < (int)uVar39) {
                    iVar72 = 1;
                    lVar33 = 0;
                    if (uVar63 != 0) {
                      lVar61 = param_1 + uVar59 + lVar50 * uVar36;
                      uVar51 = 0;
                      do {
                        uVar47 = uVar51;
                        pbVar2[lVar33 + -1] = *(byte *)(lVar61 + uVar47 * 2);
                        uVar51 = uVar47 + 1;
                        pbVar2[lVar33 + -2] = *(byte *)(lVar61 + 1 + uVar47 * 2);
                        lVar33 = lVar33 + -2;
                      } while (uVar51 < uVar66);
                      iVar72 = (int)uVar47 + 2 + (int)uVar51;
                    }
                    if (iVar72 - 1U < param_5) {
                      pbVar2[-(longlong)iVar72] =
                           *(byte *)((longlong)iVar72 + -1 + lVar50 * uVar36 + param_1 + uVar59);
                    }
                  }
                }
                else {
                  lVar33 = lVar50 * uVar36;
                  if (-1 < (int)uVar39) {
                    if (6 < (int)param_5) {
                      pbVar26 = param_3 + ((lVar46 + -1) - (param_1 + -1 + lVar33));
                      lVar61 = param_1 + lVar33;
                      if ((lVar46 < (longlong)pbVar26) ||
                         ((byte *)-lVar46 != pbVar26 && lVar46 <= -(longlong)pbVar26)) {
                        if ((int)uVar40 < 0x20) {
LAB_140abc7a0:
                          uVar45 = 0;
                        }
                        else {
                          if ((int)uVar40 < 0xa71) {
                            uVar51 = 0;
                            lVar33 = lVar61 - lVar46;
                            uVar45 = uVar21;
                          }
                          else {
                            if ((int)uVar40 < iVar22) goto LAB_140abc7a0;
                            uVar47 = 0;
                            lVar33 = lVar61 - lVar46;
                            uVar51 = uVar74;
                            uVar45 = uVar27;
                            if (iVar71 != 0) {
                              do {
                                param_3[uVar47] = *(byte *)(uVar47 + lVar33);
                                uVar47 = uVar47 + 1;
                              } while (uVar47 < uVar74);
                            }
                          }
                          do {
                            puVar4 = (undefined8 *)(uVar51 + lVar33);
                            uVar16 = puVar4[1];
                            uVar17 = puVar4[2];
                            uVar18 = puVar4[3];
                            pbVar26 = param_3 + uVar51;
                            *(undefined8 *)pbVar26 = *puVar4;
                            *(undefined8 *)(pbVar26 + 8) = uVar16;
                            *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                            *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                            uVar51 = uVar51 + 0x20;
                          } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                        }
                        if (uVar45 + 1 <= uVar40) {
                          lVar33 = (longlong)(int)uVar45;
                          uVar51 = lVar42 - lVar33;
                          if ((longlong)uVar51 < 8) {
                            uVar47 = 0;
                          }
                          else {
                            uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                            uVar56 = 0;
                            do {
                              *(undefined8 *)(param_3 + uVar56 + lVar33) =
                                   *(undefined8 *)((lVar61 - lVar46) + lVar33 + uVar56);
                              uVar56 = uVar56 + 8;
                            } while (uVar56 < uVar47);
                          }
                          if (uVar47 < uVar51) {
                            do {
                              param_3[uVar47 + lVar33] =
                                   *(byte *)(uVar47 + (lVar61 - lVar46) + lVar33);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        goto LAB_140abbf75;
                      }
                    }
                    iVar72 = 1;
                    lVar61 = 0;
                    if (uVar63 != 0) {
                      uVar51 = 0;
                      do {
                        uVar47 = uVar51;
                        uVar51 = uVar47 + 1;
                        pbVar2[lVar61 + -1] = *(byte *)(lVar61 + -1 + param_1 + lVar33);
                        pbVar2[lVar61 + -2] = *(byte *)(lVar61 + -2 + param_1 + lVar33);
                        lVar61 = lVar61 + -2;
                      } while (uVar51 < uVar66);
                      iVar72 = (int)uVar47 + 2 + (int)uVar51;
                    }
                    if (iVar72 - 1U < param_5) {
                      pbVar2[-(longlong)iVar72] = *(byte *)((param_1 + lVar33) - (longlong)iVar72);
                    }
                  }
                }
LAB_140abbf75:
                lVar61 = lVar50 * uVar36;
                lVar33 = lVar61 + lVar3;
                param_3[lVar25] = *(byte *)(lVar33 + -2);
                param_3[lVar25 + 1] = *(byte *)(lVar33 + -1);
                iVar24 = uVar49 + 2;
                lVar25 = (longlong)iVar24;
                iVar72 = iVar24;
                if (uVar77 == 0) {
                  if (0 < (int)uVar1) {
                    iVar54 = 1;
                    lVar33 = 0;
                    if (uVar76 != 0) {
                      lVar62 = lVar61 + (lVar3 - uVar59);
                      uVar51 = 0;
                      do {
                        uVar47 = uVar51;
                        param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + -1 + lVar62);
                        lVar43 = lVar33 + -2;
                        lVar33 = lVar33 + -2;
                        param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar43 + lVar62);
                        uVar51 = uVar47 + 1;
                      } while (uVar51 < uVar79);
                      iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                      iVar54 = (int)uVar47 + 2 + (int)uVar51;
                    }
                    if (iVar54 - 1U < uVar1) {
                      param_3[(longlong)iVar54 + -1 + lVar25] =
                           *(byte *)((lVar61 + (lVar3 - uVar59)) - (longlong)iVar54);
                      lVar25 = (longlong)(iVar54 + iVar24);
                    }
                    else {
LAB_140abc229:
                      lVar25 = (longlong)iVar72;
                    }
                  }
                }
                else if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar26 = param_3 + lVar25;
                    if ((2 - lVar46 <= (longlong)pbVar26 - lVar33) ||
                       (2 - lVar46 <= -((longlong)pbVar26 - lVar33))) {
                      if ((int)uVar1 < 0x20) {
LAB_140abc7cb:
                        uVar45 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar51 = 0;
                          uVar45 = uVar69;
                        }
                        else {
                          uVar51 = (ulonglong)pbVar26 & 0x1f;
                          if ((int)uVar51 != 0) {
                            uVar51 = (ulonglong)(0x20 - (int)uVar51);
                          }
                          iVar72 = (int)uVar51;
                          if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abc7cb;
                          uVar47 = 0;
                          uVar45 = uVar1 - (uVar1 - iVar72 & 0x1f);
                          if (iVar72 != 0) {
                            do {
                              pbVar26[uVar47] = *(byte *)(uVar47 + lVar33);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar33);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar5 = pbVar26 + uVar51;
                          *(undefined8 *)pbVar5 = *puVar4;
                          *(undefined8 *)(pbVar5 + 8) = uVar16;
                          *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar45);
                      }
                      if (uVar45 + 1 <= uVar1) {
                        lVar25 = (longlong)(int)uVar45;
                        uVar51 = lVar67 - lVar25;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar56 = 0;
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                                 *(undefined8 *)(lVar33 + lVar25 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar33 + lVar25);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      lVar25 = (longlong)(int)(iVar30 + 4 + uVar49);
                      goto LAB_140abc22c;
                    }
                  }
                  iVar54 = 1;
                  uVar51 = 0;
                  if (uVar76 != 0) {
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + uVar47 * 2);
                      param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar33 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                    iVar54 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (uVar1 <= iVar54 - 1U) goto LAB_140abc229;
                  param_3[(longlong)iVar54 + -1 + lVar25] =
                       *(byte *)((longlong)iVar54 + -1 + lVar33);
                  lVar25 = (longlong)(iVar54 + iVar24);
                }
LAB_140abc22c:
                lVar33 = lVar25 - lVar65;
                goto LAB_140abb640;
              }
            }
            uVar51 = (ulonglong)uVar39;
            if (uVar75 == 0) {
              uVar49 = uVar39;
              if (uVar77 == 0) {
                while (-1 < (int)uVar49) {
                  uVar49 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar47 = (ulonglong)(int)uVar51;
                    uVar51 = uVar47;
                    do {
                      if ((int)uVar51 < 0) break;
                      lVar25 = (longlong)(int)uVar49;
                      uVar49 = uVar49 + 1;
                      uVar51 = (ulonglong)((int)uVar51 - 1);
                      param_3[uVar47 - lVar25] = param_3[lVar25 + uVar59 + 1 + uVar47];
                    } while (uVar49 < uVar57);
                  }
                  uVar49 = (uint)uVar51;
                }
                uVar51 = 0;
                lVar33 = lVar46;
                iVar72 = iVar20;
                iVar24 = iVar20;
                iVar54 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                if ((int)param_5 < 2) {
                  do {
                    iVar28 = iVar54 + iVar72;
                    pbVar2[uVar51 + lVar37] = param_3[iVar54];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar28) || (iVar28 < (int)param_5)) {
                      iVar54 = iVar72 + iVar24;
                      iVar72 = -iVar72;
                      iVar28 = iVar28 - iVar54;
                      iVar24 = -iVar24;
                    }
                    uVar51 = uVar51 + 1;
                    iVar54 = iVar28;
                  } while (uVar51 < -lVar46 + 2U);
                }
              }
              else {
                if (-1 < (int)uVar39) {
                  iVar72 = 1;
                  lVar33 = 0;
                  if (uVar63 != 0) {
                    lVar61 = lVar50 * uVar36 + param_1;
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      pbVar2[lVar33 + -1] = *(byte *)(lVar61 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                      pbVar2[lVar33 + -2] = *(byte *)(lVar61 + 2 + uVar47 * 2);
                      lVar33 = lVar33 + -2;
                    } while (uVar51 < uVar66);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar72 - 1U < param_5) {
                    pbVar2[-(longlong)iVar72] = *(byte *)(param_1 + iVar72 + lVar50 * uVar36);
                  }
                }
LAB_140abc4c1:
                lVar33 = lVar46;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar26 = param_3 + lVar25;
                    lVar61 = lVar50 * uVar36 + lVar3;
                    if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                       (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                      if ((int)uVar1 < 0x20) {
LAB_140abc7e9:
                        uVar49 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar51 = 0;
                          uVar49 = uVar69;
                        }
                        else {
                          uVar51 = (ulonglong)pbVar26 & 0x1f;
                          if ((int)uVar51 != 0) {
                            uVar51 = (ulonglong)(0x20 - (int)uVar51);
                          }
                          iVar72 = (int)uVar51;
                          if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abc7e9;
                          uVar47 = 0;
                          uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                          if (iVar72 != 0) {
                            do {
                              pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar61);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar5 = pbVar26 + uVar51;
                          *(undefined8 *)pbVar5 = *puVar4;
                          *(undefined8 *)(pbVar5 + 8) = uVar16;
                          *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                      }
                      if (uVar49 + 1 <= uVar1) {
                        lVar25 = (longlong)(int)uVar49;
                        uVar51 = lVar67 - lVar25;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar56 = 0;
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                                 *(undefined8 *)(lVar61 + lVar25 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      goto LAB_140abb640;
                    }
                  }
                  iVar72 = 1;
                  if (uVar76 != 0) {
                    lVar33 = lVar50 * uVar36 + lVar3;
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + uVar47 * 2);
                      param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar33 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  lVar33 = lVar46;
                  if (iVar72 - 1U < uVar1) {
                    param_3[(longlong)iVar72 + -1 + lVar25] =
                         *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar36);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar39) {
                do {
                  uVar49 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar72 = (int)uVar51;
                    do {
                      if ((int)uVar51 < 0) break;
                      lVar33 = (longlong)(int)uVar49;
                      uVar49 = uVar49 + 1;
                      uVar51 = (ulonglong)((int)uVar51 - 1);
                      param_3[iVar72 - lVar33] =
                           *(byte *)(((longlong)iVar72 + lVar50 * uVar36 + lVar32) - lVar33);
                    } while (uVar49 < uVar57);
                  }
                } while (-1 < (int)uVar51);
              }
              if (uVar77 != 0) goto LAB_140abc4c1;
              lVar33 = lVar46;
              if (0 < (int)uVar1) {
                iVar72 = 1;
                lVar33 = 0;
                if (uVar76 != 0) {
                  lVar61 = lVar50 * uVar36 + lVar3;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + -2 + lVar61);
                    lVar62 = lVar33 + -3;
                    lVar33 = lVar33 + -2;
                    param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar62 + lVar61);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                lVar33 = lVar46;
                if (iVar72 - 1U < uVar1) {
                  param_3[(longlong)iVar72 + -1 + lVar25] =
                       *(byte *)((lVar3 - iVar72) + -1 + lVar50 * uVar36);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar49 = 0;
            uVar45 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar25 = lVar50 * uVar36;
                lVar33 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar25);
                if ((lVar46 <= lVar33) || (lVar46 <= -lVar33)) {
                  if ((int)param_5 < 0x20) {
LAB_140abb986:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)param_5 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar68;
                    }
                    else {
                      if ((int)param_5 < iVar35) goto LAB_140abb986;
                      uVar47 = 0;
                      uVar51 = uVar60;
                      uVar49 = uVar41;
                      if (iVar58 != 0) {
                        do {
                          param_3[uVar47] = *(byte *)(uVar47 + lVar25 + lVar32);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar60);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar25 + lVar32);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar26 = param_3 + uVar51;
                      *(undefined8 *)pbVar26 = *puVar4;
                      *(undefined8 *)(pbVar26 + 8) = uVar16;
                      *(undefined8 *)(pbVar26 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar26 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  uVar45 = param_5;
                  if (uVar49 + 1 <= param_5) {
                    lVar33 = (longlong)(int)uVar49;
                    uVar51 = lVar46 - lVar33;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(param_3 + uVar56 + lVar33) =
                             *(undefined8 *)(lVar32 + lVar25 + lVar33 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        param_3[uVar47 + lVar33] = *(byte *)(uVar47 + lVar25 + lVar32 + lVar33);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  goto LAB_140aba532;
                }
              }
              uVar31 = 1;
              if (uVar63 != 0) {
                lVar25 = lVar50 * uVar36 + lVar32;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2] = *(byte *)(lVar25 + uVar47 * 2);
                  param_3[uVar47 * 2 + 1] = *(byte *)(lVar25 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar66);
                uVar49 = (int)uVar51 * 2;
                uVar31 = (int)uVar47 + 2 + (int)uVar51;
              }
              uVar45 = uVar49;
              if (uVar31 - 1 < param_5) {
                param_3[(longlong)(int)uVar31 + -1] =
                     *(byte *)(lVar32 + (int)uVar31 + -1 + lVar50 * uVar36);
                uVar45 = uVar31;
              }
            }
LAB_140aba532:
            if (0 < (int)(uint)param_6) {
              if (uVar48 < 7) {
LAB_140aba6e4:
                iVar72 = 1;
                uVar49 = uVar45;
                if (uVar70 != 0) {
                  lVar25 = lVar50 * uVar36 + param_1;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + (longlong)(int)uVar45] = *(byte *)(lVar25 + uVar47 * 2);
                    param_3[uVar47 * 2 + (longlong)(int)uVar45 + 1] =
                         *(byte *)(lVar25 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar73);
                  uVar49 = uVar45 + (int)uVar51 * 2;
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < uVar48) {
                  param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar45] =
                       *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar36);
                  uVar49 = iVar72 + uVar45;
                }
              }
              else {
                pbVar26 = param_3 + (int)uVar45;
                lVar25 = lVar50 * uVar36 + param_1;
                if (((longlong)pbVar26 - lVar25 < (longlong)(ulonglong)uVar48) &&
                   (-((longlong)pbVar26 - lVar25) < (longlong)(ulonglong)uVar48))
                goto LAB_140aba6e4;
                if (uVar48 < 0x20) {
LAB_140abb9af:
                  uVar49 = 0;
                }
                else {
                  if (uVar48 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar38;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar26 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if (uVar48 < iVar72 + 0x20U) goto LAB_140abb9af;
                    uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                    uVar47 = 0;
                    if (iVar72 != 0) {
                      do {
                        pbVar26[uVar47] = *(byte *)(uVar47 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar25);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar5 = pbVar26 + uVar51;
                    *(undefined8 *)pbVar5 = *puVar4;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar48) {
                  uVar31 = uVar48 - uVar49;
                  if (uVar31 < 8) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar31 & 0xfffffff8;
                    uVar23 = 0;
                    lVar33 = 0;
                    do {
                      iVar72 = uVar23 + uVar49;
                      uVar23 = uVar23 + 8;
                      *(undefined8 *)(param_3 + lVar33 + (int)(uVar49 + uVar45)) =
                           *(undefined8 *)(iVar72 + lVar25);
                      lVar33 = lVar33 + 8;
                    } while (uVar23 < uVar44);
                  }
                  lVar33 = (longlong)(int)uVar44;
                  lVar61 = (longlong)(int)(uVar49 + uVar44);
                  if (uVar44 < uVar31) {
                    do {
                      uVar44 = uVar44 + 1;
                      param_3[lVar33 + (int)(uVar49 + uVar45)] = *(byte *)(lVar61 + lVar25);
                      lVar33 = lVar33 + 1;
                      lVar61 = lVar61 + 1;
                    } while (uVar44 < uVar31);
                  }
                }
                uVar49 = uVar45 + uVar48;
              }
              uVar45 = uVar49;
              if (2 < (int)(uint)param_6) {
                lVar33 = lVar50 * uVar36 + lVar3;
                param_3[(int)uVar45] = *(byte *)(lVar33 + -2);
                iVar72 = uVar45 + 2;
                param_3[(longlong)(int)uVar45 + 1] = *(byte *)(lVar33 + -1);
                lVar25 = (longlong)iVar72;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar26 = param_3 + lVar25;
                    if ((2 - lVar46 <= (longlong)pbVar26 - lVar33) ||
                       (2 - lVar46 <= -((longlong)pbVar26 - lVar33))) {
                      if ((int)uVar1 < 0x20) {
LAB_140abb9cf:
                        uVar49 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar51 = 0;
                          uVar49 = uVar69;
                        }
                        else {
                          uVar51 = (ulonglong)pbVar26 & 0x1f;
                          if ((int)uVar51 != 0) {
                            uVar51 = (ulonglong)(0x20 - (int)uVar51);
                          }
                          iVar72 = (int)uVar51;
                          if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abb9cf;
                          uVar47 = 0;
                          uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                          if (iVar72 != 0) {
                            do {
                              pbVar26[uVar47] = *(byte *)(uVar47 + lVar33);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar33);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar5 = pbVar26 + uVar51;
                          *(undefined8 *)pbVar5 = *puVar4;
                          *(undefined8 *)(pbVar5 + 8) = uVar16;
                          *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                      }
                      if (uVar49 + 1 <= uVar1) {
                        lVar25 = (longlong)(int)uVar49;
                        uVar51 = lVar67 - lVar25;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar56 = 0;
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                                 *(undefined8 *)(lVar33 + lVar25 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar33 + lVar25);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      lVar25 = (longlong)(int)(iVar30 + 4 + uVar45);
                      goto LAB_140aba98b;
                    }
                  }
                  iVar54 = 1;
                  uVar51 = 0;
                  iVar24 = iVar72;
                  if (uVar76 != 0) {
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + uVar47 * 2);
                      param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar33 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar24 = (int)uVar51 * 2 + 2 + uVar45;
                    iVar54 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar54 - 1U < uVar1) {
                    param_3[(longlong)iVar54 + -1 + lVar25] =
                         *(byte *)((longlong)iVar54 + -1 + lVar33);
                    lVar25 = (longlong)(iVar54 + iVar72);
                  }
                  else {
                    lVar25 = (longlong)iVar24;
                  }
                }
LAB_140aba98b:
                lVar33 = lVar25 - lVar65;
                goto LAB_140abb640;
              }
            }
            lVar25 = (longlong)(int)uVar45;
            lVar33 = lVar46;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar26 = param_3 + lVar25;
                lVar61 = lVar50 * uVar36 + lVar3;
                if ((2 - lVar46 <= (longlong)pbVar26 - lVar61) ||
                   (2 - lVar46 <= -((longlong)pbVar26 - lVar61))) {
                  if ((int)uVar1 < 0x20) {
LAB_140abb9ed:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar69;
                    }
                    else {
                      uVar51 = (ulonglong)pbVar26 & 0x1f;
                      if ((int)uVar51 != 0) {
                        uVar51 = (ulonglong)(0x20 - (int)uVar51);
                      }
                      iVar72 = (int)uVar51;
                      if ((int)uVar1 < iVar72 + 0x20) goto LAB_140abb9ed;
                      uVar47 = 0;
                      uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                      if (iVar72 != 0) {
                        do {
                          pbVar26[uVar47] = *(byte *)(uVar47 + lVar61);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar61);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar5 = pbVar26 + uVar51;
                      *(undefined8 *)pbVar5 = *puVar4;
                      *(undefined8 *)(pbVar5 + 8) = uVar16;
                      *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar1) {
                    lVar25 = (longlong)(int)uVar49;
                    uVar51 = lVar67 - lVar25;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(pbVar26 + uVar56 + lVar25) =
                             *(undefined8 *)(lVar61 + lVar25 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        pbVar26[uVar47 + lVar25] = *(byte *)(uVar47 + lVar61 + lVar25);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  goto LAB_140abb640;
                }
              }
              iVar72 = 1;
              if (uVar76 != 0) {
                lVar33 = lVar50 * uVar36 + lVar3;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar25] = *(byte *)(lVar33 + uVar47 * 2);
                  param_3[uVar47 * 2 + lVar25 + 1] = *(byte *)(lVar33 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              lVar33 = lVar46;
              if (iVar72 - 1U < uVar1) {
                param_3[(longlong)iVar72 + -1 + lVar25] =
                     *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar36);
              }
            }
          }
          else {
            lVar33 = 0;
          }
        }
LAB_140abb640:
        **(short **)(param_2 + uVar36 * 8) =
             (ushort)*param_3 + (ushort)param_3[1] + (ushort)param_3[2];
        if (0 < (int)uVar78) {
          lVar61 = lVar50 * uVar36;
          lVar25 = param_1 + lVar61;
          uVar51 = *(longlong *)(param_2 + uVar36 * 8) + 2;
          if (((longlong)(uVar51 - lVar25) < lVar37) &&
             ((longlong)-(uVar51 - lVar25) < lVar37 * 2 + -4)) {
            uVar51 = 0;
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar36 * 8) + 2 + uVar51 * 2) =
                   (ushort)*(byte *)(uVar51 + lVar25) + (ushort)*(byte *)(uVar51 + 1 + lVar25) +
                   (ushort)*(byte *)(uVar51 + 2 + lVar25);
              uVar51 = uVar51 + 1;
            } while (uVar51 < lVar37 - 2U);
          }
          else {
            if ((int)uVar78 < 0x20) {
LAB_140abe75c:
              uVar49 = 0;
            }
            else {
              if ((int)uVar78 < 0xe39) {
                uVar51 = 0;
                uVar49 = uVar78 & 0xffffffe0;
              }
              else {
                uVar45 = (uint)uVar51 & 0x1f;
                if ((uVar51 & 0x1f) != 0) {
                  if ((uVar51 & 1) != 0) goto LAB_140abe75c;
                  uVar45 = 0x20 - uVar45 >> 1;
                }
                uVar51 = (ulonglong)uVar45;
                if ((int)uVar78 < (int)(uVar45 + 0x20)) goto LAB_140abe75c;
                uVar47 = 0;
                uVar49 = uVar78 - (uVar78 - uVar45 & 0x1f);
                if (uVar45 != 0) {
                  do {
                    *(ushort *)(*(longlong *)(param_2 + uVar36 * 8) + 2 + uVar47 * 2) =
                         (ushort)*(byte *)(uVar47 + lVar25) + (ushort)*(byte *)(uVar47 + 1 + lVar25)
                         + (ushort)*(byte *)(uVar47 + 2 + lVar25);
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
              lVar62 = param_1 + lVar61;
              do {
                auVar8 = *(undefined1 (*) [32])(uVar51 + 1 + lVar62);
                auVar9 = *(undefined1 (*) [32])(uVar51 + 2 + lVar62);
                auVar14 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar51 + lVar62),0));
                auVar15 = vpmovzxbw_avx2(auVar8._0_16_);
                auVar14 = vpaddw_avx2(auVar14,auVar15);
                auVar15 = vpmovzxbw_avx2(SUB3216(*(undefined1 (*) [32])(uVar51 + lVar62),0x10));
                auVar8 = vpmovzxbw_avx2(auVar8._16_16_);
                auVar8 = vpaddw_avx2(auVar15,auVar8);
                auVar15 = vpmovzxbw_avx2(auVar9._0_16_);
                auVar14 = vpaddw_avx2(auVar14,auVar15);
                *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar36 * 8) + 2 + uVar51 * 2) =
                     auVar14;
                auVar9 = vpmovzxbw_avx2(auVar9._16_16_);
                auVar8 = vpaddw_avx2(auVar8,auVar9);
                *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar36 * 8) + 0x22 + uVar51 * 2) =
                     auVar8;
                uVar51 = uVar51 + 0x20;
              } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
            }
            if (uVar49 + 1 <= uVar78) {
              lVar62 = (longlong)(int)uVar49;
              uVar51 = (int)uVar78 - lVar62;
              if ((longlong)uVar51 < 8) {
                uVar47 = 0;
              }
              else {
                uVar56 = 0;
                uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                do {
                  lVar43 = (longlong)(int)uVar49 + lVar61 + param_1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = *(ulonglong *)(uVar56 + lVar43);
                  auVar10 = vpmovzxbw_avx(auVar10);
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = *(ulonglong *)(uVar56 + 1 + lVar43);
                  auVar11 = vpmovzxbw_avx(auVar11);
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(ulonglong *)(uVar56 + 2 + lVar43);
                  auVar12 = vpmovzxbw_avx(auVar12);
                  auVar10 = vpaddw_avx(auVar10,auVar11);
                  auVar10 = vpaddw_avx(auVar10,auVar12);
                  *(undefined1 (*) [16])
                   (*(longlong *)(param_2 + uVar36 * 8) + lVar62 * 2 + 2 + uVar56 * 2) = auVar10;
                  uVar56 = uVar56 + 8;
                } while (uVar56 < uVar47);
              }
              if (uVar47 < uVar51) {
                lVar25 = lVar25 + lVar62;
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar36 * 8) + lVar62 * 2 + 2 + uVar47 * 2) =
                       (ushort)*(byte *)(uVar47 + lVar25) + (ushort)*(byte *)(uVar47 + 1 + lVar25) +
                       (ushort)*(byte *)(uVar47 + 2 + lVar25);
                  uVar47 = uVar47 + 1;
                } while (uVar47 < uVar51);
              }
            }
          }
        }
        if ((int)(uint)param_6 < 2) goto LAB_140abb934;
        lVar25 = uVar36 * 8;
        uVar36 = uVar36 + 1;
        lStack_70 = lStack_70 + lVar50;
        *(ushort *)(*(longlong *)(param_2 + lVar25) + -2 + lVar37 * 2) =
             (ushort)param_3[lVar33] + (ushort)param_3[lVar33 + 1] + (ushort)param_3[lVar33 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar36) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar46 = 1;
      break;
    case 2:
      lVar46 = 2;
      break;
    case 3:
      lVar46 = 3;
      break;
    case 4:
      lVar46 = 4;
    }
    (*(code *)(&PTR_FUN_14308f608)[lVar46])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar50 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140abb934:
  uVar36 = uVar36 + 1;
  lStack_70 = lStack_70 + lVar50;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar36) {
    return 0;
  }
  goto LAB_140aba280;
}

