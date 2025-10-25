
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401416e0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,byte param_5,
             double *param_6,ulonglong param_7)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  byte *pbVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  longlong lVar44;
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined8 uVar48;
  uint uStack_c0;
  uint uStack_b0;
  int iStack_80;
  
  iVar17 = (int)param_3;
  uVar33 = param_4 & 0xffffffff;
  uStack_b0 = (uint)param_4;
  lVar24 = (longlong)param_2;
  if (((param_1 == 0) || (param_6 == (double *)0x0)) || (param_7 == 0)) {
    return 0xfffffff8;
  }
  if ((iVar17 < 1) || (uVar21 = (uint)(param_3 >> 0x20), (int)uVar21 < 1)) {
    return 0xfffffffa;
  }
  if (lVar24 < iVar17) {
    return 0xfffffff0;
  }
  if ((-1 < (int)uStack_b0) && ((int)uStack_b0 < iVar17)) {
    uVar27 = param_4 >> 0x20;
    uStack_c0 = (uint)(param_4 >> 0x20);
    if ((-1 < (longlong)param_4) && ((int)uStack_c0 < (int)uVar21)) {
      lVar18 = (longlong)(int)uStack_b0;
      lVar16 = (int)(param_2 * uStack_c0) + param_1;
      bVar2 = *(byte *)(lVar18 + lVar16);
      if (bVar2 == param_5) {
        return 0;
      }
      puVar15 = (uint *)(param_7 + (-(param_7 & 7) & 7));
      param_4 = param_4 & 0xffffffff;
      *(byte *)(lVar18 + lVar16) = param_5;
      auVar8 = vpbroadcastb_avx512vl();
      auVar9 = vpbroadcastb_avx512vl();
      uVar19 = uStack_b0;
      for (lVar39 = lVar18;
          (uVar20 = (uint)param_4, 0 < (int)uVar19 && (bVar2 == *(byte *)(lVar39 + -1 + lVar16)));
          lVar39 = lVar39 + -1) {
        *(byte *)((longlong)(int)uVar20 + -1 + lVar16) = param_5;
        uVar19 = uVar20 - 1;
        param_4 = (ulonglong)uVar19;
      }
      for (; ((int)uStack_b0 < iVar17 + -1 &&
             (uStack_b0 = (uint)uVar33, bVar2 == *(byte *)(lVar18 + 1 + lVar16)));
          lVar18 = lVar18 + 1) {
        *(byte *)((longlong)(int)uStack_b0 + 1 + lVar16) = param_5;
        uStack_b0 = uStack_b0 + 1;
        uVar33 = (ulonglong)uStack_b0;
      }
      iStack_80 = (uStack_b0 - uVar20) + 1;
      uVar19 = uStack_c0;
      if (1 < (int)uVar21) {
        puVar15[3] = uStack_b0 + 1;
        uVar19 = 0xffffffff;
        if (uStack_c0 != uVar21 - 1) {
          uVar19 = 1;
        }
        *puVar15 = uStack_c0;
        puVar15[1] = uVar20;
        puVar15[2] = uStack_b0;
        puVar15[4] = uStack_b0;
        auVar11 = _DAT_143087bc0;
        auVar10 = _DAT_143087b80;
        auVar45 = vpbroadcastb_avx512bw();
        puVar15[5] = uVar19;
        lVar16 = 1;
        lVar18 = 0x18;
        do {
          lVar39 = lVar18 + -0x18;
          lVar16 = lVar16 + -1;
          uVar3 = *(uint *)(lVar18 + -0x10 + (longlong)puVar15);
          uVar4 = *(uint *)(lVar18 + -0x14 + (longlong)puVar15);
          if ((int)uStack_b0 <= (int)uVar3) {
            uStack_b0 = uVar3;
          }
          uVar14 = *(uint *)(lVar39 + (longlong)puVar15);
          if ((int)uVar4 <= (int)param_4) {
            param_4 = (ulonglong)uVar4;
          }
          iVar5 = *(int *)(lVar18 + -4 + (longlong)puVar15);
          if ((int)uStack_c0 <= (int)uVar14) {
            uStack_c0 = uVar14;
          }
          iVar6 = *(int *)(lVar18 + -0xc + (longlong)puVar15);
          if ((int)uVar14 <= (int)uVar27) {
            uVar27 = (ulonglong)uVar14;
          }
          iVar13 = *(int *)(lVar18 + -8 + (longlong)puVar15);
          uVar33 = param_3 & 0xffffffff;
          uVar48 = auVar9._0_8_;
          uVar20 = (uint)param_4;
          uVar19 = (uint)uVar27;
          if (uVar14 - iVar5 < uVar21) {
            lVar18 = (int)((uVar14 - iVar5) * param_2) + param_1;
            iVar12 = uVar4 - 1;
            if ((int)(uVar4 - 1) < 1) {
              iVar12 = 0;
            }
            iVar41 = uVar3 + 2;
            if (iVar17 <= (int)(uVar3 + 2)) {
              iVar41 = iVar17;
            }
            if (iVar12 < iVar41) {
              lVar44 = ((longlong)(int)uVar14 - (longlong)iVar5) * lVar24 + param_1;
              do {
                lVar40 = (longlong)iVar12;
                if (bVar2 == *(byte *)(lVar18 + lVar40)) {
                  uVar32 = 0;
                  *(byte *)(lVar18 + lVar40) = param_5;
                  iVar23 = iVar12;
                  if (0 < iVar12) {
                    lVar28 = lVar18 + iVar12;
                    uVar38 = uVar32;
                    do {
                      if (bVar2 != *(byte *)((uVar32 - 1) + lVar28)) break;
                      uVar35 = uVar38 + 1;
                      *(byte *)((uVar32 - 1) + lVar28) = param_5;
                      uVar32 = uVar32 - 1;
                      iVar23 = (iVar12 - (int)uVar38) + -1;
                      uVar38 = uVar35;
                    } while (uVar35 < (ulonglong)(longlong)iVar12);
                  }
                  iVar30 = (int)uVar33;
                  if (iVar41 - iVar12 < 0x10) {
                    uVar32 = 0;
                    iVar42 = iVar12;
                    if (iVar12 < iVar30 + -1) {
                      pbVar36 = (byte *)(lVar18 + 1 + (longlong)iVar12);
                      do {
                        if (bVar2 != *pbVar36) break;
                        *pbVar36 = param_5;
                        iVar42 = (int)uVar32 + 1 + iVar12;
                        uVar32 = uVar32 + 1;
                        pbVar36 = pbVar36 + 1;
                      } while (uVar32 < ((longlong)iVar30 - (longlong)iVar12) - 1U);
                    }
                  }
                  else {
                    iVar1 = iVar12;
                    if (iVar12 <= iVar30 + -0x11) {
                      uVar33 = (ulonglong)iVar30;
                      lVar28 = (longlong)iVar12;
                      lVar29 = lVar28 + lVar18;
                      uVar37 = 0;
                      iVar42 = 0;
LAB_140141c20:
                      auVar7 = vpcmpeqb_avx(auVar8,*(undefined1 (*) [16])(lVar29 + 1));
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
                      if (uVar22 == 0xffff) goto code_r0x000140141c37;
                      iVar30 = 0;
                      for (uVar22 = ~uVar22; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
                        iVar30 = iVar30 + 1;
                      }
                      iVar42 = iVar30 + iVar12 + iVar42;
                      goto LAB_140141cc7;
                    }
LAB_140141c54:
                    iVar42 = iVar1;
                    if (iVar1 < (int)uVar33 + -1) {
                      lVar28 = 0;
                      uVar37 = 0;
                      do {
                        if (bVar2 != *(byte *)(lVar28 + 1 + iVar1 + lVar18)) break;
                        lVar28 = lVar28 + 1;
                        iVar42 = uVar37 + 1 + iVar1;
                        uVar37 = uVar37 + 1;
                      } while (uVar37 < ((int)uVar33 - iVar1) - 1U);
                    }
LAB_140141cc7:
                    if (iVar12 <= iVar42 + -8) {
                      uVar37 = 0;
                      lVar40 = lVar40 + lVar44;
                      do {
                        uVar37 = uVar37 + 1;
                        *(undefined8 *)(lVar40 + 1) = uVar48;
                        lVar40 = lVar40 + 8;
                      } while (uVar37 < (uint)(iVar42 - iVar12) >> 3);
                      uVar33 = param_3 & 0xffffffff;
                      iVar12 = iVar12 + uVar37 * 8;
                    }
                    lVar40 = (longlong)iVar12;
                    if (iVar12 < iVar42) {
                      uVar37 = (iVar42 - (iVar12 + 1)) + 1;
                      if ((int)uVar37 < 0x40) {
                        uVar22 = 0;
                      }
                      else {
                        if ((int)uVar37 < 0x96) {
                          uVar43 = 0;
                          uVar22 = uVar37 & 0xffffffc0;
                        }
                        else {
                          uVar22 = (int)lVar44 + 1 + iVar12 & 0x3f;
                          uVar43 = uVar22;
                          if ((uVar22 != 0) &&
                             (uVar43 = 0x40 - uVar22, (int)uVar37 < (int)(0x40 - uVar22))) {
                            uVar43 = uVar37;
                          }
                          uVar22 = uVar37 - (uVar37 - uVar43 & 0x3f);
                          if (uVar43 != 0) {
                            auVar46 = vpbroadcastd_avx512f();
                            uVar32 = 0;
                            auVar47 = auVar11;
                            do {
                              vpcmpgtd_avx512f(auVar46,auVar47);
                              auVar47 = vpaddd_avx512f(auVar47,auVar10);
                              auVar7 = vmovdqu8_avx512vl(auVar9);
                              *(undefined1 (*) [16])(uVar32 + 1 + lVar44 + lVar40) = auVar7;
                              uVar32 = uVar32 + 0x10;
                            } while (uVar32 < (ulonglong)(longlong)(int)uVar43);
                            if (uVar37 == uVar43) goto LAB_140141ea0;
                          }
                        }
                        if ((int)(uVar43 + 0x40) <= (int)uVar22) {
                          uVar38 = (ulonglong)(int)uVar43;
                          uVar32 = uVar38;
                          do {
                            uVar43 = (int)uVar38 + 0x40;
                            uVar38 = (ulonglong)uVar43;
                            auVar47 = vmovdqu32_avx512f(auVar45);
                            *(undefined1 (*) [64])(uVar32 + 1 + lVar44 + lVar40) = auVar47;
                            uVar32 = uVar32 + 0x40;
                          } while (uVar43 < uVar22);
                        }
                      }
                      if (uVar22 + 1 <= uVar37) {
                        uVar32 = 0;
                        auVar46 = vpbroadcastd_avx512f();
                        auVar47 = auVar11;
                        do {
                          vpcmpgtd_avx512f(auVar46,auVar47);
                          auVar47 = vpaddd_avx512f(auVar47,auVar10);
                          auVar7 = vmovdqu8_avx512vl(auVar9);
                          *(undefined1 (*) [16])
                           (uVar32 + 1 + lVar40 + lVar44 + (longlong)(int)uVar22) = auVar7;
                          uVar32 = uVar32 + 0x10;
                        } while (uVar32 < (ulonglong)((longlong)(int)uVar37 - (longlong)(int)uVar22)
                                );
                      }
                    }
                  }
LAB_140141ea0:
                  lVar16 = lVar16 + 1;
                  *(uint *)(lVar39 + (longlong)puVar15) = uVar14 - iVar5;
                  iVar12 = iVar42 + 1;
                  *(int *)(lVar39 + 4 + (longlong)puVar15) = iVar23;
                  iStack_80 = iStack_80 + (iVar12 - iVar23);
                  *(int *)(lVar39 + 8 + (longlong)puVar15) = iVar42;
                  *(uint *)(lVar39 + 0xc + (longlong)puVar15) = uVar4;
                  *(uint *)(lVar39 + 0x10 + (longlong)puVar15) = uVar3;
                  *(int *)(lVar39 + 0x14 + (longlong)puVar15) = iVar5;
                  lVar39 = lVar39 + 0x18;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar41);
            }
          }
          iVar41 = (int)uVar33;
          iVar12 = uVar14 + iVar5;
          lVar18 = param_2 * iVar12 + param_1;
          uVar32 = (ulonglong)(uVar4 - 1);
          if ((int)(uVar4 - 1) < 1) {
            uVar32 = 0;
          }
          if ((int)uVar32 < iVar6) {
            lVar44 = ((longlong)(int)uVar14 + (longlong)iVar5) * lVar24 + param_1;
            do {
              uVar37 = (uint)uVar32;
              lVar40 = (longlong)(int)uVar37;
              if (bVar2 == *(byte *)(lVar40 + lVar18)) {
                *(byte *)(lVar40 + lVar18) = param_5;
                lVar28 = 0;
                uVar38 = uVar32;
                uVar22 = uVar37;
                if (0 < (int)uVar37) {
                  uVar38 = (ulonglong)(int)uVar37;
                  uVar35 = uVar32;
                  uVar26 = 0;
                  do {
                    uVar22 = (uint)uVar35;
                    if (bVar2 != *(byte *)(lVar28 + -1 + lVar18 + uVar38)) break;
                    uVar25 = uVar26 + 1;
                    *(byte *)(lVar28 + -1 + lVar18 + uVar38) = param_5;
                    lVar28 = lVar28 + -1;
                    uVar22 = (uVar37 - (int)uVar26) - 1;
                    uVar35 = (ulonglong)uVar22;
                    uVar26 = uVar25;
                  } while (uVar25 < uVar38);
                }
                iVar23 = (int)uVar38;
                iVar41 = (int)uVar33;
                if (iVar6 - iVar23 < 0x10) {
                  uVar38 = 0;
                  uVar43 = uVar37;
                  if (iVar23 < iVar41 + -1) {
                    pbVar36 = (byte *)(lVar18 + 1 + (longlong)iVar23);
                    do {
                      uVar43 = (uint)uVar32;
                      if (bVar2 != *pbVar36) break;
                      *pbVar36 = param_5;
                      uVar43 = (int)uVar38 + 1 + iVar23;
                      uVar32 = (ulonglong)uVar43;
                      uVar38 = uVar38 + 1;
                      pbVar36 = pbVar36 + 1;
                    } while (uVar38 < ((longlong)iVar41 - (longlong)iVar23) - 1U);
                  }
                }
                else {
                  iVar30 = 0;
                  uVar38 = uVar38 & 0xffffffff;
                  if (iVar23 <= iVar41 + -0x11) {
                    uVar33 = (ulonglong)iVar41;
                    lVar29 = (longlong)iVar23;
                    uVar37 = 0;
                    lVar28 = lVar18 + lVar29;
LAB_140142180:
                    auVar7 = vpcmpeqb_avx(auVar8,*(undefined1 (*) [16])(lVar28 + 1));
                    uVar43 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
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
                    if (uVar43 == 0xffff) goto code_r0x000140142197;
                    iVar41 = 0;
                    for (uVar43 = ~uVar43; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x80000000) {
                      iVar41 = iVar41 + 1;
                    }
                    uVar43 = iVar41 + iVar23 + iVar30;
                    goto LAB_140142227;
                  }
LAB_1401421b4:
                  uVar37 = (uint)uVar38;
                  uVar43 = uVar37;
                  if ((int)uVar37 < (int)uVar33 + -1) {
                    lVar28 = 0;
                    uVar31 = 0;
                    do {
                      uVar43 = (uint)uVar38;
                      if (bVar2 != *(byte *)(lVar28 + 1 + (int)uVar37 + lVar18)) break;
                      lVar28 = lVar28 + 1;
                      uVar43 = uVar31 + 1 + uVar37;
                      uVar38 = (ulonglong)uVar43;
                      uVar31 = uVar31 + 1;
                    } while (uVar31 < ((int)uVar33 - uVar37) - 1);
                  }
LAB_140142227:
                  if (iVar23 <= (int)(uVar43 - 8)) {
                    uVar37 = 0;
                    lVar40 = lVar40 + lVar44;
                    do {
                      uVar37 = uVar37 + 1;
                      *(undefined8 *)(lVar40 + 1) = uVar48;
                      lVar40 = lVar40 + 8;
                    } while (uVar37 < uVar43 - iVar23 >> 3);
                    uVar33 = param_3 & 0xffffffff;
                    iVar23 = iVar23 + uVar37 * 8;
                  }
                  lVar40 = (longlong)iVar23;
                  if (iVar23 < (int)uVar43) {
                    uVar37 = (uVar43 - (iVar23 + 1)) + 1;
                    if ((int)uVar37 < 0x40) {
                      uVar31 = 0;
                    }
                    else {
                      if ((int)uVar37 < 0x96) {
                        uVar34 = 0;
                        uVar31 = uVar37 & 0xffffffc0;
                      }
                      else {
                        uVar31 = (int)lVar44 + 1 + iVar23 & 0x3f;
                        uVar34 = uVar31;
                        if ((uVar31 != 0) &&
                           (uVar34 = 0x40 - uVar31, (int)uVar37 < (int)(0x40 - uVar31))) {
                          uVar34 = uVar37;
                        }
                        uVar31 = uVar37 - (uVar37 - uVar34 & 0x3f);
                        if (uVar34 != 0) {
                          auVar46 = vpbroadcastd_avx512f();
                          uVar32 = 0;
                          auVar47 = auVar11;
                          do {
                            vpcmpgtd_avx512f(auVar46,auVar47);
                            auVar47 = vpaddd_avx512f(auVar47,auVar10);
                            auVar7 = vmovdqu8_avx512vl(auVar9);
                            *(undefined1 (*) [16])(uVar32 + 1 + lVar44 + lVar40) = auVar7;
                            uVar32 = uVar32 + 0x10;
                          } while (uVar32 < (ulonglong)(longlong)(int)uVar34);
                          if (uVar37 == uVar34) goto LAB_140142400;
                        }
                      }
                      if ((int)(uVar34 + 0x40) <= (int)uVar31) {
                        uVar38 = (ulonglong)(int)uVar34;
                        uVar32 = uVar38;
                        do {
                          uVar34 = (int)uVar32 + 0x40;
                          uVar32 = (ulonglong)uVar34;
                          auVar47 = vmovdqu32_avx512f(auVar45);
                          *(undefined1 (*) [64])(uVar38 + 1 + lVar44 + lVar40) = auVar47;
                          uVar38 = uVar38 + 0x40;
                        } while (uVar34 < uVar31);
                      }
                    }
                    if (uVar31 + 1 <= uVar37) {
                      uVar32 = 0;
                      auVar46 = vpbroadcastd_avx512f();
                      auVar47 = auVar11;
                      do {
                        vpcmpgtd_avx512f(auVar46,auVar47);
                        auVar47 = vpaddd_avx512f(auVar47,auVar10);
                        auVar7 = vmovdqu8_avx512vl(auVar9);
                        *(undefined1 (*) [16])(uVar32 + 1 + lVar40 + lVar44 + (longlong)(int)uVar31)
                             = auVar7;
                        uVar32 = uVar32 + 0x10;
                      } while (uVar32 < (ulonglong)((longlong)(int)uVar37 - (longlong)(int)uVar31));
                    }
                  }
                }
LAB_140142400:
                lVar16 = lVar16 + 1;
                *(int *)(lVar39 + (longlong)puVar15) = iVar12;
                uVar37 = uVar43 + 1;
                *(uint *)(lVar39 + 4 + (longlong)puVar15) = uVar22;
                iStack_80 = iStack_80 + (uVar37 - uVar22);
                *(uint *)(lVar39 + 8 + (longlong)puVar15) = uVar43;
                *(uint *)(lVar39 + 0xc + (longlong)puVar15) = uVar4;
                *(uint *)(lVar39 + 0x10 + (longlong)puVar15) = uVar3;
                *(int *)(lVar39 + 0x14 + (longlong)puVar15) = -iVar5;
                lVar39 = lVar39 + 0x18;
              }
              iVar41 = (int)uVar33;
              uVar32 = (ulonglong)(uVar37 + 1);
            } while ((int)(uVar37 + 1) < iVar6);
          }
          uVar37 = iVar13 + 1;
          if ((int)(uVar3 + 2) < iVar41) {
            iVar41 = uVar3 + 2;
          }
          if ((int)uVar37 < iVar41) {
            lVar44 = ((longlong)(int)uVar14 + (longlong)iVar5) * lVar24 + param_1;
            do {
              uVar33 = (ulonglong)uVar37;
              lVar40 = (longlong)(int)uVar37;
              uVar14 = uVar37;
              if (bVar2 == *(byte *)(lVar40 + lVar18)) {
                uVar38 = 0;
                *(byte *)(lVar40 + lVar18) = param_5;
                iVar6 = iVar17 + -1;
                uVar32 = uVar33;
                uVar22 = uVar37;
                if (0 < (int)uVar37) {
                  uVar32 = (ulonglong)(int)uVar37;
                  uVar35 = uVar38;
                  uVar26 = uVar33;
                  do {
                    uVar22 = (uint)uVar26;
                    if (bVar2 != *(byte *)((uVar38 - 1) + lVar18 + uVar32)) break;
                    uVar25 = uVar35 + 1;
                    *(byte *)((uVar38 - 1) + lVar18 + uVar32) = param_5;
                    uVar38 = uVar38 - 1;
                    uVar22 = (uVar37 - (int)uVar35) - 1;
                    uVar26 = (ulonglong)uVar22;
                    uVar35 = uVar25;
                  } while (uVar25 < uVar32);
                }
                iVar13 = (int)uVar32;
                if (iVar41 - iVar13 < 0x10) {
                  uVar32 = 0;
                  if (iVar13 < iVar6) {
                    pbVar36 = (byte *)(lVar18 + 1 + (longlong)iVar13);
                    do {
                      uVar37 = (uint)uVar33;
                      if (bVar2 != *pbVar36) break;
                      *pbVar36 = param_5;
                      uVar37 = (int)uVar32 + 1 + iVar13;
                      uVar33 = (ulonglong)uVar37;
                      uVar32 = uVar32 + 1;
                      pbVar36 = pbVar36 + 1;
                    } while (uVar32 < (ulonglong)((longlong)iVar6 - (longlong)iVar13));
                  }
                }
                else {
                  iVar23 = 0;
                  uVar32 = uVar32 & 0xffffffff;
                  if (iVar13 <= iVar17 + -0x11) {
                    lVar29 = ((longlong)iVar6 + -0x10) - (longlong)iVar13;
                    uVar14 = 0;
                    lVar28 = lVar18 + iVar13;
LAB_1401426c0:
                    auVar7 = vpcmpeqb_avx(auVar8,*(undefined1 (*) [16])(lVar28 + 1));
                    uVar37 = (uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
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
                    if (uVar37 == 0xffff) goto code_r0x0001401426d7;
                    iVar6 = 0;
                    for (uVar37 = ~uVar37; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
                      iVar6 = iVar6 + 1;
                    }
                    uVar37 = iVar6 + iVar13 + iVar23;
                    goto LAB_14014273e;
                  }
LAB_1401426f4:
                  uVar14 = 0;
                  uVar43 = (uint)uVar32;
                  uVar37 = uVar43;
                  if ((int)uVar43 < iVar6) {
                    lVar28 = 0;
                    do {
                      uVar37 = (uint)uVar32;
                      if (bVar2 != *(byte *)(lVar28 + 1 + (int)uVar43 + lVar18)) break;
                      lVar28 = lVar28 + 1;
                      uVar37 = uVar14 + 1 + uVar43;
                      uVar32 = (ulonglong)uVar37;
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < iVar6 - uVar43);
                  }
LAB_14014273e:
                  uVar14 = 0;
                  if (iVar13 <= (int)(uVar37 - 8)) {
                    lVar40 = lVar40 + lVar44;
                    do {
                      uVar14 = uVar14 + 1;
                      *(undefined8 *)(lVar40 + 1) = uVar48;
                      lVar40 = lVar40 + 8;
                    } while (uVar14 < uVar37 - iVar13 >> 3);
                    iVar13 = iVar13 + uVar14 * 8;
                  }
                  lVar40 = (longlong)iVar13;
                  if (iVar13 < (int)uVar37) {
                    uVar14 = (uVar37 - (iVar13 + 1)) + 1;
                    if ((int)uVar14 < 0x40) {
                      uVar43 = 0;
                    }
                    else {
                      if ((int)uVar14 < 0x96) {
                        uVar33 = 0;
                        uVar43 = uVar14 & 0xffffffc0;
                      }
                      else {
                        uVar33 = lVar44 + 1 + lVar40 & 0x3f;
                        if (((int)uVar33 != 0) &&
                           (uVar43 = 0x40 - (int)uVar33, uVar33 = (ulonglong)uVar43,
                           (int)uVar14 < (int)uVar43)) {
                          uVar33 = (ulonglong)uVar14;
                        }
                        uVar31 = (uint)uVar33;
                        uVar43 = uVar14 - (uVar14 - uVar31 & 0x3f);
                        if (uVar31 != 0) {
                          auVar46 = vpbroadcastd_avx512f();
                          uVar32 = 0;
                          uVar33 = (ulonglong)(int)uVar31;
                          auVar47 = auVar11;
                          do {
                            vpcmpgtd_avx512f(auVar46,auVar47);
                            auVar47 = vpaddd_avx512f(auVar47,auVar10);
                            auVar7 = vmovdqu8_avx512vl(auVar9);
                            *(undefined1 (*) [16])(uVar32 + 1 + lVar44 + lVar40) = auVar7;
                            uVar32 = uVar32 + 0x10;
                          } while (uVar32 < uVar33);
                          if (uVar14 == uVar31) goto LAB_1401428e0;
                        }
                      }
                      if ((int)uVar33 + 0x40 <= (int)uVar43) {
                        lVar28 = (longlong)(int)uVar33;
                        do {
                          uVar31 = (int)uVar33 + 0x40;
                          uVar33 = (ulonglong)uVar31;
                          auVar47 = vmovdqu32_avx512f(auVar45);
                          *(undefined1 (*) [64])(lVar28 + 1 + lVar44 + lVar40) = auVar47;
                          lVar28 = lVar28 + 0x40;
                        } while (uVar31 < uVar43);
                      }
                    }
                    if (uVar43 + 1 <= uVar14) {
                      uVar33 = 0;
                      auVar46 = vpbroadcastd_avx512f();
                      auVar47 = auVar11;
                      do {
                        vpcmpgtd_avx512f(auVar46,auVar47);
                        auVar47 = vpaddd_avx512f(auVar47,auVar10);
                        auVar7 = vmovdqu8_avx512vl(auVar9);
                        *(undefined1 (*) [16])(uVar33 + 1 + lVar40 + lVar44 + (longlong)(int)uVar43)
                             = auVar7;
                        uVar33 = uVar33 + 0x10;
                      } while (uVar33 < (ulonglong)((longlong)(int)uVar14 - (longlong)(int)uVar43));
                    }
                  }
                }
LAB_1401428e0:
                lVar16 = lVar16 + 1;
                *(int *)(lVar39 + (longlong)puVar15) = iVar12;
                uVar14 = uVar37 + 1;
                *(uint *)(lVar39 + 4 + (longlong)puVar15) = uVar22;
                *(uint *)(lVar39 + 8 + (longlong)puVar15) = uVar37;
                iStack_80 = iStack_80 + (uVar14 - uVar22);
                *(uint *)(lVar39 + 0xc + (longlong)puVar15) = uVar4;
                *(uint *)(lVar39 + 0x10 + (longlong)puVar15) = uVar3;
                *(int *)(lVar39 + 0x14 + (longlong)puVar15) = -iVar5;
                lVar39 = lVar39 + 0x18;
              }
              uVar37 = uVar14 + 1;
            } while ((int)uVar37 < iVar41);
          }
          lVar18 = lVar39;
        } while (lVar16 != 0);
      }
      *param_6 = (double)iStack_80;
      *(uint *)(param_6 + 4) = uVar20;
      *(uint *)((longlong)param_6 + 0x24) = uVar19;
      *(uint *)(param_6 + 5) = (uStack_b0 - uVar20) + 1;
      *(uint *)((longlong)param_6 + 0x2c) = (uStack_c0 - uVar19) + 1;
      param_6[1] = (double)param_5;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      return 0;
    }
  }
  return 0xfffffff5;
code_r0x000140141c37:
  uVar37 = uVar37 + 1;
  lVar29 = lVar29 + 0x10;
  iVar1 = iVar42 + 0x10 + iVar12;
  iVar42 = iVar42 + 0x10;
  if ((uint)((uVar33 - lVar28) + -1 + ((ulonglong)((longlong)((uVar33 - lVar28) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar37) goto LAB_140141c54;
  goto LAB_140141c20;
code_r0x000140142197:
  uVar37 = uVar37 + 1;
  lVar28 = lVar28 + 0x10;
  uVar38 = (ulonglong)(uint)(iVar30 + 0x10 + iVar23);
  iVar30 = iVar30 + 0x10;
  if ((uint)((uVar33 - lVar29) + -1 + ((ulonglong)((longlong)((uVar33 - lVar29) + -1) >> 3) >> 0x3c)
            >> 4) <= uVar37) goto LAB_1401421b4;
  goto LAB_140142180;
code_r0x0001401426d7:
  uVar14 = uVar14 + 1;
  lVar28 = lVar28 + 0x10;
  uVar32 = (ulonglong)(uint)(iVar23 + 0x10 + iVar13);
  iVar23 = iVar23 + 0x10;
  if ((uint)(lVar29 + 0x10 + ((ulonglong)(lVar29 + 0x10 >> 3) >> 0x3c) >> 4) <= uVar14)
  goto LAB_1401426f4;
  goto LAB_1401426c0;
}

