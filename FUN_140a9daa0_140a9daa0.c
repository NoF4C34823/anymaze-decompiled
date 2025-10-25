
undefined8
FUN_140a9daa0(longlong param_1,longlong param_2,byte *param_3,int param_4,uint param_5,
             undefined8 param_6,uint param_7,byte param_8)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  byte *pbVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  ulonglong uVar54;
  longlong lVar55;
  int iVar56;
  uint uVar57;
  int iVar58;
  int iVar59;
  ulonglong uVar60;
  uint uVar61;
  ulonglong uVar62;
  longlong lVar63;
  ulonglong uVar64;
  uint uVar65;
  longlong lVar66;
  uint uVar67;
  uint uVar68;
  longlong lVar69;
  longlong lStack_78;
  ulonglong uVar53;
  ulonglong uVar70;
  ulonglong uVar71;
  
  lVar21 = 0;
  lVar37 = (longlong)param_4;
  if ((int)((uint)param_6 - param_5) < 0x10) {
    if (0 < param_6._4_4_) {
      uVar33 = (ulonglong)param_3 & 0xf;
      uVar26 = param_7 & 0xf;
      uVar38 = (ulonglong)(int)param_5;
      uVar62 = uVar33;
      if (uVar33 != 0) {
        uVar62 = 0x10 - uVar33;
      }
      lVar21 = -uVar38;
      pbVar7 = param_3 + uVar38;
      uVar41 = 2;
      if ((uint)param_6 < 3) {
        uVar41 = (uint)param_6;
      }
      lVar63 = (longlong)(int)(uint)param_6;
      lVar2 = lVar21 + 4;
      uVar29 = (ulonglong)(1 < (int)(uint)param_6);
      uVar3 = lVar21 + 2;
      uVar44 = (ulonglong)(int)uVar41;
      uVar27 = (uint)param_6 - (1 < (int)(uint)param_6);
      uVar30 = param_7 & 0x40;
      iVar28 = -param_5;
      uVar35 = param_7 & 0x80;
      uVar36 = (uint)param_6 - 2;
      uVar1 = iVar28 + 2;
      uVar48 = uVar1 >> 1;
      uVar53 = (ulonglong)uVar48;
      uVar32 = (ulonglong)pbVar7 & 0xf;
      uVar22 = 0xffffffffffffffff - (lVar21 + -1);
      lVar69 = param_1 - uVar38;
      lVar21 = param_1 + lVar63;
      iVar56 = ((int)(uint)param_6 < 2) - 1;
      if ((int)uVar32 != 0) {
        uVar32 = (ulonglong)(0x10 - (int)uVar32);
      }
      if (uVar33 != 0) {
        uVar33 = 0x10 - uVar33;
      }
      uVar4 = lVar63 - 2;
      auVar18 = vpunpcklbw_avx(ZEXT116(param_8),ZEXT116(param_8));
      auVar18 = vpunpcklwd_avx(auVar18,auVar18);
      auVar18 = vpunpckldq_avx(auVar18,auVar18);
      iVar25 = (int)uVar3;
      uVar57 = 1;
      if ((param_7 & 0xc0) != 0) {
        uVar57 = uVar26;
      }
      lVar20 = lVar63 - uVar38;
      iVar31 = (int)uVar32;
      uVar67 = param_5 >> 1;
      uVar70 = (ulonglong)uVar67;
      uVar61 = param_5 - (param_5 - (int)uVar62 & 0xf);
      iVar49 = uVar41 - (uVar41 - iVar31 & 0xf);
      uVar68 = uVar41 >> 1;
      uVar71 = (ulonglong)uVar68;
      uVar54 = (ulonglong)iVar49;
      uVar64 = (ulonglong)(int)uVar61;
      uVar23 = (ulonglong)(int)((int)uVar22 - ((int)uVar22 - (int)uVar33 & 0xfU));
      uVar65 = param_5 - 1;
      lVar5 = uVar33 + 0x10;
      lVar6 = uVar62 + 0x10;
      auVar18 = vpunpcklqdq_avx(auVar18,auVar18);
      lStack_78 = 0;
      uVar24 = 0;
LAB_140a9df20:
      if ((uint)param_6 == 1) {
        uVar42 = uVar57;
        if (uVar26 != 6) goto LAB_140a9df89;
        goto LAB_140a9e753;
      }
      do {
        uVar42 = uVar26;
        if (uVar26 == 6) {
LAB_140a9e753:
          uVar42 = 0;
          uVar43 = 0;
          if (uVar30 == 0) {
            if (0 < (int)param_5) {
              if ((0xf < (longlong)uVar38) && (lVar6 <= (longlong)uVar38)) {
                uVar46 = 0;
                uVar45 = uVar62;
                if (uVar62 != 0) {
                  do {
                    param_3[uVar46] = param_8;
                    uVar46 = uVar46 + 1;
                  } while (uVar46 < uVar62);
                }
                do {
                  *(undefined1 (*) [16])(param_3 + uVar45) = auVar18;
                  uVar45 = uVar45 + 0x10;
                  uVar42 = uVar61;
                } while (uVar45 < uVar64);
              }
              uVar45 = (ulonglong)(int)uVar42;
              uVar43 = uVar42;
              if (uVar45 < uVar38) {
                do {
                  param_3[uVar45] = param_8;
                  uVar45 = uVar45 + 1;
                } while (uVar45 < uVar38);
                uVar43 = (uint)uVar45;
              }
            }
          }
          else if (0 < (int)param_5) {
            if (((int)param_5 < 7) ||
               ((lVar34 = (longlong)param_3 - ((int)-param_5 + param_1 + lStack_78),
                lVar34 < (longlong)uVar38 && (-lVar34 < (longlong)uVar38)))) {
              uVar50 = 1;
              if (uVar67 != 0) {
                uVar45 = 0;
                do {
                  uVar46 = uVar45;
                  param_3[uVar46 * 2] = *(byte *)(lVar69 + lStack_78 + uVar46 * 2);
                  param_3[uVar46 * 2 + 1] = *(byte *)(lVar69 + lStack_78 + 1 + uVar46 * 2);
                  uVar45 = uVar46 + 1;
                } while (uVar45 < uVar70);
                uVar42 = (int)uVar45 * 2;
                uVar50 = (int)uVar46 + 2 + (int)uVar45;
              }
              uVar43 = uVar42;
              if (uVar50 - 1 < param_5) {
                param_3[(longlong)(int)uVar50 + -1] =
                     *(byte *)(lVar69 + (int)uVar50 + -1 + lStack_78);
                uVar43 = uVar50;
              }
            }
            else {
              if (((longlong)uVar38 < 0x10) || ((longlong)uVar38 < lVar6)) {
                uVar45 = 0;
              }
              else {
                uVar45 = 0;
                uVar46 = uVar62;
                if (uVar62 != 0) {
                  do {
                    param_3[uVar45] = *(byte *)(uVar45 + lVar69 + lStack_78);
                    uVar45 = uVar45 + 1;
                  } while (uVar45 < uVar62);
                }
                do {
                  puVar8 = (undefined8 *)(uVar46 + lVar69 + lStack_78);
                  uVar19 = puVar8[1];
                  *(undefined8 *)(param_3 + uVar46) = *puVar8;
                  *(undefined8 *)(param_3 + uVar46 + 8) = uVar19;
                  uVar46 = uVar46 + 0x10;
                  uVar45 = uVar64;
                } while (uVar46 < uVar64);
              }
              uVar43 = param_5;
              if (uVar45 < uVar38) {
                do {
                  param_3[uVar45] = *(byte *)(uVar45 + lVar69 + lStack_78);
                  uVar45 = uVar45 + 1;
                } while (uVar45 < uVar38);
              }
            }
          }
          lVar34 = (longlong)(int)uVar43;
          if ((int)(uint)param_6 < 1) {
            if (uVar35 != 0) goto LAB_140a9ed78;
LAB_140a9ec4f:
            uVar45 = uVar38;
            if ((int)uVar1 < 1) goto LAB_140a9efa0;
LAB_140a9ec5d:
            if ((longlong)uVar3 < 0x10) {
LAB_140aa181d:
              iVar58 = 0;
            }
            else {
              pbVar47 = param_3 + lVar34;
              uVar45 = (ulonglong)pbVar47 & 0xf;
              if (uVar45 != 0) {
                uVar45 = 0x10 - uVar45;
              }
              if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa181d;
              iVar58 = iVar25 - (iVar25 - (int)uVar45 & 0xfU);
              uVar46 = 0;
              if (uVar45 != 0) {
                do {
                  pbVar47[uVar46] = param_8;
                  uVar46 = uVar46 + 1;
                } while (uVar46 < uVar45);
              }
              do {
                *(undefined1 (*) [16])(pbVar47 + uVar45) = auVar18;
                uVar45 = uVar45 + 0x10;
              } while (uVar45 < (ulonglong)(longlong)iVar58);
              uVar43 = (int)lVar34 + iVar58;
            }
            uVar45 = (ulonglong)iVar58;
            if (uVar45 < uVar3) {
              do {
                param_3[uVar45 + lVar34] = param_8;
                uVar45 = uVar45 + 1;
              } while (uVar45 < uVar3);
              uVar43 = (int)uVar45 + (int)lVar34;
            }
LAB_140a9ef75:
            uVar45 = uVar38;
            if ((int)(uint)param_6 < 3) goto LAB_140a9efa0;
          }
          else {
            if (uVar41 < 7) {
LAB_140a9eb42:
              iVar58 = 1;
              uVar42 = uVar43;
              if (uVar68 != 0) {
                uVar45 = 0;
                do {
                  uVar46 = uVar45;
                  param_3[uVar46 * 2 + lVar34] = *(byte *)(param_1 + lStack_78 + uVar46 * 2);
                  param_3[uVar46 * 2 + lVar34 + 1] = *(byte *)(param_1 + lStack_78 + 1 + uVar46 * 2)
                  ;
                  uVar45 = uVar46 + 1;
                } while (uVar45 < uVar71);
                uVar42 = uVar43 + (int)uVar45 * 2;
                iVar58 = (int)uVar46 + 2 + (int)uVar45;
              }
              if (iVar58 - 1U < uVar41) {
                param_3[(longlong)iVar58 + -1 + lVar34] =
                     *(byte *)(param_1 + iVar58 + -1 + lStack_78);
                uVar42 = uVar43 + iVar58;
              }
            }
            else {
              pbVar47 = param_3 + lVar34;
              lVar39 = param_1 + lStack_78;
              if (((longlong)pbVar47 - lVar39 < (longlong)(ulonglong)uVar41) &&
                 (-((longlong)pbVar47 - lVar39) < (longlong)(ulonglong)uVar41)) goto LAB_140a9eb42;
              if (uVar41 < 0x10) {
LAB_140aa1815:
                uVar46 = 0;
              }
              else {
                uVar45 = (ulonglong)pbVar47 & 0xf;
                if ((int)uVar45 != 0) {
                  uVar45 = (ulonglong)(0x10 - (int)uVar45);
                }
                iVar58 = (int)uVar45;
                if (uVar41 < iVar58 + 0x10U) goto LAB_140aa1815;
                uVar46 = 0;
                if (iVar58 != 0) {
                  do {
                    pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                    uVar46 = uVar46 + 1;
                  } while (uVar46 < uVar45);
                }
                uVar46 = (ulonglong)(int)(uVar41 - (uVar41 - iVar58 & 0xf));
                do {
                  uVar19 = ((undefined8 *)(uVar45 + lVar39))[1];
                  *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar39);
                  *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                  uVar45 = uVar45 + 0x10;
                } while (uVar45 < uVar46);
              }
              for (; uVar46 < uVar44; uVar46 = uVar46 + 1) {
                pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
              }
              uVar42 = uVar43 + uVar41;
            }
            uVar43 = uVar42;
            lVar34 = (longlong)(int)uVar43;
            if ((int)(uint)param_6 < 3) {
              if (uVar35 == 0) goto LAB_140a9ec4f;
LAB_140a9ed78:
              uVar45 = uVar38;
              if ((int)uVar1 < 1) goto LAB_140a9efa0;
LAB_140a9ed86:
              iVar58 = (int)lVar34;
              if ((int)uVar1 < 7) {
LAB_140a9eee1:
                iVar59 = 1;
                if (uVar48 != 0) {
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    param_3[uVar46 * 2 + lVar34] = *(byte *)(lVar21 + lStack_78 + uVar46 * 2);
                    param_3[uVar46 * 2 + lVar34 + 1] =
                         *(byte *)(lVar21 + lStack_78 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar53);
                  uVar43 = iVar58 + (int)uVar45 * 2;
                  iVar59 = (int)uVar46 + 2 + (int)uVar45;
                }
                if (iVar59 - 1U < uVar1) {
                  uVar43 = iVar58 + iVar59;
                  param_3[(longlong)iVar59 + -1 + lVar34] =
                       *(byte *)(lVar21 + iVar59 + -1 + lStack_78);
                }
              }
              else {
                pbVar47 = param_3 + lVar34;
                lVar39 = lVar21 + lStack_78;
                if (((longlong)pbVar47 - lVar39 < (longlong)(2 - uVar38)) &&
                   (-((longlong)pbVar47 - lVar39) < (longlong)(2 - uVar38))) goto LAB_140a9eee1;
                if ((longlong)uVar3 < 0x10) {
LAB_140aa1825:
                  uVar46 = 0;
                }
                else {
                  uVar45 = (ulonglong)pbVar47 & 0xf;
                  if (uVar45 != 0) {
                    uVar45 = 0x10 - uVar45;
                  }
                  if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa1825;
                  uVar60 = 0;
                  uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                  if (uVar45 != 0) {
                    do {
                      pbVar47[uVar60] = *(byte *)(uVar60 + lVar39);
                      uVar60 = uVar60 + 1;
                    } while (uVar60 < uVar45);
                  }
                  do {
                    uVar19 = ((undefined8 *)(uVar45 + lVar39))[1];
                    *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar39);
                    *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                    uVar45 = uVar45 + 0x10;
                  } while (uVar45 < uVar46);
                }
                for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                  pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                }
                uVar43 = iVar58 + 2 + iVar28;
              }
              goto LAB_140a9ef75;
            }
            uVar43 = uVar43 + 2;
            param_3[lVar34] = *(byte *)(lStack_78 + -2 + lVar21);
            param_3[lVar34 + 1] = *(byte *)(lStack_78 + -1 + lVar21);
            lVar34 = (longlong)(int)uVar43;
            if (uVar35 == 0) {
              if (0 < (int)uVar1) goto LAB_140a9ec5d;
            }
            else if (0 < (int)uVar1) goto LAB_140a9ed86;
          }
          uVar45 = (int)uVar43 - lVar2;
        }
        else {
LAB_140a9df89:
          if (uVar42 == 1) {
            uVar42 = 0;
            lVar34 = lVar37 * uVar24;
            bVar17 = *(byte *)(param_1 + lVar34);
            uVar43 = 0;
            if (uVar30 == 0) {
              if (0 < (int)param_5) {
                if (((longlong)uVar38 < 0x10) || ((longlong)uVar38 < lVar6)) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = 0;
                  if (uVar62 != 0) {
                    do {
                      param_3[uVar45] = bVar17;
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < uVar62);
                  }
                  auVar11 = vpunpcklbw_avx(ZEXT116(bVar17),ZEXT116(bVar17));
                  auVar11 = vpunpcklwd_avx(auVar11,auVar11);
                  auVar11 = vpunpckldq_avx(auVar11,auVar11);
                  auVar11 = vpunpcklqdq_avx(auVar11,auVar11);
                  uVar46 = uVar62;
                  do {
                    *(undefined1 (*) [16])(param_3 + uVar46) = auVar11;
                    uVar46 = uVar46 + 0x10;
                    uVar45 = uVar64;
                    uVar42 = uVar61;
                  } while (uVar46 < uVar64);
                }
                uVar43 = uVar42;
                if (uVar45 < uVar38) {
                  do {
                    param_3[uVar45] = bVar17;
                    uVar45 = uVar45 + 1;
                  } while (uVar45 < uVar38);
                  uVar43 = (uint)uVar45;
                }
              }
            }
            else if (0 < (int)param_5) {
              if (((int)param_5 < 7) ||
                 ((lVar39 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar34),
                  lVar39 < (longlong)uVar38 && (-lVar39 < (longlong)uVar38)))) {
                uVar50 = 1;
                if (uVar67 != 0) {
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    param_3[uVar46 * 2] = *(byte *)(lVar69 + lVar34 + uVar46 * 2);
                    param_3[uVar46 * 2 + 1] = *(byte *)(lVar69 + lVar34 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar70);
                  uVar42 = (int)uVar45 * 2;
                  uVar50 = (int)uVar46 + 2 + (int)uVar45;
                }
                uVar43 = uVar42;
                if (uVar50 - 1 < param_5) {
                  param_3[(longlong)(int)uVar50 + -1] =
                       *(byte *)((longlong)(int)uVar50 + -1 + lVar34 + lVar69);
                  uVar43 = uVar50;
                }
              }
              else {
                if (((longlong)uVar38 < 0x10) || ((longlong)uVar38 < lVar6)) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = 0;
                  uVar46 = uVar62;
                  if (uVar62 != 0) {
                    do {
                      param_3[uVar45] = *(byte *)(uVar45 + lVar34 + lVar69);
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < uVar62);
                  }
                  do {
                    puVar8 = (undefined8 *)(uVar46 + lVar34 + lVar69);
                    uVar19 = puVar8[1];
                    *(undefined8 *)(param_3 + uVar46) = *puVar8;
                    *(undefined8 *)(param_3 + uVar46 + 8) = uVar19;
                    uVar46 = uVar46 + 0x10;
                    uVar45 = uVar64;
                  } while (uVar46 < uVar64);
                }
                uVar43 = param_5;
                if (uVar45 < uVar38) {
                  do {
                    param_3[uVar45] = *(byte *)(uVar45 + lVar69 + lVar34);
                    uVar45 = uVar45 + 1;
                  } while (uVar45 < uVar38);
                }
              }
            }
            lVar39 = (longlong)(int)uVar43;
            if (0 < (int)(uint)param_6) {
              if (uVar41 < 7) {
LAB_140aa143f:
                iVar58 = 1;
                uVar42 = uVar43;
                if (uVar68 != 0) {
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    param_3[uVar46 * 2 + lVar39] = *(byte *)(param_1 + lVar34 + uVar46 * 2);
                    param_3[uVar46 * 2 + lVar39 + 1] = *(byte *)(param_1 + lVar34 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar71);
                  uVar42 = uVar43 + (int)uVar45 * 2;
                  iVar58 = (int)uVar46 + 2 + (int)uVar45;
                }
                if (iVar58 - 1U < uVar41) {
                  param_3[(longlong)iVar58 + -1 + lVar39] =
                       *(byte *)((longlong)iVar58 + -1 + param_1 + lVar34);
                  uVar42 = uVar43 + iVar58;
                }
              }
              else {
                pbVar47 = param_3 + lVar39;
                lVar66 = param_1 + lVar34;
                if (((longlong)pbVar47 - lVar66 < (longlong)(ulonglong)uVar41) &&
                   (-((longlong)pbVar47 - lVar66) < (longlong)(ulonglong)uVar41))
                goto LAB_140aa143f;
                if (uVar41 < 0x10) {
LAB_140aa17ed:
                  uVar46 = 0;
                }
                else {
                  uVar45 = (ulonglong)pbVar47 & 0xf;
                  if ((int)uVar45 != 0) {
                    uVar45 = (ulonglong)(0x10 - (int)uVar45);
                  }
                  iVar58 = (int)uVar45;
                  if (uVar41 < iVar58 + 0x10U) goto LAB_140aa17ed;
                  uVar46 = 0;
                  if (iVar58 != 0) {
                    do {
                      pbVar47[uVar46] = *(byte *)(uVar46 + lVar66);
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < uVar45);
                  }
                  uVar46 = (ulonglong)(int)(uVar41 - (uVar41 - iVar58 & 0xf));
                  do {
                    uVar19 = ((undefined8 *)(uVar45 + lVar66))[1];
                    *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar66);
                    *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                    uVar45 = uVar45 + 0x10;
                  } while (uVar45 < uVar46);
                }
                for (; uVar46 < uVar44; uVar46 = uVar46 + 1) {
                  pbVar47[uVar46] = *(byte *)(uVar46 + lVar66);
                }
                uVar42 = uVar43 + uVar41;
              }
              uVar43 = uVar42;
              lVar39 = (longlong)(int)uVar43;
              if (2 < (int)(uint)param_6) {
                uVar43 = uVar43 + 2;
                param_3[lVar39] = *(byte *)(lVar21 + -2 + lVar34);
                param_3[lVar39 + 1] = *(byte *)(lVar21 + -1 + lVar34);
                lVar39 = (longlong)(int)uVar43;
              }
            }
            bVar17 = *(byte *)(lVar21 + -1 + lVar34);
            iVar58 = (int)lVar39;
            if (uVar35 == 0) {
              if (0 < (int)uVar1) {
                if ((longlong)uVar3 < 0x10) {
LAB_140aa17f5:
                  iVar59 = 0;
                }
                else {
                  pbVar47 = param_3 + lVar39;
                  uVar45 = (ulonglong)pbVar47 & 0xf;
                  if (uVar45 != 0) {
                    uVar45 = 0x10 - uVar45;
                  }
                  if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa17f5;
                  iVar59 = iVar25 - (iVar25 - (int)uVar45 & 0xfU);
                  uVar46 = 0;
                  if (uVar45 != 0) {
                    do {
                      pbVar47[uVar46] = bVar17;
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < uVar45);
                  }
                  auVar11 = vpunpcklbw_avx(ZEXT116(bVar17),ZEXT116(bVar17));
                  auVar11 = vpunpcklwd_avx(auVar11,auVar11);
                  auVar11 = vpunpckldq_avx(auVar11,auVar11);
                  auVar11 = vpunpcklqdq_avx(auVar11,auVar11);
                  do {
                    *(undefined1 (*) [16])(pbVar47 + uVar45) = auVar11;
                    uVar45 = uVar45 + 0x10;
                  } while (uVar45 < (ulonglong)(longlong)iVar59);
                  uVar43 = iVar58 + iVar59;
                }
                uVar45 = (ulonglong)iVar59;
                if (uVar3 <= uVar45) goto LAB_140aa17cd;
                do {
                  param_3[uVar45 + lVar39] = bVar17;
                  uVar45 = uVar45 + 1;
                } while (uVar45 < uVar3);
                lVar39 = (longlong)((int)uVar45 + iVar58);
              }
            }
            else {
              if ((int)uVar1 < 1) goto LAB_140aa17d0;
              if (6 < (int)uVar1) {
                pbVar47 = param_3 + lVar39;
                lVar66 = lVar34 + lVar21;
                if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar66) ||
                   ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar66))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140aa17fd:
                    uVar46 = 0;
                  }
                  else {
                    uVar45 = (ulonglong)pbVar47 & 0xf;
                    if (uVar45 != 0) {
                      uVar45 = 0x10 - uVar45;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa17fd;
                    uVar60 = 0;
                    uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                    if (uVar45 != 0) {
                      do {
                        pbVar47[uVar60] = *(byte *)(uVar60 + lVar66);
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar45);
                    }
                    do {
                      uVar19 = ((undefined8 *)(uVar45 + lVar66))[1];
                      *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar66);
                      *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                      uVar45 = uVar45 + 0x10;
                    } while (uVar45 < uVar46);
                  }
                  for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                    pbVar47[uVar46] = *(byte *)(uVar46 + lVar66);
                  }
                  lVar39 = (longlong)(iVar58 + 2 + iVar28);
                  goto LAB_140aa17d0;
                }
              }
              iVar59 = 1;
              if (uVar48 != 0) {
                uVar45 = 0;
                do {
                  uVar46 = uVar45;
                  param_3[uVar46 * 2 + lVar39] = *(byte *)(lVar34 + lVar21 + uVar46 * 2);
                  param_3[uVar46 * 2 + lVar39 + 1] = *(byte *)(lVar34 + lVar21 + 1 + uVar46 * 2);
                  uVar45 = uVar46 + 1;
                } while (uVar45 < uVar53);
                uVar43 = iVar58 + (int)uVar45 * 2;
                iVar59 = (int)uVar46 + 2 + (int)uVar45;
              }
              if (iVar59 - 1U < uVar1) {
                param_3[(longlong)iVar59 + -1 + lVar39] =
                     *(byte *)((longlong)iVar59 + -1 + lVar34 + lVar21);
                lVar39 = (longlong)(iVar59 + iVar58);
                goto LAB_140aa17d0;
              }
LAB_140aa17cd:
              lVar39 = (longlong)(int)uVar43;
            }
LAB_140aa17d0:
            uVar45 = lVar39 - lVar2;
            if ((int)(uint)param_6 < 3) {
              uVar45 = uVar38;
            }
          }
          else if (uVar42 == 2) {
            uVar46 = uVar38;
            if (0 < (int)(uint)param_6) {
              if (uVar41 < 7) {
LAB_140aa00bd:
                iVar58 = 1;
                uVar42 = param_5;
                if (uVar68 != 0) {
                  lVar34 = lVar37 * uVar24 + param_1;
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    pbVar7[uVar46 * 2] = *(byte *)(lVar34 + uVar46 * 2);
                    pbVar7[uVar46 * 2 + 1] = *(byte *)(lVar34 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar71);
                  uVar42 = param_5 + (int)uVar45 * 2;
                  iVar58 = (int)uVar46 + 2 + (int)uVar45;
                }
                if (iVar58 - 1U < uVar41) {
                  pbVar7[(longlong)iVar58 + -1] = *(byte *)(param_1 + iVar58 + -1 + lVar37 * uVar24)
                  ;
                  uVar42 = param_5 + iVar58;
                }
              }
              else {
                lVar34 = lVar37 * uVar24 + param_1;
                if (((longlong)pbVar7 - lVar34 < (longlong)(ulonglong)uVar41) &&
                   (-((longlong)pbVar7 - lVar34) < (longlong)(ulonglong)uVar41)) goto LAB_140aa00bd;
                if ((uVar41 < 0x10) || (uVar41 < iVar31 + 0x10U)) {
                  iVar58 = 0;
                }
                else {
                  uVar46 = 0;
                  uVar45 = uVar32;
                  if (iVar31 != 0) {
                    do {
                      pbVar7[uVar46] = *(byte *)(uVar46 + lVar34);
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < uVar32);
                  }
                  do {
                    uVar19 = ((undefined8 *)(uVar45 + lVar34))[1];
                    *(undefined8 *)(pbVar7 + uVar45) = *(undefined8 *)(uVar45 + lVar34);
                    *(undefined8 *)(pbVar7 + uVar45 + 8) = uVar19;
                    uVar45 = uVar45 + 0x10;
                    iVar58 = iVar49;
                  } while (uVar45 < uVar54);
                }
                for (uVar45 = (ulonglong)iVar58; uVar42 = param_5 + uVar41, uVar45 < uVar44;
                    uVar45 = uVar45 + 1) {
                  pbVar7[uVar45] = *(byte *)(uVar45 + lVar34);
                }
              }
              uVar46 = (ulonglong)(int)uVar42;
              if (2 < (int)(uint)param_6) {
                lVar34 = lVar37 * uVar24;
                if (uVar30 == 0) {
                  lVar39 = lVar34 + lVar21;
                  if (-1 < (int)uVar65) {
                    if (((int)param_5 < 7) ||
                       ((pbVar47 = param_3 + ((uVar38 - 1) - (lVar34 + -1 + lVar21)),
                        (longlong)pbVar47 <= (longlong)uVar38 &&
                        ((byte *)-uVar38 == pbVar47 || -(longlong)pbVar47 < (longlong)uVar38)))) {
                      iVar58 = 1;
                      lVar66 = 0;
                      uVar45 = 0;
                      if (uVar67 != 0) {
                        do {
                          uVar60 = uVar45;
                          uVar45 = uVar60 + 1;
                          pbVar7[lVar66 + -1] = *(byte *)(lVar66 + -1 + lVar39);
                          pbVar7[lVar66 + -2] = *(byte *)(lVar66 + -2 + lVar39);
                          lVar66 = lVar66 + -2;
                        } while (uVar45 < uVar70);
                        iVar58 = (int)uVar60 + 2 + (int)uVar45;
                      }
                      if (iVar58 - 1U < param_5) {
                        pbVar7[-(longlong)iVar58] = *(byte *)(lVar39 - iVar58);
                      }
                    }
                    else {
                      if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                        uVar45 = 0;
                      }
                      else {
                        uVar45 = 0;
                        uVar60 = uVar33;
                        if (uVar33 != 0) {
                          do {
                            param_3[uVar45] = *(byte *)(uVar45 + (lVar39 - uVar38));
                            uVar45 = uVar45 + 1;
                          } while (uVar45 < uVar33);
                        }
                        do {
                          puVar8 = (undefined8 *)(uVar60 + (lVar39 - uVar38));
                          uVar19 = puVar8[1];
                          *(undefined8 *)(param_3 + uVar60) = *puVar8;
                          *(undefined8 *)(param_3 + uVar60 + 8) = uVar19;
                          uVar60 = uVar60 + 0x10;
                          uVar45 = uVar23;
                        } while (uVar60 < uVar23);
                      }
                      if (uVar45 < uVar22) {
                        do {
                          param_3[uVar45] = *(byte *)(uVar45 + (lVar39 - uVar38));
                          uVar45 = uVar45 + 1;
                        } while (uVar45 < uVar22);
                      }
                    }
                  }
                }
                else if (-1 < (int)uVar65) {
                  if (6 < (int)param_5) {
                    pbVar47 = param_3 + ((uVar38 - 1) - (param_1 + -1 + lVar34));
                    if (((longlong)uVar38 < (longlong)pbVar47) ||
                       ((byte *)-uVar38 != pbVar47 && (longlong)uVar38 <= -(longlong)pbVar47)) {
                      if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                        uVar45 = 0;
                      }
                      else {
                        uVar45 = 0;
                        lVar39 = (param_1 + lVar34) - uVar38;
                        uVar60 = uVar33;
                        if (uVar33 != 0) {
                          do {
                            param_3[uVar45] = *(byte *)(uVar45 + lVar39);
                            uVar45 = uVar45 + 1;
                          } while (uVar45 < uVar33);
                        }
                        do {
                          puVar8 = (undefined8 *)(uVar60 + lVar39);
                          uVar19 = puVar8[1];
                          *(undefined8 *)(param_3 + uVar60) = *puVar8;
                          *(undefined8 *)(param_3 + uVar60 + 8) = uVar19;
                          uVar60 = uVar60 + 0x10;
                          uVar45 = uVar23;
                        } while (uVar60 < uVar23);
                      }
                      if (uVar45 < uVar22) {
                        do {
                          param_3[uVar45] = *(byte *)(uVar45 + ((param_1 + lVar34) - uVar38));
                          uVar45 = uVar45 + 1;
                        } while (uVar45 < uVar22);
                      }
                      goto LAB_140aa0543;
                    }
                  }
                  iVar58 = 1;
                  lVar39 = 0;
                  if (uVar67 != 0) {
                    uVar45 = 0;
                    do {
                      uVar60 = uVar45;
                      uVar45 = uVar60 + 1;
                      pbVar7[lVar39 + -1] = *(byte *)(lVar39 + -1 + param_1 + lVar34);
                      pbVar7[lVar39 + -2] = *(byte *)(lVar39 + -2 + param_1 + lVar34);
                      lVar39 = lVar39 + -2;
                    } while (uVar45 < uVar70);
                    iVar58 = (int)uVar60 + 2 + (int)uVar45;
                  }
                  if (iVar58 - 1U < param_5) {
                    pbVar7[-(longlong)iVar58] = *(byte *)((param_1 + lVar34) - (longlong)iVar58);
                  }
                }
LAB_140aa0543:
                lVar66 = lVar34 + lVar21;
                param_3[uVar46] = *(byte *)(lVar66 + -2);
                param_3[uVar46 + 1] = *(byte *)(lVar66 + -1);
                iVar59 = uVar42 + 2;
                lVar39 = (longlong)iVar59;
                iVar58 = iVar59;
                if (uVar35 == 0) {
                  if (0 < (int)uVar1) {
                    if (6 < (int)uVar1) {
                      lVar66 = param_1 + lVar34;
                      pbVar47 = param_3 + lVar39;
                      if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar66) ||
                         ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar66))) {
                        if ((longlong)uVar3 < 0x10) {
LAB_140aa106d:
                          uVar46 = 0;
                        }
                        else {
                          uVar45 = (ulonglong)pbVar47 & 0xf;
                          if (uVar45 != 0) {
                            uVar45 = 0x10 - uVar45;
                          }
                          if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa106d;
                          uVar60 = 0;
                          uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                          if (uVar45 != 0) {
                            do {
                              pbVar47[uVar60] = *(byte *)(uVar60 + lVar66);
                              uVar60 = uVar60 + 1;
                            } while (uVar60 < uVar45);
                          }
                          do {
                            uVar19 = ((undefined8 *)(uVar45 + lVar66))[1];
                            *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar66);
                            *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                            uVar45 = uVar45 + 0x10;
                          } while (uVar45 < uVar46);
                        }
                        for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                          pbVar47[uVar46] = *(byte *)(uVar46 + lVar66);
                        }
                        lVar39 = (longlong)(int)(iVar28 + 4 + uVar42);
                        goto LAB_140aa08f3;
                      }
                    }
                    iVar51 = 1;
                    if (uVar48 != 0) {
                      uVar45 = 0;
                      do {
                        uVar46 = uVar45;
                        param_3[uVar46 * 2 + lVar39] = *(byte *)(param_1 + lVar34 + uVar46 * 2);
                        param_3[uVar46 * 2 + lVar39 + 1] =
                             *(byte *)(param_1 + lVar34 + 1 + uVar46 * 2);
                        uVar45 = uVar46 + 1;
                      } while (uVar45 < uVar53);
                      iVar58 = (int)uVar45 * 2 + 2 + uVar42;
                      iVar51 = (int)uVar46 + 2 + (int)uVar45;
                    }
                    if (uVar1 <= iVar51 - 1U) goto LAB_140aa08f0;
                    param_3[(longlong)iVar51 + -1 + lVar39] =
                         *(byte *)((longlong)iVar51 + -1 + lVar34 + param_1);
                    lVar39 = (longlong)(iVar51 + iVar59);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140aa08f3;
                  if (6 < (int)uVar1) {
                    pbVar47 = param_3 + lVar39;
                    if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar66) ||
                       ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar66))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140aa1074:
                        uVar46 = 0;
                      }
                      else {
                        uVar45 = (ulonglong)pbVar47 & 0xf;
                        if (uVar45 != 0) {
                          uVar45 = 0x10 - uVar45;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa1074;
                        uVar60 = 0;
                        uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                        if (uVar45 != 0) {
                          do {
                            pbVar47[uVar60] = *(byte *)(uVar60 + lVar66);
                            uVar60 = uVar60 + 1;
                          } while (uVar60 < uVar45);
                        }
                        do {
                          uVar19 = ((undefined8 *)(uVar45 + lVar66))[1];
                          *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar66);
                          *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                          uVar45 = uVar45 + 0x10;
                        } while (uVar45 < uVar46);
                      }
                      for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                        pbVar47[uVar46] = *(byte *)(uVar46 + lVar66);
                      }
                      lVar39 = (longlong)(int)(iVar28 + 4 + uVar42);
                      goto LAB_140aa08f3;
                    }
                  }
                  iVar51 = 1;
                  uVar45 = 0;
                  if (uVar48 != 0) {
                    do {
                      uVar46 = uVar45;
                      param_3[uVar46 * 2 + lVar39] = *(byte *)(lVar66 + uVar46 * 2);
                      param_3[uVar46 * 2 + lVar39 + 1] = *(byte *)(lVar66 + 1 + uVar46 * 2);
                      uVar45 = uVar46 + 1;
                    } while (uVar45 < uVar53);
                    iVar58 = (int)uVar45 * 2 + 2 + uVar42;
                    iVar51 = (int)uVar46 + 2 + (int)uVar45;
                  }
                  if (iVar51 - 1U < uVar1) {
                    param_3[(longlong)iVar51 + -1 + lVar39] =
                         *(byte *)((longlong)iVar51 + -1 + lVar66);
                    lVar39 = (longlong)(iVar51 + iVar59);
                    goto LAB_140aa08f3;
                  }
LAB_140aa08f0:
                  lVar39 = (longlong)iVar58;
                }
LAB_140aa08f3:
                uVar45 = lVar39 - lVar2;
                goto LAB_140a9efa0;
              }
            }
            if (uVar30 == 0) {
              if (-1 < (int)uVar65) {
                if (((int)param_5 < 7) ||
                   ((pbVar47 = param_3 + ((uVar38 - 1) - (longlong)(pbVar7 + lVar63 + -1)),
                    (longlong)pbVar47 <= (longlong)uVar38 &&
                    ((byte *)-uVar38 == pbVar47 || -(longlong)pbVar47 < (longlong)uVar38)))) {
                  iVar58 = 1;
                  lVar34 = 0;
                  uVar45 = 0;
                  if (uVar67 != 0) {
                    do {
                      uVar60 = uVar45;
                      uVar45 = uVar60 + 1;
                      pbVar7[lVar34 + -1] = pbVar7[lVar34 + -1 + lVar63];
                      pbVar7[lVar34 + -2] = pbVar7[lVar34 + -2 + lVar63];
                      lVar34 = lVar34 + -2;
                    } while (uVar45 < uVar70);
                    iVar58 = (int)uVar60 + 2 + (int)uVar45;
                  }
                  if (iVar58 - 1U < param_5) {
                    pbVar7[-(longlong)iVar58] = pbVar7[lVar63 - iVar58];
                  }
                }
                else {
                  if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                    uVar45 = 0;
                  }
                  else {
                    uVar45 = 0;
                    uVar60 = uVar33;
                    if (uVar33 != 0) {
                      do {
                        param_3[uVar45] = pbVar7[uVar45 + lVar20];
                        uVar45 = uVar45 + 1;
                      } while (uVar45 < uVar33);
                    }
                    do {
                      uVar19 = *(undefined8 *)(pbVar7 + uVar60 + lVar20 + 8);
                      *(undefined8 *)(param_3 + uVar60) = *(undefined8 *)(pbVar7 + uVar60 + lVar20);
                      *(undefined8 *)(param_3 + uVar60 + 8) = uVar19;
                      uVar60 = uVar60 + 0x10;
                      uVar45 = uVar23;
                    } while (uVar60 < uVar23);
                  }
                  for (; uVar45 < uVar22; uVar45 = uVar45 + 1) {
                    param_3[uVar45] = pbVar7[uVar45 + lVar20];
                  }
                }
              }
            }
            else if (-1 < (int)uVar65) {
              if (6 < (int)param_5) {
                lVar34 = param_1 + lVar37 * uVar24;
                pbVar47 = param_3 + ((uVar38 - 1) - (param_1 + -1 + lVar37 * uVar24));
                if (((longlong)uVar38 < (longlong)pbVar47) ||
                   ((byte *)-uVar38 != pbVar47 && (longlong)uVar38 <= -(longlong)pbVar47)) {
                  if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                    uVar45 = 0;
                  }
                  else {
                    uVar45 = 0;
                    lVar39 = lVar34 - uVar38;
                    uVar60 = uVar33;
                    if (uVar33 != 0) {
                      do {
                        param_3[uVar45] = *(byte *)(uVar45 + lVar39);
                        uVar45 = uVar45 + 1;
                      } while (uVar45 < uVar33);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar60 + lVar39);
                      uVar19 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar60) = *puVar8;
                      *(undefined8 *)(param_3 + uVar60 + 8) = uVar19;
                      uVar60 = uVar60 + 0x10;
                      uVar45 = uVar23;
                    } while (uVar60 < uVar23);
                  }
                  if (uVar45 < uVar22) {
                    do {
                      param_3[uVar45] = *(byte *)(uVar45 + (lVar34 - uVar38));
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < uVar22);
                  }
                  goto LAB_140aa0cba;
                }
              }
              iVar58 = 1;
              lVar34 = 0;
              if (uVar67 != 0) {
                lVar39 = lVar37 * uVar24 + param_1;
                uVar45 = 0;
                do {
                  uVar60 = uVar45;
                  uVar45 = uVar60 + 1;
                  pbVar7[lVar34 + -1] = *(byte *)(lVar34 + -1 + lVar39);
                  pbVar7[lVar34 + -2] = *(byte *)(lVar34 + -2 + lVar39);
                  lVar34 = lVar34 + -2;
                } while (uVar45 < uVar70);
                iVar58 = (int)uVar60 + 2 + (int)uVar45;
              }
              if (iVar58 - 1U < param_5) {
                pbVar7[-(longlong)iVar58] = *(byte *)((param_1 - iVar58) + lVar37 * uVar24);
              }
            }
LAB_140aa0cba:
            if (uVar35 == 0) {
              uVar45 = uVar38;
              if ((int)uVar1 < 1) goto LAB_140a9efa0;
              if (6 < (int)uVar1) {
                pbVar47 = param_3 + uVar46;
                pbVar9 = param_3 + (uVar46 - lVar63);
                if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - (longlong)pbVar9) ||
                   ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - (longlong)pbVar9))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140aa108c:
                    uVar46 = 0;
                  }
                  else {
                    uVar45 = (ulonglong)pbVar47 & 0xf;
                    if (uVar45 != 0) {
                      uVar45 = 0x10 - uVar45;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa108c;
                    uVar60 = 0;
                    uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                    if (uVar45 != 0) {
                      do {
                        pbVar47[uVar60] = pbVar9[uVar60];
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar45);
                    }
                    do {
                      uVar19 = *(undefined8 *)(pbVar9 + uVar45 + 8);
                      *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(pbVar9 + uVar45);
                      *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                      uVar45 = uVar45 + 0x10;
                    } while (uVar45 < uVar46);
                  }
                  for (; uVar45 = uVar38, uVar46 < uVar3; uVar46 = uVar46 + 1) {
                    pbVar47[uVar46] = pbVar9[uVar46];
                  }
                  goto LAB_140a9efa0;
                }
              }
              iVar58 = 1;
              if (uVar48 != 0) {
                uVar45 = 0;
                do {
                  uVar60 = uVar45;
                  param_3[uVar60 * 2 + uVar46] = param_3[uVar60 * 2 + (uVar46 - lVar63)];
                  param_3[uVar60 * 2 + uVar46 + 1] = param_3[uVar60 * 2 + (uVar46 - lVar63) + 1];
                  uVar45 = uVar60 + 1;
                } while (uVar45 < uVar53);
                iVar58 = (int)uVar60 + 2 + (int)uVar45;
              }
              uVar45 = uVar38;
              if (iVar58 - 1U < uVar1) {
                param_3[(longlong)iVar58 + -1 + uVar46] =
                     param_3[(longlong)iVar58 + -1 + (uVar46 - lVar63)];
              }
            }
            else {
              uVar45 = uVar38;
              if ((int)uVar1 < 1) goto LAB_140a9efa0;
              if (6 < (int)uVar1) {
                pbVar47 = param_3 + uVar46;
                lVar34 = lVar37 * uVar24 + lVar21;
                if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar34) ||
                   ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar34))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140aa1094:
                    uVar46 = 0;
                  }
                  else {
                    uVar45 = (ulonglong)pbVar47 & 0xf;
                    if (uVar45 != 0) {
                      uVar45 = 0x10 - uVar45;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140aa1094;
                    uVar60 = 0;
                    uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                    if (uVar45 != 0) {
                      do {
                        pbVar47[uVar60] = *(byte *)(uVar60 + lVar34);
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar45);
                    }
                    do {
                      uVar19 = ((undefined8 *)(uVar45 + lVar34))[1];
                      *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar34);
                      *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                      uVar45 = uVar45 + 0x10;
                    } while (uVar45 < uVar46);
                  }
                  for (; uVar45 = uVar38, uVar46 < uVar3; uVar46 = uVar46 + 1) {
                    pbVar47[uVar46] = *(byte *)(uVar46 + lVar34);
                  }
                  goto LAB_140a9efa0;
                }
              }
              iVar58 = 1;
              if (uVar48 != 0) {
                lVar34 = lVar37 * uVar24 + lVar21;
                uVar45 = 0;
                do {
                  uVar60 = uVar45;
                  param_3[uVar60 * 2 + uVar46] = *(byte *)(lVar34 + uVar60 * 2);
                  param_3[uVar60 * 2 + uVar46 + 1] = *(byte *)(lVar34 + 1 + uVar60 * 2);
                  uVar45 = uVar60 + 1;
                } while (uVar45 < uVar53);
                iVar58 = (int)uVar60 + 2 + (int)uVar45;
              }
              uVar45 = uVar38;
              if (iVar58 - 1U < uVar1) {
                param_3[(longlong)iVar58 + -1 + uVar46] =
                     *(byte *)(lVar21 + iVar58 + -1 + lVar37 * uVar24);
              }
            }
          }
          else if (uVar42 == 3) {
            uVar46 = uVar38;
            if (0 < (int)(uint)param_6) {
              if (uVar41 < 7) {
LAB_140a9f3dd:
                iVar58 = 1;
                uVar42 = param_5;
                if (uVar68 != 0) {
                  lVar34 = lVar37 * uVar24 + param_1;
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    pbVar7[uVar46 * 2] = *(byte *)(lVar34 + uVar46 * 2);
                    pbVar7[uVar46 * 2 + 1] = *(byte *)(lVar34 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar71);
                  uVar42 = param_5 + (int)uVar45 * 2;
                  iVar58 = (int)uVar46 + 2 + (int)uVar45;
                }
                if (iVar58 - 1U < uVar41) {
                  pbVar7[(longlong)iVar58 + -1] = *(byte *)(param_1 + iVar58 + -1 + lVar37 * uVar24)
                  ;
                  uVar42 = param_5 + iVar58;
                }
              }
              else {
                lVar34 = lVar37 * uVar24 + param_1;
                if (((longlong)pbVar7 - lVar34 < (longlong)(ulonglong)uVar41) &&
                   (-((longlong)pbVar7 - lVar34) < (longlong)(ulonglong)uVar41)) goto LAB_140a9f3dd;
                if ((uVar41 < 0x10) || (uVar41 < iVar31 + 0x10U)) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = 0;
                  uVar46 = uVar32;
                  if (iVar31 != 0) {
                    do {
                      pbVar7[uVar45] = *(byte *)(uVar45 + lVar34);
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < uVar32);
                  }
                  do {
                    uVar19 = ((undefined8 *)(uVar46 + lVar34))[1];
                    *(undefined8 *)(pbVar7 + uVar46) = *(undefined8 *)(uVar46 + lVar34);
                    *(undefined8 *)(pbVar7 + uVar46 + 8) = uVar19;
                    uVar46 = uVar46 + 0x10;
                    uVar45 = uVar54;
                  } while (uVar46 < uVar54);
                }
                for (; uVar42 = param_5 + uVar41, uVar45 < uVar44; uVar45 = uVar45 + 1) {
                  pbVar7[uVar45] = *(byte *)(uVar45 + lVar34);
                }
              }
              uVar46 = (ulonglong)(int)uVar42;
              if (2 < (int)(uint)param_6) {
                if (uVar30 == 0) {
                  if (-1 < (int)uVar65) {
                    iVar58 = 1;
                    lVar34 = 0;
                    if (uVar67 != 0) {
                      lVar39 = lVar37 * uVar24 + param_1 + uVar29;
                      uVar45 = 0;
                      do {
                        uVar60 = uVar45;
                        pbVar7[lVar34 + -1] = *(byte *)(lVar39 + uVar60 * 2);
                        uVar45 = uVar60 + 1;
                        pbVar7[lVar34 + -2] = *(byte *)(lVar39 + 1 + uVar60 * 2);
                        lVar34 = lVar34 + -2;
                      } while (uVar45 < uVar70);
                      iVar58 = (int)uVar60 + 2 + (int)uVar45;
                    }
                    if (iVar58 - 1U < param_5) {
                      pbVar7[-(longlong)iVar58] =
                           *(byte *)((longlong)iVar58 + -1 + lVar37 * uVar24 + param_1 + uVar29);
                    }
                  }
                }
                else {
                  lVar34 = lVar37 * uVar24;
                  if (-1 < (int)uVar65) {
                    if (6 < (int)param_5) {
                      pbVar47 = param_3 + ((uVar38 - 1) - (param_1 + -1 + lVar34));
                      if (((longlong)uVar38 < (longlong)pbVar47) ||
                         ((byte *)-uVar38 != pbVar47 && (longlong)uVar38 <= -(longlong)pbVar47)) {
                        if (((longlong)uVar22 < 0x10) || ((longlong)uVar22 < lVar5)) {
                          uVar45 = 0;
                        }
                        else {
                          uVar45 = 0;
                          lVar39 = (param_1 + lVar34) - uVar38;
                          uVar60 = uVar33;
                          if (uVar33 != 0) {
                            do {
                              param_3[uVar45] = *(byte *)(uVar45 + lVar39);
                              uVar45 = uVar45 + 1;
                            } while (uVar45 < uVar33);
                          }
                          do {
                            puVar8 = (undefined8 *)(uVar60 + lVar39);
                            uVar19 = puVar8[1];
                            *(undefined8 *)(param_3 + uVar60) = *puVar8;
                            *(undefined8 *)(param_3 + uVar60 + 8) = uVar19;
                            uVar60 = uVar60 + 0x10;
                            uVar45 = uVar23;
                          } while (uVar60 < uVar23);
                        }
                        if (uVar45 < uVar22) {
                          do {
                            param_3[uVar45] = *(byte *)(uVar45 + ((param_1 + lVar34) - uVar38));
                            uVar45 = uVar45 + 1;
                          } while (uVar45 < uVar22);
                        }
                        goto LAB_140a9f758;
                      }
                    }
                    iVar58 = 1;
                    lVar39 = 0;
                    if (uVar67 != 0) {
                      uVar45 = 0;
                      do {
                        uVar60 = uVar45;
                        uVar45 = uVar60 + 1;
                        pbVar7[lVar39 + -1] = *(byte *)(lVar39 + -1 + param_1 + lVar34);
                        pbVar7[lVar39 + -2] = *(byte *)(lVar39 + -2 + param_1 + lVar34);
                        lVar39 = lVar39 + -2;
                      } while (uVar45 < uVar70);
                      iVar58 = (int)uVar60 + 2 + (int)uVar45;
                    }
                    if (iVar58 - 1U < param_5) {
                      pbVar7[-(longlong)iVar58] = *(byte *)((param_1 + lVar34) - (longlong)iVar58);
                    }
                  }
                }
LAB_140a9f758:
                lVar66 = lVar37 * uVar24;
                lVar34 = lVar66 + lVar21;
                param_3[uVar46] = *(byte *)(lVar34 + -2);
                param_3[uVar46 + 1] = *(byte *)(lVar34 + -1);
                iVar59 = uVar42 + 2;
                lVar39 = (longlong)iVar59;
                iVar58 = iVar59;
                if (uVar35 == 0) {
                  if (0 < (int)uVar1) {
                    iVar51 = 1;
                    lVar34 = 0;
                    if (uVar48 != 0) {
                      lVar55 = (lVar21 - uVar29) + lVar66;
                      uVar45 = 0;
                      do {
                        uVar46 = uVar45;
                        param_3[uVar46 * 2 + lVar39] = *(byte *)(lVar34 + -1 + lVar55);
                        lVar10 = lVar34 + -2;
                        lVar34 = lVar34 + -2;
                        param_3[uVar46 * 2 + lVar39 + 1] = *(byte *)(lVar10 + lVar55);
                        uVar45 = uVar46 + 1;
                      } while (uVar45 < uVar53);
                      iVar58 = (int)uVar45 * 2 + 2 + uVar42;
                      iVar51 = (int)uVar46 + 2 + (int)uVar45;
                    }
                    if (uVar1 <= iVar51 - 1U) goto LAB_140a9fa10;
                    param_3[(longlong)iVar51 + -1 + lVar39] =
                         *(byte *)((lVar66 + (lVar21 - uVar29)) - (longlong)iVar51);
                    lVar39 = (longlong)(iVar51 + iVar59);
                  }
                }
                else {
                  if ((int)uVar1 < 1) goto LAB_140a9fa13;
                  if (6 < (int)uVar1) {
                    pbVar47 = param_3 + lVar39;
                    if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar34) ||
                       ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar34))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a9ff6e:
                        uVar46 = 0;
                      }
                      else {
                        uVar45 = (ulonglong)pbVar47 & 0xf;
                        if (uVar45 != 0) {
                          uVar45 = 0x10 - uVar45;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140a9ff6e;
                        uVar60 = 0;
                        uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                        if (uVar45 != 0) {
                          do {
                            pbVar47[uVar60] = *(byte *)(uVar60 + lVar34);
                            uVar60 = uVar60 + 1;
                          } while (uVar60 < uVar45);
                        }
                        do {
                          uVar19 = ((undefined8 *)(uVar45 + lVar34))[1];
                          *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar34);
                          *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                          uVar45 = uVar45 + 0x10;
                        } while (uVar45 < uVar46);
                      }
                      for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                        pbVar47[uVar46] = *(byte *)(uVar46 + lVar34);
                      }
                      lVar39 = (longlong)(int)(iVar28 + 4 + uVar42);
                      goto LAB_140a9fa13;
                    }
                  }
                  iVar51 = 1;
                  uVar45 = 0;
                  if (uVar48 != 0) {
                    do {
                      uVar46 = uVar45;
                      param_3[uVar46 * 2 + lVar39] = *(byte *)(lVar34 + uVar46 * 2);
                      param_3[uVar46 * 2 + lVar39 + 1] = *(byte *)(lVar34 + 1 + uVar46 * 2);
                      uVar45 = uVar46 + 1;
                    } while (uVar45 < uVar53);
                    iVar58 = (int)uVar45 * 2 + 2 + uVar42;
                    iVar51 = (int)uVar46 + 2 + (int)uVar45;
                  }
                  if (iVar51 - 1U < uVar1) {
                    param_3[(longlong)iVar51 + -1 + lVar39] =
                         *(byte *)((longlong)iVar51 + -1 + lVar34);
                    lVar39 = (longlong)(iVar51 + iVar59);
                  }
                  else {
LAB_140a9fa10:
                    lVar39 = (longlong)iVar58;
                  }
                }
LAB_140a9fa13:
                uVar45 = lVar39 - lVar2;
                goto LAB_140a9efa0;
              }
            }
            uVar45 = (ulonglong)uVar65;
            if (uVar30 == 0) {
              uVar42 = uVar65;
              if (uVar35 == 0) {
                while (-1 < (int)uVar42) {
                  uVar42 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    uVar46 = (ulonglong)(int)uVar45;
                    uVar45 = uVar46;
                    do {
                      if ((int)uVar45 < 0) break;
                      lVar34 = (longlong)(int)uVar42;
                      uVar42 = uVar42 + 1;
                      uVar45 = (ulonglong)((int)uVar45 - 1);
                      param_3[uVar46 - lVar34] = param_3[lVar34 + uVar29 + 1 + uVar46];
                    } while (uVar42 < uVar27);
                  }
                  uVar42 = (uint)uVar45;
                }
                uVar46 = 0;
                uVar45 = uVar38;
                iVar58 = iVar56;
                iVar59 = iVar56;
                iVar51 = ((uint)param_6 + ((int)(uint)param_6 < 2)) - uVar1;
                if ((int)param_5 < 2) {
                  do {
                    iVar52 = iVar51 + iVar58;
                    pbVar7[uVar46 + lVar63] = param_3[iVar51];
                    if (((int)(((uint)param_6 + 2) - uVar1) <= iVar52) || (iVar52 < (int)param_5)) {
                      iVar51 = iVar58 + iVar59;
                      iVar58 = -iVar58;
                      iVar52 = iVar52 - iVar51;
                      iVar59 = -iVar59;
                    }
                    uVar46 = uVar46 + 1;
                    iVar51 = iVar52;
                  } while (uVar46 < uVar3);
                }
              }
              else {
                if (-1 < (int)uVar65) {
                  iVar58 = 1;
                  lVar34 = 0;
                  if (uVar67 != 0) {
                    lVar39 = lVar37 * uVar24 + param_1;
                    uVar45 = 0;
                    do {
                      uVar60 = uVar45;
                      pbVar7[lVar34 + -1] = *(byte *)(lVar39 + 1 + uVar60 * 2);
                      uVar45 = uVar60 + 1;
                      pbVar7[lVar34 + -2] = *(byte *)(lVar39 + 2 + uVar60 * 2);
                      lVar34 = lVar34 + -2;
                    } while (uVar45 < uVar70);
                    iVar58 = (int)uVar60 + 2 + (int)uVar45;
                  }
                  if (iVar58 - 1U < param_5) {
                    pbVar7[-(longlong)iVar58] = *(byte *)(param_1 + iVar58 + lVar37 * uVar24);
                  }
                }
LAB_140a9fcd3:
                uVar45 = uVar38;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar47 = param_3 + uVar46;
                    lVar34 = lVar37 * uVar24 + lVar21;
                    if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar34) ||
                       ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar34))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a9ff75:
                        uVar46 = 0;
                      }
                      else {
                        uVar45 = (ulonglong)pbVar47 & 0xf;
                        if (uVar45 != 0) {
                          uVar45 = 0x10 - uVar45;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140a9ff75;
                        uVar60 = 0;
                        uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                        if (uVar45 != 0) {
                          do {
                            pbVar47[uVar60] = *(byte *)(uVar60 + lVar34);
                            uVar60 = uVar60 + 1;
                          } while (uVar60 < uVar45);
                        }
                        do {
                          uVar19 = ((undefined8 *)(uVar45 + lVar34))[1];
                          *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar34);
                          *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                          uVar45 = uVar45 + 0x10;
                        } while (uVar45 < uVar46);
                      }
                      for (; uVar45 = uVar38, uVar46 < uVar3; uVar46 = uVar46 + 1) {
                        pbVar47[uVar46] = *(byte *)(uVar46 + lVar34);
                      }
                      goto LAB_140a9efa0;
                    }
                  }
                  iVar58 = 1;
                  if (uVar48 != 0) {
                    lVar34 = lVar37 * uVar24 + lVar21;
                    uVar45 = 0;
                    do {
                      uVar60 = uVar45;
                      param_3[uVar60 * 2 + uVar46] = *(byte *)(lVar34 + uVar60 * 2);
                      param_3[uVar60 * 2 + uVar46 + 1] = *(byte *)(lVar34 + 1 + uVar60 * 2);
                      uVar45 = uVar60 + 1;
                    } while (uVar45 < uVar53);
                    iVar58 = (int)uVar60 + 2 + (int)uVar45;
                  }
                  uVar45 = uVar38;
                  if (iVar58 - 1U < uVar1) {
                    param_3[(longlong)iVar58 + -1 + uVar46] =
                         *(byte *)(lVar21 + iVar58 + -1 + lVar37 * uVar24);
                  }
                }
              }
            }
            else {
              if (-1 < (int)uVar65) {
                do {
                  uVar42 = 0;
                  if ((int)(uint)(1 < (int)(uint)param_6) < (int)(uint)param_6) {
                    iVar58 = (int)uVar45;
                    do {
                      if ((int)uVar45 < 0) break;
                      lVar34 = (longlong)(int)uVar42;
                      uVar42 = uVar42 + 1;
                      uVar45 = (ulonglong)((int)uVar45 - 1);
                      param_3[iVar58 - lVar34] =
                           *(byte *)(((longlong)iVar58 + lVar37 * uVar24 + lVar69) - lVar34);
                    } while (uVar42 < uVar27);
                  }
                } while (-1 < (int)uVar45);
              }
              if (uVar35 != 0) goto LAB_140a9fcd3;
              uVar45 = uVar38;
              if (0 < (int)uVar1) {
                iVar58 = 1;
                lVar34 = 0;
                if (uVar48 != 0) {
                  lVar39 = lVar37 * uVar24 + lVar21;
                  uVar45 = 0;
                  do {
                    uVar60 = uVar45;
                    param_3[uVar60 * 2 + uVar46] = *(byte *)(lVar34 + -2 + lVar39);
                    lVar66 = lVar34 + -3;
                    lVar34 = lVar34 + -2;
                    param_3[uVar60 * 2 + uVar46 + 1] = *(byte *)(lVar66 + lVar39);
                    uVar45 = uVar60 + 1;
                  } while (uVar45 < uVar53);
                  iVar58 = (int)uVar60 + 2 + (int)uVar45;
                }
                uVar45 = uVar38;
                if (iVar58 - 1U < uVar1) {
                  param_3[(longlong)iVar58 + -1 + uVar46] =
                       *(byte *)((lVar21 - iVar58) + -1 + lVar37 * uVar24);
                }
              }
            }
          }
          else if ((param_7 & 0xf0) == 0xf0) {
            uVar42 = 0;
            uVar43 = 0;
            if (0 < (int)param_5) {
              if (6 < (int)param_5) {
                lVar39 = lVar37 * uVar24;
                lVar34 = (longlong)param_3 - ((int)-param_5 + param_1 + lVar39);
                if (((longlong)uVar38 <= lVar34) || ((longlong)uVar38 <= -lVar34)) {
                  if (((longlong)uVar38 < 0x10) || ((longlong)uVar38 < lVar6)) {
                    uVar45 = 0;
                  }
                  else {
                    uVar45 = 0;
                    uVar46 = uVar62;
                    if (uVar62 != 0) {
                      do {
                        param_3[uVar45] = *(byte *)(uVar45 + lVar39 + lVar69);
                        uVar45 = uVar45 + 1;
                      } while (uVar45 < uVar62);
                    }
                    do {
                      puVar8 = (undefined8 *)(uVar46 + lVar39 + lVar69);
                      uVar19 = puVar8[1];
                      *(undefined8 *)(param_3 + uVar46) = *puVar8;
                      *(undefined8 *)(param_3 + uVar46 + 8) = uVar19;
                      uVar46 = uVar46 + 0x10;
                      uVar45 = uVar64;
                    } while (uVar46 < uVar64);
                  }
                  uVar43 = param_5;
                  if (uVar45 < uVar38) {
                    do {
                      param_3[uVar45] = *(byte *)(uVar45 + lVar39 + lVar69);
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < uVar38);
                  }
                  goto LAB_140a9e153;
                }
              }
              uVar50 = 1;
              if (uVar67 != 0) {
                lVar34 = lVar37 * uVar24 + lVar69;
                uVar45 = 0;
                do {
                  uVar46 = uVar45;
                  param_3[uVar46 * 2] = *(byte *)(lVar34 + uVar46 * 2);
                  param_3[uVar46 * 2 + 1] = *(byte *)(lVar34 + 1 + uVar46 * 2);
                  uVar45 = uVar46 + 1;
                } while (uVar45 < uVar70);
                uVar42 = (int)uVar45 * 2;
                uVar50 = (int)uVar46 + 2 + (int)uVar45;
              }
              uVar43 = uVar42;
              if (uVar50 - 1 < param_5) {
                param_3[(longlong)(int)uVar50 + -1] =
                     *(byte *)(lVar69 + (int)uVar50 + -1 + lVar37 * uVar24);
                uVar43 = uVar50;
              }
            }
LAB_140a9e153:
            lVar34 = (longlong)(int)uVar43;
            if (0 < (int)(uint)param_6) {
              if (uVar41 < 7) {
LAB_140a9e29f:
                iVar58 = 1;
                uVar42 = uVar43;
                if (uVar68 != 0) {
                  lVar39 = lVar37 * uVar24 + param_1;
                  uVar45 = 0;
                  do {
                    uVar46 = uVar45;
                    param_3[uVar46 * 2 + lVar34] = *(byte *)(lVar39 + uVar46 * 2);
                    param_3[uVar46 * 2 + lVar34 + 1] = *(byte *)(lVar39 + 1 + uVar46 * 2);
                    uVar45 = uVar46 + 1;
                  } while (uVar45 < uVar71);
                  uVar42 = uVar43 + (int)uVar45 * 2;
                  iVar58 = (int)uVar46 + 2 + (int)uVar45;
                }
                if (iVar58 - 1U < uVar41) {
                  uVar42 = uVar43 + iVar58;
                  param_3[(longlong)iVar58 + -1 + lVar34] =
                       *(byte *)(param_1 + iVar58 + -1 + lVar37 * uVar24);
                }
              }
              else {
                pbVar47 = param_3 + lVar34;
                lVar39 = lVar37 * uVar24 + param_1;
                if (((longlong)pbVar47 - lVar39 < (longlong)(ulonglong)uVar41) &&
                   (-((longlong)pbVar47 - lVar39) < (longlong)(ulonglong)uVar41))
                goto LAB_140a9e29f;
                if (uVar41 < 0x10) {
LAB_140a9f2ac:
                  uVar46 = 0;
                }
                else {
                  uVar45 = (ulonglong)pbVar47 & 0xf;
                  if ((int)uVar45 != 0) {
                    uVar45 = (ulonglong)(0x10 - (int)uVar45);
                  }
                  iVar58 = (int)uVar45;
                  if (uVar41 < iVar58 + 0x10U) goto LAB_140a9f2ac;
                  uVar46 = 0;
                  if (iVar58 != 0) {
                    do {
                      pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                      uVar46 = uVar46 + 1;
                    } while (uVar46 < uVar45);
                  }
                  uVar46 = (ulonglong)(int)(uVar41 - (uVar41 - iVar58 & 0xf));
                  do {
                    uVar19 = ((undefined8 *)(uVar45 + lVar39))[1];
                    *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar39);
                    *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                    uVar45 = uVar45 + 0x10;
                  } while (uVar45 < uVar46);
                }
                for (; uVar46 < uVar44; uVar46 = uVar46 + 1) {
                  pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                }
                uVar42 = uVar43 + uVar41;
              }
              lVar34 = (longlong)(int)uVar42;
              if (2 < (int)(uint)param_6) {
                lVar39 = lVar37 * uVar24 + lVar21;
                param_3[lVar34] = *(byte *)(lVar39 + -2);
                param_3[lVar34 + 1] = *(byte *)(lVar39 + -1);
                iVar58 = uVar42 + 2;
                lVar34 = (longlong)iVar58;
                if (0 < (int)uVar1) {
                  if (6 < (int)uVar1) {
                    pbVar47 = param_3 + lVar34;
                    if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar39) ||
                       ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar39))) {
                      if ((longlong)uVar3 < 0x10) {
LAB_140a9f2b4:
                        uVar46 = 0;
                      }
                      else {
                        uVar45 = (ulonglong)pbVar47 & 0xf;
                        if (uVar45 != 0) {
                          uVar45 = 0x10 - uVar45;
                        }
                        if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140a9f2b4;
                        uVar60 = 0;
                        uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                        if (uVar45 != 0) {
                          do {
                            pbVar47[uVar60] = *(byte *)(uVar60 + lVar39);
                            uVar60 = uVar60 + 1;
                          } while (uVar60 < uVar45);
                        }
                        do {
                          uVar19 = ((undefined8 *)(uVar45 + lVar39))[1];
                          *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar39);
                          *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                          uVar45 = uVar45 + 0x10;
                        } while (uVar45 < uVar46);
                      }
                      for (; uVar46 < uVar3; uVar46 = uVar46 + 1) {
                        pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                      }
                      lVar34 = (longlong)(int)(iVar28 + 4 + uVar42);
                      goto LAB_140a9e533;
                    }
                  }
                  iVar51 = 1;
                  uVar45 = 0;
                  iVar59 = iVar58;
                  if (uVar48 != 0) {
                    do {
                      uVar46 = uVar45;
                      param_3[uVar46 * 2 + lVar34] = *(byte *)(lVar39 + uVar46 * 2);
                      param_3[uVar46 * 2 + lVar34 + 1] = *(byte *)(lVar39 + 1 + uVar46 * 2);
                      uVar45 = uVar46 + 1;
                    } while (uVar45 < uVar53);
                    iVar59 = (int)uVar45 * 2 + 2 + uVar42;
                    iVar51 = (int)uVar46 + 2 + (int)uVar45;
                  }
                  if (iVar51 - 1U < uVar1) {
                    param_3[(longlong)iVar51 + -1 + lVar34] =
                         *(byte *)((longlong)iVar51 + -1 + lVar39);
                    lVar34 = (longlong)(iVar51 + iVar58);
                  }
                  else {
                    lVar34 = (longlong)iVar59;
                  }
                }
LAB_140a9e533:
                uVar45 = lVar34 - lVar2;
                goto LAB_140a9efa0;
              }
            }
            uVar45 = uVar38;
            if (0 < (int)uVar1) {
              if (6 < (int)uVar1) {
                pbVar47 = param_3 + lVar34;
                lVar39 = lVar37 * uVar24 + lVar21;
                if (((longlong)(2 - uVar38) <= (longlong)pbVar47 - lVar39) ||
                   ((longlong)(2 - uVar38) <= -((longlong)pbVar47 - lVar39))) {
                  if ((longlong)uVar3 < 0x10) {
LAB_140a9f2bb:
                    uVar46 = 0;
                  }
                  else {
                    uVar45 = (ulonglong)pbVar47 & 0xf;
                    if (uVar45 != 0) {
                      uVar45 = 0x10 - uVar45;
                    }
                    if ((longlong)uVar3 < (longlong)(uVar45 + 0x10)) goto LAB_140a9f2bb;
                    uVar60 = 0;
                    uVar46 = (ulonglong)(int)(iVar25 - (iVar25 - (int)uVar45 & 0xfU));
                    if (uVar45 != 0) {
                      do {
                        pbVar47[uVar60] = *(byte *)(uVar60 + lVar39);
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar45);
                    }
                    do {
                      uVar19 = ((undefined8 *)(uVar45 + lVar39))[1];
                      *(undefined8 *)(pbVar47 + uVar45) = *(undefined8 *)(uVar45 + lVar39);
                      *(undefined8 *)(pbVar47 + uVar45 + 8) = uVar19;
                      uVar45 = uVar45 + 0x10;
                    } while (uVar45 < uVar46);
                  }
                  for (; uVar45 = uVar38, uVar46 < uVar3; uVar46 = uVar46 + 1) {
                    pbVar47[uVar46] = *(byte *)(uVar46 + lVar39);
                  }
                  goto LAB_140a9efa0;
                }
              }
              iVar58 = 1;
              if (uVar48 != 0) {
                lVar39 = lVar37 * uVar24 + lVar21;
                uVar45 = 0;
                do {
                  uVar46 = uVar45;
                  param_3[uVar46 * 2 + lVar34] = *(byte *)(lVar39 + uVar46 * 2);
                  param_3[uVar46 * 2 + lVar34 + 1] = *(byte *)(lVar39 + 1 + uVar46 * 2);
                  uVar45 = uVar46 + 1;
                } while (uVar45 < uVar53);
                iVar58 = (int)uVar46 + 2 + (int)uVar45;
              }
              uVar45 = uVar38;
              if (iVar58 - 1U < uVar1) {
                param_3[(longlong)iVar58 + -1 + lVar34] =
                     *(byte *)(lVar21 + iVar58 + -1 + lVar37 * uVar24);
              }
            }
          }
          else {
            uVar45 = 0;
          }
        }
LAB_140a9efa0:
        **(short **)(param_2 + uVar24 * 8) =
             (ushort)*param_3 + (ushort)param_3[1] + (ushort)param_3[2];
        if (0 < (int)uVar36) {
          lVar34 = param_1 + lVar37 * uVar24;
          uVar46 = *(longlong *)(param_2 + uVar24 * 8) + 2;
          if (((longlong)(uVar46 - lVar34) < lVar63) &&
             ((longlong)-(uVar46 - lVar34) < lVar63 * 2 + -4)) {
            iVar58 = 1;
            uVar46 = 0;
            if (uVar36 >> 1 != 0) {
              do {
                uVar60 = uVar46;
                *(ushort *)(*(longlong *)(param_2 + uVar24 * 8) + 2 + uVar60 * 4) =
                     (ushort)*(byte *)(lVar34 + uVar60 * 2) +
                     (ushort)*(byte *)(lVar34 + 1 + uVar60 * 2) +
                     (ushort)*(byte *)(lVar34 + 2 + uVar60 * 2);
                *(ushort *)(*(longlong *)(param_2 + uVar24 * 8) + 4 + uVar60 * 4) =
                     (ushort)*(byte *)(lVar34 + 1 + uVar60 * 2) +
                     (ushort)*(byte *)(lVar34 + 2 + uVar60 * 2) +
                     (ushort)*(byte *)(lVar34 + 3 + uVar60 * 2);
                uVar46 = uVar60 + 1;
              } while (uVar46 < uVar36 >> 1);
              iVar58 = (int)uVar60 + 2 + (int)uVar46;
            }
            if (iVar58 - 1U < uVar36) {
              lVar39 = (longlong)iVar58;
              *(ushort *)(*(longlong *)(param_2 + uVar24 * 8) + lVar39 * 2) =
                   (ushort)*(byte *)(lVar39 + -1 + lVar34) + (ushort)*(byte *)(lVar39 + lVar34) +
                   (ushort)*(byte *)(lVar39 + 1 + lVar34);
            }
          }
          else {
            if ((longlong)uVar4 < 0x10) {
LAB_140aa182d:
              uVar60 = 0;
            }
            else {
              uVar42 = (uint)uVar46 & 0xf;
              if ((uVar46 & 0xf) != 0) {
                if ((uVar46 & 1) != 0) goto LAB_140aa182d;
                uVar42 = 0x10 - uVar42 >> 1;
              }
              uVar46 = (ulonglong)uVar42;
              if ((longlong)uVar4 < (longlong)(uVar46 + 0x10)) goto LAB_140aa182d;
              uVar60 = (ulonglong)(int)((int)uVar4 - ((int)uVar4 - uVar42 & 0xf));
              uVar40 = 0;
              if (uVar42 != 0) {
                do {
                  *(ushort *)(*(longlong *)(param_2 + uVar24 * 8) + 2 + uVar40 * 2) =
                       (ushort)*(byte *)(uVar40 + lVar34) + (ushort)*(byte *)(uVar40 + 1 + lVar34) +
                       (ushort)*(byte *)(uVar40 + 2 + lVar34);
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar46);
              }
              lVar39 = lVar37 * uVar24 + param_1;
              do {
                auVar11._8_8_ = 0;
                auVar11._0_8_ = *(ulonglong *)(uVar46 + lVar39);
                auVar11 = vpmovzxbw_avx(auVar11);
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulonglong *)(uVar46 + 1 + lVar39);
                auVar12 = vpmovzxbw_avx(auVar12);
                auVar13._8_8_ = 0;
                auVar13._0_8_ = *(ulonglong *)(uVar46 + 2 + lVar39);
                auVar13 = vpmovzxbw_avx(auVar13);
                auVar11 = vpaddw_avx(auVar11,auVar12);
                auVar14._8_8_ = 0;
                auVar14._0_8_ = *(ulonglong *)(uVar46 + 8 + lVar39);
                auVar12 = vpmovzxbw_avx(auVar14);
                auVar11 = vpaddw_avx(auVar11,auVar13);
                auVar15._8_8_ = 0;
                auVar15._0_8_ = *(ulonglong *)(uVar46 + 9 + lVar39);
                auVar13 = vpmovzxbw_avx(auVar15);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = *(ulonglong *)(uVar46 + 10 + lVar39);
                auVar14 = vpmovzxbw_avx(auVar16);
                auVar12 = vpaddw_avx(auVar12,auVar13);
                *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar24 * 8) + 2 + uVar46 * 2) =
                     auVar11;
                auVar11 = vpaddw_avx(auVar12,auVar14);
                *(undefined1 (*) [16])(*(longlong *)(param_2 + uVar24 * 8) + 0x12 + uVar46 * 2) =
                     auVar11;
                uVar46 = uVar46 + 0x10;
              } while (uVar46 < uVar60);
            }
            for (; uVar60 < uVar4; uVar60 = uVar60 + 1) {
              *(ushort *)(*(longlong *)(param_2 + uVar24 * 8) + 2 + uVar60 * 2) =
                   (ushort)*(byte *)(uVar60 + lVar34) + (ushort)*(byte *)(uVar60 + 1 + lVar34) +
                   (ushort)*(byte *)(uVar60 + 2 + lVar34);
            }
          }
        }
        if ((int)(uint)param_6 < 2) goto LAB_140a9f268;
        lVar34 = uVar24 * 8;
        uVar24 = uVar24 + 1;
        lStack_78 = lStack_78 + lVar37;
        *(ushort *)(*(longlong *)(param_2 + lVar34) + -2 + lVar63 * 2) =
             (ushort)param_3[uVar45] + (ushort)param_3[uVar45 + 1] + (ushort)param_3[uVar45 + 2];
        if ((ulonglong)(longlong)param_6._4_4_ <= uVar24) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    switch(param_7 & 0xf) {
    case 1:
      lVar21 = 1;
      break;
    case 2:
      lVar21 = 2;
      break;
    case 3:
      lVar21 = 3;
      break;
    case 4:
      lVar21 = 4;
    }
    (*(code *)(&PTR_FUN_14308f368)[lVar21])
              (param_1,param_2,(longlong)(int)(uint)param_6 - (longlong)(int)param_5,
               (longlong)param_6._4_4_,lVar37 - (int)(uint)param_6,param_8,(longlong)(int)param_7);
  }
  return 0;
LAB_140a9f268:
  uVar24 = uVar24 + 1;
  lStack_78 = lStack_78 + lVar37;
  if ((ulonglong)(longlong)param_6._4_4_ <= uVar24) {
    return 0;
  }
  goto LAB_140a9df20;
}

