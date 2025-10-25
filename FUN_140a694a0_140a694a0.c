
undefined8
FUN_140a694a0(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  byte bVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  unkuint9 Var30;
  undefined1 auVar31 [11];
  undefined1 auVar32 [15];
  unkuint9 Var33;
  undefined1 auVar34 [11];
  undefined1 auVar35 [15];
  unkuint9 Var36;
  undefined1 auVar37 [11];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  uint uVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar52;
  longlong lVar53;
  ulonglong uVar55;
  ulonglong uVar56;
  int iVar57;
  int iVar58;
  ulonglong uVar59;
  longlong lVar60;
  ulonglong uVar61;
  uint uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  int iVar68;
  int iVar69;
  uint uVar70;
  longlong lVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  uint uVar74;
  longlong lVar75;
  longlong lVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  longlong lVar79;
  byte *pbVar80;
  uint uVar81;
  int iVar82;
  ulonglong uVar83;
  int iVar84;
  ulonglong uVar85;
  ulonglong *puVar86;
  uint uVar87;
  ulonglong uVar88;
  ulonglong uVar89;
  longlong lVar90;
  int iVar91;
  uint uVar92;
  uint uVar93;
  longlong lVar94;
  ulonglong uVar95;
  int iVar96;
  uint uVar97;
  byte *pbVar98;
  longlong lVar100;
  undefined4 uVar101;
  undefined8 uVar102;
  undefined1 in_XMM2 [16];
  longlong lStack_78;
  ulonglong uVar51;
  ulonglong uVar54;
  ulonglong uVar99;
  
  lVar90 = 0;
  lVar75 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar81 = param_7 & 0xf;
      uVar83 = (ulonglong)param_3 & 0xf;
      lVar90 = (longlong)(int)param_5;
      uVar88 = uVar83;
      if (uVar83 != 0) {
        uVar88 = 0x10 - uVar83;
      }
      pbVar98 = param_3 + lVar90;
      uVar49 = param_5 >> 1;
      uVar51 = (ulonglong)uVar49;
      lVar76 = -lVar90;
      uVar65 = param_7 & 0x40;
      iVar91 = -param_5 + 3;
      lVar94 = (longlong)(int)(uint)param_6;
      uVar50 = -param_5 + 2;
      lVar71 = lVar76 + 4;
      lVar53 = param_1 - lVar90;
      uVar66 = 2;
      if ((uint)param_6 < 3) {
        uVar66 = (uint)param_6;
      }
      uVar44 = param_7 & 0x80;
      uVar59 = (ulonglong)pbVar98 & 0xf;
      uVar72 = (ulonglong)(int)uVar66;
      uVar52 = uVar50 >> 1;
      uVar54 = (ulonglong)uVar52;
      iVar96 = uVar66 + 1;
      lVar90 = lVar94 - lVar90;
      lVar2 = lVar94 + param_1;
      uVar92 = (param_5 + iVar96) - 1;
      uVar97 = uVar66 >> 1;
      uVar99 = (ulonglong)uVar97;
      iVar1 = param_5 - 1;
      uVar77 = 0xffffffffffffffff - (lVar76 + -1);
      uVar55 = lVar94 - 2;
      uVar85 = lVar76 + 2;
      uVar95 = (ulonglong)(1 < (int)(uint)param_6);
      uVar93 = (uint)param_6 - (1 < (int)(uint)param_6);
      iVar45 = ((int)(uint)param_6 < 2) - 1;
      if ((int)uVar59 != 0) {
        uVar59 = (ulonglong)(0x10 - (int)uVar59);
      }
      if (uVar83 != 0) {
        uVar83 = 0x10 - uVar83;
      }
      iVar57 = (int)uVar59;
      iVar46 = uVar66 - (uVar66 - iVar57 & 0xf);
      lVar76 = uVar83 + 0x10;
      uVar47 = (ulonglong)iVar46;
      lVar4 = uVar88 + 0x10;
      uVar101 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar87 = param_5 - (param_5 - (int)uVar88 & 0xf);
      uVar89 = (ulonglong)(int)uVar87;
      uVar102 = CONCAT44(uVar101,uVar101);
      uVar78 = (ulonglong)(int)((int)uVar77 - ((int)uVar77 - (int)uVar83 & 0xfU));
      uVar62 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar62 = uVar81;
      }
      iVar84 = (int)uVar85;
      uVar48 = 0;
      lStack_78 = 0;
LAB_140a69960:
      if ((uint)param_6 == 1) {
        uVar67 = uVar62;
        if (uVar81 != 6) goto LAB_140a699bb;
        goto LAB_140a6a273;
      }
      do {
        uVar67 = uVar81;
        if (uVar81 == 6) {
LAB_140a6a273:
          uVar67 = 0;
          uVar70 = 0;
          if (uVar65 == 0) {
            uVar74 = uVar67;
            if (0 < (int)param_5) {
              if ((0xf < (int)param_5) && (lVar4 <= (int)param_5)) {
                uVar63 = 0;
                uVar56 = uVar88;
                if (uVar88 != 0) {
                  do {
                    param_3[uVar63] = param_8;
                    uVar63 = uVar63 + 1;
                  } while (uVar63 < uVar88);
                }
                do {
                  *(undefined8 *)(param_3 + uVar56) = uVar102;
                  *(undefined8 *)(param_3 + uVar56 + 8) = uVar102;
                  uVar56 = uVar56 + 0x10;
                  uVar70 = uVar87;
                } while (uVar56 < uVar89);
              }
              uVar63 = (ulonglong)(int)uVar70;
              uVar74 = uVar70;
              if (uVar63 < (ulonglong)(longlong)(int)param_5) {
                do {
                  param_3[uVar63] = param_8;
                  uVar63 = uVar63 + 1;
                } while (uVar63 < (ulonglong)(longlong)(int)param_5);
                uVar74 = (uint)uVar63;
              }
            }
          }
          else {
            uVar74 = uVar70;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar60 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_78);
                if (((int)param_5 <= lVar60) || ((longlong)(int)param_5 <= -lVar60)) {
                  if (((int)param_5 < 0x10) || ((int)param_5 < lVar4)) {
                    uVar63 = 0;
                  }
                  else {
                    uVar63 = 0;
                    lVar60 = lVar53 + lStack_78;
                    if (uVar88 != 0) {
                      do {
                        param_3[uVar63] = *(byte *)(uVar63 + lVar60);
                        uVar63 = uVar63 + 1;
                      } while (uVar63 < uVar88);
                    }
                    uVar56 = uVar88;
                    uVar63 = uVar89;
                    if ((lVar53 + uVar88 + lStack_78 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar56 + lVar60);
                        *(undefined1 (*) [16])(param_3 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar89);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar56 + lVar60));
                        *(undefined1 (*) [16])(param_3 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar89);
                    }
                  }
                  uVar74 = param_5;
                  if (uVar63 < (ulonglong)(longlong)(int)param_5) {
                    do {
                      param_3[uVar63] = *(byte *)(uVar63 + lVar53 + lStack_78);
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < (ulonglong)(longlong)(int)param_5);
                  }
                  goto LAB_140a6a571;
                }
              }
              uVar70 = 1;
              uVar63 = 0;
              if (uVar49 != 0) {
                do {
                  param_3[uVar63 * 2] = *(byte *)(lVar53 + lStack_78 + uVar63 * 2);
                  param_3[uVar63 * 2 + 1] = *(byte *)(lVar53 + lStack_78 + 1 + uVar63 * 2);
                  uVar63 = uVar63 + 1;
                } while (uVar63 < uVar51);
                uVar67 = (int)uVar63 * 2;
                uVar70 = uVar67 + 1;
              }
              uVar74 = uVar67;
              if (uVar70 - 1 < param_5) {
                param_3[(longlong)(int)uVar70 + -1] =
                     *(byte *)(lVar53 + (int)uVar70 + -1 + lStack_78);
                uVar74 = uVar70;
              }
            }
          }
LAB_140a6a571:
          lVar60 = (longlong)(int)uVar74;
          if ((int)(uint)param_6 < 1) {
            if (uVar44 != 0) goto LAB_140a6a998;
LAB_140a6a85d:
            if ((int)uVar50 < 1) goto LAB_140a6abd7;
LAB_140a6a86b:
            if ((longlong)uVar85 < 0x10) {
LAB_140a6d7e3:
              iVar68 = 0;
            }
            else {
              pbVar80 = param_3 + lVar60;
              uVar63 = (ulonglong)pbVar80 & 0xf;
              if (uVar63 != 0) {
                uVar63 = 0x10 - uVar63;
              }
              if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6d7e3;
              uVar56 = 0;
              iVar68 = iVar84 - (iVar84 - (int)uVar63 & 0xfU);
              if (uVar63 != 0) {
                do {
                  pbVar80[uVar56] = param_8;
                  uVar56 = uVar56 + 1;
                } while (uVar56 < uVar63);
              }
              do {
                *(undefined8 *)(pbVar80 + uVar63) = uVar102;
                *(undefined8 *)(pbVar80 + uVar63 + 8) = uVar102;
                uVar63 = uVar63 + 0x10;
              } while (uVar63 < (ulonglong)(longlong)iVar68);
              uVar74 = (int)lVar60 + iVar68;
            }
            uVar63 = (ulonglong)iVar68;
            if (uVar63 < uVar85) {
              do {
                param_3[uVar63 + lVar60] = param_8;
                uVar63 = uVar63 + 1;
              } while (uVar63 < uVar85);
              uVar74 = (int)uVar63 + (int)lVar60;
            }
LAB_140a6abc4:
            if ((int)(uint)param_6 < 3) {
LAB_140a6abd7:
              uVar63 = (longlong)(int)param_5;
              goto LAB_140a6abe0;
            }
          }
          else {
            if (uVar66 < 7) {
LAB_140a6a729:
              iVar68 = 1;
              uVar63 = 0;
              uVar67 = uVar74;
              if (uVar97 != 0) {
                do {
                  param_3[uVar63 * 2 + lVar60] = *(byte *)(param_1 + lStack_78 + uVar63 * 2);
                  param_3[uVar63 * 2 + lVar60 + 1] = *(byte *)(param_1 + lStack_78 + 1 + uVar63 * 2)
                  ;
                  uVar63 = uVar63 + 1;
                } while (uVar63 < uVar99);
                iVar68 = (int)uVar63 * 2;
                uVar67 = uVar74 + iVar68;
                iVar68 = iVar68 + 1;
              }
              if (iVar68 - 1U < uVar66) {
                param_3[(longlong)iVar68 + -1 + lVar60] =
                     *(byte *)(param_1 + iVar68 + -1 + lStack_78);
                uVar67 = uVar74 + iVar68;
              }
            }
            else {
              pbVar80 = param_3 + lVar60;
              lVar79 = param_1 + lStack_78;
              if (((longlong)pbVar80 - lVar79 < (longlong)(ulonglong)uVar66) &&
                 (-((longlong)pbVar80 - lVar79) < (longlong)(ulonglong)uVar66)) goto LAB_140a6a729;
              if (uVar66 < 0x10) {
LAB_140a6d7db:
                uVar56 = 0;
              }
              else {
                uVar63 = (ulonglong)pbVar80 & 0xf;
                if ((int)uVar63 != 0) {
                  uVar63 = (ulonglong)(0x10 - (int)uVar63);
                }
                iVar68 = (int)uVar63;
                if (uVar66 < iVar68 + 0x10U) goto LAB_140a6d7db;
                uVar56 = 0;
                iVar58 = uVar66 - (uVar66 - iVar68 & 0xf);
                if (iVar68 != 0) {
                  do {
                    pbVar80[uVar56] = *(byte *)(uVar56 + lVar79);
                    uVar56 = uVar56 + 1;
                  } while (uVar56 < uVar63);
                }
                if ((lVar79 + uVar63 & 0xf) == 0) {
                  uVar56 = (ulonglong)iVar58;
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar79);
                    *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                    uVar63 = uVar63 + 0x10;
                  } while (uVar63 < uVar56);
                }
                else {
                  uVar56 = (ulonglong)iVar58;
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar79));
                    *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                    uVar63 = uVar63 + 0x10;
                  } while (uVar63 < uVar56);
                }
              }
              for (; uVar56 < uVar72; uVar56 = uVar56 + 1) {
                pbVar80[uVar56] = *(byte *)(uVar56 + lVar79);
              }
              uVar67 = (uVar74 + iVar96) - 1;
            }
            uVar74 = uVar67;
            lVar60 = (longlong)(int)uVar74;
            if ((int)(uint)param_6 < 3) {
              if (uVar44 == 0) goto LAB_140a6a85d;
LAB_140a6a998:
              if (0 < (int)uVar50) {
LAB_140a6a9a6:
                iVar68 = (int)lVar60;
                if ((int)uVar50 < 7) {
LAB_140a6ab2c:
                  iVar58 = 1;
                  uVar63 = 0;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar63 * 2 + lVar60] = *(byte *)(lVar2 + lStack_78 + uVar63 * 2);
                      param_3[uVar63 * 2 + lVar60 + 1] =
                           *(byte *)(lVar2 + lStack_78 + 1 + uVar63 * 2);
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < uVar54);
                    iVar58 = (int)uVar63 * 2;
                    uVar74 = iVar68 + iVar58;
                    iVar58 = iVar58 + 1;
                  }
                  if (iVar58 - 1U < uVar50) {
                    param_3[(longlong)iVar58 + -1 + lVar60] =
                         *(byte *)(lVar2 + iVar58 + -1 + lStack_78);
                    uVar74 = iVar68 + iVar58;
                  }
                }
                else {
                  pbVar80 = param_3 + lVar60;
                  lVar79 = lVar2 + lStack_78;
                  if (((longlong)pbVar80 - lVar79 < 2 - (longlong)(int)param_5) &&
                     (-((longlong)pbVar80 - lVar79) < 2 - (longlong)(int)param_5))
                  goto LAB_140a6ab2c;
                  if ((longlong)uVar85 < 0x10) {
LAB_140a6d7eb:
                    uVar56 = 0;
                  }
                  else {
                    uVar63 = (ulonglong)pbVar80 & 0xf;
                    if (uVar63 != 0) {
                      uVar63 = 0x10 - uVar63;
                    }
                    if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6d7eb;
                    uVar61 = 0;
                    uVar56 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                    if (uVar63 != 0) {
                      do {
                        pbVar80[uVar61] = *(byte *)(uVar61 + lVar79);
                        uVar61 = uVar61 + 1;
                      } while (uVar61 < uVar63);
                    }
                    if ((lVar79 + uVar63 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar79);
                        *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                        uVar63 = uVar63 + 0x10;
                      } while (uVar63 < uVar56);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar79));
                        *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                        uVar63 = uVar63 + 0x10;
                      } while (uVar63 < uVar56);
                    }
                  }
                  for (; uVar56 < uVar85; uVar56 = uVar56 + 1) {
                    pbVar80[uVar56] = *(byte *)(uVar56 + lVar79);
                  }
                  uVar74 = (iVar68 + iVar91) - 1;
                }
                goto LAB_140a6abc4;
              }
              goto LAB_140a6abd7;
            }
            uVar74 = uVar74 + 2;
            param_3[lVar60] = *(byte *)(lStack_78 + -2 + lVar2);
            param_3[lVar60 + 1] = *(byte *)(lStack_78 + -1 + lVar2);
            lVar60 = (longlong)(int)uVar74;
            if (uVar44 == 0) {
              if (0 < (int)uVar50) goto LAB_140a6a86b;
            }
            else if (0 < (int)uVar50) goto LAB_140a6a9a6;
          }
          uVar63 = (int)uVar74 - lVar71;
        }
        else {
LAB_140a699bb:
          uVar56 = (ulonglong)(int)param_5;
          uVar63 = uVar56;
          if (uVar67 == 1) {
            uVar67 = 0;
            lVar60 = lVar75 * uVar48;
            bVar7 = *(byte *)(param_1 + lVar60);
            if (uVar65 == 0) {
              uVar70 = uVar67;
              if (0 < (int)param_5) {
                if (((longlong)uVar56 < 0x10) || ((longlong)uVar56 < lVar4)) {
                  uVar63 = 0;
                  uVar70 = 0;
                }
                else {
                  uVar63 = 0;
                  if (uVar88 != 0) {
                    do {
                      param_3[uVar63] = bVar7;
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < uVar88);
                  }
                  uVar101 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  in_XMM2._0_8_ = CONCAT44(uVar101,uVar101);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  uVar61 = uVar88;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar61) = in_XMM2;
                    uVar61 = uVar61 + 0x10;
                    uVar63 = uVar89;
                    uVar70 = uVar87;
                  } while (uVar61 < uVar89);
                }
                if (uVar63 < uVar56) {
                  do {
                    param_3[uVar63] = bVar7;
                    uVar63 = uVar63 + 1;
                  } while (uVar63 < uVar56);
                  uVar70 = (uint)uVar63;
                }
              }
            }
            else {
              uVar70 = 0;
              if (0 < (int)param_5) {
                if (6 < (int)param_5) {
                  lVar79 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar60);
                  if (((int)param_5 <= lVar79) || ((longlong)(int)param_5 <= -lVar79)) {
                    if (((longlong)uVar56 < 0x10) || ((longlong)uVar56 < lVar4)) {
                      uVar63 = 0;
                    }
                    else {
                      uVar63 = 0;
                      lVar79 = lVar60 + lVar53;
                      if (uVar88 != 0) {
                        do {
                          param_3[uVar63] = *(byte *)(uVar63 + lVar79);
                          uVar63 = uVar63 + 1;
                        } while (uVar63 < uVar88);
                      }
                      uVar61 = uVar88;
                      uVar63 = uVar89;
                      if ((lVar60 + lVar53 + uVar88 & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(uVar61 + lVar79);
                          *(undefined1 (*) [16])(param_3 + uVar61) = in_XMM2;
                          uVar61 = uVar61 + 0x10;
                        } while (uVar61 < uVar89);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar61 + lVar79));
                          *(undefined1 (*) [16])(param_3 + uVar61) = in_XMM2;
                          uVar61 = uVar61 + 0x10;
                        } while (uVar61 < uVar89);
                      }
                    }
                    uVar70 = param_5;
                    if (uVar63 < uVar56) {
                      do {
                        param_3[uVar63] = *(byte *)(uVar63 + lVar60 + lVar53);
                        uVar63 = uVar63 + 1;
                      } while (uVar63 < uVar56);
                    }
                    goto LAB_140a6d24a;
                  }
                }
                uVar74 = 1;
                uVar63 = 0;
                if (uVar49 != 0) {
                  do {
                    param_3[uVar63 * 2] = *(byte *)(lVar60 + lVar53 + uVar63 * 2);
                    param_3[uVar63 * 2 + 1] = *(byte *)(lVar60 + lVar53 + 1 + uVar63 * 2);
                    uVar63 = uVar63 + 1;
                  } while (uVar63 < uVar51);
                  uVar67 = (int)uVar63 * 2;
                  uVar74 = uVar67 + 1;
                }
                uVar70 = uVar67;
                if (uVar74 - 1 < param_5) {
                  param_3[(longlong)(int)uVar74 + -1] =
                       *(byte *)((longlong)(int)uVar74 + -1 + lVar60 + lVar53);
                  uVar70 = uVar74;
                }
              }
            }
LAB_140a6d24a:
            lVar79 = (longlong)(int)uVar70;
            if (0 < (int)(uint)param_6) {
              if (uVar66 < 7) {
LAB_140a6d3bf:
                iVar68 = 1;
                uVar63 = 0;
                uVar67 = uVar70;
                if (uVar97 != 0) {
                  do {
                    param_3[uVar63 * 2 + lVar79] = *(byte *)(param_1 + lVar60 + uVar63 * 2);
                    param_3[uVar63 * 2 + lVar79 + 1] = *(byte *)(param_1 + lVar60 + 1 + uVar63 * 2);
                    uVar63 = uVar63 + 1;
                  } while (uVar63 < uVar99);
                  iVar68 = (int)uVar63 * 2;
                  uVar67 = uVar70 + iVar68;
                  iVar68 = iVar68 + 1;
                }
                if (iVar68 - 1U < uVar66) {
                  param_3[(longlong)iVar68 + -1 + lVar79] =
                       *(byte *)((longlong)iVar68 + -1 + param_1 + lVar60);
                  uVar67 = uVar70 + iVar68;
                }
              }
              else {
                pbVar80 = param_3 + lVar79;
                lVar100 = param_1 + lVar60;
                if (((longlong)pbVar80 - lVar100 < (longlong)(ulonglong)uVar66) &&
                   (-((longlong)pbVar80 - lVar100) < (longlong)(ulonglong)uVar66))
                goto LAB_140a6d3bf;
                if (uVar66 < 0x10) {
LAB_140a6d7b6:
                  uVar61 = 0;
                }
                else {
                  uVar63 = (ulonglong)pbVar80 & 0xf;
                  if ((int)uVar63 != 0) {
                    uVar63 = (ulonglong)(0x10 - (int)uVar63);
                  }
                  iVar68 = (int)uVar63;
                  if (uVar66 < iVar68 + 0x10U) goto LAB_140a6d7b6;
                  uVar61 = 0;
                  iVar58 = uVar66 - (uVar66 - iVar68 & 0xf);
                  if (iVar68 != 0) {
                    do {
                      pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar63);
                  }
                  if ((lVar100 + uVar63 & 0xf) == 0) {
                    uVar61 = (ulonglong)iVar58;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                      *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                      uVar63 = uVar63 + 0x10;
                    } while (uVar63 < uVar61);
                  }
                  else {
                    uVar61 = (ulonglong)iVar58;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                      *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                      uVar63 = uVar63 + 0x10;
                    } while (uVar63 < uVar61);
                  }
                }
                for (; uVar61 < uVar72; uVar61 = uVar61 + 1) {
                  pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                }
                uVar67 = (uVar70 + iVar96) - 1;
              }
              uVar70 = uVar67;
              lVar79 = (longlong)(int)uVar70;
              if (2 < (int)(uint)param_6) {
                uVar70 = uVar70 + 2;
                param_3[lVar79] = *(byte *)(lVar2 + -2 + lVar60);
                param_3[lVar79 + 1] = *(byte *)(lVar2 + -1 + lVar60);
                lVar79 = (longlong)(int)uVar70;
              }
            }
            bVar7 = *(byte *)(lVar2 + -1 + lVar60);
            iVar68 = (int)lVar79;
            if (uVar44 == 0) {
              if (0 < (int)uVar50) {
                if ((longlong)uVar85 < 0x10) {
LAB_140a6d7be:
                  iVar58 = 0;
                }
                else {
                  pbVar80 = param_3 + lVar79;
                  uVar63 = (ulonglong)pbVar80 & 0xf;
                  if (uVar63 != 0) {
                    uVar63 = 0x10 - uVar63;
                  }
                  if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6d7be;
                  uVar61 = 0;
                  iVar58 = iVar84 - (iVar84 - (int)uVar63 & 0xfU);
                  if (uVar63 != 0) {
                    do {
                      pbVar80[uVar61] = bVar7;
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar63);
                  }
                  uVar101 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  in_XMM2._0_8_ = CONCAT44(uVar101,uVar101);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                    uVar63 = uVar63 + 0x10;
                  } while (uVar63 < (ulonglong)(longlong)iVar58);
                  uVar70 = iVar68 + iVar58;
                }
                uVar63 = (ulonglong)iVar58;
                if (uVar85 <= uVar63) goto LAB_140a6d795;
                do {
                  param_3[uVar63 + lVar79] = bVar7;
                  uVar63 = uVar63 + 1;
                } while (uVar63 < uVar85);
                lVar79 = (longlong)((int)uVar63 + iVar68);
              }
            }
            else {
              if ((int)uVar50 < 1) goto LAB_140a6d798;
              if (6 < (int)uVar50) {
                pbVar80 = param_3 + lVar79;
                lVar100 = lVar60 + lVar2;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar100) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar100))) {
                  if ((longlong)uVar85 < 0x10) {
LAB_140a6d7c5:
                    uVar61 = 0;
                  }
                  else {
                    uVar63 = (ulonglong)pbVar80 & 0xf;
                    if (uVar63 != 0) {
                      uVar63 = 0x10 - uVar63;
                    }
                    if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6d7c5;
                    uVar73 = 0;
                    uVar61 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                    if (uVar63 != 0) {
                      do {
                        pbVar80[uVar73] = *(byte *)(uVar73 + lVar100);
                        uVar73 = uVar73 + 1;
                      } while (uVar73 < uVar63);
                    }
                    if ((lVar100 + uVar63 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                        *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                        uVar63 = uVar63 + 0x10;
                      } while (uVar63 < uVar61);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                        *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                        uVar63 = uVar63 + 0x10;
                      } while (uVar63 < uVar61);
                    }
                  }
                  for (; uVar61 < uVar85; uVar61 = uVar61 + 1) {
                    pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                  }
                  lVar79 = (longlong)(iVar68 + iVar91 + -1);
                  goto LAB_140a6d798;
                }
              }
              iVar58 = 1;
              uVar63 = 0;
              if (uVar52 != 0) {
                do {
                  param_3[uVar63 * 2 + lVar79] = *(byte *)(lVar60 + lVar2 + uVar63 * 2);
                  param_3[uVar63 * 2 + lVar79 + 1] = *(byte *)(lVar60 + lVar2 + 1 + uVar63 * 2);
                  uVar63 = uVar63 + 1;
                } while (uVar63 < uVar54);
                iVar58 = (int)uVar63 * 2;
                uVar70 = iVar68 + iVar58;
                iVar58 = iVar58 + 1;
              }
              if (iVar58 - 1U < uVar50) {
                param_3[(longlong)iVar58 + -1 + lVar79] =
                     *(byte *)((longlong)iVar58 + -1 + lVar60 + lVar2);
                lVar79 = (longlong)(iVar58 + iVar68);
                goto LAB_140a6d798;
              }
LAB_140a6d795:
              lVar79 = (longlong)(int)uVar70;
            }
LAB_140a6d798:
            uVar63 = lVar79 - lVar71;
            if ((int)(uint)param_6 < 3) {
              uVar63 = uVar56;
            }
          }
          else if (uVar67 == 2) {
            uVar61 = uVar56;
            if (0 < (int)(uint)param_6) {
              if (uVar66 < 7) {
LAB_140a6bdc0:
                iVar68 = 1;
                uVar61 = 0;
                uVar67 = param_5;
                if (uVar97 != 0) {
                  lVar60 = lVar75 * uVar48 + param_1;
                  do {
                    pbVar98[uVar61 * 2] = *(byte *)(lVar60 + uVar61 * 2);
                    pbVar98[uVar61 * 2 + 1] = *(byte *)(lVar60 + 1 + uVar61 * 2);
                    uVar61 = uVar61 + 1;
                  } while (uVar61 < uVar99);
                  iVar68 = (int)uVar61 * 2;
                  uVar67 = param_5 + iVar68;
                  iVar68 = iVar68 + 1;
                }
                if (iVar68 - 1U < uVar66) {
                  pbVar98[(longlong)iVar68 + -1] =
                       *(byte *)(param_1 + iVar68 + -1 + lVar75 * uVar48);
                  uVar67 = param_5 + iVar68;
                }
              }
              else {
                lVar60 = lVar75 * uVar48 + param_1;
                if (((longlong)pbVar98 - lVar60 < (longlong)(ulonglong)uVar66) &&
                   (-((longlong)pbVar98 - lVar60) < (longlong)(ulonglong)uVar66))
                goto LAB_140a6bdc0;
                if ((uVar66 < 0x10) || (uVar66 < iVar57 + 0x10U)) {
                  iVar68 = 0;
                }
                else {
                  uVar61 = 0;
                  if (iVar57 != 0) {
                    do {
                      pbVar98[uVar61] = *(byte *)(uVar61 + lVar60);
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar59);
                  }
                  uVar61 = uVar59;
                  iVar68 = iVar46;
                  if ((lVar60 + uVar59 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar61 + lVar60);
                      *(undefined1 (*) [16])(pbVar98 + uVar61) = in_XMM2;
                      uVar61 = uVar61 + 0x10;
                    } while (uVar61 < uVar47);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar61 + lVar60));
                      *(undefined1 (*) [16])(pbVar98 + uVar61) = in_XMM2;
                      uVar61 = uVar61 + 0x10;
                    } while (uVar61 < uVar47);
                  }
                }
                for (uVar61 = (ulonglong)iVar68; uVar67 = uVar92, uVar61 < uVar72;
                    uVar61 = uVar61 + 1) {
                  pbVar98[uVar61] = *(byte *)(uVar61 + lVar60);
                }
              }
              uVar61 = (ulonglong)(int)uVar67;
              if (2 < (int)(uint)param_6) {
                lVar60 = lVar75 * uVar48;
                if (uVar65 == 0) {
                  if (-1 < iVar1) {
                    if (6 < (int)param_5) {
                      lVar79 = (longlong)(int)param_5;
                      pbVar80 = param_3 + ((uVar56 - 1) - (lVar60 + -1 + lVar2));
                      if ((lVar79 < (longlong)pbVar80) ||
                         ((byte *)-lVar79 != pbVar80 && lVar79 <= -(longlong)pbVar80)) {
                        if (((longlong)uVar77 < 0x10) || ((longlong)uVar77 < lVar76)) {
                          uVar63 = 0;
                        }
                        else {
                          uVar63 = 0;
                          lVar79 = (lVar60 + lVar2) - uVar56;
                          if (uVar83 != 0) {
                            do {
                              param_3[uVar63] = *(byte *)(uVar63 + lVar79);
                              uVar63 = uVar63 + 1;
                            } while (uVar63 < uVar83);
                          }
                          uVar73 = uVar83;
                          uVar63 = uVar78;
                          if ((lVar79 + uVar83 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar73 + lVar79);
                              *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                              uVar73 = uVar73 + 0x10;
                            } while (uVar73 < uVar78);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar73 + lVar79));
                              *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                              uVar73 = uVar73 + 0x10;
                            } while (uVar73 < uVar78);
                          }
                        }
                        if (uVar63 < uVar77) {
                          do {
                            param_3[uVar63] = *(byte *)(uVar63 + ((lVar60 + lVar2) - uVar56));
                            uVar63 = uVar63 + 1;
                          } while (uVar63 < uVar77);
                        }
                        goto LAB_140a6c2f5;
                      }
                    }
                    uVar63 = 0;
                    iVar68 = 1;
                    lVar79 = 0;
                    if (uVar49 != 0) {
                      do {
                        uVar63 = uVar63 + 1;
                        pbVar98[lVar79 + -1] = *(byte *)(lVar79 + -1 + lVar60 + lVar2);
                        pbVar98[lVar79 + -2] = *(byte *)(lVar79 + -2 + lVar60 + lVar2);
                        lVar79 = lVar79 + -2;
                      } while (uVar63 < uVar51);
                      iVar68 = (int)uVar63 * 2 + 1;
                    }
                    if (iVar68 - 1U < param_5) {
                      pbVar98[-(longlong)iVar68] = *(byte *)((lVar60 + lVar2) - (longlong)iVar68);
                    }
                  }
                }
                else if (-1 < iVar1) {
                  if (6 < (int)param_5) {
                    lVar100 = (longlong)(int)param_5;
                    lVar79 = param_1 + -1 + lVar60;
                    pbVar80 = param_3 + ((uVar56 - 1) - lVar79);
                    lVar79 = lVar79 + 1;
                    if ((lVar100 < (longlong)pbVar80) ||
                       ((byte *)-lVar100 != pbVar80 && lVar100 <= -(longlong)pbVar80)) {
                      if (((longlong)uVar77 < 0x10) || ((longlong)uVar77 < lVar76)) {
                        uVar63 = 0;
                      }
                      else {
                        uVar63 = 0;
                        lVar100 = lVar79 - uVar56;
                        if (uVar83 != 0) {
                          do {
                            param_3[uVar63] = *(byte *)(uVar63 + lVar100);
                            uVar63 = uVar63 + 1;
                          } while (uVar63 < uVar83);
                        }
                        uVar73 = uVar83;
                        uVar63 = uVar78;
                        if (((lVar79 - uVar56) + uVar83 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar73 + lVar100);
                            *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                            uVar73 = uVar73 + 0x10;
                          } while (uVar73 < uVar78);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar73 + lVar100));
                            *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                            uVar73 = uVar73 + 0x10;
                          } while (uVar73 < uVar78);
                        }
                      }
                      if (uVar63 < uVar77) {
                        do {
                          param_3[uVar63] = *(byte *)(uVar63 + (lVar79 - uVar56));
                          uVar63 = uVar63 + 1;
                        } while (uVar63 < uVar77);
                      }
                      goto LAB_140a6c2f5;
                    }
                  }
                  uVar63 = 0;
                  iVar68 = 1;
                  lVar79 = 0;
                  if (uVar49 != 0) {
                    do {
                      uVar63 = uVar63 + 1;
                      pbVar98[lVar79 + -1] = *(byte *)(lVar79 + -1 + param_1 + lVar60);
                      pbVar98[lVar79 + -2] = *(byte *)(lVar79 + -2 + param_1 + lVar60);
                      lVar79 = lVar79 + -2;
                    } while (uVar63 < uVar51);
                    iVar68 = (int)uVar63 * 2 + 1;
                  }
                  if (iVar68 - 1U < param_5) {
                    pbVar98[-(longlong)iVar68] = *(byte *)((param_1 + lVar60) - (longlong)iVar68);
                  }
                }
LAB_140a6c2f5:
                iVar58 = uVar67 + 2;
                param_3[uVar61] = *(byte *)(lVar60 + lVar2 + -2);
                param_3[uVar61 + 1] = *(byte *)(lVar60 + lVar2 + -1);
                lVar79 = (longlong)iVar58;
                iVar68 = iVar58;
                if (uVar44 == 0) {
                  if (0 < (int)uVar50) {
                    if (6 < (int)uVar50) {
                      pbVar80 = param_3 + lVar79;
                      lVar100 = param_1 + lVar60;
                      if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar100) ||
                         (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar100))) {
                        if ((longlong)uVar85 < 0x10) {
LAB_140a6cf55:
                          uVar56 = 0;
                        }
                        else {
                          uVar63 = (ulonglong)pbVar80 & 0xf;
                          if (uVar63 != 0) {
                            uVar63 = 0x10 - uVar63;
                          }
                          if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6cf55;
                          uVar61 = 0;
                          uVar56 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                          if (uVar63 != 0) {
                            do {
                              pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                              uVar61 = uVar61 + 1;
                            } while (uVar61 < uVar63);
                          }
                          if ((lVar100 + uVar63 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                              *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                              uVar63 = uVar63 + 0x10;
                            } while (uVar63 < uVar56);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                              *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                              uVar63 = uVar63 + 0x10;
                            } while (uVar63 < uVar56);
                          }
                        }
                        for (; uVar56 < uVar85; uVar56 = uVar56 + 1) {
                          pbVar80[uVar56] = *(byte *)(uVar56 + lVar100);
                        }
                        lVar79 = (longlong)(iVar58 + iVar91 + -1);
                        goto LAB_140a6c6f6;
                      }
                    }
                    iVar69 = 1;
                    uVar63 = 0;
                    if (uVar52 != 0) {
                      do {
                        param_3[uVar63 * 2 + lVar79] = *(byte *)(param_1 + lVar60 + uVar63 * 2);
                        param_3[uVar63 * 2 + lVar79 + 1] =
                             *(byte *)(param_1 + lVar60 + 1 + uVar63 * 2);
                        uVar63 = uVar63 + 1;
                      } while (uVar63 < uVar54);
                      iVar69 = (int)uVar63 * 2;
                      iVar68 = iVar58 + iVar69;
                      iVar69 = iVar69 + 1;
                    }
                    if (uVar50 <= iVar69 - 1U) goto LAB_140a6c6f3;
                    param_3[(longlong)iVar69 + -1 + lVar79] =
                         *(byte *)((longlong)iVar69 + -1 + lVar60 + param_1);
                    lVar79 = (longlong)(iVar69 + iVar58);
                  }
                }
                else {
                  if ((int)uVar50 < 1) goto LAB_140a6c6f6;
                  if (6 < (int)uVar50) {
                    pbVar80 = param_3 + lVar79;
                    lVar100 = lVar60 + lVar2;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar100) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar100))) {
                      if ((longlong)uVar85 < 0x10) {
LAB_140a6cf5c:
                        uVar56 = 0;
                      }
                      else {
                        uVar63 = (ulonglong)pbVar80 & 0xf;
                        if (uVar63 != 0) {
                          uVar63 = 0x10 - uVar63;
                        }
                        if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6cf5c;
                        uVar61 = 0;
                        uVar56 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                        if (uVar63 != 0) {
                          do {
                            pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                            uVar61 = uVar61 + 1;
                          } while (uVar61 < uVar63);
                        }
                        if ((lVar100 + uVar63 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                      }
                      for (; uVar56 < uVar85; uVar56 = uVar56 + 1) {
                        pbVar80[uVar56] = *(byte *)(uVar56 + lVar100);
                      }
                      lVar79 = (longlong)(iVar58 + iVar91 + -1);
                      goto LAB_140a6c6f6;
                    }
                  }
                  iVar69 = 1;
                  uVar63 = 0;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar63 * 2 + lVar79] = *(byte *)(lVar60 + lVar2 + uVar63 * 2);
                      param_3[uVar63 * 2 + lVar79 + 1] = *(byte *)(lVar60 + lVar2 + 1 + uVar63 * 2);
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < uVar54);
                    iVar69 = (int)uVar63 * 2;
                    iVar68 = iVar58 + iVar69;
                    iVar69 = iVar69 + 1;
                  }
                  if (iVar69 - 1U < uVar50) {
                    param_3[(longlong)iVar69 + -1 + lVar79] =
                         *(byte *)((longlong)iVar69 + -1 + lVar60 + lVar2);
                    lVar79 = (longlong)(iVar69 + iVar58);
                    goto LAB_140a6c6f6;
                  }
LAB_140a6c6f3:
                  lVar79 = (longlong)iVar68;
                }
LAB_140a6c6f6:
                uVar63 = lVar79 - lVar71;
                goto LAB_140a6abe0;
              }
            }
            if (uVar65 == 0) {
              if (-1 < iVar1) {
                if (6 < (int)param_5) {
                  lVar60 = (longlong)(int)param_5;
                  pbVar80 = param_3 + ((uVar56 - 1) -
                                      (longlong)(pbVar98 + (longlong)(int)(uint)param_6 + -1));
                  if ((lVar60 < (longlong)pbVar80) ||
                     ((byte *)-lVar60 != pbVar80 && lVar60 <= -(longlong)pbVar80)) {
                    if (((longlong)uVar77 < 0x10) || ((longlong)uVar77 < lVar76)) {
                      uVar56 = 0;
                    }
                    else {
                      uVar56 = 0;
                      if (uVar83 != 0) {
                        do {
                          param_3[uVar56] = pbVar98[uVar56 + lVar90];
                          uVar56 = uVar56 + 1;
                        } while (uVar56 < uVar83);
                      }
                      uVar73 = uVar83;
                      uVar56 = uVar78;
                      if (((ulonglong)(pbVar98 + uVar83 + lVar90) & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(pbVar98 + uVar73 + lVar90);
                          *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                          uVar73 = uVar73 + 0x10;
                        } while (uVar73 < uVar78);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(pbVar98 + uVar73 + lVar90))
                          ;
                          *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                          uVar73 = uVar73 + 0x10;
                        } while (uVar73 < uVar78);
                      }
                    }
                    for (; uVar56 < uVar77; uVar56 = uVar56 + 1) {
                      param_3[uVar56] = pbVar98[uVar56 + lVar90];
                    }
                    goto LAB_140a6cb3b;
                  }
                }
                uVar56 = 0;
                iVar68 = 1;
                lVar60 = 0;
                if (uVar49 != 0) {
                  do {
                    uVar56 = uVar56 + 1;
                    pbVar98[lVar60 + -1] = pbVar98[lVar60 + -1 + lVar94];
                    pbVar98[lVar60 + -2] = pbVar98[lVar60 + -2 + lVar94];
                    lVar60 = lVar60 + -2;
                  } while (uVar56 < uVar51);
                  iVar68 = (int)uVar56 * 2 + 1;
                }
                if (iVar68 - 1U < param_5) {
                  pbVar98[-(longlong)iVar68] = pbVar98[lVar94 - iVar68];
                }
              }
            }
            else if (-1 < iVar1) {
              if (6 < (int)param_5) {
                lVar79 = (longlong)(int)param_5;
                lVar60 = param_1 + lVar75 * uVar48;
                pbVar80 = param_3 + ((uVar56 - 1) - (param_1 + -1 + lVar75 * uVar48));
                if ((lVar79 < (longlong)pbVar80) ||
                   ((byte *)-lVar79 != pbVar80 && lVar79 <= -(longlong)pbVar80)) {
                  if (((longlong)uVar77 < 0x10) || ((longlong)uVar77 < lVar76)) {
                    uVar73 = 0;
                  }
                  else {
                    uVar73 = 0;
                    lVar79 = lVar60 - uVar56;
                    if (uVar83 != 0) {
                      do {
                        param_3[uVar73] = *(byte *)(uVar73 + lVar79);
                        uVar73 = uVar73 + 1;
                      } while (uVar73 < uVar83);
                    }
                    uVar64 = uVar83;
                    uVar73 = uVar78;
                    if (((lVar60 - uVar56) + uVar83 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar64 + lVar79);
                        *(undefined1 (*) [16])(param_3 + uVar64) = in_XMM2;
                        uVar64 = uVar64 + 0x10;
                      } while (uVar64 < uVar78);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar64 + lVar79));
                        *(undefined1 (*) [16])(param_3 + uVar64) = in_XMM2;
                        uVar64 = uVar64 + 0x10;
                      } while (uVar64 < uVar78);
                    }
                  }
                  if (uVar73 < uVar77) {
                    do {
                      param_3[uVar73] = *(byte *)(uVar73 + (lVar60 - uVar56));
                      uVar73 = uVar73 + 1;
                    } while (uVar73 < uVar77);
                  }
                  goto LAB_140a6cb3b;
                }
              }
              uVar56 = 0;
              iVar68 = 1;
              lVar60 = 0;
              if (uVar49 != 0) {
                lVar79 = lVar75 * uVar48 + param_1;
                do {
                  uVar56 = uVar56 + 1;
                  pbVar98[lVar60 + -1] = *(byte *)(lVar60 + -1 + lVar79);
                  pbVar98[lVar60 + -2] = *(byte *)(lVar60 + -2 + lVar79);
                  lVar60 = lVar60 + -2;
                } while (uVar56 < uVar51);
                iVar68 = (int)uVar56 * 2 + 1;
              }
              if (iVar68 - 1U < param_5) {
                pbVar98[-(longlong)iVar68] = *(byte *)((param_1 - iVar68) + lVar75 * uVar48);
              }
            }
LAB_140a6cb3b:
            if (uVar44 == 0) {
              if ((int)uVar50 < 1) goto LAB_140a6abe0;
              if (6 < (int)uVar50) {
                pbVar80 = param_3 + uVar61;
                lVar60 = (longlong)pbVar80 - (longlong)(param_3 + (uVar61 - lVar94));
                if ((2 - (longlong)(int)param_5 <= lVar60) ||
                   (2 - (longlong)(int)param_5 <= -lVar60)) {
                  if ((longlong)uVar85 < 0x10) {
LAB_140a6cf71:
                    uVar73 = 0;
                  }
                  else {
                    uVar56 = (ulonglong)pbVar80 & 0xf;
                    if (uVar56 != 0) {
                      uVar56 = 0x10 - uVar56;
                    }
                    if ((longlong)uVar85 < (longlong)(uVar56 + 0x10)) goto LAB_140a6cf71;
                    uVar64 = 0;
                    uVar73 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar56 & 0xfU));
                    lVar60 = uVar61 - lVar94;
                    if (uVar56 != 0) {
                      do {
                        pbVar80[uVar64] = param_3[uVar64 + lVar60];
                        uVar64 = uVar64 + 1;
                      } while (uVar64 < uVar56);
                    }
                    if (((ulonglong)(param_3 + (uVar61 - lVar94) + uVar56) & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(param_3 + uVar56 + lVar60);
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar73);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(param_3 + uVar56 + lVar60));
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar73);
                    }
                  }
                  if (uVar73 < uVar85) {
                    do {
                      pbVar80[uVar73] = param_3[uVar73 + (uVar61 - lVar94)];
                      uVar73 = uVar73 + 1;
                    } while (uVar73 < uVar85);
                  }
                  goto LAB_140a6abe0;
                }
              }
              iVar68 = 1;
              uVar56 = 0;
              if (uVar52 != 0) {
                do {
                  param_3[uVar56 * 2 + uVar61] = param_3[uVar56 * 2 + (uVar61 - lVar94)];
                  param_3[uVar56 * 2 + uVar61 + 1] = param_3[uVar56 * 2 + (uVar61 - lVar94) + 1];
                  uVar56 = uVar56 + 1;
                } while (uVar56 < uVar54);
                iVar68 = (int)uVar56 * 2 + 1;
              }
              if (iVar68 - 1U < uVar50) {
                param_3[(longlong)iVar68 + -1 + uVar61] =
                     param_3[(longlong)iVar68 + -1 + (uVar61 - lVar94)];
              }
            }
            else {
              if ((int)uVar50 < 1) goto LAB_140a6abe0;
              if (6 < (int)uVar50) {
                pbVar80 = param_3 + uVar61;
                lVar60 = lVar75 * uVar48 + lVar2;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar60) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar60))) {
                  if ((longlong)uVar85 < 0x10) {
LAB_140a6cf78:
                    uVar61 = 0;
                  }
                  else {
                    uVar56 = (ulonglong)pbVar80 & 0xf;
                    if (uVar56 != 0) {
                      uVar56 = 0x10 - uVar56;
                    }
                    if ((longlong)uVar85 < (longlong)(uVar56 + 0x10)) goto LAB_140a6cf78;
                    uVar73 = 0;
                    uVar61 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar56 & 0xfU));
                    if (uVar56 != 0) {
                      do {
                        pbVar80[uVar73] = *(byte *)(uVar73 + lVar60);
                        uVar73 = uVar73 + 1;
                      } while (uVar73 < uVar56);
                    }
                    if ((lVar60 + uVar56 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar56 + lVar60);
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar61);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar56 + lVar60));
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar61);
                    }
                  }
                  for (; uVar61 < uVar85; uVar61 = uVar61 + 1) {
                    pbVar80[uVar61] = *(byte *)(uVar61 + lVar60);
                  }
                  goto LAB_140a6abe0;
                }
              }
              iVar68 = 1;
              uVar56 = 0;
              if (uVar52 != 0) {
                lVar60 = lVar75 * uVar48 + lVar2;
                do {
                  param_3[uVar56 * 2 + uVar61] = *(byte *)(lVar60 + uVar56 * 2);
                  param_3[uVar56 * 2 + uVar61 + 1] = *(byte *)(lVar60 + 1 + uVar56 * 2);
                  uVar56 = uVar56 + 1;
                } while (uVar56 < uVar54);
                iVar68 = (int)uVar56 * 2 + 1;
              }
              if (iVar68 - 1U < uVar50) {
                param_3[(longlong)iVar68 + -1 + uVar61] =
                     *(byte *)(lVar2 + iVar68 + -1 + lVar75 * uVar48);
              }
            }
          }
          else if (uVar67 == 3) {
            uVar61 = uVar56;
            if (0 < (int)(uint)param_6) {
              if (uVar66 < 7) {
LAB_140a6affe:
                iVar68 = 1;
                uVar61 = 0;
                uVar67 = param_5;
                if (uVar97 != 0) {
                  lVar60 = lVar75 * uVar48 + param_1;
                  do {
                    pbVar98[uVar61 * 2] = *(byte *)(lVar60 + uVar61 * 2);
                    pbVar98[uVar61 * 2 + 1] = *(byte *)(lVar60 + 1 + uVar61 * 2);
                    uVar61 = uVar61 + 1;
                  } while (uVar61 < uVar99);
                  iVar68 = (int)uVar61 * 2;
                  uVar67 = param_5 + iVar68;
                  iVar68 = iVar68 + 1;
                }
                if (iVar68 - 1U < uVar66) {
                  pbVar98[(longlong)iVar68 + -1] =
                       *(byte *)(param_1 + iVar68 + -1 + lVar75 * uVar48);
                  uVar67 = param_5 + iVar68;
                }
              }
              else {
                lVar60 = lVar75 * uVar48 + param_1;
                if (((longlong)pbVar98 - lVar60 < (longlong)(ulonglong)uVar66) &&
                   (-((longlong)pbVar98 - lVar60) < (longlong)(ulonglong)uVar66))
                goto LAB_140a6affe;
                if ((uVar66 < 0x10) || (uVar66 < iVar57 + 0x10U)) {
                  uVar61 = 0;
                }
                else {
                  uVar61 = 0;
                  if (iVar57 != 0) {
                    do {
                      pbVar98[uVar61] = *(byte *)(uVar61 + lVar60);
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar59);
                  }
                  uVar73 = uVar59;
                  uVar61 = uVar47;
                  if ((lVar60 + uVar59 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar73 + lVar60);
                      *(undefined1 (*) [16])(pbVar98 + uVar73) = in_XMM2;
                      uVar73 = uVar73 + 0x10;
                    } while (uVar73 < uVar47);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar73 + lVar60));
                      *(undefined1 (*) [16])(pbVar98 + uVar73) = in_XMM2;
                      uVar73 = uVar73 + 0x10;
                    } while (uVar73 < uVar47);
                  }
                }
                for (; uVar67 = uVar92, uVar61 < uVar72; uVar61 = uVar61 + 1) {
                  pbVar98[uVar61] = *(byte *)(uVar61 + lVar60);
                }
              }
              uVar61 = (ulonglong)(int)uVar67;
              if (2 < (int)(uint)param_6) {
                if (uVar65 == 0) {
                  if (-1 < iVar1) {
                    uVar63 = 0;
                    iVar68 = 1;
                    lVar60 = 0;
                    if (uVar49 != 0) {
                      lVar79 = lVar75 * uVar48 + param_1 + uVar95;
                      do {
                        pbVar98[lVar60 + -1] = *(byte *)(lVar79 + uVar63 * 2);
                        lVar100 = uVar63 * 2;
                        uVar63 = uVar63 + 1;
                        pbVar98[lVar60 + -2] = *(byte *)(lVar79 + 1 + lVar100);
                        lVar60 = lVar60 + -2;
                      } while (uVar63 < uVar51);
                      iVar68 = (int)uVar63 * 2 + 1;
                    }
                    if (iVar68 - 1U < param_5) {
                      pbVar98[-(longlong)iVar68] =
                           *(byte *)((longlong)iVar68 + -1 + lVar75 * uVar48 + param_1 + uVar95);
                    }
                  }
                }
                else {
                  lVar60 = lVar75 * uVar48;
                  if (-1 < iVar1) {
                    if (6 < (int)param_5) {
                      lVar100 = (longlong)(int)param_5;
                      lVar79 = param_1 + -1 + lVar60;
                      pbVar80 = param_3 + ((uVar56 - 1) - lVar79);
                      lVar79 = lVar79 + 1;
                      if ((lVar100 < (longlong)pbVar80) ||
                         ((byte *)-lVar100 != pbVar80 && lVar100 <= -(longlong)pbVar80)) {
                        if (((longlong)uVar77 < 0x10) || ((longlong)uVar77 < lVar76)) {
                          uVar63 = 0;
                        }
                        else {
                          uVar63 = 0;
                          lVar60 = lVar79 - uVar56;
                          if (uVar83 != 0) {
                            do {
                              param_3[uVar63] = *(byte *)(uVar63 + lVar60);
                              uVar63 = uVar63 + 1;
                            } while (uVar63 < uVar83);
                          }
                          uVar73 = uVar83;
                          uVar63 = uVar78;
                          if (((lVar79 - uVar56) + uVar83 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar73 + lVar60);
                              *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                              uVar73 = uVar73 + 0x10;
                            } while (uVar73 < uVar78);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar73 + lVar60));
                              *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                              uVar73 = uVar73 + 0x10;
                            } while (uVar73 < uVar78);
                          }
                        }
                        if (uVar63 < uVar77) {
                          do {
                            param_3[uVar63] = *(byte *)(uVar63 + (lVar79 - uVar56));
                            uVar63 = uVar63 + 1;
                          } while (uVar63 < uVar77);
                        }
                        goto LAB_140a6b3db;
                      }
                    }
                    uVar63 = 0;
                    iVar68 = 1;
                    lVar79 = 0;
                    if (uVar49 != 0) {
                      do {
                        uVar63 = uVar63 + 1;
                        pbVar98[lVar79 + -1] = *(byte *)(lVar79 + -1 + param_1 + lVar60);
                        pbVar98[lVar79 + -2] = *(byte *)(lVar79 + -2 + param_1 + lVar60);
                        lVar79 = lVar79 + -2;
                      } while (uVar63 < uVar51);
                      iVar68 = (int)uVar63 * 2 + 1;
                    }
                    if (iVar68 - 1U < param_5) {
                      pbVar98[-(longlong)iVar68] = *(byte *)((param_1 + lVar60) - (longlong)iVar68);
                    }
                  }
                }
LAB_140a6b3db:
                lVar79 = lVar75 * uVar48;
                iVar58 = uVar67 + 2;
                param_3[uVar61] = *(byte *)(lVar2 + -2 + lVar79);
                param_3[uVar61 + 1] = *(byte *)(lVar2 + -1 + lVar79);
                lVar60 = (longlong)iVar58;
                iVar68 = iVar58;
                if (uVar44 == 0) {
                  if (0 < (int)uVar50) {
                    uVar63 = 0;
                    iVar69 = 1;
                    lVar100 = 0;
                    if (uVar52 != 0) {
                      lVar3 = lVar79 + (lVar2 - uVar95);
                      do {
                        param_3[uVar63 * 2 + lVar60] = *(byte *)(lVar100 + -1 + lVar3);
                        lVar5 = lVar100 + -2;
                        lVar100 = lVar100 + -2;
                        param_3[uVar63 * 2 + lVar60 + 1] = *(byte *)(lVar5 + lVar3);
                        uVar63 = uVar63 + 1;
                      } while (uVar63 < uVar54);
                      iVar69 = (int)uVar63 * 2;
                      iVar68 = iVar58 + iVar69;
                      iVar69 = iVar69 + 1;
                    }
                    if (uVar50 <= iVar69 - 1U) goto LAB_140a6b6b3;
                    param_3[(longlong)iVar69 + -1 + lVar60] =
                         *(byte *)((lVar79 + (lVar2 - uVar95)) - (longlong)iVar69);
                    lVar60 = (longlong)(iVar69 + iVar58);
                  }
                }
                else {
                  if ((int)uVar50 < 1) goto LAB_140a6b6b6;
                  if (6 < (int)uVar50) {
                    pbVar80 = param_3 + lVar60;
                    lVar100 = lVar79 + lVar2;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar100) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar100))) {
                      if ((longlong)uVar85 < 0x10) {
LAB_140a6bc36:
                        uVar56 = 0;
                      }
                      else {
                        uVar63 = (ulonglong)pbVar80 & 0xf;
                        if (uVar63 != 0) {
                          uVar63 = 0x10 - uVar63;
                        }
                        if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6bc36;
                        uVar61 = 0;
                        uVar56 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                        if (uVar63 != 0) {
                          do {
                            pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                            uVar61 = uVar61 + 1;
                          } while (uVar61 < uVar63);
                        }
                        if ((lVar100 + uVar63 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                      }
                      for (; uVar56 < uVar85; uVar56 = uVar56 + 1) {
                        pbVar80[uVar56] = *(byte *)(uVar56 + lVar100);
                      }
                      lVar60 = (longlong)(iVar58 + iVar91 + -1);
                      goto LAB_140a6b6b6;
                    }
                  }
                  iVar69 = 1;
                  uVar63 = 0;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar63 * 2 + lVar60] = *(byte *)(lVar79 + lVar2 + uVar63 * 2);
                      param_3[uVar63 * 2 + lVar60 + 1] = *(byte *)(lVar79 + lVar2 + 1 + uVar63 * 2);
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < uVar54);
                    iVar69 = (int)uVar63 * 2;
                    iVar68 = iVar58 + iVar69;
                    iVar69 = iVar69 + 1;
                  }
                  if (iVar69 - 1U < uVar50) {
                    param_3[(longlong)iVar69 + -1 + lVar60] =
                         *(byte *)((longlong)iVar69 + -1 + lVar79 + lVar2);
                    lVar60 = (longlong)(iVar69 + iVar58);
                  }
                  else {
LAB_140a6b6b3:
                    lVar60 = (longlong)iVar68;
                  }
                }
LAB_140a6b6b6:
                uVar63 = lVar60 - lVar71;
                goto LAB_140a6abe0;
              }
            }
            if (uVar65 == 0) {
              iVar68 = iVar1;
              if (uVar44 == 0) {
joined_r0x000140a6b6ef:
                if (-1 < iVar68) {
                  uVar67 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar60 = (longlong)iVar68;
                    do {
                      if (iVar68 < 0) break;
                      lVar79 = (longlong)(int)uVar67;
                      iVar68 = iVar68 + -1;
                      uVar67 = uVar67 + 1;
                      param_3[lVar60 - lVar79] = param_3[lVar79 + lVar60 + uVar95 + 1];
                    } while (uVar67 < uVar93);
                  }
                  goto joined_r0x000140a6b6ef;
                }
                uVar56 = 0;
                iVar68 = iVar45;
                iVar58 = iVar45;
                iVar69 = (((uint)param_6 + 2 + iVar45) - uVar50) + -1;
                if ((int)param_5 < 2) {
                  do {
                    iVar82 = iVar69 + iVar68;
                    pbVar98[uVar56 + lVar94] = param_3[iVar69];
                    if (((int)(((uint)param_6 + 2) - uVar50) <= iVar82) || (iVar82 < (int)param_5))
                    {
                      iVar69 = iVar68 + iVar58;
                      iVar68 = -iVar68;
                      iVar82 = iVar82 - iVar69;
                      iVar58 = -iVar58;
                    }
                    uVar56 = uVar56 + 1;
                    iVar69 = iVar82;
                  } while (uVar56 < uVar85);
                }
              }
              else {
                if (-1 < iVar1) {
                  uVar56 = 0;
                  iVar68 = 1;
                  lVar60 = 0;
                  if (uVar49 != 0) {
                    lVar79 = lVar75 * uVar48 + param_1;
                    do {
                      pbVar98[lVar60 + -1] = *(byte *)(lVar79 + 1 + uVar56 * 2);
                      lVar100 = uVar56 * 2;
                      uVar56 = uVar56 + 1;
                      pbVar98[lVar60 + -2] = *(byte *)(lVar79 + 2 + lVar100);
                      lVar60 = lVar60 + -2;
                    } while (uVar56 < uVar51);
                    iVar68 = (int)uVar56 * 2 + 1;
                  }
                  if (iVar68 - 1U < param_5) {
                    pbVar98[-(longlong)iVar68] = *(byte *)(param_1 + iVar68 + lVar75 * uVar48);
                  }
                }
LAB_140a6b964:
                if (0 < (int)uVar50) {
                  if (6 < (int)uVar50) {
                    pbVar80 = param_3 + uVar61;
                    lVar60 = lVar75 * uVar48 + lVar2;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar60) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar60))) {
                      if ((longlong)uVar85 < 0x10) {
LAB_140a6bc3d:
                        uVar61 = 0;
                      }
                      else {
                        uVar56 = (ulonglong)pbVar80 & 0xf;
                        if (uVar56 != 0) {
                          uVar56 = 0x10 - uVar56;
                        }
                        if ((longlong)uVar85 < (longlong)(uVar56 + 0x10)) goto LAB_140a6bc3d;
                        uVar73 = 0;
                        uVar61 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar56 & 0xfU));
                        if (uVar56 != 0) {
                          do {
                            pbVar80[uVar73] = *(byte *)(uVar73 + lVar60);
                            uVar73 = uVar73 + 1;
                          } while (uVar73 < uVar56);
                        }
                        if ((lVar60 + uVar56 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar56 + lVar60);
                            *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                            uVar56 = uVar56 + 0x10;
                          } while (uVar56 < uVar61);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar56 + lVar60));
                            *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                            uVar56 = uVar56 + 0x10;
                          } while (uVar56 < uVar61);
                        }
                      }
                      for (; uVar61 < uVar85; uVar61 = uVar61 + 1) {
                        pbVar80[uVar61] = *(byte *)(uVar61 + lVar60);
                      }
                      goto LAB_140a6abe0;
                    }
                  }
                  iVar68 = 1;
                  uVar56 = 0;
                  if (uVar52 != 0) {
                    lVar60 = lVar75 * uVar48 + lVar2;
                    do {
                      param_3[uVar56 * 2 + uVar61] = *(byte *)(lVar60 + uVar56 * 2);
                      param_3[uVar56 * 2 + uVar61 + 1] = *(byte *)(lVar60 + 1 + uVar56 * 2);
                      uVar56 = uVar56 + 1;
                    } while (uVar56 < uVar54);
                    iVar68 = (int)uVar56 * 2 + 1;
                  }
                  if (iVar68 - 1U < uVar50) {
                    param_3[(longlong)iVar68 + -1 + uVar61] =
                         *(byte *)(lVar2 + iVar68 + -1 + lVar75 * uVar48);
                  }
                }
              }
            }
            else {
              if (-1 < iVar1) {
                iVar68 = iVar1;
                do {
                  uVar67 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar60 = (longlong)iVar68;
                    do {
                      if (iVar68 < 0) break;
                      lVar79 = (longlong)(int)uVar67;
                      uVar67 = uVar67 + 1;
                      iVar68 = iVar68 + -1;
                      param_3[lVar60 - lVar79] =
                           *(byte *)((lVar60 + lVar75 * uVar48 + lVar53) - lVar79);
                    } while (uVar67 < uVar93);
                  }
                } while (-1 < iVar68);
              }
              if (uVar44 != 0) goto LAB_140a6b964;
              if (0 < (int)uVar50) {
                uVar56 = 0;
                iVar68 = 1;
                lVar60 = 0;
                if (uVar52 != 0) {
                  lVar79 = lVar75 * uVar48 + lVar2;
                  do {
                    param_3[uVar56 * 2 + uVar61] = *(byte *)(lVar60 + -2 + lVar79);
                    lVar100 = lVar60 + -3;
                    lVar60 = lVar60 + -2;
                    param_3[uVar56 * 2 + uVar61 + 1] = *(byte *)(lVar100 + lVar79);
                    uVar56 = uVar56 + 1;
                  } while (uVar56 < uVar54);
                  iVar68 = (int)uVar56 * 2 + 1;
                }
                if (iVar68 - 1U < uVar50) {
                  param_3[(longlong)iVar68 + -1 + uVar61] =
                       *(byte *)((lVar2 - iVar68) + -1 + lVar75 * uVar48);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar67 = 0;
            uVar70 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar79 = lVar75 * uVar48;
                lVar60 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar79);
                if (((int)param_5 <= lVar60) || ((longlong)(int)param_5 <= -lVar60)) {
                  if (((longlong)uVar56 < 0x10) || ((longlong)uVar56 < lVar4)) {
                    uVar61 = 0;
                  }
                  else {
                    uVar61 = 0;
                    lVar60 = lVar79 + lVar53;
                    if (uVar88 != 0) {
                      do {
                        param_3[uVar61] = *(byte *)(uVar61 + lVar60);
                        uVar61 = uVar61 + 1;
                      } while (uVar61 < uVar88);
                    }
                    uVar73 = uVar88;
                    uVar61 = uVar89;
                    if ((lVar79 + lVar53 + uVar88 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar73 + lVar60);
                        *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                        uVar73 = uVar73 + 0x10;
                      } while (uVar73 < uVar89);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar73 + lVar60));
                        *(undefined1 (*) [16])(param_3 + uVar73) = in_XMM2;
                        uVar73 = uVar73 + 0x10;
                      } while (uVar73 < uVar89);
                    }
                  }
                  uVar70 = param_5;
                  if (uVar61 < uVar56) {
                    do {
                      param_3[uVar61] = *(byte *)(uVar61 + lVar79 + lVar53);
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar56);
                  }
                  goto LAB_140a69bf6;
                }
              }
              uVar74 = 1;
              uVar56 = 0;
              if (uVar49 != 0) {
                lVar60 = lVar75 * uVar48 + lVar53;
                do {
                  param_3[uVar56 * 2] = *(byte *)(lVar60 + uVar56 * 2);
                  param_3[uVar56 * 2 + 1] = *(byte *)(lVar60 + 1 + uVar56 * 2);
                  uVar56 = uVar56 + 1;
                } while (uVar56 < uVar51);
                uVar67 = (int)uVar56 * 2;
                uVar74 = uVar67 + 1;
              }
              uVar70 = uVar67;
              if (uVar74 - 1 < param_5) {
                param_3[(longlong)(int)uVar74 + -1] =
                     *(byte *)(lVar53 + (int)uVar74 + -1 + lVar75 * uVar48);
                uVar70 = uVar74;
              }
            }
LAB_140a69bf6:
            lVar60 = (longlong)(int)uVar70;
            if (0 < (int)(uint)param_6) {
              if (uVar66 < 7) {
LAB_140a69d61:
                iVar68 = 1;
                uVar56 = 0;
                uVar67 = uVar70;
                if (uVar97 != 0) {
                  lVar79 = lVar75 * uVar48 + param_1;
                  do {
                    param_3[uVar56 * 2 + lVar60] = *(byte *)(lVar79 + uVar56 * 2);
                    param_3[uVar56 * 2 + lVar60 + 1] = *(byte *)(lVar79 + 1 + uVar56 * 2);
                    uVar56 = uVar56 + 1;
                  } while (uVar56 < uVar99);
                  iVar68 = (int)uVar56 * 2;
                  uVar67 = uVar70 + iVar68;
                  iVar68 = iVar68 + 1;
                }
                if (iVar68 - 1U < uVar66) {
                  param_3[(longlong)iVar68 + -1 + lVar60] =
                       *(byte *)(param_1 + iVar68 + -1 + lVar75 * uVar48);
                  uVar67 = uVar70 + iVar68;
                }
              }
              else {
                pbVar80 = param_3 + lVar60;
                lVar79 = lVar75 * uVar48 + param_1;
                if (((longlong)pbVar80 - lVar79 < (longlong)(ulonglong)uVar66) &&
                   (-((longlong)pbVar80 - lVar79) < (longlong)(ulonglong)uVar66))
                goto LAB_140a69d61;
                if (uVar66 < 0x10) {
LAB_140a6ae73:
                  uVar61 = 0;
                }
                else {
                  uVar56 = (ulonglong)pbVar80 & 0xf;
                  if ((int)uVar56 != 0) {
                    uVar56 = (ulonglong)(0x10 - (int)uVar56);
                  }
                  iVar68 = (int)uVar56;
                  if (uVar66 < iVar68 + 0x10U) goto LAB_140a6ae73;
                  uVar61 = 0;
                  iVar58 = uVar66 - (uVar66 - iVar68 & 0xf);
                  if (iVar68 != 0) {
                    do {
                      pbVar80[uVar61] = *(byte *)(uVar61 + lVar79);
                      uVar61 = uVar61 + 1;
                    } while (uVar61 < uVar56);
                  }
                  if ((lVar79 + uVar56 & 0xf) == 0) {
                    uVar61 = (ulonglong)iVar58;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar56 + lVar79);
                      *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                      uVar56 = uVar56 + 0x10;
                    } while (uVar56 < uVar61);
                  }
                  else {
                    uVar61 = (ulonglong)iVar58;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar56 + lVar79));
                      *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                      uVar56 = uVar56 + 0x10;
                    } while (uVar56 < uVar61);
                  }
                }
                for (; uVar61 < uVar72; uVar61 = uVar61 + 1) {
                  pbVar80[uVar61] = *(byte *)(uVar61 + lVar79);
                }
                uVar67 = (uVar70 + iVar96) - 1;
              }
              lVar60 = (longlong)(int)uVar67;
              if (2 < (int)(uint)param_6) {
                iVar68 = uVar67 + 2;
                lVar79 = lVar75 * uVar48;
                param_3[lVar60] = *(byte *)(lVar2 + -2 + lVar79);
                param_3[lVar60 + 1] = *(byte *)(lVar2 + -1 + lVar79);
                lVar60 = (longlong)iVar68;
                if (0 < (int)uVar50) {
                  if (6 < (int)uVar50) {
                    pbVar80 = param_3 + lVar60;
                    lVar100 = lVar79 + lVar2;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar100) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar100))) {
                      if ((longlong)uVar85 < 0x10) {
LAB_140a6ae7a:
                        uVar56 = 0;
                      }
                      else {
                        uVar63 = (ulonglong)pbVar80 & 0xf;
                        if (uVar63 != 0) {
                          uVar63 = 0x10 - uVar63;
                        }
                        if ((longlong)uVar85 < (longlong)(uVar63 + 0x10)) goto LAB_140a6ae7a;
                        uVar61 = 0;
                        uVar56 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar63 & 0xfU));
                        if (uVar63 != 0) {
                          do {
                            pbVar80[uVar61] = *(byte *)(uVar61 + lVar100);
                            uVar61 = uVar61 + 1;
                          } while (uVar61 < uVar63);
                        }
                        if ((lVar100 + uVar63 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar63 + lVar100);
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar63 + lVar100));
                            *(undefined1 (*) [16])(pbVar80 + uVar63) = in_XMM2;
                            uVar63 = uVar63 + 0x10;
                          } while (uVar63 < uVar56);
                        }
                      }
                      for (; uVar56 < uVar85; uVar56 = uVar56 + 1) {
                        pbVar80[uVar56] = *(byte *)(uVar56 + lVar100);
                      }
                      lVar60 = (longlong)(iVar68 + iVar91 + -1);
                      goto LAB_140a6a018;
                    }
                  }
                  iVar58 = 1;
                  uVar63 = 0;
                  iVar69 = iVar68;
                  if (uVar52 != 0) {
                    do {
                      param_3[uVar63 * 2 + lVar60] = *(byte *)(lVar79 + lVar2 + uVar63 * 2);
                      param_3[uVar63 * 2 + lVar60 + 1] = *(byte *)(lVar79 + lVar2 + 1 + uVar63 * 2);
                      uVar63 = uVar63 + 1;
                    } while (uVar63 < uVar54);
                    iVar58 = (int)uVar63 * 2;
                    iVar69 = iVar68 + iVar58;
                    iVar58 = iVar58 + 1;
                  }
                  if (iVar58 - 1U < uVar50) {
                    param_3[(longlong)iVar58 + -1 + lVar60] =
                         *(byte *)((longlong)iVar58 + -1 + lVar79 + lVar2);
                    lVar60 = (longlong)(iVar58 + iVar68);
                  }
                  else {
                    lVar60 = (longlong)iVar69;
                  }
                }
LAB_140a6a018:
                uVar63 = lVar60 - lVar71;
                goto LAB_140a6abe0;
              }
            }
            if (0 < (int)uVar50) {
              if (6 < (int)uVar50) {
                pbVar80 = param_3 + lVar60;
                lVar79 = lVar75 * uVar48 + lVar2;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar80 - lVar79) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar80 - lVar79))) {
                  if ((longlong)uVar85 < 0x10) {
LAB_140a6ae81:
                    uVar61 = 0;
                  }
                  else {
                    uVar56 = (ulonglong)pbVar80 & 0xf;
                    if (uVar56 != 0) {
                      uVar56 = 0x10 - uVar56;
                    }
                    if ((longlong)uVar85 < (longlong)(uVar56 + 0x10)) goto LAB_140a6ae81;
                    uVar73 = 0;
                    uVar61 = (ulonglong)(int)(iVar84 - (iVar84 - (int)uVar56 & 0xfU));
                    if (uVar56 != 0) {
                      do {
                        pbVar80[uVar73] = *(byte *)(uVar73 + lVar79);
                        uVar73 = uVar73 + 1;
                      } while (uVar73 < uVar56);
                    }
                    if ((lVar79 + uVar56 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar56 + lVar79);
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar61);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar56 + lVar79));
                        *(undefined1 (*) [16])(pbVar80 + uVar56) = in_XMM2;
                        uVar56 = uVar56 + 0x10;
                      } while (uVar56 < uVar61);
                    }
                  }
                  for (; uVar61 < uVar85; uVar61 = uVar61 + 1) {
                    pbVar80[uVar61] = *(byte *)(uVar61 + lVar79);
                  }
                  goto LAB_140a6abe0;
                }
              }
              iVar68 = 1;
              uVar56 = 0;
              if (uVar52 != 0) {
                lVar79 = lVar75 * uVar48 + lVar2;
                do {
                  param_3[uVar56 * 2 + lVar60] = *(byte *)(lVar79 + uVar56 * 2);
                  param_3[uVar56 * 2 + lVar60 + 1] = *(byte *)(lVar79 + 1 + uVar56 * 2);
                  uVar56 = uVar56 + 1;
                } while (uVar56 < uVar54);
                iVar68 = (int)uVar56 * 2 + 1;
              }
              if (iVar68 - 1U < uVar50) {
                param_3[(longlong)iVar68 + -1 + lVar60] =
                     *(byte *)(lVar2 + iVar68 + -1 + lVar75 * uVar48);
              }
            }
          }
          else {
            uVar63 = 0;
          }
        }
LAB_140a6abe0:
        **(short **)(param_2 + uVar48 * 8) =
             (ushort)*param_3 + (ushort)param_3[1] + (ushort)param_3[2];
        if (0 < (int)((uint)param_6 - 2)) {
          uVar56 = *(longlong *)(param_2 + uVar48 * 8) + 2;
          lVar60 = lVar75 * uVar48 + param_1;
          if (((longlong)(uVar56 - lVar60) < (longlong)(int)(uint)param_6) &&
             ((longlong)-(uVar56 - lVar60) < (longlong)(int)(uint)param_6 * 2 + -4)) {
            uVar56 = 0;
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar48 * 8) + 2 + uVar56 * 2) =
                   (ushort)*(byte *)(uVar56 + lVar60) + (ushort)*(byte *)(uVar56 + 1 + lVar60) +
                   (ushort)*(byte *)(uVar56 + 2 + lVar60);
              uVar56 = uVar56 + 1;
            } while (uVar56 < uVar55);
          }
          else {
            if ((longlong)uVar55 < 8) {
LAB_140a6d7f3:
              uVar56 = 0;
            }
            else {
              uVar61 = uVar56 & 0xf;
              if ((int)uVar61 != 0) {
                if ((uVar56 & 1) != 0) goto LAB_140a6d7f3;
                uVar61 = (ulonglong)(0x10U - (int)uVar61 >> 1);
              }
              if ((longlong)uVar55 < (longlong)(uVar61 + 8)) goto LAB_140a6d7f3;
              uVar73 = 0;
              uVar56 = (ulonglong)(int)((int)uVar55 - ((int)uVar55 - (int)uVar61 & 7U));
              if ((int)uVar61 != 0) {
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar48 * 8) + 2 + uVar73 * 2) =
                       (ushort)*(byte *)(uVar73 + lVar60) + (ushort)*(byte *)(uVar73 + 1 + lVar60) +
                       (ushort)*(byte *)(uVar73 + 2 + lVar60);
                  uVar73 = uVar73 + 1;
                } while (uVar73 < uVar61);
              }
              puVar86 = (ulonglong *)(lVar60 + uVar61);
              do {
                uVar73 = *puVar86;
                uVar64 = *(ulonglong *)((longlong)puVar86 + 1);
                auVar8._8_6_ = 0;
                auVar8._0_8_ = uVar73;
                auVar8[0xe] = (char)(uVar73 >> 0x38);
                auVar11._8_4_ = 0;
                auVar11._0_8_ = uVar73;
                auVar11[0xc] = (char)(uVar73 >> 0x30);
                auVar11._13_2_ = auVar8._13_2_;
                auVar14._8_4_ = 0;
                auVar14._0_8_ = uVar73;
                auVar14._12_3_ = auVar11._12_3_;
                auVar17._8_2_ = 0;
                auVar17._0_8_ = uVar73;
                auVar17[10] = (char)(uVar73 >> 0x28);
                auVar17._11_4_ = auVar14._11_4_;
                auVar20._8_2_ = 0;
                auVar20._0_8_ = uVar73;
                auVar20._10_5_ = auVar17._10_5_;
                auVar23[8] = (char)(uVar73 >> 0x20);
                auVar23._0_8_ = uVar73;
                auVar23._9_6_ = auVar20._9_6_;
                auVar29._7_8_ = 0;
                auVar29._0_7_ = auVar23._8_7_;
                Var30 = CONCAT81(SUB158(auVar29 << 0x40,7),(char)(uVar73 >> 0x18));
                auVar38._9_6_ = 0;
                auVar38._0_9_ = Var30;
                auVar31._1_10_ = SUB1510(auVar38 << 0x30,5);
                auVar31[0] = (char)(uVar73 >> 0x10);
                auVar39._11_4_ = 0;
                auVar39._0_11_ = auVar31;
                auVar26[2] = (char)(uVar73 >> 8);
                auVar26._0_2_ = (ushort)uVar73;
                auVar26._3_12_ = SUB1512(auVar39 << 0x20,3);
                auVar9._8_6_ = 0;
                auVar9._0_8_ = uVar64;
                auVar9[0xe] = (char)(uVar64 >> 0x38);
                auVar12._8_4_ = 0;
                auVar12._0_8_ = uVar64;
                auVar12[0xc] = (char)(uVar64 >> 0x30);
                auVar12._13_2_ = auVar9._13_2_;
                auVar15._8_4_ = 0;
                auVar15._0_8_ = uVar64;
                auVar15._12_3_ = auVar12._12_3_;
                auVar18._8_2_ = 0;
                auVar18._0_8_ = uVar64;
                auVar18[10] = (char)(uVar64 >> 0x28);
                auVar18._11_4_ = auVar15._11_4_;
                auVar21._8_2_ = 0;
                auVar21._0_8_ = uVar64;
                auVar21._10_5_ = auVar18._10_5_;
                auVar24[8] = (char)(uVar64 >> 0x20);
                auVar24._0_8_ = uVar64;
                auVar24._9_6_ = auVar21._9_6_;
                auVar32._7_8_ = 0;
                auVar32._0_7_ = auVar24._8_7_;
                Var33 = CONCAT81(SUB158(auVar32 << 0x40,7),(char)(uVar64 >> 0x18));
                auVar40._9_6_ = 0;
                auVar40._0_9_ = Var33;
                auVar34._1_10_ = SUB1510(auVar40 << 0x30,5);
                auVar34[0] = (char)(uVar64 >> 0x10);
                auVar41._11_4_ = 0;
                auVar41._0_11_ = auVar34;
                auVar27[2] = (char)(uVar64 >> 8);
                auVar27._0_2_ = (ushort)uVar64;
                auVar27._3_12_ = SUB1512(auVar41 << 0x20,3);
                in_XMM2._0_2_ = (ushort)uVar64 & 0xff;
                in_XMM2._2_13_ = auVar27._2_13_;
                in_XMM2[0xf] = 0;
                uVar64 = *(ulonglong *)((longlong)puVar86 + 2);
                auVar10._8_6_ = 0;
                auVar10._0_8_ = uVar64;
                auVar10[0xe] = (char)(uVar64 >> 0x38);
                auVar13._8_4_ = 0;
                auVar13._0_8_ = uVar64;
                auVar13[0xc] = (char)(uVar64 >> 0x30);
                auVar13._13_2_ = auVar10._13_2_;
                auVar16._8_4_ = 0;
                auVar16._0_8_ = uVar64;
                auVar16._12_3_ = auVar13._12_3_;
                auVar19._8_2_ = 0;
                auVar19._0_8_ = uVar64;
                auVar19[10] = (char)(uVar64 >> 0x28);
                auVar19._11_4_ = auVar16._11_4_;
                auVar22._8_2_ = 0;
                auVar22._0_8_ = uVar64;
                auVar22._10_5_ = auVar19._10_5_;
                auVar25[8] = (char)(uVar64 >> 0x20);
                auVar25._0_8_ = uVar64;
                auVar25._9_6_ = auVar22._9_6_;
                auVar35._7_8_ = 0;
                auVar35._0_7_ = auVar25._8_7_;
                Var36 = CONCAT81(SUB158(auVar35 << 0x40,7),(char)(uVar64 >> 0x18));
                auVar42._9_6_ = 0;
                auVar42._0_9_ = Var36;
                auVar37._1_10_ = SUB1510(auVar42 << 0x30,5);
                auVar37[0] = (char)(uVar64 >> 0x10);
                auVar43._11_4_ = 0;
                auVar43._0_11_ = auVar37;
                auVar28[2] = (char)(uVar64 >> 8);
                auVar28._0_2_ = (ushort)uVar64;
                auVar28._3_12_ = SUB1512(auVar43 << 0x20,3);
                puVar86 = puVar86 + 1;
                psVar6 = (short *)(*(longlong *)(param_2 + uVar48 * 8) + 2 + uVar61 * 2);
                *psVar6 = ((ushort)uVar73 & 0xff) + in_XMM2._0_2_ + ((ushort)uVar64 & 0xff);
                psVar6[1] = auVar26._2_2_ + auVar27._2_2_ + auVar28._2_2_;
                psVar6[2] = auVar31._0_2_ + auVar34._0_2_ + auVar37._0_2_;
                psVar6[3] = (short)Var30 + (short)Var33 + (short)Var36;
                psVar6[4] = auVar23._8_2_ + auVar24._8_2_ + auVar25._8_2_;
                psVar6[5] = auVar17._10_2_ + auVar18._10_2_ + auVar19._10_2_;
                psVar6[6] = auVar11._12_2_ + auVar12._12_2_ + auVar13._12_2_;
                psVar6[7] = (auVar8._13_2_ >> 8) + (auVar9._13_2_ >> 8) + (auVar10._13_2_ >> 8);
                uVar61 = uVar61 + 8;
              } while (uVar61 < uVar56);
            }
            for (; uVar56 < uVar55; uVar56 = uVar56 + 1) {
              *(ushort *)(*(longlong *)(param_2 + uVar48 * 8) + 2 + uVar56 * 2) =
                   (ushort)*(byte *)(uVar56 + lVar60) + (ushort)*(byte *)(uVar56 + 1 + lVar60) +
                   (ushort)*(byte *)(uVar56 + 2 + lVar60);
            }
          }
        }
        if ((int)(uint)param_6 < 2) goto LAB_140a6ae2f;
        lVar60 = uVar48 * 8;
        uVar48 = uVar48 + 1;
        lStack_78 = lStack_78 + lVar75;
        *(ushort *)(*(longlong *)(param_2 + lVar60) + -2 + (longlong)(int)(uint)param_6 * 2) =
             (ushort)param_3[uVar63] + (ushort)param_3[uVar63 + 1] + (ushort)param_3[uVar63 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar48) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar90 = 1;
      break;
    case 2:
      lVar90 = 2;
      break;
    case 3:
      lVar90 = 3;
      break;
    case 4:
      lVar90 = 4;
    }
    (*(code *)(&PTR_FUN_14308ef28)[lVar90])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar75 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a6ae2f:
  uVar48 = uVar48 + 1;
  lStack_78 = lStack_78 + lVar75;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar48) {
    return 0;
  }
  goto LAB_140a69960;
}

