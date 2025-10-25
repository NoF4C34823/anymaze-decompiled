
undefined8
FUN_140a5b080(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
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
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  unkuint9 Var64;
  undefined1 auVar65 [11];
  undefined1 auVar66 [15];
  unkuint9 Var67;
  undefined1 auVar68 [11];
  undefined1 auVar69 [15];
  undefined1 auVar70 [11];
  undefined1 auVar71 [13];
  undefined1 auVar72 [15];
  undefined1 auVar73 [11];
  undefined1 auVar74 [13];
  undefined1 auVar75 [15];
  undefined1 auVar76 [11];
  undefined1 auVar77 [13];
  undefined1 auVar78 [15];
  undefined1 auVar79 [11];
  undefined1 auVar80 [13];
  undefined1 auVar81 [15];
  undefined1 auVar82 [11];
  undefined1 auVar83 [13];
  undefined1 auVar84 [15];
  undefined1 auVar85 [11];
  undefined1 auVar86 [13];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  uint uVar103;
  uint uVar104;
  longlong lVar105;
  ulonglong uVar107;
  ulonglong uVar108;
  uint uVar109;
  uint uVar110;
  int iVar111;
  uint uVar112;
  int iVar113;
  longlong lVar114;
  ulonglong uVar115;
  longlong lVar116;
  ulonglong uVar117;
  uint uVar118;
  ulonglong uVar119;
  uint uVar120;
  longlong lVar121;
  ulonglong uVar123;
  ulonglong uVar124;
  uint uVar125;
  uint uVar126;
  int iVar127;
  int iVar128;
  ulonglong uVar129;
  byte *pbVar130;
  ulonglong uVar131;
  longlong lVar132;
  ulonglong uVar133;
  uint uVar134;
  int iVar135;
  longlong lVar136;
  ulonglong uVar137;
  uint uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  int iVar142;
  uint uVar143;
  uint uVar144;
  ulonglong uVar145;
  int iVar146;
  longlong lVar147;
  ulonglong uVar148;
  int iVar149;
  uint uVar150;
  longlong lVar151;
  ulonglong uVar152;
  int iVar153;
  uint uVar154;
  byte *pbVar155;
  longlong lVar157;
  undefined4 uVar158;
  undefined8 uVar159;
  ushort uVar160;
  undefined1 in_XMM2 [16];
  longlong lStack_70;
  ulonglong uVar106;
  ulonglong uVar122;
  ulonglong uVar156;
  
  lVar147 = 0;
  lVar132 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar118 = param_7 & 0xf;
      uVar119 = (ulonglong)param_3 & 0xf;
      lVar147 = (longlong)(int)param_5;
      uVar112 = param_7 & 0x40;
      pbVar155 = param_3 + lVar147;
      lVar114 = -lVar147;
      uVar139 = uVar119;
      if (uVar119 != 0) {
        uVar139 = 0x10 - uVar119;
      }
      iVar149 = -param_5 + 3;
      lVar105 = param_1 - lVar147;
      lVar151 = (longlong)(int)(uint)param_6;
      uVar125 = -param_5 + 2;
      lVar121 = lVar114 + 4;
      uVar103 = param_5 >> 1;
      uVar106 = (ulonglong)uVar103;
      uVar104 = 2;
      if ((uint)param_6 < 3) {
        uVar104 = (uint)param_6;
      }
      uVar120 = uVar125 >> 1;
      uVar122 = (ulonglong)uVar120;
      uVar133 = (ulonglong)pbVar155 & 0xf;
      uVar115 = 0xffffffffffffffff - (lVar114 + -1);
      lVar147 = lVar151 - lVar147;
      uVar107 = (ulonglong)(int)uVar104;
      lVar4 = lVar151 + param_1;
      iVar153 = uVar104 + 1;
      uVar145 = lVar114 + 2;
      uVar109 = param_7 & 0x80;
      uVar123 = lVar151 - 2;
      uVar110 = (param_5 + iVar153) - 1;
      uVar154 = uVar104 >> 1;
      uVar156 = (ulonglong)uVar154;
      iVar1 = param_5 - 1;
      uVar2 = (uint)param_6 - 2;
      uVar152 = (ulonglong)(1 < (int)(uint)param_6);
      iVar111 = ((int)(uint)param_6 < 2) - 1;
      uVar150 = (uint)param_6 - (1 < (int)(uint)param_6);
      if ((int)uVar133 != 0) {
        uVar133 = (ulonglong)(0x10 - (int)uVar133);
      }
      if (uVar119 != 0) {
        uVar119 = 0x10 - uVar119;
      }
      iVar11 = (int)uVar133;
      lVar114 = uVar139 + 0x10;
      iVar146 = uVar104 - (uVar104 - iVar11 & 0xf);
      lVar3 = uVar119 + 0x10;
      uVar138 = param_5 - (param_5 - (int)uVar139 & 0xf);
      uVar158 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
      uVar140 = (ulonglong)(int)uVar138;
      uVar159 = CONCAT44(uVar158,uVar158);
      iVar142 = (int)uVar145;
      uVar129 = (ulonglong)(int)((int)uVar115 - ((int)uVar115 - (int)uVar119 & 0xfU));
      uVar148 = (ulonglong)iVar146;
      uVar143 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar143 = uVar118;
      }
      lStack_70 = 0;
      uVar141 = 0;
LAB_140a5b540:
      if ((uint)param_6 == 1) {
        uVar126 = uVar143;
        if (uVar118 != 6) goto LAB_140a5b59a;
        goto LAB_140a5be2c;
      }
      do {
        uVar126 = uVar118;
        if (uVar118 == 6) {
LAB_140a5be2c:
          uVar126 = 0;
          uVar144 = 0;
          if (uVar112 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (int)param_5) && (lVar114 <= (int)param_5)) {
                uVar124 = 0;
                uVar108 = uVar139;
                if (uVar139 != 0) {
                  do {
                    param_3[uVar124] = param_8;
                    uVar124 = uVar124 + 1;
                  } while (uVar124 < uVar139);
                }
                do {
                  *(undefined8 *)(param_3 + uVar108) = uVar159;
                  *(undefined8 *)(param_3 + uVar108 + 8) = uVar159;
                  uVar108 = uVar108 + 0x10;
                  uVar126 = uVar138;
                } while (uVar108 < uVar140);
              }
              uVar124 = (ulonglong)(int)uVar126;
              uVar144 = uVar126;
              if (uVar124 < (ulonglong)(longlong)(int)param_5) {
                do {
                  param_3[uVar124] = param_8;
                  uVar124 = uVar124 + 1;
                } while (uVar124 < (ulonglong)(longlong)(int)param_5);
                uVar144 = (uint)uVar124;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (6 < (int)param_5) {
              lVar116 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70);
              if (((int)param_5 <= lVar116) || ((longlong)(int)param_5 <= -lVar116)) {
                if (((int)param_5 < 0x10) || ((int)param_5 < lVar114)) {
                  uVar124 = 0;
                }
                else {
                  uVar124 = 0;
                  lVar116 = lVar105 + lStack_70;
                  if (uVar139 != 0) {
                    do {
                      param_3[uVar124] = *(byte *)(uVar124 + lVar116);
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar139);
                  }
                  uVar108 = uVar139;
                  uVar124 = uVar140;
                  if ((lVar105 + uVar139 + lStack_70 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar108 + lVar116);
                      *(undefined1 (*) [16])(param_3 + uVar108) = in_XMM2;
                      uVar108 = uVar108 + 0x10;
                    } while (uVar108 < uVar140);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar108 + lVar116));
                      *(undefined1 (*) [16])(param_3 + uVar108) = in_XMM2;
                      uVar108 = uVar108 + 0x10;
                    } while (uVar108 < uVar140);
                  }
                }
                uVar144 = param_5;
                if (uVar124 < (ulonglong)(longlong)(int)param_5) {
                  do {
                    param_3[uVar124] = *(byte *)(uVar124 + lVar105 + lStack_70);
                    uVar124 = uVar124 + 1;
                  } while (uVar124 < (ulonglong)(longlong)(int)param_5);
                }
                goto LAB_140a5c12d;
              }
            }
            uVar134 = 1;
            uVar124 = 0;
            if (uVar103 != 0) {
              do {
                param_3[uVar124 * 2] = *(byte *)(lVar105 + lStack_70 + uVar124 * 2);
                param_3[uVar124 * 2 + 1] = *(byte *)(lVar105 + lStack_70 + 1 + uVar124 * 2);
                uVar124 = uVar124 + 1;
              } while (uVar124 < uVar106);
              uVar126 = (int)uVar124 * 2;
              uVar134 = uVar126 + 1;
            }
            uVar144 = uVar126;
            if (uVar134 - 1 < param_5) {
              param_3[(longlong)(int)uVar134 + -1] =
                   *(byte *)(lVar105 + (int)uVar134 + -1 + lStack_70);
              uVar144 = uVar134;
            }
          }
LAB_140a5c12d:
          lVar116 = (longlong)(int)uVar144;
          if ((int)(uint)param_6 < 1) {
            if (uVar109 != 0) goto LAB_140a5c519;
LAB_140a5c3f1:
            if ((int)uVar125 < 1) goto LAB_140a5c74c;
LAB_140a5c3ff:
            if ((longlong)uVar145 < 0x10) {
LAB_140a5f425:
              iVar127 = 0;
            }
            else {
              pbVar130 = param_3 + lVar116;
              uVar124 = (ulonglong)pbVar130 & 0xf;
              if (uVar124 != 0) {
                uVar124 = 0x10 - uVar124;
              }
              if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5f425;
              uVar108 = 0;
              iVar127 = iVar142 - (iVar142 - (int)uVar124 & 0xfU);
              if (uVar124 != 0) {
                do {
                  pbVar130[uVar108] = param_8;
                  uVar108 = uVar108 + 1;
                } while (uVar108 < uVar124);
              }
              do {
                *(undefined8 *)(pbVar130 + uVar124) = uVar159;
                *(undefined8 *)(pbVar130 + uVar124 + 8) = uVar159;
                uVar124 = uVar124 + 0x10;
              } while (uVar124 < (ulonglong)(longlong)iVar127);
              uVar144 = (int)lVar116 + iVar127;
            }
            uVar124 = (ulonglong)iVar127;
            if (uVar124 < uVar145) {
              do {
                param_3[uVar124 + lVar116] = param_8;
                uVar124 = uVar124 + 1;
              } while (uVar124 < uVar145);
              uVar144 = (int)uVar124 + (int)lVar116;
            }
LAB_140a5c73a:
            if ((int)(uint)param_6 < 3) {
LAB_140a5c74c:
              uVar124 = (longlong)(int)param_5;
              goto LAB_140a5c760;
            }
          }
          else {
            if (uVar104 < 7) {
LAB_140a5c2e0:
              iVar127 = 1;
              uVar124 = 0;
              uVar126 = uVar144;
              if (uVar154 != 0) {
                do {
                  param_3[uVar124 * 2 + lVar116] = *(byte *)(param_1 + lStack_70 + uVar124 * 2);
                  param_3[uVar124 * 2 + lVar116 + 1] =
                       *(byte *)(param_1 + lStack_70 + 1 + uVar124 * 2);
                  uVar124 = uVar124 + 1;
                } while (uVar124 < uVar156);
                iVar127 = (int)uVar124 * 2;
                uVar126 = uVar144 + iVar127;
                iVar127 = iVar127 + 1;
              }
              if (iVar127 - 1U < uVar104) {
                param_3[(longlong)iVar127 + -1 + lVar116] =
                     *(byte *)(param_1 + iVar127 + -1 + lStack_70);
                uVar126 = uVar144 + iVar127;
              }
            }
            else {
              pbVar130 = param_3 + lVar116;
              lVar136 = param_1 + lStack_70;
              if (((longlong)pbVar130 - lVar136 < (longlong)(ulonglong)uVar104) &&
                 (-((longlong)pbVar130 - lVar136) < (longlong)(ulonglong)uVar104))
              goto LAB_140a5c2e0;
              if (uVar104 < 0x10) {
LAB_140a5f41d:
                uVar108 = 0;
              }
              else {
                uVar124 = (ulonglong)pbVar130 & 0xf;
                if ((int)uVar124 != 0) {
                  uVar124 = (ulonglong)(0x10 - (int)uVar124);
                }
                iVar127 = (int)uVar124;
                if (uVar104 < iVar127 + 0x10U) goto LAB_140a5f41d;
                uVar108 = 0;
                iVar113 = uVar104 - (uVar104 - iVar127 & 0xf);
                if (iVar127 != 0) {
                  do {
                    pbVar130[uVar108] = *(byte *)(uVar108 + lVar136);
                    uVar108 = uVar108 + 1;
                  } while (uVar108 < uVar124);
                }
                if ((lVar136 + uVar124 & 0xf) == 0) {
                  uVar108 = (ulonglong)iVar113;
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar136);
                    *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                    uVar124 = uVar124 + 0x10;
                  } while (uVar124 < uVar108);
                }
                else {
                  uVar108 = (ulonglong)iVar113;
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar136));
                    *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                    uVar124 = uVar124 + 0x10;
                  } while (uVar124 < uVar108);
                }
              }
              for (; uVar108 < uVar107; uVar108 = uVar108 + 1) {
                pbVar130[uVar108] = *(byte *)(uVar108 + lVar136);
              }
              uVar126 = (uVar144 + iVar153) - 1;
            }
            uVar144 = uVar126;
            lVar116 = (longlong)(int)uVar144;
            if ((int)(uint)param_6 < 3) {
              if (uVar109 == 0) goto LAB_140a5c3f1;
LAB_140a5c519:
              if (0 < (int)uVar125) {
LAB_140a5c527:
                iVar127 = (int)lVar116;
                if ((int)uVar125 < 7) {
LAB_140a5c6a2:
                  iVar113 = 1;
                  uVar124 = 0;
                  if (uVar120 != 0) {
                    do {
                      param_3[uVar124 * 2 + lVar116] = *(byte *)(lVar4 + lStack_70 + uVar124 * 2);
                      param_3[uVar124 * 2 + lVar116 + 1] =
                           *(byte *)(lVar4 + lStack_70 + 1 + uVar124 * 2);
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar122);
                    iVar113 = (int)uVar124 * 2;
                    uVar144 = iVar127 + iVar113;
                    iVar113 = iVar113 + 1;
                  }
                  if (iVar113 - 1U < uVar125) {
                    param_3[(longlong)iVar113 + -1 + lVar116] =
                         *(byte *)(lVar4 + iVar113 + -1 + lStack_70);
                    uVar144 = iVar127 + iVar113;
                  }
                }
                else {
                  pbVar130 = param_3 + lVar116;
                  lVar136 = lVar4 + lStack_70;
                  if (((longlong)pbVar130 - lVar136 < 2 - (longlong)(int)param_5) &&
                     (-((longlong)pbVar130 - lVar136) < 2 - (longlong)(int)param_5))
                  goto LAB_140a5c6a2;
                  if ((longlong)uVar145 < 0x10) {
LAB_140a5f42d:
                    uVar108 = 0;
                  }
                  else {
                    uVar124 = (ulonglong)pbVar130 & 0xf;
                    if (uVar124 != 0) {
                      uVar124 = 0x10 - uVar124;
                    }
                    if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5f42d;
                    uVar117 = 0;
                    uVar108 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                    if (uVar124 != 0) {
                      do {
                        pbVar130[uVar117] = *(byte *)(uVar117 + lVar136);
                        uVar117 = uVar117 + 1;
                      } while (uVar117 < uVar124);
                    }
                    if ((lVar136 + uVar124 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar136);
                        *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                        uVar124 = uVar124 + 0x10;
                      } while (uVar124 < uVar108);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar136));
                        *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                        uVar124 = uVar124 + 0x10;
                      } while (uVar124 < uVar108);
                    }
                  }
                  for (; uVar108 < uVar145; uVar108 = uVar108 + 1) {
                    pbVar130[uVar108] = *(byte *)(uVar108 + lVar136);
                  }
                  uVar144 = (iVar127 + iVar149) - 1;
                }
                goto LAB_140a5c73a;
              }
              goto LAB_140a5c74c;
            }
            uVar144 = uVar144 + 2;
            param_3[lVar116] = *(byte *)(lStack_70 + -2 + lVar4);
            param_3[lVar116 + 1] = *(byte *)(lStack_70 + -1 + lVar4);
            lVar116 = (longlong)(int)uVar144;
            if (uVar109 == 0) {
              if (0 < (int)uVar125) goto LAB_140a5c3ff;
            }
            else if (0 < (int)uVar125) goto LAB_140a5c527;
          }
          uVar124 = (int)uVar144 - lVar121;
        }
        else {
LAB_140a5b59a:
          uVar108 = (ulonglong)(int)param_5;
          uVar124 = uVar108;
          if (uVar126 == 1) {
            uVar126 = 0;
            lVar116 = lVar132 * uVar141;
            bVar10 = *(byte *)(param_1 + lVar116);
            if (uVar112 == 0) {
              uVar144 = uVar126;
              if (0 < (int)param_5) {
                if (((longlong)uVar108 < 0x10) || ((longlong)uVar108 < lVar114)) {
                  uVar124 = 0;
                  uVar144 = 0;
                }
                else {
                  uVar124 = 0;
                  if (uVar139 != 0) {
                    do {
                      param_3[uVar124] = bVar10;
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar139);
                  }
                  uVar158 = CONCAT22(CONCAT11(bVar10,bVar10),CONCAT11(bVar10,bVar10));
                  in_XMM2._0_8_ = CONCAT44(uVar158,uVar158);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  uVar117 = uVar139;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar117) = in_XMM2;
                    uVar117 = uVar117 + 0x10;
                    uVar124 = uVar140;
                    uVar144 = uVar138;
                  } while (uVar117 < uVar140);
                }
                if (uVar124 < uVar108) {
                  do {
                    param_3[uVar124] = bVar10;
                    uVar124 = uVar124 + 1;
                  } while (uVar124 < uVar108);
                  uVar144 = (uint)uVar124;
                }
              }
            }
            else {
              uVar144 = 0;
              if (0 < (int)param_5) {
                if (6 < (int)param_5) {
                  lVar136 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar116);
                  if (((int)param_5 <= lVar136) || ((longlong)(int)param_5 <= -lVar136)) {
                    if (((longlong)uVar108 < 0x10) || ((longlong)uVar108 < lVar114)) {
                      uVar124 = 0;
                    }
                    else {
                      uVar124 = 0;
                      lVar136 = lVar116 + lVar105;
                      if (uVar139 != 0) {
                        do {
                          param_3[uVar124] = *(byte *)(uVar124 + lVar136);
                          uVar124 = uVar124 + 1;
                        } while (uVar124 < uVar139);
                      }
                      uVar117 = uVar139;
                      uVar124 = uVar140;
                      if ((lVar116 + lVar105 + uVar139 & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(uVar117 + lVar136);
                          *(undefined1 (*) [16])(param_3 + uVar117) = in_XMM2;
                          uVar117 = uVar117 + 0x10;
                        } while (uVar117 < uVar140);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar117 + lVar136));
                          *(undefined1 (*) [16])(param_3 + uVar117) = in_XMM2;
                          uVar117 = uVar117 + 0x10;
                        } while (uVar117 < uVar140);
                      }
                    }
                    uVar144 = param_5;
                    if (uVar124 < uVar108) {
                      do {
                        param_3[uVar124] = *(byte *)(uVar124 + lVar116 + lVar105);
                        uVar124 = uVar124 + 1;
                      } while (uVar124 < uVar108);
                    }
                    goto LAB_140a5ee8c;
                  }
                }
                uVar134 = 1;
                uVar124 = 0;
                if (uVar103 != 0) {
                  do {
                    param_3[uVar124 * 2] = *(byte *)(lVar116 + lVar105 + uVar124 * 2);
                    param_3[uVar124 * 2 + 1] = *(byte *)(lVar116 + lVar105 + 1 + uVar124 * 2);
                    uVar124 = uVar124 + 1;
                  } while (uVar124 < uVar106);
                  uVar126 = (int)uVar124 * 2;
                  uVar134 = uVar126 + 1;
                }
                uVar144 = uVar126;
                if (uVar134 - 1 < param_5) {
                  param_3[(longlong)(int)uVar134 + -1] =
                       *(byte *)((longlong)(int)uVar134 + -1 + lVar116 + lVar105);
                  uVar144 = uVar134;
                }
              }
            }
LAB_140a5ee8c:
            lVar136 = (longlong)(int)uVar144;
            if (0 < (int)(uint)param_6) {
              if (uVar104 < 7) {
LAB_140a5f003:
                iVar127 = 1;
                uVar124 = 0;
                uVar126 = uVar144;
                if (uVar154 != 0) {
                  do {
                    param_3[uVar124 * 2 + lVar136] = *(byte *)(param_1 + lVar116 + uVar124 * 2);
                    param_3[uVar124 * 2 + lVar136 + 1] =
                         *(byte *)(param_1 + lVar116 + 1 + uVar124 * 2);
                    uVar124 = uVar124 + 1;
                  } while (uVar124 < uVar156);
                  iVar127 = (int)uVar124 * 2;
                  uVar126 = uVar144 + iVar127;
                  iVar127 = iVar127 + 1;
                }
                if (iVar127 - 1U < uVar104) {
                  param_3[(longlong)iVar127 + -1 + lVar136] =
                       *(byte *)((longlong)iVar127 + -1 + param_1 + lVar116);
                  uVar126 = uVar144 + iVar127;
                }
              }
              else {
                pbVar130 = param_3 + lVar136;
                lVar157 = param_1 + lVar116;
                if (((longlong)pbVar130 - lVar157 < (longlong)(ulonglong)uVar104) &&
                   (-((longlong)pbVar130 - lVar157) < (longlong)(ulonglong)uVar104))
                goto LAB_140a5f003;
                if (uVar104 < 0x10) {
LAB_140a5f3f9:
                  uVar117 = 0;
                }
                else {
                  uVar124 = (ulonglong)pbVar130 & 0xf;
                  if ((int)uVar124 != 0) {
                    uVar124 = (ulonglong)(0x10 - (int)uVar124);
                  }
                  iVar127 = (int)uVar124;
                  if (uVar104 < iVar127 + 0x10U) goto LAB_140a5f3f9;
                  uVar117 = 0;
                  iVar113 = uVar104 - (uVar104 - iVar127 & 0xf);
                  if (iVar127 != 0) {
                    do {
                      pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar124);
                  }
                  if ((lVar157 + uVar124 & 0xf) == 0) {
                    uVar117 = (ulonglong)iVar113;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                      *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                      uVar124 = uVar124 + 0x10;
                    } while (uVar124 < uVar117);
                  }
                  else {
                    uVar117 = (ulonglong)iVar113;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                      *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                      uVar124 = uVar124 + 0x10;
                    } while (uVar124 < uVar117);
                  }
                }
                for (; uVar117 < uVar107; uVar117 = uVar117 + 1) {
                  pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                }
                uVar126 = (uVar144 + iVar153) - 1;
              }
              uVar144 = uVar126;
              lVar136 = (longlong)(int)uVar144;
              if (2 < (int)(uint)param_6) {
                uVar144 = uVar144 + 2;
                param_3[lVar136] = *(byte *)(lVar4 + -2 + lVar116);
                param_3[lVar136 + 1] = *(byte *)(lVar4 + -1 + lVar116);
                lVar136 = (longlong)(int)uVar144;
              }
            }
            bVar10 = *(byte *)(lVar4 + -1 + lVar116);
            iVar127 = (int)lVar136;
            if (uVar109 == 0) {
              if (0 < (int)uVar125) {
                if ((longlong)uVar145 < 0x10) {
LAB_140a5f401:
                  iVar113 = 0;
                }
                else {
                  pbVar130 = param_3 + lVar136;
                  uVar124 = (ulonglong)pbVar130 & 0xf;
                  if (uVar124 != 0) {
                    uVar124 = 0x10 - uVar124;
                  }
                  if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5f401;
                  uVar117 = 0;
                  iVar113 = iVar142 - (iVar142 - (int)uVar124 & 0xfU);
                  if (uVar124 != 0) {
                    do {
                      pbVar130[uVar117] = bVar10;
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar124);
                  }
                  uVar158 = CONCAT22(CONCAT11(bVar10,bVar10),CONCAT11(bVar10,bVar10));
                  in_XMM2._0_8_ = CONCAT44(uVar158,uVar158);
                  in_XMM2._8_8_ = in_XMM2._0_8_;
                  do {
                    *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                    uVar124 = uVar124 + 0x10;
                  } while (uVar124 < (ulonglong)(longlong)iVar113);
                  uVar144 = iVar127 + iVar113;
                }
                uVar124 = (ulonglong)iVar113;
                if (uVar145 <= uVar124) goto LAB_140a5f3d4;
                do {
                  param_3[uVar124 + lVar136] = bVar10;
                  uVar124 = uVar124 + 1;
                } while (uVar124 < uVar145);
                lVar136 = (longlong)((int)uVar124 + iVar127);
              }
            }
            else {
              if ((int)uVar125 < 1) goto LAB_140a5f3d7;
              if (6 < (int)uVar125) {
                pbVar130 = param_3 + lVar136;
                lVar157 = lVar116 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar157) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar157))) {
                  if ((longlong)uVar145 < 0x10) {
LAB_140a5f408:
                    uVar117 = 0;
                  }
                  else {
                    uVar124 = (ulonglong)pbVar130 & 0xf;
                    if (uVar124 != 0) {
                      uVar124 = 0x10 - uVar124;
                    }
                    if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5f408;
                    uVar137 = 0;
                    uVar117 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                    if (uVar124 != 0) {
                      do {
                        pbVar130[uVar137] = *(byte *)(uVar137 + lVar157);
                        uVar137 = uVar137 + 1;
                      } while (uVar137 < uVar124);
                    }
                    if ((lVar157 + uVar124 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                        *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                        uVar124 = uVar124 + 0x10;
                      } while (uVar124 < uVar117);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                        *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                        uVar124 = uVar124 + 0x10;
                      } while (uVar124 < uVar117);
                    }
                  }
                  for (; uVar117 < uVar145; uVar117 = uVar117 + 1) {
                    pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                  }
                  lVar136 = (longlong)(iVar127 + iVar149 + -1);
                  goto LAB_140a5f3d7;
                }
              }
              iVar113 = 1;
              uVar124 = 0;
              if (uVar120 != 0) {
                do {
                  param_3[uVar124 * 2 + lVar136] = *(byte *)(lVar116 + lVar4 + uVar124 * 2);
                  param_3[uVar124 * 2 + lVar136 + 1] = *(byte *)(lVar116 + lVar4 + 1 + uVar124 * 2);
                  uVar124 = uVar124 + 1;
                } while (uVar124 < uVar122);
                iVar113 = (int)uVar124 * 2;
                uVar144 = iVar127 + iVar113;
                iVar113 = iVar113 + 1;
              }
              if (iVar113 - 1U < uVar125) {
                param_3[(longlong)iVar113 + -1 + lVar136] =
                     *(byte *)((longlong)iVar113 + -1 + lVar116 + lVar4);
                lVar136 = (longlong)(iVar113 + iVar127);
                goto LAB_140a5f3d7;
              }
LAB_140a5f3d4:
              lVar136 = (longlong)(int)uVar144;
            }
LAB_140a5f3d7:
            uVar124 = lVar136 - lVar121;
            if ((int)(uint)param_6 < 3) {
              uVar124 = uVar108;
            }
          }
          else if (uVar126 == 2) {
            uVar117 = uVar108;
            if (0 < (int)(uint)param_6) {
              if (uVar104 < 7) {
LAB_140a5d9fe:
                iVar127 = 1;
                uVar117 = 0;
                uVar126 = param_5;
                if (uVar154 != 0) {
                  lVar116 = lVar132 * uVar141 + param_1;
                  do {
                    pbVar155[uVar117 * 2] = *(byte *)(lVar116 + uVar117 * 2);
                    pbVar155[uVar117 * 2 + 1] = *(byte *)(lVar116 + 1 + uVar117 * 2);
                    uVar117 = uVar117 + 1;
                  } while (uVar117 < uVar156);
                  iVar127 = (int)uVar117 * 2;
                  uVar126 = param_5 + iVar127;
                  iVar127 = iVar127 + 1;
                }
                if (iVar127 - 1U < uVar104) {
                  pbVar155[(longlong)iVar127 + -1] =
                       *(byte *)(param_1 + iVar127 + -1 + lVar132 * uVar141);
                  uVar126 = param_5 + iVar127;
                }
              }
              else {
                lVar116 = lVar132 * uVar141 + param_1;
                if (((longlong)pbVar155 - lVar116 < (longlong)(ulonglong)uVar104) &&
                   (-((longlong)pbVar155 - lVar116) < (longlong)(ulonglong)uVar104))
                goto LAB_140a5d9fe;
                if ((uVar104 < 0x10) || (uVar104 < iVar11 + 0x10U)) {
                  iVar127 = 0;
                }
                else {
                  uVar117 = 0;
                  if (iVar11 != 0) {
                    do {
                      pbVar155[uVar117] = *(byte *)(uVar117 + lVar116);
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar133);
                  }
                  uVar117 = uVar133;
                  iVar127 = iVar146;
                  if ((lVar116 + uVar133 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar117 + lVar116);
                      *(undefined1 (*) [16])(pbVar155 + uVar117) = in_XMM2;
                      uVar117 = uVar117 + 0x10;
                    } while (uVar117 < uVar148);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar117 + lVar116));
                      *(undefined1 (*) [16])(pbVar155 + uVar117) = in_XMM2;
                      uVar117 = uVar117 + 0x10;
                    } while (uVar117 < uVar148);
                  }
                }
                for (uVar117 = (ulonglong)iVar127; uVar126 = uVar110, uVar117 < uVar107;
                    uVar117 = uVar117 + 1) {
                  pbVar155[uVar117] = *(byte *)(uVar117 + lVar116);
                }
              }
              uVar117 = (ulonglong)(int)uVar126;
              if (2 < (int)(uint)param_6) {
                lVar116 = lVar132 * uVar141;
                if (uVar112 == 0) {
                  if (-1 < iVar1) {
                    if (6 < (int)param_5) {
                      lVar136 = (longlong)(int)param_5;
                      pbVar130 = param_3 + ((uVar108 - 1) - (lVar116 + -1 + lVar4));
                      if ((lVar136 < (longlong)pbVar130) ||
                         ((byte *)-lVar136 != pbVar130 && lVar136 <= -(longlong)pbVar130)) {
                        if (((longlong)uVar115 < 0x10) || ((longlong)uVar115 < lVar3)) {
                          uVar124 = 0;
                        }
                        else {
                          uVar124 = 0;
                          lVar136 = (lVar116 + lVar4) - uVar108;
                          if (uVar119 != 0) {
                            do {
                              param_3[uVar124] = *(byte *)(uVar124 + lVar136);
                              uVar124 = uVar124 + 1;
                            } while (uVar124 < uVar119);
                          }
                          uVar137 = uVar119;
                          uVar124 = uVar129;
                          if ((lVar136 + uVar119 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar137 + lVar136);
                              *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                              uVar137 = uVar137 + 0x10;
                            } while (uVar137 < uVar129);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar137 + lVar136));
                              *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                              uVar137 = uVar137 + 0x10;
                            } while (uVar137 < uVar129);
                          }
                        }
                        if (uVar124 < uVar115) {
                          do {
                            param_3[uVar124] = *(byte *)(uVar124 + ((lVar116 + lVar4) - uVar108));
                            uVar124 = uVar124 + 1;
                          } while (uVar124 < uVar115);
                        }
                        goto LAB_140a5df54;
                      }
                    }
                    uVar124 = 0;
                    iVar127 = 1;
                    lVar136 = 0;
                    if (uVar103 != 0) {
                      do {
                        uVar124 = uVar124 + 1;
                        pbVar155[lVar136 + -1] = *(byte *)(lVar136 + -1 + lVar116 + lVar4);
                        pbVar155[lVar136 + -2] = *(byte *)(lVar136 + -2 + lVar116 + lVar4);
                        lVar136 = lVar136 + -2;
                      } while (uVar124 < uVar106);
                      iVar127 = (int)uVar124 * 2 + 1;
                    }
                    if (iVar127 - 1U < param_5) {
                      pbVar155[-(longlong)iVar127] =
                           *(byte *)((lVar116 + lVar4) - (longlong)iVar127);
                    }
                  }
                }
                else if (-1 < iVar1) {
                  if (6 < (int)param_5) {
                    lVar157 = (longlong)(int)param_5;
                    pbVar130 = param_3 + ((uVar108 - 1) - (param_1 + -1 + lVar116));
                    lVar136 = param_1 + lVar116;
                    if ((lVar157 < (longlong)pbVar130) ||
                       ((byte *)-lVar157 != pbVar130 && lVar157 <= -(longlong)pbVar130)) {
                      if (((longlong)uVar115 < 0x10) || ((longlong)uVar115 < lVar3)) {
                        uVar124 = 0;
                      }
                      else {
                        uVar124 = 0;
                        lVar157 = lVar136 - uVar108;
                        if (uVar119 != 0) {
                          do {
                            param_3[uVar124] = *(byte *)(uVar124 + lVar157);
                            uVar124 = uVar124 + 1;
                          } while (uVar124 < uVar119);
                        }
                        uVar137 = uVar119;
                        uVar124 = uVar129;
                        if (((lVar136 - uVar108) + uVar119 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar137 + lVar157);
                            *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                            uVar137 = uVar137 + 0x10;
                          } while (uVar137 < uVar129);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar137 + lVar157));
                            *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                            uVar137 = uVar137 + 0x10;
                          } while (uVar137 < uVar129);
                        }
                      }
                      if (uVar124 < uVar115) {
                        do {
                          param_3[uVar124] = *(byte *)(uVar124 + (lVar136 - uVar108));
                          uVar124 = uVar124 + 1;
                        } while (uVar124 < uVar115);
                      }
                      goto LAB_140a5df54;
                    }
                  }
                  uVar124 = 0;
                  iVar127 = 1;
                  lVar136 = 0;
                  if (uVar103 != 0) {
                    do {
                      uVar124 = uVar124 + 1;
                      pbVar155[lVar136 + -1] = *(byte *)(lVar136 + -1 + param_1 + lVar116);
                      pbVar155[lVar136 + -2] = *(byte *)(lVar136 + -2 + param_1 + lVar116);
                      lVar136 = lVar136 + -2;
                    } while (uVar124 < uVar106);
                    iVar127 = (int)uVar124 * 2 + 1;
                  }
                  if (iVar127 - 1U < param_5) {
                    pbVar155[-(longlong)iVar127] =
                         *(byte *)((param_1 + lVar116) - (longlong)iVar127);
                  }
                }
LAB_140a5df54:
                iVar113 = uVar126 + 2;
                param_3[uVar117] = *(byte *)(lVar116 + lVar4 + -2);
                param_3[uVar117 + 1] = *(byte *)(lVar116 + lVar4 + -1);
                lVar136 = (longlong)iVar113;
                iVar127 = iVar113;
                if (uVar109 == 0) {
                  if (0 < (int)uVar125) {
                    if (6 < (int)uVar125) {
                      pbVar130 = param_3 + lVar136;
                      lVar157 = param_1 + lVar116;
                      if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar157) ||
                         (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar157))) {
                        if ((longlong)uVar145 < 0x10) {
LAB_140a5eb8f:
                          uVar108 = 0;
                        }
                        else {
                          uVar124 = (ulonglong)pbVar130 & 0xf;
                          if (uVar124 != 0) {
                            uVar124 = 0x10 - uVar124;
                          }
                          if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5eb8f;
                          uVar117 = 0;
                          uVar108 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                          if (uVar124 != 0) {
                            do {
                              pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                              uVar117 = uVar117 + 1;
                            } while (uVar117 < uVar124);
                          }
                          if ((lVar157 + uVar124 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                              *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                              uVar124 = uVar124 + 0x10;
                            } while (uVar124 < uVar108);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                              *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                              uVar124 = uVar124 + 0x10;
                            } while (uVar124 < uVar108);
                          }
                        }
                        for (; uVar108 < uVar145; uVar108 = uVar108 + 1) {
                          pbVar130[uVar108] = *(byte *)(uVar108 + lVar157);
                        }
                        lVar136 = (longlong)(iVar113 + iVar149 + -1);
                        goto LAB_140a5e335;
                      }
                    }
                    iVar128 = 1;
                    uVar124 = 0;
                    if (uVar120 != 0) {
                      do {
                        param_3[uVar124 * 2 + lVar136] = *(byte *)(param_1 + lVar116 + uVar124 * 2);
                        param_3[uVar124 * 2 + lVar136 + 1] =
                             *(byte *)(param_1 + lVar116 + 1 + uVar124 * 2);
                        uVar124 = uVar124 + 1;
                      } while (uVar124 < uVar122);
                      iVar128 = (int)uVar124 * 2;
                      iVar127 = iVar113 + iVar128;
                      iVar128 = iVar128 + 1;
                    }
                    if (uVar125 <= iVar128 - 1U) goto LAB_140a5e332;
                    param_3[(longlong)iVar128 + -1 + lVar136] =
                         *(byte *)((longlong)iVar128 + -1 + lVar116 + param_1);
                    lVar136 = (longlong)(iVar128 + iVar113);
                  }
                }
                else {
                  if ((int)uVar125 < 1) goto LAB_140a5e335;
                  if (6 < (int)uVar125) {
                    pbVar130 = param_3 + lVar136;
                    lVar157 = lVar116 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar157) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar157))) {
                      if ((longlong)uVar145 < 0x10) {
LAB_140a5eb96:
                        uVar108 = 0;
                      }
                      else {
                        uVar124 = (ulonglong)pbVar130 & 0xf;
                        if (uVar124 != 0) {
                          uVar124 = 0x10 - uVar124;
                        }
                        if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5eb96;
                        uVar117 = 0;
                        uVar108 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                        if (uVar124 != 0) {
                          do {
                            pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                            uVar117 = uVar117 + 1;
                          } while (uVar117 < uVar124);
                        }
                        if ((lVar157 + uVar124 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                      }
                      for (; uVar108 < uVar145; uVar108 = uVar108 + 1) {
                        pbVar130[uVar108] = *(byte *)(uVar108 + lVar157);
                      }
                      lVar136 = (longlong)(iVar113 + iVar149 + -1);
                      goto LAB_140a5e335;
                    }
                  }
                  iVar128 = 1;
                  uVar124 = 0;
                  if (uVar120 != 0) {
                    do {
                      param_3[uVar124 * 2 + lVar136] = *(byte *)(lVar116 + lVar4 + uVar124 * 2);
                      param_3[uVar124 * 2 + lVar136 + 1] =
                           *(byte *)(lVar116 + lVar4 + 1 + uVar124 * 2);
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar122);
                    iVar128 = (int)uVar124 * 2;
                    iVar127 = iVar113 + iVar128;
                    iVar128 = iVar128 + 1;
                  }
                  if (iVar128 - 1U < uVar125) {
                    param_3[(longlong)iVar128 + -1 + lVar136] =
                         *(byte *)((longlong)iVar128 + -1 + lVar116 + lVar4);
                    lVar136 = (longlong)(iVar128 + iVar113);
                    goto LAB_140a5e335;
                  }
LAB_140a5e332:
                  lVar136 = (longlong)iVar127;
                }
LAB_140a5e335:
                uVar124 = lVar136 - lVar121;
                goto LAB_140a5c760;
              }
            }
            if (uVar112 == 0) {
              if (-1 < iVar1) {
                if (6 < (int)param_5) {
                  lVar116 = (longlong)(int)param_5;
                  pbVar130 = param_3 + ((uVar108 - 1) -
                                       (longlong)(pbVar155 + (longlong)(int)(uint)param_6 + -1));
                  if ((lVar116 < (longlong)pbVar130) ||
                     ((byte *)-lVar116 != pbVar130 && lVar116 <= -(longlong)pbVar130)) {
                    if (((longlong)uVar115 < 0x10) || ((longlong)uVar115 < lVar3)) {
                      uVar108 = 0;
                    }
                    else {
                      uVar108 = 0;
                      if (uVar119 != 0) {
                        do {
                          param_3[uVar108] = pbVar155[uVar108 + lVar147];
                          uVar108 = uVar108 + 1;
                        } while (uVar108 < uVar119);
                      }
                      uVar137 = uVar119;
                      uVar108 = uVar129;
                      if (((ulonglong)(pbVar155 + uVar119 + lVar147) & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(pbVar155 + uVar137 + lVar147);
                          *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                          uVar137 = uVar137 + 0x10;
                        } while (uVar137 < uVar129);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])
                                                   (pbVar155 + uVar137 + lVar147));
                          *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                          uVar137 = uVar137 + 0x10;
                        } while (uVar137 < uVar129);
                      }
                    }
                    for (; uVar108 < uVar115; uVar108 = uVar108 + 1) {
                      param_3[uVar108] = pbVar155[uVar108 + lVar147];
                    }
                    goto LAB_140a5e796;
                  }
                }
                uVar108 = 0;
                iVar127 = 1;
                lVar116 = 0;
                if (uVar103 != 0) {
                  do {
                    uVar108 = uVar108 + 1;
                    pbVar155[lVar116 + -1] = pbVar155[lVar116 + -1 + lVar151];
                    pbVar155[lVar116 + -2] = pbVar155[lVar116 + -2 + lVar151];
                    lVar116 = lVar116 + -2;
                  } while (uVar108 < uVar106);
                  iVar127 = (int)uVar108 * 2 + 1;
                }
                if (iVar127 - 1U < param_5) {
                  pbVar155[-(longlong)iVar127] = pbVar155[lVar151 - iVar127];
                }
              }
            }
            else if (-1 < iVar1) {
              if (6 < (int)param_5) {
                lVar136 = (longlong)(int)param_5;
                lVar116 = param_1 + lVar132 * uVar141;
                pbVar130 = param_3 + ((uVar108 - 1) - (param_1 + -1 + lVar132 * uVar141));
                if ((lVar136 < (longlong)pbVar130) ||
                   ((byte *)-lVar136 != pbVar130 && lVar136 <= -(longlong)pbVar130)) {
                  if (((longlong)uVar115 < 0x10) || ((longlong)uVar115 < lVar3)) {
                    uVar137 = 0;
                  }
                  else {
                    uVar137 = 0;
                    lVar136 = lVar116 - uVar108;
                    if (uVar119 != 0) {
                      do {
                        param_3[uVar137] = *(byte *)(uVar137 + lVar136);
                        uVar137 = uVar137 + 1;
                      } while (uVar137 < uVar119);
                    }
                    uVar131 = uVar119;
                    uVar137 = uVar129;
                    if (((lVar116 - uVar108) + uVar119 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar131 + lVar136);
                        *(undefined1 (*) [16])(param_3 + uVar131) = in_XMM2;
                        uVar131 = uVar131 + 0x10;
                      } while (uVar131 < uVar129);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar131 + lVar136));
                        *(undefined1 (*) [16])(param_3 + uVar131) = in_XMM2;
                        uVar131 = uVar131 + 0x10;
                      } while (uVar131 < uVar129);
                    }
                  }
                  if (uVar137 < uVar115) {
                    do {
                      param_3[uVar137] = *(byte *)(uVar137 + (lVar116 - uVar108));
                      uVar137 = uVar137 + 1;
                    } while (uVar137 < uVar115);
                  }
                  goto LAB_140a5e796;
                }
              }
              uVar108 = 0;
              iVar127 = 1;
              lVar116 = 0;
              if (uVar103 != 0) {
                lVar136 = lVar132 * uVar141 + param_1;
                do {
                  uVar108 = uVar108 + 1;
                  pbVar155[lVar116 + -1] = *(byte *)(lVar116 + -1 + lVar136);
                  pbVar155[lVar116 + -2] = *(byte *)(lVar116 + -2 + lVar136);
                  lVar116 = lVar116 + -2;
                } while (uVar108 < uVar106);
                iVar127 = (int)uVar108 * 2 + 1;
              }
              if (iVar127 - 1U < param_5) {
                pbVar155[-(longlong)iVar127] = *(byte *)((param_1 - iVar127) + lVar132 * uVar141);
              }
            }
LAB_140a5e796:
            if (uVar109 == 0) {
              if ((int)uVar125 < 1) goto LAB_140a5c760;
              if (6 < (int)uVar125) {
                pbVar130 = param_3 + uVar117;
                lVar116 = (longlong)pbVar130 - (longlong)(param_3 + (uVar117 - lVar151));
                if ((2 - (longlong)(int)param_5 <= lVar116) ||
                   (2 - (longlong)(int)param_5 <= -lVar116)) {
                  if ((longlong)uVar145 < 0x10) {
LAB_140a5ebab:
                    uVar137 = 0;
                  }
                  else {
                    uVar108 = (ulonglong)pbVar130 & 0xf;
                    if (uVar108 != 0) {
                      uVar108 = 0x10 - uVar108;
                    }
                    if ((longlong)uVar145 < (longlong)(uVar108 + 0x10)) goto LAB_140a5ebab;
                    uVar131 = 0;
                    uVar137 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar108 & 0xfU));
                    lVar116 = uVar117 - lVar151;
                    if (uVar108 != 0) {
                      do {
                        pbVar130[uVar131] = param_3[uVar131 + lVar116];
                        uVar131 = uVar131 + 1;
                      } while (uVar131 < uVar108);
                    }
                    if (((ulonglong)(param_3 + (uVar117 - lVar151) + uVar108) & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(param_3 + uVar108 + lVar116);
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar137);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(param_3 + uVar108 + lVar116))
                        ;
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar137);
                    }
                  }
                  if (uVar137 < uVar145) {
                    do {
                      pbVar130[uVar137] = param_3[uVar137 + (uVar117 - lVar151)];
                      uVar137 = uVar137 + 1;
                    } while (uVar137 < uVar145);
                  }
                  goto LAB_140a5c760;
                }
              }
              iVar127 = 1;
              uVar108 = 0;
              if (uVar120 != 0) {
                do {
                  param_3[uVar108 * 2 + uVar117] = param_3[uVar108 * 2 + (uVar117 - lVar151)];
                  param_3[uVar108 * 2 + uVar117 + 1] =
                       param_3[uVar108 * 2 + (uVar117 - lVar151) + 1];
                  uVar108 = uVar108 + 1;
                } while (uVar108 < uVar122);
                iVar127 = (int)uVar108 * 2 + 1;
              }
              if (iVar127 - 1U < uVar125) {
                param_3[(longlong)iVar127 + -1 + uVar117] =
                     param_3[(longlong)iVar127 + -1 + (uVar117 - lVar151)];
              }
            }
            else {
              if ((int)uVar125 < 1) goto LAB_140a5c760;
              if (6 < (int)uVar125) {
                pbVar130 = param_3 + uVar117;
                lVar116 = lVar132 * uVar141 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar116) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar116))) {
                  if ((longlong)uVar145 < 0x10) {
LAB_140a5ebb3:
                    uVar117 = 0;
                  }
                  else {
                    uVar108 = (ulonglong)pbVar130 & 0xf;
                    if (uVar108 != 0) {
                      uVar108 = 0x10 - uVar108;
                    }
                    if ((longlong)uVar145 < (longlong)(uVar108 + 0x10)) goto LAB_140a5ebb3;
                    uVar137 = 0;
                    uVar117 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar108 & 0xfU));
                    if (uVar108 != 0) {
                      do {
                        pbVar130[uVar137] = *(byte *)(uVar137 + lVar116);
                        uVar137 = uVar137 + 1;
                      } while (uVar137 < uVar108);
                    }
                    if ((lVar116 + uVar108 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar108 + lVar116);
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar117);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar108 + lVar116));
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar117);
                    }
                  }
                  for (; uVar117 < uVar145; uVar117 = uVar117 + 1) {
                    pbVar130[uVar117] = *(byte *)(uVar117 + lVar116);
                  }
                  goto LAB_140a5c760;
                }
              }
              iVar127 = 1;
              uVar108 = 0;
              if (uVar120 != 0) {
                lVar116 = lVar132 * uVar141 + lVar4;
                do {
                  param_3[uVar108 * 2 + uVar117] = *(byte *)(lVar116 + uVar108 * 2);
                  param_3[uVar108 * 2 + uVar117 + 1] = *(byte *)(lVar116 + 1 + uVar108 * 2);
                  uVar108 = uVar108 + 1;
                } while (uVar108 < uVar122);
                iVar127 = (int)uVar108 * 2 + 1;
              }
              if (iVar127 - 1U < uVar125) {
                param_3[(longlong)iVar127 + -1 + uVar117] =
                     *(byte *)(lVar4 + iVar127 + -1 + lVar132 * uVar141);
              }
            }
          }
          else if (uVar126 == 3) {
            uVar117 = uVar108;
            if (0 < (int)(uint)param_6) {
              if (uVar104 < 7) {
LAB_140a5cc7d:
                iVar127 = 1;
                uVar117 = 0;
                uVar126 = param_5;
                if (uVar154 != 0) {
                  lVar116 = lVar132 * uVar141 + param_1;
                  do {
                    pbVar155[uVar117 * 2] = *(byte *)(lVar116 + uVar117 * 2);
                    pbVar155[uVar117 * 2 + 1] = *(byte *)(lVar116 + 1 + uVar117 * 2);
                    uVar117 = uVar117 + 1;
                  } while (uVar117 < uVar156);
                  iVar127 = (int)uVar117 * 2;
                  uVar126 = param_5 + iVar127;
                  iVar127 = iVar127 + 1;
                }
                if (iVar127 - 1U < uVar104) {
                  pbVar155[(longlong)iVar127 + -1] =
                       *(byte *)(param_1 + iVar127 + -1 + lVar132 * uVar141);
                  uVar126 = param_5 + iVar127;
                }
              }
              else {
                lVar116 = lVar132 * uVar141 + param_1;
                if (((longlong)pbVar155 - lVar116 < (longlong)(ulonglong)uVar104) &&
                   (-((longlong)pbVar155 - lVar116) < (longlong)(ulonglong)uVar104))
                goto LAB_140a5cc7d;
                if ((uVar104 < 0x10) || (uVar104 < iVar11 + 0x10U)) {
                  uVar117 = 0;
                }
                else {
                  uVar117 = 0;
                  if (iVar11 != 0) {
                    do {
                      pbVar155[uVar117] = *(byte *)(uVar117 + lVar116);
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar133);
                  }
                  uVar137 = uVar133;
                  uVar117 = uVar148;
                  if ((lVar116 + uVar133 & 0xf) == 0) {
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar137 + lVar116);
                      *(undefined1 (*) [16])(pbVar155 + uVar137) = in_XMM2;
                      uVar137 = uVar137 + 0x10;
                    } while (uVar137 < uVar148);
                  }
                  else {
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar137 + lVar116));
                      *(undefined1 (*) [16])(pbVar155 + uVar137) = in_XMM2;
                      uVar137 = uVar137 + 0x10;
                    } while (uVar137 < uVar148);
                  }
                }
                for (; uVar126 = uVar110, uVar117 < uVar107; uVar117 = uVar117 + 1) {
                  pbVar155[uVar117] = *(byte *)(uVar117 + lVar116);
                }
              }
              uVar117 = (ulonglong)(int)uVar126;
              if (2 < (int)(uint)param_6) {
                if (uVar112 == 0) {
                  if (-1 < iVar1) {
                    uVar124 = 0;
                    iVar127 = 1;
                    lVar116 = 0;
                    if (uVar103 != 0) {
                      lVar136 = lVar132 * uVar141 + param_1 + uVar152;
                      do {
                        pbVar155[lVar116 + -1] = *(byte *)(lVar136 + uVar124 * 2);
                        lVar157 = uVar124 * 2;
                        uVar124 = uVar124 + 1;
                        pbVar155[lVar116 + -2] = *(byte *)(lVar136 + 1 + lVar157);
                        lVar116 = lVar116 + -2;
                      } while (uVar124 < uVar106);
                      iVar127 = (int)uVar124 * 2 + 1;
                    }
                    if (iVar127 - 1U < param_5) {
                      pbVar155[-(longlong)iVar127] =
                           *(byte *)((longlong)iVar127 + -1 + lVar132 * uVar141 + param_1 + uVar152)
                      ;
                    }
                  }
                }
                else {
                  lVar116 = lVar132 * uVar141;
                  if (-1 < iVar1) {
                    if (6 < (int)param_5) {
                      lVar157 = (longlong)(int)param_5;
                      pbVar130 = param_3 + ((uVar108 - 1) - (param_1 + -1 + lVar116));
                      lVar136 = param_1 + lVar116;
                      if ((lVar157 < (longlong)pbVar130) ||
                         ((byte *)-lVar157 != pbVar130 && lVar157 <= -(longlong)pbVar130)) {
                        if (((longlong)uVar115 < 0x10) || ((longlong)uVar115 < lVar3)) {
                          uVar124 = 0;
                        }
                        else {
                          uVar124 = 0;
                          lVar116 = lVar136 - uVar108;
                          if (uVar119 != 0) {
                            do {
                              param_3[uVar124] = *(byte *)(uVar124 + lVar116);
                              uVar124 = uVar124 + 1;
                            } while (uVar124 < uVar119);
                          }
                          uVar137 = uVar119;
                          uVar124 = uVar129;
                          if (((lVar136 - uVar108) + uVar119 & 0xf) == 0) {
                            do {
                              in_XMM2 = *(undefined1 (*) [16])(uVar137 + lVar116);
                              *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                              uVar137 = uVar137 + 0x10;
                            } while (uVar137 < uVar129);
                          }
                          else {
                            do {
                              in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar137 + lVar116));
                              *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                              uVar137 = uVar137 + 0x10;
                            } while (uVar137 < uVar129);
                          }
                        }
                        if (uVar124 < uVar115) {
                          do {
                            param_3[uVar124] = *(byte *)(uVar124 + (lVar136 - uVar108));
                            uVar124 = uVar124 + 1;
                          } while (uVar124 < uVar115);
                        }
                        goto LAB_140a5d039;
                      }
                    }
                    uVar124 = 0;
                    iVar127 = 1;
                    lVar136 = 0;
                    if (uVar103 != 0) {
                      do {
                        uVar124 = uVar124 + 1;
                        pbVar155[lVar136 + -1] = *(byte *)(lVar136 + -1 + param_1 + lVar116);
                        pbVar155[lVar136 + -2] = *(byte *)(lVar136 + -2 + param_1 + lVar116);
                        lVar136 = lVar136 + -2;
                      } while (uVar124 < uVar106);
                      iVar127 = (int)uVar124 * 2 + 1;
                    }
                    if (iVar127 - 1U < param_5) {
                      pbVar155[-(longlong)iVar127] =
                           *(byte *)((param_1 + lVar116) - (longlong)iVar127);
                    }
                  }
                }
LAB_140a5d039:
                lVar136 = lVar132 * uVar141;
                iVar113 = uVar126 + 2;
                param_3[uVar117] = *(byte *)(lVar4 + -2 + lVar136);
                param_3[uVar117 + 1] = *(byte *)(lVar4 + -1 + lVar136);
                lVar116 = (longlong)iVar113;
                iVar127 = iVar113;
                if (uVar109 == 0) {
                  if (0 < (int)uVar125) {
                    uVar124 = 0;
                    iVar128 = 1;
                    lVar157 = 0;
                    if (uVar120 != 0) {
                      lVar5 = lVar136 + (lVar4 - uVar152);
                      do {
                        param_3[uVar124 * 2 + lVar116] = *(byte *)(lVar157 + -1 + lVar5);
                        lVar6 = lVar157 + -2;
                        lVar157 = lVar157 + -2;
                        param_3[uVar124 * 2 + lVar116 + 1] = *(byte *)(lVar6 + lVar5);
                        uVar124 = uVar124 + 1;
                      } while (uVar124 < uVar122);
                      iVar128 = (int)uVar124 * 2;
                      iVar127 = iVar113 + iVar128;
                      iVar128 = iVar128 + 1;
                    }
                    if (uVar125 <= iVar128 - 1U) goto LAB_140a5d312;
                    param_3[(longlong)iVar128 + -1 + lVar116] =
                         *(byte *)((lVar136 + (lVar4 - uVar152)) - (longlong)iVar128);
                    lVar116 = (longlong)(iVar128 + iVar113);
                  }
                }
                else {
                  if ((int)uVar125 < 1) goto LAB_140a5d315;
                  if (6 < (int)uVar125) {
                    pbVar130 = param_3 + lVar116;
                    lVar157 = lVar136 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar157) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar157))) {
                      if ((longlong)uVar145 < 0x10) {
LAB_140a5d870:
                        uVar108 = 0;
                      }
                      else {
                        uVar124 = (ulonglong)pbVar130 & 0xf;
                        if (uVar124 != 0) {
                          uVar124 = 0x10 - uVar124;
                        }
                        if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5d870;
                        uVar117 = 0;
                        uVar108 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                        if (uVar124 != 0) {
                          do {
                            pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                            uVar117 = uVar117 + 1;
                          } while (uVar117 < uVar124);
                        }
                        if ((lVar157 + uVar124 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                      }
                      for (; uVar108 < uVar145; uVar108 = uVar108 + 1) {
                        pbVar130[uVar108] = *(byte *)(uVar108 + lVar157);
                      }
                      lVar116 = (longlong)(iVar113 + iVar149 + -1);
                      goto LAB_140a5d315;
                    }
                  }
                  iVar128 = 1;
                  uVar124 = 0;
                  if (uVar120 != 0) {
                    do {
                      param_3[uVar124 * 2 + lVar116] = *(byte *)(lVar136 + lVar4 + uVar124 * 2);
                      param_3[uVar124 * 2 + lVar116 + 1] =
                           *(byte *)(lVar136 + lVar4 + 1 + uVar124 * 2);
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar122);
                    iVar128 = (int)uVar124 * 2;
                    iVar127 = iVar113 + iVar128;
                    iVar128 = iVar128 + 1;
                  }
                  if (iVar128 - 1U < uVar125) {
                    param_3[(longlong)iVar128 + -1 + lVar116] =
                         *(byte *)((longlong)iVar128 + -1 + lVar136 + lVar4);
                    lVar116 = (longlong)(iVar128 + iVar113);
                  }
                  else {
LAB_140a5d312:
                    lVar116 = (longlong)iVar127;
                  }
                }
LAB_140a5d315:
                uVar124 = lVar116 - lVar121;
                goto LAB_140a5c760;
              }
            }
            if (uVar112 == 0) {
              iVar127 = iVar1;
              if (uVar109 == 0) {
joined_r0x000140a5d353:
                if (-1 < iVar127) {
                  uVar126 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar116 = (longlong)iVar127;
                    do {
                      if (iVar127 < 0) break;
                      lVar136 = (longlong)(int)uVar126;
                      iVar127 = iVar127 + -1;
                      uVar126 = uVar126 + 1;
                      param_3[lVar116 - lVar136] = param_3[lVar136 + lVar116 + uVar152 + 1];
                    } while (uVar126 < uVar150);
                  }
                  goto joined_r0x000140a5d353;
                }
                uVar108 = 0;
                iVar127 = (((uint)param_6 + 2 + iVar111) - uVar125) + -1;
                iVar113 = iVar111;
                iVar128 = iVar111;
                if ((int)param_5 < 2) {
                  do {
                    iVar135 = iVar127 + iVar113;
                    pbVar155[uVar108 + lVar151] = param_3[iVar127];
                    if (((int)(((uint)param_6 + 2) - uVar125) <= iVar135) ||
                       (iVar135 < (int)param_5)) {
                      iVar127 = iVar113 + iVar128;
                      iVar113 = -iVar113;
                      iVar135 = iVar135 - iVar127;
                      iVar128 = -iVar128;
                    }
                    uVar108 = uVar108 + 1;
                    iVar127 = iVar135;
                  } while (uVar108 < uVar145);
                }
              }
              else {
                if (-1 < iVar1) {
                  uVar108 = 0;
                  iVar127 = 1;
                  lVar116 = 0;
                  if (uVar103 != 0) {
                    lVar136 = lVar132 * uVar141 + param_1;
                    do {
                      pbVar155[lVar116 + -1] = *(byte *)(lVar136 + 1 + uVar108 * 2);
                      lVar157 = uVar108 * 2;
                      uVar108 = uVar108 + 1;
                      pbVar155[lVar116 + -2] = *(byte *)(lVar136 + 2 + lVar157);
                      lVar116 = lVar116 + -2;
                    } while (uVar108 < uVar106);
                    iVar127 = (int)uVar108 * 2 + 1;
                  }
                  if (iVar127 - 1U < param_5) {
                    pbVar155[-(longlong)iVar127] = *(byte *)(param_1 + iVar127 + lVar132 * uVar141);
                  }
                }
LAB_140a5d5c5:
                if (0 < (int)uVar125) {
                  if (6 < (int)uVar125) {
                    pbVar130 = param_3 + uVar117;
                    lVar116 = lVar132 * uVar141 + lVar4;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar116) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar116))) {
                      if ((longlong)uVar145 < 0x10) {
LAB_140a5d877:
                        uVar117 = 0;
                      }
                      else {
                        uVar108 = (ulonglong)pbVar130 & 0xf;
                        if (uVar108 != 0) {
                          uVar108 = 0x10 - uVar108;
                        }
                        if ((longlong)uVar145 < (longlong)(uVar108 + 0x10)) goto LAB_140a5d877;
                        uVar137 = 0;
                        uVar117 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar108 & 0xfU));
                        if (uVar108 != 0) {
                          do {
                            pbVar130[uVar137] = *(byte *)(uVar137 + lVar116);
                            uVar137 = uVar137 + 1;
                          } while (uVar137 < uVar108);
                        }
                        if ((lVar116 + uVar108 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar108 + lVar116);
                            *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                            uVar108 = uVar108 + 0x10;
                          } while (uVar108 < uVar117);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar108 + lVar116));
                            *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                            uVar108 = uVar108 + 0x10;
                          } while (uVar108 < uVar117);
                        }
                      }
                      for (; uVar117 < uVar145; uVar117 = uVar117 + 1) {
                        pbVar130[uVar117] = *(byte *)(uVar117 + lVar116);
                      }
                      goto LAB_140a5c760;
                    }
                  }
                  iVar127 = 1;
                  uVar108 = 0;
                  if (uVar120 != 0) {
                    lVar116 = lVar132 * uVar141 + lVar4;
                    do {
                      param_3[uVar108 * 2 + uVar117] = *(byte *)(lVar116 + uVar108 * 2);
                      param_3[uVar108 * 2 + uVar117 + 1] = *(byte *)(lVar116 + 1 + uVar108 * 2);
                      uVar108 = uVar108 + 1;
                    } while (uVar108 < uVar122);
                    iVar127 = (int)uVar108 * 2 + 1;
                  }
                  if (iVar127 - 1U < uVar125) {
                    param_3[(longlong)iVar127 + -1 + uVar117] =
                         *(byte *)(lVar4 + iVar127 + -1 + lVar132 * uVar141);
                  }
                }
              }
            }
            else {
              if (-1 < iVar1) {
                iVar127 = iVar1;
                do {
                  uVar126 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    lVar116 = (longlong)iVar127;
                    do {
                      if (iVar127 < 0) break;
                      lVar136 = (longlong)(int)uVar126;
                      uVar126 = uVar126 + 1;
                      iVar127 = iVar127 + -1;
                      param_3[lVar116 - lVar136] =
                           *(byte *)((lVar116 + lVar132 * uVar141 + lVar105) - lVar136);
                    } while (uVar126 < uVar150);
                  }
                } while (-1 < iVar127);
              }
              if (uVar109 != 0) goto LAB_140a5d5c5;
              if (0 < (int)uVar125) {
                uVar108 = 0;
                iVar127 = 1;
                lVar116 = 0;
                if (uVar120 != 0) {
                  lVar136 = lVar132 * uVar141 + lVar4;
                  do {
                    param_3[uVar108 * 2 + uVar117] = *(byte *)(lVar116 + -2 + lVar136);
                    lVar157 = lVar116 + -3;
                    lVar116 = lVar116 + -2;
                    param_3[uVar108 * 2 + uVar117 + 1] = *(byte *)(lVar157 + lVar136);
                    uVar108 = uVar108 + 1;
                  } while (uVar108 < uVar122);
                  iVar127 = (int)uVar108 * 2 + 1;
                }
                if (iVar127 - 1U < uVar125) {
                  param_3[(longlong)iVar127 + -1 + uVar117] =
                       *(byte *)((lVar4 - iVar127) + -1 + lVar132 * uVar141);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar126 = 0;
            uVar144 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar136 = lVar132 * uVar141;
                lVar116 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar136);
                if (((int)param_5 <= lVar116) || ((longlong)(int)param_5 <= -lVar116)) {
                  if (((longlong)uVar108 < 0x10) || ((longlong)uVar108 < lVar114)) {
                    uVar117 = 0;
                  }
                  else {
                    uVar117 = 0;
                    lVar116 = lVar136 + lVar105;
                    if (uVar139 != 0) {
                      do {
                        param_3[uVar117] = *(byte *)(uVar117 + lVar116);
                        uVar117 = uVar117 + 1;
                      } while (uVar117 < uVar139);
                    }
                    uVar137 = uVar139;
                    uVar117 = uVar140;
                    if ((lVar136 + lVar105 + uVar139 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar137 + lVar116);
                        *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                        uVar137 = uVar137 + 0x10;
                      } while (uVar137 < uVar140);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar137 + lVar116));
                        *(undefined1 (*) [16])(param_3 + uVar137) = in_XMM2;
                        uVar137 = uVar137 + 0x10;
                      } while (uVar137 < uVar140);
                    }
                  }
                  uVar144 = param_5;
                  if (uVar117 < uVar108) {
                    do {
                      param_3[uVar117] = *(byte *)(uVar117 + lVar136 + lVar105);
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar108);
                  }
                  goto LAB_140a5b7d0;
                }
              }
              uVar134 = 1;
              uVar108 = 0;
              if (uVar103 != 0) {
                lVar116 = lVar132 * uVar141 + lVar105;
                do {
                  param_3[uVar108 * 2] = *(byte *)(lVar116 + uVar108 * 2);
                  param_3[uVar108 * 2 + 1] = *(byte *)(lVar116 + 1 + uVar108 * 2);
                  uVar108 = uVar108 + 1;
                } while (uVar108 < uVar106);
                uVar126 = (int)uVar108 * 2;
                uVar134 = uVar126 + 1;
              }
              uVar144 = uVar126;
              if (uVar134 - 1 < param_5) {
                param_3[(longlong)(int)uVar134 + -1] =
                     *(byte *)(lVar105 + (int)uVar134 + -1 + lVar132 * uVar141);
                uVar144 = uVar134;
              }
            }
LAB_140a5b7d0:
            lVar116 = (longlong)(int)uVar144;
            if (0 < (int)(uint)param_6) {
              if (uVar104 < 7) {
LAB_140a5b93f:
                iVar127 = 1;
                uVar108 = 0;
                uVar126 = uVar144;
                if (uVar154 != 0) {
                  lVar136 = lVar132 * uVar141 + param_1;
                  do {
                    param_3[uVar108 * 2 + lVar116] = *(byte *)(lVar136 + uVar108 * 2);
                    param_3[uVar108 * 2 + lVar116 + 1] = *(byte *)(lVar136 + 1 + uVar108 * 2);
                    uVar108 = uVar108 + 1;
                  } while (uVar108 < uVar156);
                  iVar127 = (int)uVar108 * 2;
                  uVar126 = uVar144 + iVar127;
                  iVar127 = iVar127 + 1;
                }
                if (iVar127 - 1U < uVar104) {
                  param_3[(longlong)iVar127 + -1 + lVar116] =
                       *(byte *)(param_1 + iVar127 + -1 + lVar132 * uVar141);
                  uVar126 = uVar144 + iVar127;
                }
              }
              else {
                pbVar130 = param_3 + lVar116;
                lVar136 = lVar132 * uVar141 + param_1;
                if (((longlong)pbVar130 - lVar136 < (longlong)(ulonglong)uVar104) &&
                   (-((longlong)pbVar130 - lVar136) < (longlong)(ulonglong)uVar104))
                goto LAB_140a5b93f;
                if (uVar104 < 0x10) {
LAB_140a5caf2:
                  uVar117 = 0;
                }
                else {
                  uVar108 = (ulonglong)pbVar130 & 0xf;
                  if ((int)uVar108 != 0) {
                    uVar108 = (ulonglong)(0x10 - (int)uVar108);
                  }
                  iVar127 = (int)uVar108;
                  if (uVar104 < iVar127 + 0x10U) goto LAB_140a5caf2;
                  uVar117 = 0;
                  iVar113 = uVar104 - (uVar104 - iVar127 & 0xf);
                  if (iVar127 != 0) {
                    do {
                      pbVar130[uVar117] = *(byte *)(uVar117 + lVar136);
                      uVar117 = uVar117 + 1;
                    } while (uVar117 < uVar108);
                  }
                  if ((lVar136 + uVar108 & 0xf) == 0) {
                    uVar117 = (ulonglong)iVar113;
                    do {
                      in_XMM2 = *(undefined1 (*) [16])(uVar108 + lVar136);
                      *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                      uVar108 = uVar108 + 0x10;
                    } while (uVar108 < uVar117);
                  }
                  else {
                    uVar117 = (ulonglong)iVar113;
                    do {
                      in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar108 + lVar136));
                      *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                      uVar108 = uVar108 + 0x10;
                    } while (uVar108 < uVar117);
                  }
                }
                for (; uVar117 < uVar107; uVar117 = uVar117 + 1) {
                  pbVar130[uVar117] = *(byte *)(uVar117 + lVar136);
                }
                uVar126 = (uVar144 + iVar153) - 1;
              }
              lVar116 = (longlong)(int)uVar126;
              if (2 < (int)(uint)param_6) {
                iVar127 = uVar126 + 2;
                lVar136 = lVar132 * uVar141;
                param_3[lVar116] = *(byte *)(lVar4 + -2 + lVar136);
                param_3[lVar116 + 1] = *(byte *)(lVar4 + -1 + lVar136);
                lVar116 = (longlong)iVar127;
                if (0 < (int)uVar125) {
                  if (6 < (int)uVar125) {
                    lVar157 = lVar136 + lVar4;
                    pbVar130 = param_3 + lVar116;
                    if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar157) ||
                       (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar157))) {
                      if ((longlong)uVar145 < 0x10) {
LAB_140a5caf9:
                        uVar108 = 0;
                      }
                      else {
                        uVar124 = (ulonglong)pbVar130 & 0xf;
                        if (uVar124 != 0) {
                          uVar124 = 0x10 - uVar124;
                        }
                        if ((longlong)uVar145 < (longlong)(uVar124 + 0x10)) goto LAB_140a5caf9;
                        uVar117 = 0;
                        uVar108 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar124 & 0xfU));
                        if (uVar124 != 0) {
                          do {
                            pbVar130[uVar117] = *(byte *)(uVar117 + lVar157);
                            uVar117 = uVar117 + 1;
                          } while (uVar117 < uVar124);
                        }
                        if ((lVar157 + uVar124 & 0xf) == 0) {
                          do {
                            in_XMM2 = *(undefined1 (*) [16])(uVar124 + lVar157);
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                        else {
                          do {
                            in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar124 + lVar157));
                            *(undefined1 (*) [16])(pbVar130 + uVar124) = in_XMM2;
                            uVar124 = uVar124 + 0x10;
                          } while (uVar124 < uVar108);
                        }
                      }
                      for (; uVar108 < uVar145; uVar108 = uVar108 + 1) {
                        pbVar130[uVar108] = *(byte *)(uVar108 + lVar157);
                      }
                      lVar116 = (longlong)(iVar127 + iVar149 + -1);
                      goto LAB_140a5bbfc;
                    }
                  }
                  iVar113 = 1;
                  uVar124 = 0;
                  iVar128 = iVar127;
                  if (uVar120 != 0) {
                    do {
                      param_3[uVar124 * 2 + lVar116] = *(byte *)(lVar136 + lVar4 + uVar124 * 2);
                      param_3[uVar124 * 2 + lVar116 + 1] =
                           *(byte *)(lVar136 + lVar4 + 1 + uVar124 * 2);
                      uVar124 = uVar124 + 1;
                    } while (uVar124 < uVar122);
                    iVar113 = (int)uVar124 * 2;
                    iVar128 = iVar127 + iVar113;
                    iVar113 = iVar113 + 1;
                  }
                  if (iVar113 - 1U < uVar125) {
                    param_3[(longlong)iVar113 + -1 + lVar116] =
                         *(byte *)((longlong)iVar113 + -1 + lVar136 + lVar4);
                    lVar116 = (longlong)(iVar113 + iVar127);
                  }
                  else {
                    lVar116 = (longlong)iVar128;
                  }
                }
LAB_140a5bbfc:
                uVar124 = lVar116 - lVar121;
                goto LAB_140a5c760;
              }
            }
            if (0 < (int)uVar125) {
              if (6 < (int)uVar125) {
                pbVar130 = param_3 + lVar116;
                lVar136 = lVar132 * uVar141 + lVar4;
                if ((2 - (longlong)(int)param_5 <= (longlong)pbVar130 - lVar136) ||
                   (2 - (longlong)(int)param_5 <= -((longlong)pbVar130 - lVar136))) {
                  if ((longlong)uVar145 < 0x10) {
LAB_140a5cb00:
                    uVar117 = 0;
                  }
                  else {
                    uVar108 = (ulonglong)pbVar130 & 0xf;
                    if (uVar108 != 0) {
                      uVar108 = 0x10 - uVar108;
                    }
                    if ((longlong)uVar145 < (longlong)(uVar108 + 0x10)) goto LAB_140a5cb00;
                    uVar137 = 0;
                    uVar117 = (ulonglong)(int)(iVar142 - (iVar142 - (int)uVar108 & 0xfU));
                    if (uVar108 != 0) {
                      do {
                        pbVar130[uVar137] = *(byte *)(uVar137 + lVar136);
                        uVar137 = uVar137 + 1;
                      } while (uVar137 < uVar108);
                    }
                    if ((lVar136 + uVar108 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar108 + lVar136);
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar117);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar108 + lVar136));
                        *(undefined1 (*) [16])(pbVar130 + uVar108) = in_XMM2;
                        uVar108 = uVar108 + 0x10;
                      } while (uVar108 < uVar117);
                    }
                  }
                  for (; uVar117 < uVar145; uVar117 = uVar117 + 1) {
                    pbVar130[uVar117] = *(byte *)(uVar117 + lVar136);
                  }
                  goto LAB_140a5c760;
                }
              }
              iVar127 = 1;
              uVar108 = 0;
              if (uVar120 != 0) {
                lVar136 = lVar132 * uVar141 + lVar4;
                do {
                  param_3[uVar108 * 2 + lVar116] = *(byte *)(lVar136 + uVar108 * 2);
                  param_3[uVar108 * 2 + lVar116 + 1] = *(byte *)(lVar136 + 1 + uVar108 * 2);
                  uVar108 = uVar108 + 1;
                } while (uVar108 < uVar122);
                iVar127 = (int)uVar108 * 2 + 1;
              }
              if (iVar127 - 1U < uVar125) {
                param_3[(longlong)iVar127 + -1 + lVar116] =
                     *(byte *)(lVar4 + iVar127 + -1 + lVar132 * uVar141);
              }
            }
          }
          else {
            uVar124 = 0;
          }
        }
LAB_140a5c760:
        **(short **)(param_2 + uVar141 * 8) = (ushort)*param_3 - (ushort)param_3[2];
        if (0 < (int)uVar2) {
          if (6 < (int)uVar2) {
            lVar116 = lVar132 * uVar141;
            uVar108 = *(longlong *)(param_2 + uVar141 * 8) + 2;
            lVar136 = param_1 + lVar116;
            if (((longlong)(int)(uint)param_6 <= (longlong)(uVar108 - lVar136)) ||
               ((longlong)(int)(uint)param_6 * 2 + -4 <= (longlong)-(uVar108 - lVar136))) {
              if ((longlong)uVar123 < 0x10) {
LAB_140a5f434:
                uVar108 = 0;
              }
              else {
                uVar117 = uVar108 & 0xf;
                if ((int)uVar117 != 0) {
                  if ((uVar108 & 1) != 0) goto LAB_140a5f434;
                  uVar117 = (ulonglong)(0x10U - (int)uVar117 >> 1);
                }
                if ((longlong)uVar123 < (longlong)(uVar117 + 0x10)) goto LAB_140a5f434;
                uVar137 = 0;
                uVar108 = (ulonglong)(int)((int)uVar123 - ((int)uVar123 - (int)uVar117 & 0xfU));
                if ((int)uVar117 != 0) {
                  do {
                    *(ushort *)(*(longlong *)(param_2 + uVar141 * 8) + 2 + uVar137 * 2) =
                         (ushort)*(byte *)(uVar137 + lVar136) -
                         (ushort)*(byte *)(uVar137 + 2 + lVar136);
                    uVar137 = uVar137 + 1;
                  } while (uVar137 < uVar117);
                }
                if ((lVar136 + uVar117 & 0xf) == 0) {
                  do {
                    lVar157 = param_1 + lVar116;
                    uVar137 = *(ulonglong *)(uVar117 + 2 + lVar157);
                    uVar131 = *(ulonglong *)(uVar117 + lVar157);
                    uVar8 = *(ulonglong *)(uVar117 + 8 + lVar157);
                    uVar9 = *(ulonglong *)(uVar117 + 10 + lVar157);
                    auVar16._8_6_ = 0;
                    auVar16._0_8_ = uVar131;
                    auVar16[0xe] = (char)(uVar131 >> 0x38);
                    auVar24._8_4_ = 0;
                    auVar24._0_8_ = uVar131;
                    auVar24[0xc] = (char)(uVar131 >> 0x30);
                    auVar24._13_2_ = auVar16._13_2_;
                    auVar32._8_4_ = 0;
                    auVar32._0_8_ = uVar131;
                    auVar32._12_3_ = auVar24._12_3_;
                    auVar40._8_2_ = 0;
                    auVar40._0_8_ = uVar131;
                    auVar40[10] = (char)(uVar131 >> 0x28);
                    auVar40._11_4_ = auVar32._11_4_;
                    auVar48._8_2_ = 0;
                    auVar48._0_8_ = uVar131;
                    auVar48._10_5_ = auVar40._10_5_;
                    auVar56[8] = (char)(uVar131 >> 0x20);
                    auVar56._0_8_ = uVar131;
                    auVar56._9_6_ = auVar48._9_6_;
                    auVar75._7_8_ = 0;
                    auVar75._0_7_ = auVar56._8_7_;
                    Var64 = CONCAT81(SUB158(auVar75 << 0x40,7),(char)(uVar131 >> 0x18));
                    auVar95._9_6_ = 0;
                    auVar95._0_9_ = Var64;
                    auVar76._1_10_ = SUB1510(auVar95 << 0x30,5);
                    auVar76[0] = (char)(uVar131 >> 0x10);
                    auVar96._11_4_ = 0;
                    auVar96._0_11_ = auVar76;
                    auVar77._1_12_ = SUB1512(auVar96 << 0x20,3);
                    auVar77[0] = (char)(uVar131 >> 8);
                    auVar17._8_6_ = 0;
                    auVar17._0_8_ = uVar137;
                    auVar17[0xe] = (char)(uVar137 >> 0x38);
                    auVar25._8_4_ = 0;
                    auVar25._0_8_ = uVar137;
                    auVar25[0xc] = (char)(uVar137 >> 0x30);
                    auVar25._13_2_ = auVar17._13_2_;
                    auVar33._8_4_ = 0;
                    auVar33._0_8_ = uVar137;
                    auVar33._12_3_ = auVar25._12_3_;
                    auVar41._8_2_ = 0;
                    auVar41._0_8_ = uVar137;
                    auVar41[10] = (char)(uVar137 >> 0x28);
                    auVar41._11_4_ = auVar33._11_4_;
                    auVar49._8_2_ = 0;
                    auVar49._0_8_ = uVar137;
                    auVar49._10_5_ = auVar41._10_5_;
                    auVar57[8] = (char)(uVar137 >> 0x20);
                    auVar57._0_8_ = uVar137;
                    auVar57._9_6_ = auVar49._9_6_;
                    auVar78._7_8_ = 0;
                    auVar78._0_7_ = auVar57._8_7_;
                    Var67 = CONCAT81(SUB158(auVar78 << 0x40,7),(char)(uVar137 >> 0x18));
                    auVar97._9_6_ = 0;
                    auVar97._0_9_ = Var67;
                    auVar79._1_10_ = SUB1510(auVar97 << 0x30,5);
                    auVar79[0] = (char)(uVar137 >> 0x10);
                    auVar98._11_4_ = 0;
                    auVar98._0_11_ = auVar79;
                    auVar80._1_12_ = SUB1512(auVar98 << 0x20,3);
                    auVar80[0] = (char)(uVar137 >> 8);
                    uVar160 = CONCAT11(0,(byte)uVar137);
                    auVar62._2_13_ = auVar80;
                    auVar62._0_2_ = uVar160;
                    psVar7 = (short *)(*(longlong *)(param_2 + uVar141 * 8) + 2 + uVar117 * 2);
                    *psVar7 = (byte)uVar131 - uVar160;
                    psVar7[1] = auVar77._0_2_ - auVar80._0_2_;
                    psVar7[2] = auVar76._0_2_ - auVar79._0_2_;
                    psVar7[3] = (short)Var64 - (short)Var67;
                    psVar7[4] = auVar56._8_2_ - auVar57._8_2_;
                    psVar7[5] = auVar40._10_2_ - auVar41._10_2_;
                    psVar7[6] = auVar24._12_2_ - auVar25._12_2_;
                    psVar7[7] = (auVar16._13_2_ >> 8) - (auVar17._13_2_ >> 8);
                    auVar18._8_6_ = 0;
                    auVar18._0_8_ = uVar8;
                    auVar18[0xe] = (char)(uVar8 >> 0x38);
                    auVar26._8_4_ = 0;
                    auVar26._0_8_ = uVar8;
                    auVar26[0xc] = (char)(uVar8 >> 0x30);
                    auVar26._13_2_ = auVar18._13_2_;
                    auVar34._8_4_ = 0;
                    auVar34._0_8_ = uVar8;
                    auVar34._12_3_ = auVar26._12_3_;
                    auVar42._8_2_ = 0;
                    auVar42._0_8_ = uVar8;
                    auVar42[10] = (char)(uVar8 >> 0x28);
                    auVar42._11_4_ = auVar34._11_4_;
                    auVar50._8_2_ = 0;
                    auVar50._0_8_ = uVar8;
                    auVar50._10_5_ = auVar42._10_5_;
                    auVar58[8] = (char)(uVar8 >> 0x20);
                    auVar58._0_8_ = uVar8;
                    auVar58._9_6_ = auVar50._9_6_;
                    auVar81._7_8_ = 0;
                    auVar81._0_7_ = auVar58._8_7_;
                    Var64 = CONCAT81(SUB158(auVar81 << 0x40,7),(char)(uVar8 >> 0x18));
                    auVar99._9_6_ = 0;
                    auVar99._0_9_ = Var64;
                    auVar82._1_10_ = SUB1510(auVar99 << 0x30,5);
                    auVar82[0] = (char)(uVar8 >> 0x10);
                    auVar100._11_4_ = 0;
                    auVar100._0_11_ = auVar82;
                    auVar83._1_12_ = SUB1512(auVar100 << 0x20,3);
                    auVar83[0] = (char)(uVar8 >> 8);
                    auVar19._8_6_ = 0;
                    auVar19._0_8_ = uVar9;
                    auVar19[0xe] = (char)(uVar9 >> 0x38);
                    auVar27._8_4_ = 0;
                    auVar27._0_8_ = uVar9;
                    auVar27[0xc] = (char)(uVar9 >> 0x30);
                    auVar27._13_2_ = auVar19._13_2_;
                    auVar35._8_4_ = 0;
                    auVar35._0_8_ = uVar9;
                    auVar35._12_3_ = auVar27._12_3_;
                    auVar43._8_2_ = 0;
                    auVar43._0_8_ = uVar9;
                    auVar43[10] = (char)(uVar9 >> 0x28);
                    auVar43._11_4_ = auVar35._11_4_;
                    auVar51._8_2_ = 0;
                    auVar51._0_8_ = uVar9;
                    auVar51._10_5_ = auVar43._10_5_;
                    auVar59[8] = (char)(uVar9 >> 0x20);
                    auVar59._0_8_ = uVar9;
                    auVar59._9_6_ = auVar51._9_6_;
                    auVar84._7_8_ = 0;
                    auVar84._0_7_ = auVar59._8_7_;
                    Var67 = CONCAT81(SUB158(auVar84 << 0x40,7),(char)(uVar9 >> 0x18));
                    auVar101._9_6_ = 0;
                    auVar101._0_9_ = Var67;
                    auVar85._1_10_ = SUB1510(auVar101 << 0x30,5);
                    auVar85[0] = (char)(uVar9 >> 0x10);
                    auVar102._11_4_ = 0;
                    auVar102._0_11_ = auVar85;
                    auVar86._1_12_ = SUB1512(auVar102 << 0x20,3);
                    auVar86[0] = (char)(uVar9 >> 8);
                    psVar7 = (short *)(*(longlong *)(param_2 + uVar141 * 8) + 0x12 + uVar117 * 2);
                    *psVar7 = (ushort)(byte)uVar8 - (ushort)(byte)uVar9;
                    psVar7[1] = auVar83._0_2_ - auVar86._0_2_;
                    psVar7[2] = auVar82._0_2_ - auVar85._0_2_;
                    psVar7[3] = (short)Var64 - (short)Var67;
                    psVar7[4] = auVar58._8_2_ - auVar59._8_2_;
                    psVar7[5] = auVar42._10_2_ - auVar43._10_2_;
                    psVar7[6] = auVar26._12_2_ - auVar27._12_2_;
                    psVar7[7] = (auVar18._13_2_ >> 8) - (auVar19._13_2_ >> 8);
                    uVar117 = uVar117 + 0x10;
                  } while (uVar117 < uVar108);
                }
                else {
                  do {
                    lVar157 = param_1 + lVar116;
                    uVar137 = *(ulonglong *)(uVar117 + 2 + lVar157);
                    uVar131 = *(ulonglong *)(uVar117 + lVar157);
                    uVar8 = *(ulonglong *)(uVar117 + 8 + lVar157);
                    uVar9 = *(ulonglong *)(uVar117 + 10 + lVar157);
                    auVar12._8_6_ = 0;
                    auVar12._0_8_ = uVar131;
                    auVar12[0xe] = (char)(uVar131 >> 0x38);
                    auVar20._8_4_ = 0;
                    auVar20._0_8_ = uVar131;
                    auVar20[0xc] = (char)(uVar131 >> 0x30);
                    auVar20._13_2_ = auVar12._13_2_;
                    auVar28._8_4_ = 0;
                    auVar28._0_8_ = uVar131;
                    auVar28._12_3_ = auVar20._12_3_;
                    auVar36._8_2_ = 0;
                    auVar36._0_8_ = uVar131;
                    auVar36[10] = (char)(uVar131 >> 0x28);
                    auVar36._11_4_ = auVar28._11_4_;
                    auVar44._8_2_ = 0;
                    auVar44._0_8_ = uVar131;
                    auVar44._10_5_ = auVar36._10_5_;
                    auVar52[8] = (char)(uVar131 >> 0x20);
                    auVar52._0_8_ = uVar131;
                    auVar52._9_6_ = auVar44._9_6_;
                    auVar63._7_8_ = 0;
                    auVar63._0_7_ = auVar52._8_7_;
                    Var64 = CONCAT81(SUB158(auVar63 << 0x40,7),(char)(uVar131 >> 0x18));
                    auVar87._9_6_ = 0;
                    auVar87._0_9_ = Var64;
                    auVar65._1_10_ = SUB1510(auVar87 << 0x30,5);
                    auVar65[0] = (char)(uVar131 >> 0x10);
                    auVar88._11_4_ = 0;
                    auVar88._0_11_ = auVar65;
                    auVar60[2] = (char)(uVar131 >> 8);
                    auVar60._0_2_ = (ushort)uVar131;
                    auVar60._3_12_ = SUB1512(auVar88 << 0x20,3);
                    auVar13._8_6_ = 0;
                    auVar13._0_8_ = uVar137;
                    auVar13[0xe] = (char)(uVar137 >> 0x38);
                    auVar21._8_4_ = 0;
                    auVar21._0_8_ = uVar137;
                    auVar21[0xc] = (char)(uVar137 >> 0x30);
                    auVar21._13_2_ = auVar13._13_2_;
                    auVar29._8_4_ = 0;
                    auVar29._0_8_ = uVar137;
                    auVar29._12_3_ = auVar21._12_3_;
                    auVar37._8_2_ = 0;
                    auVar37._0_8_ = uVar137;
                    auVar37[10] = (char)(uVar137 >> 0x28);
                    auVar37._11_4_ = auVar29._11_4_;
                    auVar45._8_2_ = 0;
                    auVar45._0_8_ = uVar137;
                    auVar45._10_5_ = auVar37._10_5_;
                    auVar53[8] = (char)(uVar137 >> 0x20);
                    auVar53._0_8_ = uVar137;
                    auVar53._9_6_ = auVar45._9_6_;
                    auVar66._7_8_ = 0;
                    auVar66._0_7_ = auVar53._8_7_;
                    Var67 = CONCAT81(SUB158(auVar66 << 0x40,7),(char)(uVar137 >> 0x18));
                    auVar89._9_6_ = 0;
                    auVar89._0_9_ = Var67;
                    auVar68._1_10_ = SUB1510(auVar89 << 0x30,5);
                    auVar68[0] = (char)(uVar137 >> 0x10);
                    auVar90._11_4_ = 0;
                    auVar90._0_11_ = auVar68;
                    auVar61[2] = (char)(uVar137 >> 8);
                    auVar61._0_2_ = (ushort)uVar137;
                    auVar61._3_12_ = SUB1512(auVar90 << 0x20,3);
                    uVar160 = (ushort)uVar137 & 0xff;
                    auVar62._2_13_ = auVar61._2_13_;
                    auVar62._0_2_ = uVar160;
                    psVar7 = (short *)(*(longlong *)(param_2 + uVar141 * 8) + 2 + uVar117 * 2);
                    *psVar7 = ((ushort)uVar131 & 0xff) - uVar160;
                    psVar7[1] = auVar60._2_2_ - auVar61._2_2_;
                    psVar7[2] = auVar65._0_2_ - auVar68._0_2_;
                    psVar7[3] = (short)Var64 - (short)Var67;
                    psVar7[4] = auVar52._8_2_ - auVar53._8_2_;
                    psVar7[5] = auVar36._10_2_ - auVar37._10_2_;
                    psVar7[6] = auVar20._12_2_ - auVar21._12_2_;
                    psVar7[7] = (auVar12._13_2_ >> 8) - (auVar13._13_2_ >> 8);
                    auVar14._8_6_ = 0;
                    auVar14._0_8_ = uVar8;
                    auVar14[0xe] = (char)(uVar8 >> 0x38);
                    auVar22._8_4_ = 0;
                    auVar22._0_8_ = uVar8;
                    auVar22[0xc] = (char)(uVar8 >> 0x30);
                    auVar22._13_2_ = auVar14._13_2_;
                    auVar30._8_4_ = 0;
                    auVar30._0_8_ = uVar8;
                    auVar30._12_3_ = auVar22._12_3_;
                    auVar38._8_2_ = 0;
                    auVar38._0_8_ = uVar8;
                    auVar38[10] = (char)(uVar8 >> 0x28);
                    auVar38._11_4_ = auVar30._11_4_;
                    auVar46._8_2_ = 0;
                    auVar46._0_8_ = uVar8;
                    auVar46._10_5_ = auVar38._10_5_;
                    auVar54[8] = (char)(uVar8 >> 0x20);
                    auVar54._0_8_ = uVar8;
                    auVar54._9_6_ = auVar46._9_6_;
                    auVar69._7_8_ = 0;
                    auVar69._0_7_ = auVar54._8_7_;
                    Var64 = CONCAT81(SUB158(auVar69 << 0x40,7),(char)(uVar8 >> 0x18));
                    auVar91._9_6_ = 0;
                    auVar91._0_9_ = Var64;
                    auVar70._1_10_ = SUB1510(auVar91 << 0x30,5);
                    auVar70[0] = (char)(uVar8 >> 0x10);
                    auVar92._11_4_ = 0;
                    auVar92._0_11_ = auVar70;
                    auVar71._1_12_ = SUB1512(auVar92 << 0x20,3);
                    auVar71[0] = (char)(uVar8 >> 8);
                    auVar15._8_6_ = 0;
                    auVar15._0_8_ = uVar9;
                    auVar15[0xe] = (char)(uVar9 >> 0x38);
                    auVar23._8_4_ = 0;
                    auVar23._0_8_ = uVar9;
                    auVar23[0xc] = (char)(uVar9 >> 0x30);
                    auVar23._13_2_ = auVar15._13_2_;
                    auVar31._8_4_ = 0;
                    auVar31._0_8_ = uVar9;
                    auVar31._12_3_ = auVar23._12_3_;
                    auVar39._8_2_ = 0;
                    auVar39._0_8_ = uVar9;
                    auVar39[10] = (char)(uVar9 >> 0x28);
                    auVar39._11_4_ = auVar31._11_4_;
                    auVar47._8_2_ = 0;
                    auVar47._0_8_ = uVar9;
                    auVar47._10_5_ = auVar39._10_5_;
                    auVar55[8] = (char)(uVar9 >> 0x20);
                    auVar55._0_8_ = uVar9;
                    auVar55._9_6_ = auVar47._9_6_;
                    auVar72._7_8_ = 0;
                    auVar72._0_7_ = auVar55._8_7_;
                    Var67 = CONCAT81(SUB158(auVar72 << 0x40,7),(char)(uVar9 >> 0x18));
                    auVar93._9_6_ = 0;
                    auVar93._0_9_ = Var67;
                    auVar73._1_10_ = SUB1510(auVar93 << 0x30,5);
                    auVar73[0] = (char)(uVar9 >> 0x10);
                    auVar94._11_4_ = 0;
                    auVar94._0_11_ = auVar73;
                    auVar74._1_12_ = SUB1512(auVar94 << 0x20,3);
                    auVar74[0] = (char)(uVar9 >> 8);
                    psVar7 = (short *)(*(longlong *)(param_2 + uVar141 * 8) + 0x12 + uVar117 * 2);
                    *psVar7 = (ushort)(byte)uVar8 - (ushort)(byte)uVar9;
                    psVar7[1] = auVar71._0_2_ - auVar74._0_2_;
                    psVar7[2] = auVar70._0_2_ - auVar73._0_2_;
                    psVar7[3] = (short)Var64 - (short)Var67;
                    psVar7[4] = auVar54._8_2_ - auVar55._8_2_;
                    psVar7[5] = auVar38._10_2_ - auVar39._10_2_;
                    psVar7[6] = auVar22._12_2_ - auVar23._12_2_;
                    psVar7[7] = (auVar14._13_2_ >> 8) - (auVar15._13_2_ >> 8);
                    uVar117 = uVar117 + 0x10;
                  } while (uVar117 < uVar108);
                }
                in_XMM2[0xf] = 0;
                in_XMM2._0_15_ = auVar62;
              }
              for (; uVar108 < uVar123; uVar108 = uVar108 + 1) {
                *(ushort *)(*(longlong *)(param_2 + uVar141 * 8) + 2 + uVar108 * 2) =
                     (ushort)*(byte *)(uVar108 + lVar136) - (ushort)*(byte *)(uVar108 + 2 + lVar136)
                ;
              }
              goto LAB_140a5ca78;
            }
          }
          iVar127 = 1;
          uVar108 = 0;
          if (uVar2 >> 1 != 0) {
            lVar116 = lVar132 * uVar141 + param_1;
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar141 * 8) + 2 + uVar108 * 4) =
                   (ushort)*(byte *)(lVar116 + uVar108 * 2) -
                   (ushort)*(byte *)(lVar116 + 2 + uVar108 * 2);
              *(ushort *)(*(longlong *)(param_2 + uVar141 * 8) + 4 + uVar108 * 4) =
                   (ushort)*(byte *)(lVar116 + 1 + uVar108 * 2) -
                   (ushort)*(byte *)(lVar116 + 3 + uVar108 * 2);
              uVar108 = uVar108 + 1;
            } while (uVar108 < uVar2 >> 1);
            iVar127 = (int)uVar108 * 2 + 1;
          }
          if (iVar127 - 1U < uVar2) {
            lVar136 = (longlong)iVar127;
            lVar116 = lVar132 * uVar141 + param_1;
            *(ushort *)(*(longlong *)(param_2 + uVar141 * 8) + lVar136 * 2) =
                 (ushort)*(byte *)(lVar136 + -1 + lVar116) -
                 (ushort)*(byte *)(lVar136 + 1 + lVar116);
          }
        }
LAB_140a5ca78:
        if ((int)(uint)param_6 < 2) goto LAB_140a5cab5;
        lVar116 = uVar141 * 8;
        uVar141 = uVar141 + 1;
        lStack_70 = lStack_70 + lVar132;
        *(ushort *)(*(longlong *)(param_2 + lVar116) + -2 + (longlong)(int)(uint)param_6 * 2) =
             (ushort)param_3[uVar124] - (ushort)param_3[uVar124 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar141) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar147 = 1;
      break;
    case 2:
      lVar147 = 2;
      break;
    case 3:
      lVar147 = 3;
      break;
    case 4:
      lVar147 = 4;
    }
    (*(code *)(&PTR_FUN_14308ee50)[lVar147])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar132 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a5cab5:
  uVar141 = uVar141 + 1;
  lStack_70 = lStack_70 + lVar132;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar141) {
    return 0;
  }
  goto LAB_140a5b540;
}

