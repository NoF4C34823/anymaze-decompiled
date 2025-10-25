
uint FUN_140a7a840(undefined1 *param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  uint param_5,uint param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined1 in_XMM0 [16];
  ulonglong uStack_50;
  
  lVar17 = (longlong)(int)param_3;
  uVar4 = param_6 & 0xf;
  if (lVar17 == 1) {
    if (uVar4 == 6) goto LAB_140a7cf21;
    if ((param_6 & 0xc0) == 0) {
      uVar4 = 1;
    }
  }
  else if (uVar4 == 6) {
LAB_140a7cf21:
    uVar4 = 0;
    uVar11 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (0xf < (longlong)uVar7) {
          uVar12 = param_2 & 0xf;
          if (uVar12 != 0) {
            uVar12 = 0x10 - uVar12;
          }
          if ((longlong)(uVar12 + 0x10) <= (longlong)uVar7) {
            uVar8 = 0;
            uVar4 = param_5 - (param_5 - (int)uVar12 & 0xf);
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(uVar8 + param_2) = param_7;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar12);
            }
            uVar23 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
            in_XMM0._0_8_ = CONCAT44(uVar23,uVar23);
            in_XMM0._8_8_ = in_XMM0._0_8_;
            do {
              *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar4);
          }
        }
        uVar12 = (ulonglong)(int)uVar4;
        uVar11 = uVar4;
        if (uVar12 < uVar7) {
          do {
            *(undefined1 *)(uVar12 + param_2) = param_7;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar7);
          uVar11 = (uint)uVar12;
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar7 < 0x10) {
LAB_140a7d66c:
            uVar8 = 0;
          }
          else {
            uVar12 = param_2 & 0xf;
            if (uVar12 != 0) {
              uVar12 = 0x10 - uVar12;
            }
            if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7d66c;
            uVar6 = 0;
            uVar8 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar12 & 0xf));
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - uVar7];
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar12);
            }
            if (((ulonglong)(param_1 + (uVar12 - uVar7)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar12 - uVar7));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar12 - uVar7)));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
          }
          uVar11 = param_5;
          if (uVar8 < uVar7) {
            do {
              *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 - uVar7];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          goto LAB_140a7d1a2;
        }
      }
      uVar10 = 1;
      uVar7 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + uVar12 * 2) = param_1[uVar12 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar12 * 2) =
               param_1[uVar12 * 2 + (1 - (longlong)(int)param_5)];
          uVar7 = uVar12 + 1;
        } while (uVar7 < param_5 >> 1);
        uVar4 = (int)uVar7 * 2;
        uVar10 = (int)uVar12 + 2 + (int)uVar7;
      }
      uVar11 = uVar4;
      if (uVar10 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
             param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
        uVar11 = uVar10;
      }
    }
LAB_140a7d1a2:
    lVar19 = (longlong)(int)uVar11;
    if (4 < param_3) {
      param_3 = 4;
    }
    if (lVar17 < 1) {
      uVar4 = 4 - param_5;
      if ((param_6 & 0x80) != 0) goto LAB_140a7d4d6;
LAB_140a7d3d0:
      if ((int)uVar4 < 1) {
        return param_5;
      }
LAB_140a7d3d9:
      uVar7 = 4 - (longlong)(int)param_5;
      if ((longlong)uVar7 < 0x10) {
LAB_140a7d67b:
        iVar5 = 0;
      }
      else {
        uVar12 = param_2 + lVar19;
        uVar8 = uVar12 & 0xf;
        if (uVar8 != 0) {
          uVar8 = 0x10 - uVar8;
        }
        if ((longlong)uVar7 < (longlong)(uVar8 + 0x10)) goto LAB_140a7d67b;
        iVar5 = (int)uVar7 - ((int)uVar7 - (int)uVar8 & 0xfU);
        uVar6 = 0;
        if (uVar8 != 0) {
          do {
            *(undefined1 *)(uVar6 + uVar12) = param_7;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        uVar23 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
        uVar24 = CONCAT44(uVar23,uVar23);
        do {
          *(undefined8 *)(uVar8 + uVar12) = uVar24;
          ((undefined8 *)(uVar8 + uVar12))[1] = uVar24;
          uVar8 = uVar8 + 0x10;
        } while (uVar8 < (ulonglong)(longlong)iVar5);
        uVar11 = (int)lVar19 + iVar5;
      }
      uVar12 = (ulonglong)iVar5;
      if (uVar12 < uVar7) {
        do {
          *(undefined1 *)(uVar12 + param_2 + lVar19) = param_7;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar7);
        uVar11 = (int)uVar12 + (int)lVar19;
      }
    }
    else {
      if (param_3 < 7) {
LAB_140a7d2d6:
        iVar5 = 1;
        uVar4 = uVar11;
        if (param_3 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2];
            *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
            uVar7 = uVar12 + 1;
          } while (uVar7 < param_3 >> 1);
          uVar4 = uVar11 + (int)uVar7 * 2;
          iVar5 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar5 - 1U < param_3) {
          *(undefined1 *)((longlong)iVar5 + -1 + param_2 + lVar19) = param_1[(longlong)iVar5 + -1];
          uVar4 = uVar11 + iVar5;
        }
      }
      else {
        uVar7 = param_2 + lVar19;
        if (((longlong)(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140a7d2d6;
        if (param_3 < 0x10) {
LAB_140a7d673:
          uVar8 = 0;
        }
        else {
          uVar12 = uVar7 & 0xf;
          if ((int)uVar12 != 0) {
            uVar12 = (ulonglong)(0x10 - (int)uVar12);
          }
          iVar5 = (int)uVar12;
          if (param_3 < iVar5 + 0x10U) goto LAB_140a7d673;
          uVar8 = 0;
          iVar9 = param_3 - (param_3 - iVar5 & 0xf);
          if (iVar5 != 0) {
            do {
              *(undefined1 *)(uVar8 + uVar7) = param_1[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar12);
          }
          if (((ulonglong)(param_1 + uVar12) & 0xf) == 0) {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar12);
              *(undefined1 (*) [16])(uVar12 + uVar7) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
          else {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar12));
              *(undefined1 (*) [16])(uVar12 + uVar7) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
        }
        for (; uVar8 < (ulonglong)(longlong)(int)param_3; uVar8 = uVar8 + 1) {
          *(undefined1 *)(uVar8 + uVar7) = param_1[uVar8];
        }
        uVar4 = uVar11 + param_3;
      }
      uVar11 = uVar4;
      lVar19 = (longlong)(int)uVar11;
      if (lVar17 < 5) {
        uVar4 = 4 - param_5;
        if ((param_6 & 0x80) == 0) goto LAB_140a7d3d0;
LAB_140a7d4d6:
        if ((int)uVar4 < 1) {
          return param_5;
        }
      }
      else {
        uVar11 = uVar11 + 4;
        *(undefined1 *)(lVar19 + param_2) = param_1[lVar17 + -4];
        *(undefined1 *)(lVar19 + 1 + param_2) = param_1[lVar17 + -3];
        *(undefined1 *)(lVar19 + 2 + param_2) = param_1[lVar17 + -2];
        uVar4 = 4 - param_5;
        *(undefined1 *)(lVar19 + 3 + param_2) = param_1[lVar17 + -1];
        lVar19 = (longlong)(int)uVar11;
        if ((param_6 & 0x80) == 0) {
          if ((int)uVar4 < 1) goto LAB_140a7d64b;
          goto LAB_140a7d3d9;
        }
        if ((int)uVar4 < 1) goto LAB_140a7d64b;
      }
      iVar5 = (int)lVar19;
      if (6 < (int)uVar4) {
        uVar7 = param_2 + lVar19;
        puVar2 = param_1 + lVar17;
        uVar12 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar12 <= (longlong)(uVar7 - (longlong)puVar2)) ||
           ((longlong)uVar12 <= (longlong)-(uVar7 - (longlong)puVar2))) {
          if ((longlong)uVar12 < 0x10) {
LAB_140a7d682:
            uVar6 = 0;
          }
          else {
            uVar8 = uVar7 & 0xf;
            if (uVar8 != 0) {
              uVar8 = 0x10 - uVar8;
            }
            if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7d682;
            uVar13 = 0;
            uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
            if (uVar8 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar8);
            }
            if (((ulonglong)(puVar2 + uVar8) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar8) + 8);
                *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(puVar2 + uVar8);
                ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar8));
                *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
          }
          for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
            *(undefined1 *)(uVar6 + uVar7) = puVar2[uVar6];
          }
          uVar11 = iVar5 + uVar4;
          goto LAB_140a7d641;
        }
      }
      iVar9 = 1;
      if (uVar4 >> 1 != 0) {
        uVar7 = 0;
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17];
          *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17 + 1];
          uVar7 = uVar12 + 1;
        } while (uVar7 < uVar4 >> 1);
        uVar11 = iVar5 + (int)uVar7 * 2;
        iVar9 = (int)uVar12 + 2 + (int)uVar7;
      }
      if (iVar9 - 1U < uVar4) {
        uVar11 = iVar5 + iVar9;
        *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) =
             param_1[(longlong)iVar9 + -1 + lVar17];
      }
    }
LAB_140a7d641:
    if (lVar17 < 5) {
      return param_5;
    }
LAB_140a7d64b:
    return uVar11 - (8 - param_5);
  }
  if (uVar4 == 1) {
    uVar3 = *param_1;
    uVar4 = 0;
    uVar11 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (0xf < (longlong)uVar7) {
          uVar12 = param_2 & 0xf;
          if (uVar12 != 0) {
            uVar12 = 0x10 - uVar12;
          }
          if ((longlong)(uVar12 + 0x10) <= (longlong)uVar7) {
            uVar8 = 0;
            uVar4 = param_5 - (param_5 - (int)uVar12 & 0xf);
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(uVar8 + param_2) = uVar3;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar12);
            }
            uVar23 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
            in_XMM0._0_8_ = CONCAT44(uVar23,uVar23);
            in_XMM0._8_8_ = in_XMM0._0_8_;
            do {
              *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar4);
          }
        }
        uVar12 = (ulonglong)(int)uVar4;
        uVar11 = uVar4;
        if (uVar12 < uVar7) {
          do {
            *(undefined1 *)(uVar12 + param_2) = uVar3;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar7);
          uVar11 = (uint)uVar12;
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar7 < 0x10) {
LAB_140a7cf05:
            uVar8 = 0;
          }
          else {
            uVar12 = param_2 & 0xf;
            if (uVar12 != 0) {
              uVar12 = 0x10 - uVar12;
            }
            if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7cf05;
            uVar6 = 0;
            uVar8 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar12 & 0xf));
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - uVar7];
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar12);
            }
            if (((ulonglong)(param_1 + (uVar12 - uVar7)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar12 - uVar7));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar12 - uVar7)));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
          }
          uVar11 = param_5;
          if (uVar8 < uVar7) {
            do {
              *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 - uVar7];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          goto LAB_140a7caa0;
        }
      }
      uVar10 = 1;
      uVar7 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + uVar12 * 2) = param_1[uVar12 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar12 * 2) =
               param_1[uVar12 * 2 + (1 - (longlong)(int)param_5)];
          uVar7 = uVar12 + 1;
        } while (uVar7 < param_5 >> 1);
        uVar4 = (int)uVar7 * 2;
        uVar10 = (int)uVar12 + 2 + (int)uVar7;
      }
      uVar11 = uVar4;
      if (uVar10 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
             param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
        uVar11 = uVar10;
      }
    }
LAB_140a7caa0:
    lVar19 = (longlong)(int)uVar11;
    if (4 < param_3) {
      param_3 = 4;
    }
    if (0 < lVar17) {
      if (param_3 < 7) {
LAB_140a7cbb6:
        iVar5 = 1;
        uVar4 = uVar11;
        if (param_3 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2];
            *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
            uVar7 = uVar12 + 1;
          } while (uVar7 < param_3 >> 1);
          uVar4 = uVar11 + (int)uVar7 * 2;
          iVar5 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar5 - 1U < param_3) {
          *(undefined1 *)((longlong)iVar5 + -1 + param_2 + lVar19) = param_1[(longlong)iVar5 + -1];
          uVar4 = uVar11 + iVar5;
        }
      }
      else {
        uVar7 = param_2 + lVar19;
        if (((longlong)(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140a7cbb6;
        if (param_3 < 0x10) {
LAB_140a7cf0c:
          uVar8 = 0;
        }
        else {
          uVar12 = uVar7 & 0xf;
          if ((int)uVar12 != 0) {
            uVar12 = (ulonglong)(0x10 - (int)uVar12);
          }
          iVar5 = (int)uVar12;
          if (param_3 < iVar5 + 0x10U) goto LAB_140a7cf0c;
          uVar8 = 0;
          iVar9 = param_3 - (param_3 - iVar5 & 0xf);
          if (iVar5 != 0) {
            do {
              *(undefined1 *)(uVar8 + uVar7) = param_1[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar12);
          }
          if (((ulonglong)(param_1 + uVar12) & 0xf) == 0) {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar12);
              *(undefined1 (*) [16])(uVar12 + uVar7) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
          else {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar12));
              *(undefined1 (*) [16])(uVar12 + uVar7) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
        }
        for (; uVar8 < (ulonglong)(longlong)(int)param_3; uVar8 = uVar8 + 1) {
          *(undefined1 *)(uVar8 + uVar7) = param_1[uVar8];
        }
        uVar4 = uVar11 + param_3;
      }
      uVar11 = uVar4;
      lVar19 = (longlong)(int)uVar11;
      if (4 < lVar17) {
        uVar11 = uVar11 + 4;
        *(undefined1 *)(lVar19 + param_2) = param_1[lVar17 + -4];
        *(undefined1 *)(lVar19 + 1 + param_2) = param_1[lVar17 + -3];
        *(undefined1 *)(lVar19 + 2 + param_2) = param_1[lVar17 + -2];
        *(undefined1 *)(lVar19 + 3 + param_2) = param_1[lVar17 + -1];
        lVar19 = (longlong)(int)uVar11;
      }
    }
    param_1 = param_1 + lVar17;
    uVar3 = param_1[-1];
    uVar4 = -param_5 + 4;
    iVar5 = (int)lVar19;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar4 < 1) goto LAB_140a7cedd;
      if (6 < (int)uVar4) {
        uVar7 = param_2 + lVar19;
        uVar12 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar12 <= (longlong)(uVar7 - (longlong)param_1)) ||
           ((longlong)uVar12 <= (longlong)-(uVar7 - (longlong)param_1))) {
          if ((longlong)uVar12 < 0x10) {
LAB_140a7cf1a:
            uVar6 = 0;
          }
          else {
            uVar8 = uVar7 & 0xf;
            if (uVar8 != 0) {
              uVar8 = 0x10 - uVar8;
            }
            if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7cf1a;
            uVar13 = 0;
            uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
            if (uVar8 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar8);
            }
            if (((ulonglong)(param_1 + uVar8) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(param_1 + uVar8) + 8);
                *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(param_1 + uVar8);
                ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar8));
                *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
          }
          for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
            *(undefined1 *)(uVar6 + uVar7) = param_1[uVar6];
          }
          uVar11 = iVar5 + 4 + -param_5;
          goto LAB_140a7cedd;
        }
      }
      iVar9 = 1;
      if (uVar4 >> 1 != 0) {
        uVar7 = 0;
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2];
          *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
          uVar7 = uVar12 + 1;
        } while (uVar7 < uVar4 >> 1);
        uVar11 = iVar5 + (int)uVar7 * 2;
        iVar9 = (int)uVar12 + 2 + (int)uVar7;
      }
      if (iVar9 - 1U < uVar4) {
        uVar11 = iVar5 + iVar9;
        *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) = param_1[(longlong)iVar9 + -1];
      }
      goto LAB_140a7cedd;
    }
    if ((int)uVar4 < 1) goto LAB_140a7cedd;
    uVar7 = 4 - (longlong)(int)param_5;
    if ((longlong)uVar7 < 0x10) {
LAB_140a7cf13:
      iVar9 = 0;
    }
    else {
      uVar12 = param_2 + lVar19;
      uVar8 = uVar12 & 0xf;
      if (uVar8 != 0) {
        uVar8 = 0x10 - uVar8;
      }
      if ((longlong)uVar7 < (longlong)(uVar8 + 0x10)) goto LAB_140a7cf13;
      iVar9 = (int)uVar7 - ((int)uVar7 - (int)uVar8 & 0xfU);
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          *(undefined1 *)(uVar6 + uVar12) = uVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      uVar23 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
      uVar24 = CONCAT44(uVar23,uVar23);
      do {
        *(undefined8 *)(uVar8 + uVar12) = uVar24;
        ((undefined8 *)(uVar8 + uVar12))[1] = uVar24;
        uVar8 = uVar8 + 0x10;
      } while (uVar8 < (ulonglong)(longlong)iVar9);
      uVar11 = iVar5 + iVar9;
    }
    uVar12 = (ulonglong)iVar9;
    if (uVar12 < uVar7) {
      do {
        *(undefined1 *)(uVar12 + param_2 + lVar19) = uVar3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
      uVar11 = (int)uVar12 + iVar5;
    }
LAB_140a7cedd:
    if (4 < lVar17) {
      param_5 = uVar11 - (8 - param_5);
    }
    return param_5;
  }
  if (uVar4 == 2) {
    uVar7 = (ulonglong)param_3;
    if (4 < param_3) {
      uVar7 = 4;
    }
    uVar4 = param_5;
    if (lVar17 < 1) {
      lVar19 = (longlong)(int)param_5;
LAB_140a7bdf9:
      if ((param_6 & 0x40) == 0) {
        if (-1 < (int)(param_5 - 1)) {
          if (6 < (int)param_5) {
            lVar21 = (longlong)(int)param_5;
            lVar14 = lVar17 + param_2 + lVar21;
            lVar20 = -1 - (lVar17 + -1);
            if ((lVar21 < lVar20) || (-lVar21 != lVar20 && lVar21 <= -lVar20)) {
              uVar7 = 0xffffffffffffffff - (-1 - lVar21);
              if ((longlong)uVar7 < 0x10) {
LAB_140a7c7fb:
                uVar8 = 0;
              }
              else {
                uVar12 = param_2 & 0xf;
                if (uVar12 != 0) {
                  uVar12 = 0x10 - uVar12;
                }
                if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7c7fb;
                uVar6 = 0;
                lVar20 = lVar14 - lVar21;
                uVar8 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar12 & 0xfU));
                if (uVar12 != 0) {
                  do {
                    *(undefined1 *)(uVar6 + param_2) = *(undefined1 *)(uVar6 + lVar20);
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < uVar12);
                }
                if ((lVar20 + uVar12 & 0xf) == 0) {
                  do {
                    in_XMM0 = *(undefined1 (*) [16])(uVar12 + lVar20);
                    *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                    uVar12 = uVar12 + 0x10;
                  } while (uVar12 < uVar8);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar12 + lVar20));
                    *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                    uVar12 = uVar12 + 0x10;
                  } while (uVar12 < uVar8);
                }
              }
              if (uVar8 < uVar7) {
                do {
                  *(undefined1 *)(uVar8 + param_2) = *(undefined1 *)(uVar8 + (lVar14 - lVar21));
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7);
              }
              goto LAB_140a7c165;
            }
          }
          iVar5 = 1;
          lVar14 = 0;
          if (param_5 >> 1 != 0) {
            lVar20 = (longlong)(int)param_5 + param_2;
            uVar7 = 0;
            do {
              uVar12 = uVar7;
              uVar7 = uVar12 + 1;
              *(undefined1 *)(lVar14 + -1 + lVar20) = *(undefined1 *)(lVar14 + -1 + lVar17 + lVar20)
              ;
              *(undefined1 *)(lVar14 + -2 + lVar20) = *(undefined1 *)(lVar14 + -2 + lVar17 + lVar20)
              ;
              lVar14 = lVar14 + -2;
            } while (uVar7 < param_5 >> 1);
            iVar5 = (int)uVar12 + 2 + (int)uVar7;
          }
          if (iVar5 - 1U < param_5) {
            *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar5) =
                 *(undefined1 *)((lVar17 + (longlong)(int)param_5 + param_2) - (longlong)iVar5);
          }
        }
      }
      else {
        if ((int)(param_5 - 1) < 0) goto LAB_140a7c165;
        if (6 < (int)param_5) {
          lVar20 = (longlong)(int)param_5;
          lVar14 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + -1);
          if ((lVar20 < lVar14) || (-lVar20 != lVar14 && lVar20 <= -lVar14)) {
            uVar7 = 0xffffffffffffffff - (-1 - lVar20);
            if ((longlong)uVar7 < 0x10) {
LAB_140a7c803:
              uVar8 = 0;
            }
            else {
              uVar12 = param_2 & 0xf;
              if (uVar12 != 0) {
                uVar12 = 0x10 - uVar12;
              }
              if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7c803;
              uVar6 = 0;
              uVar8 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar12 & 0xfU));
              if (uVar12 != 0) {
                do {
                  *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - lVar20];
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar12);
              }
              if (((ulonglong)(param_1 + (uVar12 - lVar20)) & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar12 - lVar20));
                  *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                  uVar12 = uVar12 + 0x10;
                } while (uVar12 < uVar8);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar12 - lVar20)));
                  *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                  uVar12 = uVar12 + 0x10;
                } while (uVar12 < uVar8);
              }
            }
            if (uVar8 < uVar7) {
              do {
                *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 - lVar20];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar7);
            }
            goto LAB_140a7c165;
          }
        }
        iVar5 = 1;
        lVar14 = 0;
        if (param_5 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            uVar7 = uVar12 + 1;
            *(undefined1 *)(lVar14 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar14 + -1];
            *(undefined1 *)(lVar14 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar14 + -2];
            lVar14 = lVar14 + -2;
          } while (uVar7 < param_5 >> 1);
          iVar5 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar5 - 1U < param_5) goto LAB_140a7c14d;
      }
    }
    else {
      uVar11 = (uint)uVar7;
      if (uVar11 < 7) {
LAB_140a7ba58:
        iVar5 = 1;
        if ((int)(uVar7 >> 1) != 0) {
          uVar12 = 0;
          do {
            uVar8 = uVar12;
            *(undefined1 *)((longlong)(int)param_5 + param_2 + uVar8 * 2) = param_1[uVar8 * 2];
            *(undefined1 *)((longlong)(int)param_5 + param_2 + 1 + uVar8 * 2) =
                 param_1[uVar8 * 2 + 1];
            uVar12 = uVar8 + 1;
          } while (uVar12 < uVar7 >> 1);
          uVar4 = param_5 + (int)uVar12 * 2;
          iVar5 = (int)uVar8 + 2 + (int)uVar12;
        }
        if (iVar5 - 1U < uVar11) {
          uVar4 = param_5 + iVar5;
          *(undefined1 *)((longlong)iVar5 + -1 + (longlong)(int)param_5 + param_2) =
               param_1[(longlong)iVar5 + -1];
        }
      }
      else {
        uVar12 = (longlong)(int)param_5 + param_2;
        if (((longlong)(uVar12 - (longlong)param_1) < (longlong)uVar7) &&
           ((longlong)-(uVar12 - (longlong)param_1) < (longlong)uVar7)) goto LAB_140a7ba58;
        if (uVar11 < 0x10) {
LAB_140a7c7e5:
          uVar8 = 0;
        }
        else {
          uVar7 = uVar12 & 0xf;
          if ((int)uVar7 != 0) {
            uVar7 = (ulonglong)(0x10 - (int)uVar7);
          }
          iVar5 = (int)uVar7;
          if (uVar11 < iVar5 + 0x10U) goto LAB_140a7c7e5;
          uVar8 = 0;
          iVar9 = uVar11 - (uVar11 - iVar5 & 0xf);
          if (iVar5 != 0) {
            do {
              *(undefined1 *)(uVar8 + uVar12) = param_1[uVar8];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          if (((ulonglong)(param_1 + uVar7) & 0xf) == 0) {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar7);
              *(undefined1 (*) [16])(uVar7 + uVar12) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar8);
          }
          else {
            uVar8 = (ulonglong)iVar9;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar7));
              *(undefined1 (*) [16])(uVar7 + uVar12) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar8);
          }
        }
        for (; uVar8 < (ulonglong)(longlong)(int)uVar11; uVar8 = uVar8 + 1) {
          *(undefined1 *)(uVar8 + uVar12) = param_1[uVar8];
        }
        uVar4 = param_5 + uVar11;
      }
      lVar19 = (longlong)(int)uVar4;
      if (lVar17 < 5) goto LAB_140a7bdf9;
      if ((param_6 & 0x40) == 0) {
        if ((int)(param_5 - 1) < 0) goto LAB_140a7c165;
        if (6 < (int)param_5) {
          lVar20 = (longlong)(int)param_5;
          lVar14 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + lVar17 + -1);
          if ((lVar20 < lVar14) || (-lVar20 != lVar14 && lVar20 <= -lVar14)) {
            uVar7 = 0xffffffffffffffff - (-1 - lVar20);
            if ((longlong)uVar7 < 0x10) {
LAB_140a7c7ec:
              uVar8 = 0;
            }
            else {
              uVar12 = param_2 & 0xf;
              if (uVar12 != 0) {
                uVar12 = 0x10 - uVar12;
              }
              if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7c7ec;
              uVar6 = 0;
              lVar14 = lVar17 - lVar20;
              uVar8 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar12 & 0xfU));
              if (uVar12 != 0) {
                do {
                  *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 + lVar14];
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar12);
              }
              if (((ulonglong)(param_1 + uVar12 + lVar14) & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar12 + lVar14);
                  *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                  uVar12 = uVar12 + 0x10;
                } while (uVar12 < uVar8);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar12 + lVar14));
                  *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                  uVar12 = uVar12 + 0x10;
                } while (uVar12 < uVar8);
              }
            }
            if (uVar8 < uVar7) {
              do {
                *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 + (lVar17 - lVar20)];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar7);
            }
            goto LAB_140a7c165;
          }
        }
        iVar5 = 1;
        lVar14 = 0;
        if (param_5 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            uVar7 = uVar12 + 1;
            *(undefined1 *)(lVar14 + -1 + (longlong)(int)param_5 + param_2) =
                 param_1[lVar14 + -1 + lVar17];
            *(undefined1 *)(lVar14 + -2 + (longlong)(int)param_5 + param_2) =
                 param_1[lVar14 + -2 + lVar17];
            lVar14 = lVar14 + -2;
          } while (uVar7 < param_5 >> 1);
          iVar5 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar5 - 1U < param_5) {
          *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar5) =
               param_1[lVar17 - iVar5];
        }
        goto LAB_140a7c165;
      }
      if ((int)(param_5 - 1) < 0) goto LAB_140a7c165;
      if (6 < (int)param_5) {
        lVar20 = (longlong)(int)param_5;
        lVar14 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + -1);
        if ((lVar20 < lVar14) || (-lVar20 != lVar14 && lVar20 <= -lVar14)) {
          uVar7 = 0xffffffffffffffff - (-1 - lVar20);
          if ((longlong)uVar7 < 0x10) {
LAB_140a7c7f4:
            uVar8 = 0;
          }
          else {
            uVar12 = param_2 & 0xf;
            if (uVar12 != 0) {
              uVar12 = 0x10 - uVar12;
            }
            if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7c7f4;
            uVar6 = 0;
            uVar8 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar12 & 0xfU));
            if (uVar12 != 0) {
              do {
                *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - lVar20];
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar12);
            }
            if (((ulonglong)(param_1 + (uVar12 - lVar20)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar12 - lVar20));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar12 - lVar20)));
                *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
                uVar12 = uVar12 + 0x10;
              } while (uVar12 < uVar8);
            }
          }
          if (uVar8 < uVar7) {
            do {
              *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 - lVar20];
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
          }
          goto LAB_140a7c165;
        }
      }
      iVar5 = 1;
      lVar14 = 0;
      if (param_5 >> 1 != 0) {
        uVar7 = 0;
        do {
          uVar12 = uVar7;
          uVar7 = uVar12 + 1;
          *(undefined1 *)(lVar14 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar14 + -1];
          *(undefined1 *)(lVar14 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar14 + -2];
          lVar14 = lVar14 + -2;
        } while (uVar7 < param_5 >> 1);
        iVar5 = (int)uVar12 + 2 + (int)uVar7;
      }
      if (param_5 <= iVar5 - 1U) goto LAB_140a7c165;
LAB_140a7c14d:
      *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar5) =
           param_1[-(longlong)iVar5];
    }
LAB_140a7c165:
    iVar5 = (int)lVar19;
    if (lVar17 < 5) {
      iVar9 = -param_5;
      uVar11 = iVar9 + 4;
      if ((param_6 & 0x80) != 0) {
        if ((int)uVar11 < 1) goto LAB_140a7c7c4;
        if (6 < (int)uVar11) {
          uVar7 = param_2 + lVar19;
          puVar2 = param_1 + lVar17;
          uVar12 = 4 - (longlong)(int)param_5;
          if (((longlong)uVar12 <= (longlong)(uVar7 - (longlong)puVar2)) ||
             ((longlong)uVar12 <= (longlong)-(uVar7 - (longlong)puVar2))) {
            if ((longlong)uVar12 < 0x10) {
LAB_140a7c820:
              uVar6 = 0;
            }
            else {
              uVar8 = uVar7 & 0xf;
              if (uVar8 != 0) {
                uVar8 = 0x10 - uVar8;
              }
              if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7c820;
              uVar13 = 0;
              uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
              if (uVar8 != 0) {
                do {
                  *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar8);
              }
              if (((ulonglong)(puVar2 + uVar8) & 0xf) == 0) {
                do {
                  uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar8) + 8);
                  *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(puVar2 + uVar8);
                  ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar6);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar8));
                  *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar6);
              }
            }
            for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
              *(undefined1 *)(uVar6 + uVar7) = puVar2[uVar6];
            }
            uVar4 = iVar5 + 4 + iVar9;
            goto LAB_140a7c7c4;
          }
        }
        iVar9 = 1;
        if (uVar11 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17];
            *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17 + 1];
            uVar7 = uVar12 + 1;
          } while (uVar7 < uVar11 >> 1);
          uVar4 = iVar5 + (int)uVar7 * 2;
          iVar9 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar9 - 1U < uVar11) {
          uVar4 = iVar5 + iVar9;
          *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) =
               param_1[(longlong)iVar9 + -1 + lVar17];
        }
        goto LAB_140a7c7c4;
      }
      if ((int)uVar11 < 1) goto LAB_140a7c7c4;
      if (6 < (int)uVar11) {
        uVar7 = param_2 + lVar19;
        lVar14 = (param_2 - lVar17) + lVar19;
        uVar12 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar12 <= (longlong)(uVar7 - lVar14)) ||
           ((longlong)uVar12 <= (longlong)-(uVar7 - lVar14))) {
          if ((longlong)uVar12 < 0x10) {
LAB_140a7c818:
            uVar6 = 0;
          }
          else {
            uVar8 = uVar7 & 0xf;
            if (uVar8 != 0) {
              uVar8 = 0x10 - uVar8;
            }
            if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7c818;
            uVar13 = 0;
            uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
            if (uVar8 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = *(undefined1 *)(uVar13 + lVar14);
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar8);
            }
            if ((lVar14 + uVar8 & 0xf) == 0) {
              do {
                uVar24 = ((undefined8 *)(uVar8 + lVar14))[1];
                *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(uVar8 + lVar14);
                ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar8 + lVar14));
                *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
          }
          for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
            *(undefined1 *)(uVar6 + uVar7) = *(undefined1 *)(uVar6 + lVar14);
          }
          uVar4 = iVar5 + 4 + iVar9;
          goto LAB_140a7c7c4;
        }
      }
      iVar9 = 1;
      if (uVar11 >> 1 != 0) {
        lVar14 = (param_2 - lVar17) + lVar19;
        uVar7 = 0;
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = *(undefined1 *)(lVar14 + uVar12 * 2);
          *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) =
               *(undefined1 *)(lVar14 + 1 + uVar12 * 2);
          uVar7 = uVar12 + 1;
        } while (uVar7 < uVar11 >> 1);
        uVar4 = iVar5 + (int)uVar7 * 2;
        iVar9 = (int)uVar12 + 2 + (int)uVar7;
      }
      if (iVar9 - 1U < uVar11) {
        uVar4 = iVar5 + iVar9;
        *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) =
             *(undefined1 *)((longlong)iVar9 + -1 + (param_2 - lVar17) + lVar19);
      }
      goto LAB_140a7c7c4;
    }
    puVar2 = param_1 + lVar17;
    *(undefined1 *)(lVar19 + param_2) = puVar2[-4];
    *(undefined1 *)(lVar19 + 1 + param_2) = puVar2[-3];
    iVar9 = -param_5;
    uVar11 = iVar9 + 4;
    *(undefined1 *)(lVar19 + 2 + param_2) = puVar2[-2];
    *(undefined1 *)(lVar19 + 3 + param_2) = puVar2[-1];
    uVar10 = iVar5 + 4;
    uVar4 = uVar10;
    if ((param_6 & 0x80) != 0) {
      lVar19 = (longlong)(int)uVar10;
      if ((int)uVar11 < 1) goto LAB_140a7c7c4;
      if (6 < (int)uVar11) {
        uVar7 = param_2 + lVar19;
        uVar12 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar12 <= (longlong)(uVar7 - (longlong)puVar2)) ||
           ((longlong)uVar12 <= (longlong)-(uVar7 - (longlong)puVar2))) {
          if ((longlong)uVar12 < 0x10) {
LAB_140a7c811:
            uVar6 = 0;
          }
          else {
            uVar8 = uVar7 & 0xf;
            if (uVar8 != 0) {
              uVar8 = 0x10 - uVar8;
            }
            if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7c811;
            uVar13 = 0;
            uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
            if (uVar8 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar8);
            }
            if (((ulonglong)(puVar2 + uVar8) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar8) + 8);
                *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(puVar2 + uVar8);
                ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar8));
                *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uVar6);
            }
          }
          for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
            *(undefined1 *)(uVar6 + uVar7) = puVar2[uVar6];
          }
          uVar4 = iVar9 + 8 + iVar5;
          goto LAB_140a7c7c4;
        }
      }
      iVar9 = 1;
      if (uVar11 >> 1 != 0) {
        uVar7 = 0;
        do {
          uVar12 = uVar7;
          *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = puVar2[uVar12 * 2];
          *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = puVar2[uVar12 * 2 + 1];
          uVar7 = uVar12 + 1;
        } while (uVar7 < uVar11 >> 1);
        uVar4 = (int)uVar7 * 2 + 4 + iVar5;
        iVar9 = (int)uVar12 + 2 + (int)uVar7;
      }
      if (iVar9 - 1U < uVar11) {
        uVar4 = uVar10 + iVar9;
        *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) = puVar2[(longlong)iVar9 + -1];
      }
      goto LAB_140a7c7c4;
    }
    lVar19 = (longlong)(int)uVar10;
    if ((int)uVar11 < 1) goto LAB_140a7c7c4;
    if (6 < (int)uVar11) {
      uVar7 = param_2 + lVar19;
      uVar12 = 4 - (longlong)(int)param_5;
      if (((longlong)uVar12 <= (longlong)(uVar7 - (longlong)param_1)) ||
         ((longlong)uVar12 <= (longlong)-(uVar7 - (longlong)param_1))) {
        if ((longlong)uVar12 < 0x10) {
LAB_140a7c80a:
          uVar6 = 0;
        }
        else {
          uVar8 = uVar7 & 0xf;
          if (uVar8 != 0) {
            uVar8 = 0x10 - uVar8;
          }
          if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7c80a;
          uVar13 = 0;
          uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
          if (uVar8 != 0) {
            do {
              *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar8);
          }
          if (((ulonglong)(param_1 + uVar8) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)((longlong)(param_1 + uVar8) + 8);
              *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(param_1 + uVar8);
              ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
              uVar8 = uVar8 + 0x10;
            } while (uVar8 < uVar6);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar8));
              *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
              uVar8 = uVar8 + 0x10;
            } while (uVar8 < uVar6);
          }
        }
        for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar6 + uVar7) = param_1[uVar6];
        }
        uVar4 = iVar9 + 8 + iVar5;
        goto LAB_140a7c7c4;
      }
    }
    iVar9 = 1;
    if (uVar11 >> 1 != 0) {
      uVar7 = 0;
      do {
        uVar12 = uVar7;
        *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2];
        *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
        uVar7 = uVar12 + 1;
      } while (uVar7 < uVar11 >> 1);
      uVar4 = (int)uVar7 * 2 + 4 + iVar5;
      iVar9 = (int)uVar12 + 2 + (int)uVar7;
    }
    if (iVar9 - 1U < uVar11) {
      *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) = param_1[(longlong)iVar9 + -1];
      uVar4 = uVar10 + iVar9;
    }
LAB_140a7c7c4:
    if (4 < lVar17) {
      param_5 = uVar4 - (8 - param_5);
    }
    return param_5;
  }
  if (uVar4 == 3) {
    uVar7 = (ulonglong)(1 < (int)param_3);
    uVar4 = (uint)(1 < (int)param_3);
    uVar12 = 4;
    if (param_3 < 5) {
      uVar12 = (ulonglong)param_3;
    }
    lVar14 = (longlong)(int)param_5;
    lVar19 = lVar14;
    uVar11 = param_5;
    if (lVar17 < 1) {
LAB_140a7b2db:
      lVar20 = lVar14 + -1;
      if ((param_6 & 0x40) != 0) {
        if (-1 < lVar20) {
          uVar12 = uVar7;
          if ((longlong)uVar7 < lVar17) {
            do {
              while( true ) {
                *(undefined1 *)(lVar20 + param_2) = param_1[lVar20 - lVar14];
                lVar20 = lVar20 + -1;
                if ((longlong)(uVar12 + 1) < lVar17) break;
                do {
                  if (lVar20 < 0) goto LAB_140a7b21b;
LAB_140a7b909:
                  uVar12 = uVar7;
                } while (lVar17 <= (longlong)uVar7);
              }
              uVar12 = uVar12 + 1;
            } while (-1 < lVar20);
          }
          else {
            bVar22 = -1 < lVar20;
            if ((((bVar22) && (bVar22)) && (bVar22)) && (bVar22)) goto LAB_140a7b909;
          }
        }
        goto LAB_140a7b21b;
      }
      if ((param_6 & 0x80) == 0) {
        if (-1 < lVar20) {
          lVar21 = (longlong)(int)((int)lVar20 + uVar4) + 1;
          uVar12 = uVar7;
          if ((longlong)uVar7 < lVar17) {
            do {
              while( true ) {
                puVar2 = (undefined1 *)(param_2 + lVar21);
                lVar21 = lVar21 + 1;
                *(undefined1 *)(lVar20 + param_2) = *puVar2;
                lVar20 = lVar20 + -1;
                if ((longlong)(uVar12 + 1) < lVar17) break;
                do {
                  if (lVar20 < 0) goto LAB_140a7b349;
LAB_140a7b8c9:
                  lVar21 = (longlong)(int)((int)lVar20 + uVar4) + 1;
                  uVar12 = uVar7;
                } while (lVar17 <= (longlong)uVar7);
              }
              uVar12 = uVar12 + 1;
            } while (-1 < lVar20);
          }
          else if (-1 < lVar20) goto LAB_140a7b8c9;
        }
LAB_140a7b349:
        if (4 < lVar17) goto LAB_140a7b44a;
        goto LAB_140a7b353;
      }
      if (-1 < (int)(param_5 - 1)) {
        iVar5 = 1;
        lVar20 = 0;
        if (param_5 >> 1 != 0) {
          uVar12 = 0;
          do {
            uVar8 = uVar12;
            *(undefined1 *)(lVar20 + -1 + param_2 + lVar14) = param_1[uVar8 * 2 + 1];
            uVar12 = uVar8 + 1;
            *(undefined1 *)(lVar20 + -2 + param_2 + lVar14) = param_1[uVar8 * 2 + 2];
            lVar20 = lVar20 + -2;
          } while (uVar12 < param_5 >> 1);
          iVar5 = (int)uVar8 + 2 + (int)uVar12;
        }
        if (iVar5 - 1U < param_5) {
          *(undefined1 *)((param_2 + lVar14) - (longlong)iVar5) = param_1[iVar5];
        }
      }
      if (lVar17 < 5) goto LAB_140a7b6b0;
    }
    else {
      uVar10 = (uint)uVar12;
      if (uVar10 < 7) {
LAB_140a7aef7:
        iVar5 = 1;
        if ((int)(uVar12 >> 1) != 0) {
          uVar8 = 0;
          do {
            uVar6 = uVar8;
            *(undefined1 *)(param_2 + lVar14 + uVar6 * 2) = param_1[uVar6 * 2];
            *(undefined1 *)(param_2 + lVar14 + 1 + uVar6 * 2) = param_1[uVar6 * 2 + 1];
            uVar8 = uVar6 + 1;
          } while (uVar8 < uVar12 >> 1);
          uVar11 = param_5 + (int)uVar8 * 2;
          iVar5 = (int)uVar6 + 2 + (int)uVar8;
        }
        if (iVar5 - 1U < uVar10) {
          uVar11 = param_5 + iVar5;
          *(undefined1 *)((longlong)iVar5 + -1 + param_2 + lVar14) = param_1[(longlong)iVar5 + -1];
        }
      }
      else {
        uVar8 = param_2 + lVar14;
        if (((longlong)(uVar8 - (longlong)param_1) < (longlong)uVar12) &&
           ((longlong)-(uVar8 - (longlong)param_1) < (longlong)uVar12)) goto LAB_140a7aef7;
        if (uVar10 < 0x10) {
LAB_140a7b8a9:
          uVar6 = 0;
        }
        else {
          uVar12 = uVar8 & 0xf;
          if ((int)uVar12 != 0) {
            uVar12 = (ulonglong)(0x10 - (int)uVar12);
          }
          iVar5 = (int)uVar12;
          if (uVar10 < iVar5 + 0x10U) goto LAB_140a7b8a9;
          uVar6 = 0;
          iVar9 = uVar10 - (uVar10 - iVar5 & 0xf);
          if (iVar5 != 0) {
            do {
              *(undefined1 *)(uVar6 + uVar8) = param_1[uVar6];
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar12);
          }
          if (((ulonglong)(param_1 + uVar12) & 0xf) == 0) {
            uVar6 = (ulonglong)iVar9;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar12);
              *(undefined1 (*) [16])(uVar12 + uVar8) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar6);
          }
          else {
            uVar6 = (ulonglong)iVar9;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar12));
              *(undefined1 (*) [16])(uVar12 + uVar8) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar6);
          }
        }
        for (; uVar6 < (ulonglong)(longlong)(int)uVar10; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar6 + uVar8) = param_1[uVar6];
        }
        uVar11 = param_5 + uVar10;
      }
      lVar19 = (longlong)(int)uVar11;
      if (lVar17 < 5) goto LAB_140a7b2db;
      if ((param_6 & 0x40) == 0) {
        if (-1 < (int)(param_5 - 1)) {
          iVar5 = 1;
          lVar20 = 0;
          if (param_5 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar8 = uVar12;
              *(undefined1 *)(lVar20 + -1 + param_2 + lVar14) = param_1[uVar8 * 2 + uVar7];
              uVar12 = uVar8 + 1;
              *(undefined1 *)(lVar20 + -2 + param_2 + lVar14) = param_1[uVar8 * 2 + uVar7 + 1];
              lVar20 = lVar20 + -2;
            } while (uVar12 < param_5 >> 1);
            iVar5 = (int)uVar8 + 2 + (int)uVar12;
          }
          if (iVar5 - 1U < param_5) {
            *(undefined1 *)((param_2 + lVar14) - (longlong)iVar5) =
                 param_1[(longlong)iVar5 + -1 + uVar7];
          }
        }
      }
      else if (-1 < (int)(param_5 - 1)) {
        if (((int)param_5 < 7) ||
           ((lVar20 = ((param_2 - 1) + lVar14) - (longlong)(param_1 + -1), lVar20 <= lVar14 &&
            (-lVar14 == lVar20 || -lVar20 < lVar14)))) {
          iVar5 = 1;
          lVar20 = 0;
          if (param_5 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar8 = uVar12;
              uVar12 = uVar8 + 1;
              *(undefined1 *)(lVar20 + -1 + param_2 + lVar14) = param_1[lVar20 + -1];
              *(undefined1 *)(lVar20 + -2 + param_2 + lVar14) = param_1[lVar20 + -2];
              lVar20 = lVar20 + -2;
            } while (uVar12 < param_5 >> 1);
            iVar5 = (int)uVar8 + 2 + (int)uVar12;
          }
          if (iVar5 - 1U < param_5) {
            *(undefined1 *)((param_2 + lVar14) - (longlong)iVar5) = param_1[-(longlong)iVar5];
          }
        }
        else {
          uVar12 = 0xffffffffffffffff - (-1 - lVar14);
          if ((longlong)uVar12 < 0x10) {
LAB_140a7b8b0:
            uStack_50 = 0;
          }
          else {
            uVar8 = param_2 & 0xf;
            if (uVar8 != 0) {
              uVar8 = 0x10 - uVar8;
            }
            if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7b8b0;
            uStack_50 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
            if (uVar8 != 0) {
              uVar6 = 0;
              do {
                *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - lVar14];
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar8);
            }
            if (((ulonglong)(param_1 + (uVar8 - lVar14)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar8 - lVar14));
                *(undefined1 (*) [16])(uVar8 + param_2) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uStack_50);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar8 - lVar14)));
                *(undefined1 (*) [16])(uVar8 + param_2) = in_XMM0;
                uVar8 = uVar8 + 0x10;
              } while (uVar8 < uStack_50);
            }
          }
          if (uStack_50 < uVar12) {
            do {
              *(undefined1 *)(uStack_50 + param_2) = param_1[uStack_50 - lVar14];
              uStack_50 = uStack_50 + 1;
            } while (uStack_50 < uVar12);
          }
        }
      }
LAB_140a7b21b:
      if (lVar17 < 5) {
        if ((param_6 & 0x80) == 0) {
          if ((param_6 & 0x40) != 0) {
            uVar4 = 4 - param_5;
            if (0 < (int)uVar4) {
              iVar5 = 1;
              lVar14 = 0;
              if (uVar4 >> 1 != 0) {
                uVar7 = 0;
                do {
                  uVar12 = uVar7;
                  *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[lVar14 + -2 + lVar17];
                  lVar20 = lVar14 + -3;
                  lVar14 = lVar14 + -2;
                  *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[lVar20 + lVar17];
                  uVar7 = uVar12 + 1;
                } while (uVar7 < uVar4 >> 1);
                uVar11 = (int)lVar19 + (int)uVar7 * 2;
                iVar5 = (int)uVar12 + 2 + (int)uVar7;
              }
              if (iVar5 - 1U < uVar4) {
                *(undefined1 *)((longlong)iVar5 + -1 + param_2 + lVar19) =
                     param_1[(lVar17 - iVar5) + -1];
                uVar11 = (int)lVar19 + iVar5;
              }
            }
            goto LAB_140a7b842;
          }
LAB_140a7b353:
          iVar9 = param_3 + 4;
          iVar18 = 4 - param_5;
          iVar5 = ((int)param_3 < 2) - 1;
          lVar19 = (lVar17 + 4) - (longlong)iVar18;
          iVar15 = ((param_3 + ((int)param_3 < 2)) - iVar18) + 2;
          if (lVar19 < iVar9) {
            iVar16 = iVar5;
            do {
              lVar14 = (longlong)iVar15;
              iVar15 = iVar15 + iVar5;
              *(undefined1 *)(lVar19 + param_2) = *(undefined1 *)(lVar14 + param_2);
              if ((iVar9 - iVar18 <= iVar15) || (iVar15 < (int)param_5)) {
                iVar1 = iVar5 + iVar16;
                iVar5 = -iVar5;
                iVar16 = -iVar16;
                iVar15 = iVar15 - iVar1;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < iVar9);
          }
          goto LAB_140a7b842;
        }
LAB_140a7b6b0:
        uVar4 = -param_5 + 4;
        if ((int)uVar4 < 1) goto LAB_140a7b842;
        iVar5 = (int)lVar19;
        if (6 < (int)uVar4) {
          uVar7 = param_2 + lVar19;
          puVar2 = param_1 + lVar17;
          if ((4 - lVar14 <= (longlong)(uVar7 - (longlong)puVar2)) ||
             (4 - lVar14 <= (longlong)-(uVar7 - (longlong)puVar2))) {
            uVar12 = 4 - lVar14;
            if ((longlong)uVar12 < 0x10) {
LAB_140a7b8f4:
              uVar6 = 0;
            }
            else {
              uVar8 = uVar7 & 0xf;
              if (uVar8 != 0) {
                uVar8 = 0x10 - uVar8;
              }
              if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7b8f4;
              uVar13 = 0;
              uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
              if (uVar8 != 0) {
                do {
                  *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar8);
              }
              if (((ulonglong)(puVar2 + uVar8) & 0xf) == 0) {
                do {
                  uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar8) + 8);
                  *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(puVar2 + uVar8);
                  ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar6);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar8));
                  *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
                  uVar8 = uVar8 + 0x10;
                } while (uVar8 < uVar6);
              }
            }
            for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
              *(undefined1 *)(uVar6 + uVar7) = puVar2[uVar6];
            }
            uVar11 = iVar5 + 4 + -param_5;
            goto LAB_140a7b842;
          }
        }
        iVar9 = 1;
        if (uVar4 >> 1 != 0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17];
            *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17 + 1];
            uVar7 = uVar12 + 1;
          } while (uVar7 < uVar4 >> 1);
          uVar11 = iVar5 + (int)uVar7 * 2;
          iVar9 = (int)uVar12 + 2 + (int)uVar7;
        }
        if (iVar9 - 1U < uVar4) {
          *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) =
               param_1[(longlong)iVar9 + -1 + lVar17];
          uVar11 = iVar5 + iVar9;
        }
        goto LAB_140a7b842;
      }
    }
LAB_140a7b44a:
    param_1 = param_1 + lVar17;
    *(undefined1 *)(lVar19 + param_2) = param_1[-4];
    *(undefined1 *)(lVar19 + 1 + param_2) = param_1[-3];
    *(undefined1 *)(lVar19 + 2 + param_2) = param_1[-2];
    uVar4 = -param_5 + 4;
    *(undefined1 *)(lVar19 + 3 + param_2) = param_1[-1];
    iVar5 = (int)lVar19;
    uVar10 = iVar5 + 4;
    uVar11 = uVar10;
    if ((param_6 & 0x80) == 0) {
      if (0 < (int)uVar4) {
        iVar9 = 1;
        lVar19 = 0;
        if (uVar4 >> 1 != 0) {
          uVar12 = 0;
          do {
            uVar8 = uVar12;
            *(undefined1 *)((longlong)(int)uVar10 + param_2 + uVar8 * 2) =
                 param_1[(lVar19 + -1) - uVar7];
            lVar14 = lVar19 + -2;
            lVar19 = lVar19 + -2;
            *(undefined1 *)((longlong)(int)uVar10 + param_2 + 1 + uVar8 * 2) =
                 param_1[lVar14 - uVar7];
            uVar12 = uVar8 + 1;
          } while (uVar12 < uVar4 >> 1);
          uVar11 = (int)uVar12 * 2 + 4 + iVar5;
          iVar9 = (int)uVar8 + 2 + (int)uVar12;
        }
        if (iVar9 - 1U < uVar4) {
          *(undefined1 *)((longlong)iVar9 + -1 + param_2 + (longlong)(int)uVar10) =
               param_1[-(longlong)iVar9 - uVar7];
          uVar11 = iVar9 + uVar10;
        }
      }
      goto LAB_140a7b842;
    }
    lVar19 = (longlong)(int)uVar10;
    if ((int)uVar4 < 1) goto LAB_140a7b842;
    if (6 < (int)uVar4) {
      uVar7 = param_2 + lVar19;
      if ((4 - lVar14 <= (longlong)(uVar7 - (longlong)param_1)) ||
         (4 - lVar14 <= (longlong)-(uVar7 - (longlong)param_1))) {
        uVar12 = 4 - lVar14;
        if ((longlong)uVar12 < 0x10) {
LAB_140a7b8ed:
          uVar6 = 0;
        }
        else {
          uVar8 = uVar7 & 0xf;
          if (uVar8 != 0) {
            uVar8 = 0x10 - uVar8;
          }
          if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7b8ed;
          uVar13 = 0;
          uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
          if (uVar8 != 0) {
            do {
              *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar8);
          }
          if (((ulonglong)(param_1 + uVar8) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)((longlong)(param_1 + uVar8) + 8);
              *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(param_1 + uVar8);
              ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
              uVar8 = uVar8 + 0x10;
            } while (uVar8 < uVar6);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar8));
              *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
              uVar8 = uVar8 + 0x10;
            } while (uVar8 < uVar6);
          }
        }
        for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar6 + uVar7) = param_1[uVar6];
        }
        uVar11 = -param_5 + 8 + iVar5;
        goto LAB_140a7b842;
      }
    }
    iVar9 = 1;
    if (uVar4 >> 1 != 0) {
      uVar7 = 0;
      do {
        uVar12 = uVar7;
        *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2];
        *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
        uVar7 = uVar12 + 1;
      } while (uVar7 < uVar4 >> 1);
      uVar11 = (int)uVar7 * 2 + 4 + iVar5;
      iVar9 = (int)uVar12 + 2 + (int)uVar7;
    }
    if (iVar9 - 1U < uVar4) {
      *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) = param_1[(longlong)iVar9 + -1];
      uVar11 = uVar10 + iVar9;
    }
LAB_140a7b842:
    if (4 < lVar17) {
      param_5 = uVar11 - (8 - param_5);
    }
    return param_5;
  }
  if ((param_6 & 0xf0) != 0xf0) {
    return 0;
  }
  uVar4 = 0;
  uVar11 = 0;
  if (0 < (int)param_5) {
    if (6 < (int)param_5) {
      uVar7 = (ulonglong)(int)param_5;
      if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
         ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
        if ((longlong)uVar7 < 0x10) {
LAB_140a7ada6:
          uVar8 = 0;
        }
        else {
          uVar12 = param_2 & 0xf;
          if (uVar12 != 0) {
            uVar12 = 0x10 - uVar12;
          }
          if ((longlong)uVar7 < (longlong)(uVar12 + 0x10)) goto LAB_140a7ada6;
          uVar6 = 0;
          uVar8 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar12 & 0xf));
          if (uVar12 != 0) {
            do {
              *(undefined1 *)(uVar6 + param_2) = param_1[uVar6 - uVar7];
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar12);
          }
          if (((ulonglong)(param_1 + (uVar12 - uVar7)) & 0xf) == 0) {
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar12 - uVar7));
              *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar12 - uVar7)));
              *(undefined1 (*) [16])(uVar12 + param_2) = in_XMM0;
              uVar12 = uVar12 + 0x10;
            } while (uVar12 < uVar8);
          }
        }
        uVar11 = param_5;
        if (uVar8 < uVar7) {
          do {
            *(undefined1 *)(uVar8 + param_2) = param_1[uVar8 - uVar7];
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        goto LAB_140a7aa20;
      }
    }
    uVar10 = 1;
    uVar7 = 0;
    if (param_5 >> 1 != 0) {
      do {
        uVar12 = uVar7;
        *(undefined1 *)(param_2 + uVar12 * 2) = param_1[uVar12 * 2 - (longlong)(int)param_5];
        *(undefined1 *)(param_2 + 1 + uVar12 * 2) =
             param_1[uVar12 * 2 + (1 - (longlong)(int)param_5)];
        uVar7 = uVar12 + 1;
      } while (uVar7 < param_5 >> 1);
      uVar4 = (int)uVar7 * 2;
      uVar10 = (int)uVar12 + 2 + (int)uVar7;
    }
    uVar11 = uVar4;
    if (uVar10 - 1 < param_5) {
      *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
           param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
      uVar11 = uVar10;
    }
  }
LAB_140a7aa20:
  lVar19 = (longlong)(int)uVar11;
  uVar7 = (ulonglong)param_3;
  if (4 < param_3) {
    uVar7 = 4;
  }
  if (lVar17 < 1) {
LAB_140a7abe6:
    uVar4 = 4 - param_5;
    if ((int)uVar4 < 1) {
      return param_5;
    }
  }
  else {
    uVar4 = (uint)uVar7;
    if (uVar4 < 7) {
LAB_140a7ab37:
      iVar5 = 1;
      uVar10 = uVar11;
      if ((int)(uVar7 >> 1) != 0) {
        uVar12 = 0;
        do {
          uVar8 = uVar12;
          *(undefined1 *)(param_2 + lVar19 + uVar8 * 2) = param_1[uVar8 * 2];
          *(undefined1 *)(param_2 + lVar19 + 1 + uVar8 * 2) = param_1[uVar8 * 2 + 1];
          uVar12 = uVar8 + 1;
        } while (uVar12 < uVar7 >> 1);
        uVar10 = uVar11 + (int)uVar12 * 2;
        iVar5 = (int)uVar8 + 2 + (int)uVar12;
      }
      if (iVar5 - 1U < uVar4) {
        *(undefined1 *)((longlong)iVar5 + -1 + param_2 + lVar19) = param_1[(longlong)iVar5 + -1];
        uVar10 = uVar11 + iVar5;
      }
    }
    else {
      uVar12 = param_2 + lVar19;
      if (((longlong)(uVar12 - (longlong)param_1) < (longlong)uVar7) &&
         ((longlong)-(uVar12 - (longlong)param_1) < (longlong)uVar7)) goto LAB_140a7ab37;
      if (uVar4 < 0x10) {
LAB_140a7adad:
        uVar8 = 0;
      }
      else {
        uVar7 = uVar12 & 0xf;
        if ((int)uVar7 != 0) {
          uVar7 = (ulonglong)(0x10 - (int)uVar7);
        }
        iVar5 = (int)uVar7;
        if (uVar4 < iVar5 + 0x10U) goto LAB_140a7adad;
        uVar8 = 0;
        iVar9 = uVar4 - (uVar4 - iVar5 & 0xf);
        if (iVar5 != 0) {
          do {
            *(undefined1 *)(uVar8 + uVar12) = param_1[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        if (((ulonglong)(param_1 + uVar7) & 0xf) == 0) {
          uVar8 = (ulonglong)iVar9;
          do {
            in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar7);
            *(undefined1 (*) [16])(uVar7 + uVar12) = in_XMM0;
            uVar7 = uVar7 + 0x10;
          } while (uVar7 < uVar8);
        }
        else {
          uVar8 = (ulonglong)iVar9;
          do {
            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar7));
            *(undefined1 (*) [16])(uVar7 + uVar12) = in_XMM0;
            uVar7 = uVar7 + 0x10;
          } while (uVar7 < uVar8);
        }
      }
      for (; uVar8 < (ulonglong)(longlong)(int)uVar4; uVar8 = uVar8 + 1) {
        *(undefined1 *)(uVar8 + uVar12) = param_1[uVar8];
      }
      uVar10 = uVar11 + uVar4;
    }
    uVar11 = uVar10;
    lVar19 = (longlong)(int)uVar11;
    if (lVar17 < 5) goto LAB_140a7abe6;
    uVar11 = uVar11 + 4;
    *(undefined1 *)(lVar19 + param_2) = param_1[lVar17 + -4];
    uVar4 = 4 - param_5;
    *(undefined1 *)(lVar19 + 1 + param_2) = param_1[lVar17 + -3];
    *(undefined1 *)(lVar19 + 2 + param_2) = param_1[lVar17 + -2];
    *(undefined1 *)(lVar19 + 3 + param_2) = param_1[lVar17 + -1];
    lVar19 = (longlong)(int)uVar11;
    if ((int)uVar4 < 1) goto LAB_140a7ad68;
  }
  iVar5 = (int)lVar19;
  if ((int)uVar4 < 7) {
LAB_140a7acf7:
    iVar9 = 1;
    if (uVar4 >> 1 != 0) {
      uVar7 = 0;
      do {
        uVar12 = uVar7;
        *(undefined1 *)(param_2 + lVar19 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17];
        *(undefined1 *)(param_2 + lVar19 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar17 + 1];
        uVar7 = uVar12 + 1;
      } while (uVar7 < uVar4 >> 1);
      uVar11 = iVar5 + (int)uVar7 * 2;
      iVar9 = (int)uVar12 + 2 + (int)uVar7;
    }
    if (iVar9 - 1U < uVar4) {
      uVar11 = iVar5 + iVar9;
      *(undefined1 *)((longlong)iVar9 + -1 + param_2 + lVar19) =
           param_1[(longlong)iVar9 + -1 + lVar17];
    }
  }
  else {
    uVar7 = param_2 + lVar19;
    puVar2 = param_1 + lVar17;
    uVar12 = 4 - (longlong)(int)param_5;
    if (((longlong)(uVar7 - (longlong)puVar2) < (longlong)uVar12) &&
       ((longlong)-(uVar7 - (longlong)puVar2) < (longlong)uVar12)) goto LAB_140a7acf7;
    if ((longlong)uVar12 < 0x10) {
LAB_140a7adb4:
      uVar6 = 0;
    }
    else {
      uVar8 = uVar7 & 0xf;
      if (uVar8 != 0) {
        uVar8 = 0x10 - uVar8;
      }
      if ((longlong)uVar12 < (longlong)(uVar8 + 0x10)) goto LAB_140a7adb4;
      uVar13 = 0;
      uVar6 = (ulonglong)(int)((int)uVar12 - ((int)uVar12 - (int)uVar8 & 0xfU));
      if (uVar8 != 0) {
        do {
          *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar8);
      }
      if (((ulonglong)(puVar2 + uVar8) & 0xf) == 0) {
        do {
          uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar8) + 8);
          *(undefined8 *)(uVar8 + uVar7) = *(undefined8 *)(puVar2 + uVar8);
          ((undefined8 *)(uVar8 + uVar7))[1] = uVar24;
          uVar8 = uVar8 + 0x10;
        } while (uVar8 < uVar6);
      }
      else {
        do {
          in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar8));
          *(undefined1 (*) [16])(uVar8 + uVar7) = in_XMM0;
          uVar8 = uVar8 + 0x10;
        } while (uVar8 < uVar6);
      }
    }
    for (; uVar6 < uVar12; uVar6 = uVar6 + 1) {
      *(undefined1 *)(uVar6 + uVar7) = puVar2[uVar6];
    }
    uVar11 = iVar5 + uVar4;
  }
  if (lVar17 < 5) {
    return param_5;
  }
LAB_140a7ad68:
  return uVar11 - (8 - param_5);
}

