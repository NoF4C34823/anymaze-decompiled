
undefined8
FUN_140a4d560(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  short *psVar10;
  ulonglong uVar11;
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
  unkuint9 Var57;
  undefined1 auVar58 [11];
  undefined1 auVar59 [13];
  undefined1 auVar60 [15];
  unkuint9 Var61;
  undefined1 auVar62 [11];
  undefined1 auVar63 [15];
  unkuint9 Var64;
  undefined1 auVar65 [11];
  undefined1 auVar66 [13];
  undefined1 auVar67 [15];
  unkuint9 Var68;
  undefined1 auVar69 [11];
  undefined1 auVar70 [15];
  unkuint9 Var71;
  undefined1 auVar72 [11];
  undefined1 auVar73 [15];
  undefined1 auVar74 [11];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  longlong lVar87;
  uint uVar88;
  ulonglong uVar89;
  int iVar90;
  uint uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  int iVar94;
  longlong lVar95;
  uint uVar96;
  uint uVar97;
  int iVar98;
  longlong lVar100;
  int iVar101;
  ulonglong uVar102;
  longlong lVar103;
  uint uVar104;
  int iVar105;
  int iVar106;
  uint uVar107;
  longlong lVar108;
  ulonglong uVar109;
  int iVar110;
  uint uVar111;
  int iVar112;
  ulonglong uVar113;
  ulonglong uVar114;
  ulonglong uVar115;
  ulonglong uVar116;
  longlong lVar117;
  uint uVar118;
  int iVar119;
  longlong lVar120;
  ulonglong uVar121;
  ulonglong uVar122;
  longlong lVar123;
  uint uVar124;
  ulonglong uVar125;
  ulonglong uVar126;
  longlong lVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  ulonglong uVar131;
  uint uVar134;
  ulonglong uVar135;
  longlong lVar136;
  byte *pbVar137;
  uint uVar138;
  undefined4 uVar139;
  undefined1 in_XMM0 [16];
  undefined8 uVar140;
  longlong lStack_70;
  ulonglong uVar99;
  ulonglong uVar132;
  ulonglong uVar133;
  
  lVar108 = (longlong)param_4;
  if (param_6._4_4_ < 1) {
    return 0;
  }
  uVar113 = (ulonglong)(int)param_5;
  uVar102 = (ulonglong)param_3 & 0xf;
  lVar120 = -uVar113;
  pbVar6 = param_3 + uVar113;
  uVar135 = uVar102;
  if (uVar102 != 0) {
    uVar135 = 0x10 - uVar102;
  }
  lVar2 = lVar120 + 4;
  uVar88 = 2;
  if ((uint)param_6 < 3) {
    uVar88 = (uint)param_6;
  }
  uVar89 = (ulonglong)(int)uVar88;
  uVar3 = lVar120 + 2;
  uVar131 = (ulonglong)(1 < (int)(uint)param_6);
  uVar96 = param_7 & 0xf;
  lVar95 = param_1 - uVar113;
  uVar97 = param_5 >> 1;
  uVar99 = (ulonglong)uVar97;
  iVar98 = -param_5;
  uVar104 = param_7 & 0x40;
  lVar100 = (longlong)(int)(uint)param_6;
  uVar128 = (uint)param_6 - (1 < (int)(uint)param_6);
  uVar1 = iVar98 + 2;
  uVar109 = (ulonglong)pbVar6 & 0xf;
  uVar129 = uVar1 >> 1;
  uVar132 = (ulonglong)uVar129;
  uVar121 = 0xffffffffffffffff - (lVar120 + -1);
  uVar130 = uVar88 >> 1;
  uVar133 = (ulonglong)uVar130;
  uVar134 = param_7 & 0x80;
  if ((int)uVar109 != 0) {
    uVar109 = (ulonglong)(0x10 - (int)uVar109);
  }
  iVar94 = ((int)(uint)param_6 < 2) - 1;
  if (uVar102 != 0) {
    uVar102 = 0x10 - uVar102;
  }
  lVar136 = (param_1 - uVar131) + lVar100;
  lVar7 = param_1 + lVar100;
  lVar87 = lVar100 - uVar113;
  uVar138 = param_5 - 1;
  uVar124 = param_5 - (param_5 - (int)uVar135 & 0xf);
  iVar105 = (int)uVar109;
  iVar110 = uVar88 - (uVar88 - iVar105 & 0xf);
  uVar4 = lVar100 - 2;
  uVar139 = CONCAT22(CONCAT11(param_8,param_8),CONCAT11(param_8,param_8));
  uVar114 = (ulonglong)iVar110;
  uVar140 = CONCAT44(uVar139,uVar139);
  iVar90 = (int)uVar3;
  uVar125 = (ulonglong)(int)uVar124;
  lVar120 = uVar102 + 0x10;
  uVar122 = (ulonglong)(int)((int)uVar121 - ((int)uVar121 - (int)uVar102 & 0xfU));
  lVar5 = uVar135 + 0x10;
  uVar91 = 1;
  if ((param_7 & 0xc0) != 0) {
    uVar91 = uVar96;
  }
  lStack_70 = 0;
  uVar93 = 0;
LAB_140a4d940:
  if ((uint)param_6 == 1) {
    uVar111 = uVar91;
    if (uVar96 != 6) goto LAB_140a4d98a;
    goto LAB_140a4e1f4;
  }
  do {
    uVar111 = uVar96;
    if (uVar96 == 6) {
LAB_140a4e1f4:
      uVar111 = 0;
      uVar107 = 0;
      if (uVar104 == 0) {
        if (0 < (int)param_5) {
          if ((0xf < (longlong)uVar113) && (lVar5 <= (longlong)uVar113)) {
            uVar116 = 0;
            uVar115 = uVar135;
            if (uVar135 != 0) {
              do {
                param_3[uVar116] = param_8;
                uVar116 = uVar116 + 1;
              } while (uVar116 < uVar135);
            }
            do {
              *(undefined8 *)(param_3 + uVar115) = uVar140;
              *(undefined8 *)(param_3 + uVar115 + 8) = uVar140;
              uVar115 = uVar115 + 0x10;
              uVar111 = uVar124;
            } while (uVar115 < uVar125);
          }
          uVar115 = (ulonglong)(int)uVar111;
          uVar107 = uVar111;
          if (uVar115 < uVar113) {
            do {
              param_3[uVar115] = param_8;
              uVar115 = uVar115 + 1;
            } while (uVar115 < uVar113);
            uVar107 = (uint)uVar115;
          }
        }
      }
      else if (0 < (int)param_5) {
        if (((int)param_5 < 7) ||
           ((lVar103 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_70),
            lVar103 < (longlong)uVar113 && (-lVar103 < (longlong)uVar113)))) {
          uVar118 = 1;
          if (uVar97 != 0) {
            uVar115 = 0;
            do {
              uVar116 = uVar115;
              param_3[uVar116 * 2] = *(byte *)(lVar95 + lStack_70 + uVar116 * 2);
              param_3[uVar116 * 2 + 1] = *(byte *)(lVar95 + lStack_70 + 1 + uVar116 * 2);
              uVar115 = uVar116 + 1;
            } while (uVar115 < uVar99);
            uVar111 = (int)uVar115 * 2;
            uVar118 = (int)uVar116 + 2 + (int)uVar115;
          }
          uVar107 = uVar111;
          if (uVar118 - 1 < param_5) {
            param_3[(longlong)(int)uVar118 + -1] = *(byte *)(lVar95 + (int)uVar118 + -1 + lStack_70)
            ;
            uVar107 = uVar118;
          }
        }
        else {
          if (((longlong)uVar113 < 0x10) || ((longlong)uVar113 < lVar5)) {
            uVar115 = 0;
          }
          else {
            uVar115 = 0;
            lVar103 = lVar95 + lStack_70;
            if (uVar135 != 0) {
              do {
                param_3[uVar115] = *(byte *)(uVar115 + lVar103);
                uVar115 = uVar115 + 1;
              } while (uVar115 < uVar135);
            }
            uVar116 = uVar135;
            uVar115 = uVar125;
            if ((lVar103 + uVar135 & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(uVar116 + lVar103);
                *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                uVar116 = uVar116 + 0x10;
              } while (uVar116 < uVar125);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar116 + lVar103));
                *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                uVar116 = uVar116 + 0x10;
              } while (uVar116 < uVar125);
            }
          }
          uVar107 = param_5;
          if (uVar115 < uVar113) {
            do {
              param_3[uVar115] = *(byte *)(uVar115 + lVar95 + lStack_70);
              uVar115 = uVar115 + 1;
            } while (uVar115 < uVar113);
          }
        }
      }
      lVar103 = (longlong)(int)uVar107;
      if ((int)(uint)param_6 < 1) {
        if (uVar134 != 0) goto LAB_140a4e8b8;
LAB_140a4e797:
        uVar115 = uVar113;
        if ((int)uVar1 < 1) goto LAB_140a4eb00;
LAB_140a4e7a5:
        if ((longlong)uVar3 < 0x10) {
LAB_140a51603:
          iVar119 = 0;
        }
        else {
          pbVar137 = param_3 + lVar103;
          uVar115 = (ulonglong)pbVar137 & 0xf;
          if (uVar115 != 0) {
            uVar115 = 0x10 - uVar115;
          }
          if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a51603;
          iVar119 = iVar90 - (iVar90 - (int)uVar115 & 0xfU);
          uVar116 = 0;
          if (uVar115 != 0) {
            do {
              pbVar137[uVar116] = param_8;
              uVar116 = uVar116 + 1;
            } while (uVar116 < uVar115);
          }
          do {
            *(undefined8 *)(pbVar137 + uVar115) = uVar140;
            *(undefined8 *)(pbVar137 + uVar115 + 8) = uVar140;
            uVar115 = uVar115 + 0x10;
          } while (uVar115 < (ulonglong)(longlong)iVar119);
          uVar107 = (int)lVar103 + iVar119;
        }
        uVar115 = (ulonglong)iVar119;
        if (uVar115 < uVar3) {
          do {
            param_3[uVar115 + lVar103] = param_8;
            uVar115 = uVar115 + 1;
          } while (uVar115 < uVar3);
          uVar107 = (int)uVar115 + (int)lVar103;
        }
LAB_140a4eadc:
        uVar115 = uVar113;
        if ((int)(uint)param_6 < 3) goto LAB_140a4eb00;
        lVar103 = (longlong)(int)uVar107;
      }
      else {
        if (uVar88 < 7) {
LAB_140a4e689:
          iVar119 = 1;
          uVar111 = uVar107;
          if (uVar130 != 0) {
            uVar115 = 0;
            do {
              uVar116 = uVar115;
              param_3[uVar116 * 2 + lVar103] = *(byte *)(param_1 + lStack_70 + uVar116 * 2);
              param_3[uVar116 * 2 + lVar103 + 1] = *(byte *)(param_1 + lStack_70 + 1 + uVar116 * 2);
              uVar115 = uVar116 + 1;
            } while (uVar115 < uVar133);
            uVar111 = uVar107 + (int)uVar115 * 2;
            iVar119 = (int)uVar116 + 2 + (int)uVar115;
          }
          if (iVar119 - 1U < uVar88) {
            param_3[(longlong)iVar119 + -1 + lVar103] =
                 *(byte *)(param_1 + iVar119 + -1 + lStack_70);
            uVar111 = uVar107 + iVar119;
          }
        }
        else {
          pbVar137 = param_3 + lVar103;
          lVar123 = param_1 + lStack_70;
          if (((longlong)pbVar137 - lVar123 < (longlong)(ulonglong)uVar88) &&
             (-((longlong)pbVar137 - lVar123) < (longlong)(ulonglong)uVar88)) goto LAB_140a4e689;
          if (uVar88 < 0x10) {
LAB_140a515fb:
            uVar116 = 0;
          }
          else {
            uVar115 = (ulonglong)pbVar137 & 0xf;
            if ((int)uVar115 != 0) {
              uVar115 = (ulonglong)(0x10 - (int)uVar115);
            }
            iVar119 = (int)uVar115;
            if (uVar88 < iVar119 + 0x10U) goto LAB_140a515fb;
            iVar106 = uVar88 - (uVar88 - iVar119 & 0xf);
            uVar116 = 0;
            if (iVar119 != 0) {
              do {
                pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
                uVar116 = uVar116 + 1;
              } while (uVar116 < uVar115);
            }
            if ((lVar123 + uVar115 & 0xf) == 0) {
              uVar116 = (ulonglong)iVar106;
              do {
                in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                uVar115 = uVar115 + 0x10;
              } while (uVar115 < uVar116);
            }
            else {
              uVar116 = (ulonglong)iVar106;
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                uVar115 = uVar115 + 0x10;
              } while (uVar115 < uVar116);
            }
          }
          for (; uVar116 < uVar89; uVar116 = uVar116 + 1) {
            pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
          }
          uVar111 = uVar107 + uVar88;
        }
        uVar107 = uVar111;
        lVar103 = (longlong)(int)uVar107;
        if ((int)(uint)param_6 < 3) {
          if (uVar134 == 0) goto LAB_140a4e797;
LAB_140a4e8b8:
          uVar115 = uVar113;
          if ((int)uVar1 < 1) goto LAB_140a4eb00;
LAB_140a4e8c6:
          iVar119 = (int)lVar103;
          if ((int)uVar1 < 7) {
LAB_140a4ea48:
            iVar106 = 1;
            if (uVar129 != 0) {
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                param_3[uVar116 * 2 + lVar103] = *(byte *)(lVar7 + lStack_70 + uVar116 * 2);
                param_3[uVar116 * 2 + lVar103 + 1] = *(byte *)(lVar7 + lStack_70 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar132);
              uVar107 = iVar119 + (int)uVar115 * 2;
              iVar106 = (int)uVar116 + 2 + (int)uVar115;
            }
            if (iVar106 - 1U < uVar1) {
              param_3[(longlong)iVar106 + -1 + lVar103] =
                   *(byte *)(lVar7 + iVar106 + -1 + lStack_70);
              uVar107 = iVar119 + iVar106;
            }
          }
          else {
            pbVar137 = param_3 + lVar103;
            lVar123 = lVar7 + lStack_70;
            if (((longlong)pbVar137 - lVar123 < (longlong)(2 - uVar113)) &&
               (-((longlong)pbVar137 - lVar123) < (longlong)(2 - uVar113))) goto LAB_140a4ea48;
            if ((longlong)uVar3 < 0x10) {
LAB_140a5160b:
              uVar116 = 0;
            }
            else {
              uVar115 = (ulonglong)pbVar137 & 0xf;
              if (uVar115 != 0) {
                uVar115 = 0x10 - uVar115;
              }
              if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a5160b;
              uVar126 = 0;
              uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
              if (uVar115 != 0) {
                do {
                  pbVar137[uVar126] = *(byte *)(uVar126 + lVar123);
                  uVar126 = uVar126 + 1;
                } while (uVar126 < uVar115);
              }
              if ((lVar123 + uVar115 & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
            }
            for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
              pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
            }
            uVar107 = iVar119 + 2 + iVar98;
          }
          goto LAB_140a4eadc;
        }
        uVar107 = uVar107 + 2;
        param_3[lVar103] = *(byte *)(lStack_70 + -2 + lVar7);
        param_3[lVar103 + 1] = *(byte *)(lStack_70 + -1 + lVar7);
        lVar103 = (longlong)(int)uVar107;
        if (uVar134 == 0) {
          if (0 < (int)uVar1) goto LAB_140a4e7a5;
        }
        else if (0 < (int)uVar1) goto LAB_140a4e8c6;
      }
      uVar115 = lVar103 - lVar2;
    }
    else {
LAB_140a4d98a:
      if (uVar111 == 1) {
        lVar103 = lVar108 * uVar93;
        bVar15 = *(byte *)(param_1 + lVar103);
        uVar111 = 0;
        uVar107 = 0;
        if (uVar104 == 0) {
          if (0 < (int)param_5) {
            if (((longlong)uVar113 < 0x10) || ((longlong)uVar113 < lVar5)) {
              uVar115 = 0;
            }
            else {
              uVar115 = 0;
              if (uVar135 != 0) {
                do {
                  param_3[uVar115] = bVar15;
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar135);
              }
              uVar139 = CONCAT22(CONCAT11(bVar15,bVar15),CONCAT11(bVar15,bVar15));
              in_XMM0._0_8_ = CONCAT44(uVar139,uVar139);
              in_XMM0._8_8_ = in_XMM0._0_8_;
              uVar116 = uVar135;
              do {
                *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                uVar116 = uVar116 + 0x10;
                uVar115 = uVar125;
                uVar111 = uVar124;
              } while (uVar116 < uVar125);
            }
            uVar107 = uVar111;
            if (uVar115 < uVar113) {
              do {
                param_3[uVar115] = bVar15;
                uVar115 = uVar115 + 1;
              } while (uVar115 < uVar113);
              uVar107 = (uint)uVar115;
            }
          }
        }
        else if (0 < (int)param_5) {
          if (((int)param_5 < 7) ||
             ((lVar123 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar103),
              lVar123 < (longlong)uVar113 && (-lVar123 < (longlong)uVar113)))) {
            uVar118 = 1;
            if (uVar97 != 0) {
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                param_3[uVar116 * 2] = *(byte *)(lVar95 + lVar103 + uVar116 * 2);
                param_3[uVar116 * 2 + 1] = *(byte *)(lVar95 + lVar103 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar99);
              uVar111 = (int)uVar115 * 2;
              uVar118 = (int)uVar116 + 2 + (int)uVar115;
            }
            uVar107 = uVar111;
            if (uVar118 - 1 < param_5) {
              param_3[(longlong)(int)uVar118 + -1] =
                   *(byte *)((longlong)(int)uVar118 + -1 + lVar103 + lVar95);
              uVar107 = uVar118;
            }
          }
          else {
            if (((longlong)uVar113 < 0x10) || ((longlong)uVar113 < lVar5)) {
              uVar115 = 0;
            }
            else {
              uVar115 = 0;
              lVar123 = lVar103 + lVar95;
              if (uVar135 != 0) {
                do {
                  param_3[uVar115] = *(byte *)(uVar115 + lVar123);
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar135);
              }
              uVar116 = uVar135;
              uVar115 = uVar125;
              if ((lVar123 + uVar135 & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar116 + lVar123);
                  *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                  uVar116 = uVar116 + 0x10;
                } while (uVar116 < uVar125);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar116 + lVar123));
                  *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                  uVar116 = uVar116 + 0x10;
                } while (uVar116 < uVar125);
              }
            }
            uVar107 = param_5;
            if (uVar115 < uVar113) {
              do {
                param_3[uVar115] = *(byte *)(uVar115 + lVar95 + lVar103);
                uVar115 = uVar115 + 1;
              } while (uVar115 < uVar113);
            }
          }
        }
        lVar123 = (longlong)(int)uVar107;
        if (0 < (int)(uint)param_6) {
          if (uVar88 < 7) {
LAB_140a511e0:
            iVar119 = 1;
            uVar111 = uVar107;
            if (uVar130 != 0) {
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                param_3[uVar116 * 2 + lVar123] = *(byte *)(param_1 + lVar103 + uVar116 * 2);
                param_3[uVar116 * 2 + lVar123 + 1] = *(byte *)(param_1 + lVar103 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar133);
              uVar111 = uVar107 + (int)uVar115 * 2;
              iVar119 = (int)uVar116 + 2 + (int)uVar115;
            }
            if (iVar119 - 1U < uVar88) {
              param_3[(longlong)iVar119 + -1 + lVar123] =
                   *(byte *)((longlong)iVar119 + -1 + param_1 + lVar103);
              uVar111 = uVar107 + iVar119;
            }
          }
          else {
            pbVar137 = param_3 + lVar123;
            lVar127 = param_1 + lVar103;
            if (((longlong)pbVar137 - lVar127 < (longlong)(ulonglong)uVar88) &&
               (-((longlong)pbVar137 - lVar127) < (longlong)(ulonglong)uVar88)) goto LAB_140a511e0;
            if (uVar88 < 0x10) {
LAB_140a515d4:
              uVar116 = 0;
            }
            else {
              uVar115 = (ulonglong)pbVar137 & 0xf;
              if ((int)uVar115 != 0) {
                uVar115 = (ulonglong)(0x10 - (int)uVar115);
              }
              iVar119 = (int)uVar115;
              if (uVar88 < iVar119 + 0x10U) goto LAB_140a515d4;
              iVar106 = uVar88 - (uVar88 - iVar119 & 0xf);
              uVar116 = 0;
              if (iVar119 != 0) {
                do {
                  pbVar137[uVar116] = *(byte *)(uVar116 + lVar127);
                  uVar116 = uVar116 + 1;
                } while (uVar116 < uVar115);
              }
              if ((lVar127 + uVar115 & 0xf) == 0) {
                uVar116 = (ulonglong)iVar106;
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar127);
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
              else {
                uVar116 = (ulonglong)iVar106;
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar127));
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
            }
            for (; uVar116 < uVar89; uVar116 = uVar116 + 1) {
              pbVar137[uVar116] = *(byte *)(uVar116 + lVar127);
            }
            uVar111 = uVar107 + uVar88;
          }
          uVar107 = uVar111;
          lVar123 = (longlong)(int)uVar107;
          if (2 < (int)(uint)param_6) {
            uVar107 = uVar107 + 2;
            param_3[lVar123] = *(byte *)(lVar7 + -2 + lVar103);
            param_3[lVar123 + 1] = *(byte *)(lVar7 + -1 + lVar103);
            lVar123 = (longlong)(int)uVar107;
          }
        }
        bVar15 = *(byte *)(param_1 + lVar100 + -1 + lVar103);
        iVar119 = (int)lVar123;
        if (uVar134 == 0) {
          if (0 < (int)uVar1) {
            if ((longlong)uVar3 < 0x10) {
LAB_140a515dc:
              iVar106 = 0;
            }
            else {
              pbVar137 = param_3 + lVar123;
              uVar115 = (ulonglong)pbVar137 & 0xf;
              if (uVar115 != 0) {
                uVar115 = 0x10 - uVar115;
              }
              if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a515dc;
              iVar106 = iVar90 - (iVar90 - (int)uVar115 & 0xfU);
              uVar116 = 0;
              if (uVar115 != 0) {
                do {
                  pbVar137[uVar116] = bVar15;
                  uVar116 = uVar116 + 1;
                } while (uVar116 < uVar115);
              }
              uVar139 = CONCAT22(CONCAT11(bVar15,bVar15),CONCAT11(bVar15,bVar15));
              in_XMM0._0_8_ = CONCAT44(uVar139,uVar139);
              in_XMM0._8_8_ = in_XMM0._0_8_;
              do {
                *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                uVar115 = uVar115 + 0x10;
              } while (uVar115 < (ulonglong)(longlong)iVar106);
              uVar107 = iVar119 + iVar106;
            }
            uVar115 = (ulonglong)iVar106;
            if (uVar3 <= uVar115) goto LAB_140a515b2;
            do {
              param_3[uVar115 + lVar123] = bVar15;
              uVar115 = uVar115 + 1;
            } while (uVar115 < uVar3);
            lVar123 = (longlong)((int)uVar115 + iVar119);
          }
        }
        else {
          if ((int)uVar1 < 1) goto LAB_140a515b5;
          if (6 < (int)uVar1) {
            lVar127 = lVar103 + lVar7;
            pbVar137 = param_3 + lVar123;
            if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar127) ||
               ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar127))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a515e3:
                uVar116 = 0;
              }
              else {
                uVar115 = (ulonglong)pbVar137 & 0xf;
                if (uVar115 != 0) {
                  uVar115 = 0x10 - uVar115;
                }
                if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a515e3;
                uVar126 = 0;
                uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                if (uVar115 != 0) {
                  do {
                    pbVar137[uVar126] = *(byte *)(uVar126 + lVar127);
                    uVar126 = uVar126 + 1;
                  } while (uVar126 < uVar115);
                }
                if ((lVar127 + uVar115 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar127);
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar127));
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
              }
              for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
                pbVar137[uVar116] = *(byte *)(uVar116 + lVar127);
              }
              lVar123 = (longlong)(iVar119 + 2 + iVar98);
              goto LAB_140a515b5;
            }
          }
          iVar106 = 1;
          if (uVar129 != 0) {
            uVar115 = 0;
            do {
              uVar116 = uVar115;
              param_3[uVar116 * 2 + lVar123] = *(byte *)(lVar103 + lVar7 + uVar116 * 2);
              param_3[uVar116 * 2 + lVar123 + 1] = *(byte *)(lVar103 + lVar7 + 1 + uVar116 * 2);
              uVar115 = uVar116 + 1;
            } while (uVar115 < uVar132);
            uVar107 = iVar119 + (int)uVar115 * 2;
            iVar106 = (int)uVar116 + 2 + (int)uVar115;
          }
          if (iVar106 - 1U < uVar1) {
            param_3[(longlong)iVar106 + -1 + lVar123] =
                 *(byte *)((longlong)iVar106 + -1 + lVar103 + lVar7);
            lVar123 = (longlong)(iVar106 + iVar119);
            goto LAB_140a515b5;
          }
LAB_140a515b2:
          lVar123 = (longlong)(int)uVar107;
        }
LAB_140a515b5:
        uVar115 = lVar123 - lVar2;
        if ((int)(uint)param_6 < 3) {
          uVar115 = uVar113;
        }
      }
      else if (uVar111 == 2) {
        uVar116 = uVar113;
        if (0 < (int)(uint)param_6) {
          if (uVar88 < 7) {
LAB_140a4fcbd:
            iVar119 = 1;
            uVar111 = param_5;
            if (uVar130 != 0) {
              lVar103 = lVar108 * uVar93 + param_1;
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                pbVar6[uVar116 * 2] = *(byte *)(lVar103 + uVar116 * 2);
                pbVar6[uVar116 * 2 + 1] = *(byte *)(lVar103 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar133);
              uVar111 = param_5 + (int)uVar115 * 2;
              iVar119 = (int)uVar116 + 2 + (int)uVar115;
            }
            if (iVar119 - 1U < uVar88) {
              pbVar6[(longlong)iVar119 + -1] = *(byte *)(param_1 + iVar119 + -1 + lVar108 * uVar93);
              uVar111 = param_5 + iVar119;
            }
          }
          else {
            lVar103 = lVar108 * uVar93 + param_1;
            if (((longlong)pbVar6 - lVar103 < (longlong)(ulonglong)uVar88) &&
               (-((longlong)pbVar6 - lVar103) < (longlong)(ulonglong)uVar88)) goto LAB_140a4fcbd;
            if ((uVar88 < 0x10) || (uVar88 < iVar105 + 0x10U)) {
              iVar119 = 0;
            }
            else {
              uVar115 = 0;
              if (iVar105 != 0) {
                do {
                  pbVar6[uVar115] = *(byte *)(uVar115 + lVar103);
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar109);
              }
              uVar115 = uVar109;
              iVar119 = iVar110;
              if ((lVar103 + uVar109 & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar103);
                  *(undefined1 (*) [16])(pbVar6 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar114);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar103));
                  *(undefined1 (*) [16])(pbVar6 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar114);
              }
            }
            for (uVar115 = (ulonglong)iVar119; uVar111 = param_5 + uVar88, uVar115 < uVar89;
                uVar115 = uVar115 + 1) {
              pbVar6[uVar115] = *(byte *)(uVar115 + lVar103);
            }
          }
          uVar116 = (ulonglong)(int)uVar111;
          if (2 < (int)(uint)param_6) {
            lVar103 = lVar108 * uVar93;
            if (uVar104 == 0) {
              lVar123 = lVar103 + lVar7;
              if (-1 < (int)uVar138) {
                if (((int)param_5 < 7) ||
                   ((pbVar137 = param_3 + ((uVar113 - 1) - (lVar103 + -1 + lVar7)),
                    (longlong)pbVar137 <= (longlong)uVar113 &&
                    ((byte *)-uVar113 == pbVar137 || -(longlong)pbVar137 < (longlong)uVar113)))) {
                  iVar119 = 1;
                  lVar127 = 0;
                  uVar115 = 0;
                  if (uVar97 != 0) {
                    do {
                      uVar126 = uVar115;
                      uVar115 = uVar126 + 1;
                      pbVar6[lVar127 + -1] = *(byte *)(lVar127 + -1 + lVar123);
                      pbVar6[lVar127 + -2] = *(byte *)(lVar127 + -2 + lVar123);
                      lVar127 = lVar127 + -2;
                    } while (uVar115 < uVar99);
                    iVar119 = (int)uVar126 + 2 + (int)uVar115;
                  }
                  if (iVar119 - 1U < param_5) {
                    pbVar6[-(longlong)iVar119] = *(byte *)(lVar123 - iVar119);
                  }
                }
                else {
                  if (((longlong)uVar121 < 0x10) || ((longlong)uVar121 < lVar120)) {
                    uVar115 = 0;
                  }
                  else {
                    uVar115 = 0;
                    lVar127 = lVar123 - uVar113;
                    if (uVar102 != 0) {
                      do {
                        param_3[uVar115] = *(byte *)(uVar115 + lVar127);
                        uVar115 = uVar115 + 1;
                      } while (uVar115 < uVar102);
                    }
                    uVar126 = uVar102;
                    uVar115 = uVar122;
                    if ((lVar127 + uVar102 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar126 + lVar127);
                        *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                        uVar126 = uVar126 + 0x10;
                      } while (uVar126 < uVar122);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar126 + lVar127));
                        *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                        uVar126 = uVar126 + 0x10;
                      } while (uVar126 < uVar122);
                    }
                  }
                  if (uVar115 < uVar121) {
                    do {
                      param_3[uVar115] = *(byte *)(uVar115 + (lVar123 - uVar113));
                      uVar115 = uVar115 + 1;
                    } while (uVar115 < uVar121);
                  }
                }
              }
            }
            else if (-1 < (int)uVar138) {
              if (6 < (int)param_5) {
                pbVar137 = param_3 + ((uVar113 - 1) - (param_1 + -1 + lVar103));
                if (((longlong)uVar113 < (longlong)pbVar137) ||
                   ((byte *)-uVar113 != pbVar137 && (longlong)uVar113 <= -(longlong)pbVar137)) {
                  if (((longlong)uVar121 < 0x10) || ((longlong)uVar121 < lVar120)) {
                    uVar115 = 0;
                  }
                  else {
                    uVar115 = 0;
                    lVar123 = (param_1 + lVar103) - uVar113;
                    if (uVar102 != 0) {
                      do {
                        param_3[uVar115] = *(byte *)(uVar115 + lVar123);
                        uVar115 = uVar115 + 1;
                      } while (uVar115 < uVar102);
                    }
                    uVar126 = uVar102;
                    uVar115 = uVar122;
                    if ((lVar123 + uVar102 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar126 + lVar123);
                        *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                        uVar126 = uVar126 + 0x10;
                      } while (uVar126 < uVar122);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar126 + lVar123));
                        *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                        uVar126 = uVar126 + 0x10;
                      } while (uVar126 < uVar122);
                    }
                  }
                  if (uVar115 < uVar121) {
                    do {
                      param_3[uVar115] = *(byte *)(uVar115 + ((param_1 + lVar103) - uVar113));
                      uVar115 = uVar115 + 1;
                    } while (uVar115 < uVar121);
                  }
                  goto LAB_140a50175;
                }
              }
              iVar119 = 1;
              lVar123 = 0;
              if (uVar97 != 0) {
                uVar115 = 0;
                do {
                  uVar126 = uVar115;
                  uVar115 = uVar126 + 1;
                  pbVar6[lVar123 + -1] = *(byte *)(lVar123 + -1 + param_1 + lVar103);
                  pbVar6[lVar123 + -2] = *(byte *)(lVar123 + -2 + param_1 + lVar103);
                  lVar123 = lVar123 + -2;
                } while (uVar115 < uVar99);
                iVar119 = (int)uVar126 + 2 + (int)uVar115;
              }
              if (iVar119 - 1U < param_5) {
                pbVar6[-(longlong)iVar119] = *(byte *)((param_1 + lVar103) - (longlong)iVar119);
              }
            }
LAB_140a50175:
            lVar123 = lVar103 + lVar7;
            param_3[uVar116] = *(byte *)(lVar123 + -2);
            param_3[uVar116 + 1] = *(byte *)(lVar123 + -1);
            iVar106 = uVar111 + 2;
            lVar127 = (longlong)iVar106;
            iVar119 = iVar106;
            if (uVar134 == 0) {
              if (0 < (int)uVar1) {
                if (6 < (int)uVar1) {
                  pbVar137 = param_3 + lVar127;
                  lVar123 = param_1 + lVar103;
                  if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar123) ||
                     ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar123))) {
                    if ((longlong)uVar3 < 0x10) {
LAB_140a50d95:
                      uVar116 = 0;
                    }
                    else {
                      uVar115 = (ulonglong)pbVar137 & 0xf;
                      if (uVar115 != 0) {
                        uVar115 = 0x10 - uVar115;
                      }
                      if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a50d95;
                      uVar126 = 0;
                      uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                      if (uVar115 != 0) {
                        do {
                          pbVar137[uVar126] = *(byte *)(uVar126 + lVar123);
                          uVar126 = uVar126 + 1;
                        } while (uVar126 < uVar115);
                      }
                      if ((lVar123 + uVar115 & 0xf) == 0) {
                        do {
                          in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                          *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                          uVar115 = uVar115 + 0x10;
                        } while (uVar115 < uVar116);
                      }
                      else {
                        do {
                          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                          *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                          uVar115 = uVar115 + 0x10;
                        } while (uVar115 < uVar116);
                      }
                    }
                    for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
                      pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
                    }
                    lVar127 = (longlong)(int)(iVar98 + 4 + uVar111);
                    goto LAB_140a50573;
                  }
                }
                iVar101 = 1;
                if (uVar129 != 0) {
                  uVar115 = 0;
                  do {
                    uVar116 = uVar115;
                    param_3[uVar116 * 2 + lVar127] = *(byte *)(param_1 + lVar103 + uVar116 * 2);
                    param_3[uVar116 * 2 + lVar127 + 1] =
                         *(byte *)(param_1 + lVar103 + 1 + uVar116 * 2);
                    uVar115 = uVar116 + 1;
                  } while (uVar115 < uVar132);
                  iVar119 = (int)uVar115 * 2 + 2 + uVar111;
                  iVar101 = (int)uVar116 + 2 + (int)uVar115;
                }
                if (uVar1 <= iVar101 - 1U) goto LAB_140a50570;
                param_3[(longlong)iVar101 + -1 + lVar127] =
                     *(byte *)((longlong)iVar101 + -1 + lVar103 + param_1);
                lVar127 = (longlong)(iVar101 + iVar106);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a50573;
              if (6 < (int)uVar1) {
                pbVar137 = param_3 + lVar127;
                if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar123) ||
                   ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar123))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a50d9c:
                    uVar116 = 0;
                  }
                  else {
                    uVar115 = (ulonglong)pbVar137 & 0xf;
                    if (uVar115 != 0) {
                      uVar115 = 0x10 - uVar115;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a50d9c;
                    uVar126 = 0;
                    uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                    if (uVar115 != 0) {
                      do {
                        pbVar137[uVar126] = *(byte *)(uVar126 + lVar123);
                        uVar126 = uVar126 + 1;
                      } while (uVar126 < uVar115);
                    }
                    if ((lVar123 + uVar115 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                  }
                  for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
                    pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
                  }
                  lVar127 = (longlong)(int)(iVar98 + 4 + uVar111);
                  goto LAB_140a50573;
                }
              }
              iVar101 = 1;
              uVar115 = 0;
              if (uVar129 != 0) {
                do {
                  uVar116 = uVar115;
                  param_3[uVar116 * 2 + lVar127] = *(byte *)(lVar123 + uVar116 * 2);
                  param_3[uVar116 * 2 + lVar127 + 1] = *(byte *)(lVar123 + 1 + uVar116 * 2);
                  uVar115 = uVar116 + 1;
                } while (uVar115 < uVar132);
                iVar119 = (int)uVar115 * 2 + 2 + uVar111;
                iVar101 = (int)uVar116 + 2 + (int)uVar115;
              }
              if (iVar101 - 1U < uVar1) {
                param_3[(longlong)iVar101 + -1 + lVar127] =
                     *(byte *)((longlong)iVar101 + -1 + lVar123);
                lVar127 = (longlong)(iVar101 + iVar106);
                goto LAB_140a50573;
              }
LAB_140a50570:
              lVar127 = (longlong)iVar119;
            }
LAB_140a50573:
            uVar115 = lVar127 - lVar2;
            goto LAB_140a4eb00;
          }
        }
        if (uVar104 == 0) {
          if (-1 < (int)uVar138) {
            if (((int)param_5 < 7) ||
               ((pbVar137 = param_3 + ((uVar113 - 1) - (longlong)(pbVar6 + lVar100 + -1)),
                (longlong)pbVar137 <= (longlong)uVar113 &&
                ((byte *)-uVar113 == pbVar137 || -(longlong)pbVar137 < (longlong)uVar113)))) {
              iVar119 = 1;
              lVar103 = 0;
              uVar115 = 0;
              if (uVar97 != 0) {
                do {
                  uVar126 = uVar115;
                  uVar115 = uVar126 + 1;
                  pbVar6[lVar103 + -1] = pbVar6[lVar103 + -1 + lVar100];
                  pbVar6[lVar103 + -2] = pbVar6[lVar103 + -2 + lVar100];
                  lVar103 = lVar103 + -2;
                } while (uVar115 < uVar99);
                iVar119 = (int)uVar126 + 2 + (int)uVar115;
              }
              if (iVar119 - 1U < param_5) {
                pbVar6[-(longlong)iVar119] = pbVar6[lVar100 - iVar119];
              }
            }
            else {
              if (((longlong)uVar121 < 0x10) || ((longlong)uVar121 < lVar120)) {
                uVar115 = 0;
              }
              else {
                uVar115 = 0;
                if (uVar102 != 0) {
                  do {
                    param_3[uVar115] = pbVar6[uVar115 + lVar87];
                    uVar115 = uVar115 + 1;
                  } while (uVar115 < uVar102);
                }
                uVar126 = uVar102;
                uVar115 = uVar122;
                if (((ulonglong)(pbVar6 + uVar102 + lVar87) & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(pbVar6 + uVar126 + lVar87);
                    *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                    uVar126 = uVar126 + 0x10;
                  } while (uVar126 < uVar122);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar6 + uVar126 + lVar87));
                    *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                    uVar126 = uVar126 + 0x10;
                  } while (uVar126 < uVar122);
                }
              }
              for (; uVar115 < uVar121; uVar115 = uVar115 + 1) {
                param_3[uVar115] = pbVar6[uVar115 + lVar87];
              }
            }
          }
        }
        else if (-1 < (int)uVar138) {
          if (6 < (int)param_5) {
            lVar103 = param_1 + lVar108 * uVar93;
            pbVar137 = param_3 + ((uVar113 - 1) - (lVar103 + -1));
            if (((longlong)uVar113 < (longlong)pbVar137) ||
               ((byte *)-uVar113 != pbVar137 && (longlong)uVar113 <= -(longlong)pbVar137)) {
              if (((longlong)uVar121 < 0x10) || ((longlong)uVar121 < lVar120)) {
                uVar115 = 0;
              }
              else {
                uVar115 = 0;
                lVar123 = lVar103 - uVar113;
                if (uVar102 != 0) {
                  do {
                    param_3[uVar115] = *(byte *)(uVar115 + lVar123);
                    uVar115 = uVar115 + 1;
                  } while (uVar115 < uVar102);
                }
                uVar126 = uVar102;
                uVar115 = uVar122;
                if ((lVar123 + uVar102 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar126 + lVar123);
                    *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                    uVar126 = uVar126 + 0x10;
                  } while (uVar126 < uVar122);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar126 + lVar123));
                    *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                    uVar126 = uVar126 + 0x10;
                  } while (uVar126 < uVar122);
                }
              }
              if (uVar115 < uVar121) {
                do {
                  param_3[uVar115] = *(byte *)(uVar115 + (lVar103 - uVar113));
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar121);
              }
              goto LAB_140a5099a;
            }
          }
          iVar119 = 1;
          lVar103 = 0;
          if (uVar97 != 0) {
            lVar123 = lVar108 * uVar93 + param_1;
            uVar115 = 0;
            do {
              uVar126 = uVar115;
              uVar115 = uVar126 + 1;
              pbVar6[lVar103 + -1] = *(byte *)(lVar103 + -1 + lVar123);
              pbVar6[lVar103 + -2] = *(byte *)(lVar103 + -2 + lVar123);
              lVar103 = lVar103 + -2;
            } while (uVar115 < uVar99);
            iVar119 = (int)uVar126 + 2 + (int)uVar115;
          }
          if (iVar119 - 1U < param_5) {
            pbVar6[-(longlong)iVar119] = *(byte *)((param_1 - iVar119) + lVar108 * uVar93);
          }
        }
LAB_140a5099a:
        if (uVar134 == 0) {
          uVar115 = uVar113;
          if ((int)uVar1 < 1) goto LAB_140a4eb00;
          if (6 < (int)uVar1) {
            pbVar137 = param_3 + uVar116;
            pbVar8 = param_3 + (uVar116 - lVar100);
            if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - (longlong)pbVar8) ||
               ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - (longlong)pbVar8))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a50db4:
                uVar116 = 0;
              }
              else {
                uVar115 = (ulonglong)pbVar137 & 0xf;
                if (uVar115 != 0) {
                  uVar115 = 0x10 - uVar115;
                }
                if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a50db4;
                uVar126 = 0;
                uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                if (uVar115 != 0) {
                  do {
                    pbVar137[uVar126] = pbVar8[uVar126];
                    uVar126 = uVar126 + 1;
                  } while (uVar126 < uVar115);
                }
                if (((ulonglong)(pbVar8 + uVar115) & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(pbVar8 + uVar115);
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(pbVar8 + uVar115));
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
              }
              for (; uVar115 = uVar113, uVar116 < uVar3; uVar116 = uVar116 + 1) {
                pbVar137[uVar116] = pbVar8[uVar116];
              }
              goto LAB_140a4eb00;
            }
          }
          iVar119 = 1;
          if (uVar129 != 0) {
            uVar115 = 0;
            do {
              uVar126 = uVar115;
              param_3[uVar126 * 2 + uVar116] = param_3[uVar126 * 2 + (uVar116 - lVar100)];
              param_3[uVar126 * 2 + uVar116 + 1] = param_3[uVar126 * 2 + (uVar116 - lVar100) + 1];
              uVar115 = uVar126 + 1;
            } while (uVar115 < uVar132);
            iVar119 = (int)uVar126 + 2 + (int)uVar115;
          }
          uVar115 = uVar113;
          if (iVar119 - 1U < uVar1) {
            param_3[(longlong)iVar119 + -1 + uVar116] =
                 param_3[(longlong)iVar119 + -1 + (uVar116 - lVar100)];
          }
        }
        else {
          uVar115 = uVar113;
          if ((int)uVar1 < 1) goto LAB_140a4eb00;
          if (6 < (int)uVar1) {
            pbVar137 = param_3 + uVar116;
            lVar103 = lVar108 * uVar93 + lVar7;
            if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar103) ||
               ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar103))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a50dbb:
                uVar116 = 0;
              }
              else {
                uVar115 = (ulonglong)pbVar137 & 0xf;
                if (uVar115 != 0) {
                  uVar115 = 0x10 - uVar115;
                }
                if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a50dbb;
                uVar126 = 0;
                uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                if (uVar115 != 0) {
                  do {
                    pbVar137[uVar126] = *(byte *)(uVar126 + lVar103);
                    uVar126 = uVar126 + 1;
                  } while (uVar126 < uVar115);
                }
                if ((lVar103 + uVar115 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar103);
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar103));
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
              }
              for (; uVar115 = uVar113, uVar116 < uVar3; uVar116 = uVar116 + 1) {
                pbVar137[uVar116] = *(byte *)(uVar116 + lVar103);
              }
              goto LAB_140a4eb00;
            }
          }
          iVar119 = 1;
          if (uVar129 != 0) {
            lVar103 = lVar108 * uVar93 + lVar7;
            uVar115 = 0;
            do {
              uVar126 = uVar115;
              param_3[uVar126 * 2 + uVar116] = *(byte *)(lVar103 + uVar126 * 2);
              param_3[uVar126 * 2 + uVar116 + 1] = *(byte *)(lVar103 + 1 + uVar126 * 2);
              uVar115 = uVar126 + 1;
            } while (uVar115 < uVar132);
            iVar119 = (int)uVar126 + 2 + (int)uVar115;
          }
          uVar115 = uVar113;
          if (iVar119 - 1U < uVar1) {
            param_3[(longlong)iVar119 + -1 + uVar116] =
                 *(byte *)(lVar7 + iVar119 + -1 + lVar108 * uVar93);
          }
        }
      }
      else if (uVar111 == 3) {
        uVar116 = uVar113;
        if (0 < (int)(uint)param_6) {
          if (uVar88 < 7) {
LAB_140a4ef5d:
            iVar119 = 1;
            uVar111 = param_5;
            if (uVar130 != 0) {
              lVar103 = lVar108 * uVar93 + param_1;
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                pbVar6[uVar116 * 2] = *(byte *)(lVar103 + uVar116 * 2);
                pbVar6[uVar116 * 2 + 1] = *(byte *)(lVar103 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar133);
              uVar111 = param_5 + (int)uVar115 * 2;
              iVar119 = (int)uVar116 + 2 + (int)uVar115;
            }
            if (iVar119 - 1U < uVar88) {
              pbVar6[(longlong)iVar119 + -1] = *(byte *)(param_1 + iVar119 + -1 + lVar108 * uVar93);
              uVar111 = param_5 + iVar119;
            }
          }
          else {
            lVar103 = lVar108 * uVar93 + param_1;
            if (((longlong)pbVar6 - lVar103 < (longlong)(ulonglong)uVar88) &&
               (-((longlong)pbVar6 - lVar103) < (longlong)(ulonglong)uVar88)) goto LAB_140a4ef5d;
            if ((uVar88 < 0x10) || (uVar88 < iVar105 + 0x10U)) {
              uVar115 = 0;
            }
            else {
              uVar115 = 0;
              if (iVar105 != 0) {
                do {
                  pbVar6[uVar115] = *(byte *)(uVar115 + lVar103);
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar109);
              }
              uVar116 = uVar109;
              uVar115 = uVar114;
              if ((lVar103 + uVar109 & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar116 + lVar103);
                  *(undefined1 (*) [16])(pbVar6 + uVar116) = in_XMM0;
                  uVar116 = uVar116 + 0x10;
                } while (uVar116 < uVar114);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar116 + lVar103));
                  *(undefined1 (*) [16])(pbVar6 + uVar116) = in_XMM0;
                  uVar116 = uVar116 + 0x10;
                } while (uVar116 < uVar114);
              }
            }
            for (; uVar111 = param_5 + uVar88, uVar115 < uVar89; uVar115 = uVar115 + 1) {
              pbVar6[uVar115] = *(byte *)(uVar115 + lVar103);
            }
          }
          uVar116 = (ulonglong)(int)uVar111;
          if (2 < (int)(uint)param_6) {
            if (uVar104 == 0) {
              if (-1 < (int)uVar138) {
                iVar119 = 1;
                lVar103 = 0;
                if (uVar97 != 0) {
                  lVar123 = lVar108 * uVar93 + param_1 + uVar131;
                  uVar115 = 0;
                  do {
                    uVar126 = uVar115;
                    pbVar6[lVar103 + -1] = *(byte *)(lVar123 + uVar126 * 2);
                    uVar115 = uVar126 + 1;
                    pbVar6[lVar103 + -2] = *(byte *)(lVar123 + 1 + uVar126 * 2);
                    lVar103 = lVar103 + -2;
                  } while (uVar115 < uVar99);
                  iVar119 = (int)uVar126 + 2 + (int)uVar115;
                }
                if (iVar119 - 1U < param_5) {
                  pbVar6[-(longlong)iVar119] =
                       *(byte *)((longlong)iVar119 + -1 + lVar108 * uVar93 + param_1 + uVar131);
                }
              }
            }
            else {
              lVar103 = lVar108 * uVar93;
              if (-1 < (int)uVar138) {
                if (6 < (int)param_5) {
                  pbVar137 = param_3 + ((uVar113 - 1) - (param_1 + -1 + lVar103));
                  if (((longlong)uVar113 < (longlong)pbVar137) ||
                     ((byte *)-uVar113 != pbVar137 && (longlong)uVar113 <= -(longlong)pbVar137)) {
                    if (((longlong)uVar121 < 0x10) || ((longlong)uVar121 < lVar120)) {
                      uVar115 = 0;
                    }
                    else {
                      uVar115 = 0;
                      lVar123 = (param_1 + lVar103) - uVar113;
                      if (uVar102 != 0) {
                        do {
                          param_3[uVar115] = *(byte *)(uVar115 + lVar123);
                          uVar115 = uVar115 + 1;
                        } while (uVar115 < uVar102);
                      }
                      uVar126 = uVar102;
                      uVar115 = uVar122;
                      if ((lVar123 + uVar102 & 0xf) == 0) {
                        do {
                          in_XMM0 = *(undefined1 (*) [16])(uVar126 + lVar123);
                          *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                          uVar126 = uVar126 + 0x10;
                        } while (uVar126 < uVar122);
                      }
                      else {
                        do {
                          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar126 + lVar123));
                          *(undefined1 (*) [16])(param_3 + uVar126) = in_XMM0;
                          uVar126 = uVar126 + 0x10;
                        } while (uVar126 < uVar122);
                      }
                    }
                    if (uVar115 < uVar121) {
                      do {
                        param_3[uVar115] = *(byte *)(uVar115 + ((param_1 + lVar103) - uVar113));
                        uVar115 = uVar115 + 1;
                      } while (uVar115 < uVar121);
                    }
                    goto LAB_140a4f2d8;
                  }
                }
                iVar119 = 1;
                lVar123 = 0;
                if (uVar97 != 0) {
                  uVar115 = 0;
                  do {
                    uVar126 = uVar115;
                    uVar115 = uVar126 + 1;
                    pbVar6[lVar123 + -1] = *(byte *)(lVar123 + -1 + param_1 + lVar103);
                    pbVar6[lVar123 + -2] = *(byte *)(lVar123 + -2 + param_1 + lVar103);
                    lVar123 = lVar123 + -2;
                  } while (uVar115 < uVar99);
                  iVar119 = (int)uVar126 + 2 + (int)uVar115;
                }
                if (iVar119 - 1U < param_5) {
                  pbVar6[-(longlong)iVar119] = *(byte *)((param_1 + lVar103) - (longlong)iVar119);
                }
              }
            }
LAB_140a4f2d8:
            lVar123 = lVar108 * uVar93;
            lVar103 = lVar123 + lVar7;
            param_3[uVar116] = *(byte *)(lVar103 + -2);
            param_3[uVar116 + 1] = *(byte *)(lVar103 + -1);
            iVar106 = uVar111 + 2;
            lVar127 = (longlong)iVar106;
            iVar119 = iVar106;
            if (uVar134 == 0) {
              if (0 < (int)uVar1) {
                iVar101 = 1;
                lVar103 = 0;
                if (uVar129 != 0) {
                  lVar117 = lVar136 + lVar123;
                  uVar115 = 0;
                  do {
                    uVar116 = uVar115;
                    param_3[uVar116 * 2 + lVar127] = *(byte *)(lVar103 + -1 + lVar117);
                    lVar9 = lVar103 + -2;
                    lVar103 = lVar103 + -2;
                    param_3[uVar116 * 2 + lVar127 + 1] = *(byte *)(lVar9 + lVar117);
                    uVar115 = uVar116 + 1;
                  } while (uVar115 < uVar132);
                  iVar119 = (int)uVar115 * 2 + 2 + uVar111;
                  iVar101 = (int)uVar116 + 2 + (int)uVar115;
                }
                if (uVar1 <= iVar101 - 1U) goto LAB_140a4f5af;
                param_3[(longlong)iVar101 + -1 + lVar127] =
                     *(byte *)((lVar123 + lVar136) - (longlong)iVar101);
                lVar127 = (longlong)(iVar101 + iVar106);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140a4f5b2;
              if (6 < (int)uVar1) {
                pbVar137 = param_3 + lVar127;
                if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar103) ||
                   ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar103))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4fb31:
                    uVar116 = 0;
                  }
                  else {
                    uVar115 = (ulonglong)pbVar137 & 0xf;
                    if (uVar115 != 0) {
                      uVar115 = 0x10 - uVar115;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a4fb31;
                    uVar126 = 0;
                    uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                    if (uVar115 != 0) {
                      do {
                        pbVar137[uVar126] = *(byte *)(uVar126 + lVar103);
                        uVar126 = uVar126 + 1;
                      } while (uVar126 < uVar115);
                    }
                    if ((lVar103 + uVar115 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar103);
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar103));
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                  }
                  for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
                    pbVar137[uVar116] = *(byte *)(uVar116 + lVar103);
                  }
                  lVar127 = (longlong)(int)(iVar98 + 4 + uVar111);
                  goto LAB_140a4f5b2;
                }
              }
              iVar101 = 1;
              uVar115 = 0;
              if (uVar129 != 0) {
                do {
                  uVar116 = uVar115;
                  param_3[uVar116 * 2 + lVar127] = *(byte *)(lVar103 + uVar116 * 2);
                  param_3[uVar116 * 2 + lVar127 + 1] = *(byte *)(lVar103 + 1 + uVar116 * 2);
                  uVar115 = uVar116 + 1;
                } while (uVar115 < uVar132);
                iVar119 = (int)uVar115 * 2 + 2 + uVar111;
                iVar101 = (int)uVar116 + 2 + (int)uVar115;
              }
              if (iVar101 - 1U < uVar1) {
                param_3[(longlong)iVar101 + -1 + lVar127] =
                     *(byte *)((longlong)iVar101 + -1 + lVar103);
                lVar127 = (longlong)(iVar101 + iVar106);
              }
              else {
LAB_140a4f5af:
                lVar127 = (longlong)iVar119;
              }
            }
LAB_140a4f5b2:
            uVar115 = lVar127 - lVar2;
            goto LAB_140a4eb00;
          }
        }
        uVar115 = (ulonglong)uVar138;
        if (uVar104 == 0) {
          uVar111 = uVar138;
          if (uVar134 == 0) {
            while (-1 < (int)uVar111) {
              uVar111 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                uVar116 = (ulonglong)(int)uVar115;
                uVar115 = uVar116;
                do {
                  if ((int)uVar115 < 0) break;
                  lVar103 = (longlong)(int)uVar111;
                  uVar111 = uVar111 + 1;
                  uVar115 = (ulonglong)((int)uVar115 - 1);
                  param_3[uVar116 - lVar103] = param_3[lVar103 + uVar131 + 1 + uVar116];
                } while (uVar111 < uVar128);
              }
              uVar111 = (uint)uVar115;
            }
            uVar116 = 0;
            uVar115 = uVar113;
            iVar119 = iVar94;
            iVar106 = iVar94;
            iVar101 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
            if ((int)param_5 < 2) {
              do {
                iVar112 = iVar101 + iVar119;
                pbVar6[uVar116 + lVar100] = param_3[iVar101];
                if (((int)(((uint)param_6 + 2) - uVar1) <= iVar112) || (iVar112 < (int)param_5)) {
                  iVar101 = iVar119 + iVar106;
                  iVar119 = -iVar119;
                  iVar112 = iVar112 - iVar101;
                  iVar106 = -iVar106;
                }
                uVar116 = uVar116 + 1;
                iVar101 = iVar112;
              } while (uVar116 < uVar3);
            }
          }
          else {
            if (-1 < (int)uVar138) {
              iVar119 = 1;
              lVar103 = 0;
              if (uVar97 != 0) {
                lVar123 = lVar108 * uVar93 + param_1;
                uVar115 = 0;
                do {
                  uVar126 = uVar115;
                  pbVar6[lVar103 + -1] = *(byte *)(lVar123 + 1 + uVar126 * 2);
                  uVar115 = uVar126 + 1;
                  pbVar6[lVar103 + -2] = *(byte *)(lVar123 + 2 + uVar126 * 2);
                  lVar103 = lVar103 + -2;
                } while (uVar115 < uVar99);
                iVar119 = (int)uVar126 + 2 + (int)uVar115;
              }
              if (iVar119 - 1U < param_5) {
                pbVar6[-(longlong)iVar119] = *(byte *)(param_1 + iVar119 + lVar108 * uVar93);
              }
            }
LAB_140a4f872:
            uVar115 = uVar113;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar137 = param_3 + uVar116;
                lVar103 = lVar108 * uVar93 + lVar7;
                if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar103) ||
                   ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar103))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4fb39:
                    uVar116 = 0;
                  }
                  else {
                    uVar115 = (ulonglong)pbVar137 & 0xf;
                    if (uVar115 != 0) {
                      uVar115 = 0x10 - uVar115;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a4fb39;
                    uVar126 = 0;
                    uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                    if (uVar115 != 0) {
                      do {
                        pbVar137[uVar126] = *(byte *)(uVar126 + lVar103);
                        uVar126 = uVar126 + 1;
                      } while (uVar126 < uVar115);
                    }
                    if ((lVar103 + uVar115 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar103);
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar103));
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                  }
                  for (; uVar115 = uVar113, uVar116 < uVar3; uVar116 = uVar116 + 1) {
                    pbVar137[uVar116] = *(byte *)(uVar116 + lVar103);
                  }
                  goto LAB_140a4eb00;
                }
              }
              iVar119 = 1;
              if (uVar129 != 0) {
                lVar103 = lVar108 * uVar93 + lVar7;
                uVar115 = 0;
                do {
                  uVar126 = uVar115;
                  param_3[uVar126 * 2 + uVar116] = *(byte *)(lVar103 + uVar126 * 2);
                  param_3[uVar126 * 2 + uVar116 + 1] = *(byte *)(lVar103 + 1 + uVar126 * 2);
                  uVar115 = uVar126 + 1;
                } while (uVar115 < uVar132);
                iVar119 = (int)uVar126 + 2 + (int)uVar115;
              }
              uVar115 = uVar113;
              if (iVar119 - 1U < uVar1) {
                param_3[(longlong)iVar119 + -1 + uVar116] =
                     *(byte *)(lVar7 + iVar119 + -1 + lVar108 * uVar93);
              }
            }
          }
        }
        else {
          if (-1 < (int)uVar138) {
            do {
              uVar111 = 0;
              if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                iVar119 = (int)uVar115;
                do {
                  if ((int)uVar115 < 0) break;
                  lVar103 = (longlong)(int)uVar111;
                  uVar111 = uVar111 + 1;
                  uVar115 = (ulonglong)((int)uVar115 - 1);
                  param_3[iVar119 - lVar103] =
                       *(byte *)(((longlong)iVar119 + lVar108 * uVar93 + lVar95) - lVar103);
                } while (uVar111 < uVar128);
              }
            } while (-1 < (int)uVar115);
          }
          if (uVar134 != 0) goto LAB_140a4f872;
          uVar115 = uVar113;
          if (0 < (int)uVar1) {
            iVar119 = 1;
            lVar103 = 0;
            if (uVar129 != 0) {
              lVar123 = lVar108 * uVar93 + lVar7;
              uVar115 = 0;
              do {
                uVar126 = uVar115;
                param_3[uVar126 * 2 + uVar116] = *(byte *)(lVar103 + -2 + lVar123);
                lVar127 = lVar103 + -3;
                lVar103 = lVar103 + -2;
                param_3[uVar126 * 2 + uVar116 + 1] = *(byte *)(lVar127 + lVar123);
                uVar115 = uVar126 + 1;
              } while (uVar115 < uVar132);
              iVar119 = (int)uVar126 + 2 + (int)uVar115;
            }
            uVar115 = uVar113;
            if (iVar119 - 1U < uVar1) {
              param_3[(longlong)iVar119 + -1 + uVar116] =
                   *(byte *)((lVar7 - iVar119) + -1 + lVar108 * uVar93);
            }
          }
        }
      }
      else if ((param_7 & 0xf0) == 0xf0) {
        uVar111 = 0;
        uVar107 = 0;
        if (0 < (int)param_5) {
          if (6 < (int)param_5) {
            lVar123 = lVar108 * uVar93;
            lVar103 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar123);
            if (((longlong)uVar113 <= lVar103) || ((longlong)uVar113 <= -lVar103)) {
              if (((longlong)uVar113 < 0x10) || ((longlong)uVar113 < lVar5)) {
                uVar115 = 0;
              }
              else {
                uVar115 = 0;
                lVar103 = lVar123 + lVar95;
                if (uVar135 != 0) {
                  do {
                    param_3[uVar115] = *(byte *)(uVar115 + lVar103);
                    uVar115 = uVar115 + 1;
                  } while (uVar115 < uVar135);
                }
                uVar116 = uVar135;
                uVar115 = uVar125;
                if ((lVar103 + uVar135 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar116 + lVar103);
                    *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                    uVar116 = uVar116 + 0x10;
                  } while (uVar116 < uVar125);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar116 + lVar103));
                    *(undefined1 (*) [16])(param_3 + uVar116) = in_XMM0;
                    uVar116 = uVar116 + 0x10;
                  } while (uVar116 < uVar125);
                }
              }
              uVar107 = param_5;
              if (uVar115 < uVar113) {
                do {
                  param_3[uVar115] = *(byte *)(uVar115 + lVar123 + lVar95);
                  uVar115 = uVar115 + 1;
                } while (uVar115 < uVar113);
              }
              goto LAB_140a4db93;
            }
          }
          uVar118 = 1;
          if (uVar97 != 0) {
            lVar103 = lVar108 * uVar93 + lVar95;
            uVar115 = 0;
            do {
              uVar116 = uVar115;
              param_3[uVar116 * 2] = *(byte *)(lVar103 + uVar116 * 2);
              param_3[uVar116 * 2 + 1] = *(byte *)(lVar103 + 1 + uVar116 * 2);
              uVar115 = uVar116 + 1;
            } while (uVar115 < uVar99);
            uVar111 = (int)uVar115 * 2;
            uVar118 = (int)uVar116 + 2 + (int)uVar115;
          }
          uVar107 = uVar111;
          if (uVar118 - 1 < param_5) {
            param_3[(longlong)(int)uVar118 + -1] =
                 *(byte *)(lVar95 + (int)uVar118 + -1 + lVar108 * uVar93);
            uVar107 = uVar118;
          }
        }
LAB_140a4db93:
        lVar103 = (longlong)(int)uVar107;
        if (0 < (int)(uint)param_6) {
          if (uVar88 < 7) {
LAB_140a4dcff:
            iVar119 = 1;
            uVar111 = uVar107;
            if (uVar130 != 0) {
              lVar123 = lVar108 * uVar93 + param_1;
              uVar115 = 0;
              do {
                uVar116 = uVar115;
                param_3[uVar116 * 2 + lVar103] = *(byte *)(lVar123 + uVar116 * 2);
                param_3[uVar116 * 2 + lVar103 + 1] = *(byte *)(lVar123 + 1 + uVar116 * 2);
                uVar115 = uVar116 + 1;
              } while (uVar115 < uVar133);
              uVar111 = uVar107 + (int)uVar115 * 2;
              iVar119 = (int)uVar116 + 2 + (int)uVar115;
            }
            if (iVar119 - 1U < uVar88) {
              uVar111 = uVar107 + iVar119;
              param_3[(longlong)iVar119 + -1 + lVar103] =
                   *(byte *)(param_1 + iVar119 + -1 + lVar108 * uVar93);
            }
          }
          else {
            pbVar137 = param_3 + lVar103;
            lVar123 = lVar108 * uVar93 + param_1;
            if (((longlong)pbVar137 - lVar123 < (longlong)(ulonglong)uVar88) &&
               (-((longlong)pbVar137 - lVar123) < (longlong)(ulonglong)uVar88)) goto LAB_140a4dcff;
            if (uVar88 < 0x10) {
LAB_140a4edd1:
              uVar116 = 0;
            }
            else {
              uVar115 = (ulonglong)pbVar137 & 0xf;
              if ((int)uVar115 != 0) {
                uVar115 = (ulonglong)(0x10 - (int)uVar115);
              }
              iVar119 = (int)uVar115;
              if (uVar88 < iVar119 + 0x10U) goto LAB_140a4edd1;
              iVar106 = uVar88 - (uVar88 - iVar119 & 0xf);
              uVar116 = 0;
              if (iVar119 != 0) {
                do {
                  pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
                  uVar116 = uVar116 + 1;
                } while (uVar116 < uVar115);
              }
              if ((lVar123 + uVar115 & 0xf) == 0) {
                uVar116 = (ulonglong)iVar106;
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
              else {
                uVar116 = (ulonglong)iVar106;
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                  *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                  uVar115 = uVar115 + 0x10;
                } while (uVar115 < uVar116);
              }
            }
            for (; uVar116 < uVar89; uVar116 = uVar116 + 1) {
              pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
            }
            uVar111 = uVar107 + uVar88;
          }
          lVar103 = (longlong)(int)uVar111;
          if (2 < (int)(uint)param_6) {
            lVar123 = lVar108 * uVar93 + lVar7;
            param_3[lVar103] = *(byte *)(lVar123 + -2);
            iVar119 = uVar111 + 2;
            param_3[lVar103 + 1] = *(byte *)(lVar123 + -1);
            lVar103 = (longlong)iVar119;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar137 = param_3 + lVar103;
                if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar123) ||
                   ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar123))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a4edd9:
                    uVar116 = 0;
                  }
                  else {
                    uVar115 = (ulonglong)pbVar137 & 0xf;
                    if (uVar115 != 0) {
                      uVar115 = 0x10 - uVar115;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a4edd9;
                    uVar126 = 0;
                    uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                    if (uVar115 != 0) {
                      do {
                        pbVar137[uVar126] = *(byte *)(uVar126 + lVar123);
                        uVar126 = uVar126 + 1;
                      } while (uVar126 < uVar115);
                    }
                    if ((lVar123 + uVar115 & 0xf) == 0) {
                      do {
                        in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                    else {
                      do {
                        in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                        *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                        uVar115 = uVar115 + 0x10;
                      } while (uVar115 < uVar116);
                    }
                  }
                  for (; uVar116 < uVar3; uVar116 = uVar116 + 1) {
                    pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
                  }
                  lVar103 = (longlong)(int)(iVar98 + 4 + uVar111);
                  goto LAB_140a4dfb3;
                }
              }
              iVar101 = 1;
              uVar115 = 0;
              iVar106 = iVar119;
              if (uVar129 != 0) {
                do {
                  uVar116 = uVar115;
                  param_3[uVar116 * 2 + lVar103] = *(byte *)(lVar123 + uVar116 * 2);
                  param_3[uVar116 * 2 + lVar103 + 1] = *(byte *)(lVar123 + 1 + uVar116 * 2);
                  uVar115 = uVar116 + 1;
                } while (uVar115 < uVar132);
                iVar106 = (int)uVar115 * 2 + 2 + uVar111;
                iVar101 = (int)uVar116 + 2 + (int)uVar115;
              }
              if (iVar101 - 1U < uVar1) {
                param_3[(longlong)iVar101 + -1 + lVar103] =
                     *(byte *)((longlong)iVar101 + -1 + lVar123);
                lVar103 = (longlong)(iVar101 + iVar119);
              }
              else {
                lVar103 = (longlong)iVar106;
              }
            }
LAB_140a4dfb3:
            uVar115 = lVar103 - lVar2;
            goto LAB_140a4eb00;
          }
        }
        uVar115 = uVar113;
        if (0 < (int)uVar1) {
          if (6 < (int)uVar1) {
            pbVar137 = param_3 + lVar103;
            lVar123 = lVar108 * uVar93 + lVar7;
            if (((longlong)(2 - uVar113) <= (longlong)pbVar137 - lVar123) ||
               ((longlong)(2 - uVar113) <= -((longlong)pbVar137 - lVar123))) {
              if ((longlong)uVar3 < 0x10) {
LAB_140a4ede0:
                uVar116 = 0;
              }
              else {
                uVar115 = (ulonglong)pbVar137 & 0xf;
                if (uVar115 != 0) {
                  uVar115 = 0x10 - uVar115;
                }
                if ((longlong)uVar3 < (longlong)(uVar115 + 0x10)) goto LAB_140a4ede0;
                uVar126 = 0;
                uVar116 = (ulonglong)(int)(iVar90 - (iVar90 - (int)uVar115 & 0xfU));
                if (uVar115 != 0) {
                  do {
                    pbVar137[uVar126] = *(byte *)(uVar126 + lVar123);
                    uVar126 = uVar126 + 1;
                  } while (uVar126 < uVar115);
                }
                if ((lVar123 + uVar115 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar115 + lVar123);
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar115 + lVar123));
                    *(undefined1 (*) [16])(pbVar137 + uVar115) = in_XMM0;
                    uVar115 = uVar115 + 0x10;
                  } while (uVar115 < uVar116);
                }
              }
              for (; uVar115 = uVar113, uVar116 < uVar3; uVar116 = uVar116 + 1) {
                pbVar137[uVar116] = *(byte *)(uVar116 + lVar123);
              }
              goto LAB_140a4eb00;
            }
          }
          iVar119 = 1;
          if (uVar129 != 0) {
            lVar123 = lVar108 * uVar93 + lVar7;
            uVar115 = 0;
            do {
              uVar116 = uVar115;
              param_3[uVar116 * 2 + lVar103] = *(byte *)(lVar123 + uVar116 * 2);
              param_3[uVar116 * 2 + lVar103 + 1] = *(byte *)(lVar123 + 1 + uVar116 * 2);
              uVar115 = uVar116 + 1;
            } while (uVar115 < uVar132);
            iVar119 = (int)uVar116 + 2 + (int)uVar115;
          }
          uVar115 = uVar113;
          if (iVar119 - 1U < uVar1) {
            param_3[(longlong)iVar119 + -1 + lVar103] =
                 *(byte *)(lVar7 + iVar119 + -1 + lVar108 * uVar93);
          }
        }
      }
      else {
        uVar115 = 0;
      }
    }
LAB_140a4eb00:
    **(short **)(param_2 + uVar93 * 8) = (ushort)*param_3 + (ushort)param_3[1] + (ushort)param_3[2];
    if (0 < (int)((uint)param_6 - 2)) {
      lVar103 = param_1 + lVar108 * uVar93;
      uVar116 = *(longlong *)(param_2 + uVar93 * 8) + 2;
      if (((longlong)(uVar116 - lVar103) < lVar100) &&
         ((longlong)-(uVar116 - lVar103) < lVar100 * 2 + -4)) {
        uVar116 = 0;
        do {
          *(ushort *)(*(longlong *)(param_2 + uVar93 * 8) + 2 + uVar116 * 2) =
               (ushort)*(byte *)(uVar116 + lVar103) + (ushort)*(byte *)(uVar116 + 1 + lVar103) +
               (ushort)*(byte *)(uVar116 + 2 + lVar103);
          uVar116 = uVar116 + 1;
        } while (uVar116 < uVar4);
      }
      else {
        if ((longlong)uVar4 < 0x10) {
LAB_140a51613:
          uVar126 = 0;
        }
        else {
          uVar111 = (uint)uVar116 & 0xf;
          if ((uVar116 & 0xf) != 0) {
            if ((uVar116 & 1) != 0) goto LAB_140a51613;
            uVar111 = 0x10 - uVar111 >> 1;
          }
          uVar116 = (ulonglong)uVar111;
          if ((longlong)uVar4 < (longlong)(uVar116 + 0x10)) goto LAB_140a51613;
          uVar126 = (ulonglong)(int)((int)uVar4 - ((int)uVar4 - uVar111 & 0xf));
          uVar92 = 0;
          if (uVar111 != 0) {
            do {
              *(ushort *)(*(longlong *)(param_2 + uVar93 * 8) + 2 + uVar92 * 2) =
                   (ushort)*(byte *)(uVar92 + lVar103) + (ushort)*(byte *)(uVar92 + 1 + lVar103) +
                   (ushort)*(byte *)(uVar92 + 2 + lVar103);
              uVar92 = uVar92 + 1;
            } while (uVar92 < uVar116);
          }
          lVar123 = lVar108 * uVar93 + param_1;
          do {
            uVar92 = *(ulonglong *)(uVar116 + 1 + lVar123);
            uVar11 = *(ulonglong *)(uVar116 + lVar123);
            auVar21._8_6_ = 0;
            auVar21._0_8_ = uVar11;
            auVar21[0xe] = (char)(uVar11 >> 0x38);
            auVar27._8_4_ = 0;
            auVar27._0_8_ = uVar11;
            auVar27[0xc] = (char)(uVar11 >> 0x30);
            auVar27._13_2_ = auVar21._13_2_;
            auVar33._8_4_ = 0;
            auVar33._0_8_ = uVar11;
            auVar33._12_3_ = auVar27._12_3_;
            auVar39._8_2_ = 0;
            auVar39._0_8_ = uVar11;
            auVar39[10] = (char)(uVar11 >> 0x28);
            auVar39._11_4_ = auVar33._11_4_;
            auVar45._8_2_ = 0;
            auVar45._0_8_ = uVar11;
            auVar45._10_5_ = auVar39._10_5_;
            auVar51[8] = (char)(uVar11 >> 0x20);
            auVar51._0_8_ = uVar11;
            auVar51._9_6_ = auVar45._9_6_;
            auVar56._7_8_ = 0;
            auVar56._0_7_ = auVar51._8_7_;
            Var57 = CONCAT81(SUB158(auVar56 << 0x40,7),(char)(uVar11 >> 0x18));
            auVar75._9_6_ = 0;
            auVar75._0_9_ = Var57;
            auVar58._1_10_ = SUB1510(auVar75 << 0x30,5);
            auVar58[0] = (char)(uVar11 >> 0x10);
            auVar76._11_4_ = 0;
            auVar76._0_11_ = auVar58;
            auVar59._1_12_ = SUB1512(auVar76 << 0x20,3);
            auVar59[0] = (char)(uVar11 >> 8);
            auVar16._8_6_ = 0;
            auVar16._0_8_ = uVar92;
            auVar16[0xe] = (char)(uVar92 >> 0x38);
            auVar22._8_4_ = 0;
            auVar22._0_8_ = uVar92;
            auVar22[0xc] = (char)(uVar92 >> 0x30);
            auVar22._13_2_ = auVar16._13_2_;
            auVar28._8_4_ = 0;
            auVar28._0_8_ = uVar92;
            auVar28._12_3_ = auVar22._12_3_;
            auVar34._8_2_ = 0;
            auVar34._0_8_ = uVar92;
            auVar34[10] = (char)(uVar92 >> 0x28);
            auVar34._11_4_ = auVar28._11_4_;
            auVar40._8_2_ = 0;
            auVar40._0_8_ = uVar92;
            auVar40._10_5_ = auVar34._10_5_;
            auVar46[8] = (char)(uVar92 >> 0x20);
            auVar46._0_8_ = uVar92;
            auVar46._9_6_ = auVar40._9_6_;
            auVar60._7_8_ = 0;
            auVar60._0_7_ = auVar46._8_7_;
            Var61 = CONCAT81(SUB158(auVar60 << 0x40,7),(char)(uVar92 >> 0x18));
            auVar77._9_6_ = 0;
            auVar77._0_9_ = Var61;
            auVar62._1_10_ = SUB1510(auVar77 << 0x30,5);
            auVar62[0] = (char)(uVar92 >> 0x10);
            auVar78._11_4_ = 0;
            auVar78._0_11_ = auVar62;
            auVar52[2] = (char)(uVar92 >> 8);
            auVar52._0_2_ = (ushort)uVar92;
            auVar52._3_12_ = SUB1512(auVar78 << 0x20,3);
            uVar12 = *(ulonglong *)(uVar116 + 2 + lVar123);
            uVar13 = *(ulonglong *)(uVar116 + 8 + lVar123);
            uVar14 = *(ulonglong *)(uVar116 + 9 + lVar123);
            auVar17._8_6_ = 0;
            auVar17._0_8_ = uVar13;
            auVar17[0xe] = (char)(uVar13 >> 0x38);
            auVar23._8_4_ = 0;
            auVar23._0_8_ = uVar13;
            auVar23[0xc] = (char)(uVar13 >> 0x30);
            auVar23._13_2_ = auVar17._13_2_;
            auVar29._8_4_ = 0;
            auVar29._0_8_ = uVar13;
            auVar29._12_3_ = auVar23._12_3_;
            auVar35._8_2_ = 0;
            auVar35._0_8_ = uVar13;
            auVar35[10] = (char)(uVar13 >> 0x28);
            auVar35._11_4_ = auVar29._11_4_;
            auVar41._8_2_ = 0;
            auVar41._0_8_ = uVar13;
            auVar41._10_5_ = auVar35._10_5_;
            auVar47[8] = (char)(uVar13 >> 0x20);
            auVar47._0_8_ = uVar13;
            auVar47._9_6_ = auVar41._9_6_;
            auVar63._7_8_ = 0;
            auVar63._0_7_ = auVar47._8_7_;
            Var64 = CONCAT81(SUB158(auVar63 << 0x40,7),(char)(uVar13 >> 0x18));
            auVar79._9_6_ = 0;
            auVar79._0_9_ = Var64;
            auVar65._1_10_ = SUB1510(auVar79 << 0x30,5);
            auVar65[0] = (char)(uVar13 >> 0x10);
            auVar80._11_4_ = 0;
            auVar80._0_11_ = auVar65;
            auVar66._1_12_ = SUB1512(auVar80 << 0x20,3);
            auVar66[0] = (char)(uVar13 >> 8);
            auVar18._8_6_ = 0;
            auVar18._0_8_ = uVar14;
            auVar18[0xe] = (char)(uVar14 >> 0x38);
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar14;
            auVar24[0xc] = (char)(uVar14 >> 0x30);
            auVar24._13_2_ = auVar18._13_2_;
            auVar30._8_4_ = 0;
            auVar30._0_8_ = uVar14;
            auVar30._12_3_ = auVar24._12_3_;
            auVar36._8_2_ = 0;
            auVar36._0_8_ = uVar14;
            auVar36[10] = (char)(uVar14 >> 0x28);
            auVar36._11_4_ = auVar30._11_4_;
            auVar42._8_2_ = 0;
            auVar42._0_8_ = uVar14;
            auVar42._10_5_ = auVar36._10_5_;
            auVar48[8] = (char)(uVar14 >> 0x20);
            auVar48._0_8_ = uVar14;
            auVar48._9_6_ = auVar42._9_6_;
            auVar67._7_8_ = 0;
            auVar67._0_7_ = auVar48._8_7_;
            Var68 = CONCAT81(SUB158(auVar67 << 0x40,7),(char)(uVar14 >> 0x18));
            auVar81._9_6_ = 0;
            auVar81._0_9_ = Var68;
            auVar69._1_10_ = SUB1510(auVar81 << 0x30,5);
            auVar69[0] = (char)(uVar14 >> 0x10);
            auVar82._11_4_ = 0;
            auVar82._0_11_ = auVar69;
            auVar53[2] = (char)(uVar14 >> 8);
            auVar53._0_2_ = (ushort)uVar14;
            auVar53._3_12_ = SUB1512(auVar82 << 0x20,3);
            auVar19._8_6_ = 0;
            auVar19._0_8_ = uVar12;
            auVar19[0xe] = (char)(uVar12 >> 0x38);
            auVar25._8_4_ = 0;
            auVar25._0_8_ = uVar12;
            auVar25[0xc] = (char)(uVar12 >> 0x30);
            auVar25._13_2_ = auVar19._13_2_;
            auVar31._8_4_ = 0;
            auVar31._0_8_ = uVar12;
            auVar31._12_3_ = auVar25._12_3_;
            auVar37._8_2_ = 0;
            auVar37._0_8_ = uVar12;
            auVar37[10] = (char)(uVar12 >> 0x28);
            auVar37._11_4_ = auVar31._11_4_;
            auVar43._8_2_ = 0;
            auVar43._0_8_ = uVar12;
            auVar43._10_5_ = auVar37._10_5_;
            auVar49[8] = (char)(uVar12 >> 0x20);
            auVar49._0_8_ = uVar12;
            auVar49._9_6_ = auVar43._9_6_;
            auVar70._7_8_ = 0;
            auVar70._0_7_ = auVar49._8_7_;
            Var71 = CONCAT81(SUB158(auVar70 << 0x40,7),(char)(uVar12 >> 0x18));
            auVar83._9_6_ = 0;
            auVar83._0_9_ = Var71;
            auVar72._1_10_ = SUB1510(auVar83 << 0x30,5);
            auVar72[0] = (char)(uVar12 >> 0x10);
            auVar84._11_4_ = 0;
            auVar84._0_11_ = auVar72;
            auVar54[2] = (char)(uVar12 >> 8);
            auVar54._0_2_ = (ushort)uVar12;
            auVar54._3_12_ = SUB1512(auVar84 << 0x20,3);
            in_XMM0._0_2_ = (ushort)uVar12 & 0xff;
            in_XMM0._2_13_ = auVar54._2_13_;
            in_XMM0[0xf] = 0;
            uVar12 = *(ulonglong *)(uVar116 + 10 + lVar123);
            psVar10 = (short *)(*(longlong *)(param_2 + uVar93 * 8) + 2 + uVar116 * 2);
            *psVar10 = (ushort)(byte)uVar11 + ((ushort)uVar92 & 0xff) + in_XMM0._0_2_;
            psVar10[1] = auVar59._0_2_ + auVar52._2_2_ + auVar54._2_2_;
            psVar10[2] = auVar58._0_2_ + auVar62._0_2_ + auVar72._0_2_;
            psVar10[3] = (short)Var57 + (short)Var61 + (short)Var71;
            psVar10[4] = auVar51._8_2_ + auVar46._8_2_ + auVar49._8_2_;
            psVar10[5] = auVar39._10_2_ + auVar34._10_2_ + auVar37._10_2_;
            psVar10[6] = auVar27._12_2_ + auVar22._12_2_ + auVar25._12_2_;
            psVar10[7] = (auVar21._13_2_ >> 8) + (auVar16._13_2_ >> 8) + (auVar19._13_2_ >> 8);
            auVar20._8_6_ = 0;
            auVar20._0_8_ = uVar12;
            auVar20[0xe] = (char)(uVar12 >> 0x38);
            auVar26._8_4_ = 0;
            auVar26._0_8_ = uVar12;
            auVar26[0xc] = (char)(uVar12 >> 0x30);
            auVar26._13_2_ = auVar20._13_2_;
            auVar32._8_4_ = 0;
            auVar32._0_8_ = uVar12;
            auVar32._12_3_ = auVar26._12_3_;
            auVar38._8_2_ = 0;
            auVar38._0_8_ = uVar12;
            auVar38[10] = (char)(uVar12 >> 0x28);
            auVar38._11_4_ = auVar32._11_4_;
            auVar44._8_2_ = 0;
            auVar44._0_8_ = uVar12;
            auVar44._10_5_ = auVar38._10_5_;
            auVar50[8] = (char)(uVar12 >> 0x20);
            auVar50._0_8_ = uVar12;
            auVar50._9_6_ = auVar44._9_6_;
            auVar73._7_8_ = 0;
            auVar73._0_7_ = auVar50._8_7_;
            Var57 = CONCAT81(SUB158(auVar73 << 0x40,7),(char)(uVar12 >> 0x18));
            auVar85._9_6_ = 0;
            auVar85._0_9_ = Var57;
            auVar74._1_10_ = SUB1510(auVar85 << 0x30,5);
            auVar74[0] = (char)(uVar12 >> 0x10);
            auVar86._11_4_ = 0;
            auVar86._0_11_ = auVar74;
            auVar55[2] = (char)(uVar12 >> 8);
            auVar55._0_2_ = (ushort)uVar12;
            auVar55._3_12_ = SUB1512(auVar86 << 0x20,3);
            psVar10 = (short *)(*(longlong *)(param_2 + uVar93 * 8) + 0x12 + uVar116 * 2);
            *psVar10 = (ushort)(byte)uVar13 + ((ushort)uVar14 & 0xff) + ((ushort)uVar12 & 0xff);
            psVar10[1] = auVar66._0_2_ + auVar53._2_2_ + auVar55._2_2_;
            psVar10[2] = auVar65._0_2_ + auVar69._0_2_ + auVar74._0_2_;
            psVar10[3] = (short)Var64 + (short)Var68 + (short)Var57;
            psVar10[4] = auVar47._8_2_ + auVar48._8_2_ + auVar50._8_2_;
            psVar10[5] = auVar35._10_2_ + auVar36._10_2_ + auVar38._10_2_;
            psVar10[6] = auVar23._12_2_ + auVar24._12_2_ + auVar26._12_2_;
            psVar10[7] = (auVar17._13_2_ >> 8) + (auVar18._13_2_ >> 8) + (auVar20._13_2_ >> 8);
            uVar116 = uVar116 + 0x10;
          } while (uVar116 < uVar126);
        }
        for (; uVar126 < uVar4; uVar126 = uVar126 + 1) {
          *(ushort *)(*(longlong *)(param_2 + uVar93 * 8) + 2 + uVar126 * 2) =
               (ushort)*(byte *)(uVar126 + lVar103) + (ushort)*(byte *)(uVar126 + 1 + lVar103) +
               (ushort)*(byte *)(uVar126 + 2 + lVar103);
        }
      }
    }
    if ((int)(uint)param_6 < 2) break;
    lVar103 = uVar93 * 8;
    uVar93 = uVar93 + 1;
    lStack_70 = lStack_70 + lVar108;
    *(ushort *)(*(longlong *)(param_2 + lVar103) + -2 + lVar100 * 2) =
         (ushort)param_3[uVar115] + (ushort)param_3[uVar115 + 1] + (ushort)param_3[uVar115 + 2];
    if ((ulonglong)(longlong)param_6._4_4_ <= uVar93) {
      return 0;
    }
  } while( true );
  uVar93 = uVar93 + 1;
  lStack_70 = lStack_70 + lVar108;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar93) {
    return 0;
  }
  goto LAB_140a4d940;
}

