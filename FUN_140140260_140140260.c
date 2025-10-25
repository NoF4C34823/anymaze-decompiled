
undefined8
FUN_140140260(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,byte param_5,
             double *param_6,ulonglong param_7)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  byte *pbVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  uint uVar38;
  longlong lVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  uint uStack_c0;
  uint uStack_b0;
  int iStack_80;
  
  iVar13 = (int)param_3;
  uVar30 = param_4 & 0xffffffff;
  uStack_b0 = (uint)param_4;
  lVar20 = (longlong)param_2;
  if (((param_1 == 0) || (param_6 == (double *)0x0)) || (param_7 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar13 < 1) || (uVar17 = (uint)(param_3 >> 0x20), (int)uVar17 < 1)) {
    return 0xfffffffa;
  }
  if (lVar20 < iVar13) {
    return 0xfffffff0;
  }
  if ((-1 < (int)uStack_b0) && ((int)uStack_b0 < iVar13)) {
    uVar23 = param_4 >> 0x20;
    uStack_c0 = (uint)(param_4 >> 0x20);
    if ((-1 < (longlong)param_4) && ((int)uStack_c0 < (int)uVar17)) {
      lVar14 = (longlong)(int)uStack_b0;
      lVar12 = (int)(param_2 * uStack_c0) + param_1;
      bVar2 = *(byte *)(lVar14 + lVar12);
      if (bVar2 == param_5) {
        return 0;
      }
      puVar11 = (uint *)(param_7 + (-(param_7 & 7) & 7));
      param_4 = param_4 & 0xffffffff;
      *(byte *)(lVar14 + lVar12) = param_5;
      auVar41[1] = bVar2;
      auVar41[0] = bVar2;
      auVar41[2] = bVar2;
      auVar41[3] = bVar2;
      auVar41[4] = bVar2;
      auVar41[5] = bVar2;
      auVar41[6] = bVar2;
      auVar41[7] = bVar2;
      auVar41[8] = bVar2;
      auVar41[9] = bVar2;
      auVar41[10] = bVar2;
      auVar41[0xb] = bVar2;
      auVar41[0xc] = bVar2;
      auVar41[0xd] = bVar2;
      auVar41[0xe] = bVar2;
      auVar41[0xf] = bVar2;
      uVar40 = CONCAT17(param_5,CONCAT16(param_5,CONCAT15(param_5,CONCAT14(param_5,CONCAT13(param_5,
                                                  CONCAT12(param_5,CONCAT11(param_5,param_5)))))));
      uVar15 = uStack_b0;
      for (lVar35 = lVar14;
          (uVar16 = (uint)param_4, 0 < (int)uVar15 && (bVar2 == *(byte *)(lVar35 + -1 + lVar12)));
          lVar35 = lVar35 + -1) {
        *(byte *)((longlong)(int)uVar16 + -1 + lVar12) = param_5;
        uVar15 = uVar16 - 1;
        param_4 = (ulonglong)uVar15;
      }
      for (; ((int)uStack_b0 < iVar13 + -1 &&
             (uStack_b0 = (uint)uVar30, bVar2 == *(byte *)(lVar14 + 1 + lVar12)));
          lVar14 = lVar14 + 1) {
        *(byte *)((longlong)(int)uStack_b0 + 1 + lVar12) = param_5;
        uStack_b0 = uStack_b0 + 1;
        uVar30 = (ulonglong)uStack_b0;
      }
      iStack_80 = (uStack_b0 - uVar16) + 1;
      uVar15 = uStack_c0;
      if (1 < (int)uVar17) {
        puVar11[3] = uStack_b0 + 1;
        uVar15 = 0xffffffff;
        if (uStack_c0 != uVar17 - 1) {
          uVar15 = 1;
        }
        *puVar11 = uStack_c0;
        puVar11[1] = uVar16;
        puVar11[2] = uStack_b0;
        puVar11[4] = uStack_b0;
        puVar11[5] = uVar15;
        lVar12 = 1;
        lVar14 = 0x18;
        do {
          lVar35 = lVar14 + -0x18;
          lVar12 = lVar12 + -1;
          uVar3 = *(uint *)(lVar14 + -0x10 + (longlong)puVar11);
          uVar4 = *(uint *)(lVar14 + -0x14 + (longlong)puVar11);
          if ((int)uStack_b0 <= (int)uVar3) {
            uStack_b0 = uVar3;
          }
          uVar10 = *(uint *)(lVar35 + (longlong)puVar11);
          if ((int)uVar4 <= (int)param_4) {
            param_4 = (ulonglong)uVar4;
          }
          iVar5 = *(int *)(lVar14 + -4 + (longlong)puVar11);
          if ((int)uStack_c0 <= (int)uVar10) {
            uStack_c0 = uVar10;
          }
          iVar6 = *(int *)(lVar14 + -0xc + (longlong)puVar11);
          if ((int)uVar10 <= (int)uVar23) {
            uVar23 = (ulonglong)uVar10;
          }
          iVar9 = *(int *)(lVar14 + -8 + (longlong)puVar11);
          uVar30 = param_3 & 0xffffffff;
          uVar16 = (uint)param_4;
          uVar15 = (uint)uVar23;
          if (uVar10 - iVar5 < uVar17) {
            lVar14 = (int)((uVar10 - iVar5) * param_2) + param_1;
            iVar8 = uVar4 - 1;
            if ((int)(uVar4 - 1) < 1) {
              iVar8 = 0;
            }
            iVar32 = uVar3 + 2;
            if (iVar13 <= (int)(uVar3 + 2)) {
              iVar32 = iVar13;
            }
            if (iVar8 < iVar32) {
              lVar39 = ((longlong)(int)uVar10 - (longlong)iVar5) * lVar20 + param_1;
              do {
                lVar36 = (longlong)iVar8;
                if (bVar2 == *(byte *)(lVar14 + lVar36)) {
                  uVar24 = 0;
                  *(byte *)(lVar14 + lVar36) = param_5;
                  iVar31 = iVar8;
                  if (0 < iVar8) {
                    lVar25 = lVar14 + iVar8;
                    uVar34 = uVar24;
                    do {
                      if (bVar2 != *(byte *)((uVar24 - 1) + lVar25)) break;
                      uVar28 = uVar34 + 1;
                      *(byte *)((uVar24 - 1) + lVar25) = param_5;
                      uVar24 = uVar24 - 1;
                      iVar31 = (iVar8 - (int)uVar34) + -1;
                      uVar34 = uVar28;
                    } while (uVar28 < (ulonglong)(longlong)iVar8);
                  }
                  iVar27 = (int)uVar30;
                  if (iVar32 - iVar8 < 0x10) {
                    uVar24 = 0;
                    iVar37 = iVar8;
                    if (iVar8 < iVar27 + -1) {
                      pbVar29 = (byte *)(lVar14 + 1 + (longlong)iVar8);
                      do {
                        if (bVar2 != *pbVar29) break;
                        *pbVar29 = param_5;
                        iVar37 = (int)uVar24 + 1 + iVar8;
                        uVar24 = uVar24 + 1;
                        pbVar29 = pbVar29 + 1;
                      } while (uVar24 < ((longlong)iVar27 - (longlong)iVar8) - 1U);
                    }
                  }
                  else {
                    iVar1 = iVar8;
                    if (iVar8 <= iVar27 + -0x11) {
                      uVar30 = (ulonglong)iVar27;
                      lVar25 = (longlong)iVar8;
                      lVar26 = lVar25 + lVar14;
                      uVar33 = 0;
                      iVar37 = 0;
LAB_140140780:
                      auVar7 = vpcmpeqb_avx(auVar41,*(undefined1 (*) [16])(lVar26 + 1));
                      uVar22 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
                      if (uVar22 == 0xffff) goto code_r0x000140140796;
                      iVar27 = 0;
                      for (uVar22 = ~uVar22; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
                        iVar27 = iVar27 + 1;
                      }
                      iVar37 = iVar27 + iVar8 + iVar37;
                      goto LAB_140140827;
                    }
LAB_1401407b3:
                    iVar37 = iVar1;
                    if (iVar1 < (int)uVar30 + -1) {
                      lVar25 = 0;
                      uVar33 = 0;
                      do {
                        if (bVar2 != *(byte *)(lVar25 + 1 + iVar1 + lVar14)) break;
                        lVar25 = lVar25 + 1;
                        iVar37 = uVar33 + 1 + iVar1;
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < ((int)uVar30 - iVar1) - 1U);
                    }
LAB_140140827:
                    if (iVar8 <= iVar37 + -8) {
                      uVar33 = 0;
                      lVar36 = lVar36 + lVar39;
                      do {
                        uVar33 = uVar33 + 1;
                        *(undefined8 *)(lVar36 + 1) = uVar40;
                        lVar36 = lVar36 + 8;
                      } while (uVar33 < (uint)(iVar37 - iVar8) >> 3);
                      uVar30 = param_3 & 0xffffffff;
                      iVar8 = iVar8 + uVar33 * 8;
                    }
                    lVar36 = (longlong)iVar8;
                    if (iVar8 < iVar37) {
                      uVar33 = (iVar37 - (iVar8 + 1)) + 1;
                      if ((int)uVar33 < 0x20) {
LAB_140141660:
                        uVar22 = 0;
                      }
                      else {
                        if ((int)uVar33 < 0x671) {
                          uVar24 = 0;
                          uVar22 = uVar33 & 0xffffffe0;
                        }
                        else {
                          uVar24 = lVar39 + 1 + lVar36 & 0x1f;
                          if ((int)uVar24 != 0) {
                            uVar24 = (ulonglong)(0x20 - (int)uVar24);
                          }
                          iVar8 = (int)uVar24;
                          if ((int)uVar33 < iVar8 + 0x20) goto LAB_140141660;
                          uVar34 = 0;
                          uVar22 = uVar33 - (uVar33 - iVar8 & 0x1f);
                          if (iVar8 != 0) {
                            do {
                              *(byte *)(uVar34 + 1 + lVar39 + lVar36) = param_5;
                              uVar34 = uVar34 + 1;
                            } while (uVar34 < uVar24);
                          }
                        }
                        do {
                          pbVar29 = (byte *)(uVar24 + 1 + lVar39 + lVar36);
                          *pbVar29 = param_5;
                          pbVar29[1] = param_5;
                          pbVar29[2] = param_5;
                          pbVar29[3] = param_5;
                          pbVar29[4] = param_5;
                          pbVar29[5] = param_5;
                          pbVar29[6] = param_5;
                          pbVar29[7] = param_5;
                          pbVar29[8] = param_5;
                          pbVar29[9] = param_5;
                          pbVar29[10] = param_5;
                          pbVar29[0xb] = param_5;
                          pbVar29[0xc] = param_5;
                          pbVar29[0xd] = param_5;
                          pbVar29[0xe] = param_5;
                          pbVar29[0xf] = param_5;
                          pbVar29[0x10] = param_5;
                          pbVar29[0x11] = param_5;
                          pbVar29[0x12] = param_5;
                          pbVar29[0x13] = param_5;
                          pbVar29[0x14] = param_5;
                          pbVar29[0x15] = param_5;
                          pbVar29[0x16] = param_5;
                          pbVar29[0x17] = param_5;
                          pbVar29[0x18] = param_5;
                          pbVar29[0x19] = param_5;
                          pbVar29[0x1a] = param_5;
                          pbVar29[0x1b] = param_5;
                          pbVar29[0x1c] = param_5;
                          pbVar29[0x1d] = param_5;
                          pbVar29[0x1e] = param_5;
                          pbVar29[0x1f] = param_5;
                          uVar24 = uVar24 + 0x20;
                        } while (uVar24 < (ulonglong)(longlong)(int)uVar22);
                      }
                      if (uVar22 + 1 <= uVar33) {
                        lVar25 = (longlong)(int)uVar22;
                        uVar24 = (int)uVar33 - lVar25;
                        if ((longlong)uVar24 < 8) {
                          uVar34 = 0;
                        }
                        else {
                          uVar34 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
                          uVar28 = 0;
                          do {
                            *(undefined8 *)(uVar28 + 1 + lVar39 + lVar36 + lVar25) = uVar40;
                            uVar28 = uVar28 + 8;
                          } while (uVar28 < uVar34);
                        }
                        if (uVar34 < uVar24) {
                          do {
                            *(byte *)(uVar34 + 1 + lVar36 + lVar39 + lVar25) = param_5;
                            uVar34 = uVar34 + 1;
                          } while (uVar34 < uVar24);
                        }
                      }
                    }
                  }
                  lVar12 = lVar12 + 1;
                  *(uint *)(lVar35 + (longlong)puVar11) = uVar10 - iVar5;
                  iVar8 = iVar37 + 1;
                  *(int *)(lVar35 + 4 + (longlong)puVar11) = iVar31;
                  iStack_80 = iStack_80 + (iVar8 - iVar31);
                  *(int *)(lVar35 + 8 + (longlong)puVar11) = iVar37;
                  *(uint *)(lVar35 + 0xc + (longlong)puVar11) = uVar4;
                  *(uint *)(lVar35 + 0x10 + (longlong)puVar11) = uVar3;
                  *(int *)(lVar35 + 0x14 + (longlong)puVar11) = iVar5;
                  lVar35 = lVar35 + 0x18;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar32);
            }
          }
          iVar8 = (int)uVar30;
          iVar32 = uVar10 + iVar5;
          lVar14 = param_2 * iVar32 + param_1;
          uVar24 = (ulonglong)(uVar4 - 1);
          if ((int)(uVar4 - 1) < 1) {
            uVar24 = 0;
          }
          if ((int)uVar24 < iVar6) {
            lVar39 = ((longlong)(int)uVar10 + (longlong)iVar5) * lVar20 + param_1;
            do {
              uVar33 = (uint)uVar24;
              lVar36 = (longlong)(int)uVar33;
              if (bVar2 == *(byte *)(lVar36 + lVar14)) {
                *(byte *)(lVar36 + lVar14) = param_5;
                lVar25 = 0;
                uVar34 = uVar24;
                uVar22 = uVar33;
                if (0 < (int)uVar33) {
                  uVar34 = (ulonglong)(int)uVar33;
                  uVar28 = 0;
                  uVar21 = uVar24;
                  do {
                    uVar22 = (uint)uVar21;
                    if (bVar2 != *(byte *)(lVar25 + -1 + lVar14 + uVar34)) break;
                    uVar18 = uVar28 + 1;
                    *(byte *)(lVar25 + -1 + lVar14 + uVar34) = param_5;
                    lVar25 = lVar25 + -1;
                    uVar22 = (uVar33 - (int)uVar28) - 1;
                    uVar21 = (ulonglong)uVar22;
                    uVar28 = uVar18;
                  } while (uVar18 < uVar34);
                }
                iVar31 = (int)uVar34;
                iVar8 = (int)uVar30;
                if (iVar6 - iVar31 < 0x10) {
                  uVar34 = 0;
                  uVar38 = uVar33;
                  if (iVar31 < iVar8 + -1) {
                    pbVar29 = (byte *)(lVar14 + 1 + (longlong)iVar31);
                    do {
                      uVar38 = (uint)uVar24;
                      if (bVar2 != *pbVar29) break;
                      *pbVar29 = param_5;
                      uVar38 = (int)uVar34 + 1 + iVar31;
                      uVar24 = (ulonglong)uVar38;
                      uVar34 = uVar34 + 1;
                      pbVar29 = pbVar29 + 1;
                    } while (uVar34 < ((longlong)iVar8 - (longlong)iVar31) - 1U);
                  }
                }
                else {
                  iVar27 = 0;
                  uVar34 = uVar34 & 0xffffffff;
                  if (iVar31 <= iVar8 + -0x11) {
                    uVar30 = (ulonglong)iVar8;
                    lVar26 = (longlong)iVar31;
                    uVar33 = 0;
                    lVar25 = lVar14 + lVar26;
LAB_140140d20:
                    auVar7 = vpcmpeqb_avx(auVar41,*(undefined1 (*) [16])(lVar25 + 1));
                    uVar38 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
                    if (uVar38 == 0xffff) goto code_r0x000140140d37;
                    iVar8 = 0;
                    for (uVar38 = ~uVar38; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
                      iVar8 = iVar8 + 1;
                    }
                    uVar38 = iVar8 + iVar31 + iVar27;
                    goto LAB_140140dc5;
                  }
LAB_140140d51:
                  uVar33 = (uint)uVar34;
                  uVar38 = uVar33;
                  if ((int)uVar33 < (int)uVar30 + -1) {
                    lVar25 = 0;
                    uVar19 = 0;
                    do {
                      uVar38 = (uint)uVar34;
                      if (bVar2 != *(byte *)(lVar25 + 1 + (int)uVar33 + lVar14)) break;
                      lVar25 = lVar25 + 1;
                      uVar38 = uVar19 + 1 + uVar33;
                      uVar34 = (ulonglong)uVar38;
                      uVar19 = uVar19 + 1;
                    } while (uVar19 < ((int)uVar30 - uVar33) - 1);
                  }
LAB_140140dc5:
                  if (iVar31 <= (int)(uVar38 - 8)) {
                    uVar33 = 0;
                    lVar36 = lVar36 + lVar39;
                    do {
                      uVar33 = uVar33 + 1;
                      *(undefined8 *)(lVar36 + 1) = uVar40;
                      lVar36 = lVar36 + 8;
                    } while (uVar33 < uVar38 - iVar31 >> 3);
                    uVar30 = param_3 & 0xffffffff;
                    iVar31 = iVar31 + uVar33 * 8;
                  }
                  lVar36 = (longlong)iVar31;
                  if (iVar31 < (int)uVar38) {
                    uVar33 = (uVar38 - (iVar31 + 1)) + 1;
                    if ((int)uVar33 < 0x20) {
LAB_140141628:
                      uVar19 = 0;
                    }
                    else {
                      if ((int)uVar33 < 0x671) {
                        uVar24 = 0;
                        uVar19 = uVar33 & 0xffffffe0;
                      }
                      else {
                        uVar24 = lVar39 + 1 + lVar36 & 0x1f;
                        if ((int)uVar24 != 0) {
                          uVar24 = (ulonglong)(0x20 - (int)uVar24);
                        }
                        iVar8 = (int)uVar24;
                        if ((int)uVar33 < iVar8 + 0x20) goto LAB_140141628;
                        uVar34 = 0;
                        uVar19 = uVar33 - (uVar33 - iVar8 & 0x1f);
                        if (iVar8 != 0) {
                          do {
                            *(byte *)(uVar34 + 1 + lVar39 + lVar36) = param_5;
                            uVar34 = uVar34 + 1;
                          } while (uVar34 < uVar24);
                        }
                      }
                      do {
                        pbVar29 = (byte *)(uVar24 + 1 + lVar39 + lVar36);
                        *pbVar29 = param_5;
                        pbVar29[1] = param_5;
                        pbVar29[2] = param_5;
                        pbVar29[3] = param_5;
                        pbVar29[4] = param_5;
                        pbVar29[5] = param_5;
                        pbVar29[6] = param_5;
                        pbVar29[7] = param_5;
                        pbVar29[8] = param_5;
                        pbVar29[9] = param_5;
                        pbVar29[10] = param_5;
                        pbVar29[0xb] = param_5;
                        pbVar29[0xc] = param_5;
                        pbVar29[0xd] = param_5;
                        pbVar29[0xe] = param_5;
                        pbVar29[0xf] = param_5;
                        pbVar29[0x10] = param_5;
                        pbVar29[0x11] = param_5;
                        pbVar29[0x12] = param_5;
                        pbVar29[0x13] = param_5;
                        pbVar29[0x14] = param_5;
                        pbVar29[0x15] = param_5;
                        pbVar29[0x16] = param_5;
                        pbVar29[0x17] = param_5;
                        pbVar29[0x18] = param_5;
                        pbVar29[0x19] = param_5;
                        pbVar29[0x1a] = param_5;
                        pbVar29[0x1b] = param_5;
                        pbVar29[0x1c] = param_5;
                        pbVar29[0x1d] = param_5;
                        pbVar29[0x1e] = param_5;
                        pbVar29[0x1f] = param_5;
                        uVar24 = uVar24 + 0x20;
                      } while (uVar24 < (ulonglong)(longlong)(int)uVar19);
                    }
                    if (uVar19 + 1 <= uVar33) {
                      lVar25 = (longlong)(int)uVar19;
                      uVar24 = (int)uVar33 - lVar25;
                      if ((longlong)uVar24 < 8) {
                        uVar34 = 0;
                      }
                      else {
                        uVar34 = (ulonglong)(int)((uint)uVar24 & 0xfffffff8);
                        uVar28 = 0;
                        do {
                          *(undefined8 *)(uVar28 + 1 + lVar39 + lVar36 + lVar25) = uVar40;
                          uVar28 = uVar28 + 8;
                        } while (uVar28 < uVar34);
                      }
                      if (uVar34 < uVar24) {
                        do {
                          *(byte *)(uVar34 + 1 + lVar36 + lVar39 + lVar25) = param_5;
                          uVar34 = uVar34 + 1;
                        } while (uVar34 < uVar24);
                      }
                    }
                  }
                }
                lVar12 = lVar12 + 1;
                *(int *)(lVar35 + (longlong)puVar11) = iVar32;
                uVar33 = uVar38 + 1;
                *(uint *)(lVar35 + 4 + (longlong)puVar11) = uVar22;
                iStack_80 = iStack_80 + (uVar33 - uVar22);
                *(uint *)(lVar35 + 8 + (longlong)puVar11) = uVar38;
                *(uint *)(lVar35 + 0xc + (longlong)puVar11) = uVar4;
                *(uint *)(lVar35 + 0x10 + (longlong)puVar11) = uVar3;
                *(int *)(lVar35 + 0x14 + (longlong)puVar11) = -iVar5;
                lVar35 = lVar35 + 0x18;
              }
              iVar8 = (int)uVar30;
              uVar24 = (ulonglong)(uVar33 + 1);
            } while ((int)(uVar33 + 1) < iVar6);
          }
          uVar33 = iVar9 + 1;
          if ((int)(uVar3 + 2) < iVar8) {
            iVar8 = uVar3 + 2;
          }
          if ((int)uVar33 < iVar8) {
            lVar39 = ((longlong)(int)uVar10 + (longlong)iVar5) * lVar20 + param_1;
            do {
              uVar30 = (ulonglong)uVar33;
              lVar36 = (longlong)(int)uVar33;
              uVar10 = uVar33;
              if (bVar2 == *(byte *)(lVar36 + lVar14)) {
                uVar34 = 0;
                *(byte *)(lVar36 + lVar14) = param_5;
                iVar6 = iVar13 + -1;
                uVar24 = uVar30;
                uVar22 = uVar33;
                if (0 < (int)uVar33) {
                  uVar24 = (ulonglong)(int)uVar33;
                  uVar28 = uVar34;
                  uVar21 = uVar30;
                  do {
                    uVar22 = (uint)uVar21;
                    if (bVar2 != *(byte *)((uVar34 - 1) + lVar14 + uVar24)) break;
                    uVar18 = uVar28 + 1;
                    *(byte *)((uVar34 - 1) + lVar14 + uVar24) = param_5;
                    uVar34 = uVar34 - 1;
                    uVar22 = (uVar33 - (int)uVar28) - 1;
                    uVar21 = (ulonglong)uVar22;
                    uVar28 = uVar18;
                  } while (uVar18 < uVar24);
                }
                iVar9 = (int)uVar24;
                if (iVar8 - iVar9 < 0x10) {
                  uVar24 = 0;
                  if (iVar9 < iVar6) {
                    pbVar29 = (byte *)(lVar14 + 1 + (longlong)iVar9);
                    do {
                      uVar33 = (uint)uVar30;
                      if (bVar2 != *pbVar29) break;
                      *pbVar29 = param_5;
                      uVar33 = (int)uVar24 + 1 + iVar9;
                      uVar30 = (ulonglong)uVar33;
                      uVar24 = uVar24 + 1;
                      pbVar29 = pbVar29 + 1;
                    } while (uVar24 < (ulonglong)((longlong)iVar6 - (longlong)iVar9));
                  }
                }
                else {
                  uVar33 = 0;
                  uVar24 = uVar24 & 0xffffffff;
                  if (iVar9 <= iVar13 + -0x11) {
                    lVar26 = ((longlong)iVar6 + -0x10) - (longlong)iVar9;
                    lVar25 = lVar14 + iVar9;
                    uVar10 = uVar33;
LAB_140141280:
                    auVar7 = vpcmpeqb_avx(auVar41,*(undefined1 (*) [16])(lVar25 + 1));
                    uVar38 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
                    if (uVar38 == 0xffff) goto code_r0x000140141297;
                    iVar6 = 0;
                    for (uVar38 = ~uVar38; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
                      iVar6 = iVar6 + 1;
                    }
                    uVar33 = iVar6 + iVar9 + uVar33;
                    goto LAB_1401412fe;
                  }
LAB_1401412b4:
                  uVar10 = 0;
                  uVar38 = (uint)uVar24;
                  uVar33 = uVar38;
                  if ((int)uVar38 < iVar6) {
                    lVar25 = 0;
                    do {
                      uVar33 = (uint)uVar24;
                      if (bVar2 != *(byte *)(lVar25 + 1 + (int)uVar38 + lVar14)) break;
                      lVar25 = lVar25 + 1;
                      uVar33 = uVar10 + 1 + uVar38;
                      uVar24 = (ulonglong)uVar33;
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < iVar6 - uVar38);
                  }
LAB_1401412fe:
                  uVar10 = 0;
                  if (iVar9 <= (int)(uVar33 - 8)) {
                    lVar36 = lVar36 + lVar39;
                    do {
                      uVar10 = uVar10 + 1;
                      *(undefined8 *)(lVar36 + 1) = uVar40;
                      lVar36 = lVar36 + 8;
                    } while (uVar10 < uVar33 - iVar9 >> 3);
                    iVar9 = iVar9 + uVar10 * 8;
                  }
                  lVar36 = (longlong)iVar9;
                  if (iVar9 < (int)uVar33) {
                    uVar10 = (uVar33 - (iVar9 + 1)) + 1;
                    if ((int)uVar10 < 0x20) {
LAB_1401415ef:
                      uVar38 = 0;
                    }
                    else {
                      if ((int)uVar10 < 0x671) {
                        uVar30 = 0;
                        uVar38 = uVar10 & 0xffffffe0;
                      }
                      else {
                        uVar30 = lVar39 + 1 + lVar36 & 0x1f;
                        if ((int)uVar30 != 0) {
                          uVar30 = (ulonglong)(0x20 - (int)uVar30);
                        }
                        iVar6 = (int)uVar30;
                        if ((int)uVar10 < iVar6 + 0x20) goto LAB_1401415ef;
                        uVar24 = 0;
                        uVar38 = uVar10 - (uVar10 - iVar6 & 0x1f);
                        if (iVar6 != 0) {
                          do {
                            *(byte *)(uVar24 + 1 + lVar39 + lVar36) = param_5;
                            uVar24 = uVar24 + 1;
                          } while (uVar24 < uVar30);
                        }
                      }
                      do {
                        pbVar29 = (byte *)(uVar30 + 1 + lVar39 + lVar36);
                        *pbVar29 = param_5;
                        pbVar29[1] = param_5;
                        pbVar29[2] = param_5;
                        pbVar29[3] = param_5;
                        pbVar29[4] = param_5;
                        pbVar29[5] = param_5;
                        pbVar29[6] = param_5;
                        pbVar29[7] = param_5;
                        pbVar29[8] = param_5;
                        pbVar29[9] = param_5;
                        pbVar29[10] = param_5;
                        pbVar29[0xb] = param_5;
                        pbVar29[0xc] = param_5;
                        pbVar29[0xd] = param_5;
                        pbVar29[0xe] = param_5;
                        pbVar29[0xf] = param_5;
                        pbVar29[0x10] = param_5;
                        pbVar29[0x11] = param_5;
                        pbVar29[0x12] = param_5;
                        pbVar29[0x13] = param_5;
                        pbVar29[0x14] = param_5;
                        pbVar29[0x15] = param_5;
                        pbVar29[0x16] = param_5;
                        pbVar29[0x17] = param_5;
                        pbVar29[0x18] = param_5;
                        pbVar29[0x19] = param_5;
                        pbVar29[0x1a] = param_5;
                        pbVar29[0x1b] = param_5;
                        pbVar29[0x1c] = param_5;
                        pbVar29[0x1d] = param_5;
                        pbVar29[0x1e] = param_5;
                        pbVar29[0x1f] = param_5;
                        uVar30 = uVar30 + 0x20;
                      } while (uVar30 < (ulonglong)(longlong)(int)uVar38);
                    }
                    if (uVar38 + 1 <= uVar10) {
                      lVar25 = (longlong)(int)uVar38;
                      uVar30 = (int)uVar10 - lVar25;
                      if ((longlong)uVar30 < 8) {
                        uVar24 = 0;
                      }
                      else {
                        uVar34 = 0;
                        uVar24 = (ulonglong)(int)((uint)uVar30 & 0xfffffff8);
                        do {
                          *(undefined8 *)(uVar34 + 1 + lVar39 + lVar36 + lVar25) = uVar40;
                          uVar34 = uVar34 + 8;
                        } while (uVar34 < uVar24);
                      }
                      if (uVar24 < uVar30) {
                        do {
                          *(byte *)(uVar24 + 1 + lVar36 + lVar39 + lVar25) = param_5;
                          uVar24 = uVar24 + 1;
                        } while (uVar24 < uVar30);
                      }
                    }
                  }
                }
                lVar12 = lVar12 + 1;
                *(int *)(lVar35 + (longlong)puVar11) = iVar32;
                uVar10 = uVar33 + 1;
                *(uint *)(lVar35 + 4 + (longlong)puVar11) = uVar22;
                *(uint *)(lVar35 + 8 + (longlong)puVar11) = uVar33;
                iStack_80 = iStack_80 + (uVar10 - uVar22);
                *(uint *)(lVar35 + 0xc + (longlong)puVar11) = uVar4;
                *(uint *)(lVar35 + 0x10 + (longlong)puVar11) = uVar3;
                *(int *)(lVar35 + 0x14 + (longlong)puVar11) = -iVar5;
                lVar35 = lVar35 + 0x18;
              }
              uVar33 = uVar10 + 1;
            } while ((int)uVar33 < iVar8);
          }
          lVar14 = lVar35;
        } while (lVar12 != 0);
      }
      *param_6 = (double)iStack_80;
      *(uint *)(param_6 + 4) = uVar16;
      *(uint *)((longlong)param_6 + 0x24) = uVar15;
      *(uint *)(param_6 + 5) = (uStack_b0 - uVar16) + 1;
      *(uint *)((longlong)param_6 + 0x2c) = (uStack_c0 - uVar15) + 1;
      param_6[1] = (double)param_5;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      return 0;
    }
  }
  return 0xfffffff5;
code_r0x000140140796:
  uVar33 = uVar33 + 1;
  lVar26 = lVar26 + 0x10;
  iVar1 = iVar37 + 0x10 + iVar8;
  iVar37 = iVar37 + 0x10;
  if ((uint)((uVar30 - lVar25) + -1 + ((ulonglong)((longlong)((uVar30 - lVar25) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar33) goto LAB_1401407b3;
  goto LAB_140140780;
code_r0x000140140d37:
  uVar33 = uVar33 + 1;
  lVar25 = lVar25 + 0x10;
  uVar34 = (ulonglong)(uint)(iVar27 + 0x10 + iVar31);
  iVar27 = iVar27 + 0x10;
  if ((uint)((uVar30 - lVar26) + -1 + ((ulonglong)((longlong)((uVar30 - lVar26) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar33) goto LAB_140140d51;
  goto LAB_140140d20;
code_r0x000140141297:
  uVar10 = uVar10 + 1;
  lVar25 = lVar25 + 0x10;
  uVar24 = (ulonglong)(uVar33 + 0x10 + iVar9);
  uVar33 = uVar33 + 0x10;
  if ((uint)(lVar26 + 0x10 + ((ulonglong)(lVar26 + 0x10 >> 3) >> 0x3c) >> 4) <= uVar10)
  goto LAB_1401412b4;
  goto LAB_140141280;
}

