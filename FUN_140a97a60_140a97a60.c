
uint FUN_140a97a60(byte *param_1,ulonglong param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6,byte param_7)

{
  int iVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  
  lVar23 = (longlong)(int)param_3;
  uVar7 = param_6 & 0xf;
  if (lVar23 == 1) {
    if (uVar7 == 6) goto LAB_140a99e02;
    if ((param_6 & 0xc0) == 0) {
      uVar7 = 1;
    }
  }
  else if (uVar7 == 6) {
LAB_140a99e02:
    uVar7 = 0;
    uVar14 = (uint)param_7;
    uVar15 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        uVar11 = (ulonglong)(int)param_5;
        if (0xf < (longlong)uVar11) {
          uVar18 = param_2 & 0xf;
          if (uVar18 != 0) {
            uVar18 = 0x10 - uVar18;
          }
          if ((longlong)(uVar18 + 0x10) <= (longlong)uVar11) {
            uVar13 = 0;
            uVar7 = param_5 - (param_5 - (int)uVar18 & 0xf);
            if (uVar18 != 0) {
              do {
                *(byte *)(uVar13 + param_2) = param_7;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar18);
            }
            auVar5 = vpunpcklbw_avx(ZEXT416(uVar14),ZEXT416(uVar14));
            auVar5 = vpunpcklwd_avx(auVar5,auVar5);
            auVar5 = vpunpckldq_avx(auVar5,auVar5);
            auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
            do {
              *(undefined1 (*) [16])(uVar18 + param_2) = auVar5;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < (ulonglong)(longlong)(int)uVar7);
          }
        }
        uVar18 = (ulonglong)(int)uVar7;
        uVar15 = uVar7;
        if (uVar18 < uVar11) {
          do {
            *(byte *)(uVar18 + param_2) = param_7;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
          uVar15 = (uint)uVar18;
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar11 = (ulonglong)(int)param_5;
        if (((longlong)uVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar11 < 0x10) {
LAB_140a9a4ab:
            uVar13 = 0;
          }
          else {
            uVar18 = param_2 & 0xf;
            if (uVar18 != 0) {
              uVar18 = 0x10 - uVar18;
            }
            if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a9a4ab;
            uVar10 = 0;
            uVar13 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar18 & 0xf));
            if (uVar18 != 0) {
              do {
                *(byte *)(uVar10 + param_2) = param_1[uVar10 - uVar11];
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar18);
            }
            do {
              uVar6 = *(undefined8 *)(param_1 + (uVar18 - uVar11) + 8);
              *(undefined8 *)(uVar18 + param_2) = *(undefined8 *)(param_1 + (uVar18 - uVar11));
              ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < uVar13);
          }
          uVar15 = param_5;
          if (uVar13 < uVar11) {
            do {
              *(byte *)(uVar13 + param_2) = param_1[uVar13 - uVar11];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar11);
          }
          goto LAB_140a9a041;
        }
      }
      uVar17 = 1;
      uVar11 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + uVar18 * 2) = param_1[uVar18 * 2 - (longlong)(int)param_5];
          *(byte *)(param_2 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + (1 - (longlong)(int)param_5)];
          uVar11 = uVar18 + 1;
        } while (uVar11 < param_5 >> 1);
        uVar7 = (int)uVar11 * 2;
        uVar17 = (int)uVar18 + 2 + (int)uVar11;
      }
      uVar15 = uVar7;
      if (uVar17 - 1 < param_5) {
        *(byte *)((longlong)(int)uVar17 + -1 + param_2) =
             param_1[((longlong)(int)uVar17 + -1) - (longlong)(int)param_5];
        uVar15 = uVar17;
      }
    }
LAB_140a9a041:
    lVar20 = (longlong)(int)uVar15;
    if (4 < param_3) {
      param_3 = 4;
    }
    if (lVar23 < 1) {
      uVar7 = 4 - param_5;
      if ((param_6 & 0x80) != 0) goto LAB_140a9a315;
LAB_140a9a22f:
      if ((int)uVar7 < 1) {
        return param_5;
      }
LAB_140a9a238:
      uVar11 = 4 - (longlong)(int)param_5;
      if ((longlong)uVar11 < 0x10) {
LAB_140a9a4ba:
        iVar8 = 0;
      }
      else {
        uVar18 = param_2 + lVar20;
        uVar13 = uVar18 & 0xf;
        if (uVar13 != 0) {
          uVar13 = 0x10 - uVar13;
        }
        if ((longlong)uVar11 < (longlong)(uVar13 + 0x10)) goto LAB_140a9a4ba;
        iVar8 = (int)uVar11 - ((int)uVar11 - (int)uVar13 & 0xfU);
        uVar10 = 0;
        if (uVar13 != 0) {
          do {
            *(byte *)(uVar10 + uVar18) = param_7;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar13);
        }
        auVar5 = vpunpcklbw_avx(ZEXT416(uVar14),ZEXT416(uVar14));
        auVar5 = vpunpcklwd_avx(auVar5,auVar5);
        auVar5 = vpunpckldq_avx(auVar5,auVar5);
        auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
        do {
          *(undefined1 (*) [16])(uVar13 + uVar18) = auVar5;
          uVar13 = uVar13 + 0x10;
        } while (uVar13 < (ulonglong)(longlong)iVar8);
        uVar15 = (int)lVar20 + iVar8;
      }
      uVar18 = (ulonglong)iVar8;
      if (uVar18 < uVar11) {
        do {
          *(byte *)(uVar18 + param_2 + lVar20) = param_7;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar11);
        uVar15 = (int)uVar18 + (int)lVar20;
      }
    }
    else {
      if (param_3 < 7) {
LAB_140a9a135:
        iVar8 = 1;
        uVar7 = uVar15;
        if (param_3 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2];
            *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
            uVar11 = uVar18 + 1;
          } while (uVar11 < param_3 >> 1);
          uVar7 = uVar15 + (int)uVar11 * 2;
          iVar8 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar8 - 1U < param_3) {
          *(byte *)((longlong)iVar8 + -1 + param_2 + lVar20) = param_1[(longlong)iVar8 + -1];
          uVar7 = uVar15 + iVar8;
        }
      }
      else {
        uVar11 = param_2 + lVar20;
        if (((longlong)(uVar11 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar11 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140a9a135;
        if (param_3 < 0x10) {
LAB_140a9a4b2:
          uVar13 = 0;
        }
        else {
          uVar18 = uVar11 & 0xf;
          if ((int)uVar18 != 0) {
            uVar18 = (ulonglong)(0x10 - (int)uVar18);
          }
          iVar8 = (int)uVar18;
          if (param_3 < iVar8 + 0x10U) goto LAB_140a9a4b2;
          uVar13 = 0;
          if (iVar8 != 0) {
            do {
              *(byte *)(uVar13 + uVar11) = param_1[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar18);
          }
          uVar13 = (ulonglong)(int)(param_3 - (param_3 - iVar8 & 0xf));
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar18 + 8);
            *(undefined8 *)(uVar18 + uVar11) = *(undefined8 *)(param_1 + uVar18);
            ((undefined8 *)(uVar18 + uVar11))[1] = uVar6;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar13);
        }
        for (; uVar13 < (ulonglong)(longlong)(int)param_3; uVar13 = uVar13 + 1) {
          *(byte *)(uVar13 + uVar11) = param_1[uVar13];
        }
        uVar7 = uVar15 + param_3;
      }
      uVar15 = uVar7;
      lVar20 = (longlong)(int)uVar15;
      if (lVar23 < 5) {
        uVar7 = 4 - param_5;
        if ((param_6 & 0x80) == 0) goto LAB_140a9a22f;
LAB_140a9a315:
        if ((int)uVar7 < 1) {
          return param_5;
        }
      }
      else {
        uVar15 = uVar15 + 4;
        *(byte *)(lVar20 + param_2) = param_1[lVar23 + -4];
        *(byte *)(lVar20 + 1 + param_2) = param_1[lVar23 + -3];
        *(byte *)(lVar20 + 2 + param_2) = param_1[lVar23 + -2];
        uVar7 = 4 - param_5;
        *(byte *)(lVar20 + 3 + param_2) = param_1[lVar23 + -1];
        lVar20 = (longlong)(int)uVar15;
        if ((param_6 & 0x80) == 0) {
          if ((int)uVar7 < 1) goto LAB_140a9a48a;
          goto LAB_140a9a238;
        }
        if ((int)uVar7 < 1) goto LAB_140a9a48a;
      }
      iVar8 = (int)lVar20;
      if (6 < (int)uVar7) {
        uVar11 = param_2 + lVar20;
        pbVar2 = param_1 + lVar23;
        uVar18 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar18 <= (longlong)(uVar11 - (longlong)pbVar2)) ||
           ((longlong)uVar18 <= (longlong)-(uVar11 - (longlong)pbVar2))) {
          if ((longlong)uVar18 < 0x10) {
LAB_140a9a4c1:
            uVar10 = 0;
          }
          else {
            uVar13 = uVar11 & 0xf;
            if (uVar13 != 0) {
              uVar13 = 0x10 - uVar13;
            }
            if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a9a4c1;
            uVar16 = 0;
            uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
            if (uVar13 != 0) {
              do {
                *(byte *)(uVar16 + uVar11) = pbVar2[uVar16];
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar13);
            }
            do {
              uVar6 = *(undefined8 *)(pbVar2 + uVar13 + 8);
              *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(pbVar2 + uVar13);
              ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
              uVar13 = uVar13 + 0x10;
            } while (uVar13 < uVar10);
          }
          for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
            *(byte *)(uVar10 + uVar11) = pbVar2[uVar10];
          }
          uVar15 = iVar8 + uVar7;
          goto LAB_140a9a480;
        }
      }
      iVar9 = 1;
      if (uVar7 >> 1 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23];
          *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23 + 1];
          uVar11 = uVar18 + 1;
        } while (uVar11 < uVar7 >> 1);
        uVar15 = iVar8 + (int)uVar11 * 2;
        iVar9 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (iVar9 - 1U < uVar7) {
        uVar15 = iVar8 + iVar9;
        *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) = param_1[(longlong)iVar9 + -1 + lVar23];
      }
    }
LAB_140a9a480:
    if (lVar23 < 5) {
      return param_5;
    }
LAB_140a9a48a:
    return uVar15 - (8 - param_5);
  }
  if (uVar7 == 1) {
    bVar4 = *param_1;
    uVar7 = 0;
    uVar15 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        uVar11 = (ulonglong)(int)param_5;
        if (0xf < (longlong)uVar11) {
          uVar18 = param_2 & 0xf;
          if (uVar18 != 0) {
            uVar18 = 0x10 - uVar18;
          }
          if ((longlong)(uVar18 + 0x10) <= (longlong)uVar11) {
            uVar13 = 0;
            uVar7 = param_5 - (param_5 - (int)uVar18 & 0xf);
            if (uVar18 != 0) {
              do {
                *(byte *)(uVar13 + param_2) = bVar4;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar18);
            }
            auVar5 = vpunpcklbw_avx(ZEXT116(bVar4),ZEXT116(bVar4));
            auVar5 = vpunpcklwd_avx(auVar5,auVar5);
            auVar5 = vpunpckldq_avx(auVar5,auVar5);
            auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
            do {
              *(undefined1 (*) [16])(uVar18 + param_2) = auVar5;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < (ulonglong)(longlong)(int)uVar7);
          }
        }
        uVar18 = (ulonglong)(int)uVar7;
        uVar15 = uVar7;
        if (uVar18 < uVar11) {
          do {
            *(byte *)(uVar18 + param_2) = bVar4;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
          uVar15 = (uint)uVar18;
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar11 = (ulonglong)(int)param_5;
        if (((longlong)uVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar11 < 0x10) {
LAB_140a99de6:
            uVar13 = 0;
          }
          else {
            uVar18 = param_2 & 0xf;
            if (uVar18 != 0) {
              uVar18 = 0x10 - uVar18;
            }
            if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a99de6;
            uVar10 = 0;
            uVar13 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar18 & 0xf));
            if (uVar18 != 0) {
              do {
                *(byte *)(uVar10 + param_2) = param_1[uVar10 - uVar11];
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar18);
            }
            do {
              uVar6 = *(undefined8 *)(param_1 + (uVar18 - uVar11) + 8);
              *(undefined8 *)(uVar18 + param_2) = *(undefined8 *)(param_1 + (uVar18 - uVar11));
              ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < uVar13);
          }
          uVar15 = param_5;
          if (uVar13 < uVar11) {
            do {
              *(byte *)(uVar13 + param_2) = param_1[uVar13 - uVar11];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar11);
          }
          goto LAB_140a999ff;
        }
      }
      uVar14 = 1;
      uVar11 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + uVar18 * 2) = param_1[uVar18 * 2 - (longlong)(int)param_5];
          *(byte *)(param_2 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + (1 - (longlong)(int)param_5)];
          uVar11 = uVar18 + 1;
        } while (uVar11 < param_5 >> 1);
        uVar7 = (int)uVar11 * 2;
        uVar14 = (int)uVar18 + 2 + (int)uVar11;
      }
      uVar15 = uVar7;
      if (uVar14 - 1 < param_5) {
        *(byte *)((longlong)(int)uVar14 + -1 + param_2) =
             param_1[((longlong)(int)uVar14 + -1) - (longlong)(int)param_5];
        uVar15 = uVar14;
      }
    }
LAB_140a999ff:
    lVar20 = (longlong)(int)uVar15;
    if (4 < param_3) {
      param_3 = 4;
    }
    if (0 < lVar23) {
      if (param_3 < 7) {
LAB_140a99ad5:
        iVar8 = 1;
        uVar7 = uVar15;
        if (param_3 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2];
            *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
            uVar11 = uVar18 + 1;
          } while (uVar11 < param_3 >> 1);
          uVar7 = uVar15 + (int)uVar11 * 2;
          iVar8 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar8 - 1U < param_3) {
          *(byte *)((longlong)iVar8 + -1 + param_2 + lVar20) = param_1[(longlong)iVar8 + -1];
          uVar7 = uVar15 + iVar8;
        }
      }
      else {
        uVar11 = param_2 + lVar20;
        if (((longlong)(uVar11 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar11 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140a99ad5;
        if (param_3 < 0x10) {
LAB_140a99ded:
          uVar13 = 0;
        }
        else {
          uVar18 = uVar11 & 0xf;
          if ((int)uVar18 != 0) {
            uVar18 = (ulonglong)(0x10 - (int)uVar18);
          }
          iVar8 = (int)uVar18;
          if (param_3 < iVar8 + 0x10U) goto LAB_140a99ded;
          uVar13 = 0;
          if (iVar8 != 0) {
            do {
              *(byte *)(uVar13 + uVar11) = param_1[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar18);
          }
          uVar13 = (ulonglong)(int)(param_3 - (param_3 - iVar8 & 0xf));
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar18 + 8);
            *(undefined8 *)(uVar18 + uVar11) = *(undefined8 *)(param_1 + uVar18);
            ((undefined8 *)(uVar18 + uVar11))[1] = uVar6;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar13);
        }
        for (; uVar13 < (ulonglong)(longlong)(int)param_3; uVar13 = uVar13 + 1) {
          *(byte *)(uVar13 + uVar11) = param_1[uVar13];
        }
        uVar7 = uVar15 + param_3;
      }
      uVar15 = uVar7;
      lVar20 = (longlong)(int)uVar15;
      if (4 < lVar23) {
        uVar15 = uVar15 + 4;
        *(byte *)(lVar20 + param_2) = param_1[lVar23 + -4];
        *(byte *)(lVar20 + 1 + param_2) = param_1[lVar23 + -3];
        *(byte *)(lVar20 + 2 + param_2) = param_1[lVar23 + -2];
        *(byte *)(lVar20 + 3 + param_2) = param_1[lVar23 + -1];
        lVar20 = (longlong)(int)uVar15;
      }
    }
    param_1 = param_1 + lVar23;
    bVar4 = param_1[-1];
    uVar7 = -param_5 + 4;
    iVar8 = (int)lVar20;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar7 < 1) goto LAB_140a99dbe;
      if (6 < (int)uVar7) {
        uVar11 = param_2 + lVar20;
        uVar18 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar18 <= (longlong)(uVar11 - (longlong)param_1)) ||
           ((longlong)uVar18 <= (longlong)-(uVar11 - (longlong)param_1))) {
          if ((longlong)uVar18 < 0x10) {
LAB_140a99dfb:
            uVar10 = 0;
          }
          else {
            uVar13 = uVar11 & 0xf;
            if (uVar13 != 0) {
              uVar13 = 0x10 - uVar13;
            }
            if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a99dfb;
            uVar16 = 0;
            uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
            if (uVar13 != 0) {
              do {
                *(byte *)(uVar16 + uVar11) = param_1[uVar16];
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar13);
            }
            do {
              uVar6 = *(undefined8 *)(param_1 + uVar13 + 8);
              *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(param_1 + uVar13);
              ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
              uVar13 = uVar13 + 0x10;
            } while (uVar13 < uVar10);
          }
          for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
            *(byte *)(uVar10 + uVar11) = param_1[uVar10];
          }
          uVar15 = iVar8 + 4 + -param_5;
          goto LAB_140a99dbe;
        }
      }
      iVar9 = 1;
      if (uVar7 >> 1 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2];
          *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
          uVar11 = uVar18 + 1;
        } while (uVar11 < uVar7 >> 1);
        uVar15 = iVar8 + (int)uVar11 * 2;
        iVar9 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (iVar9 - 1U < uVar7) {
        uVar15 = iVar8 + iVar9;
        *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) = param_1[(longlong)iVar9 + -1];
      }
      goto LAB_140a99dbe;
    }
    if ((int)uVar7 < 1) goto LAB_140a99dbe;
    uVar11 = 4 - (longlong)(int)param_5;
    if ((longlong)uVar11 < 0x10) {
LAB_140a99df4:
      iVar9 = 0;
    }
    else {
      uVar18 = param_2 + lVar20;
      uVar13 = uVar18 & 0xf;
      if (uVar13 != 0) {
        uVar13 = 0x10 - uVar13;
      }
      if ((longlong)uVar11 < (longlong)(uVar13 + 0x10)) goto LAB_140a99df4;
      iVar9 = (int)uVar11 - ((int)uVar11 - (int)uVar13 & 0xfU);
      uVar10 = 0;
      if (uVar13 != 0) {
        do {
          *(byte *)(uVar10 + uVar18) = bVar4;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      auVar5 = vpunpcklbw_avx(ZEXT116(bVar4),ZEXT116(bVar4));
      auVar5 = vpunpcklwd_avx(auVar5,auVar5);
      auVar5 = vpunpckldq_avx(auVar5,auVar5);
      auVar5 = vpunpcklqdq_avx(auVar5,auVar5);
      do {
        *(undefined1 (*) [16])(uVar13 + uVar18) = auVar5;
        uVar13 = uVar13 + 0x10;
      } while (uVar13 < (ulonglong)(longlong)iVar9);
      uVar15 = iVar8 + iVar9;
    }
    uVar18 = (ulonglong)iVar9;
    if (uVar18 < uVar11) {
      do {
        *(byte *)(uVar18 + param_2 + lVar20) = bVar4;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar11);
      uVar15 = (int)uVar18 + iVar8;
    }
LAB_140a99dbe:
    if (4 < lVar23) {
      param_5 = uVar15 - (8 - param_5);
    }
    return param_5;
  }
  if (uVar7 == 2) {
    uVar11 = (ulonglong)param_3;
    if (4 < param_3) {
      uVar11 = 4;
    }
    uVar15 = (uint)uVar11;
    uVar7 = param_5;
    if (lVar23 < 1) {
      lVar20 = (longlong)(int)param_5;
LAB_140a98e38:
      if ((param_6 & 0x40) == 0) {
        if (-1 < (int)(param_5 - 1)) {
          if (6 < (int)param_5) {
            lVar25 = (longlong)(int)param_5;
            lVar12 = lVar23 + param_2 + lVar25;
            lVar24 = -1 - (lVar23 + -1);
            if ((lVar25 < lVar24) || (-lVar25 != lVar24 && lVar25 <= -lVar24)) {
              uVar11 = 0xffffffffffffffff - (-1 - lVar25);
              if ((longlong)uVar11 < 0x10) {
LAB_140a99778:
                uVar13 = 0;
              }
              else {
                uVar18 = param_2 & 0xf;
                if (uVar18 != 0) {
                  uVar18 = 0x10 - uVar18;
                }
                if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a99778;
                lVar24 = lVar12 - lVar25;
                uVar10 = 0;
                uVar13 = (ulonglong)(int)((int)uVar11 - ((int)uVar11 - (int)uVar18 & 0xfU));
                if (uVar18 != 0) {
                  do {
                    *(undefined1 *)(uVar10 + param_2) = *(undefined1 *)(uVar10 + lVar24);
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar18);
                }
                do {
                  puVar3 = (undefined8 *)(uVar18 + lVar24);
                  uVar6 = puVar3[1];
                  *(undefined8 *)(uVar18 + param_2) = *puVar3;
                  ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
                  uVar18 = uVar18 + 0x10;
                } while (uVar18 < uVar13);
              }
              if (uVar13 < uVar11) {
                do {
                  *(undefined1 *)(uVar13 + param_2) = *(undefined1 *)(uVar13 + (lVar12 - lVar25));
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar11);
              }
              goto LAB_140a99164;
            }
          }
          iVar8 = 1;
          lVar12 = 0;
          if (param_5 >> 1 != 0) {
            lVar24 = (longlong)(int)param_5 + param_2;
            uVar11 = 0;
            do {
              uVar18 = uVar11;
              uVar11 = uVar18 + 1;
              *(undefined1 *)(lVar12 + -1 + lVar24) = *(undefined1 *)(lVar12 + -1 + lVar23 + lVar24)
              ;
              *(undefined1 *)(lVar12 + -2 + lVar24) = *(undefined1 *)(lVar12 + -2 + lVar23 + lVar24)
              ;
              lVar12 = lVar12 + -2;
            } while (uVar11 < param_5 >> 1);
            iVar8 = (int)uVar18 + 2 + (int)uVar11;
          }
          if (iVar8 - 1U < param_5) {
            *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar8) =
                 *(undefined1 *)((lVar23 + (longlong)(int)param_5 + param_2) - (longlong)iVar8);
          }
        }
      }
      else {
        if ((int)(param_5 - 1) < 0) goto LAB_140a99164;
        if (6 < (int)param_5) {
          lVar24 = (longlong)(int)param_5;
          lVar12 = ((param_2 - 1) + lVar24) - (longlong)(param_1 + -1);
          if ((lVar24 < lVar12) || (-lVar24 != lVar12 && lVar24 <= -lVar12)) {
            uVar11 = 0xffffffffffffffff - (-1 - lVar24);
            if ((longlong)uVar11 < 0x10) {
LAB_140a9977f:
              uVar13 = 0;
            }
            else {
              uVar18 = param_2 & 0xf;
              if (uVar18 != 0) {
                uVar18 = 0x10 - uVar18;
              }
              if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a9977f;
              uVar10 = 0;
              uVar13 = (ulonglong)(int)((int)uVar11 - ((int)uVar11 - (int)uVar18 & 0xfU));
              if (uVar18 != 0) {
                do {
                  *(byte *)(uVar10 + param_2) = param_1[uVar10 - lVar24];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar18);
              }
              do {
                uVar6 = *(undefined8 *)(param_1 + (uVar18 - lVar24) + 8);
                *(undefined8 *)(uVar18 + param_2) = *(undefined8 *)(param_1 + (uVar18 - lVar24));
                ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
                uVar18 = uVar18 + 0x10;
              } while (uVar18 < uVar13);
            }
            if (uVar13 < uVar11) {
              do {
                *(byte *)(uVar13 + param_2) = param_1[uVar13 - lVar24];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar11);
            }
            goto LAB_140a99164;
          }
        }
        iVar8 = 1;
        lVar12 = 0;
        if (param_5 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
            *(byte *)(lVar12 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar12 + -1];
            *(byte *)(lVar12 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar12 + -2];
            lVar12 = lVar12 + -2;
          } while (uVar11 < param_5 >> 1);
          iVar8 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar8 - 1U < param_5) goto LAB_140a9914c;
      }
    }
    else {
      if (uVar15 < 7) {
LAB_140a98ab7:
        iVar8 = 1;
        if (uVar15 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            *(byte *)((longlong)(int)param_5 + param_2 + uVar18 * 2) = param_1[uVar18 * 2];
            *(byte *)((longlong)(int)param_5 + param_2 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
            uVar11 = uVar18 + 1;
          } while (uVar11 < uVar15 >> 1);
          uVar7 = param_5 + (int)uVar11 * 2;
          iVar8 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar8 - 1U < uVar15) {
          uVar7 = param_5 + iVar8;
          *(byte *)((longlong)iVar8 + -1 + (longlong)(int)param_5 + param_2) =
               param_1[(longlong)iVar8 + -1];
        }
      }
      else {
        uVar18 = (longlong)(int)param_5 + param_2;
        if (((longlong)(uVar18 - (longlong)param_1) < (longlong)uVar11) &&
           ((longlong)-(uVar18 - (longlong)param_1) < (longlong)uVar11)) goto LAB_140a98ab7;
        if (uVar15 < 0x10) {
LAB_140a99761:
          uVar13 = 0;
        }
        else {
          uVar11 = uVar18 & 0xf;
          if ((int)uVar11 != 0) {
            uVar11 = (ulonglong)(0x10 - (int)uVar11);
          }
          iVar8 = (int)uVar11;
          if (uVar15 < iVar8 + 0x10U) goto LAB_140a99761;
          uVar13 = 0;
          if (iVar8 != 0) {
            do {
              *(byte *)(uVar13 + uVar18) = param_1[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar11);
          }
          uVar13 = (ulonglong)(int)(uVar15 - (uVar15 - iVar8 & 0xf));
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar11 + 8);
            *(undefined8 *)(uVar11 + uVar18) = *(undefined8 *)(param_1 + uVar11);
            ((undefined8 *)(uVar11 + uVar18))[1] = uVar6;
            uVar11 = uVar11 + 0x10;
          } while (uVar11 < uVar13);
        }
        for (; uVar13 < (ulonglong)(longlong)(int)uVar15; uVar13 = uVar13 + 1) {
          *(byte *)(uVar13 + uVar18) = param_1[uVar13];
        }
        uVar7 = param_5 + uVar15;
      }
      lVar20 = (longlong)(int)uVar7;
      if (lVar23 < 5) goto LAB_140a98e38;
      if ((param_6 & 0x40) == 0) {
        if ((int)(param_5 - 1) < 0) goto LAB_140a99164;
        if (6 < (int)param_5) {
          lVar24 = (longlong)(int)param_5;
          lVar12 = ((param_2 - 1) + lVar24) - (longlong)(param_1 + lVar23 + -1);
          if ((lVar24 < lVar12) || (-lVar24 != lVar12 && lVar24 <= -lVar12)) {
            uVar11 = 0xffffffffffffffff - (-1 - lVar24);
            if ((longlong)uVar11 < 0x10) {
LAB_140a99768:
              uVar13 = 0;
            }
            else {
              uVar18 = param_2 & 0xf;
              if (uVar18 != 0) {
                uVar18 = 0x10 - uVar18;
              }
              if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a99768;
              uVar10 = 0;
              uVar13 = (ulonglong)(int)((int)uVar11 - ((int)uVar11 - (int)uVar18 & 0xfU));
              if (uVar18 != 0) {
                do {
                  *(byte *)(uVar10 + param_2) = param_1[uVar10 + (lVar23 - lVar24)];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar18);
              }
              do {
                uVar6 = *(undefined8 *)(param_1 + uVar18 + (lVar23 - lVar24) + 8);
                *(undefined8 *)(uVar18 + param_2) =
                     *(undefined8 *)(param_1 + uVar18 + (lVar23 - lVar24));
                ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
                uVar18 = uVar18 + 0x10;
              } while (uVar18 < uVar13);
            }
            if (uVar13 < uVar11) {
              do {
                *(byte *)(uVar13 + param_2) = param_1[uVar13 + (lVar23 - lVar24)];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar11);
            }
            goto LAB_140a99164;
          }
        }
        iVar8 = 1;
        lVar12 = 0;
        if (param_5 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
            *(byte *)(lVar12 + -1 + (longlong)(int)param_5 + param_2) =
                 param_1[lVar12 + -1 + lVar23];
            *(byte *)(lVar12 + -2 + (longlong)(int)param_5 + param_2) =
                 param_1[lVar12 + -2 + lVar23];
            lVar12 = lVar12 + -2;
          } while (uVar11 < param_5 >> 1);
          iVar8 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar8 - 1U < param_5) {
          *(byte *)(((longlong)(int)param_5 + param_2) - (longlong)iVar8) = param_1[lVar23 - iVar8];
        }
        goto LAB_140a99164;
      }
      if ((int)(param_5 - 1) < 0) goto LAB_140a99164;
      if (6 < (int)param_5) {
        lVar24 = (longlong)(int)param_5;
        lVar12 = ((param_2 - 1) + lVar24) - (longlong)(param_1 + -1);
        if ((lVar24 < lVar12) || (-lVar24 != lVar12 && lVar24 <= -lVar12)) {
          uVar11 = 0xffffffffffffffff - (-1 - lVar24);
          if ((longlong)uVar11 < 0x10) {
LAB_140a99770:
            uVar13 = 0;
          }
          else {
            uVar18 = param_2 & 0xf;
            if (uVar18 != 0) {
              uVar18 = 0x10 - uVar18;
            }
            if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a99770;
            uVar10 = 0;
            uVar13 = (ulonglong)(int)((int)uVar11 - ((int)uVar11 - (int)uVar18 & 0xfU));
            if (uVar18 != 0) {
              do {
                *(byte *)(uVar10 + param_2) = param_1[uVar10 - lVar24];
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar18);
            }
            do {
              uVar6 = *(undefined8 *)(param_1 + (uVar18 - lVar24) + 8);
              *(undefined8 *)(uVar18 + param_2) = *(undefined8 *)(param_1 + (uVar18 - lVar24));
              ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
              uVar18 = uVar18 + 0x10;
            } while (uVar18 < uVar13);
          }
          if (uVar13 < uVar11) {
            do {
              *(byte *)(uVar13 + param_2) = param_1[uVar13 - lVar24];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar11);
          }
          goto LAB_140a99164;
        }
      }
      iVar8 = 1;
      lVar12 = 0;
      if (param_5 >> 1 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          uVar11 = uVar18 + 1;
          *(byte *)(lVar12 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar12 + -1];
          *(byte *)(lVar12 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar12 + -2];
          lVar12 = lVar12 + -2;
        } while (uVar11 < param_5 >> 1);
        iVar8 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (param_5 <= iVar8 - 1U) goto LAB_140a99164;
LAB_140a9914c:
      *(byte *)(((longlong)(int)param_5 + param_2) - (longlong)iVar8) = param_1[-(longlong)iVar8];
    }
LAB_140a99164:
    iVar8 = (int)lVar20;
    if (lVar23 < 5) {
      iVar9 = -param_5;
      uVar15 = iVar9 + 4;
      if ((param_6 & 0x80) != 0) {
        if ((int)uVar15 < 1) goto LAB_140a99740;
        if (6 < (int)uVar15) {
          uVar11 = param_2 + lVar20;
          pbVar2 = param_1 + lVar23;
          uVar18 = 4 - (longlong)(int)param_5;
          if (((longlong)uVar18 <= (longlong)(uVar11 - (longlong)pbVar2)) ||
             ((longlong)uVar18 <= (longlong)-(uVar11 - (longlong)pbVar2))) {
            if ((longlong)uVar18 < 0x10) {
LAB_140a9979c:
              uVar10 = 0;
            }
            else {
              uVar13 = uVar11 & 0xf;
              if (uVar13 != 0) {
                uVar13 = 0x10 - uVar13;
              }
              if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a9979c;
              uVar16 = 0;
              uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
              if (uVar13 != 0) {
                do {
                  *(byte *)(uVar16 + uVar11) = pbVar2[uVar16];
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar13);
              }
              do {
                uVar6 = *(undefined8 *)(pbVar2 + uVar13 + 8);
                *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(pbVar2 + uVar13);
                ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
                uVar13 = uVar13 + 0x10;
              } while (uVar13 < uVar10);
            }
            for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
              *(byte *)(uVar10 + uVar11) = pbVar2[uVar10];
            }
            uVar7 = iVar8 + 4 + iVar9;
            goto LAB_140a99740;
          }
        }
        iVar9 = 1;
        if (uVar15 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23];
            *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23 + 1];
            uVar11 = uVar18 + 1;
          } while (uVar11 < uVar15 >> 1);
          uVar7 = iVar8 + (int)uVar11 * 2;
          iVar9 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar9 - 1U < uVar15) {
          uVar7 = iVar8 + iVar9;
          *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) =
               param_1[(longlong)iVar9 + -1 + lVar23];
        }
        goto LAB_140a99740;
      }
      if ((int)uVar15 < 1) goto LAB_140a99740;
      if (6 < (int)uVar15) {
        uVar11 = param_2 + lVar20;
        lVar12 = (param_2 - lVar23) + lVar20;
        uVar18 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar18 <= (longlong)(uVar11 - lVar12)) ||
           ((longlong)uVar18 <= (longlong)-(uVar11 - lVar12))) {
          if ((longlong)uVar18 < 0x10) {
LAB_140a99795:
            uVar10 = 0;
          }
          else {
            uVar13 = uVar11 & 0xf;
            if (uVar13 != 0) {
              uVar13 = 0x10 - uVar13;
            }
            if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a99795;
            uVar16 = 0;
            uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
            if (uVar13 != 0) {
              do {
                *(undefined1 *)(uVar16 + uVar11) = *(undefined1 *)(uVar16 + lVar12);
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar13);
            }
            do {
              uVar6 = ((undefined8 *)(uVar13 + lVar12))[1];
              *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(uVar13 + lVar12);
              ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
              uVar13 = uVar13 + 0x10;
            } while (uVar13 < uVar10);
          }
          for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
            *(undefined1 *)(uVar10 + uVar11) = *(undefined1 *)(uVar10 + lVar12);
          }
          uVar7 = iVar8 + 4 + iVar9;
          goto LAB_140a99740;
        }
      }
      iVar9 = 1;
      if (uVar15 >> 1 != 0) {
        lVar12 = (param_2 - lVar23) + lVar20;
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          *(undefined1 *)(param_2 + lVar20 + uVar18 * 2) = *(undefined1 *)(lVar12 + uVar18 * 2);
          *(undefined1 *)(param_2 + lVar20 + 1 + uVar18 * 2) =
               *(undefined1 *)(lVar12 + 1 + uVar18 * 2);
          uVar11 = uVar18 + 1;
        } while (uVar11 < uVar15 >> 1);
        uVar7 = iVar8 + (int)uVar11 * 2;
        iVar9 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (iVar9 - 1U < uVar15) {
        uVar7 = iVar8 + iVar9;
        *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar20) =
             *(undefined1 *)((longlong)iVar9 + -1 + (param_2 - lVar23) + lVar20);
      }
      goto LAB_140a99740;
    }
    pbVar2 = param_1 + lVar23;
    *(byte *)(lVar20 + param_2) = pbVar2[-4];
    *(byte *)(lVar20 + 1 + param_2) = pbVar2[-3];
    iVar9 = -param_5;
    *(byte *)(lVar20 + 2 + param_2) = pbVar2[-2];
    *(byte *)(lVar20 + 3 + param_2) = pbVar2[-1];
    uVar14 = iVar8 + 4;
    uVar15 = iVar9 + 4;
    uVar7 = uVar14;
    if ((param_6 & 0x80) != 0) {
      lVar20 = (longlong)(int)uVar14;
      if ((int)uVar15 < 1) goto LAB_140a99740;
      if (6 < (int)uVar15) {
        uVar11 = param_2 + lVar20;
        uVar18 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar18 <= (longlong)(uVar11 - (longlong)pbVar2)) ||
           ((longlong)uVar18 <= (longlong)-(uVar11 - (longlong)pbVar2))) {
          if ((longlong)uVar18 < 0x10) {
LAB_140a9978e:
            uVar10 = 0;
          }
          else {
            uVar13 = uVar11 & 0xf;
            if (uVar13 != 0) {
              uVar13 = 0x10 - uVar13;
            }
            if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a9978e;
            uVar16 = 0;
            uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
            if (uVar13 != 0) {
              do {
                *(byte *)(uVar16 + uVar11) = pbVar2[uVar16];
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar13);
            }
            do {
              uVar6 = *(undefined8 *)(pbVar2 + uVar13 + 8);
              *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(pbVar2 + uVar13);
              ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
              uVar13 = uVar13 + 0x10;
            } while (uVar13 < uVar10);
          }
          for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
            *(byte *)(uVar10 + uVar11) = pbVar2[uVar10];
          }
          uVar7 = iVar9 + 8 + iVar8;
          goto LAB_140a99740;
        }
      }
      iVar9 = 1;
      if (uVar15 >> 1 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + lVar20 + uVar18 * 2) = pbVar2[uVar18 * 2];
          *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = pbVar2[uVar18 * 2 + 1];
          uVar11 = uVar18 + 1;
        } while (uVar11 < uVar15 >> 1);
        uVar7 = (int)uVar11 * 2 + 4 + iVar8;
        iVar9 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (iVar9 - 1U < uVar15) {
        uVar7 = uVar14 + iVar9;
        *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) = pbVar2[(longlong)iVar9 + -1];
      }
      goto LAB_140a99740;
    }
    lVar20 = (longlong)(int)uVar14;
    if ((int)uVar15 < 1) goto LAB_140a99740;
    if (6 < (int)uVar15) {
      uVar11 = param_2 + lVar20;
      uVar18 = 4 - (longlong)(int)param_5;
      if (((longlong)uVar18 <= (longlong)(uVar11 - (longlong)param_1)) ||
         ((longlong)uVar18 <= (longlong)-(uVar11 - (longlong)param_1))) {
        if ((longlong)uVar18 < 0x10) {
LAB_140a99787:
          uVar10 = 0;
        }
        else {
          uVar13 = uVar11 & 0xf;
          if (uVar13 != 0) {
            uVar13 = 0x10 - uVar13;
          }
          if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a99787;
          uVar16 = 0;
          uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
          if (uVar13 != 0) {
            do {
              *(byte *)(uVar16 + uVar11) = param_1[uVar16];
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar13);
          }
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar13 + 8);
            *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(param_1 + uVar13);
            ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
            uVar13 = uVar13 + 0x10;
          } while (uVar13 < uVar10);
        }
        for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
          *(byte *)(uVar10 + uVar11) = param_1[uVar10];
        }
        uVar7 = iVar9 + 8 + iVar8;
        goto LAB_140a99740;
      }
    }
    iVar9 = 1;
    if (uVar15 >> 1 != 0) {
      uVar11 = 0;
      do {
        uVar18 = uVar11;
        *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2];
        *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
        uVar11 = uVar18 + 1;
      } while (uVar11 < uVar15 >> 1);
      uVar7 = (int)uVar11 * 2 + 4 + iVar8;
      iVar9 = (int)uVar18 + 2 + (int)uVar11;
    }
    if (iVar9 - 1U < uVar15) {
      *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) = param_1[(longlong)iVar9 + -1];
      uVar7 = uVar14 + iVar9;
    }
LAB_140a99740:
    if (4 < lVar23) {
      param_5 = uVar7 - (8 - param_5);
    }
    return param_5;
  }
  if (uVar7 == 3) {
    uVar11 = (ulonglong)(1 < (int)param_3);
    uVar7 = (uint)(1 < (int)param_3);
    lVar20 = (longlong)(int)param_5;
    uVar18 = 4;
    if (param_3 < 5) {
      uVar18 = (ulonglong)param_3;
    }
    lVar12 = lVar20;
    uVar15 = param_5;
    if (lVar23 < 1) {
LAB_140a983b6:
      lVar24 = lVar20 + -1;
      if ((param_6 & 0x40) != 0) {
        if (-1 < lVar24) {
          uVar18 = uVar11;
          if ((longlong)uVar11 < lVar23) {
            do {
              while( true ) {
                *(byte *)(lVar24 + param_2) = param_1[lVar24 - lVar20];
                lVar24 = lVar24 + -1;
                if ((longlong)(uVar18 + 1) < lVar23) break;
                do {
                  if (lVar24 < 0) goto LAB_140a9831a;
LAB_140a989a9:
                  uVar18 = uVar11;
                } while (lVar23 <= (longlong)uVar11);
              }
              uVar18 = uVar18 + 1;
            } while (-1 < lVar24);
          }
          else {
            bVar26 = -1 < lVar24;
            if ((((bVar26) && (bVar26)) && (bVar26)) && (bVar26)) goto LAB_140a989a9;
          }
        }
        goto LAB_140a9831a;
      }
      if ((param_6 & 0x80) == 0) {
        if (-1 < lVar24) {
          lVar25 = (longlong)(int)((int)lVar24 + uVar7) + 1;
          uVar18 = uVar11;
          if ((longlong)uVar11 < lVar23) {
            do {
              while( true ) {
                *(undefined1 *)(lVar24 + param_2) = *(undefined1 *)(param_2 + lVar25);
                lVar24 = lVar24 + -1;
                lVar25 = lVar25 + 1;
                if ((longlong)(uVar18 + 1) < lVar23) break;
                do {
                  if (lVar24 < 0) goto LAB_140a98426;
LAB_140a98969:
                  lVar25 = (longlong)(int)((int)lVar24 + uVar7) + 1;
                  uVar18 = uVar11;
                } while (lVar23 <= (longlong)uVar11);
              }
              uVar18 = uVar18 + 1;
            } while (-1 < lVar24);
          }
          else if (-1 < lVar24) goto LAB_140a98969;
        }
LAB_140a98426:
        if (4 < lVar23) goto LAB_140a98529;
        goto LAB_140a98430;
      }
      if (-1 < (int)(param_5 - 1)) {
        iVar8 = 1;
        lVar24 = 0;
        if (param_5 >> 1 != 0) {
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            *(byte *)(lVar24 + -1 + param_2 + lVar20) = param_1[uVar13 * 2 + 1];
            uVar18 = uVar13 + 1;
            *(byte *)(lVar24 + -2 + param_2 + lVar20) = param_1[uVar13 * 2 + 2];
            lVar24 = lVar24 + -2;
          } while (uVar18 < param_5 >> 1);
          iVar8 = (int)uVar13 + 2 + (int)uVar18;
        }
        if (iVar8 - 1U < param_5) {
          *(byte *)((param_2 + lVar20) - (longlong)iVar8) = param_1[iVar8];
        }
      }
      if (lVar23 < 5) goto LAB_140a98771;
    }
    else {
      uVar14 = (uint)uVar18;
      if (uVar14 < 7) {
LAB_140a98036:
        iVar8 = 1;
        if (uVar14 >> 1 != 0) {
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            *(byte *)(param_2 + lVar20 + uVar13 * 2) = param_1[uVar13 * 2];
            *(byte *)(param_2 + lVar20 + 1 + uVar13 * 2) = param_1[uVar13 * 2 + 1];
            uVar18 = uVar13 + 1;
          } while (uVar18 < uVar14 >> 1);
          uVar15 = param_5 + (int)uVar18 * 2;
          iVar8 = (int)uVar13 + 2 + (int)uVar18;
        }
        if (iVar8 - 1U < uVar14) {
          uVar15 = param_5 + iVar8;
          *(byte *)((longlong)iVar8 + -1 + param_2 + lVar20) = param_1[(longlong)iVar8 + -1];
        }
      }
      else {
        uVar13 = param_2 + lVar20;
        if (((longlong)(uVar13 - (longlong)param_1) < (longlong)uVar18) &&
           ((longlong)-(uVar13 - (longlong)param_1) < (longlong)uVar18)) goto LAB_140a98036;
        if (uVar14 < 0x10) {
LAB_140a98947:
          uVar10 = 0;
        }
        else {
          uVar18 = uVar13 & 0xf;
          if ((int)uVar18 != 0) {
            uVar18 = (ulonglong)(0x10 - (int)uVar18);
          }
          iVar8 = (int)uVar18;
          if (uVar14 < iVar8 + 0x10U) goto LAB_140a98947;
          uVar10 = 0;
          if (iVar8 != 0) {
            do {
              *(byte *)(uVar10 + uVar13) = param_1[uVar10];
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar18);
          }
          uVar10 = (ulonglong)(int)(uVar14 - (uVar14 - iVar8 & 0xf));
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar18 + 8);
            *(undefined8 *)(uVar18 + uVar13) = *(undefined8 *)(param_1 + uVar18);
            ((undefined8 *)(uVar18 + uVar13))[1] = uVar6;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar10);
        }
        for (; uVar10 < (ulonglong)(longlong)(int)uVar14; uVar10 = uVar10 + 1) {
          *(byte *)(uVar10 + uVar13) = param_1[uVar10];
        }
        uVar15 = param_5 + uVar14;
      }
      lVar12 = (longlong)(int)uVar15;
      if (lVar23 < 5) goto LAB_140a983b6;
      if ((param_6 & 0x40) == 0) {
        if (-1 < (int)(param_5 - 1)) {
          iVar8 = 1;
          lVar24 = 0;
          if (param_5 >> 1 != 0) {
            uVar18 = 0;
            do {
              uVar13 = uVar18;
              *(byte *)(lVar24 + -1 + param_2 + lVar20) = param_1[uVar13 * 2 + uVar11];
              uVar18 = uVar13 + 1;
              *(byte *)(lVar24 + -2 + param_2 + lVar20) = param_1[uVar13 * 2 + uVar11 + 1];
              lVar24 = lVar24 + -2;
            } while (uVar18 < param_5 >> 1);
            iVar8 = (int)uVar13 + 2 + (int)uVar18;
          }
          if (iVar8 - 1U < param_5) {
            *(byte *)((param_2 + lVar20) - (longlong)iVar8) = param_1[(longlong)iVar8 + -1 + uVar11]
            ;
          }
        }
      }
      else if (-1 < (int)(param_5 - 1)) {
        if (((int)param_5 < 7) ||
           ((lVar24 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + -1), lVar24 <= lVar20 &&
            (-lVar20 == lVar24 || -lVar24 < lVar20)))) {
          iVar8 = 1;
          lVar24 = 0;
          if (param_5 >> 1 != 0) {
            uVar18 = 0;
            do {
              uVar13 = uVar18;
              uVar18 = uVar13 + 1;
              *(byte *)(lVar24 + -1 + param_2 + lVar20) = param_1[lVar24 + -1];
              *(byte *)(lVar24 + -2 + param_2 + lVar20) = param_1[lVar24 + -2];
              lVar24 = lVar24 + -2;
            } while (uVar18 < param_5 >> 1);
            iVar8 = (int)uVar13 + 2 + (int)uVar18;
          }
          if (iVar8 - 1U < param_5) {
            *(byte *)((param_2 + lVar20) - (longlong)iVar8) = param_1[-(longlong)iVar8];
          }
        }
        else {
          uVar18 = 0xffffffffffffffff - (-1 - lVar20);
          if ((longlong)uVar18 < 0x10) {
LAB_140a9894e:
            uVar10 = 0;
          }
          else {
            uVar13 = param_2 & 0xf;
            if (uVar13 != 0) {
              uVar13 = 0x10 - uVar13;
            }
            if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a9894e;
            uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
            if (uVar13 != 0) {
              uVar16 = 0;
              do {
                *(byte *)(uVar16 + param_2) = param_1[uVar16 - lVar20];
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar13);
            }
            do {
              uVar6 = *(undefined8 *)(param_1 + (uVar13 - lVar20) + 8);
              *(undefined8 *)(uVar13 + param_2) = *(undefined8 *)(param_1 + (uVar13 - lVar20));
              ((undefined8 *)(uVar13 + param_2))[1] = uVar6;
              uVar13 = uVar13 + 0x10;
            } while (uVar13 < uVar10);
          }
          if (uVar10 < uVar18) {
            do {
              *(byte *)(uVar10 + param_2) = param_1[uVar10 - lVar20];
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar18);
          }
        }
      }
LAB_140a9831a:
      if (lVar23 < 5) {
        if ((param_6 & 0x80) == 0) {
          if ((param_6 & 0x40) != 0) {
            uVar7 = 4 - param_5;
            if (0 < (int)uVar7) {
              iVar8 = 1;
              lVar20 = 0;
              if (uVar7 >> 1 != 0) {
                uVar11 = 0;
                do {
                  uVar18 = uVar11;
                  *(byte *)(param_2 + lVar12 + uVar18 * 2) = param_1[lVar20 + -2 + lVar23];
                  lVar24 = lVar20 + -3;
                  lVar20 = lVar20 + -2;
                  *(byte *)(param_2 + lVar12 + 1 + uVar18 * 2) = param_1[lVar24 + lVar23];
                  uVar11 = uVar18 + 1;
                } while (uVar11 < uVar7 >> 1);
                uVar15 = (int)lVar12 + (int)uVar11 * 2;
                iVar8 = (int)uVar18 + 2 + (int)uVar11;
              }
              if (iVar8 - 1U < uVar7) {
                *(byte *)((longlong)iVar8 + -1 + param_2 + lVar12) = param_1[(lVar23 - iVar8) + -1];
                uVar15 = (int)lVar12 + iVar8;
              }
            }
            goto LAB_140a988e0;
          }
LAB_140a98430:
          iVar9 = param_3 + 4;
          iVar22 = 4 - param_5;
          iVar8 = ((int)param_3 < 2) - 1;
          iVar19 = ((param_3 + ((int)param_3 < 2)) - iVar22) + 2;
          lVar20 = (lVar23 + 4) - (longlong)iVar22;
          if (lVar20 < iVar9) {
            iVar21 = iVar8;
            do {
              lVar12 = (longlong)iVar19;
              iVar19 = iVar19 + iVar8;
              *(undefined1 *)(lVar20 + param_2) = *(undefined1 *)(lVar12 + param_2);
              if ((iVar9 - iVar22 <= iVar19) || (iVar19 < (int)param_5)) {
                iVar1 = iVar8 + iVar21;
                iVar8 = -iVar8;
                iVar19 = iVar19 - iVar1;
                iVar21 = -iVar21;
              }
              lVar20 = lVar20 + 1;
            } while (lVar20 < iVar9);
          }
          goto LAB_140a988e0;
        }
LAB_140a98771:
        uVar7 = -param_5 + 4;
        if ((int)uVar7 < 1) goto LAB_140a988e0;
        iVar8 = (int)lVar12;
        if (6 < (int)uVar7) {
          uVar11 = param_2 + lVar12;
          pbVar2 = param_1 + lVar23;
          if ((4 - lVar20 <= (longlong)(uVar11 - (longlong)pbVar2)) ||
             (4 - lVar20 <= (longlong)-(uVar11 - (longlong)pbVar2))) {
            uVar18 = 4 - lVar20;
            if ((longlong)uVar18 < 0x10) {
LAB_140a98993:
              uVar10 = 0;
            }
            else {
              uVar13 = uVar11 & 0xf;
              if (uVar13 != 0) {
                uVar13 = 0x10 - uVar13;
              }
              if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a98993;
              uVar16 = 0;
              uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
              if (uVar13 != 0) {
                do {
                  *(byte *)(uVar16 + uVar11) = pbVar2[uVar16];
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar13);
              }
              do {
                uVar6 = *(undefined8 *)(pbVar2 + uVar13 + 8);
                *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(pbVar2 + uVar13);
                ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
                uVar13 = uVar13 + 0x10;
              } while (uVar13 < uVar10);
            }
            for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
              *(byte *)(uVar10 + uVar11) = pbVar2[uVar10];
            }
            uVar15 = iVar8 + 4 + -param_5;
            goto LAB_140a988e0;
          }
        }
        iVar9 = 1;
        if (uVar7 >> 1 != 0) {
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            *(byte *)(param_2 + lVar12 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23];
            *(byte *)(param_2 + lVar12 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23 + 1];
            uVar11 = uVar18 + 1;
          } while (uVar11 < uVar7 >> 1);
          uVar15 = iVar8 + (int)uVar11 * 2;
          iVar9 = (int)uVar18 + 2 + (int)uVar11;
        }
        if (iVar9 - 1U < uVar7) {
          *(byte *)((longlong)iVar9 + -1 + param_2 + lVar12) =
               param_1[(longlong)iVar9 + -1 + lVar23];
          uVar15 = iVar8 + iVar9;
        }
        goto LAB_140a988e0;
      }
    }
LAB_140a98529:
    param_1 = param_1 + lVar23;
    *(byte *)(lVar12 + param_2) = param_1[-4];
    *(byte *)(lVar12 + 1 + param_2) = param_1[-3];
    *(byte *)(lVar12 + 2 + param_2) = param_1[-2];
    *(byte *)(lVar12 + 3 + param_2) = param_1[-1];
    iVar8 = (int)lVar12;
    uVar14 = iVar8 + 4;
    uVar7 = -param_5 + 4;
    uVar15 = uVar14;
    if ((param_6 & 0x80) == 0) {
      if (0 < (int)uVar7) {
        iVar9 = 1;
        lVar20 = 0;
        if (uVar7 >> 1 != 0) {
          uVar18 = 0;
          do {
            uVar13 = uVar18;
            *(byte *)((longlong)(int)uVar14 + param_2 + uVar13 * 2) =
                 param_1[(lVar20 + -1) - uVar11];
            lVar12 = lVar20 + -2;
            lVar20 = lVar20 + -2;
            *(byte *)((longlong)(int)uVar14 + param_2 + 1 + uVar13 * 2) = param_1[lVar12 - uVar11];
            uVar18 = uVar13 + 1;
          } while (uVar18 < uVar7 >> 1);
          uVar15 = (int)uVar18 * 2 + 4 + iVar8;
          iVar9 = (int)uVar13 + 2 + (int)uVar18;
        }
        if (iVar9 - 1U < uVar7) {
          *(byte *)((longlong)iVar9 + -1 + param_2 + (longlong)(int)uVar14) =
               param_1[-(longlong)iVar9 - uVar11];
          uVar15 = iVar9 + uVar14;
        }
      }
      goto LAB_140a988e0;
    }
    lVar12 = (longlong)(int)uVar14;
    if ((int)uVar7 < 1) goto LAB_140a988e0;
    if (6 < (int)uVar7) {
      uVar11 = param_2 + lVar12;
      if ((4 - lVar20 <= (longlong)(uVar11 - (longlong)param_1)) ||
         (4 - lVar20 <= (longlong)-(uVar11 - (longlong)param_1))) {
        uVar18 = 4 - lVar20;
        if ((longlong)uVar18 < 0x10) {
LAB_140a9898c:
          uVar10 = 0;
        }
        else {
          uVar13 = uVar11 & 0xf;
          if (uVar13 != 0) {
            uVar13 = 0x10 - uVar13;
          }
          if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a9898c;
          uVar16 = 0;
          uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
          if (uVar13 != 0) {
            do {
              *(byte *)(uVar16 + uVar11) = param_1[uVar16];
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar13);
          }
          do {
            uVar6 = *(undefined8 *)(param_1 + uVar13 + 8);
            *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(param_1 + uVar13);
            ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
            uVar13 = uVar13 + 0x10;
          } while (uVar13 < uVar10);
        }
        for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
          *(byte *)(uVar10 + uVar11) = param_1[uVar10];
        }
        uVar15 = -param_5 + 8 + iVar8;
        goto LAB_140a988e0;
      }
    }
    iVar9 = 1;
    if (uVar7 >> 1 != 0) {
      uVar11 = 0;
      do {
        uVar18 = uVar11;
        *(byte *)(param_2 + lVar12 + uVar18 * 2) = param_1[uVar18 * 2];
        *(byte *)(param_2 + lVar12 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
        uVar11 = uVar18 + 1;
      } while (uVar11 < uVar7 >> 1);
      uVar15 = (int)uVar11 * 2 + 4 + iVar8;
      iVar9 = (int)uVar18 + 2 + (int)uVar11;
    }
    if (iVar9 - 1U < uVar7) {
      *(byte *)((longlong)iVar9 + -1 + param_2 + lVar12) = param_1[(longlong)iVar9 + -1];
      uVar15 = uVar14 + iVar9;
    }
LAB_140a988e0:
    if (4 < lVar23) {
      param_5 = uVar15 - (8 - param_5);
    }
    return param_5;
  }
  if ((param_6 & 0xf0) != 0xf0) {
    return 0;
  }
  uVar7 = 0;
  uVar15 = 0;
  if (0 < (int)param_5) {
    if (6 < (int)param_5) {
      uVar11 = (ulonglong)(int)param_5;
      if (((longlong)uVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
         ((longlong)uVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
        if ((longlong)uVar11 < 0x10) {
LAB_140a97f45:
          uVar13 = 0;
        }
        else {
          uVar18 = param_2 & 0xf;
          if (uVar18 != 0) {
            uVar18 = 0x10 - uVar18;
          }
          if ((longlong)uVar11 < (longlong)(uVar18 + 0x10)) goto LAB_140a97f45;
          uVar10 = 0;
          uVar13 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar18 & 0xf));
          if (uVar18 != 0) {
            do {
              *(byte *)(uVar10 + param_2) = param_1[uVar10 - uVar11];
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar18);
          }
          do {
            uVar6 = *(undefined8 *)(param_1 + (uVar18 - uVar11) + 8);
            *(undefined8 *)(uVar18 + param_2) = *(undefined8 *)(param_1 + (uVar18 - uVar11));
            ((undefined8 *)(uVar18 + param_2))[1] = uVar6;
            uVar18 = uVar18 + 0x10;
          } while (uVar18 < uVar13);
        }
        uVar15 = param_5;
        if (uVar13 < uVar11) {
          do {
            *(byte *)(uVar13 + param_2) = param_1[uVar13 - uVar11];
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar11);
        }
        goto LAB_140a97c1f;
      }
    }
    uVar14 = 1;
    uVar11 = 0;
    if (param_5 >> 1 != 0) {
      do {
        uVar18 = uVar11;
        *(byte *)(param_2 + uVar18 * 2) = param_1[uVar18 * 2 - (longlong)(int)param_5];
        *(byte *)(param_2 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + (1 - (longlong)(int)param_5)];
        uVar11 = uVar18 + 1;
      } while (uVar11 < param_5 >> 1);
      uVar7 = (int)uVar11 * 2;
      uVar14 = (int)uVar18 + 2 + (int)uVar11;
    }
    uVar15 = uVar7;
    if (uVar14 - 1 < param_5) {
      *(byte *)((longlong)(int)uVar14 + -1 + param_2) =
           param_1[((longlong)(int)uVar14 + -1) - (longlong)(int)param_5];
      uVar15 = uVar14;
    }
  }
LAB_140a97c1f:
  lVar20 = (longlong)(int)uVar15;
  uVar11 = (ulonglong)param_3;
  if (4 < param_3) {
    uVar11 = 4;
  }
  if (lVar23 < 1) {
LAB_140a97da5:
    uVar7 = 4 - param_5;
    if ((int)uVar7 < 1) {
      return param_5;
    }
  }
  else {
    uVar7 = (uint)uVar11;
    if (uVar7 < 7) {
LAB_140a97cf4:
      iVar8 = 1;
      uVar14 = uVar15;
      if (uVar7 >> 1 != 0) {
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2];
          *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + 1];
          uVar11 = uVar18 + 1;
        } while (uVar11 < uVar7 >> 1);
        uVar14 = uVar15 + (int)uVar11 * 2;
        iVar8 = (int)uVar18 + 2 + (int)uVar11;
      }
      if (iVar8 - 1U < uVar7) {
        *(byte *)((longlong)iVar8 + -1 + param_2 + lVar20) = param_1[(longlong)iVar8 + -1];
        uVar14 = uVar15 + iVar8;
      }
    }
    else {
      uVar18 = param_2 + lVar20;
      if (((longlong)(uVar18 - (longlong)param_1) < (longlong)uVar11) &&
         ((longlong)-(uVar18 - (longlong)param_1) < (longlong)uVar11)) goto LAB_140a97cf4;
      if (uVar7 < 0x10) {
LAB_140a97f4c:
        uVar13 = 0;
      }
      else {
        uVar11 = uVar18 & 0xf;
        if ((int)uVar11 != 0) {
          uVar11 = (ulonglong)(0x10 - (int)uVar11);
        }
        iVar8 = (int)uVar11;
        if (uVar7 < iVar8 + 0x10U) goto LAB_140a97f4c;
        uVar13 = 0;
        if (iVar8 != 0) {
          do {
            *(byte *)(uVar13 + uVar18) = param_1[uVar13];
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar11);
        }
        uVar13 = (ulonglong)(int)(uVar7 - (uVar7 - iVar8 & 0xf));
        do {
          uVar6 = *(undefined8 *)(param_1 + uVar11 + 8);
          *(undefined8 *)(uVar11 + uVar18) = *(undefined8 *)(param_1 + uVar11);
          ((undefined8 *)(uVar11 + uVar18))[1] = uVar6;
          uVar11 = uVar11 + 0x10;
        } while (uVar11 < uVar13);
      }
      for (; uVar13 < (ulonglong)(longlong)(int)uVar7; uVar13 = uVar13 + 1) {
        *(byte *)(uVar13 + uVar18) = param_1[uVar13];
      }
      uVar14 = uVar15 + uVar7;
    }
    uVar15 = uVar14;
    lVar20 = (longlong)(int)uVar15;
    if (lVar23 < 5) goto LAB_140a97da5;
    uVar15 = uVar15 + 4;
    *(byte *)(lVar20 + param_2) = param_1[lVar23 + -4];
    *(byte *)(lVar20 + 1 + param_2) = param_1[lVar23 + -3];
    *(byte *)(lVar20 + 2 + param_2) = param_1[lVar23 + -2];
    *(byte *)(lVar20 + 3 + param_2) = param_1[lVar23 + -1];
    uVar7 = 4 - param_5;
    lVar20 = (longlong)(int)uVar15;
    if ((int)uVar7 < 1) goto LAB_140a97f07;
  }
  iVar8 = (int)lVar20;
  if ((int)uVar7 < 7) {
LAB_140a97e95:
    iVar9 = 1;
    if (uVar7 >> 1 != 0) {
      uVar11 = 0;
      do {
        uVar18 = uVar11;
        *(byte *)(param_2 + lVar20 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23];
        *(byte *)(param_2 + lVar20 + 1 + uVar18 * 2) = param_1[uVar18 * 2 + lVar23 + 1];
        uVar11 = uVar18 + 1;
      } while (uVar11 < uVar7 >> 1);
      uVar15 = iVar8 + (int)uVar11 * 2;
      iVar9 = (int)uVar18 + 2 + (int)uVar11;
    }
    if (iVar9 - 1U < uVar7) {
      uVar15 = iVar8 + iVar9;
      *(byte *)((longlong)iVar9 + -1 + param_2 + lVar20) = param_1[(longlong)iVar9 + -1 + lVar23];
    }
  }
  else {
    uVar11 = param_2 + lVar20;
    pbVar2 = param_1 + lVar23;
    uVar18 = 4 - (longlong)(int)param_5;
    if (((longlong)(uVar11 - (longlong)pbVar2) < (longlong)uVar18) &&
       ((longlong)-(uVar11 - (longlong)pbVar2) < (longlong)uVar18)) goto LAB_140a97e95;
    if ((longlong)uVar18 < 0x10) {
LAB_140a97f53:
      uVar10 = 0;
    }
    else {
      uVar13 = uVar11 & 0xf;
      if (uVar13 != 0) {
        uVar13 = 0x10 - uVar13;
      }
      if ((longlong)uVar18 < (longlong)(uVar13 + 0x10)) goto LAB_140a97f53;
      uVar16 = 0;
      uVar10 = (ulonglong)(int)((int)uVar18 - ((int)uVar18 - (int)uVar13 & 0xfU));
      if (uVar13 != 0) {
        do {
          *(byte *)(uVar16 + uVar11) = pbVar2[uVar16];
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar13);
      }
      do {
        uVar6 = *(undefined8 *)(pbVar2 + uVar13 + 8);
        *(undefined8 *)(uVar13 + uVar11) = *(undefined8 *)(pbVar2 + uVar13);
        ((undefined8 *)(uVar13 + uVar11))[1] = uVar6;
        uVar13 = uVar13 + 0x10;
      } while (uVar13 < uVar10);
    }
    for (; uVar10 < uVar18; uVar10 = uVar10 + 1) {
      *(byte *)(uVar10 + uVar11) = pbVar2[uVar10];
    }
    uVar15 = iVar8 + uVar7;
  }
  if (lVar23 < 5) {
    return param_5;
  }
LAB_140a97f07:
  return uVar15 - (8 - param_5);
}

