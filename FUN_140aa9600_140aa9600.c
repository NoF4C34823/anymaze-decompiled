
undefined8
FUN_140aa9600(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
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
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  ulonglong uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
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
  uint uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
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
      uVar30 = param_7 & 0xf;
      lVar39 = (longlong)(int)(uint)param_6;
      uVar52 = param_5 + uVar48;
      uVar60 = (ulonglong)(1 < (int)(uint)param_6);
      lVar33 = param_1 - lVar46;
      iVar31 = -param_5;
      lVar65 = -lVar46 + 4;
      uVar63 = param_5 >> 1;
      uVar66 = (ulonglong)uVar63;
      pbVar2 = param_3 + lVar46;
      uVar1 = iVar31 + 2;
      uVar68 = param_5 & 0xffffffe0;
      uVar75 = param_7 & 0x40;
      uVar69 = uVar1 & 0xffffffe0;
      uVar57 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar55 = (ulonglong)pbVar2 & 0x1f;
      uVar61 = (ulonglong)param_3 & 0x1f;
      uVar76 = uVar1 >> 1;
      uVar79 = (ulonglong)uVar76;
      uVar70 = uVar48 >> 1;
      uVar73 = (ulonglong)uVar70;
      lVar3 = param_1 + lVar39;
      lVar67 = (longlong)(int)uVar1;
      uVar77 = param_7 & 0x80;
      iVar20 = ((int)(uint)param_6 < 2) - 1;
      lVar19 = lVar39 - lVar46;
      uVar40 = uVar48 & 0xffffffe0;
      uVar78 = (uint)param_6 - 2;
      iVar22 = (int)uVar61;
      uVar41 = param_5 - 1;
      uVar74 = uVar61;
      if (iVar22 != 0) {
        uVar74 = (ulonglong)(0x20U - iVar22);
      }
      uVar42 = 0xffffffff - (iVar31 + -1);
      lVar44 = (longlong)(int)uVar42;
      iVar71 = (int)uVar74;
      if ((int)uVar55 != 0) {
        uVar55 = (ulonglong)(0x20 - (int)uVar55);
      }
      if (iVar22 != 0) {
        uVar61 = (ulonglong)(0x20U - iVar22);
      }
      uVar64 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar64 = uVar30;
      }
      iVar53 = (int)uVar55;
      uVar28 = uVar42 - (uVar42 - iVar71 & 0x1f);
      iVar58 = (int)uVar61;
      uVar36 = uVar48 - (uVar48 - iVar53 & 0x1f);
      uVar21 = uVar42 & 0xffffffe0;
      iVar37 = iVar58 + 0x20;
      uVar43 = param_5 - (param_5 - iVar58 & 0x1f);
      iVar22 = iVar71 + 0x20;
      uVar80 = CONCAT17(param_8,CONCAT16(param_8,CONCAT15(param_8,CONCAT14(param_8,CONCAT13(param_8,
                                                  CONCAT12(param_8,CONCAT11(param_8,param_8)))))));
      lVar23 = 0;
      uVar38 = 0;
LAB_140aa9a80:
      uVar49 = uVar64;
      if ((uint)param_6 == 1) goto joined_r0x000140aadfb7;
      do {
        uVar49 = uVar30;
joined_r0x000140aadfb7:
        lVar35 = lVar46;
        if (uVar30 == 6) {
          uVar32 = 0;
          uVar49 = 0;
          uVar59 = 0;
          if (uVar75 == 0) {
            if (0 < (int)param_5) {
              if (0x1f < (int)param_5) {
                if ((int)param_5 < 0x871) {
                  uVar51 = 0;
                  uVar32 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar37) goto LAB_140aaa497;
                  uVar47 = 0;
                  uVar51 = uVar61;
                  uVar32 = uVar43;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = param_8;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar61);
                  }
                }
                do {
                  pbVar27 = param_3 + uVar51;
                  *pbVar27 = param_8;
                  pbVar27[1] = param_8;
                  pbVar27[2] = param_8;
                  pbVar27[3] = param_8;
                  pbVar27[4] = param_8;
                  pbVar27[5] = param_8;
                  pbVar27[6] = param_8;
                  pbVar27[7] = param_8;
                  pbVar27[8] = param_8;
                  pbVar27[9] = param_8;
                  pbVar27[10] = param_8;
                  pbVar27[0xb] = param_8;
                  pbVar27[0xc] = param_8;
                  pbVar27[0xd] = param_8;
                  pbVar27[0xe] = param_8;
                  pbVar27[0xf] = param_8;
                  pbVar27[0x10] = param_8;
                  pbVar27[0x11] = param_8;
                  pbVar27[0x12] = param_8;
                  pbVar27[0x13] = param_8;
                  pbVar27[0x14] = param_8;
                  pbVar27[0x15] = param_8;
                  pbVar27[0x16] = param_8;
                  pbVar27[0x17] = param_8;
                  pbVar27[0x18] = param_8;
                  pbVar27[0x19] = param_8;
                  pbVar27[0x1a] = param_8;
                  pbVar27[0x1b] = param_8;
                  pbVar27[0x1c] = param_8;
                  pbVar27[0x1d] = param_8;
                  pbVar27[0x1e] = param_8;
                  pbVar27[0x1f] = param_8;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar32);
              }
LAB_140aaa497:
              uVar59 = uVar32;
              if (uVar32 + 1 <= param_5) {
                lVar26 = (longlong)(int)uVar32;
                uVar51 = lVar46 - lVar26;
                if ((longlong)uVar51 < 8) {
                  uVar49 = 0;
                }
                else {
                  uVar47 = 0;
                  uVar49 = (uint)uVar51 & 0xfffffff8;
                  do {
                    *(undefined8 *)(param_3 + uVar47 + lVar26) = uVar80;
                    uVar47 = uVar47 + 8;
                  } while (uVar47 < (ulonglong)(longlong)(int)uVar49);
                  uVar59 = uVar32 + uVar49;
                }
                uVar47 = (ulonglong)(int)uVar49;
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar26] = param_8;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                  uVar59 = (int)uVar47 + uVar32;
                }
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar26 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar23), lVar26 < lVar46 &&
                (-lVar26 < lVar46)))) {
              uVar32 = 1;
              if (uVar63 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2] = *(byte *)(lVar33 + lVar23 + uVar47 * 2);
                  param_3[uVar47 * 2 + 1] = *(byte *)(lVar33 + lVar23 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar66);
                uVar49 = (int)uVar51 * 2;
                uVar32 = (int)uVar47 + 2 + (int)uVar51;
              }
              uVar59 = uVar49;
              if (uVar32 - 1 < param_5) {
                param_3[(longlong)(int)uVar32 + -1] = *(byte *)(lVar33 + (int)uVar32 + -1 + lVar23);
                uVar59 = uVar32;
              }
            }
            else {
              if ((int)param_5 < 0x20) {
LAB_140aadf15:
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar37) goto LAB_140aadf15;
                  uVar47 = 0;
                  uVar51 = uVar61;
                  uVar49 = uVar43;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = *(byte *)(uVar47 + lVar33 + lVar23);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar61);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar33 + lVar23);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar27 = param_3 + uVar51;
                  *(undefined8 *)pbVar27 = *puVar4;
                  *(undefined8 *)(pbVar27 + 8) = uVar16;
                  *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              uVar59 = param_5;
              if (uVar49 + 1 <= param_5) {
                lVar26 = (longlong)(int)uVar49;
                uVar51 = lVar46 - lVar26;
                if ((longlong)uVar51 < 8) {
                  uVar47 = 0;
                }
                else {
                  uVar56 = 0;
                  uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                  do {
                    *(undefined8 *)(param_3 + uVar56 + lVar26) =
                         *(undefined8 *)(lVar33 + lVar23 + lVar26 + uVar56);
                    uVar56 = uVar56 + 8;
                  } while (uVar56 < uVar47);
                }
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar26] = *(byte *)(uVar47 + lVar33 + lVar23 + lVar26);
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
            }
          }
          if ((int)(uint)param_6 < 1) {
            lVar26 = (longlong)(int)uVar59;
            if (uVar77 != 0) goto LAB_140aaabc2;
LAB_140aaaa49:
            if ((int)uVar1 < 1) goto LAB_140aaae40;
LAB_140aaaa57:
            iVar72 = (int)lVar26;
            if ((int)uVar1 < 0x20) {
LAB_140aadf5e:
              uVar49 = 0;
            }
            else {
              pbVar27 = param_3 + lVar26;
              if ((int)uVar1 < 0x871) {
                uVar51 = 0;
                uVar49 = uVar69;
              }
              else {
                uVar51 = (ulonglong)pbVar27 & 0x1f;
                if ((int)uVar51 != 0) {
                  uVar51 = (ulonglong)(0x20 - (int)uVar51);
                }
                iVar25 = (int)uVar51;
                if ((int)uVar1 < iVar25 + 0x20) goto LAB_140aadf5e;
                uVar49 = uVar1 - (uVar1 - iVar25 & 0x1f);
                uVar47 = 0;
                if (iVar25 != 0) {
                  do {
                    pbVar27[uVar47] = param_8;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
              do {
                pbVar5 = pbVar27 + uVar51;
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
              uVar59 = iVar72 + uVar49;
            }
            if (uVar49 + 1 <= uVar1) {
              lVar34 = (longlong)(int)uVar49;
              uVar51 = lVar67 - lVar34;
              if ((longlong)uVar51 < 8) {
                uVar32 = 0;
              }
              else {
                uVar32 = (uint)uVar51 & 0xfffffff8;
                uVar47 = 0;
                do {
                  *(undefined8 *)(param_3 + uVar47 + lVar34 + lVar26) = uVar80;
                  uVar47 = uVar47 + 8;
                } while (uVar47 < (ulonglong)(longlong)(int)uVar32);
                uVar59 = iVar72 + uVar49 + uVar32;
              }
              uVar47 = (ulonglong)(int)uVar32;
              if (uVar47 < uVar51) {
                do {
                  param_3[uVar47 + lVar34 + lVar26] = param_8;
                  uVar47 = uVar47 + 1;
                } while (uVar47 < uVar51);
                uVar59 = (int)uVar47 + iVar72 + uVar49;
              }
            }
LAB_140aaae14:
            if ((int)(uint)param_6 < 3) goto LAB_140aaae40;
          }
          else {
            if (uVar48 < 7) {
LAB_140aaa946:
              iVar72 = 1;
              uVar49 = uVar59;
              if (uVar70 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + (longlong)(int)uVar59] =
                       *(byte *)(param_1 + lVar23 + uVar47 * 2);
                  param_3[uVar47 * 2 + (longlong)(int)uVar59 + 1] =
                       *(byte *)(param_1 + lVar23 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                uVar49 = uVar59 + (int)uVar51 * 2;
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar48) {
                param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar59] =
                     *(byte *)(param_1 + iVar72 + -1 + lVar23);
                uVar49 = iVar72 + uVar59;
              }
            }
            else {
              pbVar27 = param_3 + (int)uVar59;
              lVar26 = param_1 + lVar23;
              if (((longlong)pbVar27 - lVar26 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar27 - lVar26) < (longlong)(ulonglong)uVar48)) goto LAB_140aaa946;
              if (uVar48 < 0x20) {
LAB_140aadf3e:
                uVar49 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar40;
                }
                else {
                  uVar51 = (ulonglong)pbVar27 & 0x1f;
                  if ((int)uVar51 != 0) {
                    uVar51 = (ulonglong)(0x20 - (int)uVar51);
                  }
                  iVar72 = (int)uVar51;
                  if (uVar48 < iVar72 + 0x20U) goto LAB_140aadf3e;
                  uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                  uVar47 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar27[uVar47] = *(byte *)(uVar47 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar26);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar5 = pbVar27 + uVar51;
                  *(undefined8 *)pbVar5 = *puVar4;
                  *(undefined8 *)(pbVar5 + 8) = uVar16;
                  *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              if (uVar49 + 1 <= uVar48) {
                uVar32 = uVar48 - uVar49;
                if (uVar32 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar32 & 0xfffffff8;
                  uVar24 = 0;
                  lVar34 = 0;
                  do {
                    iVar72 = uVar49 + uVar24;
                    uVar24 = uVar24 + 8;
                    *(undefined8 *)(param_3 + lVar34 + (int)(uVar49 + uVar59)) =
                         *(undefined8 *)(iVar72 + lVar26);
                    lVar34 = lVar34 + 8;
                  } while (uVar24 < uVar45);
                }
                lVar34 = (longlong)(int)uVar45;
                lVar62 = (longlong)(int)(uVar49 + uVar45);
                if (uVar45 < uVar32) {
                  do {
                    uVar45 = uVar45 + 1;
                    param_3[lVar34 + (int)(uVar49 + uVar59)] = *(byte *)(lVar62 + lVar26);
                    lVar34 = lVar34 + 1;
                    lVar62 = lVar62 + 1;
                  } while (uVar45 < uVar32);
                }
              }
              uVar49 = uVar59 + uVar48;
            }
            uVar59 = uVar49;
            lVar26 = (longlong)(int)uVar59;
            if ((int)(uint)param_6 < 3) {
              if (uVar77 == 0) goto LAB_140aaaa49;
LAB_140aaabc2:
              if ((int)uVar1 < 1) goto LAB_140aaae40;
LAB_140aaabd0:
              iVar72 = (int)lVar26;
              if (6 < (int)uVar1) {
                lVar34 = lVar3 + lVar23;
                pbVar27 = param_3 + lVar26;
                if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                   (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                  if ((int)uVar1 < 0x20) {
LAB_140aadf7d:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar69;
                    }
                    else {
                      uVar51 = (ulonglong)pbVar27 & 0x1f;
                      if ((int)uVar51 != 0) {
                        uVar51 = (ulonglong)(0x20 - (int)uVar51);
                      }
                      iVar25 = (int)uVar51;
                      if ((int)uVar1 < iVar25 + 0x20) goto LAB_140aadf7d;
                      uVar49 = uVar1 - (uVar1 - iVar25 & 0x1f);
                      uVar47 = 0;
                      if (iVar25 != 0) {
                        do {
                          pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    do {
                      puVar4 = (undefined8 *)(uVar51 + lVar34);
                      uVar16 = puVar4[1];
                      uVar17 = puVar4[2];
                      uVar18 = puVar4[3];
                      pbVar5 = pbVar27 + uVar51;
                      *(undefined8 *)pbVar5 = *puVar4;
                      *(undefined8 *)(pbVar5 + 8) = uVar16;
                      *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar1) {
                    lVar26 = (longlong)(int)uVar49;
                    uVar51 = lVar67 - lVar26;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                             *(undefined8 *)(lVar34 + lVar26 + uVar56);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    if (uVar47 < uVar51) {
                      do {
                        pbVar27[uVar47 + lVar26] = *(byte *)(uVar47 + lVar34 + lVar26);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  uVar59 = iVar72 + 2 + iVar31;
                  goto LAB_140aaae14;
                }
              }
              iVar25 = 1;
              if (uVar76 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar3 + lVar23 + uVar47 * 2);
                  param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar3 + lVar23 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                uVar59 = iVar72 + (int)uVar51 * 2;
                iVar25 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar25 - 1U < uVar1) {
                uVar59 = iVar72 + iVar25;
                param_3[(longlong)iVar25 + -1 + lVar26] = *(byte *)(lVar3 + iVar25 + -1 + lVar23);
              }
              goto LAB_140aaae14;
            }
            uVar59 = uVar59 + 2;
            param_3[lVar26] = *(byte *)(lVar23 + -2 + lVar3);
            param_3[lVar26 + 1] = *(byte *)(lVar23 + -1 + lVar3);
            lVar26 = (longlong)(int)uVar59;
            if (uVar77 == 0) {
              if (0 < (int)uVar1) goto LAB_140aaaa57;
            }
            else if (0 < (int)uVar1) goto LAB_140aaabd0;
          }
          lVar35 = (int)uVar59 - lVar65;
        }
        else if (uVar49 == 1) {
          uVar49 = 0;
          lVar35 = lVar50 * uVar38;
          bVar13 = *(byte *)(param_1 + lVar35);
          uVar59 = 0;
          if (uVar75 == 0) {
            if (0 < (int)param_5) {
              if ((int)param_5 < 0x20) {
LAB_140aade4f:
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0x871) {
                  uVar51 = 0;
                  uVar49 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar37) goto LAB_140aade4f;
                  uVar47 = 0;
                  uVar51 = uVar61;
                  uVar49 = uVar43;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = bVar13;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar61);
                  }
                }
                do {
                  pbVar27 = param_3 + uVar51;
                  *pbVar27 = bVar13;
                  pbVar27[1] = bVar13;
                  pbVar27[2] = bVar13;
                  pbVar27[3] = bVar13;
                  pbVar27[4] = bVar13;
                  pbVar27[5] = bVar13;
                  pbVar27[6] = bVar13;
                  pbVar27[7] = bVar13;
                  pbVar27[8] = bVar13;
                  pbVar27[9] = bVar13;
                  pbVar27[10] = bVar13;
                  pbVar27[0xb] = bVar13;
                  pbVar27[0xc] = bVar13;
                  pbVar27[0xd] = bVar13;
                  pbVar27[0xe] = bVar13;
                  pbVar27[0xf] = bVar13;
                  pbVar27[0x10] = bVar13;
                  pbVar27[0x11] = bVar13;
                  pbVar27[0x12] = bVar13;
                  pbVar27[0x13] = bVar13;
                  pbVar27[0x14] = bVar13;
                  pbVar27[0x15] = bVar13;
                  pbVar27[0x16] = bVar13;
                  pbVar27[0x17] = bVar13;
                  pbVar27[0x18] = bVar13;
                  pbVar27[0x19] = bVar13;
                  pbVar27[0x1a] = bVar13;
                  pbVar27[0x1b] = bVar13;
                  pbVar27[0x1c] = bVar13;
                  pbVar27[0x1d] = bVar13;
                  pbVar27[0x1e] = bVar13;
                  pbVar27[0x1f] = bVar13;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              uVar59 = uVar49;
              if (uVar49 + 1 <= param_5) {
                lVar26 = (longlong)(int)uVar49;
                uVar51 = lVar46 - lVar26;
                if ((longlong)uVar51 < 8) {
                  uVar32 = 0;
                }
                else {
                  uVar32 = (uint)uVar51 & 0xfffffff8;
                  uVar47 = 0;
                  do {
                    *(ulonglong *)(param_3 + uVar47 + lVar26) =
                         CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(
                                                  bVar13,CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))
                                                 ));
                    uVar47 = uVar47 + 8;
                  } while (uVar47 < (ulonglong)(longlong)(int)uVar32);
                  uVar59 = uVar49 + uVar32;
                }
                uVar47 = (ulonglong)(int)uVar32;
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar26] = bVar13;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                  uVar59 = (int)uVar47 + uVar49;
                }
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar26 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar35), lVar26 < lVar46 &&
                (-lVar26 < lVar46)))) {
              uVar32 = 1;
              if (uVar63 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2] = *(byte *)(lVar33 + lVar35 + uVar47 * 2);
                  param_3[uVar47 * 2 + 1] = *(byte *)(lVar33 + lVar35 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar66);
                uVar49 = (int)uVar51 * 2;
                uVar32 = (int)uVar47 + 2 + (int)uVar51;
              }
              uVar59 = uVar49;
              if (uVar32 - 1 < param_5) {
                param_3[(longlong)(int)uVar32 + -1] =
                     *(byte *)((longlong)(int)uVar32 + -1 + lVar35 + lVar33);
                uVar59 = uVar32;
              }
            }
            else {
              if ((int)param_5 < 0x20) {
LAB_140aade6e:
                uVar49 = 0;
              }
              else {
                if ((int)param_5 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar68;
                }
                else {
                  if ((int)param_5 < iVar37) goto LAB_140aade6e;
                  uVar47 = 0;
                  uVar51 = uVar61;
                  uVar49 = uVar43;
                  if (iVar58 != 0) {
                    do {
                      param_3[uVar47] = *(byte *)(uVar47 + lVar35 + lVar33);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar61);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar35 + lVar33);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar27 = param_3 + uVar51;
                  *(undefined8 *)pbVar27 = *puVar4;
                  *(undefined8 *)(pbVar27 + 8) = uVar16;
                  *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              uVar59 = param_5;
              if (uVar49 + 1 <= param_5) {
                lVar26 = (longlong)(int)uVar49;
                uVar51 = lVar46 - lVar26;
                if ((longlong)uVar51 < 8) {
                  uVar47 = 0;
                }
                else {
                  uVar56 = 0;
                  uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                  do {
                    *(undefined8 *)(param_3 + uVar56 + lVar26) =
                         *(undefined8 *)(lVar33 + lVar35 + lVar26 + uVar56);
                    uVar56 = uVar56 + 8;
                  } while (uVar56 < uVar47);
                }
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar26] = *(byte *)(uVar47 + lVar33 + lVar35 + lVar26);
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
            }
          }
          if (0 < (int)(uint)param_6) {
            if (uVar48 < 7) {
LAB_140aada45:
              iVar72 = 1;
              uVar49 = uVar59;
              if (uVar70 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + (longlong)(int)uVar59] =
                       *(byte *)(param_1 + lVar35 + uVar47 * 2);
                  param_3[uVar47 * 2 + (longlong)(int)uVar59 + 1] =
                       *(byte *)(param_1 + lVar35 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                uVar49 = uVar59 + (int)uVar51 * 2;
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar48) {
                uVar49 = iVar72 + uVar59;
                param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar59] =
                     *(byte *)((longlong)iVar72 + -1 + param_1 + lVar35);
              }
            }
            else {
              pbVar27 = param_3 + (int)uVar59;
              lVar26 = param_1 + lVar35;
              if (((longlong)pbVar27 - lVar26 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar27 - lVar26) < (longlong)(ulonglong)uVar48)) goto LAB_140aada45;
              if (uVar48 < 0x20) {
LAB_140aade98:
                uVar49 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar40;
                }
                else {
                  uVar51 = (ulonglong)pbVar27 & 0x1f;
                  if ((int)uVar51 != 0) {
                    uVar51 = (ulonglong)(0x20 - (int)uVar51);
                  }
                  iVar72 = (int)uVar51;
                  if (uVar48 < iVar72 + 0x20U) goto LAB_140aade98;
                  uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                  uVar47 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar27[uVar47] = *(byte *)(uVar47 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar26);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar5 = pbVar27 + uVar51;
                  *(undefined8 *)pbVar5 = *puVar4;
                  *(undefined8 *)(pbVar5 + 8) = uVar16;
                  *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              if (uVar49 + 1 <= uVar48) {
                uVar32 = uVar48 - uVar49;
                if (uVar32 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar32 & 0xfffffff8;
                  uVar24 = 0;
                  lVar34 = 0;
                  do {
                    iVar72 = uVar24 + uVar49;
                    uVar24 = uVar24 + 8;
                    *(undefined8 *)(param_3 + lVar34 + (int)(uVar49 + uVar59)) =
                         *(undefined8 *)(iVar72 + lVar26);
                    lVar34 = lVar34 + 8;
                  } while (uVar24 < uVar45);
                }
                lVar34 = (longlong)(int)uVar45;
                lVar62 = (longlong)(int)(uVar49 + uVar45);
                if (uVar45 < uVar32) {
                  do {
                    uVar45 = uVar45 + 1;
                    param_3[lVar34 + (int)(uVar49 + uVar59)] = *(byte *)(lVar62 + lVar26);
                    lVar34 = lVar34 + 1;
                    lVar62 = lVar62 + 1;
                  } while (uVar45 < uVar32);
                }
              }
              uVar49 = uVar59 + uVar48;
            }
            uVar59 = uVar49;
            if (2 < (int)(uint)param_6) {
              uVar59 = uVar49 + 2;
              param_3[(int)uVar49] = *(byte *)(lVar3 + -2 + lVar35);
              param_3[(longlong)(int)uVar49 + 1] = *(byte *)(lVar3 + -1 + lVar35);
            }
          }
          lVar26 = (longlong)(int)uVar59;
          bVar13 = *(byte *)(lVar3 + -1 + lVar35);
          uVar49 = uVar59;
          if (uVar77 == 0) {
            if (0 < (int)uVar1) {
              if ((int)uVar1 < 0x20) {
LAB_140aadeb7:
                uVar32 = 0;
              }
              else {
                pbVar27 = param_3 + lVar26;
                if ((int)uVar1 < 0x871) {
                  uVar51 = 0;
                  uVar32 = uVar69;
                }
                else {
                  uVar51 = (ulonglong)pbVar27 & 0x1f;
                  if ((int)uVar51 != 0) {
                    uVar51 = (ulonglong)(0x20 - (int)uVar51);
                  }
                  iVar72 = (int)uVar51;
                  if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aadeb7;
                  uVar47 = 0;
                  uVar32 = uVar1 - (uVar1 - iVar72 & 0x1f);
                  if (iVar72 != 0) {
                    do {
                      pbVar27[uVar47] = bVar13;
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  pbVar5 = pbVar27 + uVar51;
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
                } while (uVar51 < (ulonglong)(longlong)(int)uVar32);
                uVar49 = uVar59 + uVar32;
              }
              if (uVar32 + 1 <= uVar1) {
                lVar35 = (longlong)(int)uVar32;
                uVar51 = lVar67 - lVar35;
                if ((longlong)uVar51 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = (uint)uVar51 & 0xfffffff8;
                  uVar47 = 0;
                  do {
                    *(ulonglong *)(param_3 + uVar47 + lVar35 + lVar26) =
                         CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(
                                                  bVar13,CONCAT12(bVar13,CONCAT11(bVar13,bVar13)))))
                                                 ));
                    uVar47 = uVar47 + 8;
                  } while (uVar47 < (ulonglong)(longlong)(int)uVar45);
                  uVar49 = uVar59 + uVar32 + uVar45;
                }
                uVar47 = (ulonglong)(int)uVar45;
                if (uVar47 < uVar51) {
                  do {
                    param_3[uVar47 + lVar35 + lVar26] = bVar13;
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                  lVar26 = (longlong)(int)((int)uVar47 + uVar59 + uVar32);
                  goto LAB_140aade2f;
                }
              }
LAB_140aade2c:
              lVar26 = (longlong)(int)uVar49;
            }
          }
          else if (0 < (int)uVar1) {
            if (6 < (int)uVar1) {
              pbVar27 = param_3 + lVar26;
              lVar34 = lVar35 + lVar3;
              if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                 (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                if ((int)uVar1 < 0x20) {
LAB_140aaded7:
                  uVar49 = 0;
                }
                else {
                  if ((int)uVar1 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar69;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar27 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aaded7;
                    uVar47 = 0;
                    uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                    if (iVar72 != 0) {
                      do {
                        pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar34);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar5 = pbVar27 + uVar51;
                    *(undefined8 *)pbVar5 = *puVar4;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar1) {
                  lVar35 = (longlong)(int)uVar49;
                  uVar51 = lVar67 - lVar35;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(pbVar27 + uVar56 + lVar35) =
                           *(undefined8 *)(lVar34 + lVar35 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      pbVar27[uVar47 + lVar35] = *(byte *)(uVar47 + lVar34 + lVar35);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                lVar26 = (longlong)(int)(uVar59 + 2 + iVar31);
                goto LAB_140aade2f;
              }
            }
            iVar72 = 1;
            if (uVar76 != 0) {
              uVar51 = 0;
              do {
                uVar47 = uVar51;
                param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar35 + lVar3 + uVar47 * 2);
                param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar35 + lVar3 + 1 + uVar47 * 2);
                uVar51 = uVar47 + 1;
              } while (uVar51 < uVar79);
              uVar49 = uVar59 + (int)uVar51 * 2;
              iVar72 = (int)uVar47 + 2 + (int)uVar51;
            }
            if (uVar1 <= iVar72 - 1U) goto LAB_140aade2c;
            param_3[(longlong)iVar72 + -1 + lVar26] =
                 *(byte *)((longlong)iVar72 + -1 + lVar35 + lVar3);
            lVar26 = (longlong)(int)(iVar72 + uVar59);
          }
LAB_140aade2f:
          lVar35 = lVar26 - lVar65;
          if ((int)(uint)param_6 < 3) {
            lVar35 = lVar46;
          }
        }
        else if (uVar49 == 2) {
          lVar26 = lVar46;
          if (0 < (int)(uint)param_6) {
            if (uVar48 < 7) {
LAB_140aac1e1:
              iVar72 = 1;
              uVar49 = param_5;
              if (uVar70 != 0) {
                lVar26 = lVar50 * uVar38 + param_1;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  pbVar2[uVar47 * 2] = *(byte *)(lVar26 + uVar47 * 2);
                  pbVar2[uVar47 * 2 + 1] = *(byte *)(lVar26 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
                uVar49 = param_5 + (int)uVar51 * 2;
              }
              if (iVar72 - 1U < uVar48) {
                pbVar2[(longlong)iVar72 + -1] = *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar38);
                uVar49 = param_5 + iVar72;
              }
            }
            else {
              lVar26 = lVar50 * uVar38 + param_1;
              if (((longlong)pbVar2 - lVar26 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar2 - lVar26) < (longlong)(ulonglong)uVar48)) goto LAB_140aac1e1;
              if (uVar48 < 0x20) {
LAB_140aad3fe:
                uVar59 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar59 = uVar40;
                }
                else {
                  if (uVar48 < iVar53 + 0x20U) goto LAB_140aad3fe;
                  uVar47 = 0;
                  uVar51 = uVar55;
                  uVar59 = uVar36;
                  if (iVar53 != 0) {
                    do {
                      pbVar2[uVar47] = *(byte *)(uVar47 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar55);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar26);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar27 = pbVar2 + uVar51;
                  *(undefined8 *)pbVar27 = *puVar4;
                  *(undefined8 *)(pbVar27 + 8) = uVar16;
                  *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
              }
              uVar49 = uVar52;
              if (uVar59 + 1 <= uVar48) {
                uVar32 = uVar48 - uVar59;
                if (uVar32 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar32 & 0xfffffff8;
                  uVar24 = 0;
                  lVar34 = 0;
                  do {
                    iVar72 = uVar24 + uVar59;
                    uVar24 = uVar24 + 8;
                    *(undefined8 *)(param_3 + lVar34 + (int)(param_5 + uVar59)) =
                         *(undefined8 *)(iVar72 + lVar26);
                    lVar34 = lVar34 + 8;
                  } while (uVar24 < uVar45);
                }
                lVar34 = (longlong)(int)uVar45;
                lVar62 = (longlong)(int)(uVar59 + uVar45);
                if (uVar45 < uVar32) {
                  do {
                    uVar45 = uVar45 + 1;
                    param_3[lVar34 + (int)(uVar59 + param_5)] = *(byte *)(lVar62 + lVar26);
                    lVar34 = lVar34 + 1;
                    lVar62 = lVar62 + 1;
                  } while (uVar45 < uVar32);
                }
              }
            }
            lVar26 = (longlong)(int)uVar49;
            if (2 < (int)(uint)param_6) {
              lVar35 = lVar50 * uVar38;
              if (uVar75 == 0) {
                lVar34 = lVar35 + lVar3;
                if (-1 < (int)uVar41) {
                  if (((int)param_5 < 7) ||
                     ((pbVar27 = param_3 + ((lVar46 + -1) - (lVar35 + -1 + lVar3)),
                      (longlong)pbVar27 <= lVar46 &&
                      ((byte *)-lVar46 == pbVar27 || -(longlong)pbVar27 < lVar46)))) {
                    iVar72 = 1;
                    lVar62 = 0;
                    uVar51 = 0;
                    if (uVar63 != 0) {
                      do {
                        uVar47 = uVar51;
                        uVar51 = uVar47 + 1;
                        pbVar2[lVar62 + -1] = *(byte *)(lVar62 + -1 + lVar34);
                        pbVar2[lVar62 + -2] = *(byte *)(lVar62 + -2 + lVar34);
                        lVar62 = lVar62 + -2;
                      } while (uVar51 < uVar66);
                      iVar72 = (int)uVar47 + 2 + (int)uVar51;
                    }
                    if (iVar72 - 1U < param_5) {
                      pbVar2[-(longlong)iVar72] = *(byte *)(lVar34 - iVar72);
                    }
                  }
                  else {
                    if ((int)uVar42 < 0x20) {
LAB_140aad41d:
                      uVar59 = 0;
                    }
                    else {
                      if ((int)uVar42 < 0xa71) {
                        uVar51 = 0;
                        lVar62 = lVar34 - lVar46;
                        uVar59 = uVar21;
                      }
                      else {
                        if ((int)uVar42 < iVar22) goto LAB_140aad41d;
                        uVar47 = 0;
                        lVar62 = lVar34 - lVar46;
                        uVar51 = uVar74;
                        uVar59 = uVar28;
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
                        pbVar27 = param_3 + uVar51;
                        *(undefined8 *)pbVar27 = *puVar4;
                        *(undefined8 *)(pbVar27 + 8) = uVar16;
                        *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                    }
                    if (uVar59 + 1 <= uVar42) {
                      lVar62 = (longlong)(int)uVar59;
                      uVar51 = lVar44 - lVar62;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        uVar56 = 0;
                        do {
                          *(undefined8 *)(param_3 + uVar56 + lVar62) =
                               *(undefined8 *)((lVar34 - lVar46) + lVar62 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          param_3[uVar47 + lVar62] = *(byte *)(uVar47 + (lVar34 - lVar46) + lVar62);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                  }
                }
              }
              else if (-1 < (int)uVar41) {
                if (6 < (int)param_5) {
                  pbVar27 = param_3 + ((lVar46 + -1) - (param_1 + -1 + lVar35));
                  lVar34 = param_1 + lVar35;
                  if ((lVar46 < (longlong)pbVar27) ||
                     ((byte *)-lVar46 != pbVar27 && lVar46 <= -(longlong)pbVar27)) {
                    if ((int)uVar42 < 0x20) {
LAB_140aad445:
                      uVar59 = 0;
                    }
                    else {
                      if ((int)uVar42 < 0xa71) {
                        uVar51 = 0;
                        lVar62 = lVar34 - lVar46;
                        uVar59 = uVar21;
                      }
                      else {
                        if ((int)uVar42 < iVar22) goto LAB_140aad445;
                        uVar47 = 0;
                        lVar62 = lVar34 - lVar46;
                        uVar51 = uVar74;
                        uVar59 = uVar28;
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
                        pbVar27 = param_3 + uVar51;
                        *(undefined8 *)pbVar27 = *puVar4;
                        *(undefined8 *)(pbVar27 + 8) = uVar16;
                        *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                    }
                    if (uVar59 + 1 <= uVar42) {
                      lVar62 = (longlong)(int)uVar59;
                      uVar51 = lVar44 - lVar62;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        uVar56 = 0;
                        do {
                          *(undefined8 *)(param_3 + uVar56 + lVar62) =
                               *(undefined8 *)((lVar34 - lVar46) + lVar62 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          param_3[uVar47 + lVar62] = *(byte *)(uVar47 + (lVar34 - lVar46) + lVar62);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    goto LAB_140aac72e;
                  }
                }
                iVar72 = 1;
                lVar34 = 0;
                if (uVar63 != 0) {
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    uVar51 = uVar47 + 1;
                    pbVar2[lVar34 + -1] = *(byte *)(lVar34 + -1 + param_1 + lVar35);
                    pbVar2[lVar34 + -2] = *(byte *)(lVar34 + -2 + param_1 + lVar35);
                    lVar34 = lVar34 + -2;
                  } while (uVar51 < uVar66);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < param_5) {
                  pbVar2[-(longlong)iVar72] = *(byte *)((param_1 + lVar35) - (longlong)iVar72);
                }
              }
LAB_140aac72e:
              lVar34 = lVar35 + lVar3;
              param_3[lVar26] = *(byte *)(lVar34 + -2);
              param_3[lVar26 + 1] = *(byte *)(lVar34 + -1);
              iVar25 = uVar49 + 2;
              lVar26 = (longlong)iVar25;
              iVar72 = iVar25;
              if (uVar77 == 0) {
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar27 = param_3 + lVar26;
                    lVar34 = param_1 + lVar35;
                    if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                       (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                      if ((int)uVar1 < 0x20) {
LAB_140aad46d:
                        uVar59 = 0;
                      }
                      else {
                        if ((int)uVar1 < 0xa71) {
                          uVar51 = 0;
                          uVar59 = uVar69;
                        }
                        else {
                          uVar51 = (ulonglong)pbVar27 & 0x1f;
                          if ((int)uVar51 != 0) {
                            uVar51 = (ulonglong)(0x20 - (int)uVar51);
                          }
                          iVar72 = (int)uVar51;
                          if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aad46d;
                          uVar47 = 0;
                          uVar59 = uVar1 - (uVar1 - iVar72 & 0x1f);
                          if (iVar72 != 0) {
                            do {
                              pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar51);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar34);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar5 = pbVar27 + uVar51;
                          *(undefined8 *)pbVar5 = *puVar4;
                          *(undefined8 *)(pbVar5 + 8) = uVar16;
                          *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                      }
                      if (uVar59 + 1 <= uVar1) {
                        lVar35 = (longlong)(int)uVar59;
                        uVar51 = lVar67 - lVar35;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar56 = 0;
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          do {
                            *(undefined8 *)(pbVar27 + uVar56 + lVar35) =
                                 *(undefined8 *)(lVar34 + lVar35 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            pbVar27[uVar47 + lVar35] = *(byte *)(uVar47 + lVar34 + lVar35);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      lVar26 = (longlong)(int)(iVar31 + 4 + uVar49);
                      goto LAB_140aacb0c;
                    }
                  }
                  iVar54 = 1;
                  if (uVar76 != 0) {
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar26] = *(byte *)(param_1 + lVar35 + uVar47 * 2);
                      param_3[uVar47 * 2 + lVar26 + 1] =
                           *(byte *)(param_1 + lVar35 + 1 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                    iVar54 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar54 - 1U < uVar1) {
                    param_3[(longlong)iVar54 + -1 + lVar26] =
                         *(byte *)((longlong)iVar54 + -1 + lVar35 + param_1);
                    lVar26 = (longlong)(iVar54 + iVar25);
                  }
                  else {
LAB_140aacb09:
                    lVar26 = (longlong)iVar72;
                  }
                }
              }
              else if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar27 = param_3 + lVar26;
                  if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                     (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                    if ((int)uVar1 < 0x20) {
LAB_140aad48a:
                      uVar59 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar59 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar27 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aad48a;
                        uVar47 = 0;
                        uVar59 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        puVar4 = (undefined8 *)(uVar51 + lVar34);
                        uVar16 = puVar4[1];
                        uVar17 = puVar4[2];
                        uVar18 = puVar4[3];
                        pbVar5 = pbVar27 + uVar51;
                        *(undefined8 *)pbVar5 = *puVar4;
                        *(undefined8 *)(pbVar5 + 8) = uVar16;
                        *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                    }
                    if (uVar59 + 1 <= uVar1) {
                      lVar35 = (longlong)(int)uVar59;
                      uVar51 = lVar67 - lVar35;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar27 + uVar56 + lVar35) =
                               *(undefined8 *)(lVar34 + lVar35 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          pbVar27[uVar47 + lVar35] = *(byte *)(uVar47 + lVar34 + lVar35);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    lVar26 = (longlong)(int)(iVar31 + 4 + uVar49);
                    goto LAB_140aacb0c;
                  }
                }
                iVar54 = 1;
                uVar51 = 0;
                if (uVar76 != 0) {
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar34 + uVar47 * 2);
                    param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar34 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                  iVar54 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (uVar1 <= iVar54 - 1U) goto LAB_140aacb09;
                param_3[(longlong)iVar54 + -1 + lVar26] = *(byte *)((longlong)iVar54 + -1 + lVar34);
                lVar26 = (longlong)(iVar54 + iVar25);
              }
LAB_140aacb0c:
              lVar35 = lVar26 - lVar65;
              goto LAB_140aaae40;
            }
          }
          if (uVar75 == 0) {
            if (-1 < (int)uVar41) {
              if (((int)param_5 < 7) ||
                 ((pbVar27 = param_3 + ((lVar46 + -1) - (longlong)(pbVar2 + lVar39 + -1)),
                  (longlong)pbVar27 <= lVar46 &&
                  ((byte *)-lVar46 == pbVar27 || -(longlong)pbVar27 < lVar46)))) {
                iVar72 = 1;
                lVar34 = 0;
                uVar51 = 0;
                if (uVar63 != 0) {
                  do {
                    uVar47 = uVar51;
                    uVar51 = uVar47 + 1;
                    pbVar2[lVar34 + -1] = pbVar2[lVar34 + -1 + lVar39];
                    pbVar2[lVar34 + -2] = pbVar2[lVar34 + -2 + lVar39];
                    lVar34 = lVar34 + -2;
                  } while (uVar51 < uVar66);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < param_5) {
                  pbVar2[-(longlong)iVar72] = pbVar2[lVar39 - iVar72];
                }
              }
              else {
                if ((int)uVar42 < 0x20) {
LAB_140aad4a8:
                  uVar49 = 0;
                }
                else {
                  if ((int)uVar42 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar21;
                  }
                  else {
                    if ((int)uVar42 < iVar22) goto LAB_140aad4a8;
                    uVar47 = 0;
                    uVar51 = uVar74;
                    uVar49 = uVar28;
                    if (iVar71 != 0) {
                      do {
                        param_3[uVar47] = pbVar2[uVar47 + lVar19];
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar74);
                    }
                  }
                  do {
                    pbVar27 = pbVar2 + uVar51 + lVar19;
                    uVar16 = *(undefined8 *)(pbVar27 + 8);
                    uVar17 = *(undefined8 *)(pbVar27 + 0x10);
                    uVar18 = *(undefined8 *)(pbVar27 + 0x18);
                    pbVar5 = param_3 + uVar51;
                    *(undefined8 *)pbVar5 = *(undefined8 *)pbVar27;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar42) {
                  lVar34 = (longlong)(int)uVar49;
                  uVar51 = lVar44 - lVar34;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(param_3 + uVar56 + lVar34) =
                           *(undefined8 *)(pbVar2 + uVar56 + lVar34 + lVar19);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar34] = pbVar2[uVar47 + lVar34 + lVar19];
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
              }
            }
          }
          else if (-1 < (int)uVar41) {
            if (6 < (int)param_5) {
              lVar34 = param_1 + lVar50 * uVar38;
              pbVar27 = param_3 + ((lVar46 + -1) - (lVar34 + -1));
              if ((lVar46 < (longlong)pbVar27) ||
                 ((byte *)-lVar46 != pbVar27 && lVar46 <= -(longlong)pbVar27)) {
                if ((int)uVar42 < 0x20) {
LAB_140aad4c7:
                  uVar49 = 0;
                }
                else {
                  if ((int)uVar42 < 0xa71) {
                    uVar51 = 0;
                    lVar62 = lVar34 - lVar46;
                    uVar49 = uVar21;
                  }
                  else {
                    if ((int)uVar42 < iVar22) goto LAB_140aad4c7;
                    uVar47 = 0;
                    lVar62 = lVar34 - lVar46;
                    uVar51 = uVar74;
                    uVar49 = uVar28;
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
                    pbVar27 = param_3 + uVar51;
                    *(undefined8 *)pbVar27 = *puVar4;
                    *(undefined8 *)(pbVar27 + 8) = uVar16;
                    *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar42) {
                  lVar62 = (longlong)(int)uVar49;
                  uVar51 = lVar44 - lVar62;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    uVar56 = 0;
                    do {
                      *(undefined8 *)(param_3 + uVar56 + lVar62) =
                           *(undefined8 *)((lVar34 - lVar46) + lVar62 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar62] = *(byte *)(uVar47 + (lVar34 - lVar46) + lVar62);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                goto LAB_140aacfbe;
              }
            }
            iVar72 = 1;
            lVar34 = 0;
            if (uVar63 != 0) {
              lVar62 = lVar50 * uVar38 + param_1;
              uVar51 = 0;
              do {
                uVar47 = uVar51;
                uVar51 = uVar47 + 1;
                pbVar2[lVar34 + -1] = *(byte *)(lVar34 + -1 + lVar62);
                pbVar2[lVar34 + -2] = *(byte *)(lVar34 + -2 + lVar62);
                lVar34 = lVar34 + -2;
              } while (uVar51 < uVar66);
              iVar72 = (int)uVar47 + 2 + (int)uVar51;
            }
            if (iVar72 - 1U < param_5) {
              pbVar2[-(longlong)iVar72] = *(byte *)((param_1 - iVar72) + lVar50 * uVar38);
            }
          }
LAB_140aacfbe:
          if (uVar77 == 0) {
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar27 = param_3 + lVar26;
                pbVar5 = param_3 + (lVar26 - lVar39);
                if ((2 - lVar46 <= (longlong)pbVar27 - (longlong)pbVar5) ||
                   (2 - lVar46 <= -((longlong)pbVar27 - (longlong)pbVar5))) {
                  if ((int)uVar1 < 0x20) {
LAB_140aad4f0:
                    uVar49 = 0;
                  }
                  else {
                    if ((int)uVar1 < 0xa71) {
                      uVar51 = 0;
                      uVar49 = uVar69;
                    }
                    else {
                      uVar51 = (ulonglong)pbVar27 & 0x1f;
                      if ((int)uVar51 != 0) {
                        uVar51 = (ulonglong)(0x20 - (int)uVar51);
                      }
                      iVar72 = (int)uVar51;
                      if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aad4f0;
                      uVar47 = 0;
                      uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                      if (iVar72 != 0) {
                        do {
                          pbVar27[uVar47] = pbVar5[uVar47];
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    do {
                      pbVar6 = pbVar5 + uVar51;
                      uVar16 = *(undefined8 *)(pbVar6 + 8);
                      uVar17 = *(undefined8 *)(pbVar6 + 0x10);
                      uVar18 = *(undefined8 *)(pbVar6 + 0x18);
                      pbVar7 = pbVar27 + uVar51;
                      *(undefined8 *)pbVar7 = *(undefined8 *)pbVar6;
                      *(undefined8 *)(pbVar7 + 8) = uVar16;
                      *(undefined8 *)(pbVar7 + 0x10) = uVar17;
                      *(undefined8 *)(pbVar7 + 0x18) = uVar18;
                      uVar51 = uVar51 + 0x20;
                    } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                  }
                  if (uVar49 + 1 <= uVar1) {
                    lVar26 = (longlong)(int)uVar49;
                    uVar51 = lVar67 - lVar26;
                    if ((longlong)uVar51 < 8) {
                      uVar47 = 0;
                    }
                    else {
                      uVar56 = 0;
                      uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                      do {
                        *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                             *(undefined8 *)(pbVar5 + uVar56 + lVar26);
                        uVar56 = uVar56 + 8;
                      } while (uVar56 < uVar47);
                    }
                    for (; uVar47 < uVar51; uVar47 = uVar47 + 1) {
                      pbVar27[uVar47 + lVar26] = pbVar5[uVar47 + lVar26];
                    }
                  }
                  goto LAB_140aaae40;
                }
              }
              iVar72 = 1;
              if (uVar76 != 0) {
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar26] = param_3[uVar47 * 2 + (lVar26 - lVar39)];
                  param_3[uVar47 * 2 + lVar26 + 1] = param_3[uVar47 * 2 + (lVar26 - lVar39) + 1];
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar1) {
                param_3[(longlong)iVar72 + -1 + lVar26] =
                     param_3[(longlong)iVar72 + -1 + (lVar26 - lVar39)];
              }
            }
          }
          else if (0 < (int)uVar1) {
            if (6 < (int)uVar1) {
              pbVar27 = param_3 + lVar26;
              lVar34 = lVar50 * uVar38 + lVar3;
              if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                 (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                if ((int)uVar1 < 0x20) {
LAB_140aad510:
                  uVar49 = 0;
                }
                else {
                  if ((int)uVar1 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar69;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar27 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aad510;
                    uVar47 = 0;
                    uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                    if (iVar72 != 0) {
                      do {
                        pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar34);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar5 = pbVar27 + uVar51;
                    *(undefined8 *)pbVar5 = *puVar4;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar1) {
                  lVar26 = (longlong)(int)uVar49;
                  uVar51 = lVar67 - lVar26;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                           *(undefined8 *)(lVar34 + lVar26 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      pbVar27[uVar47 + lVar26] = *(byte *)(uVar47 + lVar34 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                goto LAB_140aaae40;
              }
            }
            iVar72 = 1;
            if (uVar76 != 0) {
              lVar34 = lVar50 * uVar38 + lVar3;
              uVar51 = 0;
              do {
                uVar47 = uVar51;
                param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar34 + uVar47 * 2);
                param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar34 + 1 + uVar47 * 2);
                uVar51 = uVar47 + 1;
              } while (uVar51 < uVar79);
              iVar72 = (int)uVar47 + 2 + (int)uVar51;
            }
            if (iVar72 - 1U < uVar1) {
              param_3[(longlong)iVar72 + -1 + lVar26] =
                   *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar38);
            }
          }
        }
        else if (uVar49 == 3) {
          lVar26 = lVar46;
          if (0 < (int)(uint)param_6) {
            if (uVar48 < 7) {
LAB_140aab3e0:
              iVar72 = 1;
              uVar49 = param_5;
              if (uVar70 != 0) {
                lVar26 = lVar50 * uVar38 + param_1;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  pbVar2[uVar47 * 2] = *(byte *)(lVar26 + uVar47 * 2);
                  pbVar2[uVar47 * 2 + 1] = *(byte *)(lVar26 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
                uVar49 = param_5 + (int)uVar51 * 2;
              }
              if (iVar72 - 1U < uVar48) {
                pbVar2[(longlong)iVar72 + -1] = *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar38);
                uVar49 = param_5 + iVar72;
              }
            }
            else {
              lVar26 = lVar50 * uVar38 + param_1;
              if (((longlong)pbVar2 - lVar26 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar2 - lVar26) < (longlong)(ulonglong)uVar48)) goto LAB_140aab3e0;
              if (uVar48 < 0x20) {
LAB_140aabfc2:
                uVar59 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar59 = uVar40;
                }
                else {
                  if (uVar48 < iVar53 + 0x20U) goto LAB_140aabfc2;
                  uVar47 = 0;
                  uVar51 = uVar55;
                  uVar59 = uVar36;
                  if (iVar53 != 0) {
                    do {
                      pbVar2[uVar47] = *(byte *)(uVar47 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar55);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar26);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar27 = pbVar2 + uVar51;
                  *(undefined8 *)pbVar27 = *puVar4;
                  *(undefined8 *)(pbVar27 + 8) = uVar16;
                  *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
              }
              uVar49 = uVar52;
              if (uVar59 + 1 <= uVar48) {
                uVar32 = uVar48 - uVar59;
                if (uVar32 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar32 & 0xfffffff8;
                  uVar24 = 0;
                  lVar34 = 0;
                  do {
                    iVar72 = uVar24 + uVar59;
                    uVar24 = uVar24 + 8;
                    *(undefined8 *)(param_3 + lVar34 + (int)(param_5 + uVar59)) =
                         *(undefined8 *)(iVar72 + lVar26);
                    lVar34 = lVar34 + 8;
                  } while (uVar24 < uVar45);
                }
                lVar34 = (longlong)(int)uVar45;
                lVar62 = (longlong)(int)(uVar59 + uVar45);
                if (uVar45 < uVar32) {
                  do {
                    uVar45 = uVar45 + 1;
                    param_3[lVar34 + (int)(uVar59 + param_5)] = *(byte *)(lVar62 + lVar26);
                    lVar34 = lVar34 + 1;
                    lVar62 = lVar62 + 1;
                  } while (uVar45 < uVar32);
                }
              }
            }
            lVar26 = (longlong)(int)uVar49;
            if (2 < (int)(uint)param_6) {
              if (uVar75 == 0) {
                if (-1 < (int)uVar41) {
                  iVar72 = 1;
                  lVar35 = 0;
                  if (uVar63 != 0) {
                    lVar34 = param_1 + uVar60 + lVar50 * uVar38;
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      pbVar2[lVar35 + -1] = *(byte *)(lVar34 + uVar47 * 2);
                      uVar51 = uVar47 + 1;
                      pbVar2[lVar35 + -2] = *(byte *)(lVar34 + 1 + uVar47 * 2);
                      lVar35 = lVar35 + -2;
                    } while (uVar51 < uVar66);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar72 - 1U < param_5) {
                    pbVar2[-(longlong)iVar72] =
                         *(byte *)((longlong)iVar72 + -1 + lVar50 * uVar38 + param_1 + uVar60);
                  }
                }
              }
              else {
                lVar35 = lVar50 * uVar38;
                if (-1 < (int)uVar41) {
                  if (6 < (int)param_5) {
                    pbVar27 = param_3 + ((lVar46 + -1) - (param_1 + -1 + lVar35));
                    lVar34 = param_1 + lVar35;
                    if ((lVar46 < (longlong)pbVar27) ||
                       ((byte *)-lVar46 != pbVar27 && lVar46 <= -(longlong)pbVar27)) {
                      if ((int)uVar42 < 0x20) {
LAB_140aabfe0:
                        uVar59 = 0;
                      }
                      else {
                        if ((int)uVar42 < 0xa71) {
                          uVar51 = 0;
                          lVar35 = lVar34 - lVar46;
                          uVar59 = uVar21;
                        }
                        else {
                          if ((int)uVar42 < iVar22) goto LAB_140aabfe0;
                          uVar47 = 0;
                          lVar35 = lVar34 - lVar46;
                          uVar51 = uVar74;
                          uVar59 = uVar28;
                          if (iVar71 != 0) {
                            do {
                              param_3[uVar47] = *(byte *)(uVar47 + lVar35);
                              uVar47 = uVar47 + 1;
                            } while (uVar47 < uVar74);
                          }
                        }
                        do {
                          puVar4 = (undefined8 *)(uVar51 + lVar35);
                          uVar16 = puVar4[1];
                          uVar17 = puVar4[2];
                          uVar18 = puVar4[3];
                          pbVar27 = param_3 + uVar51;
                          *(undefined8 *)pbVar27 = *puVar4;
                          *(undefined8 *)(pbVar27 + 8) = uVar16;
                          *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                          *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                          uVar51 = uVar51 + 0x20;
                        } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                      }
                      if (uVar59 + 1 <= uVar42) {
                        lVar35 = (longlong)(int)uVar59;
                        uVar51 = lVar44 - lVar35;
                        if ((longlong)uVar51 < 8) {
                          uVar47 = 0;
                        }
                        else {
                          uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                          uVar56 = 0;
                          do {
                            *(undefined8 *)(param_3 + uVar56 + lVar35) =
                                 *(undefined8 *)((lVar34 - lVar46) + lVar35 + uVar56);
                            uVar56 = uVar56 + 8;
                          } while (uVar56 < uVar47);
                        }
                        if (uVar47 < uVar51) {
                          do {
                            param_3[uVar47 + lVar35] =
                                 *(byte *)(uVar47 + (lVar34 - lVar46) + lVar35);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      goto LAB_140aab7b5;
                    }
                  }
                  iVar72 = 1;
                  lVar34 = 0;
                  if (uVar63 != 0) {
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      uVar51 = uVar47 + 1;
                      pbVar2[lVar34 + -1] = *(byte *)(lVar34 + -1 + param_1 + lVar35);
                      pbVar2[lVar34 + -2] = *(byte *)(lVar34 + -2 + param_1 + lVar35);
                      lVar34 = lVar34 + -2;
                    } while (uVar51 < uVar66);
                    iVar72 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar72 - 1U < param_5) {
                    pbVar2[-(longlong)iVar72] = *(byte *)((param_1 + lVar35) - (longlong)iVar72);
                  }
                }
              }
LAB_140aab7b5:
              lVar34 = lVar50 * uVar38;
              lVar35 = lVar34 + lVar3;
              param_3[lVar26] = *(byte *)(lVar35 + -2);
              param_3[lVar26 + 1] = *(byte *)(lVar35 + -1);
              iVar25 = uVar49 + 2;
              lVar26 = (longlong)iVar25;
              iVar72 = iVar25;
              if (uVar77 == 0) {
                if (0 < (int)uVar1) {
                  iVar54 = 1;
                  lVar35 = 0;
                  if (uVar76 != 0) {
                    lVar62 = lVar34 + (lVar3 - uVar60);
                    uVar51 = 0;
                    do {
                      uVar47 = uVar51;
                      param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar35 + -1 + lVar62);
                      lVar8 = lVar35 + -2;
                      lVar35 = lVar35 + -2;
                      param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar8 + lVar62);
                      uVar51 = uVar47 + 1;
                    } while (uVar51 < uVar79);
                    iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                    iVar54 = (int)uVar47 + 2 + (int)uVar51;
                  }
                  if (iVar54 - 1U < uVar1) {
                    param_3[(longlong)iVar54 + -1 + lVar26] =
                         *(byte *)((lVar34 + (lVar3 - uVar60)) - (longlong)iVar54);
                    lVar26 = (longlong)(iVar54 + iVar25);
                  }
                  else {
LAB_140aaba69:
                    lVar26 = (longlong)iVar72;
                  }
                }
              }
              else if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar27 = param_3 + lVar26;
                  if ((2 - lVar46 <= (longlong)pbVar27 - lVar35) ||
                     (2 - lVar46 <= -((longlong)pbVar27 - lVar35))) {
                    if ((int)uVar1 < 0x20) {
LAB_140aac00b:
                      uVar59 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar59 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar27 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aac00b;
                        uVar47 = 0;
                        uVar59 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar27[uVar47] = *(byte *)(uVar47 + lVar35);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        puVar4 = (undefined8 *)(uVar51 + lVar35);
                        uVar16 = puVar4[1];
                        uVar17 = puVar4[2];
                        uVar18 = puVar4[3];
                        pbVar5 = pbVar27 + uVar51;
                        *(undefined8 *)pbVar5 = *puVar4;
                        *(undefined8 *)(pbVar5 + 8) = uVar16;
                        *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar59);
                    }
                    if (uVar59 + 1 <= uVar1) {
                      lVar26 = (longlong)(int)uVar59;
                      uVar51 = lVar67 - lVar26;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                               *(undefined8 *)(lVar35 + lVar26 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          pbVar27[uVar47 + lVar26] = *(byte *)(uVar47 + lVar35 + lVar26);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    lVar26 = (longlong)(int)(iVar31 + 4 + uVar49);
                    goto LAB_140aaba6c;
                  }
                }
                iVar54 = 1;
                uVar51 = 0;
                if (uVar76 != 0) {
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar35 + uVar47 * 2);
                    param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar35 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar51 * 2 + 2 + uVar49;
                  iVar54 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (uVar1 <= iVar54 - 1U) goto LAB_140aaba69;
                param_3[(longlong)iVar54 + -1 + lVar26] = *(byte *)((longlong)iVar54 + -1 + lVar35);
                lVar26 = (longlong)(iVar54 + iVar25);
              }
LAB_140aaba6c:
              lVar35 = lVar26 - lVar65;
              goto LAB_140aaae40;
            }
          }
          uVar51 = (ulonglong)uVar41;
          if (uVar75 == 0) {
            uVar49 = uVar41;
            if (uVar77 == 0) {
              while (-1 < (int)uVar49) {
                uVar49 = 0;
                if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                  uVar47 = (ulonglong)(int)uVar51;
                  uVar51 = uVar47;
                  do {
                    if ((int)uVar51 < 0) break;
                    lVar26 = (longlong)(int)uVar49;
                    uVar49 = uVar49 + 1;
                    uVar51 = (ulonglong)((int)uVar51 - 1);
                    param_3[uVar47 - lVar26] = param_3[lVar26 + uVar60 + 1 + uVar47];
                  } while (uVar49 < uVar57);
                }
                uVar49 = (uint)uVar51;
              }
              uVar51 = 0;
              iVar72 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
              iVar25 = iVar20;
              iVar54 = iVar20;
              if ((int)param_5 < 2) {
                do {
                  iVar29 = iVar72 + iVar25;
                  pbVar2[uVar51 + lVar39] = param_3[iVar72];
                  if (((int)(((uint)param_6 + 2) - uVar1) <= iVar29) || (iVar29 < (int)param_5)) {
                    iVar72 = iVar25 + iVar54;
                    iVar25 = -iVar25;
                    iVar29 = iVar29 - iVar72;
                    iVar54 = -iVar54;
                  }
                  uVar51 = uVar51 + 1;
                  iVar72 = iVar29;
                } while (uVar51 < -lVar46 + 2U);
              }
            }
            else {
              if (-1 < (int)uVar41) {
                iVar72 = 1;
                lVar34 = 0;
                if (uVar63 != 0) {
                  lVar62 = lVar50 * uVar38 + param_1;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    pbVar2[lVar34 + -1] = *(byte *)(lVar62 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                    pbVar2[lVar34 + -2] = *(byte *)(lVar62 + 2 + uVar47 * 2);
                    lVar34 = lVar34 + -2;
                  } while (uVar51 < uVar66);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < param_5) {
                  pbVar2[-(longlong)iVar72] = *(byte *)(param_1 + iVar72 + lVar50 * uVar38);
                }
              }
LAB_140aabd01:
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar27 = param_3 + lVar26;
                  lVar34 = lVar50 * uVar38 + lVar3;
                  if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                     (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                    if ((int)uVar1 < 0x20) {
LAB_140aac029:
                      uVar49 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar49 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar27 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aac029;
                        uVar47 = 0;
                        uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        puVar4 = (undefined8 *)(uVar51 + lVar34);
                        uVar16 = puVar4[1];
                        uVar17 = puVar4[2];
                        uVar18 = puVar4[3];
                        pbVar5 = pbVar27 + uVar51;
                        *(undefined8 *)pbVar5 = *puVar4;
                        *(undefined8 *)(pbVar5 + 8) = uVar16;
                        *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                    }
                    if (uVar49 + 1 <= uVar1) {
                      lVar26 = (longlong)(int)uVar49;
                      uVar51 = lVar67 - lVar26;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                               *(undefined8 *)(lVar34 + lVar26 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          pbVar27[uVar47 + lVar26] = *(byte *)(uVar47 + lVar34 + lVar26);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    goto LAB_140aaae40;
                  }
                }
                iVar72 = 1;
                if (uVar76 != 0) {
                  lVar34 = lVar50 * uVar38 + lVar3;
                  uVar51 = 0;
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar34 + uVar47 * 2);
                    param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar34 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar72 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar72 - 1U < uVar1) {
                  param_3[(longlong)iVar72 + -1 + lVar26] =
                       *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar38);
                }
              }
            }
          }
          else {
            if (-1 < (int)uVar41) {
              do {
                uVar49 = 0;
                if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                  iVar72 = (int)uVar51;
                  do {
                    if ((int)uVar51 < 0) break;
                    lVar34 = (longlong)(int)uVar49;
                    uVar49 = uVar49 + 1;
                    uVar51 = (ulonglong)((int)uVar51 - 1);
                    param_3[iVar72 - lVar34] =
                         *(byte *)(((longlong)iVar72 + lVar50 * uVar38 + lVar33) - lVar34);
                  } while (uVar49 < uVar57);
                }
              } while (-1 < (int)uVar51);
            }
            if (uVar77 != 0) goto LAB_140aabd01;
            if (0 < (int)uVar1) {
              iVar72 = 1;
              lVar34 = 0;
              if (uVar76 != 0) {
                lVar62 = lVar50 * uVar38 + lVar3;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar34 + -2 + lVar62);
                  lVar8 = lVar34 + -3;
                  lVar34 = lVar34 + -2;
                  param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar8 + lVar62);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar79);
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar1) {
                param_3[(longlong)iVar72 + -1 + lVar26] =
                     *(byte *)((lVar3 - iVar72) + -1 + lVar50 * uVar38);
              }
            }
          }
        }
        else if ((param_7 & 0xf0) == 0xf0) {
          uVar49 = 0;
          uVar59 = 0;
          if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar26 = lVar50 * uVar38;
              lVar34 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar26);
              if ((lVar46 <= lVar34) || (lVar46 <= -lVar34)) {
                if ((int)param_5 < 0x20) {
LAB_140aab1c4:
                  uVar49 = 0;
                }
                else {
                  if ((int)param_5 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar68;
                  }
                  else {
                    if ((int)param_5 < iVar37) goto LAB_140aab1c4;
                    uVar47 = 0;
                    uVar51 = uVar61;
                    uVar49 = uVar43;
                    if (iVar58 != 0) {
                      do {
                        param_3[uVar47] = *(byte *)(uVar47 + lVar26 + lVar33);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar61);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar26 + lVar33);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar27 = param_3 + uVar51;
                    *(undefined8 *)pbVar27 = *puVar4;
                    *(undefined8 *)(pbVar27 + 8) = uVar16;
                    *(undefined8 *)(pbVar27 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar27 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                uVar59 = param_5;
                if (uVar49 + 1 <= param_5) {
                  lVar34 = (longlong)(int)uVar49;
                  uVar51 = lVar46 - lVar34;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(param_3 + uVar56 + lVar34) =
                           *(undefined8 *)(lVar33 + lVar26 + lVar34 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      param_3[uVar47 + lVar34] = *(byte *)(uVar47 + lVar26 + lVar33 + lVar34);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                goto LAB_140aa9d32;
              }
            }
            uVar32 = 1;
            if (uVar63 != 0) {
              lVar26 = lVar50 * uVar38 + lVar33;
              uVar51 = 0;
              do {
                uVar47 = uVar51;
                param_3[uVar47 * 2] = *(byte *)(lVar26 + uVar47 * 2);
                param_3[uVar47 * 2 + 1] = *(byte *)(lVar26 + 1 + uVar47 * 2);
                uVar51 = uVar47 + 1;
              } while (uVar51 < uVar66);
              uVar49 = (int)uVar51 * 2;
              uVar32 = (int)uVar47 + 2 + (int)uVar51;
            }
            uVar59 = uVar49;
            if (uVar32 - 1 < param_5) {
              param_3[(longlong)(int)uVar32 + -1] =
                   *(byte *)(lVar33 + (int)uVar32 + -1 + lVar50 * uVar38);
              uVar59 = uVar32;
            }
          }
LAB_140aa9d32:
          if (0 < (int)(uint)param_6) {
            if (uVar48 < 7) {
LAB_140aa9ee4:
              iVar72 = 1;
              uVar49 = uVar59;
              if (uVar70 != 0) {
                lVar26 = lVar50 * uVar38 + param_1;
                uVar51 = 0;
                do {
                  uVar47 = uVar51;
                  param_3[uVar47 * 2 + (longlong)(int)uVar59] = *(byte *)(lVar26 + uVar47 * 2);
                  param_3[uVar47 * 2 + (longlong)(int)uVar59 + 1] =
                       *(byte *)(lVar26 + 1 + uVar47 * 2);
                  uVar51 = uVar47 + 1;
                } while (uVar51 < uVar73);
                uVar49 = uVar59 + (int)uVar51 * 2;
                iVar72 = (int)uVar47 + 2 + (int)uVar51;
              }
              if (iVar72 - 1U < uVar48) {
                param_3[(longlong)iVar72 + -1 + (longlong)(int)uVar59] =
                     *(byte *)(param_1 + iVar72 + -1 + lVar50 * uVar38);
                uVar49 = iVar72 + uVar59;
              }
            }
            else {
              pbVar27 = param_3 + (int)uVar59;
              lVar26 = lVar50 * uVar38 + param_1;
              if (((longlong)pbVar27 - lVar26 < (longlong)(ulonglong)uVar48) &&
                 (-((longlong)pbVar27 - lVar26) < (longlong)(ulonglong)uVar48)) goto LAB_140aa9ee4;
              if (uVar48 < 0x20) {
LAB_140aab1ed:
                uVar49 = 0;
              }
              else {
                if (uVar48 < 0xa71) {
                  uVar51 = 0;
                  uVar49 = uVar40;
                }
                else {
                  uVar51 = (ulonglong)pbVar27 & 0x1f;
                  if ((int)uVar51 != 0) {
                    uVar51 = (ulonglong)(0x20 - (int)uVar51);
                  }
                  iVar72 = (int)uVar51;
                  if (uVar48 < iVar72 + 0x20U) goto LAB_140aab1ed;
                  uVar49 = uVar48 - (uVar48 - iVar72 & 0x1f);
                  uVar47 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar27[uVar47] = *(byte *)(uVar47 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  puVar4 = (undefined8 *)(uVar51 + lVar26);
                  uVar16 = puVar4[1];
                  uVar17 = puVar4[2];
                  uVar18 = puVar4[3];
                  pbVar5 = pbVar27 + uVar51;
                  *(undefined8 *)pbVar5 = *puVar4;
                  *(undefined8 *)(pbVar5 + 8) = uVar16;
                  *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                  *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              if (uVar49 + 1 <= uVar48) {
                uVar32 = uVar48 - uVar49;
                if (uVar32 < 8) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar32 & 0xfffffff8;
                  uVar24 = 0;
                  lVar34 = 0;
                  do {
                    iVar72 = uVar24 + uVar49;
                    uVar24 = uVar24 + 8;
                    *(undefined8 *)(param_3 + lVar34 + (int)(uVar49 + uVar59)) =
                         *(undefined8 *)(iVar72 + lVar26);
                    lVar34 = lVar34 + 8;
                  } while (uVar24 < uVar45);
                }
                lVar34 = (longlong)(int)uVar45;
                lVar62 = (longlong)(int)(uVar49 + uVar45);
                if (uVar45 < uVar32) {
                  do {
                    uVar45 = uVar45 + 1;
                    param_3[lVar34 + (int)(uVar49 + uVar59)] = *(byte *)(lVar62 + lVar26);
                    lVar34 = lVar34 + 1;
                    lVar62 = lVar62 + 1;
                  } while (uVar45 < uVar32);
                }
              }
              uVar49 = uVar59 + uVar48;
            }
            uVar59 = uVar49;
            if (2 < (int)(uint)param_6) {
              lVar26 = lVar50 * uVar38 + lVar3;
              param_3[(int)uVar59] = *(byte *)(lVar26 + -2);
              iVar72 = uVar59 + 2;
              param_3[(longlong)(int)uVar59 + 1] = *(byte *)(lVar26 + -1);
              lVar35 = (longlong)iVar72;
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar27 = param_3 + lVar35;
                  if ((2 - lVar46 <= (longlong)pbVar27 - lVar26) ||
                     (2 - lVar46 <= -((longlong)pbVar27 - lVar26))) {
                    if ((int)uVar1 < 0x20) {
LAB_140aab20d:
                      uVar49 = 0;
                    }
                    else {
                      if ((int)uVar1 < 0xa71) {
                        uVar51 = 0;
                        uVar49 = uVar69;
                      }
                      else {
                        uVar51 = (ulonglong)pbVar27 & 0x1f;
                        if ((int)uVar51 != 0) {
                          uVar51 = (ulonglong)(0x20 - (int)uVar51);
                        }
                        iVar72 = (int)uVar51;
                        if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aab20d;
                        uVar47 = 0;
                        uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                        if (iVar72 != 0) {
                          do {
                            pbVar27[uVar47] = *(byte *)(uVar47 + lVar26);
                            uVar47 = uVar47 + 1;
                          } while (uVar47 < uVar51);
                        }
                      }
                      do {
                        puVar4 = (undefined8 *)(uVar51 + lVar26);
                        uVar16 = puVar4[1];
                        uVar17 = puVar4[2];
                        uVar18 = puVar4[3];
                        pbVar5 = pbVar27 + uVar51;
                        *(undefined8 *)pbVar5 = *puVar4;
                        *(undefined8 *)(pbVar5 + 8) = uVar16;
                        *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                        *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                        uVar51 = uVar51 + 0x20;
                      } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                    }
                    if (uVar49 + 1 <= uVar1) {
                      lVar35 = (longlong)(int)uVar49;
                      uVar51 = lVar67 - lVar35;
                      if ((longlong)uVar51 < 8) {
                        uVar47 = 0;
                      }
                      else {
                        uVar56 = 0;
                        uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                        do {
                          *(undefined8 *)(pbVar27 + uVar56 + lVar35) =
                               *(undefined8 *)(lVar26 + lVar35 + uVar56);
                          uVar56 = uVar56 + 8;
                        } while (uVar56 < uVar47);
                      }
                      if (uVar47 < uVar51) {
                        do {
                          pbVar27[uVar47 + lVar35] = *(byte *)(uVar47 + lVar26 + lVar35);
                          uVar47 = uVar47 + 1;
                        } while (uVar47 < uVar51);
                      }
                    }
                    lVar35 = (longlong)(int)(iVar31 + 4 + uVar59);
                    goto LAB_140aaa18b;
                  }
                }
                iVar54 = 1;
                uVar51 = 0;
                iVar25 = iVar72;
                if (uVar76 != 0) {
                  do {
                    uVar47 = uVar51;
                    param_3[uVar47 * 2 + lVar35] = *(byte *)(lVar26 + uVar47 * 2);
                    param_3[uVar47 * 2 + lVar35 + 1] = *(byte *)(lVar26 + 1 + uVar47 * 2);
                    uVar51 = uVar47 + 1;
                  } while (uVar51 < uVar79);
                  iVar25 = (int)uVar51 * 2 + 2 + uVar59;
                  iVar54 = (int)uVar47 + 2 + (int)uVar51;
                }
                if (iVar54 - 1U < uVar1) {
                  param_3[(longlong)iVar54 + -1 + lVar35] =
                       *(byte *)((longlong)iVar54 + -1 + lVar26);
                  lVar35 = (longlong)(iVar54 + iVar72);
                }
                else {
                  lVar35 = (longlong)iVar25;
                }
              }
LAB_140aaa18b:
              lVar35 = lVar35 - lVar65;
              goto LAB_140aaae40;
            }
          }
          lVar26 = (longlong)(int)uVar59;
          if (0 < (int)uVar1) {
            if (6 < (int)uVar1) {
              pbVar27 = param_3 + lVar26;
              lVar34 = lVar50 * uVar38 + lVar3;
              if ((2 - lVar46 <= (longlong)pbVar27 - lVar34) ||
                 (2 - lVar46 <= -((longlong)pbVar27 - lVar34))) {
                if ((int)uVar1 < 0x20) {
LAB_140aab22b:
                  uVar49 = 0;
                }
                else {
                  if ((int)uVar1 < 0xa71) {
                    uVar51 = 0;
                    uVar49 = uVar69;
                  }
                  else {
                    uVar51 = (ulonglong)pbVar27 & 0x1f;
                    if ((int)uVar51 != 0) {
                      uVar51 = (ulonglong)(0x20 - (int)uVar51);
                    }
                    iVar72 = (int)uVar51;
                    if ((int)uVar1 < iVar72 + 0x20) goto LAB_140aab22b;
                    uVar47 = 0;
                    uVar49 = uVar1 - (uVar1 - iVar72 & 0x1f);
                    if (iVar72 != 0) {
                      do {
                        pbVar27[uVar47] = *(byte *)(uVar47 + lVar34);
                        uVar47 = uVar47 + 1;
                      } while (uVar47 < uVar51);
                    }
                  }
                  do {
                    puVar4 = (undefined8 *)(uVar51 + lVar34);
                    uVar16 = puVar4[1];
                    uVar17 = puVar4[2];
                    uVar18 = puVar4[3];
                    pbVar5 = pbVar27 + uVar51;
                    *(undefined8 *)pbVar5 = *puVar4;
                    *(undefined8 *)(pbVar5 + 8) = uVar16;
                    *(undefined8 *)(pbVar5 + 0x10) = uVar17;
                    *(undefined8 *)(pbVar5 + 0x18) = uVar18;
                    uVar51 = uVar51 + 0x20;
                  } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
                }
                if (uVar49 + 1 <= uVar1) {
                  lVar26 = (longlong)(int)uVar49;
                  uVar51 = lVar67 - lVar26;
                  if ((longlong)uVar51 < 8) {
                    uVar47 = 0;
                  }
                  else {
                    uVar56 = 0;
                    uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                    do {
                      *(undefined8 *)(pbVar27 + uVar56 + lVar26) =
                           *(undefined8 *)(lVar34 + lVar26 + uVar56);
                      uVar56 = uVar56 + 8;
                    } while (uVar56 < uVar47);
                  }
                  if (uVar47 < uVar51) {
                    do {
                      pbVar27[uVar47 + lVar26] = *(byte *)(uVar47 + lVar34 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                goto LAB_140aaae40;
              }
            }
            iVar72 = 1;
            if (uVar76 != 0) {
              lVar34 = lVar50 * uVar38 + lVar3;
              uVar51 = 0;
              do {
                uVar47 = uVar51;
                param_3[uVar47 * 2 + lVar26] = *(byte *)(lVar34 + uVar47 * 2);
                param_3[uVar47 * 2 + lVar26 + 1] = *(byte *)(lVar34 + 1 + uVar47 * 2);
                uVar51 = uVar47 + 1;
              } while (uVar51 < uVar79);
              iVar72 = (int)uVar47 + 2 + (int)uVar51;
            }
            if (iVar72 - 1U < uVar1) {
              param_3[(longlong)iVar72 + -1 + lVar26] =
                   *(byte *)(lVar3 + iVar72 + -1 + lVar50 * uVar38);
            }
          }
        }
        else {
          lVar35 = 0;
        }
LAB_140aaae40:
        **(short **)(param_2 + uVar38 * 8) = (ushort)*param_3 - (ushort)param_3[2];
        if (0 < (int)uVar78) {
          if (6 < (int)uVar78) {
            uVar51 = *(longlong *)(param_2 + uVar38 * 8) + 2;
            lVar26 = param_1 + lVar50 * uVar38;
            if ((lVar39 <= (longlong)(uVar51 - lVar26)) ||
               (lVar39 * 2 + -4 <= (longlong)-(uVar51 - lVar26))) {
              if ((int)uVar78 < 0x20) {
LAB_140aadf9c:
                uVar49 = 0;
              }
              else {
                if ((int)uVar78 < 0xa39) {
                  uVar51 = 0;
                  uVar49 = uVar78 & 0xffffffe0;
                }
                else {
                  uVar59 = (uint)uVar51 & 0x1f;
                  if ((uVar51 & 0x1f) != 0) {
                    if ((uVar51 & 1) != 0) goto LAB_140aadf9c;
                    uVar59 = 0x20 - uVar59 >> 1;
                  }
                  uVar51 = (ulonglong)uVar59;
                  if ((int)uVar78 < (int)(uVar59 + 0x20)) goto LAB_140aadf9c;
                  uVar47 = 0;
                  uVar49 = uVar78 - (uVar78 - uVar59 & 0x1f);
                  if (uVar59 != 0) {
                    do {
                      *(ushort *)(*(longlong *)(param_2 + uVar38 * 8) + 2 + uVar47 * 2) =
                           (ushort)*(byte *)(uVar47 + lVar26) -
                           (ushort)*(byte *)(uVar47 + 2 + lVar26);
                      uVar47 = uVar47 + 1;
                    } while (uVar47 < uVar51);
                  }
                }
                do {
                  auVar9 = *(undefined1 (*) [32])(uVar51 + lVar26);
                  auVar10 = *(undefined1 (*) [32])(uVar51 + 2 + lVar26);
                  auVar14 = vpmovzxbw_avx2(auVar9._0_16_);
                  auVar15 = vpmovzxbw_avx2(auVar10._0_16_);
                  auVar14 = vpsubw_avx2(auVar14,auVar15);
                  *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar38 * 8) + 2 + uVar51 * 2) =
                       auVar14;
                  auVar9 = vpmovzxbw_avx2(auVar9._16_16_);
                  auVar10 = vpmovzxbw_avx2(auVar10._16_16_);
                  auVar9 = vpsubw_avx2(auVar9,auVar10);
                  *(undefined1 (*) [32])(*(longlong *)(param_2 + uVar38 * 8) + 0x22 + uVar51 * 2) =
                       auVar9;
                  uVar51 = uVar51 + 0x20;
                } while (uVar51 < (ulonglong)(longlong)(int)uVar49);
              }
              if (uVar49 + 1 <= uVar78) {
                lVar34 = (longlong)(int)uVar49;
                uVar51 = (int)uVar78 - lVar34;
                if ((longlong)uVar51 < 8) {
                  uVar47 = 0;
                }
                else {
                  uVar56 = 0;
                  uVar47 = (ulonglong)(int)((uint)uVar51 & 0xfffffff8);
                  do {
                    lVar62 = (longlong)(int)uVar49 + lVar50 * uVar38 + param_1;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = *(ulonglong *)(uVar56 + lVar62);
                    auVar11 = vpmovzxbw_avx(auVar11);
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = *(ulonglong *)(uVar56 + 2 + lVar62);
                    auVar12 = vpmovzxbw_avx(auVar12);
                    auVar11 = vpsubw_avx(auVar11,auVar12);
                    *(undefined1 (*) [16])
                     (*(longlong *)(param_2 + uVar38 * 8) + lVar34 * 2 + 2 + uVar56 * 2) = auVar11;
                    uVar56 = uVar56 + 8;
                  } while (uVar56 < uVar47);
                }
                if (uVar47 < uVar51) {
                  do {
                    *(ushort *)(*(longlong *)(param_2 + uVar38 * 8) + lVar34 * 2 + 2 + uVar47 * 2) =
                         (ushort)*(byte *)(uVar47 + lVar26 + lVar34) -
                         (ushort)*(byte *)(uVar47 + 2 + lVar26 + lVar34);
                    uVar47 = uVar47 + 1;
                  } while (uVar47 < uVar51);
                }
              }
              goto LAB_140aab136;
            }
          }
          iVar72 = 1;
          if (uVar78 >> 1 != 0) {
            lVar26 = lVar50 * uVar38 + param_1;
            uVar51 = 0;
            do {
              uVar47 = uVar51;
              *(ushort *)(*(longlong *)(param_2 + uVar38 * 8) + 2 + uVar47 * 4) =
                   (ushort)*(byte *)(lVar26 + uVar47 * 2) -
                   (ushort)*(byte *)(lVar26 + 2 + uVar47 * 2);
              *(ushort *)(*(longlong *)(param_2 + uVar38 * 8) + 4 + uVar47 * 4) =
                   (ushort)*(byte *)(lVar26 + 1 + uVar47 * 2) -
                   (ushort)*(byte *)(lVar26 + 3 + uVar47 * 2);
              uVar51 = uVar47 + 1;
            } while (uVar51 < uVar78 >> 1);
            iVar72 = (int)uVar47 + 2 + (int)uVar51;
          }
          if (iVar72 - 1U < uVar78) {
            lVar34 = (longlong)iVar72;
            lVar26 = lVar50 * uVar38 + param_1;
            *(ushort *)(*(longlong *)(param_2 + uVar38 * 8) + lVar34 * 2) =
                 (ushort)*(byte *)(lVar34 + -1 + lVar26) - (ushort)*(byte *)(lVar34 + 1 + lVar26);
          }
        }
LAB_140aab136:
        if ((int)(uint)param_6 < 2) goto LAB_140aab178;
        lVar26 = uVar38 * 8;
        uVar38 = uVar38 + 1;
        lVar23 = lVar23 + lVar50;
        *(ushort *)(*(longlong *)(param_2 + lVar26) + -2 + lVar39 * 2) =
             (ushort)param_3[lVar35] - (ushort)param_3[lVar35 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar38) {
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
    (*(code *)(&PTR_FUN_14308f510)[lVar46])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar50 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140aab178:
  uVar38 = uVar38 + 1;
  lVar23 = lVar23 + lVar50;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar38) {
    return 0;
  }
  goto LAB_140aa9a80;
}

