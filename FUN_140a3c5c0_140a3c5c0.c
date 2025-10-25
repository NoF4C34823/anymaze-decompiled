
undefined8
FUN_140a3c5c0(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  short *psVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
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
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  unkuint9 Var68;
  undefined1 auVar69 [11];
  undefined1 auVar70 [15];
  unkuint9 Var71;
  undefined1 auVar72 [11];
  undefined1 auVar73 [15];
  undefined1 auVar74 [11];
  undefined1 auVar75 [13];
  undefined1 auVar76 [15];
  undefined1 auVar77 [11];
  undefined1 auVar78 [13];
  undefined1 auVar79 [15];
  undefined1 auVar80 [11];
  undefined1 auVar81 [13];
  undefined1 auVar82 [15];
  undefined1 auVar83 [11];
  undefined1 auVar84 [13];
  undefined1 auVar85 [15];
  undefined1 auVar86 [11];
  undefined1 auVar87 [13];
  undefined1 auVar88 [15];
  undefined1 auVar89 [11];
  undefined1 auVar90 [13];
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
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  longlong lVar107;
  int iVar108;
  uint uVar109;
  int iVar110;
  longlong lVar111;
  uint uVar112;
  uint uVar113;
  int iVar114;
  uint uVar116;
  int iVar117;
  ulonglong uVar118;
  longlong lVar119;
  int iVar120;
  int iVar121;
  uint uVar122;
  ulonglong uVar123;
  ulonglong uVar124;
  uint uVar125;
  longlong lVar126;
  ulonglong uVar127;
  ulonglong uVar128;
  uint uVar129;
  ulonglong uVar130;
  longlong lVar131;
  uint uVar132;
  int iVar133;
  longlong lVar134;
  ulonglong uVar135;
  ulonglong uVar136;
  longlong lVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  uint uVar140;
  int iVar141;
  int iVar142;
  ulonglong uVar143;
  ulonglong uVar144;
  uint uVar145;
  uint uVar146;
  uint uVar147;
  ulonglong uVar148;
  uint uVar151;
  uint uVar152;
  ulonglong uVar153;
  longlong lVar154;
  ulonglong uVar155;
  byte *pbVar156;
  longlong lVar157;
  uint uVar158;
  undefined4 uVar159;
  undefined8 uVar160;
  ushort uVar161;
  undefined1 in_XMM2 [16];
  longlong lStack_68;
  ulonglong uVar115;
  ulonglong uVar149;
  ulonglong uVar150;
  
  lVar134 = (longlong)param_4;
  if (param_6._4_4_ < 1) {
    return 0;
  }
  uVar123 = (ulonglong)(int)param_5;
  uVar130 = (ulonglong)param_3 & 0xf;
  lVar137 = -uVar123;
  pbVar6 = param_3 + uVar123;
  uVar153 = uVar130;
  if (uVar130 != 0) {
    uVar153 = 0x10 - uVar130;
  }
  lVar2 = lVar137 + 4;
  uVar116 = 2;
  if ((uint)param_6 < 3) {
    uVar116 = (uint)param_6;
  }
  uVar118 = (ulonglong)(int)uVar116;
  uVar3 = lVar137 + 2;
  uVar148 = (ulonglong)(1 < (int)(uint)param_6);
  uVar112 = param_7 & 0xf;
  uVar113 = param_5 >> 1;
  uVar115 = (ulonglong)uVar113;
  lVar111 = param_1 - uVar123;
  iVar114 = -param_5;
  uVar132 = param_7 & 0x40;
  lVar126 = (longlong)(int)(uint)param_6;
  uVar145 = (uint)param_6 - (1 < (int)(uint)param_6);
  uVar1 = iVar114 + 2;
  uVar135 = (ulonglong)pbVar6 & 0xf;
  uVar146 = uVar1 >> 1;
  uVar149 = (ulonglong)uVar146;
  uVar151 = param_7 & 0x80;
  uVar147 = uVar116 >> 1;
  uVar150 = (ulonglong)uVar147;
  uVar138 = 0xffffffffffffffff - (lVar137 + -1);
  uVar152 = (uint)param_6 - 2;
  if ((int)uVar135 != 0) {
    uVar135 = (ulonglong)(0x10 - (int)uVar135);
  }
  iVar110 = ((int)(uint)param_6 < 2) - 1;
  if (uVar130 != 0) {
    uVar130 = 0x10 - uVar130;
  }
  lVar154 = (param_1 - uVar148) + lVar126;
  lVar7 = param_1 + lVar126;
  uVar140 = param_5 - (param_5 - (int)uVar153 & 0xf);
  lVar107 = lVar126 - uVar123;
  uVar158 = param_5 - 1;
  iVar133 = (int)uVar135;
  iVar120 = uVar116 - (uVar116 - iVar133 & 0xf);
  uVar159 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
  uVar4 = lVar126 - 2;
  uVar143 = (ulonglong)(int)uVar140;
  uVar160 = CONCAT44(uVar159,uVar159);
  iVar108 = (int)uVar3;
  uVar139 = (ulonglong)(int)((int)uVar138 - ((int)uVar138 - (int)uVar130 & 0xfU));
  lVar137 = uVar130 + 0x10;
  lVar5 = uVar153 + 0x10;
  uVar124 = (ulonglong)iVar120;
  uVar109 = 1;
  if ((param_7 & 0xc0) != 0) {
    uVar109 = uVar112;
  }
  lStack_68 = 0;
  uVar136 = 0;
LAB_140a3c9c0:
  if ((uint)param_6 == 1) {
    uVar125 = uVar109;
    if (uVar112 != 6) goto LAB_140a3ca11;
    goto LAB_140a3d24b;
  }
  do {
    uVar125 = uVar112;
    if (uVar112 == 6) {
LAB_140a3d24b:
      uVar125 = 0;
      uVar122 = 0;
      if (uVar132 == 0) {
        if (0 < (int)param_5) {
          if ((0xf < (longlong)uVar123) && (lVar5 <= (longlong)uVar123)) {
            uVar128 = 0;
            uVar127 = uVar153;
            if (uVar153 != 0) {
              do {
                param_3[uVar128] = param_8;
                uVar128 = uVar128 + 1;
              } while (uVar128 < uVar153);
            }
            do {
              *(undefined8 *)(param_3 + uVar127) = uVar160;
              *(undefined8 *)(param_3 + uVar127 + 8) = uVar160;
              uVar127 = uVar127 + 0x10;
              uVar125 = uVar140;
            } while (uVar127 < uVar143);
          }
          uVar127 = (ulonglong)(int)uVar125;
          uVar122 = uVar125;
          if (uVar127 < uVar123) {
            do {
              param_3[uVar127] = param_8;
              uVar127 = uVar127 + 1;
            } while (uVar127 < uVar123);
            uVar122 = (uint)uVar127;
          }
        }
      }
      else if (0 < (int)param_5) {
        if (((int)param_5 < 7) ||
           ((lVar119 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_68),
            lVar119 < (longlong)uVar123 && (-lVar119 < (longlong)uVar123)))) {
          uVar129 = 1;
          if (uVar113 != 0) {
            uVar127 = 0;
            do {
              uVar128 = uVar127;
              param_3[uVar128 * 2] = *(byte *)(lVar111 + lStack_68 + uVar128 * 2);
              param_3[uVar128 * 2 + 1] = *(byte *)(lVar111 + lStack_68 + 1 + uVar128 * 2);
              uVar127 = uVar128 + 1;
            } while (uVar127 < uVar115);
            uVar125 = (int)uVar127 * 2;
            uVar129 = (int)uVar128 + 2 + (int)uVar127;
          }
          uVar122 = uVar125;
          if (uVar129 - 1 < param_5) {
            param_3[(longlong)(int)uVar129 + -1] =
                 *(byte *)(lVar111 + (int)uVar129 + -1 + lStack_68);
            uVar122 = uVar129;
          }
        }
        else {
          if (((longlong)uVar123 < 0x10) || ((longlong)uVar123 < lVar5)) {
            uVar127 = 0;
          }
          else {
            uVar127 = 0;
            lVar119 = lVar111 + lStack_68;
            if (uVar153 != 0) {
              do {
                param_3[uVar127] = *(byte *)(uVar127 + lVar119);
                uVar127 = uVar127 + 1;
              } while (uVar127 < uVar153);
            }
            uVar128 = uVar153;
            uVar127 = uVar143;
            if ((lVar119 + uVar153 & 0xf) == 0) {
              do {
                in_XMM2 = *(undefined1 (*) [16])(uVar128 + lVar119);
                *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                uVar128 = uVar128 + 0x10;
              } while (uVar128 < uVar143);
            }
            else {
              do {
                in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar128 + lVar119));
                *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                uVar128 = uVar128 + 0x10;
              } while (uVar128 < uVar143);
            }
          }
          uVar122 = param_5;
          if (uVar127 < uVar123) {
            do {
              param_3[uVar127] = *(byte *)(uVar127 + lVar111 + lStack_68);
              uVar127 = uVar127 + 1;
            } while (uVar127 < uVar123);
          }
        }
      }
      lVar119 = (longlong)(int)uVar122;
      if ((int)(uint)param_6 < 1) {
        if (uVar151 != 0) goto LAB_140a3d8f8;
LAB_140a3d7d0:
        uVar127 = uVar123;
        if ((int)uVar1 < 1) goto LAB_140a3db60;
LAB_140a3d7de:
        if ((longlong)uVar3 < 0x10) {
LAB_140a4065b:
          iVar141 = 0;
        }
        else {
          pbVar156 = param_3 + lVar119;
          uVar127 = (ulonglong)pbVar156 & 0xf;
          if (uVar127 != 0) {
            uVar127 = 0x10 - uVar127;
          }
          if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a4065b;
          iVar141 = iVar108 - (iVar108 - (int)uVar127 & 0xfU);
          uVar128 = 0;
          if (uVar127 != 0) {
            do {
              pbVar156[uVar128] = param_8;
              uVar128 = uVar128 + 1;
            } while (uVar128 < uVar127);
          }
          do {
            *(undefined8 *)(pbVar156 + uVar127) = uVar160;
            *(undefined8 *)(pbVar156 + uVar127 + 8) = uVar160;
            uVar127 = uVar127 + 0x10;
          } while (uVar127 < (ulonglong)(longlong)iVar141);
          uVar122 = (int)lVar119 + iVar141;
        }
        uVar127 = (ulonglong)iVar141;
        if (uVar127 < uVar3) {
          do {
            param_3[uVar127 + lVar119] = param_8;
            uVar127 = uVar127 + 1;
          } while (uVar127 < uVar3);
          uVar122 = (int)uVar127 + (int)lVar119;
        }
LAB_140a3db34:
        uVar127 = uVar123;
        if ((int)(uint)param_6 < 3) goto LAB_140a3db60;
        lVar119 = (longlong)(int)uVar122;
      }
      else {
        if (uVar116 < 7) {
LAB_140a3d6bf:
          iVar141 = 1;
          uVar125 = uVar122;
          if (uVar147 != 0) {
            uVar127 = 0;
            do {
              uVar128 = uVar127;
              param_3[uVar128 * 2 + lVar119] = *(byte *)(param_1 + lStack_68 + uVar128 * 2);
              param_3[uVar128 * 2 + lVar119 + 1] = *(byte *)(param_1 + lStack_68 + 1 + uVar128 * 2);
              uVar127 = uVar128 + 1;
            } while (uVar127 < uVar150);
            uVar125 = uVar122 + (int)uVar127 * 2;
            iVar141 = (int)uVar128 + 2 + (int)uVar127;
          }
          if (iVar141 - 1U < uVar116) {
            param_3[(longlong)iVar141 + -1 + lVar119] =
                 *(byte *)(param_1 + iVar141 + -1 + lStack_68);
            uVar125 = uVar122 + iVar141;
          }
        }
        else {
          pbVar156 = param_3 + lVar119;
          lVar131 = param_1 + lStack_68;
          if (((longlong)pbVar156 - lVar131 < (longlong)(ulonglong)uVar116) &&
             (-((longlong)pbVar156 - lVar131) < (longlong)(ulonglong)uVar116)) goto LAB_140a3d6bf;
          if (uVar116 < 0x10) {
LAB_140a40654:
            uVar128 = 0;
          }
          else {
            uVar127 = (ulonglong)pbVar156 & 0xf;
            if ((int)uVar127 != 0) {
              uVar127 = (ulonglong)(0x10 - (int)uVar127);
            }
            iVar141 = (int)uVar127;
            if (uVar116 < iVar141 + 0x10U) goto LAB_140a40654;
            iVar121 = uVar116 - (uVar116 - iVar141 & 0xf);
            uVar128 = 0;
            if (iVar141 != 0) {
              do {
                pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
                uVar128 = uVar128 + 1;
              } while (uVar128 < uVar127);
            }
            if ((lVar131 + uVar127 & 0xf) == 0) {
              uVar128 = (ulonglong)iVar121;
              do {
                in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                uVar127 = uVar127 + 0x10;
              } while (uVar127 < uVar128);
            }
            else {
              uVar128 = (ulonglong)iVar121;
              do {
                in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                uVar127 = uVar127 + 0x10;
              } while (uVar127 < uVar128);
            }
          }
          for (; uVar128 < uVar118; uVar128 = uVar128 + 1) {
            pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
          }
          uVar125 = uVar122 + uVar116;
        }
        uVar122 = uVar125;
        lVar119 = (longlong)(int)uVar122;
        if ((int)(uint)param_6 < 3) {
          if (uVar151 == 0) goto LAB_140a3d7d0;
LAB_140a3d8f8:
          uVar127 = uVar123;
          if ((int)uVar1 < 1) goto LAB_140a3db60;
LAB_140a3d906:
          iVar141 = (int)lVar119;
          if ((int)uVar1 < 7) {
LAB_140a3daa1:
            iVar121 = 1;
            if (uVar146 != 0) {
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                param_3[uVar128 * 2 + lVar119] = *(byte *)(lVar7 + lStack_68 + uVar128 * 2);
                param_3[uVar128 * 2 + lVar119 + 1] = *(byte *)(lVar7 + lStack_68 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar149);
              uVar122 = iVar141 + (int)uVar127 * 2;
              iVar121 = (int)uVar128 + 2 + (int)uVar127;
            }
            if (iVar121 - 1U < uVar1) {
              param_3[(longlong)iVar121 + -1 + lVar119] =
                   *(byte *)(lVar7 + iVar121 + -1 + lStack_68);
              uVar122 = iVar141 + iVar121;
            }
          }
          else {
            pbVar156 = param_3 + lVar119;
            lVar131 = lVar7 + lStack_68;
            if (((longlong)pbVar156 - lVar131 < (longlong)(2 - uVar123)) &&
               (-((longlong)pbVar156 - lVar131) < (longlong)(2 - uVar123))) goto LAB_140a3daa1;
            if ((longlong)uVar3 < 0x10) {
LAB_140a40663:
              uVar128 = 0;
            }
            else {
              uVar127 = (ulonglong)pbVar156 & 0xf;
              if (uVar127 != 0) {
                uVar127 = 0x10 - uVar127;
              }
              if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a40663;
              uVar144 = 0;
              uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
              if (uVar127 != 0) {
                do {
                  pbVar156[uVar144] = *(byte *)(uVar144 + lVar131);
                  uVar144 = uVar144 + 1;
                } while (uVar144 < uVar127);
              }
              if ((lVar131 + uVar127 & 0xf) == 0) {
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
              else {
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
            }
            for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
              pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
            }
            uVar122 = iVar141 + 2 + iVar114;
          }
          goto LAB_140a3db34;
        }
        uVar122 = uVar122 + 2;
        param_3[lVar119] = *(byte *)(lStack_68 + -2 + lVar7);
        param_3[lVar119 + 1] = *(byte *)(lStack_68 + -1 + lVar7);
        lVar119 = (longlong)(int)uVar122;
        if (uVar151 == 0) {
          if (0 < (int)uVar1) goto LAB_140a3d7de;
        }
        else if (0 < (int)uVar1) goto LAB_140a3d906;
      }
      uVar127 = lVar119 - lVar2;
    }
    else {
LAB_140a3ca11:
      if (uVar125 == 1) {
        lVar119 = lVar134 * uVar136;
        bVar15 = *(byte *)(param_1 + lVar119);
        uVar125 = 0;
        uVar122 = 0;
        if (uVar132 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar123 < 0x10) || ((longlong)uVar123 < lVar5)) {
              uVar127 = 0;
            }
            else {
              uVar127 = 0;
              if (uVar153 != 0) {
                do {
                  param_3[uVar127] = bVar15;
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar153);
              }
              uVar159 = CONCAT22(CONCAT11(bVar15,bVar15),CONCAT11(bVar15,bVar15));
              in_XMM2._0_8_ = CONCAT44(uVar159,uVar159);
              in_XMM2._8_8_ = in_XMM2._0_8_;
              uVar128 = uVar153;
              do {
                *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                uVar128 = uVar128 + 0x10;
                uVar127 = uVar143;
                uVar125 = uVar140;
              } while (uVar128 < uVar143);
            }
            uVar122 = uVar125;
            if (uVar127 < uVar123) {
              do {
                param_3[uVar127] = bVar15;
                uVar127 = uVar127 + 1;
              } while (uVar127 < uVar123);
              uVar122 = (uint)uVar127;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar131 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar119),
              lVar131 < (longlong)uVar123 && (-lVar131 < (longlong)uVar123)))) {
            uVar129 = 1;
            if (uVar113 != 0) {
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                param_3[uVar128 * 2] = *(byte *)(lVar111 + lVar119 + uVar128 * 2);
                param_3[uVar128 * 2 + 1] = *(byte *)(lVar111 + lVar119 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar115);
              uVar125 = (int)uVar127 * 2;
              uVar129 = (int)uVar128 + 2 + (int)uVar127;
            }
            uVar122 = uVar125;
            if (uVar129 - 1 < param_5) {
              param_3[(longlong)(int)uVar129 + -1] =
                   *(byte *)((longlong)(int)uVar129 + -1 + lVar119 + lVar111);
              uVar122 = uVar129;
            }
          }
          else {
            if (((longlong)uVar123 < 0x10) || ((longlong)uVar123 < lVar5)) {
              uVar127 = 0;
            }
            else {
              uVar127 = 0;
              lVar131 = lVar119 + lVar111;
              if (uVar153 != 0) {
                do {
                  param_3[uVar127] = *(byte *)(uVar127 + lVar131);
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar153);
              }
              uVar128 = uVar153;
              uVar127 = uVar143;
              if ((lVar131 + uVar153 & 0xf) == 0) {
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar128 + lVar131);
                  *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                  uVar128 = uVar128 + 0x10;
                } while (uVar128 < uVar143);
              }
              else {
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar128 + lVar131));
                  *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                  uVar128 = uVar128 + 0x10;
                } while (uVar128 < uVar143);
              }
            }
            uVar122 = param_5;
            if (uVar127 < uVar123) {
              do {
                param_3[uVar127] = *(byte *)(uVar127 + lVar111 + lVar119);
                uVar127 = uVar127 + 1;
              } while (uVar127 < uVar123);
            }
          }
        }
        lVar131 = (longlong)(int)uVar122;
        if (0 < (int)(uint)param_6) {
          if (uVar116 < 7) {
LAB_140a4025e:
            iVar141 = 1;
            uVar125 = uVar122;
            if (uVar147 != 0) {
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                param_3[uVar128 * 2 + lVar131] = *(byte *)(param_1 + lVar119 + uVar128 * 2);
                param_3[uVar128 * 2 + lVar131 + 1] = *(byte *)(param_1 + lVar119 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar150);
              uVar125 = uVar122 + (int)uVar127 * 2;
              iVar141 = (int)uVar128 + 2 + (int)uVar127;
            }
            if (iVar141 - 1U < uVar116) {
              param_3[(longlong)iVar141 + -1 + lVar131] =
                   *(byte *)((longlong)iVar141 + -1 + param_1 + lVar119);
              uVar125 = uVar122 + iVar141;
            }
          }
          else {
            pbVar156 = param_3 + lVar131;
            lVar157 = param_1 + lVar119;
            if (((longlong)pbVar156 - lVar157 < (longlong)(ulonglong)uVar116) &&
               (-((longlong)pbVar156 - lVar157) < (longlong)(ulonglong)uVar116)) goto LAB_140a4025e;
            if (uVar116 < 0x10) {
LAB_140a40631:
              uVar128 = 0;
            }
            else {
              uVar127 = (ulonglong)pbVar156 & 0xf;
              if ((int)uVar127 != 0) {
                uVar127 = (ulonglong)(0x10 - (int)uVar127);
              }
              iVar141 = (int)uVar127;
              if (uVar116 < iVar141 + 0x10U) goto LAB_140a40631;
              iVar121 = uVar116 - (uVar116 - iVar141 & 0xf);
              uVar128 = 0;
              if (iVar141 != 0) {
                do {
                  pbVar156[uVar128] = *(byte *)(uVar128 + lVar157);
                  uVar128 = uVar128 + 1;
                } while (uVar128 < uVar127);
              }
              if ((lVar157 + uVar127 & 0xf) == 0) {
                uVar128 = (ulonglong)iVar121;
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar157);
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
              else {
                uVar128 = (ulonglong)iVar121;
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar157));
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
            }
            for (; uVar128 < uVar118; uVar128 = uVar128 + 1) {
              pbVar156[uVar128] = *(byte *)(uVar128 + lVar157);
            }
            uVar125 = uVar122 + uVar116;
          }
          uVar122 = uVar125;
          lVar131 = (longlong)(int)uVar122;
          if (2 < (int)(uint)param_6) {
            uVar122 = uVar122 + 2;
            param_3[lVar131] = *(byte *)(lVar7 + -2 + lVar119);
            param_3[lVar131 + 1] = *(byte *)(lVar7 + -1 + lVar119);
            lVar131 = (longlong)(int)uVar122;
          }
        }
        bVar15 = *(byte *)(param_1 + lVar126 + -1 + lVar119);
        iVar141 = (int)lVar131;
        if (uVar151 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar3 < 0x10) {
LAB_140a40638:
              iVar121 = 0;
            }
            else {
              pbVar156 = param_3 + lVar131;
              uVar127 = (ulonglong)pbVar156 & 0xf;
              if (uVar127 != 0) {
                uVar127 = 0x10 - uVar127;
              }
              if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a40638;
              iVar121 = iVar108 - (iVar108 - (int)uVar127 & 0xfU);
              uVar128 = 0;
              if (uVar127 != 0) {
                do {
                  pbVar156[uVar128] = bVar15;
                  uVar128 = uVar128 + 1;
                } while (uVar128 < uVar127);
              }
              uVar159 = CONCAT22(CONCAT11(bVar15,bVar15),CONCAT11(bVar15,bVar15));
              in_XMM2._0_8_ = CONCAT44(uVar159,uVar159);
              in_XMM2._8_8_ = in_XMM2._0_8_;
              do {
                *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                uVar127 = uVar127 + 0x10;
              } while (uVar127 < (ulonglong)(longlong)iVar121);
              uVar122 = iVar141 + iVar121;
            }
            uVar127 = (ulonglong)iVar121;
            if (uVar3 <= uVar127) goto LAB_140a40610;
            do {
              param_3[uVar127 + lVar131] = bVar15;
              uVar127 = uVar127 + 1;
            } while (uVar127 < uVar3);
            lVar131 = (longlong)((int)uVar127 + iVar141);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a40613;
          if (6 < (int)uVar1) {
            lVar157 = lVar119 + lVar7;
            pbVar156 = param_3 + lVar131;
            if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar157) ||
               ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar157))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4063f:
                uVar128 = 0;
              }
              else {
                uVar127 = (ulonglong)pbVar156 & 0xf;
                if (uVar127 != 0) {
                  uVar127 = 0x10 - uVar127;
                }
                if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a4063f;
                uVar144 = 0;
                uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                if (uVar127 != 0) {
                  do {
                    pbVar156[uVar144] = *(byte *)(uVar144 + lVar157);
                    uVar144 = uVar144 + 1;
                  } while (uVar144 < uVar127);
                }
                if ((lVar157 + uVar127 & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar157);
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar157));
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
              }
              for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
                pbVar156[uVar128] = *(byte *)(uVar128 + lVar157);
              }
              lVar131 = (longlong)(iVar141 + 2 + iVar114);
              goto LAB_140a40613;
            }
          }
          iVar121 = 1;
          if (uVar146 != 0) {
            uVar127 = 0;
            do {
              uVar128 = uVar127;
              param_3[uVar128 * 2 + lVar131] = *(byte *)(lVar119 + lVar7 + uVar128 * 2);
              param_3[uVar128 * 2 + lVar131 + 1] = *(byte *)(lVar119 + lVar7 + 1 + uVar128 * 2);
              uVar127 = uVar128 + 1;
            } while (uVar127 < uVar149);
            uVar122 = iVar141 + (int)uVar127 * 2;
            iVar121 = (int)uVar128 + 2 + (int)uVar127;
          }
          if (iVar121 - 1U < uVar1) {
            param_3[(longlong)iVar121 + -1 + lVar131] =
                 *(byte *)((longlong)iVar121 + -1 + lVar119 + lVar7);
            lVar131 = (longlong)(iVar121 + iVar141);
            goto LAB_140a40613;
          }
LAB_140a40610:
          lVar131 = (longlong)(int)uVar122;
        }
LAB_140a40613:
        uVar127 = lVar131 - lVar2;
        if ((int)(uint)param_6 < 3) {
          uVar127 = uVar123;
        }
      }
      else if (uVar125 == 2) {
        uVar128 = uVar123;
        if (0 < (int)(uint)param_6) {
          if (uVar116 < 7) {
LAB_140a3ed9d:
            iVar141 = 1;
            uVar125 = param_5;
            if (uVar147 != 0) {
              lVar119 = lVar134 * uVar136 + param_1;
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                pbVar6[uVar128 * 2] = *(byte *)(lVar119 + uVar128 * 2);
                pbVar6[uVar128 * 2 + 1] = *(byte *)(lVar119 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar150);
              uVar125 = param_5 + (int)uVar127 * 2;
              iVar141 = (int)uVar128 + 2 + (int)uVar127;
            }
            if (iVar141 - 1U < uVar116) {
              pbVar6[(longlong)iVar141 + -1] = *(byte *)(param_1 + iVar141 + -1 + lVar134 * uVar136)
              ;
              uVar125 = param_5 + iVar141;
            }
          }
          else {
            lVar119 = lVar134 * uVar136 + param_1;
            if (((longlong)pbVar6 - lVar119 < (longlong)(ulonglong)uVar116) &&
               (-((longlong)pbVar6 - lVar119) < (longlong)(ulonglong)uVar116)) goto LAB_140a3ed9d;
            if ((uVar116 < 0x10) || (uVar116 < iVar133 + 0x10U)) {
              iVar141 = 0;
            }
            else {
              uVar127 = 0;
              if (iVar133 != 0) {
                do {
                  pbVar6[uVar127] = *(byte *)(uVar127 + lVar119);
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar135);
              }
              uVar127 = uVar135;
              iVar141 = iVar120;
              if ((lVar119 + uVar135 & 0xf) == 0) {
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar119);
                  *(undefined1 (*) [16])(pbVar6 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar124);
              }
              else {
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar119));
                  *(undefined1 (*) [16])(pbVar6 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar124);
              }
            }
            for (uVar127 = (ulonglong)iVar141; uVar125 = param_5 + uVar116, uVar127 < uVar118;
                uVar127 = uVar127 + 1) {
              pbVar6[uVar127] = *(byte *)(uVar127 + lVar119);
            }
          }
          uVar128 = (ulonglong)(int)uVar125;
          if (2 < (int)(uint)param_6) {
            lVar119 = lVar134 * uVar136;
            if (uVar132 == 0) {
              lVar131 = lVar119 + lVar7;
              if (-1 < (int)uVar158) {
                if (((int)param_5 < 7) ||
                   ((pbVar156 = param_3 + ((uVar123 - 1) - (lVar119 + -1 + lVar7)),
                    (longlong)pbVar156 <= (longlong)uVar123 &&
                    ((byte *)-uVar123 == pbVar156 || -(longlong)pbVar156 < (longlong)uVar123)))) {
                  iVar141 = 1;
                  lVar157 = 0;
                  uVar127 = 0;
                  if (uVar113 != 0) {
                    do {
                      uVar144 = uVar127;
                      uVar127 = uVar144 + 1;
                      pbVar6[lVar157 + -1] = *(byte *)(lVar157 + -1 + lVar131);
                      pbVar6[lVar157 + -2] = *(byte *)(lVar157 + -2 + lVar131);
                      lVar157 = lVar157 + -2;
                    } while (uVar127 < uVar115);
                    iVar141 = (int)uVar144 + 2 + (int)uVar127;
                  }
                  if (iVar141 - 1U < param_5) {
                    pbVar6[-(longlong)iVar141] = *(byte *)(lVar131 - iVar141);
                  }
                }
                else {
                  if (((longlong)uVar138 < 0x10) || ((longlong)uVar138 < lVar137)) {
                    uVar127 = 0;
                  }
                  else {
                    uVar127 = 0;
                    lVar157 = lVar131 - uVar123;
                    if (uVar130 != 0) {
                      do {
                        param_3[uVar127] = *(byte *)(uVar127 + lVar157);
                        uVar127 = uVar127 + 1;
                      } while (uVar127 < uVar130);
                    }
                    uVar144 = uVar130;
                    uVar127 = uVar139;
                    if ((lVar157 + uVar130 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar144 + lVar157);
                        *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                        uVar144 = uVar144 + 0x10;
                      } while (uVar144 < uVar139);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar144 + lVar157));
                        *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                        uVar144 = uVar144 + 0x10;
                      } while (uVar144 < uVar139);
                    }
                  }
                  if (uVar127 < uVar138) {
                    do {
                      param_3[uVar127] = *(byte *)(uVar127 + (lVar131 - uVar123));
                      uVar127 = uVar127 + 1;
                    } while (uVar127 < uVar138);
                  }
                }
              }
            }
            else if (-1 < (int)uVar158) {
              if (6 < (int)param_5) {
                lVar131 = param_1 + -1 + lVar119;
                pbVar156 = param_3 + ((uVar123 - 1) - lVar131);
                lVar131 = lVar131 + 1;
                if (((longlong)uVar123 < (longlong)pbVar156) ||
                   ((byte *)-uVar123 != pbVar156 && (longlong)uVar123 <= -(longlong)pbVar156)) {
                  if (((longlong)uVar138 < 0x10) || ((longlong)uVar138 < lVar137)) {
                    uVar127 = 0;
                  }
                  else {
                    uVar127 = 0;
                    lVar157 = lVar131 - uVar123;
                    if (uVar130 != 0) {
                      do {
                        param_3[uVar127] = *(byte *)(uVar127 + lVar157);
                        uVar127 = uVar127 + 1;
                      } while (uVar127 < uVar130);
                    }
                    uVar144 = uVar130;
                    uVar127 = uVar139;
                    if ((lVar157 + uVar130 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar144 + lVar157);
                        *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                        uVar144 = uVar144 + 0x10;
                      } while (uVar144 < uVar139);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar144 + lVar157));
                        *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                        uVar144 = uVar144 + 0x10;
                      } while (uVar144 < uVar139);
                    }
                  }
                  if (uVar127 < uVar138) {
                    do {
                      param_3[uVar127] = *(byte *)(uVar127 + (lVar131 - uVar123));
                      uVar127 = uVar127 + 1;
                    } while (uVar127 < uVar138);
                  }
                  goto LAB_140a3f252;
                }
              }
              iVar141 = 1;
              lVar131 = 0;
              if (uVar113 != 0) {
                uVar127 = 0;
                do {
                  uVar144 = uVar127;
                  uVar127 = uVar144 + 1;
                  pbVar6[lVar131 + -1] = *(byte *)(lVar131 + -1 + param_1 + lVar119);
                  pbVar6[lVar131 + -2] = *(byte *)(lVar131 + -2 + param_1 + lVar119);
                  lVar131 = lVar131 + -2;
                } while (uVar127 < uVar115);
                iVar141 = (int)uVar144 + 2 + (int)uVar127;
              }
              if (iVar141 - 1U < param_5) {
                pbVar6[-(longlong)iVar141] = *(byte *)((param_1 + lVar119) - (longlong)iVar141);
              }
            }
LAB_140a3f252:
            lVar131 = lVar119 + lVar7;
            param_3[uVar128] = *(byte *)(lVar131 + -2);
            param_3[uVar128 + 1] = *(byte *)(lVar131 + -1);
            iVar121 = uVar125 + 2;
            lVar157 = (longlong)iVar121;
            iVar141 = iVar121;
            if (uVar151 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar156 = param_3 + lVar157;
                  lVar131 = param_1 + lVar119;
                  if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar131) ||
                     ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar131))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a3fe2d:
                      uVar128 = 0;
                    }
                    else {
                      uVar127 = (ulonglong)pbVar156 & 0xf;
                      if (uVar127 != 0) {
                        uVar127 = 0x10 - uVar127;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3fe2d;
                      uVar144 = 0;
                      uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                      if (uVar127 != 0) {
                        do {
                          pbVar156[uVar144] = *(byte *)(uVar144 + lVar131);
                          uVar144 = uVar144 + 1;
                        } while (uVar144 < uVar127);
                      }
                      if ((lVar131 + uVar127 & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                          *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                          uVar127 = uVar127 + 0x10;
                        } while (uVar127 < uVar128);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                          *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                          uVar127 = uVar127 + 0x10;
                        } while (uVar127 < uVar128);
                      }
                    }
                    for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
                      pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
                    }
                    lVar157 = (longlong)(int)(iVar114 + 4 + uVar125);
                    goto LAB_140a3f633;
                  }
                }
                iVar117 = 1;
                if (uVar146 != 0) {
                  uVar127 = 0;
                  do {
                    uVar128 = uVar127;
                    param_3[uVar128 * 2 + lVar157] = *(byte *)(param_1 + lVar119 + uVar128 * 2);
                    param_3[uVar128 * 2 + lVar157 + 1] =
                         *(byte *)(param_1 + lVar119 + 1 + uVar128 * 2);
                    uVar127 = uVar128 + 1;
                  } while (uVar127 < uVar149);
                  iVar141 = (int)uVar127 * 2 + 2 + uVar125;
                  iVar117 = (int)uVar128 + 2 + (int)uVar127;
                }
                if (uVar1 <= iVar117 - 1U) goto LAB_140a3f630;
                param_3[(longlong)iVar117 + -1 + lVar157] =
                     *(byte *)((longlong)iVar117 + -1 + lVar119 + param_1);
                lVar157 = (longlong)(iVar117 + iVar121);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a3f633;
              if (6 < (int)uVar1) {
                pbVar156 = param_3 + lVar157;
                if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar131) ||
                   ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar131))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a3fe34:
                    uVar128 = 0;
                  }
                  else {
                    uVar127 = (ulonglong)pbVar156 & 0xf;
                    if (uVar127 != 0) {
                      uVar127 = 0x10 - uVar127;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3fe34;
                    uVar144 = 0;
                    uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                    if (uVar127 != 0) {
                      do {
                        pbVar156[uVar144] = *(byte *)(uVar144 + lVar131);
                        uVar144 = uVar144 + 1;
                      } while (uVar144 < uVar127);
                    }
                    if ((lVar131 + uVar127 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                  }
                  for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
                    pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
                  }
                  lVar157 = (longlong)(int)(iVar114 + 4 + uVar125);
                  goto LAB_140a3f633;
                }
              }
              iVar117 = 1;
              uVar127 = 0;
              if (uVar146 != 0) {
                do {
                  uVar128 = uVar127;
                  param_3[uVar128 * 2 + lVar157] = *(byte *)(lVar131 + uVar128 * 2);
                  param_3[uVar128 * 2 + lVar157 + 1] = *(byte *)(lVar131 + 1 + uVar128 * 2);
                  uVar127 = uVar128 + 1;
                } while (uVar127 < uVar149);
                iVar141 = (int)uVar127 * 2 + 2 + uVar125;
                iVar117 = (int)uVar128 + 2 + (int)uVar127;
              }
              if (iVar117 - 1U < uVar1) {
                param_3[(longlong)iVar117 + -1 + lVar157] =
                     *(byte *)((longlong)iVar117 + -1 + lVar131);
                lVar157 = (longlong)(iVar117 + iVar121);
                goto LAB_140a3f633;
              }
LAB_140a3f630:
              lVar157 = (longlong)iVar141;
            }
LAB_140a3f633:
            uVar127 = lVar157 - lVar2;
            goto LAB_140a3db60;
          }
        }
        if (uVar132 == 0) {
          if (-1 < (int)uVar158) {
            if (((int)param_5 < 7) ||
               ((pbVar156 = param_3 + ((uVar123 - 1) - (longlong)(pbVar6 + lVar126 + -1)),
                (longlong)pbVar156 <= (longlong)uVar123 &&
                ((byte *)-uVar123 == pbVar156 || -(longlong)pbVar156 < (longlong)uVar123)))) {
              iVar141 = 1;
              lVar119 = 0;
              uVar127 = 0;
              if (uVar113 != 0) {
                do {
                  uVar144 = uVar127;
                  uVar127 = uVar144 + 1;
                  pbVar6[lVar119 + -1] = pbVar6[lVar119 + -1 + lVar126];
                  pbVar6[lVar119 + -2] = pbVar6[lVar119 + -2 + lVar126];
                  lVar119 = lVar119 + -2;
                } while (uVar127 < uVar115);
                iVar141 = (int)uVar144 + 2 + (int)uVar127;
              }
              if (iVar141 - 1U < param_5) {
                pbVar6[-(longlong)iVar141] = pbVar6[lVar126 - iVar141];
              }
            }
            else {
              if (((longlong)uVar138 < 0x10) || ((longlong)uVar138 < lVar137)) {
                uVar127 = 0;
              }
              else {
                uVar127 = 0;
                if (uVar130 != 0) {
                  do {
                    param_3[uVar127] = pbVar6[uVar127 + lVar107];
                    uVar127 = uVar127 + 1;
                  } while (uVar127 < uVar130);
                }
                uVar144 = uVar130;
                uVar127 = uVar139;
                if (((ulonglong)(pbVar6 + uVar130 + lVar107) & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(pbVar6 + uVar144 + lVar107);
                    *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                    uVar144 = uVar144 + 0x10;
                  } while (uVar144 < uVar139);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(pbVar6 + uVar144 + lVar107));
                    *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                    uVar144 = uVar144 + 0x10;
                  } while (uVar144 < uVar139);
                }
              }
              for (; uVar127 < uVar138; uVar127 = uVar127 + 1) {
                param_3[uVar127] = pbVar6[uVar127 + lVar107];
              }
            }
          }
        }
        else if (-1 < (int)uVar158) {
          if (6 < (int)param_5) {
            lVar119 = param_1 + lVar134 * uVar136;
            pbVar156 = param_3 + ((uVar123 - 1) - (param_1 + -1 + lVar134 * uVar136));
            if (((longlong)uVar123 < (longlong)pbVar156) ||
               ((byte *)-uVar123 != pbVar156 && (longlong)uVar123 <= -(longlong)pbVar156)) {
              if (((longlong)uVar138 < 0x10) || ((longlong)uVar138 < lVar137)) {
                uVar127 = 0;
              }
              else {
                uVar127 = 0;
                lVar131 = lVar119 - uVar123;
                if (uVar130 != 0) {
                  do {
                    param_3[uVar127] = *(byte *)(uVar127 + lVar131);
                    uVar127 = uVar127 + 1;
                  } while (uVar127 < uVar130);
                }
                uVar144 = uVar130;
                uVar127 = uVar139;
                if ((lVar131 + uVar130 & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar144 + lVar131);
                    *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                    uVar144 = uVar144 + 0x10;
                  } while (uVar144 < uVar139);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar144 + lVar131));
                    *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                    uVar144 = uVar144 + 0x10;
                  } while (uVar144 < uVar139);
                }
              }
              if (uVar127 < uVar138) {
                do {
                  param_3[uVar127] = *(byte *)(uVar127 + (lVar119 - uVar123));
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar138);
              }
              goto LAB_140a3fa53;
            }
          }
          iVar141 = 1;
          lVar119 = 0;
          if (uVar113 != 0) {
            lVar131 = lVar134 * uVar136 + param_1;
            uVar127 = 0;
            do {
              uVar144 = uVar127;
              uVar127 = uVar144 + 1;
              pbVar6[lVar119 + -1] = *(byte *)(lVar119 + -1 + lVar131);
              pbVar6[lVar119 + -2] = *(byte *)(lVar119 + -2 + lVar131);
              lVar119 = lVar119 + -2;
            } while (uVar127 < uVar115);
            iVar141 = (int)uVar144 + 2 + (int)uVar127;
          }
          if (iVar141 - 1U < param_5) {
            pbVar6[-(longlong)iVar141] = *(byte *)((param_1 - iVar141) + lVar134 * uVar136);
          }
        }
LAB_140a3fa53:
        if (uVar151 == 0) {
          uVar127 = uVar123;
          if ((int)uVar1 < 1) goto LAB_140a3db60;
          if (6 < (int)uVar1) {
            pbVar156 = param_3 + uVar128;
            pbVar9 = param_3 + (uVar128 - lVar126);
            if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - (longlong)pbVar9) ||
               ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - (longlong)pbVar9))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a3fe49:
                uVar128 = 0;
              }
              else {
                uVar127 = (ulonglong)pbVar156 & 0xf;
                if (uVar127 != 0) {
                  uVar127 = 0x10 - uVar127;
                }
                if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3fe49;
                uVar144 = 0;
                uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                if (uVar127 != 0) {
                  do {
                    pbVar156[uVar144] = pbVar9[uVar144];
                    uVar144 = uVar144 + 1;
                  } while (uVar144 < uVar127);
                }
                if (((ulonglong)(pbVar9 + uVar127) & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(pbVar9 + uVar127);
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(pbVar9 + uVar127));
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
              }
              for (; uVar127 = uVar123, uVar128 < uVar3; uVar128 = uVar128 + 1) {
                pbVar156[uVar128] = pbVar9[uVar128];
              }
              goto LAB_140a3db60;
            }
          }
          iVar141 = 1;
          if (uVar146 != 0) {
            uVar127 = 0;
            do {
              uVar144 = uVar127;
              param_3[uVar144 * 2 + uVar128] = param_3[uVar144 * 2 + (uVar128 - lVar126)];
              param_3[uVar144 * 2 + uVar128 + 1] = param_3[uVar144 * 2 + (uVar128 - lVar126) + 1];
              uVar127 = uVar144 + 1;
            } while (uVar127 < uVar149);
            iVar141 = (int)uVar144 + 2 + (int)uVar127;
          }
          uVar127 = uVar123;
          if (iVar141 - 1U < uVar1) {
            param_3[(longlong)iVar141 + -1 + uVar128] =
                 param_3[(longlong)iVar141 + -1 + (uVar128 - lVar126)];
          }
        }
        else {
          uVar127 = uVar123;
          if ((int)uVar1 < 1) goto LAB_140a3db60;
          if (6 < (int)uVar1) {
            pbVar156 = param_3 + uVar128;
            lVar119 = lVar134 * uVar136 + lVar7;
            if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar119) ||
               ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar119))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a3fe50:
                uVar128 = 0;
              }
              else {
                uVar127 = (ulonglong)pbVar156 & 0xf;
                if (uVar127 != 0) {
                  uVar127 = 0x10 - uVar127;
                }
                if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3fe50;
                uVar144 = 0;
                uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                if (uVar127 != 0) {
                  do {
                    pbVar156[uVar144] = *(byte *)(uVar144 + lVar119);
                    uVar144 = uVar144 + 1;
                  } while (uVar144 < uVar127);
                }
                if ((lVar119 + uVar127 & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar119);
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar119));
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
              }
              for (; uVar127 = uVar123, uVar128 < uVar3; uVar128 = uVar128 + 1) {
                pbVar156[uVar128] = *(byte *)(uVar128 + lVar119);
              }
              goto LAB_140a3db60;
            }
          }
          iVar141 = 1;
          if (uVar146 != 0) {
            lVar119 = lVar134 * uVar136 + lVar7;
            uVar127 = 0;
            do {
              uVar144 = uVar127;
              param_3[uVar144 * 2 + uVar128] = *(byte *)(lVar119 + uVar144 * 2);
              param_3[uVar144 * 2 + uVar128 + 1] = *(byte *)(lVar119 + 1 + uVar144 * 2);
              uVar127 = uVar144 + 1;
            } while (uVar127 < uVar149);
            iVar141 = (int)uVar144 + 2 + (int)uVar127;
          }
          uVar127 = uVar123;
          if (iVar141 - 1U < uVar1) {
            param_3[(longlong)iVar141 + -1 + uVar128] =
                 *(byte *)(lVar7 + iVar141 + -1 + lVar134 * uVar136);
          }
        }
      }
      else if (uVar125 == 3) {
        uVar128 = uVar123;
        if (0 < (int)(uint)param_6) {
          if (uVar116 < 7) {
LAB_140a3e07c:
            iVar141 = 1;
            uVar125 = param_5;
            if (uVar147 != 0) {
              lVar119 = lVar134 * uVar136 + param_1;
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                pbVar6[uVar128 * 2] = *(byte *)(lVar119 + uVar128 * 2);
                pbVar6[uVar128 * 2 + 1] = *(byte *)(lVar119 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar150);
              uVar125 = param_5 + (int)uVar127 * 2;
              iVar141 = (int)uVar128 + 2 + (int)uVar127;
            }
            if (iVar141 - 1U < uVar116) {
              pbVar6[(longlong)iVar141 + -1] = *(byte *)(param_1 + iVar141 + -1 + lVar134 * uVar136)
              ;
              uVar125 = param_5 + iVar141;
            }
          }
          else {
            lVar119 = lVar134 * uVar136 + param_1;
            if (((longlong)pbVar6 - lVar119 < (longlong)(ulonglong)uVar116) &&
               (-((longlong)pbVar6 - lVar119) < (longlong)(ulonglong)uVar116)) goto LAB_140a3e07c;
            if ((uVar116 < 0x10) || (uVar116 < iVar133 + 0x10U)) {
              uVar127 = 0;
            }
            else {
              uVar127 = 0;
              if (iVar133 != 0) {
                do {
                  pbVar6[uVar127] = *(byte *)(uVar127 + lVar119);
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar135);
              }
              uVar128 = uVar135;
              uVar127 = uVar124;
              if ((lVar119 + uVar135 & 0xf) == 0) {
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar128 + lVar119);
                  *(undefined1 (*) [16])(pbVar6 + uVar128) = in_XMM2;
                  uVar128 = uVar128 + 0x10;
                } while (uVar128 < uVar124);
              }
              else {
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar128 + lVar119));
                  *(undefined1 (*) [16])(pbVar6 + uVar128) = in_XMM2;
                  uVar128 = uVar128 + 0x10;
                } while (uVar128 < uVar124);
              }
            }
            for (; uVar125 = param_5 + uVar116, uVar127 < uVar118; uVar127 = uVar127 + 1) {
              pbVar6[uVar127] = *(byte *)(uVar127 + lVar119);
            }
          }
          uVar128 = (ulonglong)(int)uVar125;
          if (2 < (int)(uint)param_6) {
            if (uVar132 == 0) {
              if (-1 < (int)uVar158) {
                iVar141 = 1;
                lVar119 = 0;
                if (uVar113 != 0) {
                  lVar131 = lVar134 * uVar136 + param_1 + uVar148;
                  uVar127 = 0;
                  do {
                    uVar144 = uVar127;
                    pbVar6[lVar119 + -1] = *(byte *)(lVar131 + uVar144 * 2);
                    uVar127 = uVar144 + 1;
                    pbVar6[lVar119 + -2] = *(byte *)(lVar131 + 1 + uVar144 * 2);
                    lVar119 = lVar119 + -2;
                  } while (uVar127 < uVar115);
                  iVar141 = (int)uVar144 + 2 + (int)uVar127;
                }
                if (iVar141 - 1U < param_5) {
                  pbVar6[-(longlong)iVar141] =
                       *(byte *)((longlong)iVar141 + -1 + lVar134 * uVar136 + param_1 + uVar148);
                }
              }
            }
            else {
              lVar119 = lVar134 * uVar136;
              if (-1 < (int)uVar158) {
                if (6 < (int)param_5) {
                  pbVar156 = param_3 + ((uVar123 - 1) - (param_1 + -1 + lVar119));
                  if (((longlong)uVar123 < (longlong)pbVar156) ||
                     ((byte *)-uVar123 != pbVar156 && (longlong)uVar123 <= -(longlong)pbVar156)) {
                    if (((longlong)uVar138 < 0x10) || ((longlong)uVar138 < lVar137)) {
                      uVar127 = 0;
                    }
                    else {
                      uVar127 = 0;
                      lVar131 = (param_1 + lVar119) - uVar123;
                      if (uVar130 != 0) {
                        do {
                          param_3[uVar127] = *(byte *)(uVar127 + lVar131);
                          uVar127 = uVar127 + 1;
                        } while (uVar127 < uVar130);
                      }
                      uVar144 = uVar130;
                      uVar127 = uVar139;
                      if ((lVar131 + uVar130 & 0xf) == 0) {
                        do {
                          in_XMM2 = *(undefined1 (*) [16])(uVar144 + lVar131);
                          *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                          uVar144 = uVar144 + 0x10;
                        } while (uVar144 < uVar139);
                      }
                      else {
                        do {
                          in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar144 + lVar131));
                          *(undefined1 (*) [16])(param_3 + uVar144) = in_XMM2;
                          uVar144 = uVar144 + 0x10;
                        } while (uVar144 < uVar139);
                      }
                    }
                    if (uVar127 < uVar138) {
                      do {
                        param_3[uVar127] = *(byte *)(uVar127 + ((param_1 + lVar119) - uVar123));
                        uVar127 = uVar127 + 1;
                      } while (uVar127 < uVar138);
                    }
                    goto LAB_140a3e3f8;
                  }
                }
                iVar141 = 1;
                lVar131 = 0;
                if (uVar113 != 0) {
                  uVar127 = 0;
                  do {
                    uVar144 = uVar127;
                    uVar127 = uVar144 + 1;
                    pbVar6[lVar131 + -1] = *(byte *)(lVar131 + -1 + param_1 + lVar119);
                    pbVar6[lVar131 + -2] = *(byte *)(lVar131 + -2 + param_1 + lVar119);
                    lVar131 = lVar131 + -2;
                  } while (uVar127 < uVar115);
                  iVar141 = (int)uVar144 + 2 + (int)uVar127;
                }
                if (iVar141 - 1U < param_5) {
                  pbVar6[-(longlong)iVar141] = *(byte *)((param_1 + lVar119) - (longlong)iVar141);
                }
              }
            }
LAB_140a3e3f8:
            lVar157 = lVar134 * uVar136;
            lVar119 = lVar157 + lVar7;
            param_3[uVar128] = *(byte *)(lVar119 + -2);
            param_3[uVar128 + 1] = *(byte *)(lVar119 + -1);
            iVar121 = uVar125 + 2;
            lVar131 = (longlong)iVar121;
            iVar141 = iVar121;
            if (uVar151 == 0) {
              if (0 < (int)uVar1) {
                iVar117 = 1;
                lVar119 = 0;
                if (uVar146 != 0) {
                  lVar8 = lVar157 + lVar154;
                  uVar127 = 0;
                  do {
                    uVar128 = uVar127;
                    param_3[uVar128 * 2 + lVar131] = *(byte *)(lVar119 + -1 + lVar8);
                    lVar10 = lVar119 + -2;
                    lVar119 = lVar119 + -2;
                    param_3[uVar128 * 2 + lVar131 + 1] = *(byte *)(lVar10 + lVar8);
                    uVar127 = uVar128 + 1;
                  } while (uVar127 < uVar149);
                  iVar141 = (int)uVar127 * 2 + 2 + uVar125;
                  iVar117 = (int)uVar128 + 2 + (int)uVar127;
                }
                if (uVar1 <= iVar117 - 1U) goto LAB_140a3e6af;
                param_3[(longlong)iVar117 + -1 + lVar131] =
                     *(byte *)((lVar157 + lVar154) - (longlong)iVar117);
                lVar131 = (longlong)(iVar117 + iVar121);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a3e6b2;
              if (6 < (int)uVar1) {
                pbVar156 = param_3 + lVar131;
                if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar119) ||
                   ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar119))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a3ec0c:
                    uVar128 = 0;
                  }
                  else {
                    uVar127 = (ulonglong)pbVar156 & 0xf;
                    if (uVar127 != 0) {
                      uVar127 = 0x10 - uVar127;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3ec0c;
                    uVar144 = 0;
                    uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                    if (uVar127 != 0) {
                      do {
                        pbVar156[uVar144] = *(byte *)(uVar144 + lVar119);
                        uVar144 = uVar144 + 1;
                      } while (uVar144 < uVar127);
                    }
                    if ((lVar119 + uVar127 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar119);
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar119));
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                  }
                  for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
                    pbVar156[uVar128] = *(byte *)(uVar128 + lVar119);
                  }
                  lVar131 = (longlong)(int)(iVar114 + 4 + uVar125);
                  goto LAB_140a3e6b2;
                }
              }
              iVar117 = 1;
              uVar127 = 0;
              if (uVar146 != 0) {
                do {
                  uVar128 = uVar127;
                  param_3[uVar128 * 2 + lVar131] = *(byte *)(lVar119 + uVar128 * 2);
                  param_3[uVar128 * 2 + lVar131 + 1] = *(byte *)(lVar119 + 1 + uVar128 * 2);
                  uVar127 = uVar128 + 1;
                } while (uVar127 < uVar149);
                iVar141 = (int)uVar127 * 2 + 2 + uVar125;
                iVar117 = (int)uVar128 + 2 + (int)uVar127;
              }
              if (iVar117 - 1U < uVar1) {
                param_3[(longlong)iVar117 + -1 + lVar131] =
                     *(byte *)((longlong)iVar117 + -1 + lVar119);
                lVar131 = (longlong)(iVar117 + iVar121);
              }
              else {
LAB_140a3e6af:
                lVar131 = (longlong)iVar141;
              }
            }
LAB_140a3e6b2:
            uVar127 = lVar131 - lVar2;
            goto LAB_140a3db60;
          }
        }
        uVar127 = (ulonglong)uVar158;
        if (uVar132 == 0) {
          uVar125 = uVar158;
          if (uVar151 == 0) {
            while (-1 < (int)uVar125) {
              uVar125 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar128 = (ulonglong)(int)uVar127;
                uVar127 = uVar128;
                do {
                  if ((int)uVar127 < 0) break;
                  lVar119 = (longlong)(int)uVar125;
                  uVar125 = uVar125 + 1;
                  uVar127 = (ulonglong)((int)uVar127 - 1);
                  param_3[uVar128 - lVar119] = param_3[lVar119 + uVar148 + 1 + uVar128];
                } while (uVar125 < uVar145);
              }
              uVar125 = (uint)uVar127;
            }
            uVar128 = 0;
            uVar127 = uVar123;
            iVar141 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
            iVar121 = iVar110;
            iVar117 = iVar110;
            if ((int)param_5 < 2) {
              do {
                iVar142 = iVar141 + iVar121;
                pbVar6[uVar128 + lVar126] = param_3[iVar141];
                if (((int)(((uint)param_6 + 2) - uVar1) <= iVar142) || (iVar142 < (int)param_5)) {
                  iVar141 = iVar121 + iVar117;
                  iVar121 = -iVar121;
                  iVar142 = iVar142 - iVar141;
                  iVar117 = -iVar117;
                }
                uVar128 = uVar128 + 1;
                iVar141 = iVar142;
              } while (uVar128 < uVar3);
            }
          }
          else {
            if (-1 < (int)uVar158) {
              iVar141 = 1;
              lVar119 = 0;
              if (uVar113 != 0) {
                lVar131 = lVar134 * uVar136 + param_1;
                uVar127 = 0;
                do {
                  uVar144 = uVar127;
                  pbVar6[lVar119 + -1] = *(byte *)(lVar131 + 1 + uVar144 * 2);
                  uVar127 = uVar144 + 1;
                  pbVar6[lVar119 + -2] = *(byte *)(lVar131 + 2 + uVar144 * 2);
                  lVar119 = lVar119 + -2;
                } while (uVar127 < uVar115);
                iVar141 = (int)uVar144 + 2 + (int)uVar127;
              }
              if (iVar141 - 1U < param_5) {
                pbVar6[-(longlong)iVar141] = *(byte *)(param_1 + iVar141 + lVar134 * uVar136);
              }
            }
LAB_140a3e972:
            uVar127 = uVar123;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar156 = param_3 + uVar128;
                lVar119 = lVar134 * uVar136 + lVar7;
                if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar119) ||
                   ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar119))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a3ec13:
                    uVar128 = 0;
                  }
                  else {
                    uVar127 = (ulonglong)pbVar156 & 0xf;
                    if (uVar127 != 0) {
                      uVar127 = 0x10 - uVar127;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3ec13;
                    uVar144 = 0;
                    uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                    if (uVar127 != 0) {
                      do {
                        pbVar156[uVar144] = *(byte *)(uVar144 + lVar119);
                        uVar144 = uVar144 + 1;
                      } while (uVar144 < uVar127);
                    }
                    if ((lVar119 + uVar127 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar119);
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar119));
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                  }
                  for (; uVar127 = uVar123, uVar128 < uVar3; uVar128 = uVar128 + 1) {
                    pbVar156[uVar128] = *(byte *)(uVar128 + lVar119);
                  }
                  goto LAB_140a3db60;
                }
              }
              iVar141 = 1;
              if (uVar146 != 0) {
                lVar119 = lVar134 * uVar136 + lVar7;
                uVar127 = 0;
                do {
                  uVar144 = uVar127;
                  param_3[uVar144 * 2 + uVar128] = *(byte *)(lVar119 + uVar144 * 2);
                  param_3[uVar144 * 2 + uVar128 + 1] = *(byte *)(lVar119 + 1 + uVar144 * 2);
                  uVar127 = uVar144 + 1;
                } while (uVar127 < uVar149);
                iVar141 = (int)uVar144 + 2 + (int)uVar127;
              }
              uVar127 = uVar123;
              if (iVar141 - 1U < uVar1) {
                param_3[(longlong)iVar141 + -1 + uVar128] =
                     *(byte *)(lVar7 + iVar141 + -1 + lVar134 * uVar136);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar158) {
            do {
              uVar125 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar141 = (int)uVar127;
                do {
                  if ((int)uVar127 < 0) break;
                  lVar119 = (longlong)(int)uVar125;
                  uVar125 = uVar125 + 1;
                  uVar127 = (ulonglong)((int)uVar127 - 1);
                  param_3[iVar141 - lVar119] =
                       *(byte *)(((longlong)iVar141 + lVar134 * uVar136 + lVar111) - lVar119);
                } while (uVar125 < uVar145);
              }
            } while (-1 < (int)uVar127);
          }
          if (uVar151 != 0) goto LAB_140a3e972;
          uVar127 = uVar123;
          if (0 < (int)uVar1) {
            iVar141 = 1;
            lVar119 = 0;
            if (uVar146 != 0) {
              lVar131 = lVar134 * uVar136 + lVar7;
              uVar127 = 0;
              do {
                uVar144 = uVar127;
                param_3[uVar144 * 2 + uVar128] = *(byte *)(lVar119 + -2 + lVar131);
                lVar157 = lVar119 + -3;
                lVar119 = lVar119 + -2;
                param_3[uVar144 * 2 + uVar128 + 1] = *(byte *)(lVar157 + lVar131);
                uVar127 = uVar144 + 1;
              } while (uVar127 < uVar149);
              iVar141 = (int)uVar144 + 2 + (int)uVar127;
            }
            uVar127 = uVar123;
            if (iVar141 - 1U < uVar1) {
              param_3[(longlong)iVar141 + -1 + uVar128] =
                   *(byte *)((lVar7 - iVar141) + -1 + lVar134 * uVar136);
            }
          }
        }
      }
      else if ((param_7 & 0xf0) == 0xf0) {
        uVar125 = 0;
        uVar122 = 0;
        if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar131 = lVar134 * uVar136;
            lVar119 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar131);
            if (((longlong)uVar123 <= lVar119) || ((longlong)uVar123 <= -lVar119)) {
              if (((longlong)uVar123 < 0x10) || ((longlong)uVar123 < lVar5)) {
                uVar127 = 0;
              }
              else {
                uVar127 = 0;
                lVar119 = lVar131 + lVar111;
                if (uVar153 != 0) {
                  do {
                    param_3[uVar127] = *(byte *)(uVar127 + lVar119);
                    uVar127 = uVar127 + 1;
                  } while (uVar127 < uVar153);
                }
                uVar128 = uVar153;
                uVar127 = uVar143;
                if ((lVar119 + uVar153 & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar128 + lVar119);
                    *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                    uVar128 = uVar128 + 0x10;
                  } while (uVar128 < uVar143);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar128 + lVar119));
                    *(undefined1 (*) [16])(param_3 + uVar128) = in_XMM2;
                    uVar128 = uVar128 + 0x10;
                  } while (uVar128 < uVar143);
                }
              }
              uVar122 = param_5;
              if (uVar127 < uVar123) {
                do {
                  param_3[uVar127] = *(byte *)(uVar127 + lVar131 + lVar111);
                  uVar127 = uVar127 + 1;
                } while (uVar127 < uVar123);
              }
              goto LAB_140a3cbeb;
            }
          }
          uVar129 = 1;
          if (uVar113 != 0) {
            lVar119 = lVar134 * uVar136 + lVar111;
            uVar127 = 0;
            do {
              uVar128 = uVar127;
              param_3[uVar128 * 2] = *(byte *)(lVar119 + uVar128 * 2);
              param_3[uVar128 * 2 + 1] = *(byte *)(lVar119 + 1 + uVar128 * 2);
              uVar127 = uVar128 + 1;
            } while (uVar127 < uVar115);
            uVar125 = (int)uVar127 * 2;
            uVar129 = (int)uVar128 + 2 + (int)uVar127;
          }
          uVar122 = uVar125;
          if (uVar129 - 1 < param_5) {
            param_3[(longlong)(int)uVar129 + -1] =
                 *(byte *)(lVar111 + (int)uVar129 + -1 + lVar134 * uVar136);
            uVar122 = uVar129;
          }
        }
LAB_140a3cbeb:
        lVar119 = (longlong)(int)uVar122;
        if (0 < (int)(uint)param_6) {
          if (uVar116 < 7) {
LAB_140a3cd5f:
            iVar141 = 1;
            uVar125 = uVar122;
            if (uVar147 != 0) {
              lVar131 = lVar134 * uVar136 + param_1;
              uVar127 = 0;
              do {
                uVar128 = uVar127;
                param_3[uVar128 * 2 + lVar119] = *(byte *)(lVar131 + uVar128 * 2);
                param_3[uVar128 * 2 + lVar119 + 1] = *(byte *)(lVar131 + 1 + uVar128 * 2);
                uVar127 = uVar128 + 1;
              } while (uVar127 < uVar150);
              uVar125 = uVar122 + (int)uVar127 * 2;
              iVar141 = (int)uVar128 + 2 + (int)uVar127;
            }
            if (iVar141 - 1U < uVar116) {
              uVar125 = uVar122 + iVar141;
              param_3[(longlong)iVar141 + -1 + lVar119] =
                   *(byte *)(param_1 + iVar141 + -1 + lVar134 * uVar136);
            }
          }
          else {
            pbVar156 = param_3 + lVar119;
            lVar131 = lVar134 * uVar136 + param_1;
            if (((longlong)pbVar156 - lVar131 < (longlong)(ulonglong)uVar116) &&
               (-((longlong)pbVar156 - lVar131) < (longlong)(ulonglong)uVar116)) goto LAB_140a3cd5f;
            if (uVar116 < 0x10) {
LAB_140a3deef:
              uVar128 = 0;
            }
            else {
              uVar127 = (ulonglong)pbVar156 & 0xf;
              if ((int)uVar127 != 0) {
                uVar127 = (ulonglong)(0x10 - (int)uVar127);
              }
              iVar141 = (int)uVar127;
              if (uVar116 < iVar141 + 0x10U) goto LAB_140a3deef;
              iVar121 = uVar116 - (uVar116 - iVar141 & 0xf);
              uVar128 = 0;
              if (iVar141 != 0) {
                do {
                  pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
                  uVar128 = uVar128 + 1;
                } while (uVar128 < uVar127);
              }
              if ((lVar131 + uVar127 & 0xf) == 0) {
                uVar128 = (ulonglong)iVar121;
                do {
                  in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
              else {
                uVar128 = (ulonglong)iVar121;
                do {
                  in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                  *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                  uVar127 = uVar127 + 0x10;
                } while (uVar127 < uVar128);
              }
            }
            for (; uVar128 < uVar118; uVar128 = uVar128 + 1) {
              pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
            }
            uVar125 = uVar122 + uVar116;
          }
          lVar119 = (longlong)(int)uVar125;
          if (2 < (int)(uint)param_6) {
            lVar131 = lVar134 * uVar136 + lVar7;
            param_3[lVar119] = *(byte *)(lVar131 + -2);
            param_3[lVar119 + 1] = *(byte *)(lVar131 + -1);
            iVar141 = uVar125 + 2;
            lVar119 = (longlong)iVar141;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar156 = param_3 + lVar119;
                if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar131) ||
                   ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar131))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a3def6:
                    uVar128 = 0;
                  }
                  else {
                    uVar127 = (ulonglong)pbVar156 & 0xf;
                    if (uVar127 != 0) {
                      uVar127 = 0x10 - uVar127;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3def6;
                    uVar144 = 0;
                    uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                    if (uVar127 != 0) {
                      do {
                        pbVar156[uVar144] = *(byte *)(uVar144 + lVar131);
                        uVar144 = uVar144 + 1;
                      } while (uVar144 < uVar127);
                    }
                    if ((lVar131 + uVar127 & 0xf) == 0) {
                      do {
                        in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                    else {
                      do {
                        in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                        *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                        uVar127 = uVar127 + 0x10;
                      } while (uVar127 < uVar128);
                    }
                  }
                  for (; uVar128 < uVar3; uVar128 = uVar128 + 1) {
                    pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
                  }
                  lVar119 = (longlong)(int)(iVar114 + 4 + uVar125);
                  goto LAB_140a3d011;
                }
              }
              iVar117 = 1;
              uVar127 = 0;
              iVar121 = iVar141;
              if (uVar146 != 0) {
                do {
                  uVar128 = uVar127;
                  param_3[uVar128 * 2 + lVar119] = *(byte *)(lVar131 + uVar128 * 2);
                  param_3[uVar128 * 2 + lVar119 + 1] = *(byte *)(lVar131 + 1 + uVar128 * 2);
                  uVar127 = uVar128 + 1;
                } while (uVar127 < uVar149);
                iVar121 = (int)uVar127 * 2 + 2 + uVar125;
                iVar117 = (int)uVar128 + 2 + (int)uVar127;
              }
              if (iVar117 - 1U < uVar1) {
                param_3[(longlong)iVar117 + -1 + lVar119] =
                     *(byte *)((longlong)iVar117 + -1 + lVar131);
                lVar119 = (longlong)(iVar117 + iVar141);
              }
              else {
                lVar119 = (longlong)iVar121;
              }
            }
LAB_140a3d011:
            uVar127 = lVar119 - lVar2;
            goto LAB_140a3db60;
          }
        }
        uVar127 = uVar123;
        if (0 < (int)uVar1) {
          if (6 < (int)uVar1) {
            pbVar156 = param_3 + lVar119;
            lVar131 = lVar134 * uVar136 + lVar7;
            if (((longlong)(2 - uVar123) <= (longlong)pbVar156 - lVar131) ||
               ((longlong)(2 - uVar123) <= -((longlong)pbVar156 - lVar131))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a3defd:
                uVar128 = 0;
              }
              else {
                uVar127 = (ulonglong)pbVar156 & 0xf;
                if (uVar127 != 0) {
                  uVar127 = 0x10 - uVar127;
                }
                if ((longlong)uVar3 < (longlong)(uVar127 + 0x10)) goto LAB_140a3defd;
                uVar144 = 0;
                uVar128 = (ulonglong)(int)(iVar108 - (iVar108 - (int)uVar127 & 0xfU));
                if (uVar127 != 0) {
                  do {
                    pbVar156[uVar144] = *(byte *)(uVar144 + lVar131);
                    uVar144 = uVar144 + 1;
                  } while (uVar144 < uVar127);
                }
                if ((lVar131 + uVar127 & 0xf) == 0) {
                  do {
                    in_XMM2 = *(undefined1 (*) [16])(uVar127 + lVar131);
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
                else {
                  do {
                    in_XMM2 = lddqu(in_XMM2,*(undefined1 (*) [16])(uVar127 + lVar131));
                    *(undefined1 (*) [16])(pbVar156 + uVar127) = in_XMM2;
                    uVar127 = uVar127 + 0x10;
                  } while (uVar127 < uVar128);
                }
              }
              for (; uVar127 = uVar123, uVar128 < uVar3; uVar128 = uVar128 + 1) {
                pbVar156[uVar128] = *(byte *)(uVar128 + lVar131);
              }
              goto LAB_140a3db60;
            }
          }
          iVar141 = 1;
          if (uVar146 != 0) {
            lVar131 = lVar134 * uVar136 + lVar7;
            uVar127 = 0;
            do {
              uVar128 = uVar127;
              param_3[uVar128 * 2 + lVar119] = *(byte *)(lVar131 + uVar128 * 2);
              param_3[uVar128 * 2 + lVar119 + 1] = *(byte *)(lVar131 + 1 + uVar128 * 2);
              uVar127 = uVar128 + 1;
            } while (uVar127 < uVar149);
            iVar141 = (int)uVar128 + 2 + (int)uVar127;
          }
          uVar127 = uVar123;
          if (iVar141 - 1U < uVar1) {
            param_3[(longlong)iVar141 + -1 + lVar119] =
                 *(byte *)(lVar7 + iVar141 + -1 + lVar134 * uVar136);
          }
        }
      }
      else {
        uVar127 = 0;
      }
    }
LAB_140a3db60:
    **(short **)(param_2 + uVar136 * 8) = (ushort)*param_3 - (ushort)param_3[2];
    if (0 < (int)uVar152) {
      if (6 < (int)uVar152) {
        lVar131 = lVar134 * uVar136;
        uVar128 = *(longlong *)(param_2 + uVar136 * 8) + 2;
        lVar119 = param_1 + lVar131;
        if ((lVar126 <= (longlong)(uVar128 - lVar119)) ||
           (lVar126 * 2 + -4 <= (longlong)-(uVar128 - lVar119))) {
          if ((longlong)uVar4 < 0x10) {
LAB_140a4066b:
            uVar128 = 0;
          }
          else {
            uVar144 = uVar128 & 0xf;
            if ((int)uVar144 != 0) {
              if ((uVar128 & 1) != 0) goto LAB_140a4066b;
              uVar144 = (ulonglong)(0x10U - (int)uVar144 >> 1);
            }
            if ((longlong)uVar4 < (longlong)(uVar144 + 0x10)) goto LAB_140a4066b;
            uVar128 = (ulonglong)(int)((int)uVar4 - ((int)uVar4 - (int)uVar144 & 0xfU));
            uVar155 = 0;
            if ((int)uVar144 != 0) {
              do {
                *(ushort *)(*(longlong *)(param_2 + uVar136 * 8) + 2 + uVar155 * 2) =
                     (ushort)*(byte *)(uVar155 + lVar119) - (ushort)*(byte *)(uVar155 + 2 + lVar119)
                ;
                uVar155 = uVar155 + 1;
              } while (uVar155 < uVar144);
            }
            if ((lVar119 + uVar144 & 0xf) == 0) {
              do {
                lVar157 = param_1 + lVar131;
                uVar155 = *(ulonglong *)(uVar144 + 2 + lVar157);
                uVar12 = *(ulonglong *)(uVar144 + lVar157);
                uVar13 = *(ulonglong *)(uVar144 + 8 + lVar157);
                uVar14 = *(ulonglong *)(uVar144 + 10 + lVar157);
                auVar20._8_6_ = 0;
                auVar20._0_8_ = uVar12;
                auVar20[0xe] = (char)(uVar12 >> 0x38);
                auVar28._8_4_ = 0;
                auVar28._0_8_ = uVar12;
                auVar28[0xc] = (char)(uVar12 >> 0x30);
                auVar28._13_2_ = auVar20._13_2_;
                auVar36._8_4_ = 0;
                auVar36._0_8_ = uVar12;
                auVar36._12_3_ = auVar28._12_3_;
                auVar44._8_2_ = 0;
                auVar44._0_8_ = uVar12;
                auVar44[10] = (char)(uVar12 >> 0x28);
                auVar44._11_4_ = auVar36._11_4_;
                auVar52._8_2_ = 0;
                auVar52._0_8_ = uVar12;
                auVar52._10_5_ = auVar44._10_5_;
                auVar60[8] = (char)(uVar12 >> 0x20);
                auVar60._0_8_ = uVar12;
                auVar60._9_6_ = auVar52._9_6_;
                auVar79._7_8_ = 0;
                auVar79._0_7_ = auVar60._8_7_;
                Var68 = CONCAT81(SUB158(auVar79 << 0x40,7),(char)(uVar12 >> 0x18));
                auVar99._9_6_ = 0;
                auVar99._0_9_ = Var68;
                auVar80._1_10_ = SUB1510(auVar99 << 0x30,5);
                auVar80[0] = (char)(uVar12 >> 0x10);
                auVar100._11_4_ = 0;
                auVar100._0_11_ = auVar80;
                auVar81._1_12_ = SUB1512(auVar100 << 0x20,3);
                auVar81[0] = (char)(uVar12 >> 8);
                auVar21._8_6_ = 0;
                auVar21._0_8_ = uVar155;
                auVar21[0xe] = (char)(uVar155 >> 0x38);
                auVar29._8_4_ = 0;
                auVar29._0_8_ = uVar155;
                auVar29[0xc] = (char)(uVar155 >> 0x30);
                auVar29._13_2_ = auVar21._13_2_;
                auVar37._8_4_ = 0;
                auVar37._0_8_ = uVar155;
                auVar37._12_3_ = auVar29._12_3_;
                auVar45._8_2_ = 0;
                auVar45._0_8_ = uVar155;
                auVar45[10] = (char)(uVar155 >> 0x28);
                auVar45._11_4_ = auVar37._11_4_;
                auVar53._8_2_ = 0;
                auVar53._0_8_ = uVar155;
                auVar53._10_5_ = auVar45._10_5_;
                auVar61[8] = (char)(uVar155 >> 0x20);
                auVar61._0_8_ = uVar155;
                auVar61._9_6_ = auVar53._9_6_;
                auVar82._7_8_ = 0;
                auVar82._0_7_ = auVar61._8_7_;
                Var71 = CONCAT81(SUB158(auVar82 << 0x40,7),(char)(uVar155 >> 0x18));
                auVar101._9_6_ = 0;
                auVar101._0_9_ = Var71;
                auVar83._1_10_ = SUB1510(auVar101 << 0x30,5);
                auVar83[0] = (char)(uVar155 >> 0x10);
                auVar102._11_4_ = 0;
                auVar102._0_11_ = auVar83;
                auVar84._1_12_ = SUB1512(auVar102 << 0x20,3);
                auVar84[0] = (char)(uVar155 >> 8);
                uVar161 = CONCAT11(0,(byte)uVar155);
                auVar66._2_13_ = auVar84;
                auVar66._0_2_ = uVar161;
                psVar11 = (short *)(*(longlong *)(param_2 + uVar136 * 8) + 2 + uVar144 * 2);
                *psVar11 = (byte)uVar12 - uVar161;
                psVar11[1] = auVar81._0_2_ - auVar84._0_2_;
                psVar11[2] = auVar80._0_2_ - auVar83._0_2_;
                psVar11[3] = (short)Var68 - (short)Var71;
                psVar11[4] = auVar60._8_2_ - auVar61._8_2_;
                psVar11[5] = auVar44._10_2_ - auVar45._10_2_;
                psVar11[6] = auVar28._12_2_ - auVar29._12_2_;
                psVar11[7] = (auVar20._13_2_ >> 8) - (auVar21._13_2_ >> 8);
                auVar22._8_6_ = 0;
                auVar22._0_8_ = uVar13;
                auVar22[0xe] = (char)(uVar13 >> 0x38);
                auVar30._8_4_ = 0;
                auVar30._0_8_ = uVar13;
                auVar30[0xc] = (char)(uVar13 >> 0x30);
                auVar30._13_2_ = auVar22._13_2_;
                auVar38._8_4_ = 0;
                auVar38._0_8_ = uVar13;
                auVar38._12_3_ = auVar30._12_3_;
                auVar46._8_2_ = 0;
                auVar46._0_8_ = uVar13;
                auVar46[10] = (char)(uVar13 >> 0x28);
                auVar46._11_4_ = auVar38._11_4_;
                auVar54._8_2_ = 0;
                auVar54._0_8_ = uVar13;
                auVar54._10_5_ = auVar46._10_5_;
                auVar62[8] = (char)(uVar13 >> 0x20);
                auVar62._0_8_ = uVar13;
                auVar62._9_6_ = auVar54._9_6_;
                auVar85._7_8_ = 0;
                auVar85._0_7_ = auVar62._8_7_;
                Var68 = CONCAT81(SUB158(auVar85 << 0x40,7),(char)(uVar13 >> 0x18));
                auVar103._9_6_ = 0;
                auVar103._0_9_ = Var68;
                auVar86._1_10_ = SUB1510(auVar103 << 0x30,5);
                auVar86[0] = (char)(uVar13 >> 0x10);
                auVar104._11_4_ = 0;
                auVar104._0_11_ = auVar86;
                auVar87._1_12_ = SUB1512(auVar104 << 0x20,3);
                auVar87[0] = (char)(uVar13 >> 8);
                auVar23._8_6_ = 0;
                auVar23._0_8_ = uVar14;
                auVar23[0xe] = (char)(uVar14 >> 0x38);
                auVar31._8_4_ = 0;
                auVar31._0_8_ = uVar14;
                auVar31[0xc] = (char)(uVar14 >> 0x30);
                auVar31._13_2_ = auVar23._13_2_;
                auVar39._8_4_ = 0;
                auVar39._0_8_ = uVar14;
                auVar39._12_3_ = auVar31._12_3_;
                auVar47._8_2_ = 0;
                auVar47._0_8_ = uVar14;
                auVar47[10] = (char)(uVar14 >> 0x28);
                auVar47._11_4_ = auVar39._11_4_;
                auVar55._8_2_ = 0;
                auVar55._0_8_ = uVar14;
                auVar55._10_5_ = auVar47._10_5_;
                auVar63[8] = (char)(uVar14 >> 0x20);
                auVar63._0_8_ = uVar14;
                auVar63._9_6_ = auVar55._9_6_;
                auVar88._7_8_ = 0;
                auVar88._0_7_ = auVar63._8_7_;
                Var71 = CONCAT81(SUB158(auVar88 << 0x40,7),(char)(uVar14 >> 0x18));
                auVar105._9_6_ = 0;
                auVar105._0_9_ = Var71;
                auVar89._1_10_ = SUB1510(auVar105 << 0x30,5);
                auVar89[0] = (char)(uVar14 >> 0x10);
                auVar106._11_4_ = 0;
                auVar106._0_11_ = auVar89;
                auVar90._1_12_ = SUB1512(auVar106 << 0x20,3);
                auVar90[0] = (char)(uVar14 >> 8);
                psVar11 = (short *)(*(longlong *)(param_2 + uVar136 * 8) + 0x12 + uVar144 * 2);
                *psVar11 = (ushort)(byte)uVar13 - (ushort)(byte)uVar14;
                psVar11[1] = auVar87._0_2_ - auVar90._0_2_;
                psVar11[2] = auVar86._0_2_ - auVar89._0_2_;
                psVar11[3] = (short)Var68 - (short)Var71;
                psVar11[4] = auVar62._8_2_ - auVar63._8_2_;
                psVar11[5] = auVar46._10_2_ - auVar47._10_2_;
                psVar11[6] = auVar30._12_2_ - auVar31._12_2_;
                psVar11[7] = (auVar22._13_2_ >> 8) - (auVar23._13_2_ >> 8);
                uVar144 = uVar144 + 0x10;
              } while (uVar144 < uVar128);
            }
            else {
              do {
                lVar157 = param_1 + lVar131;
                uVar155 = *(ulonglong *)(uVar144 + 2 + lVar157);
                uVar12 = *(ulonglong *)(uVar144 + lVar157);
                uVar13 = *(ulonglong *)(uVar144 + 8 + lVar157);
                uVar14 = *(ulonglong *)(uVar144 + 10 + lVar157);
                auVar16._8_6_ = 0;
                auVar16._0_8_ = uVar12;
                auVar16[0xe] = (char)(uVar12 >> 0x38);
                auVar24._8_4_ = 0;
                auVar24._0_8_ = uVar12;
                auVar24[0xc] = (char)(uVar12 >> 0x30);
                auVar24._13_2_ = auVar16._13_2_;
                auVar32._8_4_ = 0;
                auVar32._0_8_ = uVar12;
                auVar32._12_3_ = auVar24._12_3_;
                auVar40._8_2_ = 0;
                auVar40._0_8_ = uVar12;
                auVar40[10] = (char)(uVar12 >> 0x28);
                auVar40._11_4_ = auVar32._11_4_;
                auVar48._8_2_ = 0;
                auVar48._0_8_ = uVar12;
                auVar48._10_5_ = auVar40._10_5_;
                auVar56[8] = (char)(uVar12 >> 0x20);
                auVar56._0_8_ = uVar12;
                auVar56._9_6_ = auVar48._9_6_;
                auVar67._7_8_ = 0;
                auVar67._0_7_ = auVar56._8_7_;
                Var68 = CONCAT81(SUB158(auVar67 << 0x40,7),(char)(uVar12 >> 0x18));
                auVar91._9_6_ = 0;
                auVar91._0_9_ = Var68;
                auVar69._1_10_ = SUB1510(auVar91 << 0x30,5);
                auVar69[0] = (char)(uVar12 >> 0x10);
                auVar92._11_4_ = 0;
                auVar92._0_11_ = auVar69;
                auVar64[2] = (char)(uVar12 >> 8);
                auVar64._0_2_ = (ushort)uVar12;
                auVar64._3_12_ = SUB1512(auVar92 << 0x20,3);
                auVar17._8_6_ = 0;
                auVar17._0_8_ = uVar155;
                auVar17[0xe] = (char)(uVar155 >> 0x38);
                auVar25._8_4_ = 0;
                auVar25._0_8_ = uVar155;
                auVar25[0xc] = (char)(uVar155 >> 0x30);
                auVar25._13_2_ = auVar17._13_2_;
                auVar33._8_4_ = 0;
                auVar33._0_8_ = uVar155;
                auVar33._12_3_ = auVar25._12_3_;
                auVar41._8_2_ = 0;
                auVar41._0_8_ = uVar155;
                auVar41[10] = (char)(uVar155 >> 0x28);
                auVar41._11_4_ = auVar33._11_4_;
                auVar49._8_2_ = 0;
                auVar49._0_8_ = uVar155;
                auVar49._10_5_ = auVar41._10_5_;
                auVar57[8] = (char)(uVar155 >> 0x20);
                auVar57._0_8_ = uVar155;
                auVar57._9_6_ = auVar49._9_6_;
                auVar70._7_8_ = 0;
                auVar70._0_7_ = auVar57._8_7_;
                Var71 = CONCAT81(SUB158(auVar70 << 0x40,7),(char)(uVar155 >> 0x18));
                auVar93._9_6_ = 0;
                auVar93._0_9_ = Var71;
                auVar72._1_10_ = SUB1510(auVar93 << 0x30,5);
                auVar72[0] = (char)(uVar155 >> 0x10);
                auVar94._11_4_ = 0;
                auVar94._0_11_ = auVar72;
                auVar65[2] = (char)(uVar155 >> 8);
                auVar65._0_2_ = (ushort)uVar155;
                auVar65._3_12_ = SUB1512(auVar94 << 0x20,3);
                uVar161 = (ushort)uVar155 & 0xff;
                auVar66._2_13_ = auVar65._2_13_;
                auVar66._0_2_ = uVar161;
                psVar11 = (short *)(*(longlong *)(param_2 + uVar136 * 8) + 2 + uVar144 * 2);
                *psVar11 = ((ushort)uVar12 & 0xff) - uVar161;
                psVar11[1] = auVar64._2_2_ - auVar65._2_2_;
                psVar11[2] = auVar69._0_2_ - auVar72._0_2_;
                psVar11[3] = (short)Var68 - (short)Var71;
                psVar11[4] = auVar56._8_2_ - auVar57._8_2_;
                psVar11[5] = auVar40._10_2_ - auVar41._10_2_;
                psVar11[6] = auVar24._12_2_ - auVar25._12_2_;
                psVar11[7] = (auVar16._13_2_ >> 8) - (auVar17._13_2_ >> 8);
                auVar18._8_6_ = 0;
                auVar18._0_8_ = uVar13;
                auVar18[0xe] = (char)(uVar13 >> 0x38);
                auVar26._8_4_ = 0;
                auVar26._0_8_ = uVar13;
                auVar26[0xc] = (char)(uVar13 >> 0x30);
                auVar26._13_2_ = auVar18._13_2_;
                auVar34._8_4_ = 0;
                auVar34._0_8_ = uVar13;
                auVar34._12_3_ = auVar26._12_3_;
                auVar42._8_2_ = 0;
                auVar42._0_8_ = uVar13;
                auVar42[10] = (char)(uVar13 >> 0x28);
                auVar42._11_4_ = auVar34._11_4_;
                auVar50._8_2_ = 0;
                auVar50._0_8_ = uVar13;
                auVar50._10_5_ = auVar42._10_5_;
                auVar58[8] = (char)(uVar13 >> 0x20);
                auVar58._0_8_ = uVar13;
                auVar58._9_6_ = auVar50._9_6_;
                auVar73._7_8_ = 0;
                auVar73._0_7_ = auVar58._8_7_;
                Var68 = CONCAT81(SUB158(auVar73 << 0x40,7),(char)(uVar13 >> 0x18));
                auVar95._9_6_ = 0;
                auVar95._0_9_ = Var68;
                auVar74._1_10_ = SUB1510(auVar95 << 0x30,5);
                auVar74[0] = (char)(uVar13 >> 0x10);
                auVar96._11_4_ = 0;
                auVar96._0_11_ = auVar74;
                auVar75._1_12_ = SUB1512(auVar96 << 0x20,3);
                auVar75[0] = (char)(uVar13 >> 8);
                auVar19._8_6_ = 0;
                auVar19._0_8_ = uVar14;
                auVar19[0xe] = (char)(uVar14 >> 0x38);
                auVar27._8_4_ = 0;
                auVar27._0_8_ = uVar14;
                auVar27[0xc] = (char)(uVar14 >> 0x30);
                auVar27._13_2_ = auVar19._13_2_;
                auVar35._8_4_ = 0;
                auVar35._0_8_ = uVar14;
                auVar35._12_3_ = auVar27._12_3_;
                auVar43._8_2_ = 0;
                auVar43._0_8_ = uVar14;
                auVar43[10] = (char)(uVar14 >> 0x28);
                auVar43._11_4_ = auVar35._11_4_;
                auVar51._8_2_ = 0;
                auVar51._0_8_ = uVar14;
                auVar51._10_5_ = auVar43._10_5_;
                auVar59[8] = (char)(uVar14 >> 0x20);
                auVar59._0_8_ = uVar14;
                auVar59._9_6_ = auVar51._9_6_;
                auVar76._7_8_ = 0;
                auVar76._0_7_ = auVar59._8_7_;
                Var71 = CONCAT81(SUB158(auVar76 << 0x40,7),(char)(uVar14 >> 0x18));
                auVar97._9_6_ = 0;
                auVar97._0_9_ = Var71;
                auVar77._1_10_ = SUB1510(auVar97 << 0x30,5);
                auVar77[0] = (char)(uVar14 >> 0x10);
                auVar98._11_4_ = 0;
                auVar98._0_11_ = auVar77;
                auVar78._1_12_ = SUB1512(auVar98 << 0x20,3);
                auVar78[0] = (char)(uVar14 >> 8);
                psVar11 = (short *)(*(longlong *)(param_2 + uVar136 * 8) + 0x12 + uVar144 * 2);
                *psVar11 = (ushort)(byte)uVar13 - (ushort)(byte)uVar14;
                psVar11[1] = auVar75._0_2_ - auVar78._0_2_;
                psVar11[2] = auVar74._0_2_ - auVar77._0_2_;
                psVar11[3] = (short)Var68 - (short)Var71;
                psVar11[4] = auVar58._8_2_ - auVar59._8_2_;
                psVar11[5] = auVar42._10_2_ - auVar43._10_2_;
                psVar11[6] = auVar26._12_2_ - auVar27._12_2_;
                psVar11[7] = (auVar18._13_2_ >> 8) - (auVar19._13_2_ >> 8);
                uVar144 = uVar144 + 0x10;
              } while (uVar144 < uVar128);
            }
            in_XMM2[0xf] = 0;
            in_XMM2._0_15_ = auVar66;
          }
          for (; uVar128 < uVar4; uVar128 = uVar128 + 1) {
            *(ushort *)(*(longlong *)(param_2 + uVar136 * 8) + 2 + uVar128 * 2) =
                 (ushort)*(byte *)(uVar128 + lVar119) - (ushort)*(byte *)(uVar128 + 2 + lVar119);
          }
          goto LAB_140a3de75;
        }
      }
      iVar141 = 1;
      if (uVar152 >> 1 != 0) {
        lVar119 = lVar134 * uVar136 + param_1;
        uVar128 = 0;
        do {
          uVar144 = uVar128;
          *(ushort *)(*(longlong *)(param_2 + uVar136 * 8) + 2 + uVar144 * 4) =
               (ushort)*(byte *)(lVar119 + uVar144 * 2) -
               (ushort)*(byte *)(lVar119 + 2 + uVar144 * 2);
          *(ushort *)(*(longlong *)(param_2 + uVar136 * 8) + 4 + uVar144 * 4) =
               (ushort)*(byte *)(lVar119 + 1 + uVar144 * 2) -
               (ushort)*(byte *)(lVar119 + 3 + uVar144 * 2);
          uVar128 = uVar144 + 1;
        } while (uVar128 < uVar152 >> 1);
        iVar141 = (int)uVar144 + 2 + (int)uVar128;
      }
      if (iVar141 - 1U < uVar152) {
        lVar131 = (longlong)iVar141;
        lVar119 = lVar134 * uVar136 + param_1;
        *(ushort *)(*(longlong *)(param_2 + uVar136 * 8) + lVar131 * 2) =
             (ushort)*(byte *)(lVar131 + -1 + lVar119) - (ushort)*(byte *)(lVar131 + 1 + lVar119);
      }
    }
LAB_140a3de75:
    if ((int)(uint)param_6 < 2) break;
    lVar119 = uVar136 * 8;
    uVar136 = uVar136 + 1;
    lStack_68 = lStack_68 + lVar134;
    *(ushort *)(*(longlong *)(param_2 + lVar119) + -2 + lVar126 * 2) =
         (ushort)param_3[uVar127] - (ushort)param_3[uVar127 + 2];
    if ((ulonglong)(longlong)param_6._4_4_ <= uVar136) {
      return 0;
    }
  } while( true );
  uVar136 = uVar136 + 1;
  lStack_68 = lStack_68 + lVar134;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar136) {
    return 0;
  }
  goto LAB_140a3c9c0;
}

