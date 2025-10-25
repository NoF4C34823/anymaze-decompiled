
ulonglong FUN_140ab5da0(undefined1 *param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                       uint param_5,uint param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  bool bVar31;
  longlong lStack_60;
  ulonglong uStack_58;
  
  lVar13 = (longlong)(int)param_3;
  uVar14 = param_6 & 0xf;
  uVar23 = (ulonglong)param_5;
  if (lVar13 == 1) {
    if (uVar14 == 6) goto LAB_140ab8d9c;
    if ((param_6 & 0xc0) == 0) {
      uVar14 = 1;
    }
  }
  else if (uVar14 == 6) {
LAB_140ab8d9c:
    uVar17 = 0;
    uVar14 = 0;
    uVar19 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        if (0x1f < (int)param_5) {
          if ((int)param_5 < 0x871) {
            uVar23 = 0;
            uVar17 = param_5 & 0xffffffe0;
          }
          else {
            uVar23 = param_2 & 0x1f;
            if ((int)uVar23 != 0) {
              uVar23 = (ulonglong)(0x20 - (int)uVar23);
            }
            iVar18 = (int)uVar23;
            if ((int)param_5 < iVar18 + 0x20) goto LAB_140ab8e58;
            uVar17 = param_5 - (param_5 - iVar18 & 0x1f);
            uVar12 = 0;
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar12 + param_2) = param_7;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar23);
            }
          }
          do {
            puVar4 = (undefined1 *)(uVar23 + param_2);
            *puVar4 = param_7;
            puVar4[1] = param_7;
            puVar4[2] = param_7;
            puVar4[3] = param_7;
            puVar4[4] = param_7;
            puVar4[5] = param_7;
            puVar4[6] = param_7;
            puVar4[7] = param_7;
            puVar4[8] = param_7;
            puVar4[9] = param_7;
            puVar4[10] = param_7;
            puVar4[0xb] = param_7;
            puVar4[0xc] = param_7;
            puVar4[0xd] = param_7;
            puVar4[0xe] = param_7;
            puVar4[0xf] = param_7;
            puVar4[0x10] = param_7;
            puVar4[0x11] = param_7;
            puVar4[0x12] = param_7;
            puVar4[0x13] = param_7;
            puVar4[0x14] = param_7;
            puVar4[0x15] = param_7;
            puVar4[0x16] = param_7;
            puVar4[0x17] = param_7;
            puVar4[0x18] = param_7;
            puVar4[0x19] = param_7;
            puVar4[0x1a] = param_7;
            puVar4[0x1b] = param_7;
            puVar4[0x1c] = param_7;
            puVar4[0x1d] = param_7;
            puVar4[0x1e] = param_7;
            puVar4[0x1f] = param_7;
            uVar23 = uVar23 + 0x20;
          } while (uVar23 < (ulonglong)(longlong)(int)uVar17);
        }
LAB_140ab8e58:
        uVar19 = uVar17;
        if (uVar17 + 1 <= param_5) {
          lVar11 = (longlong)(int)uVar17;
          uVar23 = (int)param_5 - lVar11;
          if ((longlong)uVar23 < 8) {
            uVar14 = 0;
          }
          else {
            uVar14 = (uint)uVar23 & 0xfffffff8;
            uVar12 = 0;
            do {
              *(ulonglong *)(uVar12 + param_2 + lVar11) =
                   CONCAT17(param_7,CONCAT16(param_7,CONCAT15(param_7,CONCAT14(param_7,CONCAT13(
                                                  param_7,CONCAT12(param_7,CONCAT11(param_7,param_7)
                                                                  ))))));
              uVar12 = uVar12 + 8;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
            uVar19 = uVar17 + uVar14;
          }
          uVar12 = (ulonglong)(int)uVar14;
          if (uVar12 < uVar23) {
            do {
              *(undefined1 *)(uVar12 + lVar11 + param_2) = param_7;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar23);
            uVar19 = (int)uVar12 + uVar17;
          }
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        lVar11 = (longlong)(int)param_5;
        if ((lVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           (lVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((int)param_5 < 0x20) {
LAB_140ab966e:
            uVar14 = 0;
          }
          else {
            if ((int)param_5 < 0xa71) {
              uVar14 = param_5 & 0xffffffe0;
              lVar20 = (longlong)param_1 - lVar11;
              uVar23 = 0;
            }
            else {
              uVar23 = param_2 & 0x1f;
              if ((int)uVar23 != 0) {
                uVar23 = (ulonglong)(0x20 - (int)uVar23);
              }
              iVar18 = (int)uVar23;
              if ((int)param_5 < iVar18 + 0x20) goto LAB_140ab966e;
              lVar20 = (longlong)param_1 - lVar11;
              uVar12 = 0;
              uVar14 = param_5 - (param_5 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar12 + param_2) = *(undefined1 *)(uVar12 + lVar20);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar23);
              }
            }
            do {
              puVar2 = (undefined8 *)(uVar23 + lVar20);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar23 + param_2);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar23 = uVar23 + 0x20;
            } while (uVar23 < (ulonglong)(longlong)(int)uVar14);
          }
          uVar19 = param_5;
          if (uVar14 + 1 <= param_5) {
            lVar20 = (longlong)(int)uVar14;
            uVar23 = lVar11 - lVar20;
            if ((longlong)uVar23 < 8) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)(int)((uint)uVar23 & 0xfffffff8);
              uVar24 = 0;
              do {
                *(undefined8 *)(uVar24 + param_2 + lVar20) =
                     *(undefined8 *)(param_1 + uVar24 + (lVar20 - lVar11));
                uVar24 = uVar24 + 8;
              } while (uVar24 < uVar12);
            }
            if (uVar12 < uVar23) {
              do {
                *(undefined1 *)(uVar12 + lVar20 + param_2) = param_1[uVar12 + (lVar20 - lVar11)];
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar23);
            }
          }
          goto LAB_140ab90c2;
        }
      }
      uVar17 = 1;
      uVar23 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar12 = uVar23;
          *(undefined1 *)(param_2 + uVar12 * 2) = param_1[uVar12 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar12 * 2) =
               param_1[uVar12 * 2 + (1 - (longlong)(int)param_5)];
          uVar23 = uVar12 + 1;
        } while (uVar23 < param_5 >> 1);
        uVar14 = (int)uVar23 * 2;
        uVar17 = (int)uVar12 + 2 + (int)uVar23;
      }
      uVar19 = uVar14;
      if (uVar17 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar17 + -1 + param_2) =
             param_1[((longlong)(int)uVar17 + -1) - (longlong)(int)param_5];
        uVar19 = uVar17;
      }
    }
LAB_140ab90c2:
    uVar23 = (ulonglong)param_3;
    if (4 < param_3) {
      uVar23 = 4;
    }
    uVar14 = uVar19;
    if (lVar13 < 1) {
LAB_140ab92d9:
      uVar19 = 4 - param_5;
      lVar11 = (longlong)(int)uVar14;
      if ((param_6 & 0x80) == 0) {
        if (0 < (int)uVar19) goto LAB_140ab931c;
      }
      else if (0 < (int)uVar19) goto LAB_140ab9462;
    }
    else {
      uVar17 = (uint)uVar23;
      if (uVar17 < 7) {
LAB_140ab9239:
        iVar18 = 1;
        if (uVar17 >> 1 != 0) {
          uVar23 = 0;
          do {
            uVar12 = uVar23;
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + uVar12 * 2) = param_1[uVar12 * 2];
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + 1 + uVar12 * 2) =
                 param_1[uVar12 * 2 + 1];
            uVar23 = uVar12 + 1;
          } while (uVar23 < uVar17 >> 1);
          uVar14 = uVar19 + (int)uVar23 * 2;
          iVar18 = (int)uVar12 + 2 + (int)uVar23;
        }
        if (iVar18 - 1U < uVar17) {
          uVar14 = iVar18 + uVar19;
          *(undefined1 *)((longlong)iVar18 + -1 + (longlong)(int)uVar19 + param_2) =
               param_1[(longlong)iVar18 + -1];
        }
      }
      else {
        uVar12 = (longlong)(int)uVar19 + param_2;
        if (((longlong)(uVar12 - (longlong)param_1) < (longlong)uVar23) &&
           ((longlong)-(uVar12 - (longlong)param_1) < (longlong)uVar23)) goto LAB_140ab9239;
        if (uVar17 < 0x20) {
LAB_140ab968f:
          uVar14 = 0;
        }
        else {
          if (uVar17 < 0xa71) {
            uVar23 = 0;
            uVar14 = uVar17 & 0xffffffe0;
          }
          else {
            uVar23 = uVar12 & 0x1f;
            if ((int)uVar23 != 0) {
              uVar23 = (ulonglong)(0x20 - (int)uVar23);
            }
            iVar18 = (int)uVar23;
            if (uVar17 < iVar18 + 0x20U) goto LAB_140ab968f;
            uVar24 = 0;
            uVar14 = uVar17 - (uVar17 - iVar18 & 0x1f);
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar24 + uVar12) = param_1[uVar24];
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar23);
            }
          }
          do {
            puVar2 = (undefined8 *)(param_1 + uVar23);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar23 + uVar12);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar23 = uVar23 + 0x20;
          } while (uVar23 < (ulonglong)(longlong)(int)uVar14);
        }
        if (uVar14 + 1 <= uVar17) {
          uVar15 = uVar17 - uVar14;
          if (uVar15 < 8) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar15 & 0xfffffff8;
            uVar28 = 0;
            lVar11 = 0;
            do {
              iVar18 = uVar14 + uVar28;
              uVar28 = uVar28 + 8;
              *(undefined8 *)(lVar11 + (longlong)(int)(uVar14 + uVar19) + param_2) =
                   *(undefined8 *)(param_1 + iVar18);
              lVar11 = lVar11 + 8;
            } while (uVar28 < uVar9);
          }
          lVar20 = (longlong)(int)uVar9;
          lVar11 = (longlong)(int)(uVar14 + uVar9);
          if (uVar9 < uVar15) {
            do {
              uVar9 = uVar9 + 1;
              *(undefined1 *)(lVar20 + (longlong)(int)(uVar14 + uVar19) + param_2) = param_1[lVar11]
              ;
              lVar20 = lVar20 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar9 < uVar15);
          }
        }
        uVar14 = uVar19 + uVar17;
      }
      lVar11 = (longlong)(int)uVar14;
      if (4 < lVar13) {
        uVar14 = uVar14 + 4;
        *(undefined1 *)(lVar11 + param_2) = param_1[lVar13 + -4];
        *(undefined1 *)(lVar11 + 1 + param_2) = param_1[lVar13 + -3];
        *(undefined1 *)(lVar11 + 2 + param_2) = param_1[lVar13 + -2];
        *(undefined1 *)(lVar11 + 3 + param_2) = param_1[lVar13 + -1];
        goto LAB_140ab92d9;
      }
      uVar19 = 4 - param_5;
      if ((param_6 & 0x80) == 0) {
        if ((int)uVar19 < 1) goto LAB_140ab6402;
LAB_140ab931c:
        iVar18 = (int)lVar11;
        if ((int)uVar19 < 0x20) {
LAB_140ab96ac:
          uVar17 = 0;
        }
        else {
          uVar23 = param_2 + lVar11;
          if ((int)uVar19 < 0x871) {
            uVar12 = 0;
            uVar17 = uVar19 & 0xffffffe0;
          }
          else {
            uVar12 = uVar23 & 0x1f;
            if ((int)uVar12 != 0) {
              uVar12 = (ulonglong)(0x20 - (int)uVar12);
            }
            iVar16 = (int)uVar12;
            if ((int)uVar19 < iVar16 + 0x20) goto LAB_140ab96ac;
            uVar24 = 0;
            uVar17 = uVar19 - (uVar19 - iVar16 & 0x1f);
            if (iVar16 != 0) {
              do {
                *(undefined1 *)(uVar24 + uVar23) = param_7;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          do {
            puVar4 = (undefined1 *)(uVar12 + uVar23);
            *puVar4 = param_7;
            puVar4[1] = param_7;
            puVar4[2] = param_7;
            puVar4[3] = param_7;
            puVar4[4] = param_7;
            puVar4[5] = param_7;
            puVar4[6] = param_7;
            puVar4[7] = param_7;
            puVar4[8] = param_7;
            puVar4[9] = param_7;
            puVar4[10] = param_7;
            puVar4[0xb] = param_7;
            puVar4[0xc] = param_7;
            puVar4[0xd] = param_7;
            puVar4[0xe] = param_7;
            puVar4[0xf] = param_7;
            puVar4[0x10] = param_7;
            puVar4[0x11] = param_7;
            puVar4[0x12] = param_7;
            puVar4[0x13] = param_7;
            puVar4[0x14] = param_7;
            puVar4[0x15] = param_7;
            puVar4[0x16] = param_7;
            puVar4[0x17] = param_7;
            puVar4[0x18] = param_7;
            puVar4[0x19] = param_7;
            puVar4[0x1a] = param_7;
            puVar4[0x1b] = param_7;
            puVar4[0x1c] = param_7;
            puVar4[0x1d] = param_7;
            puVar4[0x1e] = param_7;
            puVar4[0x1f] = param_7;
            uVar12 = uVar12 + 0x20;
          } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
          uVar14 = iVar18 + uVar17;
        }
        if (uVar17 + 1 <= uVar19) {
          lVar20 = (longlong)(int)uVar17;
          uVar23 = (int)uVar19 - lVar20;
          if ((longlong)uVar23 < 8) {
            uVar19 = 0;
          }
          else {
            uVar19 = (uint)uVar23 & 0xfffffff8;
            uVar12 = 0;
            do {
              *(ulonglong *)(uVar12 + param_2 + lVar11 + lVar20) =
                   CONCAT17(param_7,CONCAT16(param_7,CONCAT15(param_7,CONCAT14(param_7,CONCAT13(
                                                  param_7,CONCAT12(param_7,CONCAT11(param_7,param_7)
                                                                  ))))));
              uVar12 = uVar12 + 8;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar19);
            uVar14 = iVar18 + uVar17 + uVar19;
          }
          uVar12 = (ulonglong)(int)uVar19;
          if (uVar12 < uVar23) {
            do {
              *(undefined1 *)(uVar12 + param_2 + lVar11 + lVar20) = param_7;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar23);
            uVar14 = (int)uVar12 + iVar18 + uVar17;
          }
        }
      }
      else {
        if ((int)uVar19 < 1) goto LAB_140ab6402;
LAB_140ab9462:
        iVar18 = (int)lVar11;
        if (6 < (int)uVar19) {
          uVar23 = param_2 + lVar11;
          puVar4 = param_1 + lVar13;
          if ((4 - (longlong)(int)param_5 <= (longlong)(uVar23 - (longlong)puVar4)) ||
             (4 - (longlong)(int)param_5 <= (longlong)-(uVar23 - (longlong)puVar4))) {
            if ((int)uVar19 < 0x20) {
LAB_140ab96c8:
              uVar14 = 0;
            }
            else {
              if ((int)uVar19 < 0xa71) {
                uVar12 = 0;
                uVar14 = uVar19 & 0xffffffe0;
              }
              else {
                uVar12 = uVar23 & 0x1f;
                if ((int)uVar12 != 0) {
                  uVar12 = (ulonglong)(0x20 - (int)uVar12);
                }
                iVar16 = (int)uVar12;
                if ((int)uVar19 < iVar16 + 0x20) goto LAB_140ab96c8;
                uVar24 = 0;
                uVar14 = uVar19 - (uVar19 - iVar16 & 0x1f);
                if (iVar16 != 0) {
                  do {
                    *(undefined1 *)(uVar24 + uVar23) = puVar4[uVar24];
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar12);
                }
              }
              do {
                puVar2 = (undefined8 *)(puVar4 + uVar12);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                puVar3 = (undefined8 *)(uVar12 + uVar23);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                uVar12 = uVar12 + 0x20;
              } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
            }
            if (uVar14 + 1 <= uVar19) {
              lVar11 = (longlong)(int)uVar14;
              uVar12 = (int)uVar19 - lVar11;
              if ((longlong)uVar12 < 8) {
                uVar24 = 0;
              }
              else {
                uVar25 = 0;
                uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
                do {
                  *(undefined8 *)(uVar25 + uVar23 + lVar11) =
                       *(undefined8 *)(puVar4 + uVar25 + lVar11);
                  uVar25 = uVar25 + 8;
                } while (uVar25 < uVar24);
              }
              if (uVar24 < uVar12) {
                do {
                  *(undefined1 *)(uVar24 + uVar23 + lVar11) = puVar4[uVar24 + lVar11];
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            uVar14 = iVar18 + uVar19;
            goto LAB_140ab9622;
          }
        }
        iVar16 = 1;
        if (uVar19 >> 1 != 0) {
          uVar23 = 0;
          do {
            uVar12 = uVar23;
            *(undefined1 *)(param_2 + lVar11 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13];
            *(undefined1 *)(param_2 + lVar11 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13 + 1];
            uVar23 = uVar12 + 1;
          } while (uVar23 < uVar19 >> 1);
          uVar14 = iVar18 + (int)uVar23 * 2;
          iVar16 = (int)uVar12 + 2 + (int)uVar23;
        }
        if (iVar16 - 1U < uVar19) {
          uVar14 = iVar18 + iVar16;
          *(undefined1 *)((longlong)iVar16 + -1 + param_2 + lVar11) =
               param_1[(longlong)iVar16 + -1 + lVar13];
        }
      }
    }
LAB_140ab9622:
    if (4 < lVar13) {
      return (ulonglong)(uVar14 - (8 - param_5));
    }
    goto LAB_140ab6402;
  }
  if (uVar14 == 1) {
    uVar5 = *param_1;
    uVar17 = 0;
    uVar14 = 0;
    uVar19 = 0;
    if ((param_6 & 0x40) == 0) {
      if (0 < (int)param_5) {
        if (0x1f < (int)param_5) {
          if ((int)param_5 < 0x871) {
            uVar12 = 0;
            uVar17 = param_5 & 0xffffffe0;
          }
          else {
            uVar12 = param_2 & 0x1f;
            if ((int)uVar12 != 0) {
              uVar12 = (ulonglong)(0x20 - (int)uVar12);
            }
            iVar18 = (int)uVar12;
            if ((int)param_5 < iVar18 + 0x20) goto LAB_140ab8556;
            uVar17 = param_5 - (param_5 - iVar18 & 0x1f);
            uVar24 = 0;
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar24 + param_2) = uVar5;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          do {
            puVar4 = (undefined1 *)(uVar12 + param_2);
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            puVar4[2] = uVar5;
            puVar4[3] = uVar5;
            puVar4[4] = uVar5;
            puVar4[5] = uVar5;
            puVar4[6] = uVar5;
            puVar4[7] = uVar5;
            puVar4[8] = uVar5;
            puVar4[9] = uVar5;
            puVar4[10] = uVar5;
            puVar4[0xb] = uVar5;
            puVar4[0xc] = uVar5;
            puVar4[0xd] = uVar5;
            puVar4[0xe] = uVar5;
            puVar4[0xf] = uVar5;
            puVar4[0x10] = uVar5;
            puVar4[0x11] = uVar5;
            puVar4[0x12] = uVar5;
            puVar4[0x13] = uVar5;
            puVar4[0x14] = uVar5;
            puVar4[0x15] = uVar5;
            puVar4[0x16] = uVar5;
            puVar4[0x17] = uVar5;
            puVar4[0x18] = uVar5;
            puVar4[0x19] = uVar5;
            puVar4[0x1a] = uVar5;
            puVar4[0x1b] = uVar5;
            puVar4[0x1c] = uVar5;
            puVar4[0x1d] = uVar5;
            puVar4[0x1e] = uVar5;
            puVar4[0x1f] = uVar5;
            uVar12 = uVar12 + 0x20;
          } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
        }
LAB_140ab8556:
        uVar19 = uVar17;
        if (uVar17 + 1 <= param_5) {
          lVar11 = (longlong)(int)uVar17;
          uVar12 = (int)param_5 - lVar11;
          if ((longlong)uVar12 < 8) {
            uVar14 = 0;
          }
          else {
            uVar14 = (uint)uVar12 & 0xfffffff8;
            uVar24 = 0;
            do {
              *(ulonglong *)(uVar24 + param_2 + lVar11) =
                   CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,
                                                  CONCAT12(uVar5,CONCAT11(uVar5,uVar5)))))));
              uVar24 = uVar24 + 8;
            } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
            uVar19 = uVar17 + uVar14;
          }
          uVar24 = (ulonglong)(int)uVar14;
          if (uVar24 < uVar12) {
            do {
              *(undefined1 *)(uVar24 + lVar11 + param_2) = uVar5;
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar12);
            uVar19 = (int)uVar24 + uVar17;
          }
        }
      }
    }
    else if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        lVar11 = (longlong)(int)param_5;
        if ((lVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           (lVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((int)param_5 < 0x20) {
LAB_140ab8d28:
            uVar14 = 0;
          }
          else {
            if ((int)param_5 < 0xa71) {
              uVar14 = param_5 & 0xffffffe0;
              lVar20 = (longlong)param_1 - lVar11;
              uVar12 = 0;
            }
            else {
              uVar12 = param_2 & 0x1f;
              if ((int)uVar12 != 0) {
                uVar12 = (ulonglong)(0x20 - (int)uVar12);
              }
              iVar18 = (int)uVar12;
              if ((int)param_5 < iVar18 + 0x20) goto LAB_140ab8d28;
              lVar20 = (longlong)param_1 - lVar11;
              uVar24 = 0;
              uVar14 = param_5 - (param_5 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar24 + param_2) = *(undefined1 *)(uVar24 + lVar20);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            do {
              puVar2 = (undefined8 *)(uVar12 + lVar20);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar12 + param_2);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar12 = uVar12 + 0x20;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
          }
          uVar19 = param_5;
          if (uVar14 + 1 <= param_5) {
            lVar20 = (longlong)(int)uVar14;
            uVar12 = lVar11 - lVar20;
            if ((longlong)uVar12 < 8) {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
              uVar25 = 0;
              do {
                *(undefined8 *)(uVar25 + param_2 + lVar20) =
                     *(undefined8 *)(param_1 + uVar25 + (lVar20 - lVar11));
                uVar25 = uVar25 + 8;
              } while (uVar25 < uVar24);
            }
            if (uVar24 < uVar12) {
              do {
                *(undefined1 *)(uVar24 + lVar20 + param_2) = param_1[uVar24 + (lVar20 - lVar11)];
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          goto LAB_140ab87c3;
        }
      }
      uVar17 = 1;
      uVar12 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar24 = uVar12;
          *(undefined1 *)(param_2 + uVar24 * 2) = param_1[uVar24 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar24 * 2) =
               param_1[uVar24 * 2 + (1 - (longlong)(int)param_5)];
          uVar12 = uVar24 + 1;
        } while (uVar12 < param_5 >> 1);
        uVar14 = (int)uVar12 * 2;
        uVar17 = (int)uVar24 + 2 + (int)uVar12;
      }
      uVar19 = uVar14;
      if (uVar17 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar17 + -1 + param_2) =
             param_1[((longlong)(int)uVar17 + -1) - (longlong)(int)param_5];
        uVar19 = uVar17;
      }
    }
LAB_140ab87c3:
    if (4 < param_3) {
      param_3 = 4;
    }
    if (0 < lVar13) {
      if (param_3 < 7) {
LAB_140ab893b:
        iVar18 = 1;
        uVar14 = uVar19;
        if (param_3 >> 1 != 0) {
          uVar12 = 0;
          do {
            uVar24 = uVar12;
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + uVar24 * 2) = param_1[uVar24 * 2];
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + 1 + uVar24 * 2) =
                 param_1[uVar24 * 2 + 1];
            uVar12 = uVar24 + 1;
          } while (uVar12 < param_3 >> 1);
          uVar14 = uVar19 + (int)uVar12 * 2;
          iVar18 = (int)uVar24 + 2 + (int)uVar12;
        }
        if (iVar18 - 1U < param_3) {
          *(undefined1 *)((longlong)iVar18 + -1 + (longlong)(int)uVar19 + param_2) =
               param_1[(longlong)iVar18 + -1];
          uVar14 = iVar18 + uVar19;
        }
      }
      else {
        uVar12 = (longlong)(int)uVar19 + param_2;
        if (((longlong)(uVar12 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar12 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140ab893b;
        if (param_3 < 0x20) {
LAB_140ab8d4a:
          uVar14 = 0;
        }
        else {
          if (param_3 < 0xa71) {
            uVar24 = 0;
            uVar14 = param_3 & 0xffffffe0;
          }
          else {
            uVar24 = uVar12 & 0x1f;
            if ((int)uVar24 != 0) {
              uVar24 = (ulonglong)(0x20 - (int)uVar24);
            }
            iVar18 = (int)uVar24;
            if (param_3 < iVar18 + 0x20U) goto LAB_140ab8d4a;
            uVar25 = 0;
            uVar14 = param_3 - (param_3 - iVar18 & 0x1f);
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar25 + uVar12) = param_1[uVar25];
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar24);
            }
          }
          do {
            puVar2 = (undefined8 *)(param_1 + uVar24);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar24 + uVar12);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar24 = uVar24 + 0x20;
          } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
        }
        if (uVar14 + 1 <= param_3) {
          uVar17 = param_3 - uVar14;
          if (uVar17 < 8) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar17 & 0xfffffff8;
            uVar9 = 0;
            lVar11 = 0;
            do {
              iVar18 = uVar9 + uVar14;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(lVar11 + (longlong)(int)(uVar14 + uVar19) + param_2) =
                   *(undefined8 *)(param_1 + iVar18);
              lVar11 = lVar11 + 8;
            } while (uVar9 < uVar15);
          }
          lVar11 = (longlong)(int)uVar15;
          lVar20 = (longlong)(int)(uVar14 + uVar15);
          if (uVar15 < uVar17) {
            do {
              uVar15 = uVar15 + 1;
              *(undefined1 *)(lVar11 + (longlong)(int)(uVar14 + uVar19) + param_2) = param_1[lVar20]
              ;
              lVar11 = lVar11 + 1;
              lVar20 = lVar20 + 1;
            } while (uVar15 < uVar17);
          }
        }
        uVar14 = uVar19 + param_3;
      }
      uVar19 = uVar14;
      if (4 < lVar13) {
        lVar11 = (longlong)(int)uVar19;
        uVar19 = uVar19 + 4;
        *(undefined1 *)(lVar11 + param_2) = param_1[lVar13 + -4];
        *(undefined1 *)(lVar11 + 1 + param_2) = param_1[lVar13 + -3];
        *(undefined1 *)(lVar11 + 2 + param_2) = param_1[lVar13 + -2];
        *(undefined1 *)(lVar11 + 3 + param_2) = param_1[lVar13 + -1];
      }
    }
    param_1 = param_1 + lVar13;
    lVar11 = (longlong)(int)uVar19;
    uVar5 = param_1[-1];
    uVar17 = -param_5 + 4;
    uVar14 = uVar19;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar17 < 1) goto LAB_140ab8ce1;
      if (6 < (int)uVar17) {
        uVar12 = param_2 + lVar11;
        if ((4 - (longlong)(int)param_5 <= (longlong)(uVar12 - (longlong)param_1)) ||
           (4 - (longlong)(int)param_5 <= (longlong)-(uVar12 - (longlong)param_1))) {
          if ((int)uVar17 < 0x20) {
LAB_140ab8d85:
            uVar14 = 0;
          }
          else {
            if ((int)uVar17 < 0xa71) {
              uVar24 = 0;
              uVar14 = uVar17 & 0xffffffe0;
            }
            else {
              uVar24 = uVar12 & 0x1f;
              if ((int)uVar24 != 0) {
                uVar24 = (ulonglong)(0x20 - (int)uVar24);
              }
              iVar18 = (int)uVar24;
              if ((int)uVar17 < iVar18 + 0x20) goto LAB_140ab8d85;
              uVar25 = 0;
              uVar14 = uVar17 - (uVar17 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar25 + uVar12) = param_1[uVar25];
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar24);
              }
            }
            do {
              puVar2 = (undefined8 *)(param_1 + uVar24);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar24 + uVar12);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar24 = uVar24 + 0x20;
            } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
          }
          if (uVar14 + 1 <= uVar17) {
            lVar11 = (longlong)(int)uVar14;
            uVar24 = (int)uVar17 - lVar11;
            if ((longlong)uVar24 < 8) {
              uVar25 = 0;
            }
            else {
              uVar26 = 0;
              uVar25 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
              do {
                *(undefined8 *)(uVar26 + uVar12 + lVar11) =
                     *(undefined8 *)(param_1 + uVar26 + lVar11);
                uVar26 = uVar26 + 8;
              } while (uVar26 < uVar25);
            }
            if (uVar25 < uVar24) {
              do {
                *(undefined1 *)(uVar25 + uVar12 + lVar11) = param_1[uVar25 + lVar11];
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar24);
            }
          }
          uVar14 = uVar19 + 4 + -param_5;
          goto LAB_140ab8ce1;
        }
      }
      iVar18 = 1;
      if (uVar17 >> 1 != 0) {
        uVar12 = 0;
        do {
          uVar24 = uVar12;
          *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = param_1[uVar24 * 2];
          *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) = param_1[uVar24 * 2 + 1];
          uVar12 = uVar24 + 1;
        } while (uVar12 < uVar17 >> 1);
        uVar14 = uVar19 + (int)uVar12 * 2;
        iVar18 = (int)uVar24 + 2 + (int)uVar12;
      }
      if (iVar18 - 1U < uVar17) {
        uVar14 = uVar19 + iVar18;
        *(undefined1 *)((longlong)iVar18 + -1 + param_2 + lVar11) = param_1[(longlong)iVar18 + -1];
      }
      goto LAB_140ab8ce1;
    }
    if ((int)uVar17 < 1) goto LAB_140ab8ce1;
    if ((int)uVar17 < 0x20) {
LAB_140ab8d69:
      uVar15 = 0;
    }
    else {
      uVar12 = param_2 + lVar11;
      if ((int)uVar17 < 0x871) {
        uVar24 = 0;
        uVar15 = uVar17 & 0xffffffe0;
      }
      else {
        uVar24 = uVar12 & 0x1f;
        if ((int)uVar24 != 0) {
          uVar24 = (ulonglong)(0x20 - (int)uVar24);
        }
        iVar18 = (int)uVar24;
        if ((int)uVar17 < iVar18 + 0x20) goto LAB_140ab8d69;
        uVar25 = 0;
        uVar15 = uVar17 - (uVar17 - iVar18 & 0x1f);
        if (iVar18 != 0) {
          do {
            *(undefined1 *)(uVar25 + uVar12) = uVar5;
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar24);
        }
      }
      do {
        puVar4 = (undefined1 *)(uVar24 + uVar12);
        *puVar4 = uVar5;
        puVar4[1] = uVar5;
        puVar4[2] = uVar5;
        puVar4[3] = uVar5;
        puVar4[4] = uVar5;
        puVar4[5] = uVar5;
        puVar4[6] = uVar5;
        puVar4[7] = uVar5;
        puVar4[8] = uVar5;
        puVar4[9] = uVar5;
        puVar4[10] = uVar5;
        puVar4[0xb] = uVar5;
        puVar4[0xc] = uVar5;
        puVar4[0xd] = uVar5;
        puVar4[0xe] = uVar5;
        puVar4[0xf] = uVar5;
        puVar4[0x10] = uVar5;
        puVar4[0x11] = uVar5;
        puVar4[0x12] = uVar5;
        puVar4[0x13] = uVar5;
        puVar4[0x14] = uVar5;
        puVar4[0x15] = uVar5;
        puVar4[0x16] = uVar5;
        puVar4[0x17] = uVar5;
        puVar4[0x18] = uVar5;
        puVar4[0x19] = uVar5;
        puVar4[0x1a] = uVar5;
        puVar4[0x1b] = uVar5;
        puVar4[0x1c] = uVar5;
        puVar4[0x1d] = uVar5;
        puVar4[0x1e] = uVar5;
        puVar4[0x1f] = uVar5;
        uVar24 = uVar24 + 0x20;
      } while (uVar24 < (ulonglong)(longlong)(int)uVar15);
      uVar14 = uVar19 + uVar15;
    }
    if (uVar15 + 1 <= uVar17) {
      lVar20 = (longlong)(int)uVar15;
      uVar12 = (int)uVar17 - lVar20;
      if ((longlong)uVar12 < 8) {
        uVar17 = 0;
      }
      else {
        uVar17 = (uint)uVar12 & 0xfffffff8;
        uVar24 = 0;
        do {
          *(ulonglong *)(uVar24 + param_2 + lVar11 + lVar20) =
               CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,CONCAT12(
                                                  uVar5,CONCAT11(uVar5,uVar5)))))));
          uVar24 = uVar24 + 8;
        } while (uVar24 < (ulonglong)(longlong)(int)uVar17);
        uVar14 = uVar19 + uVar15 + uVar17;
      }
      uVar24 = (ulonglong)(int)uVar17;
      if (uVar24 < uVar12) {
        do {
          *(undefined1 *)(uVar24 + param_2 + lVar11 + lVar20) = uVar5;
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar12);
        uVar14 = (int)uVar24 + uVar19 + uVar15;
      }
    }
LAB_140ab8ce1:
    if (4 < lVar13) {
      uVar23 = (ulonglong)(uVar14 - (8 - param_5));
    }
    return uVar23;
  }
  if (uVar14 != 2) {
    if (uVar14 == 3) {
      uVar23 = (ulonglong)(1 < (int)param_3);
      lVar11 = (longlong)(int)param_5;
      uVar12 = 4;
      if (param_3 < 5) {
        uVar12 = (ulonglong)param_3;
      }
      lVar20 = lVar11;
      uVar14 = param_5;
      if (lVar13 < 1) {
LAB_140ab6afb:
        uVar19 = (uint)(1 < (int)param_3);
        lVar30 = lVar11 + -1;
        if ((param_6 & 0x40) != 0) {
          if (-1 < lVar30) {
            uVar12 = uVar23;
            if ((longlong)uVar23 < lVar13) goto LAB_140ab70e0;
            bVar31 = -1 < lVar30;
            if (((bVar31) && (bVar31)) && (bVar31)) {
              while (bVar31) {
                uVar12 = uVar23;
                if ((longlong)uVar23 < lVar13) {
LAB_140ab70e0:
                  while( true ) {
                    *(undefined1 *)(lVar30 + param_2) = param_1[lVar30 - lVar11];
                    lVar30 = lVar30 + -1;
                    if (lVar13 <= (longlong)(uVar12 + 1)) break;
                    uVar12 = uVar12 + 1;
                    if (lVar30 < 0) goto LAB_140ab6a59;
                  }
                }
                bVar31 = -1 < lVar30;
              }
            }
          }
          goto LAB_140ab6a59;
        }
        if ((param_6 & 0x80) == 0) {
          if (-1 < lVar30) {
            lVar29 = (longlong)(int)((int)lVar30 + uVar19) + 1;
            uVar12 = uVar23;
            if ((longlong)uVar23 < lVar13) {
              do {
                while( true ) {
                  *(undefined1 *)(lVar30 + param_2) = *(undefined1 *)(param_2 + lVar29);
                  lVar30 = lVar30 + -1;
                  lVar29 = lVar29 + 1;
                  if ((longlong)(uVar12 + 1) < lVar13) break;
                  do {
                    if (lVar30 < 0) goto LAB_140ab6b68;
LAB_140ab7169:
                    lVar29 = (longlong)(int)((int)lVar30 + uVar19) + 1;
                    uVar12 = uVar23;
                  } while (lVar13 <= (longlong)uVar23);
                }
                uVar12 = uVar12 + 1;
              } while (-1 < lVar30);
            }
            else if (-1 < lVar30) goto LAB_140ab7169;
          }
LAB_140ab6b68:
          if (4 < lVar13) goto LAB_140ab6c68;
          goto LAB_140ab6b72;
        }
        if (-1 < (int)(param_5 - 1)) {
          iVar18 = 1;
          lVar30 = 0;
          if (param_5 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar24 = uVar12;
              *(undefined1 *)(lVar30 + -1 + param_2 + lVar11) = param_1[uVar24 * 2 + 1];
              uVar12 = uVar24 + 1;
              *(undefined1 *)(lVar30 + -2 + param_2 + lVar11) = param_1[uVar24 * 2 + 2];
              lVar30 = lVar30 + -2;
            } while (uVar12 < param_5 >> 1);
            iVar18 = (int)uVar24 + 2 + (int)uVar12;
          }
          if (iVar18 - 1U < param_5) {
            *(undefined1 *)((param_2 + lVar11) - (longlong)iVar18) = param_1[iVar18];
          }
        }
        if (lVar13 < 5) goto LAB_140ab6ef3;
      }
      else {
        uVar19 = (uint)uVar12;
        if (uVar19 < 7) {
LAB_140ab6664:
          iVar18 = 1;
          if (uVar19 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar24 = uVar12;
              *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = param_1[uVar24 * 2];
              *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) = param_1[uVar24 * 2 + 1];
              uVar12 = uVar24 + 1;
            } while (uVar12 < uVar19 >> 1);
            uVar14 = param_5 + (int)uVar12 * 2;
            iVar18 = (int)uVar24 + 2 + (int)uVar12;
          }
          if (iVar18 - 1U < uVar19) {
            uVar14 = iVar18 + param_5;
            *(undefined1 *)((longlong)iVar18 + -1 + param_2 + lVar11) =
                 param_1[(longlong)iVar18 + -1];
          }
        }
        else {
          uVar24 = param_2 + lVar11;
          if (((longlong)(uVar24 - (longlong)param_1) < (longlong)uVar12) &&
             ((longlong)-(uVar24 - (longlong)param_1) < (longlong)uVar12)) goto LAB_140ab6664;
          if (uVar19 < 0x20) {
LAB_140ab7119:
            uVar14 = 0;
          }
          else {
            if (uVar19 < 0xa71) {
              uVar12 = 0;
              uVar14 = uVar19 & 0xffffffe0;
            }
            else {
              uVar12 = uVar24 & 0x1f;
              if ((int)uVar12 != 0) {
                uVar12 = (ulonglong)(0x20 - (int)uVar12);
              }
              iVar18 = (int)uVar12;
              if (uVar19 < iVar18 + 0x20U) goto LAB_140ab7119;
              uVar25 = 0;
              uVar14 = uVar19 - (uVar19 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar25 + uVar24) = param_1[uVar25];
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar12);
              }
            }
            do {
              puVar2 = (undefined8 *)(param_1 + uVar12);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar12 + uVar24);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar12 = uVar12 + 0x20;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
          }
          if (uVar14 + 1 <= uVar19) {
            uVar17 = uVar19 - uVar14;
            if (uVar17 < 8) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar17 & 0xfffffff8;
              lVar20 = 0;
              lStack_60._0_4_ = 0;
              do {
                iVar18 = (uint)lStack_60 + uVar14;
                lStack_60._0_4_ = (uint)lStack_60 + 8;
                *(undefined8 *)(lVar20 + (longlong)(int)(param_5 + uVar14) + param_2) =
                     *(undefined8 *)(param_1 + iVar18);
                lVar20 = lVar20 + 8;
              } while ((uint)lStack_60 < uVar15);
            }
            lVar20 = (longlong)(int)(uVar14 + uVar15);
            lVar30 = (longlong)(int)uVar15;
            if (uVar15 < uVar17) {
              do {
                uVar15 = uVar15 + 1;
                *(undefined1 *)(lVar30 + (longlong)(int)(uVar14 + param_5) + param_2) =
                     param_1[lVar20];
                lVar30 = lVar30 + 1;
                lVar20 = lVar20 + 1;
              } while (uVar15 < uVar17);
            }
          }
          uVar14 = param_5 + uVar19;
        }
        lVar20 = (longlong)(int)uVar14;
        if (lVar13 < 5) goto LAB_140ab6afb;
        if ((param_6 & 0x40) == 0) {
          if (-1 < (int)(param_5 - 1)) {
            uVar12 = 0;
            iVar18 = 1;
            if (param_5 >> 1 != 0) {
              uVar24 = uVar12;
              do {
                uVar25 = uVar24;
                *(undefined1 *)((uVar12 - 1) + param_2 + lVar11) = param_1[uVar25 * 2 + uVar23];
                uVar24 = uVar25 + 1;
                *(undefined1 *)((uVar12 - 2) + param_2 + lVar11) = param_1[uVar25 * 2 + uVar23 + 1];
                uVar12 = uVar12 - 2;
              } while (uVar24 < param_5 >> 1);
              iVar18 = (int)uVar25 + 2 + (int)uVar24;
            }
            if (iVar18 - 1U < param_5) {
              *(undefined1 *)((param_2 + lVar11) - (longlong)iVar18) =
                   param_1[(longlong)iVar18 + -1 + uVar23];
            }
          }
        }
        else if (-1 < (int)(param_5 - 1)) {
          if (((int)param_5 < 7) ||
             ((lVar30 = ((param_2 - 1) + lVar11) - (longlong)(param_1 + -1), lVar30 <= lVar11 &&
              (-lVar11 == lVar30 || -lVar30 < lVar11)))) {
            uVar12 = 0;
            iVar18 = 1;
            if (param_5 >> 1 != 0) {
              uVar24 = uVar12;
              do {
                uVar25 = uVar24;
                uVar24 = uVar25 + 1;
                *(undefined1 *)((uVar12 - 1) + param_2 + lVar11) = param_1[uVar12 - 1];
                *(undefined1 *)((uVar12 - 2) + param_2 + lVar11) = param_1[uVar12 - 2];
                uVar12 = uVar12 - 2;
              } while (uVar24 < param_5 >> 1);
              iVar18 = (int)uVar25 + 2 + (int)uVar24;
            }
            if (iVar18 - 1U < param_5) {
              *(undefined1 *)((param_2 + lVar11) - (longlong)iVar18) = param_1[-(longlong)iVar18];
            }
          }
          else {
            uVar19 = 0xffffffff - (-1 - param_5);
            if ((int)uVar19 < 0x20) {
LAB_140ab713e:
              uVar17 = 0;
            }
            else {
              if ((int)uVar19 < 0xa71) {
                lStack_60 = (longlong)param_1 - lVar11;
                uVar17 = uVar19 & 0xffffffe0;
                uVar12 = 0;
              }
              else {
                uVar12 = param_2 & 0x1f;
                if ((int)uVar12 != 0) {
                  uVar12 = (ulonglong)(0x20 - (int)uVar12);
                }
                iVar18 = (int)uVar12;
                if ((int)uVar19 < iVar18 + 0x20) goto LAB_140ab713e;
                uVar17 = uVar19 - (uVar19 - iVar18 & 0x1f);
                lStack_60 = (longlong)param_1 - lVar11;
                if (iVar18 != 0) {
                  uVar24 = 0;
                  do {
                    *(undefined1 *)(uVar24 + param_2) = *(undefined1 *)(uVar24 + lStack_60);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar12);
                }
              }
              do {
                puVar2 = (undefined8 *)(uVar12 + lStack_60);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                puVar3 = (undefined8 *)(uVar12 + param_2);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                uVar12 = uVar12 + 0x20;
              } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
            }
            if (uVar17 + 1 <= uVar19) {
              lVar30 = (longlong)(int)uVar17;
              uVar12 = (int)uVar19 - lVar30;
              if ((longlong)uVar12 < 8) {
                uStack_58 = 0;
              }
              else {
                uStack_58 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
                uVar24 = 0;
                do {
                  *(undefined8 *)(uVar24 + param_2 + lVar30) =
                       *(undefined8 *)(param_1 + uVar24 + (lVar30 - lVar11));
                  uVar24 = uVar24 + 8;
                } while (uVar24 < uStack_58);
              }
              if (uStack_58 < uVar12) {
                do {
                  *(undefined1 *)(uStack_58 + param_2 + lVar30) =
                       param_1[uStack_58 + (lVar30 - lVar11)];
                  uStack_58 = uStack_58 + 1;
                } while (uStack_58 < uVar12);
              }
            }
          }
        }
LAB_140ab6a59:
        if (lVar13 < 5) {
          if ((param_6 & 0x80) == 0) {
            if ((param_6 & 0x40) != 0) {
              uVar19 = 4 - param_5;
              if (0 < (int)uVar19) {
                iVar18 = 1;
                lVar11 = 0;
                if (uVar19 >> 1 != 0) {
                  uVar23 = 0;
                  do {
                    uVar12 = uVar23;
                    *(undefined1 *)(param_2 + lVar20 + uVar12 * 2) = param_1[lVar11 + -2 + lVar13];
                    lVar30 = lVar11 + -3;
                    lVar11 = lVar11 + -2;
                    *(undefined1 *)(param_2 + lVar20 + 1 + uVar12 * 2) = param_1[lVar30 + lVar13];
                    uVar23 = uVar12 + 1;
                  } while (uVar23 < uVar19 >> 1);
                  uVar14 = (int)lVar20 + (int)uVar23 * 2;
                  iVar18 = (int)uVar12 + 2 + (int)uVar23;
                }
                if (iVar18 - 1U < uVar19) {
                  *(undefined1 *)((longlong)iVar18 + -1 + param_2 + lVar20) =
                       param_1[(lVar13 - iVar18) + -1];
                  uVar14 = (int)lVar20 + iVar18;
                }
              }
              goto LAB_140ab70a3;
            }
LAB_140ab6b72:
            iVar18 = param_3 + 4;
            iVar22 = 4 - param_5;
            iVar16 = ((int)param_3 < 2) - 1;
            iVar21 = ((param_3 + ((int)param_3 < 2)) - iVar22) + 2;
            lVar11 = (lVar13 + 4) - (longlong)iVar22;
            if (lVar11 < iVar18) {
              iVar10 = iVar16;
              do {
                lVar20 = (longlong)iVar21;
                iVar21 = iVar21 + iVar16;
                *(undefined1 *)(lVar11 + param_2) = *(undefined1 *)(lVar20 + param_2);
                if ((iVar18 - iVar22 <= iVar21) || (iVar21 < (int)param_5)) {
                  iVar1 = iVar16 + iVar10;
                  iVar16 = -iVar16;
                  iVar21 = iVar21 - iVar1;
                  iVar10 = -iVar10;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < iVar18);
            }
            goto LAB_140ab70a3;
          }
LAB_140ab6ef3:
          uVar19 = -param_5 + 4;
          if ((int)uVar19 < 1) goto LAB_140ab70a3;
          iVar18 = (int)lVar20;
          if (6 < (int)uVar19) {
            uVar23 = param_2 + lVar20;
            puVar4 = param_1 + lVar13;
            if ((4 - lVar11 <= (longlong)(uVar23 - (longlong)puVar4)) ||
               (4 - lVar11 <= (longlong)-(uVar23 - (longlong)puVar4))) {
              if ((int)uVar19 < 0x20) {
LAB_140ab71bd:
                uVar14 = 0;
              }
              else {
                if ((int)uVar19 < 0xa71) {
                  uVar12 = 0;
                  uVar14 = uVar19 & 0xffffffe0;
                }
                else {
                  uVar12 = uVar23 & 0x1f;
                  if ((int)uVar12 != 0) {
                    uVar12 = (ulonglong)(0x20 - (int)uVar12);
                  }
                  iVar16 = (int)uVar12;
                  if ((int)uVar19 < iVar16 + 0x20) goto LAB_140ab71bd;
                  uVar24 = 0;
                  uVar14 = uVar19 - (uVar19 - iVar16 & 0x1f);
                  if (iVar16 != 0) {
                    do {
                      *(undefined1 *)(uVar24 + uVar23) = puVar4[uVar24];
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar12);
                  }
                }
                do {
                  puVar2 = (undefined8 *)(puVar4 + uVar12);
                  uVar6 = puVar2[1];
                  uVar7 = puVar2[2];
                  uVar8 = puVar2[3];
                  puVar3 = (undefined8 *)(uVar12 + uVar23);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar6;
                  puVar3[2] = uVar7;
                  puVar3[3] = uVar8;
                  uVar12 = uVar12 + 0x20;
                } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
              }
              if (uVar14 + 1 <= uVar19) {
                lVar11 = (longlong)(int)uVar14;
                uVar12 = (int)uVar19 - lVar11;
                if ((longlong)uVar12 < 8) {
                  uVar24 = 0;
                }
                else {
                  uVar25 = 0;
                  uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
                  do {
                    *(undefined8 *)(uVar25 + uVar23 + lVar11) =
                         *(undefined8 *)(puVar4 + uVar25 + lVar11);
                    uVar25 = uVar25 + 8;
                  } while (uVar25 < uVar24);
                }
                if (uVar24 < uVar12) {
                  do {
                    *(undefined1 *)(uVar24 + uVar23 + lVar11) = puVar4[uVar24 + lVar11];
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar12);
                }
              }
              uVar14 = iVar18 + 4 + -param_5;
              goto LAB_140ab70a3;
            }
          }
          iVar16 = 1;
          if (uVar19 >> 1 != 0) {
            uVar23 = 0;
            do {
              uVar12 = uVar23;
              *(undefined1 *)(param_2 + lVar20 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13];
              *(undefined1 *)(param_2 + lVar20 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13 + 1];
              uVar23 = uVar12 + 1;
            } while (uVar23 < uVar19 >> 1);
            uVar14 = iVar18 + (int)uVar23 * 2;
            iVar16 = (int)uVar12 + 2 + (int)uVar23;
          }
          if (iVar16 - 1U < uVar19) {
            *(undefined1 *)((longlong)iVar16 + -1 + param_2 + lVar20) =
                 param_1[(longlong)iVar16 + -1 + lVar13];
            uVar14 = iVar18 + iVar16;
          }
          goto LAB_140ab70a3;
        }
      }
LAB_140ab6c68:
      param_1 = param_1 + lVar13;
      *(undefined1 *)(lVar20 + param_2) = param_1[-4];
      *(undefined1 *)(lVar20 + 1 + param_2) = param_1[-3];
      *(undefined1 *)(lVar20 + 2 + param_2) = param_1[-2];
      *(undefined1 *)(lVar20 + 3 + param_2) = param_1[-1];
      iVar18 = (int)lVar20;
      uVar17 = iVar18 + 4;
      uVar19 = -param_5 + 4;
      uVar14 = uVar17;
      if ((param_6 & 0x80) == 0) {
        if (0 < (int)uVar19) {
          iVar16 = 1;
          lVar11 = 0;
          if (uVar19 >> 1 != 0) {
            uVar12 = 0;
            do {
              uVar24 = uVar12;
              *(undefined1 *)((longlong)(int)uVar17 + param_2 + uVar24 * 2) =
                   param_1[(lVar11 + -1) - uVar23];
              lVar20 = lVar11 + -2;
              lVar11 = lVar11 + -2;
              *(undefined1 *)((longlong)(int)uVar17 + param_2 + 1 + uVar24 * 2) =
                   param_1[lVar20 - uVar23];
              uVar12 = uVar24 + 1;
            } while (uVar12 < uVar19 >> 1);
            uVar14 = (int)uVar12 * 2 + 4 + iVar18;
            iVar16 = (int)uVar24 + 2 + (int)uVar12;
          }
          if (iVar16 - 1U < uVar19) {
            *(undefined1 *)((longlong)iVar16 + -1 + param_2 + (longlong)(int)uVar17) =
                 param_1[-(longlong)iVar16 - uVar23];
            uVar14 = iVar16 + uVar17;
          }
        }
        goto LAB_140ab70a3;
      }
      lVar20 = (longlong)(int)uVar17;
      if ((int)uVar19 < 1) goto LAB_140ab70a3;
      if (6 < (int)uVar19) {
        uVar23 = param_2 + lVar20;
        if ((4 - lVar11 <= (longlong)(uVar23 - (longlong)param_1)) ||
           (4 - lVar11 <= (longlong)-(uVar23 - (longlong)param_1))) {
          if ((int)uVar19 < 0x20) {
LAB_140ab71a1:
            uVar14 = 0;
          }
          else {
            if ((int)uVar19 < 0xa71) {
              uVar12 = 0;
              uVar14 = uVar19 & 0xffffffe0;
            }
            else {
              uVar12 = uVar23 & 0x1f;
              if ((int)uVar12 != 0) {
                uVar12 = (ulonglong)(0x20 - (int)uVar12);
              }
              iVar16 = (int)uVar12;
              if ((int)uVar19 < iVar16 + 0x20) goto LAB_140ab71a1;
              uVar24 = 0;
              uVar14 = uVar19 - (uVar19 - iVar16 & 0x1f);
              if (iVar16 != 0) {
                do {
                  *(undefined1 *)(uVar24 + uVar23) = param_1[uVar24];
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            do {
              puVar2 = (undefined8 *)(param_1 + uVar12);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar12 + uVar23);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar12 = uVar12 + 0x20;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
          }
          if (uVar14 + 1 <= uVar19) {
            lVar11 = (longlong)(int)uVar14;
            uVar12 = (int)uVar19 - lVar11;
            if ((longlong)uVar12 < 8) {
              uVar24 = 0;
            }
            else {
              uVar25 = 0;
              uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
              do {
                *(undefined8 *)(uVar25 + uVar23 + lVar11) =
                     *(undefined8 *)(param_1 + uVar25 + lVar11);
                uVar25 = uVar25 + 8;
              } while (uVar25 < uVar24);
            }
            if (uVar24 < uVar12) {
              do {
                *(undefined1 *)(uVar24 + uVar23 + lVar11) = param_1[uVar24 + lVar11];
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          uVar14 = -param_5 + 8 + iVar18;
          goto LAB_140ab70a3;
        }
      }
      iVar16 = 1;
      if (uVar19 >> 1 != 0) {
        uVar23 = 0;
        do {
          uVar12 = uVar23;
          *(undefined1 *)(param_2 + lVar20 + uVar12 * 2) = param_1[uVar12 * 2];
          *(undefined1 *)(param_2 + lVar20 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + 1];
          uVar23 = uVar12 + 1;
        } while (uVar23 < uVar19 >> 1);
        uVar14 = (int)uVar23 * 2 + 4 + iVar18;
        iVar16 = (int)uVar12 + 2 + (int)uVar23;
      }
      if (iVar16 - 1U < uVar19) {
        *(undefined1 *)((longlong)iVar16 + -1 + param_2 + lVar20) = param_1[(longlong)iVar16 + -1];
        uVar14 = uVar17 + iVar16;
      }
LAB_140ab70a3:
      uVar23 = (ulonglong)param_5;
      if (4 < lVar13) {
        uVar23 = (ulonglong)(uVar14 - (8 - param_5));
      }
      return uVar23;
    }
    if ((param_6 & 0xf0) != 0xf0) {
      return 0;
    }
    uVar14 = 0;
    uVar19 = 0;
    if (0 < (int)param_5) {
      if (6 < (int)param_5) {
        lVar11 = (longlong)(int)param_5;
        if ((lVar11 <= (longlong)(param_2 - (longlong)(param_1 + (int)-param_5))) ||
           (lVar11 <= (longlong)-(param_2 - (longlong)(param_1 + (int)-param_5)))) {
          if ((int)param_5 < 0x20) {
LAB_140ab642d:
            uVar14 = 0;
          }
          else {
            if ((int)param_5 < 0xa71) {
              uVar14 = param_5 & 0xffffffe0;
              lVar20 = (longlong)param_1 - lVar11;
              uVar23 = 0;
            }
            else {
              uVar23 = param_2 & 0x1f;
              if ((int)uVar23 != 0) {
                uVar23 = (ulonglong)(0x20 - (int)uVar23);
              }
              iVar18 = (int)uVar23;
              if ((int)param_5 < iVar18 + 0x20) goto LAB_140ab642d;
              lVar20 = (longlong)param_1 - lVar11;
              uVar12 = 0;
              uVar14 = param_5 - (param_5 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar12 + param_2) = *(undefined1 *)(uVar12 + lVar20);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar23);
              }
            }
            do {
              puVar2 = (undefined8 *)(uVar23 + lVar20);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar23 + param_2);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar23 = uVar23 + 0x20;
            } while (uVar23 < (ulonglong)(longlong)(int)uVar14);
          }
          uVar19 = param_5;
          if (uVar14 + 1 <= param_5) {
            lVar20 = (longlong)(int)uVar14;
            uVar23 = lVar11 - lVar20;
            if ((longlong)uVar23 < 8) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)(int)((uint)uVar23 & 0xfffffff8);
              uVar24 = 0;
              do {
                *(undefined8 *)(uVar24 + param_2 + lVar20) =
                     *(undefined8 *)(param_1 + uVar24 + (lVar20 - lVar11));
                uVar24 = uVar24 + 8;
              } while (uVar24 < uVar12);
            }
            if (uVar12 < uVar23) {
              do {
                *(undefined1 *)(uVar12 + lVar20 + param_2) = param_1[uVar12 + (lVar20 - lVar11)];
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar23);
            }
          }
          goto LAB_140ab5fe0;
        }
      }
      uVar17 = 1;
      uVar23 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar12 = uVar23;
          *(undefined1 *)(param_2 + uVar12 * 2) = param_1[uVar12 * 2 - (longlong)(int)param_5];
          *(undefined1 *)(param_2 + 1 + uVar12 * 2) =
               param_1[uVar12 * 2 + (1 - (longlong)(int)param_5)];
          uVar23 = uVar12 + 1;
        } while (uVar23 < param_5 >> 1);
        uVar14 = (int)uVar23 * 2;
        uVar17 = (int)uVar12 + 2 + (int)uVar23;
      }
      uVar19 = uVar14;
      if (uVar17 - 1 < param_5) {
        *(undefined1 *)((longlong)(int)uVar17 + -1 + param_2) =
             param_1[((longlong)(int)uVar17 + -1) - (longlong)(int)param_5];
        uVar19 = uVar17;
      }
    }
LAB_140ab5fe0:
    if (4 < param_3) {
      param_3 = 4;
    }
    uVar14 = uVar19;
    if (lVar13 < 1) {
      lVar11 = (longlong)(int)uVar19;
joined_r0x000140ab6221:
      uVar19 = 4 - param_5;
      if ((int)uVar19 < 1) goto LAB_140ab6402;
    }
    else {
      if (param_3 < 7) {
LAB_140ab6159:
        iVar18 = 1;
        if (param_3 >> 1 != 0) {
          uVar23 = 0;
          do {
            uVar12 = uVar23;
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + uVar12 * 2) = param_1[uVar12 * 2];
            *(undefined1 *)((longlong)(int)uVar19 + param_2 + 1 + uVar12 * 2) =
                 param_1[uVar12 * 2 + 1];
            uVar23 = uVar12 + 1;
          } while (uVar23 < param_3 >> 1);
          uVar14 = uVar19 + (int)uVar23 * 2;
          iVar18 = (int)uVar12 + 2 + (int)uVar23;
        }
        if (iVar18 - 1U < param_3) {
          uVar14 = iVar18 + uVar19;
          *(undefined1 *)((longlong)iVar18 + -1 + (longlong)(int)uVar19 + param_2) =
               param_1[(longlong)iVar18 + -1];
        }
      }
      else {
        uVar23 = (longlong)(int)uVar19 + param_2;
        if (((longlong)(uVar23 - (longlong)param_1) < (longlong)(ulonglong)param_3) &&
           ((longlong)-(uVar23 - (longlong)param_1) < (longlong)(ulonglong)param_3))
        goto LAB_140ab6159;
        if (param_3 < 0x20) {
LAB_140ab644e:
          uVar14 = 0;
        }
        else {
          if (param_3 < 0xa71) {
            uVar12 = 0;
            uVar14 = param_3 & 0xffffffe0;
          }
          else {
            uVar12 = uVar23 & 0x1f;
            if ((int)uVar12 != 0) {
              uVar12 = (ulonglong)(0x20 - (int)uVar12);
            }
            iVar18 = (int)uVar12;
            if (param_3 < iVar18 + 0x20U) goto LAB_140ab644e;
            uVar24 = 0;
            uVar14 = param_3 - (param_3 - iVar18 & 0x1f);
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar24 + uVar23) = param_1[uVar24];
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          do {
            puVar2 = (undefined8 *)(param_1 + uVar12);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar12 + uVar23);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar12 = uVar12 + 0x20;
          } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
        }
        if (uVar14 + 1 <= param_3) {
          uVar17 = param_3 - uVar14;
          if (uVar17 < 8) {
            uVar15 = 0;
          }
          else {
            uVar15 = uVar17 & 0xfffffff8;
            uVar9 = 0;
            lVar11 = 0;
            do {
              iVar18 = uVar9 + uVar14;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(lVar11 + (longlong)(int)(uVar14 + uVar19) + param_2) =
                   *(undefined8 *)(param_1 + iVar18);
              lVar11 = lVar11 + 8;
            } while (uVar9 < uVar15);
          }
          lVar11 = (longlong)(int)uVar15;
          lVar20 = (longlong)(int)(uVar14 + uVar15);
          if (uVar15 < uVar17) {
            do {
              uVar15 = uVar15 + 1;
              *(undefined1 *)(lVar11 + (longlong)(int)(uVar14 + uVar19) + param_2) = param_1[lVar20]
              ;
              lVar11 = lVar11 + 1;
              lVar20 = lVar20 + 1;
            } while (uVar15 < uVar17);
          }
        }
        uVar14 = uVar19 + param_3;
      }
      lVar11 = (longlong)(int)uVar14;
      if (lVar13 < 5) goto joined_r0x000140ab6221;
      uVar14 = uVar14 + 4;
      *(undefined1 *)(lVar11 + param_2) = param_1[lVar13 + -4];
      *(undefined1 *)(lVar11 + 1 + param_2) = param_1[lVar13 + -3];
      *(undefined1 *)(lVar11 + 2 + param_2) = param_1[lVar13 + -2];
      uVar19 = 4 - param_5;
      *(undefined1 *)(lVar11 + 3 + param_2) = param_1[lVar13 + -1];
      lVar11 = (longlong)(int)uVar14;
      if ((int)uVar19 < 1) goto LAB_140ab63e7;
    }
    iVar18 = (int)lVar11;
    if ((int)uVar19 < 7) {
LAB_140ab6376:
      iVar16 = 1;
      if (uVar19 >> 1 != 0) {
        uVar23 = 0;
        do {
          uVar12 = uVar23;
          *(undefined1 *)(param_2 + lVar11 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13];
          *(undefined1 *)(param_2 + lVar11 + 1 + uVar12 * 2) = param_1[uVar12 * 2 + lVar13 + 1];
          uVar23 = uVar12 + 1;
        } while (uVar23 < uVar19 >> 1);
        uVar14 = iVar18 + (int)uVar23 * 2;
        iVar16 = (int)uVar12 + 2 + (int)uVar23;
      }
      if (iVar16 - 1U < uVar19) {
        uVar14 = iVar18 + iVar16;
        *(undefined1 *)((longlong)iVar16 + -1 + param_2 + lVar11) =
             param_1[(longlong)iVar16 + -1 + lVar13];
      }
    }
    else {
      uVar23 = param_2 + lVar11;
      puVar4 = param_1 + lVar13;
      if (((longlong)(uVar23 - (longlong)puVar4) < 4 - (longlong)(int)param_5) &&
         ((longlong)-(uVar23 - (longlong)puVar4) < 4 - (longlong)(int)param_5)) goto LAB_140ab6376;
      if ((int)uVar19 < 0x20) {
LAB_140ab646c:
        uVar14 = 0;
      }
      else {
        if ((int)uVar19 < 0xa71) {
          uVar12 = 0;
          uVar14 = uVar19 & 0xffffffe0;
        }
        else {
          uVar12 = uVar23 & 0x1f;
          if ((int)uVar12 != 0) {
            uVar12 = (ulonglong)(0x20 - (int)uVar12);
          }
          iVar16 = (int)uVar12;
          if ((int)uVar19 < iVar16 + 0x20) goto LAB_140ab646c;
          uVar24 = 0;
          uVar14 = uVar19 - (uVar19 - iVar16 & 0x1f);
          if (iVar16 != 0) {
            do {
              *(undefined1 *)(uVar24 + uVar23) = puVar4[uVar24];
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar12);
          }
        }
        do {
          puVar2 = (undefined8 *)(puVar4 + uVar12);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined8 *)(uVar12 + uVar23);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          uVar12 = uVar12 + 0x20;
        } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
      }
      if (uVar14 + 1 <= uVar19) {
        lVar11 = (longlong)(int)uVar14;
        uVar12 = (int)uVar19 - lVar11;
        if ((longlong)uVar12 < 8) {
          uVar24 = 0;
        }
        else {
          uVar25 = 0;
          uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
          do {
            *(undefined8 *)(uVar25 + uVar23 + lVar11) = *(undefined8 *)(puVar4 + uVar25 + lVar11);
            uVar25 = uVar25 + 8;
          } while (uVar25 < uVar24);
        }
        if (uVar24 < uVar12) {
          do {
            *(undefined1 *)(uVar24 + uVar23 + lVar11) = puVar4[uVar24 + lVar11];
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar12);
        }
      }
      uVar14 = iVar18 + uVar19;
    }
    if (4 < lVar13) {
LAB_140ab63e7:
      return (ulonglong)(uVar14 - (8 - param_5));
    }
LAB_140ab6402:
    return (ulonglong)param_5;
  }
  uVar12 = (ulonglong)param_3;
  if (4 < param_3) {
    uVar12 = 4;
  }
  uVar14 = param_5;
  if (lVar13 < 1) {
    lVar11 = (longlong)(int)param_5;
LAB_140ab77f9:
    if ((param_6 & 0x40) == 0) {
      if (-1 < (int)(param_5 - 1)) {
        if (6 < (int)param_5) {
          uVar23 = (ulonglong)(int)param_5;
          lVar20 = lVar13 + param_2 + uVar23;
          lVar30 = (param_2 + uVar23 + -1) - (lVar20 + -1);
          if (((longlong)uVar23 < lVar30) || (-uVar23 != lVar30 && (longlong)uVar23 <= -lVar30)) {
            uVar19 = 0xffffffff - (-1 - param_5);
            if ((int)uVar19 < 0x20) {
LAB_140ab83f3:
              uVar17 = 0;
            }
            else {
              if ((int)uVar19 < 0xa71) {
                lVar30 = lVar20 - uVar23;
                uVar17 = uVar19 & 0xffffffe0;
                uVar12 = 0;
              }
              else {
                uVar12 = param_2 & 0x1f;
                if ((int)uVar12 != 0) {
                  uVar12 = (ulonglong)(0x20 - (int)uVar12);
                }
                iVar18 = (int)uVar12;
                if ((int)uVar19 < iVar18 + 0x20) goto LAB_140ab83f3;
                uVar24 = 0;
                lVar30 = lVar20 - uVar23;
                uVar17 = uVar19 - (uVar19 - iVar18 & 0x1f);
                if (iVar18 != 0) {
                  do {
                    *(undefined1 *)(uVar24 + param_2) = *(undefined1 *)(uVar24 + lVar30);
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar12);
                }
              }
              do {
                puVar2 = (undefined8 *)(uVar12 + lVar30);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                puVar3 = (undefined8 *)(uVar12 + param_2);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                uVar12 = uVar12 + 0x20;
              } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
            }
            if (uVar17 + 1 <= uVar19) {
              lVar30 = (longlong)(int)uVar17;
              uVar12 = (int)uVar19 - lVar30;
              if ((longlong)uVar12 < 8) {
                uVar24 = 0;
              }
              else {
                uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
                uVar25 = 0;
                do {
                  *(undefined8 *)(uVar25 + param_2 + lVar30) =
                       *(undefined8 *)((lVar20 - uVar23) + lVar30 + uVar25);
                  uVar25 = uVar25 + 8;
                } while (uVar25 < uVar24);
              }
              if (uVar24 < uVar12) {
                do {
                  *(undefined1 *)(uVar24 + lVar30 + param_2) =
                       *(undefined1 *)(uVar24 + (lVar20 - uVar23) + lVar30);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            goto LAB_140ab7c05;
          }
        }
        uVar19 = (uint)uVar23;
        iVar18 = 1;
        lVar20 = 0;
        if (uVar19 >> 1 != 0) {
          lVar30 = (longlong)(int)uVar19 + param_2;
          uVar12 = 0;
          do {
            uVar24 = uVar12;
            uVar12 = uVar24 + 1;
            *(undefined1 *)(lVar20 + -1 + lVar30) = *(undefined1 *)(lVar20 + -1 + lVar13 + lVar30);
            *(undefined1 *)(lVar20 + -2 + lVar30) = *(undefined1 *)(lVar20 + -2 + lVar13 + lVar30);
            lVar20 = lVar20 + -2;
          } while (uVar12 < uVar19 >> 1);
          iVar18 = (int)uVar24 + 2 + (int)uVar12;
        }
        if (iVar18 - 1U < uVar19) {
          *(undefined1 *)(((longlong)(int)uVar19 + param_2) - (longlong)iVar18) =
               *(undefined1 *)((lVar13 + (longlong)(int)uVar19 + param_2) - (longlong)iVar18);
        }
      }
    }
    else if (-1 < (int)(param_5 - 1)) {
      if (6 < (int)param_5) {
        lVar20 = (longlong)(int)param_5;
        lVar30 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + -1);
        if ((lVar20 < lVar30) || (-lVar20 != lVar30 && lVar20 <= -lVar30)) {
          uVar19 = 0xffffffff - (-1 - param_5);
          if ((int)uVar19 < 0x20) {
LAB_140ab841a:
            uVar17 = 0;
          }
          else {
            if ((int)uVar19 < 0xa71) {
              uVar17 = uVar19 & 0xffffffe0;
              lVar30 = (longlong)param_1 - lVar20;
              uVar12 = 0;
            }
            else {
              uVar12 = param_2 & 0x1f;
              if ((int)uVar12 != 0) {
                uVar12 = (ulonglong)(0x20 - (int)uVar12);
              }
              iVar18 = (int)uVar12;
              if ((int)uVar19 < iVar18 + 0x20) goto LAB_140ab841a;
              lVar30 = (longlong)param_1 - lVar20;
              uVar24 = 0;
              uVar17 = uVar19 - (uVar19 - iVar18 & 0x1f);
              if (iVar18 != 0) {
                do {
                  *(undefined1 *)(uVar24 + param_2) = *(undefined1 *)(uVar24 + lVar30);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            do {
              puVar2 = (undefined8 *)(uVar12 + lVar30);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar12 + param_2);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar12 = uVar12 + 0x20;
            } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
          }
          if (uVar17 + 1 <= uVar19) {
            lVar30 = (longlong)(int)uVar17;
            uVar12 = (int)uVar19 - lVar30;
            if ((longlong)uVar12 < 8) {
              uVar24 = 0;
            }
            else {
              uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
              uVar25 = 0;
              do {
                *(undefined8 *)(uVar25 + param_2 + lVar30) =
                     *(undefined8 *)(param_1 + uVar25 + (lVar30 - lVar20));
                uVar25 = uVar25 + 8;
              } while (uVar25 < uVar24);
            }
            if (uVar24 < uVar12) {
              do {
                *(undefined1 *)(uVar24 + lVar30 + param_2) = param_1[uVar24 + (lVar30 - lVar20)];
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          goto LAB_140ab7c05;
        }
      }
      iVar18 = 1;
      lVar20 = 0;
      if (param_5 >> 1 != 0) {
        uVar12 = 0;
        do {
          uVar24 = uVar12;
          uVar12 = uVar24 + 1;
          *(undefined1 *)(lVar20 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar20 + -1];
          *(undefined1 *)(lVar20 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar20 + -2];
          lVar20 = lVar20 + -2;
        } while (uVar12 < param_5 >> 1);
        iVar18 = (int)uVar24 + 2 + (int)uVar12;
      }
      if (iVar18 - 1U < param_5) goto LAB_140ab7bed;
    }
  }
  else {
    uVar19 = (uint)uVar12;
    if (uVar19 < 7) {
LAB_140ab739a:
      iVar18 = 1;
      if (uVar19 >> 1 != 0) {
        uVar12 = 0;
        do {
          uVar24 = uVar12;
          *(undefined1 *)((longlong)(int)param_5 + param_2 + uVar24 * 2) = param_1[uVar24 * 2];
          *(undefined1 *)((longlong)(int)param_5 + param_2 + 1 + uVar24 * 2) =
               param_1[uVar24 * 2 + 1];
          uVar12 = uVar24 + 1;
        } while (uVar12 < uVar19 >> 1);
        uVar14 = param_5 + (int)uVar12 * 2;
        iVar18 = (int)uVar24 + 2 + (int)uVar12;
      }
      if (iVar18 - 1U < uVar19) {
        uVar14 = iVar18 + param_5;
        *(undefined1 *)((longlong)iVar18 + -1 + (longlong)(int)param_5 + param_2) =
             param_1[(longlong)iVar18 + -1];
      }
    }
    else {
      uVar24 = (longlong)(int)param_5 + param_2;
      if (((longlong)(uVar24 - (longlong)param_1) < (longlong)uVar12) &&
         ((longlong)-(uVar24 - (longlong)param_1) < (longlong)uVar12)) goto LAB_140ab739a;
      if (uVar19 < 0x20) {
LAB_140ab8389:
        uVar14 = 0;
      }
      else {
        if (uVar19 < 0xa71) {
          uVar12 = 0;
          uVar14 = uVar19 & 0xffffffe0;
        }
        else {
          uVar12 = uVar24 & 0x1f;
          if ((int)uVar12 != 0) {
            uVar12 = (ulonglong)(0x20 - (int)uVar12);
          }
          iVar18 = (int)uVar12;
          if (uVar19 < iVar18 + 0x20U) goto LAB_140ab8389;
          uVar25 = 0;
          uVar14 = uVar19 - (uVar19 - iVar18 & 0x1f);
          if (iVar18 != 0) {
            do {
              *(undefined1 *)(uVar25 + uVar24) = param_1[uVar25];
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar12);
          }
        }
        do {
          puVar2 = (undefined8 *)(param_1 + uVar12);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined8 *)(uVar12 + uVar24);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          uVar12 = uVar12 + 0x20;
        } while (uVar12 < (ulonglong)(longlong)(int)uVar14);
      }
      if (uVar14 + 1 <= uVar19) {
        uVar17 = uVar19 - uVar14;
        if (uVar17 < 8) {
          uVar15 = 0;
        }
        else {
          uVar15 = uVar17 & 0xfffffff8;
          uVar9 = 0;
          lVar11 = 0;
          do {
            iVar18 = uVar9 + uVar14;
            uVar9 = uVar9 + 8;
            *(undefined8 *)(lVar11 + (longlong)(int)(param_5 + uVar14) + param_2) =
                 *(undefined8 *)(param_1 + iVar18);
            lVar11 = lVar11 + 8;
          } while (uVar9 < uVar15);
        }
        lVar11 = (longlong)(int)uVar15;
        lVar20 = (longlong)(int)(uVar14 + uVar15);
        if (uVar15 < uVar17) {
          do {
            uVar15 = uVar15 + 1;
            *(undefined1 *)(lVar11 + (longlong)(int)(uVar14 + param_5) + param_2) = param_1[lVar20];
            lVar11 = lVar11 + 1;
            lVar20 = lVar20 + 1;
          } while (uVar15 < uVar17);
        }
      }
      uVar14 = param_5 + uVar19;
    }
    lVar11 = (longlong)(int)uVar14;
    if (lVar13 < 5) goto LAB_140ab77f9;
    if ((param_6 & 0x40) == 0) {
      if (-1 < (int)(param_5 - 1)) {
        if (6 < (int)param_5) {
          uVar23 = (ulonglong)(int)param_5;
          puVar4 = param_1 + lVar13 + -1;
          lVar20 = ((param_2 - 1) + uVar23) - (longlong)puVar4;
          if (((longlong)uVar23 < lVar20) || (-uVar23 != lVar20 && (longlong)uVar23 <= -lVar20)) {
            uVar19 = 0xffffffff - (-1 - param_5);
            if ((int)uVar19 < 0x20) {
LAB_140ab83a7:
              uVar17 = 0;
            }
            else {
              if ((int)uVar19 < 0xa71) {
                puVar27 = puVar4 + (1 - uVar23);
                uVar17 = uVar19 & 0xffffffe0;
                uVar12 = 0;
              }
              else {
                uVar12 = param_2 & 0x1f;
                if ((int)uVar12 != 0) {
                  uVar12 = (ulonglong)(0x20 - (int)uVar12);
                }
                iVar18 = (int)uVar12;
                if ((int)uVar19 < iVar18 + 0x20) goto LAB_140ab83a7;
                uVar24 = 0;
                puVar27 = puVar4 + (1 - uVar23);
                uVar17 = uVar19 - (uVar19 - iVar18 & 0x1f);
                if (iVar18 != 0) {
                  do {
                    *(undefined1 *)(uVar24 + param_2) = puVar27[uVar24];
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < uVar12);
                }
              }
              do {
                puVar2 = (undefined8 *)(puVar27 + uVar12);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                puVar3 = (undefined8 *)(uVar12 + param_2);
                *puVar3 = *puVar2;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                uVar12 = uVar12 + 0x20;
              } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
            }
            if (uVar17 + 1 <= uVar19) {
              lVar20 = (longlong)(int)uVar17;
              uVar12 = (int)uVar19 - lVar20;
              if ((longlong)uVar12 < 8) {
                uVar24 = 0;
              }
              else {
                uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
                uVar25 = 0;
                do {
                  *(undefined8 *)(uVar25 + param_2 + lVar20) =
                       *(undefined8 *)(puVar4 + uVar25 + lVar20 + (1 - uVar23));
                  uVar25 = uVar25 + 8;
                } while (uVar25 < uVar24);
              }
              if (uVar24 < uVar12) {
                do {
                  *(undefined1 *)(uVar24 + lVar20 + param_2) =
                       puVar4[uVar24 + lVar20 + (1 - uVar23)];
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar12);
              }
            }
            goto LAB_140ab7c05;
          }
        }
        uVar19 = (uint)uVar23;
        iVar18 = 1;
        lVar20 = 0;
        if (uVar19 >> 1 != 0) {
          uVar12 = 0;
          do {
            uVar24 = uVar12;
            uVar12 = uVar24 + 1;
            *(undefined1 *)(lVar20 + -1 + (longlong)(int)uVar19 + param_2) =
                 param_1[lVar20 + -1 + lVar13];
            *(undefined1 *)(lVar20 + -2 + (longlong)(int)uVar19 + param_2) =
                 param_1[lVar20 + -2 + lVar13];
            lVar20 = lVar20 + -2;
          } while (uVar12 < uVar19 >> 1);
          iVar18 = (int)uVar24 + 2 + (int)uVar12;
        }
        if (iVar18 - 1U < uVar19) {
          *(undefined1 *)(((longlong)(int)uVar19 + param_2) - (longlong)iVar18) =
               param_1[lVar13 - iVar18];
        }
      }
      goto LAB_140ab7c05;
    }
    if ((int)(param_5 - 1) < 0) goto LAB_140ab7c05;
    if (6 < (int)param_5) {
      lVar20 = (longlong)(int)param_5;
      lVar30 = ((param_2 - 1) + lVar20) - (longlong)(param_1 + -1);
      if ((lVar20 < lVar30) || (-lVar20 != lVar30 && lVar20 <= -lVar30)) {
        uVar19 = 0xffffffff - (-1 - param_5);
        if ((int)uVar19 < 0x20) {
LAB_140ab83ce:
          uVar17 = 0;
        }
        else {
          if ((int)uVar19 < 0xa71) {
            uVar17 = uVar19 & 0xffffffe0;
            lVar30 = (longlong)param_1 - lVar20;
            uVar12 = 0;
          }
          else {
            uVar12 = param_2 & 0x1f;
            if ((int)uVar12 != 0) {
              uVar12 = (ulonglong)(0x20 - (int)uVar12);
            }
            iVar18 = (int)uVar12;
            if ((int)uVar19 < iVar18 + 0x20) goto LAB_140ab83ce;
            lVar30 = (longlong)param_1 - lVar20;
            uVar24 = 0;
            uVar17 = uVar19 - (uVar19 - iVar18 & 0x1f);
            if (iVar18 != 0) {
              do {
                *(undefined1 *)(uVar24 + param_2) = *(undefined1 *)(uVar24 + lVar30);
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar12);
            }
          }
          do {
            puVar2 = (undefined8 *)(uVar12 + lVar30);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar12 + param_2);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar12 = uVar12 + 0x20;
          } while (uVar12 < (ulonglong)(longlong)(int)uVar17);
        }
        if (uVar17 + 1 <= uVar19) {
          lVar30 = (longlong)(int)uVar17;
          uVar12 = (int)uVar19 - lVar30;
          if ((longlong)uVar12 < 8) {
            uVar24 = 0;
          }
          else {
            uVar24 = (ulonglong)(int)((uint)uVar12 & 0xfffffff8);
            uVar25 = 0;
            do {
              *(undefined8 *)(uVar25 + param_2 + lVar30) =
                   *(undefined8 *)(param_1 + uVar25 + (lVar30 - lVar20));
              uVar25 = uVar25 + 8;
            } while (uVar25 < uVar24);
          }
          if (uVar24 < uVar12) {
            do {
              *(undefined1 *)(uVar24 + lVar30 + param_2) = param_1[uVar24 + (lVar30 - lVar20)];
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar12);
          }
        }
        goto LAB_140ab7c05;
      }
    }
    iVar18 = 1;
    lVar20 = 0;
    if (param_5 >> 1 != 0) {
      uVar12 = 0;
      do {
        uVar24 = uVar12;
        uVar12 = uVar24 + 1;
        *(undefined1 *)(lVar20 + -1 + (longlong)(int)param_5 + param_2) = param_1[lVar20 + -1];
        *(undefined1 *)(lVar20 + -2 + (longlong)(int)param_5 + param_2) = param_1[lVar20 + -2];
        lVar20 = lVar20 + -2;
      } while (uVar12 < param_5 >> 1);
      iVar18 = (int)uVar24 + 2 + (int)uVar12;
    }
    if (param_5 <= iVar18 - 1U) goto LAB_140ab7c05;
LAB_140ab7bed:
    *(undefined1 *)(((longlong)(int)param_5 + param_2) - (longlong)iVar18) =
         param_1[-(longlong)iVar18];
  }
LAB_140ab7c05:
  iVar16 = (int)uVar23;
  iVar18 = (int)lVar11;
  if (lVar13 < 5) {
    iVar21 = -iVar16;
    uVar19 = iVar21 + 4;
    if ((param_6 & 0x80) != 0) {
      if ((int)uVar19 < 1) goto LAB_140ab8360;
      if (6 < (int)uVar19) {
        uVar12 = param_2 + lVar11;
        puVar4 = param_1 + lVar13;
        if ((4 - (longlong)iVar16 <= (longlong)(uVar12 - (longlong)puVar4)) ||
           (4 - (longlong)iVar16 <= (longlong)-(uVar12 - (longlong)puVar4))) {
          if ((int)uVar19 < 0x20) {
LAB_140ab8495:
            uVar14 = 0;
          }
          else {
            if ((int)uVar19 < 0xa71) {
              uVar24 = 0;
              uVar14 = uVar19 & 0xffffffe0;
            }
            else {
              uVar24 = uVar12 & 0x1f;
              if ((int)uVar24 != 0) {
                uVar24 = (ulonglong)(0x20 - (int)uVar24);
              }
              iVar22 = (int)uVar24;
              if ((int)uVar19 < iVar22 + 0x20) goto LAB_140ab8495;
              uVar25 = 0;
              uVar14 = uVar19 - (uVar19 - iVar22 & 0x1f);
              if (iVar22 != 0) {
                do {
                  *(undefined1 *)(uVar25 + uVar12) = puVar4[uVar25];
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar24);
              }
            }
            do {
              puVar2 = (undefined8 *)(puVar4 + uVar24);
              uVar6 = puVar2[1];
              uVar7 = puVar2[2];
              uVar8 = puVar2[3];
              puVar3 = (undefined8 *)(uVar24 + uVar12);
              *puVar3 = *puVar2;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              uVar24 = uVar24 + 0x20;
            } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
          }
          if (uVar14 + 1 <= uVar19) {
            lVar11 = (longlong)(int)uVar14;
            uVar24 = (int)uVar19 - lVar11;
            if ((longlong)uVar24 < 8) {
              uVar25 = 0;
            }
            else {
              uVar26 = 0;
              uVar25 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
              do {
                *(undefined8 *)(uVar26 + uVar12 + lVar11) =
                     *(undefined8 *)(puVar4 + uVar26 + lVar11);
                uVar26 = uVar26 + 8;
              } while (uVar26 < uVar25);
            }
            if (uVar25 < uVar24) {
              do {
                *(undefined1 *)(uVar25 + uVar12 + lVar11) = puVar4[uVar25 + lVar11];
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar24);
            }
          }
          uVar14 = iVar18 + 4 + iVar21;
          goto LAB_140ab8360;
        }
      }
      iVar21 = 1;
      if (uVar19 >> 1 != 0) {
        uVar12 = 0;
        do {
          uVar24 = uVar12;
          *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = param_1[uVar24 * 2 + lVar13];
          *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) = param_1[uVar24 * 2 + lVar13 + 1];
          uVar12 = uVar24 + 1;
        } while (uVar12 < uVar19 >> 1);
        uVar14 = iVar18 + (int)uVar12 * 2;
        iVar21 = (int)uVar24 + 2 + (int)uVar12;
      }
      if (iVar21 - 1U < uVar19) {
        uVar14 = iVar18 + iVar21;
        *(undefined1 *)((longlong)iVar21 + -1 + param_2 + lVar11) =
             param_1[(longlong)iVar21 + -1 + lVar13];
      }
      goto LAB_140ab8360;
    }
    if ((int)uVar19 < 1) goto LAB_140ab8360;
    if (6 < (int)uVar19) {
      uVar12 = param_2 + lVar11;
      lVar20 = (param_2 - lVar13) + lVar11;
      if ((4 - (longlong)iVar16 <= (longlong)(uVar12 - lVar20)) ||
         (4 - (longlong)iVar16 <= (longlong)-(uVar12 - lVar20))) {
        if ((int)uVar19 < 0x20) {
LAB_140ab8479:
          uVar14 = 0;
        }
        else {
          if ((int)uVar19 < 0xa71) {
            uVar24 = 0;
            uVar14 = uVar19 & 0xffffffe0;
          }
          else {
            uVar24 = uVar12 & 0x1f;
            if ((int)uVar24 != 0) {
              uVar24 = (ulonglong)(0x20 - (int)uVar24);
            }
            iVar22 = (int)uVar24;
            if ((int)uVar19 < iVar22 + 0x20) goto LAB_140ab8479;
            uVar25 = 0;
            uVar14 = uVar19 - (uVar19 - iVar22 & 0x1f);
            if (iVar22 != 0) {
              do {
                *(undefined1 *)(uVar25 + uVar12) = *(undefined1 *)(uVar25 + lVar20);
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar24);
            }
          }
          do {
            puVar2 = (undefined8 *)(uVar24 + lVar20);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar24 + uVar12);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar24 = uVar24 + 0x20;
          } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
        }
        if (uVar14 + 1 <= uVar19) {
          lVar11 = (longlong)(int)uVar14;
          uVar24 = (int)uVar19 - lVar11;
          if ((longlong)uVar24 < 8) {
            uVar25 = 0;
          }
          else {
            uVar26 = 0;
            uVar25 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
            do {
              *(undefined8 *)(uVar26 + uVar12 + lVar11) = *(undefined8 *)(lVar20 + lVar11 + uVar26);
              uVar26 = uVar26 + 8;
            } while (uVar26 < uVar25);
          }
          if (uVar25 < uVar24) {
            do {
              *(undefined1 *)(uVar25 + uVar12 + lVar11) = *(undefined1 *)(uVar25 + lVar20 + lVar11);
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar24);
          }
        }
        uVar14 = iVar18 + 4 + iVar21;
        goto LAB_140ab8360;
      }
    }
    iVar21 = 1;
    if (uVar19 >> 1 != 0) {
      lVar20 = (param_2 - lVar13) + lVar11;
      uVar12 = 0;
      do {
        uVar24 = uVar12;
        *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = *(undefined1 *)(lVar20 + uVar24 * 2);
        *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) =
             *(undefined1 *)(lVar20 + 1 + uVar24 * 2);
        uVar12 = uVar24 + 1;
      } while (uVar12 < uVar19 >> 1);
      uVar14 = iVar18 + (int)uVar12 * 2;
      iVar21 = (int)uVar24 + 2 + (int)uVar12;
    }
    if (iVar21 - 1U < uVar19) {
      uVar14 = iVar18 + iVar21;
      *(undefined1 *)((longlong)iVar21 + -1 + param_2 + lVar11) =
           *(undefined1 *)((longlong)iVar21 + -1 + (param_2 - lVar13) + lVar11);
    }
    goto LAB_140ab8360;
  }
  puVar4 = param_1 + lVar13;
  *(undefined1 *)(lVar11 + param_2) = puVar4[-4];
  *(undefined1 *)(lVar11 + 1 + param_2) = puVar4[-3];
  *(undefined1 *)(lVar11 + 2 + param_2) = puVar4[-2];
  iVar21 = -iVar16;
  *(undefined1 *)(lVar11 + 3 + param_2) = puVar4[-1];
  uVar19 = iVar18 + 4;
  uVar17 = iVar21 + 4;
  uVar14 = uVar19;
  if ((param_6 & 0x80) != 0) {
    lVar11 = (longlong)(int)uVar19;
    if ((int)uVar17 < 1) goto LAB_140ab8360;
    if (6 < (int)uVar17) {
      uVar12 = param_2 + lVar11;
      if ((4 - (longlong)iVar16 <= (longlong)(uVar12 - (longlong)puVar4)) ||
         (4 - (longlong)iVar16 <= (longlong)-(uVar12 - (longlong)puVar4))) {
        if ((int)uVar17 < 0x20) {
LAB_140ab845d:
          uVar14 = 0;
        }
        else {
          if ((int)uVar17 < 0xa71) {
            uVar24 = 0;
            uVar14 = uVar17 & 0xffffffe0;
          }
          else {
            uVar24 = uVar12 & 0x1f;
            if ((int)uVar24 != 0) {
              uVar24 = (ulonglong)(0x20 - (int)uVar24);
            }
            iVar22 = (int)uVar24;
            if ((int)uVar17 < iVar22 + 0x20) goto LAB_140ab845d;
            uVar25 = 0;
            uVar14 = uVar17 - (uVar17 - iVar22 & 0x1f);
            if (iVar22 != 0) {
              do {
                *(undefined1 *)(uVar25 + uVar12) = puVar4[uVar25];
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar24);
            }
          }
          do {
            puVar2 = (undefined8 *)(puVar4 + uVar24);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar3 = (undefined8 *)(uVar24 + uVar12);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            uVar24 = uVar24 + 0x20;
          } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
        }
        if (uVar14 + 1 <= uVar17) {
          lVar11 = (longlong)(int)uVar14;
          uVar24 = (int)uVar17 - lVar11;
          if ((longlong)uVar24 < 8) {
            uVar25 = 0;
          }
          else {
            uVar26 = 0;
            uVar25 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
            do {
              *(undefined8 *)(uVar26 + uVar12 + lVar11) = *(undefined8 *)(puVar4 + uVar26 + lVar11);
              uVar26 = uVar26 + 8;
            } while (uVar26 < uVar25);
          }
          if (uVar25 < uVar24) {
            do {
              *(undefined1 *)(uVar25 + uVar12 + lVar11) = puVar4[uVar25 + lVar11];
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar24);
          }
        }
        uVar14 = iVar21 + 8 + iVar18;
        goto LAB_140ab8360;
      }
    }
    iVar21 = 1;
    if (uVar17 >> 1 != 0) {
      uVar12 = 0;
      do {
        uVar24 = uVar12;
        *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = puVar4[uVar24 * 2];
        *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) = puVar4[uVar24 * 2 + 1];
        uVar12 = uVar24 + 1;
      } while (uVar12 < uVar17 >> 1);
      uVar14 = (int)uVar12 * 2 + 4 + iVar18;
      iVar21 = (int)uVar24 + 2 + (int)uVar12;
    }
    if (iVar21 - 1U < uVar17) {
      uVar14 = uVar19 + iVar21;
      *(undefined1 *)((longlong)iVar21 + -1 + param_2 + lVar11) = puVar4[(longlong)iVar21 + -1];
    }
    goto LAB_140ab8360;
  }
  lVar11 = (longlong)(int)uVar19;
  if ((int)uVar17 < 1) goto LAB_140ab8360;
  if (6 < (int)uVar17) {
    uVar12 = param_2 + lVar11;
    if ((4 - (longlong)iVar16 <= (longlong)(uVar12 - (longlong)param_1)) ||
       (4 - (longlong)iVar16 <= (longlong)-(uVar12 - (longlong)param_1))) {
      if ((int)uVar17 < 0x20) {
LAB_140ab843f:
        uVar14 = 0;
      }
      else {
        if ((int)uVar17 < 0xa71) {
          uVar24 = 0;
          uVar14 = uVar17 & 0xffffffe0;
        }
        else {
          uVar24 = uVar12 & 0x1f;
          if ((int)uVar24 != 0) {
            uVar24 = (ulonglong)(0x20 - (int)uVar24);
          }
          iVar22 = (int)uVar24;
          if ((int)uVar17 < iVar22 + 0x20) goto LAB_140ab843f;
          uVar25 = 0;
          uVar14 = uVar17 - (uVar17 - iVar22 & 0x1f);
          if (iVar22 != 0) {
            do {
              *(undefined1 *)(uVar25 + uVar12) = param_1[uVar25];
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar24);
          }
        }
        do {
          puVar2 = (undefined8 *)(param_1 + uVar24);
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined8 *)(uVar24 + uVar12);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          uVar24 = uVar24 + 0x20;
        } while (uVar24 < (ulonglong)(longlong)(int)uVar14);
      }
      if (uVar14 + 1 <= uVar17) {
        lVar11 = (longlong)(int)uVar14;
        uVar24 = (int)uVar17 - lVar11;
        if ((longlong)uVar24 < 8) {
          uVar25 = 0;
        }
        else {
          uVar26 = 0;
          uVar25 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
          do {
            *(undefined8 *)(uVar26 + uVar12 + lVar11) = *(undefined8 *)(param_1 + uVar26 + lVar11);
            uVar26 = uVar26 + 8;
          } while (uVar26 < uVar25);
        }
        if (uVar25 < uVar24) {
          do {
            *(undefined1 *)(uVar25 + uVar12 + lVar11) = param_1[uVar25 + lVar11];
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar24);
        }
      }
      uVar14 = iVar21 + 8 + iVar18;
      goto LAB_140ab8360;
    }
  }
  iVar21 = 1;
  if (uVar17 >> 1 != 0) {
    uVar12 = 0;
    do {
      uVar24 = uVar12;
      *(undefined1 *)(param_2 + lVar11 + uVar24 * 2) = param_1[uVar24 * 2];
      *(undefined1 *)(param_2 + lVar11 + 1 + uVar24 * 2) = param_1[uVar24 * 2 + 1];
      uVar12 = uVar24 + 1;
    } while (uVar12 < uVar17 >> 1);
    uVar14 = (int)uVar12 * 2 + 4 + iVar18;
    iVar21 = (int)uVar24 + 2 + (int)uVar12;
  }
  if (iVar21 - 1U < uVar17) {
    *(undefined1 *)((longlong)iVar21 + -1 + param_2 + lVar11) = param_1[(longlong)iVar21 + -1];
    uVar14 = uVar19 + iVar21;
  }
LAB_140ab8360:
  uVar23 = uVar23 & 0xffffffff;
  if (4 < lVar13) {
    uVar23 = (ulonglong)(uVar14 - (8 - iVar16));
  }
  return uVar23;
}

