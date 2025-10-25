
undefined8
FUN_14013f160(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,byte param_5,
             double *param_6,ulonglong param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  longlong lVar37;
  byte *pbVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  undefined8 uVar43;
  int iStack_80;
  
  iVar8 = (int)param_3;
  uVar17 = param_4 & 0xffffffff;
  lVar28 = (longlong)param_2;
  if (((param_1 == 0) || (param_6 == (double *)0x0)) || (param_7 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar8 < 1) || (uVar24 = (uint)(param_3 >> 0x20), (int)uVar24 < 1)) {
    return 0xfffffffa;
  }
  if (lVar28 < iVar8) {
    return 0xfffffff0;
  }
  uVar15 = (uint)param_4;
  if ((-1 < (int)uVar15) && ((int)uVar15 < iVar8)) {
    uVar26 = param_4 >> 0x20;
    uVar19 = (uint)(param_4 >> 0x20);
    if ((-1 < (longlong)param_4) && ((int)uVar19 < (int)uVar24)) {
      lVar10 = (longlong)(int)uVar15;
      lVar9 = (int)(param_2 * uVar19) + param_1;
      bVar1 = *(byte *)(lVar10 + lVar9);
      uVar33 = (uint)param_5;
      if (bVar1 == uVar33) {
        return 0;
      }
      puVar22 = (uint *)(param_7 + (-(param_7 & 7) & 7));
      auVar6 = vpunpcklbw_avx(ZEXT416((uint)(int)(char)bVar1),ZEXT416((uint)(int)(char)bVar1));
      param_4 = param_4 & 0xffffffff;
      auVar7 = vpunpcklbw_avx(ZEXT416((uint)(int)(char)param_5),ZEXT416((uint)(int)(char)param_5));
      auVar6 = vpunpcklbw_avx(auVar6,auVar6);
      auVar7 = vpunpcklbw_avx(auVar7,auVar7);
      *(byte *)(lVar10 + lVar9) = param_5;
      auVar6 = vpshufd_avx(auVar6,0);
      auVar7 = vpshufd_avx(auVar7,0);
      uVar11 = uVar15;
      for (lVar40 = lVar10;
          (uVar12 = (uint)param_4, 0 < (int)uVar11 && (bVar1 == *(byte *)(lVar40 + -1 + lVar9)));
          lVar40 = lVar40 + -1) {
        *(byte *)((longlong)(int)uVar12 + -1 + lVar9) = param_5;
        uVar11 = uVar12 - 1;
        param_4 = (ulonglong)uVar11;
      }
      for (; (uVar11 = (uint)uVar17, (int)uVar15 < iVar8 + -1 &&
             (bVar1 == *(byte *)(lVar10 + 1 + lVar9))); lVar10 = lVar10 + 1) {
        *(byte *)((longlong)(int)uVar11 + 1 + lVar9) = param_5;
        uVar15 = uVar11 + 1;
        uVar17 = (ulonglong)uVar15;
      }
      iStack_80 = (uVar11 - uVar12) + 1;
      uVar43 = auVar7._0_8_;
      uVar15 = uVar19;
      if (1 < (int)uVar24) {
        auVar7 = vpunpcklbw_avx(ZEXT416(uVar33),ZEXT416(uVar33));
        puVar22[3] = uVar11 + 1;
        auVar7 = vpunpcklwd_avx(auVar7,auVar7);
        auVar7 = vpunpckldq_avx(auVar7,auVar7);
        uVar15 = 0xffffffff;
        if (uVar19 != uVar24 - 1) {
          uVar15 = 1;
        }
        *puVar22 = uVar19;
        puVar22[1] = uVar12;
        puVar22[2] = uVar11;
        puVar22[4] = uVar11;
        auVar7 = vpunpcklqdq_avx(auVar7,auVar7);
        puVar22[5] = uVar15;
        lVar9 = 1;
        lVar10 = 0x18;
        do {
          lVar40 = lVar10 + -0x18;
          lVar9 = lVar9 + -1;
          uVar31 = param_3 & 0xffffffff;
          uVar33 = *(uint *)(lVar10 + -0x10 + (longlong)puVar22);
          uVar2 = *(uint *)(lVar10 + -0x14 + (longlong)puVar22);
          if ((int)uVar17 <= (int)uVar33) {
            uVar17 = (ulonglong)uVar33;
          }
          uVar36 = *(uint *)(lVar40 + (longlong)puVar22);
          if ((int)uVar2 <= (int)param_4) {
            param_4 = (ulonglong)uVar2;
          }
          iVar3 = *(int *)(lVar10 + -0xc + (longlong)puVar22);
          iVar35 = *(int *)(lVar10 + -8 + (longlong)puVar22);
          if ((int)uVar19 <= (int)uVar36) {
            uVar19 = uVar36;
          }
          iVar4 = *(int *)(lVar10 + -4 + (longlong)puVar22);
          if ((int)uVar36 <= (int)uVar26) {
            uVar26 = (ulonglong)uVar36;
          }
          uVar11 = (uint)uVar17;
          uVar12 = (uint)param_4;
          uVar15 = (uint)uVar26;
          if (uVar36 - iVar4 < uVar24) {
            lVar10 = (int)((uVar36 - iVar4) * param_2) + param_1;
            iVar20 = uVar2 - 1;
            if ((int)(uVar2 - 1) < 1) {
              iVar20 = 0;
            }
            iVar21 = uVar33 + 2;
            if (iVar8 <= (int)(uVar33 + 2)) {
              iVar21 = iVar8;
            }
            if (iVar20 < iVar21) {
              lVar41 = ((longlong)(int)uVar36 - (longlong)iVar4) * lVar28 + param_1;
              do {
                lVar13 = (longlong)iVar20;
                if (bVar1 == *(byte *)(lVar10 + lVar13)) {
                  *(byte *)(lVar10 + lVar13) = param_5;
                  lVar37 = 0;
                  iVar18 = iVar20;
                  if (0 < iVar20) {
                    lVar30 = lVar10 + iVar20;
                    uVar14 = 0;
                    do {
                      if (bVar1 != *(byte *)(lVar37 + -1 + lVar30)) break;
                      uVar42 = uVar14 + 1;
                      *(byte *)(lVar37 + -1 + lVar30) = param_5;
                      lVar37 = lVar37 + -1;
                      iVar18 = (iVar20 - (int)uVar14) + -1;
                      uVar14 = uVar42;
                    } while (uVar42 < (ulonglong)(longlong)iVar20);
                  }
                  iVar32 = (int)uVar31;
                  if (iVar21 - iVar20 < 0x10) {
                    uVar14 = 0;
                    iVar16 = iVar20;
                    if (iVar20 < iVar32 + -1) {
                      pbVar38 = (byte *)(lVar10 + 1 + (longlong)iVar20);
                      do {
                        if (bVar1 != *pbVar38) break;
                        *pbVar38 = param_5;
                        iVar16 = (int)uVar14 + 1 + iVar20;
                        uVar14 = uVar14 + 1;
                        pbVar38 = pbVar38 + 1;
                      } while (uVar14 < ((longlong)iVar32 - (longlong)iVar20) - 1U);
                    }
                  }
                  else {
                    iVar25 = iVar20;
                    if (iVar20 <= iVar32 + -0x11) {
                      uVar31 = (ulonglong)iVar32;
                      lVar37 = (longlong)iVar20;
                      lVar30 = lVar37 + lVar10;
                      iVar16 = 0;
                      uVar34 = 0;
LAB_14013f620:
                      auVar5 = vpcmpeqb_avx(auVar6,*(undefined1 (*) [16])(lVar30 + 1));
                      uVar23 = (uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(auVar5[0xf] >> 7) << 0xf);
                      if (uVar23 == 0xffff) goto code_r0x00014013f637;
                      uVar23 = ~uVar23;
                      iVar32 = 0;
                      if (uVar23 != 0) {
                        for (; (uVar23 >> iVar32 & 1) == 0; iVar32 = iVar32 + 1) {
                        }
                      }
                      iVar16 = iVar32 + iVar20 + iVar16;
                      goto LAB_14013f69f;
                    }
LAB_14013f64c:
                    uVar34 = 0;
                    iVar16 = iVar25;
                    if (iVar25 < (int)uVar31 + -1) {
                      lVar37 = 0;
                      do {
                        if (bVar1 != *(byte *)(lVar37 + 1 + iVar25 + lVar10)) break;
                        lVar37 = lVar37 + 1;
                        iVar16 = uVar34 + 1 + iVar25;
                        uVar34 = uVar34 + 1;
                      } while (uVar34 < ((int)uVar31 - iVar25) - 1U);
                    }
LAB_14013f69f:
                    if (iVar20 <= iVar16 + -8) {
                      uVar34 = 0;
                      lVar13 = lVar13 + lVar41;
                      do {
                        uVar34 = uVar34 + 1;
                        *(undefined8 *)(lVar13 + 1) = uVar43;
                        lVar13 = lVar13 + 8;
                      } while (uVar34 < (uint)(iVar16 - iVar20) >> 3);
                      uVar31 = param_3 & 0xffffffff;
                      iVar20 = iVar20 + uVar34 * 8;
                    }
                    lVar13 = (longlong)iVar20;
                    if (iVar20 < iVar16) {
                      uVar14 = ((longlong)iVar16 - (lVar13 + 1)) + 1;
                      if ((longlong)uVar14 < 0x10) {
LAB_14014020d:
                        uVar39 = 0;
                      }
                      else {
                        uVar42 = lVar41 + 1 + lVar13 & 0xf;
                        if (uVar42 != 0) {
                          uVar42 = 0x10 - uVar42;
                        }
                        if ((longlong)uVar14 < (longlong)(uVar42 + 0x10)) goto LAB_14014020d;
                        uVar29 = 0;
                        uVar39 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar42 & 0xfU));
                        if (uVar42 != 0) {
                          do {
                            *(byte *)(uVar29 + 1 + lVar41 + lVar13) = param_5;
                            uVar29 = uVar29 + 1;
                          } while (uVar29 < uVar42);
                        }
                        do {
                          *(undefined1 (*) [16])(uVar42 + 1 + lVar41 + lVar13) = auVar7;
                          uVar42 = uVar42 + 0x10;
                        } while (uVar42 < uVar39);
                      }
                      if (uVar39 < uVar14) {
                        do {
                          *(byte *)(uVar39 + 1 + lVar13 + lVar41) = param_5;
                          uVar39 = uVar39 + 1;
                        } while (uVar39 < uVar14);
                      }
                    }
                  }
                  lVar9 = lVar9 + 1;
                  *(uint *)(lVar40 + (longlong)puVar22) = uVar36 - iVar4;
                  iVar20 = iVar16 + 1;
                  *(int *)(lVar40 + 4 + (longlong)puVar22) = iVar18;
                  *(int *)(lVar40 + 8 + (longlong)puVar22) = iVar16;
                  iStack_80 = iStack_80 + (iVar20 - iVar18);
                  *(uint *)(lVar40 + 0xc + (longlong)puVar22) = uVar2;
                  *(uint *)(lVar40 + 0x10 + (longlong)puVar22) = uVar33;
                  *(int *)(lVar40 + 0x14 + (longlong)puVar22) = iVar4;
                  lVar40 = lVar40 + 0x18;
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 < iVar21);
            }
          }
          iVar20 = (int)uVar31;
          iVar21 = uVar36 + iVar4;
          iVar18 = uVar2 - 1;
          lVar10 = param_2 * iVar21 + param_1;
          if (iVar18 < 1) {
            iVar18 = 0;
          }
          if (iVar18 < iVar3) {
            lVar41 = ((longlong)(int)uVar36 + (longlong)iVar4) * lVar28 + param_1;
            do {
              lVar13 = (longlong)iVar18;
              if (bVar1 == *(byte *)(lVar13 + lVar10)) {
                *(byte *)(lVar13 + lVar10) = param_5;
                lVar37 = 0;
                iVar20 = iVar18;
                if (0 < iVar18) {
                  lVar30 = lVar10 + iVar18;
                  uVar14 = 0;
                  do {
                    if (bVar1 != *(byte *)(lVar37 + -1 + lVar30)) break;
                    uVar42 = uVar14 + 1;
                    *(byte *)(lVar37 + -1 + lVar30) = param_5;
                    lVar37 = lVar37 + -1;
                    iVar20 = (iVar18 - (int)uVar14) + -1;
                    uVar14 = uVar42;
                  } while (uVar42 < (ulonglong)(longlong)iVar18);
                }
                iVar32 = (int)uVar31;
                if (iVar3 - iVar18 < 0x10) {
                  uVar14 = 0;
                  iVar16 = iVar18;
                  if (iVar18 < iVar32 + -1) {
                    pbVar38 = (byte *)(lVar10 + 1 + (longlong)iVar18);
                    do {
                      if (bVar1 != *pbVar38) break;
                      *pbVar38 = param_5;
                      iVar16 = (int)uVar14 + 1 + iVar18;
                      uVar14 = uVar14 + 1;
                      pbVar38 = pbVar38 + 1;
                    } while (uVar14 < ((longlong)iVar32 - (longlong)iVar18) - 1U);
                  }
                }
                else {
                  uVar34 = 0;
                  iVar25 = iVar18;
                  if (iVar18 <= iVar32 + -0x11) {
                    uVar31 = (ulonglong)iVar32;
                    lVar30 = (longlong)iVar18;
                    lVar37 = lVar10 + lVar30;
                    uVar23 = uVar34;
LAB_14013fac0:
                    auVar5 = vpcmpeqb_avx(auVar6,*(undefined1 (*) [16])(lVar37 + 1));
                    uVar27 = (uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar5[0xf] >> 7) << 0xf);
                    if (uVar27 == 0xffff) goto code_r0x00014013fad7;
                    uVar27 = ~uVar27;
                    iVar32 = 0;
                    if (uVar27 != 0) {
                      for (; (uVar27 >> iVar32 & 1) == 0; iVar32 = iVar32 + 1) {
                      }
                    }
                    iVar16 = iVar32 + iVar18 + uVar34;
                    goto LAB_14013fb3e;
                  }
LAB_14013faec:
                  uVar34 = 0;
                  iVar16 = iVar25;
                  if (iVar25 < (int)uVar31 + -1) {
                    lVar37 = 0;
                    do {
                      if (bVar1 != *(byte *)(lVar37 + 1 + iVar25 + lVar10)) break;
                      lVar37 = lVar37 + 1;
                      iVar16 = uVar34 + 1 + iVar25;
                      uVar34 = uVar34 + 1;
                    } while (uVar34 < ((int)uVar31 - iVar25) - 1U);
                  }
LAB_14013fb3e:
                  if (iVar18 <= iVar16 + -8) {
                    uVar34 = 0;
                    lVar13 = lVar13 + lVar41;
                    do {
                      uVar34 = uVar34 + 1;
                      *(undefined8 *)(lVar13 + 1) = uVar43;
                      lVar13 = lVar13 + 8;
                    } while (uVar34 < (uint)(iVar16 - iVar18) >> 3);
                    uVar31 = param_3 & 0xffffffff;
                    iVar18 = iVar18 + uVar34 * 8;
                  }
                  lVar13 = (longlong)iVar18;
                  if (iVar18 < iVar16) {
                    uVar14 = ((longlong)iVar16 - (lVar13 + 1)) + 1;
                    if ((longlong)uVar14 < 0x10) {
LAB_1401401f3:
                      uVar39 = 0;
                    }
                    else {
                      uVar42 = lVar41 + 1 + lVar13 & 0xf;
                      if (uVar42 != 0) {
                        uVar42 = 0x10 - uVar42;
                      }
                      if ((longlong)uVar14 < (longlong)(uVar42 + 0x10)) goto LAB_1401401f3;
                      uVar29 = 0;
                      uVar39 = (ulonglong)(int)((int)uVar14 - ((int)uVar14 - (int)uVar42 & 0xfU));
                      if (uVar42 != 0) {
                        do {
                          *(byte *)(uVar29 + 1 + lVar41 + lVar13) = param_5;
                          uVar29 = uVar29 + 1;
                        } while (uVar29 < uVar42);
                      }
                      do {
                        *(undefined1 (*) [16])(uVar42 + 1 + lVar41 + lVar13) = auVar7;
                        uVar42 = uVar42 + 0x10;
                      } while (uVar42 < uVar39);
                    }
                    if (uVar39 < uVar14) {
                      do {
                        *(byte *)(uVar39 + 1 + lVar13 + lVar41) = param_5;
                        uVar39 = uVar39 + 1;
                      } while (uVar39 < uVar14);
                    }
                  }
                }
                lVar9 = lVar9 + 1;
                *(int *)(lVar40 + (longlong)puVar22) = iVar21;
                iVar18 = iVar16 + 1;
                *(int *)(lVar40 + 4 + (longlong)puVar22) = iVar20;
                *(int *)(lVar40 + 8 + (longlong)puVar22) = iVar16;
                iStack_80 = iStack_80 + (iVar18 - iVar20);
                *(uint *)(lVar40 + 0xc + (longlong)puVar22) = uVar2;
                *(uint *)(lVar40 + 0x10 + (longlong)puVar22) = uVar33;
                *(int *)(lVar40 + 0x14 + (longlong)puVar22) = -iVar4;
                lVar40 = lVar40 + 0x18;
              }
              iVar20 = (int)uVar31;
              iVar18 = iVar18 + 1;
            } while (iVar18 < iVar3);
          }
          uVar34 = iVar35 + 1;
          if ((int)(uVar33 + 2) < iVar20) {
            iVar20 = uVar33 + 2;
          }
          if ((int)uVar34 < iVar20) {
            lVar41 = ((longlong)(int)uVar36 + (longlong)iVar4) * lVar28 + param_1;
            do {
              uVar31 = (ulonglong)uVar34;
              lVar13 = (longlong)(int)uVar34;
              uVar36 = uVar34;
              if (bVar1 == *(byte *)(lVar13 + lVar10)) {
                *(byte *)(lVar13 + lVar10) = param_5;
                lVar37 = 0;
                iVar3 = iVar8 + -1;
                uVar14 = uVar31;
                uVar23 = uVar34;
                if (0 < (int)uVar34) {
                  uVar14 = (ulonglong)(int)uVar34;
                  uVar42 = uVar31;
                  uVar39 = 0;
                  do {
                    uVar23 = (uint)uVar42;
                    if (bVar1 != *(byte *)(lVar37 + -1 + lVar10 + uVar14)) break;
                    uVar29 = uVar39 + 1;
                    *(byte *)(lVar37 + -1 + lVar10 + uVar14) = param_5;
                    lVar37 = lVar37 + -1;
                    uVar23 = (uVar34 - (int)uVar39) - 1;
                    uVar42 = (ulonglong)uVar23;
                    uVar39 = uVar29;
                  } while (uVar29 < uVar14);
                }
                iVar35 = (int)uVar14;
                if (iVar20 - iVar35 < 0x10) {
                  uVar14 = 0;
                  if (iVar35 < iVar3) {
                    pbVar38 = (byte *)(lVar10 + 1 + (longlong)iVar35);
                    do {
                      uVar34 = (uint)uVar31;
                      if (bVar1 != *pbVar38) break;
                      *pbVar38 = param_5;
                      uVar34 = (int)uVar14 + 1 + iVar35;
                      uVar31 = (ulonglong)uVar34;
                      uVar14 = uVar14 + 1;
                      pbVar38 = pbVar38 + 1;
                    } while (uVar14 < (ulonglong)((longlong)iVar3 - (longlong)iVar35));
                  }
                }
                else {
                  uVar34 = 0;
                  uVar14 = uVar14 & 0xffffffff;
                  if (iVar35 <= iVar8 + -0x11) {
                    lVar30 = ((longlong)iVar3 + -0x10) - (longlong)iVar35;
                    lVar37 = lVar10 + iVar35;
                    uVar36 = uVar34;
LAB_14013ff00:
                    auVar5 = vpcmpeqb_avx(auVar6,*(undefined1 (*) [16])(lVar37 + 1));
                    uVar27 = (uint)(ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar5[0xf] >> 7) << 0xf);
                    if (uVar27 == 0xffff) goto code_r0x00014013ff17;
                    uVar27 = ~uVar27;
                    iVar3 = 0;
                    if (uVar27 != 0) {
                      for (; (uVar27 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
                      }
                    }
                    uVar34 = iVar3 + iVar35 + uVar34;
                    goto LAB_14013ff77;
                  }
LAB_14013ff2c:
                  uVar27 = 0;
                  uVar36 = (uint)uVar14;
                  lVar37 = 0;
                  uVar34 = uVar36;
                  if ((int)uVar36 < iVar3) {
                    do {
                      uVar34 = (uint)uVar14;
                      if (bVar1 != *(byte *)(lVar37 + 1 + (int)uVar36 + lVar10)) break;
                      lVar37 = lVar37 + 1;
                      uVar34 = uVar27 + 1 + uVar36;
                      uVar14 = (ulonglong)uVar34;
                      uVar27 = uVar27 + 1;
                    } while (uVar27 < iVar3 - uVar36);
                  }
LAB_14013ff77:
                  uVar36 = 0;
                  if (iVar35 <= (int)(uVar34 - 8)) {
                    lVar13 = lVar13 + lVar41;
                    do {
                      uVar36 = uVar36 + 1;
                      *(undefined8 *)(lVar13 + 1) = uVar43;
                      lVar13 = lVar13 + 8;
                    } while (uVar36 < uVar34 - iVar35 >> 3);
                    iVar35 = iVar35 + uVar36 * 8;
                  }
                  lVar13 = (longlong)iVar35;
                  if (iVar35 < (int)uVar34) {
                    uVar31 = ((longlong)(int)uVar34 - (lVar13 + 1)) + 1;
                    if ((longlong)uVar31 < 0x10) {
LAB_1401401da:
                      uVar42 = 0;
                    }
                    else {
                      uVar14 = lVar41 + 1 + lVar13 & 0xf;
                      if (uVar14 != 0) {
                        uVar14 = 0x10 - uVar14;
                      }
                      if ((longlong)uVar31 < (longlong)(uVar14 + 0x10)) goto LAB_1401401da;
                      uVar39 = 0;
                      uVar42 = (ulonglong)(int)((int)uVar31 - ((int)uVar31 - (int)uVar14 & 0xfU));
                      if (uVar14 != 0) {
                        do {
                          *(byte *)(uVar39 + 1 + lVar41 + lVar13) = param_5;
                          uVar39 = uVar39 + 1;
                        } while (uVar39 < uVar14);
                      }
                      do {
                        *(undefined1 (*) [16])(uVar14 + 1 + lVar41 + lVar13) = auVar7;
                        uVar14 = uVar14 + 0x10;
                      } while (uVar14 < uVar42);
                    }
                    if (uVar42 < uVar31) {
                      do {
                        *(byte *)(uVar42 + 1 + lVar13 + lVar41) = param_5;
                        uVar42 = uVar42 + 1;
                      } while (uVar42 < uVar31);
                    }
                  }
                }
                lVar9 = lVar9 + 1;
                *(int *)(lVar40 + (longlong)puVar22) = iVar21;
                uVar36 = uVar34 + 1;
                *(uint *)(lVar40 + 4 + (longlong)puVar22) = uVar23;
                *(uint *)(lVar40 + 8 + (longlong)puVar22) = uVar34;
                iStack_80 = iStack_80 + (uVar36 - uVar23);
                *(uint *)(lVar40 + 0xc + (longlong)puVar22) = uVar2;
                *(uint *)(lVar40 + 0x10 + (longlong)puVar22) = uVar33;
                *(int *)(lVar40 + 0x14 + (longlong)puVar22) = -iVar4;
                lVar40 = lVar40 + 0x18;
              }
              uVar34 = uVar36 + 1;
            } while ((int)uVar34 < iVar20);
          }
          lVar10 = lVar40;
        } while (lVar9 != 0);
      }
      *param_6 = (double)iStack_80;
      *(uint *)(param_6 + 4) = uVar12;
      *(uint *)((longlong)param_6 + 0x24) = uVar15;
      *(uint *)(param_6 + 5) = (uVar11 - uVar12) + 1;
      *(uint *)((longlong)param_6 + 0x2c) = (uVar19 - uVar15) + 1;
      param_6[1] = (double)param_5;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      return 0;
    }
  }
  return 0xfffffff5;
code_r0x00014013f637:
  uVar34 = uVar34 + 1;
  lVar30 = lVar30 + 0x10;
  iVar25 = iVar16 + 0x10 + iVar20;
  iVar16 = iVar16 + 0x10;
  if ((uint)((uVar31 - lVar37) + -1 + ((ulonglong)((longlong)((uVar31 - lVar37) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar34) goto LAB_14013f64c;
  goto LAB_14013f620;
code_r0x00014013fad7:
  uVar23 = uVar23 + 1;
  lVar37 = lVar37 + 0x10;
  iVar25 = uVar34 + 0x10 + iVar18;
  uVar34 = uVar34 + 0x10;
  if ((uint)((uVar31 - lVar30) + -1 + ((ulonglong)((longlong)((uVar31 - lVar30) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar23) goto LAB_14013faec;
  goto LAB_14013fac0;
code_r0x00014013ff17:
  uVar36 = uVar36 + 1;
  lVar37 = lVar37 + 0x10;
  uVar14 = (ulonglong)(uVar34 + 0x10 + iVar35);
  uVar34 = uVar34 + 0x10;
  if ((uint)(lVar30 + 0x10 + ((ulonglong)(lVar30 + 0x10 >> 3) >> 0x3c) >> 4) <= uVar36)
  goto LAB_14013ff2c;
  goto LAB_14013ff00;
}

