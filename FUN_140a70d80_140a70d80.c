
undefined8
FUN_140a70d80(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
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
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  unkuint9 Var45;
  undefined1 auVar46 [11];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [13];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [11];
  undefined1 auVar55 [13];
  undefined1 auVar56 [15];
  undefined1 auVar57 [11];
  undefined1 auVar58 [13];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  int iVar72;
  uint uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  uint uVar77;
  uint uVar78;
  ulonglong uVar80;
  longlong lVar81;
  ulonglong *puVar82;
  uint uVar83;
  uint uVar84;
  int iVar85;
  ulonglong uVar86;
  longlong lVar87;
  ulonglong uVar88;
  uint uVar89;
  longlong lVar90;
  ulonglong uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  int iVar94;
  longlong lVar95;
  longlong lVar96;
  ulonglong uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  int iVar101;
  int iVar102;
  ulonglong uVar104;
  uint uVar105;
  uint uVar106;
  int iVar107;
  longlong lVar108;
  ulonglong uVar109;
  ulonglong uVar110;
  longlong lVar111;
  ulonglong uVar112;
  uint uVar113;
  int iVar114;
  int iVar115;
  uint uVar116;
  ulonglong uVar117;
  ulonglong uVar118;
  longlong lVar119;
  int iVar120;
  uint uVar121;
  uint uVar122;
  longlong lVar123;
  ulonglong uVar124;
  longlong lVar125;
  byte *pbVar126;
  int iVar127;
  uint uVar128;
  byte *pbVar129;
  undefined4 uVar131;
  undefined8 uVar132;
  undefined1 in_XMM2 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  longlong lStack_80;
  short *psStack_68;
  short *psStack_60;
  ulonglong uVar79;
  ulonglong uVar103;
  ulonglong uVar130;
  
  uVar83 = (uint)param_6 + 7 & 0xfffffff8;
  lVar95 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar84 = param_7 & 0xf;
      uVar86 = (ulonglong)param_3 & 0xf;
      lVar119 = (longlong)(int)param_5;
      pbVar129 = param_3 + lVar119;
      lVar108 = param_1 - lVar119;
      uVar109 = uVar86;
      if (uVar86 != 0) {
        uVar109 = 0x10 - uVar86;
      }
      iVar120 = -param_5 + 3;
      uVar89 = -param_5 + 2;
      lVar123 = (longlong)(int)(uint)param_6;
      uVar74 = (ulonglong)pbVar129 & 0xf;
      lVar90 = -lVar119;
      uVar77 = param_5 >> 1;
      uVar79 = (ulonglong)uVar77;
      uVar78 = 2;
      if ((uint)param_6 < 3) {
        uVar78 = (uint)param_6;
      }
      uVar113 = param_7 & 0x80;
      uVar98 = param_7 & 0x40;
      uVar80 = (ulonglong)(int)uVar78;
      uVar99 = uVar89 >> 1;
      uVar103 = (ulonglong)uVar99;
      iVar127 = uVar78 + 1;
      lVar119 = lVar123 - lVar119;
      lVar4 = lVar123 + param_1;
      uVar121 = (param_5 + iVar127) - 1;
      uVar128 = uVar78 >> 1;
      uVar130 = (ulonglong)uVar128;
      iVar5 = param_5 - 1;
      uVar104 = lVar123 - 2;
      uVar1 = (uint)param_6 - 2;
      uVar124 = (ulonglong)(1 < (int)(uint)param_6);
      uVar122 = (uint)param_6 - (1 < (int)(uint)param_6);
      iVar114 = ((int)(uint)param_6 < 2) - 1;
      if ((int)uVar74 != 0) {
        uVar74 = (ulonglong)(0x10 - (int)uVar74);
      }
      if (uVar86 != 0) {
        uVar86 = 0x10 - uVar86;
      }
      iVar72 = (int)uVar74;
      lVar96 = lVar90 + 4;
      iVar115 = uVar78 - (uVar78 - iVar72 & 0xf);
      uVar91 = 0xffffffffffffffff - (lVar90 + -1);
      uVar97 = lVar90 + 2;
      lVar90 = uVar86 + 0x10;
      lVar2 = uVar109 + 0x10;
      uVar131 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar105 = param_5 - (param_5 - (int)uVar109 & 0xf);
      uVar110 = (ulonglong)(int)uVar105;
      uVar132 = CONCAT44(uVar131,uVar131);
      uVar117 = (ulonglong)iVar115;
      uVar92 = (ulonglong)(int)((int)uVar91 - ((int)uVar91 - (int)uVar86 & 0xfU));
      iVar94 = (int)uVar97;
      uVar73 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar73 = uVar84;
      }
      lStack_80 = 0;
      uVar76 = 0;
LAB_140a71280:
      psStack_60 = *(short **)(param_2 + uVar76 * 8);
      psStack_68 = psStack_60 + (int)uVar83;
      if ((uint)param_6 == 1) {
        uVar100 = uVar73;
        if (uVar84 != 6) goto LAB_140a71315;
        goto LAB_140a71bcb;
      }
      do {
        uVar100 = uVar84;
        if (uVar84 == 6) {
LAB_140a71bcb:
          uVar100 = 0;
          uVar116 = 0;
          if (uVar98 == 0) {
            uVar106 = uVar100;
            if (0 < (int)param_5) {
              if ((0xf < (int)param_5) && (lVar2 <= (int)param_5)) {
                uVar93 = 0;
                uVar75 = uVar109;
                if (uVar109 != 0) {
                  do {
                    param_3[uVar93] = param_8;
                    uVar93 = uVar93 + 1;
                  } while (uVar93 < uVar109);
                }
                do {
                  *(undefined8 *)(param_3 + uVar75) = uVar132;
                  *(undefined8 *)(param_3 + uVar75 + 8) = uVar132;
                  uVar75 = uVar75 + 0x10;
                  uVar116 = uVar105;
                } while (uVar75 < uVar110);
              }
              uVar93 = (ulonglong)(int)uVar116;
              uVar106 = uVar116;
              if (uVar93 < (ulonglong)(longlong)(int)param_5) {
                do {
                  param_3[uVar93] = param_8;
                  uVar93 = uVar93 + 1;
                } while (uVar93 < (ulonglong)(longlong)(int)param_5);
                uVar106 = (uint)uVar93;
              }
            }
          }
          else {
            uVar106 = uVar116;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar87 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_80);
                if (((int)param_5 <= lVar87) || ((longlong)(int)param_5 <= -lVar87)) {
                  if (((int)param_5 < 0x10) || ((int)param_5 < lVar2)) {
                    uVar93 = 0;
                  }
                  else {
                    uVar93 = 0;
                    lVar87 = lVar108 + lStack_80;
                    if (uVar109 != 0) {
                      do {
                        param_3[uVar93] = *(byte *)(uVar93 + lVar87);
                        uVar93 = uVar93 + 1;
                      } while (uVar93 < uVar109);
                    }
                    uVar75 = uVar109;
                    uVar93 = uVar110;
                    if ((lVar108 + uVar109 + lStack_80 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar75 + lVar87);
                        *(undefined1 (*) [16])(param_3 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar110);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar75 + lVar87));
                        *(undefined1 (*) [16])(param_3 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar110);
                    }
                  }
                  uVar106 = param_5;
                  if (uVar93 < (ulonglong)(longlong)(int)param_5) {
                    do {
                      param_3[uVar93] = *(byte *)(uVar93 + lVar108 + lStack_80);
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < (ulonglong)(longlong)(int)param_5);
                  }
                  goto LAB_140a71eca;
                }
              }
              uVar116 = 1;
              uVar93 = 0;
              if (uVar77 != 0) {
                do {
                  param_3[uVar93 * 2] = *(byte *)(lVar108 + lStack_80 + uVar93 * 2);
                  param_3[uVar93 * 2 + 1] = *(byte *)(lVar108 + lStack_80 + 1 + uVar93 * 2);
                  uVar93 = uVar93 + 1;
                } while (uVar93 < uVar79);
                uVar100 = (int)uVar93 * 2;
                uVar116 = uVar100 + 1;
              }
              uVar106 = uVar100;
              if (uVar116 - 1 < param_5) {
                param_3[(longlong)(int)uVar116 + -1] =
                     *(byte *)(lVar108 + (int)uVar116 + -1 + lStack_80);
                uVar106 = uVar116;
              }
            }
          }
LAB_140a71eca:
          lVar87 = (longlong)(int)uVar106;
          if ((int)(uint)param_6 < 1) {
            if (uVar113 != 0) goto LAB_140a72277;
LAB_140a7216a:
            if ((int)uVar89 < 1) goto LAB_140a724a5;
LAB_140a72178:
            if ((longlong)uVar97 < 0x10) {
LAB_140a75410:
              iVar101 = 0;
            }
            else {
              pbVar126 = param_3 + lVar87;
              uVar93 = (ulonglong)pbVar126 & 0xf;
              if (uVar93 != 0) {
                uVar93 = 0x10 - uVar93;
              }
              if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a75410;
              uVar75 = 0;
              iVar101 = iVar94 - (iVar94 - (int)uVar93 & 0xfU);
              if (uVar93 != 0) {
                do {
                  pbVar126[uVar75] = param_8;
                  uVar75 = uVar75 + 1;
                } while (uVar75 < uVar93);
              }
              do {
                *(undefined8 *)(pbVar126 + uVar93) = uVar132;
                *(undefined8 *)(pbVar126 + uVar93 + 8) = uVar132;
                uVar93 = uVar93 + 0x10;
              } while (uVar93 < (ulonglong)(longlong)iVar101);
              uVar106 = (int)lVar87 + iVar101;
            }
            uVar93 = (ulonglong)iVar101;
            if (uVar93 < uVar97) {
              do {
                param_3[uVar93 + lVar87] = param_8;
                uVar93 = uVar93 + 1;
              } while (uVar93 < uVar97);
              uVar106 = (int)uVar93 + (int)lVar87;
            }
LAB_140a72493:
            if ((int)(uint)param_6 < 3) {
LAB_140a724a5:
              uVar93 = (longlong)(int)param_5;
              goto LAB_140a724c0;
            }
          }
          else {
            if (uVar78 < 7) {
LAB_140a7205e:
              iVar101 = 1;
              uVar93 = 0;
              uVar100 = uVar106;
              if (uVar128 != 0) {
                do {
                  param_3[uVar93 * 2 + lVar87] = *(byte *)(param_1 + lStack_80 + uVar93 * 2);
                  param_3[uVar93 * 2 + lVar87 + 1] = *(byte *)(param_1 + lStack_80 + 1 + uVar93 * 2)
                  ;
                  uVar93 = uVar93 + 1;
                } while (uVar93 < uVar130);
                iVar101 = (int)uVar93 * 2;
                uVar100 = uVar106 + iVar101;
                iVar101 = iVar101 + 1;
              }
              if (iVar101 - 1U < uVar78) {
                param_3[(longlong)iVar101 + -1 + lVar87] =
                     *(byte *)(param_1 + iVar101 + -1 + lStack_80);
                uVar100 = uVar106 + iVar101;
              }
            }
            else {
              pbVar126 = param_3 + lVar87;
              lVar111 = param_1 + lStack_80;
              if (((longlong)pbVar126 - lVar111 < (longlong)(ulonglong)uVar78) &&
                 (-((longlong)pbVar126 - lVar111) < (longlong)(ulonglong)uVar78))
              goto LAB_140a7205e;
              if (uVar78 < 0x10) {
LAB_140a75409:
                uVar75 = 0;
              }
              else {
                uVar93 = (ulonglong)pbVar126 & 0xf;
                if ((int)uVar93 != 0) {
                  uVar93 = (ulonglong)(0x10 - (int)uVar93);
                }
                iVar101 = (int)uVar93;
                if (uVar78 < iVar101 + 0x10U) goto LAB_140a75409;
                uVar75 = 0;
                iVar85 = uVar78 - (uVar78 - iVar101 & 0xf);
                if (iVar101 != 0) {
                  do {
                    pbVar126[uVar75] = *(byte *)(uVar75 + lVar111);
                    uVar75 = uVar75 + 1;
                  } while (uVar75 < uVar93);
                }
                if ((lVar111 + uVar93 & 0xf) == 0) {
                  uVar75 = (ulonglong)iVar85;
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar111);
                    *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                    uVar93 = uVar93 + 0x10;
                  } while (uVar93 < uVar75);
                }
                else {
                  uVar75 = (ulonglong)iVar85;
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar111));
                    *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                    uVar93 = uVar93 + 0x10;
                  } while (uVar93 < uVar75);
                }
              }
              for (; uVar75 < uVar80; uVar75 = uVar75 + 1) {
                pbVar126[uVar75] = *(byte *)(uVar75 + lVar111);
              }
              uVar100 = (uVar106 + iVar127) - 1;
            }
            uVar106 = uVar100;
            lVar87 = (longlong)(int)uVar106;
            if ((int)(uint)param_6 < 3) {
              if (uVar113 == 0) goto LAB_140a7216a;
LAB_140a72277:
              if (0 < (int)uVar89) {
LAB_140a72285:
                iVar101 = (int)lVar87;
                if ((int)uVar89 < 7) {
LAB_140a72400:
                  iVar85 = 1;
                  uVar93 = 0;
                  if (uVar99 != 0) {
                    do {
                      param_3[uVar93 * 2 + lVar87] = *(byte *)(lVar4 + lStack_80 + uVar93 * 2);
                      param_3[uVar93 * 2 + lVar87 + 1] =
                           *(byte *)(lVar4 + lStack_80 + 1 + uVar93 * 2);
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < uVar103);
                    iVar85 = (int)uVar93 * 2;
                    uVar106 = iVar101 + iVar85;
                    iVar85 = iVar85 + 1;
                  }
                  if (iVar85 - 1U < uVar89) {
                    param_3[(longlong)iVar85 + -1 + lVar87] =
                         *(byte *)(lVar4 + iVar85 + -1 + lStack_80);
                    uVar106 = iVar101 + iVar85;
                  }
                }
                else {
                  pbVar126 = param_3 + lVar87;
                  lVar111 = lVar4 + lStack_80;
                  if (((longlong)pbVar126 - lVar111 < 2 - (longlong)(int)param_5) &&
                     (-((longlong)pbVar126 - lVar111) < 2 - (longlong)(int)param_5))
                  goto LAB_140a72400;
                  if ((longlong)uVar97 < 0x10) {
LAB_140a75418:
                    uVar75 = 0;
                  }
                  else {
                    uVar93 = (ulonglong)pbVar126 & 0xf;
                    if (uVar93 != 0) {
                      uVar93 = 0x10 - uVar93;
                    }
                    if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a75418;
                    uVar88 = 0;
                    uVar75 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                    if (uVar93 != 0) {
                      do {
                        pbVar126[uVar88] = *(byte *)(uVar88 + lVar111);
                        uVar88 = uVar88 + 1;
                      } while (uVar88 < uVar93);
                    }
                    if ((lVar111 + uVar93 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar111);
                        *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                        uVar93 = uVar93 + 0x10;
                      } while (uVar93 < uVar75);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar111));
                        *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                        uVar93 = uVar93 + 0x10;
                      } while (uVar93 < uVar75);
                    }
                  }
                  for (; uVar75 < uVar97; uVar75 = uVar75 + 1) {
                    pbVar126[uVar75] = *(byte *)(uVar75 + lVar111);
                  }
                  uVar106 = (iVar101 + iVar120) - 1;
                }
                goto LAB_140a72493;
              }
              goto LAB_140a724a5;
            }
            uVar106 = uVar106 + 2;
            param_3[lVar87] = *(byte *)(lStack_80 + -2 + lVar4);
            param_3[lVar87 + 1] = *(byte *)(lStack_80 + -1 + lVar4);
            lVar87 = (longlong)(int)uVar106;
            if (uVar113 == 0) {
              if (0 < (int)uVar89) goto LAB_140a72178;
            }
            else if (0 < (int)uVar89) goto LAB_140a72285;
          }
          uVar93 = (int)uVar106 - lVar96;
        }
        else {
LAB_140a71315:
          uVar75 = (ulonglong)(int)param_5;
          uVar93 = uVar75;
          if (uVar100 == 1) {
            uVar100 = 0;
            lVar87 = lVar95 * uVar76;
            bVar7 = *(byte *)(param_1 + lVar87);
            if (uVar98 == 0) {
              uVar116 = uVar100;
              if (0 < (int)param_5) {
                if (((longlong)uVar75 < 0x10) || ((longlong)uVar75 < lVar2)) {
                  uVar93 = 0;
                  uVar116 = 0;
                }
                else {
                  uVar93 = 0;
                  if (uVar109 != 0) {
                    do {
                      param_3[uVar93] = bVar7;
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < uVar109);
                  }
                  uVar131 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  in_XMM2._0_8_ = CONCAT44(uVar131,uVar131);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  uVar88 = uVar109;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar88) = in_XMM2;
                    uVar88 = uVar88 + 0x10;
                    uVar93 = uVar110;
                    uVar116 = uVar105;
                  } while (uVar88 < uVar110);
                }
                if (uVar93 < uVar75) {
                  do {
                    param_3[uVar93] = bVar7;
                    uVar93 = uVar93 + 1;
                  } while (uVar93 < uVar75);
                  uVar116 = (uint)uVar93;
                }
              }
            }
            else {
              uVar116 = 0;
              if (0 < (int)param_5) {
                if (6 < (int)param_5) {
                  lVar111 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar87);
                  if (((int)param_5 <= lVar111) || ((longlong)(int)param_5 <= -lVar111)) {
                    if (((longlong)uVar75 < 0x10) || ((longlong)uVar75 < lVar2)) {
                      uVar93 = 0;
                    }
                    else {
                      uVar93 = 0;
                      lVar111 = lVar87 + lVar108;
                      if (uVar109 != 0) {
                        do {
                          param_3[uVar93] = *(byte *)(uVar93 + lVar111);
                          uVar93 = uVar93 + 1;
                        } while (uVar93 < uVar109);
                      }
                      uVar88 = uVar109;
                      uVar93 = uVar110;
                      if ((lVar87 + lVar108 + uVar109 & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(uVar88 + lVar111);
                          *(undefined1 (*) [16])(param_3 + uVar88) = in_XMM2;
                          uVar88 = uVar88 + 0x10;
                        } while (uVar88 < uVar110);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar88 + lVar111));
                          *(undefined1 (*) [16])(param_3 + uVar88) = in_XMM2;
                          uVar88 = uVar88 + 0x10;
                        } while (uVar88 < uVar110);
                      }
                    }
                    uVar116 = param_5;
                    if (uVar93 < uVar75) {
                      do {
                        param_3[uVar93] = *(byte *)(uVar93 + lVar87 + lVar108);
                        uVar93 = uVar93 + 1;
                      } while (uVar93 < uVar75);
                    }
                    goto LAB_140a74e0d;
                  }
                }
                uVar106 = 1;
                uVar93 = 0;
                if (uVar77 != 0) {
                  do {
                    param_3[uVar93 * 2] = *(byte *)(lVar87 + lVar108 + uVar93 * 2);
                    param_3[uVar93 * 2 + 1] = *(byte *)(lVar87 + lVar108 + 1 + uVar93 * 2);
                    uVar93 = uVar93 + 1;
                  } while (uVar93 < uVar79);
                  uVar100 = (int)uVar93 * 2;
                  uVar106 = uVar100 + 1;
                }
                uVar116 = uVar100;
                if (uVar106 - 1 < param_5) {
                  param_3[(longlong)(int)uVar106 + -1] =
                       *(byte *)(lVar108 + (int)uVar106 + -1 + lVar87);
                  uVar116 = uVar106;
                }
              }
            }
LAB_140a74e0d:
            lVar111 = (longlong)(int)uVar116;
            if (0 < (int)(uint)param_6) {
              if (uVar78 < 7) {
LAB_140a74f83:
                iVar101 = 1;
                uVar93 = 0;
                uVar100 = uVar116;
                if (uVar128 != 0) {
                  do {
                    param_3[uVar93 * 2 + lVar111] = *(byte *)(param_1 + lVar87 + uVar93 * 2);
                    param_3[uVar93 * 2 + lVar111 + 1] = *(byte *)(param_1 + lVar87 + 1 + uVar93 * 2)
                    ;
                    uVar93 = uVar93 + 1;
                  } while (uVar93 < uVar130);
                  iVar101 = (int)uVar93 * 2;
                  uVar100 = uVar116 + iVar101;
                  iVar101 = iVar101 + 1;
                }
                if (iVar101 - 1U < uVar78) {
                  param_3[(longlong)iVar101 + -1 + lVar111] =
                       *(byte *)(param_1 + iVar101 + -1 + lVar87);
                  uVar100 = uVar116 + iVar101;
                }
              }
              else {
                pbVar126 = param_3 + lVar111;
                lVar81 = param_1 + lVar87;
                if (((longlong)pbVar126 - lVar81 < (longlong)(ulonglong)uVar78) &&
                   (-((longlong)pbVar126 - lVar81) < (longlong)(ulonglong)uVar78))
                goto LAB_140a74f83;
                if (uVar78 < 0x10) {
LAB_140a753e3:
                  uVar88 = 0;
                }
                else {
                  uVar93 = (ulonglong)pbVar126 & 0xf;
                  if ((int)uVar93 != 0) {
                    uVar93 = (ulonglong)(0x10 - (int)uVar93);
                  }
                  iVar101 = (int)uVar93;
                  if (uVar78 < iVar101 + 0x10U) goto LAB_140a753e3;
                  uVar88 = 0;
                  iVar85 = uVar78 - (uVar78 - iVar101 & 0xf);
                  if (iVar101 != 0) {
                    do {
                      pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar93);
                  }
                  if ((lVar81 + uVar93 & 0xf) == 0) {
                    uVar88 = (ulonglong)iVar85;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                      *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                      uVar93 = uVar93 + 0x10;
                    } while (uVar93 < uVar88);
                  }
                  else {
                    uVar88 = (ulonglong)iVar85;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                      *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                      uVar93 = uVar93 + 0x10;
                    } while (uVar93 < uVar88);
                  }
                }
                for (; uVar88 < uVar80; uVar88 = uVar88 + 1) {
                  pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                }
                uVar100 = (uVar116 + iVar127) - 1;
              }
              uVar116 = uVar100;
              lVar111 = (longlong)(int)uVar116;
              if (2 < (int)(uint)param_6) {
                uVar116 = uVar116 + 2;
                param_3[lVar111] = *(byte *)(lVar4 + -2 + lVar87);
                param_3[lVar111 + 1] = *(byte *)(lVar4 + -1 + lVar87);
                lVar111 = (longlong)(int)uVar116;
              }
            }
            bVar7 = *(byte *)(lVar4 + -1 + lVar87);
            iVar101 = (int)lVar111;
            if (uVar113 == 0) {
              if (0 < (int)uVar89) {
                if ((longlong)uVar97 < 0x10) {
LAB_140a753eb:
                  iVar85 = 0;
                }
                else {
                  pbVar126 = param_3 + lVar111;
                  uVar93 = (ulonglong)pbVar126 & 0xf;
                  if (uVar93 != 0) {
                    uVar93 = 0x10 - uVar93;
                  }
                  if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a753eb;
                  uVar88 = 0;
                  iVar85 = iVar94 - (iVar94 - (int)uVar93 & 0xfU);
                  if (uVar93 != 0) {
                    do {
                      pbVar126[uVar88] = bVar7;
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar93);
                  }
                  uVar131 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                  in_XMM2._0_8_ = CONCAT44(uVar131,uVar131);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                    uVar93 = uVar93 + 0x10;
                  } while (uVar93 < (ulonglong)(longlong)iVar85);
                  uVar116 = iVar101 + iVar85;
                }
                uVar93 = (ulonglong)iVar85;
                if (uVar97 <= uVar93) goto LAB_140a7537f;
                do {
                  param_3[uVar93 + lVar111] = bVar7;
                  uVar93 = uVar93 + 1;
                } while (uVar93 < uVar97);
                lVar111 = (longlong)((int)uVar93 + iVar101);
              }
            }
            else {
              if ((int)uVar89 < 1) goto LAB_140a75382;
              if (6 < (int)uVar89) {
                pbVar126 = param_3 + lVar111;
                lVar81 = lVar87 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar81) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar81))) {
                  if ((longlong)uVar97 < 0x10) {
LAB_140a753f3:
                    uVar88 = 0;
                  }
                  else {
                    uVar93 = (ulonglong)pbVar126 & 0xf;
                    if (uVar93 != 0) {
                      uVar93 = 0x10 - uVar93;
                    }
                    if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a753f3;
                    uVar118 = 0;
                    uVar88 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                    if (uVar93 != 0) {
                      do {
                        pbVar126[uVar118] = *(byte *)(uVar118 + lVar81);
                        uVar118 = uVar118 + 1;
                      } while (uVar118 < uVar93);
                    }
                    if ((lVar81 + uVar93 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                        *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                        uVar93 = uVar93 + 0x10;
                      } while (uVar93 < uVar88);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                        *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                        uVar93 = uVar93 + 0x10;
                      } while (uVar93 < uVar88);
                    }
                  }
                  for (; uVar88 < uVar97; uVar88 = uVar88 + 1) {
                    pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                  }
                  lVar111 = (longlong)(iVar101 + iVar120 + -1);
                  goto LAB_140a75382;
                }
              }
              iVar85 = 1;
              uVar93 = 0;
              if (uVar99 != 0) {
                do {
                  param_3[uVar93 * 2 + lVar111] = *(byte *)(lVar87 + lVar4 + uVar93 * 2);
                  param_3[uVar93 * 2 + lVar111 + 1] = *(byte *)(lVar87 + lVar4 + 1 + uVar93 * 2);
                  uVar93 = uVar93 + 1;
                } while (uVar93 < uVar103);
                iVar85 = (int)uVar93 * 2;
                uVar116 = iVar101 + iVar85;
                iVar85 = iVar85 + 1;
              }
              if (iVar85 - 1U < uVar89) {
                param_3[(longlong)iVar85 + -1 + lVar111] = *(byte *)(lVar4 + iVar85 + -1 + lVar87);
                lVar111 = (longlong)(iVar85 + iVar101);
                goto LAB_140a75382;
              }
LAB_140a7537f:
              lVar111 = (longlong)(int)uVar116;
            }
LAB_140a75382:
            uVar93 = lVar111 - lVar96;
            if ((int)(uint)param_6 < 3) {
              uVar93 = uVar75;
            }
          }
          else if (uVar100 == 2) {
            uVar88 = uVar75;
            if (0 < (int)(uint)param_6) {
              if (uVar78 < 7) {
LAB_140a738a0:
                iVar101 = 1;
                uVar88 = 0;
                uVar100 = param_5;
                if (uVar128 != 0) {
                  lVar87 = lVar95 * uVar76 + param_1;
                  do {
                    pbVar129[uVar88 * 2] = *(byte *)(lVar87 + uVar88 * 2);
                    pbVar129[uVar88 * 2 + 1] = *(byte *)(lVar87 + 1 + uVar88 * 2);
                    uVar88 = uVar88 + 1;
                  } while (uVar88 < uVar130);
                  iVar101 = (int)uVar88 * 2;
                  uVar100 = param_5 + iVar101;
                  iVar101 = iVar101 + 1;
                }
                if (iVar101 - 1U < uVar78) {
                  pbVar129[(longlong)iVar101 + -1] =
                       *(byte *)(param_1 + iVar101 + -1 + lVar95 * uVar76);
                  uVar100 = param_5 + iVar101;
                }
              }
              else {
                lVar87 = lVar95 * uVar76 + param_1;
                if (((longlong)pbVar129 - lVar87 < (longlong)(ulonglong)uVar78) &&
                   (-((longlong)pbVar129 - lVar87) < (longlong)(ulonglong)uVar78))
                goto LAB_140a738a0;
                if ((uVar78 < 0x10) || (uVar78 < iVar72 + 0x10U)) {
                  iVar101 = 0;
                }
                else {
                  uVar88 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar129[uVar88] = *(byte *)(uVar88 + lVar87);
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar74);
                  }
                  uVar88 = uVar74;
                  iVar101 = iVar115;
                  if ((lVar87 + uVar74 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar88 + lVar87);
                      *(undefined1 (*) [16])(pbVar129 + uVar88) = in_XMM2;
                      uVar88 = uVar88 + 0x10;
                    } while (uVar88 < uVar117);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar88 + lVar87));
                      *(undefined1 (*) [16])(pbVar129 + uVar88) = in_XMM2;
                      uVar88 = uVar88 + 0x10;
                    } while (uVar88 < uVar117);
                  }
                }
                for (uVar88 = (ulonglong)iVar101; uVar100 = uVar121, uVar88 < uVar80;
                    uVar88 = uVar88 + 1) {
                  pbVar129[uVar88] = *(byte *)(uVar88 + lVar87);
                }
              }
              uVar88 = (ulonglong)(int)uVar100;
              if (2 < (int)(uint)param_6) {
                lVar87 = lVar95 * uVar76;
                if (uVar98 == 0) {
                  if (-1 < iVar5) {
                    if (6 < (int)param_5) {
                      lVar111 = (longlong)(int)param_5;
                      pbVar126 = param_3 + ((uVar75 - 1) - (lVar87 + -1 + lVar4));
                      if ((lVar111 < (longlong)pbVar126) ||
                         ((byte *)-lVar111 != pbVar126 && lVar111 <= -(longlong)pbVar126)) {
                        if (((longlong)uVar91 < 0x10) || ((longlong)uVar91 < lVar90)) {
                          uVar93 = 0;
                        }
                        else {
                          uVar93 = 0;
                          lVar111 = (lVar87 + lVar4) - uVar75;
                          if (uVar86 != 0) {
                            do {
                              param_3[uVar93] = *(byte *)(uVar93 + lVar111);
                              uVar93 = uVar93 + 1;
                            } while (uVar93 < uVar86);
                          }
                          uVar118 = uVar86;
                          uVar93 = uVar92;
                          if ((lVar111 + uVar86 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar118 + lVar111);
                              *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                              uVar118 = uVar118 + 0x10;
                            } while (uVar118 < uVar92);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar118 + lVar111));
                              *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                              uVar118 = uVar118 + 0x10;
                            } while (uVar118 < uVar92);
                          }
                        }
                        if (uVar93 < uVar91) {
                          do {
                            param_3[uVar93] = *(byte *)(uVar93 + ((lVar87 + lVar4) - uVar75));
                            uVar93 = uVar93 + 1;
                          } while (uVar93 < uVar91);
                        }
                        goto LAB_140a73de0;
                      }
                    }
                    uVar93 = 0;
                    iVar101 = 1;
                    lVar111 = 0;
                    if (uVar77 != 0) {
                      do {
                        uVar93 = uVar93 + 1;
                        pbVar129[lVar111 + -1] = *(byte *)(lVar111 + -1 + lVar87 + lVar4);
                        pbVar129[lVar111 + -2] = *(byte *)(lVar111 + -2 + lVar87 + lVar4);
                        lVar111 = lVar111 + -2;
                      } while (uVar93 < uVar79);
                      iVar101 = (int)uVar93 * 2 + 1;
                    }
                    if (iVar101 - 1U < param_5) {
                      pbVar129[-(longlong)iVar101] = *(byte *)((lVar87 + lVar4) - (longlong)iVar101)
                      ;
                    }
                  }
                }
                else if (-1 < iVar5) {
                  if (6 < (int)param_5) {
                    lVar81 = (longlong)(int)param_5;
                    pbVar126 = param_3 + ((uVar75 - 1) - (param_1 + -1 + lVar87));
                    lVar111 = param_1 + lVar87;
                    if ((lVar81 < (longlong)pbVar126) ||
                       ((byte *)-lVar81 != pbVar126 && lVar81 <= -(longlong)pbVar126)) {
                      if (((longlong)uVar91 < 0x10) || ((longlong)uVar91 < lVar90)) {
                        uVar93 = 0;
                      }
                      else {
                        uVar93 = 0;
                        lVar81 = lVar111 - uVar75;
                        if (uVar86 != 0) {
                          do {
                            param_3[uVar93] = *(byte *)(uVar93 + lVar81);
                            uVar93 = uVar93 + 1;
                          } while (uVar93 < uVar86);
                        }
                        uVar118 = uVar86;
                        uVar93 = uVar92;
                        if (((lVar111 - uVar75) + uVar86 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar118 + lVar81);
                            *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                            uVar118 = uVar118 + 0x10;
                          } while (uVar118 < uVar92);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar118 + lVar81));
                            *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                            uVar118 = uVar118 + 0x10;
                          } while (uVar118 < uVar92);
                        }
                      }
                      if (uVar93 < uVar91) {
                        do {
                          param_3[uVar93] = *(byte *)(uVar93 + (lVar111 - uVar75));
                          uVar93 = uVar93 + 1;
                        } while (uVar93 < uVar91);
                      }
                      goto LAB_140a73de0;
                    }
                  }
                  uVar93 = 0;
                  iVar101 = 1;
                  lVar111 = 0;
                  if (uVar77 != 0) {
                    do {
                      uVar93 = uVar93 + 1;
                      pbVar129[lVar111 + -1] = *(byte *)(lVar111 + -1 + param_1 + lVar87);
                      pbVar129[lVar111 + -2] = *(byte *)(lVar111 + -2 + param_1 + lVar87);
                      lVar111 = lVar111 + -2;
                    } while (uVar93 < uVar79);
                    iVar101 = (int)uVar93 * 2 + 1;
                  }
                  if (iVar101 - 1U < param_5) {
                    pbVar129[-(longlong)iVar101] = *(byte *)((param_1 + lVar87) - (longlong)iVar101)
                    ;
                  }
                }
LAB_140a73de0:
                iVar85 = uVar100 + 2;
                param_3[uVar88] = *(byte *)(lVar4 + -2 + lVar87);
                param_3[uVar88 + 1] = *(byte *)(lVar4 + -1 + lVar87);
                lVar111 = (longlong)iVar85;
                iVar101 = iVar85;
                if (uVar113 == 0) {
                  if (0 < (int)uVar89) {
                    if (6 < (int)uVar89) {
                      pbVar126 = param_3 + lVar111;
                      lVar81 = param_1 + lVar87;
                      if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar81) ||
                         (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar81))) {
                        if ((longlong)uVar97 < 0x10) {
LAB_140a74adc:
                          uVar75 = 0;
                        }
                        else {
                          uVar93 = (ulonglong)pbVar126 & 0xf;
                          if (uVar93 != 0) {
                            uVar93 = 0x10 - uVar93;
                          }
                          if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a74adc;
                          uVar88 = 0;
                          uVar75 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                          if (uVar93 != 0) {
                            do {
                              pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                              uVar88 = uVar88 + 1;
                            } while (uVar88 < uVar93);
                          }
                          if ((lVar81 + uVar93 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                              *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                              uVar93 = uVar93 + 0x10;
                            } while (uVar93 < uVar75);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                              *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                              uVar93 = uVar93 + 0x10;
                            } while (uVar93 < uVar75);
                          }
                        }
                        for (; uVar75 < uVar97; uVar75 = uVar75 + 1) {
                          pbVar126[uVar75] = *(byte *)(uVar75 + lVar81);
                        }
                        lVar111 = (longlong)(iVar85 + iVar120 + -1);
                        goto LAB_140a74200;
                      }
                    }
                    iVar102 = 1;
                    uVar93 = 0;
                    if (uVar99 != 0) {
                      do {
                        param_3[uVar93 * 2 + lVar111] = *(byte *)(param_1 + lVar87 + uVar93 * 2);
                        param_3[uVar93 * 2 + lVar111 + 1] =
                             *(byte *)(param_1 + lVar87 + 1 + uVar93 * 2);
                        uVar93 = uVar93 + 1;
                      } while (uVar93 < uVar103);
                      iVar102 = (int)uVar93 * 2;
                      iVar101 = iVar85 + iVar102;
                      iVar102 = iVar102 + 1;
                    }
                    if (uVar89 <= iVar102 - 1U) goto LAB_140a741fd;
                    param_3[(longlong)iVar102 + -1 + lVar111] =
                         *(byte *)(param_1 + iVar102 + -1 + lVar87);
                    lVar111 = (longlong)(iVar102 + iVar85);
                  }
                }
                else {
                  if ((int)uVar89 < 1) goto LAB_140a74200;
                  if (6 < (int)uVar89) {
                    pbVar126 = param_3 + lVar111;
                    lVar81 = lVar87 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar81) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar81))) {
                      if ((longlong)uVar97 < 0x10) {
LAB_140a74ae3:
                        uVar75 = 0;
                      }
                      else {
                        uVar93 = (ulonglong)pbVar126 & 0xf;
                        if (uVar93 != 0) {
                          uVar93 = 0x10 - uVar93;
                        }
                        if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a74ae3;
                        uVar88 = 0;
                        uVar75 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                        if (uVar93 != 0) {
                          do {
                            pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                            uVar88 = uVar88 + 1;
                          } while (uVar88 < uVar93);
                        }
                        if ((lVar81 + uVar93 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                      }
                      for (; uVar75 < uVar97; uVar75 = uVar75 + 1) {
                        pbVar126[uVar75] = *(byte *)(uVar75 + lVar81);
                      }
                      lVar111 = (longlong)(iVar85 + iVar120 + -1);
                      goto LAB_140a74200;
                    }
                  }
                  iVar102 = 1;
                  uVar93 = 0;
                  if (uVar99 != 0) {
                    do {
                      param_3[uVar93 * 2 + lVar111] = *(byte *)(lVar87 + lVar4 + uVar93 * 2);
                      param_3[uVar93 * 2 + lVar111 + 1] = *(byte *)(lVar87 + lVar4 + 1 + uVar93 * 2)
                      ;
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < uVar103);
                    iVar102 = (int)uVar93 * 2;
                    iVar101 = iVar85 + iVar102;
                    iVar102 = iVar102 + 1;
                  }
                  if (iVar102 - 1U < uVar89) {
                    param_3[(longlong)iVar102 + -1 + lVar111] =
                         *(byte *)(lVar4 + iVar102 + -1 + lVar87);
                    lVar111 = (longlong)(iVar102 + iVar85);
                    goto LAB_140a74200;
                  }
LAB_140a741fd:
                  lVar111 = (longlong)iVar101;
                }
LAB_140a74200:
                uVar93 = lVar111 - lVar96;
                goto LAB_140a724c0;
              }
            }
            if (uVar98 == 0) {
              if (-1 < iVar5) {
                if (6 < (int)param_5) {
                  lVar87 = (longlong)(int)param_5;
                  pbVar126 = param_3 + ((uVar75 - 1) -
                                       (longlong)(pbVar129 + (longlong)(int)(uint)param_6 + -1));
                  if ((lVar87 < (longlong)pbVar126) ||
                     ((byte *)-lVar87 != pbVar126 && lVar87 <= -(longlong)pbVar126)) {
                    if (((longlong)uVar91 < 0x10) || ((longlong)uVar91 < lVar90)) {
                      uVar75 = 0;
                    }
                    else {
                      uVar75 = 0;
                      if (uVar86 != 0) {
                        do {
                          param_3[uVar75] = pbVar129[uVar75 + lVar119];
                          uVar75 = uVar75 + 1;
                        } while (uVar75 < uVar86);
                      }
                      uVar118 = uVar86;
                      uVar75 = uVar92;
                      if (((ulonglong)(pbVar129 + uVar86 + lVar119) & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(pbVar129 + uVar118 + lVar119);
                          *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                          uVar118 = uVar118 + 0x10;
                        } while (uVar118 < uVar92);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])
                                                   (pbVar129 + uVar118 + lVar119));
                          *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                          uVar118 = uVar118 + 0x10;
                        } while (uVar118 < uVar92);
                      }
                    }
                    for (; uVar75 < uVar91; uVar75 = uVar75 + 1) {
                      param_3[uVar75] = pbVar129[uVar75 + lVar119];
                    }
                    goto LAB_140a74680;
                  }
                }
                uVar75 = 0;
                iVar101 = 1;
                lVar87 = 0;
                if (uVar77 != 0) {
                  do {
                    uVar75 = uVar75 + 1;
                    pbVar129[lVar87 + -1] = pbVar129[lVar87 + -1 + lVar123];
                    pbVar129[lVar87 + -2] = pbVar129[lVar87 + -2 + lVar123];
                    lVar87 = lVar87 + -2;
                  } while (uVar75 < uVar79);
                  iVar101 = (int)uVar75 * 2 + 1;
                }
                if (iVar101 - 1U < param_5) {
                  pbVar129[-(longlong)iVar101] = pbVar129[lVar123 - iVar101];
                }
              }
            }
            else if (-1 < iVar5) {
              if (6 < (int)param_5) {
                lVar111 = (longlong)(int)param_5;
                lVar87 = param_1 + lVar95 * uVar76;
                pbVar126 = param_3 + ((uVar75 - 1) - (param_1 + -1 + lVar95 * uVar76));
                if ((lVar111 < (longlong)pbVar126) ||
                   ((byte *)-lVar111 != pbVar126 && lVar111 <= -(longlong)pbVar126)) {
                  if (((longlong)uVar91 < 0x10) || ((longlong)uVar91 < lVar90)) {
                    uVar118 = 0;
                  }
                  else {
                    uVar118 = 0;
                    lVar111 = lVar87 - uVar75;
                    if (uVar86 != 0) {
                      do {
                        param_3[uVar118] = *(byte *)(uVar118 + lVar111);
                        uVar118 = uVar118 + 1;
                      } while (uVar118 < uVar86);
                    }
                    uVar112 = uVar86;
                    uVar118 = uVar92;
                    if (((lVar87 - uVar75) + uVar86 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar112 + lVar111);
                        *(undefined1 (*) [16])(param_3 + uVar112) = in_XMM2;
                        uVar112 = uVar112 + 0x10;
                      } while (uVar112 < uVar92);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar112 + lVar111));
                        *(undefined1 (*) [16])(param_3 + uVar112) = in_XMM2;
                        uVar112 = uVar112 + 0x10;
                      } while (uVar112 < uVar92);
                    }
                  }
                  if (uVar118 < uVar91) {
                    do {
                      param_3[uVar118] = *(byte *)(uVar118 + (lVar87 - uVar75));
                      uVar118 = uVar118 + 1;
                    } while (uVar118 < uVar91);
                  }
                  goto LAB_140a74680;
                }
              }
              uVar75 = 0;
              iVar101 = 1;
              lVar87 = 0;
              if (uVar77 != 0) {
                lVar111 = lVar95 * uVar76 + param_1;
                do {
                  uVar75 = uVar75 + 1;
                  pbVar129[lVar87 + -1] = *(byte *)(lVar87 + -1 + lVar111);
                  pbVar129[lVar87 + -2] = *(byte *)(lVar87 + -2 + lVar111);
                  lVar87 = lVar87 + -2;
                } while (uVar75 < uVar79);
                iVar101 = (int)uVar75 * 2 + 1;
              }
              if (iVar101 - 1U < param_5) {
                pbVar129[-(longlong)iVar101] = *(byte *)((param_1 - iVar101) + lVar95 * uVar76);
              }
            }
LAB_140a74680:
            if (uVar113 == 0) {
              if ((int)uVar89 < 1) goto LAB_140a724c0;
              if (6 < (int)uVar89) {
                pbVar126 = param_3 + uVar88;
                lVar87 = (longlong)pbVar126 - (longlong)(param_3 + (uVar88 - lVar123));
                if ((2 - (longlong)(int)param_5 <= lVar87) ||
                   (2 - (longlong)(int)param_5 <= -lVar87)) {
                  if ((longlong)uVar97 < 0x10) {
LAB_140a74afb:
                    uVar118 = 0;
                  }
                  else {
                    uVar75 = (ulonglong)pbVar126 & 0xf;
                    if (uVar75 != 0) {
                      uVar75 = 0x10 - uVar75;
                    }
                    if ((longlong)uVar97 < (longlong)(uVar75 + 0x10)) goto LAB_140a74afb;
                    uVar112 = 0;
                    uVar118 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar75 & 0xfU));
                    lVar87 = uVar88 - lVar123;
                    if (uVar75 != 0) {
                      do {
                        pbVar126[uVar112] = param_3[uVar112 + lVar87];
                        uVar112 = uVar112 + 1;
                      } while (uVar112 < uVar75);
                    }
                    if (((ulonglong)(param_3 + (uVar88 - lVar123) + uVar75) & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(param_3 + uVar75 + lVar87);
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar118);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(param_3 + uVar75 + lVar87));
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar118);
                    }
                  }
                  if (uVar118 < uVar97) {
                    do {
                      pbVar126[uVar118] = param_3[uVar118 + (uVar88 - lVar123)];
                      uVar118 = uVar118 + 1;
                    } while (uVar118 < uVar97);
                  }
                  goto LAB_140a724c0;
                }
              }
              iVar101 = 1;
              uVar75 = 0;
              if (uVar99 != 0) {
                do {
                  param_3[uVar75 * 2 + uVar88] = param_3[uVar75 * 2 + (uVar88 - lVar123)];
                  param_3[uVar75 * 2 + uVar88 + 1] = param_3[uVar75 * 2 + (uVar88 - lVar123) + 1];
                  uVar75 = uVar75 + 1;
                } while (uVar75 < uVar103);
                iVar101 = (int)uVar75 * 2 + 1;
              }
              if (iVar101 - 1U < uVar89) {
                param_3[(longlong)iVar101 + -1 + uVar88] =
                     param_3[(longlong)iVar101 + -1 + (uVar88 - lVar123)];
              }
            }
            else {
              if ((int)uVar89 < 1) goto LAB_140a724c0;
              if (6 < (int)uVar89) {
                pbVar126 = param_3 + uVar88;
                lVar87 = lVar95 * uVar76 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar87) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar87))) {
                  if ((longlong)uVar97 < 0x10) {
LAB_140a74b03:
                    uVar88 = 0;
                  }
                  else {
                    uVar75 = (ulonglong)pbVar126 & 0xf;
                    if (uVar75 != 0) {
                      uVar75 = 0x10 - uVar75;
                    }
                    if ((longlong)uVar97 < (longlong)(uVar75 + 0x10)) goto LAB_140a74b03;
                    uVar118 = 0;
                    uVar88 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar75 & 0xfU));
                    if (uVar75 != 0) {
                      do {
                        pbVar126[uVar118] = *(byte *)(uVar118 + lVar87);
                        uVar118 = uVar118 + 1;
                      } while (uVar118 < uVar75);
                    }
                    if ((lVar87 + uVar75 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar75 + lVar87);
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar88);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar75 + lVar87));
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar88);
                    }
                  }
                  for (; uVar88 < uVar97; uVar88 = uVar88 + 1) {
                    pbVar126[uVar88] = *(byte *)(uVar88 + lVar87);
                  }
                  goto LAB_140a724c0;
                }
              }
              iVar101 = 1;
              uVar75 = 0;
              if (uVar99 != 0) {
                lVar87 = lVar95 * uVar76 + lVar4;
                do {
                  param_3[uVar75 * 2 + uVar88] = *(byte *)(lVar87 + uVar75 * 2);
                  param_3[uVar75 * 2 + uVar88 + 1] = *(byte *)(lVar87 + 1 + uVar75 * 2);
                  uVar75 = uVar75 + 1;
                } while (uVar75 < uVar103);
                iVar101 = (int)uVar75 * 2 + 1;
              }
              if (iVar101 - 1U < uVar89) {
                param_3[(longlong)iVar101 + -1 + uVar88] =
                     *(byte *)(lVar4 + iVar101 + -1 + lVar95 * uVar76);
              }
            }
          }
          else if (uVar100 == 3) {
            uVar88 = uVar75;
            if (0 < (int)(uint)param_6) {
              if (uVar78 < 7) {
LAB_140a72a9e:
                iVar101 = 1;
                uVar88 = 0;
                uVar100 = param_5;
                if (uVar128 != 0) {
                  lVar87 = lVar95 * uVar76 + param_1;
                  do {
                    pbVar129[uVar88 * 2] = *(byte *)(lVar87 + uVar88 * 2);
                    pbVar129[uVar88 * 2 + 1] = *(byte *)(lVar87 + 1 + uVar88 * 2);
                    uVar88 = uVar88 + 1;
                  } while (uVar88 < uVar130);
                  iVar101 = (int)uVar88 * 2;
                  uVar100 = param_5 + iVar101;
                  iVar101 = iVar101 + 1;
                }
                if (iVar101 - 1U < uVar78) {
                  pbVar129[(longlong)iVar101 + -1] =
                       *(byte *)(param_1 + iVar101 + -1 + lVar95 * uVar76);
                  uVar100 = param_5 + iVar101;
                }
              }
              else {
                lVar87 = lVar95 * uVar76 + param_1;
                if (((longlong)pbVar129 - lVar87 < (longlong)(ulonglong)uVar78) &&
                   (-((longlong)pbVar129 - lVar87) < (longlong)(ulonglong)uVar78))
                goto LAB_140a72a9e;
                if ((uVar78 < 0x10) || (uVar78 < iVar72 + 0x10U)) {
                  uVar88 = 0;
                }
                else {
                  uVar88 = 0;
                  if (iVar72 != 0) {
                    do {
                      pbVar129[uVar88] = *(byte *)(uVar88 + lVar87);
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar74);
                  }
                  uVar118 = uVar74;
                  uVar88 = uVar117;
                  if ((lVar87 + uVar74 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar118 + lVar87);
                      *(undefined1 (*) [16])(pbVar129 + uVar118) = in_XMM2;
                      uVar118 = uVar118 + 0x10;
                    } while (uVar118 < uVar117);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar118 + lVar87));
                      *(undefined1 (*) [16])(pbVar129 + uVar118) = in_XMM2;
                      uVar118 = uVar118 + 0x10;
                    } while (uVar118 < uVar117);
                  }
                }
                for (; uVar100 = uVar121, uVar88 < uVar80; uVar88 = uVar88 + 1) {
                  pbVar129[uVar88] = *(byte *)(uVar88 + lVar87);
                }
              }
              uVar88 = (ulonglong)(int)uVar100;
              if (2 < (int)(uint)param_6) {
                if (uVar98 == 0) {
                  if (-1 < iVar5) {
                    uVar93 = 0;
                    iVar101 = 1;
                    lVar87 = 0;
                    if (uVar77 != 0) {
                      lVar111 = lVar95 * uVar76 + param_1 + uVar124;
                      do {
                        pbVar129[lVar87 + -1] = *(byte *)(lVar111 + uVar93 * 2);
                        lVar81 = uVar93 * 2;
                        uVar93 = uVar93 + 1;
                        pbVar129[lVar87 + -2] = *(byte *)(lVar111 + 1 + lVar81);
                        lVar87 = lVar87 + -2;
                      } while (uVar93 < uVar79);
                      iVar101 = (int)uVar93 * 2 + 1;
                    }
                    if (iVar101 - 1U < param_5) {
                      pbVar129[-(longlong)iVar101] =
                           *(byte *)(param_1 + uVar124 + (longlong)iVar101 + -1 + lVar95 * uVar76);
                    }
                  }
                }
                else {
                  lVar87 = lVar95 * uVar76;
                  if (-1 < iVar5) {
                    if (6 < (int)param_5) {
                      lVar81 = (longlong)(int)param_5;
                      lVar111 = param_1 + -1 + lVar87;
                      pbVar126 = param_3 + ((uVar75 - 1) - lVar111);
                      lVar111 = lVar111 + 1;
                      if ((lVar81 < (longlong)pbVar126) ||
                         ((byte *)-lVar81 != pbVar126 && lVar81 <= -(longlong)pbVar126)) {
                        if (((longlong)uVar91 < 0x10) || ((longlong)uVar91 < lVar90)) {
                          uVar93 = 0;
                        }
                        else {
                          uVar93 = 0;
                          lVar87 = lVar111 - uVar75;
                          if (uVar86 != 0) {
                            do {
                              param_3[uVar93] = *(byte *)(uVar93 + lVar87);
                              uVar93 = uVar93 + 1;
                            } while (uVar93 < uVar86);
                          }
                          uVar118 = uVar86;
                          uVar93 = uVar92;
                          if (((lVar111 - uVar75) + uVar86 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar118 + lVar87);
                              *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                              uVar118 = uVar118 + 0x10;
                            } while (uVar118 < uVar92);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar118 + lVar87));
                              *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                              uVar118 = uVar118 + 0x10;
                            } while (uVar118 < uVar92);
                          }
                        }
                        if (uVar93 < uVar91) {
                          do {
                            param_3[uVar93] = *(byte *)(uVar93 + (lVar111 - uVar75));
                            uVar93 = uVar93 + 1;
                          } while (uVar93 < uVar91);
                        }
                        goto LAB_140a72e7e;
                      }
                    }
                    uVar93 = 0;
                    iVar101 = 1;
                    lVar111 = 0;
                    if (uVar77 != 0) {
                      do {
                        uVar93 = uVar93 + 1;
                        pbVar129[lVar111 + -1] = *(byte *)(lVar111 + -1 + param_1 + lVar87);
                        pbVar129[lVar111 + -2] = *(byte *)(lVar111 + -2 + param_1 + lVar87);
                        lVar111 = lVar111 + -2;
                      } while (uVar93 < uVar79);
                      iVar101 = (int)uVar93 * 2 + 1;
                    }
                    if (iVar101 - 1U < param_5) {
                      pbVar129[-(longlong)iVar101] =
                           *(byte *)((param_1 + lVar87) - (longlong)iVar101);
                    }
                  }
                }
LAB_140a72e7e:
                lVar111 = lVar95 * uVar76;
                iVar85 = uVar100 + 2;
                param_3[uVar88] = *(byte *)(lVar4 + -2 + lVar111);
                param_3[uVar88 + 1] = *(byte *)(lVar4 + -1 + lVar111);
                lVar87 = (longlong)iVar85;
                iVar101 = iVar85;
                if (uVar113 == 0) {
                  if (0 < (int)uVar89) {
                    uVar93 = 0;
                    iVar102 = 1;
                    lVar81 = 0;
                    if (uVar99 != 0) {
                      lVar125 = lVar111 + (lVar4 - uVar124);
                      do {
                        param_3[uVar93 * 2 + lVar87] = *(byte *)(lVar81 + -1 + lVar125);
                        lVar6 = lVar81 + -2;
                        lVar81 = lVar81 + -2;
                        param_3[uVar93 * 2 + lVar87 + 1] = *(byte *)(lVar6 + lVar125);
                        uVar93 = uVar93 + 1;
                      } while (uVar93 < uVar103);
                      iVar102 = (int)uVar93 * 2;
                      iVar101 = iVar85 + iVar102;
                      iVar102 = iVar102 + 1;
                    }
                    if (uVar89 <= iVar102 - 1U) goto LAB_140a7315c;
                    param_3[(longlong)iVar102 + -1 + lVar87] =
                         *(byte *)((lVar111 + (lVar4 - uVar124)) - (longlong)iVar102);
                    lVar87 = (longlong)(iVar102 + iVar85);
                  }
                }
                else {
                  if ((int)uVar89 < 1) goto LAB_140a7315f;
                  if (6 < (int)uVar89) {
                    pbVar126 = param_3 + lVar87;
                    lVar81 = lVar111 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar81) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar81))) {
                      if ((longlong)uVar97 < 0x10) {
LAB_140a73719:
                        uVar75 = 0;
                      }
                      else {
                        uVar93 = (ulonglong)pbVar126 & 0xf;
                        if (uVar93 != 0) {
                          uVar93 = 0x10 - uVar93;
                        }
                        if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a73719;
                        uVar88 = 0;
                        uVar75 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                        if (uVar93 != 0) {
                          do {
                            pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                            uVar88 = uVar88 + 1;
                          } while (uVar88 < uVar93);
                        }
                        if ((lVar81 + uVar93 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                      }
                      for (; uVar75 < uVar97; uVar75 = uVar75 + 1) {
                        pbVar126[uVar75] = *(byte *)(uVar75 + lVar81);
                      }
                      lVar87 = (longlong)(iVar85 + iVar120 + -1);
                      goto LAB_140a7315f;
                    }
                  }
                  iVar102 = 1;
                  uVar93 = 0;
                  if (uVar99 != 0) {
                    do {
                      param_3[uVar93 * 2 + lVar87] = *(byte *)(lVar111 + lVar4 + uVar93 * 2);
                      param_3[uVar93 * 2 + lVar87 + 1] = *(byte *)(lVar111 + lVar4 + 1 + uVar93 * 2)
                      ;
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < uVar103);
                    iVar102 = (int)uVar93 * 2;
                    iVar101 = iVar85 + iVar102;
                    iVar102 = iVar102 + 1;
                  }
                  if (iVar102 - 1U < uVar89) {
                    param_3[(longlong)iVar102 + -1 + lVar87] =
                         *(byte *)(lVar4 + iVar102 + -1 + lVar111);
                    lVar87 = (longlong)(iVar102 + iVar85);
                  }
                  else {
LAB_140a7315c:
                    lVar87 = (longlong)iVar101;
                  }
                }
LAB_140a7315f:
                uVar93 = lVar87 - lVar96;
                goto LAB_140a724c0;
              }
            }
            if (uVar98 == 0) {
              iVar101 = iVar5;
              if (uVar113 == 0) {
joined_r0x000140a73199:
                if (-1 < iVar101) {
                  uVar100 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar87 = (longlong)iVar101;
                    do {
                      if (iVar101 < 0) break;
                      lVar111 = (longlong)(int)uVar100;
                      iVar101 = iVar101 + -1;
                      uVar100 = uVar100 + 1;
                      param_3[lVar87 - lVar111] = param_3[lVar111 + lVar87 + uVar124 + 1];
                    } while (uVar100 < uVar122);
                  }
                  goto joined_r0x000140a73199;
                }
                uVar75 = 0;
                iVar101 = (((uint)param_6 + 2 + iVar114) - uVar89) + -1;
                iVar85 = iVar114;
                iVar102 = iVar114;
                if ((int)param_5 < 2) {
                  do {
                    iVar107 = iVar101 + iVar85;
                    pbVar129[uVar75 + lVar123] = param_3[iVar101];
                    if (((int)(((uint)param_6 + 2) - uVar89) <= iVar107) || (iVar107 < (int)param_5)
                       ) {
                      iVar101 = iVar85 + iVar102;
                      iVar85 = -iVar85;
                      iVar107 = iVar107 - iVar101;
                      iVar102 = -iVar102;
                    }
                    uVar75 = uVar75 + 1;
                    iVar101 = iVar107;
                  } while (uVar75 < uVar97);
                }
              }
              else {
                if (-1 < iVar5) {
                  uVar75 = 0;
                  iVar101 = 1;
                  lVar87 = 0;
                  if (uVar77 != 0) {
                    lVar111 = lVar95 * uVar76 + param_1;
                    do {
                      pbVar129[lVar87 + -1] = *(byte *)(lVar111 + 1 + uVar75 * 2);
                      lVar81 = uVar75 * 2;
                      uVar75 = uVar75 + 1;
                      pbVar129[lVar87 + -2] = *(byte *)(lVar111 + 2 + lVar81);
                      lVar87 = lVar87 + -2;
                    } while (uVar75 < uVar79);
                    iVar101 = (int)uVar75 * 2 + 1;
                  }
                  if (iVar101 - 1U < param_5) {
                    pbVar129[-(longlong)iVar101] = *(byte *)(param_1 + iVar101 + lVar95 * uVar76);
                  }
                }
LAB_140a73428:
                if (0 < (int)uVar89) {
                  if (6 < (int)uVar89) {
                    pbVar126 = param_3 + uVar88;
                    lVar87 = lVar95 * uVar76 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar87) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar87))) {
                      if ((longlong)uVar97 < 0x10) {
LAB_140a73720:
                        uVar88 = 0;
                      }
                      else {
                        uVar75 = (ulonglong)pbVar126 & 0xf;
                        if (uVar75 != 0) {
                          uVar75 = 0x10 - uVar75;
                        }
                        if ((longlong)uVar97 < (longlong)(uVar75 + 0x10)) goto LAB_140a73720;
                        uVar118 = 0;
                        uVar88 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar75 & 0xfU));
                        if (uVar75 != 0) {
                          do {
                            pbVar126[uVar118] = *(byte *)(uVar118 + lVar87);
                            uVar118 = uVar118 + 1;
                          } while (uVar118 < uVar75);
                        }
                        if ((lVar87 + uVar75 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar75 + lVar87);
                            *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                            uVar75 = uVar75 + 0x10;
                          } while (uVar75 < uVar88);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar75 + lVar87));
                            *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                            uVar75 = uVar75 + 0x10;
                          } while (uVar75 < uVar88);
                        }
                      }
                      for (; uVar88 < uVar97; uVar88 = uVar88 + 1) {
                        pbVar126[uVar88] = *(byte *)(uVar88 + lVar87);
                      }
                      goto LAB_140a724c0;
                    }
                  }
                  iVar101 = 1;
                  uVar75 = 0;
                  if (uVar99 != 0) {
                    lVar87 = lVar95 * uVar76 + lVar4;
                    do {
                      param_3[uVar75 * 2 + uVar88] = *(byte *)(lVar87 + uVar75 * 2);
                      param_3[uVar75 * 2 + uVar88 + 1] = *(byte *)(lVar87 + 1 + uVar75 * 2);
                      uVar75 = uVar75 + 1;
                    } while (uVar75 < uVar103);
                    iVar101 = (int)uVar75 * 2 + 1;
                  }
                  if (iVar101 - 1U < uVar89) {
                    param_3[(longlong)iVar101 + -1 + uVar88] =
                         *(byte *)(lVar4 + iVar101 + -1 + lVar95 * uVar76);
                  }
                }
              }
            }
            else {
              if (-1 < iVar5) {
                iVar101 = iVar5;
                do {
                  uVar100 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar87 = (longlong)iVar101;
                    do {
                      if (iVar101 < 0) break;
                      lVar111 = (longlong)(int)uVar100;
                      uVar100 = uVar100 + 1;
                      iVar101 = iVar101 + -1;
                      param_3[lVar87 - lVar111] =
                           *(byte *)((lVar87 + lVar95 * uVar76 + lVar108) - lVar111);
                    } while (uVar100 < uVar122);
                  }
                } while (-1 < iVar101);
              }
              if (uVar113 != 0) goto LAB_140a73428;
              if (0 < (int)uVar89) {
                uVar75 = 0;
                iVar101 = 1;
                lVar87 = 0;
                if (uVar99 != 0) {
                  lVar111 = lVar95 * uVar76 + lVar4;
                  do {
                    param_3[uVar75 * 2 + uVar88] = *(byte *)(lVar87 + -2 + lVar111);
                    lVar81 = lVar87 + -3;
                    lVar87 = lVar87 + -2;
                    param_3[uVar75 * 2 + uVar88 + 1] = *(byte *)(lVar81 + lVar111);
                    uVar75 = uVar75 + 1;
                  } while (uVar75 < uVar103);
                  iVar101 = (int)uVar75 * 2 + 1;
                }
                if (iVar101 - 1U < uVar89) {
                  param_3[(longlong)iVar101 + -1 + uVar88] =
                       *(byte *)((lVar4 - iVar101) + -1 + lVar95 * uVar76);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar100 = 0;
            uVar116 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar111 = lVar95 * uVar76;
                lVar87 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar111);
                if (((int)param_5 <= lVar87) || ((longlong)(int)param_5 <= -lVar87)) {
                  if (((longlong)uVar75 < 0x10) || ((longlong)uVar75 < lVar2)) {
                    uVar88 = 0;
                  }
                  else {
                    uVar88 = 0;
                    lVar87 = lVar111 + lVar108;
                    if (uVar109 != 0) {
                      do {
                        param_3[uVar88] = *(byte *)(uVar88 + lVar87);
                        uVar88 = uVar88 + 1;
                      } while (uVar88 < uVar109);
                    }
                    uVar118 = uVar109;
                    uVar88 = uVar110;
                    if ((lVar111 + lVar108 + uVar109 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar118 + lVar87);
                        *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                        uVar118 = uVar118 + 0x10;
                      } while (uVar118 < uVar110);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar118 + lVar87));
                        *(undefined1 (*) [16])(param_3 + uVar118) = in_XMM2;
                        uVar118 = uVar118 + 0x10;
                      } while (uVar118 < uVar110);
                    }
                  }
                  uVar116 = param_5;
                  if (uVar88 < uVar75) {
                    do {
                      param_3[uVar88] = *(byte *)(uVar88 + lVar111 + lVar108);
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar75);
                  }
                  goto LAB_140a71558;
                }
              }
              uVar106 = 1;
              uVar75 = 0;
              if (uVar77 != 0) {
                lVar87 = lVar95 * uVar76 + lVar108;
                do {
                  param_3[uVar75 * 2] = *(byte *)(lVar87 + uVar75 * 2);
                  param_3[uVar75 * 2 + 1] = *(byte *)(lVar87 + 1 + uVar75 * 2);
                  uVar75 = uVar75 + 1;
                } while (uVar75 < uVar79);
                uVar100 = (int)uVar75 * 2;
                uVar106 = uVar100 + 1;
              }
              uVar116 = uVar100;
              if (uVar106 - 1 < param_5) {
                param_3[(longlong)(int)uVar106 + -1] =
                     *(byte *)(lVar108 + (int)uVar106 + -1 + lVar95 * uVar76);
                uVar116 = uVar106;
              }
            }
LAB_140a71558:
            lVar87 = (longlong)(int)uVar116;
            if (0 < (int)(uint)param_6) {
              if (uVar78 < 7) {
LAB_140a716e3:
                iVar101 = 1;
                uVar75 = 0;
                uVar100 = uVar116;
                if (uVar128 != 0) {
                  lVar111 = lVar95 * uVar76 + param_1;
                  do {
                    param_3[uVar75 * 2 + lVar87] = *(byte *)(lVar111 + uVar75 * 2);
                    param_3[uVar75 * 2 + lVar87 + 1] = *(byte *)(lVar111 + 1 + uVar75 * 2);
                    uVar75 = uVar75 + 1;
                  } while (uVar75 < uVar130);
                  iVar101 = (int)uVar75 * 2;
                  uVar100 = uVar116 + iVar101;
                  iVar101 = iVar101 + 1;
                }
                if (iVar101 - 1U < uVar78) {
                  param_3[(longlong)iVar101 + -1 + lVar87] =
                       *(byte *)(param_1 + iVar101 + -1 + lVar95 * uVar76);
                  uVar100 = uVar116 + iVar101;
                }
              }
              else {
                pbVar126 = param_3 + lVar87;
                lVar111 = lVar95 * uVar76 + param_1;
                if (((longlong)pbVar126 - lVar111 < (longlong)(ulonglong)uVar78) &&
                   (-((longlong)pbVar126 - lVar111) < (longlong)(ulonglong)uVar78))
                goto LAB_140a716e3;
                if (uVar78 < 0x10) {
LAB_140a7290b:
                  uVar88 = 0;
                }
                else {
                  uVar75 = (ulonglong)pbVar126 & 0xf;
                  if ((int)uVar75 != 0) {
                    uVar75 = (ulonglong)(0x10 - (int)uVar75);
                  }
                  iVar101 = (int)uVar75;
                  if (uVar78 < iVar101 + 0x10U) goto LAB_140a7290b;
                  uVar88 = 0;
                  iVar85 = uVar78 - (uVar78 - iVar101 & 0xf);
                  if (iVar101 != 0) {
                    do {
                      pbVar126[uVar88] = *(byte *)(uVar88 + lVar111);
                      uVar88 = uVar88 + 1;
                    } while (uVar88 < uVar75);
                  }
                  if ((lVar111 + uVar75 & 0xf) == 0) {
                    uVar88 = (ulonglong)iVar85;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar75 + lVar111);
                      *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                      uVar75 = uVar75 + 0x10;
                    } while (uVar75 < uVar88);
                  }
                  else {
                    uVar88 = (ulonglong)iVar85;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar75 + lVar111));
                      *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                      uVar75 = uVar75 + 0x10;
                    } while (uVar75 < uVar88);
                  }
                }
                for (; uVar88 < uVar80; uVar88 = uVar88 + 1) {
                  pbVar126[uVar88] = *(byte *)(uVar88 + lVar111);
                }
                uVar100 = (uVar116 + iVar127) - 1;
              }
              lVar87 = (longlong)(int)uVar100;
              if (2 < (int)(uint)param_6) {
                iVar101 = uVar100 + 2;
                lVar111 = lVar95 * uVar76;
                param_3[lVar87] = *(byte *)(lVar4 + -2 + lVar111);
                param_3[lVar87 + 1] = *(byte *)(lVar4 + -1 + lVar111);
                lVar87 = (longlong)iVar101;
                if (0 < (int)uVar89) {
                  if (6 < (int)uVar89) {
                    pbVar126 = param_3 + lVar87;
                    lVar81 = lVar111 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar81) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar81))) {
                      if ((longlong)uVar97 < 0x10) {
LAB_140a72912:
                        uVar75 = 0;
                      }
                      else {
                        uVar93 = (ulonglong)pbVar126 & 0xf;
                        if (uVar93 != 0) {
                          uVar93 = 0x10 - uVar93;
                        }
                        if ((longlong)uVar97 < (longlong)(uVar93 + 0x10)) goto LAB_140a72912;
                        uVar88 = 0;
                        uVar75 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar93 & 0xfU));
                        if (uVar93 != 0) {
                          do {
                            pbVar126[uVar88] = *(byte *)(uVar88 + lVar81);
                            uVar88 = uVar88 + 1;
                          } while (uVar88 < uVar93);
                        }
                        if ((lVar81 + uVar93 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar93 + lVar81);
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar93 + lVar81));
                            *(undefined1 (*) [16])(pbVar126 + uVar93) = in_XMM2;
                            uVar93 = uVar93 + 0x10;
                          } while (uVar93 < uVar75);
                        }
                      }
                      for (; uVar75 < uVar97; uVar75 = uVar75 + 1) {
                        pbVar126[uVar75] = *(byte *)(uVar75 + lVar81);
                      }
                      lVar87 = (longlong)(iVar101 + iVar120 + -1);
                      goto LAB_140a719c0;
                    }
                  }
                  iVar85 = 1;
                  uVar93 = 0;
                  iVar102 = iVar101;
                  if (uVar99 != 0) {
                    do {
                      param_3[uVar93 * 2 + lVar87] = *(byte *)(lVar111 + lVar4 + uVar93 * 2);
                      param_3[uVar93 * 2 + lVar87 + 1] = *(byte *)(lVar111 + lVar4 + 1 + uVar93 * 2)
                      ;
                      uVar93 = uVar93 + 1;
                    } while (uVar93 < uVar103);
                    iVar85 = (int)uVar93 * 2;
                    iVar102 = iVar101 + iVar85;
                    iVar85 = iVar85 + 1;
                  }
                  if (iVar85 - 1U < uVar89) {
                    param_3[(longlong)iVar85 + -1 + lVar87] =
                         *(byte *)(lVar4 + iVar85 + -1 + lVar111);
                    lVar87 = (longlong)(iVar85 + iVar101);
                  }
                  else {
                    lVar87 = (longlong)iVar102;
                  }
                }
LAB_140a719c0:
                uVar93 = lVar87 - lVar96;
                goto LAB_140a724c0;
              }
            }
            if (0 < (int)uVar89) {
              if (6 < (int)uVar89) {
                pbVar126 = param_3 + lVar87;
                lVar111 = lVar95 * uVar76 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar126 - lVar111) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar126 - lVar111))) {
                  if ((longlong)uVar97 < 0x10) {
LAB_140a72919:
                    uVar88 = 0;
                  }
                  else {
                    uVar75 = (ulonglong)pbVar126 & 0xf;
                    if (uVar75 != 0) {
                      uVar75 = 0x10 - uVar75;
                    }
                    if ((longlong)uVar97 < (longlong)(uVar75 + 0x10)) goto LAB_140a72919;
                    uVar118 = 0;
                    uVar88 = (ulonglong)(int)(iVar94 - (iVar94 - (int)uVar75 & 0xfU));
                    if (uVar75 != 0) {
                      do {
                        pbVar126[uVar118] = *(byte *)(uVar118 + lVar111);
                        uVar118 = uVar118 + 1;
                      } while (uVar118 < uVar75);
                    }
                    if ((lVar111 + uVar75 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar75 + lVar111);
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar88);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar75 + lVar111));
                        *(undefined1 (*) [16])(pbVar126 + uVar75) = in_XMM2;
                        uVar75 = uVar75 + 0x10;
                      } while (uVar75 < uVar88);
                    }
                  }
                  for (; uVar88 < uVar97; uVar88 = uVar88 + 1) {
                    pbVar126[uVar88] = *(byte *)(uVar88 + lVar111);
                  }
                  goto LAB_140a724c0;
                }
              }
              iVar101 = 1;
              uVar75 = 0;
              if (uVar99 != 0) {
                lVar111 = lVar95 * uVar76 + lVar4;
                do {
                  param_3[uVar75 * 2 + lVar87] = *(byte *)(lVar111 + uVar75 * 2);
                  param_3[uVar75 * 2 + lVar87 + 1] = *(byte *)(lVar111 + 1 + uVar75 * 2);
                  uVar75 = uVar75 + 1;
                } while (uVar75 < uVar103);
                iVar101 = (int)uVar75 * 2 + 1;
              }
              if (iVar101 - 1U < uVar89) {
                param_3[(longlong)iVar101 + -1 + lVar87] =
                     *(byte *)(lVar4 + iVar101 + -1 + lVar95 * uVar76);
              }
            }
          }
          else {
            uVar93 = 0;
          }
        }
LAB_140a724c0:
        *psStack_60 = (ushort)*param_3 + (ushort)param_3[2];
        psStack_60[(int)uVar83] = (ushort)param_3[1] << 3;
        if (0 < (int)uVar1) {
          lVar111 = lVar95 * uVar76;
          lVar125 = param_1 + lVar111;
          lVar81 = (longlong)(psStack_60 + 1) - lVar125;
          lVar87 = (longlong)(int)(uint)param_6 * 2 + -4;
          if (((int)(uint)param_6 <= lVar81) || (lVar87 <= -lVar81)) {
            psVar3 = psStack_60 + (longlong)(int)uVar83 + 1;
            if ((((longlong)(int)(uint)param_6 <= (longlong)psVar3 - lVar125) ||
                (lVar87 <= -((longlong)psVar3 - lVar125))) &&
               ((lVar81 = (longlong)psVar3 - (longlong)(psStack_60 + 1), lVar87 <= lVar81 ||
                (lVar87 <= -lVar81)))) {
              if ((longlong)uVar104 < 8) {
LAB_140a7541f:
                uVar88 = 0;
              }
              else {
                uVar75 = (ulonglong)psVar3 & 0xf;
                if ((int)uVar75 != 0) {
                  if (((ulonglong)psVar3 & 1) != 0) goto LAB_140a7541f;
                  uVar75 = (ulonglong)(0x10U - (int)uVar75 >> 1);
                }
                if ((longlong)uVar104 < (longlong)(uVar75 + 8)) goto LAB_140a7541f;
                uVar118 = 0;
                uVar88 = (ulonglong)(int)((int)uVar104 - ((int)uVar104 - (int)uVar75 & 7U));
                if ((int)uVar75 != 0) {
                  do {
                    bVar7 = *(byte *)(uVar118 + 1 + lVar125);
                    psStack_60[uVar118 + 1] =
                         (ushort)*(byte *)(uVar118 + lVar125) +
                         (ushort)*(byte *)(uVar118 + 2 + lVar125);
                    psStack_60[(longlong)(int)uVar83 + uVar118 + 1] = (ushort)bVar7 << 3;
                    uVar118 = uVar118 + 1;
                  } while (uVar118 < uVar75);
                }
                if (((ulonglong)(psStack_60 + uVar75 + 1) & 0xf) == 0) {
                  puVar82 = (ulonglong *)(lVar125 + uVar75);
                  do {
                    uVar118 = *puVar82;
                    uVar112 = *(ulonglong *)((longlong)puVar82 + 2);
                    auVar11._8_6_ = 0;
                    auVar11._0_8_ = uVar118;
                    auVar11[0xe] = (char)(uVar118 >> 0x38);
                    auVar17._8_4_ = 0;
                    auVar17._0_8_ = uVar118;
                    auVar17[0xc] = (char)(uVar118 >> 0x30);
                    auVar17._13_2_ = auVar11._13_2_;
                    auVar23._8_4_ = 0;
                    auVar23._0_8_ = uVar118;
                    auVar23._12_3_ = auVar17._12_3_;
                    auVar29._8_2_ = 0;
                    auVar29._0_8_ = uVar118;
                    auVar29[10] = (char)(uVar118 >> 0x28);
                    auVar29._11_4_ = auVar23._11_4_;
                    auVar35._8_2_ = 0;
                    auVar35._0_8_ = uVar118;
                    auVar35._10_5_ = auVar29._10_5_;
                    auVar41[8] = (char)(uVar118 >> 0x20);
                    auVar41._0_8_ = uVar118;
                    auVar41._9_6_ = auVar35._9_6_;
                    auVar53._7_8_ = 0;
                    auVar53._0_7_ = auVar41._8_7_;
                    Var45 = CONCAT81(SUB158(auVar53 << 0x40,7),(char)(uVar118 >> 0x18));
                    auVar66._9_6_ = 0;
                    auVar66._0_9_ = Var45;
                    auVar54._1_10_ = SUB1510(auVar66 << 0x30,5);
                    auVar54[0] = (char)(uVar118 >> 0x10);
                    auVar67._11_4_ = 0;
                    auVar67._0_11_ = auVar54;
                    auVar55._1_12_ = SUB1512(auVar67 << 0x20,3);
                    auVar55[0] = (char)(uVar118 >> 8);
                    auVar12._8_6_ = 0;
                    auVar12._0_8_ = uVar112;
                    auVar12[0xe] = (char)(uVar112 >> 0x38);
                    auVar18._8_4_ = 0;
                    auVar18._0_8_ = uVar112;
                    auVar18[0xc] = (char)(uVar112 >> 0x30);
                    auVar18._13_2_ = auVar12._13_2_;
                    auVar24._8_4_ = 0;
                    auVar24._0_8_ = uVar112;
                    auVar24._12_3_ = auVar18._12_3_;
                    auVar30._8_2_ = 0;
                    auVar30._0_8_ = uVar112;
                    auVar30[10] = (char)(uVar112 >> 0x28);
                    auVar30._11_4_ = auVar24._11_4_;
                    auVar36._8_2_ = 0;
                    auVar36._0_8_ = uVar112;
                    auVar36._10_5_ = auVar30._10_5_;
                    auVar42[8] = (char)(uVar112 >> 0x20);
                    auVar42._0_8_ = uVar112;
                    auVar42._9_6_ = auVar36._9_6_;
                    auVar56._7_8_ = 0;
                    auVar56._0_7_ = auVar42._8_7_;
                    Var49 = CONCAT81(SUB158(auVar56 << 0x40,7),(char)(uVar112 >> 0x18));
                    auVar68._9_6_ = 0;
                    auVar68._0_9_ = Var49;
                    auVar57._1_10_ = SUB1510(auVar68 << 0x30,5);
                    auVar57[0] = (char)(uVar112 >> 0x10);
                    auVar69._11_4_ = 0;
                    auVar69._0_11_ = auVar57;
                    auVar58._1_12_ = SUB1512(auVar69 << 0x20,3);
                    auVar58[0] = (char)(uVar112 >> 8);
                    in_XMM2._0_2_ = CONCAT11(0,(byte)uVar112);
                    in_XMM2._2_13_ = auVar58;
                    in_XMM2[0xf] = 0;
                    psVar3 = psStack_60 + uVar75 + 1;
                    *psVar3 = (byte)uVar118 + in_XMM2._0_2_;
                    psVar3[1] = auVar55._0_2_ + auVar58._0_2_;
                    psVar3[2] = auVar54._0_2_ + auVar57._0_2_;
                    psVar3[3] = (short)Var45 + (short)Var49;
                    psVar3[4] = auVar41._8_2_ + auVar42._8_2_;
                    psVar3[5] = auVar29._10_2_ + auVar30._10_2_;
                    psVar3[6] = auVar17._12_2_ + auVar18._12_2_;
                    psVar3[7] = (auVar11._13_2_ >> 8) + (auVar12._13_2_ >> 8);
                    uVar118 = *(ulonglong *)((longlong)puVar82 + 1);
                    puVar82 = puVar82 + 1;
                    auVar13._8_6_ = 0;
                    auVar13._0_8_ = uVar118;
                    auVar13[0xe] = (char)(uVar118 >> 0x38);
                    auVar19._8_4_ = 0;
                    auVar19._0_8_ = uVar118;
                    auVar19[0xc] = (char)(uVar118 >> 0x30);
                    auVar19._13_2_ = auVar13._13_2_;
                    auVar25._8_4_ = 0;
                    auVar25._0_8_ = uVar118;
                    auVar25._12_3_ = auVar19._12_3_;
                    auVar31._8_2_ = 0;
                    auVar31._0_8_ = uVar118;
                    auVar31[10] = (char)(uVar118 >> 0x28);
                    auVar31._11_4_ = auVar25._11_4_;
                    auVar37._8_2_ = 0;
                    auVar37._0_8_ = uVar118;
                    auVar37._10_5_ = auVar31._10_5_;
                    auVar43[8] = (char)(uVar118 >> 0x20);
                    auVar43._0_8_ = uVar118;
                    auVar43._9_6_ = auVar37._9_6_;
                    auVar59._7_8_ = 0;
                    auVar59._0_7_ = auVar43._8_7_;
                    auVar70._1_8_ = SUB158(auVar59 << 0x40,7);
                    auVar70[0] = (char)(uVar118 >> 0x18);
                    auVar70._9_6_ = 0;
                    auVar71._1_10_ = SUB1510(auVar70 << 0x30,5);
                    auVar71[0] = (char)(uVar118 >> 0x10);
                    auVar71._11_4_ = 0;
                    auVar134._3_12_ = SUB1512(auVar71 << 0x20,3);
                    auVar134[2] = (char)(uVar118 >> 8);
                    auVar134[0] = (byte)uVar118;
                    auVar134[1] = 0;
                    auVar134[0xf] = 0;
                    auVar134 = psllw(auVar134,3);
                    *(undefined1 (*) [16])(psStack_60 + (longlong)(int)uVar83 + uVar75 + 1) =
                         auVar134;
                    uVar75 = uVar75 + 8;
                  } while (uVar75 < uVar88);
                }
                else {
                  puVar82 = (ulonglong *)(lVar125 + uVar75);
                  do {
                    uVar118 = *puVar82;
                    uVar112 = *(ulonglong *)((longlong)puVar82 + 2);
                    auVar8._8_6_ = 0;
                    auVar8._0_8_ = uVar118;
                    auVar8[0xe] = (char)(uVar118 >> 0x38);
                    auVar14._8_4_ = 0;
                    auVar14._0_8_ = uVar118;
                    auVar14[0xc] = (char)(uVar118 >> 0x30);
                    auVar14._13_2_ = auVar8._13_2_;
                    auVar20._8_4_ = 0;
                    auVar20._0_8_ = uVar118;
                    auVar20._12_3_ = auVar14._12_3_;
                    auVar26._8_2_ = 0;
                    auVar26._0_8_ = uVar118;
                    auVar26[10] = (char)(uVar118 >> 0x28);
                    auVar26._11_4_ = auVar20._11_4_;
                    auVar32._8_2_ = 0;
                    auVar32._0_8_ = uVar118;
                    auVar32._10_5_ = auVar26._10_5_;
                    auVar38[8] = (char)(uVar118 >> 0x20);
                    auVar38._0_8_ = uVar118;
                    auVar38._9_6_ = auVar32._9_6_;
                    auVar44._7_8_ = 0;
                    auVar44._0_7_ = auVar38._8_7_;
                    Var45 = CONCAT81(SUB158(auVar44 << 0x40,7),(char)(uVar118 >> 0x18));
                    auVar60._9_6_ = 0;
                    auVar60._0_9_ = Var45;
                    auVar46._1_10_ = SUB1510(auVar60 << 0x30,5);
                    auVar46[0] = (char)(uVar118 >> 0x10);
                    auVar61._11_4_ = 0;
                    auVar61._0_11_ = auVar46;
                    auVar47._1_12_ = SUB1512(auVar61 << 0x20,3);
                    auVar47[0] = (char)(uVar118 >> 8);
                    auVar9._8_6_ = 0;
                    auVar9._0_8_ = uVar112;
                    auVar9[0xe] = (char)(uVar112 >> 0x38);
                    auVar15._8_4_ = 0;
                    auVar15._0_8_ = uVar112;
                    auVar15[0xc] = (char)(uVar112 >> 0x30);
                    auVar15._13_2_ = auVar9._13_2_;
                    auVar21._8_4_ = 0;
                    auVar21._0_8_ = uVar112;
                    auVar21._12_3_ = auVar15._12_3_;
                    auVar27._8_2_ = 0;
                    auVar27._0_8_ = uVar112;
                    auVar27[10] = (char)(uVar112 >> 0x28);
                    auVar27._11_4_ = auVar21._11_4_;
                    auVar33._8_2_ = 0;
                    auVar33._0_8_ = uVar112;
                    auVar33._10_5_ = auVar27._10_5_;
                    auVar39[8] = (char)(uVar112 >> 0x20);
                    auVar39._0_8_ = uVar112;
                    auVar39._9_6_ = auVar33._9_6_;
                    auVar48._7_8_ = 0;
                    auVar48._0_7_ = auVar39._8_7_;
                    Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),(char)(uVar112 >> 0x18));
                    auVar62._9_6_ = 0;
                    auVar62._0_9_ = Var49;
                    auVar50._1_10_ = SUB1510(auVar62 << 0x30,5);
                    auVar50[0] = (char)(uVar112 >> 0x10);
                    auVar63._11_4_ = 0;
                    auVar63._0_11_ = auVar50;
                    auVar51._1_12_ = SUB1512(auVar63 << 0x20,3);
                    auVar51[0] = (char)(uVar112 >> 8);
                    in_XMM2._0_2_ = CONCAT11(0,(byte)uVar112);
                    in_XMM2._2_13_ = auVar51;
                    in_XMM2[0xf] = 0;
                    psVar3 = psStack_60 + uVar75 + 1;
                    *psVar3 = (byte)uVar118 + in_XMM2._0_2_;
                    psVar3[1] = auVar47._0_2_ + auVar51._0_2_;
                    psVar3[2] = auVar46._0_2_ + auVar50._0_2_;
                    psVar3[3] = (short)Var45 + (short)Var49;
                    psVar3[4] = auVar38._8_2_ + auVar39._8_2_;
                    psVar3[5] = auVar26._10_2_ + auVar27._10_2_;
                    psVar3[6] = auVar14._12_2_ + auVar15._12_2_;
                    psVar3[7] = (auVar8._13_2_ >> 8) + (auVar9._13_2_ >> 8);
                    uVar118 = *(ulonglong *)((longlong)puVar82 + 1);
                    puVar82 = puVar82 + 1;
                    auVar10._8_6_ = 0;
                    auVar10._0_8_ = uVar118;
                    auVar10[0xe] = (char)(uVar118 >> 0x38);
                    auVar16._8_4_ = 0;
                    auVar16._0_8_ = uVar118;
                    auVar16[0xc] = (char)(uVar118 >> 0x30);
                    auVar16._13_2_ = auVar10._13_2_;
                    auVar22._8_4_ = 0;
                    auVar22._0_8_ = uVar118;
                    auVar22._12_3_ = auVar16._12_3_;
                    auVar28._8_2_ = 0;
                    auVar28._0_8_ = uVar118;
                    auVar28[10] = (char)(uVar118 >> 0x28);
                    auVar28._11_4_ = auVar22._11_4_;
                    auVar34._8_2_ = 0;
                    auVar34._0_8_ = uVar118;
                    auVar34._10_5_ = auVar28._10_5_;
                    auVar40[8] = (char)(uVar118 >> 0x20);
                    auVar40._0_8_ = uVar118;
                    auVar40._9_6_ = auVar34._9_6_;
                    auVar52._7_8_ = 0;
                    auVar52._0_7_ = auVar40._8_7_;
                    auVar64._1_8_ = SUB158(auVar52 << 0x40,7);
                    auVar64[0] = (char)(uVar118 >> 0x18);
                    auVar64._9_6_ = 0;
                    auVar65._1_10_ = SUB1510(auVar64 << 0x30,5);
                    auVar65[0] = (char)(uVar118 >> 0x10);
                    auVar65._11_4_ = 0;
                    auVar133._3_12_ = SUB1512(auVar65 << 0x20,3);
                    auVar133[2] = (char)(uVar118 >> 8);
                    auVar133[0] = (byte)uVar118;
                    auVar133[1] = 0;
                    auVar133[0xf] = 0;
                    auVar134 = psllw(auVar133,3);
                    *(undefined1 (*) [16])(psStack_60 + (longlong)(int)uVar83 + uVar75 + 1) =
                         auVar134;
                    uVar75 = uVar75 + 8;
                  } while (uVar75 < uVar88);
                }
              }
              for (; uVar88 < uVar104; uVar88 = uVar88 + 1) {
                bVar7 = *(byte *)(uVar88 + 1 + lVar125);
                psStack_60[uVar88 + 1] =
                     (ushort)*(byte *)(uVar88 + lVar125) + (ushort)*(byte *)(uVar88 + 2 + lVar125);
                psStack_60[(longlong)(int)uVar83 + uVar88 + 1] = (ushort)bVar7 << 3;
              }
              goto LAB_140a72843;
            }
          }
          iVar101 = 1;
          uVar75 = 0;
          if (uVar1 >> 1 != 0) {
            do {
              psStack_60[uVar75 * 2 + 1] =
                   (ushort)*(byte *)(lVar125 + uVar75 * 2) +
                   (ushort)*(byte *)(lVar125 + 2 + uVar75 * 2);
              psStack_60[(longlong)(int)uVar83 + uVar75 * 2 + 1] =
                   (ushort)*(byte *)(lVar125 + 1 + uVar75 * 2) << 3;
              psStack_60[uVar75 * 2 + 2] =
                   (ushort)*(byte *)(lVar125 + 1 + uVar75 * 2) +
                   (ushort)*(byte *)(lVar125 + 3 + uVar75 * 2);
              psStack_60[(longlong)(int)uVar83 + uVar75 * 2 + 2] =
                   (ushort)*(byte *)(lVar125 + 2 + uVar75 * 2) << 3;
              uVar75 = uVar75 + 1;
            } while (uVar75 < uVar1 >> 1);
            iVar101 = (int)uVar75 * 2 + 1;
          }
          if (iVar101 - 1U < uVar1) {
            lVar87 = (longlong)iVar101;
            lVar81 = param_1 + lVar87;
            psStack_60[lVar87] =
                 (ushort)*(byte *)(lVar81 + -1 + lVar111) + (ushort)*(byte *)(lVar81 + 1 + lVar111);
            psStack_60[(int)uVar83 + lVar87] = (ushort)*(byte *)(lVar81 + lVar111) << 3;
          }
        }
LAB_140a72843:
        if ((int)(uint)param_6 < 2) goto LAB_140a728a7;
        uVar76 = uVar76 + 1;
        psStack_60[(longlong)(int)(uint)param_6 + -1] =
             (ushort)param_3[uVar93] + (ushort)param_3[uVar93 + 2];
        psStack_68[(longlong)(int)(uint)param_6 + -1] = (ushort)param_3[uVar93 + 1] << 3;
        lStack_80 = lStack_80 + lVar95;
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar76) {
          return 0;
        }
        psStack_60 = *(short **)(param_2 + uVar76 * 8);
        psStack_68 = psStack_60 + (int)uVar83;
      } while( true );
    }
  }
  else {
    lVar119 = 0;
    switch(param_7 & 0xf) {
    case 1:
      lVar119 = 1;
      break;
    case 2:
      lVar119 = 2;
      break;
    case 3:
      lVar119 = 3;
      break;
    case 4:
      lVar119 = 4;
    }
    (*(code *)(&PTR_FUN_14308ef88)[lVar119])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar95 - (int)(uint)param_6,(longlong)(int)(uVar83 * 2),
               param_8,param_7);
  }
  return 0;
LAB_140a728a7:
  uVar76 = uVar76 + 1;
  lStack_80 = lStack_80 + lVar95;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar76) {
    return 0;
  }
  goto LAB_140a71280;
}

