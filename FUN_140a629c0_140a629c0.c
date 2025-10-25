
uint FUN_140a629c0(undefined1 *param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  uint param_5,uint param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined1 in_XMM0 [16];
  ulonglong uStack_48;
  
  lVar21 = (longlong)(int)param_3;
  uVar5 = param_6 & 0xf;
  if (lVar21 != 1) {
    if (uVar5 != 6) goto LAB_140a62a0e;
LAB_140a6522e:
    uVar5 = 0;
    uVar4 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (0xf < (longlong)uVar7) {
          uVar14 = param_2 & 0xf;
          if (uVar14 != 0) {
            uVar14 = 0x10 - uVar14;
          }
          if ((longlong)(uVar14 + 0x10) <= (longlong)uVar7) {
            uVar9 = 0;
            uVar5 = param_5 - (param_5 - (int)uVar14 & 0xf);
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar9 + param_2) = param_7;
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar14);
            }
            uVar23 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
            in_XMM0._0_8_ = CONCAT44(uVar23,uVar23);
            in_XMM0._8_8_ = in_XMM0._0_8_;
            do {
              *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < (ulonglong)(longlong)(int)uVar5);
          }
        }
        uVar14 = (ulonglong)(int)uVar5;
        uVar4 = uVar5;
        if (uVar14 < uVar7) {
          do {
            *(undefined1 *)(uVar14 + param_2) = param_7;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar7);
          uVar4 = (uint)uVar14;
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar7 < 0x10) {
LAB_140a659bc:
            uVar9 = 0;
          }
          else {
            uVar14 = param_2 & 0xf;
            if (uVar14 != 0) {
              uVar14 = 0x10 - uVar14;
            }
            if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a659bc;
            uVar20 = 0;
            uVar9 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar14 & 0xf));
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - uVar7];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar14);
            }
            if (((ulonglong)(param_1 + (uVar14 - uVar7)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar14 - uVar7));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar14 - uVar7)));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
          }
          uVar4 = param_5;
          if (uVar9 < uVar7) {
            do {
              *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 - uVar7];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          goto LAB_140a654ec;
        }
      }
      uVar10 = 1;
      uVar7 = 0;
      if (param_5 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar7 * 2) = param_1[uVar7 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar7 * 2) =
               param_1[uVar7 * 2 + (1 - (longlong)(int)param_5)];
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_5 >> 1);
        uVar5 = (int)uVar7 * 2;
        uVar10 = uVar5 + 1;
      }
      uVar4 = uVar5;
      if (uVar10 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
             param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
        uVar4 = uVar10;
      }
    }
LAB_140a654ec:
    lVar16 = (longlong)(int)uVar4;
    uVar7 = (ulonglong)param_3;
    if (4 < param_3) {
      uVar7 = 4;
    }
    if (lVar21 < 1) {
      uVar5 = 4 - param_5;
      if ((param_6 & 0x80) != 0) goto LAB_140a65816;
LAB_140a65708:
      if ((int)uVar5 < 1) {
        return param_5;
      }
LAB_140a65710:
      uVar7 = 4 - (longlong)(int)param_5;
      if ((longlong)uVar7 < 0x10) {
LAB_140a659ca:
        iVar6 = 0;
      }
      else {
        uVar9 = param_2 + lVar16;
        uVar14 = uVar9 & 0xf;
        if (uVar14 != 0) {
          uVar14 = 0x10 - uVar14;
        }
        if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a659ca;
        iVar6 = (int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU);
        uVar20 = 0;
        if (uVar14 != 0) {
          do {
            *(undefined1 *)(uVar20 + uVar9) = param_7;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar14);
        }
        uVar23 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
        uVar24 = CONCAT44(uVar23,uVar23);
        do {
          *(undefined8 *)(uVar14 + uVar9) = uVar24;
          ((undefined8 *)(uVar14 + uVar9))[1] = uVar24;
          uVar14 = uVar14 + 0x10;
        } while (uVar14 < (ulonglong)(longlong)iVar6);
        uVar4 = (int)lVar16 + iVar6;
      }
      uVar14 = (ulonglong)iVar6;
      if (uVar14 < uVar7) {
        do {
          *(undefined1 *)(uVar14 + param_2 + lVar16) = param_7;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar7);
        uVar4 = (int)uVar14 + (int)lVar16;
      }
    }
    else {
      uVar5 = (uint)uVar7;
      if (uVar5 < 7) {
LAB_140a6561b:
        iVar6 = 1;
        uVar14 = 0;
        uVar10 = uVar4;
        if ((int)(uVar7 >> 1) != 0) {
          do {
            *(undefined1 *)(param_2 + lVar16 + uVar14 * 2) = param_1[uVar14 * 2];
            *(undefined1 *)(param_2 + lVar16 + 1 + uVar14 * 2) = param_1[uVar14 * 2 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar7 >> 1);
          iVar6 = (int)uVar14 * 2;
          uVar10 = uVar4 + iVar6;
          iVar6 = iVar6 + 1;
        }
        if (iVar6 - 1U < uVar5) {
          *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = param_1[(longlong)iVar6 + -1];
          uVar10 = uVar4 + iVar6;
        }
      }
      else {
        uVar14 = param_2 + lVar16;
        if (((longlong)(uVar14 - (longlong)param_1) < (longlong)uVar7) &&
           ((longlong)-(uVar14 - (longlong)param_1) < (longlong)uVar7)) goto LAB_140a6561b;
        if (uVar5 < 0x10) {
LAB_140a659c3:
          uVar9 = 0;
        }
        else {
          uVar7 = uVar14 & 0xf;
          if ((int)uVar7 != 0) {
            uVar7 = (ulonglong)(0x10 - (int)uVar7);
          }
          iVar6 = (int)uVar7;
          if (uVar5 < iVar6 + 0x10U) goto LAB_140a659c3;
          uVar9 = 0;
          iVar11 = uVar5 - (uVar5 - iVar6 & 0xf);
          if (iVar6 != 0) {
            do {
              *(undefined1 *)(uVar9 + uVar14) = param_1[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          if (((ulonglong)(param_1 + uVar7) & 0xf) == 0) {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar7);
              *(undefined1 (*) [16])(uVar7 + uVar14) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar9);
          }
          else {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar7));
              *(undefined1 (*) [16])(uVar7 + uVar14) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar9);
          }
        }
        for (; uVar9 < (ulonglong)(longlong)(int)uVar5; uVar9 = uVar9 + 1) {
          *(undefined1 *)(uVar9 + uVar14) = param_1[uVar9];
        }
        uVar10 = uVar4 + uVar5;
      }
      uVar4 = uVar10;
      lVar16 = (longlong)(int)uVar4;
      if (lVar21 < 5) {
        uVar5 = 4 - param_5;
        if ((param_6 & 0x80) == 0) goto LAB_140a65708;
LAB_140a65816:
        if ((int)uVar5 < 1) {
          return param_5;
        }
      }
      else {
        uVar4 = uVar4 + 4;
        *(undefined1 *)(lVar16 + param_2) = param_1[lVar21 + -4];
        *(undefined1 *)(lVar16 + 1 + param_2) = param_1[lVar21 + -3];
        *(undefined1 *)(lVar16 + 2 + param_2) = param_1[lVar21 + -2];
        *(undefined1 *)(lVar16 + 3 + param_2) = param_1[lVar21 + -1];
        uVar5 = 4 - param_5;
        lVar16 = (longlong)(int)uVar4;
        if ((param_6 & 0x80) == 0) {
          if ((int)uVar5 < 1) goto LAB_140a62f2c;
          goto LAB_140a65710;
        }
        if ((int)uVar5 < 1) goto LAB_140a62f2c;
      }
      iVar6 = (int)lVar16;
      if (6 < (int)uVar5) {
        uVar7 = param_2 + lVar16;
        puVar2 = param_1 + lVar21;
        uVar14 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)puVar2)) ||
           ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)puVar2))) {
          if ((longlong)uVar14 < 0x10) {
LAB_140a659d1:
            uVar20 = 0;
          }
          else {
            uVar9 = uVar7 & 0xf;
            if (uVar9 != 0) {
              uVar9 = 0x10 - uVar9;
            }
            if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a659d1;
            uVar13 = 0;
            uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
            if (uVar9 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar9);
            }
            if (((ulonglong)(puVar2 + uVar9) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar9) + 8);
                *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(puVar2 + uVar9);
                ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar9));
                *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
          }
          for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
            *(undefined1 *)(uVar20 + uVar7) = puVar2[uVar20];
          }
          uVar4 = iVar6 + uVar5;
          goto joined_r0x000140a659aa;
        }
      }
      iVar11 = 1;
      uVar7 = 0;
      if (uVar5 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21];
          *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5 >> 1);
        iVar11 = (int)uVar7 * 2;
        uVar4 = iVar6 + iVar11;
        iVar11 = iVar11 + 1;
      }
      if (iVar11 - 1U < uVar5) {
        uVar4 = iVar6 + iVar11;
        *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar16) =
             param_1[(longlong)iVar11 + -1 + lVar21];
      }
    }
joined_r0x000140a659aa:
    if (lVar21 < 5) {
      return param_5;
    }
LAB_140a62f2c:
    return uVar4 - (8 - param_5);
  }
  if (uVar5 == 6) goto LAB_140a6522e;
  if ((param_6 & 0xc0) == 0) {
    uVar5 = 1;
  }
LAB_140a62a0e:
  if (uVar5 == 1) {
    uVar3 = *param_1;
    uVar5 = 0;
    if ((param_6 & 0x40) == 0) {
      uVar4 = uVar5;
      if (0 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if ((longlong)uVar7 < 0x10) {
LAB_140a6520a:
          uVar4 = 0;
        }
        else {
          uVar14 = param_2 & 0xf;
          if (uVar14 != 0) {
            uVar14 = 0x10 - uVar14;
          }
          if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a6520a;
          uVar9 = 0;
          uVar4 = param_5 - (param_5 - (int)uVar14 & 0xf);
          if (uVar14 != 0) {
            do {
              *(undefined1 *)(uVar9 + param_2) = uVar3;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar14);
          }
          uVar23 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
          in_XMM0._0_8_ = CONCAT44(uVar23,uVar23);
          in_XMM0._8_8_ = in_XMM0._0_8_;
          do {
            *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
            uVar14 = uVar14 + 0x10;
          } while (uVar14 < (ulonglong)(longlong)(int)uVar4);
        }
        uVar14 = (ulonglong)(int)uVar4;
        if (uVar14 < uVar7) {
          do {
            *(undefined1 *)(uVar14 + param_2) = uVar3;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar7);
          uVar4 = (uint)uVar14;
        }
      }
    }
    else {
      uVar4 = 0;
      if ((int)param_5 < 1) goto LAB_140a64d8c;
      if (6 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar7 < 0x10) {
LAB_140a65211:
            uVar9 = 0;
          }
          else {
            uVar14 = param_2 & 0xf;
            if (uVar14 != 0) {
              uVar14 = 0x10 - uVar14;
            }
            if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a65211;
            uVar20 = 0;
            uVar9 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar14 & 0xf));
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - uVar7];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar14);
            }
            if (((ulonglong)(param_1 + (uVar14 - uVar7)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar14 - uVar7));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar14 - uVar7)));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
          }
          uVar4 = param_5;
          if (uVar9 < uVar7) {
            do {
              *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 - uVar7];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          goto LAB_140a64d8c;
        }
      }
      uVar10 = 1;
      uVar7 = 0;
      if (param_5 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar7 * 2) = param_1[uVar7 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar7 * 2) =
               param_1[uVar7 * 2 + (1 - (longlong)(int)param_5)];
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_5 >> 1);
        uVar5 = (int)uVar7 * 2;
        uVar10 = uVar5 + 1;
      }
      uVar4 = uVar5;
      if (uVar10 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
             param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
        uVar4 = uVar10;
      }
    }
LAB_140a64d8c:
    lVar16 = (longlong)(int)uVar4;
    uVar7 = (ulonglong)param_3;
    if (4 < param_3) {
      uVar7 = 4;
    }
    if (0 < lVar21) {
      uVar5 = (uint)uVar7;
      if (uVar5 < 7) {
LAB_140a64ebc:
        iVar6 = 1;
        uVar14 = 0;
        uVar10 = uVar4;
        if ((int)(uVar7 >> 1) != 0) {
          do {
            *(undefined1 *)(param_2 + lVar16 + uVar14 * 2) = param_1[uVar14 * 2];
            *(undefined1 *)(param_2 + lVar16 + 1 + uVar14 * 2) = param_1[uVar14 * 2 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar7 >> 1);
          iVar6 = (int)uVar14 * 2;
          uVar10 = uVar4 + iVar6;
          iVar6 = iVar6 + 1;
        }
        if (iVar6 - 1U < uVar5) {
          *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = param_1[(longlong)iVar6 + -1];
          uVar10 = uVar4 + iVar6;
        }
      }
      else {
        uVar14 = param_2 + lVar16;
        if (((longlong)(uVar14 - (longlong)param_1) < (longlong)uVar7) &&
           ((longlong)-(uVar14 - (longlong)param_1) < (longlong)uVar7)) goto LAB_140a64ebc;
        if (uVar5 < 0x10) {
LAB_140a65218:
          uVar9 = 0;
        }
        else {
          uVar7 = uVar14 & 0xf;
          if ((int)uVar7 != 0) {
            uVar7 = (ulonglong)(0x10 - (int)uVar7);
          }
          iVar6 = (int)uVar7;
          if (uVar5 < iVar6 + 0x10U) goto LAB_140a65218;
          uVar9 = 0;
          iVar11 = uVar5 - (uVar5 - iVar6 & 0xf);
          if (iVar6 != 0) {
            do {
              *(undefined1 *)(uVar9 + uVar14) = param_1[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          if (((ulonglong)(param_1 + uVar7) & 0xf) == 0) {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar7);
              *(undefined1 (*) [16])(uVar7 + uVar14) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar9);
          }
          else {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar7));
              *(undefined1 (*) [16])(uVar7 + uVar14) = in_XMM0;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 < uVar9);
          }
        }
        for (; uVar9 < (ulonglong)(longlong)(int)uVar5; uVar9 = uVar9 + 1) {
          *(undefined1 *)(uVar9 + uVar14) = param_1[uVar9];
        }
        uVar10 = uVar4 + uVar5;
      }
      uVar4 = uVar10;
      lVar16 = (longlong)(int)uVar4;
      if (4 < lVar21) {
        uVar4 = uVar4 + 4;
        *(undefined1 *)(lVar16 + param_2) = param_1[lVar21 + -4];
        *(undefined1 *)(lVar16 + 1 + param_2) = param_1[lVar21 + -3];
        *(undefined1 *)(lVar16 + 2 + param_2) = param_1[lVar21 + -2];
        *(undefined1 *)(lVar16 + 3 + param_2) = param_1[lVar21 + -1];
        lVar16 = (longlong)(int)uVar4;
      }
    }
    param_1 = param_1 + lVar21;
    uVar5 = -param_5 + 4;
    uVar3 = param_1[-1];
    iVar6 = (int)lVar16;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar5 < 1) goto LAB_140a651e2;
      if (6 < (int)uVar5) {
        uVar7 = param_2 + lVar16;
        uVar14 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)param_1)) ||
           ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)param_1))) {
          if ((longlong)uVar14 < 0x10) {
LAB_140a65226:
            uVar20 = 0;
          }
          else {
            uVar9 = uVar7 & 0xf;
            if (uVar9 != 0) {
              uVar9 = 0x10 - uVar9;
            }
            if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a65226;
            uVar13 = 0;
            uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
            if (uVar9 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar9);
            }
            if (((ulonglong)(param_1 + uVar9) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(param_1 + uVar9) + 8);
                *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(param_1 + uVar9);
                ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar9));
                *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
          }
          for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
            *(undefined1 *)(uVar20 + uVar7) = param_1[uVar20];
          }
          uVar4 = iVar6 + -param_5 + 4;
          goto LAB_140a651e2;
        }
      }
      iVar11 = 1;
      uVar7 = 0;
      if (uVar5 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2];
          *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5 >> 1);
        iVar11 = (int)uVar7 * 2;
        uVar4 = iVar6 + iVar11;
        iVar11 = iVar11 + 1;
      }
      if (iVar11 - 1U < uVar5) {
        uVar4 = iVar6 + iVar11;
        *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar16) = param_1[(longlong)iVar11 + -1];
      }
      goto LAB_140a651e2;
    }
    if ((int)uVar5 < 1) goto LAB_140a651e2;
    uVar7 = 4 - (longlong)(int)param_5;
    if ((longlong)uVar7 < 0x10) {
LAB_140a6521f:
      iVar11 = 0;
    }
    else {
      uVar9 = param_2 + lVar16;
      uVar14 = uVar9 & 0xf;
      if (uVar14 != 0) {
        uVar14 = 0x10 - uVar14;
      }
      if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a6521f;
      iVar11 = (int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU);
      uVar20 = 0;
      if (uVar14 != 0) {
        do {
          *(undefined1 *)(uVar20 + uVar9) = uVar3;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar14);
      }
      uVar23 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
      uVar24 = CONCAT44(uVar23,uVar23);
      do {
        *(undefined8 *)(uVar14 + uVar9) = uVar24;
        ((undefined8 *)(uVar14 + uVar9))[1] = uVar24;
        uVar14 = uVar14 + 0x10;
      } while (uVar14 < (ulonglong)(longlong)iVar11);
      uVar4 = iVar6 + iVar11;
    }
    uVar14 = (ulonglong)iVar11;
    if (uVar14 < uVar7) {
      do {
        *(undefined1 *)(uVar14 + param_2 + lVar16) = uVar3;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
      uVar4 = (int)uVar14 + iVar6;
    }
LAB_140a651e2:
    uVar5 = uVar4 - (8 - param_5);
    if (lVar21 < 5) {
      uVar5 = param_5;
    }
    return uVar5;
  }
  if (uVar5 != 2) {
    if (uVar5 == 3) {
      uVar14 = (ulonglong)(1 < (int)param_3);
      uVar5 = (uint)(1 < (int)param_3);
      lVar16 = (longlong)(int)param_5;
      uVar7 = 4;
      if (param_3 < 5) {
        uVar7 = (ulonglong)param_3;
      }
      lVar17 = lVar16;
      uVar4 = param_5;
      if (lVar21 < 1) {
LAB_140a6349c:
        lVar8 = lVar16 + -1;
        if ((param_6 & 0x40) != 0) {
          if (-1 < lVar8) {
            if ((longlong)uVar14 < lVar21) goto LAB_140a63a47;
            bVar22 = -1 < lVar8;
            if (((bVar22) && (bVar22)) && (bVar22)) {
              while (bVar22) {
                if ((longlong)uVar14 < lVar21) {
LAB_140a63a47:
                  uVar7 = uVar14;
                  while( true ) {
                    uVar7 = uVar7 + 1;
                    *(undefined1 *)(lVar8 + param_2) = param_1[lVar8 - (int)param_5];
                    lVar8 = lVar8 + -1;
                    if (lVar21 <= (longlong)uVar7) break;
                    if (lVar8 < 0) goto LAB_140a633e1;
                  }
                }
                bVar22 = -1 < lVar8;
              }
            }
          }
          goto LAB_140a633e1;
        }
        if ((param_6 & 0x80) == 0) {
          if (-1 < lVar8) {
            lVar16 = (longlong)(int)((int)lVar8 + uVar5) + 1;
            uVar7 = uVar14;
            if ((longlong)uVar14 < lVar21) {
              do {
                while( true ) {
                  *(undefined1 *)(lVar8 + param_2) = *(undefined1 *)(param_2 + lVar16);
                  lVar8 = lVar8 + -1;
                  lVar16 = lVar16 + 1;
                  if ((longlong)(uVar7 + 1) < lVar21) break;
                  do {
                    if (lVar8 < 0) goto LAB_140a63507;
LAB_140a63ac9:
                    lVar16 = (longlong)(int)((int)lVar8 + uVar5) + 1;
                    uVar7 = uVar14;
                  } while (lVar21 <= (longlong)uVar14);
                }
                uVar7 = uVar7 + 1;
              } while (-1 < lVar8);
            }
            else if (-1 < lVar8) goto LAB_140a63ac9;
          }
LAB_140a63507:
          if (4 < lVar21) goto LAB_140a63612;
          goto LAB_140a63511;
        }
        if (-1 < (int)(param_5 - 1)) {
          uVar7 = 0;
          iVar6 = 1;
          lVar8 = 0;
          if (param_5 >> 1 != 0) {
            do {
              *(undefined1 *)(lVar8 + -1 + lVar16 + param_2) = param_1[uVar7 * 2 + 1];
              lVar19 = uVar7 * 2;
              uVar7 = uVar7 + 1;
              *(undefined1 *)(lVar8 + -2 + lVar16 + param_2) = param_1[lVar19 + 2];
              lVar8 = lVar8 + -2;
            } while (uVar7 < param_5 >> 1);
            iVar6 = (int)uVar7 * 2 + 1;
          }
          if (iVar6 - 1U < param_5) {
            *(undefined1 *)((lVar16 + param_2) - (longlong)iVar6) = param_1[iVar6];
          }
        }
        if (lVar21 < 5) goto LAB_140a6386d;
      }
      else {
        uVar10 = (uint)uVar7;
        if (uVar10 < 7) {
LAB_140a630c0:
          iVar6 = 1;
          uVar9 = 0;
          if ((int)(uVar7 >> 1) != 0) {
            do {
              *(undefined1 *)(lVar16 + param_2 + uVar9 * 2) = param_1[uVar9 * 2];
              *(undefined1 *)(lVar16 + param_2 + 1 + uVar9 * 2) = param_1[uVar9 * 2 + 1];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7 >> 1);
            iVar6 = (int)uVar9 * 2;
            uVar4 = param_5 + iVar6;
            iVar6 = iVar6 + 1;
          }
          if (iVar6 - 1U < uVar10) {
            uVar4 = param_5 + iVar6;
            *(undefined1 *)((longlong)iVar6 + -1 + lVar16 + param_2) = param_1[(longlong)iVar6 + -1]
            ;
          }
        }
        else {
          uVar9 = lVar16 + param_2;
          if (((longlong)(uVar9 - (longlong)param_1) < (longlong)uVar7) &&
             ((longlong)-(uVar9 - (longlong)param_1) < (longlong)uVar7)) goto LAB_140a630c0;
          if (uVar10 < 0x10) {
LAB_140a63a96:
            uVar20 = 0;
          }
          else {
            uVar7 = uVar9 & 0xf;
            if ((int)uVar7 != 0) {
              uVar7 = (ulonglong)(0x10 - (int)uVar7);
            }
            iVar6 = (int)uVar7;
            if (uVar10 < iVar6 + 0x10U) goto LAB_140a63a96;
            uVar20 = 0;
            iVar11 = uVar10 - (uVar10 - iVar6 & 0xf);
            if (iVar6 != 0) {
              do {
                *(undefined1 *)(uVar20 + uVar9) = param_1[uVar20];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar7);
            }
            if (((ulonglong)(param_1 + uVar7) & 0xf) == 0) {
              uVar20 = (ulonglong)iVar11;
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar7);
                *(undefined1 (*) [16])(uVar7 + uVar9) = in_XMM0;
                uVar7 = uVar7 + 0x10;
              } while (uVar7 < uVar20);
            }
            else {
              uVar20 = (ulonglong)iVar11;
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar7));
                *(undefined1 (*) [16])(uVar7 + uVar9) = in_XMM0;
                uVar7 = uVar7 + 0x10;
              } while (uVar7 < uVar20);
            }
          }
          for (; uVar20 < (ulonglong)(longlong)(int)uVar10; uVar20 = uVar20 + 1) {
            *(undefined1 *)(uVar20 + uVar9) = param_1[uVar20];
          }
          uVar4 = uVar10 + param_5;
        }
        lVar17 = (longlong)(int)uVar4;
        if (lVar21 < 5) goto LAB_140a6349c;
        if ((param_6 & 0x40) == 0) {
          if (-1 < (int)(param_5 - 1)) {
            uVar7 = 0;
            iVar6 = 1;
            lVar8 = 0;
            if (param_5 >> 1 != 0) {
              do {
                *(undefined1 *)(lVar8 + -1 + lVar16 + param_2) = param_1[uVar7 * 2 + uVar14];
                lVar19 = uVar7 * 2;
                uVar7 = uVar7 + 1;
                *(undefined1 *)(lVar8 + -2 + lVar16 + param_2) = param_1[lVar19 + uVar14 + 1];
                lVar8 = lVar8 + -2;
              } while (uVar7 < param_5 >> 1);
              iVar6 = (int)uVar7 * 2 + 1;
            }
            if (iVar6 - 1U < param_5) {
              *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar6) =
                   param_1[(longlong)iVar6 + -1 + uVar14];
            }
          }
        }
        else if (-1 < (int)(param_5 - 1)) {
          if (((int)param_5 < 7) ||
             ((lVar8 = ((param_2 - 1) + lVar16) - (longlong)(param_1 + -1), lVar8 <= lVar16 &&
              (-lVar16 == lVar8 || -lVar8 < lVar16)))) {
            uVar7 = 0;
            iVar6 = 1;
            lVar8 = 0;
            if (param_5 >> 1 != 0) {
              do {
                uVar7 = uVar7 + 1;
                *(undefined1 *)(lVar8 + -1 + lVar16 + param_2) = param_1[lVar8 + -1];
                *(undefined1 *)(lVar8 + -2 + lVar16 + param_2) = param_1[lVar8 + -2];
                lVar8 = lVar8 + -2;
              } while (uVar7 < param_5 >> 1);
              iVar6 = (int)uVar7 * 2 + 1;
            }
            if (iVar6 - 1U < param_5) {
              *(undefined1 *)((lVar16 + param_2) - (longlong)iVar6) = param_1[-(longlong)iVar6];
            }
          }
          else {
            uVar7 = 0xffffffffffffffff - (-1 - lVar16);
            if ((longlong)uVar7 < 0x10) {
LAB_140a63a9d:
              uStack_48 = 0;
            }
            else {
              uVar9 = param_2 & 0xf;
              if (uVar9 != 0) {
                uVar9 = 0x10 - uVar9;
              }
              if ((longlong)uVar7 < (longlong)(uVar9 + 0x10)) goto LAB_140a63a9d;
              uVar20 = 0;
              uStack_48 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar9 & 0xfU));
              if (uVar9 != 0) {
                do {
                  *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - lVar16];
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar9);
              }
              if (((ulonglong)(param_1 + (uVar9 - lVar16)) & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar9 - lVar16));
                  *(undefined1 (*) [16])(uVar9 + param_2) = in_XMM0;
                  uVar9 = uVar9 + 0x10;
                } while (uVar9 < uStack_48);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar9 - lVar16)));
                  *(undefined1 (*) [16])(uVar9 + param_2) = in_XMM0;
                  uVar9 = uVar9 + 0x10;
                } while (uVar9 < uStack_48);
              }
            }
            if (uStack_48 < uVar7) {
              do {
                *(undefined1 *)(uStack_48 + param_2) = param_1[uStack_48 - lVar16];
                uStack_48 = uStack_48 + 1;
              } while (uStack_48 < uVar7);
            }
          }
        }
LAB_140a633e1:
        if (lVar21 < 5) {
          if ((param_6 & 0x80) == 0) {
            if ((param_6 & 0x40) != 0) {
              uVar5 = 4 - param_5;
              if (0 < (int)uVar5) {
                uVar7 = 0;
                iVar6 = 1;
                lVar16 = 0;
                if (uVar5 >> 1 != 0) {
                  do {
                    *(undefined1 *)(param_2 + lVar17 + uVar7 * 2) = param_1[lVar16 + -2 + lVar21];
                    lVar8 = lVar16 + -3;
                    lVar16 = lVar16 + -2;
                    *(undefined1 *)(param_2 + lVar17 + 1 + uVar7 * 2) = param_1[lVar8 + lVar21];
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar5 >> 1);
                  iVar6 = (int)uVar7 * 2;
                  uVar4 = (int)lVar17 + iVar6;
                  iVar6 = iVar6 + 1;
                }
                if (iVar6 - 1U < uVar5) {
                  *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar17) =
                       param_1[(lVar21 - iVar6) + -1];
                  uVar4 = (int)lVar17 + iVar6;
                }
              }
              goto LAB_140a63a0c;
            }
LAB_140a63511:
            iVar6 = param_3 + 4;
            iVar11 = ((int)param_3 < 2) - 1;
            iVar15 = 4 - param_5;
            iVar18 = ((param_3 + iVar11) - iVar15) + 3;
            lVar16 = (lVar21 + 4) - (longlong)iVar15;
            if (lVar16 < iVar6) {
              iVar12 = iVar11;
              do {
                lVar17 = (longlong)iVar18;
                iVar18 = iVar18 + iVar11;
                *(undefined1 *)(lVar16 + param_2) = *(undefined1 *)(lVar17 + param_2);
                if ((iVar6 - iVar15 <= iVar18) || (iVar18 < (int)param_5)) {
                  iVar1 = iVar11 + iVar12;
                  iVar11 = -iVar11;
                  iVar18 = iVar18 - iVar1;
                  iVar12 = -iVar12;
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 < iVar6);
            }
            goto LAB_140a63a0c;
          }
LAB_140a6386d:
          uVar5 = -param_5 + 4;
          if ((int)uVar5 < 1) goto LAB_140a63a0c;
          iVar6 = (int)lVar17;
          if (6 < (int)uVar5) {
            uVar7 = param_2 + lVar17;
            puVar2 = param_1 + lVar21;
            lVar16 = 4 - (longlong)(int)param_5;
            if ((lVar16 <= (longlong)(uVar7 - (longlong)puVar2)) ||
               (lVar16 <= (longlong)-(uVar7 - (longlong)puVar2))) {
              uVar14 = 4 - (longlong)(int)param_5;
              if ((longlong)uVar14 < 0x10) {
LAB_140a63af1:
                uVar20 = 0;
              }
              else {
                uVar9 = uVar7 & 0xf;
                if (uVar9 != 0) {
                  uVar9 = 0x10 - uVar9;
                }
                if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a63af1;
                uVar13 = 0;
                uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
                if (uVar9 != 0) {
                  do {
                    *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar9);
                }
                if (((ulonglong)(puVar2 + uVar9) & 0xf) == 0) {
                  do {
                    uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar9) + 8);
                    *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(puVar2 + uVar9);
                    ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
                    uVar9 = uVar9 + 0x10;
                  } while (uVar9 < uVar20);
                }
                else {
                  do {
                    in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar9));
                    *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
                    uVar9 = uVar9 + 0x10;
                  } while (uVar9 < uVar20);
                }
              }
              for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
                *(undefined1 *)(uVar20 + uVar7) = puVar2[uVar20];
              }
              uVar4 = iVar6 + -param_5 + 4;
              goto LAB_140a63a0c;
            }
          }
          iVar11 = 1;
          uVar7 = 0;
          if (uVar5 >> 1 != 0) {
            do {
              *(undefined1 *)(param_2 + lVar17 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21];
              *(undefined1 *)(param_2 + lVar17 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21 + 1];
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar5 >> 1);
            iVar11 = (int)uVar7 * 2;
            uVar4 = iVar6 + iVar11;
            iVar11 = iVar11 + 1;
          }
          if (iVar11 - 1U < uVar5) {
            *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar17) =
                 param_1[(longlong)iVar11 + -1 + lVar21];
            uVar4 = iVar6 + iVar11;
          }
          goto LAB_140a63a0c;
        }
      }
LAB_140a63612:
      param_1 = param_1 + lVar21;
      uVar5 = (int)lVar17 + 4;
      *(undefined1 *)(lVar17 + param_2) = param_1[-4];
      *(undefined1 *)(lVar17 + 1 + param_2) = param_1[-3];
      *(undefined1 *)(lVar17 + 2 + param_2) = param_1[-2];
      *(undefined1 *)(lVar17 + 3 + param_2) = param_1[-1];
      uVar10 = -param_5 + 4;
      uVar4 = uVar5;
      if ((param_6 & 0x80) == 0) {
        if (0 < (int)uVar10) {
          uVar7 = 0;
          iVar6 = 1;
          lVar16 = 0;
          if (uVar10 >> 1 != 0) {
            do {
              *(undefined1 *)((longlong)(int)uVar5 + param_2 + uVar7 * 2) =
                   param_1[(lVar16 + -1) - uVar14];
              lVar17 = lVar16 + -2;
              lVar16 = lVar16 + -2;
              *(undefined1 *)((longlong)(int)uVar5 + param_2 + 1 + uVar7 * 2) =
                   param_1[lVar17 - uVar14];
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar10 >> 1);
            iVar6 = (int)uVar7 * 2;
            uVar4 = uVar5 + iVar6;
            iVar6 = iVar6 + 1;
          }
          if (iVar6 - 1U < uVar10) {
            *(undefined1 *)((longlong)iVar6 + -1 + param_2 + (longlong)(int)uVar5) =
                 param_1[-(longlong)iVar6 - uVar14];
            uVar4 = iVar6 + uVar5;
          }
        }
        goto LAB_140a63a0c;
      }
      lVar16 = (longlong)(int)uVar5;
      if ((int)uVar10 < 1) goto LAB_140a63a0c;
      if (6 < (int)uVar10) {
        uVar7 = param_2 + lVar16;
        lVar17 = 4 - (longlong)(int)param_5;
        if ((lVar17 <= (longlong)(uVar7 - (longlong)param_1)) ||
           (lVar17 <= (longlong)-(uVar7 - (longlong)param_1))) {
          uVar14 = 4 - (longlong)(int)param_5;
          if ((longlong)uVar14 < 0x10) {
LAB_140a63aea:
            uVar20 = 0;
          }
          else {
            uVar9 = uVar7 & 0xf;
            if (uVar9 != 0) {
              uVar9 = 0x10 - uVar9;
            }
            if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a63aea;
            uVar13 = 0;
            uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
            if (uVar9 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar9);
            }
            if (((ulonglong)(param_1 + uVar9) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(param_1 + uVar9) + 8);
                *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(param_1 + uVar9);
                ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar9));
                *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
          }
          for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
            *(undefined1 *)(uVar20 + uVar7) = param_1[uVar20];
          }
          uVar4 = uVar5 + -param_5 + 4;
          goto LAB_140a63a0c;
        }
      }
      iVar6 = 1;
      uVar7 = 0;
      if (uVar10 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2];
          *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar10 >> 1);
        iVar6 = (int)uVar7 * 2;
        uVar4 = uVar5 + iVar6;
        iVar6 = iVar6 + 1;
      }
      if (iVar6 - 1U < uVar10) {
        *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = param_1[(longlong)iVar6 + -1];
        uVar4 = uVar5 + iVar6;
      }
LAB_140a63a0c:
      uVar5 = uVar4 - (8 - param_5);
      if (lVar21 < 5) {
        uVar5 = param_5;
      }
      return uVar5;
    }
    if ((param_6 & 0xf0) != 0xf0) {
      return 0;
    }
    uVar5 = 0;
    uVar4 = 0;
    if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        uVar7 = (ulonglong)(int)param_5;
        if (((longlong)uVar7 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           ((longlong)uVar7 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((longlong)uVar7 < 0x10) {
LAB_140a62f71:
            uVar9 = 0;
          }
          else {
            uVar14 = param_2 & 0xf;
            if (uVar14 != 0) {
              uVar14 = 0x10 - uVar14;
            }
            if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a62f71;
            uVar20 = 0;
            uVar9 = (ulonglong)(int)(param_5 - (param_5 - (int)uVar14 & 0xf));
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - uVar7];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar14);
            }
            if (((ulonglong)(param_1 + (uVar14 - uVar7)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar14 - uVar7));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar14 - uVar7)));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
          }
          uVar4 = param_5;
          if (uVar9 < uVar7) {
            do {
              *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 - uVar7];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          goto LAB_140a62bcc;
        }
      }
      uVar10 = 1;
      uVar7 = 0;
      if (param_5 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + uVar7 * 2) = param_1[uVar7 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar7 * 2) =
               param_1[uVar7 * 2 + (1 - (longlong)(int)param_5)];
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_5 >> 1);
        uVar5 = (int)uVar7 * 2;
        uVar10 = uVar5 + 1;
      }
      uVar4 = uVar5;
      if (uVar10 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar10 + -1 + param_2) =
             param_1[((longlong)(int)uVar10 + -1) - (longlong)(int)param_5];
        uVar4 = uVar10;
      }
    }
LAB_140a62bcc:
    lVar16 = (longlong)(int)uVar4;
    if (4 < param_3) {
      param_3 = 4;
    }
    if (lVar21 < 1) {
LAB_140a62da7:
      uVar5 = 4 - param_5;
      if ((int)uVar5 < 1) {
        return param_5;
      }
    }
    else {
      if (param_3 < 7) {
LAB_140a62cfc:
        iVar6 = 1;
        uVar7 = 0;
        uVar5 = uVar4;
        if (param_3 >> 1 != 0) {
          do {
            *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2];
            *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + 1];
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_3 >> 1);
          iVar6 = (int)uVar7 * 2;
          uVar5 = uVar4 + iVar6;
          iVar6 = iVar6 + 1;
        }
        if (iVar6 - 1U < param_3) {
          *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = param_1[(longlong)iVar6 + -1];
          uVar5 = uVar4 + iVar6;
        }
      }
      else {
        uVar7 = param_2 + lVar16;
        if (((longlong)(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140a62cfc;
        if (param_3 < 0x10) {
LAB_140a62f78:
          uVar9 = 0;
        }
        else {
          uVar14 = uVar7 & 0xf;
          if ((int)uVar14 != 0) {
            uVar14 = (ulonglong)(0x10 - (int)uVar14);
          }
          iVar6 = (int)uVar14;
          if (param_3 < iVar6 + 0x10U) goto LAB_140a62f78;
          uVar9 = 0;
          iVar11 = param_3 - (param_3 - iVar6 & 0xf);
          if (iVar6 != 0) {
            do {
              *(undefined1 *)(uVar9 + uVar7) = param_1[uVar9];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar14);
          }
          if (((ulonglong)(param_1 + uVar14) & 0xf) == 0) {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar14);
              *(undefined1 (*) [16])(uVar14 + uVar7) = in_XMM0;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar9);
          }
          else {
            uVar9 = (ulonglong)iVar11;
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar14));
              *(undefined1 (*) [16])(uVar14 + uVar7) = in_XMM0;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar9);
          }
        }
        for (; uVar9 < (ulonglong)(longlong)(int)param_3; uVar9 = uVar9 + 1) {
          *(undefined1 *)(uVar9 + uVar7) = param_1[uVar9];
        }
        uVar5 = uVar4 + param_3;
      }
      uVar4 = uVar5;
      lVar16 = (longlong)(int)uVar4;
      if (lVar21 < 5) goto LAB_140a62da7;
      uVar4 = uVar4 + 4;
      *(undefined1 *)(lVar16 + param_2) = param_1[lVar21 + -4];
      uVar5 = 4 - param_5;
      *(undefined1 *)(lVar16 + 1 + param_2) = param_1[lVar21 + -3];
      *(undefined1 *)(lVar16 + 2 + param_2) = param_1[lVar21 + -2];
      *(undefined1 *)(lVar16 + 3 + param_2) = param_1[lVar21 + -1];
      lVar16 = (longlong)(int)uVar4;
      if ((int)uVar5 < 1) goto LAB_140a62f2c;
    }
    iVar6 = (int)lVar16;
    if (6 < (int)uVar5) {
      uVar7 = param_2 + lVar16;
      puVar2 = param_1 + lVar21;
      uVar14 = 4 - (longlong)(int)param_5;
      if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)puVar2)) ||
         ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)puVar2))) {
        if ((longlong)uVar14 < 0x10) {
LAB_140a62f7f:
          uVar20 = 0;
        }
        else {
          uVar9 = uVar7 & 0xf;
          if (uVar9 != 0) {
            uVar9 = 0x10 - uVar9;
          }
          if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a62f7f;
          uVar13 = 0;
          uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
          if (uVar9 != 0) {
            do {
              *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar9);
          }
          if (((ulonglong)(puVar2 + uVar9) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar9) + 8);
              *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(puVar2 + uVar9);
              ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar9));
              *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
        }
        for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
          *(undefined1 *)(uVar20 + uVar7) = puVar2[uVar20];
        }
        uVar4 = iVar6 + uVar5;
        goto joined_r0x000140a659aa;
      }
    }
    iVar11 = 1;
    uVar7 = 0;
    if (uVar5 >> 1 != 0) {
      do {
        *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21];
        *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5 >> 1);
      iVar11 = (int)uVar7 * 2;
      uVar4 = iVar6 + iVar11;
      iVar11 = iVar11 + 1;
    }
    if (iVar11 - 1U < uVar5) {
      uVar4 = iVar6 + iVar11;
      *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar16) =
           param_1[(longlong)iVar11 + -1 + lVar21];
    }
    goto joined_r0x000140a659aa;
  }
  if (4 < param_3) {
    param_3 = 4;
  }
  uVar5 = param_5;
  if (lVar21 < 1) {
    lVar16 = (longlong)(int)param_5;
LAB_140a64084:
    if ((param_6 & 0x40) == 0) {
      if (-1 < (int)(param_5 - 1)) {
        if (6 < (int)param_5) {
          lVar17 = (longlong)(int)param_5;
          lVar19 = lVar21 + lVar17 + param_2;
          lVar8 = ((param_2 - 1) + lVar17) - (lVar21 + -1 + lVar17 + param_2);
          if ((lVar17 < lVar8) || (-lVar17 != lVar8 && lVar17 <= -lVar8)) {
            uVar7 = 0xffffffffffffffff - (-1 - lVar17);
            if ((longlong)uVar7 < 0x10) {
LAB_140a64ac4:
              uVar9 = 0;
            }
            else {
              uVar14 = param_2 & 0xf;
              if (uVar14 != 0) {
                uVar14 = 0x10 - uVar14;
              }
              if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a64ac4;
              uVar20 = 0;
              lVar8 = lVar19 - lVar17;
              uVar9 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU));
              if (uVar14 != 0) {
                do {
                  *(undefined1 *)(uVar20 + param_2) = *(undefined1 *)(uVar20 + lVar8);
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar14);
              }
              if ((lVar8 + uVar14 & 0xf) == 0) {
                do {
                  in_XMM0 = *(undefined1 (*) [16])(uVar14 + lVar8);
                  *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                  uVar14 = uVar14 + 0x10;
                } while (uVar14 < uVar9);
              }
              else {
                do {
                  in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar14 + lVar8));
                  *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                  uVar14 = uVar14 + 0x10;
                } while (uVar14 < uVar9);
              }
            }
            if (uVar9 < uVar7) {
              do {
                *(undefined1 *)(uVar9 + param_2) = *(undefined1 *)(uVar9 + (lVar19 - lVar17));
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar7);
            }
            goto LAB_140a643f0;
          }
        }
        uVar7 = 0;
        iVar6 = 1;
        lVar17 = 0;
        if (param_5 >> 1 != 0) {
          lVar8 = (longlong)(int)param_5 + param_2;
          do {
            uVar7 = uVar7 + 1;
            *(undefined1 *)(lVar17 + -1 + lVar8) = *(undefined1 *)(lVar17 + -1 + lVar21 + lVar8);
            *(undefined1 *)(lVar17 + -2 + lVar8) = *(undefined1 *)(lVar17 + -2 + lVar21 + lVar8);
            lVar17 = lVar17 + -2;
          } while (uVar7 < param_5 >> 1);
          iVar6 = (int)uVar7 * 2 + 1;
        }
        if (iVar6 - 1U < param_5) {
          *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar6) =
               *(undefined1 *)((lVar21 + (longlong)(int)param_5 + param_2) - (longlong)iVar6);
        }
      }
    }
    else {
      if ((int)(param_5 - 1) < 0) goto LAB_140a643f0;
      if (6 < (int)param_5) {
        lVar8 = (longlong)(int)param_5;
        lVar17 = ((param_2 - 1) + lVar8) - (longlong)(param_1 + -1);
        if ((lVar8 < lVar17) || (-lVar8 != lVar17 && lVar8 <= -lVar17)) {
          uVar7 = 0xffffffffffffffff - (-1 - lVar8);
          if ((longlong)uVar7 < 0x10) {
LAB_140a64acb:
            uVar9 = 0;
          }
          else {
            uVar14 = param_2 & 0xf;
            if (uVar14 != 0) {
              uVar14 = 0x10 - uVar14;
            }
            if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a64acb;
            uVar20 = 0;
            uVar9 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU));
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - lVar8];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar14);
            }
            if (((ulonglong)(param_1 + (uVar14 - lVar8)) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar14 - lVar8));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar14 - lVar8)));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
          }
          if (uVar9 < uVar7) {
            do {
              *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 - lVar8];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          goto LAB_140a643f0;
        }
      }
      uVar7 = 0;
      iVar6 = 1;
      lVar17 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = uVar7 + 1;
          *(undefined1 *)(lVar17 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar17 + -1];
          *(undefined1 *)(lVar17 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar17 + -2];
          lVar17 = lVar17 + -2;
        } while (uVar7 < param_5 >> 1);
        iVar6 = (int)uVar7 * 2 + 1;
      }
      if (iVar6 - 1U < param_5) goto LAB_140a643d3;
    }
  }
  else {
    if (param_3 < 7) {
LAB_140a63c87:
      iVar6 = 1;
      uVar7 = 0;
      if (param_3 >> 1 != 0) {
        do {
          *(undefined1 *)((longlong)(int)param_5 + param_2 + uVar7 * 2) = param_1[uVar7 * 2];
          *(undefined1 *)((longlong)(int)param_5 + param_2 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + 1]
          ;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3 >> 1);
        iVar6 = (int)uVar7 * 2;
        uVar5 = param_5 + iVar6;
        iVar6 = iVar6 + 1;
      }
      if (iVar6 - 1U < param_3) {
        uVar5 = param_5 + iVar6;
        *(undefined1 *)((longlong)iVar6 + -1 + (longlong)(int)param_5 + param_2) =
             param_1[(longlong)iVar6 + -1];
      }
    }
    else {
      uVar7 = (longlong)(int)param_5 + param_2;
      if (((longlong)(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
         ((longlong)-(uVar7 - (longlong)param_1) < (longlong)(ulonglong)param_3))
      goto LAB_140a63c87;
      if (param_3 < 0x10) {
LAB_140a64aaf:
        uVar9 = 0;
      }
      else {
        uVar14 = uVar7 & 0xf;
        if ((int)uVar14 != 0) {
          uVar14 = (ulonglong)(0x10 - (int)uVar14);
        }
        iVar6 = (int)uVar14;
        if (param_3 < iVar6 + 0x10U) goto LAB_140a64aaf;
        uVar9 = 0;
        iVar11 = param_3 - (param_3 - iVar6 & 0xf);
        if (iVar6 != 0) {
          do {
            *(undefined1 *)(uVar9 + uVar7) = param_1[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar14);
        }
        if (((ulonglong)(param_1 + uVar14) & 0xf) == 0) {
          uVar9 = (ulonglong)iVar11;
          do {
            in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar14);
            *(undefined1 (*) [16])(uVar14 + uVar7) = in_XMM0;
            uVar14 = uVar14 + 0x10;
          } while (uVar14 < uVar9);
        }
        else {
          uVar9 = (ulonglong)iVar11;
          do {
            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar14));
            *(undefined1 (*) [16])(uVar14 + uVar7) = in_XMM0;
            uVar14 = uVar14 + 0x10;
          } while (uVar14 < uVar9);
        }
      }
      for (; uVar9 < (ulonglong)(longlong)(int)param_3; uVar9 = uVar9 + 1) {
        *(undefined1 *)(uVar9 + uVar7) = param_1[uVar9];
      }
      uVar5 = param_3 + param_5;
    }
    lVar16 = (longlong)(int)uVar5;
    if (lVar21 < 5) goto LAB_140a64084;
    if ((param_6 & 0x40) == 0) {
      if ((int)(param_5 - 1) < 0) goto LAB_140a643f0;
      if (6 < (int)param_5) {
        lVar8 = (longlong)(int)param_5;
        lVar17 = ((param_2 - 1) + lVar8) - (longlong)(param_1 + lVar21 + -1);
        if ((lVar8 < lVar17) || (-lVar8 != lVar17 && lVar8 <= -lVar17)) {
          uVar7 = 0xffffffffffffffff - (-1 - lVar8);
          if ((longlong)uVar7 < 0x10) {
LAB_140a64ab6:
            uVar9 = 0;
          }
          else {
            uVar14 = param_2 & 0xf;
            if (uVar14 != 0) {
              uVar14 = 0x10 - uVar14;
            }
            if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a64ab6;
            uVar20 = 0;
            lVar17 = lVar21 - lVar8;
            uVar9 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU));
            if (uVar14 != 0) {
              do {
                *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 + lVar17];
                uVar20 = uVar20 + 1;
              } while (uVar20 < uVar14);
            }
            if (((ulonglong)(param_1 + uVar14 + lVar17) & 0xf) == 0) {
              do {
                in_XMM0 = *(undefined1 (*) [16])(param_1 + uVar14 + lVar17);
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar14 + lVar17));
                *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
                uVar14 = uVar14 + 0x10;
              } while (uVar14 < uVar9);
            }
          }
          if (uVar9 < uVar7) {
            do {
              *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 + (lVar21 - lVar8)];
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
          }
          goto LAB_140a643f0;
        }
      }
      uVar7 = 0;
      iVar6 = 1;
      lVar17 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = uVar7 + 1;
          *(undefined1 *)(lVar17 + -1 + (longlong)(int)param_5 + param_2) =
               param_1[lVar17 + -1 + lVar21];
          *(undefined1 *)(lVar17 + -2 + (longlong)(int)param_5 + param_2) =
               param_1[lVar17 + -2 + lVar21];
          lVar17 = lVar17 + -2;
        } while (uVar7 < param_5 >> 1);
        iVar6 = (int)uVar7 * 2 + 1;
      }
      if (iVar6 - 1U < param_5) {
        *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar6) =
             param_1[lVar21 - iVar6];
      }
      goto LAB_140a643f0;
    }
    if ((int)(param_5 - 1) < 0) goto LAB_140a643f0;
    if (6 < (int)param_5) {
      lVar8 = (longlong)(int)param_5;
      lVar17 = ((param_2 - 1) + lVar8) - (longlong)(param_1 + -1);
      if ((lVar8 < lVar17) || (-lVar8 != lVar17 && lVar8 <= -lVar17)) {
        uVar7 = 0xffffffffffffffff - (-1 - lVar8);
        if ((longlong)uVar7 < 0x10) {
LAB_140a64abd:
          uVar9 = 0;
        }
        else {
          uVar14 = param_2 & 0xf;
          if (uVar14 != 0) {
            uVar14 = 0x10 - uVar14;
          }
          if ((longlong)uVar7 < (longlong)(uVar14 + 0x10)) goto LAB_140a64abd;
          uVar20 = 0;
          uVar9 = (ulonglong)(int)((int)uVar7 - ((int)uVar7 - (int)uVar14 & 0xfU));
          if (uVar14 != 0) {
            do {
              *(undefined1 *)(uVar20 + param_2) = param_1[uVar20 - lVar8];
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar14);
          }
          if (((ulonglong)(param_1 + (uVar14 - lVar8)) & 0xf) == 0) {
            do {
              in_XMM0 = *(undefined1 (*) [16])(param_1 + (uVar14 - lVar8));
              *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar9);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + (uVar14 - lVar8)));
              *(undefined1 (*) [16])(uVar14 + param_2) = in_XMM0;
              uVar14 = uVar14 + 0x10;
            } while (uVar14 < uVar9);
          }
        }
        if (uVar9 < uVar7) {
          do {
            *(undefined1 *)(uVar9 + param_2) = param_1[uVar9 - lVar8];
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        goto LAB_140a643f0;
      }
    }
    uVar7 = 0;
    iVar6 = 1;
    lVar17 = 0;
    if (param_5 >> 1 != 0) {
      do {
        uVar7 = uVar7 + 1;
        *(undefined1 *)(lVar17 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar17 + -1];
        *(undefined1 *)(lVar17 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar17 + -2];
        lVar17 = lVar17 + -2;
      } while (uVar7 < param_5 >> 1);
      iVar6 = (int)uVar7 * 2 + 1;
    }
    if (param_5 <= iVar6 - 1U) goto LAB_140a643f0;
LAB_140a643d3:
    *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar6) =
         param_1[-(longlong)iVar6];
  }
LAB_140a643f0:
  iVar6 = (int)lVar16;
  if (lVar21 < 5) {
    iVar11 = -param_5;
    uVar4 = iVar11 + 4;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar4 < 1) goto LAB_140a64a87;
      if (6 < (int)uVar4) {
        uVar7 = param_2 + lVar16;
        puVar2 = param_1 + lVar21;
        uVar14 = 4 - (longlong)(int)param_5;
        if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)puVar2)) ||
           ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)puVar2))) {
          if ((longlong)uVar14 < 0x10) {
LAB_140a64ae8:
            uVar20 = 0;
          }
          else {
            uVar9 = uVar7 & 0xf;
            if (uVar9 != 0) {
              uVar9 = 0x10 - uVar9;
            }
            if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a64ae8;
            uVar13 = 0;
            uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
            if (uVar9 != 0) {
              do {
                *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar9);
            }
            if (((ulonglong)(puVar2 + uVar9) & 0xf) == 0) {
              do {
                uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar9) + 8);
                *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(puVar2 + uVar9);
                ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
            else {
              do {
                in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar9));
                *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < uVar20);
            }
          }
          for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
            *(undefined1 *)(uVar20 + uVar7) = puVar2[uVar20];
          }
          uVar5 = iVar6 + iVar11 + 4;
          goto LAB_140a64a87;
        }
      }
      iVar11 = 1;
      uVar7 = 0;
      if (uVar4 >> 1 != 0) {
        do {
          *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21];
          *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + lVar21 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4 >> 1);
        iVar11 = (int)uVar7 * 2;
        uVar5 = iVar6 + iVar11;
        iVar11 = iVar11 + 1;
      }
      if (iVar11 - 1U < uVar4) {
        uVar5 = iVar6 + iVar11;
        *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar16) =
             param_1[(longlong)iVar11 + -1 + lVar21];
      }
      goto LAB_140a64a87;
    }
    if ((int)uVar4 < 1) goto LAB_140a64a87;
    if (6 < (int)uVar4) {
      uVar7 = param_2 + lVar16;
      lVar17 = lVar16 + (param_2 - lVar21);
      uVar14 = 4 - (longlong)(int)param_5;
      lVar8 = uVar7 - lVar17;
      if (((longlong)uVar14 <= lVar8) || ((longlong)uVar14 <= -lVar8)) {
        if ((longlong)uVar14 < 0x10) {
LAB_140a64ae0:
          uVar20 = 0;
        }
        else {
          uVar9 = uVar7 & 0xf;
          if (uVar9 != 0) {
            uVar9 = 0x10 - uVar9;
          }
          if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a64ae0;
          lVar8 = (param_2 - lVar21) + lVar16;
          uVar13 = 0;
          uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
          if (uVar9 != 0) {
            do {
              *(undefined1 *)(uVar13 + uVar7) = *(undefined1 *)(uVar13 + lVar8);
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar9);
          }
          if ((lVar17 + uVar9 & 0xf) == 0) {
            do {
              uVar24 = ((undefined8 *)(uVar9 + lVar8))[1];
              *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(uVar9 + lVar8);
              ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(uVar9 + lVar8));
              *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
        }
        if (uVar20 < uVar14) {
          do {
            *(undefined1 *)(uVar20 + uVar7) = *(undefined1 *)(uVar20 + (param_2 - lVar21) + lVar16);
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar14);
        }
        uVar5 = iVar6 + iVar11 + 4;
        goto LAB_140a64a87;
      }
    }
    iVar11 = 1;
    uVar7 = 0;
    if (uVar4 >> 1 != 0) {
      lVar17 = (param_2 - lVar21) + lVar16;
      do {
        *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = *(undefined1 *)(lVar17 + uVar7 * 2);
        *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = *(undefined1 *)(lVar17 + 1 + uVar7 * 2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4 >> 1);
      iVar11 = (int)uVar7 * 2;
      uVar5 = iVar6 + iVar11;
      iVar11 = iVar11 + 1;
    }
    if (iVar11 - 1U < uVar4) {
      uVar5 = iVar6 + iVar11;
      *(undefined1 *)((longlong)iVar11 + -1 + param_2 + lVar16) =
           *(undefined1 *)((longlong)iVar11 + -1 + (param_2 - lVar21) + lVar16);
    }
    goto LAB_140a64a87;
  }
  puVar2 = param_1 + lVar21;
  uVar4 = iVar6 + 4;
  *(undefined1 *)(lVar16 + param_2) = puVar2[-4];
  iVar6 = -param_5;
  *(undefined1 *)(lVar16 + 1 + param_2) = puVar2[-3];
  *(undefined1 *)(lVar16 + 2 + param_2) = puVar2[-2];
  *(undefined1 *)(lVar16 + 3 + param_2) = puVar2[-1];
  uVar10 = iVar6 + 4;
  uVar5 = uVar4;
  if ((param_6 & 0x80) != 0) {
    lVar16 = (longlong)(int)uVar4;
    if ((int)uVar10 < 1) goto LAB_140a64a87;
    if (6 < (int)uVar10) {
      uVar7 = param_2 + lVar16;
      uVar14 = 4 - (longlong)(int)param_5;
      if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)puVar2)) ||
         ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)puVar2))) {
        if ((longlong)uVar14 < 0x10) {
LAB_140a64ad9:
          uVar20 = 0;
        }
        else {
          uVar9 = uVar7 & 0xf;
          if (uVar9 != 0) {
            uVar9 = 0x10 - uVar9;
          }
          if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a64ad9;
          uVar13 = 0;
          uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
          if (uVar9 != 0) {
            do {
              *(undefined1 *)(uVar13 + uVar7) = puVar2[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar9);
          }
          if (((ulonglong)(puVar2 + uVar9) & 0xf) == 0) {
            do {
              uVar24 = *(undefined8 *)((longlong)(puVar2 + uVar9) + 8);
              *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(puVar2 + uVar9);
              ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
          else {
            do {
              in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(puVar2 + uVar9));
              *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
              uVar9 = uVar9 + 0x10;
            } while (uVar9 < uVar20);
          }
        }
        for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
          *(undefined1 *)(uVar20 + uVar7) = puVar2[uVar20];
        }
        uVar5 = uVar4 + iVar6 + 4;
        goto LAB_140a64a87;
      }
    }
    iVar6 = 1;
    uVar7 = 0;
    if (uVar10 >> 1 != 0) {
      do {
        *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = puVar2[uVar7 * 2];
        *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = puVar2[uVar7 * 2 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10 >> 1);
      iVar6 = (int)uVar7 * 2;
      uVar5 = uVar4 + iVar6;
      iVar6 = iVar6 + 1;
    }
    if (iVar6 - 1U < uVar10) {
      uVar5 = uVar4 + iVar6;
      *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = puVar2[(longlong)iVar6 + -1];
    }
    goto LAB_140a64a87;
  }
  lVar16 = (longlong)(int)uVar4;
  if ((int)uVar10 < 1) goto LAB_140a64a87;
  if (6 < (int)uVar10) {
    uVar7 = param_2 + lVar16;
    uVar14 = 4 - (longlong)(int)param_5;
    if (((longlong)uVar14 <= (longlong)(uVar7 - (longlong)param_1)) ||
       ((longlong)uVar14 <= (longlong)-(uVar7 - (longlong)param_1))) {
      if ((longlong)uVar14 < 0x10) {
LAB_140a64ad2:
        uVar20 = 0;
      }
      else {
        uVar9 = uVar7 & 0xf;
        if (uVar9 != 0) {
          uVar9 = 0x10 - uVar9;
        }
        if ((longlong)uVar14 < (longlong)(uVar9 + 0x10)) goto LAB_140a64ad2;
        uVar13 = 0;
        uVar20 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar9 & 0xfU));
        if (uVar9 != 0) {
          do {
            *(undefined1 *)(uVar13 + uVar7) = param_1[uVar13];
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar9);
        }
        if (((ulonglong)(param_1 + uVar9) & 0xf) == 0) {
          do {
            uVar24 = *(undefined8 *)((longlong)(param_1 + uVar9) + 8);
            *(undefined8 *)(uVar9 + uVar7) = *(undefined8 *)(param_1 + uVar9);
            ((undefined8 *)(uVar9 + uVar7))[1] = uVar24;
            uVar9 = uVar9 + 0x10;
          } while (uVar9 < uVar20);
        }
        else {
          do {
            in_XMM0 = lddqu(in_XMM0,*(undefined1 (*) [16])(param_1 + uVar9));
            *(undefined1 (*) [16])(uVar9 + uVar7) = in_XMM0;
            uVar9 = uVar9 + 0x10;
          } while (uVar9 < uVar20);
        }
      }
      for (; uVar20 < uVar14; uVar20 = uVar20 + 1) {
        *(undefined1 *)(uVar20 + uVar7) = param_1[uVar20];
      }
      uVar5 = uVar4 + iVar6 + 4;
      goto LAB_140a64a87;
    }
  }
  iVar6 = 1;
  uVar7 = 0;
  if (uVar10 >> 1 != 0) {
    do {
      *(undefined1 *)(param_2 + lVar16 + uVar7 * 2) = param_1[uVar7 * 2];
      *(undefined1 *)(param_2 + lVar16 + 1 + uVar7 * 2) = param_1[uVar7 * 2 + 1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10 >> 1);
    iVar6 = (int)uVar7 * 2;
    uVar5 = uVar4 + iVar6;
    iVar6 = iVar6 + 1;
  }
  if (iVar6 - 1U < uVar10) {
    *(undefined1 *)((longlong)iVar6 + -1 + param_2 + lVar16) = param_1[(longlong)iVar6 + -1];
    uVar5 = uVar4 + iVar6;
  }
LAB_140a64a87:
  uVar5 = uVar5 - (8 - param_5);
  if (lVar21 < 5) {
    uVar5 = param_5;
  }
  return uVar5;
}

